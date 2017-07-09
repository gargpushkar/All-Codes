import java.util.*;
public class MonkandtheIslands 
{
    public static void main(String args[] ) throws Exception 
    {
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            int m = sc.nextInt();
            Map<Integer,List<Integer>>adj = new HashMap<>();
            boolean visited[] = new boolean[n+1];
            for(int i=1;i<=n;i++)
            {
                adj.put(i,new LinkedList<>());
            }
            for(int i=1;i<=m;i++)
            {
                int x = sc.nextInt();
                int y = sc.nextInt();
                List al = adj.get(x);
                al.add(y);
                adj.put(x,al);
                al = adj.get(y);
                al.add(x);
                adj.put(y,al);
            }
            Queue<Integer>queue = new LinkedList<>();
            int ans=1;
            queue.add(1);
            visited[1] = true;
            boolean flag2=false;
            int level[] = new int[n+1];
            Arrays.fill(level, 0);
            while(!queue.isEmpty())
            {
                int a = queue.poll();
                List<Integer>l = adj.get(a);
                    for(int i=0;i<l.size();i++)
                    {
                        int c = l.get(i);
                        if(!visited[c])
                        {
                            level[c] = level[a]+1;
                            if(c == n)
                            {
                                ans=level[c];
                                flag2=true;
                                break;
                            }
                            visited[c] = true;
                            queue.add(c);
                        }
                    }
                    if(flag2)
                    {
                        break;
                    }
            }
            System.out.println(ans);
        }
    }
}
