//
//  MBCrystalBall2.h
//  CrystalBall2
//
//  Created by Matt Brax on 3/3/14.
//  Copyright (c) 2014 MattBrax. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBCrystalBall2 : NSObject {
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;


- (NSString*) randomPrediction;
   


@end
