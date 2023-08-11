/*
    จงแสดงผลตัวแปรทั้งหมดเรียงลำดับดังนี้ a b c d

    Output:
        10 20.0 Haha a
*/
#include <stdio.h>

int main(){
int a = 10 ;
float b = 20.0 ;
char c[] = "Haha" ;
char d = 'a' ;
printf( "_ _ _ _\n") ; 
scanf("%d",a ,b ,c ,d);
printf("10 20.0 Haha a\n", a ,b ,c ,d);
}//end main function