import java.util.*;
public class Rough 
{
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr1[]=new int[100000];
        Arrays.fill(arr1,0);
        for(int i=0;i<n;i++)
            arr1[sc.nextInt()]++;
        int arr2[]=new int[100000];
        Arrays.fill(arr2,0);
        int m = sc.nextInt();
        for(int i=0;i<m;i++)
            arr2[sc.nextInt()]++;
        for(int i=0;i<100000;i++)
        {
            if(arr1[i] != arr2[i])
            {
                System.out.print(i+" ");
            }
        }
    }
}
