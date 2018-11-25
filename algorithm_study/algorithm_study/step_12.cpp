//
//  step_12.cpp
//  algorithm_study
//
//  Created by taeseongsong on 25/11/2018.
//  Copyright © 2018 taeseongsong. All rights reserved.
//

#include "step_12.hpp"
#include <queue>

//https://www.acmicpc.net/problem/1966
void step_12_03(){
	int tc = 0;
	int n = 0, m = 0;
	int tmp = 0;
	cin >> tc;
	for( ; 0 < tc ; --tc){
		queue<pair<int,int>> q;
		priority_queue<int> pq;
		int nCount = 0;
		cin >> n;
		cin >> m;
		for(int i = 0 ; i < n ; i++){
			cin >> tmp;
			q.push(make_pair(i, tmp));
			pq.push(tmp);
		}
		while(!pq.empty()){
			
			// front
			pair<int,int> front_value = q.front();
			q.pop();
			
			// priority match
			if(pq.top() == front_value.second){
				pq.pop();
				nCount++;
				
				// number(m) match
				if(front_value.first == m){
					cout<< nCount <<endl;
					break;
				}
			}
			else{
				q.push(front_value);
			}
		}
	}
}

//https://www.acmicpc.net/problem/11866
void step_12_04(){
	int n = 0, m = 0;
	cin >> n;
	cin >> m;
	queue<int> q;
	for(int i = 1; i <= n ; i++){
		q.push(i);
	}
	cout<< "<";
	while(!q.empty()){
		if(q.size() == 1){
			cout<<q.front();
		}
		else{
			// back data (m)
			for(int i = 1 ; i < m ; i++){
				q.push(q.front());
				q.pop();
			}
			cout<<q.front()<<", ";
		}
		q.pop();
	}
	cout<< ">" <<endl;
}

//https://www.acmicpc.net/step/12
void step_12(){
	step_12_03();
//	step_12_04();
	cout<<""<<endl;
}
