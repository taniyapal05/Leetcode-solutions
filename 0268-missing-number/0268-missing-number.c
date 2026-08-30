int missingNumber(int* nums, int numsSize) {
    int s = 0, sz = numsSize;
    for (; numsSize-- ; s += *nums++);
    return sz * (sz + 1) / 2 - s;
}