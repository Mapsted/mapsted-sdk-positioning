//
//  Searchable.h
//  positioning
//
//  Created by Mapsted on 2019-08-20.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef Searchable_h
#define Searchable_h

#import <Foundation/Foundation.h>

@class MNMercator;

/// Represents a blueprint for searchable objects. The fields correspond to possible search filters
@protocol Searchable <NSObject>
- (NSString *)name;
- (NSString *)categoryName;
- (MNMercator *)location;
- (NSInteger)propertyId;
- (NSInteger)buildingId;
- (NSInteger)floorId;
- (BOOL)isSearchEntity;
- (NSInteger)identifier;
@end

#endif


