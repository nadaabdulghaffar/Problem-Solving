class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        i, j = 0, 0
        merged = []

        # Merge until one array runs out
        while i < m and j < n:
            if nums1[i] <= nums2[j]:
                merged.append(nums1[i])
                i += 1
            else:
                merged.append(nums2[j])
                j += 1

        # Append leftovers
        while i < m:
            merged.append(nums1[i])
            i += 1
        while j < n:
            merged.append(nums2[j])
            j += 1

        # Copy back into nums1
        for k in range(m + n):
            nums1[k] = merged[k]
