
/* 定义游戏规则 */
#include <iostream>

using namespace std;


//抽象类：手机软件类
class HandSetSoft
{
public:
	virtual ~HandSetSoft(){};

	virtual void Run() = 0;
};

//手机软件子类：手机游戏
class HandSetGame : public HandSetSoft
{
public:
	void Run();
};

//手机软件子类：手机游戏
class HandSetAddressList : public HandSetSoft
{
public:
	void Run();
};


//抽象类：手机品牌类
class HandSetBrand
{
public:
	virtual ~HandSetBrand(){};

	//HandSetBrand(HandSetSoft *soft) : _soft(soft){};
	void SetHandSetSoft(HandSetSoft *soft) { _soft = soft; };

	virtual void Run();
private:
	HandSetSoft *_soft;
};

//手机品牌子类：手机品牌M
class HandSetBrandM : public HandSetBrand
{
public:

	void Run();
};
//手机品牌子类：手机品牌N
class HandSetBrandN : public HandSetBrand
{
public:

	void Run();
};













