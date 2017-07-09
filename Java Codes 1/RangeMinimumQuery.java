import java.util.*;

public class RangeMinimumQuery 
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
            tree[node] = tree[2*node] < tree[2*node+1] ? tree[2*node] : tree[2*node+1];
        }
    }
    public static void update(int tree[], int arr[], int node,int start, int end, int idx,int val)
    {
        if(start == end)
        {
            arr[idx]=val;
            tree[node]=val;
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
            tree[node] = tree[2*node] < tree[2*node+1] ? tree[2*node] : tree[2*node+1];
        }
    }
    public static int query(int tree[], int node, int start, int end, int l, int r)
    {
        if(r < start || end < l)
            return 1000000;
        if(l<=start && end<=r)
            return tree[node];
        int mid = (start+end)/2;
        int p1,p2;
        p1 = query(tree,2*node,start,mid,l,r);
        p2 = query(tree,2*node+1,mid+1,end,l,r);
        return p1 < p2 ? p1 : p2;
    }
    
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int q = sc.nextInt();
        int arr[] = new int[n+1];
        int segtree[] = new int[10000000];
        for(int i=1;i<=n;i++)
        {
            arr[i] = sc.nextInt();
        }
        createSegmentTree(segtree,arr,1,1,n);
   /*     for(int i=1;i<3*n;i++)
            System.out.println(segtree[i]);*/
        while(q-->0)
        {
            String s = sc.next();
            int a=sc.nextInt();
            int b=sc.nextInt();
            if(s.equals("q"))
            {
                System.out.println(query(segtree,1,1,n,a,b));
            }
            else
                update(segtree, arr, 1, 1, n, a, b);
        }
    }
}