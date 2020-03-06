//
//  MNEntityZone.h
//  positioning
//
//  Created by Mapsted on 2019-08-28.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNEntityZone_h
#define MNEntityZone_h

@class MNZone;
@class MNMercator;

/// Represents a label corresponding to a map zone
@interface MNEntityZone : MNZone


/***************************************************************************/

/// Creates an instance with the specified 'propertyId', 'floorId', 'longLabel' and 'shortLabel' values.
///
/// - Parameter propertyId:  A number identifying the property
/// - Parameter buildingId:  A number identifying the building
/// - Parameter floorId:  A number identifying the floor
/// - Parameter longLabel:  The long format name to display for the zone
/// - Parameter shortLabel:  The short format name to display for the zone
/// - Returns: The new `MNEntityZone` instance.

- (nonnull id)initWithPropertyId:(NSInteger)propertyId buildingId:(NSInteger)buildingId floorId:(NSInteger)floorId entityId:(NSInteger)entityId;

/***************************************************************************/

/// Represents a number identifying the property
- (NSInteger)propertyId;

/// Represents a number identifying the building

- (NSInteger)buildingId;

/// Represents a number identifying the floor
- (NSInteger)floorId;

- (NSInteger)entityId;

- (nullable MNMercator *)getLocation;

- (nonnull NSString *)getNearbyLandmarkName;

@end
#endif /* MNEntityZone_h */
