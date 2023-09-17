var filter = function(arr, fn) {
    let output = arr.filter(fn);
    return output;
};

function greaterThan10(n)
{
    return n > 10;
}

let arr = [0,10,20,30];
let output = filter(arr,greaterThan10);
console.log(output)