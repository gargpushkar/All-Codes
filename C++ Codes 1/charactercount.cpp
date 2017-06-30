#include <bits/stdc++.h>
using namespace std;

int main()
{
/*    ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    string st;
    cin>>st;
    int arr[26];
    memset(arr,0,sizeof(arr));
    for(int i=0;st[i];i++)
    	arr[st[i] - 'a']++;
    for(int i=0;i<26;i++)
    	if(arr[i]>0)
    		cout<<char(97+i)<<arr[i];
	return 0;
}

