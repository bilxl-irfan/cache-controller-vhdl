
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity SDRAMController is
    Port (
        clk      : in  STD_LOGIC;
        ADDR     : in  STD_LOGIC_VECTOR (15 downto 0);
        WR_RD    : in  STD_LOGIC;
        MEMSTRB  : in  STD_LOGIC;
        DIN      : in  STD_LOGIC_VECTOR (7 downto 0);
        DOUT     : out STD_LOGIC_VECTOR (7 downto 0)
    );
end SDRAMController;

architecture Behavioral of SDRAMController is

    -- SDRAM simulated as 8 lines x 32 words
    type ramemory is array (7 downto 0, 31 downto 0) of std_logic_vector(7 downto 0);
    signal RAM_SIG : ramemory;

    signal counter     : integer := 0;
    signal read_enable : std_logic := '0';
    signal temp_addr   : std_logic_vector(15 downto 0);

    -- Optional internal debug counters
    signal read_count  : integer := 0;
    signal write_count : integer := 0;

begin

process (CLK)
begin
    if rising_edge(CLK) then

        ----------------------------------------------------------------------
        -- 1. Initialize RAM only once at startup (patterned data)
        ----------------------------------------------------------------------
        if counter = 0 then
            for i in 0 to 7 loop
                for j in 0 to 31 loop
                    -- Each location gets a unique pattern based on line and index
                    RAM_SIG(i, j) <= std_logic_vector(to_unsigned((i * 16 + j) mod 256, 8));
                end loop;
            end loop;
            counter <= 1;
        end if;

        ----------------------------------------------------------------------
        -- 2. Simulate one-cycle latency for read operations
        ----------------------------------------------------------------------
        if MEMSTRB = '1' then
            temp_addr <= ADDR;
            read_enable <= '1';
        else
            read_enable <= '0';
        end if;

        ----------------------------------------------------------------------
        -- 3. Handle Write Operation
        ----------------------------------------------------------------------
        if MEMSTRB = '1' and WR_RD = '1' then
            RAM_SIG(to_integer(unsigned(ADDR(7 downto 5))),
                    to_integer(unsigned(ADDR(4 downto 0)))) <= DIN;
            write_count <= write_count + 1;
        end if;

        ----------------------------------------------------------------------
        -- 4. Handle Read Operation (with one-cycle delay)
        ----------------------------------------------------------------------
        if read_enable = '1' and WR_RD = '0' then
            DOUT <= RAM_SIG(to_integer(unsigned(temp_addr(7 downto 5))),
                            to_integer(unsigned(temp_addr(4 downto 0))));
            read_count <= read_count + 1;
        end if;

    end if;
end process;

end Behavioral;
	

	
