//
//  LocationViewController.h
//  Location
//
//  Created by Trushant
//  Copyright (c) 2018 Location. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LocationViewController : UIViewController
{
    NSMutableDictionary *savedProfile;
    NSArray *locationArray;
}
@property (strong, nonatomic) IBOutlet UISegmentedControl *modeSeg;
@property (strong, nonatomic) IBOutlet UITableView *tableView;
@end
