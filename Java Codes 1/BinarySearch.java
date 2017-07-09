import java.util.*;

public class BinarySearch 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            int q = sc.nextInt();
            ArrayList<Integer>al = new ArrayList<>();
            for(int i=0;i<n;i++)
                al.add(sc.nextInt());
            Collections.sort(al);
            while(q-->0)
            {
                int num = sc.nextInt();
                int l=0,h=n-1;
                int mid=(l+h)/2;
                if(num < al.get(0))
                {
                    System.out.println(n);
                    break;
                }
                int k=0;
                while(l<h)
                {
                    if(num < al.get(mid))
                    {
                        if(num > al.get(mid-1))
                            k=mid-1;
                        h=mid-1;
                    }
                    else if(num > al.get(mid))
                    {
                        if(num < al.get(mid+1))
                            k=mid+1;
                        l=mid+1;
                    }
                    else
                    {
                        k=mid;
                        break;
                    }
                    mid = (l+h)/2;
                }
                if(k==0)
                    k=n;
                k--;
                int ans=n-k-1;
                int b=k;
                while(k>0 )
                {
                    int a = num-al.get(b);
                    if(a<k)
                    {
                        ans++;
                        k-=a;
                        b--;
                    }
                    else
                        break;
                }
                System.out.println(ans);
            }
        }
    }
}
