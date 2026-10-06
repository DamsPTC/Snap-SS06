/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b6d4fc; end: 102b6d5b7;  */

/* WARNING: Possible PIC construction at 0x000102b6d598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b6d59c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6d4fc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ef9168);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_1105a4380;
  func_0x000107c613fc(&UNK_1105a4380,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1105a43d0;
  func_0x000107c613fc(&UNK_1105a43d0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(FUN_102b6eba4,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102b6d5b8; end: 102b6d61b;  */

void FUN_102b6d5b8(undefined8 param_1,long param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102b6d6ec(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102b6d61c; end: 102b6d6eb; -[SCPlainBuffersDataSource updateFramesPerSecond:] */

/* WARNING: Possible PIC construction at 0x000102b6d6c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b6d6c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6d61c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + _DAT_112ef9168);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_1105a4380;
  func_0x000107c613fc(&UNK_1105a4380,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_2);
  puVar2 = &UNK_1105a4438;
  func_0x000107c613fc(&UNK_1105a4438,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x102b6eed8,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102b6d6ec; end: 102b6d9e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6d6ec(double param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 *puVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  code *pcVar16;
  double dVar17;
  code *pcStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar6 = 0;
  func_0x000107c5f7f0();
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar8 = (undefined8 *)((long)&pcStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = (ulong *)((long)puVar8 - extraout_x12);
  lVar7 = 0;
  func_0x000107c5f83c();
  lVar13 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = _DAT_112ef9228;
  lVar3 = _DAT_112ef9218;
  lVar10 = lVar11 - extraout_x12_00;
  if (0.0 < param_1) {
    param_1 = 1000.0 / param_1;
    if (0x7fe < (ulong)param_1 >> 0x34) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102b6d9d0);
      (*pcVar5)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102b6d9d4);
      (*pcVar5)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102b6d9d8);
      (*pcVar5)();
    }
    uVar12 = (ulong)param_1;
    if ((0 < (long)uVar12) && (*(ulong *)(unaff_x20 + _DAT_112ef9218) != uVar12)) {
      uVar2 = 0;
      if (uVar12 != 0) {
        uVar2 = 1000 / uVar12;
      }
      if ((int)*(uint *)(unaff_x20 + _DAT_112ef9228) < 1) {
        dVar17 = 0.0;
      }
      else {
        dVar17 = (double)*(long *)(unaff_x20 + _DAT_112ef91d8) /
                 (double)*(uint *)(unaff_x20 + _DAT_112ef9228);
      }
      dVar17 = (double)(long)(dVar17 * (double)uVar2);
      if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102b6d9dc);
        (*pcVar5)();
      }
      if (dVar17 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102b6d9e0);
        (*pcVar5)();
      }
      lStack_78 = lVar7;
      if (9.223372036854776e+18 <= dVar17) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102b6d9e4);
        (*pcVar5)();
      }
      *(long *)(unaff_x20 + _DAT_112ef91d8) = (long)dVar17;
      *(ulong *)(unaff_x20 + lVar3) = uVar12;
      *(int *)(unaff_x20 + lVar4) = (int)uVar2;
      func_0x000102b6c27c();
      lStack_80 = lVar7;
      func_0x000107c614f0();
      lStack_88 = lVar7;
      func_0x000107c5f830(lVar11);
      *puVar9 = uVar12;
      uVar1 = *(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO12millisecondsyACSicACmFWC_11034f778;
      pcStack_90 = *(code **)(lVar15 + 0x68);
      (*pcStack_90)(puVar9,uVar1,lVar6);
      func_0x000107c5f858(lVar10,lVar11,puVar9);
      pcVar16 = *(code **)(lVar15 + 8);
      (*pcVar16)(puVar9,lVar6);
      lVar4 = lStack_78;
      pcVar14 = *(code **)(lVar13 + 8);
      (*pcVar14)(lVar11,lStack_78);
      *puVar9 = uVar12;
      pcVar5 = pcStack_90;
      (*pcStack_90)(puVar9,uVar1,lVar6);
      *puVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ef9220);
      (*pcVar5)(puVar8,uVar1,lVar6);
      lVar3 = lStack_80;
      func_0x000107c6007c(lVar10,puVar9,puVar8,lStack_88);
      func_0x000107c615e8(lVar3);
      (*pcVar16)(puVar8,lVar6);
      (*pcVar16)(puVar9,lVar6);
      (*pcVar14)(lVar10,lVar4);
    }
  }
  return;
}



/* Entry: 102b6d9e4; end: 102b6d9ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6d9e4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [16];
  
  func_0x000100087bd4(0x102b6ee7c,auStack_50,PTR___sytN_11034f1b0 + 8);
  lVar1 = _DAT_112ef9180;
  func_0x000107c61428(unaff_x20 + _DAT_112ef9180,auStack_50,0,0);
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c5be0c();
  }
  lVar1 = _DAT_112ef9160;
  func_0x000107c61428(unaff_x20 + _DAT_112ef9160,auStack_70,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c412ac();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 102b6d9f0; end: 102b6daa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6d9f0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [16];
  
  func_0x000100087bd4(param_1,auStack_50,PTR___sytN_11034f1b0 + 8);
  lVar1 = _DAT_112ef9180;
  func_0x000107c61428(unaff_x20 + _DAT_112ef9180,auStack_50,0,0);
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c5be0c();
  }
  lVar1 = _DAT_112ef9160;
  func_0x000107c61428(unaff_x20 + _DAT_112ef9160,auStack_70,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c412ac();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 102b6daa8; end: 102b6db2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6daa8(long param_1,undefined1 param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = _DAT_112ef91e8;
  cVar1 = *(char *)(param_1 + _DAT_112ef91e8);
  *(undefined1 *)(param_1 + _DAT_112ef91e8) = param_2;
  lVar4 = param_1;
  func_0x000100b65f90();
  cVar2 = *(char *)(param_1 + lVar3);
  if (cVar1 != cVar2) {
    func_0x000102b6c27c();
    func_0x000107c614f0();
    if (cVar2 == '\0') {
      func_0x000107c60024();
    }
    else {
      func_0x000107c60020();
    }
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 102b6db30; end: 102b6dc9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b6db30(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 auStack_120 [16];
  int aiStack_108 [2];
  long lStack_100;
  ulong uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000102b6c7f8();
  lVar7 = 0;
  if (param_1 != 0) {
    lStack_70 = 0;
    unaff_x21 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    func_0x000107c60a60(unaff_x21,param_1,&lStack_70);
    if (lStack_70 == 0) {
      func_0x000107c61170(param_1);
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(unaff_x20 + _DAT_112ef91d8) + 1;
      if (SCARRY8(*(long *)(unaff_x20 + _DAT_112ef91d8),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b6dc98);
        (*pcVar2)();
      }
      *(long *)(unaff_x20 + _DAT_112ef91d8) = lVar7;
      lVar6 = _DAT_112ef9228;
      uVar1 = *(undefined4 *)(unaff_x20 + _DAT_112ef9228);
      unaff_x24 = lStack_70;
      func_0x000107c61174();
      func_0x000107c60a40(&uStack_c0,lVar7,uVar1);
      unaff_x23 = uStack_b8 & 0xffffffff;
      func_0x000107c60a40(&uStack_c0,1,*(undefined4 *)(unaff_x20 + lVar6));
      uStack_a8 = uStack_c0;
      uStack_a0 = (undefined4)uStack_b8;
      uStack_9c = uStack_b8._4_4_;
      uStack_98 = uStack_b0;
      uStack_90 = uStack_c0;
      uStack_88 = (undefined4)uStack_b8;
      uStack_84 = uStack_b8._4_4_;
      uStack_80 = uStack_b0;
      lStack_78 = 0;
      func_0x000107c60a18(unaff_x21,param_1,unaff_x24,&uStack_c0,&lStack_78);
      func_0x000107c61170(param_1);
      func_0x000107c61170(unaff_x24);
      lVar7 = lStack_78;
    }
    func_0x000107c61170(lStack_70);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar7;
  }
  func_0x000107c60e78();
  lVar7 = 0x102b6ed1c;
  puVar5 = auStack_120;
  lStack_100 = unaff_x24;
  uStack_f8 = unaff_x23;
  uStack_e8 = unaff_x21;
  func_0x000100087bd4(aiStack_108,0x102b6ed1c,puVar5,&UNK_11077d848);
  if ((aiStack_108[0] == 1) && (func_0x000102b6c7f8(), lVar7 != 0)) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112ef9200);
    if (lVar6 != 0) {
      func_0x000107c61174();
      func_0x000107c60ad0();
      func_0x000107c60ad0(lVar7,0);
      FUN_102b76038(lVar6,lVar7);
      func_0x000107c60ae0(lVar7,0);
      puVar5 = (undefined1 *)0x1;
      func_0x000107c60ae0(lVar6,1);
      func_0x000107c61170(lVar7);
      lVar7 = lVar6;
    }
    func_0x000107c61170();
  }
  FUN_102b6db30();
  if (lVar7 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar4 = puVar3;
    func_0x000107c3ac54();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar5);
    }
    puVar3 = PTR_PTR_1126c8eb8;
    func_0x000107c610f8(PTR_PTR_1126c8eb8);
    func_0x000107c61174(lVar7);
    func_0x000107c48464(puVar3);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar4);
    lVar6 = _DAT_112ef9160;
    func_0x000107c61428(unaff_x20 + _DAT_112ef9160,auStack_120,0,0);
    lVar6 = unaff_x20 + lVar6;
    func_0x000107c61618();
    if (lVar6 != 0) {
      puVar4 = puVar3;
      func_0x000107c61174(puVar3);
      func_0x000107c412a4(lVar6);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar7);
  }
  return lVar7;
}



/* Entry: 102b6dc9c; end: 102b6de93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6dc9c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_60 [16];
  int aiStack_48 [2];
  
  lVar1 = 0x102b6ed1c;
  puVar4 = auStack_60;
  func_0x000100087bd4(aiStack_48,0x102b6ed1c,puVar4,&UNK_11077d848);
  if ((aiStack_48[0] == 1) && (func_0x000102b6c7f8(), lVar1 != 0)) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112ef9200);
    if (lVar5 != 0) {
      func_0x000107c61174();
      func_0x000107c60ad0();
      func_0x000107c60ad0(lVar1,0);
      FUN_102b76038(lVar5,lVar1);
      func_0x000107c60ae0(lVar1,0);
      puVar4 = (undefined1 *)0x1;
      func_0x000107c60ae0(lVar5,1);
      func_0x000107c61170(lVar1);
      lVar1 = lVar5;
    }
    func_0x000107c61170();
  }
  FUN_102b6db30();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar3 = puVar2;
    func_0x000107c3ac54();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar4);
    }
    puVar2 = PTR_PTR_1126c8eb8;
    func_0x000107c610f8(PTR_PTR_1126c8eb8);
    func_0x000107c61174(lVar1);
    func_0x000107c48464(puVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar3);
    lVar5 = _DAT_112ef9160;
    func_0x000107c61428(unaff_x20 + _DAT_112ef9160,auStack_60,0,0);
    lVar5 = unaff_x20 + lVar5;
    func_0x000107c61618();
    if (lVar5 != 0) {
      puVar3 = puVar2;
      func_0x000107c61174(puVar2);
      func_0x000107c412a4(lVar5);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b6de94; end: 102b6df2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6de94(void)

{
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  if (*(long *)(unaff_x20 + _DAT_112ef91b0) != 0) {
    func_0x000107c4ff64();
  }
  func_0x000107c6157c(*(undefined8 *)(unaff_x20 + _DAT_112ef91c0));
  func_0x000100087bd4(FUN_102b6ebb0,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x0001006c6684();
  func_0x000107c61154(&stack0xffffffffffffff98,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b6df30; end: 102b6dfd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6df30(long param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = _DAT_112ef91e8;
  cVar1 = *(char *)(param_1 + _DAT_112ef91e8);
  *(undefined1 *)(param_1 + _DAT_112ef91e8) = 1;
  lVar4 = param_1;
  func_0x000100b65f90();
  cVar2 = *(char *)(param_1 + lVar3);
  if (cVar1 != cVar2) {
    func_0x000102b6c27c();
    func_0x000107c614f0();
    if (cVar2 == '\0') {
      func_0x000107c60024();
    }
    else {
      func_0x000107c60020();
    }
    func_0x000107c615e8(lVar4);
  }
  func_0x000102b6c27c();
  func_0x000107c614f0();
  func_0x000107c6001c();
  func_0x000107c615e8(lVar4);
  return;
}



/* Entry: 102b6dfd8; end: 102b6dffb; -[SCPlainBuffersDataSource dealloc] */

void FUN_102b6dfd8(void)

{
  func_0x000107c61174();
  FUN_102b6de94();
  return;
}



/* Entry: 102b6dffc; end: 102b6e137; -[SCPlainBuffersDataSource .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b6e0dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b6e0e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6dffc(long param_1)

{
  func_0x000100d1bf10(param_1 + _DAT_112ef9160);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ef9170 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef9178));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef9180));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef9188));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef9190));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef9198));
  func_0x000100d1bf10(param_1 + _DAT_112ef91a0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef91b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef91b8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ef91c0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef9168));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef91d0));
  return;
}



/* Entry: 102b6e138; end: 102b6e163; -[SCPlainBuffersDataSource init] */

void FUN_102b6e138(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlainBuffersDataSource.PlainBuffersDataSource",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b6e164);
  (*pcVar1)();
}



/* Entry: 102b6e164; end: 102b6e1cb; -[SCPlainBuffersDataSource managedAudioDataSource:didOutputSampleBuffer:] */

/* WARNING: Possible PIC construction at 0x000102b6e1b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b6e1b8) */

void FUN_102b6e164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102b6ebd8(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 102b6e1cc; end: 102b6e2f7; -[SCPlainBuffersDataSource prepareForImageCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6e1cc(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 2;
  uStack_40 = param_1;
  func_0x000107c61174();
  func_0x000100087bd4(0x102b6ee40,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b6e2f8; end: 102b6e363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6e2f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_102b6c860();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ef91f8);
    *(long *)(param_1 + _DAT_112ef91f8) = lVar1;
    FUN_102b6ebc8(uVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102b6e364; end: 102b6e38b; -[SCPlainBuffersDataSource didCompleteImageCapture] */

void FUN_102b6e364(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102b6e238();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b6e38c; end: 102b6e603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6e38c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar2 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ef9200;
  if (lVar2 != 0) {
    if ((*(long *)(lVar2 + _DAT_112ef9200) == 0) &&
       (lVar3 = lVar2, func_0x000102b6c7f8(), lVar3 != 0)) {
      uVar4 = 0;
      FUN_102b75d94();
      func_0x000107c61170(lVar3);
      *(undefined8 *)(lVar2 + lVar1) = uVar4;
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170();
  }
  func_0x000107c61428(param_1 + 0x10,auStack_70,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uStack_78 = 1;
    lStack_80 = param_1;
    func_0x000100087bd4(0x102b6ee68,auStack_90,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102b6e604; end: 102b6e61b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6e604(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ef9168);
  func_0x000107c614f0(uVar2);
  puVar1 = &UNK_1105a4380;
  func_0x000107c613fc(&UNK_1105a4380,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x102b6eee4,puVar1,uVar2);
  func_0x000107c61578(puVar1,2);
  return;
}



/* Entry: 102b6e61c; end: 102b6e6ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6e61c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ef9168);
  func_0x000107c614f0(uVar2);
  puVar1 = &UNK_1105a4380;
  func_0x000107c613fc(&UNK_1105a4380,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(param_3,puVar1,uVar2);
  func_0x000107c61578(puVar1,2);
  return;
}



/* Entry: 102b6e6ac; end: 102b6eb6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102b6e6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined *param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,long param_13)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  long extraout_x8;
  long unaff_x20;
  long lVar13;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [24];
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  
  lVar4 = 0;
  uStack_108 = param_9;
  uStack_100 = param_10;
  uStack_f8 = param_5;
  uStack_f0 = param_7;
  puStack_e8 = param_8;
  func_0x000107c5f804();
  lVar12 = *(long *)(lVar4 + -8);
  lStack_110 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)&lStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61614(unaff_x20 + _DAT_112ef9160,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ef9178) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9180) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9188) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9190) = 0;
  lVar4 = unaff_x20 + _DAT_112ef91a0;
  *(undefined8 *)(lVar4 + 8) = 0;
  func_0x000107c61614(lVar4,0);
  lVar4 = _DAT_112ef91b0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91b0) = 0;
  lVar8 = _DAT_112ef91b8;
  uVar5 = 0;
  func_0x00010006a340();
  uVar10 = uVar5;
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar8) = uVar10;
  lVar8 = _DAT_112ef91c0;
  func_0x000107c613fc(uVar5,0x18,7);
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar8) = uVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91c8) = 0;
  lVar8 = _DAT_112ef91d0;
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar8) = puVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91e0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef91e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91f8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9200) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef9208);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9210) = param_3;
  if (param_4 == 0) {
    param_4 = 0x21;
  }
  else {
    func_0x000107c49820();
  }
  lVar8 = lStack_110;
  *(long *)(unaff_x20 + _DAT_112ef9218) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9220) = uStack_f8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef9170);
  *puVar1 = uStack_f0;
  puVar1[1] = puStack_e8;
  if (param_4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b6eb6c);
    (*pcVar3)();
  }
  uVar2 = 0;
  if (param_4 != 0) {
    uVar2 = (undefined4)(1000 / param_4);
  }
  *(undefined4 *)(unaff_x20 + _DAT_112ef9228) = uVar2;
  puVar6 = param_6;
  if (param_6 == (undefined *)0x0) {
    puStack_e8 = param_6;
    (**(code **)(lVar12 + 0x68))
              (lVar13,*(undefined4 *)
                       PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
               lStack_110);
    param_6 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar10 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010f0f5f50);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar10);
    puVar6 = puStack_e8;
    (**(code **)(lVar12 + 8))(lVar13,lVar8);
  }
  *(undefined **)(unaff_x20 + _DAT_112ef9168) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9198) = uStack_108;
  *(undefined8 *)(unaff_x20 + _DAT_112ef91a8) = param_11;
  *(long *)(unaff_x20 + lVar4) = param_12;
  func_0x000107c615f0();
  func_0x000107c615f0(param_11);
  func_0x000107c615f0(param_12);
  func_0x000107c615f0(puVar6);
  func_0x000107c615e8();
  func_0x0001006c6684();
  puVar7 = &stack0xffffffffffffff78;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  if ((param_12 != 0) && (param_13 != 0)) {
    lVar8 = 0;
    FUN_102b68c20();
    lVar4 = lVar8;
    func_0x000107c610f8();
    *(long *)(lVar4 + _DAT_112ef9050) = param_12;
    *(long *)(lVar4 + _DAT_112ef9058) = param_13;
    puVar6 = PTR_s_init_1125d9248;
    lStack_c8 = lVar4;
    lStack_c0 = lVar8;
    func_0x000107c615f4(param_12,2);
    func_0x000107c615f4(param_13,2);
    plVar9 = &lStack_c8;
    func_0x000107c61154(plVar9,puVar6);
    lVar4 = _DAT_112ef9180;
    func_0x000107c61428(puVar7 + _DAT_112ef9180,auStack_e0,1,0);
    uVar10 = *(undefined8 *)(puVar7 + lVar4);
    *(long **)(puVar7 + lVar4) = plVar9;
    func_0x000107c615e8(uVar10);
    func_0x000107c3d740(param_12);
    func_0x000107c615e8(param_12);
    func_0x000107c615e8(param_13);
  }
  puVar6 = &UNK_1105a4380;
  func_0x000107c613fc(&UNK_1105a4380,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,puVar7);
  uStack_98 = 0x102b6eedc;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_10169aca4;
  puStack_a0 = &UNK_1105a4478;
  ppuVar11 = &puStack_b8;
  puStack_90 = puVar6;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c61574(puStack_90);
  uVar10 = uStack_100;
  func_0x000107c5c320(uStack_100);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c3e924(uVar10);
  func_0x000107c61170(uVar10);
  return puVar7;
}



/* Entry: 102b6eb6c; end: 102b6eba3;  */

void FUN_102b6eb6c(void)

{
  long unaff_x20;
  
  FUN_102b6daa8(*(undefined8 *)(unaff_x20 + 0x10),1);
  return;
}



/* Entry: 102b6eba4; end: 102b6ebaf;  */

void FUN_102b6eba4(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102b6d6ec(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b6ebb0; end: 102b6ebc7;  */

void FUN_102b6ebb0(void)

{
  long unaff_x20;
  
  FUN_102b6df30(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b6ebc8; end: 102b6ebd7;  */

void FUN_102b6ebc8(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102b6ebd8; end: 102b6ecef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6ebd8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_PTR_1126c8eb8;
  func_0x000107c610f8(PTR_PTR_1126c8eb8);
  uVar2 = 0x412f4e;
  func_0x000107c5fadc(0x412f4e,0xe300000000000000);
  func_0x000107c48464(puVar1);
  func_0x000107c61170(uVar2);
  lVar3 = _DAT_112ef9160;
  func_0x000107c61428(unaff_x20 + _DAT_112ef9160,auStack_48,0,0);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c412a0();
    func_0x000107c615e8(lVar3);
  }
  lVar3 = unaff_x20 + _DAT_112ef91a0;
  func_0x000107c61428(lVar3,auStack_60,0,0);
  lVar4 = lVar3;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar3 + 8);
    lVar3 = lVar4;
    func_0x000107c614f0();
    (**(code **)(lVar5 + 8))(param_1,lVar3,lVar5);
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 102b6ecf0; end: 102b6ed43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6ecf0(void)

{
  long unaff_x20;
  
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ef91c8) = *(undefined8 *)(unaff_x20 + 0x18);
  return;
}



/* Entry: 102b6ed44; end: 102b6ed87;  */

void FUN_102b6ed44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d60c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___OS_dispatch_source_1126a6458;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d60c68 = puVar1;
  return;
}



/* Entry: 102b6ed88; end: 102b6ed8f;  */

void FUN_102b6ed88(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102b6dc9c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b6ed90; end: 102b6ee13;  */

void FUN_102b6ed90(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102b6ee14; end: 102b6ee2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6ee14(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lStack_40 = lVar2;
  func_0x000100087bd4(0x102b6eea4,auStack_50,PTR___sytN_11034f1b0 + 8);
  lVar1 = _DAT_112ef9160;
  func_0x000107c61428(lVar2 + _DAT_112ef9160,auStack_50,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c412a8();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102b6ee2c; end: 102b6eeb7;  */

void FUN_102b6ee2c(void)

{
  FUN_102b6ecf0();
  return;
}



/* Entry: 102b6eeb8; end: 102b6eee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6eeb8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef9160;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_112ef9160,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c412a8();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102b6eee8; end: 102b6ef8f;  */

int FUN_102b6eee8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 5) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 1)) {
    uVar1 = *(byte *)(param_1 + 1) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102b6ef90; end: 102b6f877;  */

void FUN_102b6ef90(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar11 = *unaff_x20;
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_a8 = unaff_x20[3];
  puVar4 = &UNK_1105a4538;
  func_0x000107c613fc(&UNK_1105a4538,0x28,7);
  *(undefined8 **)(puVar4 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = uVar11;
  pcStack_70 = FUN_102b720cc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1105a4550;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c6157c();
  func_0x000107c61174(param_1);
  func_0x000107c5f808(lVar9);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar11 = 0x112d4af88;
  func_0x000102b724f8(0x112d4af88,puVar1,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = 0x112d4af98;
  func_0x000102b72538(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar8,&puStack_98,uVar6,uVar7,lVar2,uVar11);
  func_0x000107c5ffe8(0,lVar9,puVar8,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  (**(code **)(lStack_a0 + 8))(puVar8,lVar2);
  (**(code **)(lVar10 + 8))(lVar9,lVar3);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 102b6f878; end: 102b6faa7;  */

void FUN_102b6f878(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *apuStack_140 [14];
  undefined4 auStack_d0 [2];
  undefined8 auStack_c8 [14];
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  uVar8 = *unaff_x20;
  lVar3 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)apuStack_140 - extraout_x8);
  lVar4 = 0;
  func_0x000102b74450();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar9 = (undefined8 *)((long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  auStack_c8[2] = 0;
  auStack_c8[1] = 0;
  auStack_c8[4] = 0;
  auStack_c8[3] = 0;
  auStack_c8[6] = 0;
  auStack_c8[5] = 0;
  auStack_c8[8] = 0;
  auStack_c8[7] = 0;
  auStack_c8[10] = 0;
  auStack_c8[9] = 0;
  auStack_c8[0xc] = 0;
  auStack_c8[0xb] = 0;
  auStack_c8[0] = 1;
  auStack_c8[0xd] = 0;
  uStack_54 = 0x80;
  uStack_58 = 0;
  FUN_102b7282c(puVar9,auStack_c8);
  puVar5 = puVar9;
  func_0x000107c614c4(puVar9,lVar4);
  if ((int)puVar5 == 2) {
    apuStack_140[9] = (undefined8 *)puVar9[9];
    apuStack_140[8] = (undefined8 *)puVar9[8];
    apuStack_140[0xb] = (undefined8 *)puVar9[0xb];
    apuStack_140[10] = (undefined8 *)puVar9[10];
    apuStack_140[0xd] = (undefined8 *)puVar9[0xd];
    apuStack_140[0xc] = (undefined8 *)puVar9[0xc];
    auStack_d0[0] = *(undefined4 *)(puVar9 + 0xe);
    apuStack_140[1] = (undefined8 *)puVar9[1];
    apuStack_140[0] = (undefined8 *)*puVar9;
    apuStack_140[3] = (undefined8 *)puVar9[3];
    apuStack_140[2] = (undefined8 *)puVar9[2];
    apuStack_140[5] = (undefined8 *)puVar9[5];
    apuStack_140[4] = (undefined8 *)puVar9[4];
    apuStack_140[7] = (undefined8 *)puVar9[7];
    apuStack_140[6] = (undefined8 *)puVar9[6];
    pcVar1 = (code *)puVar9[0xf];
    uVar2 = puVar9[0x10];
    func_0x0001007d6c6c(1,0x1000000000000030,0x800000010f0f6280,uVar8,&PTR_DAT_1105a4928);
    puVar5 = apuStack_140[0];
    func_0x000107c3f504();
    if (pcVar1 == (code *)0x0) {
      func_0x000102b72268(apuStack_140);
    }
    else {
      FUN_102b7229c();
      puVar6 = &UNK_1105a46c0;
      func_0x000107c613f8(&UNK_1105a46c0,puVar5,0,0);
      puVar5[1] = 1;
      *puVar5 = 0;
      *puVar7 = puVar6;
      func_0x000107c6159c(puVar7,lVar3,1);
      func_0x000107c6157c(uVar2);
      (*pcVar1)(puVar7);
      FUN_102b72218(pcVar1,uVar2);
      func_0x000102b72268(apuStack_140);
      FUN_102b72218(pcVar1,uVar2);
      func_0x000102b72228(puVar7,0x112d5d568,&UNK_10d9392e0);
    }
  }
  else {
    FUN_102b7217c(puVar9);
  }
  return;
}



/* Entry: 102b6faa8; end: 102b6fb5f;  */

undefined1  [16] FUN_102b6faa8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (param_2 == 0) {
    uVar2 = 0x800000010f0f6340;
    uVar1 = 0xd00000000000001f;
  }
  else if (param_2 == 1) {
    uVar2 = 0x800000010f0f6310;
    uVar1 = 0xd00000000000002a;
  }
  else {
    func_0x000107c602fc(0x1d);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_1,param_2);
    uVar1 = 0xd00000000000001b;
    uVar2 = 0x800000010f0f6360;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102b6fb60; end: 102b6fb83;  */

void FUN_102b6fb60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102b6fb84; end: 102b707db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6fb84(undefined4 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *unaff_x20;
  long lVar9;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  uStack_78 = *unaff_x20;
  lVar3 = 0;
  uStack_7c = param_1;
  func_0x000107c5ede0();
  lStack_88 = *(long *)(lVar3 + -8);
  lStack_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  lVar3 = 0;
  puStack_90 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ffd8();
  lStack_a0 = *(long *)(lVar3 + -8);
  lStack_98 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar8 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_a8 = lVar8;
  func_0x000107c5ffc4();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar8 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar9 = lVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000102b73e38();
  func_0x000107c613fc();
  uVar5 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0xc0000000;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x70) = 0;
  *(undefined8 *)(lVar4 + 0x68) = 0;
  *(undefined8 *)(lVar4 + 0x80) = 0;
  *(undefined8 *)(lVar4 + 0x78) = 0;
  *(undefined4 *)(lVar4 + 0x88) = 0;
  *(undefined8 *)(lVar4 + 0x98) = 0;
  *(undefined8 *)(lVar4 + 0xa0) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0;
  unaff_x20[2] = lVar4;
  func_0x0001000295c4(0);
  func_0x000107c5f808(lVar9);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x112d4ac68;
  func_0x000102b724f8(0x112d4ac68,puVar1,
                      PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928
                     );
  uVar6 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar7 = 0x112d4ac78;
  func_0x000102b72538(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar8,&puStack_68,uVar6,uVar7,lVar3,uVar5);
  lVar3 = lStack_a8;
  (**(code **)(lStack_a0 + 0x68))
            (lStack_a8,
             *(undefined4 *)
              PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_98);
  uVar5 = 0xd000000000000023;
  func_0x000107c5ffec(0xd000000000000023,0x800000010f0f62c0,lVar9,lVar8,lVar3,0);
  unaff_x20[3] = uVar5;
  unaff_x20[5] = 0;
  func_0x000107c61614(unaff_x20 + 4,0);
  lVar3 = (long)unaff_x20 + _DAT_113804ec0;
  *(undefined8 *)(lVar3 + 8) = 0;
  func_0x000107c61614(lVar3,0);
  puVar2 = puStack_90;
  *(undefined4 *)((long)unaff_x20 + _DAT_112ef9258) = uStack_7c;
  func_0x000102b6fe80(puStack_90);
  (**(code **)(lStack_88 + 0x20))((long)unaff_x20 + _DAT_113804eb8,puVar2,lStack_70);
  return;
}



/* Entry: 102b707dc; end: 102b70857;  */

void FUN_102b707dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = (undefined4)param_3;
  uStack_54 = (undefined4)((ulong)param_3 >> 0x20);
  pcStack_88 = FUN_102b723f4;
  puStack_80 = auStack_70;
  uStack_60 = param_2;
  uStack_50 = param_4;
  func_0x000100087bd4(FUN_102b727f8,auStack_a0,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 102b70858; end: 102b70a2f;  */

void FUN_102b70858(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined8 *puVar6;
  undefined8 auStack_140 [14];
  undefined4 auStack_d0 [2];
  undefined8 auStack_c8 [14];
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  lVar3 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)auStack_140 - extraout_x8;
  lVar3 = 0;
  func_0x000102b74450();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar6 = (undefined8 *)(lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  auStack_c8[2] = 0;
  auStack_c8[1] = 0;
  auStack_c8[4] = 0;
  auStack_c8[3] = 0;
  auStack_c8[6] = 0;
  auStack_c8[5] = 0;
  auStack_c8[8] = 0;
  auStack_c8[7] = 0;
  auStack_c8[10] = 0;
  auStack_c8[9] = 0;
  auStack_c8[0xc] = 0;
  auStack_c8[0xb] = 0;
  auStack_c8[0] = 2;
  auStack_c8[0xd] = 0;
  uStack_54 = 0x80;
  uStack_58 = 0;
  FUN_102b7282c(puVar6,auStack_c8);
  puVar4 = puVar6;
  func_0x000107c614c4(puVar6,lVar3);
  if ((int)puVar4 == 1) {
    lVar3 = 0x112ef9348;
    func_0x0001000285a8(0x112ef9348,&UNK_10db287e0);
    puVar4 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar3 + 0x30));
    pcVar1 = (code *)*puVar4;
    uVar2 = puVar4[1];
    FUN_102b72424(puVar6,lVar5);
    (*pcVar1)(lVar5);
    func_0x000107c61574(uVar2);
    func_0x000102b72228(lVar5,0x112d5d568,&UNK_10d9392e0);
  }
  else if ((int)puVar4 == 3) {
    auStack_140[9] = puVar6[9];
    auStack_140[8] = puVar6[8];
    auStack_140[0xb] = puVar6[0xb];
    auStack_140[10] = puVar6[10];
    auStack_140[0xd] = puVar6[0xd];
    auStack_140[0xc] = puVar6[0xc];
    auStack_d0[0] = *(undefined4 *)(puVar6 + 0xe);
    auStack_140[1] = puVar6[1];
    auStack_140[0] = *puVar6;
    auStack_140[3] = puVar6[3];
    auStack_140[2] = puVar6[2];
    auStack_140[5] = puVar6[5];
    auStack_140[4] = puVar6[4];
    auStack_140[7] = puVar6[7];
    auStack_140[6] = puVar6[6];
    uVar2 = puVar6[0x10];
    FUN_102b70a30(auStack_140,puVar6[0xf],uVar2);
    func_0x000107c61574(uVar2);
    func_0x000102b72268(auStack_140);
  }
  else {
    FUN_102b7217c(puVar6);
  }
  return;
}



/* Entry: 102b70a30; end: 102b70f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b70a30(long *param_1,code *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined *puVar6;
  long extraout_x8;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *apcStack_140 [17];
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar14 = *unaff_x20;
  lVar17 = 0x112d5d568;
  apcStack_140[0] = param_2;
  apcStack_140[1] = (code *)param_3;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)apcStack_140 - extraout_x8);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = (long)puVar4 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar13 = 0x65736c6166;
    uVar9 = 0xe500000000000000;
  }
  else {
    puVar10 = (undefined8 *)*param_1;
    puVar3 = puVar10;
    func_0x000107c5bd00();
    if (puVar3 == (undefined8 *)0x1) {
      func_0x000107c4c4ac(param_1[1]);
      func_0x000107c4c4ac(param_1[2]);
      apcStack_140[2] = (code *)0x0;
      apcStack_140[3] = (code *)0xe000000000000000;
      func_0x000107c602fc(0x3e);
      func_0x000107c5fb78(0x100000000000003c,0x800000010f0f61f0);
      puVar4 = puVar10;
      func_0x000107c5bd00();
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      puStack_b8 = puVar4;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      pcVar1 = apcStack_140[3];
      func_0x0001007d6c6c(1,apcStack_140[2],apcStack_140[3],uVar14,&PTR_DAT_1105a4928);
      func_0x000107c6142c(pcVar1);
      (**(code **)(lVar15 + 0x10))(lVar16,(long)unaff_x20 + _DAT_113804eb8,lVar2);
      uVar7 = (ulong)*(byte *)(lVar15 + 0x50);
      uVar11 = uVar7 + 0x98 & (uVar7 ^ 0xffffffffffffffff);
      uVar12 = lVar8 + uVar11 + 7 & 0xfffffffffffffff8;
      puVar6 = &UNK_1105a4600;
      func_0x000107c613fc(&UNK_1105a4600,uVar12 + 8,uVar7 | 7);
      pcVar1 = apcStack_140[1];
      lVar17 = param_1[8];
      lVar18 = param_1[0xb];
      lVar8 = param_1[10];
      *(long *)(puVar6 + 0x58) = param_1[9];
      *(long *)(puVar6 + 0x50) = lVar17;
      *(long *)(puVar6 + 0x68) = lVar18;
      *(long *)(puVar6 + 0x60) = lVar8;
      lVar17 = param_1[0xc];
      *(long *)(puVar6 + 0x78) = param_1[0xd];
      *(long *)(puVar6 + 0x70) = lVar17;
      *(int *)(puVar6 + 0x80) = (int)param_1[0xe];
      lVar17 = *param_1;
      lVar18 = param_1[3];
      lVar8 = param_1[2];
      *(long *)(puVar6 + 0x18) = param_1[1];
      *(long *)(puVar6 + 0x10) = lVar17;
      *(long *)(puVar6 + 0x28) = lVar18;
      *(long *)(puVar6 + 0x20) = lVar8;
      lVar17 = param_1[4];
      lVar18 = param_1[7];
      lVar8 = param_1[6];
      *(long *)(puVar6 + 0x38) = param_1[5];
      *(long *)(puVar6 + 0x30) = lVar17;
      *(long *)(puVar6 + 0x48) = lVar18;
      *(long *)(puVar6 + 0x40) = lVar8;
      *(code **)(puVar6 + 0x88) = apcStack_140[0];
      *(code **)(puVar6 + 0x90) = apcStack_140[1];
      (**(code **)(lVar15 + 0x20))(puVar6 + uVar11,lVar16,lVar2);
      *(undefined8 *)(puVar6 + uVar12) = uVar14;
      pcStack_98 = FUN_102b72474;
      puStack_b8 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000b0c7c;
      puStack_a0 = &UNK_1105a4618;
      ppuVar5 = &puStack_b8;
      puStack_90 = puVar6;
      func_0x000107c60bc4(ppuVar5);
      puVar6 = puStack_90;
      FUN_102b724bc(param_1,apcStack_140 + 2);
      func_0x000107c6157c(pcVar1);
      func_0x000107c61574(puVar6);
      func_0x000107c435c0(puVar10);
      func_0x000107c60bd0(ppuVar5);
      return;
    }
    uVar9 = 0xe400000000000000;
    uVar13 = 0x65757274;
  }
  apcStack_140[2] = (code *)0x0;
  apcStack_140[3] = (code *)0xe000000000000000;
  func_0x000107c602fc(0x54);
  func_0x000107c5fb78(0x1000000000000037,0x800000010f0f6180);
  func_0x000107c5fb78(uVar13,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c5fb78(0x726574697277202c,0xef3d737574617453);
  puVar10 = (undefined8 *)*param_1;
  puVar3 = puVar10;
  func_0x000107c5bd00();
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puStack_b8 = puVar3;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c5fb78(0x3d726f727265202c,0xe800000000000000);
  puVar3 = puVar10;
  func_0x000107c42a28();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
    uVar13 = 0xe300000000000000;
    uVar9 = 0x6c696e;
  }
  else {
    func_0x000107c614cc();
    uVar9 = uStack_80;
    uVar13 = uStack_78;
    func_0x000107c60640(uStack_80,uStack_78);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c5fb78(uVar9,uVar13);
  func_0x000107c6142c(uVar13);
  pcVar1 = apcStack_140[3];
  func_0x0001007d6c6c(3,apcStack_140[2],apcStack_140[3],uVar14,&PTR_DAT_1105a4928);
  func_0x000107c6142c(pcVar1);
  func_0x000107c3f504(puVar10);
  func_0x000107c42a28();
  func_0x000107c61180();
  if (puVar10 == (undefined8 *)0x0) {
    FUN_102b7229c();
    puVar6 = &UNK_1105a46c0;
    func_0x000107c613f8(&UNK_1105a46c0,puVar10,0,0);
    *puVar4 = puVar6;
    *puVar10 = 0xd000000000000025;
    puVar10[1] = 0x800000010f0f61c0;
  }
  else {
    *puVar4 = puVar10;
  }
  func_0x000107c6159c(puVar4,lVar17,1);
  (*apcStack_140[0])(puVar4);
  FUN_102b72228(puVar4,0x112d5d568,&UNK_10d9392e0);
  return;
}



/* Entry: 102b70f60; end: 102b7189b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b70f60(undefined8 *param_1,long ****param_2,long ****param_3,undefined4 param_4,
                  undefined8 param_5,undefined **param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  long *****ppppplVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long ****pppplVar14;
  long *****ppppplVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uVar18;
  long ****pppplVar19;
  long *****ppppplVar20;
  long extraout_x8;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long *****unaff_x20;
  long *****ppppplVar24;
  long *****ppppplVar25;
  long lVar26;
  long *****unaff_x21;
  undefined8 uVar27;
  long ****pppplVar28;
  long *****ppppplVar29;
  long *****ppppplVar30;
  undefined4 uVar31;
  long *****ppppplVar32;
  long *****ppppplVar33;
  long alStack_500 [4];
  undefined1 auStack_4e0 [32];
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 auStack_4b0 [7];
  undefined8 uStack_478;
  undefined4 auStack_470 [2];
  undefined8 uStack_468;
  char acStack_460 [8];
  char acStack_458 [8];
  char acStack_450 [16];
  char acStack_440 [8];
  char acStack_438 [24];
  char acStack_420 [8];
  char acStack_418 [8];
  char acStack_410 [8];
  char acStack_408 [8];
  char acStack_400 [8];
  char acStack_3f8 [8];
  char acStack_3f0 [8];
  char acStack_3e8 [8];
  char acStack_3e0 [8];
  undefined1 auStack_3d8 [8];
  long alStack_3d0 [2];
  long ***ppplStack_3c0;
  long ****pppplStack_3b8;
  long ***ppplStack_3b0;
  long ***ppplStack_3a8;
  long ****pppplStack_398;
  undefined8 *puStack_390;
  long ****pppplStack_388;
  long ****pppplStack_378;
  undefined8 uStack_358;
  long ****pppplStack_350;
  long ****pppplStack_340;
  long ****pppplStack_338;
  long **applStack_330 [22];
  long **applStack_280 [22];
  long **applStack_1d0 [16];
  long **applStack_150 [28];
  long lStack_70;
  
  pppplStack_388 = (long ****)CONCAT44(pppplStack_388._4_4_,param_4);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppplStack_398 = *unaff_x20;
  ppppplVar7 = (long *****)0x0;
  puStack_390 = param_1;
  func_0x000107c5ede0();
  ppppplVar33 = (long *****)ppppplVar7[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(ppppplVar33[8]);
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  ppppplVar12 = (long *****)((long)&ppplStack_3c0 + lVar4);
  puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  ppppplVar32 = _DAT_113804eb8;
  puVar9 = puVar8;
  func_0x000107c5ed90();
  pppplStack_340 = (long ****)0x0;
  ppppplVar20 = &pppplStack_340;
  puVar10 = puVar8;
  func_0x000107c4ff50();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  ppppplVar11 = (long *****)pppplStack_340;
  if ((int)puVar10 == 0) {
    ppppplVar25 = (long *****)pppplStack_340;
    func_0x000107c61174(pppplStack_340);
    func_0x000107c5ed30(ppppplVar11);
    func_0x000107c61170(ppppplVar25);
    func_0x000107c61654();
    func_0x000107c614ac(ppppplVar11);
    unaff_x21 = (long *****)0x0;
  }
  else {
    func_0x000107c61174(pppplStack_340);
  }
  (*(code *)ppppplVar33[2])(ppppplVar12,(long)unaff_x20 + (long)ppppplVar32);
  ppppplVar24 = *(long ******)PTR__AVFileTypeMPEG4_110348008;
  ppppplVar25 = (long *****)PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8;
  func_0x000107c610f8();
  func_0x000107c61174();
  ppppplVar30 = ppppplVar24;
  FUN_102b722dc();
  ppppplVar13 = ppppplVar24;
  func_0x000107c61170();
  ppppplVar29 = ppppplVar12;
  ppppplVar15 = unaff_x21;
  ppppplVar11 = unaff_x21;
  if (unaff_x21 == (long *****)0x0) {
    if (SUB168(SEXT816((long)param_2) * SEXT816((long)param_3),8) !=
        (long)param_2 * (long)param_3 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102b71898);
      (*pcVar5)();
    }
    ppppplVar20 = (long *****)0x112d4b5e8;
    pppplStack_3b8 = (long ****)unaff_x21;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    pppplVar19 = (long ****)applStack_150;
    ppppplVar11 = ppppplVar20;
    func_0x000107c61534();
    ppppplVar11[3] = (long ****)0x8;
    ppppplVar11[2] = (long ****)0x4;
    pppplVar14 = *(long *****)PTR__AVVideoCodecKey_110348120;
    func_0x000107c5faec();
    ppppplVar11[4] = pppplVar14;
    ppppplVar11[5] = pppplVar19;
    pppplVar28 = *(long *****)PTR__AVVideoCodecTypeH264_110348128;
    pppplVar14 = (long ****)0x0;
    FUN_102b68db0();
    ppppplVar11[9] = pppplVar14;
    ppppplVar11[6] = pppplVar28;
    pppplVar14 = *(long *****)PTR__AVVideoWidthKey_1103481a0;
    func_0x000107c5faec();
    puVar8 = PTR___sSiN_11034deb0;
    ppppplVar11[10] = pppplVar14;
    ppppplVar11[0xb] = pppplVar19;
    ppppplVar11[0xf] = (long ****)puVar8;
    ppppplVar11[0xc] = param_2;
    pppplVar14 = *(long *****)PTR__AVVideoHeightKey_110348168;
    func_0x000107c5faec();
    ppppplVar11[0x10] = pppplVar14;
    ppppplVar11[0x11] = pppplVar19;
    ppppplVar11[0x15] = (long ****)puVar8;
    ppppplVar11[0x12] = param_3;
    pppplVar14 = *(long *****)PTR__AVVideoCompressionPropertiesKey_110348158;
    func_0x000107c5faec();
    ppppplVar11[0x16] = pppplVar14;
    ppppplVar11[0x17] = pppplVar19;
    pppplVar19 = (long ****)applStack_1d0;
    ppppplVar7 = ppppplVar20;
    func_0x000107c61534();
    ppppplVar7[3] = (long ****)0x4;
    ppppplVar7[2] = (long ****)0x2;
    pppplVar14 = *(long *****)PTR__AVVideoAverageBitRateKey_110348108;
    func_0x000107c5faec();
    ppppplVar7[4] = pppplVar14;
    puVar8 = PTR___sSfN_11034ddf8;
    ppppplVar7[5] = pppplVar19;
    ppppplVar7[9] = (long ****)puVar8;
    *(float *)(ppppplVar7 + 6) = (float)((long)param_2 * (long)param_3) * 11.4;
    pppplVar14 = *(long *****)PTR__AVVideoExpectedSourceFrameRateKey_110348160;
    func_0x000107c5faec();
    ppppplVar7[10] = pppplVar14;
    ppppplVar7[0xb] = pppplVar19;
    uVar31 = *(undefined4 *)((long)unaff_x20 + _DAT_112ef9258);
    ppppplVar7[0xf] = (long ****)PTR___ss5Int32VN_11034ee20;
    *(undefined4 *)(ppppplVar7 + 0xc) = uVar31;
    func_0x000107c61174(pppplVar28);
    ppppplVar33 = ppppplVar7;
    func_0x000100214a84();
    func_0x000107c61588(ppppplVar7);
    ppppplVar32 = (long *****)0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61408(ppppplVar7 + 4,2,ppppplVar32);
    pppplVar19 = (long ****)0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    ppppplVar11[0x1b] = pppplVar19;
    ppppplVar11[0x18] = (long ****)ppppplVar33;
    ppppplVar7 = ppppplVar11;
    func_0x000100214a84(ppppplVar11);
    func_0x000107c61588(ppppplVar11);
    func_0x000107c61408(ppppplVar11 + 4,4,ppppplVar32);
    ppppplVar24 = (long *****)PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
    func_0x000107c610f8();
    puVar9 = PTR___sypN_11034f1a8;
    ppppplVar11 = (long *****)PTR___sSSN_11034da80;
    ppppplVar33 = ppppplVar7;
    func_0x000107c5f9dc(ppppplVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(ppppplVar7);
    func_0x000107c476c4();
    func_0x000107c61170(ppppplVar33);
    func_0x000107c54788(ppppplVar24);
    pppplVar19 = (long ****)applStack_280;
    ppppplVar7 = ppppplVar20;
    func_0x000107c61534();
    ppplStack_3a8 = (long ***)0x6;
    ppplStack_3b0 = (long ***)0x3;
    ppppplVar7[3] = (long ****)0x6;
    ppppplVar7[2] = (long ****)0x3;
    pppplVar14 = *(long *****)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
    func_0x000107c5faec();
    ppppplVar7[4] = pppplVar14;
    puVar8 = PTR___ss6UInt32VN_11034f020;
    ppppplVar7[5] = pppplVar19;
    ppppplVar7[9] = (long ****)puVar8;
    *(undefined4 *)(ppppplVar7 + 6) = pppplStack_388._0_4_;
    pppplVar14 = *(long *****)PTR__kCVPixelBufferWidthKey_11034a3d0;
    func_0x000107c5faec();
    ppppplVar7[10] = pppplVar14;
    ppppplVar7[0xb] = pppplVar19;
    puVar8 = PTR___sSiN_11034deb0;
    ppppplVar7[0xf] = (long ****)PTR___sSiN_11034deb0;
    ppppplVar7[0xc] = param_2;
    pppplVar14 = *(long *****)PTR__kCVPixelBufferHeightKey_11034a388;
    func_0x000107c5faec();
    ppppplVar7[0x10] = pppplVar14;
    ppppplVar7[0x11] = pppplVar19;
    ppppplVar7[0x15] = (long ****)puVar8;
    ppppplVar7[0x12] = param_3;
    ppppplVar33 = ppppplVar7;
    func_0x000100214a84();
    func_0x000107c61588(ppppplVar7);
    func_0x000107c61408(ppppplVar7 + 4,3,ppppplVar32);
    ppppplVar15 = (long *****)PTR__OBJC_CLASS___AVAssetWriterInputPixelBufferAdaptor_1126d0110;
    func_0x000107c610f8();
    func_0x000107c61174();
    ppppplVar29 = ppppplVar33;
    func_0x000107c5f9dc(ppppplVar33,ppppplVar11,puVar9 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(ppppplVar33);
    func_0x000107c457c8();
    func_0x000107c61170(ppppplVar24);
    func_0x000107c61170(ppppplVar29);
    ppppplVar30 = ppppplVar12;
    func_0x000107c3f394();
    ppppplVar33 = ppppplVar12;
    if ((int)ppppplVar30 == 0) {
      ppppplVar25 = (long *****)0x800000010f0f6090;
      FUN_102b7229c();
      unaff_x21 = (long *****)&UNK_1105a46c0;
      ppppplVar7 = (long *****)0x0;
      ppppplVar20 = (long *****)0x0;
      func_0x000107c613f8();
      *ppppplVar30 = (long ****)0xd000000000000020;
      ppppplVar30[1] = (long ****)0x800000010f0f6090;
      func_0x000107c61654();
      func_0x000107c61170(ppppplVar12);
      func_0x000107c61170(ppppplVar24);
      unaff_x20 = ppppplVar15;
    }
    else {
      func_0x000107c3d710(ppppplVar12);
      pppplVar19 = (long ****)applStack_330;
      func_0x000107c61534();
      ppppplVar20[3] = (long ****)ppplStack_3a8;
      ppppplVar20[2] = (long ****)ppplStack_3b0;
      pppplVar14 = *(long *****)PTR__AVFormatIDKey_11034cf30;
      func_0x000107c5faec();
      ppppplVar20[4] = pppplVar14;
      ppppplVar20[5] = pppplVar19;
      ppppplVar20[9] = (long ****)PTR___ss6UInt32VN_11034f020;
      *(undefined4 *)(ppppplVar20 + 6) = 0x61616320;
      pppplVar14 = *(long *****)PTR__AVSampleRateKey_11034cf60;
      func_0x000107c5faec();
      ppppplVar20[10] = pppplVar14;
      ppppplVar20[0xb] = pppplVar19;
      ppppplVar20[0xf] = (long ****)PTR___sSdN_11034dd90;
      ppppplVar20[0xc] = (long ****)0x40e5888000000000;
      pppplVar14 = *(long *****)PTR__AVNumberOfChannelsKey_11034cf58;
      func_0x000107c5faec();
      ppppplVar20[0x10] = pppplVar14;
      ppppplVar20[0x11] = pppplVar19;
      ppppplVar20[0x15] = (long ****)PTR___sSiN_11034deb0;
      ppppplVar20[0x12] = (long ****)0x1;
      ppppplVar11 = ppppplVar20;
      func_0x000100214a84();
      func_0x000107c61588(ppppplVar20);
      func_0x000107c61408(ppppplVar20 + 4,3,ppppplVar32);
      ppppplVar13 = (long *****)PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
      func_0x000107c610f8();
      ppppplVar32 = ppppplVar11;
      ppppplVar30 = (long *****)PTR___sSSN_11034da80;
      func_0x000107c5f9dc(ppppplVar11,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                          PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(ppppplVar11);
      ppppplVar20 = ppppplVar32;
      func_0x000107c476c4();
      func_0x000107c61170(ppppplVar32);
      func_0x000107c54788(ppppplVar13);
      ppppplVar32 = ppppplVar12;
      func_0x000107c3f394();
      if ((int)ppppplVar32 == 0) {
        param_6 = &PTR_DAT_1105a4928;
        ppppplVar7 = (long *****)0x800000010f0f60c0;
        ppppplVar30 = (long *****)0x1000000000000041;
        ppppplVar20 = (long *****)pppplStack_398;
        func_0x0001007d6c6c(2);
        pppplStack_378 = (long ****)0x0;
      }
      else {
        ppppplVar7 = ppppplVar13;
        func_0x000107c3d710(ppppplVar12);
        func_0x000107c61174(ppppplVar13);
        pppplStack_378 = (long ****)ppppplVar13;
      }
      ppppplVar32 = ppppplVar12;
      func_0x000107c5bc58();
      if (((ulong)ppppplVar32 & 1) != 0) {
        ppppplVar25 = ppppplVar15;
        func_0x000107c4e794();
        func_0x000107c61180();
        ppppplVar29 = *(long ******)PTR__kCMTimeZero_110348670;
        uVar1 = *(uint *)(PTR__kCMTimeZero_110348670 + 8);
        unaff_x20 = (long *****)(ulong)uVar1;
        uVar2 = *(uint *)(PTR__kCMTimeZero_110348670 + 0xc);
        ppppplVar11 = (long *****)(ulong)uVar2;
        ppppplVar32 = *(long ******)(PTR__kCMTimeZero_110348670 + 0x10);
        pppplStack_398 = *(long *****)PTR__kCMTimeInvalid_110348648;
        uVar21 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
        pppplStack_388 = (long ****)ppppplVar25;
        func_0x000107c61170();
        *puStack_390 = ppppplVar12;
        puStack_390[1] = ppppplVar24;
        puStack_390[2] = pppplStack_378;
        puStack_390[3] = ppppplVar15;
        puStack_390[4] = pppplStack_388;
        *(undefined1 *)(puStack_390 + 5) = 0;
        *(long ******)((long)puStack_390 + 0x2c) = ppppplVar29;
        *(uint *)((long)puStack_390 + 0x34) = uVar1;
        *(uint *)(puStack_390 + 7) = uVar2;
        *(long ******)((long)puStack_390 + 0x3c) = ppppplVar32;
        *(long *****)((long)puStack_390 + 0x44) = pppplStack_398;
        *(undefined8 *)((long)puStack_390 + 0x4c) =
             *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
        *(undefined8 *)((long)puStack_390 + 0x54) = uVar21;
        *(long ******)((long)puStack_390 + 0x5c) = ppppplVar29;
        *(uint *)((long)puStack_390 + 100) = uVar1;
        *(uint *)(puStack_390 + 0xd) = uVar2;
        *(long ******)((long)puStack_390 + 0x6c) = ppppplVar32;
        ppppplVar25 = ppppplVar15;
        ppppplVar15 = (long *****)pppplStack_3b8;
        goto LAB_102b71854;
      }
      ppppplVar20 = ppppplVar12;
      func_0x000107c42a28();
      func_0x000107c61180();
      if (ppppplVar20 == (long *****)0x0) {
        ppppplVar30 = (long *****)0xe700000000000000;
        uStack_358 = 0x6e776f6e6b6e75;
      }
      else {
        func_0x000107c614cc();
        func_0x000107c60640(uStack_358);
        func_0x000107c61170(ppppplVar20);
        ppppplVar30 = (long *****)pppplStack_350;
      }
      pppplStack_340 = (long ****)0x0;
      pppplStack_338 = (long ****)0xe000000000000000;
      func_0x000107c602fc(0x17);
      func_0x000107c6142c(pppplStack_338);
      pppplStack_340 = (long ****)0xd000000000000015;
      pppplStack_338 = (long ****)0x800000010f0f6110;
      func_0x000107c5fb78(uStack_358,ppppplVar30);
      func_0x000107c6142c();
      ppppplVar29 = (long *****)pppplStack_338;
      ppppplVar25 = (long *****)pppplStack_340;
      FUN_102b7229c();
      unaff_x21 = (long *****)&UNK_1105a46c0;
      ppppplVar7 = (long *****)0x0;
      ppppplVar20 = (long *****)0x0;
      func_0x000107c613f8();
      *ppppplVar30 = (long ****)ppppplVar25;
      ppppplVar30[1] = (long ****)ppppplVar29;
      func_0x000107c61654();
      func_0x000107c61170(ppppplVar15);
      func_0x000107c61170(ppppplVar12);
      func_0x000107c61170(ppppplVar13);
      func_0x000107c61170(ppppplVar24);
      unaff_x20 = (long *****)pppplStack_378;
      ppppplVar32 = ppppplVar15;
      ppppplVar11 = ppppplVar13;
    }
    ppppplVar13 = unaff_x20;
    func_0x000107c61170();
    ppppplVar15 = unaff_x21;
  }
LAB_102b71854:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  *(long ******)(acStack_460 + lVar4 + 0x40) = ppppplVar11;
  *(long ******)(acStack_460 + lVar4 + 0x48) = ppppplVar33;
  *(long ******)(acStack_460 + lVar4 + 0x50) = ppppplVar24;
  *(long ******)(acStack_460 + lVar4 + 0x58) = ppppplVar32;
  *(long ******)(acStack_460 + lVar4 + 0x60) = ppppplVar15;
  *(long ******)(acStack_460 + lVar4 + 0x68) = unaff_x20;
  *(long ******)(acStack_460 + lVar4 + 0x70) = ppppplVar29;
  *(long ******)(acStack_460 + lVar4 + 0x78) = unaff_x21;
  *(long ******)(acStack_460 + lVar4 + 0x80) = ppppplVar25;
  *(long *****)(auStack_3d8 + lVar4) = &ppplStack_3c0;
  *(undefined1 **)((long)alStack_3d0 + lVar4) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_3d0 + lVar4 + 8) = FUN_102b7189c;
  pppplVar14 = *ppppplVar13;
  pppplVar19 = pppplVar14;
  func_0x000107c5bd00();
  if (pppplVar19 == (long ****)0x1) {
    *(undefined ***)((long)alStack_500 + lVar4 + 0x10) = param_6;
    *(undefined8 *)((long)alStack_500 + lVar4 + 0x18) = param_7;
    uVar31 = (undefined4)((ulong)ppppplVar7 >> 0x20);
    if (((ulong)ppppplVar13[5] & 1) == 0) {
      *(long ******)((long)ppppplVar13 + 0x2c) = ppppplVar30;
      *(int *)((long)ppppplVar13 + 0x34) = (int)ppppplVar7;
      *(undefined4 *)(ppppplVar13 + 7) = uVar31;
      *(long ******)((long)ppppplVar13 + 0x3c) = ppppplVar20;
      uVar21 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      *(undefined8 *)((long)&uStack_4c0 + lVar4) = *(undefined8 *)PTR__kCMTimeZero_110348670;
      *(undefined8 *)((long)&uStack_4b8 + lVar4) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      *(undefined8 *)((long)auStack_4b0 + lVar4) = uVar21;
      func_0x000107c5bbb8(pppplVar14);
      *(undefined1 *)(ppppplVar13 + 5) = 1;
      func_0x0001007d6c6c(1,0x206e6f6973736553,0xef64657472617473,param_8,&PTR_DAT_1105a4928);
      ppuVar16 = param_6 + 4;
      func_0x000107c61618();
      if (ppuVar16 != (undefined **)0x0) {
        func_0x0001000d224c((long)&uStack_4c0 + lVar4);
        if (*(char *)((long)&uStack_4c0 + lVar4 + 4) == '\x01') {
          *(undefined ***)((long)auStack_4b0 + lVar4) = ppuVar16;
          *(undefined ***)((long)auStack_4b0 + lVar4 + 8) = param_6;
          func_0x000100087bd4((long)acStack_460 + lVar4,FUN_102b72404,(long)&uStack_4c0 + lVar4,
                              PTR___sSbN_11034dd40);
          lVar26 = _DAT_112ef90c8;
          if (acStack_460[lVar4] == '\x01') {
            func_0x000107c61428((long)ppuVar16 + _DAT_112ef90c8,auStack_4e0 + lVar4,0,0);
            lVar26 = *(long *)((long)ppuVar16 + lVar26);
            if (lVar26 != 0) {
              func_0x000107c615f0(lVar26);
              func_0x000107c5ba68();
              func_0x000107c615e8(lVar26);
            }
          }
        }
        func_0x000107c615e8(ppuVar16);
      }
    }
    *(undefined8 *)((long)alStack_500 + lVar4) = param_8;
    *(long ******)((long)alStack_500 + lVar4 + 8) = ppppplVar20;
    uVar21 = *(undefined8 *)((long)ppppplVar13 + 0x2c);
    uVar22 = *(undefined8 *)((long)ppppplVar13 + 0x3c);
    *(long ******)((long)&uStack_4c0 + lVar4) = ppppplVar30;
    *(int *)((long)&uStack_4b8 + lVar4) = (int)ppppplVar7;
    *(undefined4 *)((long)auStack_4b0 + lVar4 + -4) = uVar31;
    *(long ******)((long)auStack_4b0 + lVar4) = ppppplVar20;
    *(undefined8 *)(acStack_460 + lVar4) = uVar21;
    *(undefined8 *)(acStack_460 + lVar4 + 8) = *(undefined8 *)((long)ppppplVar13 + 0x34);
    *(undefined8 *)(acStack_460 + lVar4 + 0x10) = uVar22;
    func_0x000107c60a5c((long)&uStack_478 + lVar4,(long)&uStack_4c0 + lVar4,
                        (long)acStack_460 + lVar4);
    uVar21 = *(undefined8 *)((long)&uStack_478 + lVar4);
    uVar31 = *(undefined4 *)((long)auStack_470 + lVar4);
    uVar3 = *(undefined4 *)((long)auStack_470 + lVar4 + 4);
    uVar22 = *(undefined8 *)((long)&uStack_468 + lVar4);
    *(undefined8 *)((long)ppppplVar13 + 0x5c) = uVar21;
    *(undefined4 *)((long)ppppplVar13 + 100) = uVar31;
    *(undefined4 *)(ppppplVar13 + 0xd) = uVar3;
    *(undefined8 *)((long)ppppplVar13 + 0x6c) = uVar22;
    iVar6 = (int)ppppplVar13[1];
    func_0x000107c4a2dc();
    if (iVar6 != 0) {
      lVar26 = *(long *)((long)alStack_500 + lVar4 + 0x10) + _DAT_113804ec0;
      lVar17 = lVar26;
      func_0x000107c61618();
      if (lVar17 == 0) {
        uVar18 = *(undefined8 *)((long)alStack_500 + lVar4 + 0x18);
        func_0x000107c61174(uVar18);
      }
      else {
        lVar23 = *(long *)(lVar26 + 8);
        lVar26 = lVar17;
        func_0x000107c614f0();
        uVar18 = *(undefined8 *)((long)alStack_500 + lVar4 + 0x18);
        (**(code **)(lVar23 + 8))
                  (uVar18,ppppplVar30,ppppplVar7,*(undefined8 *)((long)alStack_500 + lVar4 + 8),
                   lVar26,lVar23);
        func_0x000107c615e8(lVar17);
      }
      pppplVar19 = ppppplVar13[3];
      *(undefined8 *)((long)&uStack_4c0 + lVar4) = uVar21;
      *(undefined4 *)((long)&uStack_4b8 + lVar4) = uVar31;
      *(undefined4 *)((long)auStack_4b0 + lVar4 + -4) = uVar3;
      *(undefined8 *)((long)auStack_4b0 + lVar4) = uVar22;
      func_0x000107c3df10();
      if (((ulong)pppplVar19 & 1) == 0) {
        *(undefined8 *)((long)&uStack_4c0 + lVar4) = 0;
        *(undefined8 *)((long)&uStack_4b8 + lVar4) = 0xe000000000000000;
        func_0x000107c602fc(0x33);
        *(undefined8 *)((long)&uStack_4c0 + lVar4) = *(undefined8 *)((long)&uStack_4c0 + lVar4);
        *(undefined8 *)((long)&uStack_4b8 + lVar4) = *(undefined8 *)((long)&uStack_4b8 + lVar4);
        func_0x000107c5fb78(0x1000000000000027,0x800000010f0f6150);
        pppplVar19 = pppplVar14;
        func_0x000107c5bd00();
        *(long *****)(acStack_460 + lVar4) = pppplVar19;
        puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar8);
        func_0x000107c5fb78(0x3d726f727265202c,0xe800000000000000);
        func_0x000107c42a28();
        func_0x000107c61180();
        if (pppplVar14 == (long ****)0x0) {
          uVar21 = 0x6c696e;
          uVar22 = 0xe300000000000000;
        }
        else {
          func_0x000107c614cc();
          uVar21 = *(undefined8 *)((long)auStack_4b0 + lVar4 + 0x20);
          uVar22 = *(undefined8 *)((long)auStack_4b0 + lVar4 + 0x28);
          func_0x000107c60640(uVar21,uVar22);
          func_0x000107c61170(pppplVar14);
        }
        uVar27 = *(undefined8 *)((long)alStack_500 + lVar4);
        func_0x000107c5fb78(uVar21,uVar22);
        func_0x000107c6142c(uVar22);
        uVar21 = *(undefined8 *)((long)&uStack_4b8 + lVar4);
        func_0x0001007d6c6c(3,*(undefined8 *)((long)&uStack_4c0 + lVar4),uVar21,uVar27,
                            &PTR_DAT_1105a4928);
        func_0x000107c6142c(uVar21);
      }
      func_0x000107c61170(uVar18);
    }
  }
  else {
    *(undefined8 *)((long)&uStack_4c0 + lVar4) = 0;
    *(undefined8 *)((long)&uStack_4b8 + lVar4) = 0xe000000000000000;
    func_0x000107c602fc(0x29);
    func_0x000107c6142c(*(undefined8 *)((long)&uStack_4b8 + lVar4));
    *(undefined8 *)((long)&uStack_4c0 + lVar4) = 0xd00000000000001d;
    *(undefined8 *)((long)&uStack_4b8 + lVar4) = 0x800000010f0f6130;
    pppplVar19 = pppplVar14;
    func_0x000107c5bd00();
    *(long *****)(acStack_460 + lVar4) = pppplVar19;
    puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar8);
    func_0x000107c5fb78(0x3d726f727265202c,0xe800000000000000);
    func_0x000107c42a28();
    func_0x000107c61180();
    if (pppplVar14 == (long ****)0x0) {
      uVar21 = 0x6c696e;
      uVar22 = 0xe300000000000000;
    }
    else {
      func_0x000107c614cc();
      uVar21 = *(undefined8 *)(acStack_460 + lVar4 + 0x20);
      uVar22 = *(undefined8 *)(acStack_460 + lVar4 + 0x28);
      func_0x000107c60640(uVar21,uVar22);
      func_0x000107c61170(pppplVar14);
    }
    func_0x000107c5fb78(uVar21,uVar22);
    func_0x000107c6142c(uVar22);
    uVar21 = *(undefined8 *)((long)&uStack_4b8 + lVar4);
    func_0x0001007d6c6c(3,*(undefined8 *)((long)&uStack_4c0 + lVar4),uVar21,param_8,
                        &PTR_DAT_1105a4928);
    func_0x000107c6142c(uVar21);
  }
  return;
}



/* Entry: 102b7189c; end: 102b71f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7189c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_120 [32];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar8 = *param_1;
  lVar2 = lVar8;
  func_0x000107c5bd00();
  if (lVar2 == 1) {
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      *(undefined8 *)((long)param_1 + 0x2c) = param_2;
      *(int *)((long)param_1 + 0x34) = (int)param_3;
      *(int *)(param_1 + 7) = (int)((ulong)param_3 >> 0x20);
      *(undefined8 *)((long)param_1 + 0x3c) = param_4;
      uStack_100 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      lStack_f0 = *(long *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_f8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      func_0x000107c5bbb8(lVar8);
      *(undefined1 *)(param_1 + 5) = 1;
      func_0x0001007d6c6c(1,0x206e6f6973736553,0xef64657472617473,param_7,&PTR_DAT_1105a4928);
      lVar2 = param_5 + 0x20;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x0001000d224c(&uStack_100);
        if (uStack_100._4_1_ == '\x01') {
          lStack_f0 = lVar2;
          lStack_e8 = param_5;
          func_0x000100087bd4(&lStack_a0,FUN_102b72404,&uStack_100,PTR___sSbN_11034dd40);
          lVar7 = _DAT_112ef90c8;
          if ((char)lStack_a0 == '\x01') {
            func_0x000107c61428(lVar2 + _DAT_112ef90c8,auStack_120,0,0);
            lVar7 = *(long *)(lVar2 + lVar7);
            if (lVar7 != 0) {
              func_0x000107c615f0(lVar7);
              func_0x000107c5ba68();
              func_0x000107c615e8(lVar7);
            }
          }
        }
        func_0x000107c615e8(lVar2);
      }
    }
    lStack_a0 = *(long *)((long)param_1 + 0x2c);
    uStack_90 = *(undefined8 *)((long)param_1 + 0x3c);
    uStack_98 = *(undefined8 *)((long)param_1 + 0x34);
    uStack_100 = param_2;
    uStack_f8 = param_3;
    lStack_f0 = param_4;
    func_0x000107c60a5c(&uStack_b8,&uStack_100,&lStack_a0);
    *(undefined8 *)((long)param_1 + 0x5c) = uStack_b8;
    *(undefined4 *)((long)param_1 + 100) = uStack_b0;
    *(undefined4 *)(param_1 + 0xd) = uStack_ac;
    *(undefined8 *)((long)param_1 + 0x6c) = uStack_a8;
    iVar1 = (int)param_1[1];
    func_0x000107c4a2dc();
    if (iVar1 != 0) {
      param_5 = param_5 + _DAT_113804ec0;
      lVar2 = param_5;
      func_0x000107c61618();
      if (lVar2 == 0) {
        func_0x000107c61174(param_6);
      }
      else {
        lVar5 = *(long *)(param_5 + 8);
        lVar7 = lVar2;
        func_0x000107c614f0();
        (**(code **)(lVar5 + 8))(param_6,param_2,param_3,param_4,lVar7,lVar5);
        func_0x000107c615e8(lVar2);
      }
      uVar3 = param_1[3];
      uStack_100 = uStack_b8;
      uStack_f8 = CONCAT44(uStack_ac,uStack_b0);
      lStack_f0 = uStack_a8;
      func_0x000107c3df10();
      if ((uVar3 & 1) == 0) {
        uStack_100 = 0;
        uStack_f8 = 0xe000000000000000;
        func_0x000107c602fc(0x33);
        func_0x000107c5fb78(0x1000000000000027,0x800000010f0f6150);
        lVar2 = lVar8;
        func_0x000107c5bd00();
        puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        lStack_a0 = lVar2;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar4);
        func_0x000107c5fb78(0x3d726f727265202c,0xe800000000000000);
        func_0x000107c42a28();
        func_0x000107c61180();
        if (lVar8 == 0) {
          uVar9 = 0x6c696e;
          uVar6 = 0xe300000000000000;
        }
        else {
          func_0x000107c614cc();
          uVar9 = uStack_d0;
          uVar6 = uStack_c8;
          func_0x000107c60640(uStack_d0,uStack_c8);
          func_0x000107c61170(lVar8);
        }
        func_0x000107c5fb78(uVar9,uVar6);
        func_0x000107c6142c(uVar6);
        uVar9 = uStack_f8;
        func_0x0001007d6c6c(3,uStack_100,uStack_f8,param_7,&PTR_DAT_1105a4928);
        func_0x000107c6142c(uVar9);
      }
      func_0x000107c61170(param_6);
    }
  }
  else {
    uStack_100 = 0;
    uStack_f8 = 0xe000000000000000;
    func_0x000107c602fc(0x29);
    func_0x000107c6142c(uStack_f8);
    uStack_100 = 0xd00000000000001d;
    uStack_f8 = 0x800000010f0f6130;
    lVar2 = lVar8;
    func_0x000107c5bd00();
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    lStack_a0 = lVar2;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    func_0x000107c5fb78(0x3d726f727265202c,0xe800000000000000);
    func_0x000107c42a28();
    func_0x000107c61180();
    if (lVar8 == 0) {
      uVar9 = 0x6c696e;
      uVar6 = 0xe300000000000000;
    }
    else {
      func_0x000107c614cc();
      uVar9 = uStack_80;
      uVar6 = uStack_78;
      func_0x000107c60640(uStack_80,uStack_78);
      func_0x000107c61170(lVar8);
    }
    func_0x000107c5fb78(uVar9,uVar6);
    func_0x000107c6142c(uVar6);
    uVar9 = uStack_f8;
    func_0x0001007d6c6c(3,uStack_100,uStack_f8,param_7,&PTR_DAT_1105a4928);
    func_0x000107c6142c(uVar9);
  }
  return;
}



/* Entry: 102b71f74; end: 102b71fe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b71f74(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100d1bf40(unaff_x20 + 0x20);
  lVar1 = _DAT_113804eb8;
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000100d1bf40(unaff_x20 + _DAT_113804ec0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b71fe8; end: 102b71fef;  */

void FUN_102b71fe8(void)

{
  if (lRam0000000112ef9288 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e71b63c);
  return;
}



/* Entry: 102b71ff0; end: 102b72027;  */

void FUN_102b71ff0(undefined8 param_1)

{
  if (lRam0000000112ef9288 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e71b63c);
  return;
}



/* Entry: 102b72028; end: 102b720cb;  */

void FUN_102b72028(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_50 = PTR___sBoWV_11034d678 + 0x40;
  puStack_48 = PTR___sBOWV_11034d658 + 0x40;
  puStack_40 = &UNK_10db287c0;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBi32_WV_11034d668 + 0x40;
    puStack_28 = &UNK_10db287c0;
    func_0x000107c61630(param_1,0x100,6,&puStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 102b720cc; end: 102b7213b;  */

void FUN_102b720cc(void)

{
  long unaff_x20;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_70 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_68 = 0x102b72158;
  puStack_60 = auStack_50;
  func_0x000100087bd4(FUN_102b72160,auStack_80,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 102b7213c; end: 102b7215f;  */

void FUN_102b7213c(long param_1,long param_2)

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



/* Entry: 102b72160; end: 102b7217b;  */

void FUN_102b72160(void)

{
  long unaff_x20;
  
  FUN_102b73b34(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102b7217c; end: 102b721b7;  */

undefined8 FUN_102b7217c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000102b74450();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102b721b8; end: 102b72217;  */

void FUN_102b721b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    func_0x000102b70258(uVar1);
  }
  FUN_102b707dc(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 102b72218; end: 102b72227;  */

void FUN_102b72218(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102b72228; end: 102b7229b;  */

undefined8 FUN_102b72228(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102b7229c; end: 102b722db;  */

void FUN_102b7229c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef9340 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db28848;
  func_0x000107c61520(&UNK_10db28848,&UNK_1105a46c0);
  puRam0000000112ef9340 = puVar1;
  return;
}



/* Entry: 102b722dc; end: 102b723f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b722dc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined1 auStack_170 [32];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_1;
  func_0x000107c5ed90();
  func_0x000107c48fd0();
  func_0x000107c61170(plVar7);
  uVar14 = 0;
  plVar7 = param_1;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar14);
    func_0x000107c61654();
    lVar8 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar8 + -8) + 8))(param_1,lVar8);
  }
  else {
    lVar8 = 0;
    func_0x000107c5ede0();
    pcVar15 = *(code **)(*(long *)(lVar8 + -8) + 8);
    func_0x000107c61174(0);
    (*pcVar15)(param_1,lVar8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar8 = param_1[2];
  lVar2 = param_1[3];
  lVar1 = param_1[4];
  lVar10 = param_1[5];
  lVar5 = param_1[6];
  lVar3 = param_1[7];
  lVar13 = *plVar7;
  lVar4 = lVar13;
  func_0x000107c5bd00();
  if (lVar4 == 1) {
    if ((*(byte *)(plVar7 + 5) & 1) == 0) {
      *(long *)((long)plVar7 + 0x2c) = lVar8;
      *(int *)((long)plVar7 + 0x34) = (int)lVar2;
      *(int *)(plVar7 + 7) = (int)((ulong)lVar2 >> 0x20);
      *(long *)((long)plVar7 + 0x3c) = lVar1;
      uStack_150 = *(long *)PTR__kCMTimeZero_110348670;
      lStack_140 = *(long *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_148 = *(long *)(PTR__kCMTimeZero_110348670 + 8);
      func_0x000107c5bbb8(lVar13);
      *(undefined1 *)(plVar7 + 5) = 1;
      func_0x0001007d6c6c(1,0x206e6f6973736553,0xef64657472617473,lVar3,&PTR_DAT_1105a4928);
      lVar4 = lVar10 + 0x20;
      func_0x000107c61618();
      if (lVar4 != 0) {
        func_0x0001000d224c(&uStack_150);
        if (uStack_150._4_1_ == '\x01') {
          lStack_140 = lVar4;
          lStack_138 = lVar10;
          func_0x000100087bd4(&lStack_f0,FUN_102b72404,&uStack_150,PTR___sSbN_11034dd40);
          lVar12 = _DAT_112ef90c8;
          if ((char)lStack_f0 == '\x01') {
            func_0x000107c61428(lVar4 + _DAT_112ef90c8,auStack_170,0,0);
            lVar12 = *(long *)(lVar4 + lVar12);
            if (lVar12 != 0) {
              func_0x000107c615f0(lVar12);
              func_0x000107c5ba68();
              func_0x000107c615e8(lVar12);
            }
          }
        }
        func_0x000107c615e8(lVar4);
      }
    }
    lStack_f0 = *(long *)((long)plVar7 + 0x2c);
    uStack_e0 = *(undefined8 *)((long)plVar7 + 0x3c);
    uStack_e8 = *(undefined8 *)((long)plVar7 + 0x34);
    uStack_150 = lVar8;
    uStack_148 = lVar2;
    lStack_140 = lVar1;
    func_0x000107c60a5c(&uStack_108,&uStack_150,&lStack_f0);
    *(undefined8 *)((long)plVar7 + 0x5c) = uStack_108;
    *(undefined4 *)((long)plVar7 + 100) = uStack_100;
    *(undefined4 *)(plVar7 + 0xd) = uStack_fc;
    *(undefined8 *)((long)plVar7 + 0x6c) = uStack_f8;
    lVar4 = plVar7[1];
    func_0x000107c4a2dc();
    if ((int)lVar4 != 0) {
      lVar10 = lVar10 + _DAT_113804ec0;
      lVar4 = lVar10;
      func_0x000107c61618();
      if (lVar4 == 0) {
        func_0x000107c61174(lVar5);
        lVar4 = lVar5;
      }
      else {
        lVar12 = *(long *)(lVar10 + 8);
        lVar10 = lVar4;
        func_0x000107c614f0();
        (**(code **)(lVar12 + 8))(lVar5,lVar8,lVar2,lVar1,lVar10,lVar12);
        func_0x000107c615e8(lVar4);
        lVar4 = lVar5;
      }
      uVar6 = plVar7[3];
      uStack_150 = uStack_108;
      uStack_148 = CONCAT44(uStack_fc,uStack_100);
      lStack_140 = uStack_f8;
      func_0x000107c3df10();
      if ((uVar6 & 1) == 0) {
        uStack_150 = 0;
        uStack_148 = 0xe000000000000000;
        func_0x000107c602fc(0x33);
        func_0x000107c5fb78(0x1000000000000027,0x800000010f0f6150);
        lVar10 = lVar13;
        func_0x000107c5bd00();
        puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        lStack_f0 = lVar10;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar9);
        func_0x000107c5fb78(0x3d726f727265202c,0xe800000000000000);
        func_0x000107c42a28();
        func_0x000107c61180();
        if (lVar13 == 0) {
          uVar14 = 0x6c696e;
          uVar11 = 0xe300000000000000;
        }
        else {
          func_0x000107c614cc();
          uVar14 = uStack_120;
          uVar11 = uStack_118;
          func_0x000107c60640(uStack_120,uStack_118);
          func_0x000107c61170(lVar13);
        }
        func_0x000107c5fb78(uVar14,uVar11);
        func_0x000107c6142c(uVar11);
        uVar14 = uStack_148;
        func_0x0001007d6c6c(3,uStack_150,uStack_148,lVar3,&PTR_DAT_1105a4928);
        func_0x000107c6142c(uVar14);
      }
      func_0x000107c61170(lVar4);
    }
  }
  else {
    uStack_150 = 0;
    uStack_148 = 0xe000000000000000;
    func_0x000107c602fc(0x29);
    func_0x000107c6142c(uStack_148);
    uStack_150 = 0xd00000000000001d;
    uStack_148 = -0x7ffffffef0f09ed0;
    lVar10 = lVar13;
    func_0x000107c5bd00();
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    lStack_f0 = lVar10;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar9);
    func_0x000107c5fb78(0x3d726f727265202c,0xe800000000000000);
    func_0x000107c42a28();
    func_0x000107c61180();
    if (lVar13 == 0) {
      uVar14 = 0x6c696e;
      uVar11 = 0xe300000000000000;
    }
    else {
      func_0x000107c614cc();
      uVar14 = uStack_d0;
      uVar11 = uStack_c8;
      func_0x000107c60640(uStack_d0,uStack_c8);
      func_0x000107c61170(lVar13);
    }
    func_0x000107c5fb78(uVar14,uVar11);
    func_0x000107c6142c(uVar11);
    lVar4 = uStack_148;
    func_0x0001007d6c6c(3,uStack_150,uStack_148,lVar3,&PTR_DAT_1105a4928);
    func_0x000107c6142c(lVar4);
  }
  return lVar4;
}



/* Entry: 102b723f4; end: 102b72403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b723f4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_120 [32];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar11 = *param_1;
  lVar4 = lVar11;
  func_0x000107c5bd00();
  if (lVar4 == 1) {
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      *(undefined8 *)((long)param_1 + 0x2c) = uVar12;
      *(int *)((long)param_1 + 0x34) = (int)uVar1;
      *(int *)(param_1 + 7) = (int)((ulong)uVar1 >> 0x20);
      *(undefined8 *)((long)param_1 + 0x3c) = uVar9;
      uStack_100 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      lStack_f0 = *(long *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_f8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      func_0x000107c5bbb8(lVar11);
      *(undefined1 *)(param_1 + 5) = 1;
      func_0x0001007d6c6c(1,0x206e6f6973736553,0xef64657472617473,uVar2,&PTR_DAT_1105a4928);
      lVar4 = lVar5 + 0x20;
      func_0x000107c61618();
      if (lVar4 != 0) {
        func_0x0001000d224c(&uStack_100);
        if (uStack_100._4_1_ == '\x01') {
          lStack_f0 = lVar4;
          lStack_e8 = lVar5;
          func_0x000100087bd4(&lStack_a0,FUN_102b72404,&uStack_100,PTR___sSbN_11034dd40);
          lVar10 = _DAT_112ef90c8;
          if ((char)lStack_a0 == '\x01') {
            func_0x000107c61428(lVar4 + _DAT_112ef90c8,auStack_120,0,0);
            lVar10 = *(long *)(lVar4 + lVar10);
            if (lVar10 != 0) {
              func_0x000107c615f0(lVar10);
              func_0x000107c5ba68();
              func_0x000107c615e8(lVar10);
            }
          }
        }
        func_0x000107c615e8(lVar4);
      }
    }
    lStack_a0 = *(long *)((long)param_1 + 0x2c);
    uStack_90 = *(undefined8 *)((long)param_1 + 0x3c);
    uStack_98 = *(undefined8 *)((long)param_1 + 0x34);
    uStack_100 = uVar12;
    uStack_f8 = uVar1;
    lStack_f0 = uVar9;
    func_0x000107c60a5c(&uStack_b8,&uStack_100,&lStack_a0);
    *(undefined8 *)((long)param_1 + 0x5c) = uStack_b8;
    *(undefined4 *)((long)param_1 + 100) = uStack_b0;
    *(undefined4 *)(param_1 + 0xd) = uStack_ac;
    *(undefined8 *)((long)param_1 + 0x6c) = uStack_a8;
    iVar3 = (int)param_1[1];
    func_0x000107c4a2dc();
    if (iVar3 != 0) {
      lVar5 = lVar5 + _DAT_113804ec0;
      lVar4 = lVar5;
      func_0x000107c61618();
      if (lVar4 == 0) {
        func_0x000107c61174(uVar6);
      }
      else {
        lVar10 = *(long *)(lVar5 + 8);
        lVar5 = lVar4;
        func_0x000107c614f0();
        (**(code **)(lVar10 + 8))(uVar6,uVar12,uVar1,uVar9,lVar5,lVar10);
        func_0x000107c615e8(lVar4);
      }
      uVar7 = param_1[3];
      uStack_100 = uStack_b8;
      uStack_f8 = CONCAT44(uStack_ac,uStack_b0);
      lStack_f0 = uStack_a8;
      func_0x000107c3df10();
      if ((uVar7 & 1) == 0) {
        uStack_100 = 0;
        uStack_f8 = 0xe000000000000000;
        func_0x000107c602fc(0x33);
        func_0x000107c5fb78(0x1000000000000027,0x800000010f0f6150);
        lVar5 = lVar11;
        func_0x000107c5bd00();
        puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        lStack_a0 = lVar5;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar8);
        func_0x000107c5fb78(0x3d726f727265202c,0xe800000000000000);
        func_0x000107c42a28();
        func_0x000107c61180();
        if (lVar11 == 0) {
          uVar12 = 0x6c696e;
          uVar9 = 0xe300000000000000;
        }
        else {
          func_0x000107c614cc();
          uVar12 = uStack_d0;
          uVar9 = uStack_c8;
          func_0x000107c60640(uStack_d0,uStack_c8);
          func_0x000107c61170(lVar11);
        }
        func_0x000107c5fb78(uVar12,uVar9);
        func_0x000107c6142c(uVar9);
        uVar12 = uStack_f8;
        func_0x0001007d6c6c(3,uStack_100,uStack_f8,uVar2,&PTR_DAT_1105a4928);
        func_0x000107c6142c(uVar12);
      }
      func_0x000107c61170(uVar6);
    }
  }
  else {
    uStack_100 = 0;
    uStack_f8 = 0xe000000000000000;
    func_0x000107c602fc(0x29);
    func_0x000107c6142c(uStack_f8);
    uStack_100 = 0xd00000000000001d;
    uStack_f8 = 0x800000010f0f6130;
    lVar5 = lVar11;
    func_0x000107c5bd00();
    puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    lStack_a0 = lVar5;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar8);
    func_0x000107c5fb78(0x3d726f727265202c,0xe800000000000000);
    func_0x000107c42a28();
    func_0x000107c61180();
    if (lVar11 == 0) {
      uVar12 = 0x6c696e;
      uVar9 = 0xe300000000000000;
    }
    else {
      func_0x000107c614cc();
      uVar12 = uStack_80;
      uVar9 = uStack_78;
      func_0x000107c60640(uStack_80,uStack_78);
      func_0x000107c61170(lVar11);
    }
    func_0x000107c5fb78(uVar12,uVar9);
    func_0x000107c6142c(uVar9);
    uVar12 = uStack_f8;
    func_0x0001007d6c6c(3,uStack_100,uStack_f8,uVar2,&PTR_DAT_1105a4928);
    func_0x000107c6142c(uVar12);
  }
  return;
}



/* Entry: 102b72404; end: 102b7241b;  */

void FUN_102b72404(void)

{
  long unaff_x20;
  
  FUN_102b6a780(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102b7241c; end: 102b72423;  */

void FUN_102b7241c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined8 *puVar6;
  undefined8 auStack_140 [14];
  undefined4 auStack_d0 [2];
  undefined8 auStack_c8 [14];
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  lVar3 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)auStack_140 - extraout_x8;
  lVar3 = 0;
  func_0x000102b74450();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar6 = (undefined8 *)(lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  auStack_c8[2] = 0;
  auStack_c8[1] = 0;
  auStack_c8[4] = 0;
  auStack_c8[3] = 0;
  auStack_c8[6] = 0;
  auStack_c8[5] = 0;
  auStack_c8[8] = 0;
  auStack_c8[7] = 0;
  auStack_c8[10] = 0;
  auStack_c8[9] = 0;
  auStack_c8[0xc] = 0;
  auStack_c8[0xb] = 0;
  auStack_c8[0] = 2;
  auStack_c8[0xd] = 0;
  uStack_54 = 0x80;
  uStack_58 = 0;
  FUN_102b7282c(puVar6,auStack_c8);
  puVar4 = puVar6;
  func_0x000107c614c4(puVar6,lVar3);
  if ((int)puVar4 == 1) {
    lVar3 = 0x112ef9348;
    func_0x0001000285a8(0x112ef9348,&UNK_10db287e0);
    puVar4 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar3 + 0x30));
    pcVar1 = (code *)*puVar4;
    uVar2 = puVar4[1];
    FUN_102b72424(puVar6,lVar5);
    (*pcVar1)(lVar5);
    func_0x000107c61574(uVar2);
    func_0x000102b72228(lVar5,0x112d5d568,&UNK_10d9392e0);
  }
  else if ((int)puVar4 == 3) {
    auStack_140[9] = puVar6[9];
    auStack_140[8] = puVar6[8];
    auStack_140[0xb] = puVar6[0xb];
    auStack_140[10] = puVar6[10];
    auStack_140[0xd] = puVar6[0xd];
    auStack_140[0xc] = puVar6[0xc];
    auStack_d0[0] = *(undefined4 *)(puVar6 + 0xe);
    auStack_140[1] = puVar6[1];
    auStack_140[0] = *puVar6;
    auStack_140[3] = puVar6[3];
    auStack_140[2] = puVar6[2];
    auStack_140[5] = puVar6[5];
    auStack_140[4] = puVar6[4];
    auStack_140[7] = puVar6[7];
    auStack_140[6] = puVar6[6];
    uVar2 = puVar6[0x10];
    FUN_102b70a30(auStack_140,puVar6[0xf],uVar2);
    func_0x000107c61574(uVar2);
    func_0x000102b72268(auStack_140);
  }
  else {
    FUN_102b7217c(puVar6);
  }
  return;
}



/* Entry: 102b72424; end: 102b72473;  */

undefined8 FUN_102b72424(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102b72474; end: 102b724bb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_102b72474(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  ulong uVar7;
  long unaff_x20;
  long *plVar8;
  long alStack_80 [4];
  
  lVar5 = 0;
  func_0x000107c5ede0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x98 & (uVar7 ^ 0xffffffffffffffff);
  uVar6 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar7 + 7 & 0xffffffffffffff8));
  pcVar1 = *(code **)(unaff_x20 + 0x88);
  lVar5 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0,*(undefined8 *)(unaff_x20 + 0x90));
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar8 = (long *)((long)alStack_80 - extraout_x8);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c42a28();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x0001007d6c6c(1,0xd000000000000017,0x800000010f0f6230,uVar6,&PTR_DAT_1105a4928);
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(plVar8,unaff_x20 + uVar7,lVar3);
    func_0x000107c6159c(plVar8,lVar5,0);
    (*pcVar1)(plVar8);
  }
  else {
    alStack_80[2] = 0;
    alStack_80[3] = 0xe000000000000000;
    func_0x000107c602fc(0x26);
    func_0x000107c5fb78(0xd000000000000024,0x800000010f0f6250);
    uVar4 = 0x112d393f0;
    alStack_80[1] = lVar3;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(alStack_80 + 1,alStack_80 + 2,uVar4,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    lVar2 = alStack_80[3];
    func_0x0001007d6c6c(3,alStack_80[2],alStack_80[3],uVar6,&PTR_DAT_1105a4928);
    func_0x000107c6142c(lVar2);
    *plVar8 = lVar3;
    func_0x000107c6159c(plVar8,lVar5,1);
    func_0x000107c61174(lVar3);
    (*pcVar1)(plVar8);
    func_0x000107c61170(lVar3);
  }
  FUN_102b72228(plVar8,0x112d5d568,&UNK_10d9392e0);
  return;
}



/* Entry: 102b724bc; end: 102b7257b;  */

undefined8 FUN_102b724bc(undefined8 param_1,undefined8 param_2)

{
  FUN_102b759a8(param_2,param_1);
  return param_2;
}



/* Entry: 102b7257c; end: 102b72593;  */

void FUN_102b7257c(long param_1)

{
  if (0xfffffffe < *(ulong *)(param_1 + 8)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 102b72594; end: 102b726f7;  */

undefined8 * FUN_102b72594(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 102b726f8; end: 102b727f7;  */

int FUN_102b726f8(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 102b727f8; end: 102b7280b;  */

void FUN_102b727f8(void)

{
  FUN_102b72160();
  return;
}



/* Entry: 102b7280c; end: 102b7282b;  */

void FUN_102b7280c(long param_1,long param_2)

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



/* Entry: 102b7282c; end: 102b7288f;  */

void FUN_102b7282c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  uVar1 = 0;
  uStack_50 = param_2;
  func_0x000102b74450(0);
  func_0x000100087bd4(param_1,0x102b74434,auStack_60,uVar1);
  return;
}



/* Entry: 102b72890; end: 102b73b33;  */

void FUN_102b72890(long *param_1,long *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  byte bVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined1 auVar48 [16];
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  ulong uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  int iStack_260;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  ulong uStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  int iStack_1e0;
  byte bStack_1dc;
  undefined1 auStack_1d8 [120];
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  lVar22 = *param_2;
  lVar6 = param_2[1];
  lVar1 = param_2[2];
  lVar7 = param_2[3];
  lVar17 = param_2[4];
  uVar8 = param_2[5];
  lVar2 = param_2[6];
  lVar16 = param_2[7];
  lVar3 = param_2[8];
  lVar26 = param_2[9];
  lVar4 = param_2[10];
  lVar29 = param_2[0xb];
  bVar32 = *(byte *)((long)param_2 + 0x74);
  iVar9 = (int)*(uint5 *)(param_2 + 0xe);
  uVar24 = (ulong)*(uint5 *)(param_2 + 0xe);
  lVar5 = param_2[0xc];
  lVar30 = param_2[0xd];
  if (bVar32 >> 6 == 0) {
    bVar10 = bVar32 & 0x3f;
    plVar27 = (long *)(param_3 + 0x18);
    lVar23 = *plVar27;
    if ((bVar32 & 0x3f) == 1) {
      lVar25 = *(long *)(param_3 + 0x40);
      if ((~(uint)lVar25 & 0xc0000000) == 0) {
        uVar20 = *(undefined8 *)(param_3 + 0x70);
        uVar15 = *(undefined8 *)(param_3 + 0x68);
        uVar50 = *(undefined8 *)(param_3 + 0x60);
        uVar49 = *(undefined8 *)(param_3 + 0x58);
        uVar52 = *(undefined8 *)(param_3 + 0x50);
        uVar51 = *(undefined8 *)(param_3 + 0x48);
        uVar56 = *(undefined8 *)(param_3 + 0x28);
        uVar55 = *(undefined8 *)(param_3 + 0x20);
        uVar54 = *(undefined8 *)(param_3 + 0x38);
        uVar53 = *(undefined8 *)(param_3 + 0x30);
        bVar32 = (byte)uVar51 | (byte)uVar55 | (byte)uVar15 |
                 (byte)uVar49 | (byte)uVar53 | *(byte *)(param_3 + 0x78);
        bVar33 = (byte)((ulong)uVar51 >> 8) | (byte)((ulong)uVar55 >> 8) |
                 (byte)((ulong)uVar15 >> 8) |
                 (byte)((ulong)uVar49 >> 8) | (byte)((ulong)uVar53 >> 8) | *(byte *)(param_3 + 0x79)
        ;
        bVar34 = (byte)((ulong)uVar51 >> 0x10) | (byte)((ulong)uVar55 >> 0x10) |
                 (byte)((ulong)uVar15 >> 0x10) |
                 (byte)((ulong)uVar49 >> 0x10) | (byte)((ulong)uVar53 >> 0x10) |
                 *(byte *)(param_3 + 0x7a);
        bVar35 = (byte)((ulong)uVar51 >> 0x18) | (byte)((ulong)uVar55 >> 0x18) |
                 (byte)((ulong)uVar15 >> 0x18) |
                 (byte)((ulong)uVar49 >> 0x18) | (byte)((ulong)uVar53 >> 0x18) |
                 *(byte *)(param_3 + 0x7b);
        bVar36 = (byte)((ulong)uVar51 >> 0x20) | (byte)((ulong)uVar55 >> 0x20) |
                 (byte)((ulong)uVar15 >> 0x20) |
                 (byte)((ulong)uVar49 >> 0x20) | (byte)((ulong)uVar53 >> 0x20) |
                 *(byte *)(param_3 + 0x7c);
        bVar37 = (byte)((ulong)uVar51 >> 0x28) | (byte)((ulong)uVar55 >> 0x28) |
                 (byte)((ulong)uVar15 >> 0x28) |
                 (byte)((ulong)uVar49 >> 0x28) | (byte)((ulong)uVar53 >> 0x28) |
                 *(byte *)(param_3 + 0x7d);
        bVar38 = (byte)((ulong)uVar51 >> 0x30) | (byte)((ulong)uVar55 >> 0x30) |
                 (byte)((ulong)uVar15 >> 0x30) |
                 (byte)((ulong)uVar49 >> 0x30) | (byte)((ulong)uVar53 >> 0x30) |
                 *(byte *)(param_3 + 0x7e);
        bVar39 = (byte)((ulong)uVar51 >> 0x38) | (byte)((ulong)uVar55 >> 0x38) |
                 (byte)((ulong)uVar15 >> 0x38) |
                 (byte)((ulong)uVar49 >> 0x38) | (byte)((ulong)uVar53 >> 0x38) |
                 *(byte *)(param_3 + 0x7f);
        bVar40 = (byte)uVar52 | (byte)uVar56 | (byte)uVar20 |
                 (byte)uVar50 | (byte)uVar54 | *(byte *)(param_3 + 0x80);
        bVar41 = (byte)((ulong)uVar52 >> 8) | (byte)((ulong)uVar56 >> 8) |
                 (byte)((ulong)uVar20 >> 8) |
                 (byte)((ulong)uVar50 >> 8) | (byte)((ulong)uVar54 >> 8) | *(byte *)(param_3 + 0x81)
        ;
        bVar42 = (byte)((ulong)uVar52 >> 0x10) | (byte)((ulong)uVar56 >> 0x10) |
                 (byte)((ulong)uVar20 >> 0x10) |
                 (byte)((ulong)uVar50 >> 0x10) | (byte)((ulong)uVar54 >> 0x10) |
                 *(byte *)(param_3 + 0x82);
        bVar43 = (byte)((ulong)uVar52 >> 0x18) | (byte)((ulong)uVar56 >> 0x18) |
                 (byte)((ulong)uVar20 >> 0x18) |
                 (byte)((ulong)uVar50 >> 0x18) | (byte)((ulong)uVar54 >> 0x18) |
                 *(byte *)(param_3 + 0x83);
        bVar44 = (byte)((ulong)uVar52 >> 0x20) | (byte)((ulong)uVar56 >> 0x20) |
                 (byte)((ulong)uVar20 >> 0x20) |
                 (byte)((ulong)uVar50 >> 0x20) | (byte)((ulong)uVar54 >> 0x20) |
                 *(byte *)(param_3 + 0x84);
        bVar45 = (byte)((ulong)uVar52 >> 0x28) | (byte)((ulong)uVar56 >> 0x28) |
                 (byte)((ulong)uVar20 >> 0x28) |
                 (byte)((ulong)uVar50 >> 0x28) | (byte)((ulong)uVar54 >> 0x28) |
                 *(byte *)(param_3 + 0x85);
        bVar46 = (byte)((ulong)uVar52 >> 0x30) | (byte)((ulong)uVar56 >> 0x30) |
                 (byte)((ulong)uVar20 >> 0x30) |
                 (byte)((ulong)uVar50 >> 0x30) | (byte)((ulong)uVar54 >> 0x30) |
                 *(byte *)(param_3 + 0x86);
        bVar47 = (byte)((ulong)uVar52 >> 0x38) | (byte)((ulong)uVar56 >> 0x38) |
                 (byte)((ulong)uVar20 >> 0x38) |
                 (byte)((ulong)uVar50 >> 0x38) | (byte)((ulong)uVar54 >> 0x38) |
                 *(byte *)(param_3 + 0x87);
        auVar12[1] = bVar33;
        auVar12[0] = bVar32;
        auVar12[2] = bVar34;
        auVar12[3] = bVar35;
        auVar12[4] = bVar36;
        auVar12[5] = bVar37;
        auVar12[6] = bVar38;
        auVar12[7] = bVar39;
        auVar12[8] = bVar40;
        auVar12[9] = bVar41;
        auVar12[10] = bVar42;
        auVar12[0xb] = bVar43;
        auVar12[0xc] = bVar44;
        auVar12[0xd] = bVar45;
        auVar12[0xe] = bVar46;
        auVar12[0xf] = bVar47;
        auVar13[1] = bVar33;
        auVar13[0] = bVar32;
        auVar13[2] = bVar34;
        auVar13[3] = bVar35;
        auVar13[4] = bVar36;
        auVar13[5] = bVar37;
        auVar13[6] = bVar38;
        auVar13[7] = bVar39;
        auVar13[8] = bVar40;
        auVar13[9] = bVar41;
        auVar13[10] = bVar42;
        auVar13[0xb] = bVar43;
        auVar13[0xc] = bVar44;
        auVar13[0xd] = bVar45;
        auVar13[0xe] = bVar46;
        auVar13[0xf] = bVar47;
        auVar48 = NEON_ext(auVar12,auVar13,8,1);
        lVar11 = CONCAT17(bVar39 | auVar48[7],
                          CONCAT16(bVar38 | auVar48[6],
                                   CONCAT15(bVar37 | auVar48[5],
                                            CONCAT14(bVar36 | auVar48[4],
                                                     CONCAT13(bVar35 | auVar48[3],
                                                              CONCAT12(bVar34 | auVar48[2],
                                                                       CONCAT11(bVar33 | auVar48[1],
                                                                                bVar32 | auVar48[0])
                                                                      ))))));
        if ((((*(int *)(param_3 + 0x88) == 0) && (lVar25 == 0xc0000000)) &&
            ((lVar23 == 1 && (lVar11 == 0)))) ||
           ((((*(int *)(param_3 + 0x88) == 0 && (lVar25 == 0xc0000000)) && (lVar23 == 2)) &&
            (lVar11 == 0)))) {
          lVar23 = *(long *)(param_3 + 0x90);
          lVar25 = *(long *)(param_3 + 0x98);
          *(undefined8 *)(param_3 + 0x90) = 0;
          *(undefined8 *)(param_3 + 0x98) = 0;
          uStack_98 = *(undefined8 *)(param_3 + 0x60);
          uStack_a0 = *(undefined8 *)(param_3 + 0x58);
          uStack_90 = *(undefined8 *)(param_3 + 0x68);
          uStack_88 = *(undefined8 *)(param_3 + 0x70);
          uStack_78 = *(undefined8 *)(param_3 + 0x80);
          uStack_80 = *(undefined8 *)(param_3 + 0x78);
          uStack_70 = *(undefined4 *)(param_3 + 0x88);
          uStack_d8 = *(undefined8 *)(param_3 + 0x20);
          lStack_e0 = *plVar27;
          uStack_d0 = *(undefined8 *)(param_3 + 0x28);
          uStack_c8 = *(undefined8 *)(param_3 + 0x30);
          uStack_b8 = *(undefined8 *)(param_3 + 0x40);
          uStack_c0 = *(undefined8 *)(param_3 + 0x38);
          uStack_b0 = *(undefined8 *)(param_3 + 0x48);
          uStack_a8 = *(undefined8 *)(param_3 + 0x50);
          *(long *)(param_3 + 0x18) = lVar22;
          *(undefined8 *)(param_3 + 0x40) = 0x80000000;
          lStack_250 = lVar22;
          lStack_248 = lVar6;
          lStack_240 = lVar1;
          lStack_238 = lVar7;
          lStack_230 = lVar17;
          uStack_228 = uVar8;
          lStack_220 = lVar2;
          lStack_218 = lVar16;
          lStack_210 = lVar3;
          lStack_208 = lVar26;
          lStack_200 = lVar4;
          lStack_1f8 = lVar29;
          lStack_1f0 = lVar5;
          lStack_1e8 = lVar30;
          iStack_1e0 = iVar9;
          bStack_1dc = bVar10;
          FUN_102b74488(param_2,&lStack_2d0);
          func_0x000102b744bc(&lStack_250,&lStack_2d0);
          func_0x000102b74408(&lStack_e0);
          lStack_2d0 = 0;
          lStack_2c8 = -0x2000000000000000;
          func_0x000107c602fc(0x16);
          func_0x000107c5fb78(0xd000000000000014,0x800000010f0f63b0);
          uVar15 = 0x112d393f0;
          lStack_160 = lVar22;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          func_0x000107c603d0(&lStack_160,&lStack_2d0,uVar15,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          lVar1 = lStack_2c8;
          func_0x0001007d6c6c(3,lStack_2d0,lStack_2c8,param_4,&PTR_DAT_1105a4908);
          func_0x000107c6142c(lVar1);
          *param_1 = lVar22;
          param_1[1] = lVar23;
          param_1[2] = lVar25;
          uVar15 = 0;
          func_0x000102b74450(0);
          uVar20 = 4;
          goto LAB_102b73980;
        }
      }
      uVar15 = 0;
      func_0x000102b74450(0);
      uVar20 = 5;
      goto LAB_102b73980;
    }
    lVar25 = *(long *)(param_3 + 0x40);
    if ((~(uint)lVar25 & 0xc0000000) == 0) {
      uVar20 = *(undefined8 *)(param_3 + 0x70);
      uVar15 = *(undefined8 *)(param_3 + 0x68);
      uVar50 = *(undefined8 *)(param_3 + 0x60);
      uVar49 = *(undefined8 *)(param_3 + 0x58);
      uVar52 = *(undefined8 *)(param_3 + 0x50);
      uVar51 = *(undefined8 *)(param_3 + 0x48);
      uVar56 = *(undefined8 *)(param_3 + 0x28);
      uVar55 = *(undefined8 *)(param_3 + 0x20);
      uVar54 = *(undefined8 *)(param_3 + 0x38);
      uVar53 = *(undefined8 *)(param_3 + 0x30);
      bVar32 = (byte)uVar51 | (byte)uVar55 | (byte)uVar15 |
               (byte)uVar49 | (byte)uVar53 | *(byte *)(param_3 + 0x78);
      bVar33 = (byte)((ulong)uVar51 >> 8) | (byte)((ulong)uVar55 >> 8) | (byte)((ulong)uVar15 >> 8)
               | (byte)((ulong)uVar49 >> 8) | (byte)((ulong)uVar53 >> 8) | *(byte *)(param_3 + 0x79)
      ;
      bVar34 = (byte)((ulong)uVar51 >> 0x10) | (byte)((ulong)uVar55 >> 0x10) |
               (byte)((ulong)uVar15 >> 0x10) |
               (byte)((ulong)uVar49 >> 0x10) | (byte)((ulong)uVar53 >> 0x10) |
               *(byte *)(param_3 + 0x7a);
      bVar35 = (byte)((ulong)uVar51 >> 0x18) | (byte)((ulong)uVar55 >> 0x18) |
               (byte)((ulong)uVar15 >> 0x18) |
               (byte)((ulong)uVar49 >> 0x18) | (byte)((ulong)uVar53 >> 0x18) |
               *(byte *)(param_3 + 0x7b);
      bVar36 = (byte)((ulong)uVar51 >> 0x20) | (byte)((ulong)uVar55 >> 0x20) |
               (byte)((ulong)uVar15 >> 0x20) |
               (byte)((ulong)uVar49 >> 0x20) | (byte)((ulong)uVar53 >> 0x20) |
               *(byte *)(param_3 + 0x7c);
      bVar37 = (byte)((ulong)uVar51 >> 0x28) | (byte)((ulong)uVar55 >> 0x28) |
               (byte)((ulong)uVar15 >> 0x28) |
               (byte)((ulong)uVar49 >> 0x28) | (byte)((ulong)uVar53 >> 0x28) |
               *(byte *)(param_3 + 0x7d);
      bVar38 = (byte)((ulong)uVar51 >> 0x30) | (byte)((ulong)uVar55 >> 0x30) |
               (byte)((ulong)uVar15 >> 0x30) |
               (byte)((ulong)uVar49 >> 0x30) | (byte)((ulong)uVar53 >> 0x30) |
               *(byte *)(param_3 + 0x7e);
      bVar39 = (byte)((ulong)uVar51 >> 0x38) | (byte)((ulong)uVar55 >> 0x38) |
               (byte)((ulong)uVar15 >> 0x38) |
               (byte)((ulong)uVar49 >> 0x38) | (byte)((ulong)uVar53 >> 0x38) |
               *(byte *)(param_3 + 0x7f);
      bVar40 = (byte)uVar52 | (byte)uVar56 | (byte)uVar20 |
               (byte)uVar50 | (byte)uVar54 | *(byte *)(param_3 + 0x80);
      bVar41 = (byte)((ulong)uVar52 >> 8) | (byte)((ulong)uVar56 >> 8) | (byte)((ulong)uVar20 >> 8)
               | (byte)((ulong)uVar50 >> 8) | (byte)((ulong)uVar54 >> 8) | *(byte *)(param_3 + 0x81)
      ;
      bVar42 = (byte)((ulong)uVar52 >> 0x10) | (byte)((ulong)uVar56 >> 0x10) |
               (byte)((ulong)uVar20 >> 0x10) |
               (byte)((ulong)uVar50 >> 0x10) | (byte)((ulong)uVar54 >> 0x10) |
               *(byte *)(param_3 + 0x82);
      bVar43 = (byte)((ulong)uVar52 >> 0x18) | (byte)((ulong)uVar56 >> 0x18) |
               (byte)((ulong)uVar20 >> 0x18) |
               (byte)((ulong)uVar50 >> 0x18) | (byte)((ulong)uVar54 >> 0x18) |
               *(byte *)(param_3 + 0x83);
      bVar44 = (byte)((ulong)uVar52 >> 0x20) | (byte)((ulong)uVar56 >> 0x20) |
               (byte)((ulong)uVar20 >> 0x20) |
               (byte)((ulong)uVar50 >> 0x20) | (byte)((ulong)uVar54 >> 0x20) |
               *(byte *)(param_3 + 0x84);
      bVar45 = (byte)((ulong)uVar52 >> 0x28) | (byte)((ulong)uVar56 >> 0x28) |
               (byte)((ulong)uVar20 >> 0x28) |
               (byte)((ulong)uVar50 >> 0x28) | (byte)((ulong)uVar54 >> 0x28) |
               *(byte *)(param_3 + 0x85);
      bVar46 = (byte)((ulong)uVar52 >> 0x30) | (byte)((ulong)uVar56 >> 0x30) |
               (byte)((ulong)uVar20 >> 0x30) |
               (byte)((ulong)uVar50 >> 0x30) | (byte)((ulong)uVar54 >> 0x30) |
               *(byte *)(param_3 + 0x86);
      bVar47 = (byte)((ulong)uVar52 >> 0x38) | (byte)((ulong)uVar56 >> 0x38) |
               (byte)((ulong)uVar20 >> 0x38) |
               (byte)((ulong)uVar50 >> 0x38) | (byte)((ulong)uVar54 >> 0x38) |
               *(byte *)(param_3 + 0x87);
      auVar48[1] = bVar33;
      auVar48[0] = bVar32;
      auVar48[2] = bVar34;
      auVar48[3] = bVar35;
      auVar48[4] = bVar36;
      auVar48[5] = bVar37;
      auVar48[6] = bVar38;
      auVar48[7] = bVar39;
      auVar48[8] = bVar40;
      auVar48[9] = bVar41;
      auVar48[10] = bVar42;
      auVar48[0xb] = bVar43;
      auVar48[0xc] = bVar44;
      auVar48[0xd] = bVar45;
      auVar48[0xe] = bVar46;
      auVar48[0xf] = bVar47;
      auVar14[1] = bVar33;
      auVar14[0] = bVar32;
      auVar14[2] = bVar34;
      auVar14[3] = bVar35;
      auVar14[4] = bVar36;
      auVar14[5] = bVar37;
      auVar14[6] = bVar38;
      auVar14[7] = bVar39;
      auVar14[8] = bVar40;
      auVar14[9] = bVar41;
      auVar14[10] = bVar42;
      auVar14[0xb] = bVar43;
      auVar14[0xc] = bVar44;
      auVar14[0xd] = bVar45;
      auVar14[0xe] = bVar46;
      auVar14[0xf] = bVar47;
      auVar48 = NEON_ext(auVar48,auVar14,8,1);
      lVar11 = CONCAT17(bVar39 | auVar48[7],
                        CONCAT16(bVar38 | auVar48[6],
                                 CONCAT15(bVar37 | auVar48[5],
                                          CONCAT14(bVar36 | auVar48[4],
                                                   CONCAT13(bVar35 | auVar48[3],
                                                            CONCAT12(bVar34 | auVar48[2],
                                                                     CONCAT11(bVar33 | auVar48[1],
                                                                              bVar32 | auVar48[0])))
                                                  ))));
      if ((((*(int *)(param_3 + 0x88) == 0) && (lVar25 == 0xc0000000)) && (lVar23 == 1)) &&
         (lVar11 == 0)) {
        uStack_98 = *(undefined8 *)(param_3 + 0x60);
        uStack_a0 = *(undefined8 *)(param_3 + 0x58);
        uStack_90 = *(undefined8 *)(param_3 + 0x68);
        uStack_88 = *(undefined8 *)(param_3 + 0x70);
        uStack_78 = *(undefined8 *)(param_3 + 0x80);
        uStack_80 = *(undefined8 *)(param_3 + 0x78);
        uStack_70 = *(undefined4 *)(param_3 + 0x88);
        uStack_d8 = *(undefined8 *)(param_3 + 0x20);
        lStack_e0 = *plVar27;
        uStack_d0 = *(undefined8 *)(param_3 + 0x28);
        uStack_c8 = *(undefined8 *)(param_3 + 0x30);
        uStack_b8 = *(undefined8 *)(param_3 + 0x40);
        uStack_c0 = *(undefined8 *)(param_3 + 0x38);
        uStack_b0 = *(undefined8 *)(param_3 + 0x48);
        uStack_a8 = *(undefined8 *)(param_3 + 0x50);
        *(long *)(param_3 + 0x18) = lVar22;
        *(long *)(param_3 + 0x20) = lVar6;
        *(long *)(param_3 + 0x28) = lVar1;
        *(long *)(param_3 + 0x30) = lVar7;
        *(long *)(param_3 + 0x38) = lVar17;
        *(ulong *)(param_3 + 0x40) = uVar8 & 0xffffffff00000001;
        *(long *)(param_3 + 0x48) = lVar2;
        *(long *)(param_3 + 0x50) = lVar16;
        *(long *)(param_3 + 0x58) = lVar3;
        *(long *)(param_3 + 0x60) = lVar26;
        *(long *)(param_3 + 0x68) = lVar4;
        *(long *)(param_3 + 0x70) = lVar29;
        *(long *)(param_3 + 0x78) = lVar5;
        *(long *)(param_3 + 0x80) = lVar30;
        *(int *)(param_3 + 0x88) = iVar9;
        lStack_250 = lVar22;
        lStack_248 = lVar6;
        lStack_240 = lVar1;
        lStack_238 = lVar7;
        lStack_230 = lVar17;
        uStack_228 = uVar8;
        lStack_220 = lVar2;
        lStack_218 = lVar16;
        lStack_210 = lVar3;
        lStack_208 = lVar26;
        lStack_200 = lVar4;
        lStack_1f8 = lVar29;
        lStack_1f0 = lVar5;
        lStack_1e8 = lVar30;
        iStack_1e0 = iVar9;
        bStack_1dc = bVar10;
        FUN_102b74488(param_2,&lStack_2d0);
        func_0x000102b744bc(&lStack_250,&lStack_2d0);
        func_0x000102b74408(&lStack_e0);
        uVar15 = *(undefined8 *)(param_3 + 0xa0);
        *(long *)(param_3 + 0xa0) = lVar17;
        func_0x000107c61174(lVar17);
        func_0x000107c61170(uVar15);
        func_0x000102b7450c(param_2);
        uVar15 = 0;
        func_0x000102b74450(0);
        uVar20 = 5;
        goto LAB_102b73980;
      }
      if (((*(int *)(param_3 + 0x88) == 0) && (lVar25 == 0xc0000000)) &&
         ((lVar23 == 2 && (lVar11 == 0)))) {
        lVar23 = *(long *)(param_3 + 0x90);
        lVar25 = *(long *)(param_3 + 0x98);
        *(undefined8 *)(param_3 + 0x90) = 0;
        *(undefined8 *)(param_3 + 0x98) = 0;
        uStack_98 = *(undefined8 *)(param_3 + 0x60);
        uStack_a0 = *(undefined8 *)(param_3 + 0x58);
        uStack_90 = *(undefined8 *)(param_3 + 0x68);
        uStack_88 = *(undefined8 *)(param_3 + 0x70);
        uStack_78 = *(undefined8 *)(param_3 + 0x80);
        uStack_80 = *(undefined8 *)(param_3 + 0x78);
        uStack_70 = *(undefined4 *)(param_3 + 0x88);
        uStack_d8 = *(undefined8 *)(param_3 + 0x20);
        lStack_e0 = *plVar27;
        uStack_d0 = *(undefined8 *)(param_3 + 0x28);
        uStack_c8 = *(undefined8 *)(param_3 + 0x30);
        uStack_b8 = *(undefined8 *)(param_3 + 0x40);
        uStack_c0 = *(undefined8 *)(param_3 + 0x38);
        uStack_b0 = *(undefined8 *)(param_3 + 0x48);
        uStack_a8 = *(undefined8 *)(param_3 + 0x50);
        *(undefined8 *)(param_3 + 0x18) = 3;
        *(undefined8 *)(param_3 + 0x28) = 0;
        *(undefined8 *)(param_3 + 0x20) = 0;
        *(undefined8 *)(param_3 + 0x38) = 0;
        *(undefined8 *)(param_3 + 0x30) = 0;
        *(undefined8 *)(param_3 + 0x40) = 0xc0000000;
        *(undefined4 *)(param_3 + 0x88) = 0;
        *(undefined8 *)(param_3 + 0x80) = 0;
        *(undefined8 *)(param_3 + 0x78) = 0;
        *(undefined8 *)(param_3 + 0x70) = 0;
        *(undefined8 *)(param_3 + 0x68) = 0;
        *(undefined8 *)(param_3 + 0x60) = 0;
        *(undefined8 *)(param_3 + 0x58) = 0;
        *(undefined8 *)(param_3 + 0x50) = 0;
        *(undefined8 *)(param_3 + 0x48) = 0;
        lStack_250 = lVar22;
        lStack_248 = lVar6;
        lStack_240 = lVar1;
        lStack_238 = lVar7;
        lStack_230 = lVar17;
        uStack_228 = uVar8;
        lStack_220 = lVar2;
        lStack_218 = lVar16;
        lStack_210 = lVar3;
        lStack_208 = lVar26;
        lStack_200 = lVar4;
        lStack_1f8 = lVar29;
        lStack_1f0 = lVar5;
        lStack_1e8 = lVar30;
        iStack_1e0 = iVar9;
        bStack_1dc = bVar10;
        func_0x000102b744bc(&lStack_250,&lStack_2d0);
        func_0x000102b74408(&lStack_e0);
        *param_1 = lVar22;
        param_1[1] = lVar6;
        param_1[2] = lVar1;
        param_1[3] = lVar7;
        param_1[4] = lVar17;
        param_1[5] = uVar8;
        param_1[6] = lVar2;
        param_1[7] = lVar16;
        param_1[8] = lVar3;
        param_1[9] = lVar26;
        param_1[10] = lVar4;
        param_1[0xb] = lVar29;
        param_1[0xc] = lVar5;
        param_1[0xd] = lVar30;
        *(int *)(param_1 + 0xe) = iVar9;
        param_1[0xf] = lVar23;
LAB_102b73968:
        param_1[0x10] = lVar25;
        uVar15 = 0;
        func_0x000102b74450(0);
        goto LAB_102b73978;
      }
    }
  }
  else {
    if (bVar32 >> 6 == 1) {
      lStack_2c8 = *(long *)(param_3 + 0x20);
      lVar1 = *(long *)(param_3 + 0x18);
      lStack_2c0 = *(long *)(param_3 + 0x28);
      lStack_2b8 = *(long *)(param_3 + 0x30);
      uStack_2a8 = *(ulong *)(param_3 + 0x40);
      lStack_2b0 = *(long *)(param_3 + 0x38);
      lStack_2a0 = *(long *)(param_3 + 0x48);
      lStack_298 = *(long *)(param_3 + 0x50);
      lStack_288 = *(long *)(param_3 + 0x60);
      lStack_290 = *(long *)(param_3 + 0x58);
      lStack_280 = *(long *)(param_3 + 0x68);
      lStack_278 = *(long *)(param_3 + 0x70);
      lStack_268 = *(long *)(param_3 + 0x80);
      lStack_270 = *(long *)(param_3 + 0x78);
      iStack_260 = *(int *)(param_3 + 0x88);
      uVar21 = (uint)(uStack_2a8 >> 0x1e) & 3;
      lStack_2d0 = lVar1;
      if (uVar21 < 2) {
        if ((uStack_2a8 >> 0x1e & 3) == 0) {
          uStack_98 = *(undefined8 *)(param_3 + 0x60);
          uStack_a0 = *(undefined8 *)(param_3 + 0x58);
          uStack_90 = *(undefined8 *)(param_3 + 0x68);
          uStack_88 = *(undefined8 *)(param_3 + 0x70);
          uStack_78 = *(undefined8 *)(param_3 + 0x80);
          uStack_80 = *(undefined8 *)(param_3 + 0x78);
          uStack_70 = *(undefined4 *)(param_3 + 0x88);
          uStack_d8 = *(undefined8 *)(param_3 + 0x20);
          lStack_e0 = *(long *)(param_3 + 0x18);
          uStack_d0 = *(undefined8 *)(param_3 + 0x28);
          uStack_c8 = *(undefined8 *)(param_3 + 0x30);
          uStack_b8 = *(undefined8 *)(param_3 + 0x40);
          uStack_c0 = *(undefined8 *)(param_3 + 0x38);
          uStack_b0 = *(undefined8 *)(param_3 + 0x48);
          uStack_a8 = *(undefined8 *)(param_3 + 0x50);
          *(long *)(param_3 + 0x18) = lVar1;
          *(long *)(param_3 + 0x20) = lStack_2c8;
          *(long *)(param_3 + 0x28) = lStack_2c0;
          *(long *)(param_3 + 0x30) = lStack_2b8;
          *(long *)(param_3 + 0x38) = lStack_2b0;
          *(ulong *)(param_3 + 0x40) = uStack_2a8 & 0xffffffff00000001 | 0x40000000;
          *(long *)(param_3 + 0x48) = lStack_2a0;
          *(long *)(param_3 + 0x50) = lStack_298;
          *(long *)(param_3 + 0x58) = lStack_290;
          *(long *)(param_3 + 0x60) = lStack_288;
          *(long *)(param_3 + 0x68) = lStack_280;
          *(long *)(param_3 + 0x70) = lStack_278;
          *(long *)(param_3 + 0x78) = lStack_270;
          *(long *)(param_3 + 0x80) = lStack_268;
          *(int *)(param_3 + 0x88) = iStack_260;
          FUN_102b74488(param_2,&lStack_250);
          FUN_102b743d4(&lStack_2d0,&lStack_250);
          func_0x000102b74408(&lStack_e0);
          uVar15 = *(undefined8 *)(param_3 + 0x90);
          uVar20 = *(undefined8 *)(param_3 + 0x98);
          *(long *)(param_3 + 0x90) = lVar22;
          *(long *)(param_3 + 0x98) = lVar6;
          FUN_102b72218(uVar15,uVar20);
          uVar15 = 0;
          func_0x000102b74450(0);
          uVar20 = 6;
          goto LAB_102b73980;
        }
LAB_102b734c0:
        puVar18 = (undefined8 *)0x112ef9348;
        func_0x0001000285a8(0x112ef9348,&UNK_10db287e0);
        iVar9 = *(int *)(puVar18 + 6);
        FUN_102b7229c();
        puVar19 = &UNK_1105a46c0;
        func_0x000107c613f8(&UNK_1105a46c0,puVar18,0,0);
        *puVar18 = 0;
        puVar18[1] = 0;
        *param_1 = (long)puVar19;
        uVar15 = 0x112d5d568;
        func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
        func_0x000107c6159c(param_1,uVar15,1);
        *(long *)((long)param_1 + (long)iVar9) = lVar22;
        ((long *)((long)param_1 + (long)iVar9))[1] = lVar6;
        uVar15 = 0;
        func_0x000102b74450(0);
        func_0x000107c6159c(param_1,uVar15,1);
        func_0x000107c6157c(lVar6);
        return;
      }
      if (uVar21 == 2) {
        uStack_98 = *(undefined8 *)(param_3 + 0x60);
        uStack_a0 = *(undefined8 *)(param_3 + 0x58);
        uStack_90 = *(undefined8 *)(param_3 + 0x68);
        uStack_88 = *(undefined8 *)(param_3 + 0x70);
        uStack_78 = *(undefined8 *)(param_3 + 0x80);
        uStack_80 = *(undefined8 *)(param_3 + 0x78);
        uStack_70 = *(undefined4 *)(param_3 + 0x88);
        uStack_d8 = *(undefined8 *)(param_3 + 0x20);
        lStack_e0 = *(long *)(param_3 + 0x18);
        uStack_d0 = *(undefined8 *)(param_3 + 0x28);
        uStack_c8 = *(undefined8 *)(param_3 + 0x30);
        uStack_b8 = *(undefined8 *)(param_3 + 0x40);
        uStack_c0 = *(undefined8 *)(param_3 + 0x38);
        uStack_b0 = *(undefined8 *)(param_3 + 0x48);
        uStack_a8 = *(undefined8 *)(param_3 + 0x50);
        *(undefined8 *)(param_3 + 0x18) = 3;
        *(undefined8 *)(param_3 + 0x28) = 0;
        *(undefined8 *)(param_3 + 0x20) = 0;
        *(undefined8 *)(param_3 + 0x38) = 0;
        *(undefined8 *)(param_3 + 0x30) = 0;
        *(undefined8 *)(param_3 + 0x40) = 0xc0000000;
        *(undefined8 *)(param_3 + 0x60) = 0;
        *(undefined8 *)(param_3 + 0x58) = 0;
        *(undefined8 *)(param_3 + 0x50) = 0;
        *(undefined8 *)(param_3 + 0x48) = 0;
        *(undefined4 *)(param_3 + 0x88) = 0;
        *(undefined8 *)(param_3 + 0x80) = 0;
        *(undefined8 *)(param_3 + 0x78) = 0;
        *(undefined8 *)(param_3 + 0x70) = 0;
        *(undefined8 *)(param_3 + 0x68) = 0;
        FUN_102b74488(param_2,&lStack_250);
        FUN_102b743d4(&lStack_2d0,&lStack_250);
        func_0x000102b74408(&lStack_e0);
        lStack_250 = 0;
        lStack_248 = -0x2000000000000000;
        func_0x000107c602fc(0x21);
        func_0x000107c5fb78(0xd00000000000001f,0x800000010f0f63d0);
        uVar15 = 0x112d393f0;
        lStack_160 = lVar1;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c603d0(&lStack_160,&lStack_250,uVar15,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        lVar17 = lStack_248;
        func_0x0001007d6c6c(3,lStack_250,lStack_248,param_4,&PTR_DAT_1105a4908);
        func_0x000107c6142c(lVar17);
        lVar17 = 0x112ef9348;
        func_0x0001000285a8(0x112ef9348,&UNK_10db287e0);
        plVar27 = (long *)((long)param_1 + (long)*(int *)(lVar17 + 0x30));
        *param_1 = lVar1;
        uVar15 = 0x112d5d568;
        func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
        func_0x000107c6159c(param_1,uVar15,1);
        *plVar27 = lVar22;
        plVar27[1] = lVar6;
        uVar15 = 0;
        func_0x000102b74450(0);
      }
      else {
        if (((iStack_260 != 0) || (uStack_2a8 != 0xc0000000)) ||
           (((((lStack_2c8 != 0 || lVar1 != 0) || (lStack_2c0 != 0 || lStack_2b8 != 0)) ||
             ((lStack_2b0 != 0 || lStack_2a0 != 0) || lStack_298 != 0)) ||
            (((lStack_290 != 0 || lStack_288 != 0) || lStack_280 != 0) || lStack_278 != 0)) ||
            (lStack_270 != 0 || lStack_268 != 0))) {
          if (((iStack_260 != 0) || (uStack_2a8 != 0xc0000000)) ||
             ((lVar1 != 1 ||
              (((((lStack_2c0 != 0 || lStack_2c8 != 0) || (lStack_2b8 != 0 || lStack_2b0 != 0)) ||
                ((lStack_2a0 != 0 || lStack_298 != 0) || lStack_290 != 0)) ||
               (((lStack_288 != 0 || lStack_280 != 0) || lStack_278 != 0) || lStack_270 != 0)) ||
               lStack_268 != 0)))) goto LAB_102b734c0;
          lStack_208 = *(long *)(param_3 + 0x60);
          lStack_210 = *(long *)(param_3 + 0x58);
          lStack_200 = *(long *)(param_3 + 0x68);
          lStack_1f8 = *(long *)(param_3 + 0x70);
          lStack_1e8 = *(long *)(param_3 + 0x80);
          lStack_1f0 = *(long *)(param_3 + 0x78);
          iStack_1e0 = *(int *)(param_3 + 0x88);
          lStack_248 = *(long *)(param_3 + 0x20);
          lStack_250 = *(long *)(param_3 + 0x18);
          lStack_240 = *(long *)(param_3 + 0x28);
          lStack_238 = *(long *)(param_3 + 0x30);
          uStack_228 = *(ulong *)(param_3 + 0x40);
          lStack_230 = *(long *)(param_3 + 0x38);
          lStack_220 = *(long *)(param_3 + 0x48);
          lStack_218 = *(long *)(param_3 + 0x50);
          *(undefined8 *)(param_3 + 0x18) = 2;
          *(undefined8 *)(param_3 + 0x28) = 0;
          *(undefined8 *)(param_3 + 0x20) = 0;
          *(undefined8 *)(param_3 + 0x38) = 0;
          *(undefined8 *)(param_3 + 0x30) = 0;
          *(undefined8 *)(param_3 + 0x40) = 0xc0000000;
          *(undefined8 *)(param_3 + 0x60) = 0;
          *(undefined8 *)(param_3 + 0x58) = 0;
          *(undefined8 *)(param_3 + 0x50) = 0;
          *(undefined8 *)(param_3 + 0x48) = 0;
          *(undefined4 *)(param_3 + 0x88) = 0;
          *(undefined8 *)(param_3 + 0x80) = 0;
          *(undefined8 *)(param_3 + 0x78) = 0;
          *(undefined8 *)(param_3 + 0x70) = 0;
          *(undefined8 *)(param_3 + 0x68) = 0;
          func_0x000107c6157c(lVar6);
          func_0x000102b74408(&lStack_250);
          uVar15 = *(undefined8 *)(param_3 + 0x90);
          uVar20 = *(undefined8 *)(param_3 + 0x98);
          *(long *)(param_3 + 0x90) = lVar22;
          *(long *)(param_3 + 0x98) = lVar6;
          FUN_102b72218(uVar15,uVar20);
LAB_102b73860:
          uVar15 = 0;
          func_0x000102b74450(0);
          uVar20 = 5;
          goto LAB_102b73980;
        }
        lStack_208 = *(long *)(param_3 + 0x60);
        lStack_210 = *(long *)(param_3 + 0x58);
        lStack_200 = *(long *)(param_3 + 0x68);
        lStack_1f8 = *(long *)(param_3 + 0x70);
        lStack_1e8 = *(long *)(param_3 + 0x80);
        lStack_1f0 = *(long *)(param_3 + 0x78);
        iStack_1e0 = *(int *)(param_3 + 0x88);
        lStack_248 = *(long *)(param_3 + 0x20);
        lStack_250 = *(long *)(param_3 + 0x18);
        lStack_240 = *(long *)(param_3 + 0x28);
        lStack_238 = *(long *)(param_3 + 0x30);
        uStack_228 = *(ulong *)(param_3 + 0x40);
        lStack_230 = *(long *)(param_3 + 0x38);
        lStack_220 = *(long *)(param_3 + 0x48);
        lStack_218 = *(long *)(param_3 + 0x50);
        *(undefined8 *)(param_3 + 0x18) = 3;
        *(undefined8 *)(param_3 + 0x28) = 0;
        *(undefined8 *)(param_3 + 0x20) = 0;
        *(undefined8 *)(param_3 + 0x38) = 0;
        *(undefined8 *)(param_3 + 0x30) = 0;
        *(undefined8 *)(param_3 + 0x40) = 0xc0000000;
        *(undefined8 *)(param_3 + 0x60) = 0;
        *(undefined8 *)(param_3 + 0x58) = 0;
        *(undefined8 *)(param_3 + 0x50) = 0;
        *(undefined8 *)(param_3 + 0x48) = 0;
        *(undefined4 *)(param_3 + 0x88) = 0;
        *(undefined8 *)(param_3 + 0x80) = 0;
        *(undefined8 *)(param_3 + 0x78) = 0;
        *(undefined8 *)(param_3 + 0x70) = 0;
        *(undefined8 *)(param_3 + 0x68) = 0;
        func_0x000107c6157c(lVar6);
        func_0x000102b74408(&lStack_250);
        puVar18 = (undefined8 *)0x112ef9348;
        func_0x0001000285a8(0x112ef9348,&UNK_10db287e0);
        iVar9 = *(int *)(puVar18 + 6);
        FUN_102b7229c();
        puVar19 = &UNK_1105a46c0;
        func_0x000107c613f8(&UNK_1105a46c0,puVar18,0,0);
        *puVar18 = 0;
        puVar18[1] = 0;
        *param_1 = (long)puVar19;
        uVar15 = 0x112d5d568;
        func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
        func_0x000107c6159c(param_1,uVar15,1);
        *(long *)((long)param_1 + (long)iVar9) = lVar22;
        ((long *)((long)param_1 + (long)iVar9))[1] = lVar6;
LAB_102b73848:
        uVar15 = 0;
        func_0x000102b74450(0);
      }
      uVar20 = 1;
      goto LAB_102b73980;
    }
    if ((((((lVar6 == 0 && lVar22 == 0) && (lVar1 == 0 && lVar7 == 0)) &&
          ((lVar17 == 0 && uVar8 == 0) && lVar2 == 0)) &&
         (((lVar16 == 0 && lVar3 == 0) && lVar26 == 0) && lVar4 == 0)) &&
        ((lVar29 == 0 && lVar5 == 0) && lVar30 == 0)) && uVar24 == 0x8000000000) {
      lVar22 = *(long *)(param_3 + 0x18);
      uVar24 = *(ulong *)(param_3 + 0x40);
      if (1 < ((uint)(uVar24 >> 0x1e) & 3) - 1) {
        if ((uVar24 >> 0x1e & 3) == 0) {
          lVar22 = *(long *)(param_3 + 0xa0);
          *(undefined1 *)param_1 = 0;
          param_1[1] = lVar22;
          uVar15 = 0;
          func_0x000102b74450(0);
          func_0x000107c6159c(param_1,uVar15,0);
          func_0x000107c61174(lVar22);
          return;
        }
        if (((*(int *)(param_3 + 0x88) == 0) && (uVar24 == 0xc0000000)) &&
           (((((*(long *)(param_3 + 0x80) == 0 && lVar22 == 0) &&
              (*(long *)(param_3 + 0x78) == 0 && *(long *)(param_3 + 0x70) == 0)) &&
             ((*(long *)(param_3 + 0x68) == 0 && *(long *)(param_3 + 0x60) == 0) &&
             *(long *)(param_3 + 0x58) == 0)) &&
            (((*(long *)(param_3 + 0x50) == 0 && *(long *)(param_3 + 0x48) == 0) &&
             *(long *)(param_3 + 0x38) == 0) && *(long *)(param_3 + 0x30) == 0)) &&
            (*(long *)(param_3 + 0x28) == 0 && *(long *)(param_3 + 0x20) == 0))) {
          lStack_208 = *(long *)(param_3 + 0x60);
          lStack_210 = *(long *)(param_3 + 0x58);
          lStack_200 = *(long *)(param_3 + 0x68);
          lStack_1f8 = *(long *)(param_3 + 0x70);
          lStack_1e8 = *(long *)(param_3 + 0x80);
          lStack_1f0 = *(long *)(param_3 + 0x78);
          iStack_1e0 = *(int *)(param_3 + 0x88);
          lStack_248 = *(long *)(param_3 + 0x20);
          lStack_250 = *(long *)(param_3 + 0x18);
          lStack_240 = *(long *)(param_3 + 0x28);
          lStack_238 = *(long *)(param_3 + 0x30);
          uStack_228 = *(ulong *)(param_3 + 0x40);
          lStack_230 = *(long *)(param_3 + 0x38);
          lStack_220 = *(long *)(param_3 + 0x48);
          lStack_218 = *(long *)(param_3 + 0x50);
          *(undefined8 *)(param_3 + 0x18) = 1;
          *(undefined8 *)(param_3 + 0x28) = 0;
          *(undefined8 *)(param_3 + 0x20) = 0;
          *(undefined8 *)(param_3 + 0x38) = 0;
          *(undefined8 *)(param_3 + 0x30) = 0;
          *(undefined8 *)(param_3 + 0x40) = 0xc0000000;
          *(undefined8 *)(param_3 + 0x50) = 0;
          *(undefined8 *)(param_3 + 0x48) = 0;
          *(undefined8 *)(param_3 + 0x60) = 0;
          *(undefined8 *)(param_3 + 0x58) = 0;
          *(undefined4 *)(param_3 + 0x88) = 0;
          *(undefined8 *)(param_3 + 0x70) = 0;
          *(undefined8 *)(param_3 + 0x68) = 0;
          *(undefined8 *)(param_3 + 0x80) = 0;
          *(undefined8 *)(param_3 + 0x78) = 0;
          func_0x000102b74408(&lStack_250);
          *(undefined1 *)param_1 = 1;
          param_1[1] = 0;
          uVar15 = 0;
          func_0x000102b74450(0);
          uVar20 = 0;
          goto LAB_102b73980;
        }
        if (((*(int *)(param_3 + 0x88) == 0) && (uVar24 == 0xc0000000)) &&
           ((lVar22 == 1 &&
            (((((*(long *)(param_3 + 0x78) == 0 && *(long *)(param_3 + 0x80) == 0) &&
               (*(long *)(param_3 + 0x70) == 0 && *(long *)(param_3 + 0x68) == 0)) &&
              ((*(long *)(param_3 + 0x60) == 0 && *(long *)(param_3 + 0x58) == 0) &&
              *(long *)(param_3 + 0x50) == 0)) &&
             (((*(long *)(param_3 + 0x48) == 0 && *(long *)(param_3 + 0x38) == 0) &&
              *(long *)(param_3 + 0x30) == 0) && *(long *)(param_3 + 0x28) == 0)) &&
             *(long *)(param_3 + 0x20) == 0)))) {
          *(undefined1 *)param_1 = 0;
          param_1[1] = 0;
          uVar15 = 0;
          func_0x000102b74450(0);
          uVar20 = 0;
          goto LAB_102b730cc;
        }
      }
    }
    else {
      if (((uVar24 != 0x8000000000) || (lVar22 != 1)) ||
         (((((lVar1 != 0 || lVar6 != 0) || (lVar7 != 0 || lVar17 != 0)) ||
           ((uVar8 != 0 || lVar2 != 0) || lVar16 != 0)) ||
          (((lVar3 != 0 || lVar26 != 0) || lVar4 != 0) || lVar29 != 0)) ||
          (lVar5 != 0 || lVar30 != 0))) {
        lStack_288 = *(long *)(param_3 + 0x60);
        lStack_290 = *(long *)(param_3 + 0x58);
        lStack_280 = *(long *)(param_3 + 0x68);
        lStack_278 = *(long *)(param_3 + 0x70);
        lStack_268 = *(long *)(param_3 + 0x80);
        lStack_270 = *(long *)(param_3 + 0x78);
        iStack_260 = *(int *)(param_3 + 0x88);
        lStack_2c8 = *(long *)(param_3 + 0x20);
        lStack_2d0 = *(long *)(param_3 + 0x18);
        lStack_2b8 = *(long *)(param_3 + 0x30);
        lStack_2c0 = *(long *)(param_3 + 0x28);
        uStack_2a8 = *(ulong *)(param_3 + 0x40);
        lStack_2b0 = *(long *)(param_3 + 0x38);
        lStack_298 = *(long *)(param_3 + 0x50);
        lStack_2a0 = *(long *)(param_3 + 0x48);
        lStack_250 = lStack_2d0;
        lStack_248 = lStack_2c8;
        lStack_240 = lStack_2c0;
        lStack_238 = lStack_2b8;
        lStack_230 = lStack_2b0;
        lStack_220 = lStack_2a0;
        lStack_218 = lStack_298;
        lStack_210 = lStack_290;
        lStack_208 = lStack_288;
        lStack_200 = lStack_280;
        lStack_1f8 = lStack_278;
        lStack_1f0 = lStack_270;
        lStack_1e8 = lStack_268;
        iStack_1e0 = iStack_260;
        if ((uStack_2a8 & 0xc0000000) == 0x40000000) {
          uStack_228 = uStack_2a8 & 0xffffffff3fffffff;
          lVar22 = *(long *)(param_3 + 0x90);
          lVar1 = *(long *)(param_3 + 0x98);
          *(undefined8 *)(param_3 + 0x90) = 0;
          *(undefined8 *)(param_3 + 0x98) = 0;
          uVar15 = *(undefined8 *)(param_3 + 0xa0);
          *(undefined8 *)(param_3 + 0xa0) = 0;
          uStack_118 = *(undefined8 *)(param_3 + 0x60);
          uStack_120 = *(undefined8 *)(param_3 + 0x58);
          uStack_110 = *(undefined8 *)(param_3 + 0x68);
          uStack_108 = *(undefined8 *)(param_3 + 0x70);
          uStack_f8 = *(undefined8 *)(param_3 + 0x80);
          uStack_100 = *(undefined8 *)(param_3 + 0x78);
          uStack_f0 = *(undefined4 *)(param_3 + 0x88);
          uStack_158 = *(undefined8 *)(param_3 + 0x20);
          lStack_160 = *(long *)(param_3 + 0x18);
          uStack_150 = *(undefined8 *)(param_3 + 0x28);
          uStack_148 = *(undefined8 *)(param_3 + 0x30);
          uStack_140 = *(undefined8 *)(param_3 + 0x38);
          uStack_130 = *(undefined8 *)(param_3 + 0x48);
          uStack_128 = *(undefined8 *)(param_3 + 0x50);
          uStack_138 = *(ulong *)(param_3 + 0x40) & 0xffffffff3fffffff;
          FUN_102b724bc(&lStack_160,auStack_1d8);
          FUN_102b724bc(&lStack_250,auStack_1d8);
          func_0x000107c61170(uVar15);
          uStack_98 = *(undefined8 *)(param_3 + 0x60);
          uStack_a0 = *(undefined8 *)(param_3 + 0x58);
          uStack_90 = *(undefined8 *)(param_3 + 0x68);
          uStack_88 = *(undefined8 *)(param_3 + 0x70);
          uStack_78 = *(undefined8 *)(param_3 + 0x80);
          uStack_80 = *(undefined8 *)(param_3 + 0x78);
          uStack_70 = *(undefined4 *)(param_3 + 0x88);
          uStack_d8 = *(undefined8 *)(param_3 + 0x20);
          lStack_e0 = *(long *)(param_3 + 0x18);
          uStack_d0 = *(undefined8 *)(param_3 + 0x28);
          uStack_c8 = *(undefined8 *)(param_3 + 0x30);
          uStack_b8 = *(undefined8 *)(param_3 + 0x40);
          uStack_c0 = *(undefined8 *)(param_3 + 0x38);
          uStack_b0 = *(undefined8 *)(param_3 + 0x48);
          uStack_a8 = *(undefined8 *)(param_3 + 0x50);
          *(undefined8 *)(param_3 + 0x18) = 3;
          *(undefined8 *)(param_3 + 0x28) = 0;
          *(undefined8 *)(param_3 + 0x20) = 0;
          *(undefined8 *)(param_3 + 0x38) = 0;
          *(undefined8 *)(param_3 + 0x30) = 0;
          *(undefined8 *)(param_3 + 0x40) = 0xc0000000;
          *(undefined8 *)(param_3 + 0x60) = 0;
          *(undefined8 *)(param_3 + 0x58) = 0;
          *(undefined8 *)(param_3 + 0x50) = 0;
          *(undefined8 *)(param_3 + 0x48) = 0;
          *(undefined4 *)(param_3 + 0x88) = 0;
          *(undefined8 *)(param_3 + 0x80) = 0;
          *(undefined8 *)(param_3 + 0x78) = 0;
          *(undefined8 *)(param_3 + 0x70) = 0;
          *(undefined8 *)(param_3 + 0x68) = 0;
          func_0x000102b74408(&lStack_e0);
          if (lVar22 == 0) {
            func_0x0001007d6c6c(3,0xd00000000000002e,0x800000010f0f6380,param_4,&PTR_DAT_1105a4908);
            func_0x000102b74408(&lStack_2d0);
            func_0x000102b74408(&lStack_2d0);
            uVar15 = 0;
            func_0x000102b74450(0);
            uVar20 = 5;
          }
          else {
            func_0x000102b74408(&lStack_2d0);
            param_1[9] = lStack_208;
            param_1[8] = lStack_210;
            param_1[0xb] = lStack_1f8;
            param_1[10] = lStack_200;
            param_1[0xd] = lStack_1e8;
            param_1[0xc] = lStack_1f0;
            *(int *)(param_1 + 0xe) = iStack_1e0;
            param_1[1] = lStack_248;
            *param_1 = lStack_250;
            param_1[3] = lStack_238;
            param_1[2] = lStack_240;
            param_1[5] = uStack_228;
            param_1[4] = lStack_230;
            param_1[7] = lStack_218;
            param_1[6] = lStack_220;
            param_1[0xf] = lVar22;
            param_1[0x10] = lVar1;
            uVar15 = 0;
            func_0x000102b74450(0);
            uVar20 = 3;
          }
          goto LAB_102b73980;
        }
        uVar20 = *(undefined8 *)(param_3 + 0x98);
        uVar15 = *(undefined8 *)(param_3 + 0x90);
        lVar22 = *(long *)(param_3 + 0x90);
        *(undefined8 *)(param_3 + 0x90) = 0;
        *(undefined8 *)(param_3 + 0x98) = 0;
        uStack_228 = uStack_2a8;
        if (lVar22 == 0) goto LAB_102b73860;
        puVar18 = (undefined8 *)0x112ef9348;
        func_0x0001000285a8(0x112ef9348,&UNK_10db287e0);
        iVar9 = *(int *)(puVar18 + 6);
        FUN_102b7229c();
        puVar19 = &UNK_1105a46c0;
        func_0x000107c613f8(&UNK_1105a46c0,puVar18,0,0);
        puVar18[1] = 1;
        *puVar18 = 0;
        *param_1 = (long)puVar19;
        uVar49 = 0x112d5d568;
        func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
        func_0x000107c6159c(param_1,uVar49,1);
        ((undefined8 *)((long)param_1 + (long)iVar9))[1] = uVar20;
        *(undefined8 *)((long)param_1 + (long)iVar9) = uVar15;
        goto LAB_102b73848;
      }
      plVar28 = (long *)(param_3 + 0x18);
      lVar30 = *plVar28;
      plVar31 = (long *)(param_3 + 0x20);
      lVar29 = *plVar31;
      lVar22 = *(long *)(param_3 + 0x28);
      lVar4 = *(long *)(param_3 + 0x30);
      lVar1 = *(long *)(param_3 + 0x38);
      uVar24 = *(ulong *)(param_3 + 0x40);
      plVar27 = (long *)(param_3 + 0x48);
      lVar16 = *plVar27;
      lVar17 = *(long *)(param_3 + 0x50);
      lVar5 = *(long *)(param_3 + 0x58);
      lVar2 = *(long *)(param_3 + 0x60);
      lVar6 = *(long *)(param_3 + 0x68);
      lVar3 = *(long *)(param_3 + 0x70);
      lVar7 = *(long *)(param_3 + 0x78);
      lVar26 = *(long *)(param_3 + 0x80);
      iVar9 = *(int *)(param_3 + 0x88);
      uVar8 = uVar24 >> 0x1e;
      uVar21 = (uint)uVar8 & 3;
      if (uVar21 == 1 || (uVar8 & 3) == 0) {
        lStack_2d0 = lVar30;
        lStack_2c8 = lVar29;
        lStack_2c0 = lVar22;
        lStack_2b8 = lVar4;
        lStack_2b0 = lVar1;
        lStack_2a0 = lVar16;
        lStack_298 = lVar17;
        lStack_290 = lVar5;
        lStack_288 = lVar2;
        lStack_280 = lVar6;
        lStack_278 = lVar3;
        lStack_270 = lVar7;
        lStack_268 = lVar26;
        iStack_260 = iVar9;
        if ((uVar8 & 3) != 0) {
          lVar23 = *(long *)(param_3 + 0x90);
          lVar25 = *(long *)(param_3 + 0x98);
          uVar15 = *(undefined8 *)(param_3 + 0xa0);
          *(undefined8 *)(param_3 + 0x98) = 0;
          *(undefined8 *)(param_3 + 0xa0) = 0;
          *(undefined8 *)(param_3 + 0x90) = 0;
          uStack_2a8 = uVar24 & 0xffffffff3fffffff;
          FUN_102b724bc(&lStack_2d0,&lStack_250);
          func_0x000107c61170(uVar15);
          lStack_208 = *(long *)(param_3 + 0x60);
          lStack_210 = *(long *)(param_3 + 0x58);
          lStack_200 = *(long *)(param_3 + 0x68);
          lStack_1f8 = *(long *)(param_3 + 0x70);
          lStack_1e8 = *(long *)(param_3 + 0x80);
          lStack_1f0 = *(long *)(param_3 + 0x78);
          iStack_1e0 = *(int *)(param_3 + 0x88);
          lStack_248 = *(long *)(param_3 + 0x20);
          lStack_250 = *plVar28;
          lStack_240 = *(long *)(param_3 + 0x28);
          lStack_238 = *(long *)(param_3 + 0x30);
          uStack_228 = *(ulong *)(param_3 + 0x40);
          lStack_230 = *(long *)(param_3 + 0x38);
          lStack_220 = *(long *)(param_3 + 0x48);
          lStack_218 = *(long *)(param_3 + 0x50);
          *(undefined8 *)(param_3 + 0x18) = 3;
          *(undefined8 *)(param_3 + 0x28) = 0;
          *plVar31 = 0;
          *(undefined8 *)(param_3 + 0x38) = 0;
          *(undefined8 *)(param_3 + 0x30) = 0;
          *(undefined8 *)(param_3 + 0x40) = 0xc0000000;
          *(undefined8 *)(param_3 + 0x50) = 0;
          *plVar27 = 0;
          *(undefined8 *)(param_3 + 0x60) = 0;
          *(undefined8 *)(param_3 + 0x58) = 0;
          *(undefined4 *)(param_3 + 0x88) = 0;
          *(undefined8 *)(param_3 + 0x70) = 0;
          *(undefined8 *)(param_3 + 0x68) = 0;
          *(undefined8 *)(param_3 + 0x80) = 0;
          *(undefined8 *)(param_3 + 0x78) = 0;
          func_0x000102b74408(&lStack_250);
          *param_1 = lVar30;
          param_1[1] = lVar29;
          param_1[2] = lVar22;
          param_1[3] = lVar4;
          param_1[4] = lVar1;
          param_1[5] = uVar24 & 0xffffffff3fffffff;
          param_1[6] = lVar16;
          param_1[7] = lVar17;
          param_1[8] = lVar5;
          param_1[9] = lVar2;
          param_1[10] = lVar6;
          param_1[0xb] = lVar3;
          param_1[0xc] = lVar7;
          param_1[0xd] = lVar26;
          *(int *)(param_1 + 0xe) = iVar9;
          param_1[0xf] = lVar23;
          goto LAB_102b73968;
        }
        uVar15 = *(undefined8 *)(param_3 + 0xa0);
        *(undefined8 *)(param_3 + 0xa0) = 0;
        uStack_2a8 = uVar24 & 0xffffffff3fffffff;
        FUN_102b724bc(&lStack_2d0,&lStack_250);
        func_0x000107c61170(uVar15);
        lStack_208 = *(long *)(param_3 + 0x60);
        lStack_210 = *(long *)(param_3 + 0x58);
        lStack_200 = *(long *)(param_3 + 0x68);
        lStack_1f8 = *(long *)(param_3 + 0x70);
        lStack_1e8 = *(long *)(param_3 + 0x80);
        lStack_1f0 = *(long *)(param_3 + 0x78);
        iStack_1e0 = *(int *)(param_3 + 0x88);
        lStack_248 = *(long *)(param_3 + 0x20);
        lStack_250 = *plVar28;
        lStack_240 = *(long *)(param_3 + 0x28);
        lStack_238 = *(long *)(param_3 + 0x30);
        uStack_228 = *(ulong *)(param_3 + 0x40);
        lStack_230 = *(long *)(param_3 + 0x38);
        lStack_220 = *(long *)(param_3 + 0x48);
        lStack_218 = *(long *)(param_3 + 0x50);
        *(undefined8 *)(param_3 + 0x18) = 3;
        *(undefined8 *)(param_3 + 0x28) = 0;
        *plVar31 = 0;
        *(undefined8 *)(param_3 + 0x38) = 0;
        *(undefined8 *)(param_3 + 0x30) = 0;
        *(undefined8 *)(param_3 + 0x40) = 0xc0000000;
        *(undefined8 *)(param_3 + 0x50) = 0;
        *plVar27 = 0;
        *(undefined8 *)(param_3 + 0x60) = 0;
        *(undefined8 *)(param_3 + 0x58) = 0;
        *(undefined4 *)(param_3 + 0x88) = 0;
        *(undefined8 *)(param_3 + 0x70) = 0;
        *(undefined8 *)(param_3 + 0x68) = 0;
        *(undefined8 *)(param_3 + 0x80) = 0;
        *(undefined8 *)(param_3 + 0x78) = 0;
        func_0x000102b74408(&lStack_250);
        *param_1 = lVar30;
        param_1[1] = lVar29;
        param_1[2] = lVar22;
        param_1[3] = lVar4;
        param_1[4] = lVar1;
        param_1[5] = uVar24 & 0xffffffff3fffffff;
        param_1[6] = lVar16;
        param_1[7] = lVar17;
        param_1[8] = lVar5;
        param_1[9] = lVar2;
        param_1[10] = lVar6;
        param_1[0xb] = lVar3;
        param_1[0xc] = lVar7;
        param_1[0xd] = lVar26;
        *(int *)(param_1 + 0xe) = iVar9;
        uVar15 = 0;
        func_0x000102b74450(0);
        param_1[0xf] = 0;
        param_1[0x10] = 0;
LAB_102b73978:
        uVar20 = 2;
        goto LAB_102b73980;
      }
      if (uVar21 != 2) {
        if (((iVar9 == 0) && (uVar24 == 0xc0000000)) &&
           (((((lVar29 == 0 && lVar30 == 0) && (lVar22 == 0 && lVar4 == 0)) &&
             ((lVar1 == 0 && lVar16 == 0) && lVar17 == 0)) &&
            (((lVar5 == 0 && lVar2 == 0) && lVar6 == 0) && lVar3 == 0)) &&
            (lVar7 == 0 && lVar26 == 0))) {
          lStack_208 = *(long *)(param_3 + 0x60);
          lStack_210 = *(long *)(param_3 + 0x58);
          lStack_200 = *(long *)(param_3 + 0x68);
          lStack_1f8 = *(long *)(param_3 + 0x70);
          lStack_1e8 = *(long *)(param_3 + 0x80);
          lStack_1f0 = *(long *)(param_3 + 0x78);
          iStack_1e0 = *(int *)(param_3 + 0x88);
          lStack_248 = *(long *)(param_3 + 0x20);
          lStack_250 = *plVar28;
          lStack_240 = *(long *)(param_3 + 0x28);
          lStack_238 = *(long *)(param_3 + 0x30);
          uStack_228 = *(ulong *)(param_3 + 0x40);
          lStack_230 = *(long *)(param_3 + 0x38);
          lStack_220 = *(long *)(param_3 + 0x48);
          lStack_218 = *(long *)(param_3 + 0x50);
          uVar15 = 3;
        }
        else {
          if (((iVar9 != 0) || (uVar24 != 0xc0000000)) ||
             ((lVar30 != 1 ||
              (((((lVar22 != 0 || lVar29 != 0) || (lVar4 != 0 || lVar1 != 0)) ||
                ((lVar16 != 0 || lVar17 != 0) || lVar5 != 0)) ||
               (((lVar2 != 0 || lVar6 != 0) || lVar3 != 0) || lVar7 != 0)) || lVar26 != 0))))
          goto LAB_102b730b0;
          lStack_208 = *(long *)(param_3 + 0x60);
          lStack_210 = *(long *)(param_3 + 0x58);
          lStack_200 = *(long *)(param_3 + 0x68);
          lStack_1f8 = *(long *)(param_3 + 0x70);
          lStack_1e8 = *(long *)(param_3 + 0x80);
          lStack_1f0 = *(long *)(param_3 + 0x78);
          iStack_1e0 = *(int *)(param_3 + 0x88);
          lStack_248 = *(long *)(param_3 + 0x20);
          lStack_250 = *plVar28;
          lStack_240 = *(long *)(param_3 + 0x28);
          lStack_238 = *(long *)(param_3 + 0x30);
          uStack_228 = *(ulong *)(param_3 + 0x40);
          lStack_230 = *(long *)(param_3 + 0x38);
          lStack_220 = *(long *)(param_3 + 0x48);
          lStack_218 = *(long *)(param_3 + 0x50);
          uVar15 = 2;
        }
        *(undefined8 *)(param_3 + 0x18) = uVar15;
        *(undefined8 *)(param_3 + 0x28) = 0;
        *plVar31 = 0;
        *(undefined8 *)(param_3 + 0x38) = 0;
        *(undefined8 *)(param_3 + 0x30) = 0;
        *(undefined8 *)(param_3 + 0x40) = 0xc0000000;
        *(undefined8 *)(param_3 + 0x50) = 0;
        *plVar27 = 0;
        *(undefined8 *)(param_3 + 0x60) = 0;
        *(undefined8 *)(param_3 + 0x58) = 0;
        *(undefined4 *)(param_3 + 0x88) = 0;
        *(undefined8 *)(param_3 + 0x70) = 0;
        *(undefined8 *)(param_3 + 0x68) = 0;
        *(undefined8 *)(param_3 + 0x80) = 0;
        *(undefined8 *)(param_3 + 0x78) = 0;
        func_0x000102b74408(&lStack_250);
        uVar15 = 0;
        func_0x000102b74450(0);
        uVar20 = 5;
LAB_102b73980:
        func_0x000107c6159c(param_1,uVar15,uVar20);
        return;
      }
    }
  }
LAB_102b730b0:
  uVar15 = 0;
  func_0x000102b74450(0);
  uVar20 = 5;
LAB_102b730cc:
  func_0x000107c6159c(param_1,uVar15,uVar20);
  return;
}



/* Entry: 102b73b34; end: 102b73dcb;  */

void FUN_102b73b34(long param_1,code *param_2)

{
  ulong uVar1;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  uStack_238 = *(undefined8 *)(param_1 + 0x20);
  uStack_240 = *(undefined8 *)(param_1 + 0x18);
  uStack_228 = *(undefined8 *)(param_1 + 0x30);
  uStack_230 = *(undefined8 *)(param_1 + 0x28);
  uStack_98 = *(ulong *)(param_1 + 0x40);
  uStack_220 = *(undefined8 *)(param_1 + 0x38);
  uStack_208 = *(undefined8 *)(param_1 + 0x50);
  uStack_210 = *(undefined8 *)(param_1 + 0x48);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_200 = *(undefined8 *)(param_1 + 0x58);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1d0 = *(undefined4 *)(param_1 + 0x88);
  uStack_c0 = uStack_240;
  uStack_b8 = uStack_238;
  uStack_b0 = uStack_230;
  uStack_a8 = uStack_228;
  uStack_a0 = uStack_220;
  uStack_90 = uStack_210;
  uStack_88 = uStack_208;
  uStack_80 = uStack_200;
  uStack_78 = uStack_1f8;
  uStack_70 = uStack_1f0;
  uStack_68 = uStack_1e8;
  uStack_60 = uStack_1e0;
  uStack_58 = uStack_1d8;
  uStack_50 = uStack_1d0;
  if (((uint)(uStack_98 >> 0x1e) & 3) == 1) {
    uStack_218 = uStack_98 & 0xffffffff3fffffff;
    uStack_1b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x18);
    uStack_1a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_1b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_1a0 = *(undefined8 *)(param_1 + 0x38);
    uStack_188 = *(undefined8 *)(param_1 + 0x50);
    uStack_190 = *(undefined8 *)(param_1 + 0x48);
    uStack_178 = *(undefined8 *)(param_1 + 0x60);
    uStack_180 = *(undefined8 *)(param_1 + 0x58);
    uStack_168 = *(undefined8 *)(param_1 + 0x70);
    uStack_170 = *(undefined8 *)(param_1 + 0x68);
    uStack_158 = *(undefined8 *)(param_1 + 0x80);
    uStack_160 = *(undefined8 *)(param_1 + 0x78);
    uStack_150 = *(undefined4 *)(param_1 + 0x88);
    uStack_198 = *(ulong *)(param_1 + 0x40) & 0xffffffff3fffffff;
    FUN_102b743d4(&uStack_c0,&uStack_140);
    FUN_102b724bc(&uStack_1c0,&uStack_140);
    (*param_2)(&uStack_240);
    func_0x000102b74408(&uStack_c0);
    uStack_f8 = *(undefined8 *)(param_1 + 0x60);
    uStack_100 = *(undefined8 *)(param_1 + 0x58);
    uStack_e8 = *(undefined8 *)(param_1 + 0x70);
    uStack_f0 = *(undefined8 *)(param_1 + 0x68);
    uStack_d8 = *(undefined8 *)(param_1 + 0x80);
    uStack_e0 = *(undefined8 *)(param_1 + 0x78);
    uStack_138 = *(undefined8 *)(param_1 + 0x20);
    uStack_140 = *(undefined8 *)(param_1 + 0x18);
    uStack_128 = *(undefined8 *)(param_1 + 0x30);
    uStack_130 = *(undefined8 *)(param_1 + 0x28);
    uStack_118 = *(undefined8 *)(param_1 + 0x40);
    uStack_120 = *(undefined8 *)(param_1 + 0x38);
    uStack_108 = *(undefined8 *)(param_1 + 0x50);
    uStack_110 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x20) = uStack_238;
    *(undefined8 *)(param_1 + 0x18) = uStack_240;
    *(undefined8 *)(param_1 + 0x30) = uStack_228;
    *(undefined8 *)(param_1 + 0x28) = uStack_230;
    *(undefined8 *)(param_1 + 0x50) = uStack_208;
    *(undefined8 *)(param_1 + 0x48) = uStack_210;
    *(undefined8 *)(param_1 + 0x60) = uStack_1f8;
    *(undefined8 *)(param_1 + 0x58) = uStack_200;
    *(undefined8 *)(param_1 + 0x70) = uStack_1e8;
    *(undefined8 *)(param_1 + 0x68) = uStack_1f0;
    uVar1 = uStack_218 & 0xffffffff00000001 | 0x40000000;
  }
  else {
    if ((uStack_98 >> 0x1e & 3) != 0) {
      return;
    }
    uStack_218 = uStack_98 & 0xffffffff3fffffff;
    uStack_1b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x18);
    uStack_1a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_1b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_1a0 = *(undefined8 *)(param_1 + 0x38);
    uStack_188 = *(undefined8 *)(param_1 + 0x50);
    uStack_190 = *(undefined8 *)(param_1 + 0x48);
    uStack_178 = *(undefined8 *)(param_1 + 0x60);
    uStack_180 = *(undefined8 *)(param_1 + 0x58);
    uStack_168 = *(undefined8 *)(param_1 + 0x70);
    uStack_170 = *(undefined8 *)(param_1 + 0x68);
    uStack_158 = *(undefined8 *)(param_1 + 0x80);
    uStack_160 = *(undefined8 *)(param_1 + 0x78);
    uStack_150 = *(undefined4 *)(param_1 + 0x88);
    uStack_198 = *(ulong *)(param_1 + 0x40) & 0xffffffff3fffffff;
    FUN_102b743d4(&uStack_c0,&uStack_140);
    FUN_102b724bc(&uStack_1c0,&uStack_140);
    (*param_2)(&uStack_240);
    func_0x000102b74408(&uStack_c0);
    uStack_f8 = *(undefined8 *)(param_1 + 0x60);
    uStack_100 = *(undefined8 *)(param_1 + 0x58);
    uStack_e8 = *(undefined8 *)(param_1 + 0x70);
    uStack_f0 = *(undefined8 *)(param_1 + 0x68);
    uStack_d8 = *(undefined8 *)(param_1 + 0x80);
    uStack_e0 = *(undefined8 *)(param_1 + 0x78);
    uStack_138 = *(undefined8 *)(param_1 + 0x20);
    uStack_140 = *(undefined8 *)(param_1 + 0x18);
    uStack_128 = *(undefined8 *)(param_1 + 0x30);
    uStack_130 = *(undefined8 *)(param_1 + 0x28);
    uStack_118 = *(undefined8 *)(param_1 + 0x40);
    uStack_120 = *(undefined8 *)(param_1 + 0x38);
    uStack_108 = *(undefined8 *)(param_1 + 0x50);
    uStack_110 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x20) = uStack_238;
    *(undefined8 *)(param_1 + 0x18) = uStack_240;
    *(undefined8 *)(param_1 + 0x30) = uStack_228;
    *(undefined8 *)(param_1 + 0x28) = uStack_230;
    *(undefined8 *)(param_1 + 0x50) = uStack_208;
    *(undefined8 *)(param_1 + 0x48) = uStack_210;
    *(undefined8 *)(param_1 + 0x60) = uStack_1f8;
    *(undefined8 *)(param_1 + 0x58) = uStack_200;
    *(undefined8 *)(param_1 + 0x70) = uStack_1e8;
    *(undefined8 *)(param_1 + 0x68) = uStack_1f0;
    uVar1 = uStack_218 & 0xffffffff00000001;
  }
  uStack_d0 = *(undefined4 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x38) = uStack_220;
  *(ulong *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x80) = uStack_1d8;
  *(undefined8 *)(param_1 + 0x78) = uStack_1e0;
  *(undefined4 *)(param_1 + 0x88) = uStack_1d0;
  func_0x000102b74408(&uStack_140);
  return;
}



/* Entry: 102b73dcc; end: 102b73e57;  */

void FUN_102b73dcc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_102b73f28(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                *(undefined4 *)(unaff_x20 + 0x88));
  FUN_102b72218(*(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b73e58; end: 102b73edf;  */

/* WARNING: Possible PIC construction at 0x000102b73e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b73e98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b73e8c) */
/* WARNING: Removing unreachable block (ram,0x000102b73e9c) */

void FUN_102b73e58(void)

{
  undefined8 in_x4;
  uint in_w5;
  
  if (in_w5 >> 0x1e < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(in_x4);
    return;
  }
  if (in_w5 >> 0x1e == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
  return;
}



/* Entry: 102b73ee0; end: 102b73f27;  */

void FUN_102b73ee0(undefined8 *param_1)

{
  FUN_102b73f28(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                *(undefined4 *)(param_1 + 0xe));
  return;
}



/* Entry: 102b73f28; end: 102b73fab;  */

/* WARNING: Possible PIC construction at 0x000102b73f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b73f64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b73f58) */
/* WARNING: Removing unreachable block (ram,0x000102b73f68) */

void FUN_102b73f28(void)

{
  uint in_w5;
  
  if (in_w5 >> 0x1e < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  if (in_w5 >> 0x1e == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
  return;
}



/* Entry: 102b73fac; end: 102b7419f;  */

undefined8 * FUN_102b73fac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  
  uVar1 = *param_2;
  uVar8 = param_2[1];
  uVar2 = param_2[2];
  uVar9 = param_2[3];
  uVar3 = param_2[4];
  uVar10 = param_2[5];
  uVar4 = param_2[6];
  uVar11 = param_2[7];
  uVar5 = param_2[8];
  uVar12 = param_2[9];
  uVar6 = param_2[10];
  uVar13 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar14 = param_2[0xd];
  uVar15 = *(undefined4 *)(param_2 + 0xe);
  FUN_102b73e58(uVar1,uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar11,uVar5,uVar12,uVar6,uVar13,uVar7,
                uVar14,uVar15);
  *param_1 = uVar1;
  param_1[1] = uVar8;
  param_1[2] = uVar2;
  param_1[3] = uVar9;
  param_1[4] = uVar3;
  param_1[5] = uVar10;
  param_1[6] = uVar4;
  param_1[7] = uVar11;
  param_1[8] = uVar5;
  param_1[9] = uVar12;
  param_1[10] = uVar6;
  param_1[0xb] = uVar13;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar14;
  *(undefined4 *)(param_1 + 0xe) = uVar15;
  return param_1;
}



/* Entry: 102b741a0; end: 102b741cb;  */

void FUN_102b741a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Entry: 102b741cc; end: 102b7424f;  */

undefined8 * FUN_102b741cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar9 = *(undefined4 *)(param_2 + 0xe);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar12 = param_1[7];
  uVar14 = param_1[9];
  uVar13 = param_1[8];
  uVar16 = param_1[0xb];
  uVar15 = param_1[10];
  uVar4 = param_1[0xc];
  uVar8 = param_1[0xd];
  uVar10 = *(undefined4 *)(param_1 + 0xe);
  uVar17 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar17;
  param_1[3] = uVar19;
  param_1[2] = uVar18;
  uVar17 = param_2[4];
  uVar19 = param_2[7];
  uVar18 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar17;
  param_1[7] = uVar19;
  param_1[6] = uVar18;
  uVar17 = param_2[8];
  uVar19 = param_2[0xb];
  uVar18 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar17;
  param_1[0xb] = uVar19;
  param_1[10] = uVar18;
  uVar17 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar17;
  *(undefined4 *)(param_1 + 0xe) = uVar9;
  FUN_102b73f28(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar12,uVar13,uVar14,uVar15,uVar16,uVar4,
                uVar8,uVar10);
  return param_1;
}



/* Entry: 102b74250; end: 102b743d3;  */

int FUN_102b74250(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[0x1d] != '\0')) {
    return *param_1 + 0x7ffffffd;
  }
  uVar1 = ((uint)param_1[10] >> 0x1e | ((uint)param_1[10] >> 1 & 0x1fffffff) << 2) ^ 0x7fffffff;
  if (0x7ffffffb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102b743d4; end: 102b74433;  */

undefined8 FUN_102b743d4(undefined8 param_1,undefined8 param_2)

{
  FUN_102b73fac(param_2,param_1,&UNK_1105a47a8);
  return param_2;
}



/* Entry: 102b74434; end: 102b74487;  */

void FUN_102b74434(void)

{
  long unaff_x20;
  
  FUN_102b72890(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102b74488; end: 102b74537;  */

undefined8 FUN_102b74488(undefined8 param_1,undefined8 param_2)

{
  FUN_102b746f4(param_2,param_1,&UNK_1105a4838);
  return param_2;
}



/* Entry: 102b74538; end: 102b7457f;  */

/* WARNING: Possible PIC construction at 0x000102b745c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b745d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b745c4) */
/* WARNING: Removing unreachable block (ram,0x000102b745d4) */

void FUN_102b74538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  char cStack0000000000000034;
  
  uVar1 = _cStack0000000000000034 >> 6 & 3;
  if (uVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  if (uVar1 == 0) {
    if (cStack0000000000000034 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRetain_11034f320)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(param_5);
    return;
  }
  return;
}



/* Entry: 102b74580; end: 102b745ef;  */

/* WARNING: Possible PIC construction at 0x000102b745c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b745d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b745c4) */
/* WARNING: Removing unreachable block (ram,0x000102b745d4) */

void FUN_102b74580(void)

{
  undefined8 in_x4;
  char in_stack_00000034;
  
  if (in_stack_00000034 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(in_x4);
  return;
}



/* Entry: 102b745f0; end: 102b7463f;  */

void FUN_102b745f0(undefined8 *param_1)

{
  FUN_102b74640(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                (ulong)*(uint5 *)(param_1 + 0xe));
  return;
}



/* Entry: 102b74640; end: 102b74687;  */

/* WARNING: Possible PIC construction at 0x000102b746c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b746d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b746c8) */
/* WARNING: Removing unreachable block (ram,0x000102b746d8) */

void FUN_102b74640(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  char cStack0000000000000034;
  
  uVar1 = _cStack0000000000000034 >> 6 & 3;
  if (uVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  if (uVar1 == 0) {
    if (cStack0000000000000034 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 102b74688; end: 102b746f3;  */

/* WARNING: Possible PIC construction at 0x000102b746c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b746d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b746c8) */
/* WARNING: Removing unreachable block (ram,0x000102b746d8) */

void FUN_102b74688(void)

{
  char in_stack_00000034;
  
  if (in_stack_00000034 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102b746f4; end: 102b748ff;  */

undefined8 * FUN_102b746f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  uint5 uVar16;
  
  uVar1 = *param_2;
  uVar8 = param_2[1];
  uVar2 = param_2[2];
  uVar9 = param_2[3];
  uVar3 = param_2[4];
  uVar10 = param_2[5];
  uVar4 = param_2[6];
  uVar11 = param_2[7];
  uVar5 = param_2[8];
  uVar12 = param_2[9];
  uVar6 = param_2[10];
  uVar13 = param_2[0xb];
  uVar15 = *(undefined1 *)((long)param_2 + 0x74);
  uVar16 = *(uint5 *)(param_2 + 0xe);
  uVar7 = param_2[0xc];
  uVar14 = param_2[0xd];
  FUN_102b74538(uVar1,uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar11,uVar5,uVar12,uVar6,uVar13,uVar7,
                uVar14,(ulong)*(uint5 *)(param_2 + 0xe));
  *param_1 = uVar1;
  param_1[1] = uVar8;
  param_1[2] = uVar2;
  param_1[3] = uVar9;
  param_1[4] = uVar3;
  param_1[5] = uVar10;
  param_1[6] = uVar4;
  param_1[7] = uVar11;
  param_1[8] = uVar5;
  param_1[9] = uVar12;
  param_1[10] = uVar6;
  param_1[0xb] = uVar13;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar14;
  *(undefined1 *)((long)param_1 + 0x74) = uVar15;
  *(int *)(param_1 + 0xe) = (int)uVar16;
  return param_1;
}



/* Entry: 102b74900; end: 102b7492b;  */

void FUN_102b74900(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  *(undefined8 *)((long)param_1 + 0x6d) = *(undefined8 *)((long)param_2 + 0x6d);
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Entry: 102b7492c; end: 102b749c3;  */

undefined8 * FUN_102b7492c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  uint5 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar10 = *(undefined1 *)((long)param_2 + 0x74);
  uVar9 = *(undefined4 *)(param_2 + 0xe);
  uVar12 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar13 = param_1[7];
  uVar15 = param_1[9];
  uVar14 = param_1[8];
  uVar17 = param_1[0xb];
  uVar16 = param_1[10];
  uVar4 = param_1[0xc];
  uVar8 = param_1[0xd];
  uVar11 = *(uint5 *)(param_1 + 0xe);
  uVar18 = *param_2;
  uVar20 = param_2[3];
  uVar19 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar18;
  param_1[3] = uVar20;
  param_1[2] = uVar19;
  uVar18 = param_2[4];
  uVar20 = param_2[7];
  uVar19 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar18;
  param_1[7] = uVar20;
  param_1[6] = uVar19;
  uVar18 = param_2[8];
  uVar20 = param_2[0xb];
  uVar19 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar18;
  param_1[0xb] = uVar20;
  param_1[10] = uVar19;
  uVar18 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar18;
  *(undefined4 *)(param_1 + 0xe) = uVar9;
  *(undefined1 *)((long)param_1 + 0x74) = uVar10;
  FUN_102b74640(uVar12,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar13,uVar14,uVar15,uVar16,uVar17,uVar4,
                uVar8,(ulong)uVar11);
  return param_1;
}



/* Entry: 102b749c4; end: 102b74b4b;  */

int FUN_102b749c4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && (*(char *)((long)param_1 + 0x75) != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 0x1d) >> 6) | (*(byte *)(param_1 + 0x1d) >> 1 & 0x1f) << 2) ^
          0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102b74b4c; end: 102b74e7b;  */

long * FUN_102b74b4c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar11 = *(long *)(param_3 + -8);
  uVar3 = *(uint *)(lVar11 + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    plVar7 = param_2;
    func_0x000107c614c4(param_2,param_3);
    iVar6 = (int)plVar7;
    if (iVar6 < 2) {
      if (iVar6 == 0) {
        *(char *)param_1 = (char)*param_2;
        param_1[1] = param_2[1];
        func_0x000107c61174();
        uVar9 = 0;
      }
      else {
        if (iVar6 != 1) {
LAB_102b74d98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar11 + 0x40));
          return param_1;
        }
        uVar9 = 0x112d5d568;
        func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
        plVar7 = param_2;
        func_0x000107c614c4(param_2,uVar9);
        bVar5 = (int)plVar7 != 1;
        if (bVar5) {
          lVar11 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar11 + -8) + 0x10))(param_1,param_2,lVar11);
        }
        else {
          lVar11 = *param_2;
          func_0x000107c614b0(lVar11);
          *param_1 = lVar11;
        }
        func_0x000107c6159c(param_1,uVar9,!bVar5);
        lVar11 = 0x112ef9348;
        func_0x0001000285a8(0x112ef9348,&UNK_10db287e0);
        puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x30));
        uVar9 = puVar1[1];
        uVar15 = *puVar1;
        puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x30));
        puVar4[1] = puVar1[1];
        *puVar4 = uVar15;
        func_0x000107c6157c(uVar9);
        uVar9 = 1;
      }
    }
    else if (iVar6 == 2) {
      lVar8 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar8;
      lVar11 = param_2[2];
      lVar2 = param_2[3];
      param_1[2] = lVar11;
      param_1[3] = lVar2;
      lVar12 = param_2[4];
      param_1[4] = lVar12;
      *(char *)(param_1 + 5) = (char)param_2[5];
      uVar9 = *(undefined8 *)((long)param_2 + 0x2c);
      *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)param_2 + 0x34);
      *(undefined8 *)((long)param_1 + 0x2c) = uVar9;
      *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_2 + 0x3c);
      uVar15 = *(undefined8 *)((long)param_2 + 0x4c);
      uVar9 = *(undefined8 *)((long)param_2 + 0x44);
      *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)((long)param_2 + 0x54);
      *(undefined8 *)((long)param_1 + 0x4c) = uVar15;
      *(undefined8 *)((long)param_1 + 0x44) = uVar9;
      lVar13 = param_2[0xf];
      uVar9 = *(undefined8 *)((long)param_2 + 0x5c);
      *(undefined8 *)((long)param_1 + 100) = *(undefined8 *)((long)param_2 + 100);
      *(undefined8 *)((long)param_1 + 0x5c) = uVar9;
      *(undefined8 *)((long)param_1 + 0x6c) = *(undefined8 *)((long)param_2 + 0x6c);
      func_0x000107c61174();
      func_0x000107c61174(lVar8);
      func_0x000107c61174(lVar11);
      func_0x000107c61174(lVar2);
      func_0x000107c61174(lVar12);
      if (lVar13 == 0) {
        lVar11 = param_2[0xf];
        param_1[0x10] = param_2[0x10];
        param_1[0xf] = lVar11;
      }
      else {
        lVar11 = param_2[0x10];
        param_1[0xf] = lVar13;
        param_1[0x10] = lVar11;
        func_0x000107c6157c();
      }
      uVar9 = 2;
    }
    else if (iVar6 == 3) {
      lVar8 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar8;
      lVar11 = param_2[2];
      lVar2 = param_2[3];
      param_1[2] = lVar11;
      param_1[3] = lVar2;
      lVar12 = param_2[4];
      param_1[4] = lVar12;
      *(char *)(param_1 + 5) = (char)param_2[5];
      uVar9 = *(undefined8 *)((long)param_2 + 0x2c);
      *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)param_2 + 0x34);
      *(undefined8 *)((long)param_1 + 0x2c) = uVar9;
      *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_2 + 0x3c);
      uVar15 = *(undefined8 *)((long)param_2 + 0x4c);
      uVar9 = *(undefined8 *)((long)param_2 + 0x44);
      *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)((long)param_2 + 0x54);
      *(undefined8 *)((long)param_1 + 0x4c) = uVar15;
      *(undefined8 *)((long)param_1 + 0x44) = uVar9;
      uVar9 = *(undefined8 *)((long)param_2 + 0x5c);
      *(undefined8 *)((long)param_1 + 100) = *(undefined8 *)((long)param_2 + 100);
      *(undefined8 *)((long)param_1 + 0x5c) = uVar9;
      *(undefined8 *)((long)param_1 + 0x6c) = *(undefined8 *)((long)param_2 + 0x6c);
      lVar13 = param_2[0x10];
      lVar14 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = lVar14;
      func_0x000107c61174();
      func_0x000107c61174(lVar8);
      func_0x000107c61174(lVar11);
      func_0x000107c61174(lVar2);
      func_0x000107c61174(lVar12);
      func_0x000107c6157c(lVar13);
      uVar9 = 3;
    }
    else {
      if (iVar6 != 4) goto LAB_102b74d98;
      lVar11 = *param_2;
      func_0x000107c614b0(lVar11);
      *param_1 = lVar11;
      lVar11 = param_2[1];
      if (lVar11 == 0) {
        lVar11 = param_2[1];
        param_1[2] = param_2[2];
        param_1[1] = lVar11;
      }
      else {
        lVar8 = param_2[2];
        param_1[1] = lVar11;
        param_1[2] = lVar8;
        func_0x000107c6157c();
      }
      uVar9 = 4;
    }
    func_0x000107c6159c(param_1,param_3,uVar9);
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar10 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar11 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102b74e7c; end: 102b74fcb;  */

/* WARNING: Possible PIC construction at 0x000102b74f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b74f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b74f68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b74f14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b74f24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b74f18) */
/* WARNING: Removing unreachable block (ram,0x000102b74f5c) */
/* WARNING: Removing unreachable block (ram,0x000102b74f4c) */
/* WARNING: Removing unreachable block (ram,0x000102b74f28) */
/* WARNING: Removing unreachable block (ram,0x000102b74f6c) */

void FUN_102b74e7c(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = param_1;
  func_0x000107c614c4();
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        return;
      }
      uVar3 = 0x112d5d568;
      func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
      puVar2 = param_1;
      func_0x000107c614c4(param_1,uVar3);
      if ((int)puVar2 == 1) {
        func_0x000107c614ac(*param_1);
      }
      else {
        lVar4 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1,lVar4);
      }
      lVar4 = 0x112ef9348;
      func_0x0001000285a8(0x112ef9348,&UNK_10db287e0);
      uVar3 = *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x30) + 8);
LAB_102b74fc0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar3);
      return;
    }
    uVar3 = param_1[1];
  }
  else if (iVar1 == 2) {
    func_0x000107c61170(*param_1);
    uVar3 = param_1[1];
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 != 4) {
        return;
      }
      func_0x000107c614ac(*param_1);
      if (param_1[1] == 0) {
        return;
      }
      uVar3 = param_1[2];
      goto LAB_102b74fc0;
    }
    uVar3 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102b74fcc; end: 102b7560b;  */

undefined8 * FUN_102b74fcc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar4 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar3 = (int)puVar4;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_1[1] = param_2[1];
      func_0x000107c61174();
      uVar6 = 0;
    }
    else {
      if (iVar3 != 1) {
LAB_102b751ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)
                  (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
        return param_1;
      }
      uVar6 = 0x112d5d568;
      func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
      puVar4 = param_2;
      func_0x000107c614c4(param_2,uVar6);
      bVar2 = (int)puVar4 != 1;
      if (bVar2) {
        lVar5 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
      }
      else {
        uVar7 = *param_2;
        func_0x000107c614b0(uVar7);
        *param_1 = uVar7;
      }
      func_0x000107c6159c(param_1,uVar6,!bVar2);
      lVar5 = 0x112ef9348;
      func_0x0001000285a8(0x112ef9348,&UNK_10db287e0);
      param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
      uVar6 = param_2[1];
      uVar7 = *param_2;
      puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30));
      puVar4[1] = param_2[1];
      *puVar4 = uVar7;
      func_0x000107c6157c(uVar6);
      uVar6 = 1;
    }
  }
  else if (iVar3 == 2) {
    uVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar7;
    uVar6 = param_2[2];
    uVar1 = param_2[3];
    param_1[2] = uVar6;
    param_1[3] = uVar1;
    uVar8 = param_2[4];
    param_1[4] = uVar8;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    uVar9 = *(undefined8 *)((long)param_2 + 0x2c);
    *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)param_2 + 0x34);
    *(undefined8 *)((long)param_1 + 0x2c) = uVar9;
    *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_2 + 0x3c);
    uVar10 = *(undefined8 *)((long)param_2 + 0x4c);
    uVar9 = *(undefined8 *)((long)param_2 + 0x44);
    *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)((long)param_2 + 0x54);
    *(undefined8 *)((long)param_1 + 0x4c) = uVar10;
    *(undefined8 *)((long)param_1 + 0x44) = uVar9;
    lVar5 = param_2[0xf];
    uVar9 = *(undefined8 *)((long)param_2 + 0x5c);
    *(undefined8 *)((long)param_1 + 100) = *(undefined8 *)((long)param_2 + 100);
    *(undefined8 *)((long)param_1 + 0x5c) = uVar9;
    *(undefined8 *)((long)param_1 + 0x6c) = *(undefined8 *)((long)param_2 + 0x6c);
    func_0x000107c61174();
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar6);
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar8);
    if (lVar5 == 0) {
      lVar5 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = lVar5;
    }
    else {
      uVar6 = param_2[0x10];
      param_1[0xf] = lVar5;
      param_1[0x10] = uVar6;
      func_0x000107c6157c();
    }
    uVar6 = 2;
  }
  else if (iVar3 == 3) {
    uVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar7;
    uVar6 = param_2[2];
    uVar1 = param_2[3];
    param_1[2] = uVar6;
    param_1[3] = uVar1;
    uVar8 = param_2[4];
    param_1[4] = uVar8;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    uVar9 = *(undefined8 *)((long)param_2 + 0x2c);
    *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)param_2 + 0x34);
    *(undefined8 *)((long)param_1 + 0x2c) = uVar9;
    *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_2 + 0x3c);
    uVar10 = *(undefined8 *)((long)param_2 + 0x4c);
    uVar9 = *(undefined8 *)((long)param_2 + 0x44);
    *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)((long)param_2 + 0x54);
    *(undefined8 *)((long)param_1 + 0x4c) = uVar10;
    *(undefined8 *)((long)param_1 + 0x44) = uVar9;
    uVar9 = *(undefined8 *)((long)param_2 + 0x5c);
    *(undefined8 *)((long)param_1 + 100) = *(undefined8 *)((long)param_2 + 100);
    *(undefined8 *)((long)param_1 + 0x5c) = uVar9;
    *(undefined8 *)((long)param_1 + 0x6c) = *(undefined8 *)((long)param_2 + 0x6c);
    uVar9 = param_2[0x10];
    uVar10 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar10;
    func_0x000107c61174();
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar6);
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar8);
    func_0x000107c6157c(uVar9);
    uVar6 = 3;
  }
  else {
    if (iVar3 != 4) goto LAB_102b751ec;
    uVar6 = *param_2;
    func_0x000107c614b0(uVar6);
    *param_1 = uVar6;
    lVar5 = param_2[1];
    if (lVar5 == 0) {
      lVar5 = param_2[1];
      param_1[2] = param_2[2];
      param_1[1] = lVar5;
    }
    else {
      uVar6 = param_2[2];
      param_1[1] = lVar5;
      param_1[2] = uVar6;
      func_0x000107c6157c();
    }
    uVar6 = 4;
  }
  func_0x000107c6159c(param_1,param_3,uVar6);
  return param_1;
}



