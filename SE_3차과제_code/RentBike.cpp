# include "RentBike.h"
# include "RentBikeUI.h"
# include "Bike.h"
# include <string>
using namespace std;

RentBike::RentBike(vector<Member*> memberList, vector<LoginMember*> loginMemberList, vector<Bike*> bikeList) : memberList(memberList), loginMemberList(loginMemberList), bikeList(bikeList){}

/*
	함수 이름 : RentBike::run()
	기능	  : boundary class 생성 후 control class를 주입함. startInterface 실행
	전달 인자 : 없음
	반환값    : RentBikeUI* -> boundary class
*/
RentBikeUI* RentBike::run() {
	RentBikeUI* rentBikeUI = new RentBikeUI(this); //control 클래스가 boundary 클래스를 생성 후 생성자로 control 클래스를 주입
	rentBikeUI->startInterface();

	return rentBikeUI;
}


/*
	함수 이름 : RentBike::borrowBike()
	기능	  : bikeId를 받아 자전거 목록에서 찾은 후(대여한 후) 로그인한 Member의 bikeCollection에 추가하기
	전달 인자 : bikeId
	반환값    : Bike* -> 대여한 Bike 객체
*/
Bike* RentBike::borrowBike(string bikeId) {
	

	for (Bike* bike : bikeList) { //자전거 목록에서 자전거 대여
		if (bikeId == bike->getBikeId()) {
			selectedBike = bike;
		}
	}
	
	string selectedLoginMember = loginMemberList[0]->getId(); //현재 로그인 한 Member 확인

	

	for (Member* member : memberList) {//현재 로그인한 Member 반환
		if (selectedLoginMember == member->getId()) {
			selectedMember = member;
		}
	}

	

	bikeCollection = selectedMember->getBikeCollection();//해당 Member의 bikeCollection 가져오기

	bikeCollection->addRentBike(selectedBike);//해당 Member의 bikeCollection에 대여 자전거 추가

	return selectedBike;

}




