//
// Created by CoolSandwich181922 on 7/14/2026.
//

#ifndef AUTOCLICKER_LOOP_MANAGER_H
#define AUTOCLICKER_LOOP_MANAGER_H


class loop_manager {
public:
    [[nodiscard]] bool getStatus() const;
    void setOn(bool isOn);
private:
    bool m_isOn = false;
};


#endif //AUTOCLICKER_LOOP_MANAGER_H
