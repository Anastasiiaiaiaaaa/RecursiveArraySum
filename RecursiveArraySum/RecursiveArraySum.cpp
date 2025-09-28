#include <iostream>

int sumArray(int arr[], int size);
int main()
{
    const int n = 5;
    int arr[n] = { 1, 2, 3, 4, 5 };
    std::cout << "Sum of array elements: " << sumArray(arr, n) << std::endl;
}
int sumArray(int arr[], int size) {
    if (size == 0) return 0;
    return arr[size - 1] + sumArray(arr, size - 1);
}