class Solution(object):
    def searchRange(self, nums, target):
        result = []
        for i in range(0,len(nums)):
            if(nums[i]==target):
                result.append(i)
                break
        for i in range(len(nums)-1,-1,-1):
            if(nums[i]==target):
                 result.append(i)
                 break
        if(len(result) == 0):
            result = [-1,-1]
        return result

