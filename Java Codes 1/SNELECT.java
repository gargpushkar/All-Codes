import java.util.*;

public class SNELECT 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            StringBuilder sb = new StringBuilder(sc.next());
            for(int i=1;i<sb.length();)
            {
                if(sb.charAt(i-1)=='s' && sb.charAt(i)=='m')
                {
                    sb.setCharAt(i-1, 'a');
                }
                else if(sb.charAt(i-1)=='m' && sb.charAt(i)=='s')
                {
                    sb.setCharAt(i, 'a');
                }
            }
            int s=0,m=0;
            for(int i=0;i<sb.length();i++)
            {
                if(sb.charAt(i)=='s')
                    s++;
                else if(sb.charAt(i)=='m')
                    m++;
            }
            System.out.println(sb);
            if(s>m)
                System.out.println("snakes");
            else if(m<s)
                System.out.println("mongooes");
            else
                System.out.println("tie");
        }
    }
}
