def threeSum(nums):
    nums.sort()
    res = []
    for i in range(len(nums)-2):
        if i>0 and nums[i] == nums[i-1]:
            continue
        l, r = i + 1, len(nums) - 1
        while(l < r):
            sum = nums[i] + nums[l] + nums[r]
            if sum == 0:
                res.append([nums[i], nums[l], nums[r]])
                l += 1
                while nums[l] == nums[l-1] and l < r:
                    l += 1
            elif(sum > 0):
                r -= 1
            else:
                l += 1
    
    return res