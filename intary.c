#include <stdio.h>
#include <stdlib.h>


int maxof(const int a[], int elem_num) {
    int max = a[0];
    for (int i = 1; i < elem_num; i++){
        if (a[i] > max) max = a[i];

    }
    return max;
}

int main(void) {
    int number;
    printf("사람 수:");
    scanf("%d", &number);
    int *height = calloc(number, sizeof(int));
    printf("%d명의 키를 입력하세요.\n", number);
    for (int i = 0; i < number; i++) {
        printf("height[%d]:", i);
        scanf("%d", &height[i]);
    }
    printf("최댓값은 %d 입니다.\n", maxof(height, number));
    free(height);
    return 0;
}