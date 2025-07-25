# include "Off.h"
# include "OffUI.h"
#include <string>
#include<fstream>


/*
	함수 이름 : Off:Off -> control class 생성자
	기능	  : boundary class 생성
	전달 인자 : 없음
	반환값    : 없음
*/
Off::Off(ofstream& out_fp){

	OffUI* offUI = new OffUI(this,out_fp); //control 클래스가 boundary 클래스를 생성 후 생성자로 control 클래스를 주입

	offUI->startInterface();

}