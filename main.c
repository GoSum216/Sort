#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include "bubbleSort.h"
//#include "selectSort.h"
//#include "insertSort.h"
//#include "quickSort.h"

int n;

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

void print(int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(void) {
    srand(time(NULL));

    printf("������� ���������� ����� � ������� � ������������ �����: ");
    int r;
    scanf("%d", &n);
    scanf("%d", &r);

    int *a;
    a = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        a[i] = rand() % (r + 1);
    }

    print(a);

    //bubble(a, n);              //���������� ���������
    //selection(a, n);           //���������� �������
    //insert(a, n);              //���������� ���������
    //quicksort(a, 0, n-1);      //������� ����������
    /////////////////////////////////////////

    print(a);

    return 0;
}