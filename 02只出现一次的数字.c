int singelNumber(int* nums, int numsSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        nums[i + 1] = nums[i] ^ nums[i + 1];
    }
    return nums[numsSize - 1];
}