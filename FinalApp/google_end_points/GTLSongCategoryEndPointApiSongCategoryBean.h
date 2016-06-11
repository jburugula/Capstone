/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2016 Google Inc.
 */

//
//  GTLSongCategoryEndPointApiSongCategoryBean.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   songCategoryEndPointApi/v1
// Description:
//   This is an API
// Classes:
//   GTLSongCategoryEndPointApiSongCategoryBean (0 custom class methods, 5 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLSongCategoryEndPointApiSongCategoryBean
//

@interface GTLSongCategoryEndPointApiSongCategoryBean : GTLObject
@property (nonatomic, retain) GTLDateTime *creationDate;

// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, retain) NSNumber *identifier;  // longLongValue

@property (nonatomic, retain) NSNumber *level;  // longLongValue
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) GTLDateTime *updatedDate;
@end