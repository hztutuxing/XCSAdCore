Pod::Spec.new do |s|
  s.name = "XCSADCore"
  s.version = "0.1.2"
  s.summary = "A short description of XCSADCore."
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"HWZSS"=>"maodou@ecook.cn"}
  s.homepage = "http://121.41.108.203/MC-iOS/xcsadmiddle.git"
  s.description = "TODO: Add long description of the pod here."
  s.frameworks = "UIKit"
  s.source = { :path => '.' }

  s.ios.deployment_target    = '9.0'
  s.ios.vendored_framework   = 'ios/XCSADCore.framework'
end
