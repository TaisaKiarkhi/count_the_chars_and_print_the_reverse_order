#include <iostream>
#include <array>
using namespace std;

int main() {
	const size_t max_size{ 1000 };
	char c_style_string[max_size]{};
	unsigned int count_chars{};

	cout << "Hello, enter characters (the limit is 1000): ";
	cin.getline(c_style_string, max_size);

	for (size_t i{}; i < max_size; i++) {
		if (c_style_string[i] == '\0') {
			break;
		}
		++count_chars;
	}
	cout << "You entered " << count_chars << " characters ( whitespaces are included)."<<endl;

	cout << "Printing characters in the reverse order: ";

	//this loop is indefenite because unsigned int is always greater or equal to 0
	//so the loop will continue forever. You should write a code to terminate it
	// or you can overwrite the code and use int instead of unsigned int 

	for (size_t i{count_chars-1}; i >=0; --i) {
		cout << c_style_string[i];

		//terminating the indefinite loop
		if (i == 0) {
			break;
		}
	}

	return 0;
}