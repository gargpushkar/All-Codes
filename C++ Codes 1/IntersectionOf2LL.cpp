//http://www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/

#include <bits/stdc++.h>
using namespace std;


struct Node 
{
    int data;
    struct Node* next;
};
   
int ln(Node *head1)
{
    int c=0;
    while(head1!=NULL)
    {
        c++;
        head1=head1->next;
    }
    return c;
}
int intersectPoint(Node* head1, Node* head2)
{
    int l1 = ln(head1);
    int l2 = ln(head2);
    if(l1 > l2)
    {
        for(int i=0;i<l1-l2;i++)
        {
            if(head1==NULL)
                return -1;
            head1=head1->next;
        }
        while(head1!=NULL && head2!=NULL)
        {
            if(head1==head2)
                return head1->data;
            head1=head1->next;
            head2=head2->next;
        }
    }
    else
    {
        for(int i=0;i<l2-l1;i++)
        {
            if(head2==NULL)
                return -1;
            head2=head2->next;
        }
        while( head1!=NULL && head2!=NULL)
        {
            if(head1==head2)
                return head1->data;
            head1=head1->next;
            head2=head2->next;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}

