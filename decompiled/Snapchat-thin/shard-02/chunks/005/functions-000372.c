/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ec0e68; end: 101ec0fa7;  */

void FUN_101ec0e68(byte param_1,code *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 < 3) {
    uVar4 = 0x676e696d6f636e69;
    uVar1 = 0xee0070756f72675f;
    if (param_1 != 1) {
      uVar4 = 0xd000000000000013;
      uVar1 = 0x800000010f018630;
    }
    uVar3 = 0xd000000000000013;
    uVar6 = 0x800000010f018650;
    if (param_1 != 0) {
      uVar3 = uVar4;
      uVar6 = uVar1;
    }
  }
  else {
    uVar3 = 0xd000000000000018;
    pcVar2 = "nil_image_fetched";
    if (param_1 != 5) {
      uVar3 = 0xd000000000000013;
      pcVar2 = "nil_bitmoji_fetcher";
    }
    uVar4 = 0x676e696f6774756f;
    uVar1 = 0xee0070756f72675f;
    if (param_1 != 3) {
      uVar4 = 0xd000000000000013;
      uVar1 = 0x800000010f018610;
    }
    uVar6 = (ulong)pcVar2 | 0x8000000000000000;
    if (param_1 < 5) {
      uVar3 = uVar4;
      uVar6 = uVar1;
    }
  }
  func_0x000107c5fadc(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  (*param_2)(uVar5,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101ec0fa8; end: 101ec116b;  */

/* WARNING: Possible PIC construction at 0x000101ec1144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ec1148) */

void FUN_101ec0fa8(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = 0x696a6f6d746962;
  if (param_5 != 0) {
    uVar3 = 0x6567616d69;
  }
  uVar5 = 0xe700000000000000;
  if (param_5 != 0) {
    uVar5 = 0xe500000000000000;
  }
  func_0x000107c5fadc(uVar3,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c5fadc(param_1,param_2);
  if (param_3 < 3) {
    uVar5 = 0x676e696d6f636e69;
    uVar1 = 0xee0070756f72675f;
    if (param_3 != 1) {
      uVar5 = 0xd000000000000013;
      uVar1 = 0x800000010f018630;
    }
    uVar4 = 0xd000000000000013;
    uVar7 = 0x800000010f018650;
    if (param_3 != 0) {
      uVar4 = uVar5;
      uVar7 = uVar1;
    }
  }
  else {
    uVar4 = 0xd000000000000018;
    pcVar2 = "nil_image_fetched";
    if (param_3 != 5) {
      uVar4 = 0xd000000000000013;
      pcVar2 = "nil_bitmoji_fetcher";
    }
    uVar5 = 0x676e696f6774756f;
    uVar1 = 0xee0070756f72675f;
    if (param_3 != 3) {
      uVar5 = 0xd000000000000013;
      uVar1 = 0x800000010f018610;
    }
    uVar7 = (ulong)pcVar2 | 0x8000000000000000;
    if (param_3 < 5) {
      uVar4 = uVar5;
      uVar7 = uVar1;
    }
  }
  func_0x000107c5fadc(uVar4,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107b1d7b4(uVar6,uVar3,param_1,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101ec116c; end: 101ec1177;  */

/* WARNING: Possible PIC construction at 0x000101ec12f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ec12fc) */

void FUN_101ec116c(byte param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = 0x696a6f6d746962;
  if (param_3 != 0) {
    uVar3 = 0x6567616d69;
  }
  uVar5 = 0xe700000000000000;
  if (param_3 != 0) {
    uVar5 = 0xe500000000000000;
  }
  func_0x000107c5fadc(uVar3,uVar5);
  func_0x000107c6142c(uVar5);
  if (param_1 < 3) {
    uVar5 = 0x676e696d6f636e69;
    uVar1 = 0xee0070756f72675f;
    if (param_1 != 1) {
      uVar5 = 0xd000000000000013;
      uVar1 = 0x800000010f018630;
    }
    uVar4 = 0xd000000000000013;
    uVar7 = 0x800000010f018650;
    if (param_1 != 0) {
      uVar4 = uVar5;
      uVar7 = uVar1;
    }
  }
  else {
    uVar4 = 0xd000000000000018;
    pcVar2 = "nil_image_fetched";
    if (param_1 != 5) {
      uVar4 = 0xd000000000000013;
      pcVar2 = "nil_bitmoji_fetcher";
    }
    uVar5 = 0x676e696f6774756f;
    uVar1 = 0xee0070756f72675f;
    if (param_1 != 3) {
      uVar5 = 0xd000000000000013;
      uVar1 = 0x800000010f018610;
    }
    uVar7 = (ulong)pcVar2 | 0x8000000000000000;
    if (param_1 < 5) {
      uVar4 = uVar5;
      uVar7 = uVar1;
    }
  }
  func_0x000107c5fadc(uVar4,uVar7);
  func_0x000107c6142c(uVar7);
  (*(code *)&UNK_107b1d584)(uVar6,uVar3,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101ec1178; end: 101ec1313;  */

/* WARNING: Possible PIC construction at 0x000101ec12f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ec12fc) */

void FUN_101ec1178(byte param_1,undefined8 param_2,long param_3,code *param_4)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = 0x696a6f6d746962;
  if (param_3 != 0) {
    uVar3 = 0x6567616d69;
  }
  uVar5 = 0xe700000000000000;
  if (param_3 != 0) {
    uVar5 = 0xe500000000000000;
  }
  func_0x000107c5fadc(uVar3,uVar5);
  func_0x000107c6142c(uVar5);
  if (param_1 < 3) {
    uVar5 = 0x676e696d6f636e69;
    uVar1 = 0xee0070756f72675f;
    if (param_1 != 1) {
      uVar5 = 0xd000000000000013;
      uVar1 = 0x800000010f018630;
    }
    uVar4 = 0xd000000000000013;
    uVar7 = 0x800000010f018650;
    if (param_1 != 0) {
      uVar4 = uVar5;
      uVar7 = uVar1;
    }
  }
  else {
    uVar4 = 0xd000000000000018;
    pcVar2 = "nil_image_fetched";
    if (param_1 != 5) {
      uVar4 = 0xd000000000000013;
      pcVar2 = "nil_bitmoji_fetcher";
    }
    uVar5 = 0x676e696f6774756f;
    uVar1 = 0xee0070756f72675f;
    if (param_1 != 3) {
      uVar5 = 0xd000000000000013;
      uVar1 = 0x800000010f018610;
    }
    uVar7 = (ulong)pcVar2 | 0x8000000000000000;
    if (param_1 < 5) {
      uVar4 = uVar5;
      uVar7 = uVar1;
    }
  }
  func_0x000107c5fadc(uVar4,uVar7);
  func_0x000107c6142c(uVar7);
  (*param_4)(uVar6,uVar3,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101ec1314; end: 101ec135f;  */

void FUN_101ec1314(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ec1360; end: 101ec14ff;  */

/* WARNING: Possible PIC construction at 0x000101ec14e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ec14e8) */

void FUN_101ec1360(uint param_1,byte param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = 0x696a6f6d746962;
  if (param_4 != 0) {
    uVar3 = 0x6567616d69;
  }
  uVar5 = 0xe700000000000000;
  if (param_4 != 0) {
    uVar5 = 0xe500000000000000;
  }
  func_0x000107c5fadc(uVar3,uVar5);
  func_0x000107c6142c(uVar5);
  if (param_2 < 3) {
    uVar5 = 0x676e696d6f636e69;
    uVar1 = 0xee0070756f72675f;
    if (param_2 != 1) {
      uVar5 = 0xd000000000000013;
      uVar1 = 0x800000010f018630;
    }
    uVar4 = 0xd000000000000013;
    uVar7 = 0x800000010f018650;
    if (param_2 != 0) {
      uVar4 = uVar5;
      uVar7 = uVar1;
    }
  }
  else {
    uVar4 = 0xd000000000000018;
    pcVar2 = "nil_image_fetched";
    if (param_2 != 5) {
      uVar4 = 0xd000000000000013;
      pcVar2 = "nil_bitmoji_fetcher";
    }
    uVar5 = 0x676e696f6774756f;
    uVar1 = 0xee0070756f72675f;
    if (param_2 != 3) {
      uVar5 = 0xd000000000000013;
      uVar1 = 0x800000010f018610;
    }
    uVar7 = (ulong)pcVar2 | 0x8000000000000000;
    if (param_2 < 5) {
      uVar4 = uVar5;
      uVar7 = uVar1;
    }
  }
  func_0x000107c5fadc(uVar4,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107b1c9b8(uVar6,uVar3,param_1 & 1,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101ec1500; end: 101ec155b;  */

void FUN_101ec1500(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ec155c; end: 101ec16df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101ec155c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar5 = 0x70;
  func_0x000107c613fc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
  uVar3 = param_2;
  func_0x000107c51d00();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  lVar4 = param_3;
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ec16d8);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + 0x28) = lVar4;
  lVar4 = param_4;
  func_0x000107c4456c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar4;
    lVar4 = param_5;
    func_0x000107c42eac();
    func_0x000107c61180();
    if (lVar4 != 0) {
      *(long *)(unaff_x20 + 0x38) = lVar4;
      uVar3 = param_6;
      func_0x000107c3ea3c();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
      func_0x000100420238(param_7 + _DAT_11307d3d8,unaff_x20 + 0x48);
      func_0x000107c61170(param_7);
      return unaff_x20;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ec16e0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ec16dc);
  (*pcVar1)();
}



/* Entry: 101ec16e0; end: 101ec175f;  */

void FUN_101ec16e0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  func_0x000101ec1340();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 0xd00000000000001e;
  *(undefined8 *)(lVar2 + 0x20) = 0x800000010f0187b0;
  puVar3 = PTR_PTR_1126a97b8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110496c08;
  *param_1 = lVar2;
  return;
}



/* Entry: 101ec1760; end: 101ec18bf;  */

void FUN_101ec1760(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_88 [40];
  
  func_0x000100420238(param_5,auStack_88);
  lVar2 = 0;
  func_0x000101ec0904();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = param_2;
  *(undefined8 *)(lVar3 + 0x18) = param_3;
  *(undefined8 *)(lVar3 + 0x20) = param_4;
  puVar4 = PTR_PTR_1126cbc48;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c5fadc(param_6,param_7);
  func_0x000107c459cc();
  func_0x000107c61170(param_6);
  if (puVar4 != (undefined *)0x0) {
    *(undefined **)(lVar3 + 0x28) = puVar4;
    func_0x000100420238(auStack_88,lVar3 + 0x30);
    lVar5 = 0;
    func_0x000101ec1340();
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 0xd00000000000001e;
    *(undefined8 *)(lVar5 + 0x20) = 0x800000010f0187b0;
    puVar4 = PTR_PTR_1126a97b8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x0001000834e4(auStack_88);
    *(undefined **)(lVar5 + 0x10) = puVar4;
    *(long *)(lVar3 + 0x58) = lVar5;
    param_1[3] = lVar2;
    param_1[4] = (long)&PTR_DAT_110496a58;
    *param_1 = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ec18c0);
  (*pcVar1)();
}



/* Entry: 101ec18c0; end: 101ec18d3;  */

void FUN_101ec18c0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined1 auStack_88 [40];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x000100420238(unaff_x20 + 0x28,auStack_88);
  lVar5 = 0;
  func_0x000101ec0904();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar2;
  *(undefined8 *)(lVar6 + 0x20) = uVar10;
  puVar7 = PTR_PTR_1126cbc48;
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar10);
  func_0x000107c5fadc(uVar8,uVar3);
  func_0x000107c459cc();
  func_0x000107c61170(uVar8);
  if (puVar7 != (undefined *)0x0) {
    *(undefined **)(lVar6 + 0x28) = puVar7;
    func_0x000100420238(auStack_88,lVar6 + 0x30);
    lVar9 = 0;
    func_0x000101ec1340();
    func_0x000107c613fc();
    *(undefined8 *)(lVar9 + 0x18) = 0xd00000000000001e;
    *(undefined8 *)(lVar9 + 0x20) = 0x800000010f0187b0;
    puVar7 = PTR_PTR_1126a97b8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x0001000834e4(auStack_88);
    *(undefined **)(lVar9 + 0x10) = puVar7;
    *(long *)(lVar6 + 0x58) = lVar9;
    param_1[3] = lVar5;
    param_1[4] = (long)&PTR_DAT_110496a58;
    *param_1 = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101ec18c0);
  (*pcVar4)();
}



/* Entry: 101ec18d4; end: 101ec1937;  */

/* WARNING: Possible PIC construction at 0x000101ec1920: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ec1924) */

void FUN_101ec18d4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000101ec152c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110496c60;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 101ec1938; end: 101ec193f;  */

/* WARNING: Possible PIC construction at 0x000101ec1920: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ec1924) */

void FUN_101ec1938(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000101ec152c();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110496c60;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 101ec1940; end: 101ec19e3;  */

/* WARNING: Possible PIC construction at 0x000101ec19c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ec19c4) */

void FUN_101ec1940(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  func_0x000101ec684c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = 0;
  func_0x000101ec1c94();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = 0xd000000000000024;
  *(undefined8 *)(lVar2 + 0x30) = 0x800000010f018780;
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  *param_1 = lVar2;
  param_1[1] = (long)&PTR_DAT_110496db8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101ec19e4; end: 101ec19ef;  */

/* WARNING: Possible PIC construction at 0x000101ec19c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ec19c4) */

void FUN_101ec19e4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = 0;
  func_0x000101ec684c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = 0;
  func_0x000101ec1c94();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  *(undefined8 *)(lVar4 + 0x28) = 0xd000000000000024;
  *(undefined8 *)(lVar4 + 0x30) = 0x800000010f018780;
  *(undefined8 *)(lVar4 + 0x38) = uVar3;
  *param_1 = lVar4;
  param_1[1] = (long)&PTR_DAT_110496db8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101ec19f0; end: 101ec1a13;  */

undefined8 FUN_101ec19f0(void)

{
  undefined8 auStack_20 [2];
  
  func_0x0001000d224c(auStack_20);
  return auStack_20[0];
}



/* Entry: 101ec1a14; end: 101ec1a1b;  */

void FUN_101ec1a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101ec1a1c; end: 101ec1aef;  */

void FUN_101ec1a1c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_78 [24];
  undefined *puStack_60;
  undefined **ppuStack_58;
  
  puStack_60 = &UNK_110496c90;
  ppuStack_58 = &PTR_DAT_110496ca0;
  lVar1 = 0;
  func_0x000101ec358c();
  func_0x000107c613fc();
  func_0x0001000c6518(auStack_78,&UNK_110496c90);
  *(undefined **)(lVar1 + 0x40) = &UNK_110496c90;
  *(undefined ***)(lVar1 + 0x48) = &PTR_DAT_110496ca0;
  *(undefined8 *)(lVar1 + 0x50) = 0xd000000000000018;
  *(undefined8 *)(lVar1 + 0x58) = 0x800000010f018760;
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000834e4(auStack_78);
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_110496de0;
  return;
}



/* Entry: 101ec1af0; end: 101ec1b23;  */

void FUN_101ec1af0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ec1b24; end: 101ec1b2f;  */

void FUN_101ec1b24(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined *puStack_60;
  undefined **ppuStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  puStack_60 = &UNK_110496c90;
  ppuStack_58 = &PTR_DAT_110496ca0;
  lVar3 = 0;
  func_0x000101ec358c();
  func_0x000107c613fc();
  func_0x0001000c6518(auStack_78,&UNK_110496c90);
  *(undefined **)(lVar3 + 0x40) = &UNK_110496c90;
  *(undefined ***)(lVar3 + 0x48) = &PTR_DAT_110496ca0;
  *(undefined8 *)(lVar3 + 0x50) = 0xd000000000000018;
  *(undefined8 *)(lVar3 + 0x58) = 0x800000010f018760;
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x0001000834e4(auStack_78);
  *param_1 = lVar3;
  param_1[1] = (long)&PTR_DAT_110496de0;
  return;
}



/* Entry: 101ec1b30; end: 101ec1b67;  */

void FUN_101ec1b30(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101ec1b68; end: 101ec1bab;  */

void FUN_101ec1b68(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x60) + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101ec1bac; end: 101ec1c3f;  */

void FUN_101ec1bac(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c();
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x0001000834e4(unaff_x20 + 0x48);
  func_0x000107c61574();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ec1c40; end: 101ec1c4f;  */

void FUN_101ec1c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101ec1c50; end: 101ec1cb3;  */

void FUN_101ec1c50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ec1cb4; end: 101ec2727;  */

undefined8 FUN_101ec1cb4(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar8;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long alStack_88 [3];
  undefined8 uStack_70;
  
  uVar8 = 2;
  if (in_x3 != 0) {
    uVar8 = 3;
  }
  func_0x0001000d224c(alStack_88);
  plVar1 = alStack_88;
  func_0x0001000a8868(plVar1,uStack_70);
  lVar2 = *(long *)(*plVar1 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
LAB_101ec1dbc:
    func_0x0001000834e4(alStack_88);
    func_0x0001000d224c(alStack_88);
    func_0x0001000a8868(alStack_88,uStack_70);
    FUN_101ec1360(0,uVar8,in_stack_00000000,in_stack_00000008);
    func_0x0001000834e4(alStack_88);
    func_0x0001000285a8(0x112e39198,&UNK_10da23ac0);
    func_0x000107c61534();
    puVar4 = (undefined1 *)0x0;
    func_0x00010095c380();
    puVar5 = puVar4;
    FUN_101ec2d90();
    puVar6 = &UNK_110776688;
    func_0x000107c613f8(&UNK_110776688,puVar5,0,0);
    *puVar5 = 1;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar6);
    uVar7 = *(undefined8 *)(puVar4 + 0x10);
    func_0x000107c6157c(uVar7);
    func_0x000107c61574(puVar4);
    return uVar7;
  }
  lVar3 = lVar2;
  func_0x000107c42640();
  func_0x000107c61170(lVar2);
  if ((int)lVar3 == 0) goto LAB_101ec1dbc;
  func_0x0001000834e4(alStack_88);
  func_0x0001000d224c(alStack_88);
  func_0x0001000a8868(alStack_88,uStack_70);
  FUN_101ec1360(1,uVar8,in_stack_00000000,in_stack_00000008);
  func_0x0001000834e4(alStack_88);
  if (in_x3 == 0) {
    func_0x0001000d224c(alStack_88);
    func_0x0001000a8868(alStack_88,uStack_70);
    if (in_stack_00000008 == 0) {
      func_0x000101ebefc8(in_x4,in_x5,2,in_stack_00000000,0);
      goto LAB_101ec1ed4;
    }
    uVar7 = 2;
  }
  else {
    func_0x0001000d224c(alStack_88);
    func_0x0001000a8868(alStack_88,uStack_70);
    if (in_stack_00000008 == 0) {
      func_0x000101ebf3c0(in_x6,in_x7,3,in_stack_00000000,0);
      in_x4 = in_x6;
      goto LAB_101ec1ed4;
    }
    uVar7 = 3;
  }
  func_0x000101ebf254(in_stack_00000000,in_stack_00000008,uVar7,in_stack_00000000,in_stack_00000008)
  ;
  in_x4 = in_stack_00000000;
LAB_101ec1ed4:
  func_0x0001000834e4(alStack_88);
  uVar7 = in_x4;
  func_0x000107c6157c(in_x4);
  FUN_101ec60e8();
  func_0x000107c61578(in_x4,2);
  return uVar7;
}



/* Entry: 101ec2728; end: 101ec2733;  */

undefined8 FUN_101ec2728(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar8;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long alStack_88 [3];
  undefined8 uStack_70;
  
  uVar8 = 2;
  if (in_x3 != 0) {
    uVar8 = 3;
  }
  func_0x0001000d224c(alStack_88);
  plVar1 = alStack_88;
  func_0x0001000a8868(plVar1,uStack_70);
  lVar2 = *(long *)(*plVar1 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
LAB_101ec1dbc:
    func_0x0001000834e4(alStack_88);
    func_0x0001000d224c(alStack_88);
    func_0x0001000a8868(alStack_88,uStack_70);
    FUN_101ec1360(0,uVar8,in_stack_00000000,in_stack_00000008);
    func_0x0001000834e4(alStack_88);
    func_0x0001000285a8(0x112e39198,&UNK_10da23ac0);
    func_0x000107c61534();
    puVar4 = (undefined1 *)0x0;
    func_0x00010095c380();
    puVar5 = puVar4;
    FUN_101ec2d90();
    puVar6 = &UNK_110776688;
    func_0x000107c613f8(&UNK_110776688,puVar5,0,0);
    *puVar5 = 1;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar6);
    uVar7 = *(undefined8 *)(puVar4 + 0x10);
    func_0x000107c6157c(uVar7);
    func_0x000107c61574(puVar4);
    return uVar7;
  }
  lVar3 = lVar2;
  func_0x000107c42640();
  func_0x000107c61170(lVar2);
  if ((int)lVar3 == 0) goto LAB_101ec1dbc;
  func_0x0001000834e4(alStack_88);
  func_0x0001000d224c(alStack_88);
  func_0x0001000a8868(alStack_88,uStack_70);
  FUN_101ec1360(1,uVar8,in_stack_00000000,in_stack_00000008);
  func_0x0001000834e4(alStack_88);
  if (in_x3 == 0) {
    func_0x0001000d224c(alStack_88);
    func_0x0001000a8868(alStack_88,uStack_70);
    if (in_stack_00000008 == 0) {
      func_0x000101ebefc8(in_x4,in_x5,2,in_stack_00000000,0);
      goto LAB_101ec1ed4;
    }
    uVar7 = 2;
  }
  else {
    func_0x0001000d224c(alStack_88);
    func_0x0001000a8868(alStack_88,uStack_70);
    if (in_stack_00000008 == 0) {
      func_0x000101ebf3c0(in_x6,in_x7,3,in_stack_00000000,0);
      in_x4 = in_x6;
      goto LAB_101ec1ed4;
    }
    uVar7 = 3;
  }
  func_0x000101ebf254(in_stack_00000000,in_stack_00000008,uVar7,in_stack_00000000,in_stack_00000008)
  ;
  in_x4 = in_stack_00000000;
LAB_101ec1ed4:
  func_0x0001000834e4(alStack_88);
  uVar7 = in_x4;
  func_0x000107c6157c(in_x4);
  FUN_101ec60e8();
  func_0x000107c61578(in_x4,2);
  return uVar7;
}



/* Entry: 101ec2734; end: 101ec2a0b;  */

undefined1 *
FUN_101ec2734(undefined8 param_1,undefined1 *param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long alStack_88 [3];
  undefined8 uStack_70;
  
  func_0x000107c61174(param_9);
  func_0x000104478474();
  uVar8 = 2;
  if (param_4 != 0) {
    uVar8 = 3;
  }
  func_0x0001000d224c(alStack_88);
  plVar1 = alStack_88;
  func_0x0001000a8868(plVar1,uStack_70);
  lVar2 = *(long *)(*plVar1 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c42640();
    func_0x000107c61170(lVar2);
    if ((int)lVar3 != 0) {
      func_0x0001000834e4(alStack_88);
      func_0x0001000d224c(alStack_88);
      func_0x0001000a8868(alStack_88,uStack_70);
      FUN_101ec1360(1,uVar8,param_9,param_2);
      func_0x0001000834e4(alStack_88);
      if (param_4 == 0) {
        func_0x0001000d224c(alStack_88);
        func_0x0001000a8868(alStack_88,uStack_70);
        if (param_2 != (undefined1 *)0x0) {
          uVar7 = 2;
          goto LAB_101ec2934;
        }
        func_0x000101ebefc8(param_5,param_6,2,param_9,0);
      }
      else {
        func_0x0001000d224c(alStack_88);
        func_0x0001000a8868(alStack_88,uStack_70);
        if (param_2 == (undefined1 *)0x0) {
          func_0x000101ebf3c0(param_7,param_8,3,param_9,0);
          param_5 = param_7;
        }
        else {
          uVar7 = 3;
LAB_101ec2934:
          func_0x000101ebf254(param_9,param_2,uVar7,param_9,param_2);
          param_5 = param_9;
        }
      }
      func_0x0001000834e4(alStack_88);
      uVar7 = param_5;
      func_0x000107c6157c(param_5);
      FUN_101ec60e8();
      func_0x000107c61578(param_5,2);
      func_0x000107c6142c(param_2);
      puVar4 = param_2;
      goto LAB_101ec29bc;
    }
  }
  func_0x0001000834e4(alStack_88);
  func_0x0001000d224c(alStack_88);
  func_0x0001000a8868(alStack_88,uStack_70);
  FUN_101ec1360(0,uVar8,param_9,param_2);
  func_0x0001000834e4(alStack_88);
  func_0x0001000285a8(0x112e39198,&UNK_10da23ac0);
  func_0x000107c61534();
  puVar4 = (undefined1 *)0x0;
  func_0x00010095c380();
  puVar5 = puVar4;
  FUN_101ec2d90();
  puVar6 = &UNK_110776688;
  func_0x000107c613f8(&UNK_110776688,puVar5,0,0);
  *puVar5 = 1;
  func_0x00010488ade0();
  func_0x000107c6142c(param_2);
  func_0x000107c614ac(puVar6);
  uVar7 = *(undefined8 *)(puVar4 + 0x10);
  func_0x000107c6157c(uVar7);
  func_0x000107c61574(puVar4);
LAB_101ec29bc:
  func_0x00010488b12c();
  func_0x000107c61574(uVar7);
  return puVar4;
}



/* Entry: 101ec2a0c; end: 101ec2b1f; -[_TtC29IntentDonatingServiceProvider34SendMessageIntentDonatorForMainApp donateOutgoingMessageIntentWithRecipientDisplayName:groupDisplayName:recipientUserId:conversationId:imageType:] */

void FUN_101ec2a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
    uVar2 = param_2;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5faec(param_4);
    uVar2 = uVar1;
  }
  func_0x000107c5faec(param_5);
  uVar3 = uVar2;
  func_0x000107c5faec(param_6);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  FUN_101ec2734(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6,uVar3,param_7);
  func_0x000107c61170(param_7);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101ec2b20; end: 101ec2c6b; -[_TtC29IntentDonatingServiceProvider34SendMessageIntentDonatorForMainApp donateIncomingMessageIntentWithSenderDisplayName:groupDisplayName:senderUserId:conversationId:imageType:] */

void FUN_101ec2b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c5faec();
  if (param_4 == 0) {
    param_4 = 0;
    uVar3 = 0;
    uVar4 = param_2;
  }
  else {
    uVar3 = param_2;
    func_0x000107c5faec(param_4);
    uVar4 = uVar3;
  }
  func_0x000107c5faec(param_5);
  if (param_6 == 0) {
    param_6 = 0;
    uVar5 = 0;
    uVar2 = uVar4;
  }
  else {
    uVar5 = uVar4;
    func_0x000107c5faec(param_6);
    uVar2 = uVar5;
  }
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  uVar1 = param_7;
  func_0x000104478474();
  func_0x000101ec1f5c(param_3,param_2,param_4,uVar3,param_5,uVar4,param_6,uVar5,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x00010488b12c();
  func_0x000107c61170(param_7);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar4);
  func_0x000107c61574(param_3);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101ec2c6c; end: 101ec2d8f; -[_TtC29IntentDonatingServiceProvider34SendMessageIntentDonatorForMainApp donateIntentForGrowthNotificationWithTitle:subtitle:senderUserId:imageType:] */

void FUN_101ec2c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec(param_3);
  uVar3 = param_2;
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = uVar3;
  }
  if (param_5 == 0) {
    param_5 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
    uVar4 = uVar3;
  }
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  uVar2 = param_6;
  func_0x000104478474(param_6);
  func_0x000101ec2354(param_3,param_2,param_4,uVar1,param_5,uVar4,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x00010488b12c();
  func_0x000107c61170(param_6);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101ec2d90; end: 101ec2dcf;  */

void FUN_101ec2d90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e391a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd05fb8;
  func_0x000107c61520(&UNK_10dd05fb8,&UNK_110776688);
  puRam0000000112e391a0 = puVar1;
  return;
}



/* Entry: 101ec2dd0; end: 101ec3547;  */

undefined8
FUN_101ec2dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,byte param_7,ulong param_8,undefined8 param_9,
             long param_10,undefined8 param_11)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long alStack_88 [3];
  undefined8 uStack_70;
  
  func_0x0001000285a8(0x112e39268,&UNK_10da23978);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  puVar2 = (undefined1 *)0x2;
  func_0x000100029b9c(2,0x10,0,0);
  if ((int)puVar2 == 0) {
    FUN_101ec2d90();
    puVar6 = &UNK_110776688;
    func_0x000107c613f8(&UNK_110776688,puVar2,0,0);
    *puVar2 = 0;
  }
  else {
    uVar9 = 5;
    if ((param_8 & 1) != 0) {
      uVar9 = 6;
    }
    func_0x0001000d224c(alStack_88);
    plVar3 = alStack_88;
    func_0x0001000a8868(plVar3,uStack_70);
    lVar4 = *(long *)(*plVar3 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c42640();
      func_0x000107c61170(lVar4);
      if ((int)lVar5 != 0) {
        func_0x0001000834e4(alStack_88);
        func_0x0001000d224c(alStack_88);
        func_0x0001000a8868(alStack_88,uStack_70);
        FUN_101ec1360(1,uVar9,param_9,param_10);
        func_0x0001000834e4(alStack_88);
        if ((param_8 & 1) == 0) {
          func_0x0001000d224c(alStack_88);
          func_0x0001000a8868(alStack_88,uStack_70);
          if (param_10 != 0) {
            uVar8 = 5;
            goto LAB_101ec3044;
          }
          uVar8 = param_3;
          func_0x000101ebefc8(param_3,param_4,5,param_9,0);
        }
        else {
          func_0x0001000d224c(alStack_88);
          func_0x0001000a8868(alStack_88,uStack_70);
          if (param_10 == 0) {
            uVar8 = param_5;
            func_0x000101ebf3c0(param_5,param_6,6,param_9,0);
          }
          else {
            uVar8 = 6;
LAB_101ec3044:
            func_0x000101ebf254(param_9,param_10,uVar8,param_9,param_10);
            uVar8 = param_9;
          }
        }
        func_0x000107c6157c(uVar8);
        func_0x0001000834e4(alStack_88);
        puVar6 = &UNK_110496e00;
        func_0x000107c613fc(&UNK_110496e00,0x18,7);
        func_0x000107c61644(puVar6 + 0x10);
        puVar7 = &UNK_110496e28;
        func_0x000107c613fc(&UNK_110496e28,0x58,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined8 *)(puVar7 + 0x18) = param_5;
        *(undefined8 *)(puVar7 + 0x20) = param_6;
        *(undefined8 *)(puVar7 + 0x28) = param_1;
        *(undefined8 *)(puVar7 + 0x30) = param_2;
        puVar7[0x38] = param_7 & 1;
        *(undefined8 *)(puVar7 + 0x40) = param_3;
        *(undefined8 *)(puVar7 + 0x48) = param_4;
        *(long *)(puVar7 + 0x50) = lVar1;
        func_0x000107c61434(param_6);
        func_0x000107c61434(param_2);
        func_0x000107c61434(param_4);
        func_0x000107c6157c(lVar1);
        func_0x00010075a04c(param_11,1,FUN_101ec3a70,puVar7);
        func_0x000107c61574(puVar7);
        func_0x000107c61578(uVar8,2);
        goto LAB_101ec2fe4;
      }
    }
    func_0x0001000834e4(alStack_88);
    func_0x0001000d224c(alStack_88);
    func_0x0001000a8868(alStack_88,uStack_70);
    FUN_101ec1360(0,uVar9,param_9,param_10);
    plVar3 = alStack_88;
    func_0x0001000834e4();
    FUN_101ec2d90();
    puVar6 = &UNK_110776688;
    func_0x000107c613f8(&UNK_110776688,plVar3,0,0);
    *(undefined1 *)plVar3 = 1;
  }
  func_0x00010488ade0();
  func_0x000107c614ac(puVar6);
LAB_101ec2fe4:
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(lVar1);
  return uVar8;
}



/* Entry: 101ec3548; end: 101ec35ab;  */

void FUN_101ec3548(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ec35ac; end: 101ec35af;  */

undefined8
FUN_101ec35ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,byte param_7,ulong param_8,undefined8 param_9,
             long param_10,undefined8 param_11)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long alStack_88 [3];
  undefined8 uStack_70;
  
  func_0x0001000285a8(0x112e39268,&UNK_10da23978);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  puVar2 = (undefined1 *)0x2;
  func_0x000100029b9c(2,0x10,0,0);
  if ((int)puVar2 == 0) {
    FUN_101ec2d90();
    puVar6 = &UNK_110776688;
    func_0x000107c613f8(&UNK_110776688,puVar2,0,0);
    *puVar2 = 0;
  }
  else {
    uVar9 = 5;
    if ((param_8 & 1) != 0) {
      uVar9 = 6;
    }
    func_0x0001000d224c(alStack_88);
    plVar3 = alStack_88;
    func_0x0001000a8868(plVar3,uStack_70);
    lVar4 = *(long *)(*plVar3 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c42640();
      func_0x000107c61170(lVar4);
      if ((int)lVar5 != 0) {
        func_0x0001000834e4(alStack_88);
        func_0x0001000d224c(alStack_88);
        func_0x0001000a8868(alStack_88,uStack_70);
        FUN_101ec1360(1,uVar9,param_9,param_10);
        func_0x0001000834e4(alStack_88);
        if ((param_8 & 1) == 0) {
          func_0x0001000d224c(alStack_88);
          func_0x0001000a8868(alStack_88,uStack_70);
          if (param_10 != 0) {
            uVar8 = 5;
            goto LAB_101ec3044;
          }
          uVar8 = param_3;
          func_0x000101ebefc8(param_3,param_4,5,param_9,0);
        }
        else {
          func_0x0001000d224c(alStack_88);
          func_0x0001000a8868(alStack_88,uStack_70);
          if (param_10 == 0) {
            uVar8 = param_5;
            func_0x000101ebf3c0(param_5,param_6,6,param_9,0);
          }
          else {
            uVar8 = 6;
LAB_101ec3044:
            func_0x000101ebf254(param_9,param_10,uVar8,param_9,param_10);
            uVar8 = param_9;
          }
        }
        func_0x000107c6157c(uVar8);
        func_0x0001000834e4(alStack_88);
        puVar6 = &UNK_110496e00;
        func_0x000107c613fc(&UNK_110496e00,0x18,7);
        func_0x000107c61644(puVar6 + 0x10);
        puVar7 = &UNK_110496e28;
        func_0x000107c613fc(&UNK_110496e28,0x58,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined8 *)(puVar7 + 0x18) = param_5;
        *(undefined8 *)(puVar7 + 0x20) = param_6;
        *(undefined8 *)(puVar7 + 0x28) = param_1;
        *(undefined8 *)(puVar7 + 0x30) = param_2;
        puVar7[0x38] = param_7 & 1;
        *(undefined8 *)(puVar7 + 0x40) = param_3;
        *(undefined8 *)(puVar7 + 0x48) = param_4;
        *(long *)(puVar7 + 0x50) = lVar1;
        func_0x000107c61434(param_6);
        func_0x000107c61434(param_2);
        func_0x000107c61434(param_4);
        func_0x000107c6157c(lVar1);
        func_0x00010075a04c(param_11,1,FUN_101ec3a70,puVar7);
        func_0x000107c61574(puVar7);
        func_0x000107c61578(uVar8,2);
        goto LAB_101ec2fe4;
      }
    }
    func_0x0001000834e4(alStack_88);
    func_0x0001000d224c(alStack_88);
    func_0x0001000a8868(alStack_88,uStack_70);
    FUN_101ec1360(0,uVar9,param_9,param_10);
    plVar3 = alStack_88;
    func_0x0001000834e4();
    FUN_101ec2d90();
    puVar6 = &UNK_110776688;
    func_0x000107c613f8(&UNK_110776688,plVar3,0,0);
    *(undefined1 *)plVar3 = 1;
  }
  func_0x00010488ade0();
  func_0x000107c614ac(puVar6);
LAB_101ec2fe4:
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(lVar1);
  return uVar8;
}



/* Entry: 101ec35b0; end: 101ec3963;  */

long FUN_101ec35b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7,ulong param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long alStack_88 [3];
  undefined8 uStack_70;
  
  lVar8 = param_2;
  func_0x000107c61174(param_9);
  func_0x000104478474();
  func_0x0001000285a8(0x112e39268,&UNK_10da23978);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  puVar2 = (undefined1 *)0x2;
  func_0x000100029b9c(2,0x10,0,0);
  if ((int)puVar2 == 0) {
    FUN_101ec2d90();
    puVar6 = &UNK_110776688;
    func_0x000107c613f8(&UNK_110776688,puVar2,0,0);
    *puVar2 = 0;
  }
  else {
    uVar10 = 5;
    if ((param_8 & 1) != 0) {
      uVar10 = 6;
    }
    func_0x0001000d224c(alStack_88);
    plVar3 = alStack_88;
    func_0x0001000a8868(plVar3,uStack_70);
    lVar4 = *(long *)(*plVar3 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c42640();
      func_0x000107c61170(lVar4);
      if ((int)lVar5 != 0) {
        func_0x0001000834e4(alStack_88);
        func_0x0001000d224c(alStack_88);
        func_0x0001000a8868(alStack_88,uStack_70);
        FUN_101ec1360(1,uVar10,param_9,lVar8);
        func_0x0001000834e4(alStack_88);
        if ((param_8 & 1) == 0) {
          func_0x0001000d224c(alStack_88);
          func_0x0001000a8868(alStack_88,uStack_70);
          if (lVar8 != 0) {
            uVar9 = 5;
            goto LAB_101ec3848;
          }
          uVar9 = param_3;
          func_0x000101ebefc8(param_3,param_4,5,param_9,0);
        }
        else {
          func_0x0001000d224c(alStack_88);
          func_0x0001000a8868(alStack_88,uStack_70);
          if (lVar8 == 0) {
            uVar9 = param_5;
            func_0x000101ebf3c0(param_5,param_6,6,param_9,0);
          }
          else {
            uVar9 = 6;
LAB_101ec3848:
            func_0x000101ebf254(param_9,lVar8,uVar9,param_9,lVar8);
            uVar9 = param_9;
          }
        }
        func_0x000107c6157c(uVar9);
        func_0x0001000834e4(alStack_88);
        puVar6 = &UNK_110496e00;
        func_0x000107c613fc(&UNK_110496e00,0x18,7);
        func_0x000107c61644(puVar6 + 0x10);
        puVar7 = &UNK_110496ea0;
        func_0x000107c613fc(&UNK_110496ea0,0x58,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined8 *)(puVar7 + 0x18) = param_5;
        *(undefined8 *)(puVar7 + 0x20) = param_6;
        *(undefined8 *)(puVar7 + 0x28) = param_1;
        *(long *)(puVar7 + 0x30) = param_2;
        puVar7[0x38] = param_7 & 1;
        *(undefined8 *)(puVar7 + 0x40) = param_3;
        *(undefined8 *)(puVar7 + 0x48) = param_4;
        *(long *)(puVar7 + 0x50) = lVar1;
        func_0x000107c61434(param_6);
        func_0x000107c61434(param_2);
        func_0x000107c61434(param_4);
        func_0x000107c6157c(lVar1);
        func_0x00010075a04c(param_10,1,FUN_101ec3be0,puVar7);
        func_0x000107c61574(puVar7);
        func_0x000107c61578(uVar9,2);
        func_0x000107c6142c(lVar8);
        goto LAB_101ec37d4;
      }
    }
    func_0x0001000834e4(alStack_88);
    func_0x0001000d224c(alStack_88);
    func_0x0001000a8868(alStack_88,uStack_70);
    FUN_101ec1360(0,uVar10,param_9,lVar8);
    plVar3 = alStack_88;
    func_0x0001000834e4();
    FUN_101ec2d90();
    puVar6 = &UNK_110776688;
    func_0x000107c613f8(&UNK_110776688,plVar3,0,0);
    *(undefined1 *)plVar3 = 1;
  }
  func_0x00010488ade0();
  func_0x000107c6142c(lVar8);
  func_0x000107c614ac(puVar6);
LAB_101ec37d4:
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar9);
  func_0x000107c61574(lVar1);
  func_0x00010488b12c();
  func_0x000107c61574(uVar9);
  return lVar1;
}



/* Entry: 101ec3964; end: 101ec3a6f; -[_TtC29IntentDonatingServiceProvider22StartCallIntentDonator donateOutgoingCallIntentWithRecipientDisplayName:recipientId:conversationId:isVideoCall:isGroupCall:imageType:performer:] */

void FUN_101ec3964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  uVar2 = uVar1;
  func_0x000107c5faec(param_5);
  func_0x000107c61174();
  func_0x000107c615f0(param_9);
  func_0x000107c6157c(param_1);
  FUN_101ec35b0(param_3,param_2,param_4,uVar1,param_5,uVar2,param_6,param_7,param_8,param_9);
  func_0x000107c61170(param_8);
  func_0x000107c615e8(param_9);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101ec3a70; end: 101ec3a73;  */

void FUN_101ec3a70(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101ec3168(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101ec3a74; end: 101ec3b13;  */

void FUN_101ec3a74(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000101ec3ad0();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e39278;
  plVar5 = (long *)&UNK_10da23980;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101ec3b14; end: 101ec3b47;  */

void FUN_101ec3b14(void)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000100b60084(*(undefined8 *)(unaff_x20 + 0x20),&uStack_28);
  return;
}



/* Entry: 101ec3b48; end: 101ec3b63;  */

void FUN_101ec3b48(long param_1,long param_2)

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



/* Entry: 101ec3b64; end: 101ec3bdf;  */

void FUN_101ec3b64(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ec3be0; end: 101ec3bf7;  */

void FUN_101ec3be0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101ec3168(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101ec3bf8; end: 101ec3ca3;  */

void FUN_101ec3bf8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101ec3ca4; end: 101ec4b7b;  */

undefined * FUN_101ec3ca4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long extraout_x8;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 auStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112d472b0;
  func_0x0001000285a8(0x112d472b0,&UNK_10d90e4a0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  lVar9 = (long)&uStack_70 + lVar2;
  lVar11 = *(long *)(unaff_x20 + 0x58);
  if (lVar11 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
    func_0x000107c61434(lVar11);
    func_0x000107c5fadc(uVar12,lVar11);
    func_0x000107c6142c(lVar11);
  }
  puVar3 = PTR__OBJC_CLASS___INPersonHandle_1126cbc60;
  func_0x000107c610f8(PTR__OBJC_CLASS___INPersonHandle_1126cbc60);
  func_0x000107c4947c();
  func_0x000107c61170(uVar12);
  lVar11 = 0;
  func_0x000107c5ed00();
  lVar13 = *(long *)(lVar11 + -8);
  uVar12 = 1;
  (**(code **)(lVar13 + 0x38))(lVar9,1,1,lVar11);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  if (lVar4 == 0) {
    func_0x000107c61174(puVar3);
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(puVar3);
    lVar5 = lVar4;
    func_0x000107c60bb8();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar5);
      lVar5 = lVar6;
      func_0x000107c5ee20(lVar6,uVar12);
      puVar14 = PTR__OBJC_CLASS___INImage_1126cbc78;
      func_0x000107c61168(PTR__OBJC_CLASS___INImage_1126cbc78);
      func_0x000107c4514c();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      func_0x00010006c090(lVar6,uVar12);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar4);
      goto LAB_101ec3e4c;
    }
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar4);
  }
  puVar14 = (undefined *)0x0;
LAB_101ec3e4c:
  lVar4 = *(long *)(unaff_x20 + 0x60);
  lVar5 = *(long *)(unaff_x20 + 0x68);
  lVar6 = lVar9;
  (**(code **)(lVar13 + 0x30))(lVar9,1,lVar11);
  lVar15 = lVar5;
  func_0x000107c61434(lVar5);
  if ((int)lVar6 == 1) {
    lVar15 = 0;
  }
  else {
    func_0x000107c5ecf8();
    (**(code **)(lVar13 + 8))(lVar9,lVar11);
  }
  uVar12 = uStack_68;
  func_0x000107c5fadc(uStack_68,uStack_70);
  if (lVar5 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c5fadc(lVar4,lVar5);
    func_0x000107c6142c(lVar5);
  }
  puVar7 = PTR__OBJC_CLASS___INPerson_1126cbc68;
  func_0x000107c610f8();
  func_0x000107c47e70();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170();
  FUN_101ec3a74();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 3;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined **)(lVar4 + 0x20) = puVar7;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
  lVar11 = *(long *)(unaff_x20 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = 0;
  func_0x000101ec3ad0(0);
  func_0x000107c61174(puVar7);
  func_0x000107c61434(lVar11);
  lVar9 = lVar4;
  func_0x000107c5fc48(lVar4,uVar8);
  func_0x000107c61574(lVar4);
  if (lVar11 == 0) {
    uVar12 = 0;
  }
  else {
    func_0x000107c5fadc(uVar12,lVar11);
    func_0x000107c6142c(lVar11);
  }
  puVar14 = PTR__OBJC_CLASS___INSendMessageIntent_1126cbc70;
  func_0x000107c610f8(PTR__OBJC_CLASS___INSendMessageIntent_1126cbc70);
  func_0x000107c5fadc(uVar10,uVar1);
  *(undefined8 *)((long)auStack_80 + lVar2) = 0;
  *(undefined8 *)((long)auStack_80 + lVar2 + 8) = 0;
  func_0x000107c4829c(puVar14);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar10);
  return puVar14;
}



/* Entry: 101ec4b7c; end: 101ec4bab;  */

void FUN_101ec4b7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5b6bc();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 101ec4bac; end: 101ec4c17;  */

void FUN_101ec4bac(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ec4c18; end: 101ec4d7f;  */

int FUN_101ec4c18(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101ec4c94;
        goto LAB_101ec4c78;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101ec4c78:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_101ec4c94:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101ec4d80; end: 101ec4dbf;  */

void FUN_101ec4d80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e39350 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da23a54;
  func_0x000107c61520(&UNK_10da23a54,&UNK_110496fd0);
  puRam0000000112e39350 = puVar1;
  return;
}



/* Entry: 101ec4dc0; end: 101ec4dcb;  */

undefined * FUN_101ec4dc0(void)

{
  return PTR_s_speakableGroupName_11266fa90;
}



/* Entry: 101ec4dcc; end: 101ec5563;  */

long FUN_101ec4dcc(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined1 *param_7,undefined8 param_8,
                  undefined *param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  
  lVar1 = param_1;
  if (param_1 != 0) {
    func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000100759c94();
    func_0x000107c61170(param_1);
  }
  func_0x0001000285a8(0x112e39198,&UNK_10da23ac0);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  if (lVar1 == 0) {
    lVar3 = 0;
    func_0x000101ec4bf8();
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x10) = 0x7461686370616e53;
    *(undefined8 *)(lVar3 + 0x18) = 0xe800000000000000;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x68) = 0;
    if (param_5 == 0) {
      *(undefined1 *)(lVar3 + 0x20) = 0;
      *(undefined8 *)(lVar3 + 0x28) = param_2;
      *(undefined **)(lVar3 + 0x30) = param_3;
      *(undefined8 *)(lVar3 + 0x50) = param_6;
      *(undefined1 **)(lVar3 + 0x58) = param_7;
      *(undefined8 *)(lVar3 + 0x60) = param_8;
      *(undefined **)(lVar3 + 0x68) = param_9;
      func_0x000107c61434(param_3);
      func_0x000107c61434(param_7);
      puVar6 = param_9;
      func_0x000107c61434();
      func_0x000101ec3ca4();
      puVar4 = PTR__OBJC_CLASS___INInteraction_1126cbc50;
    }
    else {
      *(undefined1 *)(lVar3 + 0x20) = 2;
      *(undefined8 *)(lVar3 + 0x28) = param_2;
      *(undefined **)(lVar3 + 0x30) = param_3;
      *(undefined8 *)(lVar3 + 0x50) = param_6;
      *(undefined1 **)(lVar3 + 0x58) = param_7;
      *(undefined8 *)(lVar3 + 0x40) = param_4;
      *(long *)(lVar3 + 0x48) = param_5;
      *(undefined8 *)(lVar3 + 0x60) = param_8;
      *(undefined **)(lVar3 + 0x68) = param_9;
      func_0x000107c61434(param_5);
      func_0x000107c61434(param_7);
      func_0x000107c61434(param_9);
      puVar6 = param_3;
      func_0x000107c61434();
      func_0x000101ec43a4();
      puVar4 = PTR__OBJC_CLASS___INInteraction_1126cbc50;
    }
    PTR__OBJC_CLASS___INInteraction_1126cbc50 = puVar4;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c6142c(param_3);
      func_0x000107c6142c(param_5);
      func_0x000107c61588(lVar3);
      func_0x000107c6142c(param_9);
      func_0x000107c6142c();
      FUN_101ec2d90();
      puVar6 = &UNK_110776688;
      func_0x000107c613f8(&UNK_110776688,param_7,0,0);
      *param_7 = 0;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar6);
    }
    else {
      func_0x000107c610f8(puVar4);
      func_0x000107c46ed4();
      func_0x000107c54118();
      pcStack_e8 = FUN_101ec676c;
      uStack_e0 = 0;
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0x42000000;
      puStack_f8 = &UNK_100ff4e10;
      puStack_f0 = &UNK_110497040;
      ppuVar5 = &puStack_108;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c42224(puVar4);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c6142c(param_3);
      func_0x000107c61170(puVar4);
      func_0x000107c6142c(param_5);
      func_0x000107c61588(lVar3);
      func_0x000107c6142c(param_9);
      func_0x000107c6142c(param_7);
      puStack_108 = puVar6;
      func_0x000100b60084(&puStack_108);
      func_0x000107c61170(puVar6);
    }
  }
  else {
    puVar6 = &UNK_110497028;
    func_0x000107c613fc(&UNK_110497028,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar4 = &UNK_110497078;
    func_0x000107c613fc(&UNK_110497078,0x70,7);
    *(undefined **)(puVar4 + 0x10) = puVar6;
    puVar4[0x18] = 1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    *(undefined **)(puVar4 + 0x28) = param_3;
    *(undefined8 *)(puVar4 + 0x30) = param_4;
    *(long *)(puVar4 + 0x38) = param_5;
    *(undefined8 *)(puVar4 + 0x40) = param_6;
    *(undefined1 **)(puVar4 + 0x48) = param_7;
    *(undefined8 *)(puVar4 + 0x50) = param_8;
    *(undefined **)(puVar4 + 0x58) = param_9;
    puVar4[0x60] = 0;
    *(long *)(puVar4 + 0x68) = lVar2;
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_7);
    func_0x000107c61434(param_9);
    func_0x000107c6157c(lVar2);
    func_0x000107c6157c(lVar1);
    func_0x000107c61434(param_3);
    func_0x00010075a04c(0,1,0x101ec60d8,puVar4);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(puVar4);
  }
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar7);
  func_0x000107c61574(lVar2);
  func_0x00010488b12c();
  func_0x000107c61574(uVar7);
  func_0x000107c61574(lVar1);
  return lVar2;
}



