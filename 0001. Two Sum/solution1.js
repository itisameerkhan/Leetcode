let twoSum = function(nums,target)
{
    for(let i=0;i<nums.length;i++)
    {
        for(let j=0;j<nums.length;j++)
        {
            if(nums[i]+nums[j]==target) 
            return [i,j];
        }
    }
    return [-1,-1];
};

nums = [2,7,11,15];
target = 9;
let sol = twoSum(nums,target);
console.log(sol);