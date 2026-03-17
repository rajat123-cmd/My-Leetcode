class Solution:
    def largestSubmatrix(self, matrix):
        m = len(matrix)
        n = len(matrix[0])
        
        # build heights
        for i in range(1, m):
            for j in range(n):
                if matrix[i][j] == 1:
                    matrix[i][j] += matrix[i-1][j]
        
        ans = 0
        
        for row in matrix:
            row.sort(reverse=True)
            
            for i in range(n):
                ans = max(ans, row[i] * (i + 1))
        
        return ans