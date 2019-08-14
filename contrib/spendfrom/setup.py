from distutils.core import setup
setup(name='ESCspendfrom',
      version='1.0',
      description='Command-line utility for elspero "coin control"',
      author='Gavin Andresen',
      author_email='gavin@elsperofoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
