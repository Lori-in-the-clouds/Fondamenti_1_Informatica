int doppiofattoriale(int n) {
	int risultato = 1;

	if (n == 1) {
		return 1;
	}
	else if (n < 0) {
		return -1;
	}
	else if (n == 0) {
		return 0;
	}
	else if (n % 2 == 0) {
		for (int i = 0; i < n; i = i + 2) {
			if (n - (i) > 1) {
				risultato = risultato * (i + 2);

			}
			else if (n - (i) == 0) {
				risultato = risultato;
			}
		}
		return risultato;

	}
	else if (n % 2 != 0) {
		for (int i = 0; i < n; i = i + 2) {
			if (n - (i) > 1) {
				risultato = risultato * (i + 3);
			}
			else if (n - (i) == 0) {
				risultato = risultato;
			}
		}
		return risultato;
	}
}