/* Entry: 101ec5564; end: 101ec556f; -[_TtC26IntentDonatingServicesImpl24SendMessageIntentDonator donateOutgoingMessageIntentWithImageFuture:recipientDisplayName:groupDisplayName:recipientUserId:conversationId:] */

void FUN_101ec5564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec();
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
    uVar3 = param_2;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5faec(param_5);
    uVar3 = uVar2;
  }
  func_0x000107c5faec(param_6);
  uVar4 = uVar3;
  func_0x000107c5faec(param_7);
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101ec4dcc(param_3,param_4,param_2,param_5,uVar2,param_6,uVar3,param_7,uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101ec5570; end: 101ec5927;  */

long FUN_101ec5570(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined1 *param_7,undefined8 param_8,
                  undefined *param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  
  lVar1 = param_1;
  if (param_1 != 0) {
    func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000100759c94();
    func_0x000107c61170(param_1);
  }
  func_0x0001000285a8(0x112e39198,&UNK_10da23ac0);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  if (lVar1 == 0) {
    lVar3 = 0;
    func_0x000101ec4bf8();
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x10) = 0x7461686370616e53;
    *(undefined8 *)(lVar3 + 0x18) = 0xe800000000000000;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x68) = 0;
    if (param_5 == 0) {
      *(undefined1 *)(lVar3 + 0x20) = 1;
      *(undefined8 *)(lVar3 + 0x28) = param_2;
      *(undefined **)(lVar3 + 0x30) = param_3;
      *(undefined8 *)(lVar3 + 0x50) = param_6;
      *(undefined1 **)(lVar3 + 0x58) = param_7;
      *(undefined8 *)(lVar3 + 0x60) = param_8;
      *(undefined **)(lVar3 + 0x68) = param_9;
      func_0x000107c61434(param_3);
      func_0x000107c61434(param_7);
      puVar6 = param_9;
      func_0x000107c61434();
      func_0x000101ec404c();
      puVar4 = PTR__OBJC_CLASS___INInteraction_1126cbc50;
    }
    else {
      *(undefined1 *)(lVar3 + 0x20) = 3;
      *(undefined8 *)(lVar3 + 0x28) = param_2;
      *(undefined **)(lVar3 + 0x30) = param_3;
      *(undefined8 *)(lVar3 + 0x50) = param_6;
      *(undefined1 **)(lVar3 + 0x58) = param_7;
      *(undefined8 *)(lVar3 + 0x40) = param_4;
      *(long *)(lVar3 + 0x48) = param_5;
      *(undefined8 *)(lVar3 + 0x60) = param_8;
      *(undefined **)(lVar3 + 0x68) = param_9;
      func_0x000107c61434(param_5);
      func_0x000107c61434(param_7);
      func_0x000107c61434(param_9);
      puVar6 = param_3;
      func_0x000107c61434();
      func_0x000101ec47b0();
      puVar4 = PTR__OBJC_CLASS___INInteraction_1126cbc50;
    }
    PTR__OBJC_CLASS___INInteraction_1126cbc50 = puVar4;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c6142c(param_3);
      func_0x000107c6142c(param_5);
      func_0x000107c61588(lVar3);
      func_0x000107c6142c(param_9);
      func_0x000107c6142c();
      FUN_101ec2d90();
      puVar6 = &UNK_110776688;
      func_0x000107c613f8(&UNK_110776688,param_7,0,0);
      *param_7 = 0;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar6);
    }
    else {
      func_0x000107c610f8(puVar4);
      func_0x000107c46ed4();
      func_0x000107c54118();
      pcStack_e8 = FUN_101ec676c;
      uStack_e0 = 0;
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0x42000000;
      puStack_f8 = &UNK_100ff4e10;
      puStack_f0 = &UNK_110497090;
      ppuVar5 = &puStack_108;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c42224(puVar4);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c6142c(param_3);
      func_0x000107c61170(puVar4);
      func_0x000107c6142c(param_5);
      func_0x000107c61588(lVar3);
      func_0x000107c6142c(param_9);
      func_0x000107c6142c(param_7);
      puStack_108 = puVar6;
      func_0x000100b60084(&puStack_108);
      func_0x000107c61170(puVar6);
    }
  }
  else {
    puVar6 = &UNK_110497028;
    func_0x000107c613fc(&UNK_110497028,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar4 = &UNK_1104970c8;
    func_0x000107c613fc(&UNK_1104970c8,0x70,7);
    *(undefined **)(puVar4 + 0x10) = puVar6;
    puVar4[0x18] = 0;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    *(undefined **)(puVar4 + 0x28) = param_3;
    *(undefined8 *)(puVar4 + 0x30) = param_4;
    *(long *)(puVar4 + 0x38) = param_5;
    *(undefined8 *)(puVar4 + 0x40) = param_6;
    *(undefined1 **)(puVar4 + 0x48) = param_7;
    *(undefined8 *)(puVar4 + 0x50) = param_8;
    *(undefined **)(puVar4 + 0x58) = param_9;
    puVar4[0x60] = 0;
    *(long *)(puVar4 + 0x68) = lVar2;
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_7);
    func_0x000107c61434(param_9);
    func_0x000107c6157c(lVar2);
    func_0x000107c6157c(lVar1);
    func_0x000107c61434(param_3);
    func_0x00010075a04c(0,1,0x101ec60dc,puVar4);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(puVar4);
  }
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar7);
  func_0x000107c61574(lVar2);
  func_0x00010488b12c();
  func_0x000107c61574(uVar7);
  func_0x000107c61574(lVar1);
  return lVar2;
}



