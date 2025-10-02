#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

int main(void){
    puts ("10진수를 기수 변환합니다");
    int retry;

    do {
        unsigned int no;
        int cd;
        char cno[512];

        printf("변환하는 음이 아닌 정수: ");
        scanf("%u", &no);

        do {
            printf("어떤 진수로 변환할까요? (2~36): ");
            scanf("%d", &cd);
        } while (cd < 2 || cd > 36);
    } while (retry);
}