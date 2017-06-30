#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,o;
        cin>>n>>m>>o;
        int ar1[n],ar2[m],ar3[o];
        for(int i=0;i<n;i++)
            cin>>ar1[i];
        for(int i=0;i<m;i++)
            cin>>ar2[i];
        for(int i=0;i<o;i++)
            cin>>ar3[i];
        int i=0,j=0,k=0; int f=0;
        while(i<n && j<m && k<o)
        {
            if(ar1[i] == ar2[j] && ar2[j] == ar3[k])
            {
                cout<<ar1[i]<<" ";
                i++;
                j++;
                k++;
                f=1;
            }
            else if(ar1[i] < ar2[j] || ar1[i] < ar3[k])
            {
                i++;
            }
            else if(ar2[j] < ar1[i] || ar2[j] < ar3[k])
            {
                j++;
            }
            else if(ar3[k] < ar2[j] || ar2[k] < ar1[i])
            {
                k++;
            }
        }
        if(!f)
            cout<<"-1";
        cout<<"\n";
    }
	return 0;
}