/* Entry: 101ec5928; end: 101ec5933; -[_TtC26IntentDonatingServicesImpl24SendMessageIntentDonator donateIncomingMessageIntentWithImageFuture:senderDisplayName:groupDisplayName:senderUserId:conversationId:] */

void FUN_101ec5928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec();
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
    uVar3 = param_2;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5faec(param_5);
    uVar3 = uVar2;
  }
  func_0x000107c5faec(param_6);
  uVar4 = uVar3;
  func_0x000107c5faec(param_7);
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101ec5570(param_3,param_4,param_2,param_5,uVar2,param_6,uVar3,param_7,uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101ec5934; end: 101ec5dc3;  */

void FUN_101ec5934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec();
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
    uVar3 = param_2;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5faec(param_5);
    uVar3 = uVar2;
  }
  func_0x000107c5faec(param_6);
  uVar4 = uVar3;
  func_0x000107c5faec(param_7);
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*param_8)(param_3,param_4,param_2,param_5,uVar2,param_6,uVar3,param_7,uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101ec5dc4; end: 101ec5ebf; -[_TtC26IntentDonatingServicesImpl24SendMessageIntentDonator donateIntentForGrowthNotificationWithImageFutureL:title:subtitle:conversationId:] */

void FUN_101ec5dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec(param_4);
  uVar3 = param_2;
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
    uVar1 = uVar3;
  }
  if (param_6 == 0) {
    param_6 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000101ec5a54(param_3,param_4,param_2,param_5,uVar1,param_6,uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101ec5ec0; end: 101ec5ffb; -[_TtC26IntentDonatingServicesImpl24SendMessageIntentDonator donateIntentObjcWithImageFuture:isOutgoingMessage:userDisplayName:groupDisplayName:userId:conversationId:] */

void FUN_101ec5ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec(param_5);
  if (param_6 == 0) {
    param_6 = 0;
    uVar4 = 0;
    uVar3 = param_2;
  }
  else {
    uVar4 = param_2;
    func_0x000107c5faec(param_6);
    uVar3 = uVar4;
  }
  if (param_7 == 0) {
    param_7 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
    uVar1 = uVar3;
  }
  if (param_8 == 0) {
    param_8 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  func_0x000101ec5184(param_3,param_4,param_5,param_2,param_6,uVar4,param_7,uVar1,param_8,uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101ec5ffc; end: 101ec601b;  */

void FUN_101ec5ffc(long param_1,long param_2)

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



/* Entry: 101ec601c; end: 101ec60b7;  */

void FUN_101ec601c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ec60b8; end: 101ec60e7;  */

void FUN_101ec60b8(long param_1,long param_2)

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



/* Entry: 101ec60e8; end: 101ec676b;  */

undefined8
FUN_101ec60e8(long param_1,byte param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             long param_6,undefined8 param_7,undefined *param_8,undefined8 param_9,
             undefined1 *param_10,byte param_11)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  
  func_0x0001000285a8(0x112e39198,&UNK_10da23ac0);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  if (param_1 == 0) {
    lVar2 = 0;
    func_0x000101ec4bf8();
    func_0x000107c61534();
    *(undefined8 *)(lVar2 + 0x10) = 0x7461686370616e53;
    *(undefined8 *)(lVar2 + 0x18) = 0xe800000000000000;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x68) = 0;
    if (param_6 == 0) {
      bVar6 = (param_2 ^ 0xff) & 1;
    }
    else {
      bVar6 = 2;
      if ((param_2 & 1) == 0) {
        bVar6 = 3;
      }
      *(undefined8 *)(lVar2 + 0x40) = param_5;
      *(long *)(lVar2 + 0x48) = param_6;
    }
    *(byte *)(lVar2 + 0x20) = bVar6;
    *(undefined8 *)(lVar2 + 0x28) = param_3;
    *(undefined8 *)(lVar2 + 0x30) = param_4;
    *(undefined8 *)(lVar2 + 0x50) = param_7;
    *(undefined **)(lVar2 + 0x58) = param_8;
    if (param_10 != (undefined1 *)0x0) {
      *(undefined8 *)(lVar2 + 0x60) = param_9;
      *(undefined1 **)(lVar2 + 0x68) = param_10;
    }
    func_0x000107c61434(param_10);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    puVar3 = param_8;
    func_0x000107c61434();
    if (bVar6 < 2) {
      if (bVar6 == 0) {
        FUN_101ec3ca4();
      }
      else {
        func_0x000101ec404c();
      }
    }
    else if (bVar6 == 2) {
      func_0x000101ec43a4();
    }
    else {
      func_0x000101ec47b0();
    }
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c6142c(param_4);
      func_0x000107c6142c(param_6);
      func_0x000107c61588(lVar2);
      func_0x000107c6142c(param_8);
      func_0x000107c6142c();
      FUN_101ec2d90();
      puVar3 = &UNK_110776688;
      func_0x000107c613f8(&UNK_110776688,param_10,0,0);
      *param_10 = 0;
      func_0x00010488ade0();
      func_0x000107c614ac(puVar3);
    }
    else {
      if ((param_11 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___INInteraction_1126cbc50;
        func_0x000107c610f8(PTR__OBJC_CLASS___INInteraction_1126cbc50);
        func_0x000107c46ed4();
        func_0x000107c54118();
        pcStack_e8 = FUN_101ec676c;
        uStack_e0 = 0;
        puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_100 = 0x42000000;
        puStack_f8 = &UNK_100ff4e10;
        puStack_f0 = &UNK_110497180;
        ppuVar5 = &puStack_108;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c42224(puVar4);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61574(lVar2);
        func_0x000107c61170(puVar4);
      }
      else {
        func_0x000107c61574(lVar2);
      }
      puStack_108 = puVar3;
      func_0x000100b60084(&puStack_108);
      func_0x000107c61170(puVar3);
    }
  }
  else {
    puVar3 = &UNK_1104971b8;
    func_0x000107c613fc(&UNK_1104971b8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_1104971e0;
    func_0x000107c613fc(&UNK_1104971e0,0x70,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    puVar4[0x18] = param_2 & 1;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    *(undefined8 *)(puVar4 + 0x28) = param_4;
    *(undefined8 *)(puVar4 + 0x30) = param_5;
    *(long *)(puVar4 + 0x38) = param_6;
    *(undefined8 *)(puVar4 + 0x40) = param_7;
    *(undefined **)(puVar4 + 0x48) = param_8;
    *(undefined8 *)(puVar4 + 0x50) = param_9;
    *(undefined1 **)(puVar4 + 0x58) = param_10;
    puVar4[0x60] = param_11 & 1;
    *(long *)(puVar4 + 0x68) = lVar1;
    func_0x000107c61434(param_10);
    func_0x000107c6157c(lVar1);
    func_0x000107c6157c(param_1);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    func_0x000107c61434(param_8);
    func_0x00010075a04c(0,1,FUN_101ec678c,puVar4);
    func_0x000107c61574(param_1);
    func_0x000107c61574(puVar4);
  }
  uVar7 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar7);
  func_0x000107c61574(lVar1);
  return uVar7;
}



/* Entry: 101ec676c; end: 101ec678b;  */

void FUN_101ec676c(void)

{
  return;
}



/* Entry: 101ec678c; end: 101ec67db;  */

void FUN_101ec678c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101ec6468(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined1 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101ec67dc; end: 101ec6817; -[_TtC26IntentDonatingServicesImpl24SendMessageIntentDonator init] */

void FUN_101ec67dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ec6818; end: 101ec686b;  */

void FUN_101ec6818(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ec686c; end: 101ec6873;  */

void FUN_101ec686c(long param_1,long param_2)

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



/* Entry: 101ec6874; end: 101ec6983;  */

long FUN_101ec6874(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  func_0x000107c61174(param_2);
  lVar2 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    *(long *)(unaff_x20 + 0x18) = lVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ec6908);
  (*pcVar1)();
}



/* Entry: 101ec6984; end: 101ec6b93;  */

undefined * FUN_101ec6984(void)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_1104972b0;
  func_0x000107c613fc(&UNK_1104972b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x0001000285a8(0x112e39380,&UNK_10da23af0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  uVar4 = 0x101ec6ab4;
  func_0x0001000bdd8c(0x101ec6ab4,puVar1);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = &UNK_1104972d8;
  func_0x000107c613fc(&UNK_1104972d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  func_0x0001000285a8(0x112e39388,&UNK_10da23af8);
  func_0x000107c613fc();
  func_0x000107c615f0(uVar5);
  func_0x000107c6157c(uVar4);
  pcVar2 = FUN_101ec6b94;
  func_0x0001000bdd8c(FUN_101ec6b94,puVar1);
  pcVar3 = pcVar2;
  func_0x0001003a5b88();
  puVar1 = PTR_PTR_1126a97c0;
  func_0x000107c610f8(PTR_PTR_1126a97c0);
  func_0x000107c4810c();
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(pcVar3);
  return puVar1;
}



/* Entry: 101ec6b94; end: 101ec6c77;  */

void FUN_101ec6b94(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = lVar2;
  func_0x0001070c1f08();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fe10();
    func_0x000107c61170(lVar1);
  }
  func_0x0001070c1fd0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c5fe10();
    func_0x000107c61170(lVar2);
  }
  func_0x000101ec6fd0(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000101ec6f68();
  *param_1 = uVar3;
  return;
}



/* Entry: 101ec6c78; end: 101ec6c93;  */

void FUN_101ec6c78(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101ec6c94; end: 101ec6cdf;  */

void FUN_101ec6c94(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ec6ce0; end: 101ec6d63;  */

void FUN_101ec6ce0(undefined8 param_1)

{
  if (lRam00000001134a18b8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e697ffc);
  return;
}



/* Entry: 101ec6d64; end: 101ec6d87;  */

void FUN_101ec6d64(undefined8 *param_1,undefined8 param_2)

{
  FUN_101ec6984();
  *param_1 = param_2;
  return;
}



/* Entry: 101ec6d88; end: 101ec6dcb;  */

void FUN_101ec6d88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e39458 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a97c8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e39458 = puVar1;
  return;
}



/* Entry: 101ec6dcc; end: 101ec6dd3;  */

undefined8 FUN_101ec6dcc(void)

{
  return 1;
}



/* Entry: 101ec6dd4; end: 101ec6e73;  */

void FUN_101ec6dd4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101ec6e74; end: 101ec6e93;  */

void FUN_101ec6e74(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 101ec6e94; end: 101ec6ed7;  */

void FUN_101ec6e94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_101ec7d74();
  uVar2 = uVar1;
  func_0x000100e2203c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsSYRzs17FixedWidthInteger8RawValueSYRpzrlE5_codeSivg_11034ee08)
            (param_1,param_2,uVar1,uVar2);
  return;
}



/* Entry: 101ec6ed8; end: 101ec6edf;  */

void FUN_101ec6ed8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 101ec6ee0; end: 101ec6f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ec6ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e39460) = 0xa4cb800;
  *(undefined8 *)(unaff_x20 + _DAT_112e39468) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e39470) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e39478) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ec6f68; end: 101ec6fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ec6f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e39460) = 0xa4cb800;
  *(undefined8 *)(unaff_x20 + _DAT_112e39468) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e39470) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e39478) = param_3;
  func_0x000101ec6fd0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ec6ff0; end: 101ec70ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ec6ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e39460) = 0xa4cb800;
  puVar1 = &UNK_110497398;
  func_0x000107c613fc(&UNK_110497398,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x0001000285a8(0x112e39380,&UNK_10da23af0);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  pcVar2 = FUN_101ec7100;
  func_0x0001000bdd8c(FUN_101ec7100,puVar1);
  *(code **)(unaff_x20 + _DAT_112e39468) = pcVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e39470) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e39478) = param_3;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 101ec7100; end: 101ec712f;  */

