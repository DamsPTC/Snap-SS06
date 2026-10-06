/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000b41c8; end: 1000b421b;  */

void FUN_1000b41c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000b41a8(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000019;
  FUN_1000b421c(0xd000000000000019,0x800000010ef86f20);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000b421c; end: 1000b436f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b421c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puVar8;
  
  func_0x000107c614f0();
  lVar5 = _DAT_112daa298;
  uVar6 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(unaff_x20 + lVar5) = uVar6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112daa2a0);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112daa2a8);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar8 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c61168();
  func_0x000107c61434(param_2);
  func_0x000107c5ba34();
  func_0x000107c61180();
  uVar6 = param_2;
  func_0x000107c5fadc(param_1);
  func_0x000107c6142c(param_2);
  puVar7 = puVar8;
  func_0x000107c41238();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(param_1);
  if (puVar7 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    uVar6 = 0xf000000000000000;
  }
  else {
    puVar8 = puVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar7);
  }
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  *puVar1 = puVar8;
  puVar1[1] = uVar6;
  FUN_1000b44c0(uVar3,uVar4);
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000b4370; end: 1000b43e7; -[SCDirectoriesImpl initWithDirCreationBlock:] */

undefined1 * FUN_1000b4370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112703078;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000b43e8; end: 1000b4417; -[SCDirectoriesImpl documentDirWithName:error:] */

void FUN_1000b43e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000b4418; end: 1000b44bf;  */

void FUN_1000b4418(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    param_2 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = param_2;
    func_0x000107c5faec(param_2);
  }
  func_0x000107c6157c(uVar2);
  lVar3 = lVar4;
  (*pcVar1)(param_2,lVar4,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(lVar4);
  if (lVar3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2,lVar3);
    func_0x000107c6142c(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1000b44c0; end: 1000b44d3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1000b44c0(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1000b44d4; end: 1000b45fb;  */

undefined1  [16] FUN_1000b44d4(undefined8 param_1,long param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_1c0 [8];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [24];
  undefined8 auStack_178 [3];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [56];
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  puVar2 = PTR_PTR_1126b7f60;
  func_0x000107c61168();
  func_0x000107c44418();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar16 = 0;
  if (puVar2 == (undefined *)0x0) {
    uVar5 = uVar16;
    func_0x000107c61174(0);
    func_0x000107c5ed30();
    func_0x000107c61170(uVar5);
    func_0x000107c61654();
    if (param_3 == (undefined8 *)0x0) {
      func_0x000107c614ac();
    }
    else {
      uVar5 = uVar16;
      func_0x000107c5ed2c();
      func_0x000107c61104();
      *param_3 = uVar5;
      func_0x000107c614ac(uVar16);
    }
    puVar3 = (undefined *)0x0;
    param_2 = 0;
  }
  else {
    puVar3 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61174(0);
    func_0x000107c61170(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = puVar3;
    return auVar18;
  }
  func_0x000107c60e78();
  uStack_198 = *(undefined8 *)(param_2 + 0x18);
  uStack_1a0 = *(undefined8 *)(param_2 + 0x20);
  uStack_1b8 = *(undefined8 *)(param_2 + 0x28);
  puVar4 = (undefined8 *)0x112d36580;
  puStack_1a8 = extraout_x8;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar4[-1] + 0x40));
  puVar13 = auStack_1c0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)puVar13 - extraout_x12;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar5 = *puVar4;
  func_0x000107c61174(uVar5);
  uVar16 = 0xd000000000000027;
  FUN_1000a9a18(0xd000000000000027,0x800000010ef87210);
  uStack_1b0 = uVar16;
  func_0x000107c61170(uVar5);
  func_0x000107c61428(puVar4,auStack_e8,0,0);
  uVar16 = *puVar4;
  func_0x000107c61174(uVar16);
  uVar5 = 0xd000000000000012;
  FUN_1000a9a18(0xd000000000000012,0x800000010ef87240);
  func_0x000107c61170(uVar16);
  FUN_100083b20(&puStack_130);
  uVar16 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef87260);
  func_0x000107c3ebd4(puStack_130);
  func_0x000107c615e8(puStack_130);
  func_0x000107c61170(uVar16);
  func_0x000107c61428(puVar4,auStack_100,0,0);
  uVar16 = *puVar4;
  func_0x000107c61174(uVar16);
  FUN_1000aa0a8(uVar5);
  func_0x000107c61170(uVar16);
  puVar2 = PTR_PTR_1126b7870;
  func_0x000107c61168();
  func_0x000107c44354();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c5edb4(lVar14);
    func_0x000107c61170(puVar2);
  }
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar6 + -8);
  (**(code **)(lVar17 + 0x38))(lVar14,puVar2 == (undefined *)0x0,1,lVar6);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_110 = &UNK_1014e18a8;
  uStack_108 = 0;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0x42000000;
  puStack_120 = &UNK_1014e18cc;
  puStack_118 = &UNK_1103d0628;
  ppuVar7 = &puStack_130;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61428(puVar4,&puStack_130,0,0);
  uVar5 = *puVar4;
  func_0x000107c61174(uVar5);
  uVar16 = 0xd000000000000014;
  FUN_1000a9a18(0xd000000000000014,0x800000010ef87280);
  func_0x000107c61170(uVar5);
  FUN_100029394(lVar14,puVar13);
  func_0x000107c61174(puVar2);
  puVar3 = puVar2;
  func_0x0001000ad7c4();
  puVar8 = puVar13;
  (**(code **)(lVar17 + 0x30))(puVar13,1,lVar6);
  puVar15 = (undefined1 *)0x0;
  if ((int)puVar8 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar17 + 8))(puVar13,lVar6);
    puVar15 = puVar8;
  }
  puVar9 = PTR_PTR_1126a7530;
  func_0x000107c610f8();
  func_0x000107c46924();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar15);
  func_0x000107c61428(puVar4,auStack_148,0,0);
  uVar5 = *puVar4;
  func_0x000107c61174(uVar5);
  FUN_1000aa0a8(uVar16);
  func_0x000107c61170(uVar5);
  func_0x000107c61428(puVar4,auStack_160,0,0);
  uVar10 = *puVar4;
  func_0x000107c61174(uVar10);
  uVar16 = 0xd00000000000002d;
  FUN_1000a9a18(0xd00000000000002d,0x800000010ef872a0);
  func_0x000107c61170(uVar10);
  func_0x0001000ad7c4();
  uVar5 = uVar10;
  func_0x0001000ad7c4();
  if (puVar9 != (undefined *)0x0) {
    func_0x000107c61174(puVar9);
    FUN_100083b20(auStack_178);
    uVar11 = auStack_178[0];
    func_0x000107c400cc(auStack_178[0]);
    func_0x000107c61180();
    func_0x000107c615e8(auStack_178[0]);
    puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
    func_0x000107c4c12c();
    func_0x000107c61180();
    puVar12 = PTR_PTR_1126a7538;
    func_0x000107c610f8();
    func_0x000107c45f94();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar9);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(puVar3);
    *puStack_1a8 = puVar12;
    func_0x000107c61428(puVar4,auStack_178,0,0);
    uVar5 = *puVar4;
    func_0x000107c61174(uVar5);
    FUN_1000aa0a8(uVar16);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar5);
    func_0x0001000293e4(lVar14);
    puVar13 = auStack_190;
    func_0x000107c61428(puVar4,puVar13,0,0);
    uVar16 = *puVar4;
    func_0x000107c61174(uVar16);
    FUN_1000aa0a8(uStack_1b0);
    func_0x000107c61170(uVar16);
    auVar19._8_8_ = puVar13;
    auVar19._0_8_ = uVar16;
    return auVar19;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b4b80);
  (*pcVar1)();
}



