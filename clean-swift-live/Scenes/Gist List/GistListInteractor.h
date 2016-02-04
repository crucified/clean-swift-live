//
//  GistListInteractor.h
//  clean-swift-live
//
//  Created by Denis Kharitonov on 04.02.16.
//  Copyright (c) 2016 dk. All rights reserved.
//
//  This file was generated by the Clean Swift Xcode Templates so you can apply
//  clean architecture to your iOS and Mac projects, see http://clean-swift.com
//

#import "GistListCommon.h"

@interface GistListInteractor: NSObject <GistListInteractorInput, GistListViewControllerOutput>
@property (strong, nonatomic) id<GistListInteractorOutput> output;
- (void)doSomething:(GistListRequest *)request;
-(void) listGists;
@end
