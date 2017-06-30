#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
//	while(t--)
	{
		string s;
		cin>>s;
		int n;
		cin>>n;
		char arr[t];
		n=n%26;
		for (int i=0;i<t;i++)
 		{
	        if (isupper(s[i]))
	            arr[i] = char(int(s[i] + n -65)%26 +65);
		    else if(islower(s[i]))
		        arr[i] = char(int(s[i] + n -97)%26 +97);
		    else
		    	arr[i] = s[i];
			cout<<arr[i];
		}
		
	}
}
