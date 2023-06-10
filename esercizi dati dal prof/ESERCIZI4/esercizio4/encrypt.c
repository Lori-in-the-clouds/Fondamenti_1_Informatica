void encrypt(char* s, unsigned int n) {
	for (int i = 0; i < n; i++) {
		s[i] = s[i] ^ 0xAA;
		*s = s[i];
	}
	
}    
