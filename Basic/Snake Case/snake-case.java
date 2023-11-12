//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
import java.lang.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(read.readLine());
            String S = read.readLine();

            Solution ob = new Solution();
            
            System.out.println(ob.snakeCase(S,n));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution {
    static String snakeCase(String S , int n) {
        return S.toLowerCase().replaceAll(" ","_");
    }
};