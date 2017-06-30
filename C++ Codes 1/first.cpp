

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void first(char a[10][10],char ch,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i][0]==ch)
		{
			if(isupper(a[i][2]))
			{
				first(a,a[i][2],n);
			}
			else if(a[i][2]=='$'&&a[i][3]=='\0')
			{
				
				printf("%c ",a[i][2]);
			}
			else
			{
				printf("%c ",a[i][2]);
			}
		}
	}
}
int main()
{
	int n,choice,i;
	printf("enter the number of productions epsilon is represented by $\n");
	char a[10][10]={'\0'};
	scanf("%d",&n);
while ((getchar()) != '\n');
	printf("enter the productions\n");
	for(i=0;i<n;i++)
	scanf("%s",a[i]);
while ((getchar()) != '\n');
	char ch;
	do
	{
		printf("\nenter the char whose first is to be found: ");
		scanf("%c",&ch);
while ((getchar()) != '\n');
		printf("\nThe first of symbol given is : ");
		first(a,ch,n);
		printf("\npress 1 to continue : ");
		scanf("%d",&choice);
while ((getchar()) != '\n');
	}
	while(choice==1);	
	return 0; 	
}
/*
#include<iostream>
using namespace std;

void first(char a[10][10], char ch, int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i][0] == ch)
		{
			if(isupper(a[i][2]))
			{
				first(a,a[i][2],n);
			}
			else if(a[i][2] == '$' && a[i][3] == '\0')
			{
				cout<<a[i][2]<<" ";
			}
			else
			{
				cout<<a[i][2]<<" ";
			}
		}
	}
}

int main()
{
	int n;
	cout<<"Enter the number of productions epsilon is represented by $ \n";
	cin>>n;
	char ar[10][10];
	cout<<"Enter the productions : \n";
	for(int i=0;i<n;i++)
	cin>>ar[i];
	char ch;
	do
	{
		cout<<"Enter the char whose first is to be found: ";
		cin>>ch;
		cout<<"First of the chacater is : \n";
		first(ar,ch,n);
		cout<<"\nPress 1 to continue : \n";
		cin>>ch;
	}while(ch=='1');
	return 0;
}

*/
