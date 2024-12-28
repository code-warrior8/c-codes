#include<stdio.h>
void average(int,int,int,int,int);
void main(){
    int a,b,c,d,e;
    printf("\n calculate  the average of 5 no");
    printf("\n enter 5 no:");
    scanf("%d %d%d%d%d",&a,&b,&c,&d,&e);
    average(a,b,c,d,e);
}
void average(int a,int b, int c,int d, int e){
    float avg;
    avg=(a+b+c+d+e)/5;
    printf("The avg of 5 no:%f",avg);
}