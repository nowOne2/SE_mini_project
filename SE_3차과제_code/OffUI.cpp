#include "OffUI.h"
#include "Off.h"
#include<iostream>
#include <string>

#include<fstream>

OffUI::OffUI(Off* control, ofstream& out_fp) : off(control), out_fp(out_fp) {}

/*
	함수 이름 : OffUI::startInterface 
	기능	  : '종료'를 파일에 출력하기
	전달 인자 : 없음
	반환값    : 없음
*/
void OffUI::startInterface() {

	out_fp << "6.1. 종료";
}
