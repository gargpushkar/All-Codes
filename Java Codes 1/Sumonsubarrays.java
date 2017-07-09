import java.util.*;

public class Sumonsubarrays 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]= sc.nextInt();
        }
        long ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                ans = (long) ((ans + Math.pow(Math.abs(arr[i] - arr[j]), 2))%1000000000000000000L);
            }
        }
        System.out.println(ans);
    }
}
