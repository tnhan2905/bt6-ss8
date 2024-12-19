#include <stdio.h>

int main() {
    int n = 4;
    int maTran[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int tong = 0;
    printf("Duong cheo chinh: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", maTran[i][i]);
        tong += maTran[i][i];
    }
    printf("\nTong cua cac phan tu: %d\n", tong);
    return 0;
}
