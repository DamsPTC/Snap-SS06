/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101cf1f34; end: 101cf1fc7; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider lensPlusGameLensIgnoreUnlockTouchEnabled] */

undefined8 FUN_101cf1f34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f00bb70);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 101cf1fc8; end: 101cf22af; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider infoCardMiniCameraEnabled] */

undefined8 FUN_101cf1fc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f00bbe0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 101cf22b0; end: 101cf22ff; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider spotlightSuggestingCategoryIds] */

void FUN_101cf22b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_101cf2300();
  func_0x000107c61574(param_1);
  uVar2 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101cf2300; end: 101cf235b;  */

long FUN_101cf2300(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x88);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    FUN_101cf2394();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
    *(long *)(unaff_x20 + 0x88) = lVar2;
    func_0x000107c61434();
    func_0x000107c6142c(uVar3);
    lVar1 = 0;
  }
  func_0x000107c61434(lVar1);
  return lVar2;
}



/* Entry: 101cf235c; end: 101cf2393; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider setSpotlightSuggestingCategoryIds:] */

void FUN_101cf235c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 101cf2394; end: 101cf2463;  */

undefined8 FUN_101cf2394(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  uVar2 = 0xd00000000000003b;
  func_0x000107c5fadc(0xd00000000000003b,0x800000010f00bdb0);
  puVar1 = PTR___sSSN_11034da80;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  uVar4 = uStack_48;
  func_0x000107c5c15c(uStack_48);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  uVar2 = uVar4;
  func_0x000107c5fc54(uVar4,puVar1);
  func_0x000107c61170(uVar4);
  return uVar2;
}



/* Entry: 101cf2464; end: 101cf2497; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider previewCarouselBarAnchorEnabled] */

uint FUN_101cf2464(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_101cf2498();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 101cf2498; end: 101cf2537;  */

uint FUN_101cf2498(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar3 = (uint)*(byte *)(unaff_x20 + 0x90);
  if (*(byte *)(unaff_x20 + 0x90) == 2) {
    FUN_101cf4efc();
    func_0x0001000d224c(&uStack_38);
    uVar1 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010f00bd40);
    uVar2 = uStack_38;
    func_0x000107c3ebd4();
    uVar3 = (uint)uVar2;
    func_0x000107c615e8(uStack_38);
    func_0x000107c61170(uVar1);
    *(char *)(unaff_x20 + 0x90) = (char)uVar2;
  }
  return uVar3 & 1;
}



/* Entry: 101cf2538; end: 101cf253f; -[_TtC21LensConfigurationImpl26LensCarouselConfigProvider setPreviewCarouselBarAnchorEnabled:] */

