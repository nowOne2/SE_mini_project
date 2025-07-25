#include "LogoutUI.h"
#include "Logout.h"
#include<iostream>
#include <string>
#include <tuple>
#include<fstream>

LogoutUI::LogoutUI(Logout* control, ofstream& out_fp) : logout(control), out_fp(out_fp) {}


/*
	함수 이름 : LogoutUI::startInterface()
	기능	  : logout한 Member의 Id를 파일 출력하기
	전달 인자 :  logoutId -> logout한 Member의 Id
	반환값    : 없음
*/
void LogoutUI::startInterface(string logoutId) {
	
	out_fp << "2.2. 로그아웃\n";
	out_fp << "> " << logoutId << "\n\n";
}

