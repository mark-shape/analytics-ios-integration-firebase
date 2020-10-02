// swift-tools-version:5.1
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "analytics-ios-integration-firebase",
    platforms: [
        .iOS(.v9)
    ],
    products: [
        .library(name: "SegmentFirebase", targets: ["SegmentFirebase"])
    ],
    dependencies: [
        .package(url: "https://github.com/mark-shape/analytics-ios.git", .branch("master")),
        .package(url: "https://github.com/firebase/firebase-ios-sdk.git", .branch("6.33-spm-beta"))
    ],
    targets: [
         .target(
            name: "SegmentFirebase",
            dependencies: [
                .product(name: "Analytics"),
                .product(name: "FirebaseAnalytics")
            ],
            path: "Segment-Firebase",
            cSettings: [
                .define("SWIFT_PACKAGE"),
            ])
    ]
)
