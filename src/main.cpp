#include <iostream>
#include "ui.cpp"
#include "futil.cpp"

int main() {

	/*UI ui;

	ui.runOrderSequence();*/

	// createFString(thename, "hello", "you!", "my", "name", "is", 7, "nunya.");

	FString<FString_OPS::createFString("hello", "you!", "my", "name", "is", 7, "nunya.")>

	std::cin.get();
	return 0;
}