void FUN_101ec7100(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 101ec7130; end: 101ec7267; -[SCProcessedNotificationStorage initWithTransactor:messagingRecoveryPushTypes:growthRecoveryPushTypes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101ec7130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long *plVar4;
  long lStack_50;
  code *pcStack_48;
  
  puVar1 = PTR___sSSSHsWP_11034da90;
  puVar2 = PTR___sSSN_11034da80;
  plVar4 = &lStack_50;
  func_0x000107c5fe10(param_4,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c5fe10(param_5,puVar2,puVar1);
  *(undefined8 *)(param_1 + _DAT_112e39460) = 0xa4cb800;
  puVar2 = &UNK_110497450;
  func_0x000107c613fc(&UNK_110497450,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  func_0x0001000285a8(0x112e39380,&UNK_10da23af0);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  pcVar3 = FUN_101ec7fb0;
  func_0x0001000bdd8c(FUN_101ec7fb0,puVar2);
  *(code **)(param_1 + _DAT_112e39468) = pcVar3;
  *(undefined8 *)(param_1 + _DAT_112e39470) = param_4;
  *(undefined8 *)(param_1 + _DAT_112e39478) = param_5;
  func_0x000101ec6fd0();
  lStack_50 = param_1;
  pcStack_48 = pcVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_3);
  return (undefined1 *)plVar4;
}



/* Entry: 101ec7268; end: 101ec7297;  */

void FUN_101ec7268(void)

{
  func_0x000101ec6fd0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ec7298; end: 101ec72df; -[SCProcessedNotificationStorage .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ec72c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ec72c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ec7298(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e39468));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e39470));
  return;
}



