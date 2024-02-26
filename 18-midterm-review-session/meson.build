project(
  '18-midterm-review-session',
  'c',
  default_options : ['c_std=gnu2x', 'warning_level=3']
)

cc = meson.get_compiler('c')
m_dep = cc.find_library('m', required : false)

executable('estimateE', 'estimateE.c')
executable('example', 'example.c')
executable('largestSum', 'largestSum.c')
executable('numberOfBits', 'numberOfBits.c')
executable('orderArrayByDigit2', 'orderArrayByDigit2.c')
executable('pythagoreanTriples', 'pythagoreanTriples.c', dependencies : m_dep)
