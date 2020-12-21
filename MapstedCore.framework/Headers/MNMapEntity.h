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
/// The type of map data represented (Building, property, etc)
- (MNDataType)dataType;

/***************************************************************************/

/// A number identifying the property
- (NSInteger)propertyId;

/// A number identifying the building
- (NSInteger)buildingId;

/// A number identifying the floor
- (NSInteger)floorId;

/// A number identifying the entity
- (NSInteger)entityId;

/***************************************************************************/

/// Whether or not this Entity has a parent entity
- (BOOL) hasParent;

/// Whether or not this Entity has a child entities
- (BOOL) hasChildren;

/***************************************************************************/

- (NSInteger)getGeometryType;
- (nullable MNMapPolygon *) getPolygon;
- (nullable MNMapPolyline *) getPolyline;
- (nullable MNMapPoint *) getPoint;


/***************************************************************************/

/// A number identifying the pointId
- (NSInteger)pointId;

/// A number identifying the polyline
- (NSInteger)polylineId;

/// A number identifying the polygon
- (NSInteger)polygonId;

/***************************************************************************/

/// A number identifying the associated cluster
- (NSInteger)clusterId;

/// Represents an array collection of node identifiers
- (nonnull NSArray<NSNumber *> *)nodeIds;

/***************************************************************************/


/// Represents an array collection of search filter identifiers
- (nonnull NSArray<NSNumber *> *)searchFilterIds;

/***************************************************************************/
/// A number identifying the search entity
- (NSInteger)entityNameId;

/// A number identifying the parent entity
- (NSInteger)parentEntityId;

/// Represents an array collection of search filter identifiers
- (nonnull NSArray<NSNumber *> *)childrenEntityIds;

/// A number identifying the search entity
- (NSInteger)searchEntityId;

/***************************************************************************/
/// Represents an identifier for the category
- (nonnull NSString *)categoryUid;

/*
/// Represents an array collection of category Tag UIDs
- (nonnull NSArray<NSString *> *)categoryTagUIds;
*/
/***************************************************************************/


/// A number specifying the type of entity
- (NSInteger)entityType;

/// A number specifying the type of subEntity
- (NSInteger)subEntityType;


/***************************************************************************/

/// Represents an array collection of searchh item identifiers
- (nonnull NSArray<NSNumber *> *)searchItemIds;

/***************************************************************************/

- (nullable MNMercator *)centroid;

/***************************************************************************/

/** Does Entity have text to plot */
- (BOOL) hasText;

/** Location of the text  */
- (nullable MNMercatorZone *) textLocation;

- (float) textRotation;

/***************************************************************************/

/** Does Entity have icon to plot */
- (BOOL) hasIcon;

/** Identifier for icon image */
- (nonnull NSString *) iconImageId;

/** location of the icon */
- (nullable MNMercatorZone *) iconLocation;

/** Size of icon image */
- (float) iconSize;

/***************************************************************************/

/** True if the associated geometry is a Polygon */
- (BOOL)isPolygon;

/** True if the associated geometry is a Polyline */
- (BOOL)isPolyline;

/** True if the associated geometry is a Point */
- (BOOL)isPoint;

/** The area for the associated geometry */
- (CGFloat)area;

/** The height for the associated geometry */
- (CGFloat)elevation;

/****************************************************/

- (nonnull NSString*) name;
- (nonnull NSString*) nameEnglish;

/** The height for the associated geometry */
- (CGFloat)cartoCSSHeight;
- (nonnull NSString*) cartoCSSLayerName;
- (nonnull NSString*) cartoCSSClassName;
- (nonnull NSString*) cartoCSSTextLayerName;
- (nonnull NSString*) cartoCSSTextClassName;
- (BOOL) isCartoCSSFade;

/****************************************************/
- (BOOL)isSearchable;

- (BOOL)isRoutable;

/****************************************************/
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
- (BOOL)isProperty;
- (BOOL)isBuilding;
- (BOOL)isTransition;

@end
#endif /* MNMapEntity_h */
