/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010923f0; end: 101092437;  */

void FUN_1010923f0(void)

{
  FUN_1010943f4();
  return;
}



/* Entry: 101092438; end: 101092443;  */

void FUN_101092438(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

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



/* Entry: 101092444; end: 101092507;  */

void FUN_101092444(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_3 + -8);
  lVar1 = 0;
  func_0x000107c614b8(0,uVar2,*(undefined8 *)(param_2 + 0x18),PTR___sSlTL_11034dfe8,
                      PTR___s5IndexSlTl_11034d620);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  (**(code **)(lVar4 + 0x20))(puVar3,param_1,lVar1);
  FUN_101092124(param_1,puVar3,param_2,uVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 101092508; end: 101092533;  */

uint FUN_101092508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5fa88(param_1,param_2,param_4,param_5);
  return (uint)param_1 & 1;
}



/* Entry: 101092534; end: 10109254b;  */

uint FUN_101092534(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  func_0x000107c5fa88(param_1,param_2,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_4 + -8))
  ;
  return (uint)param_1 & 1;
}



/* Entry: 10109254c; end: 10109279f;  */

/* WARNING: Removing unreachable block (ram,0x0001010926bc) */

void FUN_10109254c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x21;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_a8 = *(long *)(param_4 + -8);
  uStack_90 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  puVar5 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  lVar4 = 0;
  FUN_1010927a0();
  lStack_a0 = *(long *)(lVar4 + -8);
  lStack_98 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar4 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_b0 = lVar4 - extraout_x12_01;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  func_0x000107c606dc(auStack_88,uVar1,uVar2);
  if (unaff_x21 == 0) {
    func_0x0001000a8868(auStack_88,uStack_70);
    func_0x000107c605d4(lVar6,param_4,param_4,param_5,uStack_70,uStack_68);
    (**(code **)(lStack_a8 + 0x20))(lVar4,lVar6,param_4);
    func_0x0001000834e4(auStack_88);
  }
  else {
    FUN_1010927ac(param_2,auStack_88);
    func_0x000107c5fde4(puVar5,auStack_88,param_4,param_5);
    func_0x000107c614ac(unaff_x21);
    lVar4 = lStack_b8;
    (**(code **)(lStack_a8 + 0x20))(lStack_b8,puVar5,param_4);
  }
  lVar3 = lStack_98;
  lVar6 = lStack_b0;
  pcVar7 = *(code **)(lStack_a0 + 0x20);
  (*pcVar7)(lStack_b0,lVar4,lStack_98);
  (*pcVar7)(uStack_90,lVar6,lVar3);
  func_0x0001000834e4(param_2);
  return;
}



/* Entry: 1010927a0; end: 1010927ab;  */

void FUN_1010927a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e620efc);
  return;
}



/* Entry: 1010927ac; end: 1010927ef;  */

long FUN_1010927ac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1010927f0; end: 10109280f;  */

void FUN_1010927f0(undefined8 param_1,long param_2,long param_3)

{
  FUN_10109254c(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_3 + -8));
  return;
}



/* Entry: 101092810; end: 1010928f3;  */

void FUN_101092810(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 uVar2;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  func_0x000107c606e8(auStack_78,uVar2,uVar1);
  func_0x0001000c6518(auStack_78,uStack_60);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c605f4();
  if (unaff_x21 == 0) {
    func_0x0001000834e4(auStack_78);
  }
  else {
    func_0x0001000834e4(auStack_78);
    func_0x000107c5fa48(param_1,uVar2,param_3);
    func_0x000107c614ac();
  }
  return;
}



/* Entry: 1010928f4; end: 10109290b;  */

void FUN_1010928f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_101092810(param_1,param_2,*(undefined8 *)(param_3 + -8));
  return;
}



/* Entry: 10109290c; end: 10109295f;  */

void FUN_10109290c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_4 + -8);
  puVar1 = &UNK_10d91fac0;
  func_0x000107c61520(&UNK_10d91fac0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss2eeoiySbx_xtSYRzSQ8RawValueRpzlF_11034ed10)
            (param_1,param_2,param_3,puVar1,uVar2);
  return;
}



/* Entry: 101092960; end: 101092977;  */

void FUN_101092960(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101092978; end: 1010929bf;  */

undefined8 FUN_101092978(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d51200;
  func_0x0001000285a8(0x112d51200,&UNK_10d917ec0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1010929c0; end: 101092ab7;  */

undefined1  [16] FUN_1010929c0(long param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar3 = *(long *)(param_1 + 0x18);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar4 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar4);
  uVar1 = 0x112d51208;
  func_0x0001000285a8(0x112d51208,&UNK_10d917ec8);
  puVar2 = &uStack_60;
  func_0x000107c6147c(puVar2,lVar4,lVar3,uVar1,0xe);
  if ((int)puVar2 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    FUN_101092978(&uStack_60);
    uStack_48 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x0001000a8868(&uStack_60,uStack_48);
    (*param_3)(uStack_48,uStack_40);
    func_0x0001000834e4(&uStack_60);
  }
  auVar5._8_8_ = uStack_40;
  auVar5._0_8_ = uStack_48;
  return auVar5;
}



/* Entry: 101092ab8; end: 101092abf;  */

void FUN_101092ab8(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationE20localizedDescriptionSSvg_110351350)
            (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + -8));
  return;
}



/* Entry: 101092ac0; end: 101092c4b;  */

void FUN_101092ac0(undefined8 param_1,undefined8 param_2)

{
  FUN_1010929c0(param_1,param_2,
                PTR___s10Foundation14LocalizedErrorP13failureReasonSSSgvgTj_110350698);
  return;
}



/* Entry: 101092c4c; end: 101092d53;  */

void FUN_101092c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c614b8(0,param_5,param_4,param_6,param_7);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar5 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(puVar2,param_2,lVar1);
  (*param_8)(lVar3,puVar2,param_4,param_5);
  (**(code **)(lVar4 + 8))(param_2,lVar1);
  (**(code **)(lVar5 + 0x20))(param_1,lVar3,param_4);
  return;
}



/* Entry: 101092d54; end: 101092d87;  */

void FUN_101092d54(undefined8 param_1,long param_2,long param_3)

