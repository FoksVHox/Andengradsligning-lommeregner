#include <iostream>
#include <math.h> 

using namespace std;
double Dval;
double Aval;
double Bval;
double Cval;

void to() {
	//Minusx
	double Minusx1 = -Bval-sqrt(Dval);
	double Minusx2 = 2*Aval;
	double MinusR = Minusx1 / Minusx2;
	//Plusx
	double Plusx1 = -Bval + sqrt(Dval);
	double Plusx2 = 2 * Aval;
	double PlusxR = Plusx1 / Plusx2;

	//Udregning af d
	cout << "Udregning af d \n" << endl;
	cout << Bval<<"^2 "<<"- "<< "4*"<<Aval << Cval << " = "<< Dval<<"\n" <<endl;

	//Udregning af x1
	cout << "Udregning af x1 \n" <<endl;

	cout << "-" << Bval << " - kvrod(" << Dval<< ") = "<< Plusx1 <<"\n"<< Aval << "^2 = " << Plusx2 << endl;
	cout <<Plusx1 <<"/"<<Plusx2 << endl;
	cout << PlusxR <<"\n"<<endl;

	//Udregning af x2
	cout << "Udregning af x2 \n" << endl;

	cout << "-" << Bval << " + kvrod(" << Dval << ") = " << Minusx1 << "\n" << Aval << "^2 = " << Minusx2 << endl;
	cout << Minusx1 << "/" << Minusx2 << endl;
	cout << MinusR << endl;

}

void en() {
	return;
}

int main()
{
	//Get ax value
	cout << "Type in 'ax' value" << endl;
	cin >> Aval;

	//Get bx value
	cout << "Type in 'bx' value" << endl;
	cin >> Bval;

	//Get c value
	cout << "Type in 'c' value" << endl;
	cin >> Cval;

	//Calculating 'D' value
	Dval = Bval*Bval - 4 * Aval * Cval;
	
	//Text for udregning
	cout << "//////////////////\n" << endl;
	cout << "UDREGNING\n" << endl;
	cout << "//////////////////\n" << endl;
	//Checking whether or not eqution is legal
	if (Dval < 0) {
		cout << "Udregning af d \n" << endl;
		cout << Bval << "^2 " << "- " << "4*" << Aval << Cval << " = " << Dval << "\n" << endl;
		cout << "Ligningen har ingen losninger" << endl;
}
	//Tjekker hvorvidt Dval er over 0
		else if (Dval > 0) {

		
		to();

}
	////Tjekker hvorvidt Dval er 0
		else if (Dval = 0) {
		cout << "Det ene x er saledes:" << endl;
		en();
				cout << "Det ene x er saledes:" << endl;
}

}
