import java.util.*;
import java.lang.*;
import java.io.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
	class Res{
		int val;
	}
 
class Solution{
	int size;
	public int[] array;
	Solution(int s){
		size = s;
		array = new int[s];
	}
	int getleft(int parent){ return 2*parent+1;}
	int getright(int parent){ return 2*parent+2;}
	int getparent (int child){ return (child-1)/2;}
	
	boolean hasleft(int index){return getleft(index)<size;}
	boolean hasright(int index){return getright(index)<size;}
	boolean hasparent(int index) {return getparent(index)>=0;}
	
	int getleftval(int index) {return getleft(index);}
	int getrightval(int index) {return getright(index);}
	int getparentval(int index) {return getparent(index);}
	
	public int maxDist(){
		Res re = new Res();
		re.val = Integer.MIN_VALUE;
		maxDistH(0,re);
		return re.val;
	}
	
	int max(int a, int b){
		if(a>b){
			return a;
		} else {
			return b;
		}
	}
	
	public int maxDistH(int index, Res rev){
		
		if(!hasleft(index)&& !hasright(index)){
		    return array[index];
		}
		
		int l = maxDistH(getleft(index),rev);
		int r = maxDistH(getright(index),rev);
		
		if(hasleft(index)&&hasright(index)){
			rev.val = max(rev.val,l+r+array[index]);
		}
		return max(l,r)+array[index];
		
	}
	
	public static void main(String args[]) throws NumberFormatException, IOException{
		int t;
		int siz=0;
		Scanner scan = new Scanner(System.in);
		t = scan.nextInt();
		
	
		
		for(int j=0;j<t;j++){
	
			if(scan.hasNextInt()){
			siz = scan.nextInt();
			}
			Solution obj = new Solution(siz);
			obj.array = new int[siz];
			for(int i=0;i<siz;i++){
					if(scan.hasNextInt()){
				obj.array[i] = scan.nextInt();
				}
			}
			
			System.out.println(obj.maxDist());
		
		}
		
	}
} 
