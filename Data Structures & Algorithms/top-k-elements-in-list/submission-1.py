class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        d = {}
        ans = []
        for num in nums:
            if num not in d:
                d[num]=1
            else:
                d[num]+=1
        
        sorted_dict = dict(sorted(d.items(),key = lambda x: x[1],reverse=True))
        for key,value in sorted_dict.items():
            if k == 0:
                break
            ans.append(key)
            k-=1
        return ans

