#include "header1.h"
extern int language;
extern int mf;

/*
    �����������Ƿ�������
    Check if the number is a prime number
*/

bool PmCheck(int number){
    int i;
    int count=0;
    int sqred=(int)sqrt(number);
    for(i=2;i<=sqred;i++){
        if(number%i==0){
            if(count==0){
                mf=i;
            }
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