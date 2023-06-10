int sommacifre(numero) {
	int somma=0;
	if (numero == 0) {
		somma = 0;
		
	}
	else {
		while (numero != 0) {
			somma += (numero % 10);
			numero = numero / 10;
		}
	}
	return somma;
}

int main(void) {
	int numero = 123;
	int risulato = sommacifre(numero);
	return 0;
}