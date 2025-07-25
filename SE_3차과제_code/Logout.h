#pragma once
#include<iostream>
# include <fstream>
#include<vector>
#include "LogoutUI.h"
#include "LoginMember.h"

using namespace std;

class Logout {
private:
	vector<LoginMember*>& loginMemberList; //현재 로그인한 회원 목록
	string logoutId; //로그아웃한 LoginMember의 id
public:
	Logout(vector<LoginMember*>& loginMemberList, ofstream& out_fp);//loginMemberList를 주입받고 현재 로그인한 Member를 delete한 후 loginMemberList에서도 삭제하기
	
};