#pragma once
#include <iostream>
#include <vector>
#include "Bike.h"
using namespace std;

class BikeCollection {
	private:
		vector<Bike*> bikeCollectionList; //대여한 자전거 리스트
	public:
		void addRentBike(Bike* bike);//리스트에 자전거 추가하기
		vector<Bike*> getRentBike();//리스트 가져오기

};