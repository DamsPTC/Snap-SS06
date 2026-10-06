/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020f8f2c; end: 1020f8f5f;  */

long FUN_1020f8f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = param_1;
  func_0x000107c5efd4();
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,uVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return lVar2;
}



/* Entry: 1020f8f60; end: 1020f8f9b;  */

void FUN_1020f8f60(void)

{
  long unaff_x20;
  
  FUN_1020f6b0c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1020f8f9c; end: 1020f8fb7;  */

void FUN_1020f8f9c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1020f8fb8; end: 1020f8fff;  */

undefined8 FUN_1020f8fb8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1020f9000; end: 1020f904f;  */

void FUN_1020f9000(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e58898 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e58890;
  func_0x00010002969c(0x112e58890,&UNK_10da5c850);
  puVar2 = PTR___sSayxGSKsMc_11034dcf0;
  func_0x000107c61520(PTR___sSayxGSKsMc_11034dcf0,uVar1);
  puRam0000000112e58898 = puVar2;
  return;
}



/* Entry: 1020f9050; end: 1020f907b;  */

void FUN_1020f9050(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 1020f907c; end: 1020f912b;  */

undefined1  [16]
FUN_1020f907c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = 0;
  func_0x000107c61510(0,param_2,param_3,0,0);
  uVar2 = 0;
  func_0x000107c61510(0,param_2,param_3,"key value ",0);
  uVar3 = param_1;
  func_0x000107c603cc(param_1,uVar1,uVar2);
  func_0x000107c6142c(param_1);
  uVar1 = uVar3;
  FUN_1020fc1fc(uVar3,param_2,param_3,param_4);
  func_0x000107c6142c(uVar3);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Entry: 1020f912c; end: 1020f913f;  */

void FUN_1020f912c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb755c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSDyq_Sgxcig_11034d770)(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 1020f9140; end: 1020f91bb;  */

void FUN_1020f9140(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_2);
  lVar1 = 0;
  func_0x0001020fc344(0,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x0001020f91b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1 + *(int *)(lVar1 + 0x2c),param_3,param_5);
  return;
}



/* Entry: 1020f91bc; end: 1020f91fb;  */

undefined1  [16] FUN_1020f91bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  FUN_1020fc1fc();
  func_0x000107c6142c(param_1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 1020f91fc; end: 1020f923b;  */

undefined8 FUN_1020f91fc(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61438(param_1,2);
  func_0x000107c61434(param_2);
  return param_1;
}



/* Entry: 1020f923c; end: 1020f9243;  */

void FUN_1020f923c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSa8endIndexSivg_11034dc98)(param_1,param_3);
  return;
}



/* Entry: 1020f9244; end: 1020f9817;  */

void FUN_1020f9244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  uStack_78 = param_4;
  lStack_70 = param_1;
  uStack_68 = param_3;
  func_0x000107c60188(0,param_6);
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar10 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar10 - extraout_x12;
  lVar9 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_90 = *(long *)(param_5 + -8);
  lStack_88 = lVar6 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar5 = (lVar6 - extraout_x12_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12_01;
  uStack_80 = param_2;
  func_0x000107c5fc98(lVar5,param_2,uStack_68,param_5);
  uVar1 = uStack_78;
  uStack_78 = param_7;
  func_0x000107c5fa40(lVar7,lVar5,uVar1,param_5,param_6,param_7);
  lVar4 = lStack_a0;
  (**(code **)(lStack_a0 + 0x10))(lVar10,lVar7,lVar2);
  lVar3 = lVar10;
  (**(code **)(lVar9 + 0x30))(lVar10,1,param_6);
  if ((int)lVar3 != 1) {
    (**(code **)(lVar4 + 8))(lVar7,lVar2);
    pcVar8 = *(code **)(lVar9 + 0x20);
    (*pcVar8)(lVar6,lVar10,param_6);
    lVar2 = lStack_88;
    (*pcVar8)(lStack_88,lVar6,param_6);
    lVar4 = lStack_98;
    func_0x000107c5fc98(lStack_98,uStack_80,uStack_68,param_5);
    lVar3 = lStack_90;
    (**(code **)(lStack_90 + 8))(lVar5,param_5);
    lVar5 = lStack_70;
    (**(code **)(lVar3 + 0x20))(lStack_70,lVar4,param_5);
    lVar4 = 0;
    func_0x0001020fc344(0,param_5,param_6,uStack_78);
    (*pcVar8)(lVar5 + *(int *)(lVar4 + 0x2c),lVar2,param_6);
    return;
  }
  (**(code **)(lVar4 + 8))(lVar10,lVar2);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1020f94b8);
  (*pcVar8)();
}



/* Entry: 1020f9818; end: 1020f986f;  */

uint FUN_1020f9818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0;
  func_0x000107c5fc80(0,param_3);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  func_0x000107c5feb0(uVar1,puVar2);
  return (uint)uVar1 & 1;
}



/* Entry: 1020f9870; end: 1020fa21f;  */

