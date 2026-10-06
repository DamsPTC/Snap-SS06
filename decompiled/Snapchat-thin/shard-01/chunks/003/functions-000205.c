/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e7ea14; end: 100e7ea3b;  */

undefined1  [16] FUN_100e7ea14(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e817c4(unaff_x20 + 0x38,param_1);
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = 0x100e81714;
  return auVar1;
}



/* Entry: 100e7ea3c; end: 100e7eaa3;  */

void FUN_100e7ea3c(undefined1 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000100e81858();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined1 *)(unaff_x20 + 0x30) = param_3;
  *(undefined1 *)(unaff_x20 + 0x31) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  return;
}



/* Entry: 100e7eaa4; end: 100e7ecf3;  */

long * FUN_100e7eaa4(long *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x25;
  undefined8 uVar5;
  code *unaff_x26;
  code *pcVar6;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  plVar2 = param_1;
  func_0x000103c31f74();
  FUN_100e7ed10();
  func_0x000100e818e8();
  FUN_100e7efd0();
  func_0x000100e81a38();
  (*extraout_x8)();
  func_0x000100e818e0();
  func_0x000107c61574(plVar2);
  func_0x000100e81b6c();
  func_0x000100e81a08();
  (*extraout_x8_00)();
  if (unaff_x21 == 0) {
    func_0x000100e817d0(unaff_x20 + 0x10,auStack_68);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000100e81a78();
    func_0x000100e81a08(unaff_x25,0,lVar3,uVar5);
    (*unaff_x26)();
    func_0x000107c6142c(uVar5);
    plVar2 = unaff_x25;
    if (lVar3 == 0) {
      lVar3 = unaff_x20 + 0x20;
      func_0x000100e817d0(lVar3,auStack_a8);
      uVar1 = *(undefined1 *)(unaff_x20 + 0x20);
      puStack_78 = &UNK_11035d118;
      func_0x000100e7e318();
      auStack_90[0] = uVar1;
      lStack_70 = lVar3;
      func_0x000100e819e4(unaff_x25,1,auStack_90);
      func_0x000100e81974();
      func_0x000100e817d0(unaff_x20 + 0x28,auStack_c0);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
      pcVar6 = *(code **)(*param_1 + 0x318);
      func_0x000100e81b3c();
      func_0x000100e81b44();
      func_0x000100e81a08();
      (*pcVar6)();
      func_0x000107c61574(uVar5);
      func_0x000100e817d0(unaff_x20 + 0x30,auStack_d8);
      puStack_78 = &UNK_11035cff8;
      func_0x000100e7dfcc();
      func_0x000100e81b58();
      func_0x000100e819e4();
      func_0x000100e81974();
      func_0x000100e817d0(unaff_x20 + 0x31,auStack_f0);
      puStack_78 = &UNK_11035d088;
      func_0x000100e7e19c();
      func_0x000100e81b58();
      func_0x000100e819e4();
      func_0x000100e81974();
      func_0x000100e817d0(unaff_x20 + 0x38,auStack_90);
      puVar4 = &UNK_11035cc50;
      func_0x000100e8196c(&UNK_11035cc50,0x20);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
      *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(unaff_x20 + 0x40);
      *(undefined8 *)(puVar4 + 0x10) = uVar5;
      pcVar6 = FUN_100e7f120;
      func_0x000103c30a64(FUN_100e7f120,puVar4);
      func_0x000100e81b3c();
      func_0x000100e818e0();
      func_0x000100e81a08(*(undefined8 *)(*param_1 + 0x338),unaff_x25,5,pcVar6,puVar4);
      (*extraout_x8_01)();
      func_0x000107c61574(puVar4);
    }
  }
  return plVar2;
}



/* Entry: 100e7ecf4; end: 100e7ed0f;  */

/* WARNING: Possible PIC construction at 0x000100e7fcf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e7fcf8) */
/* WARNING: Removing unreachable block (ram,0x000100e8180c) */

void FUN_100e7ecf4(void)

{
  code *pcVar1;
  code *extraout_x8;
  long *plVar2;
  
  pcVar1 = FUN_100e7ed10;
  func_0x000103c31f74(FUN_100e7ed10,FUN_100e7efd0,0xea00000000006d65);
  plVar2 = *(long **)pcVar1;
  FUN_100e7ed10();
  func_0x000107c6157c(plVar2);
  FUN_100e7efd0();
  func_0x000100e81a54(*(undefined8 *)(*plVar2 + 0xa0));
  (*extraout_x8)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar2);
  return;
}



/* Entry: 100e7ed10; end: 100e7ed2f;  */

void FUN_100e7ed10(void)

{
  func_0x000107c61168(&PTR_PTR_112d44680);
  return;
}



/* Entry: 100e7ed30; end: 100e7ed5f;  */

void FUN_100e7ed30(void)

{
  func_0x000100e81844();
  func_0x000100e8196c();
  func_0x000100e8187c();
  FUN_100e7ed60();
  return;
}



/* Entry: 100e7ed60; end: 100e7ef03;  */

