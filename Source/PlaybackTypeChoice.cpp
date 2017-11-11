/*
  ==============================================================================

    PlaybackTypeChoice.cpp
    Created: 11 Nov 2017 10:10:23pm
    Author:  TBinder

  ==============================================================================
*/

#include "PlaybackTypeChoice.h"

PlaybackTypeChoice::PlaybackTypeChoice() {
    Logger::writeToLog("Created!");

}

int PlaybackTypeChoice::getNumRows() {
    return 3;
}

void PlaybackTypeChoice::paintListBoxItem(int rowNumber, Graphics &g, int width, int height, bool rowIsSelected) {
    String message;
    message << "rowNumber:     " << rowNumber << newLine;
    message << "width:         " << width << newLine;
    message << "height:        " << height << newLine;
    message << "rowIsSelected: " + rowIsSelected << newLine;

//    g.fillAll(*new Colour(0));
}
