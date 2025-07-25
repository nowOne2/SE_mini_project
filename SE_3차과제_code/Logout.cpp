# include "Logout.h"
# include "LogoutUI.h"
#include "LoginMember.h"
#include <string>
#include<vector>
# include <fstream>

/*
	함수 이름 : Logout::Logout -> control class 생성자
	기능	  : loginMemberList를 주입받고 현재 로그인한 Member를 delete한 후 loginMemberList에서도 삭제하기
	전달 인자 : loginMemberList-> 현재 로그인한 회원 목록
	반환값    : 없음
*/
Logout::Logout(vector<LoginMember*>& loginMemberList, ofstream& out_fp) : loginMemberList(loginMemberList) {
    logoutId = loginMemberList[0]->getId();

	delete loginMemberList[0]; //소멸자
	loginMemberList.erase(loginMemberList.begin()); //loginMemberList에서 없애기

	LogoutUI* logoutUI = new LogoutUI(this, out_fp); //control 클래스가 boundary 클래스를 생성 후 생성자로 control 클래스를 주입

	logoutUI->startInterface(logoutId);

}

