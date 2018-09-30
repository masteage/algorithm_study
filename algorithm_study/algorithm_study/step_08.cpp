//
//  step_08.cpp
//  algorithm_study
//
//  Created by taeseongsong on 01/10/2018.
//  Copyright © 2018 taeseongsong. All rights reserved.
//

#include "step_08.hpp"

//https://www.acmicpc.net/problem/2438
void step_08_01(){
	int a;
	cin >> a;
	string str = "";
	for(int i=1;i<=a;i++){
		for(int j=i;j>0;j--){
			str += "*";
		}
		str += "\n";
	}
	cout << str;
}

//https://www.acmicpc.net/problem/1193
void step_08_03(){
	int a;
	cin >> a;
	int row=0,col=0;

	if(a==1){
		cout<<1<<"/"<<1<<endl;
		return;
	}
	int tmp = a*2;
	for(int i = 1; ;i++){
		
		if((i*(i+1)) < tmp && tmp <= ((i+1)*(i+2))){
			tmp = i;
			break;
		}
	}
	
	int sumValue = 0;
	if(tmp%2==0){
		row = tmp+1;
		col = 1;
		sumValue = -1;
	}
	else{
		row = 1;
		col = tmp+1;
		sumValue = 1;
	}
	
	for(int i = (tmp*(tmp+1)/2) + 1;i<a;i++){
		row += sumValue;
		col -= sumValue;
	}
	cout<<row<<"/"<<col<<endl;
}

//https://www.acmicpc.net/step/8
void step_08(){
//	step_08_01();
	step_08_03();
	
	cout<<""<<endl;
}
