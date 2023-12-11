// 공통헤더 및 상수선언들

#ifndef __BANKING_COMMON_H__
#define __BANKING_COMMON_H__

#include <iostream>
#include <cstring>

const int NAME_LEN = 20;

// 유저 선택 메뉴
enum
{
    MAKE = 1,
    DEPOSIT,
    WITHDRAW,
    INQUIRE,
    EXIT
};

// 신용 등급
enum
{
    LEVEL_A = 7,
    LEVEL_B = 4,
    LEVEL_C = 2
};

// 계좌 종류
enum
{
    NORMAL = 1,
    CREDIT = 2
};

#endif