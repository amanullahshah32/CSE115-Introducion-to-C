void rev_arr(int arr1[], int rev_arr1[], int size) {
    for (int i = 0; i < size; i++)
        rev_arr1[i] = arr1[size - i - 1];
}
