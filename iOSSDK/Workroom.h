//
//  Workroom.h
//  SqwiggleSDK
//
//  Created by Cameron Webb on 11/13/13.
//  Copyright (c) 2013 Sqwiggle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"

@interface Workroom : NSObject

@property (nonatomic, readonly) int id;
@property (nonatomic, readonly) User *createdBy;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *url;

@end