import java.util.*;

public class NumericString 
{
    
    public static int poop(String a,int k,int b, int m,HashMap<String, Integer>mp)
    {
        int num=0; int j=0;
        for(int i=k-1;i>=0;i--)
        {
            num=(int) (num + Character.getNumericValue(a.charAt(i))*(Math.pow(b, j)));
            j++;
        }
        System.out.println(num);
        int ans = num%m;
        return ans;
    }
    
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        HashMap<String, Integer>map = new HashMap<>();
        String s = sc.next();
        int k = sc.nextInt();
        int b = sc.nextInt();
        int m = sc.nextInt();
        int ans=0;
        for(int i=0;i<s.length()-k+1;i++)
        {
            if(map.containsKey(s.substring(i, i+k)))
            {
                ans+=map.get(s.substring(i, i+k));
                continue;
            }
            int g=poop(s.substring(i, i+k),k,b,m,map);
            ans+=g;
            map.put(s, g);
        }
        System.out.println(ans);
    }
}
