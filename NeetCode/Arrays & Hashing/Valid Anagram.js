/**
 * time complexity O(nlogn + mlogm)
 * space complexity O(1)
 */

class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        let s1 = s.split('').sort().join('');
        let t1 = t.split('').sort().join('');
        if (s1 == t1)
            return true;
        return false
    }
}