void FUN_101cf2538(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 101cf2540; end: 101cf25b3;  */

void FUN_101cf2540(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000100ccdb48(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000100ccdb48(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 101cf25b4; end: 101cf25d3;  */

void FUN_101cf25b4(void)

{
  func_0x000101cf08c4();
  return;
}



/* Entry: 101cf25d4; end: 101cf26e3;  */

undefined8 FUN_101cf25d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f00b700);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101cf26e4; end: 101cf276f;  */

void FUN_101cf26e4(void)

{
  FUN_101cf0f64();
  return;
}



/* Entry: 101cf2770; end: 101cf27f7;  */

undefined8 FUN_101cf2770(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000038;
  func_0x000107c5fadc(0xd000000000000038,0x800000010f00b8a0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101cf27f8; end: 101cf28a7;  */

uint FUN_101cf27f8(uint param_1)

{
  FUN_101cf15b0();
  return param_1 & 1;
}



/* Entry: 101cf28a8; end: 101cf28ab;  */

undefined * FUN_101cf28a8(undefined *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar5 = &uStack_80;
  FUN_101cf56b0();
  uStack_80 = 0x2c;
  uStack_78 = 0xe100000000000000;
  puStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000100e8b654();
  func_0x000107c601dc(&uStack_80,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_1,param_1);
  func_0x000107c6142c(param_2);
  uVar9 = 0;
  uVar10 = *(ulong *)((long)puVar5 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar7 = (ulong *)((long)puVar5 + uVar9 * 0x10 + 0x28);
    do {
      if (uVar10 == uVar9) {
        func_0x000107c6142c(puVar5);
        return puVar8;
      }
      if (*(ulong *)((long)puVar5 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101cf3a3c);
        (*pcVar4)();
      }
      uVar1 = puVar7[-1];
      uVar3 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar9 = uVar9 + 1;
      uVar2 = uVar1 & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar2 = uVar3 >> 0x38 & 0xf;
      }
    } while (uVar2 == 0);
    func_0x000107c61434(uVar3);
    puVar6 = puVar8;
    func_0x000107c61558();
    puStack_70 = puVar8;
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000100403514(0,*(long *)(puVar8 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(puStack_70 + 0x10);
    if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar2) {
      func_0x000100403514(1 < *(ulong *)(puStack_70 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(puStack_70 + 0x10) = uVar2 + 1;
    *(ulong *)(puStack_70 + uVar2 * 0x10 + 0x20) = uVar1;
    *(ulong *)(puStack_70 + uVar2 * 0x10 + 0x28) = uVar3;
    puVar8 = puStack_70;
  } while( true );
}



/* Entry: 101cf28ac; end: 101cf28cb;  */

void FUN_101cf28ac(void)

{
  FUN_101cf177c();
  return;
}



/* Entry: 101cf28cc; end: 101cf2bfb;  */

undefined8 FUN_101cf28cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f00b980);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101cf2bfc; end: 101cf2c3b;  */

void FUN_101cf2bfc(void)

{
  func_0x000101cf1e2c();
  return;
}



/* Entry: 101cf2c3c; end: 101cf2cc3;  */

undefined8 FUN_101cf2c3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f00bb70);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101cf2cc4; end: 101cf2ce3;  */

void FUN_101cf2cc4(void)

{
  func_0x000101cf1c44();
  return;
}



/* Entry: 101cf2ce4; end: 101cf2f03;  */

undefined8 FUN_101cf2ce4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd000000000000038;
  func_0x000107c5fadc(0xd000000000000038,0x800000010f00bba0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101cf2f04; end: 101cf2fc7;  */

void FUN_101cf2f04(void)

{
  func_0x000101cf205c();
  return;
}



/* Entry: 101cf2fc8; end: 101cf3287;  */

undefined8 FUN_101cf2fc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0xd00000000000003b;
  func_0x000107c5fadc(0xd00000000000003b,0x800000010f00bd70);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101cf3288; end: 101cf3347;  */

undefined * FUN_101cf3288(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long extraout_x8;
  undefined *unaff_x20;
  long lVar14;
  long lVar15;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [24];
  long lStack_c0;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_2);
  lVar4 = 0;
  if (unaff_x20 == (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar5 = 0;
  func_0x000107c5ed50();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = (long)&lStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar4;
  func_0x000107c51c18();
  func_0x000107c61180();
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101cf3600);
    (*pcVar3)();
  }
  lStack_140 = lVar13;
  lStack_138 = lVar14;
  lStack_130 = lVar4;
  func_0x000107c600f4(lVar15);
  func_0x000100e15a08();
  func_0x000107c601c0(auStack_d8,lVar5,lVar13);
  puVar2 = PTR___sypN_11034f1a8;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (lStack_c0 != 0) {
    func_0x000100102924(auStack_d8,auStack_f8);
    func_0x0001000bb420(auStack_f8,auStack_118);
    uVar6 = 0;
    FUN_101cf3bac(0,0x112e1c588,&PTR_PTR_1126a9178);
    plVar7 = &lStack_120;
    puVar12 = auStack_118;
    func_0x000107c6147c(plVar7,puVar12,puVar2 + 8,uVar6,6);
    lVar4 = lStack_120;
    if ((int)plVar7 == 0) {
      func_0x000100183ab8(auStack_f8);
    }
    else {
      func_0x000107c5bdf4(lStack_120);
      lVar14 = lVar4;
      uVar6 = param_1;
      func_0x000107c44dc4();
      func_0x000107c61180();
      if (lVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101cf35fc);
        (*pcVar3)();
      }
      lVar8 = lVar14;
      func_0x000107c5faec();
      lStack_128 = lVar8;
      func_0x000107c61170(lVar14);
      func_0x000107c61170(lVar4);
      func_0x000100183ab8(auStack_f8);
      puVar9 = puVar11;
      func_0x000107c61558();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        func_0x000101cf316c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar1 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        func_0x000101cf316c(puVar11,uVar1 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar1 + 1;
      *(int *)(puVar11 + uVar1 * 0x18 + 0x20) = (int)param_1;
      *(long *)(puVar11 + uVar1 * 0x18 + 0x28) = lStack_128;
      *(undefined1 **)(puVar11 + uVar1 * 0x18 + 0x30) = puVar12;
      param_1 = uVar6;
    }
    func_0x000107c601c0(auStack_d8,lVar5,lVar13);
  }
  func_0x000107c61170(lStack_140);
  (**(code **)(lStack_138 + 8))(lVar15,lVar5);
  lVar4 = lStack_130;
  func_0x000107c3dcb0(lStack_130);
  func_0x000107c42d88();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    return puVar11;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101cf3604);
  (*pcVar3)();
}



/* Entry: 101cf3348; end: 101cf3603;  */

undefined * FUN_101cf3348(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long extraout_x8;
  long lVar14;
  long lVar15;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [24];
  long lStack_80;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = (long)&lStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = param_2;
  func_0x000107c51c18();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101cf3600);
    (*pcVar3)();
  }
  lStack_100 = lVar5;
  lStack_f8 = lVar14;
  lStack_f0 = param_2;
  func_0x000107c600f4(lVar15);
  func_0x000100e15a08();
  func_0x000107c601c0(auStack_98,lVar4,lVar5);
  puVar2 = PTR___sypN_11034f1a8;
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (lStack_80 != 0) {
    func_0x000100102924(auStack_98,auStack_b8);
    func_0x0001000bb420(auStack_b8,auStack_d8);
    uVar6 = 0;
    FUN_101cf3bac(0,0x112e1c588,&PTR_PTR_1126a9178);
    plVar7 = &lStack_e0;
    puVar13 = auStack_d8;
    func_0x000107c6147c(plVar7,puVar13,puVar2 + 8,uVar6,6);
    lVar14 = lStack_e0;
    if ((int)plVar7 == 0) {
      func_0x000100183ab8(auStack_b8);
    }
    else {
      func_0x000107c5bdf4(lStack_e0);
      lVar8 = lVar14;
      uVar6 = param_1;
      func_0x000107c44dc4();
      func_0x000107c61180();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101cf35fc);
        (*pcVar3)();
      }
      lVar9 = lVar8;
      func_0x000107c5faec();
      lStack_e8 = lVar9;
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar14);
      func_0x000100183ab8(auStack_b8);
      puVar10 = puVar12;
      func_0x000107c61558();
      puVar11 = puVar12;
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        func_0x000101cf316c(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar1 = *(ulong *)(puVar11 + 0x10);
      puVar12 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        func_0x000101cf316c(puVar12,uVar1 + 1,1,puVar11);
      }
      *(ulong *)(puVar12 + 0x10) = uVar1 + 1;
      *(int *)(puVar12 + uVar1 * 0x18 + 0x20) = (int)param_1;
      *(long *)(puVar12 + uVar1 * 0x18 + 0x28) = lStack_e8;
      *(undefined1 **)(puVar12 + uVar1 * 0x18 + 0x30) = puVar13;
      param_1 = uVar6;
    }
    func_0x000107c601c0(auStack_98,lVar4,lVar5);
  }
  func_0x000107c61170(lStack_100);
  (**(code **)(lStack_f8 + 8))(lVar15,lVar4);
  lVar5 = lStack_f0;
  func_0x000107c3dcb0(lStack_f0);
  func_0x000107c42d88();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
    return puVar12;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101cf3604);
  (*pcVar3)();
}



