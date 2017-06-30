#include<bits/stdc++.h>
using namespace std;
int main() { 

	int n; int x; 
	cin>> n>> x;
	int Y[n];
  	for(int i = 0; i < n; i++)
   		cin>>Y[i]; 
  	int V[n];
   	for(int j = 0; j < n; j++)
		cin >> V[j];
   	int D[n];
    for(int k=0;k<n;k++) 
		if(x>Y[k])
			D[k]=x-Y[k]; 
		else if(x<=Y[k]) 
			D[k]=Y[k]-x;

	int T[n];
	for(int l=0;l<n;l++)
    	T[l]=D[l]/V[l];
	int min,location=0;
	min=T[0];
 	for ( int c = 1 ; c < n ; c++ ) 
	{
    	if ( T[c] < min ) 
    	{
       		min = T[c];
       		location = c;
	    }
     else if(min==T[c])
         location=-1;
	}
	cout<<location;
	return 0;
}
