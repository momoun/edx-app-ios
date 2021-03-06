//
//  OEXRegistrationAgreement.h
//  edXVideoLocker
//
//  Created by Jotiram Bhagat on 13/02/15.
//  Copyright (c) 2015-2016 edX. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

@interface OEXRegistrationAgreement : NSObject

@property(readonly, nonatomic, copy, nullable) NSString* url;
@property(readonly, nonatomic, copy, nullable) NSString* text;

- (instancetype)initWithDictionary:(NSDictionary*)dictionary;

@end

NS_ASSUME_NONNULL_END
