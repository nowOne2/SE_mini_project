#pragma once
#include<iostream>
#include<fstream>
using namespace std;

class Off;

class OffUI {
private:
	Off* off;//control class
	ofstream& out_fp;

public:
	OffUI(Off* control, ofstream& out_fp);//생성자
	void startInterface();//'종료'를 파일에 출력하기

};