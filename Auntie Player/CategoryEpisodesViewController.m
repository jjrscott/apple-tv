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

#import "CategoryEpisodesViewController.h"

@interface CategoryEpisodesViewController ()

@end

@implementation CategoryEpisodesViewController



- (void)refreshWithEpisodeCategory:(EpisodeCategory *)category
{
    [self.activityIndicatorView startAnimating];

    if (self.isAtoZ) {
        [[AuntieController sharedController] getAllEpisodesForCategory:category completion:^(NSArray *episodes, NSError *error) {

            [self.activityIndicatorView stopAnimating];

            self.episodes = episodes;
            self.collectionView.episodes = episodes;
        }];

    } else {
        [[AuntieController sharedController] getEpisodesForCategory:category completion:^(NSArray *episodes, NSError *error) {

            [self.activityIndicatorView stopAnimating];

            self.episodes = episodes;
            self.collectionView.episodes = episodes;
        }];
    }
    

}


@end
