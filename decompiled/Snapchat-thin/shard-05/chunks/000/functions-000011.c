/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a2b018; end: 103a2b01b;  */

void FUN_103a2b018(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3ce00;
  func_0x000107c61520(&UNK_10dc3ce00,&UNK_1106c05a8);
  puRam0000000112fcd278 = puVar1;
  return;
}



/* Entry: 103a2b01c; end: 103a2b05b;  */

void FUN_103a2b01c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3ce00;
  func_0x000107c61520(&UNK_10dc3ce00,&UNK_1106c05a8);
  puRam0000000112fcd278 = puVar1;
  return;
}



/* Entry: 103a2b05c; end: 103a2b05f;  */

void FUN_103a2b05c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3ce28;
  func_0x000107c61520(&UNK_10dc3ce28,&UNK_1106c05a8);
  puRam0000000112fcd280 = puVar1;
  return;
}



/* Entry: 103a2b060; end: 103a2b09f;  */

void FUN_103a2b060(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3ce28;
  func_0x000107c61520(&UNK_10dc3ce28,&UNK_1106c05a8);
  puRam0000000112fcd280 = puVar1;
  return;
}



/* Entry: 103a2b0a0; end: 103a2b2f3;  */

int FUN_103a2b0a0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103a2b11c;
        goto LAB_103a2b100;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103a2b100:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103a2b11c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103a2b2f4; end: 103a2b333;  */

void FUN_103a2b2f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd2b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3cf88;
  func_0x000107c61520(&UNK_10dc3cf88,&UNK_1106c0638);
  puRam0000000112fcd2b0 = puVar1;
  return;
}



/* Entry: 103a2b334; end: 103a2b337;  */

void FUN_103a2b334(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd2b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3cf20;
  func_0x000107c61520(&UNK_10dc3cf20,&UNK_1106c0638);
  puRam0000000112fcd2b8 = puVar1;
  return;
}



/* Entry: 103a2b338; end: 103a2b377;  */

void FUN_103a2b338(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd2b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3cf20;
  func_0x000107c61520(&UNK_10dc3cf20,&UNK_1106c0638);
  puRam0000000112fcd2b8 = puVar1;
  return;
}



/* Entry: 103a2b378; end: 103a2b37b;  */

void FUN_103a2b378(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd2c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3cef8;
  func_0x000107c61520(&UNK_10dc3cef8,&UNK_1106c0638);
  puRam0000000112fcd2c0 = puVar1;
  return;
}



/* Entry: 103a2b37c; end: 103a2b3bb;  */

void FUN_103a2b37c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd2c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3cef8;
  func_0x000107c61520(&UNK_10dc3cef8,&UNK_1106c0638);
  puRam0000000112fcd2c0 = puVar1;
  return;
}



/* Entry: 103a2b3bc; end: 103a2b3cf;  */

bool FUN_103a2b3bc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a2b3d0; end: 103a2b4a7;  */

void FUN_103a2b3d0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a2b4a8; end: 103a2b4b3;  */

void FUN_103a2b4a8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103a2b4b4; end: 103a2b4c3; -[_TtC34SCMapFootstepsMemoryStreamServices35SCFootstepsMemorySyncStatusResponse status] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a2b4b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fcd2d0);
}



/* Entry: 103a2b4c4; end: 103a2b50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2b4c4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcd2d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2b510; end: 103a2b54b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2b510(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fcd2d0) = param_1;
  FUN_103a2b5b8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2b54c; end: 103a2b5a7; -[_TtC34SCMapFootstepsMemoryStreamServices35SCFootstepsMemorySyncStatusResponse init] */

void FUN_103a2b54c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapFootstepsMemoryStreamServices.SCFootstepsMemorySyncStatusResponse",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2b578);
  (*pcVar1)();
}



/* Entry: 103a2b5a8; end: 103a2b5b7;  */

undefined1  [16] FUN_103a2b5a8(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103a2b5b8; end: 103a2b5d7;  */

void FUN_103a2b5b8(void)

{
  func_0x000107c61168(&PTR_PTR_1129148a0);
  return;
}



/* Entry: 103a2b5d8; end: 103a2b5db;  */

void FUN_103a2b5d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd2d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3d010;
  func_0x000107c61520(&UNK_10dc3d010,&UNK_1106c0728);
  puRam0000000112fcd2d8 = puVar1;
  return;
}



