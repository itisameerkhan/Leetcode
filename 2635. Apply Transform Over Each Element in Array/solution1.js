/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    arr = arr.map((element, index) => fn(element, index));
    return arr;
};