//
//  MNMapEntity.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-27.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNMapEntity_h
#define MNMapEntity_h

typedef NS_ENUM(NSInteger, MNDataType);


/// Represents an association of maps and entites
@interface MNMapEntity : NSObject

/***************************************************************************/

/// Creates an 'MNMapEntity' instance with the specified 'propertyId' and 'entityId' values.
///
/// - Parameter propertyId:  A number identifying the property
/// - Parameter entityId:  A number identifying the entity
/// - Returns: The new `MNMapEntity` instance.

- (nullable id)initWithPropertyId:(NSInteger)propertyId entityId:(NSInteger)entityId;

/***************************************************************************/

/// Creates an 'MNMapEntity' instance with the specified 'buildingId' and 'entityId' values.
///
/// - Parameter buildingId:  A number identifying the buildingId
/// - Parameter entityId:  A number identifying the entity
/// - Returns: The new `MNMapEntity` instance.

- (nullable id)initWithBuildingId:(NSInteger)buildingId entityId:(NSInteger)entityId;

/***************************************************************************/

/// A number identifying the property
- (NSInteger)propertyId;

/// A number identifying the building
- (NSInteger)buildingId;

/// A number identifying the floor
- (NSInteger)floorId;

/// A number identifying the entity
- (NSInteger)entityId;

/// A number identifying the pointId
- (NSInteger)pointId;

/// A number identifying the polyline
- (NSInteger)polylineId;

/// A number identifying the polygon
- (NSInteger)polygonId;

/// The type of data represented (Building, property, etc)
- (MNDataType)dataType;

/// A number specifying the type of entity
- (NSInteger)entityType;

/// A number specifying the type of subEntity
- (NSInteger)subEntityType;

/// A number identifying the search entity
- (NSInteger)searchEntityId;

/// Represents an identifier for the category
- (nonnull NSString *)categoryUid;

/// Represents an array collection of search filter identifiers
- (nonnull NSArray<NSNumber *> *)searchFilterIds;

/// Represents an array collection of searchh item identifiers
- (nonnull NSArray<NSNumber *> *)searchItemIds;

- (nullable MNMercator *)centroid;
/***************************************************************************/

- (BOOL)isPolygon;

- (CGFloat)area;

- (BOOL)isSearchable;

/* Type of Entity */
- (BOOL)isStructureType;
- (BOOL)isRoom;
- (BOOL)isWashroom;
- (BOOL)isElevator;
- (BOOL)isEscalator;
- (BOOL)isEntranceExit;
- (BOOL)isFloorOpening;
- (BOOL)isInaccessible;
- (BOOL)isParking;
- (BOOL)isPathway;
- (BOOL)isRamp;
- (BOOL)isStairs;
- (BOOL)isSteps;
- (BOOL)isObstacleType;
- (BOOL)isFurniture;
- (BOOL)isKiosk;
- (BOOL)isObstruction;
- (BOOL)isVegetation;
- (BOOL)isWall;
- (BOOL)isWater;
- (BOOL)isPointOfInterestType;
- (BOOL)isBoundaryType;

@end
#endif /* MNMapEntity_h */
