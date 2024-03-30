#include "header1.h"
extern int language;
/*
    这个文件里的函数用来判断用户是否想要继续
    The function in this file is used to ask the user if they would like to continue using it
*/

bool ContinueCheck(){
    if(language==1){
        printf("Would you like to continue using the prime calculator?(Y = continue, others = end):");
    }
    else{
        printf("请问您是否还想继续使用素数计算器？(Y为继续，其他均为取消):");
    }
    char input[maxlength];
    scanf("%s",input);
    if(input[0]=='Y'||input[0]=='y'){
        system("cls");
        return true;
    }
    else{
        system("cls");
        return false;
    }
}