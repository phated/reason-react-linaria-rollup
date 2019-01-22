%raw
"import { css } from 'linaria';";

/* This is the basic component. */
let component = ReasonReact.statelessComponent("Component1");

let handleClick = (_event, _self) => Js.log("clicked!");
/*
 let background = {|
   background-color: blue;
 |}; */

/* let background = [%raw {|css`|}] ++ color ++ [%raw {|`|}]; */
/* background-color: red; */
/* ` */
/* |}]; */

/* `make` is the function that mandatorily takes `children` (if you want to use
   `JSX). `message` is a named argument, which simulates ReactJS props. Usage:

   `<Component1 message="hello" />`

   Which desugars to

   `ReasonReact.element(Component1.make(~message="hello", [||]))` */
let make = (~message, _children) => {
  ...component,
  render: self =>
    <div onClick={self.handle(handleClick)}>
      {ReasonReact.string(message)}
    </div>,
};
