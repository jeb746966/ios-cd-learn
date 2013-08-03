//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by John Edmonds-Bell on 03/08/2013.
//  Copyright (c) 2013 John Edmonds-Bell. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface FBCDMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
