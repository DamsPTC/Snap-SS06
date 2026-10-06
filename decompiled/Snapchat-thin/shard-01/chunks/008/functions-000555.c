/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101553240; end: 10155357f;  */

undefined * FUN_101553240(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101553348);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112db3e50;
    func_0x0001000285a8(0x112db3e50,&UNK_10d95e3a8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_11079e068);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101553580; end: 101553667;  */

undefined * FUN_101553580(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar10 = (undefined8 *)(param_1 + 0x38);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uVar1 = puVar10[-3];
      uVar4 = puVar10[-2];
      uVar2 = puVar10[-1];
      uVar5 = *puVar10;
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      puVar6 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_10154032c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar3 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_10154032c(puVar8,uVar3 + 1,1,puVar7);
      }
      puVar10 = puVar10 + 6;
      *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puVar8 + uVar3 * 0x20 + 0x20) = uVar1;
      *(undefined8 *)(puVar8 + uVar3 * 0x20 + 0x28) = uVar4;
      *(undefined8 *)(puVar8 + uVar3 * 0x20 + 0x30) = uVar2;
      *(undefined8 *)(puVar8 + uVar3 * 0x20 + 0x38) = uVar5;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return puVar8;
}



/* Entry: 101553668; end: 10155371b;  */

undefined1  [16] FUN_101553668(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = param_1;
  func_0x0001015df80c();
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    uVar2 = param_2;
    uVar3 = param_3;
    func_0x0001015df794(param_1,param_2,param_3);
    func_0x00010006c090(uVar3,param_4);
    func_0x000107c6142c(uVar2);
    uVar1 = uVar1 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x0001015df794(param_1,param_2,param_3);
      func_0x00010006c090(param_3,param_4);
      goto LAB_101553708;
    }
  }
  param_1 = 0;
  param_2 = 0;
LAB_101553708:
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10155371c; end: 10155371f;  */

void FUN_10155371c(void)

{
  return;
}



/* Entry: 101553720; end: 101553753;  */

undefined8 FUN_101553720(undefined8 param_1)

{
  FUN_1015f5dfc();
  return param_1;
}



/* Entry: 101553754; end: 101553757;  */

void FUN_101553754(void)

{
  return;
}



/* Entry: 101553758; end: 101553797;  */

void FUN_101553758(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db3cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9687e8;
  func_0x000107c61520(&DAT_10d9687e8,&UNK_1103e5558);
  puRam0000000112db3cf8 = puVar1;
  return;
}



/* Entry: 101553798; end: 1015537b3;  */

int FUN_101553798(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1015537b4; end: 1015537ef;  */

undefined8 FUN_1015537b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1015d46b8(param_2,param_1);
  return param_2;
}



/* Entry: 1015537f0; end: 1015537f3;  */

void FUN_1015537f0(void)

{
  return;
}



/* Entry: 1015537f4; end: 101553827;  */

undefined8 FUN_1015537f4(undefined8 param_1)

{
  (*(code *)(undefined *)0x1015d8094)();
  return param_1;
}



/* Entry: 101553828; end: 10155382b;  */

void FUN_101553828(void)

{
  return;
}



/* Entry: 10155382c; end: 10155385f;  */

/* WARNING: Possible PIC construction at 0x00010155384c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101553850) */

void FUN_10155382c(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101553860; end: 101553863;  */

void FUN_101553860(void)

{
  return;
}



/* Entry: 101553864; end: 101553897;  */

undefined8 FUN_101553864(undefined8 param_1)

{
  FUN_1015dd3f4();
  return param_1;
}



/* Entry: 101553898; end: 10155389b;  */

void FUN_101553898(void)

{
  return;
}



/* Entry: 10155389c; end: 1015538eb;  */

undefined8 FUN_10155389c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db3ce8;
  func_0x0001000285a8(0x112db3ce8,&UNK_10d98ff60);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1015538ec; end: 10155394b;  */

int FUN_1015538ec(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0xc0);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10155394c; end: 10155398f;  */

undefined8 FUN_10155394c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000103de4634();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101553990; end: 1015539b3;  */

void FUN_101553990(void)

{
  return;
}



/* Entry: 1015539b4; end: 1015539eb;  */

void FUN_1015539b4(undefined8 param_1)

{
  if (lRam0000000112db3d50 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6478ac);
  return;
}



/* Entry: 1015539ec; end: 101553b97;  */

void FUN_1015539ec(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = &UNK_10d95e320;
  puStack_40 = &UNK_10d95e338;
  puStack_38 = PTR___sBoWV_11034d678 + 0x40;
  lVar1 = 0x13f;
  puStack_30 = puStack_38;
  func_0x000101553a7c();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,5,&puStack_48,param_1 + 0x50);
  }
  return;
}



/* Entry: 101553b98; end: 101553bdb;  */

void FUN_101553b98(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d7e688 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5ede0(0xff);
  puVar2 = PTR___s10Foundation3URLVSQAAMc_1103509a8;
  func_0x000107c61520(PTR___s10Foundation3URLVSQAAMc_1103509a8,uVar1);
  puRam0000000112d7e688 = puVar2;
  return;
}



/* Entry: 101553bdc; end: 101553c83;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101553bdc(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107c6142c(param_3);
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 == 1) {
    param_4 = param_5 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 101553c84; end: 101553c97;  */

void FUN_101553c84(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101553c98; end: 101553ccb;  */

undefined8 FUN_101553c98(undefined8 param_1)

{
  (*(code *)&DAT_103592504)();
  return param_1;
}



/* Entry: 101553ccc; end: 101553ce7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101553ccc(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (0xe < param_3 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 101553ce8; end: 101553d57;  */

undefined8 FUN_101553ce8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103593a78)(param_2,param_1);
  return param_2;
}



/* Entry: 101553d58; end: 101553d97;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101553d58(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 101553d98; end: 101553de3;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_101553d98(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_5);
  return;
}



/* Entry: 101553de4; end: 101553e17;  */

undefined8 FUN_101553de4(undefined8 param_1)

{
  FUN_10165f38c();
  return param_1;
}



/* Entry: 101553e18; end: 101553e57;  */

void FUN_101553e18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db3e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d973f48;
  func_0x000107c61520(&DAT_10d973f48,&UNK_1103ed890);
  puRam0000000112db3e08 = puVar1;
  return;
}



/* Entry: 101553e58; end: 101553e8b;  */

undefined8 FUN_101553e58(undefined8 param_1)

{
  (*(code *)(undefined *)0x10164c928)();
  return param_1;
}



/* Entry: 101553e8c; end: 101553e8f;  */

void FUN_101553e8c(void)

{
  return;
}



/* Entry: 101553e90; end: 101553ec3;  */

undefined8 FUN_101553e90(undefined8 param_1)

{
  (*(code *)(undefined *)0x101662244)();
  return param_1;
}



/* Entry: 101553ec4; end: 101553ec7;  */

void FUN_101553ec4(void)

{
  return;
}



/* Entry: 101553ec8; end: 101553f37;  */

undefined8 FUN_101553ec8(undefined8 param_1)

{
  (*(code *)(undefined *)0x10165cc24)();
  return param_1;
}



/* Entry: 101553f38; end: 101553f9f;  */

void FUN_101553f38(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam0000000112db3e38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d550a0;
  func_0x00010002969c(0x112d550a0,&UNK_10d91c290);
  puStack_20 = PTR___sSSSesWP_11034daa8;
  puStack_18 = PTR___sSSSesWP_11034daa8;
  puVar2 = PTR___sSDyxq_GSesSeRzSeR_rlMc_11034d7a0;
  func_0x000107c61520(PTR___sSDyxq_GSesSeRzSeR_rlMc_11034d7a0,uVar1,&puStack_20);
  puRam0000000112db3e38 = puVar2;
  return;
}



/* Entry: 101553fa0; end: 1015542cb;  */

undefined8 FUN_101553fa0(undefined8 param_1,undefined8 param_2)

{
  FUN_101657634(param_2,param_1);
  return param_2;
}



/* Entry: 1015542cc; end: 1015542f3;  */

int FUN_1015542cc(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  iVar1 = 0;
  if ((uVar2 >> 0x1c & 3) != 0) {
    iVar1 = 0x10 - ((uVar2 >> 0x1c & 3) << 2 | uVar2 >> 0x1e);
  }
  return iVar1;
}



/* Entry: 1015542f4; end: 101554417;  */

undefined8 FUN_1015542f4(undefined8 param_1)

{
  FUN_1015de72c();
  return param_1;
}



/* Entry: 101554418; end: 101554433;  */