/* Entry: 101cf3604; end: 101cf36fb;  */

void FUN_101cf3604(long *param_1,uint param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_3;
  func_0x000107c5dc3c();
  if ((int)lVar5 == 1) {
    func_0x000107c44dc4();
    func_0x000107c61180();
    if (param_3 != 0) {
      lVar5 = param_3;
      func_0x000107c5faec();
      func_0x000107c61170(param_3);
      lVar3 = 0;
      uVar2 = 0;
      lVar4 = 0;
      param_5 = 0;
      goto LAB_101cf36d4;
    }
  }
  else if ((int)lVar5 == 2) {
    func_0x000107c4b648();
    func_0x000107c61180();
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101cf36fc);
      (*pcVar1)();
    }
    lVar3 = param_3;
    FUN_101cf3348();
    func_0x000107c61170(param_3);
    lVar5 = 0;
    uVar2 = (ulong)param_2;
    lVar4 = param_4;
    param_4 = 0;
    goto LAB_101cf36d4;
  }
  lVar3 = 0;
  uVar2 = 0;
  lVar4 = 0;
  param_5 = 0;
  lVar5 = 0;
  param_4 = 0;
LAB_101cf36d4:
  *param_1 = lVar5;
  param_1[1] = param_4;
  param_1[2] = lVar3;
  param_1[3] = uVar2;
  param_1[4] = lVar4;
  param_1[5] = param_5;
  return;
}



