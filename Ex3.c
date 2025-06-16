#include<Stdio.h>
int* mallocArray(int n) {
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        arr[i] = i;
    }
    return arr;
}//Biến arr cấp phát một mảng gồm n phần tử kiểu int ==> Độ phức tạp không gian của hàm là O(n)
