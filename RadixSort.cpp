#include<iostream>
using namespace std;
int index;
int *arr;
int *unitplace;
int *newseq;
int *maxbit;
//int *pointer;
int a = 0;
void Insert(){
	cout << "Enter the size of List that is to be sorted:" << endl;
	cin >> index;
	arr = new int[index];
	unitplace = new int[index];
	newseq = new int[index];
	maxbit = new int[index];
	for (int i = 0; i < index; i++){
		cin >> arr[i];
	}
	for (int i = 0; i < index; i++){
		unitplace[i] = arr[i] % 10;
	}
	for (int i = 0; i < index; i++){
		newseq[i] = (arr[i] / 10) * 10 + unitplace[i];
	}
	for (int i = 0; i < index; i++){
		if (arr[i]>99){
			maxbit[i] = arr[i] / 100;
		}
		else if (arr[i] < 100){
			maxbit[i] = arr[i] / 10;
		}
	}
	//pointer = maxbit;
	for (int i = 0; i < index; i++){
		for (int j = i + 1; j < index; j++){
			if (maxbit[i]>maxbit[j]){
				a=newseq[i];
				newseq[i] = newseq[j];
				newseq[j] = a;
				a=maxbit[i];
				maxbit[i] = maxbit[j];
				maxbit[i] = a;
			}
			else if (maxbit[i] == maxbit[j]){
				continue;
			}
		}
	}
}
void Print(){
	for (int i = 0; i < index; i++){
		cout << newseq[i] << endl;
	}
	cout << endl;
}
int main(){
	Insert();
	Print();
}