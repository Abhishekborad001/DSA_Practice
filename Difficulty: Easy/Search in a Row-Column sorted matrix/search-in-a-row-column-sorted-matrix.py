#User function Template for python3
class Solution:
	def matSearch(self, mat, x):
		# Complete this function
		 for row in mat:
            if row[0] <= x <= row[-1]: 
                # Binary search in row
                left, right = 0, len(row)-1
                while left <= right:
                    mid = (left + right) // 2
                    if row[mid] == x:
                        return True
                    elif row[mid] < x:
                        left = mid + 1
                    else:
                        right = mid - 1
         return False