#include "header1.h"
extern int language;

/*
    检查一个数是否为素数
    Check if the number is a prime number
*/

bool PmCheck(int number){
    int i;
    int count=0;
    for(i=2;i<=sqrt(number);i++){
        if(number%i==0){
            count++;
        }
    }
    if(count==0){
        return true;
    }
    else{
        return false;
    }
}