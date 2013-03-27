//
//  BNRItem.h
//  RandomPossessions
//
//  Created by Ryan Transfiguracion on 3/24/13.
//  Copyright (c) 2013 Ryan Transfiguracion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject

// Class Methods
+ (id) randomItem;


// Initializers
- (id) initWithItemName: (NSString*) name
         valueInDollars: (int) value
           serialNumber: (NSString*) sNumber;

// Properties (Instance variables with accessors)
@property (nonatomic, strong) BNRItem* containedItem;
@property (nonatomic, weak) BNRItem* container;

@property (nonatomic, copy) NSString* itemName;
@property (nonatomic, copy) NSString* serialNumber;
@property (nonatomic) int valueInDollars;
@property (nonatomic, strong) NSDate* dateCreated;

// Instance Methods

@end
