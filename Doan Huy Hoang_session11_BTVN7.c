#include <stdio.h>

int main() {
    int n;

    printf("Nhap so thang: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Loi: can it nhat 2 thang de tinh toan!\n");
        return 0;
    }

    int arr[n];
    printf("Nhap gia co phieu tung thang:\n");
    for (int i = 0; i < n; i++) {
        printf("Thang %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int giaMua = arr[0];
    int loMin = 1000000000;
    int thangBan = -1;
    int coLai = 0;

    for (int i = 1; i < n; i++) {
        int chenhlech = arr[i] - giaMua; 
        if (chenhlech >= 0) {
        } else if (-chenhlech < loMin) {
            loMin = -chenhlech;
            thangBan = i + 1;
        }
    }

    if (thangBan == -1 && coLai == 0) {
        printf("Tat ca cac thang deu lo nhieu hon hoac bang thang khac.\n");
    } else if (thangBan != -1) {
        printf("Ban se lo it nhat la %d neu ban vao thang %d.\n", loMin, thangBan);
    } else {
        printf("Ban co the ban co lai, khong can lo!\n");
    }

    return 0;
}

