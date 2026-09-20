#include <iostream>
#include <string>
using namespace std;
int main() {
	/*srand(time(NULL));
	int res = 1 + rand()% 100;
	cout << res;*/
	/*srand(time(NULL));
	int num = 1 + rand() % 10;
	bool stop = false;
	int user;
	do {
		cout << "Enter a number: " << endl;
		cin >> user;
		if (num != user)
			cout << "You didn't guess, try again" << endl;
		else
			stop = true;

	} while (!stop);
	cout << "You guessed the number!" << endl;*/
	
	
	/*float nums[5];
	for (int i = 0; i < 5; i++) {
		cout << "Enter element " << i << ": ";
		cin >> nums[i];
	}
	for (int i = 0; i < 5; i++) {
		cout <<"Element by index " << i << " == " << nums[i] << endl;
	}
	float summa = 0;
	float min = nums[0];
	float max = nums[0];
	for (int i = 0; i < 5; i++) {
		summa += nums[i];
		if (nums[i] < min)
			min = nums[i];
		if (nums[i] > max)
			max = nums[i];
	}
	cout << "Summa: " << summa << endl;
	cout << "MIN: " << min << endl;
	cout << "MAX: " << max;*/

	/*float matrix[3][4] = {
		{1.3,2,3,5},
		{4,5,6,5},
		{7,8,9,6}

	};
	for (int i = 0; i < 3;i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << endl;
		}
	}*/

	/*int* nums = new int[1];
	nums[0] = 5;
	cout << nums[0];
	delete[] nums;
	cout << nums[0];*/
	char word[2] = { 'H', 'i' };
	for (int i = 0; i < 2; i++) {
		cout << word;
	}
	string words = "Hello how are you? Привет";
	words[0] = 'w';
	cout << "\n" << "New: " << words;


int a = 100;
	return 0;
}