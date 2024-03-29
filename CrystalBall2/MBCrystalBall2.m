//
//  MBCrystalBall2.m
//  CrystalBall2
//
//  Created by Matt Brax on 3/3/14.
//  Copyright (c) 2014 MattBrax. All rights reserved.
//

#import "MBCrystalBall2.h"

@implementation MBCrystalBall2


- (NSArray *) predictions {
    if (_predictions == nil){
        _predictions = [[NSArray alloc] initWithObjects:@"It is Certain",@"It is Decidedly so", @"All signs say YES",
                                       @"The stars are not aligned",
                                       @"My reply is no",
                                       @"It is doubtful",
                                       @"Concentrate, and ask again",
                                       @"Unable to answer now", nil];
    }
        return _predictions;
    
    }
        


- (NSString*) randomPrediction {
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
    
}

@end
