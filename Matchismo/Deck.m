//
//  Deck.m
//  Card Game
//
//  Created by Zsolt Kiraly on 1/24/13.
//  Copyright (c) 2013 Zsolt Kiraly. All rights reserved.
//

#import "Deck.h"
#import "Card.h"

@interface Deck()

@property (strong, nonatomic) NSMutableArray *cards;

@end

@implementation Deck

- (NSMutableArray *)cards // lazy instansiation
{
    if(!_cards) _cards = [[NSMutableArray alloc] init];
    return _cards;
}

- (void)addCard:(Card *)card atTop:(bool)atTop
{
    if(!_cards) _cards = [[NSMutableArray alloc] init];
    
    if(atTop)
    {
        [self.cards insertObject:card atIndex:0];
    }
    else
    {
        [self.cards addObject:card];
    }
    return;
}

- (Card *)drawRandomCard
{
    Card *randomCard = nil;
    
    if (self.cards.count) {
        unsigned index = arc4random() % self.cards.count;
        randomCard = self.cards[index];
        
        [self.cards removeObjectAtIndex:index];
        
        
    }
    else{
        randomCard = nil;
    }
   
    return randomCard;
}


@end
