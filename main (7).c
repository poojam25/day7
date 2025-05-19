#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for (int i=1;i<x;i++){
        for(int j=i;j<6;j++){
        if (i%2==0) printf("hii ");
        if (j%2==0) printf(" hello");
        }printf(" \n");
}
}