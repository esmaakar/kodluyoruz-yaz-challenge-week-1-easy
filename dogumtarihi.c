#include <stdio.h>
#include <stdlib.h>




int main() {
	int dogumtarihi,yil,yas;
	printf("hangi tarihte dogdunuz?");
	scanf("%d",&dogumtarihi);
	printf("su an hangi yildasiniz?");
	scanf("%d",&yil);
	yas=yil-dogumtarihi;
	printf("yasiniz %d dir.",yas);

	return 0;
}
