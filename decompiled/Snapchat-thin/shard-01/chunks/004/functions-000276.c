/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100fd2710; end: 100fd273f;  */

void FUN_100fd2710(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a6130;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 100fd2740; end: 100fd2747;  */

void FUN_100fd2740(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100fd2748; end: 100fd27e7;  */

void FUN_100fd2748(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100fd27e8; end: 100fd27f3;  */

void FUN_100fd27e8(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100fd27f4; end: 100fd2a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd27f4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = 0;
  lStack_78 = param_1;
  func_0x0001038e5950();
  lVar10 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c613fc();
  lVar2 = _DAT_11380bc08;
  puVar3 = &UNK_110373560;
  lStack_68 = unaff_x20;
  func_0x000107c613fc(&UNK_110373560,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  func_0x0001000285a8(0x112d51f90,&UNK_10d918e10);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar4 = FUN_100fd2a50;
  uStack_70 = param_4;
  func_0x0001000bdd8c(FUN_100fd2a50,puVar3);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar5 = *(undefined8 *)(param_2 + _DAT_113083868);
  func_0x0001000bda74();
  lVar6 = 0;
  func_0x000100fcd590();
  func_0x000107c613fc();
  lVar1 = lStack_78;
  *(undefined8 *)(lVar6 + 0x10) = uVar5;
  FUN_100fd1c50(lStack_78 + lVar2,auStack_80 + -(lVar11 + 0xfU & 0xfffffffffffffff0));
  uVar8 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = uVar8 + 0x30 & (uVar8 ^ 0xffffffffffffffff);
  puVar3 = &UNK_110373588;
  func_0x000107c613fc(&UNK_110373588,uVar9 + lVar11,uVar8 | 7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(long *)(puVar3 + 0x18) = param_2;
  *(code **)(puVar3 + 0x20) = pcVar4;
  *(long *)(puVar3 + 0x28) = lVar6;
  func_0x000100fd1c94(auStack_80 + -(lVar11 + 0xfU & 0xfffffffffffffff0),puVar3 + uVar9);
  func_0x0001000285a8(0x112d51f98,&UNK_10d918e20);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(lVar6);
  uVar5 = 0x100fd2a58;
  func_0x0001000bdd8c(0x100fd2a58,puVar3);
  uVar7 = 0;
  func_0x0001038e4018(0);
  func_0x000107c610f8();
  func_0x0001038e3eac(uVar5,uVar7);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uStack_70);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(lVar6);
  *(undefined8 *)(lStack_68 + 0x10) = uVar5;
  return;
}



/* Entry: 100fd2a50; end: 100fd2a5b;  */

void FUN_100fd2a50(long *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4cd00();
  func_0x000107c61180();
  puVar1 = &UNK_1103734d8;
  func_0x000107c613fc(&UNK_1103734d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x0001000285a8(0x112d52090,&UNK_10d918e60);
  func_0x000107c613fc();
  pcVar2 = FUN_100fd215c;
  func_0x0001000bdd8c(FUN_100fd215c,puVar1);
  lVar3 = 0;
  FUN_100fcd2ec();
  func_0x000107c613fc();
  func_0x000107c61474();
  *(code **)(lVar3 + 0x70) = pcVar2;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *param_1 = lVar3;
  return;
}



/* Entry: 100fd2a5c; end: 100fd2b13;  */

void FUN_100fd2a5c(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  
  lVar3 = 0;
  func_0x0001038e5950();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = unaff_x20 + (uVar5 + 0x30 & (uVar5 ^ 0xffffffffffffffff));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 8));
  iVar2 = *(int *)(lVar3 + 0x14);
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar1 + iVar2,lVar4);
  func_0x000107c6142c(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x1c) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100fd2b14; end: 100fd2b57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd2b14(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x20;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar10 = 0;
  func_0x0001038e5950();
  uVar11 = (ulong)*(byte *)(*(long *)(lVar10 + -8) + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000285a8(0x112d52080,&UNK_10d918ef0);
  func_0x000107c613fc();
  pcVar4 = FUN_100fd212c;
  func_0x0001000bdd8c(FUN_100fd212c,0);
  func_0x0001000285a8(0x112d52088,&UNK_10da14a00);
  func_0x000107c4ad4c();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar7 = *(undefined8 *)(lVar10 + _DAT_113083868);
  func_0x0001000bda74();
  lVar8 = 0;
  FUN_100fcd6b0();
  func_0x000107c613fc();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112d51e60);
  puVar1[1] = 1;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112d51e68);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  lVar10 = _DAT_112d51e70;
  uStack_61 = 0;
  uVar5 = 0x112d382e0;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  puVar9 = &uStack_61;
  func_0x00010006c248();
  *(undefined1 **)(lVar8 + lVar10) = puVar9;
  lVar10 = _DAT_112d51e78;
  uStack_62 = 0;
  func_0x000107c613fc(uVar5,0x19,7);
  puVar9 = &uStack_62;
  func_0x00010006c248();
  *(undefined1 **)(lVar8 + lVar10) = puVar9;
  lVar10 = _DAT_112d51e80;
  uStack_63 = 0;
  func_0x000107c613fc(uVar5,0x19,7);
  puVar9 = &uStack_63;
  func_0x00010006c248();
  *(undefined1 **)(lVar8 + lVar10) = puVar9;
  *(code **)(lVar8 + 0x10) = pcVar4;
  *(undefined8 *)(lVar8 + 0x18) = uVar6;
  *(undefined8 *)(lVar8 + 0x20) = uVar7;
  *(undefined8 *)(lVar8 + 0x28) = uVar2;
  *(undefined8 *)(lVar8 + 0x30) = uVar3;
  *(undefined ***)(lVar8 + 0x38) = &PTR_DAT_110373380;
  FUN_100fd1c50(unaff_x20 + (uVar11 + 0x30 & (uVar11 ^ 0xffffffffffffffff)),lVar8 + _DAT_112d51e58);
  *param_1 = lVar8;
  param_1[1] = (long)&PTR_DAT_110373390;
  func_0x000107c6157c(uVar2);
  return;
}



/* Entry: 100fd2b58; end: 100fd2b5f;  */

void FUN_100fd2b58(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100fd2b60; end: 100fd2bff;  */

void FUN_100fd2b60(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100fd2c00; end: 100fd2c0b;  */

void FUN_100fd2c00(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100fd2c0c; end: 100fd2c17; -[SCQuickCutLoggingServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd2c0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d522f0;
  func_0x000107c61428(param_1 + _DAT_112d522f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd2c18; end: 100fd2c23; -[SCQuickCutLoggingServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd2c18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d522f0;
  func_0x000107c61428(param_1 + _DAT_112d522f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd2c24; end: 100fd2c2f; -[SCQuickCutLoggingServiceProvider userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd2c24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d522f8;
  func_0x000107c61428(param_1 + _DAT_112d522f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd2c30; end: 100fd2c3b; -[SCQuickCutLoggingServiceProvider setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd2c30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d522f8;
  func_0x000107c61428(param_1 + _DAT_112d522f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd2c3c; end: 100fd2c47; -[SCQuickCutLoggingServiceProvider memoriesLegacyLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd2c3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d52300;
  func_0x000107c61428(param_1 + _DAT_112d52300,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd2c48; end: 100fd2c53; -[SCQuickCutLoggingServiceProvider setMemoriesLegacyLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd2c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d52300;
  func_0x000107c61428(param_1 + _DAT_112d52300,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd2c54; end: 100fd2c5f; -[SCQuickCutLoggingServiceProvider memoryUsageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd2c54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d52308;
  func_0x000107c61428(param_1 + _DAT_112d52308,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd2c60; end: 100fd2ca3;  */

void FUN_100fd2c60(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd2ca4; end: 100fd2caf; -[SCQuickCutLoggingServiceProvider setMemoryUsageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd2ca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d52308;
  func_0x000107c61428(param_1 + _DAT_112d52308,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd2cb0; end: 100fd2d03;  */

void FUN_100fd2cb0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd2d04; end: 100fd3027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd2d04(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x0001038e5950();
  lVar11 = *(long *)(lVar1 + -8);
  lVar13 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5d900();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4cbb0();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar8 = unaff_x20;
        func_0x000107c4cd18();
        func_0x000107c61180();
        if (lVar8 != 0) {
          lVar4 = 0;
          FUN_100fd1dd8();
          func_0x000107c613fc();
          lStack_78 = _DAT_11380bbc8;
          puVar5 = &UNK_1103735c8;
          lStack_68 = lVar4;
          func_0x000107c613fc(&UNK_1103735c8,0x18,7);
          *(long *)(puVar5 + 0x10) = lVar8;
          func_0x0001000285a8(0x112d51f90,&UNK_10d918e10);
          func_0x000107c613fc();
          func_0x000107c61174();
          pcVar6 = FUN_100fd3028;
          lStack_70 = lVar8;
          func_0x0001000bdd8c(FUN_100fd3028,puVar5);
          func_0x0001000285a8(0x112d39420,&UNK_10d979900);
          uVar7 = *(undefined8 *)(lVar2 + _DAT_113083868);
          func_0x0001000bda74();
          lVar8 = 0;
          func_0x000100fcd590();
          func_0x000107c613fc();
          *(undefined8 *)(lVar8 + 0x10) = uVar7;
          FUN_100fd1c50(lVar1 + lStack_78,auStack_80 + -(lVar13 + 0xfU & 0xfffffffffffffff0));
          uVar10 = (ulong)*(byte *)(lVar11 + 0x50);
          uVar12 = uVar10 + 0x30 & (uVar10 ^ 0xffffffffffffffff);
          puVar5 = &UNK_1103735f0;
          func_0x000107c613fc(&UNK_1103735f0,uVar12 + lVar13,uVar10 | 7);
          *(long *)(puVar5 + 0x10) = lVar3;
          *(long *)(puVar5 + 0x18) = lVar2;
          *(code **)(puVar5 + 0x20) = pcVar6;
          *(long *)(puVar5 + 0x28) = lVar8;
          func_0x000100fd1c94(auStack_80 + -(lVar13 + 0xfU & 0xfffffffffffffff0),puVar5 + uVar12);
          func_0x0001000285a8(0x112d51f98,&UNK_10d918e20);
          func_0x000107c613fc();
          func_0x000107c61174(lVar3);
          func_0x000107c61174(lVar2);
          func_0x000107c6157c(pcVar6);
          func_0x000107c6157c(lVar8);
          pcVar9 = FUN_100fd3030;
          func_0x0001000bdd8c(FUN_100fd3030,puVar5);
          uVar7 = 0;
          func_0x0001038e4018(0);
          func_0x000107c610f8();
          func_0x0001038e3eac(pcVar9,uVar7);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lStack_70);
          func_0x000107c61574(pcVar6);
          func_0x000107c61574(lVar8);
          lVar1 = lStack_68;
          *(code **)(lStack_68 + 0x10) = pcVar9;
          uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d52310);
          *(long *)(unaff_x20 + _DAT_112d52310) = lStack_68;
          func_0x000107c6157c(lStack_68);
          func_0x000107c61574(uVar7);
          func_0x000107c61174(*(undefined8 *)(lVar1 + 0x10));
          func_0x000107c61574(lVar1);
          return;
        }
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        lVar1 = lVar3;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100fd3028; end: 100fd302f;  */

void FUN_100fd3028(long *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4cd00();
  func_0x000107c61180();
  puVar1 = &UNK_1103734d8;
  func_0x000107c613fc(&UNK_1103734d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x0001000285a8(0x112d52090,&UNK_10d918e60);
  func_0x000107c613fc();
  pcVar2 = FUN_100fd215c;
  func_0x0001000bdd8c(FUN_100fd215c,puVar1);
  lVar3 = 0;
  FUN_100fcd2ec();
  func_0x000107c613fc();
  func_0x000107c61474();
  *(code **)(lVar3 + 0x70) = pcVar2;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *param_1 = lVar3;
  return;
}



/* Entry: 100fd3030; end: 100fd3073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd3030(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x20;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar10 = 0;
  func_0x0001038e5950();
  uVar11 = (ulong)*(byte *)(*(long *)(lVar10 + -8) + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000285a8(0x112d52080,&UNK_10d918ef0);
  func_0x000107c613fc();
  pcVar4 = FUN_100fd212c;
  func_0x0001000bdd8c(FUN_100fd212c,0);
  func_0x0001000285a8(0x112d52088,&UNK_10da14a00);
  func_0x000107c4ad4c();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar7 = *(undefined8 *)(lVar10 + _DAT_113083868);
  func_0x0001000bda74();
  lVar8 = 0;
  FUN_100fcd6b0();
  func_0x000107c613fc();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112d51e60);
  puVar1[1] = 1;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112d51e68);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  lVar10 = _DAT_112d51e70;
  uStack_61 = 0;
  uVar5 = 0x112d382e0;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  puVar9 = &uStack_61;
  func_0x00010006c248();
  *(undefined1 **)(lVar8 + lVar10) = puVar9;
  lVar10 = _DAT_112d51e78;
  uStack_62 = 0;
  func_0x000107c613fc(uVar5,0x19,7);
  puVar9 = &uStack_62;
  func_0x00010006c248();
  *(undefined1 **)(lVar8 + lVar10) = puVar9;
  lVar10 = _DAT_112d51e80;
  uStack_63 = 0;
  func_0x000107c613fc(uVar5,0x19,7);
  puVar9 = &uStack_63;
  func_0x00010006c248();
  *(undefined1 **)(lVar8 + lVar10) = puVar9;
  *(code **)(lVar8 + 0x10) = pcVar4;
  *(undefined8 *)(lVar8 + 0x18) = uVar6;
  *(undefined8 *)(lVar8 + 0x20) = uVar7;
  *(undefined8 *)(lVar8 + 0x28) = uVar2;
  *(undefined8 *)(lVar8 + 0x30) = uVar3;
  *(undefined ***)(lVar8 + 0x38) = &PTR_DAT_110373380;
  FUN_100fd1c50(unaff_x20 + (uVar11 + 0x30 & (uVar11 ^ 0xffffffffffffffff)),lVar8 + _DAT_112d51e58);
  *param_1 = lVar8;
  param_1[1] = (long)&PTR_DAT_110373390;
  func_0x000107c6157c(uVar2);
  return;
}



/* Entry: 100fd3074; end: 100fd30ff; -[SCQuickCutLoggingServiceProvider provide] */

void FUN_100fd3074(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_100fd2d04();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "QuickCutLoggingServicesImpl/SCQuickCutLoggingServiceProvider.swift",0x42,2,
                      0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fd3100);
  (*pcVar1)();
}



/* Entry: 100fd3100; end: 100fd3133; -[SCQuickCutLoggingServiceProvider __safeProvide] */

void FUN_100fd3100(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100fd2d04();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100fd3134; end: 100fd3177; -[SCQuickCutLoggingServiceProvider end] */

void FUN_100fd3134(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd3178; end: 100fd33e3;  */

void FUN_100fd3178(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10ef610)) ||
       (func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a2fc();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10e18f0)) ||
         (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1e710,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56568();
      }
      else {
        if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e18d0)) {
          uVar2 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef1e730,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "QuickCutLoggingServicesImpl/SCQuickCutLoggingServiceProvider.swift"
                                ,0x42,2,0x3c,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fd33e4);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56604();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100fd33e4; end: 100fd348f; -[SCQuickCutLoggingServiceProvider setValue:forIvarName:] */

void FUN_100fd33e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100fd3178(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100fd3490; end: 100fd352b; -[SCQuickCutLoggingServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd3490(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d522f0,0);
  func_0x000107c61614(param_1 + _DAT_112d522f8,0);
  func_0x000107c61614(param_1 + _DAT_112d52300,0);
  func_0x000107c61614(param_1 + _DAT_112d52308,0);
  *(undefined8 *)(param_1 + _DAT_112d52310) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100fd352c; end: 100fd355f;  */

void FUN_100fd352c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100fd3560; end: 100fd35c7; -[SCQuickCutLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd3560(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d522f0);
  func_0x000107c61610(param_1 + _DAT_112d522f8);
  func_0x000107c61610(param_1 + _DAT_112d52300);
  func_0x000107c61610(param_1 + _DAT_112d52308);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d52310));
  return;
}



/* Entry: 100fd35c8; end: 100fd35e7;  */

void FUN_100fd35c8(void)

{
  func_0x000107c61168(&PTR_PTR_112d52358);
  return;
}



/* Entry: 100fd35e8; end: 100fd362f; -[SCQuickCutSelectionConfigLoggingServiceProvider memoriesLegacyLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd35e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d523d0;
  func_0x000107c61428(param_1 + _DAT_112d523d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd3630; end: 100fd3687; -[SCQuickCutSelectionConfigLoggingServiceProvider setMemoriesLegacyLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd3630(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d523d0;
  func_0x000107c61428(param_1 + _DAT_112d523d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd3688; end: 100fd392b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100fd3688(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c4cbb0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = 0;
    func_0x000100fd276c();
    func_0x000107c613fc();
    puVar4 = &UNK_110373618;
    func_0x000107c613fc(&UNK_110373618,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    func_0x0001000285a8(0x112d52140,&UNK_10d918eb0);
    func_0x000107c613fc();
    func_0x000107c61174(lVar2);
    pcVar1 = FUN_100fd392c;
    func_0x0001000bdd8c(FUN_100fd392c,puVar4);
    uVar5 = 0;
    func_0x0001038e427c(0);
    func_0x000107c610f8();
    func_0x0001038e4110(pcVar1,uVar5);
    func_0x000107c61170(lVar2);
    *(code **)(lVar3 + 0x10) = pcVar1;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d523d8);
    *(long *)(unaff_x20 + _DAT_112d523d8) = lVar3;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(uVar5);
    uVar5 = *(undefined8 *)(lVar3 + 0x10);
    func_0x000107c61174(uVar5);
    func_0x000107c61574(lVar3);
    return uVar5;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "QuickCutLoggingServicesImpl/SCQuickCutSelectionConfigLoggingServiceProvider.swift"
                      ,0x51,2,0x17,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fd3800);
  (*pcVar1)();
}



/* Entry: 100fd392c; end: 100fd3933;  */

void FUN_100fd392c(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112d52080,&UNK_10d918ef0);
  func_0x000107c613fc();
  pcVar1 = FUN_100fd2710;
  func_0x0001000bdd8c(FUN_100fd2710,0);
  func_0x0001000285a8(0x112d52088,&UNK_10da14a00);
  func_0x000107c4ad4c();
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  lVar3 = 0;
  func_0x000100fd2190();
  func_0x000107c613fc();
  *(code **)(lVar3 + 0x10) = pcVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  *param_1 = lVar3;
  param_1[1] = (long)&PTR_DAT_1103734f0;
  return;
}



/* Entry: 100fd3934; end: 100fd3967; -[SCQuickCutSelectionConfigLoggingServiceProvider provide] */

void FUN_100fd3934(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100fd3688();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100fd3968; end: 100fd399b; -[SCQuickCutSelectionConfigLoggingServiceProvider __safeProvide] */

void FUN_100fd3968(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100fd3800();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100fd399c; end: 100fd39df; -[SCQuickCutSelectionConfigLoggingServiceProvider end] */

void FUN_100fd399c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd39e0; end: 100fd3b0b;  */

void FUN_100fd39e0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10e18f0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd00000000000001c,0x800000010ef1e710,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      func_0x000107c602fc(0x15);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5fb78(param_2,param_3);
      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                          "QuickCutLoggingServicesImpl/SCQuickCutSelectionConfigLoggingServiceProvider.swift"
                          ,0x51,2,0x2a,0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fd3b0c);
      (*pcVar1)();
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c56568();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100fd3b0c; end: 100fd3bb7; -[SCQuickCutSelectionConfigLoggingServiceProvider setValue:forIvarName:] */

void FUN_100fd3b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100fd39e0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100fd3bb8; end: 100fd3c17; -[SCQuickCutSelectionConfigLoggingServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd3bb8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d523d0,0);
  *(undefined8 *)(param_1 + _DAT_112d523d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100fd3c18; end: 100fd3c4b;  */

void FUN_100fd3c18(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100fd3c4c; end: 100fd3c83; -[SCQuickCutSelectionConfigLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd3c4c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d523d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d523d8));
  return;
}



/* Entry: 100fd3c84; end: 100fd3ca3;  */

void FUN_100fd3c84(void)

{
  func_0x000107c61168(&PTR_PTR_112d52420);
  return;
}



/* Entry: 100fd3ca4; end: 100fd3ca7;  */

void FUN_100fd3ca4(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112d52080,&UNK_10d918ef0);
  func_0x000107c613fc();
  pcVar1 = FUN_100fd2710;
  func_0x0001000bdd8c(FUN_100fd2710,0);
  func_0x0001000285a8(0x112d52088,&UNK_10da14a00);
  func_0x000107c4ad4c();
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x0001000bda74();
  func_0x000107c61170(uVar4);
  lVar3 = 0;
  func_0x000100fd2190();
  func_0x000107c613fc();
  *(code **)(lVar3 + 0x10) = pcVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  *param_1 = lVar3;
  param_1[1] = (long)&PTR_DAT_1103734f0;
  return;
}



/* Entry: 100fd3ca8; end: 100fd3cb3; -[SCSnapEditorQuickCutLoggingServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd3ca8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d52480;
  func_0x000107c61428(param_1 + _DAT_112d52480,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd3cb4; end: 100fd3cbf; -[SCSnapEditorQuickCutLoggingServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd3cb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d52480;
  func_0x000107c61428(param_1 + _DAT_112d52480,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd3cc0; end: 100fd3ccb; -[SCSnapEditorQuickCutLoggingServiceProvider userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd3cc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d52488;
  func_0x000107c61428(param_1 + _DAT_112d52488,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd3ccc; end: 100fd3cd7; -[SCSnapEditorQuickCutLoggingServiceProvider setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd3ccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d52488;
  func_0x000107c61428(param_1 + _DAT_112d52488,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd3cd8; end: 100fd3ce3; -[SCSnapEditorQuickCutLoggingServiceProvider memoriesLegacyLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd3cd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d52490;
  func_0x000107c61428(param_1 + _DAT_112d52490,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd3ce4; end: 100fd3cef; -[SCSnapEditorQuickCutLoggingServiceProvider setMemoriesLegacyLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd3ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d52490;
  func_0x000107c61428(param_1 + _DAT_112d52490,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd3cf0; end: 100fd3cfb; -[SCSnapEditorQuickCutLoggingServiceProvider memoryUsageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd3cf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d52498;
  func_0x000107c61428(param_1 + _DAT_112d52498,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd3cfc; end: 100fd3d3f;  */

void FUN_100fd3cfc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd3d40; end: 100fd3d4b; -[SCSnapEditorQuickCutLoggingServiceProvider setMemoryUsageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd3d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d52498;
  func_0x000107c61428(param_1 + _DAT_112d52498,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd3d4c; end: 100fd3d9f;  */

void FUN_100fd3d4c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd3da0; end: 100fd40c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd3da0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x0001038e5950();
  lVar11 = *(long *)(lVar1 + -8);
  lVar13 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5d900();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4cbb0();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar8 = unaff_x20;
        func_0x000107c4cd18();
        func_0x000107c61180();
        if (lVar8 != 0) {
          lVar4 = 0;
          func_0x000100fd2b84();
          func_0x000107c613fc();
          lStack_78 = _DAT_11380bc08;
          puVar5 = &UNK_110373668;
          lStack_68 = lVar4;
          func_0x000107c613fc(&UNK_110373668,0x18,7);
          *(long *)(puVar5 + 0x10) = lVar8;
          func_0x0001000285a8(0x112d51f90,&UNK_10d918e10);
          func_0x000107c613fc();
          func_0x000107c61174();
          pcVar6 = FUN_100fd40c4;
          lStack_70 = lVar8;
          func_0x0001000bdd8c(FUN_100fd40c4,puVar5);
          func_0x0001000285a8(0x112d39420,&UNK_10d979900);
          uVar7 = *(undefined8 *)(lVar2 + _DAT_113083868);
          func_0x0001000bda74();
          lVar8 = 0;
          func_0x000100fcd590();
          func_0x000107c613fc();
          *(undefined8 *)(lVar8 + 0x10) = uVar7;
          FUN_100fd1c50(lVar1 + lStack_78,auStack_80 + -(lVar13 + 0xfU & 0xfffffffffffffff0));
          uVar10 = (ulong)*(byte *)(lVar11 + 0x50);
          uVar12 = uVar10 + 0x30 & (uVar10 ^ 0xffffffffffffffff);
          puVar5 = &UNK_110373690;
          func_0x000107c613fc(&UNK_110373690,uVar12 + lVar13,uVar10 | 7);
          *(long *)(puVar5 + 0x10) = lVar3;
          *(long *)(puVar5 + 0x18) = lVar2;
          *(code **)(puVar5 + 0x20) = pcVar6;
          *(long *)(puVar5 + 0x28) = lVar8;
          func_0x000100fd1c94(auStack_80 + -(lVar13 + 0xfU & 0xfffffffffffffff0),puVar5 + uVar12);
          func_0x0001000285a8(0x112d51f98,&UNK_10d918e20);
          func_0x000107c613fc();
          func_0x000107c61174(lVar3);
          func_0x000107c61174(lVar2);
          func_0x000107c6157c(pcVar6);
          func_0x000107c6157c(lVar8);
          pcVar9 = FUN_100fd40cc;
          func_0x0001000bdd8c(FUN_100fd40cc,puVar5);
          uVar7 = 0;
          func_0x0001038e4018(0);
          func_0x000107c610f8();
          func_0x0001038e3eac(pcVar9,uVar7);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lStack_70);
          func_0x000107c61574(pcVar6);
          func_0x000107c61574(lVar8);
          lVar1 = lStack_68;
          *(code **)(lStack_68 + 0x10) = pcVar9;
          uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d524a0);
          *(long *)(unaff_x20 + _DAT_112d524a0) = lStack_68;
          func_0x000107c6157c(lStack_68);
          func_0x000107c61574(uVar7);
          func_0x000107c61174(*(undefined8 *)(lVar1 + 0x10));
          func_0x000107c61574(lVar1);
          return;
        }
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        lVar1 = lVar3;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100fd40c4; end: 100fd40cb;  */

void FUN_100fd40c4(long *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4cd00();
  func_0x000107c61180();
  puVar1 = &UNK_1103734d8;
  func_0x000107c613fc(&UNK_1103734d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x0001000285a8(0x112d52090,&UNK_10d918e60);
  func_0x000107c613fc();
  pcVar2 = FUN_100fd215c;
  func_0x0001000bdd8c(FUN_100fd215c,puVar1);
  lVar3 = 0;
  FUN_100fcd2ec();
  func_0x000107c613fc();
  func_0x000107c61474();
  *(code **)(lVar3 + 0x70) = pcVar2;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *param_1 = lVar3;
  return;
}



/* Entry: 100fd40cc; end: 100fd410f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd40cc(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x20;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar10 = 0;
  func_0x0001038e5950();
  uVar11 = (ulong)*(byte *)(*(long *)(lVar10 + -8) + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000285a8(0x112d52080,&UNK_10d918ef0);
  func_0x000107c613fc();
  pcVar4 = FUN_100fd212c;
  func_0x0001000bdd8c(FUN_100fd212c,0);
  func_0x0001000285a8(0x112d52088,&UNK_10da14a00);
  func_0x000107c4ad4c();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar7 = *(undefined8 *)(lVar10 + _DAT_113083868);
  func_0x0001000bda74();
  lVar8 = 0;
  FUN_100fcd6b0();
  func_0x000107c613fc();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112d51e60);
  puVar1[1] = 1;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112d51e68);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  lVar10 = _DAT_112d51e70;
  uStack_61 = 0;
  uVar5 = 0x112d382e0;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  puVar9 = &uStack_61;
  func_0x00010006c248();
  *(undefined1 **)(lVar8 + lVar10) = puVar9;
  lVar10 = _DAT_112d51e78;
  uStack_62 = 0;
  func_0x000107c613fc(uVar5,0x19,7);
  puVar9 = &uStack_62;
  func_0x00010006c248();
  *(undefined1 **)(lVar8 + lVar10) = puVar9;
  lVar10 = _DAT_112d51e80;
  uStack_63 = 0;
  func_0x000107c613fc(uVar5,0x19,7);
  puVar9 = &uStack_63;
  func_0x00010006c248();
  *(undefined1 **)(lVar8 + lVar10) = puVar9;
  *(code **)(lVar8 + 0x10) = pcVar4;
  *(undefined8 *)(lVar8 + 0x18) = uVar6;
  *(undefined8 *)(lVar8 + 0x20) = uVar7;
  *(undefined8 *)(lVar8 + 0x28) = uVar2;
  *(undefined8 *)(lVar8 + 0x30) = uVar3;
  *(undefined ***)(lVar8 + 0x38) = &PTR_DAT_110373380;
  FUN_100fd1c50(unaff_x20 + (uVar11 + 0x30 & (uVar11 ^ 0xffffffffffffffff)),lVar8 + _DAT_112d51e58);
  *param_1 = lVar8;
  param_1[1] = (long)&PTR_DAT_110373390;
  func_0x000107c6157c(uVar2);
  return;
}



/* Entry: 100fd4110; end: 100fd419b; -[SCSnapEditorQuickCutLoggingServiceProvider provide] */

void FUN_100fd4110(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_100fd3da0();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "QuickCutLoggingServicesImpl/SCSnapEditorQuickCutLoggingServiceProvider.swift"
                      ,0x4c,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fd419c);
  (*pcVar1)();
}



/* Entry: 100fd419c; end: 100fd41cf; -[SCSnapEditorQuickCutLoggingServiceProvider __safeProvide] */

void FUN_100fd419c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100fd3da0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100fd41d0; end: 100fd4213; -[SCSnapEditorQuickCutLoggingServiceProvider end] */

void FUN_100fd41d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd4214; end: 100fd447f;  */

void FUN_100fd4214(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10ef610)) ||
       (func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a2fc();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10e18f0)) ||
         (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1e710,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56568();
      }
      else {
        if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e18d0)) {
          uVar2 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef1e730,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "QuickCutLoggingServicesImpl/SCSnapEditorQuickCutLoggingServiceProvider.swift"
                                ,0x4c,2,0x37,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100fd4480);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56604();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100fd4480; end: 100fd452b; -[SCSnapEditorQuickCutLoggingServiceProvider setValue:forIvarName:] */

void FUN_100fd4480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100fd4214(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100fd452c; end: 100fd45c7; -[SCSnapEditorQuickCutLoggingServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd452c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d52480,0);
  func_0x000107c61614(param_1 + _DAT_112d52488,0);
  func_0x000107c61614(param_1 + _DAT_112d52490,0);
  func_0x000107c61614(param_1 + _DAT_112d52498,0);
  *(undefined8 *)(param_1 + _DAT_112d524a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100fd45c8; end: 100fd45fb;  */

void FUN_100fd45c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100fd45fc; end: 100fd4663; -[SCSnapEditorQuickCutLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd45fc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d52480);
  func_0x000107c61610(param_1 + _DAT_112d52488);
  func_0x000107c61610(param_1 + _DAT_112d52490);
  func_0x000107c61610(param_1 + _DAT_112d52498);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d524a0));
  return;
}



/* Entry: 100fd4664; end: 100fd4683;  */

void FUN_100fd4664(void)

{
  func_0x000107c61168(&PTR_PTR_112d524e8);
  return;
}



/* Entry: 100fd4684; end: 100fd46a3;  */

void FUN_100fd4684(void)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x148) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x150) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd46a4);
  return;
}



/* Entry: 100fd46a4; end: 100fd4713;  */

void FUN_100fd46a4(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  if (*(long *)(*(long *)(*(long *)(unaff_x22 + 0x148) + 0x88) + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100fd46dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x158) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fd4714;
  lVar2 = *(long *)(unaff_x22 + 0x148);
  plVar1[0xc] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd5e10,lVar2,0);
  return;
}



/* Entry: 100fd4714; end: 100fd4787;  */

void FUN_100fd4714(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x158));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100fd475c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x160) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd4788,*(undefined8 *)(lVar1 + 0x148),0);
  return;
}



/* Entry: 100fd4788; end: 100fd493b;  */

void FUN_100fd4788(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0x148);
  uVar3 = *(undefined8 *)(lVar9 + 0x88);
  *(undefined8 *)(lVar9 + 0x88) = *(undefined8 *)(unaff_x22 + 0x160);
  func_0x000107c6142c(uVar3);
  lVar9 = *(long *)(lVar9 + 0x88);
  if (*(ulong *)(lVar9 + 0x10) < 4) {
    func_0x000107c61434();
  }
  else {
    lVar4 = lVar9;
    func_0x000107c61434();
    func_0x000100fd6970();
    func_0x000107c6142c(lVar9);
    lVar9 = lVar4;
  }
  *(long *)(unaff_x22 + 0x168) = lVar9;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  puVar5 = &UNK_110373780;
  func_0x000107c613fc(&UNK_110373780,0x18,7);
  *(undefined **)(unaff_x22 + 0x170) = puVar5;
  *(undefined **)(puVar5 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = puVar5;
  func_0x000100fd702c();
  puVar7 = &UNK_1103737a8;
  func_0x000107c613fc(&UNK_1103737a8,0x18,7);
  *(undefined **)(unaff_x22 + 0x178) = puVar7;
  func_0x000107c61644(puVar7 + 0x10,uVar3);
  *(undefined **)(unaff_x22 + 0x120) = puVar7;
  *(long *)(unaff_x22 + 0x128) = lVar9;
  *(undefined **)(unaff_x22 + 0x130) = puVar5;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar1;
  iVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  if (iVar2 != 0) {
    func_0x0001000285a8(0x112d52688,&UNK_10d9190a8);
    plVar8 = (long *)(ulong)*(uint *)(
                                     PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lFTu_11034ffc0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x180) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_100fd493c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb96ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss21withThrowingTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_Scgyxs5Error_pGzYaKXEtYaKs8SendableRzr0_lF_11034ffb8
    )();
    return;
  }
  func_0x000107c614f0();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x188) = uVar3;
  *(undefined **)(unaff_x22 + 400) = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd49b0,uVar3,puVar6);
  return;
}



/* Entry: 100fd493c; end: 100fd49af;  */

void FUN_100fd493c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x180));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x178);
    func_0x000107c61574(*(undefined8 *)(lVar3 + 0x168));
    func_0x000107c61574(uVar2);
    uVar2 = *(undefined8 *)(lVar3 + 0x148);
    pcVar1 = FUN_100fd4ca0;
  }
  else {
    *(long *)(lVar3 + 0x1c0) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x148);
    pcVar1 = FUN_100fd4cd4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,0);
  return;
}



