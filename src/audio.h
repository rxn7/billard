#pragma once

#include <cstdint>
#include <SFML/Audio.hpp>
#include <SFML/Audio/SoundBuffer.hpp>

namespace Audio {
	enum AudioType : std::uint8_t {
		BALL_WITH_BALL_COLLISION,
		BALL_WITH_TABLE_COLLISION,
		CUE_HIT,
		POCKET,
		TURN,
	};

	void init();
	sf::SoundBuffer &getSoundBuffer(AudioType type);
	void play(sf::Sound &sound, AudioType type, float volume = 100.0f, float pitch = 1.0f);
} // namespace Audio
