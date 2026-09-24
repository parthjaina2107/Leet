class Solution:
    def smallestIndex(self, nums: List[int]) -> int:
        
        for i in range(len(nums)):
            sum=0
            val = nums[i]
            while(val>0):

                sum = sum+val%10
                val=val//10
            if(sum==i):
                return i
                    
        return -1
            