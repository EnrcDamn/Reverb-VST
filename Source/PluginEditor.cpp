﻿/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
ShimmerReverbAudioProcessorEditor::ShimmerReverbAudioProcessorEditor (ShimmerReverbAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p),
    sizeSliderAttachment(audioProcessor.apvts, "size", sizeSlider),
    dampSliderAttachment(audioProcessor.apvts, "damp", dampSlider),
    wetSliderAttachment(audioProcessor.apvts, "wet", wetSlider),
    widthSliderAttachment(audioProcessor.apvts, "width", widthSlider),
    freezeAttachment(audioProcessor.apvts, "freeze", freezeButton)
{
    juce::LookAndFeel::getDefaultLookAndFeel().setDefaultSansSerifTypefaceName("Gilroy");
    setSize(600, 300);
    setWantsKeyboardFocus(true);

    sizeLabel.setText("size", juce::NotificationType::dontSendNotification);
    sizeLabel.attachToComponent(&sizeSlider, false);

    dampLabel.setText("damp", juce::NotificationType::dontSendNotification);
    dampLabel.attachToComponent(&dampSlider, false);

    wetLabel.setText("wet", juce::NotificationType::dontSendNotification);
    wetLabel.attachToComponent(&wetSlider, false);

    widthLabel.setText("width", juce::NotificationType::dontSendNotification);
    widthLabel.attachToComponent(&widthSlider, false);


    //freezeButton.setButtonText(juce::String(juce::CharPointer_UTF8("∞")));
    freezeButton.setButtonText(juce::String("frz"));
    freezeButton.setClickingTogglesState(true);
    freezeButton.setLookAndFeel(&customLookAndFeel);
    freezeButton.setColour(juce::TextButton::buttonColourId, juce::Colours::transparentWhite);
    freezeButton.setColour(juce::TextButton::buttonOnColourId, juce::Colours::transparentWhite);
    freezeButton.setColour(juce::TextButton::textColourOnId, yellow);
    freezeButton.setColour(juce::TextButton::textColourOffId, grey);

    addAndMakeVisible(sizeSlider);
    addAndMakeVisible(dampSlider);
    addAndMakeVisible(widthSlider);
    addAndMakeVisible(wetSlider);
    addAndMakeVisible(freezeButton);
}

ShimmerReverbAudioProcessorEditor::~ShimmerReverbAudioProcessorEditor()
{
    freezeButton.setLookAndFeel(nullptr);
}

//==============================================================================
void ShimmerReverbAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll(black);

    g.setFont(30);
    g.setColour(offWhite);
    g.drawText("enrcdamn", 200, 0, 200, 75, juce::Justification::centred);
}

void ShimmerReverbAudioProcessorEditor::resized()
{
    sizeSlider.setBounds(getWidth() / 5 - 35, getHeight() / 2 - 35, 70, 70);
    dampSlider.setBounds(getWidth() / 5 * 2 - 35, getHeight() / 2 - 35, 70, 70);
    wetSlider.setBounds(getWidth() / 5 * 3 - 35, getHeight() / 2 - 35, 70, 70);
    widthSlider.setBounds(getWidth() / 5 * 4 - 35, getHeight() / 2 - 35, 70, 70);
    freezeButton.setBounds(getWidth() / 2 - 25, getHeight() / 5 * 4 - 20, 50, 20);
}
