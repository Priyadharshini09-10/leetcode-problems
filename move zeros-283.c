#include<stdio.h>
void moveZeroes(int nums[],int n){
int k=0;
for(int i=0;i<n;i++){
if(nums[i]!=0){
nums[k]=nums[i];
k++;
}
}
for(int i=k;i<n;i++){
nums[i]=0;
}
}

int main(){
int n;
printf("Enter size:");
scanf("%d",&n);
int nums[n];
printf("Enter elements:");
for(int i=0;i<n;i++)
scanf("%d",&nums[i]);
moveZeroes(nums,n);
printf("After moving zeroes:\n");
for(int i=0;i<n;i++)
printf("%d ",nums[i]);
return 0;
}
