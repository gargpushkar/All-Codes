import java.util.*;

public class TwinArraus 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        ArrayList<Integer>al1 = new ArrayList<>();
        ArrayList<Integer>al2 = new ArrayList<>();
        for(int i=0;i<n;i++)
            al1.add(sc.nextInt());
        for(int i=0;i<n;i++)
            al2.add(sc.nextInt());
        int m1=Collections.min(al1);
        int m2=Collections.min(al2);
        if(al1.indexOf(m1) != al2.indexOf(m2))
        {
            System.out.println(m1+m2);
        }
        else
        {
            al1.remove(al1.indexOf(m1));
            al2.remove(al2.indexOf(m2));
            int m3=Collections.min(al1);
            int m4=Collections.min(al2);
            System.out.println(Math.min(m1+m4,m2+m3));
        }
    }
}