/* Entry: 103a2b5dc; end: 103a2b61b;  */

void FUN_103a2b5dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd2d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3d010;
  func_0x000107c61520(&UNK_10dc3d010,&UNK_1106c0728);
  puRam0000000112fcd2d8 = puVar1;
  return;
}



/* Entry: 103a2b61c; end: 103a2b62b;  */

undefined1  [16] FUN_103a2b61c(void)

{
  return ZEXT816(0x1106c0728);
}



/* Entry: 103a2b62c; end: 103a2b63b; -[_TtC34SCMapFootstepsMemoryStreamServices34SCMapFootstepsMemoryStreamServices streamingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2b62c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd308));
  return;
}



/* Entry: 103a2b63c; end: 103a2b743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2b63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcd308) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd310) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd318);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2b744; end: 103a2b7a3; -[_TtC34SCMapFootstepsMemoryStreamServices34SCMapFootstepsMemoryStreamServices init] */

void FUN_103a2b744(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapFootstepsMemoryStreamServices.SCMapFootstepsMemoryStreamServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2b770);
  (*pcVar1)();
}



/* Entry: 103a2b7a4; end: 103a2b7ef; -[_TtC34SCMapFootstepsMemoryStreamServices34SCMapFootstepsMemoryStreamServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2b7a4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fcd308));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fcd310));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fcd318 + 8))
  ;
  return;
}



/* Entry: 103a2b7f0; end: 103a2b7ff; -[_TtC27SCMapLocationMutingServices27SCMapLocationMutingServices mutingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2b7f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd348));
  return;
}



/* Entry: 103a2b800; end: 103a2b84b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2b800(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcd348) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2b84c; end: 103a2b8ab; -[_TtC27SCMapLocationMutingServices27SCMapLocationMutingServices init] */

void FUN_103a2b84c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapLocationMutingServices.SCMapLocationMutingServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2b878);
  (*pcVar1)();
}



/* Entry: 103a2b8ac; end: 103a2b8bb; -[_TtC27SCMapLocationMutingServices27SCMapLocationMutingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2b8ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd348));
  return;
}



/* Entry: 103a2b8bc; end: 103a2b92b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a2b8bc(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001000ad7c4();
  *(long *)(unaff_x20 + _DAT_112fcd380) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103a2b92c; end: 103a2b93b; -[_TtC36SCMapNavBarTooltipComplianceServices36SCMapNavBarTooltipComplianceServices mapNavBarTooltipComplianceChecker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2b92c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd380));
  return;
}



/* Entry: 103a2b93c; end: 103a2b99b; -[_TtC36SCMapNavBarTooltipComplianceServices36SCMapNavBarTooltipComplianceServices init] */

void FUN_103a2b93c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapNavBarTooltipComplianceServices.SCMapNavBarTooltipComplianceServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2b968);
  (*pcVar1)();
}



/* Entry: 103a2b99c; end: 103a2b9bb; -[_TtC36SCMapNavBarTooltipComplianceServices36SCMapNavBarTooltipComplianceServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2b99c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd380));
  return;
}



/* Entry: 103a2b9bc; end: 103a2bd4b;  */

long FUN_103a2b9bc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103a2bd4c; end: 103a2bd5b; -[_TtC19SCMapPeliasServices19SCMapPeliasServices peliasPlaceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2bd4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd3b0));
  return;
}



/* Entry: 103a2bd5c; end: 103a2bda7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2bd5c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcd3b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2bda8; end: 103a2bdff; -[_TtC19SCMapPeliasServices19SCMapPeliasServices initWithPeliasPlaceProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2bda8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fcd3b0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103a2be00; end: 103a2be5f; -[_TtC19SCMapPeliasServices19SCMapPeliasServices init] */

void FUN_103a2be00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapPeliasServices.SCMapPeliasServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2be2c);
  (*pcVar1)();
}



