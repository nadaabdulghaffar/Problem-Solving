/**
 * Time complexity O(n)
 * Space complexity O(1)
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
const isSubsequence = (s, t) => {
    if (s.length === 0) return true;

    let sIndex = 0;
    for (let tIndex = 0; tIndex < t.length; tIndex++) {
        if (t[tIndex] === s[sIndex]) {
            sIndex++;
            if (sIndex === s.length) return true;
        }
    }
    return false;
};
