/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// An interface for indicating whether the version of the operating system on which the process is executing
// is the same or later than a given version.
NS_SWIFT_NAME(OperatingSystemVersionComparing)
@protocol FBSDKOperatingSystemVersionComparing

// UNCRUSTIFY_FORMAT_OFF
- (BOOL)fb_isOperatingSystemAtLeastVersion:(NSOperatingSystemVersion)version
NS_SWIFT_NAME(fb_isOperatingSystemAtLeast(_:));
// UNCRUSTIFY_FORMAT_ON

@end

NS_ASSUME_NONNULL_END
