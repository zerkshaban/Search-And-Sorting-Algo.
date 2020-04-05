#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int beg;
	int end;
	int num;
	int size;
	int mid;
	cout << "Enter the size of your array List:" << endl;
	cin >> size;
	for (int i = 0; i < size; i++){
		cin>>arr[i];
	}

	cout << "Enter the number you want to search:" << endl;
	cin >> num;
	beg = 0;
	end = size - 1;
	if (num == arr[size - 1]){
		cout << "Number Found!!!" << endl;
		exit(0);
	}
	else if (num == arr[beg]){
		cout << "Number Found!!!" << endl;
		exit(0);
	}
	while (beg<=end){
		mid = (beg + end) / 2;
		if (arr[mid] == num){
			cout << "Number Found!!!" << endl;
			exit(0);
		}
		else if (arr[mid] > num){
			beg = mid + 1;
		}
		else{
			beg = mid - 1;
		}
	}
	cout << "The Number do not exsist in your List:" << endl;
}