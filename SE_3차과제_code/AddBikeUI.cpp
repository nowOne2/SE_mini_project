#include "AddBikeUI.h"
#include "AddBike.h"
#include<iostream>
#include <string>
#include<fstream>
#include <sstream>

using namespace std;

AddBikeUI::AddBikeUI(AddBike* control) : addBike(control) {}


/*
	함수 이름 : AddBikeUI::startInterface()
	기능	  : interface 시작
	전달 인자 : 없음
	반환값    : 없음
*/
void AddBikeUI::startInterface() {

}

/*
	함수 이름 : AddBikeUI::selectAddBike()
	기능	  : 파일 입력을 받고, 받은 입력을 addABike의 매개변수로 넘겨주기, 파일 출력하기
	전달 인자 : getInput -> 파일 입력 인자
	반환값    : Bike* -> 등록한 Bike 객체
*/
Bike* AddBikeUI::selectAddBike(ifstream& in_fp, ofstream& out_fp) {

	string bikeId;
	string bikeName;

	in_fp >> bikeId >> bikeName;
	
	Bike* bike = addBike->addABike(bikeId, bikeName);

	out_fp << "3.1. ������ ���\n";
	out_fp << "> " << bikeId << " " << bikeName << "\n\n";

	return bike;
	
}