class Solution:
    def uniquePaths(self, grid):
        if grid[0][0]==1:
            return 0
        hth=len(grid)
        wth=len(grid[0])
        from functools import lru_cache
        @lru_cache(None)
        def dp(x=wth-1,y=hth-1):
            nonlocal grid
            if x==0 and y==0:
                return 1
            ret=0
            if y-1>=0 and grid[y-1][x]==0:
                ret+=dp(x,y-1)
            if x-1>=0 and grid[y][x-1]==0:
                ret+=dp(x-1,y)
            return ret
        return dp()