//
//  Player.h
//  Rating
//
//  Created by Administrator on 12/07/13.
//  Copyright (c) 2013 Chan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