{
  FUN_101092c4c(param_1,param_2,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + -8),
                PTR___ss33ExpressibleByUnicodeScalarLiteralTL_11034ed80,
                PTR___s24UnicodeScalarLiteralTypes013ExpressibleByabC0PTl_11034d608,
                PTR___ss33ExpressibleByUnicodeScalarLiteralP07unicodedE0x0cdE4TypeQz_tcfCTj_11034ed70
               );
  return;
}



/* Entry: 101092d88; end: 101092d97;  */

void FUN_101092d88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss12IdentifiableP2id2IDQzvgTj_11034e4f8)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 101092d98; end: 101092f2b;  */

void FUN_101092d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  code *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  uStack_78 = param_3;
  uStack_70 = param_6;
  uStack_68 = param_1;
  func_0x000107c60188(0,param_5);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_80 + -extraout_x8;
  lVar11 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1010927a0(0,param_4,param_5);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c605a4(puVar8,param_2,uStack_78,param_5,uStack_70);
  puVar4 = puVar8;
  (**(code **)(lVar11 + 0x30))(puVar8,1,param_5);
  bVar1 = (int)puVar4 != 1;
  if (bVar1) {
    pcVar7 = *(code **)(lVar11 + 0x20);
    (*pcVar7)(lVar10,puVar8,param_5);
    (*pcVar7)(lVar10 - extraout_x8_01,lVar10,param_5);
    uVar5 = uStack_68;
    (**(code **)(lVar6 + 0x20))(uStack_68,lVar10 - extraout_x8_01,lVar3);
  }
  else {
    (**(code **)(lVar9 + 8))(puVar8,lVar2);
    uVar5 = uStack_68;
  }
  (**(code **)(lVar6 + 0x38))(uVar5,!bVar1,1,lVar3);
  return;
}



/* Entry: 101092f2c; end: 101092f3b;  */

void FUN_101092f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  code *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = *(undefined8 *)(param_5 + -8);
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  lVar1 = *(long *)(param_4 + 0x18);
  lVar3 = 0;
  uStack_78 = param_3;
  uStack_68 = param_1;
  func_0x000107c60188(0,lVar1);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_80 + -extraout_x8;
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1010927a0(0,uVar6,lVar1);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c605a4(puVar9,param_2,uStack_78,lVar1,uStack_70);
  puVar5 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,lVar1);
  bVar2 = (int)puVar5 != 1;
  if (bVar2) {
    pcVar8 = *(code **)(lVar12 + 0x20);
    (*pcVar8)(lVar11,puVar9,lVar1);
    (*pcVar8)(lVar11 - extraout_x8_01,lVar11,lVar1);
    uVar6 = uStack_68;
    (**(code **)(lVar7 + 0x20))(uStack_68,lVar11 - extraout_x8_01,lVar4);
  }
  else {
    (**(code **)(lVar10 + 8))(puVar9,lVar3);
    uVar6 = uStack_68;
  }
  (**(code **)(lVar7 + 0x38))(uVar6,!bVar2,1,lVar4);
  return;
}



/* Entry: 101092f3c; end: 101092fb7;  */

void FUN_101092f3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + -8);
  lVar1 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c60468(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1,
                      param_4);
  (**(code **)(lVar2 + 0x20))
            (param_1,&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  return;
}



/* Entry: 101092fb8; end: 101093007;  */

void FUN_101092fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60460(param_1,param_2,param_4,param_5);
  return;
}



/* Entry: 101093008; end: 101093013;  */

void FUN_101093008(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  
  uVar3 = *(undefined8 *)(param_3 + -8);
  lVar2 = *(long *)(param_2 + 0x18);
  lVar4 = *(long *)(lVar2 + -8);
  lVar1 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40),param_2,lVar2,uVar3);
  func_0x000107c60468(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1,
                      uVar3);
  (**(code **)(lVar4 + 0x20))
            (param_1,&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}



/* Entry: 101093014; end: 101093037;  */

void FUN_101093014(void)

{
  FUN_10109326c();
  return;
}



/* Entry: 101093038; end: 101093043;  */

void FUN_101093038(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  func_0x000107c60460(param_1,param_2,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_4 + -8))
  ;
  return;
}



/* Entry: 101093044; end: 101093067;  */

void FUN_101093044(void)

{
  FUN_10109326c();
  return;
}



/* Entry: 101093068; end: 101093073;  */

void FUN_101093068(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  func_0x000107c60464(param_1,param_2,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_4 + -8))
  ;
  return;
}



/* Entry: 101093074; end: 101093263;  */

void FUN_101093074(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar7 = *(long *)(param_5 + -8);
  lVar3 = param_4;
  uStack_88 = param_2;
  uStack_80 = param_7;
  uStack_78 = param_6;
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c60188(0,lVar3);
  lStack_98 = *(long *)(lVar2 + -8);
  lStack_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = (long)puVar5 - extraout_x8_00;
  lVar2 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  lVar10 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1010927a0(0,param_3,param_4);
  lVar9 = *(long *)(lVar3 + -8);
  lStack_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = uStack_88;
  (**(code **)(lVar7 + 0x10))(puVar5,uStack_88,param_5);
  func_0x000107c5fe5c(lVar8,puVar5,param_5,uStack_80,param_4,uStack_78);
  (**(code **)(lVar7 + 8))(uVar4,param_5);
  lVar3 = lVar8;
  (**(code **)(lVar2 + 0x30))(lVar8,1,param_4);
  bVar1 = (int)lVar3 != 1;
  if (bVar1) {
    pcVar6 = *(code **)(lVar2 + 0x20);
    (*pcVar6)(lVar10,lVar8,param_4);
    (*pcVar6)(lVar10 - extraout_x8_02,lVar10,param_4);
    uVar4 = uStack_68;
    lVar3 = lStack_70;
    (**(code **)(lVar9 + 0x20))(uStack_68,lVar10 - extraout_x8_02,lStack_70);
  }
  else {
    (**(code **)(lStack_98 + 8))(lVar8,lStack_90);
    uVar4 = uStack_68;
    lVar3 = lStack_70;
  }
  (**(code **)(lVar9 + 0x38))(uVar4,!bVar1,1,lVar3);
  return;
}



/* Entry: 101093264; end: 10109326b;  */

void FUN_101093264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb827c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSj9magnitude9MagnitudeQzvgTj_11034df38)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10109326c; end: 1010932e7;  */

void FUN_10109326c(undefined8 param_1)

{
  long in_x3;
  code *in_x5;
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(in_x3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  (*in_x5)(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar1 + 0x20))
            (param_1,&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),in_x3);
  return;
}



