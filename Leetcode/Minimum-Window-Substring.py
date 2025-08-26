class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if len(t) > len(s):
            return ""
        
        tCount, window = {}, {}
        left = 0
        result , resultLen =  [-1, -1] , float('inf')

        for char in t:
            tCount[char] = 1 + tCount.get(char, 0)
        have , need = 0, len(tCount)
        
        for right in range(len(s)):
            char = s[right]
            window[char] = 1 + window.get(char, 0)
            
            if char in tCount and window[char] == tCount[char]:
                have += 1

            while have == need:
                if (right - left + 1) < resultLen:
                    resultLen = right - left + 1
                    result = [left, right]
                
                window[s[left]] -= 1
                if s[left] in tCount and window[s[left]]  < tCount[s[left]]:
                    have -= 1
                left  += 1

        left , right = result
        return s[left:right+1] if resultLen != float('inf') else ""