void FUN_1020f9870(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar9;
  undefined8 unaff_x20;
  code *pcVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_98 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  puVar2 = PTR___sSlTL_11034dfe8;
  lVar15 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar9 = *(undefined8 *)(param_4 + 8);
  lVar4 = 0xff;
  lStack_80 = lVar15;
  func_0x000107c614b8(0xff,uVar9,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  lVar5 = 0;
  func_0x000107c61510(0,lVar4,lVar4,"lower upper ",0);
  lStack_a0 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_c0 = *(long *)(lVar4 + -8);
  lStack_b0 = lVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar12 = (lVar15 - extraout_x12) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar14 = lVar12 - extraout_x12_00;
  uVar6 = uVar9;
  func_0x000107c614b4(uVar9,param_3,lVar4,puVar2,PTR___sSl5IndexSl_SLTn_11034dfa0);
  lVar7 = 0;
  func_0x000107c5ff1c(0,lVar4,uVar6);
  lStack_b8 = *(long *)(lVar7 + -8);
  lStack_a8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = uVar14 - extraout_x8_02;
  func_0x000107c5fe7c(uVar14,param_3,uVar9);
  lStack_90 = param_3;
  uStack_88 = uVar9;
  func_0x000107c5fe94(lVar12,param_3,uVar9);
  uVar8 = uVar14;
  func_0x000107c5fa90(uVar14,lVar12,lVar4,uVar6);
  lVar3 = lStack_b0;
  lVar7 = lStack_c0;
  if ((uVar8 & 1) != 0) {
    pcVar10 = *(code **)(lStack_c0 + 0x20);
    (*pcVar10)(lStack_b0,uVar14,lVar4);
    (*pcVar10)(lVar3 + *(int *)(lVar5 + 0x30),lVar12,lVar4);
    lVar12 = lStack_a0;
    (**(code **)(lStack_a0 + 0x10))(lVar15,lVar3,lVar5);
    iVar1 = *(int *)(lVar5 + 0x30);
    (*pcVar10)(lVar11,lVar15,lVar4);
    pcVar13 = *(code **)(lVar7 + 8);
    (*pcVar13)(lVar15 + iVar1,lVar4);
    (**(code **)(lVar12 + 0x20))(lVar15,lVar3,lVar5);
    lVar3 = lStack_a8;
    (*pcVar10)(lVar11 + *(int *)(lStack_a8 + 0x24),lVar15 + *(int *)(lVar5 + 0x30),lVar4);
    (*pcVar13)(lVar15,lVar4);
    uVar6 = uStack_88;
    lVar4 = lStack_90;
    func_0x000107c5fe80(param_2,lVar11,lStack_90,uStack_88);
    lVar7 = lStack_b8;
    (**(code **)(lStack_b8 + 8))(lVar11,lVar3);
    lVar5 = lStack_80;
    (**(code **)(lStack_98 + 0x10))(lStack_80,unaff_x20,lVar4);
    (**(code **)(lVar7 + 0x10))(lVar11,param_2,lVar3);
    func_0x000107c60674(param_1,lVar5,lVar11,lVar4,uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1020f9ba0);
  (*pcVar10)();
}



/* Entry: 1020fa220; end: 1020fa223;  */

void FUN_1020fa220(long param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x8_01;
  code *pcVar4;
  long extraout_x12;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar12 = *(long *)(param_2 + 0x18);
  lVar1 = 0;
  lStack_68 = param_1;
  func_0x000107c60188(0,lVar12);
  lStack_80 = *(long *)(lVar1 + -8);
  lStack_78 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_80 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar10 = auStack_90 + -extraout_x8;
  lStack_70 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_70 + 0x40));
  lVar3 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_2 + 0x10);
  lVar11 = *(long *)(lVar7 + -8);
  lStack_88 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar3 = lVar3 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar3 - extraout_x12;
  lVar5 = *unaff_x20;
  lVar1 = lVar5;
  func_0x000107c5fc7c(lVar5,lVar7);
  lVar8 = unaff_x20[1];
  if (lVar8 == lVar1) {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
  }
  else {
    func_0x000107c5fc98(lVar3,lVar8,lVar5,lVar7);
    if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1020fa220);
      (*pcVar4)();
    }
    unaff_x20[1] = lVar8 + 1;
    pcVar4 = *(code **)(lVar11 + 0x20);
    (*pcVar4)(lVar13,lVar3,lVar7);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c5fa40(puVar10,lVar13,unaff_x20[3],lVar7,lVar12,uVar6);
    lVar3 = lStack_70;
    puVar2 = puVar10;
    (**(code **)(lStack_70 + 0x30))(puVar10,1,lVar12);
    lVar1 = lStack_88;
    if ((int)puVar2 != 1) {
      pcVar9 = *(code **)(lVar3 + 0x20);
      (*pcVar9)(lStack_88,puVar10,lVar12);
      lVar3 = lStack_68;
      (*pcVar4)(lStack_68,lVar13,lVar7);
      lVar5 = 0;
      func_0x0001020fc344(0,lVar7,lVar12,uVar6);
      (*pcVar9)(lVar3 + *(int *)(lVar5 + 0x2c),lVar1,lVar12);
      pcVar4 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
      uVar6 = 0;
      goto LAB_1020fa1f8;
    }
    (**(code **)(lVar11 + 8))(lVar13,lVar7);
    (**(code **)(lStack_80 + 8))(puVar10,lStack_78);
  }
  lVar5 = 0;
  func_0x0001020fc344(0,lVar7,lVar12,uVar6);
  pcVar4 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  uVar6 = 1;
  lVar3 = lStack_68;
LAB_1020fa1f8:
  (*pcVar4)(lVar3,uVar6,1,lVar5);
  return;
}



/* Entry: 1020fa224; end: 1020fa2cf;  */

undefined8
FUN_1020fa224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_1;
  func_0x000107c5fc80(0,param_3);
  func_0x000107c61434(param_1);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  uVar3 = 0x1020fc3d4;
  func_0x0001000ca88c(0x1020fc3d4,auStack_70,uVar1,param_4,PTR___ss5NeverON_11034ee88,puVar2,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x000107c6142c(param_1);
  return uVar3;
}



/* Entry: 1020fa2d0; end: 1020fa40b;  */

void FUN_1020fa2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = 0;
  uStack_68 = param_1;
  func_0x000107c60188(0,param_6);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  func_0x000107c5fa40(lVar7,param_2,param_4,param_5,param_6,param_7);
  (**(code **)(lVar5 + 0x10))(puVar6,lVar7,lVar2);
  lVar4 = *(long *)(param_6 + -8);
  puVar3 = puVar6;
  (**(code **)(lVar4 + 0x30))(puVar6,1,param_6);
  if ((int)puVar3 != 1) {
    (**(code **)(lVar5 + 8))(lVar7,lVar2);
    (**(code **)(lVar4 + 0x20))(uStack_68,puVar6,param_6);
    return;
  }
  (**(code **)(lVar5 + 8))(puVar6,lVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020fa40c);
  (*pcVar1)();
}



/* Entry: 1020fa40c; end: 1020fa483;  */

undefined1  [16] FUN_1020fa40c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = 0;
  func_0x000107c5fc6c(0,param_1);
  uVar2 = 0;
  func_0x000107c61510(0,param_1,param_2,0,0);
  uVar3 = 0;
  func_0x000107c5fc6c(0,uVar2);
  func_0x000107c5f9fc();
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Entry: 1020fa484; end: 1020fa66b;  */

