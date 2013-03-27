//
//  main.m
//  RandomPossessions
//
//  Created by Ryan Transfiguracion on 3/2/13.
//  Copyright (c) 2013 Ryan Transfiguracion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNRItem.h"
#import "BNRContainer.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool
    {
        // Create a mutable array object, store its address in items variable
//        NSMutableArray* items = [[NSMutableArray alloc] init];
        
//        for (int i = 0; i < 10; i++)
//        {
//            BNRItem* p = [BNRItem randomItem];
//            [items addObject: p];
//        }

        BNRItem* backpack = [[BNRItem alloc] init];
        [backpack setItemName: @"backpack"];
//        [items addObject: backpack];
        
        BNRItem* calculator = [[BNRItem alloc] init];
        [calculator setItemName: @"Calculator"];
//        [items addObject: calculator];
        
        [backpack setContainedItem: calculator];
        
//        BNRContainer* my_container = [[BNRContainer alloc] initWithItemName: @"My Container"
//                                                             valueInDollars: 111
//                                                               serialNumber: @"T6M9Z"];
        
//        [my_container setContainerItems: items];
        
//        NSLog(@"%@", my_container);
        
        // Destroy the array pointed to by items
//        NSLog(@"Setting items to nil...");
//        items = nil;
        backpack = nil;
        NSLog(@"Container: %@", [calculator container]);
        calculator = nil;
        
//        my_container = nil;
    }
    return 0;
}

