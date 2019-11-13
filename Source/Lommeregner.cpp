#include <iostream>
#include <math.h> 
#include <sstream> 

using namespace std;
double Dval;
double Aval;
double Bval;
double Cval;
string CloseOrNotCin;


// Funktionen for hvis der er 2x'er
void ToX() {
	// Minus-x udregning
	double Minusx1 = -Bval - sqrt(Dval);
	double Minusx2 = 2 * Aval;
	double MinusR = Minusx1 / Minusx2;

	// Plus-x udregning
	double Plusx1 = -Bval + sqrt(Dval);
	double Plusx2 = 2 * Aval;
	double PlusxR = Plusx1 / Plusx2;

	// Udregning af d
	cout << "Udregning af d: \n" << endl;
	cout << Bval << "^2 " << "- " << "4*" << Aval << Cval << " = " << Dval << "\n" << endl;

	// Udregning af x2
	cout << "Udregning af x2: \n" << endl;

	cout << "-" << Bval << " + kvrod(" << Dval << ") = " << Minusx1 << "\n" << Aval << "^2 = " << Minusx2 << endl;
	cout << Minusx1 << "/" << Minusx2 << endl;
	cout << MinusR << "\n" << endl;

	// Udregning af x1
	cout << "Udregning af x1: \n" << endl;

	cout << "-" << Bval << " - kvrod(" << Dval << ") = " << Plusx1 << "\n" << Aval << "^2 = " << Plusx2 << endl;
	cout << Plusx1 << "/" << Plusx2 << endl;
	cout << PlusxR << "\n" << endl;

	// Endeligt resultat
	cout << "x=" << MinusR << " eller " << "x=" << PlusxR << "\n" << endl;

	cout << "//////////////////////////////////" << endl;
	cout << "Lommeregner af Jonas Glymov" << endl;
}

// Funktion for hvis diskriminanten er 0
void EnX() {

	double EnX = -Bval / 2 * Aval;
	cout << "Udregning af x1: \n" << endl;
	cout << "-" << Bval << " / " << "2*" << Aval << endl;
	cout << "x= " << EnX << endl;

}
void Luk() {
	Luk();
}


int main()
{



	// Get ax value
	cout << "//////////////////////////////\n" << endl;
	cout << "  indtast a, b og c vaerdier\n" << endl;
	cout << "       ax^2 + bx + c = 0\n" << endl;
	cout << "//////////////////////////////\n" << endl;
	cout << "								\n" << endl;

	cout << "indtast venligts 'a'x vaerdien af din ligning" << endl;
	cin >> Aval;
	cout << "								\n" << endl;
	// Get bx value
	cout << "indtast venligts 'a'x vaerdien af din ligning" << endl;
	cin >> Bval;
	cout << "								\n" << endl;
	// Get c value
	cout << "indtast venligts 'a'x vaerdien af din ligning" << endl;
	cin >> Cval;
	cout << "								\n" << endl;
	// Regn 'd' Værdien
	Dval = Bval * Bval - 4 * Aval * Cval;

	cout << "								\n" << endl;
	// Interface
	cout << "//////////////////////////////\n" << endl;
	cout << "          UDREGNING\n" << endl;
	cout << "//////////////////////////////\n" << endl;
	cout << "								\n" << endl;
	// Diskriminent tjekker
	if (Dval < 0) {
		cout << "Udregning af d: \n" << endl;
		cout << Bval << "^2 " << "- " << "4*" << Aval << Cval << " = " << Dval << "\n" << endl;
		cout << "Ligningen har ingen losninger, da deskriminanten er negativ!\n" << endl;
		cout << "								\n" << endl;
		cout << "								\n" << endl;
		cout << "//////////////////////////////////" << endl;
		cout << "   Lommeregner af Jonas Glymov" << endl;
		cout << "//////////////////////////////////" << endl;
		cout << "								\n" << endl;
		cout << "Vil du lukke programmet? 'y' eller 'n':" << endl;
	}
	// Tjekker hvorvidt d er over 0
	else if (Dval > 0) {


		ToX();

	}
	//// Tjekker hvorvidt d er 0
	else if (Dval == 0) {
		EnX();

	}

	/* Ja eller nej til at lukke program :))*/
	cin >> CloseOrNotCin;
	if (CloseOrNotCin == "n") {
		cout << "			" << endl;
		for (int i = 0; i < 15; i++) {
			cout << "			\n" << endl;
		}
		main();
	}
	else if (CloseOrNotCin == "y") {
		exit(0);
	}
	else if (CloseOrNotCin == "plot") {
		cout << "YEEET"<< endl;
	}
	else if (CloseOrNotCin != "n" && "y" && "plot") {
		exit(0);
	}

}

void Luk() {
	cin >> CloseOrNotCin;
	if (CloseOrNotCin == "n") {
		cout << "			" << endl;
		for (int i = 0; i < 15; i++) {
			cout << "			\n" << endl;
		}
		main();
	}
	else if (CloseOrNotCin == "y") {
		exit(0);
	}
	else if (CloseOrNotCin == "plot") {
		main();
	}
	else if (CloseOrNotCin != "n" && "y" && "plot") {
		exit(0);
	}

	}