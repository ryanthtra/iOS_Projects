//
//  BNRContainer.h
//  RandomPossessions
//
//  Created by Ryan Transfiguracion on 3/25/13.
//  Copyright (c) 2013 Ryan Transfiguracion. All rights reserved.
//

#import "BNRItem.h"

@interface BNRContainer : BNRItem
{    
    NSMutableArray*     m_containerItems;
}

//-----------------
// CLASS METHODS
//-----------------


//-----------------
// INITIALIZERS
//-----------------


//-----------------
// INSTANCE METHODS
//-----------------
- (void) setContainerItems: (NSMutableArray*) items;    // Sets container's array to
                                                        // another array.

- (void) addItem: (id) item;            // Adds a BNRItem (or any subclass
                                        // instance) to the container's array.

@end
