//
//  MNCategory.h
//  positioning
//
//  Created by Mapsted on 2019-08-12.
//  Copyright © 2019 Mapsted. All rights reserved.
//

#ifndef MNCategory_h
#define MNCategory_h

@class MNCategoryTree;

/***************************************************************************/

/// Represents a category for an entity
@interface MNCategory : NSObject

/***************************************************************************/

/// Creates an MNCategory instance with the specified 'key'.
///
/// - Parameter key:  A guid string identifying the category
/// - Returns: The new `MNCategory` instance.

- (nullable id)initWithGuid:(nonnull NSString *)key;

/***************************************************************************/

/// Creates an MNCategory instance with the specified 'key' for a specified 'propertyId'.
///
/// - Parameter propertyId:  An identifying of the associated property
/// - Parameter key:  The guid identifying the category
/// - Returns: The new `MNCategory` instance.

- (nullable id)initWithPropertyId:(NSInteger)propertyId Guid:(nonnull NSString *)key;

/***************************************************************************/

/// Name of the category
- (nonnull NSString *)name;

/***************************************************************************/

/// Custom internal name for the category
- (nonnull NSString *)categoryKey;

/***************************************************************************/

/// String uniquely identifying the category
- (nonnull NSString *)categoryGuid;

/***************************************************************************/

/// A list of all category identifying guids contained in this category
- (nonnull NSSet<NSString *> *)childrenGuids;

/***************************************************************************/

/// An ordered list of all category identiying guids contained in this category
- (nonnull NSArray<NSString *> *)orderedChildrenGuids;

/***************************************************************************/

/// An identifier string for the category image.
- (nonnull NSString *)imageGuid;

/***************************************************************************/

/// An identifier string for the image to be displayed when the category is selected.
- (nonnull NSString *)selectedImageGuid;

/***************************************************************************/

/// The data structure describing this category and the child categories it contains.
- (nullable MNCategoryTree *)categoryTree;

@end

#endif /* MNCategory_h */
