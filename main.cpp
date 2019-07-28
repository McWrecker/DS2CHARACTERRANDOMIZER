// PleaseHelp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <string>
#include <ctime>
#include <random>

using namespace std;

int end;

string myInString;
int sl;
int vig = 6;
int enr = 6;
int vit = 6;
int att = 6;
int str = 6;
int dex = 6;
int adp = 6;
int inl = 6;
int fth = 6;

int totalPoints;
int sumSoFar;

void print_stats()
{
	//cout << "Soul Level: " << sl << endl;
	cout << "Vigor: " << vig << endl;
	cout << "Endurance: " << enr << endl;
	cout << "Vitality: " << vit << endl;
	cout << "Attunement: " << att << endl;
	cout << "Strength: " << str << endl;
	cout << "Dexterity: " << dex << endl;
	cout << "Adaptability: " << adp << endl;
	cout << "Intelligence: " << inl << endl;
	cout << "Faith: " << fth << endl;
}

void randomize_stats()
{
	int rnum;

	for (totalPoints = sl - 1; totalPoints > 0; totalPoints -= 1) {

		random_device rd;
		mt19937 mt(rd());
		uniform_real_distribution<double> distribution(1, 10);

		rnum = distribution(mt);

		if (rnum == 1 && vig < 99) {
			vig += 1;
		}
		else if (rnum == 2 && enr < 99) {
			enr += 1;
		}
		else if (rnum == 3 && vit < 99) {
			vit += 1;
		}
		else if (rnum == 4 && att < 99) {
			att += 1;
		}
		else if (rnum == 5 && str < 99) {
			str += 1;
		}
		else if (rnum == 6 && dex < 99) {
			dex += 1;
		}
		else if (rnum == 7 && adp < 99) {
			adp += 1;
		}
		else if (rnum == 8 && inl < 99) {
			inl += 1;
		}
		else if (rnum == 9 && fth < 99) {
			fth += 1;
		}
	}

	print_stats();
	system("pause");
}

void soul_level()
{
	cout << "Start as Deprived and use the stats you get." << endl;
	cout << "What soul level character would you like to create?(Between 1 and 200, 155 is recommended for arena PvP)" << endl;

	cout << "" << endl;

	print_stats();

	cout << "" << endl;

	cout << "Soul Level: ";

	getline(cin, myInString);
	stringstream(myInString) >> sl;

	if (sl <= 0 || sl > 200) {
		cout << "Please enter a number between 1 and 200." << endl;
		soul_level();
	}

	randomize_stats();
}

int main()
{
	soul_level();
}