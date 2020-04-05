#include<iostream>
using namespace std;
int *arr;
int index;
bool state = true;
bool Active = true;
int j = 0;
int *temp;
int *temp1;
int *temp2;
int cont;
int i = 0;
void Print(){
	if (i < index){
		cout << arr[i] << endl;
		i++;
		Print();
	}
	else{
		exit(0);
	}

}
int k = 0;
void BubbleSort(){

	if (k >= index){
		Print();
	}
	if (Active){
		temp = arr;
		temp1 = arr;
		temp1 = temp1++;
		temp2 = arr + (index - 1);
		Active = false;
	}
	if (temp == temp2){
		Active = true;
		k++;
	}
	if (*temp < *temp1){
		temp++;
		temp1++;
		BubbleSort();
	}
	else if (*temp>*temp1){
		cont = *temp1;
		*temp1 = *temp;
		*temp = cont;
		temp++;
		temp1++;
		BubbleSort();
	}
}

int Insertion(){
	if (state){
	cout << "Enter the size of the array:" << endl;
	cin >> index;
	arr = new int[index];
	state = false;
	}
	if (j < index){
		cout << "Enter the value in the index:" << endl;
		cin >> arr[j];
		j++;
		Insertion();
	}
	else{
		BubbleSort();
	}
	return 0;
}
int main(){
	Insertion();
	Print();
}