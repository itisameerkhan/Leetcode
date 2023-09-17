/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var multiply = function(num1, num2) {
    return (BigInt(num1)*BigInt(num2)).toString();
};

var result = multiply("123456789","987654321")
console.log(result)