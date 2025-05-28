class Solution(object):
    def searchMatrix(self, matrix, target):
        row = len(matrix)
        col = len(matrix[0])
        left = 0
        right =(row * col)-1

        while left<=right:
            mid = left + (right-left)//2
            row_num=mid//col
            col_num = mid%col

            if matrix[row_num][col_num]==target:
                return True
            elif matrix[row_num][col_num]>target:
                right = mid-1
            else:
                left=mid+1
        return False