/* Entry: 1010932e8; end: 10109330f;  */

void FUN_1010932e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5fe58(param_1,param_2,param_4,param_5);
  return;
}



/* Entry: 101093310; end: 10109332f;  */

void FUN_101093310(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uStack_78 = *(undefined8 *)(param_6 + -8);
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  lVar5 = *(long *)(param_5 + 0x18);
  lVar8 = *(long *)(param_3 + -8);
  lVar3 = lVar5;
  uStack_88 = param_2;
  uStack_80 = param_4;
  uStack_68 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c60188(0,lVar3);
  lStack_98 = *(long *)(lVar2 + -8);
  lStack_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = (long)puVar6 - extraout_x8_00;
  lVar2 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  lVar11 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1010927a0(0,uVar4,lVar5);
  lVar10 = *(long *)(lVar3 + -8);
  lStack_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = uStack_88;
  (**(code **)(lVar8 + 0x10))(puVar6,uStack_88,param_3);
  func_0x000107c5fe5c(lVar9,puVar6,param_3,uStack_80,lVar5,uStack_78);
  (**(code **)(lVar8 + 8))(uVar4,param_3);
  lVar3 = lVar9;
  (**(code **)(lVar2 + 0x30))(lVar9,1,lVar5);
  bVar1 = (int)lVar3 != 1;
  if (bVar1) {
    pcVar7 = *(code **)(lVar2 + 0x20);
    (*pcVar7)(lVar11,lVar9,lVar5);
    (*pcVar7)(lVar11 - extraout_x8_02,lVar11,lVar5);
    uVar4 = uStack_68;
    lVar5 = lStack_70;
    (**(code **)(lVar10 + 0x20))(uStack_68,lVar11 - extraout_x8_02,lStack_70);
  }
  else {
    (**(code **)(lStack_98 + 8))(lVar9,lStack_90);
    uVar4 = uStack_68;
    lVar5 = lStack_70;
  }
  (**(code **)(lVar10 + 0x38))(uVar4,!bVar1,1,lVar5);
  return;
}



/* Entry: 101093330; end: 101093353;  */

void FUN_101093330(void)

{
  FUN_10109326c();
  return;
}



/* Entry: 101093354; end: 10109335f;  */

void FUN_101093354(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  func_0x000107c5fe58(param_1,param_2,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_4 + -8))
  ;
  return;
}



/* Entry: 101093360; end: 1010933ab;  */

void FUN_101093360(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + -8);
  puVar1 = &UNK_10d91fac0;
  func_0x000107c61520(&UNK_10d91fac0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSYsSHRzSH8RawValueSYRpzrlE04hashB0Sivg_11034dc08)(param_1,param_2,puVar1,uVar2);
  return;
}



/* Entry: 1010933ac; end: 10109345b;  */

void FUN_1010933ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + -8);
  puVar1 = &UNK_10d91fac0;
  func_0x000107c61520(&UNK_10d91fac0);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSYsSHRzSH8RawValueSYRpzrlE4hash4intoys6HasherVz_tF_11034dc18)
            (param_1,param_2,param_3,puVar1,uVar2);
  return;
}



/* Entry: 10109345c; end: 1010937c7;  */

void FUN_10109345c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x13;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar8 = *(long *)(param_3 + -8);
  lVar2 = param_3;
  uStack_70 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar4 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar1 = PTR___ss27ExpressibleByIntegerLiteralTL_11034ec70;
  lVar5 = lVar4 - extraout_x13;
  lStack_68 = *(long *)(extraout_x12 + 8);
  uVar7 = *(undefined8 *)(lStack_68 + 0x10);
  uVar6 = *(undefined8 *)(lVar2 + 0x18);
  lVar2 = 0;
  func_0x000107c614b8(0,uVar7,uVar6,PTR___ss27ExpressibleByIntegerLiteralTL_11034ec70,
                      PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_11034d5f8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(param_1,uStack_70,param_3);
  func_0x000107c614b4(uVar7,uVar6,lVar2,puVar1,
                      PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_11034ec68
                     );
  func_0x000107c60618(lVar5 - extraout_x8_00,&UNK_10d9202e8,0x100,lVar2,uVar7);
  FUN_101092c4c(lVar5,lVar5 - extraout_x8_00);
  (**(code **)(lVar8 + 0x20))(lVar4,param_1,param_3);
  FUN_10109326c(param_1,lVar5,lVar4);
  pcVar3 = *(code **)(lVar8 + 8);
  (*pcVar3)(lVar4,param_3);
  (*pcVar3)(lVar5,param_3);
  return;
}



/* Entry: 1010937c8; end: 10109386f;  */

void FUN_1010937c8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  long extraout_x12;
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5fbdc(param_1,lVar1,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  return;
}



/* Entry: 101093870; end: 101093887;  */

void FUN_101093870(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long extraout_x8;
  long extraout_x12;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_3 + -8);
  lVar2 = *(long *)(param_2 + 0x18);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5fbdc(param_1,lVar2,uVar1);
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  return;
}



/* Entry: 101093888; end: 1010938d7;  */

undefined8 FUN_101093888(long param_1)

{
  undefined8 unaff_x20;
  
  FUN_1010944cc();
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return unaff_x20;
}



/* Entry: 1010938d8; end: 1010938db;  */

void FUN_1010938d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSTsE13_copyContents12initializing8IteratorQz_SitSry7ElementQzG_tF_11034db60)();
  return;
}



/* Entry: 1010938dc; end: 1010938fb;  */

void FUN_1010938dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5fbfc(param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 1010938fc; end: 101093903;  */

void FUN_1010938fc(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb8d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSx8distance2to6StrideQzx_tFTj_11034e270)(param_1,*(undefined8 *)(param_2 + 0x18))
  ;
  return;
}



/* Entry: 101093904; end: 101093983;  */

void FUN_101093904(undefined8 param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_3 + 0x18);
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c601cc(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar2 + 0x20))
            (param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 101093984; end: 101093997;  */

void FUN_101093984(undefined8 param_1,long param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb8d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSx8distance2to6StrideQzx_tFTj_11034e270)
            (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + -8));
  return;
}



/* Entry: 101093998; end: 1010939bb;  */

void FUN_101093998(undefined8 param_1,long param_2,long param_3)

