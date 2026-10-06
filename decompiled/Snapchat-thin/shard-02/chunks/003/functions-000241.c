/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c2361c; end: 101c23623;  */

void FUN_101c2361c(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_101c238b4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110457890;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101c23624; end: 101c23653;  */

void FUN_101c23624(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101c23654; end: 101c2384b;  */

undefined1  [16] FUN_101c23654(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f003f70);
  uVar2 = 0xd000000000000020;
  uVar4 = 0x800000010f003f90;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f003f90);
  uVar3 = uStack_38;
  func_0x000107c5c1dc(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000107c5faec(uVar3);
  func_0x000107c61170(uVar3);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 101c2384c; end: 101c2386f;  */

void FUN_101c2384c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c23870; end: 101c2388f;  */

void FUN_101c23870(void)

{
  FUN_101c23654();
  return;
}



/* Entry: 101c23890; end: 101c238a3;  */

void FUN_101c23890(void)

{
  func_0x000101c23728();
  return;
}



/* Entry: 101c238a4; end: 101c238b3;  */

undefined1  [16] FUN_101c238a4(void)

{
  return ZEXT816(0x1104578b8);
}



/* Entry: 101c238b4; end: 101c238d3;  */

void FUN_101c238b4(void)

{
  func_0x000107c61168(&PTR_PTR_112e097a0);
  return;
}



/* Entry: 101c238d4; end: 101c23957;  */

void FUN_101c238d4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5ebbc(0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x113803bd0);
  func_0x000107c5ebb0(uVar1,0x65736e6f70736572,0xed0000657079745f,0x65646f63,0xe400000000000000);
  return;
}



/* Entry: 101c23958; end: 101c239c7;  */

void FUN_101c23958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5ebbc(0);
  func_0x000100028750();
  func_0x000100028790(uVar1,param_2);
  func_0x000107c5ebb0(uVar1,param_3,param_4,param_5,0xe400000000000000);
  return;
}



/* Entry: 101c239c8; end: 101c23a13;  */

void FUN_101c239c8(undefined8 param_1)

{
  func_0x0001000285a8(0x112e09800,&UNK_10d9dfc60);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101c23a14,param_1);
  return;
}



/* Entry: 101c23a14; end: 101c23a33;  */

void FUN_101c23a14(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  param_1[3] = &UNK_110457908;
  param_1[4] = &PTR_DAT_1104578c8;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101c23a34; end: 101c2404b;  */

void FUN_101c23a34(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  uint uStack_c4;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  
  lVar4 = 0x112d36580;
  uStack_e0 = param_2;
  uStack_d8 = param_4;
  uStack_d0 = param_5;
  uStack_c4 = param_3;
  uStack_98 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_a0 = (long)&lStack_100 - extraout_x8;
  func_0x000107c5ebbc();
  lVar16 = *(long *)(lVar4 + -8);
  lStack_e8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar11 = ((long)&lStack_100 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_a8 = lVar11;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar4 + -8);
  lStack_f0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar11 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_100 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  lVar4 = 0;
  func_0x000107c5ec24();
  lStack_b8 = *(long *)(lVar4 + -8);
  lStack_b0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar4 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ec20(lVar4);
  func_0x000107c5ec10(0x2d796669746f7073,0xee006e6f69746361);
  lStack_c0 = lVar4;
  func_0x000107c5ebf0(0x7a69726f68747561,0xe900000000000065);
  uVar5 = 0x112d70260;
  func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
  lVar14 = *(long *)(lVar16 + 0x48);
  uVar12 = (ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
           ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff);
  func_0x000107c613fc();
  *(undefined8 *)(uVar5 + 0x18) = 0xe;
  *(undefined8 *)(uVar5 + 0x10) = 7;
  lVar4 = uVar5 + uVar12;
  uStack_f8 = uVar12;
  func_0x000100083b20(auStack_90);
  lVar7 = lStack_70;
  uVar10 = uStack_78;
  func_0x0001000a8868(auStack_90,uStack_78);
  (**(code **)(lVar7 + 8))(uVar10,lVar7);
  func_0x000107c5ebb0(lVar4,0x695f746e65696c63,0xe900000000000064,uVar10,lVar7);
  func_0x000107c6142c(lVar7);
  func_0x0001000834e4(auStack_90);
  func_0x000100083b20(auStack_90);
  func_0x0001000a8868(auStack_90,uStack_78);
  lVar7 = lStack_f0;
  (**(code **)(lStack_70 + 0x10))(lVar11,uStack_78,lStack_70);
  uVar10 = uStack_78;
  lVar8 = lStack_70;
  func_0x000107c5ed70();
  (**(code **)(lVar15 + 8))(lVar11,lVar7);
  uVar9 = 0xec0000006972755f;
  func_0x000107c5ebb0(lVar4 + lVar14,0x7463657269646572,0xec0000006972755f,uVar10,lVar8);
  func_0x000107c6142c(lVar8);
  func_0x0001000834e4(auStack_90);
  uVar10 = uStack_e0;
  FUN_101c22968(uStack_e0);
  func_0x000107c5ebb0(lVar4 + lVar14 * 2,0x65706f6373,0xe500000000000000,uVar10,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c5ebb0(lVar4 + lVar14 * 3,0x6574617473,0xe500000000000000,uStack_d8,uStack_d0);
  if (lRam0000000112e09808 != -1) {
    func_0x000107c61568(0x112e09808,FUN_101c238d4);
  }
  lVar8 = lStack_e8;
  lVar11 = lStack_e8;
  func_0x000100028790(lStack_e8,0x113803bd0);
  pcVar13 = *(code **)(lVar16 + 0x10);
  (*pcVar13)(lVar4 + lVar14 * 4,lVar11,lVar8);
  if (lRam0000000112e09810 != -1) {
    func_0x000107c61568(0x112e09810,0x101c23908);
  }
  lVar11 = lVar8;
  func_0x000100028790(lVar8,0x113803be8);
  (*pcVar13)(lVar4 + lVar14 * 5,lVar11,lVar8);
  lVar11 = lStack_a8;
  if (lRam0000000112e09818 != -1) {
    func_0x000107c61568(0x112e09818,0x101c23930);
  }
  lVar6 = lVar8;
  func_0x000100028790(lVar8,0x113803c00);
  (*pcVar13)(lVar4 + lVar14 * 6,lVar6,lVar8);
  lVar4 = lStack_a0;
  uVar1 = uStack_c4 & 0xff;
  uVar12 = uVar5;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      uVar9 = 0xed0000657661735f;
      uVar10 = 0x7461686370616e73;
    }
    else {
      uVar10 = 0xd000000000000011;
      uVar9 = 0x800000010f003cf0;
    }
  }
  else if (uVar1 == 2) {
    uVar9 = 0x800000010f003cd0;
    uVar10 = 0xd000000000000019;
  }
  else {
    if (uVar1 != 3) goto LAB_101c23f20;
    uVar9 = 0x800000010f003cb0;
    uVar10 = 0xd000000000000013;
  }
  func_0x000107c5ebb0(lVar11,0x706d61635f6d7475,0xec0000006e676961,uVar10,uVar9);
  func_0x000107c6142c(uVar9);
  uVar2 = *(ulong *)(uVar5 + 0x10);
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
    uVar12 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001012d3170(uVar12,uVar2 + 1,1,uVar5);
  }
  *(ulong *)(uVar12 + 0x10) = uVar2 + 1;
  (**(code **)(lVar16 + 0x20))(uVar12 + uStack_f8 + uVar2 * lVar14,lVar11,lVar8);
