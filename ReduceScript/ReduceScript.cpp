#include <iostream>
#include <string>
#include <fstream>

int main() {
	std::string pkey , key, val;
	int sum;
	std::getline(std::cin, pkey, '\t');
	std::getline(std::cin, val);
	sum = stoi(val);
	while (std::getline(std::cin, key, '\t') && std::getline(std::cin, val)) {
		if (pkey == key) {
			sum += stoi(val);
		} else {
			std::cout << pkey << "\t" << sum << '\n';
			pkey = key;
			sum = stoi(val);
		}
	}
	std::cout << pkey << "\t" << sum << '\n';
	return 0;
}