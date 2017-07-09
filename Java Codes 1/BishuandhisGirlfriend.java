import java.util.*;

public class BishuandhisGirlfriend 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        boolean visited[] = new boolean[n+1];
        boolean girls[] = new boolean[n+1];
        ArrayList<ArrayList<Integer>>al = new ArrayList<>();
        for(int i=0;i<=n;i++)
            al.add(new ArrayList<>());
        for(int i=0;i<n-1;i++)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            al.get(a).add(b);
            al.get(b).add(a);
        }
        int g = sc.nextInt();
        for(int i=0;i<g;i++)
        {
            girls[sc.nextInt()]= true;
        }
        Queue<Integer>q = new LinkedList<>();
        q.add(1);
        visited[1]=true;
        while(!q.isEmpty())
        {
            int a = q.poll();
            List<Integer>l = al.get(a);
            for(int i=0;i<l.size();i++)
            {
                if(!visited[l.get(i)])
                {
                    visited[l.get(i)] = true;
                    if(girls[l.get(i)])
                    {
                        System.out.println(l.get(i));
                        return;
                    }
                    q.add(l.get(i));
                }
            }
        }
    }
}