/* Entry: 1000b45fc; end: 1000b4607;  */

void FUN_1000b45fc(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [24];
  undefined8 auStack_128 [3];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [56];
  
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar2 = (undefined8 *)0x112d36580;
  puStack_158 = param_1;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar2[-1] + 0x40));
  puVar17 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)puVar17 - extraout_x12;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000027;
  FUN_1000a9a18(0xd000000000000027,0x800000010ef87210);
  uStack_160 = uVar4;
  func_0x000107c61170(uVar3);
  func_0x000107c61428(puVar2,auStack_98,0,0);
  uVar4 = *puVar2;
  func_0x000107c61174(uVar4);
  uVar3 = 0xd000000000000012;
  FUN_1000a9a18(0xd000000000000012,0x800000010ef87240);
  func_0x000107c61170(uVar4);
  FUN_100083b20(&puStack_e0);
  uVar4 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef87260);
  func_0x000107c3ebd4(puStack_e0);
  func_0x000107c615e8(puStack_e0);
  func_0x000107c61170(uVar4);
  func_0x000107c61428(puVar2,auStack_b0,0,0);
  uVar4 = *puVar2;
  func_0x000107c61174(uVar4);
  FUN_1000aa0a8(uVar3);
  func_0x000107c61170(uVar4);
  puVar5 = PTR_PTR_1126b7870;
  func_0x000107c61168();
  func_0x000107c44354();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c5edb4(lVar15);
    func_0x000107c61170(puVar5);
  }
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar6 + -8);
  (**(code **)(lVar16 + 0x38))(lVar15,puVar5 == (undefined *)0x0,1,lVar6);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_c0 = &UNK_1014e18a8;
  uStack_b8 = 0;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0x42000000;
  puStack_d0 = &UNK_1014e18cc;
  puStack_c8 = &UNK_1103d0628;
  ppuVar7 = &puStack_e0;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61428(puVar2,&puStack_e0,0,0);
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000014;
  FUN_1000a9a18(0xd000000000000014,0x800000010ef87280);
  func_0x000107c61170(uVar3);
  FUN_100029394(lVar15,puVar17);
  func_0x000107c61174(puVar5);
  puVar8 = puVar5;
  func_0x0001000ad7c4();
  puVar9 = puVar17;
  (**(code **)(lVar16 + 0x30))(puVar17,1,lVar6);
  puVar14 = (undefined1 *)0x0;
  if ((int)puVar9 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar16 + 8))(puVar17,lVar6);
    puVar14 = puVar9;
  }
  puVar10 = PTR_PTR_1126a7530;
  func_0x000107c610f8();
  func_0x000107c46924();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar14);
  func_0x000107c61428(puVar2,auStack_f8,0,0);
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  FUN_1000aa0a8(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61428(puVar2,auStack_110,0,0);
  uVar11 = *puVar2;
  func_0x000107c61174(uVar11);
  uVar4 = 0xd00000000000002d;
  FUN_1000a9a18(0xd00000000000002d,0x800000010ef872a0);
  func_0x000107c61170(uVar11);
  func_0x0001000ad7c4();
  uVar3 = uVar11;
  func_0x0001000ad7c4();
  if (puVar10 != (undefined *)0x0) {
    func_0x000107c61174(puVar10);
    FUN_100083b20(auStack_128);
    uVar12 = auStack_128[0];
    func_0x000107c400cc(auStack_128[0]);
    func_0x000107c61180();
    func_0x000107c615e8(auStack_128[0]);
    puVar8 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
    func_0x000107c4c12c();
    func_0x000107c61180();
    puVar13 = PTR_PTR_1126a7538;
    func_0x000107c610f8();
    func_0x000107c45f94();
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar10);
    func_0x000107c615e8(uVar12);
    func_0x000107c61170(puVar8);
    *puStack_158 = puVar13;
    func_0x000107c61428(puVar2,auStack_128,0,0);
    uVar3 = *puVar2;
    func_0x000107c61174(uVar3);
    FUN_1000aa0a8(uVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(uVar3);
    func_0x0001000293e4(lVar15);
    func_0x000107c61428(puVar2,auStack_140,0,0);
    uVar4 = *puVar2;
    func_0x000107c61174(uVar4);
    FUN_1000aa0a8(uStack_160);
    func_0x000107c61170(uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b4b80);
  (*pcVar1)();
}



/* Entry: 1000b4608; end: 1000b4b7f;  */

void FUN_1000b4608(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [24];
  undefined8 auStack_128 [3];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [56];
  
  puVar2 = (undefined8 *)0x112d36580;
  uStack_168 = param_5;
  puStack_158 = param_1;
  uStack_150 = param_4;
  uStack_148 = param_3;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar2[-1] + 0x40));
  puVar17 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)puVar17 - extraout_x12;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000027;
  FUN_1000a9a18(0xd000000000000027,0x800000010ef87210);
  uStack_160 = uVar4;
  func_0x000107c61170(uVar3);
  func_0x000107c61428(puVar2,auStack_98,0,0);
  uVar4 = *puVar2;
  func_0x000107c61174(uVar4);
  uVar3 = 0xd000000000000012;
  FUN_1000a9a18(0xd000000000000012,0x800000010ef87240);
  func_0x000107c61170(uVar4);
  FUN_100083b20(&puStack_e0);
  uVar4 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef87260);
  func_0x000107c3ebd4(puStack_e0);
  func_0x000107c615e8(puStack_e0);
  func_0x000107c61170(uVar4);
  func_0x000107c61428(puVar2,auStack_b0,0,0);
  uVar4 = *puVar2;
  func_0x000107c61174(uVar4);
  FUN_1000aa0a8(uVar3);
  func_0x000107c61170(uVar4);
  puVar5 = PTR_PTR_1126b7870;
  func_0x000107c61168();
  func_0x000107c44354();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c5edb4(lVar15);
    func_0x000107c61170(puVar5);
  }
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar6 + -8);
  (**(code **)(lVar16 + 0x38))(lVar15,puVar5 == (undefined *)0x0,1,lVar6);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_c0 = &UNK_1014e18a8;
  uStack_b8 = 0;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0x42000000;
  puStack_d0 = &UNK_1014e18cc;
  puStack_c8 = &UNK_1103d0628;
  ppuVar7 = &puStack_e0;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61428(puVar2,&puStack_e0,0,0);
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000014;
  FUN_1000a9a18(0xd000000000000014,0x800000010ef87280);
  func_0x000107c61170(uVar3);
  FUN_100029394(lVar15,puVar17);
  func_0x000107c61174(puVar5);
  puVar8 = puVar5;
  func_0x0001000ad7c4();
  puVar9 = puVar17;
  (**(code **)(lVar16 + 0x30))(puVar17,1,lVar6);
  puVar14 = (undefined1 *)0x0;
  if ((int)puVar9 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar16 + 8))(puVar17,lVar6);
    puVar14 = puVar9;
  }
  puVar10 = PTR_PTR_1126a7530;
  func_0x000107c610f8();
  func_0x000107c46924();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar14);
  func_0x000107c61428(puVar2,auStack_f8,0,0);
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  FUN_1000aa0a8(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61428(puVar2,auStack_110,0,0);
  uVar11 = *puVar2;
  func_0x000107c61174(uVar11);
  uVar4 = 0xd00000000000002d;
  FUN_1000a9a18(0xd00000000000002d,0x800000010ef872a0);
  func_0x000107c61170(uVar11);
  func_0x0001000ad7c4();
  uVar3 = uVar11;
  func_0x0001000ad7c4();
  if (puVar10 != (undefined *)0x0) {
    func_0x000107c61174(puVar10);
    FUN_100083b20(auStack_128);
    uVar12 = auStack_128[0];
    func_0x000107c400cc(auStack_128[0]);
    func_0x000107c61180();
    func_0x000107c615e8(auStack_128[0]);
    puVar8 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
    func_0x000107c4c12c();
    func_0x000107c61180();
    puVar13 = PTR_PTR_1126a7538;
    func_0x000107c610f8();
    func_0x000107c45f94();
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar10);
    func_0x000107c615e8(uVar12);
    func_0x000107c61170(puVar8);
    *puStack_158 = puVar13;
    func_0x000107c61428(puVar2,auStack_128,0,0);
    uVar3 = *puVar2;
    func_0x000107c61174(uVar3);
    FUN_1000aa0a8(uVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(uVar3);
    func_0x0001000293e4(lVar15);
    func_0x000107c61428(puVar2,auStack_140,0,0);
    uVar4 = *puVar2;
    func_0x000107c61174(uVar4);
    FUN_1000aa0a8(uStack_160);
    func_0x000107c61170(uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b4b80);
  (*pcVar1)();
}



/* Entry: 1000b4b80; end: 1000b4c9b; +[SCGlobalDirectories globalDocumentDirectory:excludeFromBackup:error:] */

void FUN_1000b4b80(long param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_100088750();
  func_0x000107c61180();
  func_0x000107c3b8c8(param_1,param_2,param_3,param_3,param_5,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  if (param_1 == 0) {
    if (param_5 != (undefined8 *)0x0) {
      ppuVar2 = (undefined **)*param_5;
      func_0x000107c61174(ppuVar2);
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar3 = ppuVar2;
        func_0x000107c4b85c(ppuVar2);
        func_0x000107c61180();
        func_0x000107c61170(ppuVar2);
        goto LAB_1000b4c74;
      }
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_111026738;
  }
  else {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x000107c43478(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_1,1);
    func_0x000107c61180();
    if ((param_4 != 0) && (ppuVar2 = ppuVar3, func_0x000107c4a43c(), ((ulong)ppuVar2 & 1) == 0)) {
      func_0x000107c3d85c(ppuVar3);
    }
    func_0x000107c61174(param_1);
  }
LAB_1000b4c74:
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1000b4c9c; end: 1000b4caf;  */

void FUN_1000b4c9c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1000b4cb0; end: 1000b4dc3; -[SCFrameRateMonitor _resumeDisplayLink] */

/* WARNING: Possible PIC construction at 0x0001000b4cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b4d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b4d7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000b4cf4) */
/* WARNING: Removing unreachable block (ram,0x0001000b4d14) */
/* WARNING: Removing unreachable block (ram,0x0001000b4d08) */
/* WARNING: Removing unreachable block (ram,0x0001000b4d80) */
/* WARNING: Removing unreachable block (ram,0x0001000b4d44) */

void FUN_1000b4cb0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126dd6b8;
  func_0x000107c610f4();
  func_0x000107c45cd4();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1000b4dc4; end: 1000b502b; +[SCGlobalDirectories _globalDirectory:migratedFromSubdirectory:error:rootDirectory:] */

void FUN_1000b4dc4(ulong param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  uVar1 = param_1;
  func_0x000107c3b264(param_1,param_2,param_6);
  func_0x000107c61180();
  if (param_3 == 0) {
    func_0x000107c61174(uVar1);
    uVar7 = uVar1;
    goto LAB_1000b4fec;
  }
  lVar2 = param_3;
  func_0x000107c4adac();
  if (lVar2 == 0) {
    uVar7 = 0;
    goto LAB_1000b4fec;
  }
  uVar3 = uVar1;
  func_0x000107c5c168(uVar1,param_2,param_3);
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5173c();
  func_0x000107c61170(puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    if ((param_4 != 0) && (lVar2 = param_4, func_0x000107c4adac(), lVar2 != 0)) {
      uVar6 = param_6;
      func_0x000107c5c168(param_6,param_2,param_4);
      func_0x000107c61180();
      puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c5173c();
      func_0x000107c61170(puVar4);
      if ((int)puVar5 == 0) {
        func_0x000107c61170(uVar6);
      }
      else {
        func_0x000107c3bf3c(param_1,param_2,uVar6,uVar3);
        func_0x000107c61170(uVar6);
        if ((param_1 & 1) != 0) goto LAB_1000b4f34;
      }
    }
    puVar4 = PTR_PTR_1126b24e8;
    func_0x000107c409e8(PTR_PTR_1126b24e8,param_2,uVar3,1,0,param_5);
    if ((int)puVar4 != 0) goto LAB_1000b4f34;
    uVar7 = 0;
  }
  else {
LAB_1000b4f34:
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c51810(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c51810(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
      func_0x000107c61180();
      uVar7 = uVar1;
      func_0x000107c5c168(uVar1,param_2,puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      puVar4 = PTR_PTR_1126dbe20;
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x000107c43474(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar7);
      func_0x000107c61180();
      func_0x000107c4c4d0(puVar4,param_2,puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar7);
    }
    func_0x000107c61174(uVar3);
    uVar7 = uVar3;
  }
  func_0x000107c61170(uVar3);
LAB_1000b4fec:
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1000b502c; end: 1000b50a3; -[SCQueueWithCapacity initWithCapacity:] */

undefined1 * FUN_1000b502c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706180;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610f4();
    func_0x000107c45cd4();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000b50a4; end: 1000b51c3; -[SCAppStartExperimentReaderRepository initWithFilePathURL:allowedConfigs:configMetric:loginSyncUpdateEnabled:] */

undefined1 *
FUN_1000b50a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_11270b820;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_6;
    uVar2 = 0;
    func_0x000107c60f4c(0,0x11,0);
    func_0x000107c61180();
    puVar3 = &UNK_10f7c3d12;
    func_0x000107c60f50(&UNK_10f7c3d12,uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000b51c4; end: 1000b5353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b51c4(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long alStack_98 [3];
  undefined8 auStack_80 [4];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *param_2;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000022;
  FUN_1000a9a18(0xd000000000000022,0x800000010ef86fa0);
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  func_0x00010006a044(0);
  FUN_1000b5354();
  FUN_100083b20(alStack_98);
  uVar7 = *(undefined8 *)(alStack_98[0] + _DAT_112daa260);
  func_0x000107c615f0(uVar7);
  func_0x000107c61170(alStack_98[0]);
  FUN_100083b20(auStack_80);
  lVar4 = alStack_98[0];
  func_0x0001000ad7c4();
  lVar5 = lVar4;
  func_0x0001000ad7c4();
  puVar6 = PTR_PTR_1126a7528;
  func_0x000107c610f8();
  func_0x000107c47e38();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c615e8(auStack_80[0]);
  func_0x000107c615e8(uVar7);
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c615e8(uVar2);
    *param_1 = puVar6;
    func_0x000107c61428(param_2,alStack_98,0,0);
    uVar2 = *param_2;
    func_0x000107c61174(uVar2);
    FUN_1000aa0a8(uVar3);
    func_0x000107c61170(uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b5354);
  (*pcVar1)();
}



/* Entry: 1000b5354; end: 1000b5393;  */

void FUN_1000b5354(void)

{
  if (lRam0000000113084228 != -1) {
    func_0x000107c61568(0x113084228,0x10006a064);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uRam0000000113813c18);
  return;
}



/* Entry: 1000b5394; end: 1000b539b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b5394(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x20;
  undefined8 auStack_80 [3];
  long lStack_68;
  long lStack_60;
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar1 = *unaff_x20;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000029;
  FUN_1000a9a18(0xd000000000000029,0x800000010ef86fd0);
  func_0x000107c61170(uVar1);
  FUN_100083b20(auStack_80);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef87000);
  uVar1 = auStack_80[0];
  func_0x000107c4e60c();
  func_0x000107c61180();
  func_0x000107c615e8(auStack_80[0]);
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126b7810;
  func_0x000107c610f8();
  func_0x000107c48700();
  lVar5 = 0;
  FUN_1000933d4();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112daa260) = uVar1;
  *(undefined **)(lVar6 + _DAT_112daa268) = puVar4;
  plVar7 = &lStack_68;
  lStack_68 = lVar6;
  lStack_60 = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  *param_1 = (long)plVar7;
  func_0x000107c61428(unaff_x20,auStack_80,0,0);
  uVar1 = *unaff_x20;
  func_0x000107c61174(uVar1);
  FUN_1000aa0a8(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1000b539c; end: 1000b5517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b539c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 auStack_80 [3];
  long lStack_68;
  long lStack_60;
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar1 = *param_2;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000029;
  FUN_1000a9a18(0xd000000000000029,0x800000010ef86fd0);
  func_0x000107c61170(uVar1);
  FUN_100083b20(auStack_80);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef87000);
  uVar1 = auStack_80[0];
  func_0x000107c4e60c();
  func_0x000107c61180();
  func_0x000107c615e8(auStack_80[0]);
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126b7810;
  func_0x000107c610f8();
  func_0x000107c48700();
  lVar5 = 0;
  FUN_1000933d4();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112daa260) = uVar1;
  *(undefined **)(lVar6 + _DAT_112daa268) = puVar4;
  plVar7 = &lStack_68;
  lStack_68 = lVar6;
  lStack_60 = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  *param_1 = (long)plVar7;
  func_0x000107c61428(param_2,auStack_80,0,0);
  uVar1 = *param_2;
  func_0x000107c61174(uVar1);
  FUN_1000aa0a8(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1000b5518; end: 1000b5547;  */

void FUN_1000b5518(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126adcb8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 1000b5548; end: 1000b5613; -[SCQueuePerformerProvider performerWithLabel:qualityOfService:type:context:] */

void FUN_1000b5548(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  puVar3 = PTR___dispatch_queue_attr_concurrent_11034be28;
  if (param_4 - 1U < 4) {
    uVar2 = *(undefined4 *)(&UNK_10e554090 + (param_4 - 1U) * 4);
  }
  else {
    uVar2 = 0x21;
  }
  if (param_5 == 1) {
    func_0x000107c61174(PTR___dispatch_queue_attr_concurrent_11034be28);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  FUN_1000b5614(param_6);
  func_0x000107c470d0(puVar1,param_2,param_3,uVar2,puVar3,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1000b5614; end: 1000b5637;  */

undefined8 FUN_1000b5614(long param_1)

{
  if (param_1 - 1U < 0x38) {
    return *(undefined8 *)(&UNK_10e553ed0 + (param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 1000b5638; end: 1000b56c3; +[SCGlobalDirectories _createGlobalScopedDirectoryForRoot:] */

void FUN_1000b5638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c5c168(param_3,param_2,&PTR____CFConstantStringClassReference_1110266b8);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c43418();
  func_0x000107c61170(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000107c409e8(PTR_PTR_1126b24e8,param_2,param_3,1,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1000b56c4; end: 1000b5737; -[SCConfigLRUCache initWithSizeLimit:] */

undefined1 * FUN_1000b56c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7928;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b7800;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c539f8(*(undefined8 *)((long)puVar1 + 8));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000b5738; end: 1000b57b3; -[SCLRUCache init] */

undefined1 * FUN_1000b5738(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706170;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000b57b4; end: 1000b57c3; -[SCLRUCache setCountLimit:] */

void FUN_1000b57b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be0b650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__evictObjectsForCostChange_count_112560730,0,0);
  return;
}



/* Entry: 1000b57c4; end: 1000b5937; -[SCLRUCache _evictObjectsForCostChange:countChange:] */

void FUN_1000b57c4(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(param_1 + 0x18);
  do {
    if (lVar5 == 0) {
      return;
    }
    uVar1 = param_1;
    func_0x000107c5ccbc();
    if (uVar1 == 0) {
LAB_1000b5820:
      uVar1 = param_1;
      func_0x000107c40814();
      if (uVar1 == 0) {
        return;
      }
      uVar1 = param_1;
      func_0x000107c40808();
      uVar2 = param_1;
      func_0x000107c40814();
      if (uVar1 + param_4 <= uVar2) {
        return;
      }
    }
    else {
      uVar1 = param_1;
      func_0x000107c5ccb8();
      uVar2 = param_1;
      func_0x000107c5ccbc();
      if (uVar1 + param_3 <= uVar2) goto LAB_1000b5820;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c61174(uVar6);
    uVar3 = uVar6;
    func_0x000107c4a8c4(uVar6);
    func_0x000107c61180();
    func_0x000107c4ff88(param_1);
    func_0x000107c61170(uVar3);
    uVar1 = param_1;
    func_0x000107c4168c();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c61164();
    func_0x000107c61170(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_1;
      func_0x000107c4168c(param_1);
      func_0x000107c61180();
      uVar3 = uVar6;
      func_0x000107c5dc0c(uVar6);
      func_0x000107c61180();
      uVar4 = uVar6;
      func_0x000107c4a8c4(uVar6);
      func_0x000107c61180();
      func_0x000107c3eee4(uVar1);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar1);
    }
    func_0x000107c61170(uVar6);
    lVar5 = *(long *)(param_1 + 0x18);
  } while( true );
}



/* Entry: 1000b5938; end: 1000b593f;  */

void FUN_1000b5938(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  puVar2 = PTR_PTR_1126a7550;
  func_0x000107c610f8();
  func_0x000107c46bdc();
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uStack_38);
  *param_1 = puVar2;
  return;
}



/* Entry: 1000b5940; end: 1000b59bb;  */

void FUN_1000b5940(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  func_0x0001000ad7c4();
  FUN_100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126a7550;
  func_0x000107c610f8();
  func_0x000107c46bdc();
  func_0x000107c61170(param_2);
  func_0x000107c615e8(uStack_38);
  *param_1 = puVar1;
  return;
}



/* Entry: 1000b59bc; end: 1000b5aa3; -[SCCircumstanceEngineReadinessMetricEmitterImpl initWithGrapheneRegistry:performerProvider:] */

undefined1 *
FUN_1000b59bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e7960;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    uVar3 = param_4;
    func_0x000107c4e60c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_3;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000b5aa4; end: 1000b5acf;  */

void FUN_1000b5aa4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000b5ad0; end: 1000b5c0f; -[SCConfigRepositoryNetworkDefaultImpl initWithPerformer:readinessMetricEmitter:configMetric:noDepSpectrum:heuristicRecoveryManager:] */

undefined1 *
FUN_1000b5ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126e8150;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b86d8;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000b5c10; end: 1000b5c4b;  */

void FUN_1000b5c10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000b5c4c; end: 1000b5c73; -[SCConfigRepositoryNetworkDefaultImpl configPerformer] */

void FUN_1000b5c4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000b5c74; end: 1000b5fdb; -[SCConfigRepository initWithConfigMetric:preferences:appStartExperimentReaderRepository:performer:bundle:fileSystemDirectoryPath:] */

undefined8 *
FUN_1000b5c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 auStack_98 [2];
  char cStack_81;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_1126e7938;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61174(param_6);
    uVar4 = puVar3[1];
    puVar3[1] = param_6;
    func_0x000107c61170(uVar4);
    uVar4 = param_4;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar11 = puVar3[4];
    puVar3[4] = uVar4;
    func_0x000107c61170(uVar11);
    *(undefined1 *)(puVar3 + 9) = 0;
    func_0x000107c61174(param_3);
    uVar4 = puVar3[2];
    puVar3[2] = param_3;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_5);
    uVar4 = puVar3[3];
    puVar3[3] = param_5;
    func_0x000107c61170(uVar4);
    puVar5 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar4 = puVar3[5];
    puVar3[5] = puVar5;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_7);
    lVar6 = puVar3[6];
    puVar3[6] = param_7;
    func_0x000107c61170();
    if (param_8 == 0) {
      FUN_100088750();
      func_0x000107c61180();
      lVar7 = lVar6;
      func_0x000107c5c168();
      func_0x000107c61180();
      lVar12 = puVar3[8];
      puVar3[8] = lVar7;
      func_0x000107c61170(lVar12);
    }
    else {
      func_0x000107c61174(param_8);
      lVar6 = puVar3[8];
      puVar3[8] = param_8;
    }
    func_0x000107c61170(lVar6);
    pcVar8 = "CircumstanceEngineInit:ConfigRepository:FileSystem";
    FUN_1000ba800("CircumstanceEngineInit:ConfigRepository:FileSystem");
    uVar4 = 0x1e8;
    func_0x000107c60e20();
    plVar9 = (long *)0x20;
    func_0x000107c60e20();
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_DAT_11087bbd0;
    plVar10 = plVar9;
    FUN_100077ef8();
    plStack_80 = plVar9 + 3;
    *plStack_80 = (long)plVar10;
    uVar11 = puVar3[8];
    plStack_78 = plVar9;
    func_0x000107c3ac4c(uVar11);
    FUN_10002b838(auStack_98,uVar11);
    FUN_1000cb5f4(uVar4,&plStack_80,auStack_98);
    puVar3[7] = uVar4;
    if (cStack_81 < '\0') {
      func_0x000107c60e14(auStack_98[0]);
    }
    plVar10 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar9 = plStack_78 + 1;
      do {
        lVar6 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        func_0x000107c60d68(plVar10);
      }
    }
    func_0x0001000e2a84(pcVar8);
    func_0x000107c3bee4(puVar3);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar3;
}



/* Entry: 1000b5fdc; end: 1000b5ffb;  */

void FUN_1000b5fdc(void)

{
  func_0x000107c61168(&PTR_PTR_1129bb600);
  return;
}



/* Entry: 1000b5ffc; end: 1000b60db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b5ffc(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_1000b5fdc();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_11307ccd0) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307ccd8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307cce0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307cce8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307ccf0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11307ccf8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(lVar4 + _DAT_11307cd00) = 2;
  *(undefined1 *)(lVar4 + _DAT_11307cd08) = 2;
  plVar2 = (long *)(lVar4 + _DAT_11307cd10);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 1) = 0;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000b60dc; end: 1000b60f3; +[SCFrameInfo didChangeDisplayStateWithState:] */

void FUN_1000b60dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1000b5ffc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000b60f4; end: 1000b614b; -[SCFrameRateMonitor _notifyListeners:] */

/* WARNING: Possible PIC construction at 0x0001000b6128: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000b612c) */

void FUN_1000b60f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000b614c; end: 1000b615b; -[SCPublishSubject next:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b614c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796808),PTR_s_next__112614028);
  return;
}



/* Entry: 1000b615c; end: 1000b6187;  */

void FUN_1000b615c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000b6188; end: 1000b618f;  */

void FUN_1000b6188(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c3e610();
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000b6190; end: 1000b61eb;  */

void FUN_1000b6190(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c3e610();
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000b61ec; end: 1000b6213; -[SCFrameRateMonitor badFrameRateStatsTracker] */

void FUN_1000b61ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000b6214; end: 1000b627b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b6214(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_11307cc98) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307cca0) = param_2;
  FUN_1000a0ea8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000b627c; end: 1000b62a3; -[SCFrameRateMonitor frameInfoObservable] */

void FUN_1000b627c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000b62a4; end: 1000b62a7;  */

void FUN_1000b62a4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x113813670,auStack_48,1,0);
  uVar5 = plRam0000000113813670;
  plVar2 = param_1;
  plRam0000000113813670 = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar5);
  if (param_1 != (long *)0x0) {
    FUN_1000285a8(0x112da1598,&UNK_10d9d0cd0);
    plVar3 = plVar2;
    func_0x0001000b637c();
    puVar4 = &UNK_100c7bab0;
    uVar5 = 0;
    (**(code **)(*plVar3 + 0x60))();
    func_0x000107c61574(plVar3);
    puVar1 = puRam000000011307c840;
    puRam000000011307c840 = puVar4;
    uRam000000011307c848 = uVar5;
    func_0x000107c61170(plVar2);
    func_0x000107c615e8(puVar1);
  }
  return;
}



/* Entry: 1000b62a8; end: 1000b63f3;  */

void FUN_1000b62a8(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x113813670,auStack_48,1,0);
  uVar5 = plRam0000000113813670;
  plVar2 = param_1;
  plRam0000000113813670 = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar5);
  if (param_1 != (long *)0x0) {
    FUN_1000285a8(0x112da1598,&UNK_10d9d0cd0);
    plVar3 = plVar2;
    func_0x0001000b637c();
    puVar4 = &UNK_100c7bab0;
    uVar5 = 0;
    (**(code **)(*plVar3 + 0x60))();
    func_0x000107c61574(plVar3);
    puVar1 = puRam000000011307c840;
    puRam000000011307c840 = puVar4;
    uRam000000011307c848 = uVar5;
    func_0x000107c61170(plVar2);
    func_0x000107c615e8(puVar1);
  }
  return;
}



/* Entry: 1000b63f4; end: 1000b63ff;  */

void FUN_1000b63f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e82180c);
  return;
}



/* Entry: 1000b6400; end: 1000b6457;  */

void FUN_1000b6400(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1000b63f4(0,*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  FUN_1000b64ac(param_1,param_2);
  return;
}



/* Entry: 1000b6458; end: 1000b645b;  */

void FUN_1000b6458(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1000b645c; end: 1000b64ab;  */

void FUN_1000b645c(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0x90);
  return;
}



/* Entry: 1000b64ac; end: 1000b64f7;  */

long * FUN_1000b64ac(long param_1,long param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_100087590(0,*(undefined8 *)(*unaff_x20 + 0x88));
  func_0x000100087628();
  unaff_x20[3] = param_2;
  unaff_x20[4] = lVar1;
  unaff_x20[2] = param_1;
  return unaff_x20;
}



/* Entry: 1000b64f8; end: 1000b6503;  */

void FUN_1000b64f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e821a24);
  return;
}



/* Entry: 1000b6504; end: 1000b65c3;  */

undefined1  [16] FUN_1000b6504(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *unaff_x20;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_48;
  
  uVar1 = 0;
  FUN_1000b64f8(0,*(undefined8 *)(*unaff_x20 + 0x50));
  func_0x000107c6157c(param_2);
  FUN_1000b6644(param_1,param_2,&UNK_104886b78,0);
  pcVar4 = *(code **)(*unaff_x20 + 0x58);
  puVar2 = &DAT_10dd3c740;
  uStack_48 = param_1;
  func_0x000107c61520(&DAT_10dd3c740,uVar1);
  puVar3 = &uStack_48;
  (*pcVar4)(puVar3,uVar1,puVar2);
  func_0x000107c61574(param_1);
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = puVar3;
  return auVar5;
}



/* Entry: 1000b65c4; end: 1000b65c7;  */

void FUN_1000b65c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1000b65c8; end: 1000b6643;  */

void FUN_1000b65c8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___syycWV_11034f1c0 + 0x40;
    puStack_28 = puStack_30;
    func_0x000107c61524(param_1,0,3,&lStack_38,param_1 + 0x58);
  }
  return;
}



