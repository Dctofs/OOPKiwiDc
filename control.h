#ifndef CONTROL_H
#define CONTROL_H

class Control
{
public:
    Control();
    bool LeftPressed(bool value);
    bool RightPressed(bool value);
    bool UpPressed(bool value);
    bool DownPressed(bool value);
    bool BulletPressed(bool value);
    bool BombClicked(bool value);
    bool PauseClicked(bool value);
    void show();
};

#endif // CONTROL_H
