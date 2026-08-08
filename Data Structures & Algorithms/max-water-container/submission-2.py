class Solution:
    def maxArea(self, heights: List[int]) -> int:
        i = 0
        j = len(heights)-1
        max_water = 0

        while i < j:
            bet_water = (j-i)*min(heights[i],heights[j])
            max_water = max(max_water,bet_water)

            if heights[i] < heights[j]:
                i = i+1
            else:
                j = j-1
        return max_water
        