{
  FUN_1010939bc(param_1,param_2,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + -8),
                PTR___ss25ExpressibleByArrayLiteralP05arrayD0x0cD7ElementQzd_tcfCTj_11034eb90);
  return;
}



/* Entry: 1010939bc; end: 101093a5f;  */

void FUN_1010939bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  func_0x000107c61434();
  (*param_6)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c6142c(param_2);
  (**(code **)(lVar1 + 0x20))
            (param_1,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4);
  return;
}



/* Entry: 101093a60; end: 101093abb;  */

void FUN_101093a60(undefined8 param_1,long param_2,long param_3)

{
  FUN_1010939bc(param_1,param_2,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + -8),
                PTR___ss30ExpressibleByDictionaryLiteralP010dictionaryD0x3KeyQz_5ValueQztd_tcfCTj_11034ed20
               );
  return;
}



/* Entry: 101093abc; end: 101093aff;  */

void FUN_101093abc(undefined8 param_1,long param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)
            (*(undefined8 *)(param_3 + -8),*(undefined8 *)(param_2 + 0x18),param_1,
             PTR___sSlTL_11034dfe8,PTR___sSl5IndexSl_SLTn_11034dfa0);
  return;
}



/* Entry: 101093b00; end: 101093b33;  */

void FUN_101093b00(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_3 + -8);
  func_0x000107c61520(&UNK_10d91fcfc,param_1,&uStack_18);
  return;
}



/* Entry: 101093b34; end: 101093b57;  */

void FUN_101093b34(undefined8 param_1,long param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)
            (*(undefined8 *)(param_3 + -8),*(undefined8 *)(param_2 + 0x18),param_1,
             PTR___ss27ExpressibleByBooleanLiteralTL_11034ec50,
             PTR___ss27ExpressibleByBooleanLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_11034ec48);
  return;
}



/* Entry: 101093b58; end: 101093b8f;  */

void FUN_101093b58(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  func_0x000107c61520(&UNK_10d91ff4c,param_1,&uStack_18);
  return;
}



/* Entry: 101093b90; end: 101093bfb;  */

void FUN_101093b90(undefined8 param_1,long param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)
            (*(undefined8 *)(param_3 + -8),*(undefined8 *)(param_2 + 0x18),param_1,
             PTR___ss43ExpressibleByExtendedGraphemeClusterLiteralTL_11034edb0,
             PTR___ss43ExpressibleByExtendedGraphemeClusterLiteralP0cdeF4TypeAB_s01_ab7BuiltincdeF0Tn_11034eda8
            );
  return;
}



/* Entry: 101093bfc; end: 101093c33;  */

void FUN_101093bfc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  func_0x000107c61520(&UNK_10d91fde0,param_1,&uStack_18);
  return;
}



/* Entry: 101093c34; end: 101093c57;  */

void FUN_101093c34(undefined8 param_1,long param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)
            (*(undefined8 *)(param_3 + -8),*(undefined8 *)(param_2 + 0x18),param_1,
             PTR___ss26ExpressibleByStringLiteralTL_11034ec28,
             PTR___ss26ExpressibleByStringLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_11034ec20);
  return;
}



/* Entry: 101093c58; end: 101093c8f;  */

void FUN_101093c58(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  func_0x000107c61520(&UNK_10d91feb4,param_1,&uStack_18);
  return;
}



/* Entry: 101093c90; end: 101093d0b;  */

void FUN_101093c90(undefined8 param_1,long param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)
            (*(undefined8 *)(param_3 + -8),*(undefined8 *)(param_2 + 0x18),param_1,
             PTR___ss32ExpressibleByStringInterpolationTL_11034ed50,
             PTR___ss32ExpressibleByStringInterpolationP0cD0AB_s0cD8ProtocolTn_11034ed48);
  return;
}



/* Entry: 101093d0c; end: 101093d7b;  */

void FUN_101093d0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  func_0x000107c61520(&UNK_10d920010,param_1,&uStack_18);
  return;
}



/* Entry: 101093d7c; end: 101093dc3;  */

void FUN_101093d7c(undefined8 param_1,long param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)
            (*(undefined8 *)(param_3 + -8),*(undefined8 *)(param_2 + 0x18),param_1,
             PTR___sSjTL_11034df40,PTR___sSj9MagnitudeSj_SLTn_11034df28);
  return;
}



/* Entry: 101093dc4; end: 101093e33;  */

void FUN_101093dc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  func_0x000107c61520(&UNK_10d91fcc8,param_1,&uStack_18);
  return;
}



/* Entry: 101093e34; end: 101093e57;  */

void FUN_101093e34(undefined8 param_1,long param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)
            (*(undefined8 *)(param_3 + -8),*(undefined8 *)(param_2 + 0x18),param_1,
             PTR___sSTTL_11034db40,PTR___sST8IteratorST_StTn_11034db38);
  return;
}



/* Entry: 101093e58; end: 101093e8f;  */

void FUN_101093e58(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  func_0x000107c61520(&UNK_10d91fc0c,param_1,&uStack_18);
  return;
}



/* Entry: 101093e90; end: 101093edf;  */

void FUN_101093e90(undefined8 param_1,long param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getAssociatedConformanceWitness_11034f328)
            (*(undefined8 *)(param_3 + -8),*(undefined8 *)(param_2 + 0x18),param_1,
             PTR___sSxTL_11034e278,PTR___sSx6StrideSx_SLTn_11034e258);
  return;
}



/* Entry: 101093ee0; end: 101093fbb;  */

void FUN_101093ee0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0,1,&lStack_28,param_1 + 0x20);
  }
  return;
}



/* Entry: 101093fbc; end: 101093fcb;  */

void FUN_101093fbc(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000101093fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 8))();
  return;
}



/* Entry: 101093fcc; end: 10109408b;  */

undefined8 FUN_101093fcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x10))();
  return param_1;
}



/* Entry: 10109408c; end: 10109417f;  */

