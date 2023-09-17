let n = 10;

let createCounter = function(n)
{
    let counter = n;
    return function()
    {
        counter++;
        return counter-1;
    };
};

let output = createCounter(n);
console.log(output());
console.log(output());
console.log(output());