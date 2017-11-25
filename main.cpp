#include "Set.h"
#include <iostream>

using namespace std;

int main() {

	int myarray[] = { 1, 2, 35, 64 , 7,4,7 };
	int size1 = 7;
	int myarray1[] = { 1, 2, 35,1,4,5,7 };
	int size2 = 7;
	Set mySet(myarray, size1);
	Set myCopySet = mySet;
	Set mySet1(myarray1, size2);
	cout << "Showing values of initial Set" << endl;
	cout << mySet << endl << endl;
	cout << "= Operator test\n" << myCopySet << endl << endl;
	cout << "== Operator test\n" << (mySet == myCopySet) << endl << endl;
	cout << "++Operator test\n" << (++mySet) << endl << endl;
	cout << "Operator++ test\n" << (mySet++) << endl << endl;
	cout << "Checking if values have been incremented correctly afterwards" << endl << mySet << endl << endl;
	cout << "Prompting user to input values into set: ";
	cin >> mySet;
	cout << "New elements in mySet:" << endl << mySet << endl << endl;
	cout << "-- Operator test\n" << (--mySet) << endl << endl;
	cout << "Operator-- test\n" << (mySet--) << endl << endl;
	cout << "Checking if values have been decremented correctly afterwards" << endl << mySet << endl << endl;
	cout << "Checking if set1 is smaller than set2: " << (mySet<mySet1) << endl;




}