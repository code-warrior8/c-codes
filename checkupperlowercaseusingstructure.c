#include<stdio.h>
#include<string.h>
struct character{
    char ch;
};
int main(){
    struct character chr;
    printf("Enter character:");
    scanf("%c",&chr.ch);
    if(chr.ch>'A'&& chr.ch<'Z'){
        printf("Upper case"); 
    }else{
        printf("Lower case");
    }
return 0;
}
