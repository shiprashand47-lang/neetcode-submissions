class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        dict = {}
        for value in nums:
            if value in dict:
                return True
            else:
                dict[value]=1
        return False
        