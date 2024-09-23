class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:

        if not nums:
            return None
        L = len(nums)
        nums.sort(key = lambda x : 1 if x==val else 0 )

        while (bool(nums) and nums[-1] == val):
            nums.pop()


        return len(nums)


        