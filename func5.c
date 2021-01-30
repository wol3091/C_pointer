//
//  func5.c
//  cLanguege
//
//  Created by 김주형 on 1/30/21.
//

#include <stdio.h>


void func(){
    int a = 100;
    printf("%d\n",a);
}

int main(){
    // 지역변수 : 특정 지역 내에서 선언된 변수
    //          해당 지역에서만 사용이 가능
    // 전역변수 : 어디에도 속해있지 않은 변수
    //          어디에서든 사용이 가능.
    
    
    int a = 10;
    printf("%d\n",a);
    func();
    
    
    
}
