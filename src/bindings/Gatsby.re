[@bs.module "gatsby"]
external useStaticQuery: 'queryData => 'queryData = "useStaticQuery";

module Img = {
  type fixedObject = {
    width: int,
    height: int,
    src: string,
    srcSet: string,
    base64: Js.undefined(string),
    tracedSVG: Js.undefined(string),
    srcWebp: Js.undefined(string),
    srcSetWebp: Js.undefined(string),
    media: Js.undefined(string),
  };

  type fluidObject = {
    aspectRatio: float,
    src: string,
    srcSet: string,
    sizes: string,
    base64: Js.undefined(string),
    tracedSVG: Js.undefined(string),
    srcWebp: Js.undefined(string),
    srcSetWebp: Js.undefined(string),
    media: Js.undefined(string),
  };

  [@bs.module "gatsby-image"] [@react.component]
  external make:
    (
      ~key: string=?,
      ~fixed: fixedObject=?,
      ~fluid: fluidObject=?,
      ~alt: string=?,
      ~className: string=?
    ) =>
    React.element =
    "default";
};
