/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103bc2200; end: 103bc2257; -[SCMemoriesClientGenContentLocalEntry description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc2200(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_112ff4328) == '\x01') {
    if (*(long *)(param_1 + _DAT_112ff4330) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc2228);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_112ff4338) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc2258);
    (*pcVar1)();
  }
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc2258; end: 103bc229f; -[SCMemoriesClientGenContentLocalEntry init] */

void FUN_103bc2258(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesClientGenContentModelMakerPlugInScope/SCMemoriesClientGenContentLocalEntryWrapper.swift"
                      ,0x61,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc22a0);
  (*pcVar1)();
}



/* Entry: 103bc22a0; end: 103bc22a3; -[SCMemoriesClientGenContentLocalEntry copyWithZone:] */

void FUN_103bc22a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bc22a4; end: 103bc2317; +[SCMemoriesClientGenContentLocalEntry galleryEntryWithGalleryEntry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc22a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff4328) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff4338) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112ff4330) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc2318; end: 103bc23fb; +[SCMemoriesClientGenContentLocalEntry cameraRollFeaturedStoryWithCrFeaturedStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc2318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff4328) = 1;
  *(undefined8 *)(lVar2 + _DAT_112ff4338) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff4330) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc23fc; end: 103bc2447; -[SCMemoriesClientGenContentLocalEntry matchGalleryEntry:cameraRollFeaturedStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc23fc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_112ff4328) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_112ff4330) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc2428);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_112ff4338) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc2448);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x000103bc2440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 103bc2448; end: 103bc247b;  */

void FUN_103bc2448(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bc247c; end: 103bc24b3; -[SCMemoriesClientGenContentLocalEntry .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc247c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ff4338));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff4330));
  return;
}



/* Entry: 103bc24b4; end: 103bc2543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc24b4(long param_1,char param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long alStack_50 [2];
  long alStack_40 [2];
  
  lVar4 = param_1;
  FUN_103bc2544();
  lVar5 = lVar4;
  func_0x000107c610f8();
  plVar2 = alStack_40;
  lVar1 = param_1;
  lVar3 = 0;
  if (param_2 != '\x01') {
    lVar1 = 0;
    plVar2 = alStack_50;
    lVar3 = param_1;
  }
  *(bool *)(lVar5 + _DAT_112ff4328) = param_2 == '\x01';
  *(long *)(lVar5 + _DAT_112ff4338) = lVar3;
  *(long *)(lVar5 + _DAT_112ff4330) = lVar1;
  *plVar2 = lVar5;
  plVar2[1] = lVar4;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc2544; end: 103bc2563;  */

void FUN_103bc2544(void)

{
  func_0x000107c61168(&PTR_PTR_11293f478);
  return;
}



/* Entry: 103bc2564; end: 103bc26cb;  */

int FUN_103bc2564(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103bc25e0;
        goto LAB_103bc25c4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103bc25c4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103bc25e0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103bc26cc; end: 103bc270b;  */

void FUN_103bc26cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff4368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6086c;
  func_0x000107c61520(&UNK_10dc6086c,&UNK_1106e1ea8);
  puRam0000000112ff4368 = puVar1;
  return;
}



/* Entry: 103bc270c; end: 103bc27b7;  */

void FUN_103bc270c(void)

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



/* Entry: 103bc27b8; end: 103bc27f7;  */

void FUN_103bc27b8(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103bc27f8; end: 103bc281b; -[SCMemoriesClientGenWorkflowValidation description] */

void FUN_103bc27f8(void)

{
  func_0x000103bc2c14();
  func_0x000103bc05a0();
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc281c; end: 103bc2863; -[SCMemoriesClientGenWorkflowValidation init] */

void FUN_103bc281c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesClientGenContentModelMakerPlugInScope/SCMemoriesClientGenWorkflowValidationWrapper.swift"
                      ,0x62,2,0x35,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc2864);
  (*pcVar1)();
}



/* Entry: 103bc2864; end: 103bc2867; -[SCMemoriesClientGenWorkflowValidation copyWithZone:] */

void FUN_103bc2864(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bc2868; end: 103bc28af; +[SCMemoriesClientGenWorkflowValidation gallerySnapsWithSnapIds:shouldDropEdits:] */

void FUN_103bc2868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = param_3;
  func_0x000103bc2cd0();
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bc28b0; end: 103bc291b; +[SCMemoriesClientGenWorkflowValidation phassetsWithCrFeaturedStory:phassets:] */

void FUN_103bc28b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001011733e8(0);
  func_0x000107c5fc54(param_4,uVar1);
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000103bc2d68();
  func_0x000107c61170(param_3);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bc291c; end: 103bc29bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc291c(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112ff4370) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_112ff4378) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc29b0);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + _DAT_112ff4380) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc29b8);
      (*pcVar1)();
    }
    (*param_3)();
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_112ff4388) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc29b4);
      (*pcVar1)();
    }
    if (*(byte *)(unaff_x20 + _DAT_112ff4390) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc29bc);
      (*pcVar1)();
    }
    (*param_1)(*(long *)(unaff_x20 + _DAT_112ff4388),*(byte *)(unaff_x20 + _DAT_112ff4390) & 1);
  }
  return;
}



/* Entry: 103bc29bc; end: 103bc2a0f; -[SCMemoriesClientGenWorkflowValidation matchGallerySnaps:phassets:] */

void FUN_103bc29bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  FUN_103bc291c(FUN_103bc2fd8,auStack_40,FUN_103bc3028,auStack_60);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103bc2a10; end: 103bc2a6b;  */

void FUN_103bc2a10(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001011733e8(0);
  func_0x000107c5fc48(param_2,uVar1);
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103bc2a6c; end: 103bc2a9f;  */

void FUN_103bc2a6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bc2aa0; end: 103bc2ae7; -[SCMemoriesClientGenWorkflowValidation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bc2abc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bc2ac0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc2aa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff4388));
  return;
}



/* Entry: 103bc2ae8; end: 103bc2e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc2ae8(long param_1,undefined8 param_2,char param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  FUN_103bc2e10();
  lVar3 = lVar2;
  func_0x000107c610f8();
  if (param_3 == '\x01') {
    *(undefined1 *)(lVar3 + _DAT_112ff4370) = 1;
    *(undefined8 *)(lVar3 + _DAT_112ff4388) = 0;
    *(undefined1 *)(lVar3 + _DAT_112ff4390) = 2;
    *(long *)(lVar3 + _DAT_112ff4378) = param_1;
    *(undefined8 *)(lVar3 + _DAT_112ff4380) = param_2;
    puVar1 = PTR_s_init_1125d9248;
    lVar4 = param_1;
    lStack_40 = lVar3;
    lStack_38 = lVar2;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c61434(param_2);
    func_0x000107c61154(&lStack_40,puVar1);
    func_0x000103bc05a0(param_1,param_2,1);
    func_0x000107c61170(lVar4);
  }
  else {
    *(undefined1 *)(lVar3 + _DAT_112ff4370) = 0;
    *(long *)(lVar3 + _DAT_112ff4388) = param_1;
    *(byte *)(lVar3 + _DAT_112ff4390) = (byte)param_2 & 1;
    *(undefined8 *)(lVar3 + _DAT_112ff4378) = 0;
    *(undefined8 *)(lVar3 + _DAT_112ff4380) = 0;
    lStack_50 = lVar3;
    lStack_48 = lVar2;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  }
  return;
}



/* Entry: 103bc2e10; end: 103bc2e2f;  */

