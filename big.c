#include<stdio.h>
#define MAX 100
int big(int []);
int n;
void main()
{
int arr[MAX],bigelement,i;
printf("\n Enter the number of elements:");
	scanf("%d",&n);
printf("\n Enter %d elements in array",n);
for(i=0;i<n;i++)
	{
	printf("\n Element-%d:",i);
		scanf("%d",&arr[i]);
	}
	bigelement=big(arr[i]);
	printf("\n The biggest number in the give %d numbers is %d",n,bigelement);
}
int big(int arr[])
{
	int bigelement,i=1;
	bigelement=arr[0];
	while(i<n)
		{
			if(bigelement<arr[i])
				bigelement=arr[i];
			i++;
		}
return bigelement;
}
