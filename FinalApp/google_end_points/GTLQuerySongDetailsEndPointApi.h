/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2016 Google Inc.
 */

//
//  GTLQuerySongDetailsEndPointApi.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   songDetailsEndPointApi/v1
// Description:
//   This is an API
// Classes:
//   GTLQuerySongDetailsEndPointApi (3 custom class methods, 11 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@interface GTLQuerySongDetailsEndPointApi : GTLQuery

//
// Parameters valid on all methods.
//

// Selector specifying which fields to include in a partial response.
@property (nonatomic, copy) NSString *fields;

//
// Method-specific parameters; see the comments below for more information.
//
@property (nonatomic, copy) NSString *aarohana;
@property (nonatomic, assign) long long after;
@property (nonatomic, copy) NSString *avarohana;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *details;
@property (nonatomic, assign) double duration;
@property (nonatomic, copy) NSString *pictureUrl;
@property (nonatomic, copy) NSString *ragam;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *videoUrl;

#pragma mark - Service level methods
// These create a GTLQuerySongDetailsEndPointApi object.

// Method: songDetailsEndPointApi.createSongDetails
//  Authorization scope(s):
//   kGTLAuthScopeSongDetailsEndPointApiUserinfoEmail
// Fetches a GTLSongDetailsEndPointApiSongDetailsBean.
+ (instancetype)queryForCreateSongDetailsWithAarohana:(NSString *)aarohana
                                            avarohana:(NSString *)avarohana
                                             category:(NSString *)category
                                              details:(NSString *)details
                                             duration:(double)duration
                                           pictureUrl:(NSString *)pictureUrl
                                             videoUrl:(NSString *)videoUrl
                                                ragam:(NSString *)ragam
                                                title:(NSString *)title;

// Method: songDetailsEndPointApi.getAllSongsDetails
//  Authorization scope(s):
//   kGTLAuthScopeSongDetailsEndPointApiUserinfoEmail
// Fetches a GTLSongDetailsEndPointApiCollectionResponseSongDetailsBean.
+ (instancetype)queryForGetAllSongsDetailsWithAfter:(long long)after;

// Method: songDetailsEndPointApi.getSongDetails
//  Authorization scope(s):
//   kGTLAuthScopeSongDetailsEndPointApiUserinfoEmail
// Fetches a GTLSongDetailsEndPointApiSongDetailsBean.
+ (instancetype)queryForGetSongDetailsWithTitle:(NSString *)title
                                       category:(NSString *)category
                                          ragam:(NSString *)ragam;

@end