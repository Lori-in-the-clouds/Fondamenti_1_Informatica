int potenza10(int grado) {
	int numelevato = 1;
	for (int i = 0; i < grado; i++) {
		numelevato = 10 * numelevato;
	}
	return numelevato;
}
int main(void) {
	int nuovo = 3;
	potenza10(nuovo);
	return 0;
}