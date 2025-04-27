#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int alpha[26] = {};
    string word;
    cin >> word;
    for (int i = 0; i < word.size(); i++)
        alpha[word[i] - 'a']++;
    for (int i = 0; i < 26; i++)
        cout << alpha[i] << " ";
}