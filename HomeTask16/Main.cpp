//HomeTask16
#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
	std::cout << "HomeTask 16.1\n";
	const int size = 10;
	int arr[size]{};
	srand(time(NULL));
	int sum = 0;
	std::cout << "Array: ";
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
		std::cout << arr[i] << " ";
		sum += arr[i];
	}
	int average;
	average = sum / size;
	std::cout << "\nArithmetic average = " << average << "\n";
	int quantity_less = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < average)
			quantity_less++;
	}
	std::cout << "Less than Arithmetic avearge " << quantity_less << " numbers\n\n";

	std::cout << "HomeTask 16.2\n";
	const int size1 = 5;
	int arr2[size1][size1]{};
	int arr3[size1][size1]{};
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size1; j++) {
			arr2[i][j] = rand() % 10;
			std::cout << arr2[i][j] << ", ";
		}
		std::cout << "  +   ";
		for (int k = 0; k < size1; k++){
			arr3[i][k] = rand() % 10;
			std::cout << arr3[i][k] << ", ";
		}
			std::cout << "  =   ";
		for (int j = 0; j < size1; j++) {
			std::cout << arr2[i][j] + arr3[i][j] << ", ";
		}
		std::cout << std::endl;
	}
	
	std::cout << "\nHomeTask 16.3\nEnter six numbers -> ";
	int numbers6;
	std::cin >> numbers6;
	if (numbers6 < 100000 || numbers6 > 999999){
		std::cout << "Error input";
		std::cout << std::endl;
		return 0;
	}
	int arr4[6]{};
	int numbers1 = 100000;
	std::cout << "Array: ";
	for (int i = 0; i < 6; i++){
		arr4[i] = numbers6 / numbers1 % 10;
		std::cout << arr4[i] << " ";
		numbers1 /= 10;
}
	std::cout << std::endl;
return 0;
}