#pragma once

#include "SDL.h"

constexpr int audio_buffer_length = 512;

struct TriangleChannel
{
    static constexpr uint8_t sequence[32] = {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    uint16_t timer {};

    // counters
    uint8_t length_counter {};
    uint8_t linear_counter {};
};

class Apu
{
    public:
        Apu();

        // waveform generator functions
        void generate_triangle();

        // clock apu once
        void clock_apu();

    private:

        // data required for audio stream
        SDL_AudioDeviceID id = 0;
        SDL_AudioSpec spec; 

        // audio stream data buffer
        float audio_buffer[audio_buffer_length] = {0};
        int audio_buffer_index = 0;

        // audio stream
        SDL_AudioStream* audio_stream = nullptr;
};