import java.util.*;

public class ROWSOLD 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int l = s.length();
        int j,ans =0;
        int count=0;
        int ii=0;
        for(int i=0;i<l;)
        {
            if(count > 0 && s.charAt(i)=='0')
            {
                System.out.println("if");
                j=i+1;
                while(s.charAt(j)=='0' && j<l-1)
                {
                    j++;
                }
                if(i==j+1)
                {
                    j++;
                }
                ii=j-i+1;
                System.out.println("j="+j);
                System.out.println("i="+i);
                System.out.println("ii="+ii);
                ans+=ii*count;
                count++;
                i+=ii;
                System.out.println("count="+count);
                if(i<l)
                    break;
            }
            else if(s.charAt(i)=='1')
            {
                System.out.println("else");
                count++;
                i++;
            }
            else
                i++;
            System.out.println("fcount"+count);
        }
        System.out.println(ans);
    }
}
