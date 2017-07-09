import java.util.*;

public class sherlockAndTheBeast 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int num = sc.nextInt();
            StringBuilder sb = new StringBuilder();
            for(int i=num;i>=0;i--)
            {
                if(i%3==0 && (num-i)%5==0)
                {
                    int j;
                    for( j=0;j<i;j++)
                    {
                        sb.append('5');
                    }
                    for(int k=j;k<num;k++)
                    {
                        sb.append('3');
                    }
                    break;
                }
            }
            if(sb.length()==0)
                System.out.println(-1);
            else
                System.out.println(sb);
        }
    }
}
