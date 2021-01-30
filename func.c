//
//  func.c
//  cLanguege
//
//  Created by 김주형 on 1/27/21.
//

#include <stdio.h>
int input_data(void){
    int num;
    printf("정수 입력 : ");
    scanf("%d", &num);
    return num;
}

int cmp_big(int n1, int n2){
    int big;
    if(n1>n2){
        big = n1;
    }
    else{
        big = n2;
    }
    return big;
}
void output_big(int n1,int n2, int b){
    printf("%d, %d 중 큰 수 : %d\n",n1,n2,b);
    
}


int main(void){
    /* 정수 1개를 입력받는 함수 구현
     위의 함수를 통해 변수 2개 초기화
     두 수를 전달받아 더 큰수를 반환하는 함수 구현.
     출력 함수 구현
     
     출력예시) 10,2 중 큰 수 : 10*/
    int num1 = input_data();
    int num2 = input_data();

    int big = cmp_big(num1, num2);
    output_big(num1, num2, big);
    return 0;
}
