#include <iostream>
#include <string>
#include <regex>
#define testfunc
using namespace std;


class Library {
private:
	string Date_foundation;
	string Name;
	int Readers;
	string Adress;
	int Floor;
public:
	int setDate_foundation(string date_current) {
		int error_current{ 0 };
		smatch m;
		if (regex_search(date_current, m, regex("(0[1-9]|1[012])[.](0[1-9]|[12][0-9]|3[01])[.](19[0-9][0-9]|20[0-9][0-9]|[0-9]{2,4})(?!\\d)"))){
			Date_foundation = date_current;
			error_current = 0;
		}
		else {
			error_current = -1;
		};
		return error_current;
	}
	string getdate() {
		return Date_foundation;
	}

	int setFloor(int floor_current) {
		int error_current{ 0 };
		if (floor_current < 1 || floor_current > 5) {
			
			error_current = -1;
		}
		else {
			error_current = 0;
			Floor = floor_current;
		};
		return error_current;
	}
	int getFloor() {
		return Floor;
	}


};
void testingsetFloor(Library object) {

	int floor_current = 1;
	if (object.setFloor(floor_current) == 0) {
		cerr << "" << floor_current << " done" << endl;
	}
	else {
		cerr << "" << floor_current << " fail" << endl;
	}

	floor_current = 3;
	if (object.setFloor(floor_current) == 0) {
		cerr << "" << floor_current << "done" << endl;
	}
	else {
		cerr << "" << floor_current << " fail" << endl;
	}

	floor_current = -100;
	if (object.setFloor(floor_current) == 0) {
		cerr << "" << floor_current << " done" << endl;
	}
	else {
		cerr << "" << floor_current << " fail" << endl;
	}
}

void testingsetdate(Library object) {

	string date_current = "11.01.2003";
	if (object.setDate_foundation(date_current) == 0) {
		cerr << "" << date_current << " done" << endl;
	}
	else {
		cerr << "" << date_current << " fail" << endl;
	}

	date_current = "05.31.2023";
	if (object.setDate_foundation(date_current) == 0) {
		cerr << "" << date_current << " done" << endl;
	}
	else {
		cerr << "" << date_current << " fail" << endl;
	}

	date_current = "01.01.1854";
	if (object.setDate_foundation(date_current) == 0) {
		cerr << "" << date_current << " done" << endl;
	}
	else {
		cerr << "" << date_current << " fail" << endl;
	}

	date_current = "49.12.2002";
	if (object.setDate_foundation(date_current) == 0) {
		cerr << "" << date_current << " done" << endl;
	}
	else {
		cerr << "" << date_current << " fail" << endl;
	}

	date_current = "04.34.2022";
	if (object.setDate_foundation(date_current) == 0) {
		cerr << "" << date_current << " done" << endl;
	}
	else {
		cerr << "" << date_current << " fail" << endl;
	}

	date_current = "01.01.19999";
	if (object.setDate_foundation(date_current) == 0) {
		cerr << "" << date_current << " done" << endl;
	}
	else {
		cerr << "" << date_current << " fail" << endl;
	}

	date_current = "1.05.2000";
	if (object.setDate_foundation(date_current) == 0) {
		cerr << "" << date_current << " done" << endl;
	}
	else {
		cerr << "" << date_current << " fail" << endl;
	}

	date_current = "05.4.1999";
	if (object.setDate_foundation(date_current) == 0) {
		cerr << "" << date_current << " done" << endl;
	}
	else {
		cerr << "" << date_current << " fail" << endl;
	}
}




int main() {
	Library test;

#ifdef testfunc
	testingsetFloor(test);
	cerr << endl;
	testingsetdate(test);
#endif
}