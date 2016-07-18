#include<stdio.h>
void main()
{
int ar[100],j,i,n,tmp;
printf("Enter the size of the array\t");
scanf("%d",&n);
printf("Now the elements in the array\t");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
printf("\n array is-");
for(j=0;j<n;j++)
{
if(ar[j]<ar[j+1])
{
tmp=ar[j+1];
ar[j+1]=ar[j];
ar[j]=tmp;
}
}
printf("\n\n array in the decoding order is-\n");
for(i=1;i<=n;i++)
{
printf("\t %d",ar[i]);
}
getch();
}
