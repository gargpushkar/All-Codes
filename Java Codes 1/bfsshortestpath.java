import java.util.*;

public class bfsshortestpath 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            int m = sc.nextInt();
            Map<Integer,List<Integer>>adjList = new HashMap<>();
            for(int i=1;i<=n;i++)
            {
                adjList.put(i, new LinkedList<>());
            }
            for(int i=1;i<=m;i++)
            {
                int a = sc.nextInt();
                int b = sc.nextInt();
                List<Integer> al = adjList.get(a);
                al.add(b);
                adjList.put(a, al);
                al = adjList.get(b);
                al.add(a);
                adjList.put(b, al);
            }
            ////////////////////////////////////////////////////////////////////
            
            ////////////////////////////////////////////////////////////////////
            int s = sc.nextInt();
            int dist[] = new int[n+1];
            boolean visited[] = new boolean[n+1];
            int d=6;
            Arrays.fill(dist, -1);
            Queue<Integer>queue = new LinkedList<>();
            queue.add(s);
            visited[s] = true;
            dist[s] = -2;
            int g=0;
            while(!queue.isEmpty())
            {
                int a = queue.poll();
                g=0;
                if(dist[a]==-2)
                {
                    g=2;
                }
                List<Integer> al = adjList.get(a);
                for(int i=0;i<al.size();i++)
                {
                    int c = al.get(i);
                    if(!visited[c])
                    {
                        visited[c]=true;
                        dist[c] = d + g + dist[a];
                        queue.add(c);
                    }
                }
            }
            for(int i=1;i<=n;i++)
            {
                if(i==s)
                    continue;
                System.out.print(dist[i]+" ");
            }
            System.out.println();
        }
    }
}
