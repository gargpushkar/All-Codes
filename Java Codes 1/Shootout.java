import java.util.*;

public class Shootout 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();  
            int k=sc.nextInt();
            ArrayList<Integer>al = new ArrayList<>();
            for(int i=0;i<n;i++)
            {
                al.add(sc.nextInt());
            }
            int i=1;
            while(i<al.size()-1 && !al.isEmpty())
            {
    /*            System.out.println(al);
                System.out.println(i);*/
                int a,b,c;
                a=al.get(i-1);
                b=al.get(i);
                c=al.get(i+1);
    //            System.out.println(c);
                if(b-a == k && c-b == k)
                {
                    al.remove(new Integer(a));
                    al.remove(new Integer(b));
                    al.remove(new Integer(c));
                    i=1;
                }
                else
                    i++;
            }
            System.out.println(al.size());
        }
    }
}
