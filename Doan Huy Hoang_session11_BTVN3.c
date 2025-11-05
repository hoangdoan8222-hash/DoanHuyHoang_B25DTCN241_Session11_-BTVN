#include <stdio.h>

int main() {
    int a[] = {1, 3, 5, 7, 9, 11, 13, 15}; 
    int n = sizeof(a) / sizeof(a[0]);
    int x;
    int left, right, mid;
    int found = 0;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = (left + right) / 2;

        if (a[mid] == x) {
            printf("Tim thay %d tai chi so %d\n", x, mid);
            found = 1;
            break;
        } else if (a[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found)
        printf("Khong tim thay phan tu %d trong mang\n", x);

    return 0;
}

