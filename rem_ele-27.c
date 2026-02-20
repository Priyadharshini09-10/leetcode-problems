#include<stdio.h>
int removeElement(int nums[],int n,int val){
int k=0;
for(int i=0;i<n;i++){
if(nums[i]!=val){
nums[k]=nums[i];
k++;
}
}
return k;
}

int main(){
int n,val;
printf("Enter size:");
scanf("%d",&n);
int nums[n];
printf("Enter elements:");
for(int i=0;i<n;i++)
scanf("%d",&nums[i]);
printf("Enter value to remove:");
scanf("%d",&val);
int k=removeElement(nums,n,val);
printf("Remaining count:%d\n",k);
printf("Array after removing:\n");
for(int i=0;i<k;i++)
printf("%d ",nums[i]);
return 0;
}