/* Entry: 101ec72e0; end: 101ec74ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ec72e0(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  long lVar7;
  long alStack_80 [2];
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [8];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(alStack_80);
  if (alStack_80[0] == 0) {
    FUN_101ec7500();
    func_0x000107c613f8(&UNK_110497430,lVar3,0,0);
    func_0x000107c61654();
  }
  else {
    func_0x000107c5eea0(lVar6);
    func_0x000107c5ee8c();
    (**(code **)(lVar7 + 8))(lVar6,lVar2);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ec74f4);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ec74f8);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ec74fc);
      (*pcVar1)();
    }
    lStack_70 = (long)param_1 + -0xa4cb800;
    if (SCARRY8((long)param_1,-0xa4cb800)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ec7500);
      (*pcVar1)();
    }
    uVar4 = 0;
    FUN_101ec7f70(0,0x112e39458,&PTR_PTR_1126a97c8);
    func_0x0001031acfe4(0,0,FUN_101ec7540,alStack_80,alStack_80[0],uVar4,PTR___sytN_11034f1b0 + 8);
    if (unaff_x21 == 0) {
      uVar5 = 0x112d38270;
      lStack_70 = param_2;
      uStack_68 = param_3;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      func_0x0001031ac8e8(auStack_58,0,0,FUN_101ec7568,alStack_80,alStack_80[0],uVar4,uVar5);
      func_0x000107c61170(alStack_80[0]);
    }
    else {
      func_0x000107c61170(alStack_80[0]);
    }
  }
  return;
}



/* Entry: 101ec7500; end: 101ec753f;  */

