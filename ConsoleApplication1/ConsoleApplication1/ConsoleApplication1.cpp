// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>



#ifndef INCLUDE_MEMORY
#define INCLUDE_MEMORY
#include <memory>
#endif // !INCLUDE_MEMORY



int main()
{

	//Sing1 a;
	//Sing1 a;
	


	////ptr1->FUNC();
	////ptr2->FUNC();
	//// 두 shared_ptr이 같은 객체를 참조하는지 확인
	//if (Sing1::GetInstance() == Sing1::GetInstance()) {
	//	std::cout << "ptr1 and ptr2 are pointing to the same instance." << std::endl;
	//}

	exit(0);
    std::cout << "Hello World!\n";
}
//#pragma region DEFINE_FOR_STATE
//#ifdef CSM_UI
//#define DEFINE_TANK_STATE_FUNC(T)\
//	virtual void onEnter	(T& tank){}\
//	virtual void doAction	(T& tank){}\
//	virtual void onExit		(T& tank){}
//#else
//#define DEFINE_TANK_STATE_FUNC(T)\
//	virtual void onEnter	(T& tank);\
//	virtual void doAction	(T& tank);\
//	virtual void onExit		(T& tank);
//#endif
//#define SET_DEFINE_TANK_STATE(T,CLASSNAME,PREFIX_COUNT) \
//class CLASSNAME :public ITankState<T> {\
//private:\
//	CLASSNAME() {}\
//	CLASSNAME(const CLASSNAME& other) {}\
//	virtual ~CLASSNAME() {}\
//	CLASSNAME& operator=(const CLASSNAME& other){}\
//public:\
//	static CLASSNAME* getInstance() { static CLASSNAME instance; return &instance; }\
//	static constexpr int _getPrefixCount() { return PREFIX_COUNT; }\
//	virtual std::string getName() {\
//		std::string s(#CLASSNAME);\
//		return s.substr(_getPrefixCount(),s.length()-_getPrefixCount());\
//	}\
//	DEFINE_TANK_STATE_FUNC(T)\
//	static CLASSNAME* GET() { return getInstance(); }\
//};
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
