#include <stdio.h>

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
int idx = search(x, nx, ky);
if (idx == -1)
    puts("�� ���� ��Ұ� �����ϴ�.");
else
    printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);
    free(x);

return 0;
}
