//
//  TZVideoPlayerController.h
//  TZImagePickerController
//
//  Created by 谭真 on 16/1/5.
//  Copyright © 2016年 谭真. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TZAssetModel;

/**
 视频预览控制器，简单的播放/暂停/发送视频功能，用的是AVPlayer来播放。
 */
@interface TZVideoPlayerController : UIViewController

@property (nonatomic, strong) TZAssetModel *model;

@end