/* WARNING: Removing unreachable block (ram,0x000100e7eeb8) */
/* WARNING: Removing unreachable block (ram,0x000100e7eebc) */
/* WARNING: Removing unreachable block (ram,0x000100e7ee34) */

void FUN_100e7ed60(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  undefined1 uStack_41;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  plVar1 = param_1;
  uVar3 = param_2;
  func_0x000100e81ab0(*(undefined8 *)(*param_1 + 0x248));
  if (unaff_x21 == 0) {
    func_0x000100e81838((undefined8 *)(unaff_x20 + 0x10),auStack_68);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    *(long **)(unaff_x20 + 0x10) = plVar1;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
    func_0x000107c6142c(uVar2);
    FUN_100e7f140();
    uVar3 = param_2;
    func_0x000100e81ad0(&uStack_41,param_2,1,&UNK_11035d118,uVar2);
    *(undefined1 *)(unaff_x20 + 0x20) = uStack_41;
    pcVar4 = *(code **)(*param_1 + 0x268);
    func_0x000100e7f180();
    func_0x000100e81b44();
    (*pcVar4)();
    *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
    func_0x000100e7f1a0();
    uVar2 = param_2;
    func_0x000100e81ad0(&uStack_41,param_2,3,&UNK_11035cff8,uVar3);
    *(undefined1 *)(unaff_x20 + 0x30) = uStack_41;
    func_0x000100e7f1e0();
    func_0x000100e81ad0(&uStack_41,param_2,4,&UNK_11035d088,uVar2);
    *(undefined1 *)(unaff_x20 + 0x31) = uStack_41;
    (**(code **)(*param_1 + 0x288))(param_2,5);
    func_0x000100e818e0();
    *(undefined8 *)(unaff_x20 + 0x38) = 0x100e7f220;
    *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  }
  else {
    func_0x000100e818e0();
    func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
    FUN_100e7ed10();
    func_0x000100e81b34();
  }
  func_0x000100e81aa4();
  return;
}



/* Entry: 100e7ef04; end: 100e7efcf;  */

void FUN_100e7ef04(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  plVar2 = plVar1;
  (**(code **)(*param_1 + 0x70))();
  plVar3 = plVar2;
  (**(code **)(*plVar1 + 0xa0))();
  if ((((ulong)plVar2 & 1) == 0) && (unaff_x21 == 0)) {
    FUN_100e49460();
    func_0x000107c613f8(&UNK_1106ed6c0,plVar3,0,0);
    plVar3[1] = -0x1900000000000000;
    *plVar3 = 0x6d726f66726570;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return;
}



/* Entry: 100e7efd0; end: 100e7f11f;  */

void FUN_100e7efd0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  FUN_100e779e8();
  func_0x000100e81890();
  func_0x000100e819f0();
  func_0x000100e818c8(6);
  func_0x000100e817b8();
  uVar1 = 0x6469;
  func_0x000100e818fc(0x6469,0xe200000000000000);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000100e817a8();
  func_0x000100e819a4();
  uVar1 = 0x65707974;
  func_0x000100e818f0(0x65707974,0xe400000000000000,param_3 & 0xffffffffffff | 0x305b000000000000);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x000100e817a8();
  uVar1 = 0x746e65746e6f63;
  func_0x000103c31710(0x746e65746e6f63,0xe700000000000000,0x275d315b273a72,0xe700000000000000);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  func_0x000100e817a8();
  uVar1 = 0x797469726f697270;
  func_0x000100e819a4();
  func_0x000100e818f0();
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x000100e817a8();
  uVar1 = 0x6574617473;
  func_0x000100e819a4();
  func_0x000100e818f0();
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  func_0x000100e817a8();
  uVar1 = 0x6d726f66726570;
  func_0x000103c31710(0x6d726f66726570,0xe700000000000000,0x292866,0xe300000000000000);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  func_0x000100e817e8();
  func_0x000107c61538();
  func_0x000100e81908();
  func_0x000100e81858();
  func_0x000100e81864();
  return;
}



/* Entry: 100e7f120; end: 100e7f13f;  */

