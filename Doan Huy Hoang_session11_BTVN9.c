#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 2, 4, 1, 5, 3, 5};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                
                for (int k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;     
                j--;     
            }
        }
    }

    printf("\nMang sau khi loai bo trung lap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