uint * FUN_10109408c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar6 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_101094124;
  uVar5 = *(ulong *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (0xff < uVar7) {
      if (uVar7 >> 0x10 == 0) {
        uVar7 = (uint)*(ushort *)((long)param_1 + uVar5);
      }
      else {
        uVar7 = *(uint *)((long)param_1 + uVar5);
      }
      goto LAB_1010940bc;
    }
    if (1 < uVar7) goto LAB_1010940b8;
  }
  else {
LAB_1010940b8:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar5);
LAB_1010940bc:
    if (uVar7 != 0) {
      uVar1 = 0;
      if (uVar4 < 4) {
        uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
      }
      if (uVar4 != 0) {
        uVar3 = 4;
        if (uVar4 < 4) {
          uVar3 = uVar4;
        }
        if ((int)uVar3 < 3) {
          if (uVar3 == 1) {
            uVar5 = (ulong)(byte)*param_1;
          }
          else {
            uVar5 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar3 == 3) {
          uVar5 = (ulong)(uint3)*param_1;
        }
        else {
          uVar5 = (ulong)*param_1;
        }
      }
      return (uint *)(ulong)(uVar2 + ((uint)uVar5 | uVar1) + 1);
    }
  }
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_101094124:
                    /* WARNING: Could not recover jumptable at 0x000101094128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))();
  return param_1;
}



/* Entry: 101094180; end: 1010943f3;  */

void FUN_101094180(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  byte bVar8;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  uVar2 = *(uint *)(lVar4 + 0x54);
  lVar6 = *(long *)(lVar4 + 0x40);
  uVar5 = (uint)lVar6;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar8 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f))
            + 1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
  }
  else {
    bVar8 = 1;
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar6);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      func_0x000107c60ee4(param_1,lVar6);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + lVar6) = (char)iVar7;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + lVar6) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar6) = iVar7;
    }
  }
  else {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + lVar6) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + lVar6) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar6) = 0;
    }
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001010942c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x38))();
      return;
    }
  }
  return;
}



/* Entry: 1010943f4; end: 1010944cb;  */

void FUN_1010943f4(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,code *param_5,
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010944c8);
    (*pcVar2)();
  }
  lVar5 = 0;
  (*param_5)(0,uVar3,param_4);
  (*param_6)(param_1,param_2 + (long)*(int *)(lVar5 + 0x24),uVar3,param_4);
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010944cc);
  (*pcVar2)();
}



/* Entry: 1010944cc; end: 1010944df;  */

void FUN_1010944cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss30_copySequenceToContiguousArrayys0dE0Vy7ElementQzGxSTRzlF_11034ed28)();
  return;
}



/* Entry: 1010944e0; end: 1010946ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1010944e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined1 auStack_80 [8];
  long lStack_70;
  long lStack_68;
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112d59310,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59318,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d59320) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d59328) = 0;
  lVar4 = *(long *)(param_1 + _DAT_1130218f0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    *(long *)(unaff_x20 + _DAT_112d59330) = lVar4;
    func_0x000107c615f0();
    uVar5 = param_2;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar6 = 0;
    FUN_10109721c();
    lVar7 = lVar6;
    func_0x000107c610f8();
    *(undefined8 *)(lVar7 + _DAT_112d59440) = uVar5;
    *(undefined8 *)(lVar7 + _DAT_112d59448) = param_3;
    *(undefined8 *)(lVar7 + _DAT_112d59450) = param_4;
    puVar1 = (undefined8 *)(lVar7 + _DAT_112d59458);
    *puVar1 = 0x4152545349474552;
    puVar1[1] = 0xec0000004e4f4954;
    *(long *)(lVar7 + _DAT_112d59460) = lVar4;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar7;
    lStack_68 = lVar6;
    func_0x000107c615f0(lVar4);
    func_0x000107c61174(param_3);
    func_0x000107c615f0(param_4);
    plVar8 = &lStack_70;
    func_0x000107c61154(plVar8,puVar2);
    *(long **)(unaff_x20 + _DAT_112d59338) = plVar8;
    puVar9 = auStack_80;
    func_0x000107c61154(puVar9,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c615e8(param_4);
    func_0x000107c615e8(lVar4);
    return puVar9;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000002e,0x800000010ef23090,
                      "EnableFindFriendsUpsellFST/EnableFindFriendsUpsellCoordinator.swift",0x43,2,
                      0x4a,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101094700);
  (*pcVar3)();
}



/* Entry: 101094700; end: 1010947a3; -[_TtC26EnableFindFriendsUpsellFST34EnableFindFriendsUpsellCoordinator initWithFriendingComplianceServices:composerServices:userInfoServices:dismissLogger:] */

undefined8
FUN_101094700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  uVar1 = param_3;
  FUN_101094f88(param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  return uVar1;
}



/* Entry: 1010947a4; end: 1010947b7; -[_TtC26EnableFindFriendsUpsellFST34EnableFindFriendsUpsellCoordinator setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010947a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112d59310,param_3);
  return;
}



/* Entry: 1010947b8; end: 1010948eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010947b8(ulong param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((param_1 & 1) == 0) {
      lVar4 = param_2 + _DAT_112d59318;
      func_0x000107c61618();
      if (lVar4 != 0) {
        func_0x000107c5d7ac();
        func_0x000107c615e8(lVar4);
      }
      func_0x000107c61170(param_2);
    }
    else {
      pcVar1 = "presentTray()";
      func_0x0001000c10c0("presentTray()");
      func_0x000107c61180();
      puVar2 = &UNK_11037e948;
      func_0x000107c613fc(&UNK_11037e948,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_2);
      pcStack_58 = FUN_1010951bc;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_11037e960;
      ppuVar3 = &puStack_78;
      puStack_50 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e590(pcVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(pcVar1);
    }
  }
  return;
}



/* Entry: 1010948ec; end: 10109494f; -[_TtC26EnableFindFriendsUpsellFST34EnableFindFriendsUpsellCoordinator checkAndPresentWithDelegate:] */

void FUN_1010948ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c614f0(param_3);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101094eb8(param_3,param_1,uVar1);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101094950; end: 101094acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101094950(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1 + _DAT_112d59310;
    func_0x000107c61618();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = puVar1 + _DAT_112d59318;
      func_0x000107c61618();
      if (puVar2 != (undefined *)0x0) {
        func_0x000107c5d7a8();
        func_0x000107c615e8(puVar2);
      }
    }
    else {
      puVar3 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      uVar5 = *(undefined8 *)(puVar1 + _DAT_112d59320);
      *(undefined **)(puVar1 + _DAT_112d59320) = puVar3;
      func_0x000107c61174();
      func_0x000107c61170(uVar5);
      uVar5 = *(undefined8 *)(puVar1 + _DAT_112d59338);
      func_0x000107c61174();
      func_0x000107c61174(uVar5);
      func_0x000107c61174();
      puVar4 = puVar3;
      FUN_101094cd0(puVar3,puVar1,0,0,uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar1);
      uVar5 = *(undefined8 *)(puVar1 + _DAT_112d59328);
      *(undefined **)(puVar1 + _DAT_112d59328) = puVar4;
      func_0x000107c61174(puVar4);
      func_0x000107c61170(uVar5);
      FUN_1010951fc();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      puVar1 = puVar4;
    }
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 101094acc; end: 101094b2b; -[_TtC26EnableFindFriendsUpsellFST34EnableFindFriendsUpsellCoordinator init] */

