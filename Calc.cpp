#include <iostream>
#include <math.h> 

using namespace std;
double Dval;
double Aval;
double Bval;
double Cval;
int DvDDDal;

	// Funktionen udregner de 2 x varianter
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
	cout <<"x=" << MinusR << " eller " << "x="<< PlusxR <<"\n"<<endl;

	cout << "//////////////////////////////////" << endl;
	cout << "Lommeregner af Jonas Glymov" << endl;
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
	// Indtast a værdi
	cout << "//////////////////////////////\n" << endl;
	cout << " indtast a, b og c vaerdier\n" << endl;
	cout << "//////////////////////////////\n" << endl;
	cout << "indtast 'a' vaerdi" << endl;
	cin >> Aval;

	// Indtast b værdi
	cout << "indtast 'b' vaerdi" << endl;
	cin >> Bval;

	// Indtast c værdi
	cout << "indtast 'c' vaerdi" << endl;
	cin >> Cval;

	// Udregner d værdi
	Dval = Bval*Bval - 4 * Aval * Cval;
	
	// Interface
	cout << "//////////////////////////////\n" << endl;
	cout << "UDREGNING\n" << endl;
	cout << "//////////////////////////////\n" << endl;

	// Diskriminent tjekker
	if (Dval < 0) {
		cout << "Udregning af d \n" << endl;
		cout << Bval << "^2 " << "- " << "4*" << Aval << Cval << " = " << Dval << "\n" << endl;
		cout << "Ligningen har ingen losninger, da deskriminanten er negativ!\n" << endl;
		cout << "//////////////////////////////////" << endl;
		cout << "Lommeregner af Jonas Glymov" << endl;
}
	// Tjekker hvorvidt d er over 0
		else if (Dval > 0) {

		
		ToX();

}
	//// Tjekker hvorvidt d er 0
		else if (Dval == 0) {
		EnX();

	}
	cin >> DvDDDal;
}
