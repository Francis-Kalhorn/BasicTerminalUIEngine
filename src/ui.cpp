#include <iostream>
#include "items.cpp"
#include "futil.cpp"

class UI {
private: // constants
	const int totalStepNum = 5;
	enum STPS { WELCOME = 0, BASE_FLAVOR, TOPPINGS, SAUCE, FINAL_CONFIRMATION}; // STPS --> steps
private: // general methods
	template<typename... Args>
	int getIntInputBetween(int minNum, int maxNum, Args... question) {
		std::string userIn;
		while (true) {
			std::cin << userIn
		}
	}
private: // step methods
	int welcome_step(int stepNum) {
		return stepNum;
	}
	int baseFlavor_step(int stepNum) {
		return stepNum;
	}
	int toppings_step(int stepNum) {
		return stepNum;
	}
	int sauce_step(int stepNum) {
		return stepNum;
	}
	int finalConfirmation_step(int stepNum) {
		return stepNum;
	}
public:
	void runOrderSequence() {
		int stepNum = 0;
		while (stepNum < totalStepNum) {
			switch (stepNum) {
				case WELCOME:
					stepNum = welcome_step(stepNum);
					break;
				case BASE_FLAVOR:
					stepNum = baseFlavor_step(stepNum);
					break;
				case TOPPINGS:
					stepNum = toppings_step(stepNum);
					break;
				case SAUCE:
					stepNum = sauce_step(stepNum);
					break;
				case FINAL_CONFIRMATION:
					stepNum = finalConfirmation_step(stepNum);
					break;
			}
		}
	}
};