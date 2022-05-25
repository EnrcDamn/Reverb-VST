/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "CustomLookAndFeel.h"
#include "RotarySlider.h"
#include "NameLabel.h"

//==============================================================================
/**
*/
class ShimmerReverbAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    ShimmerReverbAudioProcessorEditor (ShimmerReverbAudioProcessor&);
    ~ShimmerReverbAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    ShimmerReverbAudioProcessor& audioProcessor;

    NameLabel sizeLabel, dampLabel, wetLabel, widthLabel;

    RotarySlider sizeSlider, dampSlider, wetSlider, widthSlider;

    juce::TextButton freezeButton;

    juce::AudioProcessorValueTreeState::SliderAttachment
        sizeSliderAttachment,
        dampSliderAttachment,
        wetSliderAttachment,
        widthSliderAttachment;

    juce::AudioProcessorValueTreeState::ButtonAttachment freezeAttachment;

    CustomLookAndFeel customLookAndFeel;

    juce::Colour yellow = juce::Colour::fromFloatRGBA(1.0f, 0.71f, 0.2f, 1.0f);
    juce::Colour blue = juce::Colour::fromFloatRGBA(0.43f, 0.83f, 1.0f, 1.0f);
    juce::Colour offWhite = juce::Colour::fromFloatRGBA(0.83f, 0.84f, 0.9f, 1.0f);
    juce::Colour grey = juce::Colour::fromFloatRGBA(0.42f, 0.42f, 0.42f, 1.0f);
    juce::Colour black = juce::Colour::fromFloatRGBA(0.08f, 0.08f, 0.08f, 1.0f);

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ShimmerReverbAudioProcessorEditor)
};
