#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string num1,num2;
    cin>>num1>>num2;
    int n=num1.length();
    int m=num2.length();
    int i=n-1,j=m-1;
    string ans="";
    int r=0;
    while(i>=0 &&j>=0)
    {
    	int a=num1[i];
    	int b=num2[j];
    	int c=a+b+r;
    	int d = c%10;
    	ans = (char)d + ans;
    	r = c/10;
    	i--;
    	j--;
	}
	cout<<ans;
    return 0;
}

