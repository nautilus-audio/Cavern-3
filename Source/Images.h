/*
 ==============================================================================
 
 This is an automatically generated GUI class created by the Projucer!
 
 Be careful when adding custom code to these files, as only the code within
 the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
 and re-saved.
 
 Created with Projucer version: 5.3.2
 
 ------------------------------------------------------------------------------
 
 The Projucer is part of the JUCE library.
 Copyright (c) 2017 - ROLI Ltd.
 
 ==============================================================================
 */

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
 //[Comments]
 An auto-generated component, created by the Projucer.
 
 Describe your class and how it works here!
 //[/Comments]
 */
class Images  : public Component
{
public:
    //==============================================================================
    Images ();
    ~Images();
    
    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]
    
    void paint (Graphics& g) override;
    void resized() override;
    
    // Binary resources:
    static const char* perforatedbluemetal_jpg;
    static const int perforatedbluemetal_jpgSize;
    static const char* cavern3inward_png;
    static const int cavern3inward_pngSize;
    static const char* carvern3outward_png;
    static const int carvern3outward_pngSize;
    
    
private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]
    
    //==============================================================================
    
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Images)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
