//
//  brViewController.h
//  CalculatorTutorial
//
//  Created by Rodrigo de Oliveira Ramos on 13/08/14.
//  Copyright (c) 2014 RLabs. All rights reserved.
//

#import <UIKit/UIKit.h>

int Method;
int SelectNumber;
float RunningTotal;

@interface brViewController : UIViewController
{
    IBOutlet UILabel *Screen;
    
}
-(IBAction)Number0:(id)sender;
-(IBAction)Number1:(id)sender;
-(IBAction)Number2:(id)sender;
-(IBAction)Number3:(id)sender;
-(IBAction)Number4:(id)sender;
-(IBAction)Number5:(id)sender;
-(IBAction)Number6:(id)sender;
-(IBAction)Number7:(id)sender;
-(IBAction)Number8:(id)sender;
-(IBAction)Number9:(id)sender;
-(IBAction)Times:(id)sender;
-(IBAction)Divide:(id)sender;
-(IBAction)Subtract:(id)sender;
-(IBAction)Plus:(id)sender;
-(IBAction)Equals:(id)sender;
-(IBAction)AllClear:(id)sender;
@end
