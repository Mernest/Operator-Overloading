#include "Set.h"

//Default Constructor
Set::Set(int a[], int a_size) {

	ptr = new int[a_size];
	size = a_size;
	for (size_t i{ 0 }; i < size; ++i) {
		ptr[i] = a[i];
	}
}
//Copy Constructor
Set::Set(const Set &a)
{
	this->size = 0;
	this->ptr = nullptr;
	*this = a;
}
//Destructor
Set::~Set()
{
	delete[] ptr;
}

//Get Size accessing function
int Set::getSize() const
{
	return size;
}
// Assignment operator overloading
Set & Set::operator=(const Set & other)
{
	if (size != other.size) {
		delete[] ptr;
		ptr = new int[other.size];
		size = other.size;
	}

	for (size_t i{ 0 }; i < size; ++i) {
		(*this)[i] = other[i];
	}
	return *this;
}
//Equal operator overloading
bool Set::operator==(const Set & other)
{
	if (size != other.size) {
		return false;
	}

	for (size_t i{ 0 }; i < size; ++i) {
		if ((*this)[i] != other[i])
			return false;
	}

	return true;

}
//Returns opposite of previous function
bool Set::operator!=(const Set & other)
{
	return !(*(this) == other);
}
//Pre-Increment operator overloading
Set & Set::operator++()
{
	for (size_t i{ 0 }; i < size; ++i) {
		++ptr[i];
	}

	return *this;
}

//Post-Increment operator overloading
Set Set::operator++(int)
{
	Set b(nullptr, 0);
	b = (*this);
	++(*this);

	return b;
}

//Post-decrement operator overloading
Set & Set::operator--()
{
	for (size_t i{ 0 }; i < size; ++i) {
		--ptr[i];
	}
	return *this;
}

//Post-decrement operator overloading
Set Set::operator--(int)
{
	Set b(nullptr, 0);
	b = (*this);
	--(*this);

	return b;
}

//Accessing index of the set
int & Set::operator[](size_t index)
{
	return ptr[index];
}

int Set::operator[](size_t index) const
{
	return ptr[index];
}

//Comparison "smaller than" operator overloading
bool Set::operator<(const Set& other)const {
	int sum1{ 0 }, sum2{ 0 };
	for (size_t i{ 0 }; i < size; ++i) {
		sum1 += (*this)[i];
	}
	for (size_t i{ 0 }; i < other.size; ++i) {
		sum2 += other.ptr[i];
	}
	cout << "Sum of first set: " << sum1 << "	" << "Sum of second set: " << sum2 << endl;
	if (sum1 < sum2)
		return true;
	else
		return false;
}
//Comparison operator that return opposite of previous function
bool Set::operator>(const Set& other)const {

	return (other < *this);
}

//Output stream for a class
ostream& operator<<(ostream& out1, const Set& other) {
	for (size_t i{ 0 }; i < other.getSize(); ++i) {
		if (i != 0 && i % 5 == 0)
			out1 << endl;
		out1 << other[i] << ',';
	}
	return out1;
}
//Input stream for a class, prompts the user for values
istream& operator >> (istream& in, Set& other) {
	for (size_t i{ 0 }; i < other.getSize(); ++i) {
		in >> other[i];
	}
	return in;
}