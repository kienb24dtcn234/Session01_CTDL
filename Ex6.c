#include<Stdio.h>
int countOccurrence(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}
//Thời gian (Time complexity):Chúng ta duyệt qua toàn bộ mảng, so sánh từng phần tử với x.Số phép so sánh tối đa là n
//Độ phức tạp thời gian: O(n)

//Không gian (Space complexity):Chỉ dùng một biến đếm phụ trợ, không cần bộ nhớ lớn thêm
//Độ phức tạp không gian: O(1)
