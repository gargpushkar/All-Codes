import java.util.*;

public class DirectiQuestion2 
{
    static class pair implements Comparator<pair>
    {
        public int a,b;
        pair(){}
        pair(int a, int b)
        {
            this.a=a;
            this.b=b;
        }
        @Override
        public int compare(pair p1, pair p2)
        {
            return p2.a-p1.a;
        }
    }
    
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ar1[]=new int[n];
        int ar2[]=new int[n];
        
        ArrayList<pair>al = new ArrayList<>();
        for(int i=0;i<n;i++)
            ar1[i]=sc.nextInt();
        for(int i=0;i<n;i++)
            ar2[i]=sc.nextInt();
        for(int i=0;i<n;i++)
        {
            al.add(new pair(ar1[i], ar2[i]));
        }
        Collections.sort(al, new pair());
        int j=1;
        int a = al.get(0).a;
        while(j < n)
        {
            pair p = al.get(j);
            int b = p.a;
            if(b < a)
            {
                int c = p.b;
                if(c!=j)
                {
                    al.remove(j);
                    al.add(c, p);
                }
            }
            j++;
        }
        for(int i=0;i<al.size();i++)
        {
            System.out.print(al.get(i).a+" ");
        }
        System.out.println();
        for(int i=0;i<al.size();i++)
        {
            System.out.print(al.get(i).b+" ");
        }
        System.out.println();
    }
}
