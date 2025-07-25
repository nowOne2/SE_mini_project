#include "ShowBikeInfoUI.h"
#include "ShowBikeInfo.h"
#include<iostream>
#include <string>
#include<fstream>
#include<vector>

ShowBikeInfoUI::ShowBikeInfoUI(ShowBikeInfo* control, ofstream& out_fp) : showBikeInfo(control) , out_fp(out_fp) {}



/*
	함수 이름 : ShowBikeInfoUI::startInterface()
	기능	  : 대여한 자전거 목록들의 자전거id와 자전거 name을 파일 출력하기
	전달 인자 :  bikeIdList-> 자전거 id 리스트, bikeNameList-> 자전거 이름 리스트
	반환값    : 없음
*/
void ShowBikeInfoUI::startInterface(vector<string> bikeIdList, vector<string> bikeNameList) {

	
	out_fp << "5.1. 자전거 대여 리스트\n";

	for (int i = 0; i < bikeIdList.size(); i++) {
		out_fp << "> " << bikeIdList[i] << " " << bikeNameList[i] << "\n";

	}

	out_fp << "\n";


}

