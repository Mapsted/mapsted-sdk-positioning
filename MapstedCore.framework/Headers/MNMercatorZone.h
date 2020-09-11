//
//  MNMercatorZone.h
//  positioning
//
//  Created by Daniel on 2020-05-06.
//  Copyright © 2020 Mapsted. All rights reserved.
//

#ifndef MNMercatorZoneBridge_h
#define MNMercatorZoneBridge_h

/// Represents an MNMercatorZone object with a specific MNMercator, accuracy, and timestamp.
@interface MNMercatorZone : NSObject

/***************************************************************************/

/// Represents the property
@property (readonly) int propertyId;

/***************************************************************************/

/// Represents the building
@property (readonly) int buildingId;

/***************************************************************************/

/// Represents the floor
@property (readonly) int floorId;

/***************************************************************************/

/// Represents the timestamp
@property (readonly) double x;
@property (readonly) double y;
@property (readonly) double z;

/***************************************************************************/

/// Creates an instance with a specified 'propertyId', 'buildingid' , 'floorId', 'x coordinate', and 'y coordinate'.
///
/// - Parameter propertyId:  A number identifying the property
/// - Parameter buildingId:  A number identifying the building
/// - Parameter floorId:  A number identifying the floor
/// - Parameter x:  The x coordinate of the mercator's location
/// - Parameter y:  The y coordinate of the mercator's location/
/// - Returns: The new `MNMercatorZone` instance.

- (nonnull id)initWithPropertyId:(int)propertyId  buildingId:(int)buildingId  floorId:(int)floorId  x:(double)x  y:(double)y;

/***************************************************************************/

/// Creates an instance with a specified 'propertyId', 'buildingid' , 'floorId', 'x coordinate', and 'y coordinate' and 'z' coordinate
///
/// - Parameter propertyId:  A number identifying the property
/// - Parameter buildingId:  A number identifying the building
/// - Parameter floorId:  A number identifying the floor
/// - Parameter x:  The x coordinate of the mercator's location
/// - Parameter y:  The y coordinate of the mercator's location/
/// - Parameter z:  The z coordinate of the mercator's location/
/// - Returns: The new `MNMercatorZone` instance.

- (nonnull id)initWithPropertyId:(int)propertyId  buildingId:(int)buildingId  floorId:(int)floorId x:(double)x y:(double)y z:(double)z;

/***************************************************************************/
@end



#endif /* MNMercatorZone_h */
