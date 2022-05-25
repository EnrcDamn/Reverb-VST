/*
  ==============================================================================

    RotarySlider.h
    Created: 23 May 2022 6:12:27pm
    Author:  Enrico Damiani

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "CustomLookAndFeel.h"

class RotarySlider : public juce::Slider
{
public:
    RotarySlider();
    ~RotarySlider() override;

    void paint(juce::Graphics& g) override;

    void mouseDown(const juce::MouseEvent& event) override;
    void mouseUp(const juce::MouseEvent& event) override;

private:
    CustomLookAndFeel customLookAndFeel;

    juce::Colour yellow = juce::Colour::fromFloatRGBA(1.0f, 0.71f, 0.2f, 1.0f);
    juce::Colour blue = juce::Colour::fromFloatRGBA(0.43f, 0.83f, 1.0f, 1.0f);
    juce::Colour grey = juce::Colour::fromFloatRGBA(0.42f, 0.42f, 0.42f, 1.0f);
    juce::Colour blackGrey = juce::Colour::fromFloatRGBA(0.2f, 0.2f, 0.2f, 1.0f);
    juce::Colour offWhite = juce::Colour::fromFloatRGBA(0.83f, 0.84f, 0.9f, 1.f);

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(RotarySlider)
};