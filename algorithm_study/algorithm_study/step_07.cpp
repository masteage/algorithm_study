//
//  step_07.cpp
//  algorithm_study
//
//  Created by taeseongsong on 2018. 9. 17..
//  Copyright © 2018년 taeseongsong. All rights reserved.
//

#include "step_07.hpp"

void step_07_02();

//https://www.acmicpc.net/step/7
void step_07(){
	step_07_02();
}

//https://www.acmicpc.net/problem/11654
void step_07_01(){
	char a;
	cin >> a;
	cout << static_cast<int>(a) << endl;
}

//https://www.acmicpc.net/problem/10809
void step_07_02(){
//	string s = "baekjoon";
	string s;
	cin >> s;
	vector<int> v(('z'-'a'+1),-1);
	reverse(s.begin(),s.end());
	int nIndex = static_cast<int>(s.size())-1;
	for(auto t : s){
		v[static_cast<int>(t)-'a'] = nIndex--;
	}
	for(auto p : v){
		cout << p << endl;
	}
}
