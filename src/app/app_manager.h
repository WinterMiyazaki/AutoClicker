//
// Created by CoolSandwich181922 on 7/14/2026.
//

#ifndef AUTOCLICKER_APP_MANAGER_H
#define AUTOCLICKER_APP_MANAGER_H


class loop_manager;

class app_manager {
public:
    void toggleClicker(loop_manager& lpm);
    void quit() const;
    [[nodiscard]] bool getNeedRedrawStatus() const;
private:
    bool m_need_redraw = false;
};


#endif //AUTOCLICKER_APP_MANAGER_H
