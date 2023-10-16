//{ Driver Code Starts
import java.io.*;
import java.util.*;


class IntMatrix
{
    public static int[][] input(BufferedReader br, int n, int m) throws IOException
    {
        int[][] mat = new int[n][];

        for(int i = 0; i < n; i++)
        {
            String[] s = br.readLine().trim().split(" ");
            mat[i] = new int[s.length];
            for(int j = 0; j < s.length; j++)
                mat[i][j] = Integer.parseInt(s[j]);
        }

        return mat;
    }

    public static void print(int[][] m)
    {
        for(var a : m)
        {
            for(int e : a)
                System.out.print(e + " ");
            System.out.println();
        }
    }

    public static void print(ArrayList<ArrayList<Integer>> m)
    {
        for(var a : m)
        {
            for(int e : a)
                System.out.print(e + " ");
            System.out.println();
        }
    }
}

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while(t-- > 0){
            
            int n;
            n = Integer.parseInt(br.readLine());
            
            
            int[][] grid = IntMatrix.input(br, n, n);
            
            Solution obj = new Solution();
            int res = obj.largestIsland(n, grid);
            
            System.out.println(res);
            
        }
    }
}

// } Driver Code Ends


class Solution{
    public int largestIsland(int N,int[][] grid) {
        if (grid == null || N == 0 || grid.length == 0) {
            return 0;
        }

        int islandNumber = 2;
        boolean[][] visited = new boolean[N][N];
        Map<Integer, Integer> map = new HashMap<>();
        
        int maxSize = 0;
        
        // assign island numbers
        for (int i=0; i < N; i++) {
            for (int j=0; j < N; j++) {
                if (grid[i][j] == 1) {
                    assignIslandNumber(grid, i, j, islandNumber, map);
                    
                    maxSize = Math.max(maxSize, map.getOrDefault(islandNumber, 0));
                    
                    islandNumber++;
                }
            }
        }
        
        for (int i=0; i < N; i++) {
            for (int j=0; j < N; j++) {
                if (grid[i][j] == 0) {
                    Set<Integer> seenIslands = new HashSet<>();
                    int size = 1;
                    if (i - 1 >= 0 && !seenIslands.contains(grid[i - 1][j])) {
                        size += map.getOrDefault(grid[i - 1][j], 0);
                        seenIslands.add(grid[i - 1][j]);
                    }
                    if (i + 1 < N && !seenIslands.contains(grid[i + 1][j])) {
                        size += map.getOrDefault(grid[i + 1][j], 0);
                        seenIslands.add(grid[i + 1][j]);
                    }
                    if (j - 1 >= 0 && !seenIslands.contains(grid[i][j - 1])) {
                        size += map.getOrDefault(grid[i][j - 1], 0);
                        seenIslands.add(grid[i][j - 1]);
                    }
                    if (j + 1 < N && !seenIslands.contains(grid[i][j + 1])) {
                        size += map.getOrDefault(grid[i][j + 1], 0);
                        seenIslands.add(grid[i][j + 1]);
                    }

                    
                    maxSize = Math.max(maxSize, size);
                }
            }
        }
        
        return maxSize;
    }
    
    private void assignIslandNumber(int[][] grid, int row, int col, int islandNumber, Map<Integer, Integer> map) {
        if (row < 0 || row >= grid.length || col < 0 || col >= grid.length || grid[row][col] != 1) {
            return;
        }
        
        grid[row][col] = islandNumber;

        map.put(islandNumber, map.getOrDefault(islandNumber, 0) + 1);
        
        assignIslandNumber(grid, row - 1, col, islandNumber, map);
        assignIslandNumber(grid, row + 1, col, islandNumber, map);
        assignIslandNumber(grid, row, col - 1, islandNumber, map);
        assignIslandNumber(grid, row, col + 1, islandNumber, map);

    }

}