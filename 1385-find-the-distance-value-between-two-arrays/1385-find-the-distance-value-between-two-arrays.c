int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d) {
    int ans = 0;
    int tmp = 0;
    for (int i=0;i<arr1Size;i++) {
        tmp = 0;
        for (int j=0;j<arr2Size;j++) {
            if (abs(arr1[i]-arr2[j]) > d) tmp += 1;
        }
        if (tmp == arr2Size) ans += 1;
    }
    return ans;
}