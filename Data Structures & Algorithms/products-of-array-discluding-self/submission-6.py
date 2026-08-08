class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        n = len(nums)
        res = 1
        zerocnt = 0

        ans = [0]*n
        for i in range(0,n):
            if nums[i]!=0:
                res *= nums[i]
            else:
                zerocnt+=1
        
        if zerocnt > 1:
            return ans

        for i in range(0,n):
            if zerocnt == 1:
                if nums[i] == 0:
                    ans[i] = res
                else:
                    ans[i] = 0
            else:
                ans[i] = res // nums[i]
           

        return ans


        