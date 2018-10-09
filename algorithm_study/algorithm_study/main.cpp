//
//  main.cpp
//  algorithm_study
//
//  Created by taeseongsong on 2018. 9. 9..
//  Copyright © 2018년 taeseongsong. All rights reserved.
//

#include "step_01.hpp"
#include "step_07.hpp"
#include "step_08.hpp"
#include "step_09.hpp"

int main(){
//	step_01();
//	step_07();
//	step_08();
	step_09();
	return 0;
}

//int main(int argc, const char * argv[]) {
//
////	std::string s = "sdfjklwnel sdjkl wjklq ei1- ";
//	std::string s = "The Curious Case of Benjamin Button";
//	std::string strTok = " ";
//	int nCutPos = 0;
//	int nCount = 0;
//	while ((nCutPos = (int)s.find_first_of(strTok)) != s.npos)
//	{
//		nCount++;
//		s = s.substr(nCutPos+1);
//	}
//
//	return 0;
//}




//#include <iostream>
//#include <cctype>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <stdio.h>
//void tmpddd()
//{
//	char my_tolower(char in) {
//		if(in <= 'Z' && in >= 'A')
//			return in - ('Z' - 'z');
//		return in;
//	}
//
//	std::string s = "";
//
//	//	cin >> s;
//
//	s = "The Curious Case of Benjamin Button";
//
//	std::transform(s.begin(), s.end(), s.begin(),my_tolower);
//	std::vector<int> v = std::vector<int>(s.begin(),s.end());
//	sort(v.begin(), v.end());
//	v.erase(unique(v.begin(), v.end()), v.end());
//	int nCount = 0;
//	for(auto tmp : v){
//		if('a' <= tmp && tmp <= 'z'){
//			nCount++;
//			printf("%c",(char)tmp);
//		}
//	}
//}



//#include <iostream>
//#include <stdio.h>
//#include <cctype>
//#include <string>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//char my_tolower(char in) {
//	if(in <= 'Z' && in >= 'A')
//		return in - ('Z' - 'z');
//	return in;
//}
//
//int main()
//{
//	std::string s = "";
//	cin >> s;
//	std::transform(s.begin(), s.end(), s.begin(),my_tolower);
//	std::vector<int> v = std::vector<int>(s.begin(),s.end());
//	sort(v.begin(), v.end());
//	v.erase(unique(v.begin(), v.end()), v.end());
//	int nCount = 0;
//	for(int i = 0 ; i < v.size(); i++)
//	{
//		if('a' <= v[i] && v[i] <= 'z')
//		{
//			nCount++;
//		}
//	}
//	return nCount;
//}


