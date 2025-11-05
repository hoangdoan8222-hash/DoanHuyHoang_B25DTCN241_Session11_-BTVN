#include <stdio.h>
#include <math.h>

int main() {
    
    char ds[][20] = {"apple", "banana", "cherry", "mango", "orange"};
    int n = sizeof(ds) / sizeof(ds[0]);
    char x[100];
    int i, found = 0;

    printf("Nhap chuoi can tim: ");
    if (fgets(x, sizeof(x), stdin) == NULL) return 0;
   
    size_t len = strlen(x);
    if (len > 0 && x[len - 1] == '\n') x[len - 1] = '\0';

    for (i = 0; i < n; i++) {
        if (strcmp(ds[i], x) == 0) {
            
            printf("Tim thay '%s' tai vi tri 0-based: %d (1-based: %d)\n", x, i, i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Khong tim thay chuoi '%s' trong mang\n", x);

    return 0;
}


