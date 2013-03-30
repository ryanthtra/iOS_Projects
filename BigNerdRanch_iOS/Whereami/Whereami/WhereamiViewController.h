//
//  WhereamiViewController.h
//  Whereami
//
//  Created by Ryan Transfiguracion on 3/26/13.
//  Copyright (c) 2013 Ryan Transfiguracion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface WhereamiViewController : UIViewController
    <CLLocationManagerDelegate, MKMapViewDelegate, UITextFieldDelegate>
{
    CLLocationManager* locationManager;
    
    IBOutlet MKMapView*                 worldView;
    IBOutlet UIActivityIndicatorView*   activityIndicator;
    IBOutlet UITextField*               locationTitleField;
}

- (void) findLocation;
- (void) foundLocation: (CLLocation*) loc;
@end
