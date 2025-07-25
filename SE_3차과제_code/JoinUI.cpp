#include "JoinUI.h"
#include "Join.h"
#include "Member.h"
#include<iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

JoinUI::JoinUI(Join* control): join(control){}

/*
	함수 이름 : JoinUI::startInterface()
	기능	  : interface 시작
	전달 인자 : 없음
	반환값    : 없음
*/
void JoinUI::startInterface() {

}



/*
	함수 이름 : JoinUI::selectJoin()
	기능	  : 파일 입력을 받고, 받은 입력을 signUp의 매개변수로 넘겨주기, 파일 출력하기
	전달 인자 : getInput -> 파일 입력 인자
	반환값    : Member* -> 회원가입한 Member 객체 
*/
Member* JoinUI::selectJoin(ifstream& in_fp, ofstream& out_fp) {
	string id;
	string password;
	string phoneNum;

	in_fp >> id >> password >> phoneNum;

	Member* member = join->signUp(id, password, phoneNum);

	
	out_fp << "1.1. 회원가입\n";
	out_fp << "> " << id << " " << password << " " << phoneNum << "\n\n";

	return member;
}