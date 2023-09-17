var reduce = function(nums, fn, init) {
    let val = init;
    for(let i=0;i<nums.length;i++)
    {
        val = fn(val,nums[i]);
    }
    return val;
};

function sum(a,b) { return a+b; }

let nums = [1,2,3,4];
let init = 0;

console.log(reduce(nums,sum,init));