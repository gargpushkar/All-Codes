#include <bits/stdc++.h>

using namespace std;
#define INF 99999
void floydWarshell (int **graph, int V)
{
int i,j,k;
    for(k=0;k<V;k++)
    {
        for(i=0;i<V;i++)
        {
            for(j=0;j<V;j++)
            {
                if(graph[i][k] != INF && graph[k][j] != INF)
                {
                    if(graph[i][j] > graph[i][k]  + graph[k][j])
                    {
                        graph[i][j] = graph[i][k] + graph[k][j];
                    }
                }
            }
        }
    }
    for (i = 0; i < V; i++)
    {
        for (j = 0; j < V; j++)
        {
            graph[j][i] = graph[i][j];
        }
    }
    
    int ans=0;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		
		}
	}
    
}
    

int main() {
    int n;
    int m;int i,j;
    cin >> n >> m;
    int **graph;
    graph = (int **)malloc(n * sizeof(int *));
	for(i=0;i<n;i++)
		*(graph+i) = (int *) calloc(n,sizeof(int));
    
    for(i = 0;i<n;i++){
		for(j = 0;j<n;j++){
			*(*(graph+i)+j) = (i==j)?0:INF;
		}
	}
    for(int a0 = 0; a0 < m; a0++){
        int a;
        int b;
        cin >> a >> b;
        // Write Your Code Here
        graph[a-1][b-1]=1;
        graph[b-1][a-1]=1;
    }
    floydWarshell(graph,n);
    return 0;
}

