#include "../JuceLibraryCode/JuceHeader.h"
#include "PlaybackType.h"
#include "PlaybackTypeChoice.h"


class MainContentComponent : public AudioAppComponent, SliderListener, ButtonListener {
public:
    MainContentComponent() {
        //GUI setup
        setSize(500, 150);

        addAndMakeVisible(volumeSlider);
        volumeSlider.setRange(0, 100.0);
        volumeSlider.setTextValueSuffix(" %");
        volumeSlider.setValue(50.0);
        volumeSlider.setTextBoxStyle(Slider::TextBoxLeft, false, 160, volumeSlider.getTextBoxHeight());
        volumeSlider.addListener(this);

        addAndMakeVisible(volumeLabel);
        volumeLabel.setText("Volume", dontSendNotification);
        volumeLabel.attachToComponent(&volumeSlider, true);

        addAndMakeVisible(whiteNoiceToggle);
        whiteNoiceToggle.setToggleState(playbackType != OFF, sendNotification);
        whiteNoiceToggle.setButtonText("Audio enabled");
        whiteNoiceToggle.addListener(this);

        addAndMakeVisible(playbackChoicesBox);
        playbackChoicesBox.setModel(&playbackChoicesModel);


        //Audio setup
        setAudioChannels(0, 2);
    }

    ~MainContentComponent() {
        shutdownAudio();
    }

    //Audio
    void prepareToPlay(int samplesPerBlockExpected, double sampleRate) override {
        String message;
        message << "Preparing to play audio..." << newLine;
        message << " samplesPerBlockExpected = " << samplesPerBlockExpected << newLine;
        message << " sampleRate = " << sampleRate;
        Logger::getCurrentLogger()->writeToLog(message);
    }

    void getNextAudioBlock(const AudioSourceChannelInfo &bufferToFill) override {
        switch (playbackType) {
            case WIHTE_NOISE:
                applyRandomNoise(bufferToFill);
                break;
            case OFF:
            default:
                bufferToFill.clearActiveBufferRegion();
        }
    }

    void releaseResources() override {
    }


    //GUI
    void paint(Graphics &g) override {
        g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
    }

    void resized() override {
        const int spacingLeft = 100;
        volumeSlider.setBounds(spacingLeft, 25, getWidth() - spacingLeft - 10, 20);
        whiteNoiceToggle.setBounds(spacingLeft, 50, getWidth() - spacingLeft - 10, 20);
        playbackChoicesBox.setBounds(spacingLeft, 75, getWidth() - spacingLeft -10, 50);
    }


    //Controls
    void sliderValueChanged(Slider *slider) override {
//        if (slider == &volumeSlider)
//            volumeSlider.setValue(1.0 / volumeSlider.getValue(), dontSendNotification);
//        else if (slider == &durationSlider)
//            frequencySlider.setValue(1.0 / durationSlider.getValue(), dontSendNotification);
    }

    void buttonClicked(Button *button) override {
//        playAudio = button->getToggleState();

        if (button == &whiteNoiceToggle) {
            playbackType = button->getToggleState() ? WIHTE_NOISE : OFF;
        }
    }


private:

    PlaybackType playbackType = OFF;

    Slider volumeSlider;
    Label volumeLabel;

    ToggleButton whiteNoiceToggle;

    ListBox playbackChoicesBox;
    PlaybackTypeChoice playbackChoicesModel;


    void applyRandomNoise(const AudioSourceChannelInfo &bufferToFill) {
        for (int channel = 0; channel < bufferToFill.buffer->getNumChannels(); ++channel) {
            float *const buffer = bufferToFill.buffer->getWritePointer(channel, bufferToFill.startSample);
            for (int sample = 0; sample < bufferToFill.numSamples; ++sample) {
//                buffer[sample] = randomBetween(-0.125f, 0.125f);

                float min = (float) -volumeSlider.getValue() / 100;
                float max = (float) volumeSlider.getValue() / 100;
                float randomValue = randomBetween(min, max);
                buffer[sample] = randomValue;
            }
        }
    }

    float randomBetween(float a, float b) {
        float random = ((float) rand()) / (float) RAND_MAX;
        float diff = b - a;
        float r = random * diff;
        return a + r;
    }

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};


// (This function is called by the app startup code to create our main component)
Component *createMainContentComponent() { return new MainContentComponent(); }
