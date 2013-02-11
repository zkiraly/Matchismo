//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Zsolt Kiraly on 2/10/13.
//  Copyright (c) 2013 Zsolt Kiraly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"

@interface CardMatchingGame : NSObject

// designated initializer
- (id)initWithCardCount:(NSUInteger)cardCount usingDeck:(Deck *)deck;
- (void)flipCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@property (readonly, nonatomic) int score;

@end