/* Entry: 101cf36fc; end: 101cf38e3;  */

void FUN_101cf36fc(undefined8 *param_1,long param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_2;
  func_0x000107c446dc();
  if ((int)lVar3 == 0) {
    uStack_120 = 1;
    uStack_f0 = 0;
    uStack_110 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    uStack_100 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c3d124();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101cf38dc);
      (*pcVar2)();
    }
    FUN_101cf3604(auStack_c0);
    auVar6._8_8_ = uStack_a8;
    auVar6._0_8_ = uStack_b0;
    auVar5._8_8_ = uStack_a8;
    auVar5._0_8_ = uStack_b0;
    uStack_d0 = auStack_a0._0_8_;
    auVar4 = NEON_ext(auStack_a0,auStack_a0,8,1);
    uStack_100 = auVar4._0_8_;
    uStack_f0 = uStack_b0;
    auVar6 = NEON_ext(auVar5,auVar6,8,1);
    uStack_e0 = auStack_c0._0_8_;
    auVar5 = NEON_ext(auStack_c0,auStack_c0,8,1);
    uStack_120 = auVar5._0_8_;
    uStack_110 = auVar6._0_8_;
    func_0x000107c61170(lVar3);
  }
  lVar3 = param_2;
  func_0x000107c446e4();
  if ((int)lVar3 == 0) {
    uStack_180 = 1;
    uStack_150 = 0;
    uStack_140 = 0;
    uStack_130 = 0;
    uStack_170 = 0;
    uStack_160 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c3d1b8();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101cf38e0);
      (*pcVar2)();
    }
    FUN_101cf3604(auStack_90);
    auVar1._8_8_ = uStack_78;
    auVar1._0_8_ = uStack_80;
    auVar4._8_8_ = uStack_78;
    auVar4._0_8_ = uStack_80;
    uStack_150 = uStack_80;
    uStack_140 = auStack_70._0_8_;
    auVar6 = NEON_ext(auStack_70,auStack_70,8,1);
    auVar5 = NEON_ext(auVar4,auVar1,8,1);
    uStack_170 = auVar5._0_8_;
    uStack_160 = auVar6._0_8_;
    uStack_130 = auStack_90._0_8_;
    auVar5 = NEON_ext(auStack_90,auStack_90,8,1);
    uStack_180 = auVar5._0_8_;
    func_0x000107c61170(lVar3);
  }
  lVar3 = param_2;
  func_0x000107c446d4();
  if ((int)lVar3 == 0) {
    uStack_58 = 1;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x000107c3d0f0();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101cf38e4);
      (*pcVar2)();
    }
    FUN_101cf3604(&uStack_60);
    func_0x000107c61170(param_2);
  }
  param_1[1] = uStack_120;
  *param_1 = uStack_e0;
  param_1[3] = uStack_110;
  param_1[2] = uStack_f0;
  param_1[5] = uStack_100;
  param_1[4] = uStack_d0;
  param_1[7] = uStack_180;
  param_1[6] = uStack_130;
  param_1[9] = uStack_170;
  param_1[8] = uStack_150;
  param_1[0xb] = uStack_160;
  param_1[10] = uStack_140;
  param_1[0xd] = uStack_58;
  param_1[0xc] = uStack_60;
  param_1[0xf] = uStack_48;
  param_1[0xe] = uStack_50;
  param_1[0x11] = uStack_38;
  param_1[0x10] = uStack_40;
  return;
}



/* Entry: 101cf38e4; end: 101cf3a3b;  */

