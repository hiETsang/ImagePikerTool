//
//  DFHeadImageView.h
//  DFDefineView
//
//  Created by JW on 15/5/20.
//  Copyright (c) 2015年 JW All rights reserved.
//

#import <UIKit/UIKit.h>
@class DFHeadImageView;

@protocol DFHeadImageViewDelegate <NSObject>
@optional
- (void)imageView:(DFHeadImageView *)imageView didSelectImage:(UIImage*)image;
- (void)imageViewDidCancleSelectImage:(DFHeadImageView *)imageView;
@end


@interface DFHeadImageView : UIImageView

@property (strong , nonatomic) id<DFHeadImageViewDelegate> delegate;

//make imageview can receive action than change image
-(void)canReceiveAction:(BOOL)receiveAction;
-(BOOL)isCanReceiveAction;

//make imageview circle
-(void)makeToCircle:(BOOL)circle;
-(BOOL)makeToCircle;

@end
