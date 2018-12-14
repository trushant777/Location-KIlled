//
//  LocationAppDelegate.h
//  Location
//
//  Created by Trushant
//  Copyright (c) 2018 Location. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LocationManager.h"

@interface LocationAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong,nonatomic) LocationManager * shareModel;

@end
