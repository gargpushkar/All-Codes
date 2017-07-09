import java.util.*;

public class FightTheMonsters 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        double hit = sc.nextLong();
        long t = sc.nextLong();
        long arr[] = new long[n];
        for(int i=0;i<n;i++)
            arr[i] = sc.nextLong();
        Arrays.sort(arr);
        int count=0;
        int i=0;
        while(t <= 0)
        {
            double temp;
            temp = Math.ceil(arr[i]/hit);
            i++;
            t-=temp;
            if(t<0)
                break;
            count++;
        }
        System.out.println(count);
    }
}

