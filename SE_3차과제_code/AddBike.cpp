# include "AddBike.h"
# include "AddBikeUI.h"
# include "Bike.h"
# include <string>
/*
	함수이름 : AddBike::run()
	기능	  : boundary class 생성 후 control class 주입함. startInterface 실행
	전달인자 : 없음
	반환값    : AddBikeUI* -> boundary class
*/
AddBikeUI* AddBike::run() {
	AddBikeUI* addBikeUI = new AddBikeUI(this); //control Ŭ������ boundary Ŭ������ ���� �� �����ڷ� control Ŭ������ ����
	addBikeUI->startInterface();

	return addBikeUI;
}



/*
	함수이름 : AddBike::addABike()
	기능  : bikeId, bikeName을 받아 Bike 생성
	전달인자 : bikeId,bikeName
	반환값    : Bike* -> 추가한 Bike 객체
*/
Bike* AddBike::addABike(string bikeId, string bikeName) {
	Bike* bike = new Bike(bikeId, bikeName);

	return bike;
}