/* Entry: 1000b6644; end: 1000b66c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1000b6644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c5eec4(unaff_x20 + _DAT_1138154d8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130966f8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113096700);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return unaff_x20;
}



/* Entry: 1000b66c4; end: 1000b66cf;  */

void FUN_1000b66c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e821744);
  return;
}



/* Entry: 1000b66d0; end: 1000b673b;  */

void FUN_1000b66d0(void)

{
  long *unaff_x20;
  
  FUN_1000b66c4(0,*(undefined8 *)(*unaff_x20 + 0x50));
  func_0x000107c6157c();
  FUN_1000b6858();
  return;
}



/* Entry: 1000b673c; end: 1000b680b;  */

void FUN_1000b673c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  uVar2 = param_1;
  uVar4 = param_2;
  FUN_1000b66d0();
  FUN_1000b69f8(param_1,param_2,param_3);
  pcVar1 = (code *)unaff_x20[2];
  FUN_1000876dc(0,*(undefined8 *)(lVar5 + 0x88));
  FUN_1000878a0(param_1,param_2,param_3);
  uVar3 = param_1;
  (*pcVar1)();
  func_0x000107c61574(param_1);
  lVar5 = 0;
  FUN_1000b6d5c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar3;
  *(undefined8 *)(lVar5 + 0x18) = param_2;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  return;
}