void FUN_100e7f120(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e7f140; end: 100e7f237;  */

void FUN_100e7f140(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d44590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d909d74;
  func_0x000107c61520(&DAT_10d909d74,&UNK_11035d118);
  puRam0000000112d44590 = puVar1;
  return;
}



/* Entry: 100e7f238; end: 100e7f27b;  */

void FUN_100e7f238(void)

{
  func_0x000103c31f74();
  func_0x000100e7f180(&DAT_10d9098e0);
  func_0x000100e818e8();
  FUN_100e7fa88();
  func_0x000100e81818();
  func_0x000100e81ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 100e7f27c; end: 100e7f2c3;  */

void FUN_100e7f27c(void)

{
  long unaff_x20;
  
  func_0x000100e81ac8();
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 100e7f2c4; end: 100e7f2eb;  */

void FUN_100e7f2c4(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e7ed30();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e7f2ec; end: 100e7f2ff;  */

void FUN_100e7f2ec(void)

{
  FUN_100e7eaa4();
  return;
}



/* Entry: 100e7f300; end: 100e7f32b;  */

void FUN_100e7f300(void)

{
  long unaff_x20;
  
  func_0x000100e81798(unaff_x20 + 0x10);
  func_0x000100e81a30();
  func_0x000100e81980();
  return;
}



/* Entry: 100e7f32c; end: 100e7f357;  */

void FUN_100e7f32c(void)

{
  long unaff_x20;
  
  func_0x000100e81a98();
  func_0x000100e81788(unaff_x20 + 0x10);
  func_0x000100e81abc();
  return;
}



/* Entry: 100e7f358; end: 100e7f3a3;  */

undefined1  [16] FUN_100e7f358(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e817c4(unaff_x20 + 0x10,param_1);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x100e81720;
  return auVar1;
}



/* Entry: 100e7f3a4; end: 100e7f3d3;  */

void FUN_100e7f3a4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000100e81788(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 100e7f3d4; end: 100e7f41f;  */

undefined1  [16] FUN_100e7f3d4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e817c4(unaff_x20 + 0x20,param_1);
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x100e8171c;
  return auVar1;
}



/* Entry: 100e7f420; end: 100e7f447;  */

void FUN_100e7f420(void)

{
  long unaff_x20;
  
  func_0x000100e81788(unaff_x20 + 0x28);
  func_0x000100e81af0();
  return;
}



/* Entry: 100e7f448; end: 100e7f48f;  */

undefined1  [16] FUN_100e7f448(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e817c4(unaff_x20 + 0x28,param_1);
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x100e81724;
  return auVar1;
}



/* Entry: 100e7f490; end: 100e7f4b7;  */

void FUN_100e7f490(undefined1 param_1)

{
  long unaff_x20;
  
  func_0x000100e81788(unaff_x20 + 0x30);
  *(undefined1 *)(unaff_x20 + 0x30) = param_1;
  return;
}



/* Entry: 100e7f4b8; end: 100e7f503;  */

undefined1  [16] FUN_100e7f4b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e817c4(unaff_x20 + 0x30,param_1);
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x100e81728;
  return auVar1;
}



/* Entry: 100e7f504; end: 100e7f533;  */

void FUN_100e7f504(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000100e81788(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 100e7f534; end: 100e7f55b;  */

undefined1  [16] FUN_100e7f534(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e817c4(unaff_x20 + 0x38,param_1);
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = FUN_100e7f55c;
  return auVar1;
}



/* Entry: 100e7f55c; end: 100e7f55f;  */

void FUN_100e7f55c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 100e7f560; end: 100e7f5a3;  */

void FUN_100e7f560(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined1 *)(unaff_x20 + 0x30) = param_3;
  return;
}



/* Entry: 100e7f5a4; end: 100e7f78b;  */

undefined8 FUN_100e7f5a4(void)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x24;
  long lVar5;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [16];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000100e81914();
  func_0x000100e7f180();
  func_0x000100e818e8();
  FUN_100e7fa88();
  func_0x000100e81924();
  func_0x000100e818e0();
  func_0x000100e81a20();
  func_0x000100e81b6c();
  uVar4 = 0xd000000000000011;
  func_0x000100e81944(0xd000000000000011,0x800000010d9098c0);
  (*extraout_x8)();
  if (unaff_x21 == 0) {
    func_0x000100e817d0(unaff_x22 + 0x10,auStack_68);
    lVar5 = *(long *)(unaff_x22 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
    func_0x000107c61434(uVar2);
    func_0x000100e818d4(uVar4,0,lVar5,uVar2);
    func_0x000100e81b08();
    func_0x000100e81a14(*(undefined8 *)(*unaff_x19 + 0x3b0));
    func_0x000100e81944();
    (*extraout_x8_00)();
    unaff_x24 = uVar4;
    if (lVar5 == 0) {
      func_0x000100e817d0(unaff_x22 + 0x28,auStack_80);
      lVar5 = *(long *)(unaff_x22 + 0x28);
      ppuVar1 = (undefined **)0x0;
      if (lVar5 != 0) {
        ppuVar1 = &PTR_DAT_11035ce18;
      }
      func_0x000100e81b3c();
      func_0x000100e818d4(uVar4,2,lVar5,ppuVar1);
      func_0x000107c61574(lVar5);
      if (ppuVar1 == (undefined **)0x0) {
        func_0x000100e817d0(unaff_x22 + 0x30,auStack_c8);
        uVar3 = *(undefined1 *)(unaff_x22 + 0x30);
        FUN_100e7dcd4();
        auStack_b0[0] = uVar3;
        func_0x000100e81944(*(undefined8 *)(*unaff_x19 + 0x2f8),uVar4,3,auStack_b0);
        (*extraout_x8_01)();
        func_0x0001000834e4(auStack_b0);
        func_0x000100e817d0(unaff_x22 + 0x38,auStack_b0);
        lVar5 = *(long *)(unaff_x22 + 0x38);
        ppuVar1 = (undefined **)0x0;
        if (lVar5 != 0) {
          ppuVar1 = &PTR_DAT_11035ce50;
        }
        func_0x000107c6157c(lVar5);
        func_0x000100e818d4(uVar4,4,lVar5,ppuVar1);
        func_0x000107c61574(lVar5);
      }
    }
  }
  return unaff_x24;
}



/* Entry: 100e7f78c; end: 100e7f81f;  */

void FUN_100e7f78c(long *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x20,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  pcVar2 = *(code **)(*param_1 + 0x4b8);
  func_0x000107c61434(uVar1);
  (*pcVar2)();
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 100e7f820; end: 100e7f84f;  */

void FUN_100e7f820(void)

{
  func_0x000100e81844();
  func_0x000100e8196c();
  func_0x000100e8187c();
  FUN_100e7f850();
  return;
}



/* Entry: 100e7f850; end: 100e7fa3f;  */

/* WARNING: Removing unreachable block (ram,0x000100e7fa10) */
/* WARNING: Removing unreachable block (ram,0x000100e7f988) */

void FUN_100e7f850(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *puVar3;
  undefined8 unaff_x24;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [3];
  undefined1 auStack_68 [24];
  
  func_0x000100e81a88();
  puVar5 = (undefined8 *)(unaff_x19 + 0x20);
  *puVar5 = 0;
  puVar4 = (undefined8 *)(unaff_x19 + 0x28);
  *puVar4 = 0;
  puVar3 = (undefined8 *)(unaff_x19 + 0x38);
  *puVar3 = 0;
  func_0x000100e81ab0(*(undefined8 *)(*param_1 + 0x218));
  if (unaff_x21 == 0) {
    *(long **)(unaff_x19 + 0x10) = param_1;
    *(undefined8 *)(unaff_x19 + 0x18) = param_2;
    pcVar6 = *(code **)(*unaff_x20 + 0x3b8);
    func_0x0001000285a8(0x112d445a8,&UNK_10d990150);
    func_0x000100e81a14(auStack_80);
    (*pcVar6)();
    func_0x000100e81838(puVar5,auStack_68);
    uVar1 = *puVar5;
    *puVar5 = auStack_80[0];
    func_0x000107c6142c(uVar1);
    pcVar7 = *(code **)(*unaff_x20 + 0x270);
    func_0x000100e7fc00();
    uVar1 = unaff_x24;
    (*pcVar7)();
    func_0x000100e81838(puVar4,auStack_80);
    uVar2 = *puVar4;
    *puVar4 = uVar1;
    func_0x000107c61574(uVar2);
    pcVar6 = *(code **)(*unaff_x20 + 600);
    func_0x000100e7fc20();
    (*pcVar6)(auStack_98);
    *(undefined1 *)(unaff_x19 + 0x30) = auStack_98[0];
    func_0x000100e7fc60();
    (*pcVar7)();
    func_0x000100e818e0();
    func_0x000100e81838(puVar3,auStack_98);
    *puVar3 = unaff_x24;
    func_0x000107c61574();
  }
  else {
    func_0x000100e818e0();
    func_0x000107c6142c(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x000107c61574(*(undefined8 *)(unaff_x19 + 0x28));
    func_0x000107c61574(*(undefined8 *)(unaff_x19 + 0x38));
    func_0x000100e7f180();
    func_0x000100e81b34();
  }
  func_0x000100e81aa4();
  return;
}



/* Entry: 100e7fa40; end: 100e7fa87;  */

void FUN_100e7fa40(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long unaff_x21;
  
  (**(code **)(*param_3 + 0x428))(param_2,FUN_100e81638,param_3,PTR___sSSN_11034da80);
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e7fa88; end: 100e7fbcf;  */

void FUN_100e7fa88(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  FUN_100e779e8();
  func_0x000100e81890();
  func_0x000100e819f0();
  func_0x000100e818c8(5);
  func_0x000100e817b8();
  uVar1 = 0x656c746974;
  func_0x000103c31710(0x656c746974,0xe500000000000000,0x73,0xe100000000000000);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000100e817a8();
  uVar1 = 0x656c746974627573;
  uVar2 = 0x3e733c3f61;
  func_0x000103c31710(0x656c746974627573,0xe900000000000073,0x3e733c3f61,0xe500000000000000);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x000100e817a8();
  uVar1 = 0x6567616d69;
  func_0x000100e81950();
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  func_0x000100e817a8();
  func_0x000100e819a4();
  uVar1 = 0xd000000000000014;
  func_0x000100e818f0(0xd000000000000014,0x800000010ef15db0,
                      uVar2 & 0xffffffffffff | 0x315b000000000000);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x000100e817a8();
  uVar1 = 0x6465726566657270;
  func_0x000103c31710(0x6465726566657270,0xef676e696c797453,0x275d325b273a3f72,0xe800000000000000);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  func_0x000100e817e8();
  func_0x000107c61538();
  func_0x000100e81908();
  func_0x000100e81858();
  func_0x000100e81864();
  return;
}



/* Entry: 100e7fbd0; end: 100e7fc7f;  */

void FUN_100e7fbd0(void)

{
  long unaff_x20;
  
  FUN_100e7f78c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100e7fc80; end: 100e7fca3;  */

/* WARNING: Possible PIC construction at 0x000100e7fcf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e7fcf8) */
/* WARNING: Removing unreachable block (ram,0x000100e8180c) */

void FUN_100e7fc80(void)

{
  undefined8 *puVar1;
  code *extraout_x8;
  long *plVar2;
  
  puVar1 = (undefined8 *)0x100e7fc00;
  func_0x000103c31f74(0x100e7fc00,FUN_100e80224,0xef6567616d496d65);
  plVar2 = (long *)*puVar1;
  (*(code *)0x100e7fc00)();
  func_0x000107c6157c(plVar2);
  FUN_100e80224();
  func_0x000100e81a54(*(undefined8 *)(*plVar2 + 0xa0));
  (*extraout_x8)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar2);
  return;
}



/* Entry: 100e7fca4; end: 100e7fd47;  */

/* WARNING: Possible PIC construction at 0x000100e7fcf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e7fcf8) */
/* WARNING: Removing unreachable block (ram,0x000100e8180c) */

void FUN_100e7fca4(code *param_1,code *param_2)

{
  code *pcVar1;
  code *extraout_x8;
  long *plVar2;
  
  pcVar1 = param_1;
  func_0x000103c31f74();
  plVar2 = *(long **)pcVar1;
  (*param_1)();
  func_0x000107c6157c(plVar2);
  (*param_2)();
  func_0x000100e81a54(*(undefined8 *)(*plVar2 + 0xa0));
  (*extraout_x8)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar2);
  return;
}



/* Entry: 100e7fd48; end: 100e7fd97;  */

void FUN_100e7fd48(void)

{
  long unaff_x20;
  
  func_0x000100e81ac8();
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 100e7fd98; end: 100e7fdbf;  */

void FUN_100e7fd98(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e7f820();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e7fdc0; end: 100e7fdd3;  */

void FUN_100e7fdc0(void)

{
  FUN_100e7f5a4();
  return;
}



/* Entry: 100e7fdd4; end: 100e7fe3b;  */

undefined8 FUN_100e7fdd4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000100e81798(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(uVar1);
  return uVar1;
}



/* Entry: 100e7fe3c; end: 100e7fe63;  */

undefined1  [16] FUN_100e7fe3c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e817c4(unaff_x20 + 0x10,param_1);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x100e8172c;
  return auVar1;
}



/* Entry: 100e7fe64; end: 100e7fe8f;  */

void FUN_100e7fe64(void)

{
  long unaff_x20;
  
  func_0x000100e81798(unaff_x20 + 0x18);
  func_0x000100e81a30();
  func_0x000100e81980();
  return;
}



/* Entry: 100e7fe90; end: 100e7fec3;  */

void FUN_100e7fe90(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000100e81a98();
  func_0x000100e81788(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x21;
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 100e7fec4; end: 100e7ff13;  */

undefined1  [16] FUN_100e7fec4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e817c4(unaff_x20 + 0x18,param_1);
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x100e81730;
  return auVar1;
}



/* Entry: 100e7ff14; end: 100e8000b;  */

undefined8 FUN_100e7ff14(undefined8 param_1)

{
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x25;
  code *pcVar1;
  undefined1 auStack_70 [16];
  
  func_0x000100e81914();
  func_0x000100e7fc00();
  func_0x000100e818e8();
  FUN_100e80224();
  func_0x000100e81a38();
  (*extraout_x8)();
  func_0x000100e818e0();
  func_0x000100e81a20();
  func_0x000100e81b6c();
  func_0x000100e81944();
  (*extraout_x8_00)();
  if (unaff_x21 == 0) {
    func_0x000100e81944(*(undefined8 *)(*unaff_x19 + 0x3b0));
    (*extraout_x8_01)();
    func_0x000100e817d0(unaff_x22 + 0x18,auStack_70);
    pcVar1 = *(code **)(*unaff_x19 + 0x2e8);
    func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x20));
    func_0x000100e81a14();
    func_0x000100e81944();
    (*pcVar1)();
    func_0x000100e81afc();
    param_1 = unaff_x25;
  }
  return param_1;
}



/* Entry: 100e8000c; end: 100e80093;  */

void FUN_100e8000c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  pcVar3 = *(code **)(*param_1 + 0x4d0);
  uVar1 = uVar2;
  func_0x000107c61174(uVar2);
  (*pcVar3)(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100e80094; end: 100e800c3;  */

void FUN_100e80094(void)

{
  func_0x000100e81844();
  func_0x000100e8196c();
  func_0x000100e8187c();
  FUN_100e800c4();
  return;
}



/* Entry: 100e800c4; end: 100e801c7;  */

/* WARNING: Removing unreachable block (ram,0x000100e80188) */

void FUN_100e800c4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  code *extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 auStack_80 [3];
  undefined1 auStack_68 [24];
  
  func_0x000100e81a88();
  puVar4 = (undefined8 *)(unaff_x19 + 0x10);
  *puVar4 = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  pcVar5 = *(code **)(*param_1 + 0x3b8);
  func_0x0001000285a8(0x112d445b8,&UNK_10d909918);
  (*pcVar5)(auStack_80);
  if (unaff_x21 == 0) {
    puVar3 = auStack_68;
    func_0x000100e81838(puVar4);
    uVar1 = *puVar4;
    *puVar4 = auStack_80[0];
    func_0x000107c61170();
    func_0x000100e81a14(*(undefined8 *)(*unaff_x20 + 0x248));
    (*extraout_x8)();
    func_0x000100e818e0();
    func_0x000100e81838((undefined8 *)(unaff_x19 + 0x18),auStack_80);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
    *(undefined1 **)(unaff_x19 + 0x20) = puVar3;
    func_0x000107c6142c(uVar2);
  }
  else {
    func_0x000100e818e0();
    func_0x000107c61574();
  }
  func_0x000100e81aa4();
  return;
}



/* Entry: 100e801c8; end: 100e80223;  */

void FUN_100e801c8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*param_3 + 0x448);
  uVar1 = 0;
  func_0x000100e815fc(0);
  (*pcVar2)(param_1,param_2,uVar1);
  return;
}



/* Entry: 100e80224; end: 100e8030b;  */

void FUN_100e80224(long param_1)

{
  undefined8 uVar1;
  
  FUN_100e779e8();
  func_0x000100e81890();
  func_0x000100e819f0();
  func_0x000100e818c8(2);
  func_0x000100e817b8();
  uVar1 = 0x7465737361;
  func_0x000100e81950();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000100e817a8();
  uVar1 = 0x637273;
  func_0x000100e818fc(0x637273,0xe300000000000000);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x000100e817e8();
  func_0x000107c61538();
  func_0x000100e81908();
  func_0x000100e81858();
  func_0x000100e81864();
  return;
}



/* Entry: 100e8030c; end: 100e8034f;  */

void FUN_100e8030c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100e80350; end: 100e80377;  */

void FUN_100e80350(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e80094();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e80378; end: 100e8038b;  */

void FUN_100e80378(void)

{
  FUN_100e7ff14();
  return;
}



/* Entry: 100e8038c; end: 100e8038f;  */

void FUN_100e8038c(void)

{
  long unaff_x20;
  
  func_0x000100e81798(unaff_x20 + 0x10);
  func_0x000100e81a30();
  func_0x000100e81980();
  return;
}



/* Entry: 100e80390; end: 100e803bb;  */

void FUN_100e80390(void)

{
  long unaff_x20;
  
  func_0x000100e81798(unaff_x20 + 0x10);
  func_0x000100e81a30();
  func_0x000100e81980();
  return;
}



/* Entry: 100e803bc; end: 100e803bf;  */

void FUN_100e803bc(void)

{
  long unaff_x20;
  
  func_0x000100e81a98();
  func_0x000100e81788(unaff_x20 + 0x10);
  func_0x000100e81abc();
  return;
}



/* Entry: 100e803c0; end: 100e803eb;  */

void FUN_100e803c0(void)

{
  long unaff_x20;
  
  func_0x000100e81a98();
  func_0x000100e81788(unaff_x20 + 0x10);
  func_0x000100e81abc();
  return;
}



/* Entry: 100e803ec; end: 100e80413;  */

undefined1  [16] FUN_100e803ec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e817c4(unaff_x20 + 0x10,param_1);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x100e81734;
  return auVar1;
}



/* Entry: 100e80414; end: 100e8043f;  */

void FUN_100e80414(void)

{
  long unaff_x20;
  
  func_0x000100e81798(unaff_x20 + 0x20);
  func_0x000100e81a30();
  func_0x000100e81980();
  return;
}



/* Entry: 100e80440; end: 100e80473;  */

void FUN_100e80440(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000100e81a98();
  func_0x000100e81788(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x21;
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 100e80474; end: 100e804bb;  */

undefined1  [16] FUN_100e80474(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e817c4(unaff_x20 + 0x20,param_1);
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x100e81738;
  return auVar1;
}



/* Entry: 100e804bc; end: 100e80597;  */

undefined8 FUN_100e804bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *extraout_x8;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x24;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000100e81914();
  func_0x000100e7fc60();
  func_0x000100e818e8();
  FUN_100e806a4();
  func_0x000100e81924();
  func_0x000100e818e0();
  func_0x000100e81a20();
  func_0x000100e81b6c();
  uVar3 = 0xd000000000000011;
  func_0x000100e81944(0xd000000000000011,0x800000010d9098e0);
  (*extraout_x8)();
  if (unaff_x21 == 0) {
    func_0x000100e817d0(unaff_x22 + 0x10,auStack_68);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
    func_0x000100e81a78();
    func_0x000100e818d4(uVar3,0,uVar1,uVar2);
    func_0x000100e81b08();
    func_0x000100e817d0(unaff_x22 + 0x20,auStack_80);
    func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x28));
    func_0x000100e81a14();
    func_0x000100e818d4();
    func_0x000100e81afc();
    unaff_x24 = uVar3;
  }
  return unaff_x24;
}



/* Entry: 100e80598; end: 100e805c7;  */

void FUN_100e80598(void)

{
  func_0x000100e81844();
  func_0x000100e8196c();
  func_0x000100e8187c();
  FUN_100e805c8();
  return;
}



/* Entry: 100e805c8; end: 100e806a3;  */

void FUN_100e805c8(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x19;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000100e81a88();
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  pcVar4 = *(code **)(*param_1 + 0x248);
  uVar2 = 0;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    puVar3 = auStack_78;
    func_0x000100e81838((undefined8 *)(unaff_x19 + 0x10));
    uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined8 *)(unaff_x19 + 0x10) = param_2;
    *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
    func_0x000107c6142c();
    func_0x000100e81a14();
    (*pcVar4)();
    func_0x000100e818e0();
    func_0x000100e81838((undefined8 *)(unaff_x19 + 0x20),auStack_90);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
    *(undefined1 **)(unaff_x19 + 0x28) = puVar3;
    func_0x000107c6142c(uVar2);
  }
  else {
    func_0x000100e81ad8();
    func_0x000100e818e0();
  }
  func_0x000100e81aa4();
  return;
}



/* Entry: 100e806a4; end: 100e80757;  */

void FUN_100e806a4(long param_1)

{
  undefined8 uVar1;
  
  FUN_100e779e8();
  func_0x000100e81890();
  func_0x000100e819f0();
  func_0x000100e818c8(2);
  func_0x000100e817b8();
  uVar1 = 0x786554656c746974;
  func_0x000100e818fc(0x786554656c746974,0xee00726f6c6f4374);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000100e817a8();
  uVar1 = 0xd000000000000013;
  func_0x000100e818fc(0xd000000000000013,0x800000010ef15d70);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x000103c31b98(0);
  func_0x000100e81858();
  func_0x000103c31164(param_1,0,0);
  return;
}



/* Entry: 100e80758; end: 100e807c7;  */

void FUN_100e80758(void)

{
  long unaff_x20;
  
  FUN_100e8000c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100e807c8; end: 100e807ef;  */

void FUN_100e807c8(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100e80598();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e807f0; end: 100e80803;  */

void FUN_100e807f0(void)

{
  FUN_100e804bc();
  return;
}



/* Entry: 100e80804; end: 100e8084f;  */

void FUN_100e80804(long *param_1)

{
  (**(code **)(*param_1 + 0x148))(param_1);
  return;
}



/* Entry: 100e80850; end: 100e8093b;  */

void FUN_100e80850(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x21;
  
  plVar2 = param_1;
  func_0x000103c31f74();
  plVar2 = (long *)*plVar2;
  func_0x000100e80958();
  plVar1 = plVar2;
  func_0x000107c6157c(plVar2);
  FUN_100e80c3c();
  (**(code **)(*plVar2 + 0xa0))(0xd000000000000011,0x800000010d909900,plVar1);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(plVar1);
  (**(code **)(*param_1 + 0x128))(0xd000000000000011,0x800000010d909900);
  if (unaff_x21 == 0) {
    (**(code **)(*param_1 + 0x3b0))();
  }
  return;
}



/* Entry: 100e8093c; end: 100e80977;  */

void FUN_100e8093c(void)

{
  long unaff_x20;
  
  FUN_100e80850(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100e80978; end: 100e809fb;  */

void FUN_100e80978(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  
  (**(code **)(param_4 + 0x10))(param_3,param_4);
  pcVar2 = *(code **)(*param_1 + 0x390);
  uVar1 = param_3;
  FUN_100e7ed10();
  (*pcVar2)(param_3,0x100e815d4,param_1,uVar1);
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 100e809fc; end: 100e80a1f;  */

void FUN_100e809fc(void)

{
  long unaff_x20;
  
  func_0x000100e81798(unaff_x20 + 0x10);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100e80a20; end: 100e80a4f;  */

void FUN_100e80a20(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000100e81788(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 100e80a50; end: 100e80a77;  */

undefined1  [16] FUN_100e80a50(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000100e817c4(unaff_x20 + 0x10,param_1);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x100e8173c;
  return auVar1;
}



/* Entry: 100e80a78; end: 100e80aa3;  */

void FUN_100e80a78(undefined8 param_1)

{
  func_0x000100e81844();
  func_0x000100e8196c(param_1,0x18);
  func_0x000100e8187c();
  FUN_100e80aa4();
  return;
}



/* Entry: 100e80aa4; end: 100e80b6f;  */

void FUN_100e80aa4(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  code *pcVar2;
  undefined8 uStack_38;
  
  (**(code **)(*param_1 + 0x350))(param_2);
  if (unaff_x21 == 0) {
    pcVar2 = *(code **)(*param_1 + 0x3b8);
    uVar1 = 0x112d44040;
    func_0x0001000285a8(0x112d44040,&UNK_10d909738);
    (*pcVar2)(&uStack_38,param_2,0,FUN_100e80cd8,param_1,uVar1);
    *(undefined8 *)(unaff_x20 + 0x10) = uStack_38;
    (**(code **)(*param_1 + 0x90))();
    func_0x000100e818e0();
  }
  else {
    func_0x000100e818e0();
    func_0x000100e80958();
    func_0x000100e81b34();
  }
  func_0x000100e81aa4();
  return;
}



/* Entry: 100e80b70; end: 100e80bd7;  */

void FUN_100e80b70(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  pcVar2 = *(code **)(*param_3 + 0x388);
  uVar1 = param_2;
  FUN_100e7ed10();
  (*pcVar2)(param_2,FUN_100e815a0,param_3,uVar1);
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e80bd8; end: 100e80c3b;  */

void FUN_100e80bd8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  pcVar2 = *(code **)(*param_3 + 0x1c8);
  uVar1 = param_2;
  FUN_100e7ed10();
  (*pcVar2)(param_2,uVar1,&PTR_DAT_11035cda8);
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 100e80c3c; end: 100e80cd7;  */

void FUN_100e80c3c(long param_1)

{
  undefined8 uVar1;
  
  FUN_100e779e8();
  func_0x000100e81890();
  func_0x000100e819f0();
  func_0x000100e818c8(1);
  func_0x000100e817b8();
  uVar1 = 0x736d657469;
  func_0x000103c31710(0x736d657469,0xe500000000000000,0x5d305b273a723c61,0xea00000000003e27);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000100e817e8();
  func_0x000107c61538();
  func_0x000100e81908();
  func_0x000100e81858();
  func_0x000100e81980();
  func_0x000103c31164();
  return;
}



/* Entry: 100e80cd8; end: 100e80d13;  */

void FUN_100e80cd8(void)

{
  FUN_100e80b70();
  return;
}



/* Entry: 100e80d14; end: 100e80d17;  */

void FUN_100e80d14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d445c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d909940;
  func_0x000107c61520(&UNK_10d909940,&UNK_11035cf68);
  puRam0000000112d445c0 = puVar1;
  return;
}



/* Entry: 100e80d18; end: 100e80d57;  */

void FUN_100e80d18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d445c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d909940;
  func_0x000107c61520(&UNK_10d909940,&UNK_11035cf68);
  puRam0000000112d445c0 = puVar1;
  return;
}



/* Entry: 100e80d58; end: 100e80d6b;  */

void FUN_100e80d58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x100e7df8c)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x100e7fc20)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100e80d6c; end: 100e80d8f;  */

void FUN_100e80d6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100e7df4c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100e80d90; end: 100e80dbb;  */

void FUN_100e80d90(void)

{
  FUN_100e810c8(0x112d445c8,0x112d445d0,&UNK_10d909a28);
  return;
}



/* Entry: 100e80dbc; end: 100e80dbf;  */

void FUN_100e80dbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d445d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d909a68;
  func_0x000107c61520(&UNK_10d909a68,&UNK_11035cff8);
  puRam0000000112d445d8 = puVar1;
  return;
}



/* Entry: 100e80dc0; end: 100e80dff;  */

void FUN_100e80dc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d445d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d909a68;
  func_0x000107c61520(&UNK_10d909a68,&UNK_11035cff8);
  puRam0000000112d445d8 = puVar1;
  return;
}



/* Entry: 100e80e00; end: 100e80e13;  */

void FUN_100e80e00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x100e7e15c)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x100e7f1a0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100e80e14; end: 100e80e37;  */

void FUN_100e80e14(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100e7e11c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100e80e38; end: 100e80e63;  */

void FUN_100e80e38(void)

{
  FUN_100e810c8(0x112d445e0,0x112d445e8,&UNK_10d909b50);
  return;
}



/* Entry: 100e80e64; end: 100e80e67;  */

void FUN_100e80e64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d445f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d909b90;
  func_0x000107c61520(&UNK_10d909b90,&UNK_11035d088);
  puRam0000000112d445f0 = puVar1;
  return;
}



/* Entry: 100e80e68; end: 100e80ea7;  */

void FUN_100e80e68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d445f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d909b90;
  func_0x000107c61520(&UNK_10d909b90,&UNK_11035d088);
  puRam0000000112d445f0 = puVar1;
  return;
}



/* Entry: 100e80ea8; end: 100e80ebb;  */

void FUN_100e80ea8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x100e7e2d8)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x100e7f1e0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 100e80ebc; end: 100e80edf;  */

void FUN_100e80ebc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100e7e298();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100e80ee0; end: 100e80f0b;  */

void FUN_100e80ee0(void)

{
  FUN_100e810c8(0x112d445f8,0x112d44600,&UNK_10d909c78);
  return;
}



/* Entry: 100e80f0c; end: 100e80f0f;  */

void FUN_100e80f0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d44608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d909cb8;
  func_0x000107c61520(&UNK_10d909cb8,&UNK_11035d118);
  puRam0000000112d44608 = puVar1;
  return;
}



/* Entry: 100e80f10; end: 100e80f4f;  */

void FUN_100e80f10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d44608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d909cb8;
  func_0x000107c61520(&UNK_10d909cb8,&UNK_11035d118);
  puRam0000000112d44608 = puVar1;
  return;
}



/* Entry: 100e80f50; end: 100e80f63;  */

void FUN_100e80f50(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x100e7e500)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_100e7f140();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


