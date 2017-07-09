import java.util.*;

public class AndrewtheAntCoach 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        Set<Character>set = new HashSet<>();
        for(int i=0;i<n;i++)
        {
            set.add(s.charAt(i));
        }
        System.out.println(set.size());
    }
}
