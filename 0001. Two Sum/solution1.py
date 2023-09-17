class Solution(object):
    def twoSum(self, nums, target):
        for i in range(len(nums)):
            for j in range(len(nums)):
                if(i != j):
                    if(nums[i] + nums[j] == target):
                        result = [i,j]
                        return result
                        
            
        
nums = [2,7,11,15]
target = 9
solution = Solution()
result = solution.twoSum(nums,target)
print(result)