void FUN_103bc2e10(void)

{
  func_0x000107c61168(&PTR_PTR_11293f548);
  return;
}



/* Entry: 103bc2e30; end: 103bc2f97;  */

int FUN_103bc2e30(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103bc2eac;
        goto LAB_103bc2e90;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103bc2e90:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103bc2eac:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103bc2f98; end: 103bc2fd7;  */

void FUN_103bc2f98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff43c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6096c;
  func_0x000107c61520(&UNK_10dc6096c,&UNK_1106e1f90);
  puRam0000000112ff43c0 = puVar1;
  return;
}



/* Entry: 103bc2fd8; end: 103bc3027;  */

void FUN_103bc2fd8(undefined8 param_1,uint param_2)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103bc3028; end: 103bc302f;  */

void FUN_103bc3028(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  func_0x0001011733e8(0);
  func_0x000107c5fc48(param_2,uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103bc3030; end: 103bc305f;  */

void FUN_103bc3030(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_103bc3620(param_1);
  return;
}



/* Entry: 103bc3060; end: 103bc306b; -[SCMemoriesClientGenContentLoggingToolbox groupName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc3060(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff43c8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff43c8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bc306c; end: 103bc307b; -[SCMemoriesClientGenContentLoggingToolbox groupCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bc306c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff43d0);
}



/* Entry: 103bc307c; end: 103bc308b; -[SCMemoriesClientGenContentLoggingToolbox serverExpectedTotalCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bc307c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff43d8);
}



/* Entry: 103bc308c; end: 103bc309b; -[SCMemoriesClientGenContentLoggingToolbox clientExpectedTotalGenerationCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bc308c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff43e0);
}



/* Entry: 103bc309c; end: 103bc30ef; -[SCMemoriesClientGenContentLoggingToolbox itemsOrder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc309c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112ff43e8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103bc30f0; end: 103bc30ff; -[SCMemoriesClientGenContentLoggingToolbox doNotReuiqreSourceSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bc30f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff43f0);
}



/* Entry: 103bc3100; end: 103bc310f; -[SCMemoriesClientGenContentLoggingToolbox snapPlacement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103bc3100(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112ff43f8);
}



/* Entry: 103bc3110; end: 103bc311f; -[SCMemoriesClientGenContentLoggingToolbox bitmaskType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bc3110(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff4400);
}



/* Entry: 103bc3120; end: 103bc312b; -[SCMemoriesClientGenContentLoggingToolbox templateId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc3120(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff4408))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff4408);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bc312c; end: 103bc3137; -[SCMemoriesClientGenContentLoggingToolbox lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc312c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff4410))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff4410);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bc3138; end: 103bc3143; -[SCMemoriesClientGenContentLoggingToolbox setId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc3138(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff4418))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff4418);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bc3144; end: 103bc314f; -[SCMemoriesClientGenContentLoggingToolbox snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc3144(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff4420))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff4420);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bc3150; end: 103bc31a7;  */

void FUN_103bc3150(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bc31a8; end: 103bc348f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc31a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff43c8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff43d0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff43d8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff43e0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ff43e8) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112ff43f0) = param_7;
  *(undefined4 *)(unaff_x20 + _DAT_112ff43f8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4400) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4408);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4410);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4418);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4420);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc3490; end: 103bc361f; -[SCMemoriesClientGenContentLoggingToolbox initWithGroupName:groupCount:serverExpectedTotalCount:clientExpectedTotalGenerationCount:itemsOrder:doNotReuiqreSourceSnaps:snapPlacement:bitmaskType:templateId:lensId:setId:snapId:] */

void FUN_103bc3490(undefined8 param_1,undefined *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,long param_12,
                  long param_13,long param_14,long param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (param_3 == 0) {
    uStack_a0 = (undefined *)0x0;
    uStack_98 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_a0 = param_2;
    uStack_98 = param_3;
  }
  if (param_7 == 0) {
    uStack_a8 = 0;
  }
  else {
    param_2 = PTR___sSSN_11034da80;
    func_0x000107c5fc54();
    uStack_a8 = param_7;
  }
  if (param_12 == 0) {
    uStack_b0 = 0;
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    puVar7 = param_2;
    uStack_b0 = param_12;
  }
  lVar3 = param_13;
  func_0x000107c61174();
  lVar4 = param_14;
  func_0x000107c61174();
  lVar5 = param_15;
  func_0x000107c61174();
  if (lVar3 == 0) {
    param_13 = 0;
    puVar2 = (undefined *)0x0;
    puVar6 = param_2;
  }
  else {
    func_0x000107c5faec();
    puVar6 = param_2;
    func_0x000107c61170(lVar3);
    puVar2 = param_2;
  }
  if (lVar4 == 0) {
    param_14 = 0;
    puVar1 = (undefined *)0x0;
    puVar8 = puVar6;
  }
  else {
    func_0x000107c5faec();
    puVar8 = puVar6;
    func_0x000107c61170(lVar4);
    puVar1 = puVar6;
  }
  if (lVar5 == 0) {
    param_15 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
  }
  func_0x000103bc331c(uStack_98,uStack_a0,param_4,param_5,param_6,uStack_a8,param_8,param_9,param_11
                      ,uStack_b0,puVar7,param_13,puVar2,param_14,puVar1,param_15,puVar8);
  return;
}



/* Entry: 103bc3620; end: 103bc37d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc3620(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff43c8);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112ff43d0) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112ff43d8) = uVar2;
  uStack_58 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_112ff43e0) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_112ff43e8) = uStack_58;
  *(undefined1 *)(unaff_x20 + _DAT_112ff43f0) = *(undefined1 *)(param_1 + 6);
  *(undefined4 *)(unaff_x20 + _DAT_112ff43f8) = *(undefined4 *)((long)param_1 + 0x34);
  *(undefined8 *)(unaff_x20 + _DAT_112ff4400) = param_1[7];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uVar4 = param_1[8];
  uVar3 = param_1[0xb];
  uVar2 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4408);
  puVar1[1] = param_1[9];
  *puVar1 = uVar4;
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_98 = param_1[0xf];
  uStack_a0 = param_1[0xe];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4410);
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  uVar4 = param_1[0xc];
  uVar3 = param_1[0xf];
  uVar2 = param_1[0xe];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4418);
  puVar1[1] = param_1[0xd];
  *puVar1 = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff4420);
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  FUN_103bc3a3c(&uStack_50,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
  FUN_103bc3a3c(&uStack_58,auStack_b0,0x112d445a8,&UNK_10d990150);
  FUN_103bc3a3c(&uStack_70,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
  FUN_103bc3a3c(&uStack_80,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
  FUN_103bc3a3c(&uStack_90,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
  FUN_103bc3a3c(&uStack_a0,auStack_b0,0x112d35ff8,&UNK_10d900cd0);
  func_0x000103bc3a84(param_1);
  func_0x000107c61154(&stack0xffffffffffffff40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc37d4; end: 103bc37d7; -[SCMemoriesClientGenContentLoggingToolbox copyWithZone:] */

void FUN_103bc37d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bc37d8; end: 103bc380b; -[SCMemoriesClientGenContentLoggingToolbox description] */

void FUN_103bc37d8(void)

{
  undefined1 auStack_90 [128];
  
  FUN_103bc3914(auStack_90);
  func_0x000103bc3a84(auStack_90);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc380c; end: 103bc3887; -[SCMemoriesClientGenContentLoggingToolbox init] */

void FUN_103bc380c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesClientGenContentModelMakerPlugInScope/SCMemoriesClientGenContentLoggingToolboxWrapper.swift"
                      ,0x65,2,0x57,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc3854);
  (*pcVar1)();
}



