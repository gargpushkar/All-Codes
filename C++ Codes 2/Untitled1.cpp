#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count=1;
struct node **converttolist(int **, int);
void DFS(struct node **,int ,int);
void DFSutil(struct node **, int ,int *);
struct node
{
    int nodeno;
    struct node *link;
};
int main()
{
    int **A,i,sn,en,e,n;
    struct node **list;
    printf("Enter the number of vertices\n");
    scanf("%d",&n);
    printf("Enter the number of edges\n");
    scanf("%d",&e);
    A=(int **)malloc(sizeof(int));
    for(i=0;i<n;i++)
        *(A+i) = (int *)malloc(n*sizeof(int));
    for(i=0;i<e;i++)
    {
        printf("Enter the start and end vertex of edge %d\n",i+1);
        scanf("%d%d",&sn,&en);
        A[sn][en]=1;
        A[en][sn]=1;
    }
    printf("fjh");
    list=converttolist(A,n);
    ///////////////////////////
    DFS(list,n,sn);
	return 0;
}
struct node **converttolist(int **A, int r)
{
    int i,j;
    struct node **list,*temp;
    list = (struct node**)malloc(r*sizeof(struct node *));
    for(i=0;i<r;i++)
    {
        *(list+i) =NULL;
        for(j=0;j<r;j++)
        {
            if(A[i][j] !=0)
            {
                if(*(list+i) == NULL)
                {
                    *(list+i)=(struct node*)malloc(sizeof(struct node));
                    temp=*(list+i);
                    temp->nodeno=j;
                    temp->link=NULL;
                }
                else
                {
                    temp = *(list+i);
                    while(temp->link !=NULL)
                        temp=temp->link;
                    temp->link=(struct node*)malloc(sizeof(struct node));
                    temp=temp->link;
                    temp->nodeno=j;
                    temp->link=NULL;
                }
            }
        }
    }
    return list;
}
void DFS(struct node **Alist, int rows,int sn)
{
    int i;
    int *visited;
    visited = (int *)malloc(rows*sizeof(int));
    DFSutil(Alist,sn,visited);
    for(i=0;i<rows;i++)
    {
        if(visited[i] == 0)
            DFSutil(Alist,i,visited);
    }
    if(count != rows)
    {
        printf("He has to take a flight");
    }
    else
    {
        printf("He travels only by road");
    }
}
void DFSutil(struct node **Alist, int sn, int *visited)
{
    struct node *head= *(Alist + sn);
    visited[sn] = 1;
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

