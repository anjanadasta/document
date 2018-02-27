#include<stdio.h>
main()
{
int a[' '],b[' '],i,n,j,k;
printf("Enter the numberb of elements : ");
scanf("%d",&n);
printf("enter the elements : ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
for(k=j;k<n;k++)
{
a[k]=a[k+1];
}
n--;
j--;
}
}
}
printf("After removing duplicate elements : ");
for(i=0;i<n;i++)
printf("%d",a[i]);
}
