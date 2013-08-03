//
//  FBCDDetailViewController.h
//  FailedBankCD
//
//  Created by John Edmonds-Bell on 03/08/2013.
//  Copyright (c) 2013 John Edmonds-Bell. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
