//
//  MNAnalyticsBundle.h
//  positioning
//
//  Created by Mapsted on 2019-09-27.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef MNAnalyticsBundle_h
#define MNAnalyticsBundle_h

@interface MNAnalyticsBundle : NSObject
@property(nonatomic, readonly) NSMutableArray *entityNameIDs;
@property(nonatomic, readonly) NSMutableArray *propertyIds;
@property(nonatomic, readonly) NSMutableArray *categoryUIDs;
@property(nonatomic, readonly) NSMutableArray *feedUIDs;
- (void)addPropertyId:(NSInteger)propertyId;
- (void)addcategoryUID:(NSString *)categoryUID;
- (void)addfeedUID:(NSString *)feedUID;
- (void)entityNameID:(int)entityID;
@end

#endif
