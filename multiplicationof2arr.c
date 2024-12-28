#include<stdio.h>
int main(){
    int a[100][100],b[100][100],result[100][100];
    printf("Enter element\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++){
            printf("enter a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        
    }
    printf("enter element of 2nd matrix\n");
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++){
        printf("enter b%d%d: ",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++){
        result[i][j]=a[i][j]*b[i][j];
    }
    printf("\nSum of matrix:\n");
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++){
        printf("%d\t",result[i][j]);
        if(j==1)
            printf("\n");
        
    }
    return 0;
}
