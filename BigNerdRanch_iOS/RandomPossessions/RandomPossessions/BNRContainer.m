//
//  BNRContainer.m
//  RandomPossessions
//
//  Created by Ryan Transfiguracion on 3/25/13.
//  Copyright (c) 2013 Ryan Transfiguracion. All rights reserved.
//

#import "BNRContainer.h"

@implementation BNRContainer

//-----------------
// CLASS METHODS
//-----------------


//-----------------
// INITIALIZERS
//-----------------

// Inits the container's array.
- (id) initWithItemName: (NSString*) name
         valueInDollars: (int) value
           serialNumber: (NSString*) sNumber;
{
    self = [super initWithItemName: name
                    valueInDollars: value
                      serialNumber: sNumber];
    
    m_containerItems = [[NSMutableArray alloc] init];
    
    return self;
}

//-----------------
// INSTANCE METHODS
//-----------------

// Can set an array to the container's array
- (void) setContainerItems: (NSMutableArray*) items
{
    m_containerItems = nil;     // First, must deallocate the initialized array.
    
    m_containerItems = items;   // Then, we can point to the array passed in this method.
}

// Can also manually add an item to the container's array.
- (void) addItem: (id) item
{
    [m_containerItems addObject: item];
}

- (int) valueInDollars
{
    int total_value = [self valueInDollars];   // First, get its own value.
    
    for (id item in m_containerItems)   // Second, add value of each item
    {
        total_value += [item valueInDollars];
    }
    
    return total_value;
}

- (NSString*) description
{
    NSString* descriptionString =
    [[NSString alloc] initWithFormat: @"%@ (%@): Worth $%d, recorded on %@, contains: %@",
     [self itemName],
     [self serialNumber],
     [self valueInDollars],
     [self dateCreated],
     m_containerItems];
    
    return descriptionString;
}
@end
