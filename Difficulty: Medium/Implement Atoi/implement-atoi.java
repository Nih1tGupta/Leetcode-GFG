//{ Driver Code Starts
// Initial template for JAVA

import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t > 0) {
            String str = sc.nextLine();

            Solution obj = new Solution();
            int num = obj.myAtoi(str);
            System.out.println(num);
            System.out.println("~");
            t--;
        }
    }
}
// } Driver Code Ends


class Solution {
    public int myAtoi(String s) {
        s = s.trim();
        if (s.isEmpty()) return 0;

        int i = 0;
        boolean negative = false;
        if (s.charAt(0) == '-' || s.charAt(0) == '+') {
            negative = (s.charAt(0) == '-');
            i++;
        }

        long result = 0; 
        while (i < s.length() && Character.isDigit(s.charAt(i))) {
            result = result * 10 + (s.charAt(i) - '0');

            if (result > Integer.MAX_VALUE) {
                return negative ? Integer.MIN_VALUE : Integer.MAX_VALUE;
            }

            i++;
        }

        result = negative ? -result : result;

        return (int) result;
    }
}