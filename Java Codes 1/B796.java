import java.util.*;

public class B796 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int n,k,m;
        n = sc.nextInt();
        m = sc.nextInt();
        k = sc.nextInt();
        int arr[] = new int[n+1];
        Arrays.fill(arr, 0);
        for(int i=0;i<m;i++)
        {
            arr[sc.nextInt()]=1;
        }
        int ans=1;
        for(int i=0;i<k;i++)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            if(ans==a)
            {
                if(arr[b] ==1)
                {
                    System.out.println(b);
                    return;
                }
                ans=b;
            }
            else if(ans==b)
            {
                if(arr[a] ==1)
                {
                    System.out.println(a);
                    return;
                }
                ans=a;
            }
        }
        System.out.println(ans);
    }
}
