let isAnagram = function(s,t)
{
    if(s.length != t.length) return false;
    let map = new Map();
    for(let i=0;i<s.length;i++)
    {
        if(map[s[i]]) map[s[i]]++;
        else map[s[i]] = 1;
    }
    for(let i=0;i<t.length;i++)
    {
        if(map[t[i]]) map[t[i]]--;
        else return false;
    }
    return true;
};

let s = 'anagram';
let t = 'nagaram';

console.log(isAnagram(s,t));