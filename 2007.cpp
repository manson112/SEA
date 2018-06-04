#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int test_num;
	string pattern = "";
	string line;
	int same_spell_index;

	cin >> test_num;

	for (int i = 0; i<test_num; i++) {
		cin >> line;
		for (int j = 0; j<line.length(); j++) {
			if (pattern.length() != 0) {
				if (pattern.at(0) == line.at(j)) {
					same_spell_index = j;
					int same = 1;
					for (int k = 0; k < same_spell_index; k++) {
						if (pattern.at(k) != line.at(same_spell_index + k)) {
							same = 0;
							break;
						}
					}
					if (same == 0) {
						pattern += line.at(j);
					} else {
						cout << "#" << i + 1 << " " << pattern.length() << endl;
						pattern = "";
						break;
					}
				}
				else {
					pattern += line.at(j);
				}
			}
			else {
				pattern += line.at(0);
			}
		}
	}

	return 0;
}