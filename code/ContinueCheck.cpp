#include "header1.h"
extern int language;
/*
    ����ļ���ĺ��������ж��û��Ƿ���Ҫ����
    The function in this file is used to ask the user if they would like to continue using it
*/

bool ContinueCheck(){
    if(language==1){
        printf("Would you like to continue using the prime calculator?(Y = continue, others = end):");
    }
    else{
        printf("�������Ƿ������ʹ��������������(YΪ������������Ϊȡ��):");
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