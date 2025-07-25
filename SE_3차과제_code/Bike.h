#pragma once
#include <iostream>
#include<string>
using namespace std;

class Bike {
	private:
		string bikeId; //자전거 아이디
		string bikeName; //자전거 이름
	public:
		Bike(string bikeId, string bikeName);//생성자
		string getBikeId();//자전거 아이디 가져오기
		string getBikeName();//자전거 이름 가져오기

};