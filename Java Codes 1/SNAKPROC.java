import java.util.*;

public class SNAKPROC 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        while(r-->0)
        {
            int n =  sc.nextInt();
            int arr[]= new int[n];
            for(int i=0;i<n;i++)
            {
                arr[i] = sc.nextInt();
            }
            if(n%2==0 || arr[0]!=1 || arr[n-1] != 1)
            {
                System.out.println("no");
            }
            else
            {
                int count=0;
                int t = arr[0];
                for(int i=1;i<=n/2;i++)
                {
                    if(t+1 != arr[i])
                    {
                        count=1;
                        break;
                    }
                    t=arr[i];
                }
                if(count==0)
                {
                    for(int i=n/2+1;i<n;i++)
                    {
                        if(t-1 != arr[i])
                        {
                            count=1;
                            break;
                        }
                        t=arr[i];
                    }
                }
                if(count==1)
                    System.out.println("no");
                else
                    System.out.println("yes");
            }
        }
    }
}
