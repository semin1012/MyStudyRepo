/*                         #### 9.30 여섯 번째 강의 ####                          */

#include "stdafx.h"
#include <time.h>


// 타입 재정의
typedef int INT;	// int 와 똑같다, 새로운 이름
// #define int INT;	// 위와 똑같은 의미인 것 같지만 아예 치환하는 것은 아님
// define 은 컴파일 중에 이름을 그저 바꾸는 것에 불과하다
// typedef 는 int 와 INT 두 개 모두 사용 가능하게 되는 것이다
// int, char, long 등의 기본 자료형 외의 자료형은 대부분 타입 재정의일 것이다


// 팩토리얼
int Factorial(int n) {
	int iReturn = 1;
	for (int i = 1; i <= n; ++i) {
		iReturn *= i;
	}
	return iReturn;
}

// 재귀함수(recursion)
// 수학적 귀납법
int Factorial_re(int n) {
	if (n == 1)
		return 1;
	return Factorial_re(n - 1) * n;
}

int main()
{	
	// clock_t => typedef long clock_t, 결국 long 과 같은 것이다
	// 자료형만 보고도 무엇을 저장하기 위한 변수인지 알 수 있어서 사용한다
	clock_t lPrevCount= clock();

	int n = 8;
	int iReturn = Factorial(10);

	clock_t lCurCount = clock();

	float fTime = (float)(lCurCount - lPrevCount) / 1000.f;

	printf("%d! 결과: %d\n", n, iReturn);
	printf("반복문을 처리하는 데 걸린 시간: %f\n", fTime);


	// INT a;

	//int A = 10;
	//int b = 10;
	//int d = 10;
	//int f = 10;

	//A = b + d;

	//f = A + d;

	// save("0714.cpp");
}

// Visual Studio
// ctrl + k, c			선택 영역 주석
// ctrl + k, f			선택 영역 줄 맞춤
// ctrl + r, r			선언된 변수명, 클래스(구조체) 명 일괄 변경
// alt + 드래그			영역 드래그

// ctrl + shift + f		특정 구문 찾기
// ctrl + shift + h		찾은 구문 변경하기

// alt + 드래그			영역 드래그

// f12					선언 위치로 이동
// f5					디버깅 모드로 시작(빌드 + 디버깅 모드 시작), 중단점을 만날 때까지...
// ctrl + f5			디버그 버전 프로그램 실행
// shift + f5			디버깅 중지
// f9					중단점 생성
// ctrl + shift + f9	중단점 모두 해제

// f10					디버깅 모드에서, 해당 함수 기준 1 라인 실행
// f11					디버깅 모드에서, 1 라인 실행 (함수 호출의 경우 내부로 진입)
