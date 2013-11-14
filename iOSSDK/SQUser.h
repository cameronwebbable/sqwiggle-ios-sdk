//
//  User.h
//  SqwiggleSDK
//
//  Created by Cameron Webb on 11/13/13.
//  Copyright (c) 2013 Sqwiggle. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SQObject.h"


@interface SQUser : SQObject

@property (nonatomic, readonly) NSString *role;
@property (nonatomic, readonly) NSString *mode;
@property (nonatomic, readonly) NSString *status;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) BOOL confirmed;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) float timeZoneOffset;
@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic, readonly) NSDate *lastActiveAt;
@property (nonatomic, readonly) NSURL *avatar;

@end
