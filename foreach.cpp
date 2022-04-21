#include <iostream>
#include <string>

int main() {
	const std::string names[] = {"Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly"};
	std::string input;

	std::cout << "Enter your name: " << std::endl;
	std::getline(std::cin, input);

	for ( const auto &name : names ) {
		if (name == input) {
			std::cout << input << " was found" << std::endl;
		} else {
			std::cout << input << " wasn't found" << std::endl;
		}
	}

	return 0;
}