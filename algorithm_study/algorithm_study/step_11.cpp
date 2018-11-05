//
//  step_11.cpp
//  algorithm_study
//
//  Created by taeseongsong on 05/11/2018.
//  Copyright © 2018 taeseongsong. All rights reserved.
//

#include "step_11.hpp"

//https://www.acmicpc.net/problem/1874
void step_11_02(){
	int count = 0, nTmp = 0;
	cin >> count;
	vector<int> vBefore;
	vector<int> vAfter;
	vector<int> vProblem;
	vector<string> vResult;
	for(;count > 0;count--){
		vBefore.push_back(count);
		cin >> nTmp;
		vProblem.push_back(nTmp);
	}
	vector<int>::iterator iter = vProblem.begin();
	while(iter != vProblem.end()){
		int nFindValue = *iter;
		if(vAfter.empty() || nFindValue > vAfter.back()){
			vAfter.push_back(vBefore.back());
			vBefore.pop_back();
			vResult.push_back("+");
		}
		else if(nFindValue == vAfter.back()){
			vAfter.pop_back();
			iter++;
			vResult.push_back("-");
		}
		else if(nFindValue < vAfter.back()){
			vResult.clear();
			vResult.push_back("NO");
			break;
		}
	}
	
	for(string str : vResult){
//		cout<<str<<endl;
		cout<<str<<"\n";
	}
}

//https://www.acmicpc.net/problem/9012
void step_11_03(){
	int count = 0;
	string str;
	cin >> count;
	cout.flush();
	vector<string> v;
	for(;count > 0;count--){
		cin >> str;
		v.push_back(str);
	}
	for(string str : v){
		int nSum = 0;
		bool bVPS = true;
		for(char c : str){
			if(c == '(') nSum -= 1;
			else if(c == ')') nSum += 1;
			else {bVPS = false;break;}
			if(nSum > 0) {bVPS = false;break;}
		}
		if(nSum != 0) bVPS = false;
		if(bVPS) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

//https://www.acmicpc.net/step/11
void step_11(){
	step_11_02();
//	step_11_03();
	cout<<""<<endl;
}
