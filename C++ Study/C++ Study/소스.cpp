///*                         #### 9.23 네 번째 강의 ####                          */
//
//#include "stdafx.h"
//
//// 출혈
//// 방어력 감소
//// 이동속도 감소
//// 공포
//
//// 공격력 증가
//// 방어력 증가
//// 이동속도 증가
//// 공격속도 증가
//
//#define BLEEDING    1
//#define DEF_DOWN    2
//#define SPD_DOWN    4
//#define TERRIFIED   8   
//
//#define ATT_UP      16  
//#define DEF_UP      32
//#define SPD_UP      64  
//#define ATT_SPD_UP  128
//// 비트의 각 자리수에 해당되는 숫자들이다.
//
//// define 도 전처리다. 
//// BLEEDING 이라 정의해 두었기 때문에 후에 수정하기가 용이하다.
//// 유지 보수에 이득이 많다.
//
//int main()
//{
//    // 정수 : char(1), short(2), int(4), long(4), long long(8)
//    // 실수 : float(4), double(8)
//
//    // <<, >>
//    // 비트 이동
//    // 2의 승수 단위로 자리수 변경
//    // a << n == a * 2^n
//    // a >> n == a / 2^n (몫)
//    
//    // ↓ 4 번째 강의
//    
//    // 전처리기
//    // 코드를 컴파일 하기 전에 먼저 수행됨
//    // #include 
//    // #define 
//
//    {   // 지역 안에 정의된 애가 우선순위가 더 높다.
//        unsigned char status = 0;   // 8비트, 비트 하나하나에 버프를 저장해 둘 것이다. 
//
//        status = status | BLEEDING;
//        // status |= BLEEDING; 와 같다.
//        status |= DEF_DOWN;
//        
//        if (status & BLEEDING) // 결과가 0 이 아니라면 TRUE.
//            printf("캐릭터가 출혈에 의해서 -10 데미지를 당했습니다.\n");
//        if (status & SPD_UP)
//            printf("캐릭터의 이동속도가 20 % 증가하였습니다.\n");
//        
//        status &= ~BLEEDING;    // BLEEDING 을 반전한 다음 비트 AND. 디버프 빼기.
//
//        if (status & BLEEDING)
//            printf("캐릭터가 출혈에 의해서 -10 데미지를 당했습니다.\n");
//        
//
//    }
//
//   // save("소스.cpp");
//}