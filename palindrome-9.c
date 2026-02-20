#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int x){
if(x<0)
return false;
int original=x;
long rev=0;
while(x>0){
int digit=x%10;
rev=rev*10+digit;
x=x/10;
}
if(original==rev)
return true;
else
return false;
}

int main(){
int x;
printf("Enter number:");
scanf("%d",&x);
if(isPalindrome(x))
printf("True");
else
printf("False");
return 0;
}