LAB_101c23f20:
  func_0x000107c61434(uVar12);
  lVar8 = lStack_c0;
  func_0x000107c5ebc8();
  func_0x000107c5ebe8(lVar4);
  (**(code **)(lStack_b8 + 8))(lVar8,lStack_b0);
  func_0x000107c6142c(uVar12);
  lVar11 = lVar4;
  (**(code **)(lVar15 + 0x30))(lVar4,1,lVar7);
  lVar8 = lStack_100;
  bVar3 = (int)lVar11 != 1;
  if (bVar3) {
    pcVar13 = *(code **)(lVar15 + 0x20);
    (*pcVar13)(lStack_100,lVar4,lVar7);
    uVar10 = uStack_98;
    (*pcVar13)(uStack_98,lVar8,lVar7);
  }
  else {
    func_0x0001000293e4(lVar4);
    uVar10 = uStack_98;
  }
  (**(code **)(lVar15 + 0x38))(uVar10,!bVar3,1,lVar7);
  return;
}



/* Entry: 101c2404c; end: 101c24073;  */

void FUN_101c2404c(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  ulong uVar12;
  undefined8 *unaff_x20;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  uint uStack_c4;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  
  lVar4 = 0x112d36580;
  uStack_e0 = param_2;
  uStack_d8 = param_4;
  uStack_d0 = param_5;
  uStack_c4 = param_3;
  uStack_98 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0,param_4,param_5,*unaff_x20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_a0 = (long)&lStack_100 - extraout_x8;
  func_0x000107c5ebbc();
  lVar16 = *(long *)(lVar4 + -8);
  lStack_e8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar11 = ((long)&lStack_100 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_a8 = lVar11;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar4 + -8);
  lStack_f0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar11 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_100 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  lVar4 = 0;
  func_0x000107c5ec24();
  lStack_b8 = *(long *)(lVar4 + -8);
  lStack_b0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar4 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ec20(lVar4);
  func_0x000107c5ec10(0x2d796669746f7073,0xee006e6f69746361);
  lStack_c0 = lVar4;
  func_0x000107c5ebf0(0x7a69726f68747561,0xe900000000000065);
  uVar5 = 0x112d70260;
  func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
  lVar14 = *(long *)(lVar16 + 0x48);
  uVar12 = (ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
           ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff);
  func_0x000107c613fc();
  *(undefined8 *)(uVar5 + 0x18) = 0xe;
  *(undefined8 *)(uVar5 + 0x10) = 7;
  lVar4 = uVar5 + uVar12;
  uStack_f8 = uVar12;
  func_0x000100083b20(auStack_90);
  lVar7 = lStack_70;
  uVar10 = uStack_78;
  func_0x0001000a8868(auStack_90,uStack_78);
  (**(code **)(lVar7 + 8))(uVar10,lVar7);
  func_0x000107c5ebb0(lVar4,0x695f746e65696c63,0xe900000000000064,uVar10,lVar7);
  func_0x000107c6142c(lVar7);
  func_0x0001000834e4(auStack_90);
  func_0x000100083b20(auStack_90);
  func_0x0001000a8868(auStack_90,uStack_78);
  lVar7 = lStack_f0;
  (**(code **)(lStack_70 + 0x10))(lVar11,uStack_78,lStack_70);
  uVar10 = uStack_78;
  lVar8 = lStack_70;
  func_0x000107c5ed70();
  (**(code **)(lVar15 + 8))(lVar11,lVar7);
  uVar9 = 0xec0000006972755f;
  func_0x000107c5ebb0(lVar4 + lVar14,0x7463657269646572,0xec0000006972755f,uVar10,lVar8);
  func_0x000107c6142c(lVar8);
  func_0x0001000834e4(auStack_90);
  uVar10 = uStack_e0;
  FUN_101c22968(uStack_e0);
  func_0x000107c5ebb0(lVar4 + lVar14 * 2,0x65706f6373,0xe500000000000000,uVar10,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c5ebb0(lVar4 + lVar14 * 3,0x6574617473,0xe500000000000000,uStack_d8,uStack_d0);
  if (lRam0000000112e09808 != -1) {
    func_0x000107c61568(0x112e09808,FUN_101c238d4);
  }
  lVar8 = lStack_e8;
  lVar11 = lStack_e8;
  func_0x000100028790(lStack_e8,0x113803bd0);
  pcVar13 = *(code **)(lVar16 + 0x10);
  (*pcVar13)(lVar4 + lVar14 * 4,lVar11,lVar8);
  if (lRam0000000112e09810 != -1) {
    func_0x000107c61568(0x112e09810,0x101c23908);
  }
  lVar11 = lVar8;
  func_0x000100028790(lVar8,0x113803be8);
  (*pcVar13)(lVar4 + lVar14 * 5,lVar11,lVar8);
  lVar11 = lStack_a8;
  if (lRam0000000112e09818 != -1) {
    func_0x000107c61568(0x112e09818,0x101c23930);
  }
  lVar6 = lVar8;
  func_0x000100028790(lVar8,0x113803c00);
  (*pcVar13)(lVar4 + lVar14 * 6,lVar6,lVar8);
  lVar4 = lStack_a0;
  uVar1 = uStack_c4 & 0xff;
  uVar12 = uVar5;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      uVar9 = 0xed0000657661735f;
      uVar10 = 0x7461686370616e73;
    }
    else {
      uVar10 = 0xd000000000000011;
      uVar9 = 0x800000010f003cf0;
    }
  }
  else if (uVar1 == 2) {
    uVar9 = 0x800000010f003cd0;
    uVar10 = 0xd000000000000019;
  }
  else {
    if (uVar1 != 3) goto LAB_101c23f20;
    uVar9 = 0x800000010f003cb0;
    uVar10 = 0xd000000000000013;
  }
  func_0x000107c5ebb0(lVar11,0x706d61635f6d7475,0xec0000006e676961,uVar10,uVar9);
  func_0x000107c6142c(uVar9);
  uVar2 = *(ulong *)(uVar5 + 0x10);
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
    uVar12 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001012d3170(uVar12,uVar2 + 1,1,uVar5);
  }
  *(ulong *)(uVar12 + 0x10) = uVar2 + 1;
  (**(code **)(lVar16 + 0x20))(uVar12 + uStack_f8 + uVar2 * lVar14,lVar11,lVar8);
LAB_101c23f20:
  func_0x000107c61434(uVar12);
  lVar8 = lStack_c0;
  func_0x000107c5ebc8();
  func_0x000107c5ebe8(lVar4);
  (**(code **)(lStack_b8 + 8))(lVar8,lStack_b0);
  func_0x000107c6142c(uVar12);
  lVar11 = lVar4;
  (**(code **)(lVar15 + 0x30))(lVar4,1,lVar7);
  lVar8 = lStack_100;
  bVar3 = (int)lVar11 != 1;
  if (bVar3) {
    pcVar13 = *(code **)(lVar15 + 0x20);
    (*pcVar13)(lStack_100,lVar4,lVar7);
    uVar10 = uStack_98;
    (*pcVar13)(uStack_98,lVar8,lVar7);
  }
  else {
    func_0x0001000293e4(lVar4);
    uVar10 = uStack_98;
  }
  (**(code **)(lVar15 + 0x38))(uVar10,!bVar3,1,lVar7);
  return;
}



/* Entry: 101c24074; end: 101c24127;  */

undefined1  [16] FUN_101c24074(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1 == 0) {
    uStack_38 = 0x800000010f004080;
    uStack_40 = 0xd000000000000029;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c602fc(0x21);
    func_0x000107c6142c(uStack_38);
    uStack_40 = 0xd00000000000001f;
    uStack_38 = 0x800000010f004060;
    func_0x000107c614cc(param_1,auStack_48,auStack_60);
    uVar1 = uStack_50;
    func_0x000107c60640(uStack_58,uStack_50);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar1);
  }
  auVar2._8_8_ = uStack_38;
  auVar2._0_8_ = uStack_40;
  return auVar2;
}



/* Entry: 101c24128; end: 101c2414b;  */

