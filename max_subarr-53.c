#include<stdio.h>
int maxSubArray(int nums[],int n){
int currSum=nums[0];
int maxSum=nums[0];
for(int i=1;i<n;i++){
if(currSum<0)
currSum=nums[i];
else
currSum=currSum+nums[i];
if(currSum>maxSum)
maxSum=currSum;
}
return maxSum;
}

int main(){
int n;
printf("Enter size:");
scanf("%d",&n);
int nums[n];
printf("Enter elements:");
for(int i=0;i<n;i++)
scanf("%d",&nums[i]);
printf("Maximum Subarray Sum:%d",maxSubArray(nums,n));
return 0;
}
