//
//  StatsDemoViewController.h
//  StatsDemo
//
//  Created by shu223 on 11/04/28.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Stats.h"

@interface StatsDemoViewController : UIViewController {
    Stats *stats;   
}
@property (nonatomic, retain) Stats *stats;
- (IBAction)pressBtn:(UIButton *)sender;

@end
