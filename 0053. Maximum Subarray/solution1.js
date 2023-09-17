let maxSubArray = function(nums)
{
    let maxSum = -Infinity;
    let currSum = 0;
    for(let i=0;i<nums.length;i++)
    {
        currSum = Math.max(currSum + nums[i],nums[i]);
        maxSum = Math.max(currSum,maxSum);
    }
    return maxSum;
};

let nums = [-2,1,-3,4,-1,2,1,-5,4];

console.log(maxSubArray(nums));