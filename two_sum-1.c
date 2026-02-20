#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums,int numsSize,int target){
int* result=(int*)malloc(2*sizeof(int));
for(int i=0;i<numsSize;i++){
for(int j=i+1;j<numsSize;j++){
if(nums[i]+nums[j]==target){
result[0]=i;
result[1]=j;
return result;
}
}
}
return result;
}

int main(){
int n,target;
printf("Enter size:");
scanf("%d",&n);
int nums[n];
printf("Enter elements:");
for(int i=0;i<n;i++)
scanf("%d",&nums[i]);
printf("Enter target:");
scanf("%d",&target);
int* ans=twoSum(nums,n,target);
printf("Indices:%d %d",ans[0],ans[1]);
free(ans);
return 0;
}
