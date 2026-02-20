#include<stdio.h>
int isPowerOfTwo(int n){
if(n<=0)
return 0;
if((n&(n-1))==0)
return 1;
else
return 0;
}
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
if(isPowerOfTwo(n))
printf("true");
else
printf("false");
return 0;
}
