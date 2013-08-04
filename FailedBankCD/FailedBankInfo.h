//
//  FailedBankInfo.h
//  FailedBankCD
//
//  Created by John Edmonds-Bell on 04/08/2013.
//  Copyright (c) 2013 John Edmonds-Bell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankDetails;

@interface FailedBankInfo : NSManagedObject

@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) FailedBankDetails *details;

@end
