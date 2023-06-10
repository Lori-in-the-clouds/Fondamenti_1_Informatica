#include <stdbool.h>
#include <stdlib.h>
 bool crescente(unsigned int x) 
 {
	 size_t i = 1;
	 size_t j = 10;
	 if (x / 10 == 0) {
		 return true;
	 }
	 while(1)
	 {
		unsigned int due = (x/i) % 10;
		unsigned int uno = (x / j) % 10;
		 if (due == 0 || uno == 0) {
			 break;
		 }
		 if (due != uno + 1) {
			 return false;
		 }
		 i *= 10;
		 j *= 10;

		 
	 } 
	 return true;
}