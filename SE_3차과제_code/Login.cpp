# include "Login.h"
# include "LoginUI.h"
#include "LoginMember.h"
#include <string>

/*
	함수 이름 : Login::run()
	기능	  : boundary class 생성 후 control class를 주입함. startInterface 실행
	전달 인자 : 없음
	반환값    : LoginUI* -> boundary class
*/
LoginUI* Login::run() {
	LoginUI* loginUI = new LoginUI(this); //control 클래스가 boundary 클래스를 생성 후 생성자로 control 클래스를 주입
	loginUI->startInterface();

	return loginUI;
}


/*
	함수 이름 : Login::signIn()
	기능	  : id,password를 받아 LoginMember 객체 생성
	전달 인자 : id,password
	반환값    : LoginMember* -> 생성한 LoginMember 객체
*/
LoginMember* Login::signIn(string id, string password) {
	LoginMember* loginMember = new LoginMember(id, password);
	
	return loginMember;
}