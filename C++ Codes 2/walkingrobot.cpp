#include <bits/stdc++.h>

using namespace std;

int howManyCollisions(string s){
    // Complete this function
    int l = s.length();
    int ans=0;
    for(int i=0;i<l;i++)
    {
    	if(s[i] == 'r')
    	{
    		for(int j=i;j<l;j++)
            {
                if(s[j] == 'l')
                {
                    ans+=2;
                    s[j] = 'C';
                    break;
                }
                else if(s[j] == 'C' || s[j] =='d')
                {
                    ans+=1;
                    break;
                }
            }
		}
		else if(s[i] == 'l')
    	{
    		for(int j=i;j>=0;j--)
            {
                if(s[j] == 'r')
                {
                    ans+=2;
                    s[j] = 'C';
                    break;
                }
                else if(s[j] == 'C' || s[j] =='d')
                {
                    ans+=1;
                    break;
                }
            }
		}
	}
    return ans;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // Returns the number of times moving robots collide.
        int result = howManyCollisions(s);
        cout << result << endl;
    }
    return 0;
}

