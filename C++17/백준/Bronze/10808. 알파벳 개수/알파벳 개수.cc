#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string word;
    int alpha[26] = {};
    cin >> word;
    for ( int i = 0; i < word.size(); i++ ) {
        for ( int j = 0; j < 26; j++ ) {
            if ( word[i] - (97+j) == 0 )
                alpha[j]++;
        }
    }
    for ( int i = 0 ; i < 26; i++ )
        cout << alpha[i] << " ";
}