/* Entry: 103a2be60; end: 103a2be6f; -[_TtC19SCMapPeliasServices19SCMapPeliasServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2be60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd3b0));
  return;
}



/* Entry: 103a2be70; end: 103a2bebb; -[SCMapPeliasPlaceRequest address] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2be70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fcd3e0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fcd3e0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a2bebc; end: 103a2becb; -[SCMapPeliasPlaceRequest focusCurrentLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103a2bebc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fcd3e8);
}



/* Entry: 103a2becc; end: 103a2bedb; -[SCMapPeliasPlaceRequest isSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103a2becc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fcd3f0);
}



/* Entry: 103a2bedc; end: 103a2beeb; -[SCMapPeliasPlaceRequest maxResults] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2bedc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd3f8));
  return;
}



/* Entry: 103a2beec; end: 103a2c013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2beec(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd3e0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112fcd3e8) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112fcd3f0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd3f8) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2c014; end: 103a2c153; -[SCMapPeliasPlaceRequest initWithAddress:focusCurrentLocation:isSender:maxResults:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2c014(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fcd3e0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_112fcd3e8) = param_4;
  *(undefined1 *)(param_1 + _DAT_112fcd3f0) = param_5;
  *(undefined8 *)(param_1 + _DAT_112fcd3f8) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_50,puVar2);
  return;
}



/* Entry: 103a2c154; end: 103a2c157; -[SCMapPeliasPlaceRequest copyWithZone:] */

void FUN_103a2c154(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103a2c158; end: 103a2c173; -[SCMapPeliasPlaceRequest description] */

void FUN_103a2c158(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a2c174; end: 103a2c1ef; -[SCMapPeliasPlaceRequest init] */

void FUN_103a2c174(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapPeliasServices/SCMapPeliasPlaceRequestWrapper.swift",0x38,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2c1bc);
  (*pcVar1)();
}



/* Entry: 103a2c1f0; end: 103a2c22b; -[SCMapPeliasPlaceRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2c1f0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fcd3e0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd3f8));
  return;
}



/* Entry: 103a2c22c; end: 103a2c24b;  */

void FUN_103a2c22c(void)

{
  func_0x000107c61168(&PTR_PTR_112914c70);
  return;
}



/* Entry: 103a2c24c; end: 103a2c297; -[SCMapPeliasPlaceResponse address] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2c24c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fcd428);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fcd428))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a2c298; end: 103a2c2af; -[SCMapPeliasPlaceResponse coordinate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103a2c298(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fcd430);
}



/* Entry: 103a2c2b0; end: 103a2c3af; -[SCMapPeliasPlaceResponse initWithAddress:coordinate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2c2b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_3;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_3 + _DAT_112fcd428);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_3 + _DAT_112fcd430);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lStack_50 = param_3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2c3b0; end: 103a2c3b3; -[SCMapPeliasPlaceResponse copyWithZone:] */

void FUN_103a2c3b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103a2c3b4; end: 103a2c3cf; -[SCMapPeliasPlaceResponse description] */

void FUN_103a2c3b4(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a2c3d0; end: 103a2c44b; -[SCMapPeliasPlaceResponse init] */

void FUN_103a2c3d0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapPeliasServices/SCMapPeliasPlaceResponseWrapper.swift",0x39,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2c418);
  (*pcVar1)();
}



/* Entry: 103a2c44c; end: 103a2c45f; -[SCMapPeliasPlaceResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2c44c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fcd428 + 8))
  ;
  return;
}



/* Entry: 103a2c460; end: 103a2c47f;  */

void FUN_103a2c460(void)

{
  func_0x000107c61168(&PTR_PTR_112914d50);
  return;
}



/* Entry: 103a2c480; end: 103a2c483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2c480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd428);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fcd430);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2c484; end: 103a2c493; -[_TtC30SCMapPlacesVenueEditorServices30SCMapPlacesVenueEditorServices placeSuggestEditRevGeoFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2c484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd460));
  return;
}



/* Entry: 103a2c494; end: 103a2c4a3; -[_TtC30SCMapPlacesVenueEditorServices30SCMapPlacesVenueEditorServices venueEditorAsyncRequestMaker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2c494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd468));
  return;
}



/* Entry: 103a2c4a4; end: 103a2c507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2c4a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcd460) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fcd468) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2c508; end: 103a2c57f; -[_TtC30SCMapPlacesVenueEditorServices30SCMapPlacesVenueEditorServices initWithRevGeoFetcher:venueEditorAsyncRequestMaker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2c508(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fcd460) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fcd468) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103a2c580; end: 103a2c5df; -[_TtC30SCMapPlacesVenueEditorServices30SCMapPlacesVenueEditorServices init] */

void FUN_103a2c580(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapPlacesVenueEditorServices.SCMapPlacesVenueEditorServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a2c5ac);
  (*pcVar1)();
}



/* Entry: 103a2c5e0; end: 103a2c617; -[_TtC30SCMapPlacesVenueEditorServices30SCMapPlacesVenueEditorServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a2c5fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a2c600) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2c5e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd460));
  return;
}



/* Entry: 103a2c618; end: 103a2c627; -[_TtC16SCMapSDKServices16SCMapSDKServices nativeMapSDK] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2c618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fcd498));
  return;
}



/* Entry: 103a2c628; end: 103a2c673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2c628(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fcd498) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a2c674; end: 103a2c6a7;  */

void FUN_103a2c674(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a2c6a8; end: 103a2c6b7; -[_TtC16SCMapSDKServices16SCMapSDKServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a2c6a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcd498));
  return;
}



