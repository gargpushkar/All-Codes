#include <bits/stdc++.h>
using namespace std;

map<long long, int>mp;
int poop(int n)
{
    if(n==1)
        return 0;
    if(n&1)
    {
        if(mp.find(n)==mp.end())
        {
            mp[n] = 1 + poop(3*n+1);
        }
        else
            return mp[n];
    }
    else
    {
        if(mp.find(n)==mp.end())
        {
           mp[n] = 1 + poop(n/2); 
        }
        else
            return mp[n];
    }
    return mp[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	clock_t begin = clock();
        int n;
        cin>>n;
        int ans=0,in=0;
        for(int i=2;i<=n;i++)
        {
            int a = poop(i);
            if(a >= ans)
            {
                ans=a;
                in=i;
            }
        }
        cout<<in<<"\n";
 	    clock_t end = clock();
  		double elapsed_secs = double(end - begin);
		cout<<"Time passed : "<<elapsed_secs<<"\n";
    }
    map<long long , int> :: iterator it;
 /*   for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<"\n";
    }*/
    return 0;
}
/*
5
78542
12500
12400
55000
51200
*/

