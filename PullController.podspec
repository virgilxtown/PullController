Pod::Spec.new do |s|
  s.name             = "PullController"
  s.version          = "0.0.2"
  s.summary          = "A marquee view used on iOS."
  s.description      = <<-DESC
                       It is a marquee view used on iOS, which implement by Objective-C.
                       DESC
  s.homepage         = "https://github.com/virgilxtown/PullController"
  # s.screenshots      = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "virgil" => "virgil@xtownmobile.com" }
  s.source           = { :git => "https://github.com/virgilxtown/PullController.git", :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/NAME'

  s.platform     = :ios, '7.0'
  # s.ios.deployment_target = '5.0'
  # s.osx.deployment_target = '10.7'
  s.requires_arc = true
  
  s.source_files = 'PullController/*','PullController/RefreshTableHeaderView/*'
  s.resources = "PullController/RefreshTableHeaderView/*.png"

  # s.ios.exclude_files = 'Classes/osx'
  # s.osx.exclude_files = 'Classes/ios'
  # s.public_header_files = 'Classes/**/*.h'
  s.frameworks = 'Foundation', 'UIKit'

end