void FUN_101554418(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 101554434; end: 10155455b;  */

undefined8 FUN_101554434(undefined8 param_1,undefined8 param_2)

{
  FUN_1015eb350(param_2,param_1);
  return param_2;
}



/* Entry: 10155455c; end: 10155455f;  */

void FUN_10155455c(void)

{
  return;
}



/* Entry: 101554560; end: 1015546c3;  */

undefined8 FUN_101554560(undefined8 param_1)

{
  FUN_1015ec134();
  return param_1;
}



/* Entry: 1015546c4; end: 1015546e7;  */

void FUN_1015546c4(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((((param_2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     ((param_3 & 0xf000000000000007) == 0xf000000000000007)) {
    return;
  }
  func_0x00010006c00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1015546e8; end: 10155470b;  */

void FUN_1015546e8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010006c00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10155470c; end: 10155472f;  */

void FUN_10155470c(undefined8 param_1,ulong param_2,ulong param_3)

{
  if ((((param_2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     ((param_3 & 0xf000000000000007) == 0xf000000000000007)) {
    return;
  }
  func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101554730; end: 101554797;  */

void FUN_101554730(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101554798; end: 1015549cb;  */

void FUN_101554798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112db3ed0,&UNK_10d95e460);
  puVar1 = &UNK_1103dcd28;
  func_0x000107c613fc(&UNK_1103dcd28,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_1015549cc,puVar1);
  return;
}



/* Entry: 1015549cc; end: 1015549df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015549cc(long *param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  lVar1 = 0;
  func_0x000103ddeef8(0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(&uStack_61);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(lVar3);
  func_0x000100083b20(&uStack_90);
  lVar2 = 0;
  FUN_1015560ec();
  lVar1 = lVar2;
  func_0x000107c613fc();
  *(undefined1 *)(lVar1 + 0x30) = uStack_61;
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x10) = uStack_88;
  *(undefined8 *)(lVar1 + 0x18) = uStack_80;
  FUN_101556014(lVar3,lVar1 + _DAT_112db3ed8,&SUB_103ddeef8);
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1103dcd40;
  *param_1 = lVar1;
  return;
}



/* Entry: 1015549e0; end: 101554a6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1015549e0(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = param_5;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  FUN_101556014(param_6,unaff_x20 + _DAT_112db3ed8,&SUB_103ddeef8);
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  return unaff_x20;
}



/* Entry: 101554a70; end: 101555673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101554a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar15;
  long extraout_x8_03;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar19;
  undefined8 uVar20;
  long lVar21;
  long lStack_b80;
  long lStack_b78;
  ulong uStack_b70;
  ulong uStack_b68;
  long lStack_b60;
  long lStack_b58;
  long lStack_b50;
  long lStack_b48;
  long lStack_b40;
  long lStack_b38;
  undefined1 auStack_af0 [224];
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_93f;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_85f;
  undefined8 uStack_850;
  long lStack_848;
  ulong uStack_840;
  undefined8 uStack_838;
  long lStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_77f;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_69f;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5bf;
  undefined1 auStack_5b0 [336];
  undefined1 uStack_460;
  undefined7 uStack_45f;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_38f;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_23f;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_7f;
  
  lVar5 = 0;
  lStack_b78 = param_4;
  uStack_b70 = param_5;
  func_0x00010477ea9c();
  lStack_b40 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar14 = (long)&lStack_b80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_b38 = lVar14;
  func_0x00010474425c();
  lStack_b58 = *(long *)(lVar5 + -8);
  lStack_b50 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b58 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112db3ee0;
  lStack_b80 = lVar14;
  func_0x0001000285a8(0x112db3ee0,&UNK_10d95e570);
  lStack_b60 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_01;
  lVar5 = 0x112db3ee8;
  lStack_b48 = lVar14;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  uVar17 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  uStack_b68 = uVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = uVar17 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar18 - extraout_x12_00;
  lVar5 = 0;
  func_0x000103de4634();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar21 = lVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar5 = unaff_x20 + _DAT_112db3ed8;
  uVar20 = *(undefined8 *)(lVar5 + 0x10);
  uVar12 = *(undefined8 *)(lVar5 + 0x18);
  lVar6 = 0;
  func_0x000103ddeef8();
  uVar16 = *(undefined8 *)(lVar5 + *(int *)(lVar6 + 0x30));
  func_0x000107c61434(uVar12);
  func_0x000100083b20(&uStack_850);
  lVar14 = lStack_848;
  uVar8 = uStack_850;
  uVar7 = uStack_850;
  func_0x000107c614f0(uStack_850);
  uStack_850 = 0xd000000000000042;
  lStack_848 = -0x7ffffffef104d3f0;
  uStack_840 = uStack_840 & 0xffffffffffffff00;
  (**(code **)(lVar14 + 8))(&uStack_460,&uStack_850,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar7,lVar14);
  func_0x000107c615e8(uVar8);
  uVar1 = uStack_460;
  func_0x000100083b20(&uStack_850);
  lVar14 = lStack_848;
  uVar8 = uStack_850;
  uVar7 = uStack_850;
  func_0x000107c614f0(uStack_850);
  uStack_850 = 0xd00000000000003f;
  lStack_848 = 0x800000010efb2c60;
  uStack_840 = uStack_840 & 0xffffffffffffff00;
  (**(code **)(lVar14 + 8))(&uStack_460,&uStack_850,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar7,lVar14);
  func_0x000107c615e8(uVar8);
  uVar2 = uStack_460;
  uVar8 = 0;
  func_0x000103e04860(0);
  func_0x000107c610f8();
  puVar9 = (undefined1 *)0x0;
  func_0x000103e044dc(0,0,uVar20,uVar12,uVar16,uVar1,uVar2,uVar8);
  FUN_101556294(lVar5 + *(int *)(lVar6 + 100),lVar21,0x112db39a8,&UNK_10d95dd90);
  func_0x00010008a7c8(&uStack_460,lVar21);
  func_0x000101556098(lVar21,&SUB_103de4634);
  uVar20 = CONCAT71(uStack_45f,uStack_460);
  func_0x000100083b20(&uStack_850);
  func_0x000107c61574(uVar20);
  func_0x0001000a8868(&uStack_850,uStack_838);
  FUN_10156a69c(auStack_5b0,param_1,param_2,param_3);
  puVar10 = auStack_5b0;
  (**(code **)(lStack_830 + 8))(puVar10,puVar9,uStack_838,lStack_830);
  func_0x00010153bf7c(auStack_5b0);
  func_0x0001000834e4(&uStack_850);
  if ((((puVar10 != (undefined1 *)0x0) && (*(long *)(puVar10 + _DAT_113090fd8) != 0)) &&
      (lVar14 = *(long *)(*(long *)(puVar10 + _DAT_113090fd8) + _DAT_113091378), lVar14 != 0)) &&
     (lVar6 = *(long *)(unaff_x20 + 0x38), lVar6 != 0)) {
    lVar21 = *(long *)(lVar5 + 0x28);
    if (lVar21 == 0) {
      func_0x000107c61174(lVar14);
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined8 *)(lVar5 + 0x20);
      func_0x000107c61174(lVar14);
      func_0x000107c5fadc(uVar20,lVar21);
    }
    func_0x000107c4ba8c(lVar6);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(uVar20);
  }
  FUN_10156a69c(&uStack_460,param_1,param_2,param_3);
  uStack_268 = uStack_3b8;
  uStack_270 = uStack_3c0;
  uStack_258 = uStack_3a8;
  uStack_260 = uStack_3b0;
  uStack_250 = uStack_3a0;
  uStack_23f = uStack_38f;
  uStack_2a8 = uStack_3f8;
  uStack_2b0 = uStack_400;
  uStack_298 = uStack_3e8;
  uStack_2a0 = uStack_3f0;
  uStack_288 = uStack_3d8;
  uStack_290 = uStack_3e0;
  uStack_278 = uStack_3c8;
  uStack_280 = uStack_3d0;
  uStack_2e8 = uStack_438;
  uStack_2f0 = uStack_440;
  uStack_2d8 = uStack_428;
  uStack_2e0 = uStack_430;
  uStack_2c8 = uStack_418;
  uStack_2d0 = uStack_420;
  uStack_2b8 = uStack_408;
  uStack_2c0 = uStack_410;
  uStack_310 = CONCAT71(uStack_45f,uStack_460);
  uStack_308 = uStack_458;
  uStack_2f8 = uStack_448;
  uStack_300 = uStack_450;
  FUN_101556294(&uStack_310,&uStack_850,0x112db3cf0,&UNK_10d95e250);
  func_0x00010153bf7c(&uStack_460);
  FUN_10153becc(&uStack_690);
  iVar4 = (int)&uStack_770;
  uStack_7a8 = uStack_268;
  uStack_7b0 = uStack_270;
  uStack_798 = uStack_258;
  uStack_7a0 = uStack_260;
  uStack_790 = uStack_250;
  uStack_77f = uStack_23f;
  uStack_7e8 = uStack_2a8;
  uStack_7f0 = uStack_2b0;
  uStack_7d8 = uStack_298;
  uStack_7e0 = uStack_2a0;
  uStack_7c8 = uStack_288;
  uStack_7d0 = uStack_290;
  uStack_7b8 = uStack_278;
  uStack_7c0 = uStack_280;
  uStack_828 = uStack_2e8;
  lStack_830 = uStack_2f0;
  uStack_818 = uStack_2d8;
  uStack_820 = uStack_2e0;
  uStack_808 = uStack_2c8;
  uStack_810 = uStack_2d0;
  uStack_7f8 = uStack_2b8;
  uStack_800 = uStack_2c0;
  lStack_848 = uStack_308;
  uStack_850 = uStack_310;
  uStack_838 = uStack_2f8;
  uStack_840 = uStack_300;
  uStack_69f = uStack_5bf;
  uStack_6b8 = uStack_5d8;
  uStack_6c0 = uStack_5e0;
  uStack_6b0 = uStack_5d0;
  uStack_6f8 = uStack_618;
  uStack_700 = uStack_620;
  uStack_6e8 = uStack_608;
  uStack_6f0 = uStack_610;
  uStack_6c8 = uStack_5e8;
  uStack_6d0 = uStack_5f0;
  uStack_6d8 = uStack_5f8;
  uStack_6e0 = uStack_600;
  uStack_738 = uStack_658;
  uStack_740 = uStack_660;
  uStack_728 = uStack_648;
  uStack_730 = uStack_650;
  uStack_708 = uStack_628;
  uStack_710 = uStack_630;
  uStack_718 = uStack_638;
  uStack_720 = uStack_640;
  uStack_768 = uStack_688;
  uStack_770 = uStack_690;
  uStack_748 = uStack_668;
  uStack_750 = uStack_670;
  uStack_758 = uStack_678;
  uStack_760 = uStack_680;
  iVar3 = (int)&uStack_850;
  func_0x000101551ac8();
  if (iVar3 == 1) {
    func_0x000101551ac8();
    if (iVar4 == 1) {
      func_0x000101556058(&uStack_850,0x112db3cf0,&UNK_10d95e250);
    }
    else {
LAB_1015550cc:
      func_0x000101556058(&uStack_850,0x112db3ef0,&UNK_10d95e478);
      if (puVar10 == (undefined1 *)0x0) goto LAB_101555254;
    }
  }
  else {
    uStack_888 = uStack_7a8;
    uStack_890 = uStack_7b0;
    uStack_878 = uStack_798;
    uStack_880 = uStack_7a0;
    uStack_870 = uStack_790;
    uStack_85f = uStack_77f;
    uStack_8c8 = uStack_7e8;
    uStack_8d0 = uStack_7f0;
    uStack_8b8 = uStack_7d8;
    uStack_8c0 = uStack_7e0;
    uStack_8a8 = uStack_7c8;
    uStack_8b0 = uStack_7d0;
    uStack_898 = uStack_7b8;
    uStack_8a0 = uStack_7c0;
    uStack_908 = uStack_828;
    uStack_910 = lStack_830;
    uStack_8f8 = uStack_818;
    uStack_900 = uStack_820;
    uStack_8e8 = uStack_808;
    uStack_8f0 = uStack_810;
    uStack_8d8 = uStack_7f8;
    uStack_8e0 = uStack_800;
    uStack_928 = lStack_848;
    uStack_930 = uStack_850;
    uStack_918 = uStack_838;
    uStack_920 = uStack_840;
    func_0x000101551ac8();
    if (iVar4 == 1) goto LAB_1015550cc;
    uStack_968 = uStack_6c8;
    uStack_970 = uStack_6d0;
    uStack_958 = uStack_6b8;
    uStack_960 = uStack_6c0;
    uStack_950 = uStack_6b0;
    uStack_93f = uStack_69f;
    uStack_9a8 = uStack_708;
    uStack_9b0 = uStack_710;
    uStack_998 = uStack_6f8;
    uStack_9a0 = uStack_700;
    uStack_988 = uStack_6e8;
    uStack_990 = uStack_6f0;
    uStack_978 = uStack_6d8;
    uStack_980 = uStack_6e0;
    uStack_9e8 = uStack_748;
    uStack_9f0 = uStack_750;
    uStack_9d8 = uStack_738;
    uStack_9e0 = uStack_740;
    uStack_9c8 = uStack_728;
    uStack_9d0 = uStack_730;
    uStack_9b8 = uStack_718;
    uStack_9c0 = uStack_720;
    uStack_a08 = uStack_768;
    uStack_a10 = uStack_770;
    uStack_9f8 = uStack_758;
    uStack_a00 = uStack_760;
    uStack_a8 = uStack_6c8;
    uStack_b0 = uStack_6d0;
    uStack_98 = uStack_6b8;
    uStack_a0 = uStack_6c0;
    uStack_90 = uStack_6b0;
    uStack_7f = uStack_69f;
    uStack_e8 = uStack_708;
    uStack_f0 = uStack_710;
    uStack_d8 = uStack_6f8;
    uStack_e0 = uStack_700;
    uStack_c8 = uStack_6e8;
    uStack_d0 = uStack_6f0;
    uStack_b8 = uStack_6d8;
    uStack_c0 = uStack_6e0;
    uStack_128 = uStack_748;
    uStack_130 = uStack_750;
    uStack_118 = uStack_738;
    uStack_120 = uStack_740;
    uStack_108 = uStack_728;
    uStack_110 = uStack_730;
    uStack_f8 = uStack_718;
    uStack_100 = uStack_720;
    uStack_148 = uStack_768;
    uStack_150 = uStack_770;
    uStack_138 = uStack_758;
    uStack_140 = uStack_760;
    uStack_188 = uStack_888;
    uStack_190 = uStack_890;
    uStack_178 = uStack_878;
    uStack_180 = uStack_880;
    uStack_170 = uStack_870;
    uStack_15f = uStack_85f;
    uStack_1c8 = uStack_8c8;
    uStack_1d0 = uStack_8d0;
    uStack_1b8 = uStack_8b8;
    uStack_1c0 = uStack_8c0;
    uStack_1a8 = uStack_8a8;
    uStack_1b0 = uStack_8b0;
    uStack_198 = uStack_898;
    uStack_1a0 = uStack_8a0;
    uStack_208 = uStack_908;
    uStack_210 = uStack_910;
    uStack_1f8 = uStack_8f8;
    uStack_200 = uStack_900;
    uStack_1e8 = uStack_8e8;
    uStack_1f0 = uStack_8f0;
    uStack_1d8 = uStack_8d8;
    uStack_1e0 = uStack_8e0;
    uStack_228 = uStack_928;
    uStack_230 = uStack_930;
    uStack_218 = uStack_918;
    uStack_220 = uStack_920;
    FUN_101556294(&uStack_310,auStack_af0,0x112db3cf0,&UNK_10d95e250);
    puVar11 = &uStack_230;
    FUN_1015cb058(puVar11,&uStack_150);
    func_0x000101556058(&uStack_310,0x112db3cf0,&UNK_10d95e250);
    func_0x000101556058(&uStack_a10,0x112db3cf0,&UNK_10d95e250);
    func_0x000101556058(&uStack_850,0x112db3cf0,&UNK_10d95e250);
    if ((((ulong)puVar11 & 1) != 0) || (puVar10 != (undefined1 *)0x0)) goto LAB_101555290;
LAB_101555254:
    lVar5 = lStack_b78;
    if (*(long *)(unaff_x20 + 0x38) != 0) {
      func_0x000107c4be2c();
    }
    if (*(char *)(lVar5 + _DAT_113011268) == '\x01') goto LAB_101555648;
  }
LAB_101555290:
  uVar20 = param_1;
  uVar12 = param_2;
  uVar8 = param_3;
  FUN_10156a60c(param_1,param_2,param_3);
  FUN_10156a69c(&uStack_850,param_1,param_2,param_3);
  FUN_1015562dc(lVar15,uVar20,uVar12,uVar8,&uStack_850,puVar9);
  func_0x00010153bf7c(&uStack_850);
  func_0x00010006c090(uVar20,uVar12);
  func_0x000107c61574(uVar8);
  lVar6 = lStack_b50;
  lVar14 = lStack_b58;
  (**(code **)(lStack_b58 + 0x38))(lVar18,1,1,lStack_b50);
  lVar21 = lStack_b48;
  lVar5 = (long)*(int *)(lStack_b60 + 0x30);
  FUN_101556294(lVar15,lStack_b48,0x112db3ee8,&UNK_10d95e470);
  FUN_101556294(lVar18,lVar21 + lVar5,0x112db3ee8,&UNK_10d95e470);
  pcVar19 = *(code **)(lVar14 + 0x30);
  lVar14 = lVar21;
  (*pcVar19)(lVar21,1,lVar6);
  uVar17 = uStack_b68;
  if ((int)lVar14 == 1) {
    func_0x000101556058(lVar18,0x112db3ee8,&UNK_10d95e470);
    lVar5 = lVar21 + lVar5;
    (*pcVar19)(lVar5,1,lVar6);
    lVar14 = lStack_b38;
    if ((int)lVar5 != 1) {
LAB_101555440:
      lVar14 = lStack_b38;
      func_0x000101556058(lVar21,0x112db3ee0,&UNK_10d95e570);
LAB_10155545c:
      lVar5 = lStack_b40;
      FUN_101556294(lVar15,lVar14,0x112db3ee8,&UNK_10d95e470);
      iVar4 = *(int *)(lVar5 + 0x14);
      if (puVar10 != (undefined1 *)0x0) {
        func_0x000107c61174(puVar10);
        func_0x000104825af8(lVar14 + iVar4);
      }
      lVar6 = 0;
      func_0x000104760f24();
      (**(code **)(*(long *)(lVar6 + -8) + 0x38))
                (lVar14 + iVar4,puVar10 == (undefined1 *)0x0,1,lVar6);
      uVar20 = param_1;
      func_0x00010156acf4(param_1,param_2,param_3);
      uVar12 = uVar20;
      FUN_1015556f4();
      func_0x000107c6142c(uVar20);
      uVar20 = param_1;
      uVar8 = param_2;
      func_0x00010156ad34(param_1,param_2,param_3);
      if (((uint)uVar8 & 0xff) != 1) {
        uVar20 = 0;
      }
      func_0x00010156acf4(param_1,param_2,param_3);
      FUN_101555ed8(&uStack_930);
      func_0x000107c6142c(param_1);
      *(undefined8 *)(lVar14 + *(int *)(lVar5 + 0x18)) = uVar12;
      *(undefined8 *)(lVar14 + *(int *)(lVar5 + 0x1c)) = uVar20;
      puVar11 = (undefined8 *)(lVar14 + *(int *)(lVar5 + 0x20));
      puVar11[1] = uStack_928;
      *puVar11 = uStack_930;
      puVar11[3] = uStack_918;
      puVar11[2] = uStack_920;
      *(undefined2 *)(puVar11 + 4) = (undefined2)uStack_910;
      func_0x000104828670(0);
      func_0x000107c610f8();
      func_0x000104827304(lVar14);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar10);
      func_0x000101556058(lVar15,0x112db3ee8,&UNK_10d95e470);
      return lVar14;
    }
    func_0x000101556058(lVar21,0x112db3ee8,&UNK_10d95e470);
    if ((int)uStack_b70 == 0x12) goto LAB_10155545c;
  }
  else {
    FUN_101556294(lVar21,uStack_b68,0x112db3ee8,&UNK_10d95e470);
    lVar14 = lVar21 + lVar5;
    (*pcVar19)(lVar14,1,lVar6);
    lVar6 = lStack_b80;
    if ((int)lVar14 == 1) {
      func_0x000101556058(lVar18,0x112db3ee8,&UNK_10d95e470);
      func_0x000101556098(uVar17,&SUB_10474425c);
      goto LAB_101555440;
    }
    func_0x000101556014(lVar21 + lVar5,lStack_b80,&SUB_10474425c);
    uVar13 = uVar17;
    func_0x00010474466c(uVar17,lVar6);
    func_0x000101556098(lVar6,&SUB_10474425c);
    func_0x000101556058(lVar18,0x112db3ee8,&UNK_10d95e470);
    func_0x000101556098(uVar17,&SUB_10474425c);
    func_0x000101556058(lVar21,0x112db3ee8,&UNK_10d95e470);
    lVar14 = lStack_b38;
    if (((uVar13 & 1) == 0) || ((uStack_b70 & 0xffffffff) == 0x12)) goto LAB_10155545c;
  }
  func_0x000101556058(lVar15,0x112db3ee8,&UNK_10d95e470);
  func_0x000107c61170(puVar9);
  puVar9 = puVar10;
LAB_101555648:
  func_0x000107c61170(puVar9);
  return 0;
}



/* Entry: 101555674; end: 1015556d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101555674(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000101556098(unaff_x20 + _DAT_112db3ed8,&SUB_103ddeef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1015556d4; end: 1015556f3;  */

void FUN_1015556d4(void)

{
  FUN_101554a70();
  return;
}



/* Entry: 1015556f4; end: 101555ed7;  */

undefined * FUN_1015556f4(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  ulong uStack_428;
  undefined1 auStack_418 [88];
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  ulong uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 *puStack_390;
  ulong uStack_388;
  undefined8 uStack_380;
  undefined8 *puStack_378;
  ulong uStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  ulong uStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 *puStack_330;
  ulong uStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  ulong uStack_310;
  undefined8 uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  byte bStack_1e0;
  undefined1 auStack_1d8 [152];
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  
  uVar21 = *(ulong *)(param_1 + 0x10);
  if (uVar21 == 0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar22 = 0;
  uStack_478 = 0xc000000000000000;
  uStack_480 = 0;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_10155574c:
  lVar19 = 0;
  if (uVar22 <= uVar21) {
    lVar19 = uVar21 - uVar22;
  }
  puVar17 = (undefined8 *)(param_1 + 0x20 + uVar22 * 0x108);
  uVar22 = uVar22 + 1;
  do {
    if (lVar19 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101555c30);
      (*pcVar3)();
    }
    func_0x000107c610b4(auStack_1d8,puVar17,0x108);
    bStack_1e0 = *(byte *)(puVar17 + 0xe);
    uStack_208 = puVar17[9];
    uStack_210 = puVar17[8];
    uStack_1f8 = puVar17[0xb];
    uStack_200 = puVar17[10];
    uStack_1e8 = puVar17[0xd];
    uStack_1f0 = puVar17[0xc];
    uVar25 = puVar17[1];
    uVar23 = *puVar17;
    uVar29 = puVar17[3];
    uVar27 = puVar17[2];
    uVar26 = puVar17[5];
    uVar24 = puVar17[4];
    uStack_218 = puVar17[7];
    uVar28 = puVar17[6];
    uStack_250 = uVar23;
    uStack_248 = uVar25;
    uStack_240 = uVar27;
    uStack_238 = uVar29;
    uStack_230 = uVar24;
    uStack_228 = uVar26;
    uStack_220 = uVar28;
    if ((bStack_1e0 != 0xff) || ((uStack_208 & 0x3000000000000000) != 0x3000000000000000)) {
      uVar18 = (uint)(uStack_208 >> 0x3c) & 0xfffffc03 | (bStack_1e0 & 0x3f) << 2;
      uStack_430 = uVar23;
      if (uVar18 == 0) {
        func_0x0001015561b8(auStack_1d8,&uStack_360);
        FUN_101556294(&uStack_250,&uStack_360,0x112db3fe0,&UNK_10d95e560);
        func_0x00010006c090(uVar25,uVar27);
        FUN_10155c728();
        func_0x0001015561f4(auStack_1d8);
        func_0x000107c6142c(uVar23);
        uStack_428 = uStack_428 & 1;
        uVar12 = uVar25;
        uVar27 = uStack_428;
        goto LAB_101555b44;
      }
      if (uVar18 == 4) break;
    }
    lVar19 = lVar19 + -1;
    puVar17 = puVar17 + 0x21;
    uVar22 = uVar22 + 1;
    if (uVar22 - uVar21 == 1) {
      return puVar9;
    }
  } while( true );
  func_0x000107c61434();
  func_0x00010006c00c(uVar26,uVar28);
  puVar5 = auStack_1d8;
  func_0x0001015561b8(puVar5,&uStack_360);
  FUN_1015f8c14();
  if (((ulong)puVar5 & 1) == 0) {
    func_0x0001015561f4(auStack_1d8);
    uStack_460 = 0;
    uStack_458 = 0;
    uStack_468 = 0;
    uVar12 = 0;
    uStack_450 = 2;
  }
  else {
    uStack_338 = uStack_118;
    uStack_340 = uStack_120;
    uStack_328 = uStack_108;
    puStack_330 = puStack_110;
    puStack_318 = puStack_f8;
    uStack_320 = uStack_100;
    uStack_310 = uStack_f0;
    uStack_358 = uStack_138;
    uStack_360 = uStack_140;
    puStack_348 = puStack_128;
    uStack_350 = uStack_130;
    uVar23 = uStack_100;
    puVar17 = puStack_f8;
    uVar13 = uStack_118;
    puVar14 = puStack_110;
    uVar12 = uStack_108;
    puVar15 = puStack_128;
    uVar16 = uStack_120;
    uVar20 = uStack_f0;
    uVar11 = uStack_130;
    uStack_3c0 = uStack_140;
    uStack_3b8 = uStack_138;
    if ((uStack_130 & 0xff) == 3) {
      uVar23 = 0;
      puVar17 = (undefined8 *)0x0;
      uVar13 = 0;
      puVar14 = (undefined8 *)0x0;
      uVar12 = 0xf000000000000000;
      puVar15 = (undefined8 *)0x0;
      uVar16 = 0;
      uVar20 = 0xf000000000000000;
      uVar11 = 2;
      uStack_3c0 = uStack_480;
      uStack_3b8 = uStack_478;
    }
    puVar6 = &uStack_360;
    uStack_3b0 = uVar11;
    puStack_3a8 = puVar15;
    uStack_3a0 = uVar16;
    uStack_398 = uVar13;
    puStack_390 = puVar14;
    uStack_388 = uVar12;
    uStack_380 = uVar23;
    puStack_378 = puVar17;
    uStack_370 = uVar20;
    uStack_d0 = uStack_3c0;
    uStack_c8 = uStack_3b8;
    uStack_c0 = uVar11;
    puStack_b8 = puVar15;
    uStack_b0 = uVar16;
    uStack_a8 = uVar13;
    puStack_a0 = puVar14;
    uStack_98 = uVar12;
    uStack_90 = uVar23;
    puStack_88 = puVar17;
    uStack_80 = uVar20;
    FUN_101556294(puVar6,auStack_418,0x112db3fd8,&UNK_10d96aef0);
    func_0x000103639b24();
    if (((ulong)puVar6 & 1) == 0) {
      uStack_450 = 0;
    }
    else {
      bVar4 = (uVar11 & 0xff) != 2;
      uStack_450 = 0;
      if (bVar4) {
        uStack_450 = uVar11 & 1;
      }
      puVar6 = (undefined8 *)0x0;
      if (bVar4) {
        puVar6 = puVar15;
      }
      uVar1 = 0xc000000000000000;
      if (bVar4) {
        uVar1 = uVar16;
      }
      FUN_101541460(uVar11);
      func_0x00010006c090(puVar6,uVar1);
    }
    func_0x000103639bc4();
    if (((ulong)puVar6 & 1) == 0) {
      uStack_460 = 1;
      uStack_458 = 0;
    }
    else {
      uVar11 = uVar12 >> 0x3c;
      uStack_458 = 0;
      if (uVar11 < 0xf) {
        uStack_458 = uVar13;
      }
      puVar6 = (undefined8 *)0x0;
      if (uVar11 < 0xf) {
        puVar6 = puVar14;
      }
      uVar2 = 0xc000000000000000;
      if (uVar11 < 0xf) {
        uVar2 = uVar12;
      }
      FUN_10155625c();
      func_0x00010006c090(puVar6,uVar2);
      uStack_460 = 0;
    }
    func_0x000103639c64();
    if (((ulong)puVar6 & 1) == 0) {
      uStack_468 = 0;
      uVar18 = 1;
    }
    else {
      uVar12 = uVar20 >> 0x3c;
      uStack_468 = 0;
      if (uVar12 < 0xf) {
        uStack_468 = uVar23;
      }
      puVar6 = (undefined8 *)0x0;
      if (uVar12 < 0xf) {
        puVar6 = puVar17;
      }
      uVar11 = 0xc000000000000000;
      if (uVar12 < 0xf) {
        uVar11 = uVar20;
      }
      FUN_10155625c(uVar23,puVar17,uVar20);
      func_0x00010006c090(puVar6,uVar11);
      uVar18 = 0;
    }
    func_0x0001015f8d48();
    func_0x000101556228(&uStack_3c0);
    uVar13 = uStack_d8;
    uVar23 = uStack_e0;
    uVar12 = uStack_e8;
    if (((ulong)puVar6 & 1) == 0) {
      func_0x0001015561f4(auStack_1d8);
      uVar10 = 0;
    }
    else {
      func_0x000101541464(uStack_e8,uStack_e0,uStack_d8);
      func_0x0001015561f4(auStack_1d8);
      if ((uVar12 & 0xff) == 2) {
        func_0x00010006c090(0,0xc000000000000000);
        uVar10 = 0;
      }
      else {
        func_0x000101556278(uVar12,uVar23,uVar13);
        uVar10 = 0x100;
        if ((uVar12 & 1) == 0) {
          uVar10 = 0;
        }
      }
    }
    uVar12 = (ulong)(uVar10 | uVar18);
  }
  func_0x00010006c090(uVar26,uVar28);
  uVar27 = uVar27 & 1 | 0x8000000000000000;
  uStack_448 = uVar25;
  uStack_440 = uVar29;
  uStack_438 = uVar24;
LAB_101555b44:
  puVar7 = puVar9;
  func_0x000107c61558();
  puVar8 = puVar9;
  if (((ulong)puVar7 & 1) == 0) {
    puVar8 = (undefined *)0x0;
    func_0x000101540b58(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
  }
  uVar25 = *(ulong *)(puVar8 + 0x10);
  puVar9 = puVar8;
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar25) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    func_0x000101540b58(puVar9,uVar25 + 1,1,puVar8);
  }
  *(ulong *)(puVar9 + 0x10) = uVar25 + 1;
  *(undefined8 *)(puVar9 + uVar25 * 0x50 + 0x20) = uStack_430;
  *(ulong *)(puVar9 + uVar25 * 0x50 + 0x28) = uStack_448;
  *(ulong *)(puVar9 + uVar25 * 0x50 + 0x30) = uVar27;
  *(undefined8 *)(puVar9 + uVar25 * 0x50 + 0x38) = uStack_440;
  *(undefined8 *)(puVar9 + uVar25 * 0x50 + 0x40) = uStack_438;
  *(ulong *)(puVar9 + uVar25 * 0x50 + 0x48) = uStack_450;
  *(undefined8 *)(puVar9 + uVar25 * 0x50 + 0x50) = uStack_458;
  *(undefined8 *)(puVar9 + uVar25 * 0x50 + 0x58) = uStack_460;
  *(undefined8 *)(puVar9 + uVar25 * 0x50 + 0x60) = uStack_468;
  *(short *)(puVar9 + uVar25 * 0x50 + 0x68) = (short)uVar12;
  if (uVar22 == uVar21) {
    return puVar9;
  }
  goto LAB_10155574c;
}



/* Entry: 101555ed8; end: 101556013;  */

void FUN_101555ed8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined2 uStack_230;
  undefined1 auStack_148 [72];
  ulong uStack_100;
  byte bStack_d8;
  
  uVar1 = param_2;
  func_0x00010403fe60();
  if ((uVar1 & 1) == 0) {
    lVar4 = *(long *)(param_2 + 0x10);
    uStack_258 = 0;
    uStack_260 = 2;
    uVar5 = 0;
    uVar6 = 0;
    if (lVar4 == 0) {
      uStack_230 = 0;
    }
    else {
      uStack_258 = 0;
      uStack_260 = 2;
      lVar3 = param_2 + 0x20;
      do {
        func_0x000107c610b4(auStack_148,lVar3,0x108);
        puVar2 = auStack_148;
        func_0x0001015561b8(puVar2,&uStack_250);
        FUN_1015f8c14();
        if (((ulong)puVar2 & 1) != 0) {
          if (((((uStack_100 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
              (bStack_d8 != 0xff)) &&
             (((uint)(uStack_100 >> 0x3c) & 0xfffffc03 | (bStack_d8 & 0x3f) << 2) == 5)) {
            func_0x000101555c30(&uStack_250,auStack_148);
            func_0x0001015561f4(auStack_148);
            uVar5 = uStack_240;
            uVar6 = uStack_238;
            uStack_260 = uStack_250;
            uStack_258 = uStack_248;
            goto LAB_101555ff4;
          }
          func_0x0001015561f4(auStack_148);
          break;
        }
        func_0x0001015561f4(auStack_148);
        lVar3 = lVar3 + 0x108;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      uStack_230 = 0;
      uVar5 = 0;
      uVar6 = 0;
    }
  }
  else {
    func_0x00010403ffe0();
    uStack_230 = 0x100;
    if ((uVar1 & 1) == 0) {
      uStack_230 = 0;
    }
    uStack_258 = 0x3fc999999999999a;
    uStack_260 = 1;
    uVar5 = 0;
    uVar6 = 0x3fc999999999999a;
  }
LAB_101555ff4:
  param_1[1] = uStack_258;
  *param_1 = uStack_260;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  *(undefined2 *)(param_1 + 4) = uStack_230;
  return;
}



/* Entry: 101556014; end: 1015560d3;  */

undefined8 FUN_101556014(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1015560d4; end: 1015560eb;  */

undefined1  [16] FUN_1015560d4(void)

{
  return ZEXT816(0x1103dcd60);
}



/* Entry: 1015560ec; end: 101556123;  */

void FUN_1015560ec(undefined8 param_1)

{
  if (lRam0000000112db3f20 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e647930);
  return;
}



/* Entry: 101556124; end: 10155625b;  */

void FUN_101556124(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_58 = PTR___sBoWV_11034d678 + 0x40;
  puStack_38 = &UNK_10d95e528;
  puStack_30 = &UNK_10d95e540;
  lVar1 = 0x13f;
  puStack_50 = puStack_58;
  puStack_48 = puStack_58;
  puStack_40 = puStack_58;
  func_0x000103ddeef8();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,7,&puStack_58,param_1 + 0x50);
  }
  return;
}



/* Entry: 10155625c; end: 101556293;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_10155625c(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (0xe < param_3 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101556294; end: 1015562db;  */

undefined8 FUN_101556294(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1015562dc; end: 101558413;  */

/* WARNING: Removing unreachable block (ram,0x000101556ae8) */
/* WARNING: Removing unreachable block (ram,0x000101556e9c) */

void FUN_1015562dc(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,long *param_4,
                  undefined8 param_5)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  double dVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  undefined1 *puVar10;
  undefined1 **ppuVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 *puVar17;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *pcVar18;
  undefined1 *puVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined1 *puVar23;
  ulong uVar24;
  undefined1 *puVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long unaff_x20;
  long lVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  long lVar29;
  long lVar30;
  code *pcVar31;
  long alStack_1300 [8];
  byte abStack_12c0 [8];
  double dStack_12b8;
  byte abStack_12b0 [8];
  long alStack_12a8 [4];
  undefined1 auStack_1288 [8];
  long alStack_1280 [3];
  undefined1 auStack_1268 [8];
  ulong auStack_1260 [7];
  undefined2 auStack_1228 [4];
  long alStack_1220 [2];
  undefined1 auStack_1210 [16];
  undefined1 auStack_1200 [8];
  undefined1 *puStack_11f8;
  undefined1 *puStack_11f0;
  undefined1 *puStack_11e8;
  undefined1 *puStack_11e0;
  uint uStack_11d4;
  undefined1 *puStack_11d0;
  undefined1 *puStack_11c8;
  undefined1 *puStack_11c0;
  undefined1 *puStack_11b8;
  undefined1 *puStack_11b0;
  undefined1 *puStack_11a8;
  undefined1 *puStack_11a0;
  undefined1 *puStack_1198;
  undefined1 *puStack_1188;
  undefined1 *puStack_1180;
  double dStack_1178;
  undefined1 *puStack_1170;
  ulong uStack_1168;
  ulong uStack_1160;
  ulong uStack_1158;
  undefined4 uStack_114c;
  undefined1 *puStack_1148;
  undefined1 *puStack_1140;
  undefined1 *puStack_1138;
  undefined1 *puStack_1130;
  undefined1 *puStack_1128;
  undefined4 uStack_111c;
  undefined1 *puStack_1118;
  undefined1 *puStack_1110;
  uint uStack_1104;
  undefined1 *puStack_1100;
  undefined1 *puStack_10f8;
  undefined1 *puStack_10f0;
  undefined4 uStack_10e4;
  undefined1 *puStack_10e0;
  long lStack_10d8;
  undefined8 uStack_10d0;
  ulong uStack_10c8;
  undefined1 *puStack_1098;
  undefined1 auStack_1070 [56];
  undefined1 *puStack_1038;
  undefined1 *puStack_1030;
  undefined1 *puStack_1028;
  undefined1 *puStack_1020;
  undefined1 *puStack_1018;
  undefined1 *puStack_1010;
  undefined1 *puStack_1008;
  undefined1 *puStack_1000;
  undefined1 *puStack_ff8;
  undefined1 *puStack_ff0;
  undefined1 *puStack_fe8;
  undefined1 *puStack_fe0;
  undefined1 *puStack_fd8;
  undefined1 *puStack_fd0;
  undefined1 *puStack_fc8;
  undefined1 *puStack_fc0;
  undefined1 *puStack_fb8;
  undefined1 *puStack_fb0;
  undefined1 *puStack_fa8;
  undefined1 *puStack_fa0;
  undefined1 *puStack_f98;
  undefined1 *puStack_f90;
  undefined1 *puStack_f88;
  undefined1 *puStack_f80;
  undefined1 *puStack_f78;
  undefined1 *puStack_f70;
  undefined1 *puStack_f68;
  undefined1 *puStack_f60;
  undefined1 *puStack_f58;
  undefined1 *puStack_f50;
  undefined1 *puStack_f48;
  undefined1 *puStack_f40;
  undefined1 auStack_f18 [8];
  undefined1 uStack_f10;
  undefined1 *puStack_ec0;
  undefined1 *puStack_eb8;
  undefined1 *puStack_eb0;
  undefined1 *puStack_ea8;
  undefined1 *puStack_ea0;
  undefined1 *puStack_e98;
  undefined1 *puStack_e90;
  undefined1 *puStack_e88;
  undefined1 *puStack_e80;
  undefined1 *puStack_e78;
  undefined1 *puStack_e70;
  undefined1 *puStack_e68;
  undefined1 *puStack_e60;
  undefined1 *puStack_e58;
  undefined1 *puStack_e50;
  undefined1 *puStack_e48;
  undefined1 *puStack_e40;
  undefined1 *puStack_e38;
  undefined1 *puStack_e30;
  undefined1 *puStack_e28;
  undefined1 *puStack_e20;
  undefined1 *puStack_e18;
  undefined1 *puStack_e10;
  undefined1 *puStack_e08;
  undefined1 *puStack_e00;
  undefined1 *puStack_df0;
  undefined1 *puStack_de8;
  undefined1 *puStack_de0;
  undefined1 *puStack_dd8;
  undefined1 *puStack_dd0;
  undefined1 *puStack_dc8;
  undefined1 *puStack_dc0;
  undefined1 *puStack_db8;
  undefined1 *puStack_db0;
  undefined1 *puStack_da8;
  undefined1 *puStack_da0;
  undefined1 *puStack_d98;
  undefined1 *puStack_d90;
  undefined1 *puStack_d88;
  undefined1 *puStack_d80;
  undefined1 *puStack_d78;
  undefined1 *puStack_d60;
  undefined1 *puStack_d58;
  undefined1 *puStack_d50;
  undefined1 *puStack_d48;
  undefined1 *puStack_d40;
  undefined1 *puStack_d38;
  undefined1 *puStack_d30;
  undefined1 *puStack_d28;
  undefined1 *puStack_d20;
  undefined1 *puStack_d18;
  undefined1 *puStack_d10;
  undefined1 *puStack_d08;
  undefined1 *puStack_d00;
  undefined1 *puStack_cf8;
  undefined1 *puStack_cf0;
  undefined1 *puStack_ce8;
  undefined1 *puStack_ce0;
  undefined1 *puStack_cd8;
  undefined1 *puStack_cd0;
  undefined1 *puStack_cc8;
  undefined1 *puStack_cc0;
  undefined1 *puStack_cb8;
  undefined1 *puStack_cb0;
  undefined1 *puStack_ca8;
  undefined1 *puStack_ca0;
  undefined1 uStack_c98;
  undefined7 uStack_c97;
  undefined1 uStack_c90;
  undefined8 uStack_c8f;
  undefined1 auStack_c08 [208];
  undefined1 auStack_b38 [88];
  undefined1 auStack_ae0 [64];
  undefined1 auStack_aa0 [144];
  undefined1 auStack_a10 [312];
  undefined1 auStack_8d8 [344];
  undefined1 *puStack_780;
  byte bStack_778;
  undefined1 *puStack_770;
  undefined1 *puStack_768;
  undefined1 *puStack_760;
  undefined1 *puStack_758;
  byte bStack_750;
  undefined1 *puStack_748;
  undefined1 *puStack_740;
  undefined1 *puStack_738;
  long lStack_730;
  long lStack_728;
  long lStack_720;
  long lStack_718;
  long lStack_710;
  long lStack_708;
  long lStack_700;
  long lStack_6f8;
  long lStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  long lStack_6d8;
  long lStack_6d0;
  long lStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  long lStack_678;
  long lStack_670;
  undefined1 uStack_668;
  undefined7 uStack_667;
  undefined1 uStack_660;
  undefined8 uStack_65f;
  undefined1 *puStack_5e0;
  undefined1 *puStack_5d8;
  undefined1 *puStack_5d0;
  undefined1 *puStack_5c8;
  undefined1 *puStack_5c0;
  undefined1 *puStack_5b8;
  undefined1 *puStack_5b0;
  undefined1 *puStack_5a8;
  undefined1 *puStack_5a0;
  undefined1 *puStack_598;
  undefined1 *puStack_590;
  undefined1 auStack_588 [344];
  undefined1 auStack_430 [336];
  undefined1 *puStack_2e0;
  undefined1 *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined1 *puStack_2b8;
  undefined1 *puStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined1 *puStack_298;
  undefined1 *puStack_290;
  undefined1 *puStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined1 *puStack_258;
  undefined1 *puStack_250;
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  undefined1 *puStack_238;
  undefined1 *puStack_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined8 uStack_20f;
  undefined1 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 *puStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar7 = 0;
  uStack_10d0 = param_5;
  func_0x00010474425c();
  lVar29 = *(long *)(uVar7 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar29 + 0x40));
  lVar8 = 0x112db3ee0;
  puStack_10e0 = auStack_1200 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112db3ee0,&UNK_10d95e570);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar27 = auStack_1200 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) + -extraout_x8_01;
  lVar20 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = puVar27 + -extraout_x8_02;
  dVar9 = 0.0;
  puStack_1180 = puVar17;
  func_0x000107c5ede0();
  lVar26 = *(long *)((long)dVar9 + -8);
  dStack_1178 = dVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  puVar17 = puVar17 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar20 = 0x112db3fe8;
  puStack_11c0 = puVar17;
  func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  puStack_11b0 = puVar17 + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = (long)(puVar17 + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_10d8 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (undefined1 *)(lVar20 - extraout_x12_00);
  puStack_11c8 = puVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = puVar17 + -extraout_x12_01;
  lVar20 = 0x112db3ee8;
  puStack_1188 = puVar17;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  uVar21 = (long)puVar17 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  uStack_10c8 = uVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = uVar21 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_1170 = (undefined1 *)(lVar22 - extraout_x12_03);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar17 = (undefined1 *)(lVar22 - extraout_x12_03) + -extraout_x12_04;
  puStack_11d0 = puVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_11a0 = puVar17 + -extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = (long)(puVar17 + -extraout_x12_05) - extraout_x12_06;
  pcVar18 = *(code **)(lVar29 + 0x38);
  uVar21 = uVar7;
  (*pcVar18)(lVar20,1,1);
  FUN_101559364(auStack_c08,param_1,param_2,param_3);
  FUN_101559934(auStack_b38,param_1,param_2,param_3);
  puVar17 = param_1;
  puVar10 = param_2;
  puVar14 = param_3;
  func_0x000101607f2c(param_1,param_2,param_3);
  uStack_10e4 = SUB84(puVar17,0);
  func_0x00010006c090(puVar10,puVar14);
  puVar10 = param_2;
  puVar14 = param_3;
  FUN_1016080a4(auStack_ae0,param_1);
  puVar17 = auStack_ae0;
  FUN_101559c78();
  puStack_1100 = puVar14;
  puStack_10f8 = puVar10;
  puStack_10f0 = puVar17;
  FUN_101559d44(auStack_ae0);
  puVar17 = param_1;
  func_0x000101608014(param_1,param_2,param_3);
  if (((ulong)puVar17 & 1) == 0) {
    uStack_1104 = 2;
  }
  else {
    puVar17 = param_1;
    puVar10 = param_2;
    puVar14 = param_3;
    func_0x000101607fa0(param_1,param_2,param_3);
    func_0x00010006c090(puVar10,puVar14);
    uStack_1104 = (uint)puVar17 & 1;
  }
  FUN_101559fa8(auStack_aa0,param_1,param_2,param_3);
  puVar17 = param_1;
  func_0x000101608288(param_1,param_2,param_3);
  if (((ulong)puVar17 & 1) == 0) {
    puStack_1110 = (undefined1 *)0x0;
    puStack_1098 = (undefined1 *)0x0;
    func_0x00010403f414();
    if (((ulong)puVar17 & 1) == 0) goto LAB_1015566d4;
LAB_101556720:
    func_0x00010403f524();
    uStack_111c = 0;
    puStack_1118 = puVar17;
  }
  else {
    puVar10 = param_1;
    puStack_1098 = param_2;
    puVar17 = param_3;
    func_0x000101608208();
    puStack_1110 = puVar10;
    func_0x00010006c090(puVar17,uVar21);
    func_0x00010403f414();
    if (((ulong)puVar17 & 1) != 0) goto LAB_101556720;
LAB_1015566d4:
    puVar17 = param_1;
    func_0x0001016083b8(param_1,param_2,param_3);
    if (((ulong)puVar17 & 1) == 0) {
      puStack_1118 = (undefined1 *)0x0;
      uStack_111c = 1;
    }
    else {
      puVar17 = param_1;
      puVar10 = param_2;
      puVar14 = param_3;
      func_0x000101608344(param_1,param_2,param_3);
      puStack_1118 = puVar17;
      func_0x00010006c090(puVar10,puVar14);
      uStack_111c = 0;
    }
  }
  puVar17 = param_1;
  func_0x000101608728(param_1,param_2,param_3);
  if (((ulong)puVar17 & 1) == 0) {
    uStack_1160 = 0x100000000;
    uStack_1158 = 0;
  }
  else {
    puVar17 = param_1;
    puVar10 = param_2;
    puVar14 = param_3;
    func_0x0001016086b4(param_1,param_2,param_3);
    func_0x00010006c090(puVar10,puVar14);
    uStack_1158 = (ulong)puVar17 & 0xffffffff;
    uStack_1160 = 0;
  }
  puVar17 = param_1;
  puVar14 = param_2;
  puVar28 = param_3;
  FUN_10155b0b0();
  puVar10 = param_1;
  puVar12 = param_2;
  puVar13 = param_3;
  uStack_1168 = uVar21;
  puStack_1138 = puVar28;
  puStack_1130 = puVar14;
  puStack_1128 = puVar17;
  FUN_1015585e8();
  uStack_114c = SUB84(puVar13,0);
  puStack_1148 = puVar12;
  puStack_1140 = puVar10;
  FUN_101558778(auStack_a10,param_1,param_2,param_3);
  puVar17 = param_1;
  FUN_101609044(param_1,param_2,param_3);
  puVar10 = param_1;
  func_0x0001016078a0(param_1,param_2,param_3);
  bVar1 = ((ulong)puVar10 & 1) == 0;
  if (bVar1) {
    dVar9 = 0.0;
  }
  else {
    puVar10 = param_1;
    puVar14 = param_2;
    puVar12 = param_3;
    func_0x00010160782c(param_1,param_2,param_3);
    func_0x00010006c090(puVar14,puVar12);
    dVar9 = (double)(long)puVar10;
  }
  FUN_101606bb8(auStack_8d8,param_1,param_2,param_3);
  func_0x000107c610b4(auStack_588,auStack_8d8,0x151);
  iVar6 = (int)auStack_588;
  FUN_10155b244();
  if (iVar6 == 1) {
    func_0x000107c6142c(puStack_1098);
    func_0x00010155b370(auStack_aa0,0x112db3ff0,&UNK_10d95e590);
  }
  else {
    uStack_11d4 = (uint)bVar1;
    lVar30 = (long)(int)puVar17;
    func_0x000107c610b4(auStack_430,auStack_588,0x150);
    iVar6 = (int)auStack_430;
    FUN_10155b330();
    FUN_100cb4f94(auStack_430);
    if (iVar6 < 2) {
      if (iVar6 == 0) {
        dStack_1178 = dVar9;
        func_0x000107c6142c(puStack_1098);
        func_0x00010155b370(auStack_aa0,0x112db3ff0,&UNK_10d95e590);
        if (*(long *)(unaff_x20 + 0x10) == 0) {
          func_0x00010155b370(auStack_b38,0x112db3ff8,&UNK_10d95e598);
          uVar15 = 0x112db4000;
          puVar16 = &UNK_10d95e5a0;
          puVar17 = auStack_8d8;
        }
        else {
          func_0x000107c4be2c();
          func_0x00010155b370(auStack_8d8,0x112db4000,&UNK_10d95e5a0);
          uVar15 = 0x112db3ff8;
          puVar16 = &UNK_10d95e598;
          puVar17 = auStack_b38;
        }
        func_0x00010155b370(puVar17,uVar15,puVar16);
        func_0x00010155b370(lVar20,0x112db3ee8,&UNK_10d95e470);
        (*pcVar18)(extraout_x8,1,1,uVar7);
        return;
      }
      puVar28 = param_1;
      dStack_1178 = dVar9;
      FUN_101606c18(&puStack_df0,param_1,param_2,param_3);
      FUN_1016289b0();
      puVar12 = puStack_dc0;
      puVar14 = puStack_dc8;
      puVar10 = puStack_dd0;
      puVar17 = puStack_dd8;
      if (((ulong)puVar28 & 1) == 0) {
        func_0x000107c6142c(puStack_1098);
        func_0x00010155b370(auStack_aa0,0x112db3ff0,&UNK_10d95e590);
        if (*(long *)(unaff_x20 + 0x10) != 0) {
          func_0x000107c4be2c();
        }
        func_0x00010155b498(&puStack_df0);
        func_0x00010155b370(auStack_8d8,0x112db4000,&UNK_10d95e5a0);
        goto LAB_101556898;
      }
      puStack_11c0 = puStack_db8;
      puVar28 = puStack_dd8;
      puVar13 = puStack_dd0;
      puVar19 = puStack_db8;
      puVar23 = puStack_dc0;
      puVar25 = puStack_dc8;
      lStack_10d8 = lVar30;
      if (puStack_dc8 == (undefined1 *)0x0) {
        func_0x00010368c4b8(&puStack_780);
        puVar28 = puStack_780;
        puVar13 = (undefined1 *)(ulong)bStack_778;
        puVar19 = puStack_760;
        puVar23 = puStack_768;
        puVar25 = puStack_770;
      }
      uStack_f10 = SUB81(puVar13,0);
      puStack_11b0 = puVar25;
      puStack_1180 = puVar23;
      puStack_1170 = puVar19;
      func_0x00010368d128();
      puVar13 = (undefined1 *)0x1;
      func_0x00010368d128(1,1);
      if (puVar28 == puVar13) {
        func_0x000101541428(puVar17,puVar10,puVar14,puVar12,puStack_11c0);
        FUN_101558d70(&puStack_5e0,auStack_f18,uStack_10d0);
        puVar28 = puStack_d90;
        puVar12 = puStack_d98;
        puVar14 = puStack_da0;
        puVar10 = puStack_da8;
        puVar17 = puStack_db0;
        if (puStack_5b0 == (undefined1 *)0x1) goto LAB_1015577dc;
        puStack_11c0 = *(undefined1 **)(unaff_x20 + 0x20);
        puStack_190 = puStack_db0;
        puVar13 = puStack_da8;
        puVar19 = puStack_d90;
        puVar23 = puStack_da0;
        puVar25 = puStack_d98;
        if (puStack_da0 == (undefined1 *)0x0) {
          func_0x00010368c4b8(&puStack_758);
          puStack_190 = puStack_758;
          puVar13 = (undefined1 *)(ulong)bStack_750;
          puVar19 = puStack_738;
          puVar23 = puStack_748;
          puVar25 = puStack_740;
        }
        uStack_188 = CONCAT71(uStack_188._1_7_,(char)puVar13);
        puStack_180 = puVar23;
        puStack_178 = puVar25;
        puStack_170 = puVar19;
        func_0x000101541428(puVar17,puVar10,puVar14,puVar12,puVar28);
        FUN_10155c10c(auStack_1070,&puStack_190,1,uStack_10d0);
        func_0x000107c6142c(puVar23);
        func_0x00010006c090(puVar25,puVar19);
        puStack_1030 = puStack_5d8;
        puStack_1038 = puStack_5e0;
        puStack_1020 = puStack_5c8;
        puStack_1028 = puStack_5d0;
        puStack_1010 = puStack_5b8;
        puStack_1018 = puStack_5c0;
        puStack_1008 = puStack_5b0;
        lVar26 = 0;
        func_0x0001047425ec();
        puVar17 = puStack_1188;
        (**(code **)(*(long *)(lVar26 + -8) + 0x38))(puStack_1188,1,1,lVar26);
        FUN_101607094(param_1,param_2,param_3);
        lStack_688 = param_4[0x15];
        lStack_690 = param_4[0x14];
        puStack_ca8 = (undefined1 *)param_4[0x17];
        puStack_cb0 = (undefined1 *)param_4[0x16];
        lStack_698 = param_4[0x13];
        lStack_6a0 = param_4[0x12];
        puStack_cb8 = (undefined1 *)param_4[0x15];
        puStack_cc0 = (undefined1 *)param_4[0x14];
        lStack_678 = param_4[0x17];
        lStack_680 = param_4[0x16];
        puStack_ca0 = (undefined1 *)param_4[0x18];
        uStack_c98 = (undefined1)param_4[0x19];
        uStack_c8f = *(undefined8 *)((long)param_4 + 0xd1);
        uStack_c97 = (undefined7)*(undefined8 *)((long)param_4 + 0xc9);
        uStack_c90 = (undefined1)((ulong)*(undefined8 *)((long)param_4 + 0xc9) >> 0x38);
        lStack_6c8 = param_4[0xd];
        lStack_6d0 = param_4[0xc];
        puStack_ce8 = (undefined1 *)param_4[0xf];
        puStack_cf0 = (undefined1 *)param_4[0xe];
        lStack_6d8 = param_4[0xb];
        lStack_6e0 = param_4[10];
        puStack_cf8 = (undefined1 *)param_4[0xd];
        puStack_d00 = (undefined1 *)param_4[0xc];
        lStack_6b8 = param_4[0xf];
        lStack_6c0 = param_4[0xe];
        puStack_cd8 = (undefined1 *)param_4[0x11];
        puStack_ce0 = (undefined1 *)param_4[0x10];
        lStack_6a8 = param_4[0x11];
        lStack_6b0 = param_4[0x10];
        puStack_cc8 = (undefined1 *)param_4[0x13];
        puStack_cd0 = (undefined1 *)param_4[0x12];
        lStack_708 = param_4[5];
        lStack_710 = param_4[4];
        puStack_d28 = (undefined1 *)param_4[7];
        puStack_d30 = (undefined1 *)param_4[6];
        lStack_718 = param_4[3];
        lStack_720 = param_4[2];
        puStack_d38 = (undefined1 *)param_4[5];
        puStack_d40 = (undefined1 *)param_4[4];
        lStack_6f8 = param_4[7];
        lStack_700 = param_4[6];
        puStack_d18 = (undefined1 *)param_4[9];
        puStack_d20 = (undefined1 *)param_4[8];
        lStack_6e8 = param_4[9];
        lStack_6f0 = param_4[8];
        puStack_d08 = (undefined1 *)param_4[0xb];
        puStack_d10 = (undefined1 *)param_4[10];
        puStack_d58 = (undefined1 *)param_4[1];
        puStack_d60 = (undefined1 *)*param_4;
        puStack_d48 = (undefined1 *)param_4[3];
        puStack_d50 = (undefined1 *)param_4[2];
        lStack_728 = param_4[1];
        lStack_730 = *param_4;
        lStack_670 = param_4[0x18];
        uStack_668 = (undefined1)param_4[0x19];
        uStack_65f = *(undefined8 *)((long)param_4 + 0xd1);
        uStack_667 = (undefined7)*(undefined8 *)((long)param_4 + 0xc9);
        uStack_660 = (undefined1)((ulong)*(undefined8 *)((long)param_4 + 0xc9) >> 0x38);
        iVar6 = (int)&puStack_d60;
        func_0x000101551ac8();
        uVar5 = uStack_10e4;
        if (iVar6 == 1) {
LAB_101557be4:
          FUN_1015d9114(&puStack_150);
          func_0x00010155b498(&puStack_df0);
          func_0x000107c6142c(puStack_11b0);
          func_0x00010006c090(puStack_1180,puStack_1170);
          func_0x00010155b370(auStack_8d8,0x112db4000,&UNK_10d95e5a0);
          puStack_fb8 = puStack_d8;
          puStack_fc0 = puStack_e0;
          puStack_fa8 = puStack_c8;
          puStack_fb0 = puStack_d0;
          puStack_f98 = puStack_b8;
          puStack_fa0 = puStack_c0;
          puStack_f88 = puStack_a8;
          puStack_f90 = puStack_b0;
          puStack_ff8 = puStack_118;
          puStack_1000 = puStack_120;
          puStack_fe8 = puStack_108;
          puStack_ff0 = puStack_110;
          puStack_fd8 = puStack_f8;
          puStack_fe0 = puStack_100;
          puStack_fc8 = puStack_e8;
          puStack_fd0 = puStack_f0;
          puStack_220 = puStack_90;
          puStack_2e0 = puStack_150;
          puStack_230 = puStack_a0;
          puStack_228 = puStack_98;
          puStack_2c0 = puStack_130;
          puStack_2b8 = puStack_128;
          puStack_2d8 = puStack_148;
          puStack_2d0 = puStack_140;
          uVar3 = puStack_138._0_1_;
        }
        else {
          puStack_a8 = (undefined1 *)param_4[0x15];
          puStack_b0 = (undefined1 *)param_4[0x14];
          puStack_98 = (undefined1 *)param_4[0x17];
          puStack_a0 = (undefined1 *)param_4[0x16];
          puStack_90 = (undefined1 *)param_4[0x18];
          uStack_88 = (undefined1)param_4[0x19];
          uStack_7f = *(undefined8 *)((long)param_4 + 0xd1);
          uStack_87 = (undefined7)*(undefined8 *)((long)param_4 + 0xc9);
          uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_4 + 0xc9) >> 0x38);
          puStack_e8 = (undefined1 *)param_4[0xd];
          puStack_f0 = (undefined1 *)param_4[0xc];
          puStack_d8 = (undefined1 *)param_4[0xf];
          puStack_e0 = (undefined1 *)param_4[0xe];
          puStack_c8 = (undefined1 *)param_4[0x11];
          puStack_d0 = (undefined1 *)param_4[0x10];
          puStack_b8 = (undefined1 *)param_4[0x13];
          puStack_c0 = (undefined1 *)param_4[0x12];
          puStack_128 = (undefined1 *)param_4[5];
          puStack_130 = (undefined1 *)param_4[4];
          puStack_118 = (undefined1 *)param_4[7];
          puStack_120 = (undefined1 *)param_4[6];
          puStack_108 = (undefined1 *)param_4[9];
          puStack_110 = (undefined1 *)param_4[8];
          puStack_f8 = (undefined1 *)param_4[0xb];
          puStack_100 = (undefined1 *)param_4[10];
          puStack_148 = (undefined1 *)param_4[1];
          puStack_150 = (undefined1 *)*param_4;
          puStack_138 = (undefined1 *)param_4[3];
          puStack_140 = (undefined1 *)param_4[2];
          iVar6 = (int)&lStack_730;
          func_0x000101551adc();
          if (iVar6 != 5) goto LAB_101557be4;
          ppuVar11 = &puStack_150;
          FUN_101553898();
          puStack_238 = puStack_cb8;
          puStack_240 = puStack_cc0;
          puStack_228 = puStack_ca8;
          puStack_230 = puStack_cb0;
          uStack_218 = uStack_c98;
          puStack_220 = puStack_ca0;
          uStack_20f = uStack_c8f;
          uStack_217 = uStack_c97;
          uStack_210 = uStack_c90;
          puStack_278 = puStack_cf8;
          puStack_280 = puStack_d00;
          puStack_268 = puStack_ce8;
          puStack_270 = puStack_cf0;
          puStack_258 = puStack_cd8;
          puStack_260 = puStack_ce0;
          puStack_248 = puStack_cc8;
          puStack_250 = puStack_cd0;
          puStack_2b8 = puStack_d38;
          puStack_2c0 = puStack_d40;
          puStack_2a8 = puStack_d28;
          puStack_2b0 = puStack_d30;
          puStack_298 = puStack_d18;
          puStack_2a0 = puStack_d20;
          puStack_288 = puStack_d08;
          puStack_290 = puStack_d10;
          puStack_2d8 = puStack_d58;
          puStack_2e0 = puStack_d60;
          puStack_2c8 = puStack_d48;
          puStack_2d0 = puStack_d50;
          FUN_1015537b4(&puStack_2e0,&puStack_1000);
          func_0x00010155b498(&puStack_df0);
          func_0x000107c6142c(puStack_11b0);
          func_0x00010006c090(puStack_1180,puStack_1170);
          func_0x00010155b370(auStack_8d8,0x112db4000,&UNK_10d95e5a0);
          puStack_fb8 = ppuVar11[0xf];
          puStack_fc0 = ppuVar11[0xe];
          puStack_fa8 = ppuVar11[0x11];
          puStack_fb0 = ppuVar11[0x10];
          puStack_f98 = ppuVar11[0x13];
          puStack_fa0 = ppuVar11[0x12];
          puStack_f88 = ppuVar11[0x15];
          puStack_f90 = ppuVar11[0x14];
          puStack_ff8 = ppuVar11[7];
          puStack_1000 = ppuVar11[6];
          puStack_fe8 = ppuVar11[9];
          puStack_ff0 = ppuVar11[8];
          puStack_fd8 = ppuVar11[0xb];
          puStack_fe0 = ppuVar11[10];
          puStack_fc8 = ppuVar11[0xd];
          puStack_fd0 = ppuVar11[0xc];
          puStack_220 = ppuVar11[0x18];
          puStack_2e0 = *ppuVar11;
          puVar17 = puStack_1188;
          puStack_230 = ppuVar11[0x16];
          puStack_228 = ppuVar11[0x17];
          puStack_2c0 = ppuVar11[4];
          puStack_2b8 = ppuVar11[5];
          puStack_2d8 = ppuVar11[1];
          puStack_2d0 = ppuVar11[2];
          uVar3 = *(undefined1 *)(ppuVar11 + 3);
        }
        puVar14 = puStack_df0;
        uStack_1f8 = 0;
        puStack_200 = (undefined1 *)0x0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        puStack_258 = puStack_fa8;
        puStack_260 = puStack_fb0;
        puStack_248 = puStack_f98;
        puStack_250 = puStack_fa0;
        puStack_2a8 = puStack_ff8;
        puStack_2b0 = puStack_1000;
        puStack_298 = puStack_fe8;
        puStack_2a0 = puStack_ff0;
        puStack_288 = puStack_fd8;
        puStack_290 = puStack_fe0;
        uStack_1d0 = 1;
        puStack_2c8 = (undefined1 *)CONCAT71(puStack_2c8._1_7_,uVar3);
        puStack_268 = puStack_fb8;
        puStack_270 = puStack_fc0;
        puStack_278 = puStack_fc8;
        puStack_280 = puStack_fd0;
        puStack_238 = puStack_f88;
        puStack_240 = puStack_f90;
        func_0x00010155b370(lVar20,0x112db3ee8,&UNK_10d95e470);
        FUN_101553864(&puStack_2e0);
        uVar21 = uStack_1160 | uStack_1158;
        uVar24 = uStack_1168 & 0xffffffffff;
        *(undefined1 *)(lVar20 + -0x10) = 0;
        lVar26 = lStack_10d8;
        *(undefined1 **)(lVar20 + -0x20) = auStack_a10;
        *(long *)(lVar20 + -0x18) = lVar26;
        *(short *)(lVar20 + -0x28) = (short)uStack_114c;
        *(undefined1 **)(lVar20 + -0x30) = puStack_1148;
        puVar10 = puStack_1140;
        *(ulong *)(lVar20 + -0x40) = uVar24;
        *(undefined1 **)(lVar20 + -0x38) = puVar10;
        *(undefined1 **)(lVar20 + -0x48) = puStack_1138;
        *(undefined1 **)(lVar20 + -0x50) = puStack_1130;
        puVar10 = puStack_1128;
        *(ulong *)(lVar20 + -0x60) = uVar21;
        *(undefined1 **)(lVar20 + -0x58) = puVar10;
        *(char *)(lVar20 + -0x68) = (char)uStack_111c;
        *(undefined1 **)(lVar20 + -0x70) = puStack_1118;
        *(undefined1 **)(lVar20 + -0x78) = puStack_1098;
        *(undefined1 **)(lVar20 + -0x80) = puStack_1110;
        *(undefined1 *)(lVar20 + -0x88) = 0;
        *(undefined1 **)(lVar20 + -0x90) = puStack_1100;
        *(undefined1 **)(lVar20 + -0x98) = puStack_10f8;
        puVar10 = puStack_10f0;
        *(undefined1 **)(lVar20 + -0xa8) = auStack_aa0;
        *(undefined1 **)(lVar20 + -0xa0) = puVar10;
        *(char *)(lVar20 + -0xae) = (char)uStack_1104;
        *(byte *)(lVar20 + -0xaf) = (byte)uVar5 & 1;
        *(char *)(lVar20 + -0xb0) = (char)uStack_11d4;
        *(double *)(lVar20 + -0xb8) = dStack_1178;
        *(undefined1 *)(lVar20 + -0xc0) = uVar3;
        *(undefined8 *)(lVar20 + -0xd0) = 0;
        *(undefined8 *)(lVar20 + -200) = 0xf000000000000000;
        *(undefined8 *)(lVar20 + -0xe0) = 0;
        *(undefined8 *)(lVar20 + -0xd8) = 0xf000000000000000;
        *(undefined1 **)(lVar20 + -0xf0) = param_2;
        *(undefined1 **)(lVar20 + -0xe8) = auStack_c08;
        *(undefined1 **)(lVar20 + -0x100) = auStack_b38;
        *(undefined1 **)(lVar20 + -0xf8) = param_1;
        puVar10 = puStack_11a0;
        func_0x0001047442dc(puStack_11a0,2,puVar14,0,1,0,auStack_1070,&puStack_200,puVar17);
        (*pcVar18)(puVar10,0,1,uVar7);
        FUN_10155b260(puVar10,lVar20);
        ppuVar11 = &puStack_ec0;
      }
      else {
        puVar13 = (undefined1 *)0x11;
        func_0x00010368d128(0x11,1);
        if (puVar28 != puVar13) {
          func_0x000101541428(puVar17,puVar10,puVar14,puVar12,puStack_11c0);
LAB_1015577dc:
          func_0x000107c6142c(puStack_1098);
          func_0x00010155b370(auStack_aa0,0x112db3ff0,&UNK_10d95e590);
          func_0x00010155b370(auStack_b38,0x112db3ff8,&UNK_10d95e598);
          func_0x000107c6142c(puStack_11b0);
          func_0x00010006c090(puStack_1180,puStack_1170);
          func_0x00010155b498(&puStack_df0);
          func_0x00010155b370(auStack_8d8,0x112db4000,&UNK_10d95e5a0);
          func_0x00010155b370(lVar20,0x112db3ee8,&UNK_10d95e470);
          (*pcVar18)(extraout_x8,1,1,uVar7);
          return;
        }
        func_0x000101541428(puVar17,puVar10,puVar14,puVar12,puStack_11c0);
        FUN_10155c10c(&puStack_5e0,auStack_f18,0,uStack_10d0);
        if (puStack_5b0 == (undefined1 *)0x1) goto LAB_1015577dc;
        lVar26 = 0;
        func_0x0001047425ec();
        puVar17 = puStack_11c8;
        (**(code **)(*(long *)(lVar26 + -8) + 0x38))(puStack_11c8,1,1,lVar26);
        FUN_101607094(param_1,param_2,param_3);
        lStack_688 = param_4[0x15];
        lStack_690 = param_4[0x14];
        puStack_ca8 = (undefined1 *)param_4[0x17];
        puStack_cb0 = (undefined1 *)param_4[0x16];
        lStack_698 = param_4[0x13];
        lStack_6a0 = param_4[0x12];
        puStack_cb8 = (undefined1 *)param_4[0x15];
        puStack_cc0 = (undefined1 *)param_4[0x14];
        lStack_678 = param_4[0x17];
        lStack_680 = param_4[0x16];
        puStack_ca0 = (undefined1 *)param_4[0x18];
        uStack_c98 = (undefined1)param_4[0x19];
        uStack_c8f = *(undefined8 *)((long)param_4 + 0xd1);
        uStack_c97 = (undefined7)*(undefined8 *)((long)param_4 + 0xc9);
        uStack_c90 = (undefined1)((ulong)*(undefined8 *)((long)param_4 + 0xc9) >> 0x38);
        lStack_6c8 = param_4[0xd];
        lStack_6d0 = param_4[0xc];
        puStack_ce8 = (undefined1 *)param_4[0xf];
        puStack_cf0 = (undefined1 *)param_4[0xe];
        lStack_6d8 = param_4[0xb];
        lStack_6e0 = param_4[10];
        puStack_cf8 = (undefined1 *)param_4[0xd];
        puStack_d00 = (undefined1 *)param_4[0xc];
        lStack_6b8 = param_4[0xf];
        lStack_6c0 = param_4[0xe];
        puStack_cd8 = (undefined1 *)param_4[0x11];
        puStack_ce0 = (undefined1 *)param_4[0x10];
        lStack_6a8 = param_4[0x11];
        lStack_6b0 = param_4[0x10];
        puStack_cc8 = (undefined1 *)param_4[0x13];
        puStack_cd0 = (undefined1 *)param_4[0x12];
        lStack_708 = param_4[5];
        lStack_710 = param_4[4];
        puStack_d28 = (undefined1 *)param_4[7];
        puStack_d30 = (undefined1 *)param_4[6];
        lStack_718 = param_4[3];
        lStack_720 = param_4[2];
        puStack_d38 = (undefined1 *)param_4[5];
        puStack_d40 = (undefined1 *)param_4[4];
        lStack_6f8 = param_4[7];
        lStack_700 = param_4[6];
        puStack_d18 = (undefined1 *)param_4[9];
        puStack_d20 = (undefined1 *)param_4[8];
        lStack_6e8 = param_4[9];
        lStack_6f0 = param_4[8];
        puStack_d08 = (undefined1 *)param_4[0xb];
        puStack_d10 = (undefined1 *)param_4[10];
        puStack_d58 = (undefined1 *)param_4[1];
        puStack_d60 = (undefined1 *)*param_4;
        puStack_d48 = (undefined1 *)param_4[3];
        puStack_d50 = (undefined1 *)param_4[2];
        lStack_728 = param_4[1];
        lStack_730 = *param_4;
        lStack_670 = param_4[0x18];
        uStack_668 = (undefined1)param_4[0x19];
        uStack_65f = *(undefined8 *)((long)param_4 + 0xd1);
        uStack_667 = (undefined7)*(undefined8 *)((long)param_4 + 0xc9);
        uStack_660 = (undefined1)((ulong)*(undefined8 *)((long)param_4 + 0xc9) >> 0x38);
        iVar6 = (int)&puStack_d60;
        func_0x000101551ac8();
        uVar5 = uStack_10e4;
        if (iVar6 == 1) {
LAB_101557e44:
          FUN_1015d9114(&puStack_150);
          func_0x00010155b498(&puStack_df0);
          func_0x000107c6142c(puStack_11b0);
          func_0x00010006c090(puStack_1180,puStack_1170);
          func_0x00010155b370(auStack_8d8,0x112db4000,&UNK_10d95e5a0);
          puStack_fb8 = puStack_d8;
          puStack_fc0 = puStack_e0;
          puStack_fa8 = puStack_c8;
          puStack_fb0 = puStack_d0;
          puStack_f98 = puStack_b8;
          puStack_fa0 = puStack_c0;
          puStack_f88 = puStack_a8;
          puStack_f90 = puStack_b0;
          puStack_ff8 = puStack_118;
          puStack_1000 = puStack_120;
          puStack_fe8 = puStack_108;
          puStack_ff0 = puStack_110;
          puStack_fd8 = puStack_f8;
          puStack_fe0 = puStack_100;
          puStack_fc8 = puStack_e8;
          puStack_fd0 = puStack_f0;
          puStack_220 = puStack_90;
          puStack_2e0 = puStack_150;
          puStack_230 = puStack_a0;
          puStack_228 = puStack_98;
          puStack_2c0 = puStack_130;
          puStack_2b8 = puStack_128;
          puStack_2d8 = puStack_148;
          puStack_2d0 = puStack_140;
          uVar3 = puStack_138._0_1_;
        }
        else {
          puStack_a8 = (undefined1 *)param_4[0x15];
          puStack_b0 = (undefined1 *)param_4[0x14];
          puStack_98 = (undefined1 *)param_4[0x17];
          puStack_a0 = (undefined1 *)param_4[0x16];
          puStack_90 = (undefined1 *)param_4[0x18];
          uStack_88 = (undefined1)param_4[0x19];
          uStack_7f = *(undefined8 *)((long)param_4 + 0xd1);
          uStack_87 = (undefined7)*(undefined8 *)((long)param_4 + 0xc9);
          uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_4 + 0xc9) >> 0x38);
          puStack_e8 = (undefined1 *)param_4[0xd];
          puStack_f0 = (undefined1 *)param_4[0xc];
          puStack_d8 = (undefined1 *)param_4[0xf];
          puStack_e0 = (undefined1 *)param_4[0xe];
          puStack_c8 = (undefined1 *)param_4[0x11];
          puStack_d0 = (undefined1 *)param_4[0x10];
          puStack_b8 = (undefined1 *)param_4[0x13];
          puStack_c0 = (undefined1 *)param_4[0x12];
          puStack_128 = (undefined1 *)param_4[5];
          puStack_130 = (undefined1 *)param_4[4];
          puStack_118 = (undefined1 *)param_4[7];
          puStack_120 = (undefined1 *)param_4[6];
          puStack_108 = (undefined1 *)param_4[9];
          puStack_110 = (undefined1 *)param_4[8];
          puStack_f8 = (undefined1 *)param_4[0xb];
          puStack_100 = (undefined1 *)param_4[10];
          puStack_148 = (undefined1 *)param_4[1];
          puStack_150 = (undefined1 *)*param_4;
          puStack_138 = (undefined1 *)param_4[3];
          puStack_140 = (undefined1 *)param_4[2];
          iVar6 = (int)&lStack_730;
          func_0x000101551adc();
          if (iVar6 != 5) goto LAB_101557e44;
          ppuVar11 = &puStack_150;
          FUN_101553898();
          puStack_238 = puStack_cb8;
          puStack_240 = puStack_cc0;
          puStack_228 = puStack_ca8;
          puStack_230 = puStack_cb0;
          uStack_218 = uStack_c98;
          puStack_220 = puStack_ca0;
          uStack_20f = uStack_c8f;
          uStack_217 = uStack_c97;
          uStack_210 = uStack_c90;
          puStack_278 = puStack_cf8;
          puStack_280 = puStack_d00;
          puStack_268 = puStack_ce8;
          puStack_270 = puStack_cf0;
          puStack_258 = puStack_cd8;
          puStack_260 = puStack_ce0;
          puStack_248 = puStack_cc8;
          puStack_250 = puStack_cd0;
          puStack_2b8 = puStack_d38;
          puStack_2c0 = puStack_d40;
          puStack_2a8 = puStack_d28;
          puStack_2b0 = puStack_d30;
          puStack_298 = puStack_d18;
          puStack_2a0 = puStack_d20;
          puStack_288 = puStack_d08;
          puStack_290 = puStack_d10;
          puStack_2d8 = puStack_d58;
          puStack_2e0 = puStack_d60;
          puStack_2c8 = puStack_d48;
          puStack_2d0 = puStack_d50;
          FUN_1015537b4(&puStack_2e0,&puStack_1000);
          func_0x00010155b498(&puStack_df0);
          func_0x000107c6142c(puStack_11b0);
          func_0x00010006c090(puStack_1180,puStack_1170);
          func_0x00010155b370(auStack_8d8,0x112db4000,&UNK_10d95e5a0);
          puStack_fb8 = ppuVar11[0xf];
          puStack_fc0 = ppuVar11[0xe];
          puStack_fa8 = ppuVar11[0x11];
          puStack_fb0 = ppuVar11[0x10];
          puStack_f98 = ppuVar11[0x13];
          puStack_fa0 = ppuVar11[0x12];
          puStack_f88 = ppuVar11[0x15];
          puStack_f90 = ppuVar11[0x14];
          puStack_ff8 = ppuVar11[7];
          puStack_1000 = ppuVar11[6];
          puStack_fe8 = ppuVar11[9];
          puStack_ff0 = ppuVar11[8];
          puStack_fd8 = ppuVar11[0xb];
          puStack_fe0 = ppuVar11[10];
          puStack_fc8 = ppuVar11[0xd];
          puStack_fd0 = ppuVar11[0xc];
          puStack_220 = ppuVar11[0x18];
          puStack_2e0 = *ppuVar11;
          puVar17 = puStack_11c8;
          puStack_230 = ppuVar11[0x16];
          puStack_228 = ppuVar11[0x17];
          puStack_2c0 = ppuVar11[4];
          puStack_2b8 = ppuVar11[5];
          puStack_2d8 = ppuVar11[1];
          puStack_2d0 = ppuVar11[2];
          uVar3 = *(undefined1 *)(ppuVar11 + 3);
        }
        puVar14 = puStack_df0;
        puStack_eb8 = (undefined1 *)0x0;
        puStack_ec0 = (undefined1 *)0x0;
        puStack_ea8 = (undefined1 *)0x0;
        puStack_eb0 = (undefined1 *)0x0;
        puStack_e98 = (undefined1 *)0x0;
        puStack_ea0 = (undefined1 *)0x0;
        puStack_e80 = (undefined1 *)0x0;
        puStack_e88 = (undefined1 *)0x0;
        puStack_e70 = (undefined1 *)0x0;
        puStack_e78 = (undefined1 *)0x0;
        puStack_e60 = (undefined1 *)0x0;
        puStack_e68 = (undefined1 *)0x0;
        puStack_e90 = (undefined1 *)0x2;
        puStack_e58 = (undefined1 *)0x0;
        puStack_2c8 = (undefined1 *)CONCAT71(puStack_2c8._1_7_,uVar3);
        puStack_288 = puStack_fd8;
        puStack_290 = puStack_fe0;
        puStack_298 = puStack_fe8;
        puStack_2a0 = puStack_ff0;
        puStack_2a8 = puStack_ff8;
        puStack_2b0 = puStack_1000;
        puStack_248 = puStack_f98;
        puStack_250 = puStack_fa0;
        puStack_258 = puStack_fa8;
        puStack_260 = puStack_fb0;
        puStack_278 = puStack_fc8;
        puStack_280 = puStack_fd0;
        puStack_268 = puStack_fb8;
        puStack_270 = puStack_fc0;
        puStack_238 = puStack_f88;
        puStack_240 = puStack_f90;
        func_0x00010155b370(lVar20,0x112db3ee8,&UNK_10d95e470);
        FUN_101553864(&puStack_2e0);
        uVar21 = uStack_1160 | uStack_1158;
        uVar24 = uStack_1168 & 0xffffffffff;
        *(undefined1 *)(lVar20 + -0x10) = 0;
        lVar26 = lStack_10d8;
        *(undefined1 **)(lVar20 + -0x20) = auStack_a10;
        *(long *)(lVar20 + -0x18) = lVar26;
        *(short *)(lVar20 + -0x28) = (short)uStack_114c;
        *(undefined1 **)(lVar20 + -0x30) = puStack_1148;
        puVar10 = puStack_1140;
        *(ulong *)(lVar20 + -0x40) = uVar24;
        *(undefined1 **)(lVar20 + -0x38) = puVar10;
        *(undefined1 **)(lVar20 + -0x48) = puStack_1138;
        *(undefined1 **)(lVar20 + -0x50) = puStack_1130;
        puVar10 = puStack_1128;
        *(ulong *)(lVar20 + -0x60) = uVar21;
        *(undefined1 **)(lVar20 + -0x58) = puVar10;
        *(char *)(lVar20 + -0x68) = (char)uStack_111c;
        *(undefined1 **)(lVar20 + -0x70) = puStack_1118;
        *(undefined1 **)(lVar20 + -0x78) = puStack_1098;
        *(undefined1 **)(lVar20 + -0x80) = puStack_1110;
        *(undefined1 *)(lVar20 + -0x88) = 0;
        *(undefined1 **)(lVar20 + -0x90) = puStack_1100;
        *(undefined1 **)(lVar20 + -0x98) = puStack_10f8;
        puVar10 = puStack_10f0;
        *(undefined1 **)(lVar20 + -0xa8) = auStack_aa0;
        *(undefined1 **)(lVar20 + -0xa0) = puVar10;
        *(char *)(lVar20 + -0xae) = (char)uStack_1104;
        *(byte *)(lVar20 + -0xaf) = (byte)uVar5 & 1;
        *(char *)(lVar20 + -0xb0) = (char)uStack_11d4;
        *(double *)(lVar20 + -0xb8) = dStack_1178;
        *(undefined1 *)(lVar20 + -0xc0) = uVar3;
        *(undefined8 *)(lVar20 + -0xd0) = 0;
        *(undefined8 *)(lVar20 + -200) = 0xf000000000000000;
        *(undefined8 *)(lVar20 + -0xe0) = 0;
        *(undefined8 *)(lVar20 + -0xd8) = 0xf000000000000000;
        *(undefined1 **)(lVar20 + -0xf0) = param_2;
        *(undefined1 **)(lVar20 + -0xe8) = auStack_c08;
        *(undefined1 **)(lVar20 + -0x100) = auStack_b38;
        *(undefined1 **)(lVar20 + -0xf8) = param_1;
        puVar10 = puStack_11d0;
        func_0x0001047442dc(puStack_11d0,1,puVar14,0,1,0,&puStack_ec0,&puStack_5e0,puVar17);
        (*pcVar18)(puVar10,0,1,uVar7);
        FUN_10155b260(puVar10,lVar20);
        ppuVar11 = &puStack_200;
      }
      func_0x00010155b7c4(auStack_b38,ppuVar11,0x112db3ff8,&UNK_10d95e598);
    }
    else {
      if (iVar6 != 2) {
        puVar12 = param_1;
        puVar28 = param_2;
        lStack_10d8 = lVar30;
        FUN_101606f80(&puStack_2e0,param_1,param_2,param_3);
        func_0x00010403f954();
        puStack_1170 = puVar12;
        FUN_101629ab4();
        puVar14 = puStack_2b8;
        puVar10 = puStack_2c0;
        puVar17 = puStack_2c8;
        if (((ulong)puVar12 & 1) == 0) {
          func_0x00010155b33c(&puStack_2e0);
          func_0x00010155b370(auStack_8d8,0x112db4000,&UNK_10d95e5a0);
        }
        else {
          puStack_11d0 = puStack_2d0;
          puStack_11e0 = puStack_2b0;
          puStack_1188 = puVar28;
          if (puStack_2c0 == (undefined1 *)0x0) {
            func_0x00010368c4b8(&puStack_df0);
            puStack_11c8 = puStack_dd0;
            puStack_11a0 = (undefined1 *)CONCAT44(puStack_11a0._4_4_,(uint)(byte)puStack_de8);
            puVar12 = puStack_de0;
            puVar28 = puStack_dd8;
            puVar13 = puStack_df0;
          }
          else {
            puStack_11a0 = (undefined1 *)CONCAT44(puStack_11a0._4_4_,(int)puStack_2c8);
            puStack_11c8 = puStack_2b0;
            puVar12 = puStack_2c0;
            puVar28 = puStack_2b8;
            puVar13 = puStack_2d0;
          }
          puStack_11f0 = puVar17;
          puStack_11e8 = puVar10;
          puStack_11f8 = puVar14;
          func_0x000101541428(puStack_11d0);
          func_0x000107c6142c(puVar12);
          func_0x00010006c090(puVar28,puStack_11c8);
          func_0x00010368d128(puVar13,(ulong)puStack_11a0 & 0xffffffff);
          puVar17 = (undefined1 *)0x16;
          func_0x00010368d128(0x16,1);
          if (puVar13 == puVar17) {
            uVar21 = (ulong)puStack_1170 & 0xffffffffffff;
            if (((ulong)puStack_1188 & 0x2000000000000000) != 0) {
              uVar21 = (ulong)puStack_1188 >> 0x38 & 0xf;
            }
            if (uVar21 == 0) {
              func_0x000107c6142c();
              puStack_1000 = puStack_11d0;
              puVar17 = puStack_11f0;
              puVar10 = puStack_11e0;
              puStack_fe8 = puStack_11f8;
              puVar14 = puStack_11e8;
              if (puStack_11e8 == (undefined1 *)0x0) {
                func_0x00010368c4b8(&puStack_ec0);
                puStack_1000 = puStack_ec0;
                puVar17 = (undefined1 *)((ulong)puStack_eb8 & 0xff);
                puVar10 = puStack_ea0;
                puStack_fe8 = puStack_ea8;
                puVar14 = puStack_eb0;
              }
              puStack_ff8 = (undefined1 *)CONCAT71(puStack_ff8._1_7_,(char)puVar17);
              puVar17 = puStack_11d0;
              puVar12 = puStack_11f0;
              puStack_1188 = puStack_fe8;
              puStack_ff0 = puVar14;
              puStack_fe0 = puVar10;
              func_0x000101541428(puStack_11d0,puStack_11f0,puStack_11e8,puStack_11f8,puStack_11e0);
              FUN_10154f9fc();
              puStack_1170 = puVar17;
              func_0x000107c6142c(puVar14);
              func_0x00010006c090(puStack_1188,puVar10);
              puStack_1188 = puVar12;
              if (puVar12 != (undefined1 *)0x0) goto LAB_10155813c;
              func_0x00010155b33c(&puStack_2e0);
              func_0x00010155b370(auStack_8d8,0x112db4000,&UNK_10d95e5a0);
              func_0x000107c6142c(puStack_1098);
              uVar15 = 0x112db3ff0;
              puVar16 = &UNK_10d95e590;
              puVar17 = auStack_aa0;
            }
            else {
LAB_10155813c:
              puVar17 = puStack_1180;
              puVar10 = puStack_1188;
              func_0x000107c5edd0(puStack_1180,puStack_1170,puStack_1188);
              func_0x00010155b33c(&puStack_2e0);
              func_0x00010155b370(auStack_8d8,0x112db4000,&UNK_10d95e5a0);
              func_0x000107c6142c(puVar10);
              dVar4 = dStack_1178;
              puVar10 = puVar17;
              (**(code **)(lVar26 + 0x30))(puVar17,1,dStack_1178);
              if ((int)puVar10 != 1) {
                func_0x00010155b370(lVar20,0x112db3ee8,&UNK_10d95e470);
                puVar10 = puStack_11c0;
                pcVar31 = *(code **)(lVar26 + 0x20);
                (*pcVar31)(puStack_11c0,puVar17,dVar4);
                puVar17 = puStack_11b0;
                lStack_728 = 0;
                lStack_730 = 0;
                lStack_718 = 0;
                lStack_720 = 0;
                lStack_708 = 0;
                lStack_710 = 0;
                lStack_6f0 = 0;
                lStack_6f8 = 0;
                lStack_6e0 = 0;
                lStack_6e8 = 0;
                lStack_6d0 = 0;
                lStack_6d8 = 0;
                lStack_700 = 2;
                lStack_6c8 = 0;
                puStack_148 = (undefined1 *)0x0;
                puStack_150 = (undefined1 *)0x0;
                puStack_138 = (undefined1 *)0x0;
                puStack_140 = (undefined1 *)0x0;
                puStack_128 = (undefined1 *)0x0;
                puStack_130 = (undefined1 *)0x0;
                puStack_120 = (undefined1 *)0x1;
                (*pcVar31)(puStack_11b0,puVar10,dStack_1178);
                lVar26 = 0;
                func_0x0001047425ec();
                (**(code **)(*(long *)(lVar26 + -8) + 0x38))(puVar17,0,1,lVar26);
                FUN_101607094(param_1,param_2,param_3);
                uVar21 = uStack_1160 | uStack_1158;
                uVar24 = uStack_1168 & 0xffffffffff;
                *(undefined1 *)(lVar20 + -0x10) = 0;
                lVar26 = lStack_10d8;
                *(undefined1 **)(lVar20 + -0x20) = auStack_a10;
                *(long *)(lVar20 + -0x18) = lVar26;
                *(short *)(lVar20 + -0x28) = (short)uStack_114c;
                *(undefined1 **)(lVar20 + -0x30) = puStack_1148;
                puVar10 = puStack_1140;
                *(ulong *)(lVar20 + -0x40) = uVar24;
                *(undefined1 **)(lVar20 + -0x38) = puVar10;
                *(undefined1 **)(lVar20 + -0x48) = puStack_1138;
                *(undefined1 **)(lVar20 + -0x50) = puStack_1130;
                puVar10 = puStack_1128;
                *(ulong *)(lVar20 + -0x60) = uVar21;
                *(undefined1 **)(lVar20 + -0x58) = puVar10;
                *(char *)(lVar20 + -0x68) = (char)uStack_111c;
                *(undefined1 **)(lVar20 + -0x70) = puStack_1118;
                *(undefined1 **)(lVar20 + -0x78) = puStack_1098;
                *(undefined1 **)(lVar20 + -0x80) = puStack_1110;
                *(undefined1 *)(lVar20 + -0x88) = 0;
                *(undefined1 **)(lVar20 + -0x90) = puStack_1100;
                *(undefined1 **)(lVar20 + -0x98) = puStack_10f8;
                puVar10 = puStack_10f0;
                *(undefined1 **)(lVar20 + -0xa8) = auStack_aa0;
                *(undefined1 **)(lVar20 + -0xa0) = puVar10;
                *(char *)(lVar20 + -0xae) = (char)uStack_1104;
                *(byte *)(lVar20 + -0xaf) = (byte)uStack_10e4 & 1;
                *(char *)(lVar20 + -0xb0) = (char)uStack_11d4;
                *(double *)(lVar20 + -0xb8) = dVar9;
                *(undefined1 *)(lVar20 + -0xc0) = 0;
                *(undefined8 *)(lVar20 + -0xd0) = 0;
                *(undefined8 *)(lVar20 + -200) = 0xf000000000000000;
                *(undefined8 *)(lVar20 + -0xe0) = 0;
                *(undefined8 *)(lVar20 + -0xd8) = 0xf000000000000000;
                *(undefined1 **)(lVar20 + -0xf0) = param_2;
                *(undefined1 **)(lVar20 + -0xe8) = auStack_c08;
                *(undefined1 **)(lVar20 + -0x100) = auStack_b38;
                *(undefined1 **)(lVar20 + -0xf8) = param_1;
                func_0x0001047442dc(lVar20,4,0,0,1,0,&lStack_730,&puStack_150,puVar17);
                (*pcVar18)(lVar20,0,1,uVar7);
                func_0x00010155b7c4(auStack_b38,&puStack_d60,0x112db3ff8,&UNK_10d95e598);
                goto LAB_101556898;
              }
              func_0x000107c6142c(puStack_1098);
              func_0x00010155b370(auStack_aa0,0x112db3ff0,&UNK_10d95e590);
              uVar15 = 0x112d36580;
              puVar16 = &UNK_10d9016d0;
            }
            func_0x00010155b370(puVar17,uVar15,puVar16);
            goto LAB_101556898;
          }
          func_0x00010155b33c(&puStack_2e0);
          func_0x00010155b370(auStack_8d8,0x112db4000,&UNK_10d95e5a0);
          puVar28 = puStack_1188;
        }
        func_0x000107c6142c(puVar28);
        func_0x000107c6142c(puStack_1098);
        func_0x00010155b370(auStack_aa0,0x112db3ff0,&UNK_10d95e590);
        goto LAB_101556898;
      }
      dStack_1178 = dVar9;
      FUN_101606d18(&lStack_730,param_1,param_2,param_3);
      ppuVar11 = &puStack_d60;
      func_0x000107c610b4(ppuVar11,&lStack_730,0x150);
      FUN_10155b3b0();
      func_0x000100075890(&puStack_150,0,0,&UNK_110551238,PTR___s10Foundation4DataVN_110350ae0,
                          ppuVar11,&PTR_DAT_110789f58);
      FUN_10155b3f0(&lStack_730);
      puStack_1180 = puStack_150;
      puStack_1188 = puStack_148;
      lVar26 = 0;
      func_0x0001047425ec();
      (**(code **)(*(long *)(lVar26 + -8) + 0x38))(lStack_10d8,1,1,lVar26);
      puVar17 = param_1;
      puVar14 = param_2;
      FUN_101607094(param_1,param_2,param_3);
      puVar10 = param_1;
      FUN_10160855c(param_1,param_2,param_3);
      if (((ulong)puVar10 & 1) == 0) {
        puVar10 = (undefined1 *)0x0;
        puVar12 = (undefined1 *)0xf000000000000000;
      }
      else {
        FUN_101608448(&puStack_5e0,param_1,param_2,param_3);
        puStack_d38 = puStack_5b8;
        puStack_d40 = puStack_5c0;
        puStack_d28 = puStack_5a8;
        puStack_d30 = puStack_5b0;
        puStack_d18 = puStack_598;
        puStack_d20 = puStack_5a0;
        puStack_d10 = puStack_590;
        puStack_d58 = puStack_5d8;
        puStack_d60 = puStack_5e0;
        puStack_d48 = puStack_5c8;
        puStack_d50 = puStack_5d0;
        FUN_10155b424();
        func_0x000100075890(&puStack_150,0,0,&UNK_1103ea3c0,PTR___s10Foundation4DataVN_110350ae0,
                            param_1,&PTR_DAT_110789f58);
        func_0x00010155b464(&puStack_5e0);
        puVar10 = puStack_150;
        puVar12 = puStack_148;
      }
      puStack_a8 = (undefined1 *)param_4[0x15];
      puStack_b0 = (undefined1 *)param_4[0x14];
      puStack_228 = (undefined1 *)param_4[0x17];
      puStack_230 = (undefined1 *)param_4[0x16];
      puStack_b8 = (undefined1 *)param_4[0x13];
      puStack_c0 = (undefined1 *)param_4[0x12];
      puStack_238 = (undefined1 *)param_4[0x15];
      puStack_240 = (undefined1 *)param_4[0x14];
      puStack_98 = (undefined1 *)param_4[0x17];
      puStack_a0 = (undefined1 *)param_4[0x16];
      puStack_220 = (undefined1 *)param_4[0x18];
      uStack_218 = (undefined1)param_4[0x19];
      uStack_20f = *(undefined8 *)((long)param_4 + 0xd1);
      uStack_217 = (undefined7)*(undefined8 *)((long)param_4 + 0xc9);
      uStack_210 = (undefined1)((ulong)*(undefined8 *)((long)param_4 + 0xc9) >> 0x38);
      puStack_e8 = (undefined1 *)param_4[0xd];
      puStack_f0 = (undefined1 *)param_4[0xc];
      puStack_268 = (undefined1 *)param_4[0xf];
      puStack_270 = (undefined1 *)param_4[0xe];
      puStack_f8 = (undefined1 *)param_4[0xb];
      puStack_100 = (undefined1 *)param_4[10];
      puStack_278 = (undefined1 *)param_4[0xd];
      puStack_280 = (undefined1 *)param_4[0xc];
      puStack_d8 = (undefined1 *)param_4[0xf];
      puStack_e0 = (undefined1 *)param_4[0xe];
      puStack_258 = (undefined1 *)param_4[0x11];
      puStack_260 = (undefined1 *)param_4[0x10];
      puStack_c8 = (undefined1 *)param_4[0x11];
      puStack_d0 = (undefined1 *)param_4[0x10];
      puStack_248 = (undefined1 *)param_4[0x13];
      puStack_250 = (undefined1 *)param_4[0x12];
      puStack_128 = (undefined1 *)param_4[5];
      puStack_130 = (undefined1 *)param_4[4];
      puStack_2a8 = (undefined1 *)param_4[7];
      puStack_2b0 = (undefined1 *)param_4[6];
      puStack_138 = (undefined1 *)param_4[3];
      puStack_140 = (undefined1 *)param_4[2];
      puStack_2b8 = (undefined1 *)param_4[5];
      puStack_2c0 = (undefined1 *)param_4[4];
      puStack_118 = (undefined1 *)param_4[7];
      puStack_120 = (undefined1 *)param_4[6];
      puStack_298 = (undefined1 *)param_4[9];
      puStack_2a0 = (undefined1 *)param_4[8];
      puStack_108 = (undefined1 *)param_4[9];
      puStack_110 = (undefined1 *)param_4[8];
      puStack_288 = (undefined1 *)param_4[0xb];
      puStack_290 = (undefined1 *)param_4[10];
      puStack_2d8 = (undefined1 *)param_4[1];
      puStack_2e0 = (undefined1 *)*param_4;
      puStack_2c8 = (undefined1 *)param_4[3];
      puStack_2d0 = (undefined1 *)param_4[2];
      puStack_148 = (undefined1 *)param_4[1];
      puStack_150 = (undefined1 *)*param_4;
      puStack_90 = (undefined1 *)param_4[0x18];
      uStack_88 = (undefined1)param_4[0x19];
      uStack_7f = *(undefined8 *)((long)param_4 + 0xd1);
      uStack_87 = (undefined7)*(undefined8 *)((long)param_4 + 0xc9);
      uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_4 + 0xc9) >> 0x38);
      iVar6 = (int)&puStack_150;
      func_0x000101551ac8();
      if (iVar6 == 1) {
LAB_1015570a4:
        FUN_1015d9114(&puStack_1000);
        func_0x00010155b370(auStack_8d8,0x112db4000,&UNK_10d95e5a0);
        puStack_da8 = puStack_f88;
        puStack_db0 = puStack_f90;
        puStack_d98 = puStack_f78;
        puStack_da0 = puStack_f80;
        puStack_d88 = puStack_f68;
        puStack_d90 = puStack_f70;
        puStack_d78 = puStack_f58;
        puStack_d80 = puStack_f60;
        puStack_de8 = puStack_fc8;
        puStack_df0 = puStack_fd0;
        puStack_dd8 = puStack_fb8;
        puStack_de0 = puStack_fc0;
        puStack_dc8 = puStack_fa8;
        puStack_dd0 = puStack_fb0;
        puStack_db8 = puStack_f98;
        puStack_dc0 = puStack_fa0;
        puStack_ec0 = puStack_1000;
        puStack_eb8 = puStack_ff8;
        puStack_eb0 = puStack_ff0;
        puStack_ea0 = puStack_fe0;
        puStack_e98 = puStack_fd8;
        puStack_e10 = puStack_f50;
        puStack_e08 = puStack_f48;
        bVar2 = (byte)puStack_fe8;
      }
      else {
        puStack_cb8 = puStack_a8;
        puStack_cc0 = puStack_b0;
        puStack_ca8 = puStack_98;
        puStack_cb0 = puStack_a0;
        uStack_c98 = uStack_88;
        puStack_ca0 = puStack_90;
        uStack_c8f = uStack_7f;
        uStack_c97 = uStack_87;
        uStack_c90 = uStack_80;
        puStack_cf8 = puStack_e8;
        puStack_d00 = puStack_f0;
        puStack_ce8 = puStack_d8;
        puStack_cf0 = puStack_e0;
        puStack_cd8 = puStack_c8;
        puStack_ce0 = puStack_d0;
        puStack_cc8 = puStack_b8;
        puStack_cd0 = puStack_c0;
        puStack_d38 = puStack_128;
        puStack_d40 = puStack_130;
        puStack_d28 = puStack_118;
        puStack_d30 = puStack_120;
        puStack_d18 = puStack_108;
        puStack_d20 = puStack_110;
        puStack_d08 = puStack_f8;
        puStack_d10 = puStack_100;
        puStack_d58 = puStack_148;
        puStack_d60 = puStack_150;
        puStack_d48 = puStack_138;
        puStack_d50 = puStack_140;
        iVar6 = (int)&puStack_d60;
        func_0x000101551adc();
        if (iVar6 != 5) goto LAB_1015570a4;
        ppuVar11 = &puStack_d60;
        FUN_101553898();
        puVar13 = *ppuVar11;
        puStack_1198 = ppuVar11[2];
        puStack_11a0 = ppuVar11[1];
        puStack_11a8 = ppuVar11[5];
        puStack_11b0 = ppuVar11[4];
        puStack_da8 = ppuVar11[0xf];
        puStack_db0 = ppuVar11[0xe];
        puStack_d98 = ppuVar11[0x11];
        puStack_da0 = ppuVar11[0x10];
        puStack_d88 = ppuVar11[0x13];
        puStack_d90 = ppuVar11[0x12];
        puStack_d78 = ppuVar11[0x15];
        puStack_d80 = ppuVar11[0x14];
        puStack_de8 = ppuVar11[7];
        puStack_df0 = ppuVar11[6];
        puStack_dd8 = ppuVar11[9];
        puStack_de0 = ppuVar11[8];
        puStack_dc8 = ppuVar11[0xb];
        puStack_dd0 = ppuVar11[10];
        puStack_db8 = ppuVar11[0xd];
        puStack_dc0 = ppuVar11[0xc];
        bVar2 = *(byte *)(ppuVar11 + 3);
        puStack_11b8 = ppuVar11[0x17];
        puStack_11c0 = ppuVar11[0x16];
        puVar28 = ppuVar11[0x18];
        func_0x00010155b7c4(&puStack_2e0,&puStack_1000,0x112db3cf0,&UNK_10d95e250);
        func_0x00010155b370(auStack_8d8,0x112db4000,&UNK_10d95e5a0);
        puStack_f40 = puVar28;
        puStack_ec0 = puVar13;
        puStack_eb8 = puStack_11a0;
        puStack_eb0 = puStack_1198;
        puStack_ea0 = puStack_11b0;
        puStack_e98 = puStack_11a8;
        puStack_e10 = puStack_11c0;
        puStack_e08 = puStack_11b8;
      }
      uStack_1f8 = 0;
      puStack_200 = (undefined1 *)0x0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      uStack_1c8 = 0;
      uStack_1b0 = 0;
      uStack_1b8 = 0;
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1d0 = 2;
      uStack_198 = 0;
      uStack_188 = 0;
      puStack_190 = (undefined1 *)0x0;
      puStack_178 = (undefined1 *)0x0;
      puStack_180 = (undefined1 *)0x0;
      uStack_168 = 0;
      puStack_170 = (undefined1 *)0x0;
      uStack_160 = 1;
      puStack_ea8 = (undefined1 *)(CONCAT71(puStack_ea8._1_7_,bVar2) & 0xffffffffffffff01);
      puStack_e78 = puStack_dd8;
      puStack_e80 = puStack_de0;
      puStack_e68 = puStack_dc8;
      puStack_e70 = puStack_dd0;
      puStack_e88 = puStack_de8;
      puStack_e90 = puStack_df0;
      puStack_e38 = puStack_d98;
      puStack_e40 = puStack_da0;
      puStack_e28 = puStack_d88;
      puStack_e30 = puStack_d90;
      puStack_e58 = puStack_db8;
      puStack_e60 = puStack_dc0;
      puStack_e48 = puStack_da8;
      puStack_e50 = puStack_db0;
      puStack_e18 = puStack_d78;
      puStack_e20 = puStack_d80;
      puStack_e00 = puStack_f40;
      func_0x00010155b370(lVar20,0x112db3ee8,&UNK_10d95e470);
      FUN_101553864(&puStack_ec0);
      uVar21 = uStack_1160 | uStack_1158;
      uVar24 = uStack_1168 & 0xffffffffff;
      *(undefined1 *)(lVar20 + -0x10) = 0;
      *(undefined1 **)(lVar20 + -0x20) = auStack_a10;
      *(long *)(lVar20 + -0x18) = lVar30;
      *(short *)(lVar20 + -0x28) = (short)uStack_114c;
      *(undefined1 **)(lVar20 + -0x30) = puStack_1148;
      puVar28 = puStack_1140;
      *(ulong *)(lVar20 + -0x40) = uVar24;
      *(undefined1 **)(lVar20 + -0x38) = puVar28;
      *(undefined1 **)(lVar20 + -0x48) = puStack_1138;
      *(undefined1 **)(lVar20 + -0x50) = puStack_1130;
      puVar28 = puStack_1128;
      *(ulong *)(lVar20 + -0x60) = uVar21;
      *(undefined1 **)(lVar20 + -0x58) = puVar28;
      *(char *)(lVar20 + -0x68) = (char)uStack_111c;
      *(undefined1 **)(lVar20 + -0x70) = puStack_1118;
      *(undefined1 **)(lVar20 + -0x78) = puStack_1098;
      *(undefined1 **)(lVar20 + -0x80) = puStack_1110;
      *(undefined1 *)(lVar20 + -0x88) = 0;
      *(undefined1 **)(lVar20 + -0x90) = puStack_1100;
      *(undefined1 **)(lVar20 + -0x98) = puStack_10f8;
      puVar28 = puStack_10f0;
      *(undefined1 **)(lVar20 + -0xa8) = auStack_aa0;
      *(undefined1 **)(lVar20 + -0xa0) = puVar28;
      *(char *)(lVar20 + -0xae) = (char)uStack_1104;
      *(byte *)(lVar20 + -0xaf) = (byte)uStack_10e4 & 1;
      *(char *)(lVar20 + -0xb0) = (char)uStack_11d4;
      *(double *)(lVar20 + -0xb8) = dStack_1178;
      *(byte *)(lVar20 + -0xc0) = bVar2 & 1;
      *(undefined1 **)(lVar20 + -0xd0) = puVar10;
      *(undefined1 **)(lVar20 + -200) = puVar12;
      *(undefined1 **)(lVar20 + -0xd8) = puStack_1188;
      puVar10 = puStack_1180;
      *(undefined1 **)(lVar20 + -0xe8) = auStack_c08;
      *(undefined1 **)(lVar20 + -0xe0) = puVar10;
      *(undefined1 **)(lVar20 + -0xf8) = puVar17;
      *(undefined1 **)(lVar20 + -0xf0) = puVar14;
      *(undefined1 **)(lVar20 + -0x100) = auStack_b38;
      puVar17 = puStack_1170;
      func_0x0001047442dc(puStack_1170,3,0,0,1,0,&puStack_200,&puStack_190,lStack_10d8);
      (*pcVar18)(puVar17,0,1,uVar7);
      FUN_10155b260(puVar17,lVar20);
      func_0x00010155b7c4(auStack_b38,auStack_f18,0x112db3ff8,&UNK_10d95e598);
    }
  }
LAB_101556898:
  (*pcVar18)(lVar22,1,1,uVar7);
  iVar6 = *(int *)(lVar8 + 0x30);
  func_0x00010155b7c4(lVar20,puVar27,0x112db3ee8,&UNK_10d95e470);
  func_0x00010155b7c4(lVar22,puVar27 + iVar6,0x112db3ee8,&UNK_10d95e470);
  pcVar18 = *(code **)(lVar29 + 0x30);
  puVar17 = puVar27;
  (*pcVar18)(puVar27,1,uVar7);
  uVar21 = uStack_10c8;
  if ((int)puVar17 == 1) {
    func_0x00010155b370(lVar22,0x112db3ee8,&UNK_10d95e470);
    puVar17 = puVar27 + iVar6;
    (*pcVar18)(puVar17,1,uVar7);
    if ((int)puVar17 == 1) {
      func_0x00010155b370(puVar27,0x112db3ee8,&UNK_10d95e470);
LAB_101556ba0:
      if (*(long *)(unaff_x20 + 0x10) != 0) {
        func_0x000107c4be2c();
      }
LAB_101556bbc:
      uVar15 = 0x112db3ff8;
      puVar16 = &UNK_10d95e598;
      puVar27 = auStack_b38;
      goto LAB_101556bd0;
    }
    func_0x00010155b370(auStack_b38,0x112db3ff8,&UNK_10d95e598);
  }
  else {
    func_0x00010155b7c4(puVar27,uStack_10c8,0x112db3ee8,&UNK_10d95e470);
    puVar17 = puVar27 + iVar6;
    (*pcVar18)(puVar17,1,uVar7);
    puVar10 = puStack_10e0;
    if ((int)puVar17 != 1) {
      func_0x00010155b2ec(puVar27 + iVar6,puStack_10e0);
      uVar7 = uVar21;
      func_0x00010474466c(uVar21,puVar10);
      func_0x00010155b2b0(puVar10);
      func_0x00010155b370(lVar22,0x112db3ee8,&UNK_10d95e470);
      func_0x00010155b2b0(uVar21);
      func_0x00010155b370(puVar27,0x112db3ee8,&UNK_10d95e470);
      if ((uVar7 & 1) != 0) goto LAB_101556ba0;
      goto LAB_101556bbc;
    }
    func_0x00010155b370(auStack_b38,0x112db3ff8,&UNK_10d95e598);
    func_0x00010155b370(lVar22,0x112db3ee8,&UNK_10d95e470);
    func_0x00010155b2b0(uVar21);
  }
  uVar15 = 0x112db3ee0;
  puVar16 = &UNK_10d95e570;
LAB_101556bd0:
  func_0x00010155b370(puVar27,uVar15,puVar16);
  FUN_10155b260(lVar20,extraout_x8);
  return;
}



/* Entry: 101558414; end: 1015585e7;  */

void FUN_101558414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112db4018,&UNK_10d95e5b0);
  puVar1 = &UNK_1103dcd80;
  func_0x000107c613fc(&UNK_1103dcd80,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_10155b4cc,puVar1);
  return;
}



