#include "LoginUI.h"
#include "Login.h"
#include<iostream>
#include <string>
#include <tuple>
#include <fstream>
#include <sstream>

using namespace std;

LoginUI::LoginUI(Login* control) : login(control) {}


/*
	함수 이름 : LoginUI::startInterface()
	기능	  : interface 시작
	전달 인자 : 없음
	반환값    : 없음
*/
void LoginUI::startInterface() {

}


/*
	함수 이름 : LoginUI::selectLogin()
	기능	  : 파일 입력을 받고, 받은 입력을 signIn의 매개변수로 넘겨주기, 파일 출력하기
	전달 인자 : getInput -> 파일 입력 인자
	반환값    : LoginMember* -> 로그인한 LoginMember 객체
*/
LoginMember* LoginUI::selectLogin(ifstream& in_fp, ofstream& out_fp) {

	string id;
	string password;

	in_fp >> id >> password;

	LoginMember* loginMember = login->signIn(id, password);
	
	out_fp << "2.1. 로그인\n";
	out_fp << "> " << id << " " << password << "\n\n";
	
	return loginMember;
}