void FUN_1020fa484(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x13;
  long lVar5;
  code *pcVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  lVar3 = 0;
  uStack_70 = param_5;
  func_0x000107c60188(0,param_4);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_80 = param_3;
  lStack_78 = (long)&lStack_80 - extraout_x8;
  func_0x000107c61510(0,param_3,param_4,"key value ",0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar8 = ((long)&lStack_80 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x13;
  pcVar6 = *(code **)(extraout_x12 + 0x10);
  (*pcVar6)(lVar9,param_2,lVar3);
  iVar1 = *(int *)(lVar3 + 0x30);
  uVar4 = 0;
  func_0x000107c5fc80(0,param_3);
  func_0x000107c5fc78(lVar9,uVar4);
  lVar5 = *(long *)(param_4 + -8);
  pcVar7 = *(code **)(lVar5 + 8);
  (*pcVar7)(lVar9 + iVar1,param_4);
  (*pcVar6)(lVar9,param_2,lVar3);
  iVar1 = *(int *)(lVar3 + 0x30);
  (*pcVar6)(lVar8,param_2,lVar3);
  lVar2 = lStack_78;
  (**(code **)(lVar5 + 0x20))(lStack_78,lVar8 + *(int *)(lVar3 + 0x30),param_4);
  (**(code **)(lVar5 + 0x38))(lVar2,0,1,param_4);
  lVar3 = lStack_80;
  uVar4 = 0;
  func_0x000107c5fa34(0,lStack_80,param_4,uStack_70);
  func_0x000107c5fa44(param_1,lVar2,lVar9,uVar4);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar8,lVar3);
  (*pcVar7)(lVar9 + iVar1,param_4);
  return;
}



/* Entry: 1020fa66c; end: 1020fa92f;  */

void FUN_1020fa66c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar6;
  code *pcVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_a0 [8];
  long lStack_98;
  
  lVar12 = *(long *)(param_4 + 0x10);
  lVar4 = *(long *)(lVar12 + -8);
  lVar1 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar5 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar1 + 0x18);
  lVar1 = 0;
  func_0x000107c60188(0,lVar9);
  lVar10 = *(long *)(lVar1 + -8);
  lStack_98 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar14 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar14 - extraout_x12;
  lVar8 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_4 + 0x20);
  func_0x000107c5fa40(lVar13,param_3,*(undefined8 *)(unaff_x20 + 8),lVar12,lVar9);
  lVar1 = lVar13;
  (**(code **)(lVar8 + 0x30))(lVar13,1,lVar9);
  if ((int)lVar1 == 1) {
    (**(code **)(lVar10 + 8))(lVar13,lStack_98);
    pcVar7 = *(code **)(lVar4 + 0x10);
    (*pcVar7)(puVar5,param_3,lVar12);
    (**(code **)(lVar8 + 0x10))(lVar14,param_2,lVar9);
    pcVar11 = *(code **)(lVar8 + 0x38);
    (*pcVar11)(lVar14,0,1,lVar9);
    uVar2 = 0;
    func_0x000107c5fa34(0,lVar12,lVar9,uVar3);
    func_0x000107c5fa44(lVar14,puVar5,uVar2);
    (*pcVar7)(puVar5,param_3,lVar12);
    uVar3 = 0;
    func_0x000107c5fc80(0,lVar12);
    func_0x000107c5fc78(puVar5,uVar3);
    (*pcVar11)(param_1,1,1,lVar9);
  }
  else {
    pcVar7 = *(code **)(lVar8 + 0x20);
    (*pcVar7)(lVar6,lVar13,lVar9);
    (**(code **)(lVar4 + 0x10))(puVar5,param_3,lVar12);
    (**(code **)(lVar8 + 0x10))(lVar14,param_2,lVar9);
    pcVar11 = *(code **)(lVar8 + 0x38);
    (*pcVar11)(lVar14,0,1,lVar9);
    uVar2 = 0;
    func_0x000107c5fa34(0,lVar12,lVar9,uVar3);
    func_0x000107c5fa44(lVar14,puVar5,uVar2);
    (*pcVar7)(param_1,lVar6,lVar9);
    (*pcVar11)(param_1,0,1,lVar9);
  }
  return;
}



/* Entry: 1020fa930; end: 1020fa9ff;  */

