#include <stdio.h>
 
int isHole[1000005];
 
int main(){
    int n, m, k,i;
    scanf("%d%d%d", &n, &m, &k);
    for(i=0; i<m; i++){
        int h;
        scanf("%d", &h);
        isHole[h] = 1;
    }
    int pos = 1;
    for( i=0; i<k; i++){
        int u, v;
        scanf("%d%d", &u, &v);
        if(u == pos && (!isHole[u])) pos = v;
        else if(v == pos && (!isHole[v])) pos = u;
    }
    printf("%d", pos);
    return 0;
}
