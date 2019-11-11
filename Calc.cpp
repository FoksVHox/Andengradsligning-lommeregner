#include <iostream>
#include <math.h> 

using namespace std;
double Dval;
double Aval;
double Bval;
double Cval;


	// Funktionen for hvis der er 2x'er
void ToX() {
	// Minus-x udregning
	double Minusx1 = -Bval-sqrt(Dval);
	double Minusx2 = 2*Aval;
	double MinusR = Minusx1 / Minusx2;

	// Plus-x udregning
	double Plusx1 = -Bval + sqrt(Dval);
	double Plusx2 = 2 * Aval;
	double PlusxR = Plusx1 / Plusx2;

	// Udregning af d
	cout << "Udregning af d \n" << endl;
	cout << Bval<<"^2 "<<"- "<< "4*"<<Aval << Cval << " = "<< Dval<<"\n" <<endl;

	// Udregning af x2
	cout << "Udregning af x2 \n" << endl;

	cout << "-" << Bval << " + kvrod(" << Dval << ") = " << Minusx1 << "\n" << Aval << "^2 = " << Minusx2 << endl;
	cout << Minusx1 << "/" << Minusx2 << endl;
	cout << MinusR << "\n" << endl;

	// Udregning af x1
	cout << "Udregning af x1 \n" <<endl;

	cout << "-" << Bval << " - kvrod(" << Dval<< ") = "<< Plusx1 <<"\n"<< Aval << "^2 = " << Plusx2 << endl;
	cout <<Plusx1 <<"/"<<Plusx2 << endl;
	cout << PlusxR <<"\n"<<endl;

	// Endeligt resultat
	cout <<"x=" << MinusR << " eller " << "x="<< PlusxR <<endl;

}

	// Funktion for hvis diskriminanten er 0
void EnX() {

	double EnX = -Bval / 2 * Aval;
	cout << "Udregning af x1 \n" << endl;
	cout <<"-" << Bval << " / " << "2*"<<Aval << endl;
	cout <<"x= "<< EnX << endl;
}

int main()
{
	// Get ax value
	cout << "Type in 'ax' value" << endl;
	cin >> Aval;

	// Get bx value
	cout << "Type in 'bx' value" << endl;
	cin >> Bval;

	// Get c value
	cout << "Type in 'c' value" << endl;
	cin >> Cval;

	// Regn 'd' Værdien
	Dval = Bval*Bval - 4 * Aval * Cval;
	
	// Interface
	cout << "//////////////////\n" << endl;
	cout << "UDREGNING\n" << endl;
	cout << "//////////////////\n" << endl;

	// Diskriminent tjekker
	if (Dval < 0) {
		cout << "Udregning af d \n" << endl;
		cout << Bval << "^2 " << "- " << "4*" << Aval << Cval << " = " << Dval << "\n" << endl;
		cout << "Ligningen har ingen losninger" << endl;
}
	// Tjekker hvorvidt d er over 0
		else if (Dval > 0) {

		
		ToX();

}
	//// Tjekker hvorvidt d er 0
		else if (Dval == 0) {
		EnX();

}

}
