//
//  Card.h
//  Card Game
//
//  Created by Zsolt Kiraly on 1/24/13.
//  Copyright (c) 2013 Zsolt Kiraly. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isFaceUp) bool faceUp;
@property (nonatomic, getter=isUnplayable) bool unplayable;



- (int)match:(NSArray *)otherCards;

@end