/* Entry: 1000b680c; end: 1000b680f;  */

void FUN_1000b680c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1000b6810; end: 1000b6857;  */

void FUN_1000b6810(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = &UNK_10dd3c508;
  puStack_18 = &UNK_10dd3c520;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0x58);
  return;
}



/* Entry: 1000b6858; end: 1000b693b;  */

void FUN_1000b6858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c613fc();
  func_0x0001000b68b8(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1000b693c; end: 1000b69f7;  */

void FUN_1000b693c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xff;
  func_0x000107c614b8(0xff,param_2,param_1,&UNK_10e821b74,&UNK_10e821b7c);
  FUN_1000876dc(0,uVar1);
  func_0x000107c613fc();
  FUN_1000878f0();
  return;
}



/* Entry: 1000b69f8; end: 1000b6a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b69f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_2;
  uStack_48 = param_3;
  FUN_100087bd4(*(undefined8 *)(unaff_x20 + _DAT_113096858),FUN_1000b6af8,auStack_60,
                PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1000b6a04; end: 1000b6a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b6a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_2;
  uStack_48 = param_3;
  FUN_100087bd4(*(undefined8 *)(unaff_x20 + _DAT_113096858),param_4,auStack_60,
                PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1000b6a60; end: 1000b6af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b6a60(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  lVar3 = *param_1;
  FUN_1000b693c(param_3,param_4);
  uStack_38 = param_3;
  func_0x000107c61428((long)param_1 + _DAT_113096860,auStack_50,0x21,0);
  uVar1 = 0xff;
  FUN_1000876dc(0xff,*(undefined8 *)(lVar3 + 0x50));
  uVar2 = 0;
  func_0x000107c5fc80(0,uVar1);
  func_0x000107c5fc78(&uStack_38,uVar2);
  func_0x000107c614a8(auStack_50);
  return;
}



/* Entry: 1000b6af8; end: 1000b6b13;  */

