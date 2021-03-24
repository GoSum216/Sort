int partition(int a[], int l, int r) {
    int v = a[(l + r) / 2];
    int i = l;
    int j = r;
    while (i <= j) {
        while (a[i] < v)
            i++;
        while (a[j] > v)
            j--;
        if (i >= j) {
            break;
        }
        int c = a[i];
        a[i] = a[j];
        a[j] = c;
        i++;
        j++;
    }
    return j;
}

void quicksort(int a[], int l, int r) {
     if (l < r) {
        int q = partition(a, l, r);
        quicksort(a, l, q);
        quicksort(a, q + 1, r);
    }
}
