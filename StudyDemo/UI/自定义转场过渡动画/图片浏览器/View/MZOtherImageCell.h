//
//  MZOtherImageCell.h
//  StudyDemo
//
//  Created by 曾龙 on 2019/11/26.
//  Copyright © 2019 曾龙. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MZOtherImageCell : UITableViewCell
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, weak, readonly) UIImageView *iconView;
@end

NS_ASSUME_NONNULL_END
