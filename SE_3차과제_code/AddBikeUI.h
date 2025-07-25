#pragma once
#include <iostream>
#include <fstream>
#include "Bike.h"

using namespace std;
class AddBike;

class AddBikeUI {
private:
	AddBike* addBike;//control class

public:
	AddBikeUI(AddBike* control); //생성자
	void startInterface(); //interface 시작
	Bike* selectAddBike(ifstream& in_fp, ofstream& out_fp);//파일 입력을 받고, 받은 입력을 addABike의 매개변수로 넘겨주기, 파일 출력하기
};