/* Entry: 1015585e8; end: 101558777;  */

double FUN_1015585e8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  double dVar6;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  func_0x000100083b20(&iStack_90);
  uVar1 = CONCAT44(uStack_8c,iStack_90);
  uVar3 = uVar1;
  func_0x000107c614f0(uVar1);
  uVar4 = 0xd000000000000017;
  func_0x00010403c628(0xd000000000000017,0x800000010efb2d90,uVar3,uStack_88);
  func_0x000107c615e8(uVar1);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = param_1, FUN_101608a94(param_1,param_2,param_3), (uVar4 & 1) == 0)) {
    dVar6 = 0.0;
  }
  else {
    FUN_1016089ec(&iStack_90,param_1,param_2,param_3);
    FUN_101609d34();
    if ((param_1 & 1) != 0) {
      uVar4 = uStack_68 >> 0x3c;
      dVar6 = 0.0;
      if (uVar4 < 0xf) {
        dVar6 = (double)(long)(int)uStack_78;
      }
      uVar1 = 0;
      if (uVar4 < 0xf) {
        uVar1 = uStack_70;
      }
      uVar2 = 0xc000000000000000;
      if (uVar4 < 0xf) {
        uVar2 = uStack_68;
      }
      puVar5 = PTR_PTR_1126afec0;
      func_0x000107c61168(PTR_PTR_1126afec0);
      FUN_100cb4fe0(uStack_78,uStack_70,uStack_68);
      func_0x00010006c090(uVar1,uVar2);
      func_0x000107c4cec4(dVar6,puVar5);
    }
    func_0x000107c61168(PTR_PTR_1126afec0);
    dVar6 = (double)(long)iStack_90;
    func_0x000107c4cec4(dVar6);
    FUN_10155b5d4(&iStack_90);
  }
  return dVar6;
}



