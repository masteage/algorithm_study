//
//  sort.cpp
//  algorithm_study
//
//  Created by taeseongsong on 22/10/2018.
//  Copyright © 2018 taeseongsong. All rights reserved.
//

#include "sort.hpp"



void quickSort(int arr[], int left, int right) {
	int i = left, j = right;				// 0 , 9
	int pivot = arr[(left + right) / 2];	// 4
	int temp;
	do{
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i<= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);
	
	/* recursion */
	if (left < j)
		quickSort(arr, left, j);
	
	if (i < right)
		quickSort(arr, i, right);
}
void quick_sort_test(){
	constexpr int n = 10;
	int array[n] = {2,5,7,4,1,3,9,6,8,10};
	quickSort(array,0,n-1);
	cout<< "" <<endl;
}

void sort(){
	quick_sort_test();
}
