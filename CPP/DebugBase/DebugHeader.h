#pragma once

#include <Windows.h>
#include <assert.h>

#define MsgBoxAssert(Text) MessageBoxA(nullptr, Text, "���", 0); assert(false);