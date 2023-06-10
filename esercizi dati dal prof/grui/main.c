#include <iup.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	IupOpen(&argc, &argv);
	dlg = IupDialog(NULL);
	IupSetAttribute(dig, "TITLE", "Titolo della finestra");
	IupShowXY(dlg,)
	IupClose();

   return EXIT_SUCCESS;
}