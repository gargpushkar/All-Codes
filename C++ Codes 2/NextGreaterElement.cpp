#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    stack<int>st;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	st.push(arr[0]);
	int ans[n];
	memset(ans,-1,sizeof(ans));
	for(int i=1;i<n;i++)
	{
		int next = arr[i];
		if(st.size()!=0)
		{
			int element = st.top();
			st.pop();
			int j=i;
			while(element < next)
			{
				ans[--j]=next;
				if(st.size()==0)
					break;
				element = st.top();
				st.pop();
			}
			if(element > next)
			{
				st.push(element);
			}
			st.push(next);
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
    return 0;
}

