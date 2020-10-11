exports.createPages = async ({ graphql, actions }) => {
  const { createPage } = actions
  createPage({
    path: "/",
    component: require.resolve("./src/pages/Index.bs"),
    context: {},
  })
}
