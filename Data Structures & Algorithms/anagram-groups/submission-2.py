class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        ans = []
        dict_word ={}
        for word in strs:
            sorted_word = ''.join(sorted(word))
            
            if sorted_word not in  dict_word:
                dict_word[sorted_word] =  [word]
            else:
                dict_word[sorted_word].append(word)
        for key,value in dict_word.items():
            ans.append(value)
        return ans

        