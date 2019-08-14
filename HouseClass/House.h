//
//  House.h
//  HouseClass
//
//  Created by Michael Miles on 8/13/19.
//  Copyright © 2019 Michael Miles. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface House : NSObject

// USE * WHEN YOU NEED POINTERS, LIKE IN STRINGS
@property (nonatomic, copy) NSString *address;
@property (nonatomic, readonly) int numberOfBedrooms;
@property (nonatomic) BOOL hasHotTub;

-(instancetype)initWithAddress: (NSString*)address;

@end

NS_ASSUME_NONNULL_END
