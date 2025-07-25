#pragma once
#include <iostream>
#include<vector>
#include "RentBikeUI.h"
#include "Bike.h"
#include "Member.h"
#include "LoginMember.h"
#include "BikeCollection.h"

using namespace std;

class RentBike {
private:
	vector<Member*> memberList;//시스템 회원 목록
	vector<LoginMember*> loginMemberList;//현재 로그인한 회원 목록
	vector<Bike*> bikeList;//등록된 자전거 목록
	Bike* selectedBike;//대여한 자전거
	Member* selectedMember;//현재 로그인한 Member
	BikeCollection* bikeCollection;//현재 로그인한 Member가 대여한 자전거의 bikeCollection

public:
	RentBike(vector<Member*> memberList, vector<LoginMember*> loginMemberList, vector<Bike*> bikeList);//생성자
	RentBikeUI* run();//boundary class 생성 및 startInterface 실행
	Bike* borrowBike(string bikeId); //bikeId를 받아 자전거 목록에서 찾은 후(대여한 후) 로그인한 Member의 bikeCollection에 추가하기
};