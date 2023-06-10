int i = 2;
int numeroprimo(int numero) {
	if (numero % 2 == 0) {
		return 0;
	}
	else {
		while (numero % i != 0) {
			i++;
			if (numero == i) {
				return 1;
			}
	        else if (numero % i == 0) {
				return 0;
			}
			else if (numero == 1) {
				return 1;
			}
		}

	}

}

int main(void) {
	 unsigned int numero1 = 49;
	 numeroprimo(numero1);
	 
}