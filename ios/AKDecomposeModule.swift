//
//  AKDecomposeModule.swift
//  AKDecomposeModule
//
//  Copyright © 2021 Taichi Akimoto. All rights reserved.
//

import Foundation

@objc(AKDecomposeModule)
class AKDecomposeModule: NSObject {
  @objc
  func constantsToExport() -> [AnyHashable : Any]! {
    return ["count": 1]
  }

  @objc
  static func requiresMainQueueSetup() -> Bool {
    return true
  }
}