void FUN_1000b6af8(void)

{
  long unaff_x20;
  
  FUN_1000b6a60(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1000b6b14; end: 1000b6c83;  */

undefined1  [16] FUN_1000b6b14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &UNK_1107a71c8;
  func_0x000107c613fc(&UNK_1107a71c8,0x18,7);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1000d0bf8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)0x1000d0bb0;
  puStack_68 = &UNK_1107a71e0;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  uVar1 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  pcStack_60 = (code *)&UNK_1048773a0;
  puStack_80 = puVar5;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1000f6b44;
  puStack_68 = &UNK_1107a7208;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  uVar1 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c5c324();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  FUN_1000b6d30(0);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar2);
  puVar5 = &UNK_100c7c434;
  FUN_1000b6d50(&UNK_100c7c434,puVar2);
  func_0x000107c61574(puVar2);
  auVar7._8_8_ = &PTR_DAT_1107aaa40;
  auVar7._0_8_ = puVar5;
  return auVar7;
}



/* Entry: 1000b6c84; end: 1000b6c9f;  */

void FUN_1000b6c84(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1000b6ca0; end: 1000b6d2f; -[SCObservable subscribeOnNext:onComplete:] */

void FUN_1000b6ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df718;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47abc();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c5c310(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1000b6d30; end: 1000b6d4f;  */

void FUN_1000b6d30(void)

{
  func_0x000107c61168(&PTR_PTR_113095fd8);
  return;
}



/* Entry: 1000b6d50; end: 1000b6d5b;  */

void FUN_1000b6d50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1000b6d5c; end: 1000b6d7b;  */

void FUN_1000b6d5c(void)

{
  func_0x000107c61168(&PTR_PTR_113096148);
  return;
}



/* Entry: 1000b6d7c; end: 1000b6d83;  */

void FUN_1000b6d7c(void)

{
  return;
}



/* Entry: 1000b6d84; end: 1000b6db7;  */

long FUN_1000b6d84(long param_1)

{
  FUN_1000b6d7c();
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x20));
  return param_1;
}