/* Entry: 103a2c6b8; end: 103a2c6c7; +[SCMapBitmojiStickerDefaults nonClusteredStickerID] */

void FUN_103a2c6b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112fcd4c8,auStack_38,0,0);
  uVar1 = uRam0000000112fcd4d0;
  uVar2 = uRam0000000112fcd4c8;
  func_0x000107c61434(uRam0000000112fcd4d0);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a2c6c8; end: 103a2c6d7; +[SCMapBitmojiStickerDefaults setNonClusteredStickerID:] */

void FUN_103a2c6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  func_0x000107c61428(0x112fcd4c8,auStack_48,1,0);
  uVar1 = uRam0000000112fcd4d0;
  uRam0000000112fcd4c8 = param_3;
  uRam0000000112fcd4d0 = param_2;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 103a2c6d8; end: 103a2c6e7; +[SCMapBitmojiStickerDefaults clusteredLeftFacingStickerID] */

void FUN_103a2c6d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112fcd4d8,auStack_38,0,0);
  uVar1 = uRam0000000112fcd4e0;
  uVar2 = uRam0000000112fcd4d8;
  func_0x000107c61434(uRam0000000112fcd4e0);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a2c6e8; end: 103a2c6f7; +[SCMapBitmojiStickerDefaults setClusteredLeftFacingStickerID:] */

void FUN_103a2c6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  func_0x000107c61428(0x112fcd4d8,auStack_48,1,0);
  uVar1 = uRam0000000112fcd4e0;
  uRam0000000112fcd4d8 = param_3;
  uRam0000000112fcd4e0 = param_2;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 103a2c6f8; end: 103a2c707; +[SCMapBitmojiStickerDefaults clusteredRightFacingStickerID] */

void FUN_103a2c6f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112fcd4e8,auStack_38,0,0);
  uVar1 = uRam0000000112fcd4f0;
  uVar2 = uRam0000000112fcd4e8;
  func_0x000107c61434(uRam0000000112fcd4f0);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a2c708; end: 103a2c723; +[SCMapBitmojiStickerDefaults setClusteredRightFacingStickerID:] */

void FUN_103a2c708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  func_0x000107c61428(0x112fcd4e8,auStack_48,1,0);
  uVar1 = uRam0000000112fcd4f0;
  uRam0000000112fcd4e8 = param_3;
  uRam0000000112fcd4f0 = param_2;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 103a2c724; end: 103a2c733; +[SCMapBitmojiStickerDefaults ghostModeStickerID] */

void FUN_103a2c724(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112fcd4f8,auStack_38,0,0);
  uVar1 = uRam0000000112fcd500;
  uVar2 = uRam0000000112fcd4f8;
  func_0x000107c61434(uRam0000000112fcd500);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a2c734; end: 103a2c79b;  */

