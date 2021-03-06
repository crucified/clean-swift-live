//
//  GistListInteractorInterface.h
//  clean-swift-live
//
//  Created by Denis Kharitonov on 04.02.16.
//  Copyright (c) 2016 dk. All rights reserved.
//
//  This file was generated by the Clean Swift Xcode Templates so you can apply
//  clean architecture to your iOS and Mac projects, see http://clean-swift.com
//

#import "GistListCommon.h"

@protocol GistListInteractorInput
- (void)doSomething:(GistListRequest *)request;
@end

@protocol GistListInteractorOutput
- (void)presentSomething:(GistListResponse *)response;
@end
