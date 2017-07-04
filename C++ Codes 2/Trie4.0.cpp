#include<bits/stdc++.h>
using namespace std;
struct node{
    int count;	//replace count with eow 
    node *next[26];
    node()
    {
        count = 0;
        for(int i = 0; i<26; i++)
            next[i] = NULL;
    }
}*root;

void add(string name)
{
    node *current = root;
    current->count++;
    for(int i = 0; i<name.size(); i++)
    {
        char nw = name[i];
        if(current->next[(int)nw - 'a'] == NULL)
            current->next[(int) nw - 'a'] = new node();
        current = current->next[(int) nw - 'a'];
        current->count++;
    }
}

int solve(string partial)
{
    node *current = root;
    for(int i = 0; i<partial.size(); i++)
    {
        char nw = partial[i];
        if(current->next[(int) nw - 'a'] == NULL)
            return 0;
        current = current->next[(int) nw - 'a'];
    }
    return current->count;
}

string command, str;
int main()
{
    int i, j, cs, n;
    root = new node();
    cin >> n;
    while(n--)
    {
        cin >> command >> str;
        if(command == "add")
            add(str);
        else
            printf("%d\n",solve(str));
    }
}