/* Entry: 101558778; end: 101558d6f;  */

void FUN_101558778(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_660;
  undefined8 uStack_658;
  double dStack_650;
  double dStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined4 uStack_5c1;
  byte bStack_5bd;
  double dStack_5b8;
  double dStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_520;
  ulong uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  ulong uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  ulong uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  ulong uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  ulong uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined4 uStack_3d9;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined4 uStack_351;
  undefined8 uStack_340;
  ulong uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  ulong uStack_308;
  undefined8 uStack_300;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  long lStack_280;
  char cStack_278;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  
  func_0x000100083b20(&uStack_1c8);
  uVar2 = uStack_1c8;
  func_0x000107c614f0(uStack_1c8);
  uVar3 = 0;
  func_0x00010403c628(0xd000000000000020,0x800000010efb2d60,uVar2,uStack_1c0);
  func_0x000107c615e8(uStack_1c8);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = param_2, func_0x000101608cd0(param_2,param_3,param_4), (uVar3 & 1) == 0)) {
    FUN_10155b508(&uStack_1c8);
  }
  else {
    func_0x000101608b5c(&lStack_280,param_2,param_3,param_4);
    if (cStack_278 == '\x01') {
      uStack_660 = *(undefined8 *)(&UNK_10d95e638 + lStack_280 * 8);
    }
    else {
      uStack_660 = 0;
    }
    uStack_2b8 = uStack_258;
    uStack_2c0 = uStack_260;
    uStack_2a8 = uStack_248;
    uStack_2b0 = uStack_250;
    uStack_298 = uStack_238;
    uStack_2a0 = uStack_240;
    uStack_288 = uStack_228;
    uStack_290 = uStack_230;
    uVar2 = uStack_250;
    uVar4 = uStack_248;
    uVar3 = uStack_240;
    if (0xe < uStack_258 >> 0x3c) {
      uStack_260 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      uStack_258 = 0xc000000000000000;
      uStack_228 = 0xf000000000000000;
      uVar2 = 0;
      uVar4 = 0;
      uVar3 = 0xf000000000000000;
    }
    uStack_300 = uStack_260;
    uStack_2f8 = uStack_258;
    uStack_2f0 = uVar2;
    uStack_2e8 = uVar4;
    uStack_2e0 = uVar3;
    uStack_2d8 = uStack_238;
    uStack_2d0 = uStack_230;
    uStack_2c8 = uStack_228;
    FUN_100cb4fe0(uVar2,uVar4,uVar3);
    func_0x00010155b7c4(&uStack_2c0,&uStack_1c8,0x112db40e0,&UNK_10d95e630);
    FUN_10155b544(&uStack_300);
    if (uVar3 >> 0x3c < 0xf) {
      func_0x000100cb4ffc(uVar2,uVar4,uVar3);
      dVar5 = (double)(float)uVar2;
    }
    else {
      func_0x00010006c090(0,0xc000000000000000);
      dVar5 = 0.0;
    }
    uStack_338 = uStack_2b8;
    uStack_340 = uStack_2c0;
    uStack_320 = uStack_2a0;
    uVar2 = uStack_298;
    uVar4 = uStack_290;
    uVar3 = uStack_288;
    uStack_330 = uStack_2b0;
    uStack_328 = uStack_2a8;
    if (0xe < uStack_2b8 >> 0x3c) {
      uStack_338 = 0xc000000000000000;
      uStack_340 = 0;
      uStack_320 = 0xf000000000000000;
      uVar2 = 0;
      uVar4 = 0;
      uVar3 = 0xf000000000000000;
      uStack_330 = 0;
      uStack_328 = 0;
    }
    uStack_318 = uVar2;
    uStack_310 = uVar4;
    uStack_308 = uVar3;
    func_0x00010155b7c4(&uStack_2c0,&uStack_1c8,0x112db40e0,&UNK_10d95e630);
    FUN_100cb4fe0(uVar2,uVar4,uVar3);
    FUN_10155b544(&uStack_340);
    if (uVar3 >> 0x3c < 0xf) {
      func_0x000100cb4ffc(uVar2,uVar4,uVar3);
      dVar6 = (double)(float)uVar2;
    }
    else {
      func_0x00010006c090(0,0xc000000000000000);
      dVar6 = 0.0;
    }
    FUN_10155b578(&uStack_458);
    uStack_378 = uStack_400;
    uStack_380 = uStack_408;
    uStack_368 = uStack_3f0;
    uStack_370 = uStack_3f8;
    uStack_360 = uStack_3e8;
    uStack_351 = uStack_3d9;
    uStack_3a8 = uStack_430;
    uStack_3b0 = uStack_438;
    uStack_398 = uStack_420;
    uStack_3a0 = uStack_428;
    uStack_388 = uStack_410;
    uStack_390 = uStack_418;
    bVar1 = (uStack_220 & 0xff) != 2;
    uVar2 = 0;
    if (bVar1) {
      uVar2 = uStack_218;
    }
    uVar4 = 0xc000000000000000;
    if (bVar1) {
      uVar4 = uStack_210;
    }
    uStack_3c8 = uStack_450;
    uStack_3d0 = uStack_458;
    uStack_3b8 = uStack_440;
    uStack_3c0 = uStack_448;
    FUN_101541460(uStack_220);
    func_0x00010006c090(uVar2,uVar4);
    uStack_498 = uStack_200;
    uStack_4a0 = uStack_208;
    uStack_488 = uStack_1f0;
    uStack_490 = uStack_1f8;
    uStack_478 = uStack_1e0;
    uStack_480 = uStack_1e8;
    uStack_468 = uStack_1d0;
    uStack_470 = uStack_1d8;
    uVar2 = uStack_1f8;
    if (0xe < uStack_200 >> 0x3c) {
      uStack_208 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0xf000000000000000;
      uVar2 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0xf000000000000000;
      uStack_200 = 0xc000000000000000;
    }
    uStack_4e0 = uStack_208;
    uStack_4d8 = uStack_200;
    uStack_4d0 = uVar2;
    uStack_4c8 = uStack_1f0;
    uStack_4c0 = uStack_1e8;
    uStack_4b8 = uStack_1e0;
    uStack_4b0 = uStack_1d8;
    uStack_4a8 = uStack_1d0;
    FUN_100cb4fe0(uVar2,uStack_1f0,uStack_1e8);
    func_0x00010155b7c4(&uStack_4a0,&uStack_1c8,0x112db40e0,&UNK_10d95e630);
    FUN_10155b544(&uStack_4e0);
    if (uStack_1e8 >> 0x3c < 0xf) {
      func_0x000100cb4ffc(uVar2,uStack_1f0,uStack_1e8);
      dVar7 = (double)(float)uVar2;
    }
    else {
      func_0x00010006c090(0,0xc000000000000000);
      dVar7 = 0.0;
    }
    func_0x00010155b7c4(&uStack_4a0,&uStack_1c8,0x112db40e0,&UNK_10d95e630);
    FUN_10155b59c(&lStack_280);
    uStack_518 = uStack_498;
    uStack_520 = uStack_4a0;
    uStack_500 = uStack_480;
    uVar2 = uStack_478;
    uVar4 = uStack_470;
    uVar3 = uStack_468;
    uStack_510 = uStack_490;
    uStack_508 = uStack_488;
    if (0xe < uStack_498 >> 0x3c) {
      uStack_518 = 0xc000000000000000;
      uStack_520 = 0;
      uStack_500 = 0xf000000000000000;
      uVar2 = 0;
      uVar4 = 0;
      uVar3 = 0xf000000000000000;
      uStack_510 = 0;
      uStack_508 = 0;
    }
    uStack_4f8 = uVar2;
    uStack_4f0 = uVar4;
    uStack_4e8 = uVar3;
    FUN_100cb4fe0(uVar2,uVar4,uVar3);
    FUN_10155b544(&uStack_520);
    if (uVar3 >> 0x3c < 0xf) {
      func_0x000100cb4ffc(uVar2,uVar4,uVar3);
      dStack_5b0 = (double)(float)uVar2;
    }
    else {
      func_0x00010006c090(0,0xc000000000000000);
      dStack_5b0 = 0.0;
    }
    uStack_540 = uStack_3f0;
    uStack_548 = uStack_3f8;
    uStack_538 = uStack_3e8;
    uStack_580 = uStack_430;
    uStack_588 = uStack_438;
    uStack_570 = uStack_420;
    uStack_578 = uStack_428;
    uStack_550 = uStack_400;
    uStack_558 = uStack_408;
    uStack_560 = uStack_410;
    uStack_568 = uStack_418;
    uStack_590 = uStack_440;
    uStack_598 = uStack_448;
    uStack_5a0 = uStack_450;
    uStack_5a8 = uStack_458;
    uStack_5e8 = uStack_378;
    uStack_5f0 = uStack_380;
    uStack_5d8 = uStack_368;
    uStack_5e0 = uStack_370;
    uStack_5d0 = uStack_360;
    uStack_628 = uStack_3b8;
    uStack_630 = uStack_3c0;
    uStack_618 = uStack_3a8;
    uStack_620 = uStack_3b0;
    bStack_5bd = (byte)uStack_220 & 1;
    uStack_658 = uStack_660;
    uStack_5c1 = uStack_351;
    uStack_608 = uStack_398;
    uStack_610 = uStack_3a0;
    uStack_5f8 = uStack_388;
    uStack_600 = uStack_390;
    uStack_638 = uStack_3c8;
    uStack_640 = uStack_3d0;
    dStack_650 = dVar5;
    dStack_648 = dVar6;
    dStack_5b8 = dVar7;
    FUN_10155b5d0(&uStack_658);
    func_0x000107c610b4(&uStack_1c8,&uStack_658,0x133);
  }
  func_0x000107c610b4(param_1,&uStack_1c8,0x133);
  return;
}



