//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int x = 10;
//
//	// ref is a reference to x.
//	int& ref = x;
//
//	// Value of x is now changed to 20
//	ref = 20;
//	cout << "x = " << x << '\n';
//
//	// Value of x is now changed to 30
//	x = 30;
//	cout << "ref = " << ref << '\n';
//	cout << "x = " << x << '\n';
//
//	return 0;
//}


//1. Modify the passed parameters in a function: If a function receives a reference to a variable, it can modify the value of the variable. For example, the following program variables are swapped using references. 

//#include <iostream>
//using namespace std;
//
//void swap(int& first, int& second)
//{
//	int temp = first;
//	first = second;
//	second = temp;
//}
//
//int main()
//{
//	int a = 2, b = 3;
//	swap(a, b);
//	cout << a << " " << b;
//	return 0;
//}


//   2. Avoiding a copy of large structures: Imagine a function that has to receive a large object. If we pass it without reference, a new copy of it is created which causes wastage of CPU time and memory. We can use references to avoid this. 

//#include <iostream>
////#include <algorithm>
//using namespace std;
//struct Student {
//	string name;
//	string address;
//	int rollNo;
//};
//
//// If we remove & in below function, a new
//// copy of the student object is created.
//// We use const to avoid accidental updates
//// in the function as the purpose of the function
//// is to print s only.
//
//void print(const Student& s)
//{
//	cout << s.name << " " << s.address << " " << s.rollNo
//		<< '\n';
//}

// 3. In For Each Loop to modify all objects: We can use references in for each loop to modify all elements. 

//#include <iostream>
//#include <array>
//using namespace std;
//
//int main()
//{
//	vector<int> vect{ 10, 20, 30, 40 };
//
//	// We can modify elements if we
//	// use reference
//	for (int& x : vect) {
//		x = x + 5;
//	}
//
//	// Printing elements
//	for (int x : vect) {
//		cout << x << " ";
//	}
//	cout << '\n';
//
//	return 0;
//}


//4. For Each Loop to avoid the copy of objects: We can use references in each loop to avoid a copy of individual objects when objects are large.  

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	vector<string> vect{ "geeksforgeeks practice",
//						"geeksforgeeks write",
//						"geeksforgeeks ide" };
//
//	// We avoid copy of the whole string
//	// object by using reference.
//	for (const auto& x : vect) {
//		cout << x << '\n';
//	}
//
//	return 0;
//}


//References vs Pointers :
//
//Both referencesand pointers can be used to change the local variables of one function inside another function.Both of them can also be used to save copying of big objects when passed as arguments to functions or returned from functions, to get efficiency gain.Despite the above similarities, there are the following differences between referencesand pointers.
//
//1. A pointer can be declared as void but a reference can never be void For example
//
//int a = 10;
//void* aa = &a; // it is valid
//void& ar = a;  // it is not valid
//
//2. The pointer variable has n - levels / multiple levels of indirection i.e.single - pointer, double - pointer, triple - pointer.Whereas, the reference variable has only one / single level of indirection.The following code reveals the mentioned points :
//
//3. Reference variable cannot be updated.
//
//4. Reference variable is an internal pointer.
//
//5. Declaration of a Reference variable is preceded with the ‘ & ’ symbol(but do not read it as “address of”).

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 10; // simple or ordinary variable.
//	int* p = &i; // single pointer
//	int** pt = &p; // double pointer
//	int*** ptr = &pt; // triple pointer
//	// All the above pointers differ in the value they store
//	// or point to.
//	cout << "i = " << i << "\t"
//		<< "p = " << p << "\t"
//		<< "pt = " << pt << "\t"
//		<< "ptr = " << ptr << '\n';
//	int a = 5; // simple or ordinary variable
//	int& S = a;
//	int& S0 = S;
//	int& S1 = S0;
//	cout << "a = " << a << "\t"
//		<< "S = " << S << "\t"
//		<< "S0 = " << S0 << "\t"
//		<< "S1 = " << S1 << '\n';
//	// All the above references do not differ in their
//	// values as they all refer to the same variable.
//}


Exercise:
Predict the output of the following programs.If there are compilation errors, then fix them.
Question 1

#include <iostream>
using namespace std;

int& fun()
{
	static int x = 10;
	return x;
}

int main()
{
	fun() = 30;
	cout << fun();
	return 0;
}

Question 2

#include <iostream>
using namespace std;

int fun(int& x) { return x; }

int main()
{
	cout << fun(10);
	return 0;
}

Question 3

#include <iostream>
using namespace std;

void swap(char*& str1, char*& str2)
{
	char* temp = str1;
	str1 = str2;
	str2 = temp;
}

int main()
{
	char* str1 = "GEEKS";
	char* str2 = "FOR GEEKS";
	swap(str1, str2);
	cout << "str1 is " << str1 << '\n';
	cout << "str2 is " << str2 << '\n';
	return 0;
}

Question 4

#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int* ptr = &x;
	int&* ptr1 = ptr;
}

Question 5

#include <iostream>
using namespace std;

int main()
{
	int* ptr = NULL;
	int& ref = *ptr;
	cout << ref << '\n';
}

Question 6

#include <iostream>
using namespace std;

int& fun()
{
	int x = 10;
	return x;
}

int main()
{
	fun() = 30;
	cout << fun();
	return 0;
}











