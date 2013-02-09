//
//  PlayingCard.h
//  Card Game
//
//  Created by Zsolt Kiraly on 1/24/13.
//  Copyright (c) 2013 Zsolt Kiraly. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PlayingCard : NSObject

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

- (NSString *)contents;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
