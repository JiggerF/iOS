//
//  ViewController.h
//  BeginnersIOS
//
//  Created by Jigger Fantonial on 29/06/15.
//  Copyright (c) 2015 Jigger Fantonial. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *lblInfo;
@property (weak, nonatomic) IBOutlet UITextField *txtText;
- (IBAction)tappedClickMe:(id)sender;


@end

