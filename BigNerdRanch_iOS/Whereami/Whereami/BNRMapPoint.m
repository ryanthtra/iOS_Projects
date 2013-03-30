//
//  BNRMapPoint.m
//  Whereami
//
//  Created by Ryan Transfiguracion on 3/28/13.
//  Copyright (c) 2013 Ryan Transfiguracion. All rights reserved.
//

#import "BNRMapPoint.h"

@implementation BNRMapPoint

// Automatically creates accessor methods for these properties.
@synthesize coordinate, title;

- (id) initWithCoordinate: (CLLocationCoordinate2D) c
                    title: (NSString*) t
{
    self = [super init];
    if (self)
    {
        coordinate = c;
        [self setTitle: t];
    }
    
    return self;
}

- (id) init
{
    return [self initWithCoordinate: CLLocationCoordinate2DMake(43.07, -89.32)
                              title: @"Hometown"];
}

@end