void FUN_101094acc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EnableFindFriendsUpsellFST.EnableFindFriendsUpsellCoordinator",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101094af8);
  (*pcVar1)();
}



/* Entry: 101094b2c; end: 101094ba3; -[_TtC26EnableFindFriendsUpsellFST34EnableFindFriendsUpsellCoordinator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101094b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101094b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101094b5c) */
/* WARNING: Removing unreachable block (ram,0x000101094b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101094b2c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d59330));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d59338));
  return;
}



/* Entry: 101094ba4; end: 101094ba7; -[_TtC26EnableFindFriendsUpsellFST34EnableFindFriendsUpsellCoordinator handleTakeoverDisplayed] */

void FUN_101094ba4(void)

{
  return;
}



/* Entry: 101094ba8; end: 101094c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101094ba8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d59328);
  *(undefined8 *)(unaff_x20 + _DAT_112d59328) = 0;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d59320);
  *(undefined8 *)(unaff_x20 + _DAT_112d59320) = 0;
  func_0x000107c61170(uVar1);
  lVar2 = unaff_x20 + _DAT_112d59318;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c5d7a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 101094c14; end: 101094ca7; -[_TtC26EnableFindFriendsUpsellFST34EnableFindFriendsUpsellCoordinator handleAccepted] */

void FUN_101094c14(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101094ba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101094ca8; end: 101094ccf; -[_TtC26EnableFindFriendsUpsellFST34EnableFindFriendsUpsellCoordinator handleDismissed] */

void FUN_101094ca8(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101094c3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101094cd0; end: 101094eb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101094cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_70;
  long lStack_68;
  
  uVar11 = *(undefined8 *)(param_5 + _DAT_112d59440);
  uVar10 = *(undefined8 *)(param_5 + _DAT_112d59448);
  uVar8 = *(undefined8 *)(param_5 + _DAT_112d59450);
  uVar2 = *(undefined8 *)(param_5 + _DAT_112d59458);
  uVar3 = ((undefined8 *)(param_5 + _DAT_112d59458))[1];
  uVar9 = *(undefined8 *)(param_5 + _DAT_112d59460);
  lVar6 = 0;
  FUN_101096944();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar5 = _DAT_112d59368;
  func_0x000107c61614(lVar7 + _DAT_112d59368,0);
  *(undefined8 *)(lVar7 + _DAT_112d593a8) = 0;
  *(undefined8 *)(lVar7 + _DAT_112d59388) = 0;
  *(undefined8 *)(lVar7 + _DAT_112d59370) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112d59390);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar7 + _DAT_112d59398) = 0;
  *(undefined1 *)(lVar7 + _DAT_112d593a0) = 0;
  *(undefined8 *)(lVar7 + _DAT_112d593b8) = 0x407f400000000000;
  *(undefined8 *)(lVar7 + _DAT_112d593c0) = 0x4020000000000000;
  *(undefined8 *)(lVar7 + _DAT_112d593b0) = param_1;
  *(undefined8 *)(lVar7 + _DAT_112d593c8) = uVar11;
  *(undefined8 *)(lVar7 + _DAT_112d593d0) = uVar10;
  *(undefined8 *)(lVar7 + _DAT_112d593d8) = uVar8;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112d593e0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112d593e8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(lVar7 + _DAT_112d59378) = uVar9;
  func_0x000107c61604(lVar7 + lVar5,param_2);
  puVar4 = PTR_s_init_1125d9248;
  lStack_70 = lVar7;
  lStack_68 = lVar6;
  func_0x000107c61434(uVar3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar10);
  func_0x000107c615f0(uVar8);
  func_0x000107c61434(param_4);
  func_0x000107c615f0(uVar9);
  func_0x000107c61154(&lStack_70,puVar4);
  return;
}



/* Entry: 101094eb8; end: 101094f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101094eb8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c61604(param_2 + _DAT_112d59318,param_1);
  uVar3 = *(undefined8 *)(param_2 + _DAT_112d59330);
  puVar1 = &UNK_11037e948;
  func_0x000107c613fc(&UNK_11037e948,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_2);
  uStack_40 = 0x1010951e0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f3aa0;
  puStack_48 = &UNK_11037e988;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5ad4c(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101094f88; end: 101095177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101094f88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d59310,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59318,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d59320) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d59328) = 0;
  lVar4 = *(long *)(param_1 + _DAT_1130218f0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    *(long *)(unaff_x20 + _DAT_112d59330) = lVar4;
    func_0x000107c615f0();
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar5 = 0;
    FUN_10109721c();
    lVar6 = lVar5;
    func_0x000107c610f8();
    *(undefined8 *)(lVar6 + _DAT_112d59440) = param_2;
    *(undefined8 *)(lVar6 + _DAT_112d59448) = param_3;
    *(undefined8 *)(lVar6 + _DAT_112d59450) = param_4;
    puVar1 = (undefined8 *)(lVar6 + _DAT_112d59458);
    *puVar1 = 0x4152545349474552;
    puVar1[1] = 0xec0000004e4f4954;
    *(long *)(lVar6 + _DAT_112d59460) = lVar4;
    puVar2 = PTR_s_init_1125d9248;
    lStack_60 = lVar6;
    lStack_58 = lVar5;
    func_0x000107c615f0(lVar4);
    func_0x000107c61174(param_3);
    func_0x000107c615f0(param_4);
    plVar7 = &lStack_60;
    func_0x000107c61154(plVar7,puVar2);
    *(long **)(unaff_x20 + _DAT_112d59338) = plVar7;
    puVar8 = &stack0xffffffffffffff90;
    func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
    func_0x000107c615e8(lVar4);
    return puVar8;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000002e,0x800000010ef23090,
                      "EnableFindFriendsUpsellFST/EnableFindFriendsUpsellCoordinator.swift",0x43,2,
                      0x4a,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101095178);
  (*pcVar3)();
}



/* Entry: 101095178; end: 10109519b;  */