void FUN_101ec7500(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e39480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da23c20;
  func_0x000107c61520(&UNK_10da23c20,&UNK_110497430);
  puRam0000000112e39480 = puVar1;
  return;
}



/* Entry: 101ec7540; end: 101ec7567;  */

void FUN_101ec7540(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001059ae22c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101ec7568; end: 101ec774f;  */

void FUN_101ec7568(long *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  
  func_0x0001059adee4(param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  uVar2 = 0;
  FUN_101ec7f70(0,0x112e394c8,&PTR_PTR_1126c0958);
  uVar3 = param_2;
  func_0x000107c5fc54(param_2,uVar2);
  func_0x000107c61170(param_2);
  if (uVar3 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar10 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar10 = uVar3;
    }
    func_0x000107c60480();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (uVar10 == 0) {
    func_0x000107c6142c(uVar3);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000100403514(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ec7750);
      (*pcVar1)();
    }
    uVar8 = 0;
    do {
      uVar7 = uVar3;
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar3 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar8;
        FUN_101ec7db4(uVar8,uVar3,&PTR_PTR_1126c0958,0x112e394c8);
      }
      func_0x000107c61174();
      uVar5 = uVar4;
      func_0x0001059ae624();
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar4);
      uVar4 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar4) {
        func_0x000100403514(1 < *(ulong *)(puVar9 + 0x18),uVar4 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puVar9 + 0x10) = uVar4 + 1;
      *(ulong *)(puVar9 + uVar4 * 0x10 + 0x20) = uVar6;
      *(ulong *)(puVar9 + uVar4 * 0x10 + 0x28) = uVar7;
    } while (uVar10 != uVar8);
    func_0x000107c6142c(uVar3);
  }
  *param_1 = (long)puVar9;
  return;
}



