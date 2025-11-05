#include <stdio.h>

int main() {
    int a[] = {1, 5, 2, 3, 5, 1, 2, 5, 1};
    int n = sizeof(a) / sizeof(a[0]);

    int i, j;
    int maxCount = 0;
    int phanTu = a[0];

    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count > maxCount) {
            maxCount = count;
            phanTu = a[i];
        }
        
        
    }

    printf("Phan tu xuat hien nhieu nhat la: %d\n", phanTu);
    printf("So lan xuat hien: %d\n", maxCount);

    return 0;
}

