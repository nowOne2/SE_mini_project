#pragma once
#include<iostream>
# include <fstream>
#include <vector>

using namespace std;

class ShowBikeInfo;

class ShowBikeInfoUI {
private:
	ShowBikeInfo* showBikeInfo;//control class
	ofstream& out_fp;

public:
	ShowBikeInfoUI(ShowBikeInfo* control, ofstream& out_fp);//생성자
	void startInterface(vector<string> bikeIdList, vector<string>bikeNameList);//대여한 자전거 목록들의 자전거id와 자전거 name을 파일 출력하기

};