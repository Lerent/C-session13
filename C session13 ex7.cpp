#include <stdio.h>

void TaoMaTran(int Hang, int Cot, int maTran[][100]) {
    printf("Nhap gia tri cho ma tran (%d x %d):\n", Hang, Cot);
    for (int i = 0; i < Hang; ++i) {
        for (int j = 0; j < Cot; ++j) {
            printf("Nhap phan tu tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }
}
void InMaTran(int Hang, int Cot, int maTran[][100]) {
    printf("Ma tran (%d x %d) la:\n", Hang, Cot);
    for (int i = 0; i < Hang; ++i) {
        for (int j = 0; j < Cot; ++j) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}
int main() 
{
    int Hang, Cot;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &Hang);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &Cot);

    if (Hang <= 0 || Cot <= 0 || Hang > 100 || Cot > 100) {
        printf("Kich thuoc ma tran khong hop le! Vui long nhap so hang va so cot trong khoang 1 den 100.\n");
        return 1;
    }

    int maTran[100][100];
    TaoMaTran(Hang, Cot, maTran);
    InMaTran(Hang, Cot, maTran);

    return 0;
}

