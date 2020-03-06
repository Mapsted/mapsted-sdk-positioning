//
//  MNBuildingPolygons.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNBuildingPolygons_h
#define MNBuildingPolygons_h

@class MNMapPolygon;

/// Represents building polygons
@interface MNBuildingPolygons : NSObject

/***************************************************************************/

/// Creates an instance with the specified 'buildingId'.
///
/// - Parameter buildingId:  A number identifying the building
/// - Returns: The new `MNMapPolygon` instance.

- (nullable id)initWithBuildingId:(NSInteger)buildingId;

/***************************************************************************/

/// Returns a number identifying the property
- (NSInteger)propertyId;

/// Returns a number identifying the building
- (NSInteger)buildingId;

/***************************************************************************/

/// Creates an instance with the specified 'floorId' and 'polygonId' values.
///
/// - Parameter floorId:  A number identifying the floor
/// - Parameter polygonId:  A number identifying the polygon

/// - Returns: The new `MNMapPolygon` instance.

- (nullable MNMapPolygon *)polygonWithFloorId:(NSInteger)floorId polygonId:(NSInteger)polygonId;

/***************************************************************************/

/// Returns map floor polygons matching the floor specified by 'floorId'
///
/// - Parameter floorId:  A number identifying the floor
/// - Returns an array collection of 'MNMapPolygon' map polygons

- (nullable NSArray<MNMapPolygon *> *)floorPolygonsWithFloorId:(NSInteger)floorId;

/***************************************************************************/


@end

#endif /* MNBuildingPolygons_h */
