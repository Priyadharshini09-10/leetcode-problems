#include<stdio.h>
int removeDuplicates(int nums[],int n){
if(n==0)
return 0;
int i=0;
for(int j=1;j<n;j++){
if(nums[j]!=nums[i]){
i++;
nums[i]=nums[j];
}
}
return i+1;
}

int main(){
int nums[]={0,0,1,1,1,2,2,3,3,4};
int n=sizeof(nums)/sizeof(nums[0]);
int k=removeDuplicates(nums,n);
printf("Unique count:%d\n",k);
printf("Array after removing duplicates:\n");
for(int i=0;i<k;i++)
printf("%d ",nums[i]);
return 0;
}
