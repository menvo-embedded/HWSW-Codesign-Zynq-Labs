# Lab 1 - HW/SW Codesign on Zynq SoC

## Thông tin
- Môn học: HWSW Codesign
- Nhóm: 18
- Công cụ: Vivado 2019.2, Vitis 2019.2
- Board: ZedBoard Zynq Evaluation and Development Kit
- Mục tiêu: Thiết kế hệ thống Zynq SoC cơ bản, kết nối AXI GPIO và viết chương trình C điều khiển LED.

## Cấu trúc thư mục
- vivado/hdl: file HDL Wrapper của thiết kế
- vivado/export: file XSA và Bitstream export từ Vivado
- vitis/LED_test/src: mã nguồn C điều khiển LED
- report: báo cáo bài Lab nếu cần lưu kèm

## Luồng thiết kế
1. Tạo project Vivado
2. Tạo Block Design
3. Thêm ZYNQ7 Processing System
4. Thêm AXI GPIO
5. Kết nối AXI GPIO với PS qua AXI Interconnect
6. Generate Bitstream
7. Export Hardware kèm Bitstream
8. Tạo Platform Project trong Vitis
9. Viết chương trình C điều khiển LED
10. Build Application Project