undefined8 FUN_101095178(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10109519c; end: 1010951bb;  */

void FUN_10109519c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ad2f8);
  return;
}



/* Entry: 1010951bc; end: 1010951fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010951bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1 + _DAT_112d59310;
    func_0x000107c61618();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = puVar1 + _DAT_112d59318;
      func_0x000107c61618();
      if (puVar2 != (undefined *)0x0) {
        func_0x000107c5d7a8();
        func_0x000107c615e8(puVar2);
      }
    }
    else {
      puVar3 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      uVar5 = *(undefined8 *)(puVar1 + _DAT_112d59320);
      *(undefined **)(puVar1 + _DAT_112d59320) = puVar3;
      func_0x000107c61174();
      func_0x000107c61170(uVar5);
      uVar5 = *(undefined8 *)(puVar1 + _DAT_112d59338);
      func_0x000107c61174();
      func_0x000107c61174(uVar5);
      func_0x000107c61174();
      puVar4 = puVar3;
      FUN_101094cd0(puVar3,puVar1,0,0,uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar1);
      uVar5 = *(undefined8 *)(puVar1 + _DAT_112d59328);
      *(undefined **)(puVar1 + _DAT_112d59328) = puVar4;
      func_0x000107c61174(puVar4);
      func_0x000107c61170(uVar5);
      FUN_1010951fc();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      puVar1 = puVar4;
    }
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1010951fc; end: 1010954b7;  */

/* WARNING: Possible PIC construction at 0x000101095478: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010951fc(double param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_101095844();
  if (lVar4 == 0) {
    lVar3 = unaff_x20 + _DAT_112d59368;
    func_0x000107c61618();
    if (lVar3 == 0) {
      return;
    }
    func_0x000107c445ec();
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d59370);
    *(long *)(unaff_x20 + _DAT_112d59370) = lVar4;
    func_0x000107c61174();
    func_0x000107c61170(uVar9);
    lVar5 = *(long *)(unaff_x20 + _DAT_112d59378);
    if (lVar5 == 0) {
      lVar10 = 0;
    }
    else {
      func_0x000107c5abb4();
      lVar10 = lVar5;
    }
    FUN_1010959d4();
    lVar6 = lVar5;
    func_0x000107c610f8();
    *(char *)(lVar6 + _DAT_112d59380) = (char)lVar10;
    plVar7 = &lStack_70;
    lStack_70 = lVar6;
    lStack_68 = lVar5;
    func_0x000107c61154(plVar7,PTR_s_initWithValdiView__1125f5a88,lVar4);
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d59388);
    *(long **)(unaff_x20 + _DAT_112d59388) = plVar7;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61170(uVar9);
    func_0x000107c5eea0(lVar11);
    func_0x000107c5ee8c();
    (**(code **)(lVar12 + 8))(lVar11,lVar3);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010954b0);
      (*pcVar2)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010954b4);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010954b8);
      (*pcVar2)();
    }
    plVar1 = (long *)(unaff_x20 + _DAT_112d59390);
    *plVar1 = (long)param_1;
    *(undefined1 *)(plVar1 + 1) = 0;
    *(undefined8 *)(unaff_x20 + _DAT_112d59398) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112d593a0) = 0;
    puVar8 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e84();
    func_0x000107c61170(plVar7);
    lVar3 = _DAT_112d593a8;
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d593a8);
    *(undefined **)(unaff_x20 + _DAT_112d593a8) = puVar8;
    func_0x000107c61170(uVar9);
    if ((((*(long *)(unaff_x20 + lVar3) != 0) &&
         (func_0x000107c539d4(0x4038000000000000), *(long *)(unaff_x20 + lVar3) != 0)) &&
        (func_0x000107c5a074(), *(long *)(unaff_x20 + lVar3) != 0)) &&
       (func_0x000107c4ef3c(0x3fe0000000000000), *(long *)(unaff_x20 + lVar3) != 0)) {
      func_0x000107c52aa4();
    }
    lVar3 = unaff_x20 + _DAT_112d59368;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61170(plVar7);
      func_0x000107c61170(lVar4);
      return;
    }
    func_0x000107c44668();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 1010954b8; end: 101095843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1010954b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112d59368;
  func_0x000107c61614(unaff_x20 + _DAT_112d59368,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d593a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d59388) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d59370) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d59390);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112d59398) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d593a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d593b8) = 0x407f400000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112d593c0) = 0x4020000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112d593b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d593c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d593d0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d593d8) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d593e0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d593e8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d59378) = param_10;
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  puVar4 = auStack_70;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return puVar4;
}



/* Entry: 101095844; end: 1010959d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101095844(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d593c8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126a6330;
      func_0x000107c610f8(PTR_PTR_1126a6330);
      func_0x000107c453e4();
      puVar6 = &UNK_11037e9e0;
      puVar4 = puVar6;
      func_0x000107c613fc(&UNK_11037e9e0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar5 = puVar6;
      func_0x000107c613fc(&UNK_11037e9e0,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      func_0x000107c613fc(&UNK_11037e9e0,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      func_0x000107c610f8(PTR_PTR_1126a6338);
      pcVar7 = FUN_101096964;
      FUN_1010966c0(FUN_101096964,puVar4,0x10109696c,puVar5,0x101096974,puVar6);
      puVar6 = PTR_PTR_1126a6340;
      func_0x000107c610f8(PTR_PTR_1126a6340);
      func_0x000107c61174(puVar3);
      func_0x000107c61174(pcVar7);
      func_0x000107c49520(puVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(pcVar7);
      func_0x000107c61170(pcVar7);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1010959d4; end: 1010959f3;  */

void FUN_1010959d4(void)

{
  func_0x000107c61168(&PTR_PTR_1127ad520);
  return;
}



/* Entry: 1010959f4; end: 101095a1b; -[_TtC26EnableFindFriendsUpsellFST35EnableFindFriendsUpsellFSTPresenter launchTakeover] */

