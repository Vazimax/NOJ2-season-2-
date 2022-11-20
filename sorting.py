nums = [42,5,12,8,2435,76,-123,765,34532,99]

def sort(nums):
    for i in range(len(nums)):
        for j in range(len(nums)-1):
            if nums[j] < nums[j+1]:
                swap = nums[j+1]
                nums[j+1] = nums[j]
                nums[j] = swap
    return nums

res = sort(nums)
print(res)