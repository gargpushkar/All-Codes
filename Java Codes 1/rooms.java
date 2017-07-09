import java.util.*;

public class rooms 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(n==0)
        {
            System.out.println(0);
            return;
        }
        ArrayList<Integer>al = new ArrayList<>();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            al.add(sc.nextInt());
            sum+=al.get(i);
        }
        sum/=n;
        int ans = Collections.frequency(al, sum);
        if(ans==0)
        {
            System.out.println("0");
        }
        else
        {
            System.out.println(ans);
            for(int i=0;i<ans;i++)
            {
                int a = al.indexOf(sum);
                System.out.print((a+i+1)+" ");
                al.remove(a);
            }
        }
    }
}
