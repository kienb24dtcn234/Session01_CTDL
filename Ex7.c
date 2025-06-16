#include<Stdio.h>
// Cách 1: Sử dụng tập hợp (Hash Set)
bool check_duplicate_hash(const vector<int>& arr) {
    unordered_set<int> seen;
    for (int num : arr) {
        if (seen.find(num) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}//Cách 1 (Hash Set): Độ phức tạp thời gian là O(n) vì duyệt mảng một lần, thao tác trên unordered_set có độ phức tạp trung bình O(1). Độ phức tạp không gian là O(n) do lưu trữ tối đa n phần tử

// Cách 2: Sắp xếp và so sánh
bool check_duplicate_sort(vector<int> arr) {
    sort(arr.begin(), arr.end());
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] == arr[i-1]) {
            return true;
        }
    }
    return false;
}//Cách 2 (Sắp xếp): Độ phức tạp thời gian là O(n log n) do bước sắp xếp chiếm ưu thế. Độ phức tạp không gian là O(1) nếu sửa mảng gốc, hoặc O(n) nếu tạo bản sao
