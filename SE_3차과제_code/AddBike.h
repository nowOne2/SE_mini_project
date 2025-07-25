#pragma once
#include <iostream>
#include "AddBikeUI.h"
#include "Bike.h"

using namespace std;

class AddBike {
private:
	
public:
	AddBikeUI* run();//boundary class 생성 및 startInterface 실행
	Bike* addABike(string bikeId, string bikeName); //bikeId, bikeName을 받아 Bike 객체 생성
};