//
//  func3.c
//  cLanguege
//
//  Created by 김주형 on 1/27/21.
//

#include <stdio.h>
int input_num(){
    int num;
    printf("정수입력:");
    scanf("%d",&num);
    return num;
}

char input_char(){
    char op;
    getchar();
    printf("연산자 입력: ");
    scanf("%c", &op);
    return op;
}


void calc_num(int n1,int n2, char op){
    
    switch (op) {
        case '+':
            printf("%d + %d =%d\n", n1,n2,n1+n2);
            break;
        case '-':
            printf("%d - %d =%d\n", n1,n2,n1-n2);
            break;
        case '*':
            printf("%d * %d =%d\n", n1,n2,n1*n2);
            break;
        case '/':
            if (n2 ==0){
                printf("0으로 나눌 수 없습니다.\n");
            }else{
                printf("%d / %d =%d\n", n1,n2,n1/n2);
            }
            break;
        case '%':
            if (n2 ==0){
                printf("0으로 나눌 수 없습니다.\n");
            }else{
                printf("%d %% %d =%d\n", n1,n2,n1%n2);
            }
        default:
            printf("잘못 입력하셨습니다.\n");
            break;
    }
        
}


int main(void){
    /* 계산기
     정수 2개 입력, 연산자 입력
     연산자에 따른 계산식
     */
    int num1, num2;
    char op;
    
    num1 = input_num();
    num2 = input_num();
    
    op = input_char();
    
    calc_num(num1, num2, op);
    
    
    return 0;
}
