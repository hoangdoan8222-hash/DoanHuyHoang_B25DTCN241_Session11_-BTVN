#include <stdio.h>

int main() {
    int a[] = {5, 9, 1, 9, 3, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);

    if (n < 2) {
        printf("Loi: Mang phai co it nhat 2 phan tu!\n");
        return 0;
    }

    int max1, max2;

    if (a[0] > a[1]) {
        max1 = a[0];
        max2 = a[1];
    } else {
        max1 = a[1];
        max2 = a[0];
    }

    for (int i = 2; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2 && a[i] < max1) {
            max2 = a[i];
        }
    }

    if (max1 == max2)
        printf("Khong co phan tu lon thu hai trong mang.\n");
    else
        printf("Phan tu lon nhat: %d\nPhan tu lon thu hai: %d\n", max1, max2);

    return 0;
}

