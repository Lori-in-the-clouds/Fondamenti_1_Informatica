#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
 bool triangolare(int n) {
	 if (n <= 0) {
		 return false;
	 }
	 if (n == 1) {
		 printf("%c", '*');
	  }
	 int i = 0;
	 while (n>=0) {
		 n = n - i;
		 if (n < 0) {
			 return false;
		 }
		 i++;
	 }
	 return true;
 }