undefined * FUN_101cf38e4(undefined *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar5 = &uStack_80;
  FUN_101cf56b0();
  uStack_80 = 0x2c;
  uStack_78 = 0xe100000000000000;
  puStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000100e8b654();
  func_0x000107c601dc(&uStack_80,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_1,param_1);
  func_0x000107c6142c(param_2);
  uVar9 = 0;
  uVar10 = *(ulong *)((long)puVar5 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar7 = (ulong *)((long)puVar5 + uVar9 * 0x10 + 0x28);
    do {
      if (uVar10 == uVar9) {
        func_0x000107c6142c(puVar5);
        return puVar8;
      }
      if (*(ulong *)((long)puVar5 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101cf3a3c);
        (*pcVar4)();
      }
      uVar1 = puVar7[-1];
      uVar3 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar9 = uVar9 + 1;
      uVar2 = uVar1 & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar2 = uVar3 >> 0x38 & 0xf;
      }
    } while (uVar2 == 0);
    func_0x000107c61434(uVar3);
    puVar6 = puVar8;
    func_0x000107c61558();
    puStack_70 = puVar8;
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000100403514(0,*(long *)(puVar8 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(puStack_70 + 0x10);
    if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar2) {
      func_0x000100403514(1 < *(ulong *)(puStack_70 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(puStack_70 + 0x10) = uVar2 + 1;
    *(ulong *)(puStack_70 + uVar2 * 0x10 + 0x20) = uVar1;
    *(ulong *)(puStack_70 + uVar2 * 0x10 + 0x28) = uVar3;
    puVar8 = puStack_70;
  } while( true );
}



/* Entry: 101cf3a3c; end: 101cf3a8b;  */

void FUN_101cf3a3c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e1c558 != 0) {
    return;
  }
  puVar1 = &UNK_11046fed8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e1c558 = param_1;
  return;
}



/* Entry: 101cf3a8c; end: 101cf3a9f;  */

undefined1  [16] FUN_101cf3a8c(void)

{
  return ZEXT816(0x11046fef8);
}



/* Entry: 101cf3aa0; end: 101cf3adf;  */

void FUN_101cf3aa0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c560 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdb88;
  func_0x000107c61520(&UNK_10d9fdb88,&UNK_11046fef8);
  puRam0000000112e1c560 = puVar1;
  return;
}



/* Entry: 101cf3ae0; end: 101cf3ae3;  */

void FUN_101cf3ae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdb58;
  func_0x000107c61520(&UNK_10d9fdb58,&UNK_11046fef8);
  puRam0000000112e1c568 = puVar1;
  return;
}



/* Entry: 101cf3ae4; end: 101cf3b23;  */

void FUN_101cf3ae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdb58;
  func_0x000107c61520(&UNK_10d9fdb58,&UNK_11046fef8);
  puRam0000000112e1c568 = puVar1;
  return;
}



/* Entry: 101cf3b24; end: 101cf3b27;  */

void FUN_101cf3b24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c570 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdc78;
  func_0x000107c61520(&UNK_10d9fdc78,&UNK_11046fef8);
  puRam0000000112e1c570 = puVar1;
  return;
}



/* Entry: 101cf3b28; end: 101cf3b67;  */

void FUN_101cf3b28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c570 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdc78;
  func_0x000107c61520(&UNK_10d9fdc78,&UNK_11046fef8);
  puRam0000000112e1c570 = puVar1;
  return;
}



/* Entry: 101cf3b68; end: 101cf3b6b;  */

void FUN_101cf3b68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdbb0;
  func_0x000107c61520(&UNK_10d9fdbb0,&UNK_11046fef8);
  puRam0000000112e1c578 = puVar1;
  return;
}



/* Entry: 101cf3b6c; end: 101cf3bab;  */

void FUN_101cf3b6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdbb0;
  func_0x000107c61520(&UNK_10d9fdbb0,&UNK_11046fef8);
  puRam0000000112e1c578 = puVar1;
  return;
}



/* Entry: 101cf3bac; end: 101cf3beb;  */

