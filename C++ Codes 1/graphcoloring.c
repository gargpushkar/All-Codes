#include<stdio.h>
#include<stdlib.h>
 
void printSolution(int color[], int V);
 
/* A utility function to check if the current color assignment
   is safe for vertex v */
int isSafe (int v, int **graph, int color[], int c, int V)
{
	/*------Fill your code here---------*/
	int i;
	for(i=0;i<V;i++)
	{
	    if(graph[v][i] && c==color[i])
	        return 0;
	}
	return 1;
}
 
/* A recursive utility function to solve m coloring problem */
int graphColoringUtil(int **graph, int m, int color[], int v, int V)
{
    /*---------Fill your code here-------*/
    int i;
    if(v==V)
        return 1;
    for(i=1;i<=m;i++)
    {
        if(isSafe(v,graph,color,i,V))
        {
            color[v] = i;
            if(graphColoringUtil(graph,m,color,v+1,V))
                return 1;
        }
        color[v]=0;
    }
    return 0;
}
 
/* This function solves the m Coloring problem using Backtracking.
  It mainly uses graphColoringUtil() to solve the problem. It returns
  false if the m colors cannot be assigned, otherwise return true and
  prints assignments of colors to all vertices. Please note that there
  may be more than one solutions, this function prints one of the
  feasible solutions.*/
int graphColoring(int **graph, int m, int V)
{
    /*----------Fill your code here -----------*/
    int *color;
    color=(int *)calloc(V,sizeof(int));
    if(graphColoringUtil(graph,m,color,0,V)==0)
    {
        printf("The graph cannot be colored with the given number of colors.");
        return 0;
    }
    printSolution(color,V);
    return 1;
}
 
/* A utility function to print solution */
void printSolution(int color[],int V)
{
	int i;
    printf("The colors assigned to the nodes is as follows..\n");
    for (i = 0; i < V; i++)
		printf("Node %d = %d\n", i,color[i]);
}
 
// driver program to test above function
int main()
{
    int v,i,j,m;
    printf("Enter the number of vertices :\n");
    scanf("%d",&v);
    int ** graph = (int**)malloc(sizeof(int*)*v);
    for(i=0;i<v;i++){
		*(graph+i) = (int*) malloc(sizeof(int)*v);
	}
    printf("Enter the connectivity matrix :\n");
    for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			scanf("%d",&graph[i][j]);
		}
	}
    printf("Enter number of colours :\n");
    scanf("%d",&m);
    graphColoring (graph, m, v);
    return 0;
}