/* Entry: 101558d70; end: 101558eab;  */

void FUN_101558d70(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(long *)(*(long *)(param_2 + 0x10) + 0x10) == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x10);
  }
  else {
    FUN_10155c26c(&uStack_78);
    FUN_10154f9fc();
    if (lStack_68 != 1) {
      func_0x000107c61434(uStack_58);
      func_0x000107c61434(lStack_68);
      func_0x000101553c50(uStack_78,uStack_70,lStack_68,uStack_60,uStack_58);
      func_0x000101553c50(0,0,1,0,0);
      goto LAB_101558e80;
    }
    if (param_3 != 0) {
      lStack_68 = 1;
      goto LAB_101558e80;
    }
    lVar1 = *(long *)(unaff_x20 + 0x10);
  }
  if (lVar1 != 0) {
    func_0x000107c4be2c();
  }
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  param_2 = 0;
  param_3 = 1;
LAB_101558e80:
  *param_1 = uStack_78;
  param_1[1] = uStack_70;
  param_1[2] = lStack_68;
  param_1[3] = uStack_60;
  param_1[4] = uStack_58;
  param_1[5] = param_2;
  param_1[6] = param_3;
  return;
}



/* Entry: 101558eac; end: 101559013;  */

void FUN_101558eac(double *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  ulong uVar13;
  ulong uStack_d8;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uVar7 = param_2;
  func_0x00010366b2e4();
  if ((uVar7 & 1) == 0) {
    dVar8 = 0.0;
    dVar9 = 0.0;
    dVar10 = 0.0;
    uVar5 = 1;
    dVar12 = 0.0;
  }
  else {
    uVar7 = *(ulong *)(param_2 + 0x40);
    fVar11 = 0.0;
    uVar6 = *(ulong *)(param_2 + 0x58) >> 0x3c;
    if (uVar6 < 0xf) {
      fVar11 = (float)*(undefined8 *)(param_2 + 0x48);
    }
    uStack_c8 = 0;
    if (uVar6 < 0xf) {
      uStack_c8 = *(undefined8 *)(param_2 + 0x50);
    }
    uStack_c0 = 0xc000000000000000;
    if (uVar6 < 0xf) {
      uStack_c0 = *(ulong *)(param_2 + 0x58);
    }
    uVar1 = 0;
    if (uVar6 < 0xf) {
      uVar1 = *(undefined8 *)(param_2 + 0x60);
    }
    uVar2 = 0;
    if (uVar6 < 0xf) {
      uVar2 = *(undefined8 *)(param_2 + 0x68);
    }
    uVar3 = 0xf000000000000000;
    if (uVar6 < 0xf) {
      uVar3 = *(ulong *)(param_2 + 0x70);
    }
    uVar13 = 0;
    if (uVar6 < 0xf) {
      uVar13 = uVar7;
    }
    uStack_98 = CONCAT44(uStack_cc,fVar11);
    uStack_d8 = uVar13;
    fStack_d0 = fVar11;
    uStack_b8 = uVar1;
    uStack_b0 = uVar2;
    uStack_a8 = uVar3;
    uStack_a0 = uVar13;
    uStack_90 = uStack_c8;
    uStack_88 = uStack_c0;
    uStack_80 = uVar1;
    uStack_78 = uVar2;
    uStack_70 = uVar3;
    FUN_10155b840();
    func_0x00010400d9c0();
    if ((uVar7 & 1) == 0) {
      dVar8 = 1.0;
    }
    else {
      uVar7 = uVar3 >> 0x3c;
      dVar8 = 0.0;
      if (uVar7 < 0xf) {
        dVar8 = (double)(float)uVar1;
      }
      uVar4 = 0;
      if (uVar7 < 0xf) {
        uVar4 = uVar2;
      }
      uVar6 = 0xc000000000000000;
      if (uVar7 < 0xf) {
        uVar6 = uVar3;
      }
      FUN_100cb4fe0(uVar1,uVar2,uVar3);
      func_0x00010006c090(uVar4,uVar6);
    }
    FUN_10155b894(&uStack_d8);
    uVar5 = 0;
    dVar9 = (double)((float)uVar13 * 255.0);
    dVar10 = (double)((float)(uVar13 >> 0x20) * 255.0);
    dVar12 = (double)(fVar11 * 255.0);
  }
  param_1[1] = dVar10;
  *param_1 = dVar9;
  param_1[2] = dVar12;
  param_1[3] = dVar8;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return;
}



