#include "BikeCollection.h"
#include <iostream>
#include<vector>

using namespace std;


/*
	함수 이름 : BikeCollection::addRentBike()
	기능	  : 리스트에 자전거 추가하기
	전달 인자 : Bike* -> 추가할 자전거
	반환값    : 없음
*/
void BikeCollection::addRentBike(Bike* bike) {
	bikeCollectionList.push_back(bike);
}


/*
	함수 이름 : BikeCollection::getRentBike()
	기능	  : 리스트 가져오기
	전달 인자 : 없음
	반환값    : vector<Bike*> -> 대여한 자전거 목록
*/
vector<Bike*> BikeCollection::getRentBike() {
	return bikeCollectionList;
}