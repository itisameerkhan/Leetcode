Array.prototype.last = function() {
    if(this.length === 0) return -1;
    return this[this.length-1];
};

nums = [12,3,4,5,5,5,999];

console.log(nums.last());