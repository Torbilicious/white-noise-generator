/*
  ==============================================================================

    PlaybackTypeChoice.h
    Created: 11 Nov 2017 10:10:23pm
    Author:  TBinder

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PlaybackType.h"


class PlaybackTypeChoice : public ListBoxModel {
public:
    PlaybackTypeChoice();

    int getNumRows() override;

    void paintListBoxItem(int rowNumber, Graphics &g, int width, int height, bool rowIsSelected) override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PlaybackTypeChoice)

};

//    PlaybackTypeChoice playbackChoicesModel;
