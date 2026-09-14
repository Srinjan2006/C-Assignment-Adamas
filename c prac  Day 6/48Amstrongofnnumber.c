#include<stdio.h>
#include<math.h>

int main(){
    int num,count=0,rev=0;
    printf("enter the number=");
    scanf("%d",&num);
    int x=num;
    int orig=num;
    while(num!=0){
        count+=1;
        num=num/10;
    }
     while(x!=0){
        int rem=x%10;
        rev=rev+pow(rem,count);
        x/=10;
    }
    if(rev==orig){
        printf("number is a Armstrong");
    }
    else{
        printf("number is not Armstrong");
    }

    return 0;
}