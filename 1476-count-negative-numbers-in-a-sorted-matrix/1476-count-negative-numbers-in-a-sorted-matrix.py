class Solution(object):
    def countNegatives(self, grid):
        rows = len(grid)
        col = len(grid[0])
        count = 0
        for i in range (rows):
            l=0
            r=col-1
            while l<=r:
                mid = l + (r-l)//2
                if grid[i][mid]<0:
                    r=mid-1
                else:
                    l = mid+1
            
            count = count + col - l
        return count