'''Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]'''

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        # Step 1: Get the length of the input list
        n = len(nums)

        # Step 2: Create two helper arrays:
        # 'left' will store the product of all numbers to the left of each index.
        # 'right' will store the product of all numbers to the right of each index.
        left = [1] * n   # Start with all 1s
        right = [1] * n  # Start with all 1s

        # Step 3: Create the final result array to hold the output
        result = [0] * n

        # ===========================
        # Step 4: Fill the 'left' array
        # ===========================
        # For each number in the list, calculate the product of all numbers to its left.
        # Start from index 1 because there is nothing to the left of the first number.
        for i in range(1, n):
            left[i] = left[i - 1] * nums[i - 1]  # Multiply the left product by the previous number

        # Example after this loop (if nums = [1, 2, 3, 4]):
        # left = [1, 1, 2, 6]
        # Explanation: 
        # - left[0] = 1 (no numbers to the left)
        # - left[1] = 1 * nums[0] = 1
        # - left[2] = left[1] * nums[1] = 1 * 2 = 2
        # - left[3] = left[2] * nums[2] = 2 * 3 = 6

        # ===========================
        # Step 5: Fill the 'right' array
        # ===========================
        # For each number in the list, calculate the product of all numbers to its right.
        # Start from the second-to-last index because there is nothing to the right of the last number.
        for i in range(n - 2, -1, -1):
            right[i] = right[i + 1] * nums[i + 1]  # Multiply the right product by the next number

        # Example after this loop (if nums = [1, 2, 3, 4]):
        # right = [24, 12, 4, 1]
        # Explanation:
        # - right[3] = 1 (no numbers to the right)
        # - right[2] = right[3] * nums[3] = 1 * 4 = 4
        # - right[1] = right[2] * nums[2] = 4 * 3 = 12
        # - right[0] = right[1] * nums[1] = 12 * 2 = 24

        # ===========================
        # Step 6: Calculate the final result
        # ===========================
        # For each index, multiply the corresponding values in 'left' and 'right'
        for i in range(n):
            result[i] = left[i] * right[i]

        # Example result (if nums = [1, 2, 3, 4]):
        # result = [24, 12, 8, 6]

        # Step 7: Return the final result
        return result
