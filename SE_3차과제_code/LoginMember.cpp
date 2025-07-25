#include <iostream>
#include "LoginMember.h"
using namespace std;

LoginMember::LoginMember(string id, string password) : id(id), password(password) {}

/*
	함수 이름 : LoginMember::getId()
	기능	  : 로그인한 회원 아이디 가져오기
	전달 인자 : 없음
	반환값    : string -> 로그인한 회원 id
*/
string LoginMember::getId() { return id; }

