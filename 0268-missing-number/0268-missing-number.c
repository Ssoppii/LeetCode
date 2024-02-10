int missingNumber(int* nums, int numsSize) {
    int ans = numsSize;
    for (int i=0;i<numsSize;i++) {
        bool is_found = false;
        for (int j=0;j<numsSize;j++) {
            if (i == nums[j]) {
                is_found = true;
                break;
            }
        }
        if (is_found == false) ans = i;
    }
    return ans;
}