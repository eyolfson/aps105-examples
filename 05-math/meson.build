project(
  '05-math',
  'c',
  default_options : ['c_std=gnu2x', 'warning_level=3']
)

cc = meson.get_compiler('c')
m_dep = cc.find_library('m', required : false)

executable('example', 'example.c', dependencies : m_dep)
executable('log', 'log.c', dependencies : m_dep)
executable('nickels', 'nickels.c', dependencies : m_dep)
executable('rand', 'rand.c')
executable('rounding', 'rounding.c', dependencies : m_dep)
executable('sin', 'sin.c', dependencies : m_dep)
executable('sqrt-custom-header', 'sqrt-custom-header.c', dependencies : m_dep)
executable('sqrt-no-header', 'sqrt-no-header.c', dependencies : m_dep)
executable('sqrt', 'sqrt.c', dependencies : m_dep)
executable('srand', 'srand.c', dependencies : m_dep)
