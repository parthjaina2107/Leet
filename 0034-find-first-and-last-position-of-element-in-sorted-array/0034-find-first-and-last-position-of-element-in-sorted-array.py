class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        l=[]
        new=[]
        for i in range(len(nums)-1, -1, -1):
            new.append(nums[i])
        
        if(target in nums):
            l.append(nums.index(target))
        else: return [-1,-1]

        if(target in new):
            l.append(len(nums)-1-new.index(target))

            return l