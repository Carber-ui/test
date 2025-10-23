#include <stdio.h>
#include <stdlib.h>

int bin_search(const int a[], int n, int key){
    int pl = 0;
    int pr = n - 1;

    do {
        int pc = (pl + pr) / 2;
        if (a[pc] == key)
            return pc;
        else if (a[pc] < key)
            pl = pc + 1;
        else
            pr = pc - 1;
    } while (pl <= pr);

    return -1;
}

int main(void){
    int nx, ky;
    puts("���� �˻�");
    printf("��� ����: ");
    scanf("%d", &nx);
    int *x = calloc(nx, sizeof(int));
    for (int i = 0; i < nx; i++){
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }
    printf("�˻��� ��: ");
    scanf("%d", &ky);
    int idx = bin_search(x, nx, ky);
    if (idx == -1)
        puts("�� ���� ��Ұ� �����ϴ�.");
    else
        printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);
    free(x);

    return 0;
}