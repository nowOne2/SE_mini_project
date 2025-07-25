#pragma once
#include<iostream>
# include <fstream>
#include "LoginMember.h"
using namespace std;

class Logout;

class LogoutUI {
private:
	Logout* logout;//control class
	ofstream& out_fp;

public:
	LogoutUI(Logout* control, ofstream& out_fp);//생성자
	void startInterface(string logoutId); //logout한 Member의 Id를 파일 출력하기
	
};