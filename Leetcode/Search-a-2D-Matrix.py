class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        leftOut, rightOut = 0 , len(matrix) - 1

        while leftOut <= rightOut:
            midOut = (leftOut + rightOut) // 2

            if matrix[midOut][0] > target:
                rightOut = midOut - 1
            elif matrix[midOut][-1] < target:
                leftOut = midOut + 1
            else:
                leftIn = 0
                rightIn = len(matrix[midOut]) - 1 
                while leftIn <= rightIn:
                    midIn = (leftIn + rightIn) // 2
                    
                    if matrix[midOut][midIn] > target:
                        rightIn = midIn - 1
                    elif matrix[midOut][midIn] < target:
                        leftIn = midIn + 1
                    else:
                        return True
                return False
        return False

   