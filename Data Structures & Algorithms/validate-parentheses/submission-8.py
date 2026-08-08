class Solution:
    def isValid(self, s: str) -> bool:
        
        stack = []
        set_open = {'{','(','['}
        dict_close = {'}':'{',
                    ')':'(',
                    ']':'['}
        for i in range(len(s)):
            if s[i] in set_open:
                stack.append(s[i])
            elif s[i] in dict_close:
                if len(stack)!=0:
                    if stack[-1]==dict_close[s[i]]:
                        stack.pop()
                    else:
                        return False
                else:
                    return False
        
        if not stack:
            return True
        else:
            return False
