unsigned int conta_divisori(unsigned int num, unsigned int max) {
	if (num == 0) {
		return 0;
	}
	int div = 1;
	int ris = 0;
	while (num/div>0) {
		if (num % div == 0 && div<=max) {
			ris++;
		}
		div++;
	}
	return ris;
}