
#include "apu.h"
#include <iostream>

Apu::Apu()
{
    spec.format = SDL_AUDIO_F32;
    spec.channels = 1;
    spec.freq = 48000;

    id = SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK;

    audio_stream = SDL_OpenAudioDeviceStream(
        id,
        &spec,
        nullptr,
        nullptr
    );

    SDL_ResumeAudioStreamDevice(audio_stream);
}

void Apu::generate_triangle()
{

}

void Apu::clock_apu()
{
    audio_buffer[audio_buffer_index++] = ((audio_buffer_index % 109) < 54) ? 0.1f : -0.1f;
    if (audio_buffer_index == 512)
    {
        audio_buffer_index = 0;
        SDL_PutAudioStreamData(audio_stream, audio_buffer, audio_buffer_length * sizeof(audio_buffer[0]));
    }
}
