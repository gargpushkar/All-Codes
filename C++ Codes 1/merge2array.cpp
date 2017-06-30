#include<bits/stdc++.h>

using namespace std;

void merge(int ar1[], int ar2[], int n , int m)
{
	int ar3[n+m];
	int i,j,ci=0,cj=0;
	i=0;j=0;
	int k=0;
	for(;k<n+m;k++)
	{
		if(i>=n)
		{
			ci=1;
			break;
		}
		if(j>=m)
		{
			cj=1;
			break;
		}
		if(ar1[i] <= ar2[j])
		{
			ar3[k] = ar1[i];
			i++;
		}
		else
		{
			ar3[k] = ar2[j];
			j++;
		}
	}
	if(ci==1)
	{
		for(;k<m+n;k++)
		{
			ar3[k]=ar2[j++];
		}
	}
	if(cj==1)
	{
		for(;k<m+n;k++)
		{
			ar3[k] = ar1[i++];
		}
	}
	for(int i=0;i<n+m;i++)
	{
		cout<<ar3[i]<<endl;
	}
}

int main()
{
	int n, m;
	cin>>n;
	int ar1[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar1[i];
	}
	cin>>m;
	int ar2[m];
	for(int i=0;i<m;i++)
	{
		cin>>ar2[i];
	}
	merge(ar1,ar2,n,m);
}
