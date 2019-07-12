#include<stdio.h>

int main()
{
int n,i=0,x;
printf("enter size of array");
scanf("%d",&n);

int arr[100];
//arr=(int*)malloc(n*sizeof(int));

printf("enter value in array");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("enter no. to be searched");
scanf("%d",&x);

for(i=0;i<n;i++)
{
if(arr[i]==x)
{
printf("%d",i);
}
}

}
