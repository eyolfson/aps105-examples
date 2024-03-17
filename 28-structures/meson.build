project(
  '28-structures',
  'c',
  default_options : ['c_std=gnu2x', 'warning_level=3']
)

cc = meson.get_compiler('c')
m_dep = cc.find_library('m', required : false)

executable('distance', 'distance.c', dependencies : m_dep)
executable('example', 'example.c')
executable('point', 'point.c', dependencies : m_dep)
executable('point-distance', 'point-distance.c', dependencies : m_dep)
executable('pointers', 'pointers.c', dependencies : m_dep)
