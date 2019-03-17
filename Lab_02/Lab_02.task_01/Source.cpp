#define _USE_MATH_DEFINES

#include<iostream>
#include<math.h>

using namespace std;



class plo
{
public:
	plo();
	plo(double R, int x, int y, int z);
	plo(const plo & sv);
	~plo();

	void SetRadius(double R);
	double GetRadius();
	double Square();
	double Length();
	void SetX(int X);
	void SetY(int Y);
	void SetZ(int Z);
	int GetX();
	int GetY();
	int GetZ();

private:
	double *r;
	int *x;
	int *y;
	int *z;
};

plo::plo()
{
	this->r = new double(0);
	this->x = new int(0);
	this->y = new int(0);
	this->z = new int(0);
}

plo::plo(double R, int X, int Y, int Z)
{
	this->r = new double(R);
	this->x = new int(X);
	this->y = new int(Y);
	this->z = new int(Z);
}

plo::plo(const plo &sv)
{
	r = new double(*sv.r);
	x = new int(*sv.x);
	y = new int(*sv.y);
	z = new int(*sv.z);
}

plo::~plo()
{
	delete r;
	delete x;
	delete y;
	delete z;
}

void plo::SetRadius(double R)
{
	if (R <= 0)
	{
		throw "the radius can not be negative";
	}

	*r = R;

}

double plo::GetRadius()
{
	return *r;
}

double plo::Square() {
	return (*r * *r * M_PI);
}

double plo::Length()
{
	return (2 * *r * M_PI);
}

void plo::SetX(int X)
{
	*x = X;
}

void plo::SetY(int Y)
{
	*y = Y;
}

void plo::SetZ(int Z)
{
	*z = Z;
}

int plo::GetX()
{
	return *x;
}

int plo::GetY()
{
	return *y;
}

int plo::GetZ()
{
	return *z;
}


int main(void)
{
	int X, Y, Z;
	double R;
	plo *sv = new plo;
	cout << "Please,Enter data:" << endl;
	cout << "Radius: ";
	cin >> R;
	cout << "coordinate x = ";
	cin >> X;
	cout << "coordinate y = ";
	cin >> Y;
	cout << "coordinate z = ";
	cin >> Z;
	sv->SetRadius(R);
	sv->SetX(X);
	sv->SetY(Y);
	sv->SetZ(Z);


	cout << "****************************"<<endl;
	cout << "* "  << "Coordinates " << sv->GetX() << ";" << sv->GetY() << ";" << sv->GetZ()<< endl;
	cout << "* " << "Radius:"<< sv->GetRadius()<<endl;
	cout << "* " << "Length:"<< sv->Length()<< endl;
	cout << "* " << "Square:"<< sv->Square()<< endl;
	cout << "****************************"<<endl;

	
	system("pause");
	return 0;
}