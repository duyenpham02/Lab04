/* File: VectorDriver.cpp
* Athr: Dimitri Zarzhitsky
* Date: October 16, 2002
*
* Desc: provides the basic framework and examples for an introduction to
*       the STL::vector, iterators, and the algorithms facilities.
*
* Edited by: Rafe Cooley
* Date: October 1, 2017 (the future)
*
*/
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

struct myclass
{
	bool operator() (int i, int j) { return (i < j); }
} myobject;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
	for (ulong i = 0; i<data.size(); i++) {
		data.at(i) = i;
	}
}

// print our vector in a fancy way
void print(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end()) {
		sum += *iter;
		iter++;
	}

	return sum;
}

//Implement add_numbers that add 10 random numbers to a vector
void add_numbers(vector<short> &data)
{
	for (ulong i = 0; i < 10; i++)
	{
		int random_num = rand() % 100 + 1;
		data.push_back(random_num);
	}
}

//Implement print_even that print out even index of the vector
	void print_even(const vector<short>& data)
	{
		if (data.empty()) 
		{
			cout << "<empty>";
		}
		else
		{
			cout << "<" << data.at(0);
			for (ulong i = 2; i < data.size(); i = i + 2)
			{
				cout << ", " << data.at(i);
			}
			cout << ">";
		}
	}

//Implement is_present function that returns true if the value is present in the data vector, and false if not.
bool is_present(const vector<short> &data, short value)
{
	std::vector<short>::const_iterator iter = data.begin();

	short index = 0;
	bool status;
	while (iter != data.end()) {
		index = *iter;
		iter++;

		if (value == index)
		{
			status = true;
			return status;
		}
		else if (value != index)
		{
			status = false;
			return status;
		}
	}
}


// TODO: implement add_numbers
// TODO: implement print_even
// TODO: implement is_present
// TODO: implement std::sort function

