//
// Created by CoolSandwich181922 on 7/14/2026.
//

#include "loop_manager.h"

bool loop_manager::getStatus() const {
    return m_isOn;
}

void loop_manager::setOn(const bool isOn) {
    m_isOn = isOn;
}
