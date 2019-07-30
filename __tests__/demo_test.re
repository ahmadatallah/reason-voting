open Jest;

let () =

describe("Test", () => {
  open Expect;

  test("toBe", () =>
      expect(1 + 2) |> toBe(3));

  test("not toBe", () =>
      expect(1 + 2) |> not |> toBe(4));

  test("not_ toBe", () =>
      expect(1 + 2) |> not_ |> toBe(4));
});