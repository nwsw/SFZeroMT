/***********************************************************************
 *  SFZeroMT Multi-Timbral Juce Module
 *
 *  Original SFZero Copyright (C) 2012 Steve Folta
 *      https://github.com/stevefolta/SFZero
 *  Converted to Juce module Copyright (C) 2016 Leo Olivers
 *      https://github.com/altalogix/SFZero
 *  Extended for multi-timbral operation Copyright (C) 2017 Cognitone
 *      https://github.com/cognitone/SFZeroMT
 *
 *  Licensed under MIT License - Please read regard LICENSE document
 ***********************************************************************/

#ifndef SF2GENERATOR_H_INCLUDED
#define SF2GENERATOR_H_INCLUDED

#include "SFZCommon.h"

#define SF2GeneratorValue(name, type) name

namespace sfzero
{
    
    struct SF2Generator
    {
        enum Type
        {
            Word,
            Short,
            Range
        };
        
        const char *name;
        Type type;
        
        enum
        {
            #include "sf2-chunks/generators.h"
        };
    };
    
    const SF2Generator *GeneratorFor(int index);
}
#undef SF2GeneratorValue

#endif // SF2GENERATOR_H_INCLUDED