/* Entry: 100fd49b0; end: 100fd4a2f;  */

void FUN_100fd49b0(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  
  uVar1 = 0x112d52688;
  func_0x0001000285a8(0x112d52688,&UNK_10d9190a8);
  *(undefined8 *)(unaff_x22 + 0x198) = uVar1;
  func_0x000107c615ac(unaff_x22 + 0x10,uVar1);
  *(long *)(unaff_x22 + 0x140) = unaff_x22 + 0x10;
  plVar2 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1a0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fd4a30;
  lVar3 = *(long *)(unaff_x22 + 0x178);
  lVar6 = *(long *)(unaff_x22 + 0x168);
  lVar7 = *(long *)(unaff_x22 + 0x150);
  plVar2[0x14] = *(long *)(unaff_x22 + 0x170);
  plVar2[0x15] = lVar7;
  plVar2[0x12] = lVar3;
  plVar2[0x13] = lVar6;
  plVar2[0x11] = unaff_x22 + 0x140;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x16] = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x17] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd4d94,0,0);
  return;
}



/* Entry: 100fd4a30; end: 100fd4ad7;  */

void FUN_100fd4a30(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x1a8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1a0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)
              (FUN_100fd4b70,*(undefined8 *)(lVar2 + 0x188),*(undefined8 *)(lVar2 + 400));
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x1b0) = plVar1;
  func_0x0001000285a8(0x112d52690,&UNK_10d9190b0);
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_100fd4ad8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 100fd4ad8; end: 100fd4b1b;  */

