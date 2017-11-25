#ifndef __OPERATOR__
#define __OPERATOR__

using namespace std;
#include <iostream>

class Set {
public:
	Set(int[], int);	// default constructor
	Set(const Set&);	//copy constructor
	~Set();		//destructor
	int getSize() const; // return size
	Set& operator=(const Set& other);
	bool operator==(const Set& other);
	bool operator!=(const Set&other);
	Set& operator++();
	Set operator++(int);
	Set& operator--();
	Set operator--(int);
	int& operator[](size_t index);
	int operator[](size_t index) const;
	bool operator<(const Set& other) const;
	bool operator>(const Set& other) const;

private:
	int size; // set size
	int *ptr; //pointer to first element of set

};

ostream& operator<<(ostream &out, const Set & other);
istream& operator >> (istream& in, Set& other);
#endif // !__OPERATOR__