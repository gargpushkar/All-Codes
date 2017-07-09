import java.util.*;

public class ZeroOneGame 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int g = sc.nextInt();
        while(g-->0)
        {
            int count=1;
            int n=sc.nextInt();
            ArrayList<Integer>al = new ArrayList<>();
            for(int i=0;i<n;i++)
            {
                al.add(sc.nextInt());
            }
            if(Collections.frequency(al, 0)==n)
            {
                if(n%2==0)
                {
                    System.out.println("Bob");
                }
                else
                {
                    System.out.println("Alice");
                }
            }
            else
            {
                for(int i=1;i<al.size()-1;i++)
                {
                    if(al.get(i-1) == 0 && al.get(i+1)==0)
                    {
                        al.remove(i);
                        count++;
                        i-=2;
                    }
                    if(i<-1)
                    {
                        i=-1;
                    }
                }
                if(count%2==0)
                {
                    System.out.println("Alice");
                }
                else
                {
                    System.out.println("Bob");
                }
            }
        }
    }
}

