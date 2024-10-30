#include <iostream>
#include <string>
using namespace std;

void modif(string& line) {
	size_t firstSpace = line.find(' ');

	for (size_t i = 0; i < firstSpace;) {
		if (!isdigit(line[i]) &&
			!(line[i] >= 'A' && line[i] <= 'Z') &&
			!(line[i] >= 'a' && line[i] <= 'z')){
			line.erase(i, 1);
			firstSpace--;
		}
		else {
			line[i] = tolower(line[i]);
			i++;
		}
	}

}

int main() {
	string line;

	cout << "Enter string: ";
	getline(cin, line);
	modif(line);
	cout << "Modified string: " << line;
}