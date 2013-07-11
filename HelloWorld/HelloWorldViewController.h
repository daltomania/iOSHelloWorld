//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by William Dalton on 7/10/13.
//  Copyright (c) 2013 William Dalton. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *textField;
- (IBAction)changeGreeting:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (copy, nonatomic) NSString *userName;
@end
