#ifndef CIVILIZATIONPP_GAME_SETTINGS_H
#define CIVILIZATIONPP_GAME_SETTINGS_H

namespace Civilizationpp
{
    struct GameSettings
    {
        GameSettings(size_t rowCount, size_t colCount);

        size_t rowCount;
        size_t colCount;
    };
}

#endif //CIVILIZATIONPP_GAME_SETTINGS_H