/*
  ==============================================================================

    NameLabel.h
    Created: 25 May 2022 11:53:13am
    Author:  Enrico Damiani

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class NameLabel : public juce::Label
{
public:
	NameLabel()
	{
		setFont(20.0f);
		setColour(juce::Label::textColourId, blackGrey);
		setJustificationType(juce::Justification::centred);
	}

	~NameLabel() {}

private:
	juce::Colour grey = juce::Colour::fromFloatRGBA(0.42f, 0.42f, 0.42f, 1.0f);
	juce::Colour blackGrey = juce::Colour::fromFloatRGBA(0.2f, 0.2f, 0.2f, 1.0f);

};