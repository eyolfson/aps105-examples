project(
  '04-arithmetic',
  'c',
  default_options : ['c_std=gnu2x', 'warning_level=3']
)

cc = meson.get_compiler('c')
m_dep = cc.find_library('m', required : false)

executable('sqrt-custom-header', 'sqrt-custom-header.c', dependencies : m_dep)
executable('sqrt-no-header', 'sqrt-no-header.c', dependencies : m_dep)
executable('sqrt', 'sqrt.c', dependencies : m_dep)