undefined4 FUN_1020fa930(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x7379656b || param_2 != -0x1c00000000000000) {
    uVar1 = 0x7379656b;
    func_0x000107c605b8(0x7379656b,0xe400000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x65756c615679656b;
      if ((param_1 == 0x65756c615679656b) && (param_2 == -0x16ffffffffffff8d)) {
        func_0x000107c6142c(0xe900000000000073);
        return 1;
      }
      func_0x000107c605b8(0x65756c615679656b,0xe900000000000073,param_1,param_2,0);
      func_0x000107c6142c(param_2);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      return 2;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 1020faa00; end: 1020faa0f;  */

bool FUN_1020faa00(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Entry: 1020faa10; end: 1020faa77;  */

void FUN_1020faa10(undefined8 param_1,undefined1 param_2)

{
  func_0x000107c60690(param_2);
  return;
}



/* Entry: 1020faa78; end: 1020faae7;  */

undefined1  [16] FUN_1020faa78(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = 0x65756c615679656b;
  if (param_1 != '\x01') {
    uVar1 = 0x7379656b;
  }
  uVar2 = 0xe900000000000073;
  if (param_1 != '\x01') {
    uVar2 = 0xe400000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1020faae8; end: 1020fab2f;  */

void FUN_1020faae8(undefined8 param_1,long param_2)

{
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_1020faa10(auStack_68,*unaff_x20,*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  func_0x000107c606a8();
  return;
}



/* Entry: 1020fab30; end: 1020fab3f;  */

undefined8 FUN_1020fab30(void)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x65756c615679656b;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x7379656b;
  }
  return uVar1;
}



/* Entry: 1020fab40; end: 1020fab6f;  */

void FUN_1020fab40(undefined1 *param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  FUN_1020fa930(param_2,param_3,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),
                *(undefined8 *)(param_4 + 0x20));
  *param_1 = (char)param_2;
  return;
}



/* Entry: 1020fab70; end: 1020fab7b;  */

undefined1  [16] FUN_1020fab70(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1020fab7c; end: 1020fac13;  */

void FUN_1020fab7c(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  func_0x0001020fc488(uVar1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20));
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1020fac14; end: 1020fac97;  */

undefined8
FUN_1020fac14(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  func_0x000107c5fc8c(param_1,param_3,param_5,*(undefined8 *)(param_7 + 8));
  if ((param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb7550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSDsSQR_rlE2eeoiySbSDyxq_G_ABtFZ_11034d768)
              (param_2,param_4,param_5,param_6,param_7,param_8);
    return param_2;
  }
  return 0;
}



/* Entry: 1020fac98; end: 1020facbb;  */

ulong FUN_1020fac98(ulong *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_4 + -8);
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar2 = param_2[1];
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = *(long *)(param_3 + 0x20);
  func_0x000107c5fc8c(uVar4,*param_2,uVar1,*(undefined8 *)(lVar6 + 8));
  if ((uVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb7550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSDsSQR_rlE2eeoiySbSDyxq_G_ABtFZ_11034d768)(uVar5,uVar2,uVar1,uVar3,lVar6,uVar7)
    ;
    return uVar5;
  }
  return 0;
}



/* Entry: 1020facbc; end: 1020fadab;  */

void FUN_1020facbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c5fc84(param_1,param_2,param_4,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSDsSHR_rlE4hash4intoys6HasherVz_tF_11034d760)
            (param_1,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1020fadac; end: 1020faddb;  */

void FUN_1020fadac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar6 = *(undefined8 *)(param_2 + -8);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c5fc84(auStack_88,uVar1,uVar2,uVar5);
  func_0x000107c5fa38(auStack_88,uVar3,uVar2,uVar4,uVar5,uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 1020faddc; end: 1020fae33;  */

void FUN_1020faddc(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  uVar1 = *(undefined8 *)(param_3 + -8);
  func_0x000107c6068c(auStack_78);
  FUN_1020facbc(auStack_78,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1020fae34; end: 1020fafff;  */

void FUN_1020fae34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  undefined8 uStack_58;
  
  uVar3 = 0xff;
  uStack_b0 = param_3;
  uStack_a8 = param_5;
  uStack_a0 = param_8;
  uStack_98 = param_7;
  FUN_1020fc3f8(0xff,param_4,param_5,param_8);
  puVar4 = &UNK_10da5cf38;
  func_0x000107c61520(&UNK_10da5cf38,uVar3);
  lVar5 = 0;
  func_0x000107c60564(0,uVar3,puVar4);
  lVar7 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar6);
  uVar2 = uStack_98;
  func_0x000107c606ec((long)&uStack_b0 - extraout_x8,uVar3,uVar3,puVar4,uVar6,uVar1);
  uStack_61 = 0;
  uVar6 = 0;
  uStack_58 = param_2;
  func_0x000107c5fc80(0,param_4);
  uStack_70 = uVar2;
  puVar4 = PTR___sSayxGSEsSERzlMc_11034dce0;
  func_0x000107c61520(PTR___sSayxGSEsSERzlMc_11034dce0,uVar6,&uStack_70);
  func_0x000107c60554(&uStack_58,&uStack_61,lVar5,uVar6,puVar4);
  if (unaff_x21 == 0) {
    uStack_58 = uStack_b0;
    uStack_61 = 1;
    uVar6 = 0;
    func_0x000107c5fa34(0,param_4,uStack_a8,uStack_a0);
    uStack_80 = uVar2;
    uStack_78 = param_11;
    puVar4 = PTR___sSDyxq_GSEsSERzSER_rlMc_11034d780;
    func_0x000107c61520(PTR___sSDyxq_GSEsSERzSER_rlMc_11034d780,uVar6,&uStack_80);
    func_0x000107c60554(&uStack_58,&uStack_61,lVar5,uVar6,puVar4);
  }
  (**(code **)(lVar7 + 8))((long)&uStack_b0 - extraout_x8,lVar5);
  return;
}



/* Entry: 1020fb000; end: 1020fb22b;  */

/* WARNING: Removing unreachable block (ram,0x0001020fb208) */
/* WARNING: Removing unreachable block (ram,0x0001020fb144) */

undefined1  [16]
FUN_1020fb000(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 auVar8 [16];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  undefined *puStack_58;
  
  uVar3 = 0xff;
  uStack_a8 = param_6;
  uStack_a0 = param_7;
  uStack_98 = param_4;
  uStack_90 = param_2;
  FUN_1020fc3f8(0xff,param_2,param_3,param_6);
  puVar4 = &UNK_10da5cf38;
  func_0x000107c61520(&UNK_10da5cf38,uVar3);
  lVar5 = 0;
  func_0x000107c60518(0,uVar3,puVar4);
  lVar7 = *(long *)(lVar5 + -8);
  lStack_88 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  func_0x000107c606e0((long)&puStack_b0 - extraout_x8,uVar3,uVar3,puVar4,uVar1,uVar2);
  uStack_78 = uStack_a0;
  uVar1 = uStack_a8;
  if (unaff_x21 == 0) {
    uVar3 = 0;
    puStack_b0 = param_1;
    func_0x000107c5fc80(0,uStack_90);
    uVar2 = uStack_98;
    uStack_61 = 0;
    uStack_70 = uStack_98;
    puVar4 = PTR___sSayxGSesSeRzlMc_11034dd10;
    func_0x000107c61520(PTR___sSayxGSesSeRzlMc_11034dd10,uVar3,&uStack_70);
    func_0x000107c60508(&puStack_58,uVar3,&uStack_61,lStack_88,uVar3,puVar4);
    puVar4 = puStack_58;
    uVar3 = 0;
    func_0x000107c5fa34(0,uStack_90,param_3,uVar1);
    uStack_61 = 1;
    uStack_80 = uVar2;
    puVar6 = PTR___sSDyxq_GSesSeRzSeR_rlMc_11034d7a0;
    func_0x000107c61520(PTR___sSDyxq_GSesSeRzSeR_rlMc_11034d7a0,uVar3,&uStack_80);
    lVar5 = lStack_88;
    func_0x000107c60508(&puStack_58,uVar3,&uStack_61,lStack_88,uVar3,puVar6);
    (**(code **)(lVar7 + 8))((long)&puStack_b0 - extraout_x8,lVar5);
    func_0x0001000834e4(puStack_b0);
  }
  else {
    func_0x0001000834e4(param_1);
    puStack_58 = puVar6;
  }
  auVar8._8_8_ = puStack_58;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 1020fb22c; end: 1020fb267;  */

void FUN_1020fb22c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  FUN_1020fb000(param_2,uVar1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_4 + -8),param_6,
                *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_4 + -0x18));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = uVar1;
  }
  return;
}



/* Entry: 1020fb268; end: 1020fb29f;  */

void FUN_1020fb268(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *unaff_x20;
  
  FUN_1020fae34(param_1,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),param_6,*(undefined8 *)(param_3 + -0x10),
                *(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 1020fb2a0; end: 1020fb2cf;  */

void FUN_1020fb2a0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  FUN_1020f907c(param_2,uVar1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20));
  *param_1 = param_2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1020fb2d0; end: 1020fb38b;  */

void FUN_1020fb2d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000107c5fa50(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20));
  func_0x000107c5fa50((long)*(int *)(param_2 + 0x2c),param_1,*(undefined8 *)(param_2 + 0x18),param_3
                     );
  return;
}



/* Entry: 1020fb38c; end: 1020fb39b;  */

void FUN_1020fb38c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  uVar1 = *(undefined8 *)(param_2 + -8);
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c5fa50(auStack_78,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
  func_0x000107c5fa50((long)*(int *)(param_1 + 0x2c),auStack_78,*(undefined8 *)(param_1 + 0x18),
                      uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1020fb39c; end: 1020fb437;  */

void FUN_1020fb39c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  uVar1 = *(undefined8 *)(param_3 + -8);
  func_0x000107c6068c(auStack_78);
  FUN_1020fb2d0(auStack_78,param_2,uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1020fb438; end: 1020fb497;  */

void FUN_1020fb438(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = uVar1;
  FUN_1020f91fc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar1);
  *param_1 = uVar3;
  param_1[1] = 0;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



/* Entry: 1020fb498; end: 1020fb4cb;  */

void FUN_1020fb498(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10da5cb0c;
  func_0x000107c61520(&UNK_10da5cb0c,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSlsE19underestimatedCountSivg_11034dff0)(param_1,puVar1);
  return;
}



/* Entry: 1020fb4cc; end: 1020fb4d3;  */

undefined8 FUN_1020fb4cc(void)

{
  return 2;
}



/* Entry: 1020fb4d4; end: 1020fb527;  */

undefined8 * FUN_1020fb4d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  func_0x000107c61520(&UNK_10da5cb0c,param_1);
  puVar1 = unaff_x20;
  FUN_1020fc1f8();
  func_0x000107c6142c(*unaff_x20);
  func_0x000107c6142c(unaff_x20[1]);
  return puVar1;
}



/* Entry: 1020fb528; end: 1020fb52b;  */

void FUN_1020fb528(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSTsE13_copyContents12initializing8IteratorQz_SitSry7ElementQzG_tF_11034db60)();
  return;
}



/* Entry: 1020fb52c; end: 1020fb54b;  */

void FUN_1020fb52c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5fbfc(param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 1020fb54c; end: 1020fb553;  */

void FUN_1020fb54c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1020fb554; end: 1020fb583;  */

void FUN_1020fb554(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1020f923c(uVar1,param_3,*(undefined8 *)(param_2 + 0x10));
  *param_1 = uVar1;
  return;
}



/* Entry: 1020fb584; end: 1020fb5ff;  */

code * FUN_1020fb584(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0xb3d2);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_1020fb600();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_1020fe0fc;
}



/* Entry: 1020fb600; end: 1020fb6bb;  */

undefined1  [16]
FUN_1020fb600(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = 0;
  func_0x0001020fc344(0,param_5,param_6,param_7);
  lVar2 = *(long *)(lVar1 + -8);
  *param_1 = lVar1;
  param_1[1] = lVar2;
  lVar1 = *(long *)(lVar2 + 0x40);
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(lVar1,0xe673);
  }
  param_1[2] = lVar1;
  FUN_1020f9244(lVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = FUN_1020fb6bc;
  return auVar3;
}



/* Entry: 1020fb6bc; end: 1020fb6eb;  */

void FUN_1020fb6bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  (**(code **)(param_1[1] + 8))(uVar1,*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 1020fb6ec; end: 1020fb733;  */

void FUN_1020fb6ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 unaff_x20;
  long lVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar9 = &UNK_10da5cbec;
  func_0x000107c61520();
  lStack_98 = *(long *)(param_3 + -8);
  uStack_70 = param_2;
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  puVar2 = PTR___sSlTL_11034dfe8;
  lVar16 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar10 = *(undefined8 *)(puVar9 + 8);
  lVar4 = 0xff;
  lStack_80 = lVar16;
  func_0x000107c614b8(0xff,uVar10,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  lVar5 = 0;
  func_0x000107c61510(0,lVar4,lVar4,"lower upper ",0);
  lStack_a0 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar16 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_c0 = *(long *)(lVar4 + -8);
  lStack_b0 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar13 = (lVar16 - extraout_x12) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = lVar13 - extraout_x12_00;
  uVar6 = uVar10;
  func_0x000107c614b4(uVar10,param_3,lVar4,puVar2,PTR___sSl5IndexSl_SLTn_11034dfa0);
  lVar7 = 0;
  func_0x000107c5ff1c(0,lVar4,uVar6);
  lStack_b8 = *(long *)(lVar7 + -8);
  lStack_a8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar12 = uVar15 - extraout_x8_02;
  func_0x000107c5fe7c(uVar15,param_3,uVar10);
  lStack_90 = param_3;
  uStack_88 = uVar10;
  uStack_78 = unaff_x20;
  func_0x000107c5fe94(lVar13,param_3,uVar10);
  uVar8 = uVar15;
  func_0x000107c5fa90(uVar15,lVar13,lVar4,uVar6);
  lVar3 = lStack_b0;
  lVar7 = lStack_c0;
  if ((uVar8 & 1) != 0) {
    pcVar11 = *(code **)(lStack_c0 + 0x20);
    (*pcVar11)(lStack_b0,uVar15,lVar4);
    (*pcVar11)(lVar3 + *(int *)(lVar5 + 0x30),lVar13,lVar4);
    lVar13 = lStack_a0;
    (**(code **)(lStack_a0 + 0x10))(lVar16,lVar3,lVar5);
    iVar1 = *(int *)(lVar5 + 0x30);
    (*pcVar11)(lVar12,lVar16,lVar4);
    pcVar14 = *(code **)(lVar7 + 8);
    (*pcVar14)(lVar16 + iVar1,lVar4);
    (**(code **)(lVar13 + 0x20))(lVar16,lVar3,lVar5);
    lVar3 = lStack_a8;
    (*pcVar11)(lVar12 + *(int *)(lStack_a8 + 0x24),lVar16 + *(int *)(lVar5 + 0x30),lVar4);
    (*pcVar14)(lVar16,lVar4);
    uVar10 = uStack_70;
    uVar6 = uStack_88;
    lVar4 = lStack_90;
    func_0x000107c5fe80(uStack_70,lVar12,lStack_90,uStack_88);
    lVar7 = lStack_b8;
    (**(code **)(lStack_b8 + 8))(lVar12,lVar3);
    lVar5 = lStack_80;
    (**(code **)(lStack_98 + 0x10))(lStack_80,uStack_78,lVar4);
    (**(code **)(lVar7 + 0x10))(lVar12,uVar10,lVar3);
    func_0x000107c60674(uStack_68,lVar5,lVar12,lVar4,uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x1020f9ba0);
  (*pcVar11)();
}



/* Entry: 1020fb734; end: 1020fb757;  */

void FUN_1020fb734(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb83b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSlsSIyxG7IndicesRtzrlE7indicesAAvg_11034e048)();
  return;
}



/* Entry: 1020fb758; end: 1020fb817;  */

void FUN_1020fb758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10da5cc5c;
  func_0x000107c61520(&UNK_10da5cc5c,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSKsE5index_8offsetBy5IndexQzAD_SitF_11034d828)
            (param_1,param_2,param_3,param_4,puVar1);
  return;
}



/* Entry: 1020fb818; end: 1020fb863;  */

void FUN_1020fb818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10da5cc5c;
  func_0x000107c61520(&UNK_10da5cc5c,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSKsE8distance4from2toSi5IndexQz_AEtF_11034d830)(param_1,param_2,param_3,puVar1);
  return;
}



/* Entry: 1020fb864; end: 1020fb8ab;  */

void FUN_1020fb864(void)

{
  FUN_1020fc120();
  return;
}



/* Entry: 1020fb8ac; end: 1020fb8e7;  */

void FUN_1020fb8ac(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR___sSlTL_11034dfe8;
  uVar3 = 0;
  func_0x000107c614b8(0,param_4,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  func_0x000107c614b4(param_4,param_3,uVar3,puVar1,PTR___sSl5IndexSl_SLTn_11034dfa0);
  uVar4 = param_2;
  func_0x000107c5fa90(param_2,param_1,uVar3,param_4);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010943f0);
    (*pcVar2)();
  }
  lVar5 = 0;
  func_0x000107c5ff1c(0,uVar3,param_4);
  uVar4 = param_1 + *(int *)(lVar5 + 0x24);
  func_0x000107c5fa90(uVar4,param_2 + (long)*(int *)(lVar5 + 0x24),uVar3,param_4);
  if ((uVar4 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010943f4);
  (*pcVar2)();
}



/* Entry: 1020fb8e8; end: 1020fba83;  */

undefined1  [16] FUN_1020fb8e8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  puVar3 = PTR__swift_coroFrameAlloc_11034f288;
  puVar4 = (undefined8 *)0x38;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x38,0x2808);
  }
  *param_1 = puVar4;
  *puVar4 = unaff_x20;
  puVar4[1] = param_3;
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  lVar5 = 0;
  func_0x0001020fc344(0,uVar1,uVar2,uVar7);
  puVar4[2] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  puVar4[3] = lVar5;
  uVar8 = *(undefined8 *)(lVar5 + 0x40);
  if (puVar3 == (undefined *)0x0) {
    uVar6 = uVar8;
    func_0x000107c610a0();
    puVar4[4] = uVar6;
    func_0x000107c610a0();
  }
  else {
    uVar6 = uVar8;
    func_0x000107c61458(uVar8,0x2808);
    puVar4[4] = uVar6;
    func_0x000107c61458(uVar8,0x2808);
  }
  uVar6 = *param_2;
  puVar4[5] = uVar8;
  puVar4[6] = uVar6;
  FUN_1020f9244(uVar8,uVar6,*unaff_x20,unaff_x20[1],uVar1,uVar2,uVar7);
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = 0x1020fb9e0;
  return auVar9;
}