/* Entry: 101559014; end: 101559207;  */

double FUN_101559014(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uVar1 = param_1;
  func_0x00010366b514();
  if ((uVar1 & 1) == 0) {
    dVar3 = 0.0;
  }
  else {
    uStack_78 = *(ulong *)(param_1 + 0xb0);
    uStack_80 = *(undefined8 *)(param_1 + 0xa8);
    uStack_68 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 0xb8);
    uStack_58 = *(undefined8 *)(param_1 + 0xd0);
    uStack_60 = *(ulong *)(param_1 + 200);
    uStack_48 = *(ulong *)(param_1 + 0xe0);
    uStack_50 = *(undefined8 *)(param_1 + 0xd8);
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    uStack_88 = uStack_48;
    uVar2 = uStack_70;
    uVar4 = uStack_68;
    uVar1 = uStack_60;
    uStack_98 = uStack_58;
    uStack_90 = uStack_50;
    if (0xe < uStack_78 >> 0x3c) {
      uStack_b8 = 0xc000000000000000;
      uStack_c0 = 0;
      uStack_88 = 0xf000000000000000;
      uVar2 = 0;
      uVar4 = 0;
      uVar1 = 0xf000000000000000;
      uStack_98 = 0;
      uStack_90 = 0;
    }
    uStack_b0 = uVar2;
    uStack_a8 = uVar4;
    uStack_a0 = uVar1;
    func_0x00010155b7c4(&uStack_80,&uStack_100,0x112db40e8,&UNK_10dbf45c0);
    func_0x00010155b7c4(&uStack_80,&uStack_100,0x112db40e8,&UNK_10dbf45c0);
    FUN_100cb4fe0(uVar2,uVar4,uVar1);
    func_0x00010155b80c(&uStack_c0);
    if (uVar1 >> 0x3c < 0xf) {
      func_0x000100cb4ffc(uVar2,uVar4,uVar1);
      dVar3 = (double)(float)uVar2;
    }
    else {
      func_0x00010006c090(0,0xc000000000000000);
      dVar3 = 0.0;
    }
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e0 = uStack_60;
    uVar2 = uStack_58;
    uVar4 = uStack_50;
    uVar1 = uStack_48;
    uStack_f0 = uStack_70;
    uStack_e8 = uStack_68;
    if (0xe < uStack_78 >> 0x3c) {
      uStack_f8 = 0xc000000000000000;
      uStack_100 = 0;
      uStack_e0 = 0xf000000000000000;
      uVar2 = 0;
      uVar4 = 0;
      uVar1 = 0xf000000000000000;
      uStack_f0 = 0;
      uStack_e8 = 0;
    }
    uStack_d8 = uVar2;
    uStack_d0 = uVar4;
    uStack_c8 = uVar1;
    FUN_100cb4fe0(uVar2,uVar4,uVar1);
    func_0x00010155b80c(&uStack_100);
    if (uVar1 >> 0x3c < 0xf) {
      func_0x000100cb4ffc(uVar2,uVar4,uVar1);
    }
    else {
      func_0x00010006c090(0,0xc000000000000000);
    }
  }
  return dVar3;
}



/* Entry: 101559208; end: 101559243;  */

void FUN_101559208(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101559244; end: 101559363;  */

double FUN_101559244(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  undefined1 auStack_190 [16];
  float fStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  
  FUN_101609950(auStack_190);
  func_0x000103667688();
  if ((param_1 & 1) == 0) {
    dVar3 = 0.0;
  }
  else {
    uVar2 = uStack_170 >> 0x3c;
    dVar3 = 0.0;
    if (uVar2 < 0xf) {
      dVar3 = (double)fStack_180;
    }
    param_1 = 0;
    if (uVar2 < 0xf) {
      param_1 = uStack_178;
    }
    uVar1 = 0xc000000000000000;
    if (uVar2 < 0xf) {
      uVar1 = uStack_170;
    }
    FUN_100cb4fe0();
    func_0x00010006c090(param_1,uVar1);
  }
  func_0x000103667728();
  if ((param_1 & 1) == 0) {
    func_0x00010155b63c(auStack_190);
  }
  else {
    FUN_100cb4fe0(uStack_168,uStack_160,uStack_158);
    func_0x00010155b63c(auStack_190);
    if (uStack_158 >> 0x3c < 0xf) {
      func_0x000100cb4ffc(uStack_168,uStack_160,uStack_158);
    }
    else {
      func_0x00010006c090(0,0xc000000000000000);
    }
  }
  return dVar3;
}



/* Entry: 101559364; end: 101559933;  */

void FUN_101559364(double *param_1,double param_2,double param_3,double param_4,undefined2 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulong uVar16;
  byte bVar17;
  undefined1 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 uStack_358;
  double dStack_340;
  double dStack_338;
  double dStack_330;
  double dStack_310;
  double dStack_308;
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  double dStack_2d8;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  double dStack_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  double dStack_2a0;
  undefined1 uStack_298;
  undefined7 uStack_297;
  double dStack_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  double dStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  double dStack_270;
  undefined1 uStack_268;
  undefined7 uStack_267;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  undefined1 uStack_248;
  undefined1 uStack_247;
  undefined1 uStack_246;
  undefined5 uStack_245;
  undefined3 uStack_240;
  undefined5 uStack_23d;
  byte bStack_238;
  byte bStack_237;
  byte bStack_236;
  undefined1 auStack_230 [40];
  undefined1 auStack_208 [16];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined1 auStack_1e0 [8];
  float fStack_1d8;
  float fStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined1 auStack_1a8 [8];
  float fStack_1a0;
  float fStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  undefined3 uStack_b8;
  undefined5 uStack_b5;
  undefined3 uStack_b0;
  undefined8 uStack_ad;
  
  dVar6 = param_2;
  FUN_1016071a0();
  if (((ulong)dVar6 & 1) == 0) {
    FUN_10155b934(&dStack_170);
  }
  else {
    FUN_1016070e0();
    dVar6 = param_2;
    func_0x000101609ac0(auStack_230);
    func_0x00010352196c();
    FUN_10155b964(auStack_230);
    dVar21 = 0.0;
    dVar20 = 0.0;
    if (((ulong)dVar6 & 1) != 0) {
      func_0x000101609ac0(auStack_208,param_2,param_3,param_4);
      FUN_100cb4fe0(uStack_1f8,uStack_1f0,uStack_1e8);
      FUN_10155b964(auStack_208);
      if (uStack_1e8 >> 0x3c < 0xf) {
        func_0x000100cb4ffc(uStack_1f8,uStack_1f0,uStack_1e8);
        dVar20 = (double)(float)uStack_1f8;
      }
      else {
        func_0x00010006c090(0,0xc000000000000000);
      }
    }
    dVar19 = param_2;
    FUN_10160918c(param_2,param_3,param_4);
    dStack_308 = 0.0;
    dStack_310 = 0.0;
    if (((ulong)dVar19 & 1) == 0) {
      dStack_330 = 0.0;
      uStack_358 = 1;
      dStack_338 = 0.0;
      dStack_340 = 0.0;
    }
    else {
      FUN_1016090d4(auStack_1e0,param_2,param_3,param_4);
      puVar7 = auStack_1e0;
      FUN_10155b99c(puVar7,&dStack_170);
      func_0x00010400d9c0();
      if (((ulong)puVar7 & 1) == 0) {
        dStack_330 = 1.0;
      }
      else {
        uVar16 = uStack_1b0 >> 0x3c;
        dStack_330 = 0.0;
        if (uVar16 < 0xf) {
          dStack_330 = (double)fStack_1c0;
        }
        uVar4 = 0;
        if (uVar16 < 0xf) {
          uVar4 = uStack_1b8;
        }
        uVar5 = 0xc000000000000000;
        if (uVar16 < 0xf) {
          uVar5 = uStack_1b0;
        }
        FUN_100cb4fe0();
        func_0x00010006c090(uVar4,uVar5);
      }
      FUN_10155b894(auStack_1e0);
      FUN_10155b894(auStack_1e0);
      uStack_358 = 0;
      dStack_340 = (double)auStack_1e0._0_4_;
      dStack_338 = (double)auStack_1e0._4_4_;
      dVar21 = (double)fStack_1d8;
    }
    dVar19 = param_2;
    FUN_101609318(param_2,param_3,param_4);
    dVar22 = 0.0;
    if (((ulong)dVar19 & 1) == 0) {
      dVar19 = 0.0;
      uVar18 = 1;
      dVar23 = 0.0;
    }
    else {
      FUN_101609260(auStack_1a8,param_2,param_3,param_4);
      puVar7 = auStack_1a8;
      FUN_10155b99c(puVar7,&dStack_170);
      func_0x00010400d9c0();
      if (((ulong)puVar7 & 1) == 0) {
        dVar19 = 1.0;
      }
      else {
        uVar16 = uStack_178 >> 0x3c;
        dVar19 = 0.0;
        if (uVar16 < 0xf) {
          dVar19 = (double)fStack_188;
        }
        uVar4 = 0;
        if (uVar16 < 0xf) {
          uVar4 = uStack_180;
        }
        uVar5 = 0xc000000000000000;
        if (uVar16 < 0xf) {
          uVar5 = uStack_178;
        }
        FUN_100cb4fe0();
        func_0x00010006c090(uVar4,uVar5);
      }
      FUN_10155b894(auStack_1a8);
      FUN_10155b894(auStack_1a8);
      uVar18 = 0;
      dStack_310 = (double)auStack_1a8._0_4_;
      dStack_308 = (double)auStack_1a8._4_4_;
      dVar23 = (double)fStack_1a0;
    }
    dVar25 = param_2;
    func_0x00010160945c(param_2,param_3,param_4);
    bVar1 = ((ulong)dVar25 & 1) == 0;
    if (!bVar1) {
      dVar22 = param_2;
      dVar25 = param_3;
      dVar24 = param_4;
      func_0x0001016093ec(param_2,param_3,param_4);
      func_0x00010006c090(dVar25,dVar24);
      dVar22 = (double)(long)dVar22;
    }
    dVar25 = param_2;
    func_0x000101609558(param_2,param_3,param_4);
    dVar24 = 0.0;
    bVar2 = ((ulong)dVar25 & 1) == 0;
    if (bVar2) {
      dVar25 = 0.0;
    }
    else {
      dVar25 = param_2;
      dVar8 = param_3;
      dVar9 = param_4;
      func_0x0001016094e8(param_2,param_3,param_4);
      func_0x00010006c090(dVar8,dVar9);
      dVar25 = (double)(long)dVar25;
    }
    dVar8 = param_2;
    func_0x000101609654(param_2,param_3,param_4);
    bVar3 = ((ulong)dVar8 & 1) == 0;
    if (!bVar3) {
      dVar24 = param_2;
      dVar8 = param_3;
      dVar9 = param_4;
      func_0x0001016095e4(param_2,param_3,param_4);
      func_0x00010006c090(dVar8,dVar9);
      dVar24 = (double)(long)dVar24;
    }
    dVar8 = param_2;
    FUN_1016096e0(param_2,param_3,param_4);
    dVar9 = param_2;
    func_0x00010160971c(param_2,param_3,param_4);
    dVar10 = param_2;
    dVar12 = param_3;
    dVar14 = param_4;
    FUN_101559244();
    dVar11 = param_2;
    func_0x0001016097c8(param_2,param_3,param_4);
    if (((ulong)dVar11 & 1) == 0) {
      bVar17 = 2;
    }
    else {
      dVar11 = param_2;
      dVar13 = param_3;
      dVar15 = param_4;
      func_0x000101609758(param_2,param_3,param_4);
      func_0x00010006c090(dVar13,dVar15);
      bVar17 = SUB81(dVar11,0) & 1;
    }
    dVar11 = param_2;
    func_0x0001016098c4(param_2,param_3,param_4);
    if (((ulong)dVar11 & 1) == 0) {
      func_0x00010006c090(param_2,param_3);
      func_0x000107c61574(param_4);
      bStack_236 = 2;
    }
    else {
      dVar11 = param_2;
      dVar13 = param_3;
      dVar15 = param_4;
      func_0x000101609854(param_2,param_3,param_4);
      func_0x00010006c090(param_2,param_3);
      func_0x000107c61574(param_4);
      func_0x00010006c090(dVar13,dVar15);
      bStack_236 = SUB81(dVar11,0) & 1;
    }
    dStack_280 = (double)SUB84(dVar8,0);
    dStack_270 = (double)SUB84(dVar9,0);
    dStack_2f8 = dStack_338;
    dStack_300 = dStack_340;
    dStack_2e8 = dStack_330;
    uStack_2e0 = uStack_358;
    dStack_2d0 = dStack_308;
    dStack_2d8 = dStack_310;
    uStack_278 = 0;
    uStack_268 = 0;
    uStack_248 = (undefined1)param_5;
    uStack_247 = (undefined1)((ushort)param_5 >> 8);
    uStack_240 = SUB83(dVar20,0);
    uStack_23d = (undefined5)((ulong)dVar20 >> 0x18);
    dStack_2f0 = dVar21;
    dStack_2c8 = dVar23;
    dStack_2c0 = dVar19;
    uStack_2b8 = uVar18;
    dStack_2b0 = dVar22;
    uStack_2a8 = bVar1;
    dStack_2a0 = dVar25;
    uStack_298 = bVar2;
    dStack_290 = dVar24;
    uStack_288 = bVar3;
    dStack_260 = dVar10;
    dStack_258 = dVar12;
    dStack_250 = dVar14;
    bStack_238 = (SUB81(dVar6,0) ^ 1) & 1;
    bStack_237 = bVar17;
    FUN_10155b998(&dStack_300);
    uStack_b8 = CONCAT12(uStack_246,CONCAT11(uStack_247,uStack_248));
    dStack_c8 = dStack_258;
    dStack_d0 = dStack_260;
    dStack_c0 = dStack_250;
    uStack_ad = CONCAT17(bStack_236,CONCAT16(bStack_237,CONCAT15(bStack_238,uStack_23d)));
    uStack_b5 = uStack_245;
    uStack_b0 = uStack_240;
    dStack_108 = (double)CONCAT71(uStack_297,uStack_298);
    dStack_f8 = (double)CONCAT71(uStack_287,uStack_288);
    dStack_110 = dStack_2a0;
    dStack_100 = dStack_290;
    dStack_e8 = (double)CONCAT71(uStack_277,uStack_278);
    dStack_d8 = (double)CONCAT71(uStack_267,uStack_268);
    dStack_f0 = dStack_280;
    dStack_e0 = dStack_270;
    dStack_150 = (double)CONCAT71(uStack_2df,uStack_2e0);
    dStack_148 = dStack_2d8;
    dStack_138 = dStack_2c8;
    dStack_140 = dStack_2d0;
    dStack_128 = (double)CONCAT71(uStack_2b7,uStack_2b8);
    dStack_118 = (double)CONCAT71(uStack_2a7,uStack_2a8);
    dStack_130 = dStack_2c0;
    dStack_120 = dStack_2b0;
    dStack_168 = dStack_2f8;
    dStack_170 = dStack_300;
    dStack_158 = dStack_2e8;
    dStack_160 = dStack_2f0;
  }
  param_1[0x15] = dStack_c8;
  param_1[0x14] = dStack_d0;
  param_1[0x17] = (double)CONCAT53(uStack_b5,uStack_b8);
  param_1[0x16] = dStack_c0;
  *(undefined8 *)((long)param_1 + 0xc3) = uStack_ad;
  *(ulong *)((long)param_1 + 0xbb) = CONCAT35(uStack_b0,uStack_b5);
  param_1[0xd] = dStack_108;
  param_1[0xc] = dStack_110;
  param_1[0xf] = dStack_f8;
  param_1[0xe] = dStack_100;
  param_1[0x11] = dStack_e8;
  param_1[0x10] = dStack_f0;
  param_1[0x13] = dStack_d8;
  param_1[0x12] = dStack_e0;
  param_1[5] = dStack_148;
  param_1[4] = dStack_150;
  param_1[7] = dStack_138;
  param_1[6] = dStack_140;
  param_1[9] = dStack_128;
  param_1[8] = dStack_130;
  param_1[0xb] = dStack_118;
  param_1[10] = dStack_120;
  param_1[1] = dStack_168;
  *param_1 = dStack_170;
  param_1[3] = dStack_158;
  param_1[2] = dStack_160;
  return;
}



/* Entry: 101559934; end: 101559c77;  */

void FUN_101559934(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_928 [8];
  long lStack_920;
  char cStack_918;
  ulong auStack_848 [28];
  undefined1 auStack_768 [40];
  ulong uStack_740;
  ulong uStack_738;
  undefined1 auStack_688 [72];
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  long lStack_628;
  ulong uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined1 auStack_5a8 [17];
  byte bStack_597;
  undefined1 auStack_4c8 [24];
  long lStack_4b0;
  char cStack_4a8;
  undefined1 auStack_3e8 [18];
  byte bStack_3d6;
  undefined1 auStack_308 [224];
  undefined1 auStack_228 [72];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_148 [232];
  
  uVar9 = param_2;
  FUN_101607420();
  if ((uVar9 & 1) == 0) {
    uVar7 = 0;
    uVar8 = 0;
    uStack_740 = 0;
    uStack_738 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    bVar6 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    FUN_101607240(auStack_928,param_2,param_3,param_4);
    func_0x00010155b8c8(auStack_928);
    uVar8 = lStack_920 - 1;
    if (cStack_918 != '\x01') {
      uVar8 = 0xffffffffffffffff;
    }
    func_0x000103bfb8b0(0);
    uVar11 = param_2;
    uVar9 = param_3;
    FUN_101607094(param_2,param_3,param_4);
    uVar12 = uVar9;
    func_0x000103bfaab8();
    func_0x000107c6142c(uVar9);
    FUN_101607240(auStack_848,param_2,param_3,param_4);
    func_0x00010155b8c8(auStack_848);
    uVar7 = auStack_848[0] & ((long)auStack_848[0] >> 0x3f ^ 0xffffffffffffffffU);
    FUN_101607240(auStack_768,param_2,param_3,param_4);
    func_0x00010006c00c();
    func_0x00010155b8c8(auStack_768);
    FUN_101607240(auStack_688,param_2,param_3,param_4);
    func_0x00010155b8fc(uStack_640,uStack_638,uStack_630,lStack_628,uStack_620,uStack_618,uStack_610
                       );
    func_0x00010155b8c8(auStack_688);
    bVar4 = lStack_628 != 0;
    lVar1 = -0x2000000000000000;
    if (bVar4) {
      lVar1 = lStack_628;
    }
    uVar9 = 0;
    if (bVar4) {
      uVar9 = uStack_620 & 1;
    }
    uVar2 = 0;
    if (bVar4) {
      uVar2 = uStack_618;
    }
    uVar3 = 0xc000000000000000;
    if (bVar4) {
      uVar3 = uStack_610;
    }
    func_0x000107c6142c(lVar1);
    func_0x00010006c090(uVar2,uVar3);
    FUN_101607240(auStack_5a8,param_2,param_3,param_4);
    func_0x00010155b8c8(auStack_5a8);
    FUN_101607240(auStack_4c8,param_2,param_3,param_4);
    func_0x00010155b8c8(auStack_4c8);
    bVar4 = lStack_4b0 != 0;
    if (cStack_4a8 != '\x01') {
      bVar4 = lStack_4b0 == 1;
    }
    FUN_101607240(auStack_3e8,param_2,param_3,param_4);
    func_0x00010155b8c8(auStack_3e8);
    uVar10 = param_2;
    FUN_101607240(auStack_308,param_2,param_3,param_4);
    uVar5 = (uint)uVar10;
    FUN_1016230a8();
    func_0x00010155b8c8(auStack_308);
    FUN_101607240(auStack_228,param_2,param_3,param_4);
    func_0x00010155b8fc(uStack_1e0,uStack_1d8,uStack_1d0,uStack_1c8,uStack_1c0,uStack_1b8,uStack_1b0
                       );
    func_0x00010155b8c8(auStack_228);
    if (uStack_1c8 == 0) {
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0xc000000000000000;
      uStack_1c8 = 0xe000000000000000;
    }
    func_0x00010006c090(uStack_1b8,uStack_1b0);
    FUN_101607240(auStack_148,param_2,param_3,param_4);
    bVar6 = (byte)param_2;
    FUN_101623194();
    func_0x00010155b8c8(auStack_148);
    bVar6 = bVar6 & 1;
    uVar9 = uVar9 | (ulong)bStack_597 << 8;
    uVar10 = 0x10000;
    if ((uVar5 & 1) == 0) {
      uVar10 = 0;
    }
    uVar10 = uVar10 | (ulong)bStack_3d6 << 8 | (ulong)bVar4;
  }
  *param_1 = uVar7;
  param_1[1] = uVar8;
  param_1[2] = uStack_740;
  param_1[3] = uStack_738;
  param_1[4] = uVar9;
  param_1[5] = uVar11;
  param_1[6] = uVar12;
  param_1[7] = uVar10;
  param_1[8] = uStack_1d0;
  param_1[9] = uStack_1c8;
  *(byte *)(param_1 + 10) = bVar6;
  return;
}



/* Entry: 101559c78; end: 101559d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101559c78(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((char)param_1[1] == '\x01') {
    lVar2 = *param_1;
  }
  else {
    lVar2 = 0;
  }
  if ((char)param_1[3] == '\x01') {
    lVar3 = param_1[2];
  }
  else {
    lVar3 = 0;
  }
  if ((char)param_1[5] == '\x01') {
    lVar4 = param_1[4];
  }
  else {
    lVar4 = 0;
  }
  uVar1 = 0;
  func_0x0001047affb0(0);
  func_0x000107c610f8();
  func_0x0001047af918(lVar2,lVar3,lVar4,uVar1);
  uVar1 = *(undefined8 *)(lVar2 + _DAT_11308edd8);
  func_0x000107c61170();
  return uVar1;
}



/* Entry: 101559d44; end: 101559d77;  */

undefined8 FUN_101559d44(undefined8 param_1)

{
  FUN_101622670();
  return param_1;
}



/* Entry: 101559d78; end: 101559fa7;  */

void FUN_101559d78(double *param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  double dVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  double dVar7;
  undefined1 uVar8;
  double dVar9;
  undefined1 uVar10;
  double dVar11;
  undefined1 uVar12;
  double dStack_d0;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  uVar4 = (undefined2)((ulong)param_5 >> 8);
  FUN_101558eac(&uStack_88);
  dVar3 = param_2;
  FUN_101559014();
  dVar11 = dVar3;
  func_0x00010366b1a4();
  if (((ulong)dVar11 & 1) == 0) {
    dStack_d0 = 0.0;
    uVar12 = 1;
    func_0x00010366b244();
  }
  else {
    uVar6 = *(ulong *)((long)param_2 + 0x20) >> 0x3c;
    dStack_d0 = 0.0;
    if (uVar6 < 0xf) {
      dStack_d0 = (double)(float)*(undefined8 *)((long)param_2 + 0x10);
    }
    dVar11 = 0.0;
    if (uVar6 < 0xf) {
      dVar11 = *(double *)((long)param_2 + 0x18);
    }
    uVar2 = 0xc000000000000000;
    if (uVar6 < 0xf) {
      uVar2 = *(ulong *)((long)param_2 + 0x20);
    }
    FUN_100cb4fe0();
    func_0x00010006c090(dVar11,uVar2);
    uVar12 = 0;
    func_0x00010366b244();
  }
  if (((ulong)dVar11 & 1) == 0) {
    dVar7 = 0.0;
    uVar8 = 1;
    func_0x00010366b3d4();
  }
  else {
    uVar6 = *(ulong *)((long)param_2 + 0x38) >> 0x3c;
    dVar7 = 0.0;
    if (uVar6 < 0xf) {
      dVar7 = (double)(float)*(undefined8 *)((long)param_2 + 0x28);
    }
    dVar11 = 0.0;
    if (uVar6 < 0xf) {
      dVar11 = *(double *)((long)param_2 + 0x30);
    }
    uVar2 = 0xc000000000000000;
    if (uVar6 < 0xf) {
      uVar2 = *(ulong *)((long)param_2 + 0x38);
    }
    FUN_100cb4fe0();
    func_0x00010006c090(dVar11,uVar2);
    uVar8 = 0;
    func_0x00010366b3d4();
  }
  if (((ulong)dVar11 & 1) == 0) {
    dVar9 = 0.0;
    uVar10 = 1;
    func_0x00010366b474();
  }
  else {
    uVar6 = *(ulong *)((long)param_2 + 0x88) >> 0x3c;
    dVar9 = 0.0;
    if (uVar6 < 0xf) {
      dVar9 = (double)(float)*(undefined8 *)((long)param_2 + 0x78);
    }
    dVar11 = 0.0;
    if (uVar6 < 0xf) {
      dVar11 = *(double *)((long)param_2 + 0x80);
    }
    uVar2 = 0xc000000000000000;
    if (uVar6 < 0xf) {
      uVar2 = *(ulong *)((long)param_2 + 0x88);
    }
    FUN_100cb4fe0();
    func_0x00010006c090(dVar11,uVar2);
    uVar10 = 0;
    func_0x00010366b474();
  }
  if (((ulong)dVar11 & 1) == 0) {
    dVar11 = 0.0;
    uVar5 = 1;
  }
  else {
    uVar6 = *(ulong *)((long)param_2 + 0xa0) >> 0x3c;
    dVar11 = 0.0;
    if (uVar6 < 0xf) {
      dVar11 = (double)(float)*(undefined8 *)((long)param_2 + 0x90);
    }
    uVar1 = 0;
    if (uVar6 < 0xf) {
      uVar1 = *(undefined8 *)((long)param_2 + 0x98);
    }
    uVar2 = 0xc000000000000000;
    if (uVar6 < 0xf) {
      uVar2 = *(ulong *)((long)param_2 + 0xa0);
    }
    FUN_100cb4fe0();
    func_0x00010006c090(uVar1,uVar2);
    uVar5 = 0;
  }
  uStack_a1 = (undefined1)uStack_80;
  uStack_a0 = (undefined7)((ulong)uStack_80 >> 8);
  uStack_a9 = (undefined1)uStack_88;
  uStack_a8 = (undefined7)((ulong)uStack_88 >> 8);
  uStack_91 = (undefined1)uStack_70;
  uStack_90 = (undefined7)((ulong)uStack_70 >> 8);
  uStack_99 = (undefined1)uStack_78;
  uStack_98 = (undefined7)((ulong)uStack_78 >> 8);
  *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_a1,uStack_a8);
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_a9,uStack_b0);
  *param_1 = dStack_d0;
  *(undefined1 *)(param_1 + 1) = uVar12;
  param_1[2] = dVar7;
  *(undefined1 *)(param_1 + 3) = uVar8;
  param_1[4] = dVar9;
  *(undefined1 *)(param_1 + 5) = uVar10;
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_91,uStack_98);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_99,uStack_a0);
  *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_68,uStack_90);
  param_1[0xb] = dVar11;
  *(undefined1 *)(param_1 + 0xc) = uVar5;
  param_1[0xd] = dVar3;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  *(char *)(param_1 + 0x10) = (char)uVar4;
  *(char *)((long)param_1 + 0x81) = (char)((ushort)uVar4 >> 8);
  return;
}



