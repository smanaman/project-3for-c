#include<stdio.h>
int main(){
    int n;
    int sum;
    int count=0;
    printf("Enter your number i give you how many number in your number\n");
     printf("Enter your number\n");
     scanf("%d\n",&n);

while(n!=0){
    count ++;
    n/=10;
}
printf(" your count is%d\n",count);


}