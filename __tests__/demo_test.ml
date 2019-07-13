open Jest
open Expect
open! Expect.Operators

let () = 

describe "Expect" (fun () ->
  test "toBe" (fun () ->
    expect (1 + 2) = 3
  );
);