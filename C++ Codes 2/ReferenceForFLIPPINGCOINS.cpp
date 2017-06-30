//https://www.codechef.com/viewsolution/14211952
#include <bits/stdc++.h>
#define li long long int
inline void printint(int n)
{
	if(n == 0)
	{
		putchar_unlocked('0');
		putchar_unlocked('\n');
	}
	else
	{
		char buf[11];
		buf[10] = '\n';
		int i = 9;
		while(n)
		{
			buf[i--] = n % 10 + '0';
			n /= 10;
		}
		while(buf[i] != '\n')
			putchar_unlocked(buf[++i]);
	}	
}
 
inline void scanint(int* x)
{
	register char c = getchar_unlocked();
	*x = 0;
	for(; (c<48)||(c>57);c = getchar_unlocked());
	for(; (c>47)&&(c<58);c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48);
}
 
 
struct segt
{
	int data;
	int flips;
};
segt* ST;
 
 
int getSum(int l, int r, int ss, int se, int i, int fsf)
{
	if(l == ss && r == se)
	{
		if(fsf & 1)
			return se-ss+1-ST[i].data;
		else return ST[i].data;
	}
 
	int mid = (ss+se)/2, left = (2*i)+1, right = (2*i)+2;
	fsf += ST[i].flips;
 
	if(r <= mid)
		return getSum(l,r,ss,mid,left,fsf);
	else if(l > mid)
		return getSum(l,r,mid+1,se,right, fsf);
	
	return getSum(l,mid,ss,mid,left, fsf) + getSum(mid+1,r,mid+1,se,right, fsf);
}
 
void updatelazy(int l, int r, int ss, int se, int i)
{
	
	if(ss == l && se == r)
	{
		++ST[i].flips;
		ST[i].data = se-ss+1-ST[i].data;
		return;
	}
	int mid = (ss + se)/2, left = (2*i)+1, right = (2*i)+2;
 
	if(r <= mid)
		updatelazy(l,r,ss,mid,left);
	else if(l > mid)
		updatelazy(l,r,mid+1,se,right);
	else
	{
		updatelazy(l,mid,ss,mid,left);
		updatelazy(mid+1,r,mid+1,se,right);
	}
	
	ST[i].data = ST[left].data + ST[right].data;
	if(ST[i].flips & 1) 
		ST[i].data = se-ss+1-ST[i].data;
}
 
int constructST(int x, int y, int i)
{
	
	ST[i].flips = 0;
	if(x == y)
	{
		ST[i].data = 0;
		return 0;
	}
	int mid = (x + y)/2;
	ST[i].data = constructST(x, mid, (2*i)+1) + constructST(mid+1, y, (2*i)+2);
	return ST[i].data;
}
 
int main()
{
	int N,Q,i,x,j;
	scanint(&N);
	scanint(&Q);
	ST = (segt*)malloc(sizeof(segt)*(3*N));
 
	constructST(0,N-1,0);
 
	while(Q--)
	{
		scanint(&x);
		if(x)
		{
			scanint(&i);
			scanint(&j);
			printint(getSum(i,j,0,N-1,0,0));
		}
		else
		{
			scanint(&i);
			scanint(&j);
			updatelazy(i,j,0,N-1,0);
		}
	}
 
	free(ST);
 
	return 0;
}  
Comments 

