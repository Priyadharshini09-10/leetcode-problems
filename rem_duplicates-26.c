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
int n;
printf("Enter size:");
scanf("%d",&n);
int nums[n];
printf("Enter sorted elements:");
for(int i=0;i<n;i++)
scanf("%d",&nums[i]);
int k=removeDuplicates(nums,n);
printf("Unique count:%d\n",k);
printf("Array after removing duplicates:\n");
for(int i=0;i<k;i++)
printf("%d ",nums[i]);
return 0;
}
