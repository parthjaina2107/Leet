
class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        seen = {}

        for i in range(len(nums)):
            j = target - nums[i]

            if j in seen:
                return [seen[j], i]

            seen[nums[i]] = i

        return []