/* Entry: 103bc3888; end: 103bc3913; -[SCMemoriesClientGenContentLoggingToolbox .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bc38a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bc38cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bc38f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bc38d0) */
/* WARNING: Removing unreachable block (ram,0x000103bc38ac) */
/* WARNING: Removing unreachable block (ram,0x000103bc38f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc3888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff43c8 + 8))
  ;
  return;
}



/* Entry: 103bc3914; end: 103bc3a3b;  */

/* WARNING: Possible PIC construction at 0x000103bc3a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bc3a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bc3a20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bc3a14) */
/* WARNING: Removing unreachable block (ram,0x000103bc3a04) */
/* WARNING: Removing unreachable block (ram,0x000103bc3a24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc3914(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar9 = *(undefined8 *)(param_2 + _DAT_112ff43d0);
  puVar1 = (undefined8 *)(param_2 + _DAT_112ff43c8);
  uVar10 = *(undefined8 *)(param_2 + _DAT_112ff43d8);
  uVar11 = *(undefined8 *)(param_2 + _DAT_112ff43e0);
  uVar13 = *(undefined8 *)(param_2 + _DAT_112ff43e8);
  uVar7 = *(undefined1 *)(param_2 + _DAT_112ff43f0);
  uVar6 = *(undefined4 *)(param_2 + _DAT_112ff43f8);
  uVar12 = *(undefined8 *)(param_2 + _DAT_112ff4400);
  puVar2 = (undefined8 *)(param_2 + _DAT_112ff4408);
  puVar3 = (undefined8 *)(param_2 + _DAT_112ff4410);
  puVar4 = (undefined8 *)(param_2 + _DAT_112ff4418);
  puVar5 = (undefined8 *)(param_2 + _DAT_112ff4420);
  uVar8 = puVar1[1];
  uVar14 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar14;
  param_1[2] = uVar9;
  param_1[3] = uVar10;
  param_1[4] = uVar11;
  param_1[5] = uVar13;
  *(undefined1 *)(param_1 + 6) = uVar7;
  *(undefined4 *)((long)param_1 + 0x34) = uVar6;
  param_1[7] = uVar12;
  uVar9 = *puVar2;
  uVar11 = puVar3[1];
  uVar10 = *puVar3;
  param_1[9] = puVar2[1];
  param_1[8] = uVar9;
  param_1[0xb] = uVar11;
  param_1[10] = uVar10;
  uVar9 = *puVar4;
  uVar11 = puVar5[1];
  uVar10 = *puVar5;
  param_1[0xd] = puVar4[1];
  param_1[0xc] = uVar9;
  param_1[0xf] = uVar11;
  param_1[0xe] = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar8);
  return;
}



/* Entry: 103bc3a3c; end: 103bc3ab7;  */

undefined8 FUN_103bc3a3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103bc3ab8; end: 103bc3ad7;  */

void FUN_103bc3ab8(void)

{
  func_0x000107c61168(&PTR_PTR_11293f628);
  return;
}



/* Entry: 103bc3ad8; end: 103bc3b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc3ad8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff4450) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff4458) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc3b3c; end: 103bc3b9b; -[_TtC39SCMemoriesClientGenContentOperationPool41MemoriesClientGenContentOperationPoolImpl init] */

void FUN_103bc3b3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesClientGenContentOperationPool.MemoriesClientGenContentOperationPoolImpl"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc3b68);
  (*pcVar1)();
}



/* Entry: 103bc3b9c; end: 103bc3bd3; -[_TtC39SCMemoriesClientGenContentOperationPool41MemoriesClientGenContentOperationPoolImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc3b9c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff4450));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ff4458));
  return;
}



/* Entry: 103bc3bd4; end: 103bc3c73;  */

void FUN_103bc3bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar1 = 0;
  func_0x000103bc5b04();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  lVar1 = 0;
  func_0x000103bc6630();
  *(long *)(unaff_x22 + 0x50) = lVar1;
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bc3c74,0,0);
  return;
}



/* Entry: 103bc3c74; end: 103bc3fa7;  */

void FUN_103bc3c74(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x22;
  long lVar16;
  long lVar17;
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x10));
  FUN_103bc6a3c(uVar14);
  func_0x000103bc44b4(uVar14,uVar12,0x103bc6630);
  func_0x000107c614c4(uVar12,uVar13);
  iVar6 = (int)uVar12;
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      plVar10 = *(long **)(unaff_x22 + 0x58);
      lVar17 = *plVar10;
      *(long *)(unaff_x22 + 0x68) = lVar17;
      lVar4 = plVar10[1];
      *(char *)(unaff_x22 + 0x98) = (char)lVar4;
      lVar7 = plVar10[2];
      lVar15 = plVar10[3];
      *(long *)(unaff_x22 + 0x70) = lVar15;
      lVar16 = plVar10[4];
      *(long *)(unaff_x22 + 0x78) = lVar16;
      plVar10 = (long *)0xd0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x80) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_103bc3fa8;
      lVar2 = *(long *)(unaff_x22 + 0x30);
      lVar9 = *(long *)(unaff_x22 + 0x20);
      plVar10[0x16] = *(long *)(unaff_x22 + 0x28);
      plVar10[0x17] = lVar2;
      plVar10[0x14] = lVar16;
      plVar10[0x15] = lVar9;
      plVar10[0x12] = lVar7;
      plVar10[0x13] = lVar15;
      *(char *)(plVar10 + 0x18) = (char)lVar4;
      plVar10[0x11] = lVar17;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_103bc49dc,0,0);
      return;
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000103bc4470(*(undefined8 *)(unaff_x22 + 0x58),uVar14);
    func_0x000103bc44b4(uVar14,uVar12,0x103bc5b04);
    func_0x000107c614c4(uVar12,uVar13);
    plVar10 = *(long **)(unaff_x22 + 0x40);
    if ((int)uVar12 == 1) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
      lVar7 = 0;
      func_0x000107c5eea4();
      pcVar5 = *(code **)(*(long *)(lVar7 + -8) + 8);
      func_0x000107c61174(uVar12);
      (*pcVar5)(plVar10,lVar7);
    }
    else {
      uVar11 = plVar10[1];
      if (*(long *)(*(long *)(unaff_x22 + 0x20) + 0x10) == 0) {
LAB_103bc3f24:
        func_0x000107c6142c(uVar11);
      }
      else {
        lVar7 = *plVar10;
        func_0x000107c61434(*(long *)(unaff_x22 + 0x20));
        uVar8 = uVar11;
        func_0x000100029284();
        lVar15 = *(long *)(unaff_x22 + 0x20);
        if ((uVar8 & 1) == 0) {
          func_0x000107c6142c(lVar15);
          goto LAB_103bc3f24;
        }
        uVar13 = *(undefined8 *)(unaff_x22 + 0x18);
        uVar14 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + lVar7 * 8);
        func_0x000107c61174(uVar14);
        func_0x000107c6142c(lVar15);
        func_0x000107c6142c(uVar11);
        uVar12 = uVar14;
        func_0x000107c5ca90(uVar14);
        func_0x000107c61180();
        func_0x000107c59df8(uVar13);
        func_0x000107c61170(uVar12);
        func_0x000107c61170(uVar14);
      }
      func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x18));
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000103bc44f8(*(undefined8 *)(unaff_x22 + 0x48),0x103bc5b04);
    func_0x000103bc44f8(uVar12,0x103bc6630);
  }
  else {
    if (iVar6 == 2) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x18);
      func_0x000103bc44f8(*(undefined8 *)(unaff_x22 + 0x60),0x103bc6630);
      func_0x000103bc44f8(uVar12,0x103bc6630);
    }
    else {
      if (iVar6 != 3) {
        puVar1 = *(undefined1 **)(unaff_x22 + 0x58);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x18);
        uVar14 = *(undefined8 *)(puVar1 + 0x10);
        FUN_103bc412c(uVar13,*puVar1,*(undefined8 *)(puVar1 + 8),uVar14);
        func_0x000107c6142c(uVar14);
        func_0x000103bc44f8(uVar12,0x103bc6630);
        goto LAB_103bc3f5c;
      }
      lVar7 = *(long *)(unaff_x22 + 0x18);
      uVar12 = **(undefined8 **)(unaff_x22 + 0x58);
      func_0x000107c4e8d8();
      func_0x000107c61180();
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x103bc3fa8);
        (*pcVar5)();
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x18);
      func_0x000107c574c8();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar12);
      func_0x000103bc44f8(uVar13,0x103bc6630);
    }
    func_0x000107c61174(uVar14);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x18);
