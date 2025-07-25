#pragma once
#include<iostream>
#include "LoginUI.h"
#include "LoginMember.h"

using namespace std;

using namespace std;

class Login {
	private:
		
	public:
		LoginUI* run();//boundary class 생성 후 control class를 주입함. startInterface 실행
		LoginMember* signIn(string id, string password); //id, password를 받아 LoginMember 객체 생성
};