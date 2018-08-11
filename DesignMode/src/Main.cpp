/* 测试用例编写 */
#include <iostream>
#include <string>
#include <gtest/gtest.h>

#ifndef FileName_H_
#define FileName_H_

#include "../header/GameRules.h"
#include "../header/TestCase.h"

#endif

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

