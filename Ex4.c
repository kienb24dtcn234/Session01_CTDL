#include<Stdio.h>
int sumLoop(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}//Cách 1 (vòng lặp): Độ phức tạp thời gian là O(n) vì cần lặp n lần để cộng từng số. Độ phức tạp không gian thường là O(1)

int sumFormula(int n) {
    return n * (n + 1) / 2;
}//Cách 2 (dùng công thức): Độ phức tạp thời gian là O(1). Độ phức tạp không gian cũng là O(1)
