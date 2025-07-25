#pragma once
#include <iostream>
#include <fstream>
#include "Member.h"

using namespace std;
class Join;

class JoinUI {
private:
	Join* join;//control class

public:
	JoinUI(Join* control); //생성자
	void startInterface(); //interface 시작
	Member* selectJoin(ifstream& in_fp, ofstream& out_fp);//파일 입력을 받고, 받은 입력을 signUp의 매개변수로 넘겨주기, 파일 출력하기
};
