#include "header1.h"
int language=0;

int main(){
    char input[maxlength];
    SetLanguage();
    system("cls");
    start:DisplayStart();
    scanf("%s",input);
    int num;
    num=atoi(input);
    if(num<=1){
        NumOutOfStrict();
        goto start;
    }
    else{
        bool ck=PmCheck(num);
        if(ck==true){
            IsPrime(num);
        }
        else{
            NotPrime(num);
        }
    }
    system("cls");
    bool ctck=ContinueCheck();
    if(ctck==true){
        goto start;
    }
    else{
        SeeYou();
    }
    system("pause");
    return 0;
}