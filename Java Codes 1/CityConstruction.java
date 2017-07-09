import java.util.*;

public class CityConstruction 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        ArrayList<ArrayList<Integer>>list = new ArrayList<>();
        HashSet<HashSet<Integer>>set = new HashSet<>();
        for(int i=0;i<=n;i++)
        {
            list.add(new ArrayList<>());
            set.add(new HashSet<>());
        }
        for(int i=0;i<m;i++)
        {
            int u = sc.nextInt();
            int v = sc.nextInt();
            list.get(u).add(v);
        }
        int q =sc.nextInt();
        while(q-->0)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            if(a==1)
            {
                n+=1;
                set.add(new HashSet<>());
                list.add(new ArrayList<Integer>());
                if(c==0)
                {
                    list.get(b).add(n);
                }
                else
                {
                    list.get(n).add(a);
                }
            }
            else
            {
                /////////////////////////////////
                int s = b;    
                boolean visited[] = new boolean[n+1];
                Queue<Integer>queue = new LinkedList<>();
                queue.add(s);
                visited[s] = true;
                boolean flag=false;
                while(!queue.isEmpty())
                {
                    int d = queue.poll();
                    HashSet
                    List<Integer> al1 =list.get(d);
                    for(int i=0;i<al1.size();i++)
                    {
                        int e = al1.get(i);
                        if(e==c)
                        {
                            flag=true;
                            break;
                        }
                        if(!visited[e])
                        {
                            visited[e]=true;
                            queue.add(e);
                        }
                    }
                    if(flag)    break;
                }
                if(flag)
                    System.out.println("Yes");
                else
                    System.out.println("No");
                /////////////////////////////////
            }
        }
    }
}