LAB_103bc3f5c:
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000103bc3fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar13);
  return;
}



/* Entry: 103bc3fa8; end: 103bc4023;  */

void FUN_103bc3fa8(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x90) = param_1;
    FUN_103bc506c(*(undefined8 *)(lVar2 + 0x68),*(undefined1 *)(lVar2 + 0x98));
    pcVar1 = FUN_103bc4024;
  }
  else {
    FUN_103bc506c(*(undefined8 *)(lVar2 + 0x68),*(undefined1 *)(lVar2 + 0x98));
    pcVar1 = FUN_103bc40a8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103bc4024; end: 103bc40a7;  */

void FUN_103bc4024(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c61170(uVar1);
  func_0x000103bc44f8(uVar3,0x103bc6630);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103bc40a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 103bc40a8; end: 103bc412b;  */

void FUN_103bc40a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c61170(uVar3);
  func_0x000103bc44f8(uVar4,0x103bc6630);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103bc4128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bc412c; end: 103bc446f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bc412c(undefined8 param_1,undefined8 param_2,byte *param_3,ulong param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  byte **ppbVar15;
  ulong uVar16;
  long unaff_x20;
  byte *pbStack_50;
  ulong uStack_48;
  
  lVar9 = *(long *)(unaff_x20 + _DAT_112ff4450);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar9 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    uVar10 = (ulong)param_3 & 0xffffffffffff;
    uVar12 = param_4 >> 0x38 & 0xf;
    uVar11 = uVar10;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar11 = uVar12;
    }
    if (uVar11 != 0) {
      if ((param_4 >> 0x3c & 1) == 0) {
        if ((param_4 >> 0x3d & 1) == 0) {
          if (((ulong)param_3 >> 0x3c & 1) == 0) {
            func_0x000107c60358();
          }
          else {
            param_3 = (byte *)((param_4 & 0xfffffffffffffff) + 0x20);
            param_4 = uVar10;
          }
          if (*param_3 == 0x2b) {
            lVar13 = param_4 - 1;
            if ((long)param_4 < 1) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103bc446c);
              (*pcVar8)();
            }
            if (lVar13 != 0) {
              uVar11 = 0;
              while( true ) {
                param_3 = param_3 + 1;
                if ((9 < *param_3 - 0x30) ||
                   (auVar4._8_8_ = 0, auVar4._0_8_ = uVar11, SUB168(auVar4 * ZEXT816(10),8) != 0))
                break;
                uVar10 = uVar11 * 10;
                uVar12 = (ulong)(byte)(*param_3 - 0x30);
                uVar11 = uVar10 + uVar12;
                if ((CARRY8(uVar10,uVar12)) || (lVar13 = lVar13 + -1, lVar13 == 0)) break;
              }
            }
          }
          else if (*param_3 == 0x2d) {
            lVar13 = param_4 - 1;
            if ((long)param_4 < 1) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103bc4464);
              (*pcVar8)();
            }
            if (lVar13 != 0) {
              uVar11 = 0;
              while( true ) {
                param_3 = param_3 + 1;
                if ((9 < *param_3 - 0x30) ||
                   (auVar2._8_8_ = 0, auVar2._0_8_ = uVar11, SUB168(auVar2 * ZEXT816(10),8) != 0))
                break;
                uVar10 = uVar11 * 10;
                uVar12 = (ulong)(byte)(*param_3 - 0x30);
                uVar11 = uVar10 - uVar12;
                if ((uVar10 < uVar12) || (lVar13 = lVar13 + -1, lVar13 == 0)) break;
              }
            }
          }
          else if ((param_4 != 0) && (param_3 != (byte *)0x0)) {
            uVar11 = 0;
            do {
              if (((9 < *param_3 - 0x30) ||
                  (auVar6._8_8_ = 0, auVar6._0_8_ = uVar11, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
                 (uVar10 = uVar11 * 10, uVar12 = (ulong)(byte)(*param_3 - 0x30),
                 uVar11 = uVar10 + uVar12, CARRY8(uVar10,uVar12))) break;
              param_4 = param_4 - 1;
              param_3 = param_3 + 1;
            } while (param_4 != 0);
          }
        }
        else {
          pbStack_50 = param_3;
          uStack_48 = param_4 & 0xffffffffffffff;
          uVar1 = (uint)param_3 & 0xff;
          if (uVar1 == 0x2b) {
            if (uVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103bc4470);
              (*pcVar8)();
            }
            lVar13 = uVar12 - 1;
            if (lVar13 != 0) {
              uVar11 = 0;
              pbVar14 = (byte *)((ulong)&pbStack_50 | 1);
              do {
                if (((9 < *pbVar14 - 0x30) ||
                    (auVar5._8_8_ = 0, auVar5._0_8_ = uVar11, SUB168(auVar5 * ZEXT816(10),8) != 0))
                   || (uVar10 = uVar11 * 10, uVar12 = (ulong)(byte)(*pbVar14 - 0x30),
                      uVar11 = uVar10 + uVar12, CARRY8(uVar10,uVar12))) break;
                lVar13 = lVar13 + -1;
                pbVar14 = pbVar14 + 1;
              } while (lVar13 != 0);
            }
          }
          else if (uVar1 == 0x2d) {
            if (uVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x103bc4468);
              (*pcVar8)();
            }
            lVar13 = uVar12 - 1;
            if (lVar13 != 0) {
              uVar11 = 0;
              pbVar14 = (byte *)((ulong)&pbStack_50 | 1);
              while( true ) {
                if ((9 < *pbVar14 - 0x30) ||
                   (auVar3._8_8_ = 0, auVar3._0_8_ = uVar11, SUB168(auVar3 * ZEXT816(10),8) != 0))
                break;
                uVar10 = uVar11 * 10;
                uVar12 = (ulong)(byte)(*pbVar14 - 0x30);
                uVar11 = uVar10 - uVar12;
                if ((uVar10 < uVar12) || (lVar13 = lVar13 + -1, pbVar14 = pbVar14 + 1, lVar13 == 0))
                break;
              }
            }
          }
          else if (uVar12 != 0) {
            uVar11 = 0;
            ppbVar15 = &pbStack_50;
            while( true ) {
              if ((9 < *(byte *)ppbVar15 - 0x30) ||
                 (auVar7._8_8_ = 0, auVar7._0_8_ = uVar11, SUB168(auVar7 * ZEXT816(10),8) != 0))
              break;
              uVar16 = uVar11 * 10;
              uVar10 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30);
              uVar11 = uVar16 + uVar10;
              if ((CARRY8(uVar16,uVar10)) ||
                 (uVar12 = uVar12 - 1, ppbVar15 = (byte **)((long)ppbVar15 + 1), uVar12 == 0))
              break;
            }
          }
        }
      }
      else {
        func_0x000107c61434(param_4);
        func_0x000100f5015c(param_3,param_4,10);
        func_0x000107c6142c(param_4);
      }
    }
    func_0x000107c5d620();
    func_0x000107c61174(param_1);
    func_0x000107c615e8(lVar9);
  }
  return param_1;
}



