import java.util.*;

public class RemoveAdjacentDuplicatesInString {
	public static void main(String args[]) {

		Scanner s = new Scanner(System.in);
		String input = "caaabbbaacdddd";//s.next();
		int l = input.length();
		if (l == 0)
			return;
		Stack<Character> stack = new Stack();
		char prev = input.charAt(0);
		stack.push(prev);
		for (int i = 1; i < l; i++) {
			char curr = input.charAt(i);
			if (!stack.isEmpty() && curr == stack.peek())
				stack.pop();
			else if (prev != curr)
				stack.push(curr);
			prev = curr;

		}
		StringBuilder ans = new StringBuilder();

		while (!stack.isEmpty())
			ans.append(stack.pop());

		System.out.println(ans.reverse());

	}
}