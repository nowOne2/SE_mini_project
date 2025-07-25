#pragma once
#include <iostream>
#include "JoinUI.h"
#include "Member.h"
using namespace std;

class Join {
	private:
		
	public:
		JoinUI* run(); //boundary class 생성 후 control class를 주입함. startInterface 실행
		Member* signUp(string id, string password, string phoneNum);//id,password,phoneNum을 받아 Member 객체 생성
};
