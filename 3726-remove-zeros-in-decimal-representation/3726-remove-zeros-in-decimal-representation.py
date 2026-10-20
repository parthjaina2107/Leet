class Solution:
    def removeZeros(self, n: int) -> int:
        ans = 0
        count = 0
        while(n>0):
            if(n%10==0):
                n=n//10
            else:
                rem=n%10
                ans = ((10**count) * rem) + ans
                count =count+1 
                n=n//10
        return ans