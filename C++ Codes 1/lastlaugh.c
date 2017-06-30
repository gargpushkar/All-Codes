#include<stdio.h>
void prorateEte(int m[])
{
	int i;
	for(i=0;i<5;i++)
		m[i] = m[i]*(float)50/70;
}
void prorateMte(int m[])
{
	int i;
	for(i=0;i<5;i++)
		m[i] = m[i]*(float)25/40;
}
int prorateCa(int m, int n)
{
	int a;
	a=m*(float)20/(n*30);
	return a;
}
void enterCaMarks(int arr[],int n)
{
	int j;
	for(j=0;j<n;j++)
	{
		printf("Enter %d CA marks : ",j+1);
		scanf("%d",&arr[j]);
	}
}
int bestOf(int arr[], int n, int m)
{
	int ans=0,i;
	for(i=n-1;i>=n-m;i--)
		ans+=arr[i];
	return ans;
}
void sortArray(int array[],int n)
{
	int x,y;
	for(x=0; x<n; x++)
		for(y=0; y<n-1; y++)
			if(array[y]>array[y+1])
			{
				int temp = array[y+1];
				array[y+1] = array[y];
				array[y] = temp;
			}
}
void attendanceMark(int arr[])
{
	int marks,n,i;
	for(i=0;i<5;i++)
	{
		n=arr[i];
		if(n>=75 && n<80)		marks=2;
		else if(n>=80 && n<85)	marks=3;
		else if(n>=85 && n<90)	marks=4;
		else if(n>=90 && n<=100)marks=5;
		else					marks=0;
		arr[i]=marks;
	}
}
void display(char name[],int att,int ca,int m,int e,int n)
{
	printf("Subject Code : %s\n",name);
	printf("Attendance :	%d\n",att);
	printf("CA marks (out of %d): %d\n",n,ca);
	printf("Mid-Term Marks (out of 25): %d\n",m);
	printf("End-Term Marks (out of 50): %d\n",e);
}
int main()
{
	int nn[8],mm[8],regno,i,j,subjno,mte[5],subjatt[5],ete[5],ca1[8],ca2[8],ca3[8],ca4[8],ca5[8],n,m; 
	int camarks[5],totalmarks[5];
	float cgpa,percentage,totmarks=0;
	char name[20],subj1[6],subj2[6],subj3[6],subj4[6],subj5[6];
	printf("Enter the registration number of the student : ");		scanf("%d",&regno);
	printf("Enter the first name of the student : ");				scanf("%s",name);
	printf("Enter the subject code like (CSE101) : ");				scanf("%s",&subj1);
	printf("Enter the subject code like (CSE101) : ");				scanf("%s",&subj2);
	printf("Enter the subject code like (CSE101) : ");				scanf("%s",&subj3);
	printf("Enter the subject code like (CSE101) : ");				scanf("%s",&subj4);
	printf("Enter the subject code like (CSE101) : ");				scanf("%s",&subj5);
	for(i=0;i<5;i++)
	{
		printf("Enter the  attendance of the %d subjects : ",i+1);
		scanf("%d",&subjatt[i]);
	}
	attendanceMark(subjatt);
	printf("Enter n and m for subject 1: ");	scanf("%d",&n);		scanf("%d",&m);		nn[0] = n;	mm[0] = m;
	enterCaMarks(ca1,n);	sortArray(ca1,n);	camarks[0] = bestOf(ca1,n,m);	camarks[0]=prorateCa(camarks[0],m);
	printf("Enter n and m for subject 2: ");	scanf("%d",&n);		scanf("%d",&m);		nn[1] = n;	mm[1] = m;
	enterCaMarks(ca2,n);	sortArray(ca2,n);	camarks[1] = bestOf(ca2,n,m);	camarks[1]=prorateCa(camarks[1],m);
	printf("Enter n and m for subject 3: ");	scanf("%d",&n);		scanf("%d",&m);		nn[2] = n;	mm[2] = m;
	enterCaMarks(ca3,n);	sortArray(ca3,n);	camarks[2] = bestOf(ca3,n,m);	camarks[2]=prorateCa(camarks[2],m);
	printf("Enter n and m for subject 4: ");	scanf("%d",&n);		scanf("%d",&m);		nn[3] = n;	mm[3] = m;
	enterCaMarks(ca4,n);	sortArray(ca4,n);	camarks[3] = bestOf(ca4,n,m);	camarks[3]=prorateCa(camarks[3],m);
	printf("Enter n and m for subject 5: ");	scanf("%d",&n);		scanf("%d",&m);		nn[4] = n;	mm[4] = m;
	enterCaMarks(ca5,n);	sortArray(ca5,n);	camarks[4] = bestOf(ca5,n,m);	camarks[4]=prorateCa(camarks[4],m);
	for(i=0;i<5;i++)
	{
		printf("Enter the Mid Term Marks %d subject : ",i+1);
		scanf("%d",&mte[i]);
	}
	prorateMte(mte);
	for(i=0;i<5;i++)
	{
		printf("Enter the End Term Marks %d subject : ",i+1);
		scanf("%d",&ete[i]);
	}
	prorateEte(ete);
	for(i=0;i<5;i++)
	{
		totalmarks[i]=mte[i]+ete[i]+camarks[i]+subjatt[i];
		totmarks+=totalmarks[i];
	}
	percentage = totmarks/5;
	cgpa= percentage/9;
	printf("-------------------------------RESULT---------------------------------------\n");
	printf("Registration Number of the student  : %d\n",regno);
	printf("Name of the student                 : %s\n",name);
	printf("------------------------Subject1----------------------------\n");
	display(subj1,subjatt[0],camarks[0],mte[0],ete[0],mm[0]);
	printf("------------------------Subject2----------------------------\n");
	display(subj2,subjatt[1],camarks[1],mte[1],ete[1],mm[1]);
	printf("------------------------Subject3----------------------------\n");
	display(subj3,subjatt[2],camarks[2],mte[2],ete[2],mm[2]);
	printf("------------------------Subject4----------------------------\n");
	display(subj4,subjatt[3],camarks[3],mte[3],ete[3],mm[3]);
	printf("------------------------Subject5----------------------------\n");
	display(subj5,subjatt[4],camarks[4],mte[4],ete[4],mm[4]);
	printf("Percentage : %f\n",percentage);
	printf("CGPA : %f",cgpa);
	return 0;	
}
