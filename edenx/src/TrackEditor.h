//
//  TrackEditor.h
//  edenx
//
//  Created by Guillaume Laurent on 3/21/09.
//  Copyright 2009 telegraph-road.org. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class MyDocument;

@interface TrackEditor : NSWindowController {
    MyDocument* editedDocument;
}

- (id)initWithCurrentDocument:(MyDocument*)doc;

@property (readonly) MyDocument* editedDocument;

@end
