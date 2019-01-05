//
//  step_16.cpp
//  algorithm_study
//
//  Created by taeseongsong on 05/01/2019.
//  Copyright © 2019 taeseongsong. All rights reserved.
//

#include "step_16.hpp"

//https://www.acmicpc.net/problem/1003
int nZeroCount = 0, nOneCount = 0;
int fibonacci_recursion(int n) {
	if (n == 0) {
		nZeroCount++;
		return 0;
	}
	else if (n == 1) {
		nOneCount++;
		return 1;
	}
	return fibonacci_recursion(n-1) + fibonacci_recursion(n-2);
}

// timeout
int step_16_01_recursion(){
	nZeroCount = 0;nOneCount = 0;
	int t = 0,n = 0;
	cin >> t;
	for(;0 < t ; t--){
		cin >> n;
		fibonacci_recursion(n);
	}
	return 0;
}

int nArrMemo[41] = {0,};
int fibonacci_dynamic_programming(int n) {
	if(nArrMemo[n] == 0){
		nArrMemo[n] = fibonacci_dynamic_programming(n-1) + fibonacci_dynamic_programming(n-2);
	}
	return nArrMemo[n];
}

int step_16_01_dynamic_programming(){
	nArrMemo[0] = 1;
	nArrMemo[1] = 1;
	int t = 0,n = 0;
	cin >> t;
	for(;0 < t ; t--){
		cin >> n;
		fibonacci_dynamic_programming(n);
		if(n == 0) cout << "1 0" << endl;
		else if(n == 0) cout << "0 1" << endl;
		else cout << nArrMemo[n-2] << " " << nArrMemo[n-1] << endl;
	}
	return 0;
}

//https://www.acmicpc.net/problem/1912
int step_16_13(){
	int nArrMemoSum[100000-1] = {0,};
	int nMaxSum = ~(~0U >> 1);//INT_MIN;
	int n = 0;
	cin >> n;
	cin >> nMaxSum;
	nMaxSum = nArrMemoSum[0];
	if(n == 0){cout << nMaxSum << endl;return 0;}
	for(int i = 1;i < n; i++){
		cin >> nArrMemoSum[i];
		int nSum = nArrMemoSum[i] + nArrMemoSum[i-1];
		if(nArrMemoSum[i] < nSum) nArrMemoSum[i] = nSum;
		if(nMaxSum < nArrMemoSum[i]) nMaxSum = nArrMemoSum[i];
	}
	cout << nMaxSum << endl;
	return 0;
}

//https://www.acmicpc.net/step/16
void step_16(){
//	step_16_01_recursion();
//	step_16_01_dynamic_programming();
	step_16_13();
	cout<<""<<endl;
}
