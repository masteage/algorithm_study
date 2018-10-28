//
//  step_10.cpp
//  algorithm_study
//
//  Created by taeseongsong on 28/10/2018.
//  Copyright © 2018 taeseongsong. All rights reserved.
//

#include "step_10.hpp"

//https://www.acmicpc.net/problem/1978
bool isPrime(int num){
	if(num <= 1) return false;
	for(int i = 2; i * i <= num; i++){
		if(num % i == 0) return false;
	}
	return true;
}

void step_10_01(){
	int count=0,tmp=0,result=0;
	cin >> count;
	for(;count > 0;count--){
		cin >> tmp;
		result += isPrime(tmp);
	}
	cout<<result<<endl;
}

//https://www.acmicpc.net/problem/2581
void step_10_02(){
	int min=0,max=0,sum=0,min_prime=-1;
	cin>>min;cin>>max;
	for(int i = max;i >= min;i--){
		if(isPrime(i)){
			min_prime = i;
			sum += i;
		}
	}
	if(sum>0) cout<<sum<<endl;
	cout<<min_prime<<endl;
}

//https://www.acmicpc.net/step/10
void step_10(){
//	step_10_01();
	step_10_02();
	cout<<""<<endl;
}

