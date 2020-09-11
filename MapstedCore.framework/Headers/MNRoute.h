//
//  MNRoute.h
//  positioning
//
//  Created by Mapsted on 2019-04-11.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MNRouteSegment.h"


/***************************************************************************/

/// Represents a mapping route
@interface MNRoute : NSObject

/***************************************************************************/

/// Segments of the mapping route
@property (readonly, nonnull) NSArray<MNRouteSegment *> *segments;

/***************************************************************************/

/// Name of entity at starting point
@property (readonly, nonnull) NSString *startName;

/***************************************************************************/

/// Name of entity at destination point
@property (readonly, nonnull) NSString *destinationName;

/***************************************************************************/

/// The estimated distance covered and estimated time required to cover the route
@property (readonly, nonnull) MNRouteDistanceTime *distTime;

/***************************************************************************/

/// Number identifying the destination floor
- (NSInteger)floorId;

/***************************************************************************/

/// Number identifying the building
- (NSInteger)buildingId;

/***************************************************************************/

/// Number identifying the property
- (NSInteger)propertyId;

/***************************************************************************/

/// Number identifying the entity at the starting point of the route
- (NSInteger)startEntityId;

/***************************************************************************/

/// Number identifying the destination point of the route
- (NSInteger)destinationEntityId;


/***************************************************************************/

/// Creates an instance of 'MNRoute' with the specified route 'segments' beginning at 'startName' and ending at
/// 'destinationName' which is expected to take distance and time specified by 'distTimeEstimate'.
///
/// - Parameter segments:  The segments of the route
/// - Parameter startName:  The name of the entity at the starting point of the route
/// - Parameter destinationName:  The name of the entity at the ending point of the route
/// - Parameter distTimeEstimate:  The estimated distance covered and time required for the route.
/// - Returns: The new `MNRoute` instance.

- (nonnull id)initWithRoute:(nonnull NSArray<MNRouteSegment *> *)segments startName:(nonnull NSString *)startName destinationName:(nonnull NSString *)destinationName distTimeEstimate:(nullable MNRouteDistanceTime *)distanceTime;


/***************************************************************************/

@end

