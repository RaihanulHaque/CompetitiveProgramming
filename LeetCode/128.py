# Leetcode 128 - LONGEST CONSECUTIVE SEQUENCE
arr = [0,3,2,5,4,6,1,1]
def longestConsecutive(nums) -> int:
        nums = set(nums)
        longest = 0
        count = 1
        for i in nums:
            # print(i-1)
            if i-1 not in nums:
                length = 0
                while (i+length) in nums:
                    length += 1
                longest = max(length, longest)
            # else:
            #     count = 0
        return longest


print(longestConsecutive(arr))