void FUN_100fd4ad8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100fd4b1c,*(undefined8 *)(lVar1 + 0x188),*(undefined8 *)(lVar1 + 400));
  return;
}



/* Entry: 100fd4b1c; end: 100fd4b6f;  */

void FUN_100fd4b1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x168);
  func_0x000107c615a8(unaff_x22 + 0x10);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd4ca0,*(undefined8 *)(unaff_x22 + 0x148),0);
  return;
}



/* Entry: 100fd4b70; end: 100fd4c07;  */

void FUN_100fd4b70(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(uVar3,uVar4,uVar1,PTR___ss5ErrorWS_11034ee10);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1b8) = plVar2;
  func_0x0001000285a8(0x112d52690,&UNK_10d9190b0);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fd4c08;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 100fd4c08; end: 100fd4c4b;  */

void FUN_100fd4c08(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100fd4c4c,*(undefined8 *)(lVar1 + 0x188),*(undefined8 *)(lVar1 + 400));
  return;
}



/* Entry: 100fd4c4c; end: 100fd4c9f;  */

void FUN_100fd4c4c(void)

{
  long unaff_x22;
  
  func_0x000107c615a8(unaff_x22 + 0x10);
  func_0x000107c61654();
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x1a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd4cd4,*(undefined8 *)(unaff_x22 + 0x148),0);
  return;
}



