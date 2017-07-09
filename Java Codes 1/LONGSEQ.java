import java.util.*;

public class LONGSEQ 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            String s = sc.next();
            ArrayList<Character>al = new ArrayList<>();
            for(int i=0;i<s.length();i++)
            {
                al.add(s.charAt(i));
            }
        /*      if(Collections.frequency(al,'0')==0 || Collections.frequency(al,'1')==0)
            {
                System.out.println("No");
            }
            else */if(Math.abs(Collections.frequency(al,'0') - Collections.frequency(al,'1')) == s.length()-1)
            {
                System.out.println("Yes");
            }
            else
            {
                System.out.println("No");
            }
        }
    }
}
