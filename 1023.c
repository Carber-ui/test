#include <stdio.h>

int main(void){
int nx, ky;
puts("선형 검색");
printf("요소 개수: ");
scanf("%d", &nx);
int *x = calloc(nx, sizeof(int));
for (int i = 0; i < nx; i++){
    printf("x[%d]: ", i);
    scanf("%d", &x[i]);
    }
printf("검색할 값: ");
scanf("%d", &ky);
int idx = search(x, nx, ky);
if (idx == -1)
    puts("그 값의 요소가 없습니다.");
else
    printf("%d은 x[%d]에 있습니다.\n", ky, idx);
    free(x);

return 0;
}