/* Entry: 100fd4ca0; end: 100fd4cd3;  */

void FUN_100fd4ca0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x000100fd4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fd4cd4; end: 100fd4d1b;  */

void FUN_100fd4cd4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x168));
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fd4d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fd4d1c; end: 100fd4d93;  */

void FUN_100fd4d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd4d94,0,0);
  return;
}



/* Entry: 100fd4d94; end: 100fd50a7;  */

void FUN_100fd4d94(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  long unaff_x22;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar7 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x30,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0xc0) = lVar7;
  if (lVar7 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100fd4f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(lVar7 + 0x78);
  func_0x000107c6157c(uVar8);
  func_0x0001000d224c(unaff_x22 + 0x78);
  func_0x000107c61574(uVar8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 200) = uVar8;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (lVar7 != 0) {
    puVar4 = (undefined8 *)(unaff_x22 + 0x10);
    lVar2 = *(long *)(unaff_x22 + 0x98);
    lVar5 = 0;
    func_0x000107c5fd0c();
    lVar3 = *(long *)(lVar5 + -8);
    pcVar14 = *(code **)(lVar3 + 0x38);
    puVar15 = (undefined8 *)(lVar2 + 0x20);
    do {
      puVar11 = *(ulong **)(unaff_x22 + 0x88);
      uVar13 = *puVar15;
      uVar17 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
      (*pcVar14)(*(undefined8 *)(unaff_x22 + 0xb8),1,1,lVar5);
      puVar1 = &UNK_1103737d0;
      func_0x000107c613fc(&UNK_1103737d0,0x48,7);
      plVar6 = (long *)(puVar1 + 0x10);
      *plVar6 = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined8 *)(puVar1 + 0x28) = uVar10;
      *(undefined8 *)(puVar1 + 0x20) = uVar8;
      *(undefined8 *)(puVar1 + 0x30) = uVar13;
      *(undefined8 *)(puVar1 + 0x40) = uVar17;
      *(undefined8 *)(puVar1 + 0x38) = uVar16;
      uVar12 = *puVar11;
      func_0x000107c615f0(uVar8);
      func_0x000107c6157c(uVar16);
      uVar9 = uVar12;
      func_0x000107c615a4(uVar12,0);
      if ((uVar9 & 1) != 0) {
        uVar9 = *(ulong *)(unaff_x22 + 0xb0);
        func_0x0001000abe04(*(undefined8 *)(unaff_x22 + 0xb8),uVar9);
        (**(code **)(lVar3 + 0x30))(uVar9,1,lVar5);
        uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
        if ((int)uVar9 == 1) {
          func_0x0001000abe54(uVar8);
          uVar9 = 0x1100;
          lVar7 = *plVar6;
          if (lVar7 == 0) goto LAB_100fd4fc0;
LAB_100fd4f5c:
          lVar2 = *(long *)(puVar1 + 0x18);
          lVar5 = lVar7;
          func_0x000107c614f0();
          func_0x000107c615f0(lVar7);
          func_0x000107c5fca8();
          func_0x000107c615e8(lVar7);
        }
        else {
          func_0x000107c5fd08();
          (**(code **)(lVar3 + 8))(uVar8,lVar5);
          uVar9 = uVar9 & 0xff | 0x1100;
          lVar7 = *plVar6;
          if (lVar7 != 0) goto LAB_100fd4f5c;
LAB_100fd4fc0:
          lVar5 = 0;
          lVar2 = 0;
        }
        func_0x000107c6157c(puVar1);
        uVar8 = 0x112d52688;
        func_0x0001000285a8(0x112d52688,&UNK_10d9190a8);
        if (lVar2 == 0 && lVar5 == 0) {
          puVar4 = (undefined8 *)0x0;
        }
        else {
          *puVar4 = 0;
          *(undefined8 *)(unaff_x22 + 0x18) = 0;
          *(long *)(unaff_x22 + 0x20) = lVar5;
          *(long *)(unaff_x22 + 0x28) = lVar2;
        }
        uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
        *(undefined8 *)(unaff_x22 + 0x48) = 1;
        *(undefined8 **)(unaff_x22 + 0x50) = puVar4;
        *(ulong *)(unaff_x22 + 0x58) = uVar12;
        func_0x000107c615bc(uVar9,unaff_x22 + 0x48,uVar8,&UNK_10d9190c8,puVar1);
        func_0x000107c61574(puVar1);
        func_0x000107c61574(uVar9);
        func_0x0001000abe54(uVar10);
        break;
      }
      func_0x0001000abe54();
      func_0x000107c61574(puVar1);
      lVar7 = lVar7 + -1;
      puVar15 = puVar15 + 1;
    } while (lVar7 != 0);
  }
  plVar6 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100fd50a8;
                    /* WARNING: Could not recover jumptable at 0x000100fd50a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100fd55f0(0,0);
  return;
}



/* Entry: 100fd50a8; end: 100fd5103;  */

