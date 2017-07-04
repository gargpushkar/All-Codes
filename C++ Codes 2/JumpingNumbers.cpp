#include <bits/stdc++.h>
using namespace std;

void bfs(int x,int num)
{
	queue<int>q;
	q.push(num);
	while(!q.empty())
	{
		num = q.front();
		q.pop();
		if(num<=x)
		{
			cout<<num<<" ";
			int d=num%10;
			if(d==0)
				q.push(num*10 + d+1);
			else if(d==9)
				q.push(num*10 + d-1);
			else
			{
				q.push(num*10 +d-1);
				q.push(num*10 +d+1);
			}
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	cout<<0<<" ";
    	for(int i=1;i<=9 && i<=n;i++)
    	{
    		bfs(n,i);
		}
		cout<<"\n";
	}
    return 0;
}