/* Entry: 101559fa8; end: 10155b0af;  */

void FUN_101559fa8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *extraout_x8;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  ulong uStack_1ab0;
  undefined8 uStack_1aa8;
  undefined8 uStack_1aa0;
  ulong uStack_1a98;
  undefined8 uStack_1a90;
  ulong uStack_1a88;
  undefined8 uStack_1a80;
  undefined8 uStack_1a78;
  ulong uStack_1a70;
  undefined8 uStack_1a68;
  undefined8 uStack_1a60;
  ulong uStack_1a58;
  undefined8 uStack_1a50;
  undefined8 uStack_1a48;
  undefined8 uStack_1a40;
  undefined8 uStack_1a38;
  undefined8 uStack_1a30;
  undefined8 uStack_1a28;
  undefined8 uStack_1a20;
  undefined7 uStack_1a18;
  undefined1 uStack_1a11;
  undefined2 uStack_1a10;
  undefined1 uStack_1a0e;
  undefined5 uStack_1a0d;
  undefined *puStack_1a08;
  undefined8 uStack_19f8;
  ulong uStack_19f0;
  undefined8 uStack_19e8;
  undefined8 uStack_19e0;
  ulong uStack_19d8;
  undefined8 uStack_19d0;
  undefined8 uStack_19c8;
  ulong uStack_19c0;
  undefined8 uStack_19b8;
  ulong uStack_19b0;
  undefined8 uStack_19a8;
  undefined8 uStack_19a0;
  ulong uStack_1998;
  undefined8 uStack_1990;
  undefined8 uStack_1988;
  ulong uStack_1980;
  undefined8 uStack_1978;
  ulong uStack_1970;
  undefined8 uStack_1968;
  undefined8 uStack_1960;
  ulong uStack_1958;
  undefined8 uStack_1950;
  undefined8 uStack_1948;
  ulong uStack_1940;
  undefined8 uStack_1938;
  undefined8 uStack_1930;
  undefined8 uStack_1928;
  undefined8 uStack_1920;
  undefined8 uStack_1918;
  undefined8 uStack_1910;
  undefined8 uStack_1908;
  undefined8 uStack_1900;
  undefined2 uStack_18f8;
  undefined8 uStack_18f0;
  ulong uStack_18e8;
  undefined8 uStack_18e0;
  undefined8 uStack_18d8;
  ulong uStack_18d0;
  undefined8 uStack_18c8;
  undefined8 uStack_18c0;
  ulong uStack_18b8;
  undefined8 uStack_18b0;
  ulong uStack_18a8;
  undefined8 uStack_18a0;
  undefined8 uStack_1898;
  ulong uStack_1890;
  undefined8 uStack_1888;
  undefined8 uStack_1880;
  ulong uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined7 uStack_1838;
  undefined4 uStack_1831;
  undefined5 uStack_182d;
  undefined *puStack_1828;
  long lStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  ulong uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  ulong uStack_1740;
  undefined8 uStack_1738;
  undefined8 uStack_1730;
  ulong uStack_1728;
  undefined8 uStack_1720;
  undefined8 uStack_1718;
  undefined8 uStack_1710;
  undefined8 uStack_1708;
  undefined8 uStack_1700;
  undefined8 uStack_16f8;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined8 uStack_16e0;
  undefined8 uStack_16d8;
  undefined8 uStack_16d0;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b8;
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined8 uStack_1690;
  undefined8 uStack_1688;
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  ulong uStack_1670;
  undefined8 uStack_1668;
  undefined8 uStack_1660;
  ulong uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  ulong uStack_1640;
  undefined8 uStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined8 uStack_1610;
  undefined8 uStack_1608;
  undefined8 uStack_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  undefined8 uStack_15e8;
  undefined8 uStack_15e0;
  undefined8 uStack_15d8;
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined8 uStack_1570;
  undefined8 uStack_1568;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  long lStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  ulong uStack_1528;
  undefined8 uStack_1520;
  undefined8 uStack_1518;
  ulong uStack_1510;
  undefined8 uStack_1508;
  undefined8 uStack_1500;
  ulong uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  long lStack_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  ulong uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  ulong uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  ulong uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  long lStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  ulong uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  ulong uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  ulong uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  long lStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  ulong uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  ulong uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  ulong uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  long lStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  ulong uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  ulong uStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  ulong uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  long lStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  ulong uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  ulong uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  ulong uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  long lStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  ulong uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  ulong uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  ulong uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined1 auStack_ea0 [320];
  undefined1 auStack_d60 [64];
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  long lStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  ulong uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  ulong uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  ulong uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  long lStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  ulong uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  ulong uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  ulong uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined1 auStack_b20 [64];
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  long lStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  ulong uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  ulong uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  ulong uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  long lStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  ulong uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  ulong uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  ulong uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined1 auStack_8e0 [232];
  undefined8 uStack_7f8;
  ulong uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  ulong uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  ulong uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined2 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  long lStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  ulong uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  ulong uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  ulong uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  long lStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  ulong uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  ulong uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  ulong uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 auStack_528 [232];
  undefined8 uStack_440;
  ulong uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  ulong uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  ulong uStack_408;
  undefined8 uStack_400;
  ulong uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  ulong uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  ulong uStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  ulong uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  ulong uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar4 = param_1;
  uVar10 = param_2;
  uVar15 = param_3;
  FUN_1016070e0();
  FUN_101609950(auStack_ea0);
  func_0x00010006c090(uVar4,uVar10);
  func_0x000107c61574();
  func_0x0001036677c8();
  func_0x00010155b63c(auStack_ea0);
  if ((uVar15 & 1) != 0) {
    uVar4 = param_1;
    uVar10 = param_2;
    uVar15 = param_3;
    FUN_1016070e0(param_1,param_2,param_3);
    FUN_101609950(auStack_d60);
    func_0x00010006c090(uVar4,uVar10);
    func_0x000107c61574(uVar15);
    uStack_ed8 = uStack_c58;
    uStack_ee0 = uStack_c60;
    uStack_ec8 = uStack_c48;
    uStack_ed0 = uStack_c50;
    uStack_eb8 = uStack_c38;
    uStack_ec0 = uStack_c40;
    uStack_ea8 = uStack_c28;
    uStack_eb0 = uStack_c30;
    uStack_f18 = uStack_c98;
    uStack_f20 = uStack_ca0;
    uStack_f08 = uStack_c88;
    uStack_f10 = uStack_c90;
    uStack_ef8 = uStack_c78;
    uStack_f00 = uStack_c80;
    uStack_ee8 = uStack_c68;
    uStack_ef0 = uStack_c70;
    uStack_f58 = uStack_cd8;
    lStack_f60 = lStack_ce0;
    uStack_f48 = uStack_cc8;
    uStack_f50 = uStack_cd0;
    uStack_f38 = uStack_cb8;
    uStack_f40 = uStack_cc0;
    uStack_f28 = uStack_ca8;
    uStack_f30 = uStack_cb0;
    uStack_f98 = uStack_d18;
    uStack_fa0 = uStack_d20;
    uStack_f88 = uStack_d08;
    uStack_f90 = uStack_d10;
    uStack_f78 = uStack_cf8;
    uStack_f80 = uStack_d00;
    uStack_f68 = uStack_ce8;
    uStack_f70 = uStack_cf0;
    iVar3 = (int)&uStack_fa0;
    func_0x00010155b68c();
    uStack_1180 = uStack_f90;
    uStack_1188 = uStack_f98;
    uStack_1190 = uStack_fa0;
    if (iVar3 == 1) {
      func_0x00010366b618(&uStack_c20);
      uVar15 = 0;
      func_0x00010155b63c();
      uStack_fb0 = uStack_b28;
      uStack_fc8 = uStack_b40;
      uStack_fd0 = uStack_b48;
      uStack_fb8 = uStack_b30;
      uStack_fc0 = uStack_b38;
      uStack_1008 = uStack_b80;
      uStack_1010 = uStack_b88;
      uStack_ff8 = uStack_b70;
      uStack_1000 = uStack_b78;
      uStack_fd8 = uStack_b50;
      uStack_fe0 = uStack_b58;
      uStack_fe8 = uStack_b60;
      uStack_ff0 = uStack_b68;
      uStack_1048 = uStack_bc0;
      uStack_1050 = uStack_bc8;
      uStack_1038 = uStack_bb0;
      uStack_1040 = uStack_bb8;
      uStack_1018 = uStack_b90;
      uStack_1020 = uStack_b98;
      uStack_1028 = uStack_ba0;
      uStack_1030 = uStack_ba8;
      uStack_1088 = uStack_c00;
      uStack_1090 = uStack_c08;
      uStack_1078 = uStack_bf0;
      uStack_1080 = uStack_bf8;
      uStack_1058 = uStack_bd0;
      uStack_1060 = uStack_bd8;
      lStack_1068 = lStack_be0;
      uStack_1070 = uStack_be8;
      uStack_1190 = uStack_c20;
      uStack_1188 = uStack_c18;
      uStack_1180 = uStack_c10;
    }
    else {
      uStack_6a8 = uStack_ed8;
      uStack_6b0 = uStack_ee0;
      uStack_698 = uStack_ec8;
      uStack_6a0 = uStack_ed0;
      uStack_688 = uStack_eb8;
      uStack_690 = uStack_ec0;
      uStack_678 = uStack_ea8;
      uStack_680 = uStack_eb0;
      uStack_6e8 = uStack_f18;
      uStack_6f0 = uStack_f20;
      uStack_6d8 = uStack_f08;
      uStack_6e0 = uStack_f10;
      uStack_6c8 = uStack_ef8;
      uStack_6d0 = uStack_f00;
      uStack_6b8 = uStack_ee8;
      uStack_6c0 = uStack_ef0;
      uStack_728 = uStack_f58;
      lStack_730 = lStack_f60;
      uStack_718 = uStack_f48;
      uStack_720 = uStack_f50;
      uStack_708 = uStack_f38;
      uStack_710 = uStack_f40;
      uStack_6f8 = uStack_f28;
      uStack_700 = uStack_f30;
      uStack_768 = uStack_f98;
      uStack_770 = uStack_fa0;
      uStack_758 = uStack_f88;
      uStack_760 = uStack_f90;
      uStack_748 = uStack_f78;
      uStack_750 = uStack_f80;
      uStack_738 = uStack_f68;
      uStack_740 = uStack_f70;
      func_0x00010155b788(&uStack_770,auStack_b20);
      uVar15 = 0;
      func_0x00010155b63c();
      uStack_fc8 = uStack_690;
      uStack_fd0 = uStack_698;
      uStack_fb8 = uStack_680;
      uStack_fc0 = uStack_688;
      uStack_fb0 = uStack_678;
      uStack_1008 = uStack_6d0;
      uStack_1010 = uStack_6d8;
      uStack_ff8 = uStack_6c0;
      uStack_1000 = uStack_6c8;
      uStack_fd8 = uStack_6a0;
      uStack_fe0 = uStack_6a8;
      uStack_fe8 = uStack_6b0;
      uStack_ff0 = uStack_6b8;
      uStack_1048 = uStack_710;
      uStack_1050 = uStack_718;
      uStack_1038 = uStack_700;
      uStack_1040 = uStack_708;
      uStack_1018 = uStack_6e0;
      uStack_1020 = uStack_6e8;
      uStack_1028 = uStack_6f0;
      uStack_1030 = uStack_6f8;
      uStack_1088 = uStack_750;
      uStack_1090 = uStack_758;
      uStack_1078 = uStack_740;
      uStack_1080 = uStack_748;
      uStack_1058 = uStack_720;
      uStack_1060 = uStack_728;
      lStack_1068 = lStack_730;
      uStack_1070 = uStack_738;
    }
    uStack_10c0 = uStack_fd8;
    uStack_10c8 = uStack_fe0;
    uStack_10b0 = uStack_fc8;
    uStack_10b8 = uStack_fd0;
    uStack_10a0 = uStack_fb8;
    uStack_10a8 = uStack_fc0;
    uStack_1100 = uStack_1018;
    uStack_1108 = uStack_1020;
    uStack_10f0 = uStack_1008;
    uStack_10f8 = uStack_1010;
    uStack_10e0 = uStack_ff8;
    uStack_10e8 = uStack_1000;
    uStack_10d0 = uStack_fe8;
    uStack_10d8 = uStack_ff0;
    uStack_1140 = uStack_1058;
    uStack_1148 = uStack_1060;
    uStack_1130 = uStack_1048;
    uStack_1138 = uStack_1050;
    uStack_1120 = uStack_1038;
    uStack_1128 = uStack_1040;
    uStack_1110 = uStack_1028;
    uStack_1118 = uStack_1030;
    uStack_1170 = uStack_1088;
    uStack_1178 = uStack_1090;
    uStack_1098 = uStack_fb0;
    uStack_1160 = uStack_1078;
    uStack_1168 = uStack_1080;
    lStack_1150 = lStack_1068;
    uStack_1158 = uStack_1070;
    uStack_b8 = uStack_fe0;
    uStack_c0 = uStack_fe8;
    uStack_a8 = uStack_fd0;
    uStack_b0 = uStack_fd8;
    uStack_98 = uStack_fc0;
    uStack_a0 = uStack_fc8;
    uStack_88 = uStack_fb0;
    uStack_90 = uStack_fb8;
    uStack_f8 = uStack_1020;
    uStack_100 = uStack_1028;
    uStack_e8 = uStack_1010;
    uStack_f0 = uStack_1018;
    uStack_d8 = uStack_1000;
    uStack_e0 = uStack_1008;
    uStack_c8 = uStack_ff0;
    uStack_d0 = uStack_ff8;
    uStack_138 = uStack_1060;
    lStack_140 = lStack_1068;
    uStack_128 = uStack_1050;
    uStack_130 = uStack_1058;
    uStack_118 = uStack_1040;
    uStack_120 = uStack_1048;
    uStack_108 = uStack_1030;
    uStack_110 = uStack_1038;
    uStack_168 = uStack_1090;
    uStack_158 = uStack_1080;
    uStack_160 = uStack_1088;
    uStack_148 = uStack_1070;
    uStack_150 = uStack_1078;
    uStack_180 = uStack_1190;
    uStack_178 = uStack_1188;
    uStack_170 = uStack_1180;
    func_0x00010366a764();
    FUN_10155b6a4(&uStack_1190);
    if ((uVar15 & 1) != 0) {
      uVar4 = param_1;
      uVar10 = param_2;
      uVar15 = param_3;
      FUN_1016070e0(param_1,param_2,param_3);
      FUN_101609950(auStack_b20);
      func_0x00010006c090(uVar4,uVar10);
      func_0x000107c61574(uVar15);
      uStack_11c8 = uStack_a18;
      uStack_11d0 = uStack_a20;
      uStack_11b8 = uStack_a08;
      uStack_11c0 = uStack_a10;
      uStack_11a8 = uStack_9f8;
      uStack_11b0 = uStack_a00;
      uStack_1198 = uStack_9e8;
      uStack_11a0 = uStack_9f0;
      uStack_1208 = uStack_a58;
      uStack_1210 = uStack_a60;
      uStack_11f8 = uStack_a48;
      uStack_1200 = uStack_a50;
      uStack_11e8 = uStack_a38;
      uStack_11f0 = uStack_a40;
      uStack_11d8 = uStack_a28;
      uStack_11e0 = uStack_a30;
      uStack_1248 = uStack_a98;
      lStack_1250 = lStack_aa0;
      uStack_1238 = uStack_a88;
      uStack_1240 = uStack_a90;
      uStack_1228 = uStack_a78;
      uStack_1230 = uStack_a80;
      uStack_1218 = uStack_a68;
      uStack_1220 = uStack_a70;
      uStack_1288 = uStack_ad8;
      uStack_1290 = uStack_ae0;
      uStack_1278 = uStack_ac8;
      uStack_1280 = uStack_ad0;
      uStack_1268 = uStack_ab8;
      uStack_1270 = uStack_ac0;
      uStack_1258 = uStack_aa8;
      uStack_1260 = uStack_ab0;
      iVar3 = (int)&uStack_1290;
      func_0x00010155b68c();
      uStack_1570 = uStack_1280;
      uStack_1578 = uStack_1288;
      uStack_1580 = uStack_1290;
      if (iVar3 == 1) {
        func_0x00010366b618(&uStack_9e0);
        func_0x00010155b63c(auStack_b20);
        uStack_12a0 = uStack_8e8;
        uStack_12b8 = uStack_900;
        uStack_12c0 = uStack_908;
        uStack_12a8 = uStack_8f0;
        uStack_12b0 = uStack_8f8;
        uStack_12f8 = uStack_940;
        uStack_1300 = uStack_948;
        uStack_12e8 = uStack_930;
        uStack_12f0 = uStack_938;
        uStack_12c8 = uStack_910;
        uStack_12d0 = uStack_918;
        uStack_12d8 = uStack_920;
        uStack_12e0 = uStack_928;
        uStack_1338 = uStack_980;
        uStack_1340 = uStack_988;
        uStack_1328 = uStack_970;
        uStack_1330 = uStack_978;
        uStack_1308 = uStack_950;
        uStack_1310 = uStack_958;
        uStack_1318 = uStack_960;
        uStack_1320 = uStack_968;
        uStack_1378 = uStack_9c0;
        uStack_1380 = uStack_9c8;
        uStack_1368 = uStack_9b0;
        uStack_1370 = uStack_9b8;
        uStack_1348 = uStack_990;
        uStack_1350 = uStack_998;
        lStack_1358 = lStack_9a0;
        uStack_1360 = uStack_9a8;
        uStack_1580 = uStack_9e0;
        uStack_1578 = uStack_9d8;
        uStack_1570 = uStack_9d0;
      }
      else {
        uStack_6a8 = uStack_11c8;
        uStack_6b0 = uStack_11d0;
        uStack_698 = uStack_11b8;
        uStack_6a0 = uStack_11c0;
        uStack_688 = uStack_11a8;
        uStack_690 = uStack_11b0;
        uStack_678 = uStack_1198;
        uStack_680 = uStack_11a0;
        uStack_6e8 = uStack_1208;
        uStack_6f0 = uStack_1210;
        uStack_6d8 = uStack_11f8;
        uStack_6e0 = uStack_1200;
        uStack_6c8 = uStack_11e8;
        uStack_6d0 = uStack_11f0;
        uStack_6b8 = uStack_11d8;
        uStack_6c0 = uStack_11e0;
        uStack_728 = uStack_1248;
        lStack_730 = lStack_1250;
        uStack_718 = uStack_1238;
        uStack_720 = uStack_1240;
        uStack_708 = uStack_1228;
        uStack_710 = uStack_1230;
        uStack_6f8 = uStack_1218;
        uStack_700 = uStack_1220;
        uStack_768 = uStack_1288;
        uStack_770 = uStack_1290;
        uStack_758 = uStack_1278;
        uStack_760 = uStack_1280;
        uStack_748 = uStack_1268;
        uStack_750 = uStack_1270;
        uStack_738 = uStack_1258;
        uStack_740 = uStack_1260;
        func_0x00010155b788(&uStack_770,&lStack_3c0);
        func_0x00010155b63c(auStack_b20);
        uStack_12b8 = uStack_690;
        uStack_12c0 = uStack_698;
        uStack_12a8 = uStack_680;
        uStack_12b0 = uStack_688;
        uStack_12a0 = uStack_678;
        uStack_12f8 = uStack_6d0;
        uStack_1300 = uStack_6d8;
        uStack_12e8 = uStack_6c0;
        uStack_12f0 = uStack_6c8;
        uStack_12c8 = uStack_6a0;
        uStack_12d0 = uStack_6a8;
        uStack_12d8 = uStack_6b0;
        uStack_12e0 = uStack_6b8;
        uStack_1338 = uStack_710;
        uStack_1340 = uStack_718;
        uStack_1328 = uStack_700;
        uStack_1330 = uStack_708;
        uStack_1308 = uStack_6e0;
        uStack_1310 = uStack_6e8;
        uStack_1318 = uStack_6f0;
        uStack_1320 = uStack_6f8;
        uStack_1378 = uStack_750;
        uStack_1380 = uStack_758;
        uStack_1368 = uStack_740;
        uStack_1370 = uStack_748;
        uStack_1348 = uStack_720;
        uStack_1350 = uStack_728;
        lStack_1358 = lStack_730;
        uStack_1360 = uStack_738;
      }
      uStack_14b0 = uStack_12c8;
      uStack_14b8 = uStack_12d0;
      uStack_14a0 = uStack_12b8;
      uStack_14a8 = uStack_12c0;
      uStack_1490 = uStack_12a8;
      uStack_1498 = uStack_12b0;
      uStack_14f0 = uStack_1308;
      uStack_14f8 = uStack_1310;
      uStack_14e0 = uStack_12f8;
      uStack_14e8 = uStack_1300;
      uStack_14d0 = uStack_12e8;
      uStack_14d8 = uStack_12f0;
      uStack_14c0 = uStack_12d8;
      uStack_14c8 = uStack_12e0;
      uStack_1530 = uStack_1348;
      uStack_1538 = uStack_1350;
      uStack_1520 = uStack_1338;
      uStack_1528 = uStack_1340;
      uStack_1510 = uStack_1328;
      uStack_1518 = uStack_1330;
      uStack_1500 = uStack_1318;
      uStack_1508 = uStack_1320;
      uStack_1560 = uStack_1378;
      uStack_1568 = uStack_1380;
      uStack_1488 = uStack_12a0;
      uStack_1550 = uStack_1368;
      uStack_1558 = uStack_1370;
      lStack_1540 = lStack_1358;
      uStack_1548 = uStack_1360;
      uStack_1b8 = uStack_12d0;
      uStack_1c0 = uStack_12d8;
      uStack_1a8 = uStack_12c0;
      uStack_1b0 = uStack_12c8;
      uStack_198 = uStack_12b0;
      uStack_1a0 = uStack_12b8;
      uStack_188 = uStack_12a0;
      uStack_190 = uStack_12a8;
      uStack_1f8 = uStack_1310;
      uStack_200 = uStack_1318;
      uStack_1e8 = uStack_1300;
      uStack_1f0 = uStack_1308;
      uStack_1d8 = uStack_12f0;
      uStack_1e0 = uStack_12f8;
      uStack_1c8 = uStack_12e0;
      uStack_1d0 = uStack_12e8;
      uStack_238 = uStack_1350;
      lStack_240 = lStack_1358;
      uStack_228 = uStack_1340;
      uStack_230 = uStack_1348;
      uStack_218 = uStack_1330;
      uStack_220 = uStack_1338;
      uStack_208 = uStack_1320;
      uStack_210 = uStack_1328;
      uStack_268 = uStack_1380;
      uStack_258 = uStack_1370;
      uStack_260 = uStack_1378;
      uStack_248 = uStack_1360;
      uStack_250 = uStack_1368;
      uStack_280 = uStack_1580;
      uStack_278 = uStack_1578;
      uStack_270 = uStack_1570;
      func_0x00010366a5c4(auStack_8e0);
      FUN_10155b6a4(&uStack_1580);
      FUN_101559d78(&uStack_7f8,auStack_8e0);
      func_0x00010155b6d8(auStack_8e0);
      FUN_1016070e0(param_1,param_2,param_3);
      FUN_101609950(&uStack_770);
      func_0x00010006c090(param_1,param_2);
      func_0x000107c61574(param_3);
      uStack_13b8 = uStack_668;
      uStack_13c0 = uStack_670;
      uStack_13a8 = uStack_658;
      uStack_13b0 = uStack_660;
      uStack_1398 = uStack_648;
      uStack_13a0 = uStack_650;
      uStack_1388 = uStack_638;
      uStack_1390 = uStack_640;
      uStack_13f8 = uStack_6a8;
      uStack_1400 = uStack_6b0;
      uStack_13e8 = uStack_698;
      uStack_13f0 = uStack_6a0;
      uStack_13d8 = uStack_688;
      uStack_13e0 = uStack_690;
      uStack_13c8 = uStack_678;
      uStack_13d0 = uStack_680;
      uStack_1438 = uStack_6e8;
      uStack_1440 = uStack_6f0;
      uStack_1428 = uStack_6d8;
      uStack_1430 = uStack_6e0;
      uStack_1418 = uStack_6c8;
      uStack_1420 = uStack_6d0;
      uStack_1408 = uStack_6b8;
      uStack_1410 = uStack_6c0;
      uStack_1478 = uStack_728;
      lStack_1480 = lStack_730;
      uStack_1468 = uStack_718;
      uStack_1470 = uStack_720;
      uStack_1458 = uStack_708;
      uStack_1460 = uStack_710;
      uStack_1448 = uStack_6f8;
      uStack_1450 = uStack_700;
      iVar3 = (int)&lStack_1480;
      func_0x00010155b68c();
      uStack_1760 = uStack_1470;
      uStack_1768 = uStack_1478;
      lVar12 = lStack_1480;
      if (iVar3 == 1) {
        func_0x00010366b618(&lStack_628);
        func_0x00010155b63c(&uStack_770);
        uStack_1590 = uStack_530;
        uStack_15a8 = uStack_548;
        uStack_15b0 = uStack_550;
        uStack_1598 = uStack_538;
        uStack_15a0 = uStack_540;
        uStack_15e8 = uStack_588;
        uStack_15f0 = uStack_590;
        uStack_15d8 = uStack_578;
        uStack_15e0 = uStack_580;
        uStack_15b8 = uStack_558;
        uStack_15c0 = uStack_560;
        uStack_15c8 = uStack_568;
        uStack_15d0 = uStack_570;
        uStack_1628 = uStack_5c8;
        uStack_1630 = uStack_5d0;
        uStack_1618 = uStack_5b8;
        uStack_1620 = uStack_5c0;
        uStack_15f8 = uStack_598;
        uStack_1600 = uStack_5a0;
        uStack_1608 = uStack_5a8;
        uStack_1610 = uStack_5b0;
        uStack_1668 = uStack_608;
        uStack_1670 = uStack_610;
        uStack_1658 = uStack_5f8;
        uStack_1660 = uStack_600;
        uStack_1638 = uStack_5d8;
        uStack_1640 = uStack_5e0;
        uStack_1648 = uStack_5e8;
        uStack_1650 = uStack_5f0;
        lVar12 = lStack_628;
        uStack_1768 = uStack_620;
        uStack_1760 = uStack_618;
      }
      else {
        uStack_2f8 = uStack_13b8;
        uStack_300 = uStack_13c0;
        uStack_2e8 = uStack_13a8;
        uStack_2f0 = uStack_13b0;
        uStack_2d8 = uStack_1398;
        uStack_2e0 = uStack_13a0;
        uStack_2c8 = uStack_1388;
        uStack_2d0 = uStack_1390;
        uStack_338 = uStack_13f8;
        uStack_340 = uStack_1400;
        uStack_328 = uStack_13e8;
        uStack_330 = uStack_13f0;
        uStack_318 = uStack_13d8;
        uStack_320 = uStack_13e0;
        uStack_308 = uStack_13c8;
        uStack_310 = uStack_13d0;
        uStack_378 = uStack_1438;
        uStack_380 = uStack_1440;
        uStack_368 = uStack_1428;
        uStack_370 = uStack_1430;
        uStack_358 = uStack_1418;
        uStack_360 = uStack_1420;
        uStack_348 = uStack_1408;
        uStack_350 = uStack_1410;
        uStack_3b8 = uStack_1478;
        lStack_3c0 = lStack_1480;
        uStack_3a8 = uStack_1468;
        uStack_3b0 = uStack_1470;
        uStack_398 = uStack_1458;
        uStack_3a0 = uStack_1460;
        uStack_388 = uStack_1448;
        uStack_390 = uStack_1450;
        func_0x00010155b788(&lStack_3c0,&uStack_18b0);
        func_0x00010155b63c(&uStack_770);
        uStack_15a8 = uStack_2e0;
        uStack_15b0 = uStack_2e8;
        uStack_1598 = uStack_2d0;
        uStack_15a0 = uStack_2d8;
        uStack_1590 = uStack_2c8;
        uStack_15e8 = uStack_320;
        uStack_15f0 = uStack_328;
        uStack_15d8 = uStack_310;
        uStack_15e0 = uStack_318;
        uStack_15b8 = uStack_2f0;
        uStack_15c0 = uStack_2f8;
        uStack_15c8 = uStack_300;
        uStack_15d0 = uStack_308;
        uStack_1628 = uStack_360;
        uStack_1630 = uStack_368;
        uStack_1618 = uStack_350;
        uStack_1620 = uStack_358;
        uStack_15f8 = uStack_330;
        uStack_1600 = uStack_338;
        uStack_1608 = uStack_340;
        uStack_1610 = uStack_348;
        uStack_1668 = uStack_3a0;
        uStack_1670 = uStack_3a8;
        uStack_1658 = uStack_390;
        uStack_1660 = uStack_398;
        uStack_1638 = uStack_370;
        uStack_1640 = uStack_378;
        uStack_1648 = uStack_380;
        uStack_1650 = uStack_388;
      }
      uStack_16a0 = uStack_15b8;
      uStack_16a8 = uStack_15c0;
      uStack_1690 = uStack_15a8;
      uStack_1698 = uStack_15b0;
      uStack_1680 = uStack_1598;
      uStack_1688 = uStack_15a0;
      uStack_16e0 = uStack_15f8;
      uStack_16e8 = uStack_1600;
      uStack_16d0 = uStack_15e8;
      uStack_16d8 = uStack_15f0;
      uStack_16c0 = uStack_15d8;
      uStack_16c8 = uStack_15e0;
      uStack_16b0 = uStack_15c8;
      uStack_16b8 = uStack_15d0;
      uStack_1720 = uStack_1638;
      uStack_1728 = uStack_1640;
      uStack_1710 = uStack_1628;
      uStack_1718 = uStack_1630;
      uStack_1700 = uStack_1618;
      uStack_1708 = uStack_1620;
      uStack_16f0 = uStack_1608;
      uStack_16f8 = uStack_1610;
      uStack_1750 = uStack_1668;
      uStack_1758 = uStack_1670;
      uStack_1740 = uStack_1658;
      uStack_1748 = uStack_1660;
      uStack_1678 = uStack_1590;
      uStack_1730 = uStack_1648;
      uStack_1738 = uStack_1650;
      lStack_1770 = lVar12;
      func_0x000107c61434(lVar12);
      FUN_10155b6a4(&lStack_1770);
      uVar15 = *(ulong *)(lVar12 + 0x10);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar15 != 0) {
        uVar11 = 0;
        uStack_1a98 = 0xf000000000000000;
        uStack_1aa0 = 0;
        uStack_1aa8 = 0;
        uStack_1ab0 = 0xf000000000000000;
        do {
          lVar14 = lVar12 + 0x20 + uVar11 * 0x138;
          uVar13 = uVar11;
          while( true ) {
            if (*(ulong *)(lVar12 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10155b0b0);
              (*pcVar2)();
            }
            func_0x000107c610b4(&lStack_3c0,lVar14,0x138);
            plVar5 = &lStack_3c0;
            func_0x00010155b70c(plVar5,&uStack_18b0);
            func_0x00010366ab90();
            if ((((ulong)plVar5 & 1) != 0) && (func_0x00010366ade0(), ((ulong)plVar5 & 1) != 0))
            break;
            uVar13 = uVar13 + 1;
            func_0x00010155b748(&lStack_3c0);
            lVar14 = lVar14 + 0x138;
            if (uVar15 == uVar13) goto LAB_10155aff8;
          }
          func_0x00010366ac84(auStack_528);
          FUN_101559d78(&uStack_1978,auStack_528);
          func_0x00010155b6d8(auStack_528);
          uStack_18e8 = uStack_3a8;
          uStack_18f0 = uStack_3b0;
          uStack_18d8 = uStack_398;
          uStack_18e0 = uStack_3a0;
          uStack_18c8 = uStack_388;
          uStack_18d0 = uStack_390;
          uStack_18b8 = uStack_378;
          uStack_18c0 = uStack_380;
          uStack_19b0 = uStack_3a8;
          uStack_19b8 = uStack_3b0;
          uStack_19a8 = uStack_3a0;
          uStack_19a0 = uStack_398;
          uStack_1998 = uStack_390;
          uStack_1990 = uStack_388;
          uStack_1988 = uStack_380;
          uStack_1980 = uStack_378;
          if (0xe < uStack_3a8 >> 0x3c) {
            uStack_19b0 = 0xc000000000000000;
            uStack_19b8 = 0;
            uStack_19a8 = 0;
            uStack_19a0 = 0;
            uStack_1998 = uStack_1ab0;
            uStack_1990 = uStack_1aa8;
            uStack_1988 = uStack_1aa0;
            uStack_1980 = uStack_1a98;
          }
          puVar6 = &uStack_18f0;
          uStack_400 = uStack_19b8;
          uStack_3f8 = uStack_19b0;
          uStack_3f0 = uStack_19a8;
          uStack_3e8 = uStack_19a0;
          uStack_3e0 = uStack_1998;
          uStack_3d8 = uStack_1990;
          uStack_3d0 = uStack_1988;
          uStack_3c8 = uStack_1980;
          func_0x00010155b7c4(puVar6,&uStack_18b0,0x112db40e0,&UNK_10d95e630);
          func_0x000103672ae4();
          FUN_10155b544(&uStack_19b8);
          dVar16 = 0.0;
          if (((ulong)puVar6 & 1) != 0) {
            uStack_18a8 = uStack_18e8;
            uStack_18b0 = uStack_18f0;
            uStack_1878 = uStack_18b8;
            uVar4 = uStack_18e0;
            uVar10 = uStack_18d8;
            uVar11 = uStack_18d0;
            uStack_1888 = uStack_18c8;
            uStack_1880 = uStack_18c0;
            if (0xe < uStack_18e8 >> 0x3c) {
              uStack_18a8 = 0xc000000000000000;
              uStack_18b0 = 0;
              uStack_1878 = 0xf000000000000000;
              uVar4 = 0;
              uVar10 = 0;
              uVar11 = 0xf000000000000000;
              uStack_1888 = 0;
              uStack_1880 = 0;
            }
            uStack_18a0 = uVar4;
            uStack_1898 = uVar10;
            uStack_1890 = uVar11;
            func_0x00010155b7c4(&uStack_18f0,&uStack_1a90,0x112db40e0,&UNK_10d95e630);
            FUN_100cb4fe0(uVar4,uVar10,uVar11);
            FUN_10155b544(&uStack_18b0);
            if (uVar11 >> 0x3c < 0xf) {
              func_0x000100cb4ffc(uVar4,uVar10,uVar11);
              dVar16 = (double)(float)uVar4;
            }
            else {
              func_0x00010006c090(0,0xc000000000000000);
            }
          }
          uStack_19f0 = uStack_18e8;
          uStack_19f8 = uStack_18f0;
          uStack_19e8 = uStack_18e0;
          uStack_19e0 = uStack_18d8;
          uStack_19d8 = uStack_18d0;
          uStack_19d0 = uStack_18c8;
          uStack_19c8 = uStack_18c0;
          uStack_19c0 = uStack_18b8;
          if (0xe < uStack_18e8 >> 0x3c) {
            uStack_19f0 = 0xc000000000000000;
            uStack_19f8 = 0;
            uStack_19e8 = 0;
            uStack_19e0 = 0;
            uStack_19d8 = uStack_1ab0;
            uStack_19d0 = uStack_1aa8;
            uStack_19c8 = uStack_1aa0;
            uStack_19c0 = uStack_1a98;
          }
          puVar6 = &uStack_18f0;
          uStack_440 = uStack_19f8;
          uStack_438 = uStack_19f0;
          uStack_430 = uStack_19e8;
          uStack_428 = uStack_19e0;
          uStack_420 = uStack_19d8;
          uStack_418 = uStack_19d0;
          uStack_410 = uStack_19c8;
          uStack_408 = uStack_19c0;
          func_0x00010155b7c4(puVar6,&uStack_18b0,0x112db40e0,&UNK_10d95e630);
          func_0x000103672b74();
          FUN_10155b544(&uStack_19f8);
          if (((ulong)puVar6 & 1) == 0) {
            func_0x00010155b748(&lStack_3c0);
            dVar17 = 0.0;
          }
          else {
            func_0x00010155b7c4(&uStack_18f0,&uStack_18b0,0x112db40e0,&UNK_10d95e630);
            func_0x00010155b748(&lStack_3c0);
            uStack_18a8 = uStack_18e8;
            uStack_18b0 = uStack_18f0;
            uStack_1890 = uStack_18d0;
            uVar4 = uStack_18c8;
            uVar10 = uStack_18c0;
            uVar11 = uStack_18b8;
            uStack_18a0 = uStack_18e0;
            uStack_1898 = uStack_18d8;
            if (0xe < uStack_18e8 >> 0x3c) {
              uStack_18a8 = 0xc000000000000000;
              uStack_18b0 = 0;
              uStack_1890 = 0xf000000000000000;
              uVar4 = 0;
              uVar10 = 0;
              uVar11 = 0xf000000000000000;
              uStack_18a0 = 0;
              uStack_1898 = 0;
            }
            uStack_1888 = uVar4;
            uStack_1880 = uVar10;
            uStack_1878 = uVar11;
            FUN_100cb4fe0(uVar4,uVar10,uVar11);
            FUN_10155b544(&uStack_18b0);
            if (uVar11 >> 0x3c < 0xf) {
              func_0x000100cb4ffc(uVar4,uVar10,uVar11);
              dVar17 = (double)(float)uVar4;
            }
            else {
              func_0x00010006c090(0,0xc000000000000000);
              dVar17 = 0.0;
            }
          }
          uStack_1a28 = uStack_1910;
          uStack_1a30 = uStack_1918;
          uStack_1a18 = (undefined7)uStack_1900;
          uStack_1a11 = (undefined1)((ulong)uStack_1900 >> 0x38);
          uStack_1a20 = uStack_1908;
          uStack_1a10 = uStack_18f8;
          uStack_1a68 = uStack_1950;
          uStack_1a70 = uStack_1958;
          uStack_1a58 = uStack_1940;
          uStack_1a60 = uStack_1948;
          uStack_1a48 = uStack_1930;
          uStack_1a50 = uStack_1938;
          uStack_1a38 = uStack_1920;
          uStack_1a40 = uStack_1928;
          uStack_1a88 = uStack_1970;
          uStack_1a90 = uStack_1978;
          uStack_1a78 = uStack_1960;
          uStack_1a80 = uStack_1968;
          FUN_10155b77c(&uStack_1a90);
          uStack_1848 = uStack_1a28;
          uStack_1850 = uStack_1a30;
          uStack_1838 = uStack_1a18;
          uStack_1840 = uStack_1a20;
          uStack_1831 = CONCAT13(uStack_1a0e,CONCAT21(uStack_1a10,uStack_1a11));
          uStack_1888 = uStack_1a68;
          uStack_1890 = uStack_1a70;
          uStack_1878 = uStack_1a58;
          uStack_1880 = uStack_1a60;
          uStack_1868 = uStack_1a48;
          uStack_1870 = uStack_1a50;
          uStack_1858 = uStack_1a38;
          uStack_1860 = uStack_1a40;
          uStack_18a8 = uStack_1a88;
          uStack_18b0 = uStack_1a90;
          uStack_1898 = uStack_1a78;
          uStack_18a0 = uStack_1a80;
          puVar7 = puVar9;
          func_0x000107c61558();
          puVar8 = puVar9;
          if (((ulong)puVar7 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            func_0x000101540a44(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar1 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            func_0x000101540a44(puVar9,uVar1 + 1,1,puVar8);
          }
          uVar11 = uVar13 + 1;
          *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
          *(double *)(puVar9 + uVar1 * 0x98 + 0x20) = dVar16;
          *(double *)(puVar9 + uVar1 * 0x98 + 0x28) = dVar17;
          *(ulong *)(puVar9 + uVar1 * 0x98 + 0x38) = uStack_18a8;
          *(undefined8 *)(puVar9 + uVar1 * 0x98 + 0x30) = uStack_18b0;
          *(ulong *)(puVar9 + uVar1 * 0x98 + 0x68) = uStack_1878;
          *(undefined8 *)(puVar9 + uVar1 * 0x98 + 0x60) = uStack_1880;
          *(undefined8 *)(puVar9 + uVar1 * 0x98 + 0x78) = uStack_1868;
          *(undefined8 *)(puVar9 + uVar1 * 0x98 + 0x70) = uStack_1870;
          *(undefined8 *)(puVar9 + uVar1 * 0x98 + 0x48) = uStack_1898;
          *(undefined8 *)(puVar9 + uVar1 * 0x98 + 0x40) = uStack_18a0;
          *(undefined8 *)(puVar9 + uVar1 * 0x98 + 0x58) = uStack_1888;
          *(ulong *)(puVar9 + uVar1 * 0x98 + 0x50) = uStack_1890;
          *(undefined4 *)(puVar9 + uVar1 * 0x98 + 0xaf) = uStack_1831;
          *(undefined8 *)(puVar9 + uVar1 * 0x98 + 0x98) = uStack_1848;
          *(undefined8 *)(puVar9 + uVar1 * 0x98 + 0x90) = uStack_1850;
          *(ulong *)(puVar9 + uVar1 * 0x98 + 0xa8) = CONCAT17((undefined1)uStack_1831,uStack_1838);
          *(undefined8 *)(puVar9 + uVar1 * 0x98 + 0xa0) = uStack_1840;
          *(undefined8 *)(puVar9 + uVar1 * 0x98 + 0x88) = uStack_1858;
          *(undefined8 *)(puVar9 + uVar1 * 0x98 + 0x80) = uStack_1860;
        } while (uVar15 - 1 != uVar13);
      }
LAB_10155aff8:
      func_0x000107c6142c(lVar12);
      uStack_1a28 = uStack_790;
      uStack_1a30 = uStack_798;
      uStack_1a18 = (undefined7)uStack_780;
      uStack_1a11 = (undefined1)((ulong)uStack_780 >> 0x38);
      uStack_1a20 = uStack_788;
      uStack_1a10 = uStack_778;
      uStack_1a68 = uStack_7d0;
      uStack_1a70 = uStack_7d8;
      uStack_1a58 = uStack_7c0;
      uStack_1a60 = uStack_7c8;
      uStack_1a48 = uStack_7b0;
      uStack_1a50 = uStack_7b8;
      uStack_1a38 = uStack_7a0;
      uStack_1a40 = uStack_7a8;
      uStack_1a88 = uStack_7f0;
      uStack_1a90 = uStack_7f8;
      uStack_1a78 = uStack_7e0;
      uStack_1a80 = uStack_7e8;
      puStack_1a08 = puVar9;
      func_0x00010155b784(&uStack_1a90);
      uStack_1848 = uStack_1a28;
      uStack_1850 = uStack_1a30;
      uStack_1838 = uStack_1a18;
      uStack_1840 = uStack_1a20;
      puStack_1828 = puStack_1a08;
      uStack_1831 = CONCAT31(CONCAT12(uStack_1a0e,uStack_1a10),uStack_1a11);
      uStack_182d = uStack_1a0d;
      uStack_1888 = uStack_1a68;
      uStack_1890 = uStack_1a70;
      uStack_1878 = uStack_1a58;
      uStack_1880 = uStack_1a60;
      uStack_1868 = uStack_1a48;
      uStack_1870 = uStack_1a50;
      uStack_1858 = uStack_1a38;
      uStack_1860 = uStack_1a40;
      uStack_18a8 = uStack_1a88;
      uStack_18b0 = uStack_1a90;
      uStack_1898 = uStack_1a78;
      uStack_18a0 = uStack_1a80;
      goto LAB_10155b05c;
    }
  }
  func_0x00010155b670(&uStack_18b0);
LAB_10155b05c:
  extraout_x8[0xd] = uStack_1848;
  extraout_x8[0xc] = uStack_1850;
  extraout_x8[0xf] = CONCAT17((undefined1)uStack_1831,uStack_1838);
  extraout_x8[0xe] = uStack_1840;
  extraout_x8[0x11] = puStack_1828;
  extraout_x8[0x10] = CONCAT53(uStack_182d,uStack_1831._1_3_);
  extraout_x8[5] = uStack_1888;
  extraout_x8[4] = uStack_1890;
  extraout_x8[7] = uStack_1878;
  extraout_x8[6] = uStack_1880;
  extraout_x8[9] = uStack_1868;
  extraout_x8[8] = uStack_1870;
  extraout_x8[0xb] = uStack_1858;
  extraout_x8[10] = uStack_1860;
  extraout_x8[1] = uStack_18a8;
  *extraout_x8 = uStack_18b0;
  extraout_x8[3] = uStack_1898;
  extraout_x8[2] = uStack_18a0;
  return;
}



