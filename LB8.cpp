#include <iostream>
using namespace std;



int main()
{
	srand(time(NULL));

	float array[15];
	for (int i = 0; i < 15; i++) {

		array[i] = rand() + float(rand()) / float(rand());
		cout << endl << "Array element number " << i << " = " << array[i];

	}

	for (int i = 0; i < 14; i++) {
		if (array[i + 1] <= array[i]) {
			cout << endl << "The sequence is not increasing";
			return 0;
		}
	}
	cout << endl << "The sequence is increasing";
}
