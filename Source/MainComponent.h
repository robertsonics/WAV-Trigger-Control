/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_9002020A4DD09B20__
#define __JUCE_HEADER_9002020A4DD09B20__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "Communicator.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainComponent  : public Component,
                       public ChangeListener,
                       public SliderListener,
                       public ButtonListener,
                       public ComboBoxListener
{
public:
    //==============================================================================
    MainComponent ();
    ~MainComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	void changeListenerCallback(ChangeBroadcaster *);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);
    void buttonClicked (Button* buttonThatWasClicked);
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

	Communicator *pCom;		// Our Communicator

	int m_portBoxItem;		// Current portBox item index

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<GroupComponent> groupComponent5;
    ScopedPointer<GroupComponent> groupComponent3;
    ScopedPointer<GroupComponent> groupComponent4;
    ScopedPointer<GroupComponent> groupComponent;
    ScopedPointer<GroupComponent> groupComponent2;
    ScopedPointer<Slider> volSlider;
    ScopedPointer<Label> portBoxlabel3;
    ScopedPointer<Label> portBoxlabel;
    ScopedPointer<TextButton> quitButton;
    ScopedPointer<ComboBox> portBox;
    ScopedPointer<Label> statusBar;
    ScopedPointer<TextButton> helpButton;
    ScopedPointer<ComboBox> baudBox;
    ScopedPointer<Label> portBoxlabel2;
    ScopedPointer<TextButton> playsoloButton1;
    ScopedPointer<TextButton> playmixButton1;
    ScopedPointer<TextButton> stopButton1;
    ScopedPointer<ToggleButton> loopToggle1;
    ScopedPointer<TextButton> pauseButton1;
    ScopedPointer<TextButton> resumeButton1;
    ScopedPointer<TextEditor> trigText1;
    ScopedPointer<TextEditor> versionText;
    ScopedPointer<TextButton> versionButton;
    ScopedPointer<TextEditor> numVoicesText;
    ScopedPointer<TextEditor> numTracksText;
    ScopedPointer<Label> label;
    ScopedPointer<Label> label2;
    ScopedPointer<Label> label3;
    ScopedPointer<TextButton> playsoloButton2;
    ScopedPointer<TextButton> playmixButton2;
    ScopedPointer<TextButton> stopButton2;
    ScopedPointer<ToggleButton> loopToggle2;
    ScopedPointer<TextButton> pauseButton2;
    ScopedPointer<TextButton> resumeButton2;
    ScopedPointer<TextEditor> trigText2;
    ScopedPointer<TextButton> playsoloButton3;
    ScopedPointer<TextButton> playmixButton3;
    ScopedPointer<TextButton> stopButton3;
    ScopedPointer<ToggleButton> loopToggle3;
    ScopedPointer<TextButton> pauseButton3;
    ScopedPointer<TextButton> resumeButton3;
    ScopedPointer<TextEditor> trigText3;
    ScopedPointer<TextButton> playsoloButton4;
    ScopedPointer<TextButton> playmixButton4;
    ScopedPointer<TextButton> stopButton4;
    ScopedPointer<ToggleButton> loopToggle4;
    ScopedPointer<TextButton> pauseButton4;
    ScopedPointer<TextButton> resumeButton4;
    ScopedPointer<TextEditor> trigText4;
    ScopedPointer<TextButton> stopAllButton;
    ScopedPointer<TextButton> statusButton;
    ScopedPointer<TextEditor> activeVoicesText;
    ScopedPointer<Label> label4;
    ScopedPointer<Slider> gainSlider1;
    ScopedPointer<Slider> gainSlider2;
    ScopedPointer<Slider> gainSlider3;
    ScopedPointer<Slider> gainSlider4;
    ScopedPointer<ToggleButton> ampToggle;
    ScopedPointer<Slider> pitchSlider;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label6;
    ScopedPointer<Label> label7;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_9002020A4DD09B20__