void FUN_101cf3bac(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101cf3bec; end: 101cf3bf3;  */

bool FUN_101cf3bec(ulong *param_1)

{
  ulong *unaff_x20;
  
  return (*param_1 & (*unaff_x20 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 101cf3bf4; end: 101cf3c77;  */

void FUN_101cf3bf4(void)

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



/* Entry: 101cf3c78; end: 101cf3d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cf3c78(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e1c5a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e1c5b0) = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_112e1c5b8) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112e1c5c0) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112e1c5c8) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101cf3d14; end: 101cf3d6f; -[_TtC21LensConfigurationImpl23LensDebugConfigProvider init] */

void FUN_101cf3d14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensConfigurationImpl.LensDebugConfigProvider",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cf3d40);
  (*pcVar1)();
}



/* Entry: 101cf3d70; end: 101cf3da7; -[_TtC21LensConfigurationImpl23LensDebugConfigProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cf3d70(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e1c5a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e1c5b0));
  return;
}



/* Entry: 101cf3da8; end: 101cf3e3b; -[_TtC21LensConfigurationImpl23LensDebugConfigProvider intValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101cf3da8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x0001007405f4(0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e1c5b0);
  func_0x000107c4980c(uVar1,param_2,param_3,param_4,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101cf3e3c; end: 101cf3ecf; -[_TtC21LensConfigurationImpl23LensDebugConfigProvider longValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101cf3e3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x0001007405f4(0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e1c5b0);
  func_0x000107c4c0d0(uVar1,param_2,param_3,param_4,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101cf3ed0; end: 101cf3f6b; -[_TtC21LensConfigurationImpl23LensDebugConfigProvider floatValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101cf3ed0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x0001007405f4(0);
  func_0x000107c436e4(param_1,*(undefined8 *)(param_2 + _DAT_112e1c5b0),param_3,param_4,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  return param_1;
}



/* Entry: 101cf3f6c; end: 101cf4043; -[_TtC21LensConfigurationImpl23LensDebugConfigProvider stringValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cf3f6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x0001007405f4(0);
  lVar1 = *(long *)(param_1 + _DAT_112e1c5b0);
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  if (lVar1 == 0) {
    lVar1 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 101cf4044; end: 101cf40fb; -[_TtC21LensConfigurationImpl23LensDebugConfigProvider protoValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cf4044(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x0001007405f4(1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e1c5b0);
  func_0x000107c4f558(uVar1,param_2,param_3,param_4,param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101cf40fc; end: 101cf4223; -[_TtC21LensConfigurationImpl23LensDebugConfigProvider stringArrayValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cf40fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x0001007405f4(0);
  lVar2 = *(long *)(param_1 + _DAT_112e1c5b0);
  if (param_4 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_4;
    func_0x000107c5fc48(param_4,PTR___sSSN_11034da80);
  }
  func_0x000107c5c15c();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
    func_0x000107c5fc54(0,PTR___sSSN_11034da80);
    lVar2 = lVar1;
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101cf4224; end: 101cf424b; -[_TtC21LensConfigurationImpl23LensDebugConfigProvider manualExposureValueForConfigKeySync:featureProvidedSignals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cf4224(long param_1)

{
  func_0x000107c4c270(*(undefined8 *)(param_1 + _DAT_112e1c5b0));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101cf424c; end: 101cf424f;  */

void FUN_101cf424c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c5d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdd00;
  func_0x000107c61520(&UNK_10d9fdd00,&UNK_1104700b0);
  puRam0000000112e1c5d0 = puVar1;
  return;
}



/* Entry: 101cf4250; end: 101cf428f;  */

void FUN_101cf4250(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c5d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdd00;
  func_0x000107c61520(&UNK_10d9fdd00,&UNK_1104700b0);
  puRam0000000112e1c5d0 = puVar1;
  return;
}



/* Entry: 101cf4290; end: 101cf4293;  */

void FUN_101cf4290(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c5d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdd68;
  func_0x000107c61520(&UNK_10d9fdd68,&UNK_110470140);
  puRam0000000112e1c5d8 = puVar1;
  return;
}



/* Entry: 101cf4294; end: 101cf42d3;  */

void FUN_101cf4294(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c5d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdd68;
  func_0x000107c61520(&UNK_10d9fdd68,&UNK_110470140);
  puRam0000000112e1c5d8 = puVar1;
  return;
}



/* Entry: 101cf42d4; end: 101cf448f;  */

void FUN_101cf42d4(void)

{
  return;
}



/* Entry: 101cf4490; end: 101cf4673;  */

void FUN_101cf4490(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x64656c62616e45;
  if (cVar4 != '\x01') {
    uVar3 = 0x64656c6261736944;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe800000000000000;
  }
  uVar2 = 0x7473655420422f41;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cf4674; end: 101cf472f;  */

void FUN_101cf4674(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x64656c62616e45;
  if (cVar4 != '\x01') {
    uVar3 = 0x64656c6261736944;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe800000000000000;
  }
  uVar2 = 0x7473655420422f41;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 101cf4730; end: 101cf47d3;  */

void FUN_101cf4730(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e1c608;
  func_0x0001000285a8(0x112e1c608,&UNK_10d9fddf8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101cf47d4; end: 101cf47d7;  */

void FUN_101cf47d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fde00;
  func_0x000107c61520(&UNK_10d9fde00,&UNK_1104702a8);
  puRam0000000112e1c610 = puVar1;
  return;
}



/* Entry: 101cf47d8; end: 101cf4817;  */

void FUN_101cf47d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fde00;
  func_0x000107c61520(&UNK_10d9fde00,&UNK_1104702a8);
  puRam0000000112e1c610 = puVar1;
  return;
}



/* Entry: 101cf4818; end: 101cf4843;  */

void FUN_101cf4818(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101cf4844();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101cf4884();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101cf4844; end: 101cf48c3;  */

void FUN_101cf4844(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdec8;
  func_0x000107c61520(&UNK_10d9fdec8,&UNK_1104702a8);
  puRam0000000112e1c618 = puVar1;
  return;
}



/* Entry: 101cf48c4; end: 101cf48c7;  */

void FUN_101cf48c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e1c628 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e1c630;
  func_0x00010002969c(0x112e1c630,&UNK_10d9fdec0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e1c628 = puVar2;
  return;
}



/* Entry: 101cf48c8; end: 101cf4917;  */

void FUN_101cf48c8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e1c628 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e1c630;
  func_0x00010002969c(0x112e1c630,&UNK_10d9fdec0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e1c628 = puVar2;
  return;
}



/* Entry: 101cf4918; end: 101cf4a7b;  */

int FUN_101cf4918(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101cf4994;
        goto LAB_101cf4978;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101cf4978:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101cf4994:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101cf4a7c; end: 101cf4abb;  */

undefined8 FUN_101cf4a7c(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e1c6d8,auStack_38,0,0);
  return uRam0000000112e1c6d8;
}



/* Entry: 101cf4abc; end: 101cf4adf;  */

undefined1  [16] FUN_101cf4abc(void)

{
  return ZEXT816(0x110470348);
}



/* Entry: 101cf4ae0; end: 101cf4cab;  */

void FUN_101cf4ae0(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  pcVar1 = "pe down collapses LE";
  uVar4 = 0xd00000000000001b;
  if (cVar3 != '\x01') {
    pcVar1 = "onfigProvider";
    uVar4 = 0xd000000000000024;
  }
  pcVar2 = "Reply camera swipe up to LE";
  uVar5 = 0xd000000000000019;
  if (cVar3 != '\0') {
    pcVar2 = pcVar1;
    uVar5 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar5,(ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cf4cac; end: 101cf4d07;  */

void FUN_101cf4cac(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  pcVar1 = "pe down collapses LE";
  uVar3 = 0xd00000000000001b;
  if (*unaff_x20 != '\x01') {
    pcVar1 = "onfigProvider";
    uVar3 = 0xd000000000000024;
  }
  pcVar2 = "Reply camera swipe up to LE";
  uVar4 = 0xd000000000000019;
  if (*unaff_x20 != '\0') {
    pcVar2 = pcVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = (ulong)pcVar2 | 0x8000000000000000;
  return;
}



/* Entry: 101cf4d08; end: 101cf4d47;  */

undefined8 FUN_101cf4d08(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e1c718,auStack_38,0,0);
  return uRam0000000112e1c718;
}



/* Entry: 101cf4d48; end: 101cf4da7;  */

void FUN_101cf4d48(void)

{
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(0x112e1c758,auStack_28,0,0);
  return;
}



/* Entry: 101cf4da8; end: 101cf4daf;  */

undefined8 FUN_101cf4da8(void)

{
  return 1;
}



/* Entry: 101cf4db0; end: 101cf4e03;  */

void FUN_101cf4db0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0xd000000000000027,0x800000010f00bf30);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cf4e04; end: 101cf4e1f;  */

void FUN_101cf4e04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0xd000000000000027,0x800000010f00bf30);
  return;
}



/* Entry: 101cf4e20; end: 101cf4e6f;  */

void FUN_101cf4e20(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0xd000000000000027,0x800000010f00bf30);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cf4e70; end: 101cf4edb;  */

void FUN_101cf4e70(undefined8 param_1,long param_2)

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



/* Entry: 101cf4edc; end: 101cf4efb;  */

void FUN_101cf4edc(undefined8 *param_1)

{
  *param_1 = 0xd000000000000027;
  param_1[1] = 0x800000010f00bf30;
  return;
}



/* Entry: 101cf4efc; end: 101cf4f2b;  */

void FUN_101cf4efc(void)

{
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(0x112e1c7c8,auStack_28,0,0);
  return;
}



/* Entry: 101cf4f2c; end: 101cf4f8f;  */

ulong FUN_101cf4f2c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 101cf4f90; end: 101cf4f93;  */

void FUN_101cf4f90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdf38;
  func_0x000107c61520(&UNK_10d9fdf38,&UNK_1104703f8);
  puRam0000000112e1c800 = puVar1;
  return;
}



/* Entry: 101cf4f94; end: 101cf4fd3;  */

void FUN_101cf4f94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdf38;
  func_0x000107c61520(&UNK_10d9fdf38,&UNK_1104703f8);
  puRam0000000112e1c800 = puVar1;
  return;
}



/* Entry: 101cf4fd4; end: 101cf4fd7;  */

void FUN_101cf4fd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdfd8;
  func_0x000107c61520(&UNK_10d9fdfd8,&UNK_1104704a8);
  puRam0000000112e1c808 = puVar1;
  return;
}



/* Entry: 101cf4fd8; end: 101cf5017;  */

void FUN_101cf4fd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fdfd8;
  func_0x000107c61520(&UNK_10d9fdfd8,&UNK_1104704a8);
  puRam0000000112e1c808 = puVar1;
  return;
}



/* Entry: 101cf5018; end: 101cf528f;  */

undefined1  [16] FUN_101cf5018(void)

{
  return ZEXT816(0x110470368);
}



/* Entry: 101cf5290; end: 101cf52e3;  */

void FUN_101cf5290(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0xd000000000000020,0x800000010f00bf60);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cf52e4; end: 101cf52ff;  */

void FUN_101cf52e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0xd000000000000020,0x800000010f00bf60);
  return;
}



