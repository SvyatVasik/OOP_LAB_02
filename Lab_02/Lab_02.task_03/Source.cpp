#include <iostream>
#include <conio.h>

using namespace std;

class rectangle
{
public:
	rectangle();
	rectangle(int h, int w);
	~rectangle();

	int s();
	int p();
	void SetH(int H);
	void SetW(int W);
	int GetH();
	int GetW();






private:

	int *h,
		*w;


};

rectangle::rectangle()
{
	this->h = new int(0);
	this->w = new int(0);




}

rectangle::rectangle(int H, int W)
{
	this->h = new int(H);
	this->w = new int(W);




}

int rectangle::GetH()
{
	return *h;

}

int rectangle::GetW()
{
	return *w;

}

int rectangle::s()
{
	return(*h * *w);

}

int rectangle::p()
{
	return(2 * (*h + *w));

}
void rectangle::SetH(int H)
{
	*h = H;

}

void rectangle::SetW(int W)
{
	*w = W;

}






rectangle::~rectangle()
{
	delete h;
	delete w;


}

int main()
{
	int H, W;
	rectangle *sv = new rectangle;
	cout << "**************************************************"<<endl;
	cout<<"* " << "Please,enter height of the rectangle: ";
	cin >> H;
	cout<<"* "<< "Please,enter width of the rectangle: ";
	cin >> W;

	sv->SetW(W);
	sv->SetH(H);
	cout << "__________________________________________________"<<endl;
	cout<<"* " << "Square of the rectangle is: " << sv->s() << endl << endl;
	cout<<"* " << "Perimeter of the rectangle is :"<< sv->p() << endl << endl;
	cout << "**************************************************";

	system("pause");
	return 0;







}