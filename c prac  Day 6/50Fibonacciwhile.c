#include<stdio.h>

int main(){
    int num,x=0,y=1,z=0,i=1;
    printf("enter the number=");
    scanf("%d",&num);

    while(i<=num){
        printf("%d\t",z);
        x=y;
        y=z;
        z=x+y;
        i+=1;
    }

    return 0;
}