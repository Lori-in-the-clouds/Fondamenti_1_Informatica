#define _CTR_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int main(void) {
	int x = 266;
	char s[] = "prova";
	FILE* f;

	f = fopen("out1", "wt");  //legge e scrive nei file 
	fprint(f, "%i\n%s", x, s); //  ci trovo 266
	fclose(f);					//  prova

	f = fopen("out2", "wb");   //apre il file in scrittura in modalità non tradotta (binaria)
	fprint(f, "%i\n%s", x, s); // 266
	fclose(f);

	f = fopen("out3", "wt");	//legge e scrive nei file
	fwrite(&x, sizeof x, 1, f);	
	fwrite(&s, sizeof s, 1, f);
	fwrite(&s, sizeof s, 1, f);
	fclose(f);

	f = fopen("out4", "wb");
	fwrite(&x, sizeof x, 1, f);
	fwrite(&s, sizeof s, 1, f);
	fwrite(&s, sizeof s, 1, f);
	fclose(f);

	return 0;


}