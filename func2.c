//
//  func2.c
//  cLanguege
//
//  Created by 김주형 on 1/27/21.
//
#include <stdio.h>

int input_time(){
    int time;
    printf("정수입력: ");
    scanf("%d",&time);
    return time;
}

void output_time(int time, int hour, int min){
    printf("입력된 %d분은 %d시간 %d분입니다.\n",time,hour,min);
}


void change_time(int time){
    int hour, min;
    hour = time /60;
    min = time % 60;
    
    output_time(time, hour, min);
}





int main(){
    /* 분 입력받는 함수 구현
     변환하는 함수 구현
     출력하는 함수 구현
     입력한 100분은 1시간 40분입니다.
     */
    int time;
    time = input_time();
    change_time(time);
    
    return 0;
}
