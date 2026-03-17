class Solution:
    def minOperations(self, s):
        op1 = 0   # pattern starting with '0'
        op2 = 0   # pattern starting with '1'
        
        for i in range(len(s)):
            
            # expected for pattern 010101...
            expected1 = str(i % 2)
            if s[i] != expected1:
                op1 += 1
            
            # expected for pattern 101010...
            expected2 = str((i + 1) % 2)
            if s[i] != expected2:
                op2 += 1
        
        return min(op1, op2)