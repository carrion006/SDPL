#include<stdio.h>
int getPrime(int);
void main()
{
	int n,pno;
	printf("\n Enter a number:");
	scanf("%d",&n);
	pno=getPrime(n);
	if(pno == 1)
	printf("\n \n %d is a prime number",n);
	else
		printf("\n \n %d is not a prime number",n);

}
int getPrime(int n)
{
	int i=2;
	while(i<=n/2)
	{
		if(n%i==0)
			return 0;
		else
			i++;

	}return 1;

}
