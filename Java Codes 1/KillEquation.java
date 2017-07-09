import java.util.*;

public class KillEquation 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while(n-->0)
        {
            long a,b,c,d;
            long k;
            a= sc.nextLong();
            b= sc.nextLong();
            c= sc.nextLong();
            d= sc.nextLong();
            k= sc.nextLong();
            long ans=0;
            for(int i=0;i<k;i++)
            {
                ans = (long)(a*Math.pow(i, 3) + b*Math.pow(i, 2)+c*i + d);
                if(ans >= k)
                {
                    ans=i;
                    break;
                }
            }
            ans = ans>0?ans-1:0;
            System.out.println(ans);
        }
    }
}
