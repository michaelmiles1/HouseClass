//
//  House.m
//  HouseClass
//
//  Created by Michael Miles on 8/13/19.
//  Copyright © 2019 Michael Miles. All rights reserved.
//

#import "House.h"

@interface House()

@property (nonatomic, readwrite) int numberOfBedrooms;

@end



@implementation House

-(instancetype)initWithAddress:(NSString*)address {
    self = [super init];
    
    if (self) {
        //initialize properties here...COPY makes sure it isnt changed accidentally
        _address = [address copy];
        _numberOfBedrooms = 2;
        _hasHotTub = false;
    }
    return self;
}

@end
