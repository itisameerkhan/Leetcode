/**
 * @param {string[]} word1
 * @param {string[]} word2
 * @return {boolean}
 */
var arrayStringsAreEqual = function(word1, word2) {
    const result1 = word1.join('');
    const result2 = word2.join('');
    return result1 === result2;
};

const word1 = ["ab", "c"]; 
const word2 = ["a", "bc"];
console.log(arrayStringsAreEqual(word1, word2));