#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for (int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
        printf("*");
        }printf("\n");
    }
    for(int i=x-1;i>=1;i--){
        for(int j=1;j<=i;j++ ){
            printf("*");
        }printf("\n");
    }
}