#include <bits/stdc++.h>
using namespace std;

int minSteps(int x1,int y1, int x2,int y2)
{
	if(x1==y1 && x2==y2)
		return 1;
	if(x1>x2 || y1>y2 || x1<0 || y1 <0)
		return 0;
	else 
		return (1 + min(minSteps(x1,y1+1,x2,y2),min(minSteps(x1,y1-1,x2,y2),min(minSteps(x1+1,y1+1,x2,y2),min(minSteps(x1+1,y1,x2,y2),min(minSteps(x1+1,y1-1,x2,y2)
				,min(minSteps(x1-1,y1,x2,y2),min(minSteps(x1-1,y1-1,x2,y2),minSteps(x1-1,y1+1,x2,y2)))))))));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    cout.tie(NULL);
    cout<<minSteps(0,0,1,2);
    return 0;
}

