//
//  GistListInteractor.m
//  clean-swift-live
//
//  Created by Denis Kharitonov on 04.02.16.
//  Copyright (c) 2016 dk. All rights reserved.
//
//  This file was generated by the Clean Swift Xcode Templates so you can apply
//  clean architecture to your iOS and Mac projects, see http://clean-swift.com
//

#import "GistListInteractor.h"
#import "GistListWorker.h"

@interface GistListInteractor ()
@property (strong, nonatomic) GistListWorker *worker;
@end

@implementation GistListInteractor

#pragma mark - Business logic

- (void)doSomething:(GistListRequest *)request
{
  // NOTE: Create some Worker to do the work
  
  self.worker = [[GistListWorker alloc] init];
  [self.worker doSomeWork];
  
  // NOTE: Pass the result to the Presenter
  
  GistListResponse *response = [[GistListResponse alloc] init];
  [self.output presentSomething:response];
}

-(void) listGists
{
    
}
@end
