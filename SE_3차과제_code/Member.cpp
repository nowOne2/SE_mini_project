#include "Member.h"
#include <iostream>

using namespace std;

Member::Member(string id, string password, string phoneNum) : id(id), password(password), phoneNum(phoneNum) {
	bikeCollection = new BikeCollection();
}


/*
	함수 이름 : Member::getId()
	기능	  : 회원 아이디 가져오기
	전달 인자 : 없음
	반환값    : string -> 회원 아이디
*/
string Member::getId(){ return id; }


/*
	함수 이름 : Member::getBikeCollection()
	기능	  : 회원 bikeCollection 가져오기
	전달 인자 : 없음
	반환값    : BikeCollection* -> bikeCollection
*/
BikeCollection* Member::getBikeCollection() {
	return bikeCollection;
}