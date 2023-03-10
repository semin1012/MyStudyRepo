//-----------------------------------------------------------------------------
// 2023년 C++ 공부, 시작하자! C++17 
// 
// 제 2 장, 변수와 데이터 타입
//-----------------------------------------------------------------------------
#include <iostream>
#include "save.h"

int main() 
{
	const char* testString = "이게맞나";
	char testString2[] = "되나";

	std::cout << testString << "   " << testString2 << std::endl;

	saveCpp();
}