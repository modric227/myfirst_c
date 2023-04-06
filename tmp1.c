#include <stdio.h>
int main() {

	int dlarma = 0;
	int time = 0;
	scanf("%d",&time);

	dlarma = time * 7530;
	
	dlarma += (time / 8 )*1000;
	printf("%d",dlarma);



    return 0;
}