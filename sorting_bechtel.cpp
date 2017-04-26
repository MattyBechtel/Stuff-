//Matthew Bechtel
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"sorting_bechtel.h"
using namespace std;
//Constructor
sorting::sorting(){
	//empty
}
//Fill Array
void sorting::fillArray(){
	srand(time(NULL));
	int i;
	for(i=0;i<20;i++){
		array[i]=rand()%100;
	}
}
//toString
void sorting::toString(){
	int i;
	cout << endl << endl;
	for(i=0;i<20;i++){
		cout << array[i] << "\n";
	}
}
void sorting::toSort(){
	int i;
	cout << "\n\n The New Array is:\n\n";
	for(i=0;i<20;i++){
		cout << newarray[i] << "\n";
	}
}
//SelectionSort
void sorting::SelectionSort(){
	int i;
	int k=0;
	int min=100;
	int q;
	while(k<20){
		for(i=0;i<20;i++){
			if(array[i]<min){
				min=array[i];
				q=i;
			}
		}
		array[q]=101;
		newarray[k]=min;
		k++;
		min=100;
	}
}
//BubbleSort
void sorting::BubbleSort(){
	int i;
	int k;
	int q=1;
	int temp;
	for(i=0;i<20;i++){
		for(k=0;k<20;k++){
			if(array[k]>array[q] && q<20){
				temp=array[q];
				array[q]=array[k];
				array[k]=temp;
			}
			q++;
		}
		q=1;
	}
}
//InsertionSort
void sorting::InsertionSort();
	int j;
	int i;
	int temp;
	for(i=0;i<20;i++){
		j=i;
		while(j>0 && array[j]<array[j=1]){
			temp=array[j];
			array[j]=array[j-1];
			array[j=1]=temp;
			j--;
		}
	}
}
//QuickSort
void sorting::QuickSort(){
	
}
int main(){
	string i;
	cout << "Please type a sorting method (selection, bubble, insertion, quick):";
	cin >> i;
	if(i=="SELECTION SORT" || i=="Selection Sort" || i=="selection sort" || i=="SELECTION" || i=="selection" || i=="Selection"){
		sorting selectionsort;
		selectionsort.fillArray();
		selectionsort.toString();
		selectionsort.SelectionSort();
		selectionsort.toSort();
	}
	if(i=="Bubble" || i=="BUBBLE" || i=="bubble" || i=="BUBBLE SORT" || i=="Bubble Sort" || i=="bubble sort"){
		sorting bubblesort;
		bubblesort.fillArray();
		bubblesort.toString();
		bubblesort.BubbleSort();
		cout << "\n\nThe new array is:\n\n";
		bubblesort.toString();
	}
	if(i=="Insertion" || i=="INSERTION" || i=="insertion" || i=="Insertion Sort" || i=="insertion sort" || i=="INSERTION SORT"){
		sorting insertionsort;
		insertionsort.fillArray();
		insertionsort.toString();
		insertionsort.InsertionSort();
		cout << "\n\nThe new array is:\n\n";
		insertionsort.toString();
	}
	return 0;
}


