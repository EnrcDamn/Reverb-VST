# Reverb
A reverb plugin in JUCE.

Implemented UI, basic master reverb DSP (from the `juce::dsp::Reverb` class) and processor value tree.

The `CustomLookAndFeel` class is referenced from the amazing Suzuki Kengo [website](https://suzuki-kengo.dev/posts/dial-customization).

## Controls

| Param | Description |
| --- | --- |
| **size** | Controls the delay lengths that make up the digital reverb network. A larger size will increase the length of the delay. |
| **damp** | Controls the damping of the reverb. An higher damping will absorb the high frequencies of the reverb, resulting in a shorter, "choked-up" decay. |
| **wet** | Balances the mix of dry (original) signal and wet (affected) signal, from 0% (totally dry) to 100% (totally wet). |
| **width** | Controls the width of the signal. A larger width will add a more stereo character to the reverb texture. |
| **∞** | The freeze control. When enabled, it adds a continuous sustain to the current audio snippet, resulting in a never-ending reverb tail. |
