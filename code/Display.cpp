#include "header1.h"
extern int language;

/*
    这个文件是用来展示输出的
    为什么那么简单的东西需要添加一个文件呢？
    我很喜欢一句话叫做“给屎盆子镶金边”
    This file is used to display the output content
    Why does a super simple thing need to open such an additional file?
    I really like a saying that goes, "Set a golden border on a poop bowl".
*/

void SetLanguage(){
    st:printf("Choose a language(1:English,2:中文):");
    char input[maxlength];
    scanf("%s",input);
    if(input[0]=='1'){
        language=1;
    }
    else if(input[0]=='2'){
        language=2;
    }
    else{
        printf("pleast input '1' or '2'\n");
        system("pause");
        system("cls");
        goto st;
    }
}

void DisplayStart(){
    if(language==1){
        printf("\nPlease input an integer bigger than 1 and less than 2147483647:\n");
    }
    else{
        printf("请输入一个大于1小于2147483647的整数：");
    }
}

void NumOutOfStrict(){
    if(language==1){
        printf("\nPlease input an integer bigger than 1 and less than 2147483647!\n");
    }
    else{
        printf("请输入一个大于1小于2147483647的整数！\n");
    }
    system("pause");
    system("cls");
}

void IsPrime(int number){
    if(language==1){
        printf("%d is a prime number\n",number);
    }
    else{
        printf("\n%d是素数\n",number);
    }
    system("pause");
    system("cls");
}

void NotPrime(int number){
    if(language==1){
        printf("%d is not a prime number\n",number);
    }
    else{
        printf("\n%d不是素数\n",number);
    }
    system("pause");
    system("cls");
}

void SeeYou(){
    if(language==1){
        printf("See you next time!\n");
    }
    else{
        printf("下次再见！\n");
    }
}