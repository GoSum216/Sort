void insert(int a[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && a[j] < a[j-1]; j--) {
            int c = a[j];
            a[j] = a[j-1];
            a[j-1] = c;
        }
    }
}
