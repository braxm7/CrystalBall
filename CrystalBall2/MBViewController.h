//
//  MBViewController.h
//  CrystalBall2
//
//  Created by Matt Brax on 3/1/14.
//  Copyright (c) 2014 MattBrax. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MBCrystalBall2;


@interface MBViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) MBCrystalBall2 *crystalBall;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;


@end