/* Entry: 101ec7750; end: 101ec780b; -[SCProcessedNotificationStorage getProcessedNotificationIdsForCategory:limit:error:] */

/* WARNING: Removing unreachable block (ram,0x000101ec779c) */
/* WARNING: Removing unreachable block (ram,0x000101ec77ec) */
/* WARNING: Removing unreachable block (ram,0x000101ec77a0) */

void FUN_101ec7750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  FUN_101ec72e0(param_3,param_4);
  func_0x000107c61170(param_1);
  uVar1 = param_3;
  func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101ec780c; end: 101ec78e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ec780c(undefined8 param_1)

{
  undefined8 uVar1;
  long alStack_50 [2];
  undefined8 uStack_40;
  
  uVar1 = param_1;
  func_0x0001000d224c(alStack_50);
  if (alStack_50[0] == 0) {
    FUN_101ec7500();
    func_0x000107c613f8(&UNK_110497430,uVar1,0,0);
    func_0x000107c61654();
  }
  else {
    uVar1 = 0;
    uStack_40 = param_1;
    FUN_101ec7f70(0,0x112e39458,&PTR_PTR_1126a97c8);
    func_0x0001031acfe4(0,0,FUN_101ec78e4,alStack_50,alStack_50[0],uVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(alStack_50[0]);
  }
  return;
}



/* Entry: 101ec78e4; end: 101ec7abb;  */

void FUN_101ec78e4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  if (uVar2 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar10 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar10 != 0) {
    uVar11 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ec7a80);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(uVar2 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar11;
        param_2 = uVar2;
        FUN_101ec7db4(uVar11,uVar2,&PTR_PTR_1126a97d0,0x112e394b8);
      }
      uVar1 = uVar11 + 1;
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ec7a7c);
        (*pcVar4)();
      }
      uVar7 = uVar6;
      func_0x000107c4d85c();
      func_0x000107c61180();
      uVar9 = param_2;
      if (uVar7 == 0) {
        func_0x000107c5faec();
        uVar9 = param_2;
        func_0x000107c5fadc();
        func_0x000107c6142c(param_2);
      }
      uVar8 = uVar3;
      func_0x000107c3f700(uVar3);
      func_0x000107c61170(uVar7);
      uVar7 = uVar6;
      func_0x000107c4d7e4();
      func_0x000107c61180();
      uVar5 = uVar9;
      if (uVar7 == 0) {
        func_0x000107c5faec();
        uVar5 = uVar9;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar9);
      }
      uVar9 = uVar6;
      func_0x000107c4d85c();
      func_0x000107c61180();
      if (uVar9 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar5);
      }
      uVar5 = uVar6;
      func_0x000107c5ca68(uVar6);
      param_2 = uVar7;
      func_0x0001059ae094(param_1,uVar7,uVar9,uVar5,uVar8);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      uVar11 = uVar11 + 1;
    } while (uVar1 != uVar10);
  }
  return;
}



