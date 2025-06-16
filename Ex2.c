void printDouble(int n) {
    int i = 1;
    while (i < n) {
        printf("%d\n", i);
        i *= 2;
    }
}
// Vì mỗi lần lặp, i nhân đôi, bắt đầu từ 1, đến khi i >= n, số lần lặp là: O(log n)