void FUN_1010959f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010951fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101095a1c; end: 101095c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101095a1c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&puStack_90 - extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  lVar8 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar9 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar7 - extraout_x12;
  if (!SCARRY8(*(long *)(unaff_x20 + _DAT_112d59398),1)) {
    *(long *)(unaff_x20 + _DAT_112d59398) = *(long *)(unaff_x20 + _DAT_112d59398) + 1;
    func_0x000107c5edd0(lVar9,param_1,param_2);
    lVar2 = lVar9;
    (**(code **)(lVar13 + 0x30))(lVar9,1,lVar1);
    if ((int)lVar2 == 1) {
      func_0x0001000293e4(lVar9);
    }
    else {
      pcVar10 = *(code **)(lVar13 + 0x20);
      (*pcVar10)(lVar12,lVar9,lVar1);
      pcVar3 = "openLearnMoreURL(_:)";
      func_0x0001000c10c0("openLearnMoreURL(_:)");
      func_0x000107c61180();
      (**(code **)(lVar13 + 0x10))(lVar7,lVar12,lVar1);
      uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
      uVar11 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
      puVar4 = &UNK_11037ea80;
      func_0x000107c613fc(&UNK_11037ea80,uVar11 + lVar8,uVar6 | 7);
      (*pcVar10)(puVar4 + uVar11,lVar7,lVar1);
      pcStack_70 = FUN_101096998;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11037ea98;
      ppuVar5 = &puStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_68);
      func_0x000107c4e590(pcVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(pcVar3);
      (**(code **)(lVar13 + 8))(lVar12,lVar1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x101095c34);
  (*pcVar10)();
}



/* Entry: 101095c34; end: 101095d37;  */

/* WARNING: Possible PIC construction at 0x000101095ccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101095cd0) */

void FUN_101095c34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c5ed90();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar3 = 0;
  FUN_100dfa6ec(0);
  uVar4 = uVar3;
  FUN_100f33384();
  func_0x000107c5f9dc(puVar2,uVar3,PTR___sypN_11034f1a8 + 8,uVar4);
  func_0x000107c6142c(puVar2);
  func_0x000107c4de70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101095d38; end: 101095f53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101095d38(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112d593d0);
    if (lVar2 != 0) {
      func_0x000107c4f808();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126b15b0;
        func_0x000107c61168(PTR_PTR_1126b15b0);
        func_0x000107c42b14();
        func_0x000107c61180();
        puVar5 = &UNK_11037ebc0;
        func_0x000107c613fc(&UNK_11037ebc0,0x20,7);
        *(undefined8 *)(puVar5 + 0x10) = 0x656c62616e65;
        *(undefined8 *)(puVar5 + 0x18) = 0xe600000000000000;
        uStack_68 = 0x1010969ec;
        puStack_88 = puVar1;
        uStack_80 = 0x42000000;
        puStack_78 = (undefined *)0x101095cec;
        puStack_70 = &UNK_11037ebd8;
        ppuVar6 = &puStack_88;
        puStack_60 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_60);
        func_0x000107c5d5c0(lVar3);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(puVar4);
      }
    }
    FUN_101095f54(3);
    pcVar7 = "dismissTakeover()";
    func_0x0001000c10c0("dismissTakeover()");
    func_0x000107c61180();
    puVar5 = &UNK_11037eb70;
    func_0x000107c613fc(&UNK_11037eb70,0x18,7);
    *(long *)(puVar5 + 0x10) = param_1;
    uStack_68 = 0x101096a2c;
    puStack_88 = puVar1;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_11037eb88;
    ppuVar6 = &puStack_88;
    puStack_60 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar1 = puStack_60;
    func_0x000107c61174();
    func_0x000107c61574(puVar1);
    func_0x000107c4e590(pcVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(pcVar7);
    lVar2 = param_1 + _DAT_112d59368;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c445a8();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101095f54; end: 101096127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101095f54(double param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  if ((*(byte *)(unaff_x20 + _DAT_112d593a0) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112d593a0) = 1;
    plVar1 = (long *)(unaff_x20 + _DAT_112d59390);
    if ((char)plVar1[1] != '\x01') {
      lVar7 = *plVar1;
      func_0x000107c5eea0(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee8c();
      (**(code **)(lVar6 + 8))
                (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      param_1 = param_1 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10109611c);
        (*pcVar2)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101096120);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101096124);
        (*pcVar2)();
      }
      if (SBORROW8((long)param_1,lVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101096128);
        (*pcVar2)();
      }
    }
    lVar3 = *(long *)(unaff_x20 + _DAT_112d593d8);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d593e0);
      func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_112d593e0))[1]);
      if (((undefined8 *)(unaff_x20 + _DAT_112d593e8))[1] == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d593e8);
        func_0x000107c5fadc(uVar5);
      }
      func_0x000107c4bb68(lVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
    }
    *plVar1 = 0;
    *(undefined1 *)(plVar1 + 1) = 1;
  }
  return;
}



/* Entry: 101096128; end: 101096347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101096128(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112d593d0);
    if (lVar2 != 0) {
      func_0x000107c4f808();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126b15b0;
        func_0x000107c61168(PTR_PTR_1126b15b0);
        func_0x000107c4d6e0();
        func_0x000107c61180();
        puVar5 = &UNK_11037eb20;
        func_0x000107c613fc(&UNK_11037eb20,0x20,7);
        *(undefined8 *)(puVar5 + 0x10) = 0x656c6261736964;
        *(undefined8 *)(puVar5 + 0x18) = 0xe700000000000000;
        pcStack_68 = FUN_1010969c4;
        puStack_88 = puVar1;
        uStack_80 = 0x42000000;
        puStack_78 = (undefined *)0x101095cec;
        puStack_70 = &UNK_11037eb38;
        ppuVar6 = &puStack_88;
        puStack_60 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_60);
        func_0x000107c5d5c0(lVar3);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(puVar4);
      }
    }
    FUN_101095f54(4);
    pcVar7 = "dismissTakeover()";
    func_0x0001000c10c0("dismissTakeover()");
    func_0x000107c61180();
    puVar5 = &UNK_11037ead0;
    func_0x000107c613fc(&UNK_11037ead0,0x18,7);
    *(long *)(puVar5 + 0x10) = param_1;
    pcStack_68 = FUN_1010969c4;
    puStack_88 = puVar1;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_11037eae8;
    ppuVar6 = &puStack_88;
    puStack_60 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar1 = puStack_60;
    func_0x000107c61174();
    func_0x000107c61574(puVar1);
    func_0x000107c4e590(pcVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(pcVar7);
    lVar2 = param_1 + _DAT_112d59368;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c445ec();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}


