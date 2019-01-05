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
void step_16_01_recursion(){
	nZeroCount = 0;nOneCount = 0;
	int t = 0,n = 0;
	cin >> t;
	for(;0 < t ; t--){
		cin >> n;
		fibonacci_recursion(n);
	}
}

int nArrMemo[41] = {0,};
int fibonacci_dynamic_programming(int n) {
	if(nArrMemo[n] == 0){
		nArrMemo[n] = fibonacci_dynamic_programming(n-1) + fibonacci_dynamic_programming(n-2);
	}
	return nArrMemo[n];
}

void step_16_01_dynamic_programming(){
	nArrMemo[0] = 1;
	nArrMemo[1] = 1;
	int t = 0,n = 0;
//	cin >> t;
	t = 1;
	n = 3;
	
	for(;0 < t ; t--){
//		cin >> n;
		fibonacci_dynamic_programming(n);
		if(n == 0) cout << "1 0" << endl;
		else if(n == 0) cout << "0 1" << endl;
		else cout << nArrMemo[n-2] << " " << nArrMemo[n-1] << endl;
	}
}

//https://www.acmicpc.net/step/16
void step_16(){
//	step_16_01_recursion();
	step_16_01_dynamic_programming();
	cout<<""<<endl;
}
