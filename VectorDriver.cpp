// Duyen Pham
// COSC 2030 - 01 
// Lab 04
// Oct. 16, 2018

#include "VectorDriver.h"

int main()
{
	cout << "..:: BEGIN SAMPLE CODE ::.." << endl << endl;
	vector<short> sample_vector(5);
	vector<short> myVector;

	//Call the add_numbers function
	cout << "Vector with 10 random numbers: ";
	add_numbers(myVector);
	add_numbers(myVector);
	print(myVector);
	cout << endl;

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	//Call the print_even function
	cout << "Vector with even index: ";
	print_even(myVector);
	cout << endl;
		
	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;

	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;

	//Call the is_present function
	cout << "Is the value present in the data vector? " << is_present(myVector, 42) << endl;

	//Implement the std::sort function
	int myints[] = { 0, 2, 6, 1, 13 };
	std::vector<int> myVec(myints, myints + 8);

	//using myobject as comp
	std::sort(myVec.begin(), myVec.end(), myobject);

	//Print out myVec vecotr after sorting
	std::cout << "myvector contains:";
	for (std::vector<int>::iterator it = myVec.begin(); it != myVec.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	cout << endl << "..:: END SAMPLE CODE ::.." << endl;
	system("pause");


	return 0;

}