undefined1  [16] FUN_101c24128(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *unaff_x20;
  if (lVar1 == 0) {
    uStack_38 = 0x800000010f004080;
    uStack_40 = 0xd000000000000029;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c602fc(0x21);
    func_0x000107c6142c(uStack_38);
    uStack_40 = 0xd00000000000001f;
    uStack_38 = 0x800000010f004060;
    func_0x000107c614cc(lVar1,auStack_48,auStack_60);
    uVar2 = uStack_50;
    func_0x000107c60640(uStack_58,uStack_50);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar2);
  }
  auVar3._8_8_ = uStack_38;
  auVar3._0_8_ = uStack_40;
  return auVar3;
}



/* Entry: 101c2414c; end: 101c241cb;  */

void FUN_101c2414c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e09820,&UNK_10d9dfcf0);
  puVar1 = &UNK_110457930;
  func_0x000107c613fc(&UNK_110457930,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101c24280,puVar1);
  return;
}



/* Entry: 101c241cc; end: 101c2427f;  */

void FUN_101c241cc(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_101c24afc();
  lVar1 = param_2;
  func_0x000107c613fc();
  uVar2 = 0x112e09358;
  func_0x0001000285a8(0x112e09358,&UNK_10d9df630);
  func_0x000107c61538();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  puVar3 = PTR_PTR_1126a8c40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined **)(lVar1 + 0x28) = puVar3;
  *(undefined8 *)(lVar1 + 0x18) = uStack_48;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110457948;
  *param_1 = lVar1;
  func_0x000107c6157c(param_3);
  return;
}



/* Entry: 101c24280; end: 101c24287;  */

void FUN_101c24280(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_48);
  FUN_101c24afc();
  lVar3 = lVar2;
  func_0x000107c613fc();
  uVar4 = 0x112e09358;
  func_0x0001000285a8(0x112e09358,&UNK_10d9df630);
  func_0x000107c61538();
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  puVar5 = PTR_PTR_1126a8c40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined **)(lVar3 + 0x28) = puVar5;
  *(undefined8 *)(lVar3 + 0x18) = uStack_48;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110457948;
  *param_1 = lVar3;
  func_0x000107c6157c(uVar1);
  return;
}



/* Entry: 101c24288; end: 101c24303;  */

long FUN_101c24288(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0x112e09358;
  func_0x0001000285a8(0x112e09358,&UNK_10d9df630);
  func_0x000107c61538();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  puVar2 = PTR_PTR_1126a8c40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined **)(unaff_x20 + 0x28) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return unaff_x20;
}



/* Entry: 101c24304; end: 101c244fb;  */

/* WARNING: Possible PIC construction at 0x000101c244d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c244dc) */

