#include <iostream>

#include "../header/GameRules.h"

#include "../header/Client.h"

void HandSetGame :: Run()
{
	WRITE_LINE("运行手机游戏...");
}

void HandSetAddressList :: Run()
{
	WRITE_LINE("运行手机通讯录...");
}

void HandSetBrand :: Run()
{
	_soft->Run();
}

void HandSetBrandM :: Run()
{
	WRITE_LINE("运行手机品牌M...");

	HandSetBrand::Run();
}

void HandSetBrandN :: Run()
{
	WRITE_LINE("运行手机品牌N...");

	HandSetBrand::Run();
}

