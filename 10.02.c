#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

int main(void){
    puts ("10������ ��� ��ȯ�մϴ�");
    int retry;

    do {
        unsigned int no;
        int cd;
        char cno[512];

        printf("��ȯ�ϴ� ���� �ƴ� ����: ");
        scanf("%u", &no);

        do {
            printf("� ������ ��ȯ�ұ��? (2~36): ");
            scanf("%d", &cd);
        } while (cd < 2 || cd > 36);
    } while (retry);
}