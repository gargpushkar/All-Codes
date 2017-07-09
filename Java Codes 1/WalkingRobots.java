import java.util.*;

public class WalkingRobots 
{
    static int howManyCollisions(String s){
        // Complete this function
        StringBuilder sb = new StringBuilder(s);
        int l=s.length();
        int ans=0;
        for(int i=0;i<l;i++)
        {
         //   System.out.println(sb);
            if(sb.charAt(i)=='r')
            {
                for(int j=i;j<l;j++)
                {
                    if(sb.charAt(j) == 'l')
                    {
                            ans+=2;
                        sb.replace(j, j+1, "C");
                        break;
                    }
                    else if(sb.charAt(j)=='C' || sb.charAt(j)=='d')
                    {
                        ans+=1;
                        break;
                    }
                }
            }
            else if(sb.charAt(i)=='l')
            {
                for(int j=i;j>=0;j--)
                {
                    if(sb.charAt(j) == 'r')
                    {
                            ans+=2;
                       sb.replace(j, j+1, "C");
                        break;
                    }
                    else if(sb.charAt(j)=='C' || sb.charAt(j)=='d')
                    {
                        ans+=1;
                        break;
                    }
                }
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            String s = in.next();
            // Returns the number of times moving robots collide.
            int result = howManyCollisions(s);
            System.out.println(result);
        }
    }
}
