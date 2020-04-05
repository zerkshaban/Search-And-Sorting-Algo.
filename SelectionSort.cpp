#include<iostream>
using namespace std;
int index;
int *arr;
int i = 0;
int *temp;
int *temp1;
int *temp2;
int cont;
bool initialstate = true;
bool state = true;
void SelectionSort(){
	if (temp1 == temp2){
		temp++;
		temp1 = temp;
		temp1++;
	}
	if (temp == temp2){
		exit(0);
	}

	if (state){
	temp2 = arr + index - 1;
	temp = arr;
	temp1 = arr;
	temp1 = temp1++;
	state = false;
	}
	if (*temp < *temp1){
		temp1++;
		SelectionSort();
	}
	else if (*temp>*temp1){
		cont = *temp;
		*temp = *temp1;
		*temp1 = cont;
		temp1++;
		SelectionSort();
	}
}

int Insertion(){
	if (initialstate){
		cout << "Enter the size of the array:" << endl;
		cin >> index;
		arr = new int[index];
		initialstate = false;
	}
	if (i < index){
		cin >> arr[i];
		i++;
		Insertion();
	}
	else{
		SelectionSort();
	}
	return 0;
}
void Print(){
	for (int i = 0; i < index; i++){
		cout << arr[i] << endl;
	}
}
int main(){
	Insertion();
	Print();
	//cout << endl;
	//SelectionSort();
//	Print();
}