/* Entry: 101ec7abc; end: 101ec7abf;  */

void FUN_101ec7abc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e39488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da23b80;
  func_0x000107c61520(&UNK_10da23b80,&UNK_110497430);
  puRam0000000112e39488 = puVar1;
  return;
}



/* Entry: 101ec7ac0; end: 101ec7aff;  */

void FUN_101ec7ac0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e39488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da23b80;
  func_0x000107c61520(&UNK_10da23b80,&UNK_110497430);
  puRam0000000112e39488 = puVar1;
  return;
}



/* Entry: 101ec7b00; end: 101ec7beb;  */

uint FUN_101ec7b00(uint *param_1,int param_2)

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



/* Entry: 101ec7bec; end: 101ec7cc3; -[SCProcessedNotificationStorage storeProcessedNotifications:error:] */

/* WARNING: Possible PIC construction at 0x000101ec7c74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ec7c78) */
/* WARNING: Removing unreachable block (ram,0x000101ec7c60) */
/* WARNING: Removing unreachable block (ram,0x000101ec7cac) */
/* WARNING: Removing unreachable block (ram,0x000101ec7c64) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */

void FUN_101ec7bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101ec7f70(0,0x112e394b8,&PTR_PTR_1126a97d0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_101ec780c(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  if (param_4 != (undefined8 *)0x0) {
    func_0x000107c61104(0);
    *param_4 = 0;
  }
  return;
}



/* Entry: 101ec7cc4; end: 101ec7d73; -[SCProcessedNotificationStorage categoryFromPushTypeWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101ec7cc4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e39470);
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x0001000f66f0(param_3,param_2,uVar2);
  if ((uVar1 & 1) == 0) {
    func_0x0001000f66f0(param_3,param_2,*(undefined8 *)(param_1 + _DAT_112e39478));
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
    uVar2 = 2;
    if ((param_3 & 1) == 0) {
      uVar2 = 0;
    }
  }
  else {
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 101ec7d74; end: 101ec7db3;  */

void FUN_101ec7d74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e394c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da23be8;
  func_0x000107c61520(&UNK_10da23be8,&UNK_110497430);
  puRam0000000112e394c0 = puVar1;
  return;
}



/* Entry: 101ec7db4; end: 101ec7f6f;  */

ulong FUN_101ec7db4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ec7e98);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ec7e9c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101ec7f70(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ec7f70);
  (*pcVar2)();
}


