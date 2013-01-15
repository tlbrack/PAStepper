//
//  PAStepper.h
//  Leroy Merlin
//
//  Created by Miroslav Perovic on 11/30/12.
//  Copyright (c) 2012 Pure Agency. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol PAStepperDelegate <NSObject>

@optional

- (void)didFinishChangingPAStepper:(id)stepper toValue:(double)value;

@end

@interface PAStepper : UIControl

@property (assign, nonatomic) id<PAStepperDelegate> delegate;
@property (assign, nonatomic) double value;
@property (assign, nonatomic) double minimumValue;
@property (assign, nonatomic) double maximumValue;
@property (assign, nonatomic) double stepValue;
@property (assign, nonatomic) BOOL wraps;
@property (assign, nonatomic) BOOL continuous;
@property (assign, nonatomic) BOOL autorepeat;
@property (assign, nonatomic) double autorepeatInterval;
@property (strong, nonatomic) NSString *unitSuffix;
@property (strong, nonatomic) UIColor *tintColor;
@property (strong, nonatomic) UIColor *textColor;

- (UIImage *)backgroundImageForState:(UIControlState)state;
- (void)setBackgroundImage:(UIImage *)image forState:(UIControlState)state;

- (UIImage *)decrementImageForState:(UIControlState)state;
- (void)setdDecrementImage:(UIImage *)image forState:(UIControlState)state;

- (UIImage *)incrementImageForState:(UIControlState)state;
- (void)setdIncrementImage:(UIImage *)image forState:(UIControlState)state;

@end
