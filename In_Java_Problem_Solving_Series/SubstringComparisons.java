import java.io.*;
import java.util.*;

public class SubstringComparisons {

    public static void main(String[] args) throws Exception{
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        
        String s = bf.readLine();
        int k = Integer.parseInt(bf.readLine());
        
        SortedSet<String> s1 = new TreeSet<String>();
        for(int i =0; i<=s.length()-k ; i++){
            s1.add(s.substring(i,i+k));
            
        }
        
        System.out.println(s1.first());
        System.out.println(s1.last());
    }
}
