class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        left = 0
        ans = 0
        max_freq = 0
        dictf = {}

        for right in range(len(s)):

            
            dictf[s[right]] = dictf.get(s[right],0)+1

            max_freq = max(max_freq,dictf[s[right]])

            ws = right-left+1

            if ws-max_freq > k:
                dictf[s[left]] -= 1
                left+=1
            ans = max(ans,right-left+1)
        
        return ans
            