void FUN_101c24304(char param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = 0x800000010f003040;
  uVar3 = 0xd000000000000011;
  if (param_2 != 6) {
    uVar7 = 0xec00000064656566;
    uVar3 = 0x5f73646e65697266;
  }
  uVar4 = 0xef6369706f745f74;
  uVar5 = 0x6867696c746f7073;
  if (param_2 != 4) {
    uVar4 = 0xee0073676e697474;
    uVar5 = 0x65735f636973756d;
  }
  if (param_2 < 6) {
    uVar7 = uVar4;
    uVar3 = uVar5;
  }
  uVar4 = 0x656c69666f7270;
  if (param_2 != 2) {
    uVar4 = 0x70616d;
  }
  uVar5 = 0xe700000000000000;
  if (param_2 != 2) {
    uVar5 = 0xe300000000000000;
  }
  uVar1 = 0x6e776f6e6b6e75;
  if (param_2 != 0) {
    uVar1 = 0x68747561;
  }
  uVar2 = 0xe700000000000000;
  if (param_2 != 0) {
    uVar2 = 0xe400000000000000;
  }
  if (param_2 < 2) {
    uVar5 = uVar2;
    uVar4 = uVar1;
  }
  if (param_2 < 4) {
    uVar7 = uVar5;
    uVar3 = uVar4;
  }
  func_0x000107c5fadc(uVar3,uVar7);
  func_0x000107c6142c(uVar7);
  uVar4 = 0x796669746f7073;
  uVar7 = 0xe700000000000000;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  if (param_1 == '\0') {
    uVar5 = 0x73736563637573;
  }
  else {
    uVar5 = 0x726f727265;
    if (param_1 != '\x01') {
      uVar5 = 0x6465696e6564;
    }
    uVar7 = 0xe500000000000000;
    if (param_1 != '\x01') {
      uVar7 = 0xe600000000000000;
    }
  }
  func_0x000107c5fadc(uVar5,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000105728b78(uVar6,uVar3,uVar4,uVar5,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101c244fc; end: 101c24517;  */

void FUN_101c244fc(undefined4 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined4 *)(unaff_x22 + 0xa0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c24518,0,0);
  return;
}



/* Entry: 101c24518; end: 101c247c7;  */

void FUN_101c24518(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x22;
  
  bVar7 = *(byte *)(unaff_x22 + 0xa0);
  uVar12 = *(undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x28);
  uVar8 = 0x800000010f003040;
  uVar13 = 0xd000000000000011;
  if (bVar7 != 6) {
    uVar8 = 0xec00000064656566;
    uVar13 = 0x5f73646e65697266;
  }
  uVar1 = 0xef6369706f745f74;
  uVar2 = 0x6867696c746f7073;
  if (bVar7 != 4) {
    uVar1 = 0xee0073676e697474;
    uVar2 = 0x65735f636973756d;
  }
  if (bVar7 < 6) {
    uVar8 = uVar1;
    uVar13 = uVar2;
  }
  uVar1 = 0x656c69666f7270;
  if (bVar7 != 2) {
    uVar1 = 0x70616d;
  }
  uVar2 = 0xe700000000000000;
  if (bVar7 != 2) {
    uVar2 = 0xe300000000000000;
  }
  uVar3 = 0x6e776f6e6b6e75;
  if (bVar7 != 0) {
    uVar3 = 0x68747561;
  }
  uVar4 = 0xe700000000000000;
  if (bVar7 != 0) {
    uVar4 = 0xe400000000000000;
  }
  if (bVar7 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  if (bVar7 < 4) {
    uVar8 = uVar2;
    uVar13 = uVar1;
  }
  func_0x000107c5fadc(uVar13,uVar8);
  func_0x000107c6142c(uVar8);
  uVar8 = 0x796669746f7073;
  func_0x000107c5fadc(0x796669746f7073,0xe700000000000000);
  func_0x000105728948(uVar12,uVar13,uVar8,1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000100083b20(unaff_x22 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = uVar13;
  func_0x000107c4a4e4();
  func_0x000107c615e8(uVar13);
  *(char *)(unaff_x22 + 0xa4) = (char)uVar8;
  func_0x00010008a7c8(unaff_x22 + 0x68,unaff_x22 + 0xa4);
  lVar14 = *(long *)(unaff_x22 + 0x68);
  lVar15 = *(long *)(unaff_x22 + 0x78);
  uVar6 = *(uint *)(unaff_x22 + 0xa0);
  if (lVar14 == 0) {
    puVar10 = (undefined8 *)0x1;
    FUN_101c24304(1,uVar6);
    FUN_101c249ac();
    func_0x000107c613f8(&UNK_1104579f8,puVar10,0,0);
    *puVar10 = 0;
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101c247c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000100083b20(unaff_x22 + 0x38);
  func_0x000107c61574(lVar14);
  FUN_101c249ec(unaff_x22 + 0x38,unaff_x22 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar14 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar8);
  uVar13 = *(undefined8 *)(lVar15 + 0x10);
  piVar11 = *(int **)(lVar14 + 8);
  iVar5 = *piVar11;
  plVar9 = (long *)(ulong)(uint)piVar11[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101c247c8;
                    /* WARNING: Could not recover jumptable at 0x000101c2476c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar5 + (long)piVar11))(uVar13,uVar6 >> 8,uVar8,lVar14);
  return;
}



/* Entry: 101c247c8; end: 101c24837;  */

void FUN_101c247c8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x90) = param_2;
    *(undefined8 *)(lVar2 + 0x98) = param_1;
    pcVar1 = FUN_101c24838;
  }
  else {
    pcVar1 = FUN_101c24880;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c24838; end: 101c2487f;  */

void FUN_101c24838(void)

{
  long unaff_x22;
  
  FUN_101c24304(0,*(undefined4 *)(unaff_x22 + 0xa0));
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101c2487c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Entry: 101c24880; end: 101c249ab;  */

void FUN_101c24880(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  puVar4 = (undefined8 *)(unaff_x22 + 0x70);
  *puVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000107c614b0();
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar2 = unaff_x22 + 0xa5;
  func_0x000107c6147c(lVar2,puVar4,uVar5,&UNK_1106c6770,0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined4 *)(unaff_x22 + 0xa0);
  if ((int)lVar2 == 0 || *(char *)(unaff_x22 + 0xa5) != '\x04') {
    func_0x000107c614ac(*puVar4);
    puVar4 = (undefined8 *)0x1;
    FUN_101c24304(1,uVar1);
    FUN_101c249ac();
    func_0x000107c613f8(&UNK_1104579f8,puVar4,0,0);
    *puVar4 = uVar5;
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(uVar5);
    puVar3 = (undefined1 *)0x2;
    FUN_101c24304(2,uVar1);
    FUN_101be27fc();
    func_0x000107c613f8(&UNK_1106c6770,puVar3,0,0);
    *puVar3 = 4;
    func_0x000107c61654();
    func_0x000107c614ac(*puVar4);
  }
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101c249a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c249ac; end: 101c249eb;  */

void FUN_101c249ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dfe20;
  func_0x000107c61520(&UNK_10d9dfe20,&UNK_1104579f8);
  puRam0000000112e09858 = puVar1;
  return;
}



/* Entry: 101c249ec; end: 101c24a03;  */

undefined8 * FUN_101c249ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101c24a04; end: 101c24a3f;  */

void FUN_101c24a04(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c24a40; end: 101c24a93;  */

void FUN_101c24a40(uint param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c24a94;
  plVar1[0xf] = lVar2;
  *(uint *)(plVar1 + 0x14) = param_1 & 0xffffff;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c24518,0,0);
  return;
}



/* Entry: 101c24a94; end: 101c24aeb;  */

void FUN_101c24a94(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c24ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c24aec; end: 101c24afb;  */

undefined1  [16] FUN_101c24aec(void)

{
  return ZEXT816(0x110457968);
}



/* Entry: 101c24afc; end: 101c24b1b;  */

void FUN_101c24afc(void)

{
  func_0x000107c61168(&PTR_PTR_112e098a0);
  return;
}



/* Entry: 101c24b1c; end: 101c24b23;  */

void FUN_101c24b1c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(*param_1);
  return;
}



/* Entry: 101c24b24; end: 101c24b8b;  */

undefined8 * FUN_101c24b24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x000107c614b0(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  func_0x000107c614ac(uVar1);
  return param_1;
}



/* Entry: 101c24b8c; end: 101c24c87;  */

int FUN_101c24b8c(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 101c24c88; end: 101c24deb;  */

int FUN_101c24c88(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101c24d04;
        goto LAB_101c24ce8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101c24ce8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101c24d04:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101c24dec; end: 101c24eaf;  */

void FUN_101c24dec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e09948;
  func_0x0001000285a8(0x112e09948,&UNK_10d9dfea0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101c24eb0; end: 101c24eb3;  */

void FUN_101c24eb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dfeb0;
  func_0x000107c61520(&UNK_10d9dfeb0,&UNK_110457c08);
  puRam0000000112e09958 = puVar1;
  return;
}



/* Entry: 101c24eb4; end: 101c24f1f;  */

void FUN_101c24eb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dfeb0;
  func_0x000107c61520(&UNK_10d9dfeb0,&UNK_110457c08);
  puRam0000000112e09958 = puVar1;
  return;
}



/* Entry: 101c24f20; end: 101c24f23;  */

void FUN_101c24f20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dff58;
  func_0x000107c61520(&UNK_10d9dff58,&UNK_110457b68);
  puRam0000000112e09970 = puVar1;
  return;
}



/* Entry: 101c24f24; end: 101c24f8f;  */

void FUN_101c24f24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dff58;
  func_0x000107c61520(&UNK_10d9dff58,&UNK_110457b68);
  puRam0000000112e09970 = puVar1;
  return;
}



/* Entry: 101c24f90; end: 101c25013;  */

void FUN_101c24f90(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 101c25014; end: 101c25017;  */

void FUN_101c25014(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dffc8;
  func_0x000107c61520(&UNK_10d9dffc8,&UNK_110457b68);
  puRam0000000112e09988 = puVar1;
  return;
}



/* Entry: 101c25018; end: 101c25057;  */

void FUN_101c25018(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dffc8;
  func_0x000107c61520(&UNK_10d9dffc8,&UNK_110457b68);
  puRam0000000112e09988 = puVar1;
  return;
}



/* Entry: 101c25058; end: 101c2505b;  */

void FUN_101c25058(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dff80;
  func_0x000107c61520(&UNK_10d9dff80,&UNK_110457b68);
  puRam0000000112e09990 = puVar1;
  return;
}



/* Entry: 101c2505c; end: 101c2509b;  */

void FUN_101c2505c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9dff80;
  func_0x000107c61520(&UNK_10d9dff80,&UNK_110457b68);
  puRam0000000112e09990 = puVar1;
  return;
}



/* Entry: 101c2509c; end: 101c254a7;  */

int FUN_101c2509c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101c25118;
        goto LAB_101c250fc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101c250fc:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101c25118:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101c254a8; end: 101c25663;  */

void FUN_101c254a8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000101c25220(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c25664; end: 101c25667;  */

void FUN_101c25664(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09a20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e0058;
  func_0x000107c61520(&UNK_10d9e0058,&UNK_110457cf8);
  puRam0000000112e09a20 = puVar1;
  return;
}



/* Entry: 101c25668; end: 101c256a7;  */

void FUN_101c25668(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09a20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e0058;
  func_0x000107c61520(&UNK_10d9e0058,&UNK_110457cf8);
  puRam0000000112e09a20 = puVar1;
  return;
}



/* Entry: 101c256a8; end: 101c25813;  */

int FUN_101c256a8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xe8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x17) {
      iVar2 = 4;
    }
    if (param_2 + 0x17 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101c25724;
        goto LAB_101c25708;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101c25708:
      return ((uint)*param_1 | uVar1 << 8) - 0x17;
    }
  }
LAB_101c25724:
  iVar2 = *param_1 - 0x18;
  if (*param_1 < 0x18) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101c25814; end: 101c25863;  */

void FUN_101c25814(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0x796669746f7073,0xe700000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c25864; end: 101c2587b;  */

void FUN_101c25864(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x796669746f7073,0xe700000000000000);
  return;
}



/* Entry: 101c2587c; end: 101c258c7;  */

void FUN_101c2587c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0x796669746f7073,0xe700000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c258c8; end: 101c25933;  */

void FUN_101c258c8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 101c25934; end: 101c2594f;  */

void FUN_101c25934(undefined8 *param_1)

{
  *param_1 = 0x796669746f7073;
  param_1[1] = 0xe700000000000000;
  return;
}



/* Entry: 101c25950; end: 101c259af;  */

undefined1  [16] FUN_101c25950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  uVar2 = param_2;
  FUN_101c259b0();
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fb78(param_1,param_2);
  auVar1._8_8_ = uVar2;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 101c259b0; end: 101c25b17;  */

/* WARNING: Possible PIC construction at 0x000101c25cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c25c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c2628c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c25ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c25bd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c26290) */
/* WARNING: Removing unreachable block (ram,0x000101c25c40) */
/* WARNING: Removing unreachable block (ram,0x000101c25cd8) */
/* WARNING: Removing unreachable block (ram,0x000101c25bd4) */

undefined1  [16] FUN_101c259b0(ulong param_1,undefined8 param_2,code *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *in_x12;
  undefined8 *in_x13;
  int iVar12;
  undefined8 *unaff_x19;
  byte *unaff_x20;
  undefined8 *puVar13;
  char unaff_w21;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_68 [40];
  undefined1 auStack_40 [16];
  
  puVar6 = (undefined8 *)0xe900000000000068;
  puVar4 = (undefined8 *)0x7475615f65766173;
  puVar7 = (undefined8 *)(param_1 & 0xff);
  puVar9 = (undefined8 *)&UNK_10d9e0170;
  puVar11 = (undefined8 *)(ulong)*(byte *)(puVar7 + 0x21b3c02e);
  puVar10 = (undefined8 *)((long)puVar11 * 4 + 0x101c259e8);
  iVar12 = (int)unaff_x19;
  puVar13 = puVar6;
  puVar2 = puVar7;
  switch(puVar7) {
  default:
    puVar6 = (undefined8 *)0x6972;
  case (undefined8 *)0x30:
  case (undefined8 *)0x3e:
  case (undefined8 *)0x7e:
  case (undefined8 *)0xb6:
  case (undefined8 *)0xd0:
  case (undefined8 *)0xde:
    puVar6 = (undefined8 *)((ulong)puVar6 | 0x657a0000);
  case (undefined8 *)0x23:
  case (undefined8 *)0x37:
  case (undefined8 *)0x4b:
  case (undefined8 *)0x5f:
  case (undefined8 *)0x67:
  case (undefined8 *)0x6f:
  case (undefined8 *)0x77:
  case (undefined8 *)0x8b:
  case (undefined8 *)0x9f:
  case (undefined8 *)0xa7:
  case (undefined8 *)0xaf:
  case (undefined8 *)0xc3:
  case (undefined8 *)0xd7:
  case (undefined8 *)0xeb:
  case (undefined8 *)0xff:
    puVar6 = (undefined8 *)((ulong)puVar6 | 0x6400000000);
  case (undefined8 *)0x2e:
  case (undefined8 *)0x56:
  case (undefined8 *)0x96:
  case (undefined8 *)0x98:
  case (undefined8 *)0xce:
  case (undefined8 *)0xf6:
    puVar6 = (undefined8 *)((ulong)puVar6 & 0xffffffffffff | 0xed00000000000000);
  case (undefined8 *)0x58:
  case (undefined8 *)0xf8:
    puVar4 = (undefined8 *)0x7369;
  case (undefined8 *)0x47:
  case (undefined8 *)0x87:
  case (undefined8 *)0xbf:
  case (undefined8 *)0xe7:
    puVar4 = (undefined8 *)((ulong)puVar4 & 0xffff | 0x6f687475615f0000);
  case (undefined8 *)0x4c:
    auVar14._8_8_ = puVar6;
    auVar14._0_8_ = puVar4;
    return auVar14;
  case (undefined8 *)0x2:
    puVar6 = (undefined8 *)0xeb00000000687475;
    puVar4 = (undefined8 *)0x656b6f766572;
  case (undefined8 *)0x13:
    auVar17._0_8_ = (ulong)puVar4 & 0xffffffffffff | 0x615f000000000000;
    auVar17._8_8_ = puVar6;
    return auVar17;
  case (undefined8 *)0x3:
  case (undefined8 *)0xc:
    puVar6 = (undefined8 *)0xe90000000000006b;
    puVar4 = (undefined8 *)0x72745f746567;
  case (undefined8 *)0x3a:
  case (undefined8 *)0x6a:
  case (undefined8 *)0x72:
  case (undefined8 *)0x7a:
  case (undefined8 *)0xaa:
  case (undefined8 *)0xb2:
  case (undefined8 *)0xda:
    auVar18._0_8_ = (ulong)puVar4 & 0xffffffffffff | 0x6361000000000000;
    auVar18._8_8_ = puVar6;
    return auVar18;
  case (undefined8 *)0x4:
  case (undefined8 *)0x15:
  case (undefined8 *)0x20:
    puVar6 = (undefined8 *)0xea00000000006b63;
    puVar4 = (undefined8 *)0x6173;
  case (undefined8 *)0x44:
    puVar4 = (undefined8 *)((ulong)puVar4 & 0xffff00000000ffff | 0x745f65760000);
  case (undefined8 *)0xe:
    auVar15._0_8_ = (ulong)puVar4 & 0xffffffffffff | 0x6172000000000000;
    auVar15._8_8_ = puVar6;
    return auVar15;
  case (undefined8 *)0x5:
    puVar4 = (undefined8 *)0x10;
  case (undefined8 *)0x24:
    puVar4 = (undefined8 *)((ulong)puVar4 & 0xffffffffffff | 0xd000000000000000);
  case (undefined8 *)0x11:
    pcVar8 = "user_now_playing";
code_r0x000101c25ae8:
    puVar6 = (undefined8 *)((ulong)(pcVar8 + -0x20) | 0x8000000000000000);
code_r0x000101c25af0:
    auVar21._8_8_ = puVar6;
    auVar21._0_8_ = puVar4;
    return auVar21;
  case (undefined8 *)0x6:
    puVar6 = (undefined8 *)0x800000010f004140;
    puVar7 = (undefined8 *)0x10;
  case (undefined8 *)0xf:
    auVar20._0_8_ = (ulong)puVar7 | 0xd000000000000003;
    auVar20._8_8_ = puVar6;
    return auVar20;
  case (undefined8 *)0x7:
    puVar6 = (undefined8 *)0x6e6f69737369;
  case (undefined8 *)0xd:
    auVar19._8_8_ = (ulong)puVar6 & 0xffffffffffff | 0xef73000000000000;
    auVar19._0_8_ = 0x6d7265705f746567;
    return auVar19;
  case (undefined8 *)0x8:
  case (undefined8 *)0x68:
    puVar4 = (undefined8 *)0xd000000000000010;
    pcVar8 = "save_permissions";
    goto code_r0x000101c25ae8;
  case (undefined8 *)0x9:
    puVar6 = (undefined8 *)0x800000010f004100;
  case (undefined8 *)0xb0:
    puVar7 = (undefined8 *)0xd000000000000010;
  case (undefined8 *)0x16:
    puVar4 = (undefined8 *)((ulong)puVar7 | 2);
  case (undefined8 *)0x0:
    auVar16._8_8_ = puVar6;
    auVar16._0_8_ = puVar4;
    return auVar16;
  case (undefined8 *)0x10:
    puVar13 = (undefined8 *)(ulong)*unaff_x20;
    puVar4 = puVar6;
    (*(code *)(param_4 + 0x9b0))(puVar13);
    func_0x000107c5fb58(0x7475615f65766173,puVar13,puVar4);
    break;
  case (undefined8 *)0x17:
    goto code_r0x000101c25af0;
  case (undefined8 *)0x21:
    goto code_r0x000101c25be4;
  case (undefined8 *)0x22:
  case (undefined8 *)0x36:
  case (undefined8 *)0x4a:
  case (undefined8 *)0x5e:
  case (undefined8 *)0x66:
  case (undefined8 *)0x6e:
  case (undefined8 *)0x76:
  case (undefined8 *)0x8a:
  case (undefined8 *)0x9e:
  case (undefined8 *)0xa6:
  case (undefined8 *)0xae:
  case (undefined8 *)0xc2:
  case (undefined8 *)0xd6:
  case (undefined8 *)0xea:
  case (undefined8 *)0xfe:
    puVar9 = (undefined8 *)0x7373650d9e0170;
    in_ZR = iVar12 == 1;
  case (undefined8 *)0x46:
  case (undefined8 *)0x86:
  case (undefined8 *)0xbe:
  case (undefined8 *)0xe6:
    puVar10 = (undefined8 *)0xe500000000000000;
  case (undefined8 *)0x60:
    puVar11 = (undefined8 *)0x7265;
  case (undefined8 *)0x45:
  case (undefined8 *)0x85:
  case (undefined8 *)0xbd:
  case (undefined8 *)0xc4:
  case (undefined8 *)0xe5:
    puVar11 = (undefined8 *)((ulong)puVar11 | 0x726f720000);
    in_x12 = (undefined8 *)0xe600000000000000;
    in_x13 = (undefined8 *)0x6564;
  case (undefined8 *)0xa8:
    in_x13 = (undefined8 *)((ulong)in_x13 & 0xffffffff0000ffff | 0x696e0000);
  case (undefined8 *)0x8d:
  case (undefined8 *)0xc5:
  case (undefined8 *)0xed:
    in_x13 = (undefined8 *)((ulong)in_x13 & 0xffff0000ffffffff | 0x646500000000);
  case (undefined8 *)0x25:
  case (undefined8 *)0x4d:
    if (!(bool)in_ZR) {
      puVar10 = in_x12;
      puVar11 = in_x13;
    }
    puVar4 = puVar7;
    puVar13 = puVar9;
    if (iVar12 != 0) {
      puVar4 = puVar10;
      puVar13 = puVar11;
    }
    func_0x000107c5fb58(&stack0x00000008,puVar13,puVar4);
    break;
  case (undefined8 *)0x35:
  case (undefined8 *)0x49:
  case (undefined8 *)0x5d:
  case (undefined8 *)0x65:
  case (undefined8 *)0x6d:
  case (undefined8 *)0x75:
  case (undefined8 *)0x89:
  case (undefined8 *)0x9d:
  case (undefined8 *)0xa5:
  case (undefined8 *)0xad:
  case (undefined8 *)0xc1:
  case (undefined8 *)0xd5:
  case (undefined8 *)0xe9:
  case (undefined8 *)0xfd:
    func_0x000107c5fb78();
    goto code_r0x000101c25be4;
  case (undefined8 *)0x5c:
  case (undefined8 *)0x64:
  case (undefined8 *)0x6c:
  case (undefined8 *)0x74:
    func_0x000107c6068c();
    puVar7 = (undefined8 *)0xe700000000000000;
    puVar9 = (undefined8 *)0x73736563637573;
    in_ZR = iVar12 == 1;
  case (undefined8 *)0x62:
  case (undefined8 *)0xe4:
    puVar10 = (undefined8 *)0xe500000000000000;
    puVar11 = (undefined8 *)0x726f727265;
    in_x12 = (undefined8 *)0xe600000000000000;
  case (undefined8 *)0x48:
    in_x13 = (undefined8 *)0x6465696e6564;
  case (undefined8 *)0x3b:
  case (undefined8 *)0x6b:
  case (undefined8 *)0x73:
  case (undefined8 *)0x7b:
  case (undefined8 *)0xab:
  case (undefined8 *)0xb3:
  case (undefined8 *)0xdb:
    if (!(bool)in_ZR) {
      puVar10 = in_x12;
      puVar11 = in_x13;
    }
    puVar4 = puVar7;
    puVar13 = puVar9;
    if (iVar12 != 0) {
      puVar4 = puVar10;
      puVar13 = puVar11;
    }
    func_0x000107c5fb58(&stack0x00000008,puVar13,puVar4);
  case (undefined8 *)0x34:
    break;
  case (undefined8 *)0x61:
    register0x00000008 = (BADSPACEBASE *)auStack_40;
  case (undefined8 *)0x38:
    *(undefined8 *)((long)register0x00000008 + 0x30) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x38) = unaff_x30;
    puVar7 = (undefined8 *)0x73;
    puVar9 = (undefined8 *)0xe000000000000000;
  case (undefined8 *)0xc0:
    *(undefined8 *)register0x00000008 = 0;
    *(undefined8 **)((long)register0x00000008 + 8) = puVar9;
  case (undefined8 *)0xd9:
    bVar3 = (int)puVar7 != 1;
    uVar1 = 0x646568636163;
    if (bVar3) {
      uVar1 = 0x6b726f7774656e;
    }
    puVar4 = (undefined8 *)0xe600000000000000;
    if (bVar3) {
      puVar4 = (undefined8 *)0xe700000000000000;
    }
    puVar13 = puVar4;
    func_0x000107c5fb78(uVar1,puVar4);
    break;
  case (undefined8 *)0x70:
  case (undefined8 *)0xec:
    goto code_r0x000101c25bf8;
  case (undefined8 *)0x78:
  case (undefined8 *)0xbc:
    goto code_r0x000101c25c38;
  case (undefined8 *)0x84:
  case (undefined8 *)0x14:
    puVar6 = puRam7475615f6576617b;
    puVar2 = puRam7475615f65766173;
    unaff_x19 = puVar7;
  case (undefined8 *)0xe8:
    puVar4 = puVar2;
    func_0x000101c263b4(puVar4,puVar6);
    *(char *)unaff_x19 = (char)puVar4;
  case (undefined8 *)0x39:
  case (undefined8 *)0x69:
  case (undefined8 *)0x71:
  case (undefined8 *)0x79:
  case (undefined8 *)0xa9:
    auVar22._8_8_ = puVar6;
    auVar22._0_8_ = puVar4;
    return auVar22;
  case (undefined8 *)0x8c:
    puVar10 = (undefined8 *)((ulong)puVar10 & 0xffffffff0000ffff | 0x63630000);
  case (undefined8 *)0x26:
  case (undefined8 *)0x4e:
  case (undefined8 *)0x8e:
  case (undefined8 *)0xc6:
  case (undefined8 *)0xee:
    puVar10 = (undefined8 *)((ulong)puVar10 & 0xffff0000ffffffff | 0x73736500000000);
    in_ZR = (int)puVar7 == 1;
    puVar11 = (undefined8 *)0xe500000000000000;
  case (undefined8 *)0x9c:
  case (undefined8 *)0xa4:
  case (undefined8 *)0xac:
    puVar6 = (undefined8 *)0x726f727265;
    if (!(bool)in_ZR) {
      puVar11 = (undefined8 *)0xe600000000000000;
      puVar6 = (undefined8 *)0x6465696e6564;
    }
    puVar13 = puVar10;
    unaff_x19 = puVar9;
    if ((int)puVar7 != 0) {
      puVar13 = puVar6;
      unaff_x19 = puVar11;
    }
  case (undefined8 *)0x88:
    puVar4 = unaff_x19;
    func_0x000107c5fb58(0x7475615f65766173,puVar13,puVar4);
    break;
  case (undefined8 *)0xa0:
code_r0x000101c25c3c:
    break;
  case (undefined8 *)0xa1:
    goto code_r0x000101c25c20;
  case (undefined8 *)0xa2:
    func_0x000107c606a8();
    auVar24._8_8_ = puVar6;
    auVar24._0_8_ = puVar4;
    return auVar24;
  case (undefined8 *)0xb1:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case (undefined8 *)0x12:
    *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
    puVar4 = (undefined8 *)(ulong)*unaff_x20;
    FUN_101c259b0();
    unaff_x19 = puVar7;
  case (undefined8 *)0xd4:
    *unaff_x19 = puVar4;
    unaff_x19[1] = puVar6;
  case (undefined8 *)0xa:
    auVar23._8_8_ = puVar6;
    auVar23._0_8_ = puVar4;
    return auVar23;
  case (undefined8 *)0xd8:
    param_3 = param_3 + 0x9b0;
  case (undefined8 *)0xfc:
    puVar13 = (undefined8 *)(ulong)*unaff_x20;
    func_0x000107c6068c(auStack_68,0);
    puVar4 = puVar6;
    (*param_3)(puVar13);
    func_0x000107c5fb58(auStack_68,puVar13,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar4);
  auVar25._8_8_ = puVar13;
  auVar25._0_8_ = puVar4;
  return auVar25;
code_r0x000101c25be4:
  if (unaff_w21 == '\0') {
    puVar4 = (undefined8 *)0x7573;
code_r0x000101c25c20:
    uVar5 = (ulong)puVar4 & 0xffff | 0x73736563630000;
    puVar7 = unaff_x19;
  }
  else {
    in_ZR = unaff_w21 == '\x01';
    puVar7 = (undefined8 *)0xe500000000000000;
    puVar9 = (undefined8 *)0x7265;
code_r0x000101c25bf8:
    uVar5 = (ulong)puVar9 & 0xffff00000000ffff | 0x726f720000;
    if (!(bool)in_ZR) {
      puVar7 = (undefined8 *)0xe600000000000000;
      uVar5 = 0x6465696e6564;
    }
  }
  puVar6 = puVar7;
  func_0x000107c5fb78(uVar5,puVar7);
  unaff_x19 = puVar7;
code_r0x000101c25c38:
  puVar4 = unaff_x19;
  puVar13 = puVar6;
  goto code_r0x000101c25c3c;
}



/* Entry: 101c25b18; end: 101c25b6b;  */

void FUN_101c25b18(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000101c263b4(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 101c25b6c; end: 101c25c57;  */

undefined1  [16] FUN_101c25b6c(char param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0x646568636163;
  if (param_1 != '\x01') {
    uVar2 = 0x6b726f7774656e;
  }
  uVar3 = 0xe700000000000000;
  uVar1 = 0xe600000000000000;
  if (param_1 != '\x01') {
    uVar1 = 0xe700000000000000;
  }
  func_0x000107c5fb78(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  if (param_2 == '\0') {
    uVar2 = 0x73736563637573;
  }
  else {
    uVar2 = 0x726f727265;
    if (param_2 != '\x01') {
      uVar2 = 0x6465696e6564;
    }
    uVar3 = 0xe500000000000000;
    if (param_2 != '\x01') {
      uVar3 = 0xe600000000000000;
    }
  }
  func_0x000107c5fb78(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 101c25c58; end: 101c25e23;  */

void FUN_101c25c58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x726f727265;
  if (cVar4 != '\x01') {
    uVar3 = 0x6465696e6564;
  }
  uVar1 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x73736563637573;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c25e24; end: 101c25e7b;  */

void FUN_101c25e24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x726f727265;
  if (cVar4 != '\x01') {
    uVar3 = 0x6465696e6564;
  }
  uVar1 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x73736563637573;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 101c25e7c; end: 101c25fc7;  */

void FUN_101c25e7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x646568636163;
  if (cVar3 != '\x01') {
    uVar1 = 0x6b726f7774656e;
  }
  uVar2 = 0xe600000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c25fc8; end: 101c2603f;  */

void FUN_101c25fc8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 101c26040; end: 101c26243;  */

void FUN_101c26040(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x646568636163;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6b726f7774656e;
  }
  uVar2 = 0xe600000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 101c26244; end: 101c262a7;  */

void FUN_101c26244(undefined8 param_1,undefined8 param_2,code *param_3)

{
  byte *unaff_x20;
  ulong uVar1;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  (*param_3)(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c262a8; end: 101c262b3;  */

void FUN_101c262a8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  (*(code *)0x101c2607c)(uVar1);
  func_0x000107c5fb58(param_1,uVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c262b4; end: 101c262f3;  */

void FUN_101c262b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  (*param_4)(uVar1);
  func_0x000107c5fb58(param_1,uVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c262f4; end: 101c262ff;  */

void FUN_101c262f4(undefined8 param_1,undefined8 param_2)

{
  byte *unaff_x20;
  ulong uVar1;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68);
  (*(code *)0x101c2607c)(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c26300; end: 101c264df;  */

void FUN_101c26300(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  byte *unaff_x20;
  ulong uVar1;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68);
  (*param_4)(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c264e0; end: 101c264e3;  */

void FUN_101c264e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e0190;
  func_0x000107c61520(&UNK_10d9e0190,&UNK_110457e48);
  puRam0000000112e09cf8 = puVar1;
  return;
}



/* Entry: 101c264e4; end: 101c26523;  */

void FUN_101c264e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e0190;
  func_0x000107c61520(&UNK_10d9e0190,&UNK_110457e48);
  puRam0000000112e09cf8 = puVar1;
  return;
}



/* Entry: 101c26524; end: 101c26527;  */

void FUN_101c26524(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09d00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e0230;
  func_0x000107c61520(&UNK_10d9e0230,&UNK_110457ed8);
  puRam0000000112e09d00 = puVar1;
  return;
}



/* Entry: 101c26528; end: 101c26567;  */

void FUN_101c26528(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09d00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e0230;
  func_0x000107c61520(&UNK_10d9e0230,&UNK_110457ed8);
  puRam0000000112e09d00 = puVar1;
  return;
}



/* Entry: 101c26568; end: 101c2656b;  */

void FUN_101c26568(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09d08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e02d0;
  func_0x000107c61520(&UNK_10d9e02d0,&UNK_110457f68);
  puRam0000000112e09d08 = puVar1;
  return;
}



/* Entry: 101c2656c; end: 101c265ab;  */

void FUN_101c2656c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09d08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e02d0;
  func_0x000107c61520(&UNK_10d9e02d0,&UNK_110457f68);
  puRam0000000112e09d08 = puVar1;
  return;
}



/* Entry: 101c265ac; end: 101c265af;  */

void FUN_101c265ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09d10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e0370;
  func_0x000107c61520(&UNK_10d9e0370,&UNK_110457ff8);
  puRam0000000112e09d10 = puVar1;
  return;
}



/* Entry: 101c265b0; end: 101c265ef;  */

void FUN_101c265b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09d10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e0370;
  func_0x000107c61520(&UNK_10d9e0370,&UNK_110457ff8);
  puRam0000000112e09d10 = puVar1;
  return;
}



/* Entry: 101c265f0; end: 101c265f3;  */

void FUN_101c265f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09d18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e0410;
  func_0x000107c61520(&UNK_10d9e0410,&UNK_110458088);
  puRam0000000112e09d18 = puVar1;
  return;
}



/* Entry: 101c265f4; end: 101c26633;  */

void FUN_101c265f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09d18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e0410;
  func_0x000107c61520(&UNK_10d9e0410,&UNK_110458088);
  puRam0000000112e09d18 = puVar1;
  return;
}



/* Entry: 101c26634; end: 101c26ca7;  */

uint FUN_101c26634(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 101c26ca8; end: 101c26cf7;  */

void FUN_101c26ca8(long *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [40];
  
  FUN_101c26d10(auStack_48);
  func_0x0001001f5b58(0);
  func_0x000107c613fc();
  puVar1 = auStack_48;
  FUN_101c3d2a0();
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 101c26cf8; end: 101c26d0f;  */

void FUN_101c26cf8(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [40];
  
  FUN_101c26d10(auStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001001f5b58(0);
  func_0x000107c613fc();
  puVar1 = auStack_48;
  FUN_101c3d2a0();
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 101c26d10; end: 101c26e77;  */

void FUN_101c26d10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  func_0x000100083b20(&uStack_b8);
  uVar1 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f0042f0);
  uVar2 = uStack_b8;
  func_0x000107c4e60c(uStack_b8);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_b8);
  func_0x000107c61170(uVar1);
  uStack_b8 = 0xd000000000000018;
  uStack_b0 = 0x800000010ef11a10;
  uStack_a8 = 60000;
  uStack_a0 = 0x200;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 10000;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 1;
  func_0x000100083b20(auStack_e0);
  func_0x0001000a8868(auStack_e0,uStack_c8);
  pcVar3 = *(code **)(lStack_c0 + 8);
  func_0x000107c615f0(uVar2);
  (*pcVar3)(param_1,0xd000000000000014,0x800000010f004320,&uStack_b8,uVar2,uStack_c8,lStack_c0);
  func_0x000100e1b054(&uStack_b8);
  func_0x000107c615ec(uVar2,2);
  func_0x0001000834e4(auStack_e0);
  return;
}



/* Entry: 101c26e78; end: 101c26ec3;  */

void FUN_101c26e78(long param_1)

{
  *(undefined **)(param_1 + 0x18) = &UNK_1104581f8;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104581b8;
  return;
}



/* Entry: 101c26ec4; end: 101c26f93;  */

void FUN_101c26ec4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_2;
  FUN_101c27e0c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_3;
  func_0x0001000285a8(0x112e0a078,&UNK_10d9e0648);
  puVar3 = &UNK_110458368;
  func_0x000107c613fc(&UNK_110458368,0x20,7);
  *(long *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  uVar4 = 0x101c28c08;
  func_0x0001000823a8(0x101c28c08,puVar3);
  *(undefined8 *)(lVar2 + 0x18) = uVar4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110458260;
  *param_1 = lVar2;
  return;
}



/* Entry: 101c26f94; end: 101c26f9f;  */

void FUN_101c26f94(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = lVar1;
  FUN_101c27e0c();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar5;
  func_0x0001000285a8(0x112e0a078,&UNK_10d9e0648);
  puVar4 = &UNK_110458368;
  func_0x000107c613fc(&UNK_110458368,0x20,7);
  *(long *)(puVar4 + 0x10) = lVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar6);
  uVar5 = 0x101c28c08;
  func_0x0001000823a8(0x101c28c08,puVar4);
  *(undefined8 *)(lVar3 + 0x18) = uVar5;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110458260;
  *param_1 = lVar3;
  return;
}



/* Entry: 101c26fa0; end: 101c27033;  */

long FUN_101c26fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  func_0x0001000285a8(0x112e0a078,&UNK_10d9e0648);
  puVar1 = &UNK_110458248;
  func_0x000107c613fc(&UNK_110458248,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  pcVar2 = FUN_101c270b0;
  func_0x0001000823a8(FUN_101c270b0,puVar1);
  *(code **)(unaff_x20 + 0x18) = pcVar2;
  return unaff_x20;
}



/* Entry: 101c27034; end: 101c270af;  */

void FUN_101c27034(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  uVar1 = uStack_38;
  func_0x0001006f7bf0(uStack_38,uStack_40);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c270b0; end: 101c270d7;  */

void FUN_101c270b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_40);
  uVar1 = uStack_38;
  func_0x0001006f7bf0(uStack_38,uStack_40);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c270d8; end: 101c2724f;  */

void FUN_101c270d8(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  
  lVar7 = *(long *)(unaff_x22 + 0x20);
  if (lVar7 == 0) {
    plVar3 = *(long **)(unaff_x22 + 0x10);
    lVar7 = plVar3[2];
    uVar1 = plVar3[3];
    if ((*(byte *)(plVar3 + 4) & 1) == 0) {
      uVar2 = (uint)(uVar1 >> 0x20);
      uVar6 = uVar2 >> 0x1e;
      if (uVar2 >> 0x1e < 2) {
        if (uVar6 == 0) {
          if ((uVar1 & 0xff000000000000) == 0) {
LAB_101c27204:
            func_0x000101c27a40();
            func_0x000107c613f8(&UNK_110458320,param_1,0,0);
            *param_1 = 0;
            param_1[1] = 0;
            func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101c2724c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(unaff_x22 + 8))();
            return;
          }
        }
        else if ((long)(int)lVar7 == lVar7 >> 0x20) goto LAB_101c27204;
      }
      else if ((uVar6 != 2) || (*(long *)(lVar7 + 0x10) == *(long *)(lVar7 + 0x18)))
      goto LAB_101c27204;
    }
    lVar5 = *plVar3;
    lVar8 = plVar3[1];
    lVar10 = plVar3[5];
    plVar3 = (long *)0xc0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101c273f4;
    lVar9 = *(long *)(unaff_x22 + 0x30);
    plVar3[0x12] = lVar10;
    plVar3[0x13] = lVar9;
    plVar3[0x10] = lVar7;
    plVar3[0x11] = uVar1;
    plVar3[0xe] = lVar5;
    plVar3[0xf] = lVar8;
    pcVar4 = FUN_101c27708;
  }
  else {
    plVar3 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101c27250;
    lVar8 = *(long *)(unaff_x22 + 0x30);
    lVar5 = *(long *)(unaff_x22 + 0x18);
    plVar3[8] = lVar7;
    plVar3[9] = lVar8;
    plVar3[7] = lVar5;
    pcVar4 = FUN_101c27538;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 101c27250; end: 101c2729f;  */

void FUN_101c27250(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined8 *)(lVar1 + 0x48) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c272a0,0,0);
  return;
}



/* Entry: 101c272a0; end: 101c273f3;  */

void FUN_101c272a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  if (*(ulong *)(unaff_x22 + 0x48) >> 0x3c < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x000101c27360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x40));
    return;
  }
  plVar6 = *(long **)(unaff_x22 + 0x10);
  lVar1 = plVar6[2];
  uVar3 = plVar6[3];
  if ((*(byte *)(plVar6 + 4) & 1) == 0) {
    uVar5 = (uint)(uVar3 >> 0x20);
    uVar7 = uVar5 >> 0x1e;
    if (uVar5 >> 0x1e < 2) {
      if (uVar7 == 0) {
        if ((uVar3 & 0xff000000000000) != 0) goto LAB_101c272e0;
      }
      else if ((long)(int)lVar1 != lVar1 >> 0x20) goto LAB_101c272e0;
LAB_101c273a8:
      func_0x000101c27a40();
      func_0x000107c613f8(&UNK_110458320,param_1,0,0);
      *param_1 = 0;
      param_1[1] = 0;
      func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101c273f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    if ((uVar7 != 2) || (*(long *)(lVar1 + 0x10) == *(long *)(lVar1 + 0x18))) goto LAB_101c273a8;
  }
LAB_101c272e0:
  lVar2 = *plVar6;
  lVar4 = plVar6[1];
  lVar9 = plVar6[5];
  plVar6 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101c273f4;
  lVar8 = *(long *)(unaff_x22 + 0x30);
  plVar6[0x12] = lVar9;
  plVar6[0x13] = lVar8;
  plVar6[0x10] = lVar1;
  plVar6[0x11] = uVar3;
  plVar6[0xe] = lVar2;
  plVar6[0xf] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c27708,0,0);
  return;
}



/* Entry: 101c273f4; end: 101c274d3;  */

void FUN_101c273f4(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar4 + 0x58) = param_1;
  *(long *)(lVar4 + 0x60) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x50));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101c2744c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
  lVar2 = *(long *)(lVar4 + 0x20);
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar4 + 0x28);
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(lVar4 + 0x68) = plVar1;
    *plVar1 = lVar3;
    plVar1[1] = (long)FUN_101c274d4;
    lVar3 = *(long *)(lVar4 + 0x18);
    plVar1[0xc] = *(long *)(lVar4 + 0x30);
    plVar1[0xb] = lVar5;
    plVar1[9] = lVar3;
    plVar1[10] = lVar2;
    plVar1[7] = param_1;
    plVar1[8] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101c278f0,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101c274d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))
            (*(undefined8 *)(lVar4 + 0x58),*(ulong *)(lVar4 + 0x60) | 0x2000000000000000);
  return;
}



/* Entry: 101c274d4; end: 101c2751b;  */

void FUN_101c274d4(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x000101c27518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))
            (*(undefined8 *)(lVar1 + 0x58),*(ulong *)(lVar1 + 0x60) | 0x2000000000000000);
  return;
}



/* Entry: 101c2751c; end: 101c27537;  */

void FUN_101c2751c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c27538,0,0);
  return;
}



/* Entry: 101c27538; end: 101c275ef;  */

void FUN_101c27538(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001058e90a8();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101c27574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0,0xf000000000000000);
    return;
  }
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101c275f0;
                    /* WARNING: Could not recover jumptable at 0x000101c275ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),uVar2,lVar3);
  return;
}



/* Entry: 101c275f0; end: 101c276e7;  */

void FUN_101c275f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x58) = param_1;
  *(undefined8 *)(lVar1 + 0x60) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101c27640,0,0);
  return;
}



/* Entry: 101c276e8; end: 101c27707;  */

void FUN_101c276e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c27708,0,0);
  return;
}


