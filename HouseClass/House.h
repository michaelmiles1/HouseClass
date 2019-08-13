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
@property (nonatomic) NSString *address;
@property (nonatomic) int numberOfBedrooms;
@property (nonatomic) BOOL hasHotTub;

@end

NS_ASSUME_NONNULL_END
