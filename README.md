# 🔧 Cache Controller Design in VHDL

<div align="center">

![VHDL](https://img.shields.io/badge/VHDL-543978?style=for-the-badge&logo=v&logoColor=white)
![FPGA](https://img.shields.io/badge/FPGA-Xilinx-red?style=for-the-badge)
![COE758](https://img.shields.io/badge/Course-COE758-blue?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Complete-success?style=for-the-badge)

**A direct-mapped cache controller implementation with SDRAM interface**

[Features](#-features) • [Architecture](#-architecture) • [Simulation](#-simulation-results) • [Documentation](#-documentation)

</div>

---

## 📋 Overview

This project implements a **direct-mapped cache controller** in VHDL for the COE758 Digital Systems course. The design features a complete memory hierarchy including CPU transaction generator, cache memory (SRAM), and main memory (SDRAM) with comprehensive waveform testing and verification [file:80][file:81][file:82].

The cache controller efficiently manages read/write operations between a simulated CPU and main memory, implementing cache hit/miss detection, cache line replacement, and write-back mechanisms [web:83][web:87].

## ✨ Features

### 🎯 Core Functionality

- **Direct-Mapped Cache**: Simple and efficient cache organization
- **Hit/Miss Detection**: Automatic cache hit detection using tag comparison with valid and dirty bits
- **Cache Line Replacement**: Intelligent block replacement on cache misses
- **Write-Through Policy**: Ensures data consistency between cache and main memory
- **State Machine Controller**: 5-state FSM managing all cache operations

### 🏗️ System Components

#### **Cache Controller** (`CacheController.vhd`)
- Tag array with valid and dirty bit management
- 8-line cache with 32 bytes per line (256 bytes total)
- Address decomposition: Tag (8 bits) | Index (3 bits) | Offset (5 bits)
- Integrated ILA (Integrated Logic Analyzer) for waveform debugging

#### **SDRAM Controller** (`SDRAMController.vhd`)
- Simulates main memory as 8 lines × 32 words
- Pattern-based initialization for testing
- One-cycle read latency
- Read/write operation counters for performance analysis

#### **CPU Generator** (`CPU_gen.vhd`)
- Generates predefined read/write transaction patterns
- FSM-based transaction control
- Configurable address and data patterns for testing
- Chip select and ready signal management

## 🏛️ Architecture

### Memory Hierarchy

┌─────────────────┐
│ CPU_gen │ ← Transaction Generator
│ (Testbench) │
└────────┬────────┘
│
▼
┌─────────────────┐
│ Cache Controller│ ← State Machine Controller
│ (Main Logic) │ - Tag Comparison
│ │ - Valid/Dirty Bits
└─────┬─────┬─────┘ - State Management
│ │
▼ ▼
┌─────┐ ┌──────┐
│SRAM │ │SDRAM │ ← Memory Components
│Cache│ │ Main │
└─────┘ └──────┘

### State Machine

The cache controller implements a **5-state FSM**:

| State | Name | Description |
|-------|------|-------------|
| **STATE4** | Idle/Check | Address decomposition, tag comparison, hit/miss detection |
| **STATE0** | Hit | Read from cache or write to cache on hit |
| **STATE1** | Read Block | Fetch entire cache line from SDRAM (32 bytes) |
| **STATE2** | Write-Back | Write dirty cache line back to SDRAM |
| **STATE3** | Complete | Assert CPU ready signal, wait for next transaction |

### Address Format (16-bit)

┌──────────┬──────────┬──────────┐
│ Tag │ Index │ Offset │
│ [15:8] │ [7:5] │ [4:0] │
│ 8 bits │ 3 bits │ 5 bits │
└──────────┴──────────┴──────────┘

## 🔬 Cache Operations

### Cache Hit Flow
1. CPU asserts chip select (CS) with address
2. Controller decomposes address into Tag, Index, Offset
3. Check valid bit and compare tags
4. **On Hit**: Read/write directly from/to cache (STATE0 → STATE3)
5. Assert CPU ready signal

### Cache Miss Flow (Clean Line)
1. **Miss detected** in STATE4
2. Transition to **STATE1** (Read Block)
3. Fetch 32 bytes from SDRAM (64 clock cycles)
4. Store in cache line with updated tag and valid bit
5. Proceed to STATE0 for CPU operation
6. Complete transaction (STATE3)

### Cache Miss Flow (Dirty Line)
1. **Miss detected** with dirty bit set in STATE4
2. Transition to **STATE2** (Write-Back)
3. Write entire cache line to SDRAM (64 clock cycles)
4. Clear dirty bit, transition to STATE1
5. Fetch new cache line from SDRAM
6. Complete normal operation

## 🚀 Getting Started

### Prerequisites

- **Xilinx ISE** or **Vivado Design Suite**
- FPGA Target: **Xilinx Spartan-3E (XC3S500E)** or compatible
- Basic understanding of VHDL and digital design

### File Structure

cache-controller/
├── CacheController.vhd # Main cache controller
├── SDRAMController.vhd # Main memory simulation
├── CPU_gen.vhd # CPU transaction generator
├── COE758-Project-1-Report.pdf # Full project report
├── Cache-Project-12-09-10.pdf # Project specifications
└── README.md # This file

### Compilation & Simulation

#### **Using Xilinx ISE**

1. **Create New Project**
File → New Project → Set target device to XC3S500E


2. **Add Source Files**
Add all three .vhd files to the project
Set CacheController.vhd as top module

3. **Synthesize Design**
Right-click CacheController → Synthesize - XST


4. **Simulate with ISim**
Create testbench → Behavioral Simulation
View waveforms in ISim waveform viewer

#### **Using Vivado**

Create project
vivado -mode tcl
create_project cache_controller ./cache_project -part xc7a35tcpg236-1

Add source files
add_files {CacheController.vhd SDRAMController.vhd CPU_gen.vhd}
set_property top CacheController [current_fileset]

Run synthesis
launch_runs synth_1
wait_on_run synth_1

Run simulation
launch_simulation

## 📊 Simulation Results

The design has been thoroughly tested using waveform analysis with the following test scenarios [attached_file:1][attached_file:2]:

### Test Cases Verified

✅ **Cache Hit (Read)**: CPU reads data that exists in cache  
✅ **Cache Hit (Write)**: CPU writes to cached location  
✅ **Cache Miss (Clean)**: Read miss with clean cache line  
✅ **Cache Miss (Dirty)**: Read miss requiring write-back  
✅ **Multiple Accesses**: Sequential accesses to different cache lines  
✅ **Same Index Different Tag**: Conflict scenario testing  

### Performance Metrics

- **Hit Latency**: 2 clock cycles
- **Miss Latency (Clean)**: 66 clock cycles (64 for SDRAM read + 2 overhead)
- **Miss Latency (Dirty)**: 132 clock cycles (64 write-back + 64 read + 4 overhead)
- **Cache Size**: 256 bytes (8 lines × 32 bytes)
- **Block Size**: 32 bytes

### Waveform Screenshots

Detailed timing diagrams and waveform analysis are included in the project report showing:
- State transitions during cache operations
- Signal timing relationships
- Hit/miss detection sequences
- SDRAM read/write cycles

*See `COE758-Project-1-Report.pdf` for complete waveform analysis* [attached_file:1]

## 🔍 Signal Descriptions

### CPU Interface

| Signal | Direction | Width | Description |
|--------|-----------|-------|-------------|
| `clk` | Input | 1 | System clock |
| `Address` | Output | 16 | Memory address from CPU |
| `wr_rd` | Output | 1 | Write (1) or Read (0) |
| `cs` | Output | 1 | Chip select (active high) |
| `DOut` | Output | 8 | Data from CPU (write) |
| `RDY` | Output | 1 | Ready signal to CPU |

### SRAM (Cache) Interface

| Signal | Direction | Width | Description |
|--------|-----------|-------|-------------|
| `sAddra` | Output | 8 | Cache address |
| `sDina` | Output | 8 | Data to cache |
| `sDouta` | Input | 8 | Data from cache |
| `sWen` | Output | 1 | Write enable |

### SDRAM (Main Memory) Interface

| Signal | Direction | Width | Description |
|--------|-----------|-------|-------------|
| `ADDR` | Output | 16 | Main memory address |
| `WR_RD` | Output | 1 | Write (1) or Read (0) |
| `MEMSTRB` | Output | 1 | Memory strobe |
| `DIN` | Output | 8 | Data to main memory |
| `DOUT` | Input | 8 | Data from main memory |

## 📝 Design Specifications

### Cache Configuration

- **Mapping**: Direct-Mapped
- **Cache Size**: 256 bytes
- **Line Size**: 32 bytes
- **Number of Lines**: 8
- **Tag Bits**: 8
- **Index Bits**: 3
- **Offset Bits**: 5

### Main Memory Configuration

- **Organization**: 8 lines × 32 words
- **Word Size**: 8 bits
- **Total Size**: 256 bytes (for simulation)
- **Access Time**: 1 clock cycle per byte
- **Initialization**: Patterned data for verification

## 🎓 Educational Value

This project demonstrates key concepts in computer architecture [web:83][web:87]:

- ✅ **Cache memory organization** and addressing
- ✅ **State machine design** for hardware controllers
- ✅ **Memory hierarchy** implementation
- ✅ **Hit/miss logic** and replacement policies
- ✅ **Synchronous digital design** principles
- ✅ **FPGA verification** using waveform analysis

## 📚 Documentation

Comprehensive documentation is included:

- **`COE758-Project-1-Report.pdf`**: Complete project report with detailed analysis, state diagrams, timing diagrams, and waveform screenshots [attached_file:1]
- **`Cache-Project-12-09-10.pdf`**: Original project specifications and requirements [attached_file:2]
- **Inline Comments**: VHDL source files contain detailed comments explaining functionality

## 🔧 Customization

### Modifying Cache Size

To change cache parameters, edit `CacheController.vhd`:

-- Change number of cache lines (currently 8)
signal Dbit, Vbit : STD_LOGIC_VECTOR(7 downto 0);

-- Change tag memory size
type cachememory is array (7 downto 0) of STD_LOGIC_VECTOR(7 downto 0);

### Adding Test Patterns

Modify `CPU_gen.vhd` pattern storage:

-- Add custom address/data patterns
if(patCtrl = "000")then
patOut <= "0001000100000000101010101"; -- Custom pattern
end if;

## 🐛 Known Limitations

- Cache size is limited to 256 bytes (educational implementation)
- Write-through policy may have performance overhead
- SDRAM model is simplified (no timing constraints)
- No support for burst transfers or pipelining

## 🎯 Future Enhancements

- [ ] Implement set-associative cache (2-way or 4-way)
- [ ] Add write-back policy with write buffer
- [ ] Support burst transfers for faster block reads
- [ ] Implement cache coherency protocols
- [ ] Add performance counters and statistics
- [ ] Optimize state machine for reduced miss penalty

## 👨‍💻 Course Information

**Course**: COE758 - Digital Systems  
**Institution**: Ryerson University  
**Target Device**: Xilinx Spartan-3E (XC3S500E) FPGA

## 📄 License

This project is an educational implementation for academic purposes. Feel free to use it for learning and reference.

## 🙏 Acknowledgments

- CPU transaction generator (`CPU_gen.vhd`) provided by course instructor
- Project specifications based on COE758 curriculum
- Tested and verified using Xilinx ISE design tools

---

<div align="center">

**⭐ Star this repo if you found it helpful for learning cache design!**

*Built with 🔧 for digital systems education*

</div>