/* Entry: 10155b0b0; end: 10155b243;  */

void FUN_10155b0b0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong auStack_80 [6];
  undefined8 uStack_50;
  ulong uStack_48;
  
  uVar3 = param_1;
  func_0x00010403f564();
  if (uVar3 != 2) {
    if (uVar3 == 1) {
      func_0x00010403f5a4();
      func_0x00010403f5e4();
      if ((long)uVar3 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10155b21c);
        (*pcVar2)();
      }
      if (0x7fffffff < (long)uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10155b220);
        (*pcVar2)();
      }
      func_0x00010403f624();
      func_0x00010403f664();
      func_0x00010403f6a4();
    }
    else {
      if (uVar3 != 0) {
        auStack_80[0] = uVar3;
        func_0x000107c60614(&UNK_110739d60,auStack_80,&UNK_110739d60,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10155b244);
        (*pcVar2)();
      }
      uVar3 = param_1;
      FUN_1016088b0(param_1,param_2,param_3);
      if ((uVar3 & 1) != 0) {
        FUN_1016087b8(auStack_80,param_1,param_2,param_3);
        FUN_101626b10();
        if ((param_1 & 1) != 0) {
          uVar1 = 0;
          if (uStack_48 >> 0x3c < 0xf) {
            uVar1 = uStack_50;
          }
          uVar3 = 0xc000000000000000;
          if (uStack_48 >> 0x3c < 0xf) {
            uVar3 = uStack_48;
          }
          FUN_100cb4fe0();
          func_0x00010006c090(uVar1,uVar3);
        }
        func_0x00010155b608(auStack_80);
      }
    }
  }
  return;
}



/* Entry: 10155b244; end: 10155b25f;  */

int FUN_10155b244(int *param_1)

{
  if ((char)param_1[0x54] != '\0') {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10155b260; end: 10155b32f;  */

undefined8 FUN_10155b260(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db3ee8;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10155b330; end: 10155b33b;  */

ulong FUN_10155b330(long param_1)

{
  return *(ulong *)(param_1 + 0xe0) >> 0x3c & 3;
}



/* Entry: 10155b33c; end: 10155b3af;  */

undefined8 FUN_10155b33c(undefined8 param_1)

{
  (*(code *)(undefined *)0x10162a418)();
  return param_1;
}



/* Entry: 10155b3b0; end: 10155b3ef;  */

void FUN_10155b3b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae0fb0;
  func_0x000107c61520(&DAT_10dae0fb0,&UNK_110551238);
  puRam0000000112db4008 = puVar1;
  return;
}



/* Entry: 10155b3f0; end: 10155b423;  */

undefined8 FUN_10155b3f0(undefined8 param_1)

{
  (*(code *)&DAT_102800d74)();
  return param_1;
}



/* Entry: 10155b424; end: 10155b463;  */

void FUN_10155b424(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96ec78;
  func_0x000107c61520(&DAT_10d96ec78,&UNK_1103ea3c0);
  puRam0000000112db4010 = puVar1;
  return;
}



/* Entry: 10155b464; end: 10155b4cb;  */

undefined8 FUN_10155b464(undefined8 param_1)

{
  (*(code *)(undefined *)0x1016284c0)();
  return param_1;
}



/* Entry: 10155b4cc; end: 10155b4e7;  */

void FUN_10155b4cc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_41,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_10155b4e8();
  func_0x000107c613fc();
  uVar2 = 0;
  func_0x00010155bd84();
  func_0x000107c613fc();
  *(undefined1 *)(lVar1 + 0x18) = uStack_41;
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  *(undefined8 *)(lVar1 + 0x30) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = uStack_58;
  *(undefined8 *)(lVar1 + 0x10) = uStack_60;
  *param_1 = lVar1;
  return;
}



/* Entry: 10155b4e8; end: 10155b507;  */

void FUN_10155b4e8(void)

{
  func_0x000107c61168(&PTR_PTR_112db4060);
  return;
}



/* Entry: 10155b508; end: 10155b543;  */

void FUN_10155b508(undefined8 *param_1)

{
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x2000000;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0x12f) = 0;
  return;
}



/* Entry: 10155b544; end: 10155b577;  */

undefined8 FUN_10155b544(undefined8 param_1)

{
  (*(code *)&DAT_103673620)();
  return param_1;
}



/* Entry: 10155b578; end: 10155b59b;  */

void FUN_10155b578(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 0x82) = 1;
  return;
}



/* Entry: 10155b59c; end: 10155b5cf;  */

undefined8 FUN_10155b59c(undefined8 param_1)

{
  (*(code *)(undefined *)0x10162bce4)();
  return param_1;
}



/* Entry: 10155b5d0; end: 10155b5d3;  */

void FUN_10155b5d0(void)

{
  return;
}



/* Entry: 10155b5d4; end: 10155b66f;  */

undefined8 FUN_10155b5d4(undefined8 param_1)

{
  FUN_101617d70();
  return param_1;
}



/* Entry: 10155b670; end: 10155b6a3;  */

void FUN_10155b670(undefined8 *param_1)

{
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 10155b6a4; end: 10155b77b;  */

undefined8 FUN_10155b6a4(undefined8 param_1)

{
  (*(code *)&DAT_10366f370)();
  return param_1;
}



/* Entry: 10155b77c; end: 10155b787;  */

void FUN_10155b77c(long param_1)

{
  *(undefined1 *)(param_1 + 0x82) = 0;
  return;
}



/* Entry: 10155b788; end: 10155b83f;  */

undefined8 FUN_10155b788(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10366f494)(param_2,param_1);
  return param_2;
}



/* Entry: 10155b840; end: 10155b893;  */

/* WARNING: Possible PIC construction at 0x00010155b874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010155b878) */
/* WARNING: Removing unreachable block (ram,0x000100cb4fe0) */
/* WARNING: Removing unreachable block (ram,0x000100cb4ff0) */
/* WARNING: Removing unreachable block (ram,0x000100cb4fec) */

void FUN_10155b840(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c6157c(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_4 & 0x3fffffffffffffff);
  return;
}