void FUN_103a2c734(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3,auStack_38,0,0);
  uVar2 = *param_3;
  uVar1 = *param_4;
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a2c79c; end: 103a2c7ab; +[SCMapBitmojiStickerDefaults setGhostModeStickerID:] */

void FUN_103a2c79c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  func_0x000107c61428(0x112fcd4f8,auStack_48,1,0);
  uVar1 = uRam0000000112fcd500;
  uRam0000000112fcd4f8 = param_3;
  uRam0000000112fcd500 = param_2;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 103a2c7ac; end: 103a2c80f;  */

void FUN_103a2c7ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  func_0x000107c61428(param_4,auStack_48,1,0);
  uVar1 = *param_5;
  *param_4 = param_3;
  *param_5 = param_2;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 103a2c810; end: 103a2c84b; -[SCMapBitmojiStickerDefaults init] */

void FUN_103a2c810(undefined8 param_1)

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



/* Entry: 103a2c84c; end: 103a2c87f;  */

void FUN_103a2c84c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a2c880; end: 103a2c883; -[SCMapBitmojiStickerDefaults .cxx_destruct] */

void FUN_103a2c880(void)

{
  return;
}



/* Entry: 103a2c884; end: 103a2c8a3;  */

void FUN_103a2c884(void)

{
  func_0x000107c61168(&PTR_PTR_112914fa8);
  return;
}



/* Entry: 103a2c8a4; end: 103a2c8b7;  */

bool FUN_103a2c8a4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a2c8b8; end: 103a2c98f;  */

void FUN_103a2c8b8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a2c990; end: 103a2c9af;  */

void FUN_103a2c990(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103a2c9b0; end: 103a2c9ef;  */

void FUN_103a2c9b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd530 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3d310;
  func_0x000107c61520(&UNK_10dc3d310,&UNK_1106c0bd0);
  puRam0000000112fcd530 = puVar1;
  return;
}



/* Entry: 103a2c9f0; end: 103a2c9ff;  */

undefined1  [16] FUN_103a2c9f0(void)

{
  return ZEXT816(0x1106c0bd0);
}



/* Entry: 103a2ca00; end: 103a2cf7b;  */

void FUN_103a2ca00(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 103a2cf7c; end: 103a2cf8f;  */

bool FUN_103a2cf7c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a2cf90; end: 103a2d067;  */

void FUN_103a2cf90(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a2d068; end: 103a2d087;  */

void FUN_103a2d068(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103a2d088; end: 103a2d0c7;  */

void FUN_103a2d088(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcd538 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3d400;
  func_0x000107c61520(&UNK_10dc3d400,&UNK_1106c0d68);
  puRam0000000112fcd538 = puVar1;
  return;
}



/* Entry: 103a2d0c8; end: 103a2d0d7;  */

undefined1  [16] FUN_103a2d0c8(void)

{
  return ZEXT816(0x1106c0d68);
}



/* Entry: 103a2d0d8; end: 103a2d10f;  */

void FUN_103a2d0d8(undefined8 param_1)

{
  if (lRam0000000112fcd598 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e79d2e8);
  return;
}



/* Entry: 103a2d110; end: 103a2d1af;  */

long * FUN_103a2d110(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar4;
    param_1[2] = param_2[2];
    iVar2 = *(int *)(param_3 + 0x18);
    lVar3 = 0;
    func_0x000107c5eea4();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    func_0x000107c61434(lVar4);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103a2d1b0; end: 103a2d1f3;  */

void FUN_103a2d1b0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000103a2d1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 103a2d1f4; end: 103a2d267;  */

undefined8 * FUN_103a2d1f4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  iVar2 = *(int *)(param_3 + 0x18);
  lVar3 = 0;
  func_0x000107c5eea4();
  pcVar4 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
  func_0x000107c61434(uVar1);
  (*pcVar4)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  return param_1;
}



/* Entry: 103a2d268; end: 103a2d3af;  */

undefined8 * FUN_103a2d268(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  param_1[2] = param_2[2];
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}