/* Entry: 102b7560c; end: 102b75823;  */

/* WARNING: Possible PIC construction at 0x000102b75674: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b75678) */

long FUN_102b7560c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)lVar3 == 1) {
    lVar3 = 0x112d5d568;
    func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
    lVar4 = param_2;
    func_0x000107c614c4(param_2,lVar3);
    if ((int)lVar4 == 0) {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
      func_0x000107c6159c(param_1,lVar3,0);
      lVar3 = 0x112ef9348;
      func_0x0001000285a8(0x112ef9348,&UNK_10db287e0);
      puVar1 = (undefined8 *)(param_2 + *(int *)(lVar3 + 0x30));
      uVar5 = *puVar1;
      puVar2 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x30));
      puVar2[1] = puVar1[1];
      *puVar2 = uVar5;
      func_0x000107c6159c(param_1,param_3,1);
      return param_1;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40);
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_3 + -8) + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar5);
  return param_1;
}



/* Entry: 102b75824; end: 102b75853;  */

void FUN_102b75824(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000102b7582c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 102b75854; end: 102b759a7;  */

void FUN_102b75854(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_68 [32];
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_48 = &UNK_10db28908;
  lVar1 = 0x13f;
  func_0x000102b758f0();
  if (param_2 < 0x40) {
    func_0x000107c61504(auStack_68,*(long *)(lVar1 + -8) + 0x40,PTR___syycWV_11034f1c0 + 0x40);
    puStack_38 = &UNK_10db28920;
    puStack_30 = &UNK_10db28920;
    puStack_28 = &UNK_10db28938;
    puStack_40 = auStack_68;
    func_0x000107c61528(param_1,0x100,5,&puStack_48);
  }
  return;
}



/* Entry: 102b759a8; end: 102b75a4b;  */

undefined8 * FUN_102b759a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar4 = param_2[4];
  param_1[4] = uVar4;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar5 = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x2c) = uVar5;
  *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_2 + 0x3c);
  uVar6 = *(undefined8 *)((long)param_2 + 0x4c);
  uVar5 = *(undefined8 *)((long)param_2 + 0x44);
  *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)((long)param_2 + 0x54);
  *(undefined8 *)((long)param_1 + 0x4c) = uVar6;
  *(undefined8 *)((long)param_1 + 0x44) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x5c);
  *(undefined8 *)((long)param_1 + 100) = *(undefined8 *)((long)param_2 + 100);
  *(undefined8 *)((long)param_1 + 0x5c) = uVar5;
  *(undefined8 *)((long)param_1 + 0x6c) = *(undefined8 *)((long)param_2 + 0x6c);
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  return param_1;
}



/* Entry: 102b75a4c; end: 102b75b57;  */

undefined8 * FUN_102b75a4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)((long)param_2 + 0x3c);
  *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_2 + 0x44);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)((long)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)((long)param_2 + 0x54);
  *(undefined8 *)((long)param_1 + 0x5c) = *(undefined8 *)((long)param_2 + 0x5c);
  *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)((long)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined8 *)((long)param_1 + 0x6c) = *(undefined8 *)((long)param_2 + 0x6c);
  return param_1;
}


