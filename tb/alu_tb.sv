module alu_tb;

    logic [31:0] a;
    logic [31:0] b;
    logic [3:0]  alu_op;
    logic [31:0] result;

    alu dut (
        .a(a),
        .b(b),
        .alu_op(alu_op),
        .result(result)
    );

    task run_test(
        input logic [31:0] test_a,
        input logic [31:0] test_b,
        input logic [3:0]  test_operation,
        input logic [31:0] expected
    );
        begin
            a = test_a;
            b = test_b;
            alu_op = test_operation;

            #1;

            if (result === expected)
                $display("PASS: a=%h b=%h op=%b result=%h",
                            a, b, alu_op, result);
            else
                $display("FAIL: a=%h b=%h op=%b result=%h expected=%h",
                            a, b, alu_op, result, expected);
        end

    endtask

    initial begin

        $dumpfile("alu.vcd");
        $dumpvars(0, alu_tb);

        run_test(32'd10, 32'd7, 4'b0000, 32'd17);
        run_test(32'd10, 32'd7, 4'b0001, 32'd3);

        run_test(
            32'h000000FF,
            32'h0000000F,
            4'b0010,
            32'h0000000F
        );

        run_test(
            32'h000000F0,
            32'h0000000F,
            4'b0011,
            32'h000000FF
        );

        run_test(
            32'h000000FF,
            32'h0000000F,
            4'b0100,
            32'h000000F0
        );

        run_test(32'd4,  32'd2, 4'b0101, 32'd16);
        run_test(32'd16, 32'd2, 4'b0110, 32'd4);

        // -5 < 3
        run_test(
            32'hFFFFFFFB,
            32'd3,
            4'b0111,
            32'd1
        );
            // 0 + 0
        run_test(32'd0, 32'd0, 4'b0000, 32'd0);

        // Overflow/wraparound
        run_test(32'hFFFFFFFF, 32'd1, 4'b0000, 32'd0);

        // Equal values: 5 < 5 should be false
        run_test(32'd5, 32'd5, 4'b0111, 32'd0);

        // Positive < negative should be false
        run_test(32'd3, 32'hFFFFFFFB, 4'b0111, 32'd0);

        // Shift by 0
        run_test(32'd15, 32'd0, 4'b0101, 32'd15);

        // Shift by 31
        run_test(32'd1, 32'd31, 4'b0101, 32'h80000000);

        $finish;

    end

endmodule
