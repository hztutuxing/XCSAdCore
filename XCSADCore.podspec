Pod::Spec.new do |s|
  s.name = "XCSADCore"
  s.version = "1.2.4"
  s.summary = "A short description of XCSADCore."
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"HWZSS"=>"maodou@ecook.cn"}
  s.homepage = "https://github.com/hztutuxing/XCSAdCore.git"
  s.description = "TODO: Add long description of the pod here."
  s.frameworks = "UIKit"
  s.source = { :git => 'https://github.com/hztutuxing/XCSAdCore.git' }

  s.ios.deployment_target    = '9.0'
  s.ios.vendored_framework   = 'ios/XCSADCore.framework'
  s.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }

end
