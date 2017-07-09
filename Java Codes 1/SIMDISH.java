import java.util.*;

public class SIMDISH 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            Set<String>set = new HashSet<>();
            for(int i=0;i<4;i++)
                set.add(sc.next());
            int count=0;
            for(int i=0;i<4;i++)
            {
                String s = sc.next();
                if(set.contains(s))
                    count++;
            }
            if(count>=2)
            {
                System.out.println("similar");
            }
            else
                System.out.println("dissimilar");
        }
    }
}
