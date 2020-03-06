//
//  MapstedAnalyticsApi.h
//  positioning
//
//  Created by Mapsted on 2019-09-25.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MapstedAnalyticsApi_h
#define MapstedAnalyticsApi_h

#import <Foundation/Foundation.h>
#import "MNAnalyticsBundle.h"

@interface MapstedAnalyticsApi : NSObject
+ (MapstedAnalyticsApi *)shared;
- (void)updateScreen:(NSString *)currentScreen;
- (void)updateScreen:(NSString *) currentScreen bundleContent: (MNAnalyticsBundle *) bundleContent;
- (void)addSearchEvent:(NSString *)searchBarId searchString:(NSString *)searchString selectedString:(NSString *) selectedString;
- (void)addMarketingAnalyticsEvent:(NSString *)eventUID feedUID:(NSString *)feedUID displayDuration:(double)secs interactionType:(int)interactionType;
@end

#endif /* MapstedAnalyticsApi_h */