/* Entry: 1020fba84; end: 1020fbac7;  */

void FUN_1020fba84(long param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  FUN_1020fc404(param_1,&uStack_30);
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1020fbac8; end: 1020fbb43;  */

code * FUN_1020fbac8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x384c);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  func_0x0001020f9ba0();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_1020fbb44;
}



/* Entry: 1020fbb44; end: 1020fbb47;  */

void FUN_1020fbb44(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1020fbb48; end: 1020fbb73;  */

void FUN_1020fbb48(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1020fbb74; end: 1020fbbe3;  */

void FUN_1020fbb74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10da5cc5c;
  func_0x000107c61520(&UNK_10da5cc5c,param_4);
  func_0x000107c5fab0(param_1,param_2,param_3,param_4,puVar1,param_5);
  return;
}



/* Entry: 1020fbbe4; end: 1020fbbe7;  */

void FUN_1020fbbe4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb76a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSMsE6swapAtyy5IndexQz_ACtF_11034d888)();
  return;
}



/* Entry: 1020fbbe8; end: 1020fbc27;  */

void FUN_1020fbbe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faa4(param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 1020fbc28; end: 1020fbc63;  */

void FUN_1020fbc28(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (!SBORROW8(*param_2,1)) {
    *param_1 = *param_2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020fbc40);
  (*pcVar1)();
}



/* Entry: 1020fbc64; end: 1020fbd6b;  */

void FUN_1020fbc64(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar3;
  
  lVar1 = 0;
  func_0x000107c60188(0,param_4);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  lVar1 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar1,param_1,param_3);
  (**(code **)(*(long *)(param_4 + -8) + 0x38))(puVar3,1,1,param_4);
  uVar2 = 0;
  func_0x000107c5fa34(0,param_3,param_4,param_6);
  func_0x000107c5fa44(puVar3,lVar1,uVar2);
  return;
}



