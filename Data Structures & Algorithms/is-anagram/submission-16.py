class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        dict_s = {}
        dict_t = {}

        if len(s) != len(t):
            return False
        if len(s) == 1 and s[0] == t[0]:
            return True
        for i in range(len(s)):
            if s[i] not in dict_s:
                dict_s[s[i]]=1
            else:
                dict_s[s[i]]+=1
        for i in range(len(t)):
            if t[i] not in dict_t:
                dict_t[t[i]]=1
            else:
                dict_t[t[i]]+=1
        return dict_s == dict_t

            
        