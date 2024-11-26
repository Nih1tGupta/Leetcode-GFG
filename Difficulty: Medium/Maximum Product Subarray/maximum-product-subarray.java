//{ Driver Code Starts
import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine());
        while (tc-- > 0) {
            String[] inputLine = br.readLine().split(" ");
            int n = inputLine.length;
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }
            System.out.println(new Solution().maxProduct(arr));
        }
    }
}

// } Driver Code Ends


class Solution {
    // Function to find maximum product subarray
    int maxProduct(int[] arr) {
        // code here
         int n=arr.length;
        int pref=1, suff=0;
        int ans=Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            if(pref==0) pref=1;
            if(suff==0) suff=1;
            
            pref *= arr[i];
            suff *= arr[n-1-i];
            
            ans = Math.max(ans, pref);
            ans = Math.max(ans, suff);
        }
        return ans;
    }
}