''' Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct. '''
import time

def containsDuplicateSlow(nums):
    for i in range(0, len(nums)):
        if nums.count(nums[i]) > 1:
            return True  
    return False

def containsDuplicate(nums):
    hashset = set()
    for n in nums:
        if n in hashset:
            return True
        hashset.add(n)
    return False
        
nums = [1,2,3,1]
nums1 = [1,2,3,4]
nums2 = [1,1,1,3,3,4,3,2,4,2]
nums3 = []

for i in range(0, 10000):
    nums3.append(i)

start = time.perf_counter()
print(containsDuplicateSlow(nums))
print(containsDuplicateSlow(nums1))
print(containsDuplicateSlow(nums2))
print(containsDuplicateSlow(nums3))
stop = time.perf_counter()
print(f"Slow func: {stop - start}")

start1 = time.perf_counter()
print(containsDuplicate(nums))
print(containsDuplicate(nums1))
print(containsDuplicate(nums2))
print(containsDuplicate(nums3))
stop1 = time.perf_counter()
print(f"Fast func: {stop1 - start1}")