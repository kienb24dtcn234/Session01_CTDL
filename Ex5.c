#include<Stdio.h>
void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}
//Thời gian (Time complexity): Trong trường hợp xấu nhất (mảng ngược chiều), Bubble Sort cần thực hiện so sánh và hoán đổi trong các vòng lặp, số phép tính lớn nhất khoảng n*(n-1)/2
//Độ phức tạp thời gian: O(n²)

//Không gian (Space complexity): Chỉ sử dụng một số biến tạm thời để hoán đổi, không cần thêm bộ nhớ lớn
//Độ phức tạp không gian: O(1)

