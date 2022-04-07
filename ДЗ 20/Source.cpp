#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
using namespace std;
//Task 1.Displayind an array on the screen
void showArr(int arr[], int length);
//Task 2.The index of the first occurrence of the number in the array
template<typename T> int searchIndex(T arr[], int length, T key, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == key)
			return i;
	return -1;
}
//Task 3.The index of the last occurrence of the number in the array
template<typename T> int searchLastIndex(T arr[], int length, T key, int begin = -1) {
	if (begin == -1)
		begin = length - 1;
	for (int i = begin; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return-1;
}
//Task 4 Max number in the array
int maxElement(int arr[], int length) {
	int max = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] > max)
			max = arr[i];
	}return max;
}
//Task 5 Min number in the array
int minElement(int arr[], int length) {
	int min = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] < min)
			min = arr[i];
	}return min;
}
//Task 6 Arithmetical mean
int meanValue(int arr[], int length) {
	double sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return sum / length;

}
//Task 7 Range the array
template<typename T> void range(T arr[], T length, T key, T begin = 0) {
	length = key;
	for (int i = begin; i <= length; i++)
		cout << arr[i] << " ";
}
//Task 8 Number of occurrencer of an element in an array
template<typename T> int counter(T arr[], T length, T key) {
	int count = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] == key)
			count++;
	return count;

}



int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n, m;
	//Task 1
	cout << "Task 1\n";
	int Array100[100];
	showArr(Array100, 100);
	cout << endl << endl;

	//Task 2
	cout << "Task 2\n";
	cout << "Enter tht number\n";
	cin >> n;
	int Index = searchIndex(Array100, 100, n);
	if (Index == -1)
		cout << "Such a figure not in array\n";
	else
		cout << "The first occurrence of the number " << n << " has an index of " << Index << "!\n";
	cout << endl;

	//Task 3
	cout << "Task 3\n";
	int Index_2 = searchLastIndex(Array100, 100, n);
	if (Index_2 == -1)
		cout << "Such a figure not in array\n";
	else
		cout << "The last occurrence of the number " << n << " has an index of " << Index_2 << "!\n";
	cout << endl;

	//Task 4
	cout << "Task 4\nMax number in the array = ";
	cout << maxElement(Array100, 100) << "\n";
	cout << endl;

	//Task 5
	cout << "Task 5\nMin number in the array = ";
	cout << minElement(Array100, 100) << "\n";
	cout << endl;

	//Task 6
	cout << "Task 6\nArithmetical mean\n";
	double a = meanValue(Array100, 100);
	cout << a;
	cout << endl;
	cout << endl;

	//Task 7
	cout << "Task 7\nRange the array\n";
	cout << "Enter the beginning and end of the range:\n";
	cin >> n >> m;
	range(Array100, 10, m, n); "\n";
	cout << endl;
	cout << endl;

	//Task 8
	cout << "Enter tht number\n";
	cin >> n;
	cout << "Task 8 \nNumber of occurrencer of an element in an array = ";
	cout << counter(Array100, 100, n);
	cout << endl;



	return 0;
}
//Task 1.Displayind an array on the screen
void showArr(int arr[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % ((100 + 1) - (-100)) + (-100);
		cout << arr[i] << " ";
	}cout << "\b]";
}