/* Entry: 1020fbd6c; end: 1020fbea7;  */

void FUN_1020fbd6c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c60188(0,param_4);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffa0 + -extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar4,param_1,param_3);
  lVar1 = 0;
  func_0x0001020fc344(0,param_3,param_4,param_6);
  lVar5 = *(long *)(param_4 + -8);
  (**(code **)(lVar5 + 0x10))(puVar3,param_1 + *(int *)(lVar1 + 0x2c),param_4);
  (**(code **)(lVar5 + 0x38))(puVar3,0,1,param_4);
  uVar2 = 0;
  func_0x000107c5fa34(0,param_3,param_4,param_6);
  func_0x000107c5fa44(puVar3,lVar4,uVar2);
  return;
}



/* Entry: 1020fbea8; end: 1020fbed7;  */

void FUN_1020fbea8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  FUN_1020fa40c(uVar1,uVar2,*(undefined8 *)(param_2 + 0x20));
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1020fbed8; end: 1020fbf2b;  */

void FUN_1020fbed8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x0001020f9e24(*param_1,param_1[1],param_2,param_5,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001020fbf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_2,param_3);
  return;
}



/* Entry: 1020fbf2c; end: 1020fbfaf;  */

undefined1  [16] FUN_1020fbf2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 1020fbfb0; end: 1020fc017;  */

void FUN_1020fbfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10da5cbec;
  func_0x000107c61520(&UNK_10da5cbec,param_3);
  func_0x000107c5ff0c(param_1,param_2,param_3,puVar1,param_4);
  return;
}



/* Entry: 1020fc018; end: 1020fc09f;  */

uint FUN_1020fc018(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = param_1;
  func_0x000107c5fab8();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = 0;
    func_0x0001020fc344(0,param_3,param_4,param_5);
    lVar4 = param_1 + (long)*(int *)(lVar3 + 0x2c);
    func_0x000107c5fab8(lVar4,param_2 + *(int *)(lVar3 + 0x2c),param_4,param_6);
    uVar1 = (uint)lVar4 & 1;
  }
  return uVar1;
}



/* Entry: 1020fc0a0; end: 1020fc0b3;  */

