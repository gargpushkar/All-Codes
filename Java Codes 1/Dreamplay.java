import java.util.*;

public class Dreamplay 
{
    static String stringGameWinner(String s, String p){
        // Complete this function
        //Wrong
        if(s.contains(p))
        {
            return "Amanda";
        }
        return "Steven";
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            String s = in.next();
            String p = in.next();
            String result = stringGameWinner(s, p);
            System.out.println(result);
        }
    }
}
