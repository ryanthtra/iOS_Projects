//
//  WhereamiViewController.h
//  Whereami
//
//  Created by Ryan Transfiguracion on 3/26/13.
//  Copyright (c) 2013 Ryan Transfiguracion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface WhereamiViewController : UIViewController <CLLocationManagerDelegate>
{
    CLLocationManager* locationManager;
}
@end
