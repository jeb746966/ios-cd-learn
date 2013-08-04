//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by John Edmonds-Bell on 03/08/2013.
//  Copyright (c) 2013 John Edmonds-Bell. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDMasterViewController : UITableViewController
@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;
@property (nonatomic, strong) NSArray *failedBankInfos;
@end
