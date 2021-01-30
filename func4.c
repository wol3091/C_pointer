//
//  func4.c
//  cLanguege
//
//  Created by 김주형 on 1/29/21.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#define SYSTEM system("pause"); system("cls");

int is_zero(int num2){
//    if(num2 ==0){
//        return 1;
//    }
//    else{
//        return 0;
//    }
    return num2 == 0;
}

void plus(int num1, int num2){
    printf("%d + %d = %d\n",num1,num2, num1+num2);
    return;
}
void min(int num1, int num2){
    printf("%d - %d = %d\n",num1,num2, num1-num2);
    return;
}
void multi(int num1, int num2){
    printf("%d * %d = %d\n",num1,num2, num1*num2);
    return;
}
void dive(int num1, int num2){
    printf("%d / %d = %d\n",num1,num2, num1/num2);
    return;
}

int input_num(){
    int num;
    printf("정수 입력 :");
    scanf("%d", &num);
    return num;
}
void rem(int num1, int num2){
    printf("%d %% %d = %d\n",num1,num2, num1%num2);
    return;
}

int menu(){
    int sel;
    printf("1.덧셈\n");
    printf("2.뺄셈\n");
    printf("3.곱셈\n");
    printf("4.나눗셈\n");
    printf("5.나머지\n");
    printf("0.프로그램 종료\n");
    printf("선택 >>>");
    scanf("%d", &sel);
    return sel;
}

int main(){
    int sel;
    int num1, num2;
    
    
    while (1){
        sel = menu();
        if (sel == 0){
            printf("프로그램 종료\n");
            exit(0);
        }
        
        if (sel <1 || 5 <sel){
            printf("잘못 입력했습니다.\n");
            continue; //다시 위로 올라가서 실행
        }
        
        num1 = input_num();
        num2 = input_num();
        
        
        switch(sel){
            case 1:
                plus(num1,num2);
                break;
            case 2:
                min(num1,num2);
                break;
            case 3:
                multi(num1,num2);
                break;
            case 4:
                if (is_zero(num2)){
                    printf("0으로 나눌 수 없습니다.\n");
                    continue;
                }
                dive(num1,num2);
                break;
            case 5:
                if (is_zero(num2)){
                    printf("0으로 나눌 수 없습니다.\n");
                    continue;
                }
                rem(num1,num2);
                break;
        }
         
        
    }
    return 0;
}
