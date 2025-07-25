#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#include "JoinUI.h"
#include "Join.h"
#include "Member.h"
#include "Bike.h"
#include "BikeCollection.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"
#include "AddBike.h"
#include "AddBikeUI.h"
#include "RentBike.h"
#include "RentBikeUI.h"
#include "ShowBikeInfo.h"
#include "ShowBikeInfoUI.h"
#include "Off.h"
#include "OffUI.h"



//상수선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"


//변수 선언
ofstream out_fp;
ifstream in_fp;

/*
    함수 이름 : Main::doTask()
    기능	  : 메뉴 선택에 따른 기능 수행
    전달 인자 : in_fp
    반환값    : 없음
*/
void doTask() {

    //string line;
    int is_program_exit = false;

    vector<Member*> memberList; //시스템 회원 목록
    vector<LoginMember*> loginMemberList;//현재 로그인한 회원 목록
    vector<Bike*> bikeList;//등록된 자전거 목록

   while (is_program_exit==false) {

       int menu_level_1 = 0;
       int menu_level_2 = 0;

       

       in_fp >> menu_level_1 >> menu_level_2;

       

      

        switch (menu_level_1) {
        case 1: {
            switch (menu_level_2) {
            case 1: { //회원가입

              
                Join* join = new Join(); //control 클래스 생성
                JoinUI* joinUI = join->run(); //boundary 클래스 생성 후 반환

               
                Member* joinMember = joinUI->selectJoin(in_fp,out_fp);

              
                memberList.push_back(joinMember);//회원가입된 Member를 memberList에 추가


                break;

            }
            }
            break;
        }
        case 2: {
            switch (menu_level_2) {
            case 1: { //로그인

                

                Login* login = new Login();//control 클래스 생성
                LoginUI* loginUI = login->run();//boundary 클래스 생성 후 반환

          

                LoginMember* loginnedMember = loginUI->selectLogin(in_fp,out_fp);

              

                loginMemberList.push_back(loginnedMember);//로그인된 LoginMember를 loginMemberList에 추가

              

                break;
            }

            case 2: { //로그아웃
              

                Logout* logout = new Logout(loginMemberList, out_fp);//control 클래스 생성
            

                break;

            }
            }
            break;
        }
        case 3: {
            switch (menu_level_2) {
            case 1: { //자전거 등록
                AddBike* addBike = new AddBike();//control 클래스 생성
                AddBikeUI* addBikeUI = addBike->run();//boundary 클래스 생성 후 반환

               

                Bike* bike = addBikeUI->selectAddBike(in_fp,out_fp);

                bikeList.push_back(bike);//등록된 Bike를 bikeList에 추가

              

                break;
            }
            }
            break;
        }
        case 4: {
            switch (menu_level_2) {
            case 1: { //자전거 대여
              

                RentBike* rentBike = new RentBike(memberList, loginMemberList, bikeList);//control 클래스 생성
                RentBikeUI* rentBikeUI = rentBike->run();//boundary 클래스 생성 후 반환

               

                rentBikeUI->selectRentBike(in_fp, out_fp);
                break;
            }
            }
            break;
        }
        case 5: {
            switch (menu_level_2) {
            case 1: { //자전거 대여 리스트 조회

                ShowBikeInfo* showBikeInfo = new ShowBikeInfo(memberList, loginMemberList, bikeList, out_fp);//control 클래스 생성
                

                break;
            }
            }
            break;
        }
        case 6: {
            switch (menu_level_2) {
            case 1: { //종료
                

                Off* off = new Off(out_fp);//control 클래스 생성

                is_program_exit = true;
                
                exit(0);
                break;
            }
            }
            break;
        }

        }
    }
}


int main(int argc, char* argv[]) {
   
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);
   
    if (!in_fp.is_open()) {
        cerr << "입력 파일 열기에 실패했습니다" << endl;
        return 1;
    }

    doTask();


    in_fp.close();
    return 0;
}