/* Entry: 103bc4470; end: 103bc4533;  */

undefined8 FUN_103bc4470(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000103bc5b04();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103bc4534; end: 103bc46a7; -[_TtC39SCMemoriesClientGenContentOperationPool41MemoriesClientGenContentOperationPoolImpl performWithOperation:initialSnapDoc:sourceIdToSnapDocDict:queuePerformer:completionHandler:] */

void FUN_103bc4534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1106e20e0;
  func_0x000107c613fc(&UNK_1106e20e0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffb0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1106e2108;
  func_0x000107c613fc(&UNK_1106e2108,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10dc60ac0;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1106e2130;
  func_0x000107c613fc(&UNK_1106e2130,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10dc60ad0;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&UNK_10dc60ae0,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 103bc46a8; end: 103bc478b;  */

void FUN_103bc46a8(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long *plVar5;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(long *)(unaff_x22 + 0x30) = param_6;
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(long *)(unaff_x22 + 0x20) = param_4;
  *(long *)(unaff_x22 + 0x10) = param_1;
  uVar4 = 0;
  func_0x000100fa1670(0);
  func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
  *(long *)(unaff_x22 + 0x38) = param_3;
  plVar5 = (long *)0xa0;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103bc478c;
  plVar5[5] = param_4;
  plVar5[6] = param_6;
  plVar5[3] = param_2;
  plVar5[4] = param_3;
  plVar5[2] = param_1;
  lVar1 = 0;
  func_0x000103bc5b04();
  plVar5[7] = lVar1;
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[8] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[9] = uVar3;
  lVar1 = 0;
  func_0x000103bc6630();
  plVar5[10] = lVar1;
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xb] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bc3c74,0,0);
  return;
}



/* Entry: 103bc478c; end: 103bc4863;  */

void FUN_103bc478c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar8 + 0x38);
  uVar6 = *(undefined8 *)(lVar8 + 0x30);
  uVar2 = *(undefined8 *)(lVar8 + 0x18);
  uVar3 = *(undefined8 *)(lVar8 + 0x20);
  uVar7 = *(undefined8 *)(lVar8 + 0x10);
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0x40));
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  if (unaff_x20 == 0) {
    unaff_x20 = 0;
    lVar4 = param_1;
  }
  else {
    func_0x000107c5ed2c();
    func_0x000107c614ac();
    param_1 = unaff_x20;
    lVar4 = 0;
  }
  (**(code **)(*(long *)(lVar8 + 0x28) + 0x10))(*(long *)(lVar8 + 0x28),lVar4,unaff_x20);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x000103bc4860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Entry: 103bc4864; end: 103bc4937;  */

void FUN_103bc4864(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    **(long **)(*(long *)(param_3 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_3);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8();
  uVar2 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010dc60a60);
  func_0x000107c466bc();
  func_0x000107c61170(uVar2);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar2);
  return;
}



/* Entry: 103bc4938; end: 103bc49b3;  */

void FUN_103bc4938(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103bc4970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103bc49b4; end: 103bc49db;  */

void FUN_103bc49b4(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined1 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bc49dc,0,0);
  return;
}



