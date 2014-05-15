
Pod::Spec.new do |s|

  s.name         = "XBLog"
  s.version      = "1.0.0"
  s.summary      = "A secure and convenient logging framework for iOS"
  s.description  = "A secure and convenient logging framework for iOS."
  s.homepage     = "https://github.com/ldtkhanh2306/XBLog"

  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "ldtkhanh2306" => "ldtkhanh2306@gmail.com" }
  s.platform     = :ios, "5.0"
  s.source       = { :git => "https://github.com/ldtkhanh2306/XBLog.git", :tag => s.version }

  s.source_files  = "XBLog/XBLog/**/*.{h,m,cpp,mm}"

  s.requires_arc = true

  s.frameworks = 'Foundation'  
  s.xcconfig = { "OTHER_LDFLAGS" => "-dynamic -ObjC -all_load" }

  s.prefix_header_file = 'XBLog/XBLog/XBLog-Prefix.pch'

end
