import java.util.*;

public class SegmentTree 
{
    public static void createSegmentTree(int tree[], int arr[],int node, int start, int end)
    {
        if(start == end)
        {
            tree[node] = arr[start];
        }
        else
        {
            int mid = (start + end)/2;
            createSegmentTree(tree,arr,2*node,start,mid);
            createSegmentTree(tree,arr,2*node+1,mid+1,end);
            tree[node] = tree[2*node] + tree[2*node+1];
        }
    }
    public static void update(int tree[], int arr[], int node,int start, int end, int val,int idx)
    {
        if(start == end)
        {
            arr[idx]+=val;
            tree[node]+=val;
        }
        else
        {
            int mid = (start+end)/2;
            if(start <= idx && idx <=mid)
            {
                update(tree,arr,2*node,start,mid,idx,val);
            }
            else
            {
                update(tree,arr,2*node+1,mid+1,end,idx,val);
            }
            tree[node] = tree[2*node] + tree[2*node+1];
        }
    }
    public static int query(int tree[], int arr[], int node, int start, int end, int l, int r)
    {
        if(r < start || end < l)
            return 0;
        if(l<=start && end<=r)
            return tree[node];
        int mid = (start+end)/2;
        int p1 = query(tree,arr,node,start,mid,l,r);
        int p2 = query(tree,arr,node,mid+1,end,l,r);
        return p1 + p2;
    }
    
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int q = sc.nextInt();
        int arr[] = new int[n];
        int segtree[] = new int[2*n+2];
        for(int i=0;i<n;i++)
        {
            arr[i] = sc.nextInt();
        }
        createSegmentTree(segtree,arr,1,0,n-1);
        for(int i=1;i<2*n+2;i++)
            System.out.println(segtree[i]);
        update(segtree,arr,1,0,n-1,4,10);
        for(int i=1;i<2*n+2;i++)
            System.out.println(segtree[i]);
    }
}
