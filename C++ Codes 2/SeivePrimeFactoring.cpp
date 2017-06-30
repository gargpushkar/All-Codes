#include <bits/stdc++.h>
using namespace std;

#define MAX 10000000
typedef long long int lli;
bool v[MAX];
int len, sp[MAX];

void Sieve(){
	for (int i = 2; i < MAX; i += 2)	sp[i] = 2;//even numbers have smallest prime factor 2
	for (lli i = 3; i < MAX; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (lli j = i; (j*i) < MAX; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	Sieve();
	for (int i = 0; i < MAX; i++)	cout << i << " : " << sp[i] << endl;
	
    return 0;
}
