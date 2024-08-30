#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void namechars(void);
vector<int> names{ 0,1,2,3,4,5 };
vector<string> letters{};
string letter = "";

int main()
{
	cout << "Enter a company name and ctrl z to quit when done:" << endl;

	while (!cin.eof()) {
		cin >> letter;
		if (!letter.empty()) {
			letters.push_back(letter);
		}
	}

	cout << "company names sorted alphabetically:\t";
	sort(letters.begin(), letters.end());
	namechars();
	cout << "You now have your businesses sorted";

	return 0;
}

void namechars(void) {
	sort(letters.begin(), letters.end());
	for (string chars : letters) {
		cout << chars << " ";
	}
	cout << endl;
}
