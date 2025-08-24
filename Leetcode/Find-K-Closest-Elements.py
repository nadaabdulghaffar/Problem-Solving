class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:    
        def binarySearch(arr, target):
            low, high = 0, len(arr) - 1
            while low <= high:
                mid = (low + high) // 2
                if arr[mid] == target:
                    return mid
                elif arr[mid] > target:
                    high = mid - 1
                else:
                    low = mid + 1

            return low  

        index = binarySearch(arr, x)  
        left, right = index - 1, index

        while right - left - 1 < k:
            if left < 0:  
                right += 1
            elif right >= len(arr):
                left -= 1
            elif abs(arr[left] - x) <= abs(arr[right] - x):
                left -= 1
            else:
                right += 1

        return arr[left+1:right]