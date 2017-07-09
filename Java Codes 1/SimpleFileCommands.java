import java.util.*;

public class SimpleFileCommands 
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        HashMap<String,Integer>map = new HashMap<>();
        while(t-->0)
        {
            String choice = sc.next();
            String action = sc.next();
            if(choice.contentEquals("crt"))
            {
                if(map.containsKey(action))
                {
                    int a = map.get(action);
                    map.put(action, a+1);
                    System.out.println("+ "+action+"("+(a+1)+")");
                }
                else
                {
                    System.out.println("+ "+action);
                    map.put(action, 0);
                }
            }
            else if(choice.contentEquals("del"))
            {
                if(map.containsKey(action))
                {
                    if(map.get(action)==0)
                    {
                        System.out.println("- "+action);
                        map.remove(action);
                    }
                    else
                    {
                        
                    }
                }
                else
                {
                    
                }
            }
            else
            {
                
            }
        }
    }
}
