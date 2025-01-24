/**
 * Time complexity O(n)
 * Space complexity O(1)
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isSubsequence = function(s, t) {
    if (s.length === 0) return true;
    
    let pointer1 = 0;
    for(let i = 0; i < t.length; i++){
        if(t[i] === s[pointer1]){
            pointer1++;
            if (pointer1 === s.length)
                return true;
        }
    }
	return false;
};