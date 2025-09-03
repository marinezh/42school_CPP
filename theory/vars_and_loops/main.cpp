#include <iostream>

int main(){
	int number = 5;
	std::cout << "Number is: " << number <<std::endl;

	for(int i = 0; i < number; i++){
		std::cout << "loop iteration: " << i <<std::endl;
	}
	int arr[5] = {10, 20, 30, 40, 50};
	std::cout << "Array elements:" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "element of array: "<< arr[i] <<std::endl;
	}
	arr[2] = 99;
	std::cout << arr[2] <<std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "element of array: "<< arr[i] <<std::endl;
	}
	return 0;
}