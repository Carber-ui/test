#include <stdio.h>


int main(void) {

    int n;
    puts ("1���� n������ ���� ���մϴ�.");
    printf("n�� �� : ");
    scanf("%d", &n);

    int sum = 0; // ����
    int i = 1;     // �ݺ� ����
    int sum2 = 0;  // for �ݺ����� ����
    int sum3 = 0;  // ���� ������ �̿��� ����

    while (1 <= n){
                    // i�� n ������ ���� �ݺ�
        sum += i;   // sum�� i�� �߰�
        i++;        // i�� 1 ����
    }
    for (int i = 1; i <= n; i++) {
        sum += i;

    }
    sum3 = n * (n + 1) / 2;
    

    printf("while 1���� %d������ ������ %d�Դϴ�.\n", n, sum);
    printf("for 1���� %d������ ������ %d�Դϴ�.\n", n, sum);
    printf("���� ������ �̿��� 1���� %d������ ������ %d�Դϴ�.\n", n, sum3);
    return 0;
}