uint FUN_1020fc0a0(ulong param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_4 + -8);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  uVar4 = param_1;
  func_0x000107c5fab8();
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    lVar5 = 0;
    func_0x0001020fc344(0,uVar1,uVar2,uVar7);
    lVar6 = param_1 + (long)*(int *)(lVar5 + 0x2c);
    func_0x000107c5fab8(lVar6,param_2 + *(int *)(lVar5 + 0x2c),uVar2,uVar8);
    uVar3 = (uint)lVar6 & 1;
  }
  return uVar3;
}



/* Entry: 1020fc0b4; end: 1020fc0f7;  */

void FUN_1020fc0b4(ulong param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  func_0x000107c60320(param_2,param_3);
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1020fc0f4);
    (*pcVar1)();
  }
  uVar2 = *(ulong *)(param_2 + 0x10);
  func_0x000107c61574();
  if (param_1 < uVar2) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020fc0f8);
  (*pcVar1)();
}



/* Entry: 1020fc0f8; end: 1020fc11f;  */

void FUN_1020fc0f8(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  puVar3 = PTR___sSnMa_11034e100;
  puVar2 = PTR___sSlTL_11034dfe8;
  puVar1 = PTR___sSL1loiySbx_xtFZTj_11034d848;
  uVar5 = 0;
  func_0x000107c614b8(0,param_4,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  func_0x000107c614b4(param_4,param_3,uVar5,puVar2,PTR___sSl5IndexSl_SLTn_11034dfa0);
  uVar6 = param_2;
  func_0x000107c5fa90(param_2,param_1,uVar5,param_4);
  if ((uVar6 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1020fc1f4);
    (*pcVar4)();
  }
  lVar7 = 0;
  (*(code *)puVar3)(0,uVar5,param_4);
  (*(code *)puVar1)(param_1,param_2 + (long)*(int *)(lVar7 + 0x24),uVar5,param_4);
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1020fc1f8);
  (*pcVar4)();
}



/* Entry: 1020fc120; end: 1020fc1f7;  */

void FUN_1020fc120(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,code *param_5,
                  code *param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR___sSlTL_11034dfe8;
  uVar3 = 0;
  func_0x000107c614b8(0,param_4,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  func_0x000107c614b4(param_4,param_3,uVar3,puVar1,PTR___sSl5IndexSl_SLTn_11034dfa0);
  uVar4 = param_2;
  func_0x000107c5fa90(param_2,param_1,uVar3,param_4);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020fc1f4);
    (*pcVar2)();
  }
  lVar5 = 0;
  (*param_5)(0,uVar3,param_4);
  (*param_6)(param_1,param_2 + (long)*(int *)(lVar5 + 0x24),uVar3,param_4);
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020fc1f8);
  (*pcVar2)();
}



/* Entry: 1020fc1f8; end: 1020fc1fb;  */

void FUN_1020fc1f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss32_copyCollectionToContiguousArrayys0dE0Vy7ElementQzGxSlRzlF_11034ed58)();
  return;
}



/* Entry: 1020fc1fc; end: 1020fc337;  */

undefined1  [16]
FUN_1020fc1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  
  uVar1 = 0;
  uStack_58 = param_1;
  func_0x000107c5fc6c();
  uVar2 = 0;
  func_0x000107c61510(0,param_2,param_3,0,0);
  uVar3 = 0;
  func_0x000107c5fc6c(0,uVar2);
  func_0x000107c5f9fc();
  uVar2 = 0xff;
  uStack_80 = param_2;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = uVar1;
  uStack_60 = uVar3;
  func_0x000107c61510(0xff,param_2,param_3,"key value ",0);
  uVar1 = 0;
  func_0x000107c5fc80(0,uVar2);
  uVar2 = 0xff;
  func_0x000107c5fc80(0xff,param_2);
  uVar3 = 0xff;
  func_0x000107c5fa34(0xff,param_2,param_3,param_4);
  uVar4 = 0;
  func_0x000107c61510(0,uVar2,uVar3,"keys keyValues ",0);
  puVar5 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar1);
  func_0x000107c5fc04(auStack_50,&uStack_68,FUN_1020fe0e0,auStack_90,uVar1,uVar4,puVar5);
  return auStack_50;
}



/* Entry: 1020fc338; end: 1020fc34f;  */

void FUN_1020fc338(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e6afba8);
  return;
}



/* Entry: 1020fc350; end: 1020fc36b;  */

void FUN_1020fc350(undefined8 param_1)

{
  func_0x0001020fc3b0(param_1,FUN_1020fbc64);
  return;
}



/* Entry: 1020fc36c; end: 1020fc393;  */

void FUN_1020fc36c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614bc(param_1,*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1020fc394; end: 1020fc3f7;  */

void FUN_1020fc394(undefined8 param_1)

{
  func_0x0001020fc3b0(param_1,FUN_1020fbd6c);
  return;
}



/* Entry: 1020fc3f8; end: 1020fc403;  */

void FUN_1020fc3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e6afc40);
  return;
}



/* Entry: 1020fc404; end: 1020fc47b;  */

void FUN_1020fc404(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c60680(0,param_3,*(undefined8 *)(param_4 + 8));
  func_0x000107c61520(PTR___ss5SliceVyxGSlsMc_11034eee0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss22_writeBackMutableSlice_6bounds5sliceyxz_Sny5IndexQzGq_tSMRzSlR_7ElementQy_AGRtzADQy_AERSr0_lF_11034eb28
  )();
  return;
}



/* Entry: 1020fc47c; end: 1020fc49f;  */

void FUN_1020fc47c(void)

{
  return;
}



/* Entry: 1020fc4a0; end: 1020fc50f;  */

void FUN_1020fc4a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  func_0x000107c61520(&UNK_10da5c8c0,param_1,&uStack_18);
  return;
}



/* Entry: 1020fc510; end: 1020fc55b;  */

void FUN_1020fc510(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10da5c890,param_1);
  return;
}



/* Entry: 1020fc55c; end: 1020fc6d7;  */

void FUN_1020fc55c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = &UNK_10da5cbec;
  func_0x000107c61520();
  puStack_28 = puVar1;
  func_0x000107c61520(PTR___ss5SliceVyxGSMsSMRzrlMc_11034eed0,param_1,&puStack_28);
  return;
}



/* Entry: 1020fc6d8; end: 1020fc733;  */

undefined8 * FUN_1020fc6d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1020fc734; end: 1020fc76f;  */

