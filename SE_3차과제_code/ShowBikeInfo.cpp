# include "ShowBikeInfo.h"
# include "ShowBikeInfoUI.h"
# include "Bike.h"
# include <string>
# include <algorithm>
# include <fstream>
using namespace std;

/*
	함수 이름 : ShowBikeInfo::ShowBikeInfo -> control class 생성자
	기능	  : memberList,loginMemberList,bikeList를 주입받고 현재 로그인한 멤버의 bikeCollection에 접근 후 자전거 대여 목록 반환
	전달 인자 :  memberList-> 시스템 회원 목록,loginMemberList-> 현재 로그인한 회원 목록 , bikeList->등록된 자전거 목록
	반환값    : 없음
*/

ShowBikeInfo::ShowBikeInfo(vector<Member*> memberList, vector<LoginMember*> loginMemberList, vector<Bike*> bikeList, ofstream& out_fp) : memberList(memberList), loginMemberList(loginMemberList), bikeList(bikeList) {
	ShowBikeInfoUI* showBikeInfoUI = new ShowBikeInfoUI(this, out_fp); //control 클래스가 boundary 클래스를 생성 후 생성자로 control 클래스를 주입

	string selectedLoginMember = loginMemberList[0]->getId();//현재 로그인 한 Member 확인
	for (Member* member : memberList) {//현재 로그인한 Member 반환
		if (selectedLoginMember == member->getId()) {
			selectedMember = member;
		}
	}

	bikeCollection = selectedMember->getBikeCollection();//해당 Member의 bikeCollection 가져오기

	borrowedBikeList = bikeCollection->getRentBike();//bikeCollection 내 대여 자전거 목록 가져오기

	sort(borrowedBikeList.begin(), borrowedBikeList.end(), [](Bike* a, Bike* b) {
		return a->getBikeId() < b->getBikeId();  // Id 기준 오름차순 정렬하기
	});


	vector<string> bikeIdList;
	vector<string> bikeNameList;

	for (Bike* bike : borrowedBikeList) { //대여한 자전거 상세정보 가져오기
		bikeIdList.push_back(bike->getBikeId());
		bikeNameList.push_back(bike->getBikeName());
	}

	showBikeInfoUI->startInterface(bikeIdList,bikeNameList);
}

