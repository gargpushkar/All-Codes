#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count=1;
struct node ** converttolist(int **,int);
void DFS(struct node **, int , int snode);
void DFSutil(struct node **, int snode, int *visited);
struct node
{
    int nodeno;
    struct node*link;
};
int main()
{
	int **A;
	int n,i,j,start,count=0;
	struct node **list;
	printf("Enter the number of city:\n");
	scanf("%d",&n);
	printf("Enter the connectivity of the cities:\n");
	A = (int **)malloc(n*sizeof(int *));
	for(i=0;i<n;i++)
	    *(A+i) = (int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	        scanf("%d",&A[i][j]);
	list = converttolist(A,n);
	printf("Enter the starting city:\n");
	scanf("%d",&start);
	DFS(list,n,start);
	return 0;
}

struct node** converttolist(int **A, int n)
{
    int i,j;
    struct node **list;
    struct node *temp;
    list = (struct node **)malloc(n*sizeof(struct node*));
    for(i=0;i<n;i++)
    {
        *(list +i)=NULL;
        for(j=0;j<n;j++)
        {
            if(A[i][j] != 0)
            {
                if(*(list+i)==NULL)
                {
                    *(list + i) = (struct node*)malloc(sizeof(struct node));
                    temp = *(list + i);
                    temp->nodeno = j;
                    temp->link = NULL;
                }
                else
                {
                    temp = *(list +i);
                    while(temp->link!=NULL)
                        temp = temp->link;
                    temp->link = (struct node *)malloc(sizeof(struct node));
                    temp = temp->link;
                    temp->nodeno = j;
                    temp->link =NULL;
                }
            }
        }
    }
    return list;
}
void DFS(struct node **Alist, int n,int snode)
{
    int i;
    int *visited;
    visited = (int *)malloc(n*sizeof(int));
    DFSutil(Alist,snode,visited);
    for(i=0;i<n;i++)
    {
        if(visited[i] == 0)
            DFSutil(Alist,i,visited);
    }
    if(count==n)
        printf("Yes");
    else
        printf("No");
}

void DFSutil(struct node **Alist, int snode, int *visited)
{
    struct node *head = *(Alist + snode);
    visited[snode] = 1;
    while(head!=NULL)
    {
        if(visited[head->nodeno] != 1)
        {
        	count++;
            visited[head->nodeno] = 1;
            DFSutil(Alist,head->nodeno,visited);
        }
        head = head->link;
    }
}
