# 11. Container With Most Water

def most_water(heights):
    
    max_water = 0
    # for i in range(0, len(heights)):
    l, r = 0, len(heights) - 1
    while l < r:
        min_height = min(heights[l], heights[r])
        horizontal_dif = r - l
        max_water = max(max_water, min_height * horizontal_dif)
        if heights[l] < heights[r]:
            l += 1
        else:
            r -= 1
    
    return max_water

arr = [1,7,2,5,12,3,500,500,7,8,4,7,3,6]
print(most_water(arr))