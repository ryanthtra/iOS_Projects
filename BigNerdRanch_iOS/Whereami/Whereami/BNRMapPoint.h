//
//  BNRMapPoint.h
//  Whereami
//
//  Created by Ryan Transfiguracion on 3/28/13.
//  Copyright (c) 2013 Ryan Transfiguracion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/Corelocation.h>
#import <MapKit/MapKit.h>

@interface BNRMapPoint : NSObject <MKAnnotation>
{
}

// A new designated initializer for instances of BNRMapPoint
- (id) initWithCoordinate: (CLLocationCoordinate2D) c
                    title: (NSString*) t;

// This is a required property from MKAnnotaion
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

// This is an optional property from MKAnnotation
@property (nonatomic, copy) NSString* title;

@end
