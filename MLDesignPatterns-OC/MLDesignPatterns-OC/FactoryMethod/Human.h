//
//  Human.h
//  MLDesignPatterns-OC
//
//  Created by mjpc on 2017/8/16.
//  Copyright © 2017年 mali. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Human;
@protocol HumanFactory <NSObject>

- (Human *)createHuman;

@end

@interface Human : NSObject

- (void)talk;

@end