/* Entry: 1000b6db8; end: 1000b6df7;  */

void FUN_1000b6db8(undefined8 param_1)

{
  FUN_1000b6d84();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x28,7);
  return;
}



/* Entry: 1000b6df8; end: 1000b6e57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b6df8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_1138154e0;
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_113096858));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_113096860));
  return;
}



/* Entry: 1000b6e58; end: 1000b6ea7;  */

void FUN_1000b6e58(void)

{
  FUN_1000b6df8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1000b6ea8; end: 1000b6f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b6ea8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_1138154e8;
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_113096910 + 8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_113096918 + 8));
  return;
}



/* Entry: 1000b6f10; end: 1000b6f33;  */

void FUN_1000b6f10(void)

{
  FUN_1000b6ea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1000b6f34; end: 1000b6f3b;  */

void FUN_1000b6f34(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000b6f3c; end: 1000b6f8b;  */

void FUN_1000b6f3c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000b6f8c; end: 1000b6fb7;  */

void FUN_1000b6f8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000b6fb8; end: 1000b6fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b6fb8(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309bdb0) = 10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309bdc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000b6fc0; end: 1000b70b7;  */

void FUN_1000b6fc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1000b7378(uStack_48);
  func_0x0001000ab060(0);
  FUN_100079360(0);
  uVar1 = 0;
  FUN_1000ac07c(0);
  FUN_1000b73a4();
  uVar2 = uVar1;
  FUN_1000ac118();
  func_0x000107c61170(uVar1);
  puVar3 = &UNK_1103cda68;
  func_0x000107c613fc(&UNK_1103cda68,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uStack_48;
  func_0x000107c615f0(uStack_48);
  uVar1 = uVar2;
  FUN_1000ab368(uVar2,param_1,0,0,FUN_1000b90b8,puVar3);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 1000b70b8; end: 1000b70bf;  */

void FUN_1000b70b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1000b70c0();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  uVar3 = uVar1;
  FUN_1000b714c(uVar1,uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 1000b70c0; end: 1000b70df;  */

void FUN_1000b70c0(void)

{
  func_0x000107c61168(&PTR_PTR_1127d9a78);
  return;
}



/* Entry: 1000b70e0; end: 1000b714b;  */

void FUN_1000b70e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_1000b70c0();
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar1 = param_2;
  FUN_1000b714c(param_2,param_3);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000b714c; end: 1000b721b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b714c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112da2128) = param_1;
  func_0x000107c6157c(param_1);
  FUN_100083b20(&uStack_48);
  uVar1 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef846f0);
  uVar2 = uStack_48;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(uVar1);
  *(char *)(unaff_x20 + _DAT_112da2140) = (char)uVar2;
  func_0x000107c61154(&stack0xffffffffffffffa8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000b721c; end: 1000b734b; -[SCCrashAppStateTracker setUpAppStateMappingWithInitialState:] */

/* WARNING: Possible PIC construction at 0x0001000b7298: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000b729c) */
/* WARNING: Removing unreachable block (ram,0x0001000b72c8) */
/* WARNING: Removing unreachable block (ram,0x0001000b72f4) */
/* WARNING: Removing unreachable block (ram,0x0001000b7324) */
/* WARNING: Removing unreachable block (ram,0x0001000b72d8) */
/* WARNING: Removing unreachable block (ram,0x0001000b72e0) */

void FUN_1000b721c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c3c8fc();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    func_0x000107c61180();
    func_0x000107c5c174(param_1);
    func_0x000107c61180();
    func_0x000107c409e0(puVar1,param_2,param_1,1,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1000b734c; end: 1000b7377;  */

void FUN_1000b734c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000b7378; end: 1000b73a3;  */

void FUN_1000b7378(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = uRam00000001137fe060;
  uRam00000001137fe060 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000b73a4; end: 1000b73bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b73a4(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309bdb0) = 9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309bdc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000b73bc; end: 1000b73db;  */

void FUN_1000b73bc(void)

{
  func_0x000107c61168(&PTR_PTR_1129e1360);
  return;
}



/* Entry: 1000b73dc; end: 1000b73e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b73dc(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309b330) = 2;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000b73e4; end: 1000b742f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b73e4(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309b330) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000b7430; end: 1000b7433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b7430(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_100079360();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 0xe;
  *(undefined8 *)(lVar3 + _DAT_11309ac60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc8) = 0;
  *(long *)(lVar3 + _DAT_11309acd0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309acd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad00) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad18) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad30) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad38) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad40) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad48) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad50) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad58) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309adb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1000b7434; end: 1000b7697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b7434(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_100079360();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 0xe;
  *(undefined8 *)(lVar3 + _DAT_11309ac60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc8) = 0;
  *(long *)(lVar3 + _DAT_11309acd0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309acd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad00) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad18) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad30) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad38) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad40) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad48) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad50) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad58) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309adb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}


