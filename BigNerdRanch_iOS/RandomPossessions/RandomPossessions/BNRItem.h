//
//  BNRItem.h
//  RandomPossessions
//
//  Created by Ryan Transfiguracion on 3/24/13.
//  Copyright (c) 2013 Ryan Transfiguracion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject
{
    NSString*       itemName;
    NSString*       serialNumber;
    int             valueInDollars;
    NSDate*         dateCreated;
}


// Class Methods
+ (id) randomItem;


// Initializers
- (id) initWithItemName: (NSString*) name
         valueInDollars: (int) value
           serialNumber: (NSString*) sNumber;


// Instance Methods
- (void)            setItemName: (NSString*) str;
- (NSString*)       itemName;

- (void)            setSerialNumber: (NSString*) str;
- (NSString*)       serialNumber;

- (void)            setValueInDollars: (int) i;
- (int)             valueInDollars;

- (NSDate*)         dateCreated;

@end
