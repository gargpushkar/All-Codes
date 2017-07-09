import java.util.*;

public class Duplication 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        String s = "0";
        while(s.length() <= 1000)
        {
            StringBuilder sb= new StringBuilder();
            for(int i=0;i<s.length();i++)
            {
                if(s.charAt(i) == '0')
                    sb.append('1');
                else
                    sb.append('0');
            }
            s+=sb;
        }
        while(t-->0)
        {
            System.out.println(s.charAt(sc.nextInt()));
        }
    }
}
