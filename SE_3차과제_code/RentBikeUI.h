#pragma once
#include <iostream>
#include "Bike.h"

using namespace std;
class RentBike;

class RentBikeUI {
private:
	RentBike* rentBike;//control class

public:
	RentBikeUI(RentBike* control); //생성자
	void startInterface();//interface 시작
	void selectRentBike(ifstream& in_fp, ofstream& out_fp); //파일 입력을 받고, 받은 입력을 borrowBike의 매개변수로 넘겨주기, 파일 출력하기
};