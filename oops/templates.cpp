1. Write a program of to swap the two values using template

// C++ program to implement 
// function templates 
#include <iostream> 
using namespace std; 

// Function template to swap 
// two numbers 
template <class T> 
int swap_numbers(T& x, T& y) 
{ 
	T t; 
	t = x; 
	x = y; 
	y = t; 
	return 0; 
} 

// Driver code 
int main() 
{ 
	int a, b; 
	a = 10, b = 20; 

	// Invoking the swap() 
	swap_numbers(a, b); 
	cout << a << " " << b << endl; 
	return 0; 
}

2. Write a program of to sort the array using templates


// C++ program to sort an array 
#include <algorithm> 
#include <iostream> 

using namespace std; 

void show(int a[], int array_size) 
{ 
	for (int i = 0; i < array_size; ++i) 
		cout << a[i] << " "; 
} 

// Driver code 
int main() 
{ 
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 
	
	// size of the array 
	int asize = sizeof(a) / sizeof(a[0]); 
	cout << "The array before sorting is : \n"; 
	
	// print the array 
	show(a, asize); 

	// sort the array 
	sort(a, a + asize); 

	cout << "\n\nThe array after sorting is :\n"; 
	
	// print the array after sorting 
	show(a, asize); 

	return 0; 
}

