#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[3];
	int b,i=0;
	printf("�п�J�T�Ӽƭ�\n");
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
		b=b+a[i];
   }

	printf("�T�ƭȥ[�`��:%d",b);
	
	return 0;
}
