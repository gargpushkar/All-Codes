import java.util.*;

public class AndrewandSpecialNumbers 
{
    public static void main(String args[] ) throws Exception 
    {
 /*       Scanner sc = new Scanner(System.in);
        int p=sc.nextInt();
        int k = sc.nextInt();
        int arr[] = new int[p];
        int sum=0,count=1;
        for(int i=0;i<p;i++)
        {
            arr[i]= sc.nextInt();
        }
        for(int i=0;i<p;i++)
        {
            sum+=arr[i];
            if(sum>k)
            {
                count++;
                sum=arr[i];
            }
            else if(sum==k)
            {
                sum=arr[i];
            }
        }
        System.out.println(count);*/
        
        /*
         * Read input from stdin and provide input before running
         * Use either of these methods for input

        //BufferedReader
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        int N = Integer.parseInt(line);
*/
        //Scanner
    /*    Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        String st = ""+N;
        if(st.contains("444") || st.charAt(0)=='4'||st.contains("5")||st.contains("6")||st.contains("7")||st.contains("8")||st.contains("9")||st.contains("2")||st.contains("3")||st.contains("0"))
        {
            System.out.println("NO");
        }
        else
            System.out.println("YES");
    */
        Scanner s = new Scanner(System.in);
        int a=0,b=0;
        String st = s.next();
        a=st.length();
        for(int i=0;i<st.length()-3;i++)
        {
            if(st.charAt(i)=='p' && st.charAt(i+1)=='e'&& st.charAt(i+2)=='a'&& st.charAt(i+3)=='r')
            {
                b=i;
                a=i+3;
                break;
            }
        }
        System.out.println((st.length()-a)*b + st.length()-a);
    }
}
