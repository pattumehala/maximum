#include<stdio.h>
int main()
{
int a[10],max,i;
printf("\nEnter the elements:%d");
for(i=0;i<=10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<=10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\n%d",max);
return 0;
}
