//
//  step_13.cpp
//  algorithm_study
//
//  Created by taeseongsong on 04/12/2018.
//  Copyright © 2018 taeseongsong. All rights reserved.
//

#include "step_13.hpp"

//https://www.acmicpc.net/problem/1021
#include <deque>
void step_13_02(){
	int n=0,m=0;
	cin >> n >> m;
	deque<int> deque_values;
	for(int i = 1; i <= n ; i++) deque_values.push_back(i);
	int nDequeSize = n;
	int nMoveCountAll = 0;
	for(;0 < m; m--){
		int nIndex = 0;
		int find_value = 0;
		cin >> find_value;
		for(int value : deque_values){
			if(find_value == value){break;}
			nIndex++;
		}
		
		int nMoveCount = 0;
		if(nIndex < nDequeSize-nIndex){
			nMoveCount = nIndex;
			nMoveCountAll += nMoveCount;
			for( ; 0 < nMoveCount ;nMoveCount--){
				deque_values.push_back(deque_values.front());
				deque_values.pop_front();
			}
		}
		else{
			nMoveCount = nDequeSize-nIndex;
			nMoveCountAll += nMoveCount;
			for( ; 0 < nMoveCount ;nMoveCount--){
				deque_values.push_front(deque_values.back());
				deque_values.pop_back();
			}
		}
		deque_values.pop_front();
		nDequeSize--;
	}
	cout<< nMoveCountAll <<endl;
}

//https://www.acmicpc.net/problem/5430
#include <vector>
void step_13_03(){
	int nCount = 0;
//	cin >> nCount;
	nCount = 1;
	vector<char> p;
	for( ; 0 < nCount ; nCount--){
		string strTmp;
//		cin >> strTmp;
//		cout.flush();
		strTmp = "RDD";
//		p
		
//		strTmp
		
	}
	
//	string str;
//	cin >> count;
//	cout.flush();
}

//https://www.acmicpc.net/step/13
void step_13(){
//	step_13_02();
	step_13_03();
	cout<<""<<endl;
}
