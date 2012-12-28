//
//  AppDelegate.h
//  LearningDelegate
//
//  Created by UCHIYA on 12/12/28.
//  Copyright (c) 2012年 H.UCHIYA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyLabel.h"
#import "MyTextField.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate,UITextFieldDelegate>

@property MyTextField* textField_A;
@property MyLabel* label_B;

@property (strong, nonatomic) UIWindow *window;

@end
