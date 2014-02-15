//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Griffin on 16/02/14.
//  Copyright (c) 2014 Griffin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
