#pragma once
#include <iostream>
#include "BikeCollection.h"
using namespace std;

class Member {
private:
	string id;//회원 아이디
	string password;//회원 비밀번호
	string phoneNum;//회원 전화번호
	BikeCollection* bikeCollection;//회원이 대여한 자전거 bikeCollection

public:
	Member(string id,string password,string phoneNum);//생성자
	string getId();//회원 아이디 가져오기
	BikeCollection* getBikeCollection();//회원 bikeCollection 가져오기
};