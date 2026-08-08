class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:

        l = 0
        r = 0
        dict_char = set()
        max_len = 0

        while l <=r and r < len(s):
            if s[r] not in dict_char:
                dict_char.add(s[r])
                max_len = max(max_len,r-l+1)
            else:
                while s[l] != s[r]:
                    dict_char.remove(s[l])
                    l = l+1
                l = l+1
            
            r = r+1
        
        return max_len
