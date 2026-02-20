#include<stdio.h>
int subtractProductAndSum(int n){
int sum=0;
int product=1;
while(n>0){
int digit=n%10;
sum=sum+digit;
product=product*digit;
n=n/10;
}
return product-sum;
}
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
printf("Result:%d",subtractProductAndSum(n));
return 0;
}
