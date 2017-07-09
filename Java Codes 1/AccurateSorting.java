import java.util.*;

public class AccurateSorting 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int g = sc.nextInt();
        while(g-->0)
        {
            int count=1;
            int n=sc.nextInt();
            int arr[] = new int[n];
            for(int i=0;i<n;i++)
            {
                arr[i] = sc.nextInt();
            }
            int i=0;
            while(i<n-2)
            {
                if(arr[i] == 0&& arr[i+1] == 0&& arr[i+2] == 0)
                {
                    i++;
                    count++;
                }
                else if(arr[i] == 0&& arr[i+1] == 0&& arr[i+2] == 1)
                {
                    if(i+3 < n)
                    {
                        if(arr[i+3] == 0)
                        {
                            count+=2;
                            i+=3;
                        }
                        else
                        {
                            i+=3;
                        }
                    }
                    else
                    {
                        i+=3;
                    }
                    
                }
                else if(arr[i] == 0&& arr[i+1] == 1&& arr[i+2] == 0)
                {
                    arr[i+1] = 0;
                    i++;
                    count++;
                }
                else if(arr[i] == 0&& arr[i+1] == 1&& arr[i+2] == 1)
                {
                    i+=3;
                }
                else if(arr[i] == 1&& arr[i+1] == 0&& arr[i+2] == 0)
                {
                    i+=1;
                }
                else if(arr[i] == 1&& arr[i+1] == 0&& arr[i+2] == 1)
                {
                    i+=1;
                }
                else if(arr[i] == 1&& arr[i+1] == 1&& arr[i+2] == 0)
                {
                    i+=2;
                }
                else
                {
                    i+=3;
                }
            }
            if(count%2==0)
            {
                System.out.println("Alice");
            }
            else
            {
                System.out.println("Bob");
            }
        }
    }
}
