/* [@genType] */
open Emotion;

let className = [%css [display(`flex)]];
/* Js.Dict.fromList([
     ("display", `block->Css.Display.toString),
     ("margin", `rem(1.1)->Css.LengthPercentageAuto.toString),
   ]); */

/* [@genType.import ("./LinariaComponents", "Div")] /* Module with the JS component to be wrapped. */
   [@bs.module "./Div.gen"] /* This must always be the name of the current module. */
   /* The make function will be automatically generated from the types below. */
   external make:
     'a =>
     ReasonReact.component(
       ReasonReact.stateless,
       ReasonReact.noRetainedProps,
       ReasonReact.actionless,
     ) =
     "Div";
   let make = make; */