undefined8 * FUN_1020fc734(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1020fc770; end: 1020fc7f3;  */

int FUN_1020fc770(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020fc7f4; end: 1020fc87f;  */

void FUN_1020fc7f4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x18);
    lVar1 = 0x13f;
    func_0x000107c6143c();
    if (uVar2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c6153c(param_1,0,2,&lStack_30,param_1 + 0x28);
    }
  }
  return;
}



/* Entry: 1020fc880; end: 1020fc94b;  */

long * FUN_1020fc880(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_3 + 0x18);
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar7 = *(long *)(lVar6 + -8);
  uVar5 = (ulong)*(uint *)(lVar7 + 0x50) & 0xff;
  uVar1 = *(long *)(lVar4 + 0x40) + uVar5;
  uVar3 = *(uint *)(lVar4 + 0x50) | *(uint *)(lVar7 + 0x50);
  uVar2 = uVar3 & 0xff;
  if ((uVar2 < 8 && (uVar3 & 0x100000) == 0) &&
      (uVar1 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40) < 0x19) {
    (**(code **)(lVar4 + 0x10))(param_1);
    (**(code **)(lVar7 + 0x10))(uVar1 + (long)param_1 & ~uVar5,uVar1 + (long)param_2 & ~uVar5,lVar6)
    ;
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    param_1 = (long *)(lVar4 + ((ulong)uVar2 + 0x10 & ((ulong)uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1020fc94c; end: 1020fcb53;  */

void FUN_1020fc94c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  lVar1 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001020fc9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(long *)(lVar3 + 0x40) + param_1 + uVar2 & (uVar2 ^ 0xffffffffffffffff))
  ;
  return;
}



/* Entry: 1020fcb54; end: 1020fcc9f;  */

uint * FUN_1020fcb54(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(uint *)(lVar9 + 0x54);
  lVar10 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar7 = *(uint *)(lVar10 + 0x54);
  uVar3 = uVar7;
  if (uVar7 <= uVar4) {
    uVar3 = uVar4;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar1 = *(long *)(lVar9 + 0x40) + uVar11;
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_1020fcc18;
  lVar2 = (uVar1 & (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar10 + 0x40);
  uVar8 = (uint)lVar2;
  uVar5 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar12 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar5 & 0x1f)) >> (ulong)(uVar5 & 0x1f)) + 1;
    if (0xff < uVar12) {
      if (uVar12 >> 0x10 == 0) {
        uVar12 = (uint)*(ushort *)((long)param_1 + lVar2);
      }
      else {
        uVar12 = *(uint *)((long)param_1 + lVar2);
      }
      goto LAB_1020fcbb0;
    }
    if (1 < uVar12) goto LAB_1020fcbac;
  }
  else {
LAB_1020fcbac:
    uVar12 = (uint)*(byte *)((long)param_1 + lVar2);
LAB_1020fcbb0:
    if (uVar12 != 0) {
      uVar4 = 0;
      if (uVar8 < 4) {
        uVar4 = uVar12 - 1 << (ulong)(uVar5 & 0x1f);
      }
      if (uVar8 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 4;
        if (uVar8 < 4) {
          uVar7 = uVar8;
        }
        if ((int)uVar7 < 3) {
          if (uVar7 == 1) {
            uVar7 = (uint)(byte)*param_1;
          }
          else {
            uVar7 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar7 == 3) {
          uVar7 = (uint)(uint3)*param_1;
        }
        else {
          uVar7 = *param_1;
        }
      }
      return (uint *)(ulong)(uVar3 + (uVar7 | uVar4) + 1);
    }
  }
  if (uVar3 == 0) {
    return (uint *)0x0;
  }
LAB_1020fcc18:
  if (uVar7 <= uVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001020fcc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar9 + 0x30))();
    return param_1;
  }
  puVar6 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001020fcc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 0x30))(puVar6,uVar7,*(long *)(param_3 + 0x18));
  return puVar6;
}



/* Entry: 1020fcca0; end: 1020fce9b;  */

void FUN_1020fcca0(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  
  lVar8 = *(long *)(param_4 + 0x10);
  lVar9 = *(long *)(param_4 + 0x18);
  lVar10 = *(long *)(lVar8 + -8);
  uVar7 = *(uint *)(lVar10 + 0x54);
  lVar11 = *(long *)(lVar9 + -8);
  uVar4 = *(uint *)(lVar11 + 0x54);
  uVar3 = uVar4;
  if (uVar4 <= uVar7) {
    uVar3 = uVar7;
  }
  uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar1 = *(long *)(lVar10 + 0x40) + uVar12;
  lVar2 = (uVar1 & (uVar12 ^ 0xffffffffffffffff)) + *(long *)(lVar11 + 0x40);
  uVar13 = (uint)lVar2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar15 = 0;
  }
  else if (uVar13 < 4) {
    uVar6 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar13 << 3 & 0x1f)) >> (ulong)(uVar13 << 3 & 0x1f)
            ) + 1;
    bVar15 = 2;
    if (0xffff < uVar6) {
      bVar15 = 4;
    }
    if (uVar6 < 0x100) {
      bVar15 = 1 < uVar6;
    }
  }
  else {
    bVar15 = 1;
  }
  uVar6 = (uint)param_2;
  if (uVar3 < uVar6) {
    uVar6 = uVar6 + ~uVar3;
    if (uVar13 < 4) {
      iVar14 = (uVar6 >> (ulong)(uVar13 << 3 & 0x1f)) + 1;
      if (uVar13 != 0) {
        uVar3 = uVar6 & (-1 << (ulong)(uVar13 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar2);
        uVar5 = (undefined2)uVar3;
        if (uVar13 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar13 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)uVar6;
        }
      }
    }
    else {
      func_0x000107c60ee4(param_1,lVar2);
      *param_1 = uVar6;
      iVar14 = 1;
    }
    if (bVar15 < 2) {
      if (bVar15 != 0) {
        *(char *)((long)param_1 + lVar2) = (char)iVar14;
      }
    }
    else if (bVar15 == 2) {
      *(short *)((long)param_1 + lVar2) = (short)iVar14;
    }
    else {
      *(int *)((long)param_1 + lVar2) = iVar14;
    }
  }
  else {
    if (bVar15 < 2) {
      if (bVar15 != 0) {
        *(undefined1 *)((long)param_1 + lVar2) = 0;
      }
    }
    else if (bVar15 == 2) {
      *(undefined2 *)((long)param_1 + lVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2) = 0;
    }
    if (uVar6 != 0) {
      if (uVar7 < uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x38);
        param_1 = (uint *)(uVar1 + (long)param_1 & ~uVar12);
        lVar8 = lVar9;
        uVar7 = uVar4;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x0001020fce38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar7,lVar8);
      return;
    }
  }
  return;
}


