/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    /* nums is array and target is the "total" that two of the nums add up to
       return an array that contains the two indices of the two numbers that add up 
       to the target. Each input has one solution
    */

    // inefficent way: double for loop then return the i and j value when the target if found, aka create an array with size of two and return the pointer that points to that array
    for (int i = 0; i < numsSize; i++) {
        for (int j = i+1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* returnAns = malloc(2 * sizeof(int));
                returnAns[0] = i;
                returnAns[1] = j;
                *returnSize = 2;
                return returnAns;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
