//
// Created by CoolSandwich181922 on 7/14/2026.
//

#include "app_manager.h"
#include <windows.h>
#include <cstdlib>
#include <iostream>

#include "../loop/loop_manager.h"

void app_manager::toggleClicker(loop_manager& lpm) {
    if (GetAsyncKeyState(VK_F8) & 1) {
        lpm.setOn(!lpm.getStatus());
    }
}

void app_manager::quit() const {
    exit(0);
}

bool app_manager::getNeedRedrawStatus() const {
    return m_need_redraw;
}
