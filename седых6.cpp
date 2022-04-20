#include <iostream>
#include <cmath>
using namespace std;

class RacDrob
{
	int chisl, znam, celaya;
public:
	RacDrob(int chisl, int znam) {
		this->chisl = chisl; if (znam != 0) { this->znam = znam; }
		else { cout << "ошибка, знаменатель не может быть равен нулю! Внимание! Мы заменим его на единицу!" << endl;  this->znam = 1; }
		celaya = chisl / znam;
	}
	void SetChisl(int);
	int GetChisl();
	void SetZnam(int);
	int GetZnam();
	int GetCelaya();
	void PravDrob();
	double DesDrob();
	int OkruglDrob();
	~RacDrob() {};
};
 
void RacDrob::SetChisl(int chisl) {this->chisl = chisl; this->znam = znam;}

int RacDrob::GetChisl(){return chisl;}

void RacDrob::SetZnam(int znam) { this->znam = znam; }

int RacDrob::GetZnam(){return znam;}

int RacDrob::GetCelaya() { return celaya; }

void RacDrob::PravDrob() { celaya = chisl / znam; if (celaya != 0) { cout << celaya<<' '<<"целых "; }
chisl = chisl % znam; if (chisl % znam != 0) { cout << chisl << '/' << znam << endl; }
}
double RacDrob::DesDrob() { return (1. * chisl) / znam; }
int RacDrob::OkruglDrob() { return DesDrob() + 0.5; }
//ну, или так:
//int RacDrob::OkruglDrob(){return round( DesDrob());}


int main()
{
	setlocale(0, "");
	RacDrob dr1(8, 5);
	
	int celaya = 0;
	int chisl = 0;
	int znam = 1;
	
	cout << "значение числителя " << dr1.GetChisl() << endl << "значение знаменателя " << dr1.GetZnam() << endl;
	cout << "целая часть дроби " << dr1.GetCelaya() << endl;
	cout << "дробь после округления " << dr1.OkruglDrob() << endl;
	dr1.PravDrob();
}

