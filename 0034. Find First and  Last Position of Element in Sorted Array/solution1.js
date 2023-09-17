/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    return [nums.indexOf(target),nums.lastIndexOf(target)];
};

let nums = [5,7,7,8,8,10]
let target = 8

console.log(searchRange(nums,target));