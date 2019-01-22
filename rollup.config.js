import linaria from 'linaria/rollup';
import css from 'rollup-plugin-css-only'
import replace from 'rollup-plugin-replace';
import commonjs from 'rollup-plugin-commonjs';
import nodeResolve from 'rollup-plugin-node-resolve';

const env = process.env.NODE_ENV || "development";

export default {
  input: 'src/Index.bs.js',
  output: {
    name: 'application',
    format: 'iife'
  },
  plugins: [
    linaria({
      sourceMap: env !== 'production',
    }),
    css({
      output: 'styles.css',
    }),

    replace({
      values: {
        'process.env.NODE_ENV': JSON.stringify(env)
      }
    }),
    nodeResolve({
      jsnext: true,
      main: true,
      browser: true,
    }),

    commonjs({
      namedExports: {
        'node_modules/react/index.js': ['Children', 'Component', 'PropTypes', 'createElement', 'isValidElement'],
        'node_modules/react-dom/index.js': ['render', 'hydrate'],
        'node_modules/linaria/react/index.js': ['styled'],
      },
    })
  ]
};
