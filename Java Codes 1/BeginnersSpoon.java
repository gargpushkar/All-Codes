import java.util.*;

public class BeginnersSpoon 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(n < 3)   
            System.out.println(0);
        else if(n==3)
            System.out.println(9);
        else
        {
            int a=0;
            int b=1;
            int c=0;
            ArrayList<Integer>fact = new ArrayList<>();
            ArrayList<Integer>al = new ArrayList<>();
            al.add(2);
            al.add(2);
            for(int i=2;i<=n;i++)
                al.add(i);
            for(int i=3;c<n;i++)
            {
                c=a+b;
                if(c > n)
                    break;
                a=b;
                b=c;
                Integer f = c;
                ArrayList<Integer>all = new ArrayList<>();
                all.add(c);
                if(al.contains(f))
                    al.removeAll(all);
            }
            fact.add(1);
            for(int i=1;i<=Collections.max(al);i++)
            {
                int d = fact.get(i-1);
                fact.add(d*i);
            }
     //       System.out.println(al);
            long ans=0;
            for(int i=0;i<al.size();i++)
            {
                ans = (ans + fact.get(al.get(i)))%1000000007;
            }
            System.out.println(ans);
        }
    }
}