void FUN_100fd50a8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fd5104;
  }
  else {
    pcVar1 = FUN_100fd51e8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fd5104; end: 100fd51e7;  */

void FUN_100fd5104(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xa0);
  puVar3 = (undefined8 *)(lVar4 + 0x10);
  func_0x000107c61428(puVar3,unaff_x22 + 0x60,0,0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  if (*(long *)(*(long *)(lVar4 + 0x10) + 0x10) == 0) {
    func_0x000100fd6fec();
    func_0x000107c613f8(&UNK_110375e38,puVar3,0,0);
    *puVar3 = 0;
    *(undefined1 *)(puVar3 + 1) = 3;
    func_0x000107c61654();
    func_0x000107c615e8(uVar2);
    func_0x000107c61574(uVar1);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c615c0(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c615e8(uVar2);
    func_0x000107c61574(uVar1);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c615c0(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100fd51e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100fd51e8; end: 100fd5233;  */

void FUN_100fd51e8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fd5230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fd5234; end: 100fd5253;  */

void FUN_100fd5234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd5254,0,0);
  return;
}



/* Entry: 100fd5254; end: 100fd534f;  */

/* WARNING: Removing unreachable block (ram,0x000100fd5278) */

void FUN_100fd5254(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c5fd64();
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fd5350;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
  return;
}



/* Entry: 100fd5350; end: 100fd53e3;  */

void FUN_100fd5350(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long *unaff_x22;
  long lVar7;
  
  lVar6 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar6 + 0x38);
  lVar2 = *(long *)(lVar6 + 0x40);
  lVar7 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x58));
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(lVar6 + 0x60) = plVar4;
  *plVar4 = lVar7;
  plVar4[1] = (long)FUN_100fd53e4;
                    /* WARNING: Could not recover jumptable at 0x000100fd53e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(lVar6 + 0x48),uVar3,*(undefined8 *)(lVar6 + 0x40));
  return;
}



/* Entry: 100fd53e4; end: 100fd5443;  */

void FUN_100fd53e4(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x68) = param_1;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fd5444;
  }
  else {
    pcVar1 = FUN_100fd5534;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fd5444; end: 100fd5533;  */

void FUN_100fd5444(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0x21,0);
  uVar5 = *(ulong *)(lVar4 + 0x10);
  uVar2 = uVar5;
  func_0x000107c61558();
  *(ulong *)(lVar4 + 0x10) = uVar5;
  uVar3 = uVar5;
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)(unaff_x22 + 0x50);
    uVar3 = 0;
    FUN_100fd6740(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5,PTR__swift_bridgeObjectRelease_11034f258);
    *(ulong *)(lVar4 + 0x10) = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar5 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_100fd6740(uVar5,uVar2 + 1,1,uVar3,PTR__swift_bridgeObjectRelease_11034f258);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar4 = *(long *)(unaff_x22 + 0x50);
  *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
  *(undefined8 *)(uVar5 + uVar2 * 8 + 0x20) = uVar1;
  *(ulong *)(lVar4 + 0x10) = uVar5;
  func_0x000107c614a8(unaff_x22 + 0x10);
  **(undefined8 **)(unaff_x22 + 0x30) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x000100fd54d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fd5534; end: 100fd55ef;  */