/* Entry: 103bc49dc; end: 103bc5003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc49dc(void)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte **ppbVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  long unaff_x22;
  uint uVar25;
  long lVar26;
  long lVar27;
  ulong *puVar28;
  byte *pbStack_60;
  ulong uStack_58;
  
  cVar1 = *(char *)(unaff_x22 + 0xc0);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_103bc5004;
  lVar9 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar9,1);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((cVar1 != '\x01') && (cVar1 != -1)) {
    lVar26 = *(long *)(*(long *)(unaff_x22 + 0x88) + 0x10);
    if (lVar26 != 0) {
      lVar27 = *(long *)(unaff_x22 + 0xa8);
      puVar28 = (ulong *)(*(long *)(unaff_x22 + 0x88) + 0x28);
      do {
        if (*(long *)(lVar27 + 0x10) != 0) {
          uVar23 = *(undefined8 *)(unaff_x22 + 0xa8);
          uVar24 = puVar28[-1];
          uVar18 = *puVar28;
          func_0x000107c61434(uVar18);
          func_0x000107c61434(uVar23);
          uVar22 = uVar18;
          func_0x000100029284();
          uVar23 = *(undefined8 *)(unaff_x22 + 0xa8);
          if ((uVar22 & 1) == 0) {
            func_0x000107c6142c(uVar23);
            func_0x000107c6142c(uVar18);
          }
          else {
            uVar10 = *(undefined8 *)(*(long *)(lVar27 + 0x38) + uVar24 * 8);
            func_0x000107c61174();
            func_0x000107c6142c(uVar18);
            func_0x000107c6142c(uVar23);
            func_0x000107c61174();
            puVar12 = puVar13;
            func_0x000107c61550();
            if ((((int)puVar12 == 0) || ((long)puVar13 < 0)) ||
               (puVar12 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar13 >> 0x3e == 0) {
                puVar11 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar11 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar13) {
                  puVar11 = puVar13;
                }
                func_0x000107c60480(puVar11);
              }
              puVar12 = (undefined *)0x0;
              func_0x000100fb4ec0(0,puVar11 + 1,1,puVar13);
            }
            uVar18 = (ulong)puVar12 & 0xffffffffffffff8;
            uVar24 = *(ulong *)(uVar18 + 0x10);
            puVar13 = puVar12;
            if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar24) {
              puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar18 + 0x18));
              func_0x000100fb4ec0(puVar13,uVar24 + 1,1,puVar12);
              uVar18 = (ulong)puVar13 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar18 + 0x10) = uVar24 + 1;
            *(undefined8 *)(uVar18 + uVar24 * 8 + 0x20) = uVar10;
            func_0x000107c61170(uVar10);
          }
        }
        puVar28 = puVar28 + 2;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
  }
  pbVar20 = *(byte **)(unaff_x22 + 0x90);
  pbVar17 = *(byte **)(unaff_x22 + 0x98);
  pbVar14 = (byte *)((ulong)pbVar20 & 0xffffffffffff);
  pbVar19 = (byte *)((ulong)pbVar17 >> 0x38 & 0xf);
  pbVar16 = pbVar14;
  if (((ulong)pbVar17 & 0x2000000000000000) != 0) {
    pbVar16 = pbVar19;
  }
  if (pbVar16 == (byte *)0x0) goto LAB_103bc4dc8;
  if (((ulong)pbVar17 >> 0x3c & 1) == 0) {
    if (((ulong)pbVar17 >> 0x3d & 1) != 0) {
      pbStack_60 = pbVar20;
      uStack_58 = (ulong)pbVar17 & 0xffffffffffffff;
      uVar25 = (uint)pbVar20 & 0xff;
      if (uVar25 == 0x2b) {
        if (pbVar19 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x103bc5004);
          (*pcVar8)();
        }
        pbVar19 = pbVar19 + -1;
        if (pbVar19 == (byte *)0x0) goto LAB_103bc4db4;
        uVar24 = 0;
        pbVar20 = (byte *)((ulong)&pbStack_60 | 1);
        do {
          if (((9 < *pbVar20 - 0x30) ||
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar24, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
             (uVar22 = uVar24 * 10, uVar18 = (ulong)(byte)(*pbVar20 - 0x30),
             uVar24 = uVar22 + uVar18, CARRY8(uVar22,uVar18))) goto LAB_103bc4db4;
          uVar25 = 0;
          pbVar19 = pbVar19 + -1;
          pbVar20 = pbVar20 + 1;
        } while (pbVar19 != (byte *)0x0);
      }
      else if (uVar25 == 0x2d) {
        if (pbVar19 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x103bc4ffc);
          (*pcVar8)();
        }
        pbVar19 = pbVar19 + -1;
        if (pbVar19 == (byte *)0x0) {
LAB_103bc4db4:
          uVar25 = 1;
        }
        else {
          uVar24 = 0;
          pbVar20 = (byte *)((ulong)&pbStack_60 | 1);
          do {
            if (((9 < *pbVar20 - 0x30) ||
                (auVar3._8_8_ = 0, auVar3._0_8_ = uVar24, SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
               (uVar22 = uVar24 * 10, uVar18 = (ulong)(byte)(*pbVar20 - 0x30),
               uVar24 = uVar22 - uVar18, uVar22 < uVar18)) goto LAB_103bc4db4;
            uVar25 = 0;
            pbVar19 = pbVar19 + -1;
            pbVar20 = pbVar20 + 1;
          } while (pbVar19 != (byte *)0x0);
        }
      }
      else {
        if (pbVar19 == (byte *)0x0) goto LAB_103bc4db4;
        uVar24 = 0;
        ppbVar21 = &pbStack_60;
        do {
          if (((9 < *(byte *)ppbVar21 - 0x30) ||
              (auVar7._8_8_ = 0, auVar7._0_8_ = uVar24, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
             (uVar22 = uVar24 * 10, uVar18 = (ulong)(byte)(*(byte *)ppbVar21 - 0x30),
             uVar24 = uVar22 + uVar18, CARRY8(uVar22,uVar18))) goto LAB_103bc4db4;
          uVar25 = 0;
          pbVar19 = pbVar19 + -1;
          ppbVar21 = (byte **)((long)ppbVar21 + 1);
        } while (pbVar19 != (byte *)0x0);
      }
      goto LAB_103bc4dbc;
    }
    if (((ulong)pbVar20 >> 0x3c & 1) == 0) {
      func_0x000107c60358();
    }
    else {
      pbVar20 = (byte *)(((ulong)pbVar17 & 0xfffffffffffffff) + 0x20);
      pbVar17 = pbVar14;
    }
    if (*pbVar20 != 0x2b) {
      if (*pbVar20 != 0x2d) {
        if (pbVar17 == (byte *)0x0) goto LAB_103bc4dc8;
        uVar24 = 0;
        pbVar16 = pbVar20;
        while (pbVar16 != (byte *)0x0) {
          if (((9 < *pbVar20 - 0x30) ||
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar24, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
             (uVar22 = uVar24 * 10, uVar18 = (ulong)(byte)(*pbVar20 - 0x30),
             uVar24 = uVar22 + uVar18, CARRY8(uVar22,uVar18))) goto LAB_103bc4dc8;
          pbVar17 = pbVar17 + -1;
          pbVar20 = pbVar20 + 1;
          pbVar16 = pbVar17;
        }
        goto LAB_103bc4e58;
      }
      pbVar16 = pbVar17 + -1;
      if ((long)pbVar17 < 1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x103bc4ff8);
        (*pcVar8)();
      }
      if (pbVar16 != (byte *)0x0) {
        uVar24 = 0;
        do {
          pbVar20 = pbVar20 + 1;
          if (((9 < *pbVar20 - 0x30) ||
              (auVar2._8_8_ = 0, auVar2._0_8_ = uVar24, SUB168(auVar2 * ZEXT816(10),8) != 0)) ||
             (uVar22 = uVar24 * 10, uVar18 = (ulong)(byte)(*pbVar20 - 0x30),
             uVar24 = uVar22 - uVar18, uVar22 < uVar18)) goto LAB_103bc4dc8;
          pbVar16 = pbVar16 + -1;
        } while (pbVar16 != (byte *)0x0);
        goto LAB_103bc4e58;
      }
      goto LAB_103bc4dc8;
    }
    pbVar16 = pbVar17 + -1;
    if ((long)pbVar17 < 1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103bc5000);
      (*pcVar8)();
    }
    if (pbVar16 == (byte *)0x0) goto LAB_103bc4dc8;
    uVar24 = 0;
    do {
      pbVar20 = pbVar20 + 1;
      if (((9 < *pbVar20 - 0x30) ||
          (auVar4._8_8_ = 0, auVar4._0_8_ = uVar24, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
         (uVar22 = uVar24 * 10, uVar18 = (ulong)(byte)(*pbVar20 - 0x30), uVar24 = uVar22 + uVar18,
         CARRY8(uVar22,uVar18))) goto LAB_103bc4dc8;
      pbVar16 = pbVar16 + -1;
    } while (pbVar16 != (byte *)0x0);
  }
  else {
    func_0x000107c61434(pbVar17);
    pbVar16 = pbVar17;
    func_0x000100f5015c(pbVar20,pbVar17,10);
    uVar25 = (uint)pbVar16;
    func_0x000107c6142c(pbVar17);
LAB_103bc4dbc:
    if ((uVar25 & 0xff) == 1) {
LAB_103bc4dc8:
      puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8();
      uVar23 = 0xd000000000000029;
      func_0x000107c5fadc(0xd000000000000029,0x800000010dc60a60);
      func_0x000107c466bc();
      func_0x000107c61170(uVar23);
      uVar23 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar15 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
      func_0x000107c613f8();
      *puVar15 = puVar12;
      func_0x000107c61454(lVar9,uVar23);
      goto LAB_103bc4f8c;
    }
  }
LAB_103bc4e58:
  lVar26 = *(long *)(*(long *)(unaff_x22 + 0xb8) + _DAT_112ff4450);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar26 != 0) {
    uVar23 = 0;
    func_0x000100fa1670(0);
    puVar12 = puVar13;
    func_0x000107c5fc48(puVar13,uVar23);
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c490d8();
    lVar27 = lVar26;
    func_0x000107c43da8(lVar26);
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar12);
    func_0x000107c615e8(lVar26);
    puVar12 = &UNK_1106e2158;
    func_0x000107c613fc(&UNK_1106e2158,0x18,7);
    *(long *)(puVar12 + 0x10) = lVar9;
    *(code **)(unaff_x22 + 0x70) = FUN_103bc5294;
    *(undefined **)(unaff_x22 + 0x78) = puVar12;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_10130cf24;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1106e2170;
    lVar9 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar9);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c61174(lVar27);
    func_0x000107c61574(uVar23);
    func_0x000107c5dc64(lVar27);
    func_0x000107c61170(lVar27);
    func_0x000107c60bd0(lVar9);
    func_0x000107c61170(lVar27);
  }
LAB_103bc4f8c:
  func_0x000107c6142c(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 103bc5004; end: 103bc506b;  */