/* Entry: 101cf5300; end: 101cf534f;  */

void FUN_101cf5300(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0xd000000000000020,0x800000010f00bf60);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cf5350; end: 101cf53bb;  */

void FUN_101cf5350(undefined8 param_1,long param_2)

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



/* Entry: 101cf53bc; end: 101cf53db;  */

void FUN_101cf53bc(undefined8 *param_1)

{
  *param_1 = 0xd000000000000020;
  param_1[1] = 0x800000010f00bf60;
  return;
}



/* Entry: 101cf53dc; end: 101cf541b;  */

undefined1 FUN_101cf53dc(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e1c8c0,auStack_38,0,0);
  return uRam0000000112e1c8c0;
}



/* Entry: 101cf541c; end: 101cf541f;  */

void FUN_101cf541c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fe0a0;
  func_0x000107c61520(&UNK_10d9fe0a0,&UNK_1104705b0);
  puRam0000000112e1c900 = puVar1;
  return;
}



/* Entry: 101cf5420; end: 101cf545f;  */

void FUN_101cf5420(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1c900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9fe0a0;
  func_0x000107c61520(&UNK_10d9fe0a0,&UNK_1104705b0);
  puRam0000000112e1c900 = puVar1;
  return;
}



/* Entry: 101cf5460; end: 101cf5563;  */

undefined1  [16] FUN_101cf5460(void)

{
  return ZEXT816(0x110470520);
}



/* Entry: 101cf5564; end: 101cf55b7;  */

void FUN_101cf5564(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0xd000000000000017,0x800000010f00bf90);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cf55b8; end: 101cf55d3;  */

void FUN_101cf55b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0xd000000000000017,0x800000010f00bf90);
  return;
}



/* Entry: 101cf55d4; end: 101cf5623;  */

void FUN_101cf55d4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0xd000000000000017,0x800000010f00bf90);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cf5624; end: 101cf568f;  */

void FUN_101cf5624(undefined8 param_1,long param_2)

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



/* Entry: 101cf5690; end: 101cf56af;  */

void FUN_101cf5690(undefined8 *param_1)

{
  *param_1 = 0xd000000000000017;
  param_1[1] = 0x800000010f00bf90;
  return;
}



/* Entry: 101cf56b0; end: 101cf56ff;  */

undefined1  [16] FUN_101cf56b0(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e1c948,auStack_38,0,0);
  auVar1._8_8_ = uRam0000000112e1c950;
  auVar1._0_8_ = uRam0000000112e1c948;
  func_0x000107c61434(uRam0000000112e1c950);
  return auVar1;
}


