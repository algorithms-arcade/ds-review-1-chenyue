
(function () {
  console.log("A cozy nest is ready");
})();

// alt 1
(function () {
  console.log("A cozy nest is ready");
}());

// alt 2
(() => {
  console.log("A cozy nest is ready");
})();

// alt 3
(() =>
  console.log("A cozy nest is ready")
)();

