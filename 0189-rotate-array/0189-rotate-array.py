class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        temp=[]
        k=k%len(nums)
        for i in range(len(nums)-k):
            temp.append(nums[i])
        
        for i in range(k):
            t=nums[-k+i]
            nums[-k+i]=nums[i]
            nums[i]=t

        for i in range(len(temp)):
            nums[len(nums)-len(temp)+i]=temp[i]

        return nums