import java.util.*;

public class PathMatching 
{
    
    public static void dfs(int a, int b, boolean vis[], String ans,ArrayList<ArrayList<Integer>>al,String st)
    {
        vis[a] = true;
        System.out.print(a+" ");
        ArrayList<Integer>l = al.get(a);
        for(int i=0;i<l.size();i++)
        {
            if(!vis[l.get(i)])
            {
                vis[l.get(i)]=true;
                ans+=st.charAt(l.get(i)-1);
                if(l.get(i) == b)
                {
                    System.out.println("cwd");
                    return;
                }
                dfs(l.get(i),b,vis,ans,al,st);
            }
        }
    }
    
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int q = sc.nextInt();
        String st = sc.next();
        String p = sc.next();
        ArrayList<ArrayList<Integer>>al = new ArrayList<>();
        for(int i=0;i<=n;i++)
            al.add(new ArrayList<>());
        for(int i=0;i<n-1;i++)
        {
            int u = sc.nextInt();
            int v = sc.nextInt();
            al.get(u).add(v);
            al.get(v).add(u);
        }
        for(int i=0;i<q;i++)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            boolean visited[] = new boolean[n+1];
            Arrays.fill(visited, false);
            String ans="";
            dfs(a,b,visited,ans,al,st);
            System.out.println(ans);
        }
    }
}
