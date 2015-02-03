//
//  ToDoItem.h
//  ToDoListProject
//
//  Created by gengyj on 15-2-3.
//  Copyright (c) 2015年 gengyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
