class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        
        i = 0
        j = 1
        k = len(nums)-1

        ans = []
        nums = sorted(nums)
        
        while i < len(nums)-2 :
            
            if i>0 and nums[i]==nums[i-1]:
                i = i+1
                continue
            j = i+1
            k = len(nums)-1
            while j < k:
               
                sum3 = nums[i]+nums[j]+nums[k]
                if sum3 < 0:
                    j = j+1
                elif sum3 > 0:
                    k = k-1
                elif sum3 == 0:
                 
                    ans.append([nums[i],nums[j],nums[k]])
                    j = j+1
                    k = k-1

                    while j<k and nums[j]==nums[j-1]:
                        j+=1
                    while j<k and nums[k]==nums[k+1]:
                        k-=1
                

            i = i + 1

        return ans
        