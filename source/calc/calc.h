#pragma once

class MainView;
extern ptr::shared_ptr<MainView> mainview;
extern DWORD mainthread;
extern std::atomic<signed_t> numthreads;
extern volatile bool globalstop;

#include "resource.h"
