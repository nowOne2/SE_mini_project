#include "RentBikeUI.h"
#include "RentBike.h"
#include<iostream>
#include <string>
#include<fstream>
#include <sstream>

using namespace std;

RentBikeUI::RentBikeUI(RentBike* control) : rentBike(control) {}


/*
	함수 이름 : RentBikeUI::startInterface()
	기능	  : interface 시작
	전달 인자 : 없음
	반환값    : 없음
*/
void RentBikeUI::startInterface() {

}



/*
	함수 이름 : RentBikeUI::selectRentBike()
	기능	  : 파일 입력을 받고, 받은 입력을 borrowBike의 매개변수로 넘겨주기, 파일 출력하기
	전달 인자 : getInput -> 파일 입력 인자
	반환값    : 없음
*/
void RentBikeUI::selectRentBike(ifstream& in_fp, ofstream& out_fp) {
	string bikeId;

	in_fp >> bikeId;

	Bike* bike = rentBike->borrowBike(bikeId);

	out_fp << "4.1. 자전거 대여\n";
	out_fp << "> " << bike->getBikeId() << " " << bike->getBikeName() << "\n\n";

}