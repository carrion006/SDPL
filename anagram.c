#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Anagram(char *str1, char *str2);
void main()
{
	char str1[100],str2[100];
	printf("\n Enter the first string:");
	fgets(str1, sizeof str1, stdin);
	printf("\n Enter the second string:");
	fgets(str2, sizeof str2,stdin);
	if(Anagram(str1,str2) == 1)
	{
		str1[strlen(str1)-1]='\0';
		str2[strlen(str2)-1]='\0';
		printf("\n %s & %s are anagram",str1,str2);
	}
	else
	{
		str1[strlen(str1)-1]='\0';
		str2[strlen(str2)-1]='\0';
		printf("\n %s & %s are not anagram",str1,str2);	
	}
}
int Anagram(char *str1, char *str2)
{
	int str1chrctr[256]={0}, str2chrctr[256]={0};
	int ctr;
	// check the length of equality of strings
		if(strlen(str1)!=strlen(str2))
	{
		return 0;
	}
	// frequency count of str1
	for(ctr=0; str1[ctr]!='\0'; ctr++)
	{
		str1chrctr[str1[ctr]]++;
	}
	//frequency count of str2
	for(ctr=0; str2[ctr]!='\0';ctr++)
	{
		str2chrctr[str2[ctr]]++;
	}
	//compare character count on both
	for(ctr=0;ctr<256;ctr++)
	{
		if(str1chrctr[ctr]!=str2chrctr[ctr])
			return 0;
	}
	return 1;
}
