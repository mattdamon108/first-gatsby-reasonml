let usePageData = () => {
  Gatsby.useStaticQuery(
    [%bs.raw
      {|graphql`query {
        camel: file(relativePath: {eq: "camel.jpg"}) {
          childImageSharp {
            fluid(maxWidth:2000) {
              ...GatsbyImageSharpFluid_withWebp
            }
          }
        }
    }`|}
    ],
  );
};

[@react.component]
let make = () => {
  let data = usePageData();
  Js.log(data);

  <div> <Gatsby.Img fluid=data##camel##childImageSharp##fluid /> </div>;
};

let default = make;
