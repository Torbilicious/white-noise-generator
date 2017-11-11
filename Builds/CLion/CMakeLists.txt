# Automatically generated CMakeLists, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required (VERSION 3.4.1)

if (NOT CMAKE_BUILD_TYPE)
    set (CMAKE_BUILD_TYPE "Debug"  CACHE STRING "Choose the type of build." FORCE)
endif (NOT CMAKE_BUILD_TYPE)

###############################################################################
# Xcode (MacOSX)
###############################################################################

if (APPLE)

project (white-noice-generator C CXX)

add_executable (APP
    "../../Source/PlaybackType.h"
    "../../Source/PlaybackTypeChoice.cpp"
    "../../Source/PlaybackTypeChoice.h"
    "../../Source/MainComponent.cpp"
    "../../Source/Main.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_Decibels.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_LinearSmoothedValue.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_Reverb.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEZone.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEZone.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/juce_audio_basics.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/juce_audio_basics.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/midi_io/juce_MidiInput.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/juce_audio_devices.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/juce_audio_devices.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/all.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/assert.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/callback.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/compat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/export.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/format.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/juce_audio_formats.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/juce_audio_formats.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VSTInterface.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/juce_audio_processors.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/juce_audio_processors.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/juce_audio_utils.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/juce_audio_utils.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_Array.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_HashMap.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_ListenerList.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_Variant.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_File.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_File.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileFilter.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/javascript/juce_JSON.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/logging/juce_Logger.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_Expression.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_Random.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_Random.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_Range.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_Atomic.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_Memory.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_Singleton.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_Result.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_Result.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_Uuid.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_IPAddress.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_MACAddress.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_Socket.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_Socket.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_URL.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_URL.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_InputSource.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_InputStream.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/system/juce_SystemStats.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_Base64.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_Base64.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_Identifier.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_NewLine.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_String.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_String.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_StringArray.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_StringPool.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_StringRef.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_TextDiff.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_Process.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_Thread.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/time/juce_Time.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/time/juce_Time.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/adler32.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/compress.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/crc32.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/crc32.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/deflate.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/deflate.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/infback.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/inffast.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/inffast.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/inflate.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/inflate.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/trees.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/trees.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/zconf.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/zlib.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/zutil.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/zutil.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/juce_core.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/juce_core.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_core/juce_core.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/encryption/juce_Primes.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/hashing/juce_MD5.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/juce_cryptography.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/juce_cryptography.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/juce_cryptography.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_Value.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_Message.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/timers/juce_Timer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/juce_events.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/juce_events.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_events/juce_events.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_Image.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/juce_graphics.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/juce_graphics.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/juce_graphics.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_Desktop.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_Desktop.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/juce_gui_extra.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/juce_gui_extra.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/juce_opengl.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/juce_opengl.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/juce_opengl.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_video/capture/juce_CameraDevice.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_video/capture/juce_CameraDevice.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_video/native/juce_android_CameraDevice.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_video/native/juce_mac_CameraDevice.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_video/native/juce_mac_Video.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_video/native/juce_win32_CameraDevice.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_video/native/juce_win32_Video.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_video/playback/juce_VideoComponent.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_video/playback/juce_VideoComponent.h"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_video/juce_video.cpp"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_video/juce_video.mm"
    "../../../../../../../Users/tbinder/JUCE/modules/juce_video/juce_video.h"
    "../../JuceLibraryCode/AppConfig.h"
    "../../JuceLibraryCode/include_juce_audio_basics.mm"
    "../../JuceLibraryCode/include_juce_audio_devices.mm"
    "../../JuceLibraryCode/include_juce_audio_formats.mm"
    "../../JuceLibraryCode/include_juce_audio_processors.mm"
    "../../JuceLibraryCode/include_juce_audio_utils.mm"
    "../../JuceLibraryCode/include_juce_core.mm"
    "../../JuceLibraryCode/include_juce_cryptography.mm"
    "../../JuceLibraryCode/include_juce_data_structures.mm"
    "../../JuceLibraryCode/include_juce_events.mm"
    "../../JuceLibraryCode/include_juce_graphics.mm"
    "../../JuceLibraryCode/include_juce_gui_basics.mm"
    "../../JuceLibraryCode/include_juce_gui_extra.mm"
    "../../JuceLibraryCode/include_juce_opengl.mm"
    "../../JuceLibraryCode/include_juce_video.mm"
    "../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties ("../../Source/PlaybackTypeChoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_Decibels.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_LinearSmoothedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/effects/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEZone.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEZone.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_basics/juce_audio_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/midi_io/juce_MidiInput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_devices/juce_audio_devices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/assert.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/callback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/compat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/export.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_formats/juce_audio_formats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VSTInterface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/juce_audio_processors.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_processors/juce_audio_processors.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/juce_audio_utils.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_audio_utils/juce_audio_utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_ListenerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/encryption/juce_Primes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/hashing/juce_MD5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/juce_cryptography.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/juce_cryptography.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_cryptography/juce_cryptography.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/juce_opengl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/juce_opengl.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_opengl/juce_opengl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_video/capture/juce_CameraDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_video/capture/juce_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_video/native/juce_android_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_video/native/juce_mac_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_video/native/juce_mac_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_video/native/juce_win32_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_video/native/juce_win32_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_video/playback/juce_VideoComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_video/playback/juce_VideoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_video/juce_video.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_video/juce_video.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../Users/tbinder/JUCE/modules/juce_video/juce_video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

#------------------------------------------------------------------------------
# Config: Debug
#------------------------------------------------------------------------------

if (CMAKE_BUILD_TYPE STREQUAL Debug)

target_include_directories (APP PRIVATE
    "../../JuceLibraryCode"
    "~/JUCE/modules"
)

target_compile_definitions (APP PRIVATE
    "_DEBUG=1"
    "DEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=0"
    "JucePlugin_Build_VST3=0"
    "JucePlugin_Build_AU=0"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=0"
)

target_compile_options (APP PRIVATE
    -mmacosx-version-min=10.11
    -O0
    -std=c++11
)

set_target_properties (APP PROPERTIES
    OUTPUT_NAME "white-noice-generator"
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_COPY_PHASE_STRIP NO
    XCODE_ATTRIBUTE_GCC_DYNAMIC_NO_PIC NO
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_INFOPLIST_FILE "/Volumes/Secured/Projects/juce/white-noice-generator/Builds/CLion/Debug-Info-App.plist"
    XCODE_ATTRIBUTE_INFOPLIST_PREPROCESS NO
    XCODE_ATTRIBUTE_INSTALL_PATH "$(HOME)/Applications"
    XCODE_ATTRIBUTE_MACOSX_DEPLOYMENT_TARGET_ppc 10.4
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.yourcompany.whitenoicegenerator
    XCODE_ATTRIBUTE_SDKROOT_ppc macosx10.5
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
    MACOSX_BUNDLE_INFO_PLIST "/Volumes/Secured/Projects/juce/white-noice-generator/Builds/CLion/Debug-Info-App.plist"
    XCODE_ATTRIBUTE_PRODUCT_NAME "white-noice-generator"
    MACOSX_BUNDLE TRUE
)

target_link_libraries (APP PRIVATE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework AVFoundation"
    "-framework AVKit"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreMedia"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-common -Wswitch -Wunused-variable -Wparentheses -Wnon-virtual-dtor -Wshorten-64-to-32 -Wundeclared-selector -Wuninitialized -Wunused-function -Wbool-conversion -Wcomma -Wconstant-conversion -Wempty-body -Wenum-conversion -Winfinite-recursion -Wint-conversion -Wrange-loop-analysis -Wstrict-prototypes -Wmove -Wunreachable-code -Wduplicate-method-match -Wreorder -fvisibility-inlines-hidden")
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${CMAKE_CXX_FLAGS}")

endif (CMAKE_BUILD_TYPE STREQUAL Debug)

#------------------------------------------------------------------------------
# Config: Release
#------------------------------------------------------------------------------

if (CMAKE_BUILD_TYPE STREQUAL Release)

target_include_directories (APP PRIVATE
    "../../JuceLibraryCode"
    "~/JUCE/modules"
)

target_compile_definitions (APP PRIVATE
    "_NDEBUG=1"
    "NDEBUG=1"
    "JUCER_XCODE_MAC_F6D2F4CF=1"
    "JUCE_APP_VERSION=1.0.0"
    "JUCE_APP_VERSION_HEX=0x10000"
    "JucePlugin_Build_VST=0"
    "JucePlugin_Build_VST3=0"
    "JucePlugin_Build_AU=0"
    "JucePlugin_Build_AUv3=0"
    "JucePlugin_Build_RTAS=0"
    "JucePlugin_Build_AAX=0"
    "JucePlugin_Build_Standalone=0"
)

target_compile_options (APP PRIVATE
    -mmacosx-version-min=10.11
    -O3
    -flto
    -std=c++11
)

set_target_properties (APP PROPERTIES
    OUTPUT_NAME "white-noice-generator"
    XCODE_ATTRIBUTE_CLANG_LINK_OBJC_RUNTIME NO
    XCODE_ATTRIBUTE_COMBINE_HIDPI_IMAGES YES
    XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "$(PROJECT_DIR)/build/$(CONFIGURATION)"
    XCODE_ATTRIBUTE_DEAD_CODE_STRIPPING YES
    XCODE_ATTRIBUTE_GCC_GENERATE_DEBUGGING_SYMBOLS NO
    XCODE_ATTRIBUTE_GCC_SYMBOLS_PRIVATE_EXTERN YES
    XCODE_ATTRIBUTE_GCC_VERSION com.apple.compilers.llvm.clang.1_0
    XCODE_ATTRIBUTE_INFOPLIST_FILE "/Volumes/Secured/Projects/juce/white-noice-generator/Builds/CLion/Release-Info-App.plist"
    XCODE_ATTRIBUTE_INFOPLIST_PREPROCESS NO
    XCODE_ATTRIBUTE_INSTALL_PATH "$(HOME)/Applications"
    XCODE_ATTRIBUTE_MACOSX_DEPLOYMENT_TARGET_ppc 10.4
    XCODE_ATTRIBUTE_PRODUCT_BUNDLE_IDENTIFIER com.yourcompany.whitenoicegenerator
    XCODE_ATTRIBUTE_SDKROOT_ppc macosx10.5
    XCODE_ATTRIBUTE_USE_HEADERMAP NO
    MACOSX_BUNDLE_INFO_PLIST "/Volumes/Secured/Projects/juce/white-noice-generator/Builds/CLion/Release-Info-App.plist"
    XCODE_ATTRIBUTE_PRODUCT_NAME "white-noice-generator"
    MACOSX_BUNDLE TRUE
)

target_link_libraries (APP PRIVATE
    "-framework Accelerate"
    "-framework AudioToolbox"
    "-framework AVFoundation"
    "-framework AVKit"
    "-framework Carbon"
    "-framework Cocoa"
    "-framework CoreAudio"
    "-framework CoreMedia"
    "-framework CoreMIDI"
    "-framework DiscRecording"
    "-framework IOKit"
    "-framework OpenGL"
    "-framework QuartzCore"
    "-framework WebKit"
)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-common -Wswitch -Wunused-variable -Wparentheses -Wnon-virtual-dtor -Wshorten-64-to-32 -Wundeclared-selector -Wuninitialized -Wunused-function -Wbool-conversion -Wcomma -Wconstant-conversion -Wempty-body -Wenum-conversion -Winfinite-recursion -Wint-conversion -Wrange-loop-analysis -Wstrict-prototypes -Wmove -Wunreachable-code -Wduplicate-method-match -Wreorder -fvisibility-inlines-hidden")
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${CMAKE_CXX_FLAGS}")

endif (CMAKE_BUILD_TYPE STREQUAL Release)

endif()

