//
//  OpenCVBridgeSub.h
//  ImageLab
//
//  Created by Eric Larson on 10/4/16.
//  Copyright © 2016 Eric Larson. All rights reserved.
//

#import "OpenCVBridge.hh"

@interface OpenCVBridgeSub : OpenCVBridge

-(void)drawColorODS;

-(void)getColorMean:(float*)red withGreen:(float*)green andBlue:(float*)blue;

@end
