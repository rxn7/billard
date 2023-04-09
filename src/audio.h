#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Audio/SoundBuffer.hpp>

namespace Audio {
    enum AudioType : uint8_t {
        BALL_WITH_BALL_COLLISION,
        BALL_WITH_TABLE_COLLISION,
        CUE_HIT,
        POCKET,
    };

    void init();
    sf::SoundBuffer &getSoundBuffer(AudioType type);
    void play(sf::Sound &sound, AudioType type, float volume=100.0f, float pitch=1.0f);
}
