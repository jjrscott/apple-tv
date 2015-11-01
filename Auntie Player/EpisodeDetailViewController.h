//
//    The MIT License (MIT)
//
//    Copyright (c) 2015 Phillip Caudell & Matthew Cheetham
//
//    Permission is hereby granted, free of charge, to any person obtaining a copy
//    of this software and associated documentation files (the "Software"), to deal
//    in the Software without restriction, including without limitation the rights
//    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//    copies of the Software, and to permit persons to whom the Software is
//    furnished to do so, subject to the following conditions:
//
//    The above copyright notice and this permission notice shall be included in
//    all copies or substantial portions of the Software.
//
//    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//    THE SOFTWARE.
//

#import <UIKit/UIKit.h>
#import "AsyncImageView.h"
#import "EpisodeCollectionView.h"

@class Episode;

@interface EpisodeDetailViewController : UIViewController

@property (nonatomic, strong) AsyncImageView *backgroundImageView;
@property (nonatomic, strong) UIVisualEffectView *backgroundVisualEffectView;
@property (nonatomic, strong) Episode *episode;
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UILabel *subtitleLabel;
@property (nonatomic, strong) UILabel *infoLabel;
@property (nonatomic, strong) UIButton *descriptionButton;
@property (nonatomic, strong) UILabel *descriptionLabel;
@property (nonatomic, strong) AsyncImageView *thumbnailImageView;

@property (nonatomic, strong) UIButton *playButton;
@property (nonatomic, strong) UIButton *audioDescribedButton;
@property (nonatomic, strong) UIButton *signedButton;
@property (nonatomic, strong) EpisodeCollectionView *relatedEpisodeView;

@property (nonatomic, strong) EpisodeCollectionView *relatedProgramView;

- (instancetype)initWithEpisode:(Episode *)episode;

@end
