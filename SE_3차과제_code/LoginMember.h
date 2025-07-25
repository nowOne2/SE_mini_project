#pragma once
#include<iostream>
using namespace std;

class LoginMember {
private:
	string id;//로그인한 회원 아이디
	string password;//로그인한 회원 비밀번호
public:
	LoginMember(string id, string password);//생성자
	string getId();//로그인한 회원 아이디 가져오기
};