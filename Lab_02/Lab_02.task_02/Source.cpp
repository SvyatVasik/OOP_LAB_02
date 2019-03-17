#include<iostream>

using namespace std;

class Time {
private:
	int *hour;
	int *minute;
	int *second;
public:
	Time();
	Time(int h, int m, int s);
	Time(const Time &one);
	~Time();
	void SetHour(int svhour);
	void SetMinute(int svminute);
	void SetSecond(int svsecond);
	
	int GetHour();
	int GetMinute();
	int GetSecond();
};

Time::Time()
{
	this->hour = new int(0);
	this->minute = new int(0);
	this->second = new int(0);
}

Time::Time(int h, int m, int s)
{
	this->hour = new int(h);
	this->minute = new int(m);
	this->second = new int(s);
}

Time::Time(const Time &sv)
{
	hour = new int(*sv.hour);
	minute = new int(*sv.minute);
	second = new int(*sv.second);
}

Time::~Time()
{
	delete hour;
	delete minute;
	delete second;
}

void Time::SetHour(int svhour)
{
	if (svhour < 0 || svhour > 23)
	{
		throw "Некоректне значення годин";
	}

	*hour = svhour;
}

void Time::SetMinute(int svminute)
{
	if (svminute < 0 || svminute > 59)
	{
		throw "Некоректне значення хвилин";
	}

	*minute = svminute;
}

void Time::SetSecond(int svsecond)
{
	if (svsecond < 0 || svsecond > 59)
	{
		throw "Некоректне значення секунд";
	}

	*second = svsecond;
}

int Time::GetHour()
{
	return *hour;
}

int Time::GetMinute()
{
	return *minute;
}

int Time::GetSecond()
{
	return *second;
}

int main(void)
{
	Time *sv = new Time;
	int hour = 0, minute = 0, second = 0;
	
	cout << "Please,Enter the time:" << endl;
	cout << "Hour: ";
	cin >> hour;
	sv->SetHour(hour);
	cout << "Minute: ";
	cin >> minute;
	sv->SetMinute(minute);
	cout << "Second: ";
	cin >> second;
	sv->SetSecond(second);

	
	cout << endl << "Time:" << endl;
	cout << "*******************************" << endl;
	cout<<"* " << sv->GetHour() << " hours " << sv->GetMinute() << " minutes " << sv->GetSecond() << " seconds" << endl;
	cout<<"* " << sv->GetHour() << ":" << sv->GetMinute() << ":" << sv->GetSecond() << endl;
	cout << "*******************************" << endl;
	
	
	system("pause");
	return 0;
}