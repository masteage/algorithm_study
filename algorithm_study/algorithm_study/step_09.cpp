//
//  step_09.cpp
//  algorithm_study
//
//  Created by taeseongsong on 09/10/2018.
//  Copyright © 2018 taeseongsong. All rights reserved.
//

#include "step_09.hpp"

//https://www.acmicpc.net/problem/2750
void step_09_01(){
	int count=0,tmp=0;
	cin >> count;
	vector<int> v;
	for(;count > 0;count--){
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end(),less<int>());
	for(auto n : v){
		cout<<n<<endl;
	}
}

//https://www.acmicpc.net/problem/1427
void step_09_05(){
	const int digit_check=10;
	int num=0,mul=1;
	cin>>num;
	vector<int> v;
	while(num >= digit_check){
		v.push_back(num%digit_check);
		num = num/digit_check;
	}
	v.push_back(num);
	sort(v.begin(),v.end(),less<int>());
	num=0;
	for(auto n : v){
		num += n*mul;
		mul *= 10;
	}
	cout<<num<<endl;
}

//https://www.acmicpc.net/problem/1181
bool stringSort(const string &l,const string &r){
	if(l.size() == r.size()){
		return l < r;
	}
	return l.size() < r.size();
}

void step_09_06(){
	int count=0;
	string str;
	cin >> count;
	cin.clear();
	fflush(stdin);
	vector<string> v;
	for(;count > 0;count--){
		cin >> str;
		v.push_back(str);
	}
	sort(v.begin(),v.end(),stringSort);
	v.erase(unique(v.begin(),v.end()),v.end());
	for(auto strTmp : v){
		cout<<strTmp<<endl;
	}
}

//https://www.acmicpc.net/step/9
void step_09(){
//	step_09_01();
//	step_09_05();
	step_09_06();
	cout<<""<<endl;
}
