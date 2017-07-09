import java.util.*;
public class HORSES
{
	public static void main(String []args)
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0)
		{
			int n = sc.nextInt();
			long arr[] = new long[n];
			for(int i=0;i<n;i++)
			{
				arr[i] = sc.nextLong();
			}
			long ans=Long.MAX_VALUE;
			Arrays.sort(arr);
			for(int i=0;i<n-1;i++)
			{
				if(ans > arr[i+1] - arr[i])
				{
					ans = arr[i+1] - arr[i];
				}
			}
			System.out.println(ans);
		}
	}
} 