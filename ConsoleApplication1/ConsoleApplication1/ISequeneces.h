#ifndef DECLARE_ISEQUENECES_H
#define DECLARE_ISEQUENECES_H
/// <summary>
/// 시퀸스의 인터페이스 부분입니다.
/// </summary>
class ISequeneces
{
	virtual void Enter() = 0;
	virtual void Action() = 0;
	virtual void Exit() = 0;
};

#endif // !DECLARE_ISEQUENECES_H