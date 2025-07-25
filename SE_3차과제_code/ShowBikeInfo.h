#pragma once
#include <iostream>
# include <fstream>
#include <vector>
#include "showBikeInfoUI.h"
#include "Member.h"
#include "LoginMember.h"
#include "Bike.h"
#include "BikeCollection.h"

using namespace std;

class ShowBikeInfo {
private:
	vector<Member*> memberList;//시스템 회원 목록
	vector<LoginMember*> loginMemberList;//현재 로그인한 회원 목록
	vector<Bike*> bikeList;//등록된 자전거 목록
	Member* selectedMember;//현재 로그인한 Member
	vector<Bike*> borrowedBikeList;//현재 로그인한 Member가 대여한 자전거의 목록
	BikeCollection* bikeCollection;//현재 로그인한 Member가 대여한 자전거의 bikeCollection
	
public:
	ShowBikeInfo(vector<Member*> memberList, vector<LoginMember*> loginMemberList, vector<Bike*> bikeList, ofstream& out_fp); //memberList, loginMemberList, bikeList를 주입받고 현재 로그인한 멤버의 bikeCollection에 접근 후 자전거 대여 목록 반환
	

}; 