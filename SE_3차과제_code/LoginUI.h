#pragma once
#include<iostream>
#include<fstream>
#include "LoginMember.h"
using namespace std;

class Login;

class LoginUI {
	private:
		Login* login;//control class

	public:
		LoginUI(Login* control); //생성자
		void startInterface(); //interface 시작
		LoginMember* selectLogin(ifstream& in_fp, ofstream& out_fp);//파일 입력을 받고, 받은 입력을 signIn의 매개변수로 넘겨주기, 파일 출력하기
};