import java.util.*;

public class DISHLIFE 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int arr[] = new int[k+1];
            boolean flag = true;
            int count=0;
            arr[0]=1;
            for(int i=0;i<n;i++)
            {
                int a = sc.nextInt();
                flag = true;
                for(int j=0;j<a;j++)
                {
                    int b = sc.nextInt();
                    if(arr[b] != 1)
                    {
                        flag = false;
                        arr[b] = 1;
                    }
                }
                if(flag)
                {
                    count=1;
                }
            }
            Arrays.sort(arr);
            if(arr[0]==0)
            {
                System.out.println("sad");
            }
            else if(count==1)
            {
                System.out.println("some");
            }
            else
            {
                System.out.println("all");
            }
        }
    }
}
