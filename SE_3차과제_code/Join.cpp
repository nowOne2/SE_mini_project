# include "Join.h"
# include "JoinUI.h"
# include "Member.h"
# include <string>

/*
	함수 이름 : Join::run()
	기능	  : boundary class 생성 후 control class를 주입함. startInterface 실행
	전달 인자 : 없음
	반환값    : JoinUI* -> boundary class
*/
JoinUI* Join::run() {
	JoinUI*  joinUI = new JoinUI(this); //control 클래스가 boundary 클래스를 생성 후 생성자로 control 클래스를 주입
	joinUI->startInterface();

	return joinUI;
}


/*
	함수 이름 : Join::signUp()
	기능	  : id,password,phoneNum을 받아 Member 객체 생성
	전달 인자 : id,password,phoneNum
	반환값    : Member* -> 생성한 Member 객체
*/
Member* Join::signUp(string id, string password, string phoneNum) {
	Member* member = new Member(id, password, phoneNum);

	return member;
}


