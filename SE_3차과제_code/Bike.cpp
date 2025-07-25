#include "Bike.h"
#include <iostream>

using namespace std;

Bike::Bike(string bikeId, string bikeName) : bikeId(bikeId), bikeName(bikeName) {}


/*
	함수 이름 : Bike::getBikeId()
	기능	  : 자전거 아이디 가져오기
	전달 인자 : 없음
	반환값    : string -> 자전거 아이디
*/
string Bike::getBikeId() { return bikeId; }



/*
	함수 이름 : Bike::getBikeName()
	기능	  : 자전거 이름 가져오기
	전달 인자 : 없음
	반환값    : string -> 자전거 이름
*/
string Bike::getBikeName() { return bikeName; }