void FUN_100fd5534(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c602fc(0x2d);
  func_0x000107c6142c(0xe000000000000000);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  puVar1 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar1);
  func_0x000107c614ac(uVar2);
  func_0x000107c6142c(0x800000010ef1e870);
  **(undefined8 **)(unaff_x22 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100fd55ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fd55f0; end: 100fd5657;  */

void FUN_100fd55f0(long param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(long *)(unaff_x22 + 0x48) = param_1;
  if (param_1 == 0) {
    param_1 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd5658,param_1);
  return;
}



/* Entry: 100fd5658; end: 100fd5783;  */

void FUN_100fd5658(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x22;
  
  uVar5 = **(ulong **)(unaff_x22 + 0x58);
  *(ulong *)(unaff_x22 + 0x70) = uVar5;
  uVar2 = 0x112d52688;
  func_0x0001000285a8(0x112d52688,&UNK_10d9190a8);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
  func_0x000107c5fd8c(uVar5,uVar2,uVar3,PTR___ss5ErrorWS_11034ee10);
  if ((uVar5 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100fd56dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  *(int *)(unaff_x22 + 0xa8) = iVar1;
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  if (iVar1 != 0) {
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar4;
    uVar2 = 0x112d52690;
    func_0x0001000285a8(0x112d52690,&UNK_10d9190b0);
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100fd5784;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)
              (unaff_x22 + 0x38,*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
               uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x40,**(undefined8 **)(unaff_x22 + 0x58),FUN_100fd57e8,unaff_x22 + 0x10);
  return;
}



/* Entry: 100fd5784; end: 100fd57e7;  */

void FUN_100fd5784(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x90));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(lVar4 + 0x38);
    uVar2 = *(undefined8 *)(lVar4 + 0x60);
    uVar3 = *(undefined8 *)(lVar4 + 0x68);
    pcVar1 = FUN_100fd5818;
  }
  else {
    *(long *)(lVar4 + 0xa0) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0x60);
    uVar3 = *(undefined8 *)(lVar4 + 0x68);
    pcVar1 = FUN_100fd591c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 100fd57e8; end: 100fd5817;  */

void FUN_100fd57e8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
    pcVar1 = FUN_100fd5818;
  }
  else {
    *(long *)(unaff_x22 + 0xa0) = unaff_x20;
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
    pcVar1 = FUN_100fd591c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 100fd5818; end: 100fd591b;  */

void FUN_100fd5818(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x98) == 1) {
    lVar1 = *(long *)(unaff_x22 + 0x88);
    uVar3 = *(ulong *)(unaff_x22 + 0x70);
    func_0x000107c5fd8c(uVar3,*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x80),
                        PTR___ss5ErrorWS_11034ee10);
    if ((uVar3 & 1) != 0) {
      if (lVar1 != 0) {
        func_0x000107c61654();
      }
                    /* WARNING: Could not recover jumptable at 0x000100fd5874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    *(long *)(unaff_x22 + 0x88) = lVar1;
    iVar2 = *(int *)(unaff_x22 + 0xa8);
  }
  else {
    FUN_100fd71bc();
    iVar2 = *(int *)(unaff_x22 + 0xa8);
  }
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
              (unaff_x22 + 0x40,**(undefined8 **)(unaff_x22 + 0x58),FUN_100fd57e8,unaff_x22 + 0x10);
    return;
  }
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  uVar5 = 0x112d52690;
  func_0x0001000285a8(0x112d52690,&UNK_10d9190b0);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100fd5784;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)
            (unaff_x22 + 0x38,*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
             uVar5);
  return;
}



/* Entry: 100fd591c; end: 100fd5a1f;  */

void FUN_100fd591c(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xa0);
  if (*(long *)(unaff_x22 + 0x88) != 0) {
    func_0x000107c614ac(lVar4);
    lVar4 = *(long *)(unaff_x22 + 0x88);
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x70);
  func_0x000107c5fd8c(uVar1,*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x80),
                      PTR___ss5ErrorWS_11034ee10);
  if ((uVar1 & 1) != 0) {
    if (lVar4 != 0) {
      func_0x000107c61654();
    }
                    /* WARNING: Could not recover jumptable at 0x000100fd5984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0x88) = lVar4;
  if (*(int *)(unaff_x22 + 0xa8) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar2;
    uVar3 = 0x112d52690;
    func_0x0001000285a8(0x112d52690,&UNK_10d9190b0);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100fd5784;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)
              (unaff_x22 + 0x38,*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
               uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x40,**(undefined8 **)(unaff_x22 + 0x58),FUN_100fd57e8,unaff_x22 + 0x10);
  return;
}


