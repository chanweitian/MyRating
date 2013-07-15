//
//  PlayerCell.h
//  Rating
//
//  Created by Administrator on 15/07/13.
//  Copyright (c) 2013 Chan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UILabel *gameLabel;
@property (strong, nonatomic) IBOutlet UILabel *nameLabel;
@property (strong, nonatomic) IBOutlet UIImageView *ratingImageView;

@end
