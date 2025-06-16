#include<Stdio.h>
int findMostFrequentElement(const vector<int>& arr) {
    unordered_map<int, int> frequency;
    int maxFreq = 0;
    int mostFrequent = arr[0];
    for (int num : arr) {
        frequency[num]++;
        if (frequency[num] > maxFreq) {
            maxFreq = frequency[num];
            mostFrequent = num;
        }
    }
    return mostFrequent;
}
/*
Phân tích độ phức tạp thuật toán:
1. Thời gian (Time Complexity):
   - Duyệt qua mảng để đếm tần suất: O(n), với n là số phần tử trong mảng
   - Mỗi thao tác trên hash map (tìm kiếm, chèn, cập nhật) có độ phức tạp trung bình O(1)
   - Do đó, tổng độ phức tạp thời gian là O(n)

2. Không gian (Space Complexity):
   - Sử dụng hash map để lưu tần suất: O(k), với k là số phần tử duy nhất trong mảng
   - Trong trường hợp xấu nhất (tất cả phần tử đều khác nhau), k = n
   - Do đó, độ phức tạp không gian là O(n)
*/
