//
//  SGAudioRenderer.h
//  SGPlayer
//
//  Created by Single on 2018/1/19.
//  Copyright © 2018年 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SGPlayer/SGAudioDescriptor.h>
@import AVFoundation;
@interface SGAudioRenderer : NSObject

/*!
 @method supportedAudioDescriptor
 @abstract
    Indicates all supported audio descriptor.
*/
+ (SGAudioDescriptor *)supportedAudioDescriptor;

/*!
 @property pitch
 @abstract
    Indicates the current pitch.
 */
@property (NS_NONATOMIC_IOSONLY) Float64 pitch;

/*!
 @property volume
 @abstract
    Indicates the current volume.
 */
@property (NS_NONATOMIC_IOSONLY) Float64 volume;

@end

#pragma mark - Recorder
@interface SGAudioRenderer ()
/*!
@method startRecorde:
@abstract
   Recode media to fileURL.

@discussion
   Use this method to capture media as file.
*/

- (AVAssetWriterInput*)startRecorde:(CFTimeInterval)recordingStartTime;

/*!
@method stopRecorde:
@abstract
   Stop recode media to fileURL.

@discussion
   Use this method to stop recode.
*/
- (void)stopRecorde;
@end
