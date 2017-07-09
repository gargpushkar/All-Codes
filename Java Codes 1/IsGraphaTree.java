import java.util.*;
import java.lang.*;

public class IsGraphaTree
{
    //wrong
	public static void main (String[] args) throws java.lang.Exception
	{
            Scanner sc = new Scanner(System.in);
            int n=sc.nextInt();
            int v = sc.nextInt();
            ArrayList<ArrayList<Integer>>al = new ArrayList<>();
            for(int i=0;i<=n;i++)
            {
                    al.add(new ArrayList<Integer>());
            }
            for(int i=0;i<v;i++)
            {
                    int a= sc.nextInt();
                    int b= sc.nextInt();
                    al.get(a).add(b);
                    al.get(b).add(a);
            }

            int s=1;
            boolean visited[] = new boolean[n+1];
            Queue<Integer>q = new LinkedList<>();
            visited[s] = true;
            q.add(s);
            while(!q.isEmpty())
            {
                    int o = q.poll();
                    List<Integer>l = al.get(o);
                    for(int i=0;i<l.size();i++)
                    {
                            int a = l.get(i);
                            if(!visited[a])
                            {
                                    visited[a]=true;
                                    q.add(a);
                            }
                    }
            }
            for(int i=1;i<=n;i++)
            {
                if(!visited[i])
                {
                        System.out.println("NO");
                        return ;
                }
            }
   //         q.clear();
            if(v ==n-1)  System.out.println("YES");
            else System.out.println("NO");
    /*        boolean visited1[] = new boolean[n+1];
            visited1[s] = true;
            q.add(s);
            while(!q.isEmpty())
            {
                int o=q.poll();
                List<Integer> l = al.get(o);
                for(int i=0;i<l.size();i++)
                {
                    int a =l.get(i);
                    if(!visited1[a])
                    {
                        visited[a]=true;
                        q.add(a);
                    }
                    else if(visited1[a] && q.contains(o))
                    {
                        System.out.println("YES");
                        return;
                    }
                }
            }
		// Continued
                System.out.println("NO");*/
	}
}