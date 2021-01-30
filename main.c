//
//  main.c
//  cLanguege
//
//  Created by 김주형 on 1/27/21.
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int make_total(int num1, int num2);
void line(void);
int plus_100(int num);
void  output_data(int num);
int input_data(void);


int main(void) {
//    int ar[2][3] = {{10,20,30} , {40,50,60}};
//    printf("ar[0][1]:%d\n",ar[0][1]);
//
//    ar[0][1] = 70;
//    printf("ar[0][1]:%d\n",ar[0][1]);
    
//    int ar[][3] = {10,20,30,40,50,60};// 행의 생략은 가능하다. 하지만 둘 다 적는 것이 좋다.
//    int ar2[2][] = {10,20,30,40,50,60}; //열의 생략은 불가능하다.
//
//    int ar[2][3] = {{10},{40}}; //나머지 데이터 0으로 초기화.
//
//    int ar2[2][3];// 나머지 데이터 쓰레기 값.
//    ar2[0][0] = 10;
//    ar2[1][0] = 40;
    
    
//    int ar[3][4];
//
//    int row = sizeof(ar) / sizeof(ar[0]);
//    int col = sizeof(ar[0]) / sizeof(ar[0][0]);
//    //데이터 입력 후 출력.
//    /*
//     [0][0]
//     [0][1]
//     [0][2]
//     [1][0]
//     [1][1]
//     [1][2]
//     */
//    for (int i=0; i < row; i++){
//        for(int j=0; j<col; j++){
//            printf("ar[%d][%d] 입력: :",i,j);
//            scanf("%d",&ar[i][j]);
//        }
//    }
//    for (int i=0; i<row; i++){
//        for(int j=0; j<col; j++){
//            printf("ar[%d][%d]: %d\n",i,j,ar[i][j]);
//        }
//    }
    
    /*
     1  2  3  4  5
     6  7  8  9  10
     11 12 13 14 15
     16 17 18 19 20
     21 22 23 24 25
     
     */
//
//    int ar[5][5];
//
//    int num = 1;
//
//    for(int i=0; i<5; i++){
//        for(int j=0; j<5; j++){
//            ar[i][j] = num++;
//        }
//    }
//    for(int i=0; i<5; i++){
//        for(int j=0; j<5; j++){
//            printf("%3d",ar[i][j]);
//        }
//        printf("\n");
//    }
//
     
    /*
     25 24 23 22 21
     20 19 18 17 16
     15 14 13 12 11
     10  9  8  7  6
     5   4  3  2  1
    
     1  6 11 16 21
     2  7 12 17 22
     3  8 13 18 23
     4  9 14 19 24
     5  10 15 20 25
     
     */
    
     
//        int ar[5][5];
//
//        int num = 25;
//
//        for(int i=0; i<5; i++){
//            for(int j=0; j<5; j++){
//                ar[i][j] = num--;
//            }
//        }
//        for(int i=0; i<5; i++){
//            for(int j=0; j<5; j++){
//                printf("%3d",ar[i][j]);
//            }
//            printf("\n");
//        }
 
//        int ar[5][5];
//
//        int num;
//
//        for(int i=0; i<5; i++){
//            num = i+1;
//            for(int j=0; j<5; j++){
//                ar[i][j] = num;
//                num += 5;
//        }
//        }
//        for(int i=0; i<5; i++){
//            for(int j=0; j<5; j++){
//                printf("%3d",ar[i][j]);
//
//            }
//
//            printf("\n");
//        }
     
     
     //문자열 함수
//    char str[20] = "ABCD";
//    printf("str: %s\n",str);
//
//    //str = "abcd";
//    //str[20] = "abcd";
//    strcpy(str,"abcd");
//    printf("str : %s\n",str);
//
//    printf("str의 크기 : %d\n", sizeof(str));
//    printf("str의 길이 : %d\n", strlen(str));
//
//    char str1[20] = "ABCD";
//    char str2[20] = "ABCD";
//
////    if(str1 == str2){
//    if(!strcmp(str1,str2)){ // strcmp에서의 비교는 문자열 하나하나 비교를 해서 차이가 없으면 0을 반환하여 다릅니다를 출력하지만
//        //결과적으로 같다는 말을 의미함. 그래서 느낌표를 작성하여 주로 사용함.
//        printf("같습니다.\n");
//    }
//    else {
//        printf("다릅니다.\n");
    //}
    // 문자열같은 경우 이름으로 비교 불가. 주소가 다름으로...
    
    
    
    
    int sel;
    while(1){
    printf("1. 저장\n");
    printf("2. 수정\n");
    printf("3. 삭제\n");
    printf("0. 프로그램 종료\n");
        printf("선택 >>>");
    scanf("%d",&sel);

    switch(sel){
        case 1:
            printf("저장메뉴 선택\n");
            break;
        case 2:
            printf("수정메뉴 선택\n");
            break;
        case 3:
            printf("삭제메뉴 선택\n");
            break;
        case 0:
            printf("프로그램 종료 선택\n");
            exit(0);
        default:
            printf("잘못입력했슴니다");
            break;

    }
        system("read");//일시정지
        system("cls");//화면 삭제
    }
    
    
    
//     // 함수 = function = 기능
//    int num1,num2,total;
//    
//    num1 = input_data();
//    output_data(num1);  //인자 or 인수
//    
//    num1 = plus_100(num1);
//    output_data(num1);
//    
//    line();
//    
//    num2 = input_data();
//    output_data(num2);  //인자 or 인수
//   
//    line();
//    total = make_total(num1,num2);
//    output_data(total);
//    
    
    return 0;
}



//======================= 함수 정의
int make_total(int num1, int num2){
//    int total = num1 +num2;
//    return total;
    return num1 + num2 ;
}


void line(){
    printf("================\n");

}


int plus_100(int num){
    num += 100;
    return num;
}


void  output_data(int num){     //매개변수
    printf("%d\n",num);
}


int input_data(){
    int num;
    printf("정수 입력 : ");
    scanf("%d",&num);
    return num;
}