void FUN_103bc5004(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000103bc504c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103bc5068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(undefined8 *)(*unaff_x22 + 0x80));
  return;
}



/* Entry: 103bc506c; end: 103bc5083;  */

void FUN_103bc506c(undefined8 param_1,char param_2)

{
  if (param_2 != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 103bc5084; end: 103bc50a3;  */

void FUN_103bc5084(void)

{
  func_0x000107c61168(&PTR_PTR_11293f748);
  return;
}



/* Entry: 103bc50a4; end: 103bc512f;  */

void FUN_103bc50a4(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long unaff_x22;
  long *plVar11;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar9 = *(long *)(unaff_x20 + 0x38);
  plVar10 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_103bc5130;
  plVar10[5] = lVar1;
  plVar10[6] = lVar9;
  plVar10[3] = lVar7;
  plVar10[4] = lVar8;
  plVar10[2] = lVar2;
  uVar5 = 0;
  func_0x000100fa1670(0);
  func_0x000107c5f9e8(lVar6,PTR___sSSN_11034da80,uVar5,PTR___sSSSHsWP_11034da90);
  plVar10[7] = lVar6;
  plVar11 = (long *)0xa0;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar10[8] = (long)plVar11;
  *plVar11 = (long)plVar10;
  plVar11[1] = (long)FUN_103bc478c;
  plVar11[5] = lVar8;
  plVar11[6] = lVar9;
  plVar11[3] = lVar7;
  plVar11[4] = lVar6;
  plVar11[2] = lVar2;
  lVar2 = 0;
  func_0x000103bc5b04();
  plVar11[7] = lVar2;
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[8] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[9] = uVar4;
  lVar2 = 0;
  func_0x000103bc6630();
  plVar11[10] = lVar2;
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0xb] = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar11[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bc3c74,0,0);
  return;
}



/* Entry: 103bc5130; end: 103bc516b;  */

void FUN_103bc5130(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103bc5168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103bc516c; end: 103bc51e3;  */

void FUN_103bc516c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x103bc52bc;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 103bc51e4; end: 103bc520f;  */

void FUN_103bc51e4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103bc5210; end: 103bc5293;  */

void FUN_103bc5210(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x103bc52c0;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 103bc5294; end: 103bc52c3;  */

void FUN_103bc5294(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    **(long **)(*(long *)(lVar4 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8();
  uVar2 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010dc60a60);
  func_0x000107c466bc();
  func_0x000107c61170(uVar2);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar2);
  return;
}



/* Entry: 103bc52c4; end: 103bc52d3; -[_TtC39SCMemoriesClientGenContentOperationPool45MemoriesClientGenContentOperationPoolServices memoriesClientGenContentOperationPool] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc52c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4488));
  return;
}



/* Entry: 103bc52d4; end: 103bc531f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc52d4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff4488) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bc5320; end: 103bc537f; -[_TtC39SCMemoriesClientGenContentOperationPool45MemoriesClientGenContentOperationPoolServices init] */

void FUN_103bc5320(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesClientGenContentOperationPool.MemoriesClientGenContentOperationPoolServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc534c);
  (*pcVar1)();
}



/* Entry: 103bc5380; end: 103bc538f; -[_TtC39SCMemoriesClientGenContentOperationPool45MemoriesClientGenContentOperationPoolServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc5380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff4488));
  return;
}



/* Entry: 103bc5390; end: 103bc53af;  */

void FUN_103bc5390(void)

{
  func_0x000107c61168(&PTR_PTR_11293f810);
  return;
}



/* Entry: 103bc53b0; end: 103bc5403;  */

undefined8 FUN_103bc53b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_103bc5404(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 103bc5404; end: 103bc55cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc5404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long *plVar9;
  long unaff_x20;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  plVar9 = &lStack_b0;
  uVar1 = param_3;
  func_0x000107c4cbc4();
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c42d48();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_103bc5084();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112ff4450) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112ff4458) = uVar2;
  plVar5 = &lStack_70;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar7 = &UNK_1106e21a8;
  func_0x000107c613fc(&UNK_1106e21a8,0x18,7);
  *(long **)(puVar7 + 0x10) = plVar5;
  pcStack_80 = FUN_103bc55d0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_103bc55d8;
  puStack_88 = &UNK_1106e21c0;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar7 = puStack_78;
  func_0x000107c61174(plVar5);
  func_0x000107c61574(puVar7);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  lVar3 = 0;
  FUN_103bc5390();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined **)(lVar4 + _DAT_112ff4488) = puVar6;
  puVar7 = PTR_s_init_1125d9248;
  lStack_b0 = lVar4;
  lStack_a8 = lVar3;
  func_0x000107c61174(puVar6);
  func_0x000107c61154(&lStack_b0,puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(plVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(long **)(unaff_x20 + 0x10) = plVar9;
  return;
}



/* Entry: 103bc55d0; end: 103bc55d7;  */

void FUN_103bc55d0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103bc55d8; end: 103bc560f;  */

void FUN_103bc55d8(long param_1)

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



/* Entry: 103bc5610; end: 103bc563b;  */

void FUN_103bc5610(long param_1,long param_2)

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



/* Entry: 103bc563c; end: 103bc56db;  */

void FUN_103bc563c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103bc56dc; end: 103bc56e7;  */

void FUN_103bc56dc(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bc56e8; end: 103bc6a3b;  */

/* WARNING: Possible PIC construction at 0x000103bc56fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bc5700) */

void FUN_103bc56e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103bc6a3c; end: 103bc716f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bc6a3c(undefined8 param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long lStack_90;
  code *pcStack_88;
  long alStack_80 [3];
  code *pcStack_68;
  
  lVar6 = 0x112d373d8;
  alStack_80[2] = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&lStack_90 - extraout_x8;
  lVar6 = 0x112ff46d8;
  func_0x0001000285a8(0x112ff46d8,&UNK_10dc60cc8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar9 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = (undefined8 *)(lVar9 - extraout_x12);
  lVar6 = 0x112ff46e0;
  func_0x0001000285a8(0x112ff46e0,&UNK_10dc60cd0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar11 = (long)puVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar11 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar15 = (long *)(lVar7 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar8 = (long *)((long)plVar15 - extraout_x12_02);
  lVar3 = 0;
  func_0x000103bc6630();
  lVar6 = *(long *)(lVar3 + -8);
  pcStack_68 = *(code **)(lVar6 + 0x38);
  (*pcStack_68)(plVar8,1,1,lVar3);
  bVar1 = *(byte *)(param_2 + _DAT_112ff46e8);
  if (bVar1 < 2) {
    alStack_80[1] = lVar6;
    if (bVar1 == 0) {
      lVar6 = *(long *)(param_2 + _DAT_112ff4718);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103bc7150);
        (*pcVar2)();
      }
      lVar9 = *(long *)(param_2 + _DAT_112ff4710);
      if (lVar9 == 0) {
        lVar9 = 0;
        uVar12 = 0xff;
      }
      else {
        if (*(char *)(lVar9 + _DAT_112ff4750) == '\x01') {
          lVar9 = *(long *)(lVar9 + _DAT_112ff4760);
          if (lVar9 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103bc716c);
            (*pcVar2)();
          }
          uVar12 = 1;
        }
        else {
          lVar9 = *(long *)(lVar9 + _DAT_112ff4758);
          if (lVar9 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103bc7170);
            (*pcVar2)();
          }
          uVar12 = 0;
        }
        func_0x000107c61434(lVar9);
      }
      lVar11 = ((long *)(lVar6 + _DAT_112ff4798))[1];
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103bc715c);
        (*pcVar2)();
      }
      lVar10 = *(long *)(lVar6 + _DAT_112ff4798);
      lVar6 = *(long *)(lVar6 + _DAT_112ff47a0);
      func_0x000107c61174(lVar6);
      func_0x000107c61434(lVar11);
      func_0x000103bc76a4(plVar8,0x112ff46e0,&UNK_10dc60cd0);
      *plVar15 = lVar9;
      *(undefined1 *)(plVar15 + 1) = uVar12;
      plVar15[2] = lVar10;
      plVar15[3] = lVar11;
      plVar15[4] = lVar6;
      func_0x000107c6159c(plVar15,lVar3,0);
      (*pcStack_68)(plVar15,0,1,lVar3);
      func_0x000103bc7770(plVar15,plVar8);
      lVar6 = alStack_80[1];
    }
    else {
      lVar6 = *(long *)(param_2 + _DAT_112ff4708);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103bc7158);
        (*pcVar2)();
      }
      lVar4 = 0;
      func_0x000103bc5b04();
      alStack_80[0] = *(long *)(lVar4 + -8);
      pcStack_88 = *(code **)(alStack_80[0] + 0x38);
      (*pcStack_88)(puVar13,1,1,lVar4);
      if (*(char *)(lVar6 + _DAT_112ff47e0) == '\x01') {
        func_0x000103bc76e4(lVar6 + _DAT_112ff47e8,lVar10,0x112d373d8,&UNK_10d9014c0);
        lVar5 = 0;
        func_0x000107c5eea4();
        lStack_90 = *(long *)(lVar5 + -8);
        lVar6 = lVar10;
        (**(code **)(lStack_90 + 0x30))(lVar10,1,lVar5);
        if ((int)lVar6 == 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103bc7164);
          (*pcVar2)();
        }
        func_0x000103bc76a4(puVar13,0x112ff46d8,&UNK_10dc60cc8);
        (**(code **)(lStack_90 + 0x10))(puVar13,lVar10,lVar5);
        func_0x000107c6159c(puVar13,lVar4,1);
        (*pcStack_88)(puVar13,0,1,lVar4);
        (**(code **)(lStack_90 + 8))(lVar10,lVar5);
      }
      else {
        lVar10 = ((undefined8 *)(lVar6 + _DAT_112ff47f0))[1];
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103bc7168);
          (*pcVar2)();
        }
        uVar14 = *(undefined8 *)(lVar6 + _DAT_112ff47f0);
        func_0x000103bc76a4(puVar13,0x112ff46d8,&UNK_10dc60cc8);
        *puVar13 = uVar14;
        puVar13[1] = lVar10;
        func_0x000107c6159c(puVar13,lVar4,0);
        (*pcStack_88)(puVar13,0,1,lVar4);
        func_0x000107c61434(lVar10);
      }
      func_0x000103bc76e4(puVar13,lVar9,0x112ff46d8,&UNK_10dc60cc8);
      lVar10 = lVar9;
      (**(code **)(alStack_80[0] + 0x30))(lVar9,1,lVar4);
      lVar6 = alStack_80[1];
      if ((int)lVar10 == 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103bc7160);
        (*pcVar2)();
      }
      func_0x000103bc76a4(puVar13,0x112ff46d8,&UNK_10dc60cc8);
      func_0x000103bc76a4(plVar8,0x112ff46e0,&UNK_10dc60cd0);
      func_0x000103bc772c(lVar9,lVar11,0x103bc5b04);
      func_0x000107c6159c(lVar11,lVar3,1);
      (*pcStack_68)(lVar11,0,1,lVar3);
      func_0x000103bc7770(lVar11,plVar8);
    }
  }
  else if (bVar1 == 2) {
    lVar9 = *(long *)(param_2 + _DAT_112ff4700);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bc7148);
      (*pcVar2)();
    }
    func_0x000103bc76a4(plVar8,0x112ff46e0,&UNK_10dc60cd0);
    lVar11 = ((long *)(lVar9 + _DAT_112ff4838))[1];
    lVar10 = *(long *)(lVar9 + _DAT_112ff4840);
    *plVar8 = *(long *)(lVar9 + _DAT_112ff4838);
    plVar8[1] = lVar11;
    plVar8[2] = lVar10;
    func_0x000107c6159c(plVar8,lVar3,2);
    (*pcStack_68)(plVar8,0,1,lVar3);
    func_0x000107c61434(lVar11);
    func_0x000107c61434(lVar10);
  }
  else if (bVar1 == 3) {
    lVar9 = *(long *)(param_2 + _DAT_112ff46f8);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bc714c);
      (*pcVar2)();
    }
    func_0x000103bc76a4(plVar8,0x112ff46e0,&UNK_10dc60cd0);
    *plVar8 = lVar9;
    func_0x000107c6159c(plVar8,lVar3,3);
    (*pcStack_68)(plVar8,0,1,lVar3);
    func_0x000107c61174(lVar9);
  }
  else {
    lVar9 = *(long *)(param_2 + _DAT_112ff46f0);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bc7154);
      (*pcVar2)();
    }
    func_0x000103bc76a4(plVar8,0x112ff46e0,&UNK_10dc60cd0);
    lVar11 = *(long *)(lVar9 + _DAT_112ff4878);
    lVar10 = ((long *)(lVar9 + _DAT_112ff4878))[1];
    *(undefined1 *)plVar8 = *(undefined1 *)(lVar9 + _DAT_112ff4870);
    plVar8[1] = lVar11;
    plVar8[2] = lVar10;
    func_0x000107c6159c(plVar8,lVar3,4);
    (*pcStack_68)(plVar8,0,1,lVar3);
    func_0x000107c61434(lVar10);
  }
  func_0x000103bc76e4(plVar8,lVar7,0x112ff46e0,&UNK_10dc60cd0);
  lVar9 = lVar7;
  (**(code **)(lVar6 + 0x30))(lVar7,1,lVar3);
  if ((int)lVar9 != 1) {
    func_0x000103bc76a4(plVar8,0x112ff46e0,&UNK_10dc60cd0);
    func_0x000107c61170(param_2);
    func_0x000103bc772c(lVar7,alStack_80[2],0x103bc6630);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103bc7144);
  (*pcVar2)();
}



/* Entry: 103bc7170; end: 103bc7243;  */

void FUN_103bc7170(void)

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



/* Entry: 103bc7244; end: 103bc7263;  */

void FUN_103bc7244(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 103bc7264; end: 103bc72ef; -[SCMemoriesClientGenOperation description] */

void FUN_103bc7264(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000103bc6630();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c61174(param_1);
  FUN_103bc6a3c(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_103bc77d0(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),0x103bc6630);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bc72f0; end: 103bc7337; -[SCMemoriesClientGenOperation init] */

void FUN_103bc72f0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMemoriesClientGenContentOperationPool/SCMemoriesClientGenOperationWrapper.swift"
                      ,0x51,2,0x4d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bc7338);
  (*pcVar1)();
}



/* Entry: 103bc7338; end: 103bc733b; -[SCMemoriesClientGenOperation copyWithZone:] */

void FUN_103bc7338(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bc733c; end: 103bc739f; +[SCMemoriesClientGenOperation applyCollageCTItemsWithInsertClipOperation:applyCTItemsOperation:] */

void FUN_103bc733c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  FUN_103bc780c(param_3,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}


