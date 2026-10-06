/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101076fe0; end: 101076fe7; +[SCFacebookLinkingStatus persistingContacts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101076fe0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112d58370) = 2;
  *(undefined1 *)(lVar1 + _DAT_112d58378) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101076fe8; end: 1010770a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101076fe8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112d58370) = param_3;
  *(undefined1 *)(lVar1 + _DAT_112d58378) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010770a4; end: 101077183; +[SCFacebookLinkingStatus finishedWithSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010770a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112d58370) = 3;
  *(undefined1 *)(lVar1 + _DAT_112d58378) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101077184; end: 1010771ef; -[SCFacebookLinkingStatus matchAuthenticatingWithFacebook:linkingFacebookAccount:persistingContacts:finished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101077184(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + _DAT_112d58370);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001010771a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001010771c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  if (bVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0001010771b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x10))(param_5);
    return;
  }
  if (*(byte *)(param_1 + _DAT_112d58378) != 2) {
                    /* WARNING: Could not recover jumptable at 0x0001010771e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_6 + 0x10))(param_6,*(byte *)(param_1 + _DAT_112d58378) & 1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010771f0);
  (*pcVar2)();
}



/* Entry: 1010771f0; end: 101077243;  */

void FUN_1010771f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101077244; end: 1010773ab;  */

int FUN_101077244(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1010772c0;
        goto LAB_1010772a4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1010772a4:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1010772c0:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1010773ac; end: 1010773eb;  */

void FUN_1010773ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d583a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91eaf0;
  func_0x000107c61520(&UNK_10d91eaf0,&UNK_11037c888);
  puRam0000000112d583a8 = puVar1;
  return;
}



/* Entry: 1010773ec; end: 1010773fb;  */

ulong FUN_1010773ec(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 1010773fc; end: 10107740b; -[AllContactsSyncingServices contactSyncingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010773fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d583b0));
  return;
}



/* Entry: 10107740c; end: 1010774a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107740c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d583b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010774a4; end: 101077503; -[AllContactsSyncingServices init] */

void FUN_1010774a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AllContactsSyncingServices.AllContactsSyncingServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010774d0);
  (*pcVar1)();
}



/* Entry: 101077504; end: 101077513; -[AllContactsSyncingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101077504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d583b0));
  return;
}



/* Entry: 101077514; end: 101077533;  */

void FUN_101077514(void)

{
  func_0x000107c61168(&PTR_PTR_1127ac940);
  return;
}



/* Entry: 101077534; end: 1010775d3;  */

int FUN_101077534(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1010775d4; end: 1010776a7;  */

void FUN_1010775d4(void)

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



/* Entry: 1010776a8; end: 1010776c7;  */

void FUN_1010776a8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1010776c8; end: 101077713; -[SCAllContactsSyncingStatus description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010776c8(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_112d583e0) == '\x02') &&
     (*(char *)(param_1 + _DAT_112d583e8 + 8) == '\x01')) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101077714);
    (*pcVar1)();
  }
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101077714; end: 10107775b; -[SCAllContactsSyncingStatus init] */

void FUN_101077714(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "AllContactsSyncingServices/AllContactsSyncingStatusWrapper.swift",0x40,2,0x35
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10107775c);
  (*pcVar1)();
}



/* Entry: 10107775c; end: 101077767; -[SCAllContactsSyncingStatus copyWithZone:] */

void FUN_10107775c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101077768; end: 101077777; +[SCAllContactsSyncingStatus syncing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101077768(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112d583e0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112d583e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101077778; end: 10107777f; +[SCAllContactsSyncingStatus fetching] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101077778(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112d583e0) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112d583e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101077780; end: 1010777e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101077780(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112d583e0) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d583e8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010777e4; end: 10107784b; +[SCAllContactsSyncingStatus didFetchWithNumberOfContacts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010777e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112d583e0) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112d583e8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10107784c; end: 101077853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107784c(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112d583e0) = 3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d583e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101077854; end: 1010778b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101077854(undefined1 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112d583e0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d583e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010778b8; end: 1010778bf; +[SCAllContactsSyncingStatus didFail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010778b8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112d583e0) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112d583e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010778c0; end: 101077927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010778c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112d583e0) = param_3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112d583e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101077928; end: 101077997; -[SCAllContactsSyncingStatus matchSyncing:fetching:didFetch:didFail:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101077928(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + _DAT_112d583e0);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101077948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000101077984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  if (bVar1 != 2) {
                    /* WARNING: Could not recover jumptable at 0x000101077990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_6 + 0x10))(param_6);
    return;
  }
  if (*(char *)((undefined8 *)(param_1 + _DAT_112d583e8) + 1) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000101077978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + _DAT_112d583e8));
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101077998);
  (*pcVar2)();
}



/* Entry: 101077998; end: 1010779eb;  */

void FUN_101077998(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010779ec; end: 101077b53;  */

int FUN_1010779ec(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101077a68;
        goto LAB_101077a4c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101077a4c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_101077a68:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101077b54; end: 101077b93;  */

void FUN_101077b54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d58418 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91ec10;
  func_0x000107c61520(&UNK_10d91ec10,&UNK_11037ca80);
  puRam0000000112d58418 = puVar1;
  return;
}



/* Entry: 101077b94; end: 101077ba3;  */

ulong FUN_101077b94(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 101077ba4; end: 101077bab; -[_TtC23SCChangeUsernameFeature33SingleScreenContainerNoBackground shouldPopToRootViewController] */

undefined8 FUN_101077ba4(void)

{
  return 0;
}



/* Entry: 101077bac; end: 101077bb3; -[_TtC23SCChangeUsernameFeature33SingleScreenContainerNoBackground shouldPopToRootViewControllerLater] */

undefined8 FUN_101077bac(void)

{
  return 1;
}



/* Entry: 101077bb4; end: 101077c5f; -[_TtC23SCChangeUsernameFeature33SingleScreenContainerNoBackground initWithNibName:bundle:] */

undefined1 * FUN_101077bb4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_40;
  if (param_3 == 0) {
    param_2 = param_4;
    func_0x000107c61174();
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c();
  }
  func_0x000101077d10();
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 101077c60; end: 101077cdf; -[_TtC23SCChangeUsernameFeature33SingleScreenContainerNoBackground initWithCoder:] */

undefined1 * FUN_101077c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000101077d10();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 101077ce0; end: 101077d2f;  */

void FUN_101077ce0(void)

{
  func_0x000101077d10();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101077d30; end: 10107844f;  */

long FUN_101077d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  lVar1 = unaff_x20;
  func_0x000101077d10();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(long *)(unaff_x20 + 0x78) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  return unaff_x20;
}



/* Entry: 101078450; end: 101078547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101078450(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x68) + _DAT_112daf250);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5adc0();
      func_0x000107c615e8(lVar1);
      if (((int)lVar2 != 0) && (*(long *)(unaff_x20 + 0x60) != 0)) {
        lVar1 = *(long *)(*(long *)(unaff_x20 + 0x60) + _DAT_112daf280);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar1 != 0) {
          lVar2 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083f78);
          func_0x000107c5d984();
          func_0x000107c61180();
          if (lVar2 == 0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(param_2);
          }
          func_0x000107c5da90(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c615e8(lVar1);
        }
      }
    }
  }
  return;
}



/* Entry: 101078548; end: 10107858b;  */

long FUN_101078548(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10107858c; end: 10107862f;  */

void FUN_10107858c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 101078630; end: 10107864f;  */

void FUN_101078630(void)

{
  func_0x000101077dec();
  return;
}



/* Entry: 101078650; end: 10107865f;  */

undefined8 FUN_101078650(void)

{
  return 0;
}



/* Entry: 101078660; end: 10107867f;  */

void FUN_101078660(void)

{
  func_0x000107c61168(&PTR_PTR_112d58488);
  return;
}



/* Entry: 101078680; end: 10107871f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101078680(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  lVar1 = _DAT_112d58550;
  func_0x000107c61614(unaff_x20 + _DAT_112d58550,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d58558) = 0;
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112d58560) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101078720; end: 10107877f; -[_TtC23SCChangeUsernameFeature31ChangeUsernamePageLaunchHandler init] */

void FUN_101078720(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChangeUsernameFeature.ChangeUsernamePageLaunchHandler",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10107874c);
  (*pcVar1)();
}



/* Entry: 101078780; end: 1010787c7; -[_TtC23SCChangeUsernameFeature31ChangeUsernamePageLaunchHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101078780(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d58550);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d58560));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d58558));
  return;
}



/* Entry: 1010787c8; end: 1010787cf; -[_TtC23SCChangeUsernameFeature31ChangeUsernamePageLaunchHandler screen] */

undefined8 FUN_1010787c8(void)

{
  return 0x1e;
}



/* Entry: 1010787d0; end: 10107880f;  */

void FUN_1010787d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d58568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91ee3c;
  func_0x000107c61520(&UNK_10d91ee3c,&UNK_11037cc10);
  puRam0000000112d58568 = puVar1;
  return;
}



/* Entry: 101078810; end: 101078923; -[_TtC23SCChangeUsernameFeature31ChangeUsernamePageLaunchHandler launchWithCommand:uiContainer:completion:] */

/* WARNING: Possible PIC construction at 0x000101078880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101078884) */

void FUN_101078810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_101078bd0(param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101078924; end: 10107899f;  */

/* WARNING: Possible PIC construction at 0x000101078950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101078954) */
/* WARNING: Removing unreachable block (ram,0x000101078994) */
/* WARNING: Removing unreachable block (ram,0x000101078974) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101078924(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112d58558;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112d58558) != 0) {
    func_0x000107c41864(*(long *)(unaff_x20 + _DAT_112d58558),param_2,0);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 1010789a0; end: 1010789bf;  */

void FUN_1010789a0(void)

{
  func_0x000107c61168(&PTR_PTR_1127acb78);
  return;
}



/* Entry: 1010789c0; end: 1010789e7; -[_TtC23SCChangeUsernameFeature31ChangeUsernamePageLaunchHandler usernameChangeDismissed] */

void FUN_1010789c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101078924();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010789e8; end: 101078ad7;  */

uint FUN_1010789e8(uint *param_1,int param_2)

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



/* Entry: 101078ad8; end: 101078b17;  */

void FUN_101078ad8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d58598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91ee14;
  func_0x000107c61520(&UNK_10d91ee14,&UNK_11037cc10);
  puRam0000000112d58598 = puVar1;
  return;
}



/* Entry: 101078b18; end: 101078b1f;  */

undefined8 FUN_101078b18(void)

{
  return 1;
}



/* Entry: 101078b20; end: 101078bbf;  */

void FUN_101078b20(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101078bc0; end: 101078bcf;  */

void FUN_101078bc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101078bd0; end: 101078d5b;  */

/* WARNING: Possible PIC construction at 0x000101078c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101078d40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101078c28) */
/* WARNING: Removing unreachable block (ram,0x000101078c2c) */
/* WARNING: Removing unreachable block (ram,0x000101078c6c) */
/* WARNING: Removing unreachable block (ram,0x000101078c48) */
/* WARNING: Removing unreachable block (ram,0x000101078d44) */
/* WARNING: Removing unreachable block (ram,0x000107c614ac) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0194) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101078bd0(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  if (param_1 == 0) {
    puVar1 = (undefined *)(param_2 + _DAT_112d58550);
    func_0x000107c61618();
    if (puVar1 != (undefined *)0x0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      goto code_r0x000107c61170;
    }
    lVar2 = 0;
  }
  uVar3 = *(undefined8 *)(param_2 + _DAT_112d58558);
  *(long *)(param_2 + _DAT_112d58558) = lVar2;
  func_0x000107c615f0(lVar2);
  func_0x000107c615f0(param_1);
  func_0x000107c615e8(uVar3);
  if (lVar2 == 0) {
    FUN_1010787d0();
    puVar1 = &UNK_11037cc10;
    func_0x000107c613f8(&UNK_11037cc10,uVar3,0,0);
    func_0x000107c5ed2c();
    (**(code **)(param_3 + 0x10))(param_3,puVar1);
  }
  else {
    puVar1 = PTR_PTR_1126aeb00;
    func_0x000107c610f8(PTR_PTR_1126aeb00);
    func_0x000107c464dc();
    func_0x000107c42c1c(*(undefined8 *)(param_2 + _DAT_112d58560));
    (**(code **)(param_3 + 0x10))(param_3,0);
    func_0x000107c615e8(lVar2);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101078d5c; end: 101078d5f; -[_TtC23SCChangeUsernameFeature31ChangeUsernamePageLaunchHandler usernameChangeComplete] */

/* WARNING: Possible PIC construction at 0x0001010788dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010788f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010788e0) */
/* WARNING: Removing unreachable block (ram,0x0001010788fc) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101078d5c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101078d60; end: 101078d63; -[_TtC23SCChangeUsernameFeature31ChangeUsernamePageLaunchHandler usernameChangeShareComplete] */

/* WARNING: Possible PIC construction at 0x0001010788dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010788f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010788e0) */
/* WARNING: Removing unreachable block (ram,0x0001010788fc) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101078d60(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101078d64; end: 101078d67; -[_TtC23SCChangeUsernameFeature31ChangeUsernamePageLaunchHandler usernameChangeCanceled] */

/* WARNING: Possible PIC construction at 0x0001010788dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010788f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010788e0) */
/* WARNING: Removing unreachable block (ram,0x0001010788fc) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101078d64(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101078d68; end: 101078dcf;  */

undefined8 FUN_101078d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_101078f48(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101078dd0; end: 101078e2f; -[_TtC23SCChangeUsernameFeature36ChangeUsernamePageLauncherEntryPoint init] */

void FUN_101078dd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChangeUsernameFeature.ChangeUsernamePageLauncherEntryPoint",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101078dfc);
  (*pcVar1)();
}



/* Entry: 101078e30; end: 101078eab; -[_TtC23SCChangeUsernameFeature36ChangeUsernamePageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101078e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101078e50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101078e30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d585a0));
  return;
}



/* Entry: 101078eac; end: 101078eb3;  */

undefined8 FUN_101078eac(void)

{
  return 0;
}



/* Entry: 101078eb4; end: 101078f43; -[_TtC23SCChangeUsernameFeature36ChangeUsernamePageLauncherEntryPoint handlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101078eb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  FUN_100f27668();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d585a8);
  func_0x000107c61174();
  uVar2 = 0x112d4c360;
  func_0x0001000285a8(0x112d4c360,&UNK_10d912dc0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101078f44; end: 101078f47; -[_TtC23SCChangeUsernameFeature36ChangeUsernamePageLauncherEntryPoint setHandlers:] */

void FUN_101078f44(void)

{
  return;
}



/* Entry: 101078f48; end: 10107904b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101078f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d585a0) = param_1;
  func_0x000107c61174(param_1);
  func_0x00010451338c();
  lVar3 = 0;
  FUN_1010789a0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112d58550;
  func_0x000107c61614(lVar4 + _DAT_112d58550,0);
  *(undefined8 *)(lVar4 + _DAT_112d58558) = 0;
  func_0x000107c61604(lVar4 + lVar2,param_1);
  *(undefined8 *)(lVar4 + _DAT_112d58560) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61174(param_3);
  plVar5 = &lStack_60;
  func_0x000107c61154(plVar5,puVar1);
  func_0x000107c61170(param_1);
  *(long **)(unaff_x20 + _DAT_112d585a8) = plVar5;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10107904c; end: 10107906b;  */

void FUN_10107904c(void)

{
  func_0x000107c61168(&PTR_PTR_1127acc48);
  return;
}



/* Entry: 10107906c; end: 1010792f7;  */

undefined * FUN_10107906c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c5a100(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x00010108f6d0();
  uVar3 = param_2;
  func_0x000107c5fb24();
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(puVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 1010792f8; end: 1010793a3;  */

undefined * FUN_1010792f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c5a100(puVar1,param_2,0x17);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2,param_2,0xc0);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c55f80(puVar1,param_2,0);
  func_0x000107c56ba8(puVar1,param_2,0);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1010793a4; end: 101079513;  */

undefined * FUN_1010793a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5a050();
  FUN_10108f6e8();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c53810(0x4030000000000000,0x4030000000000000,0x4030000000000000,0x4030000000000000,
                      puVar1);
  puVar2 = puVar1;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000107c30a7c();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c43780();
    func_0x000107c61180();
    func_0x000107c615e8(puVar3);
    func_0x000107c54adc(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
  }
  puVar2 = puVar1;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c59c74();
    func_0x000107c61170(puVar2);
  }
  puVar2 = puVar1;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c59c78(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
  }
  return puVar1;
}



/* Entry: 101079514; end: 10107951f; -[_TtC23SCChangeUsernameFeature20EnterNewUsernamePage leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101079514(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = 0;
  uStack_40 = 2;
  uStack_30 = 6;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101079520; end: 10107952b; -[_TtC23SCChangeUsernameFeature20EnterNewUsernamePage leftSwipeSucceed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101079520(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = 0;
  uStack_40 = 3;
  uStack_30 = 6;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10107952c; end: 1010797a3;  */

/* WARNING: Possible PIC construction at 0x00010107959c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010795dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010107960c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010796a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010796dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010796e0) */
/* WARNING: Removing unreachable block (ram,0x0001010797a0) */
/* WARNING: Removing unreachable block (ram,0x0001010796f4) */
/* WARNING: Removing unreachable block (ram,0x0001010796ac) */
/* WARNING: Removing unreachable block (ram,0x00010107979c) */
/* WARNING: Removing unreachable block (ram,0x0001010796c0) */
/* WARNING: Removing unreachable block (ram,0x000101079644) */
/* WARNING: Removing unreachable block (ram,0x000101079798) */
/* WARNING: Removing unreachable block (ram,0x000101079690) */
/* WARNING: Removing unreachable block (ram,0x000101079610) */
/* WARNING: Removing unreachable block (ram,0x000101079794) */
/* WARNING: Removing unreachable block (ram,0x000101079624) */
/* WARNING: Removing unreachable block (ram,0x0001010795e0) */
/* WARNING: Removing unreachable block (ram,0x000101079790) */
/* WARNING: Removing unreachable block (ram,0x0001010795f4) */
/* WARNING: Removing unreachable block (ram,0x0001010795a0) */
/* WARNING: Removing unreachable block (ram,0x00010107977c) */
/* WARNING: Removing unreachable block (ram,0x0001010795ac) */
/* WARNING: Removing unreachable block (ram,0x000101079714) */

void FUN_10107952c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = PTR_PTR_1126b0620;
  func_0x000107c61168(PTR_PTR_1126b0620);
  func_0x000107c5de64();
  func_0x000107c61180();
  FUN_10108f7c4();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c3d728(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1010797a4; end: 101079833; -[_TtC23SCChangeUsernameFeature20EnterNewUsernamePage viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010797a4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112d585e8);
  *(undefined8 *)(param_1 + _DAT_112d585e8) = uVar3;
  func_0x000107c61574(uVar4);
  FUN_10107952c();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101079834; end: 101079867; -[_TtC23SCChangeUsernameFeature20EnterNewUsernamePage getTitle] */

void FUN_101079834(undefined8 param_1,undefined8 param_2)

{
  FUN_10108f890();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 101079868; end: 10107a05b;  */

/* WARNING: Possible PIC construction at 0x000101079900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010799f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079bf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079c68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079fb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101079fd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101079fb4) */
/* WARNING: Removing unreachable block (ram,0x000101079f4c) */
/* WARNING: Removing unreachable block (ram,0x00010107a058) */
/* WARNING: Removing unreachable block (ram,0x000101079f80) */
/* WARNING: Removing unreachable block (ram,0x000101079f28) */
/* WARNING: Removing unreachable block (ram,0x000101079ecc) */
/* WARNING: Removing unreachable block (ram,0x00010107a054) */
/* WARNING: Removing unreachable block (ram,0x000101079f0c) */
/* WARNING: Removing unreachable block (ram,0x000101079e78) */
/* WARNING: Removing unreachable block (ram,0x000101079e0c) */
/* WARNING: Removing unreachable block (ram,0x000101079db8) */
/* WARNING: Removing unreachable block (ram,0x000101079d94) */
/* WARNING: Removing unreachable block (ram,0x000101079d44) */
/* WARNING: Removing unreachable block (ram,0x00010107a050) */
/* WARNING: Removing unreachable block (ram,0x000101079d78) */
/* WARNING: Removing unreachable block (ram,0x000101079d20) */
/* WARNING: Removing unreachable block (ram,0x000101079cc4) */
/* WARNING: Removing unreachable block (ram,0x00010107a04c) */
/* WARNING: Removing unreachable block (ram,0x000101079d04) */
/* WARNING: Removing unreachable block (ram,0x000101079c6c) */
/* WARNING: Removing unreachable block (ram,0x000101079c48) */
/* WARNING: Removing unreachable block (ram,0x000101079bf8) */
/* WARNING: Removing unreachable block (ram,0x00010107a048) */
/* WARNING: Removing unreachable block (ram,0x000101079c2c) */
/* WARNING: Removing unreachable block (ram,0x000101079bd4) */
/* WARNING: Removing unreachable block (ram,0x000101079b78) */
/* WARNING: Removing unreachable block (ram,0x00010107a044) */
/* WARNING: Removing unreachable block (ram,0x000101079bb8) */
/* WARNING: Removing unreachable block (ram,0x000101079b28) */
/* WARNING: Removing unreachable block (ram,0x000101079ae8) */
/* WARNING: Removing unreachable block (ram,0x000101079ac4) */
/* WARNING: Removing unreachable block (ram,0x000101079a74) */
/* WARNING: Removing unreachable block (ram,0x00010107a040) */
/* WARNING: Removing unreachable block (ram,0x000101079aa8) */
/* WARNING: Removing unreachable block (ram,0x000101079a50) */
/* WARNING: Removing unreachable block (ram,0x0001010799f4) */
/* WARNING: Removing unreachable block (ram,0x00010107a03c) */
/* WARNING: Removing unreachable block (ram,0x000101079a34) */
/* WARNING: Removing unreachable block (ram,0x00010107999c) */
/* WARNING: Removing unreachable block (ram,0x000101079978) */
/* WARNING: Removing unreachable block (ram,0x000101079928) */
/* WARNING: Removing unreachable block (ram,0x00010107a038) */
/* WARNING: Removing unreachable block (ram,0x00010107995c) */
/* WARNING: Removing unreachable block (ram,0x000101079904) */
/* WARNING: Removing unreachable block (ram,0x000101079fd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101079868(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 0x23;
  *(undefined8 *)(param_1 + 0x10) = 0x11;
  func_0x000107c4acb0(*(undefined8 *)(unaff_x20 + _DAT_112d585f0));
  func_0x000107c61180();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c4acb0();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10107a038);
  (*pcVar1)();
}



/* Entry: 10107a05c; end: 10107acaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107a05c(void)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar9 = unaff_x20 + _DAT_112d585d8;
  func_0x000107c61428(lVar9,auStack_78,0,0);
  lVar5 = *(long *)(lVar9 + 0x18);
  if (lVar5 != 0) {
    func_0x0001000a8868(lVar9,lVar5);
    lVar8 = *(long *)(lVar5 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    (**(code **)(lVar8 + 0x10))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    plVar1 = (long *)0x0;
    func_0x00010107e0c4();
    plVar2 = plVar1;
    FUN_10107ed44();
    (**(code **)(lVar8 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5);
    puVar3 = &UNK_11037ccb0;
    func_0x000107c613fc(&UNK_11037ccb0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    uVar7 = 0x10107c90c;
    puVar4 = puVar3;
    (**(code **)(*plVar2 + 0x60))(0x10107c90c);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c614f0(uVar7);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d585e8);
    pcVar10 = *(code **)(puVar4 + 0x10);
    func_0x000107c6157c(uVar6);
    (*pcVar10)();
    func_0x000107c615e8(uVar7);
    func_0x000107c61574(uVar6);
    lVar5 = *(long *)(lVar9 + 0x18);
    if (lVar5 != 0) {
      func_0x0001000a8868(lVar9,lVar5);
      lVar8 = *(long *)(lVar5 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
      (**(code **)(lVar8 + 0x10))(auStack_80 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
      plVar2 = plVar1;
      (*(code *)(undefined *)0x10107ed20)(plVar1,&PTR_DAT_11037cfa0);
      (**(code **)(lVar8 + 8))(auStack_80 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),lVar5);
      puVar3 = &UNK_11037ccb0;
      func_0x000107c613fc(&UNK_11037ccb0,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      pcVar10 = FUN_10107c40c;
      puVar4 = puVar3;
      (**(code **)(*plVar2 + 0x60))(FUN_10107c40c);
      func_0x000107c61574(plVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c614f0(pcVar10);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d585e8);
      pcVar11 = *(code **)(puVar4 + 0x10);
      func_0x000107c6157c(uVar7);
      (*pcVar11)();
      func_0x000107c615e8(pcVar10);
      func_0x000107c61574(uVar7);
      lVar5 = *(long *)(lVar9 + 0x18);
      if (lVar5 != 0) {
        func_0x0001000a8868(lVar9,lVar5);
        lVar8 = *(long *)(lVar5 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
        (**(code **)(lVar8 + 0x10))(auStack_80 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
        plVar2 = plVar1;
        FUN_10107edc0(plVar1,&PTR_DAT_11037cfa0);
        (**(code **)(lVar8 + 8))(auStack_80 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0),lVar5);
        puVar3 = &UNK_11037ccb0;
        func_0x000107c613fc(&UNK_11037ccb0,0x18,7);
        func_0x000107c61614(puVar3 + 0x10);
        pcVar10 = FUN_10107c3ec;
        puVar4 = puVar3;
        (**(code **)(*plVar2 + 0x60))(FUN_10107c3ec);
        func_0x000107c61574(plVar2);
        func_0x000107c61574(puVar3);
        func_0x000107c614f0(pcVar10);
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d585e8);
        pcVar11 = *(code **)(puVar4 + 0x10);
        func_0x000107c6157c(uVar7);
        (*pcVar11)();
        func_0x000107c615e8(pcVar10);
        func_0x000107c61574(uVar7);
        lVar5 = *(long *)(lVar9 + 0x18);
        if (lVar5 != 0) {
          func_0x0001000a8868(lVar9,lVar5);
          lVar8 = *(long *)(lVar5 + -8);
          (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
          (**(code **)(lVar8 + 0x10))(auStack_80 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
          plVar2 = plVar1;
          (*(code *)(undefined *)0x10107eddc)(plVar1,&PTR_DAT_11037cfa0);
          (**(code **)(lVar8 + 8))(auStack_80 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0),lVar5)
          ;
          puVar3 = &UNK_11037ccb0;
          func_0x000107c613fc(&UNK_11037ccb0,0x18,7);
          func_0x000107c61614(puVar3 + 0x10);
          uVar7 = 0x10107c3e4;
          puVar4 = puVar3;
          (**(code **)(*plVar2 + 0x60))(0x10107c3e4);
          func_0x000107c61574(plVar2);
          func_0x000107c61574(puVar3);
          func_0x000107c614f0(uVar7);
          uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d585e8);
          pcVar10 = *(code **)(puVar4 + 0x10);
          func_0x000107c6157c(uVar6);
          (*pcVar10)();
          func_0x000107c615e8(uVar7);
          func_0x000107c61574(uVar6);
          lVar5 = *(long *)(lVar9 + 0x18);
          if (lVar5 != 0) {
            func_0x0001000a8868(lVar9,lVar5);
            lVar8 = *(long *)(lVar5 + -8);
            (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
            (**(code **)(lVar8 + 0x10))(auStack_80 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
            plVar2 = plVar1;
            (*(code *)(undefined *)0x10107ece8)(plVar1,&PTR_DAT_11037cfa0);
            (**(code **)(lVar8 + 8))
                      (auStack_80 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0),lVar5);
            puVar3 = &UNK_11037ccb0;
            func_0x000107c613fc(&UNK_11037ccb0,0x18,7);
            func_0x000107c61614(puVar3 + 0x10);
            uVar7 = 0x10107c3dc;
            puVar4 = puVar3;
            (**(code **)(*plVar2 + 0x60))(0x10107c3dc);
            func_0x000107c61574(plVar2);
            func_0x000107c61574(puVar3);
            func_0x000107c614f0(uVar7);
            uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d585e8);
            pcVar10 = *(code **)(puVar4 + 0x10);
            func_0x000107c6157c(uVar6);
            (*pcVar10)();
            func_0x000107c615e8(uVar7);
            func_0x000107c61574(uVar6);
            lVar5 = *(long *)(lVar9 + 0x18);
            if (lVar5 != 0) {
              func_0x0001000a8868(lVar9,lVar5);
              lVar8 = *(long *)(lVar5 + -8);
              (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
              (**(code **)(lVar8 + 0x10))
                        (auStack_80 + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
              plVar2 = plVar1;
              (*(code *)(undefined *)0x10107ed04)(plVar1,&PTR_DAT_11037cfa0);
              (**(code **)(lVar8 + 8))
                        (auStack_80 + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0),lVar5);
              puVar3 = &UNK_11037ccb0;
              func_0x000107c613fc(&UNK_11037ccb0,0x18,7);
              func_0x000107c61614(puVar3 + 0x10);
              uVar7 = 0x10107c3d4;
              puVar4 = puVar3;
              (**(code **)(*plVar2 + 0x60))(0x10107c3d4);
              func_0x000107c61574(plVar2);
              func_0x000107c61574(puVar3);
              func_0x000107c614f0(uVar7);
              uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d585e8);
              pcVar10 = *(code **)(puVar4 + 0x10);
              func_0x000107c6157c(uVar6);
              (*pcVar10)();
              func_0x000107c615e8(uVar7);
              func_0x000107c61574(uVar6);
              lVar5 = *(long *)(lVar9 + 0x18);
              if (lVar5 != 0) {
                func_0x0001000a8868(lVar9,lVar5);
                lVar8 = *(long *)(lVar5 + -8);
                (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
                (**(code **)(lVar8 + 0x10))
                          (auStack_80 + -(extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
                plVar2 = plVar1;
                FUN_10107ee98(plVar1,&PTR_DAT_11037cfa0);
                (**(code **)(lVar8 + 8))
                          (auStack_80 + -(extraout_x8_05 + 0xfU & 0xfffffffffffffff0),lVar5);
                puVar3 = &UNK_11037ccb0;
                func_0x000107c613fc(&UNK_11037ccb0,0x18,7);
                func_0x000107c61614(puVar3 + 0x10);
                pcVar10 = FUN_10107c3cc;
                puVar4 = puVar3;
                (**(code **)(*plVar2 + 0x60))(FUN_10107c3cc);
                func_0x000107c61574(plVar2);
                func_0x000107c61574(puVar3);
                func_0x000107c614f0(pcVar10);
                uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d585e8);
                pcVar11 = *(code **)(puVar4 + 0x10);
                func_0x000107c6157c(uVar7);
                (*pcVar11)();
                func_0x000107c615e8(pcVar10);
                func_0x000107c61574(uVar7);
                lVar5 = *(long *)(lVar9 + 0x18);
                if (lVar5 != 0) {
                  func_0x0001000a8868(lVar9,lVar5);
                  lVar8 = *(long *)(lVar5 + -8);
                  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
                  (**(code **)(lVar8 + 0x10))
                            (auStack_80 + -(extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
                  plVar2 = plVar1;
                  FUN_10107ef24(plVar1,&PTR_DAT_11037cfa0);
                  (**(code **)(lVar8 + 8))
                            (auStack_80 + -(extraout_x8_06 + 0xfU & 0xfffffffffffffff0),lVar5);
                  puVar3 = &UNK_11037ccb0;
                  func_0x000107c613fc(&UNK_11037ccb0,0x18,7);
                  func_0x000107c61614(puVar3 + 0x10);
                  pcVar10 = FUN_10107c3ac;
                  puVar4 = puVar3;
                  (**(code **)(*plVar2 + 0x60))(FUN_10107c3ac);
                  func_0x000107c61574(plVar2);
                  func_0x000107c61574(puVar3);
                  func_0x000107c614f0(pcVar10);
                  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d585e8);
                  pcVar11 = *(code **)(puVar4 + 0x10);
                  func_0x000107c6157c(uVar7);
                  (*pcVar11)();
                  func_0x000107c615e8(pcVar10);
                  func_0x000107c61574(uVar7);
                  lVar5 = *(long *)(lVar9 + 0x18);
                  if (lVar5 != 0) {
                    func_0x0001000a8868(lVar9,lVar5);
                    lVar8 = *(long *)(lVar5 + -8);
                    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
                    (**(code **)(lVar8 + 0x10))
                              (auStack_80 + -(extraout_x8_07 + 0xfU & 0xfffffffffffffff0));
                    plVar2 = plVar1;
                    FUN_10107efc8(plVar1,&PTR_DAT_11037cfa0);
                    (**(code **)(lVar8 + 8))
                              (auStack_80 + -(extraout_x8_07 + 0xfU & 0xfffffffffffffff0),lVar5);
                    puVar3 = &UNK_11037ccb0;
                    func_0x000107c613fc(&UNK_11037ccb0,0x18,7);
                    func_0x000107c61614(puVar3 + 0x10);
                    uVar7 = 0x10107c3a4;
                    puVar4 = puVar3;
                    (**(code **)(*plVar2 + 0x60))(0x10107c3a4);
                    func_0x000107c61574(plVar2);
                    func_0x000107c61574(puVar3);
                    func_0x000107c614f0(uVar7);
                    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d585e8);
                    pcVar10 = *(code **)(puVar4 + 0x10);
                    func_0x000107c6157c(uVar6);
                    (*pcVar10)();
                    func_0x000107c615e8(uVar7);
                    func_0x000107c61574(uVar6);
                    lVar5 = *(long *)(lVar9 + 0x18);
                    if (lVar5 != 0) {
                      func_0x0001000a8868(lVar9,lVar5);
                      lVar8 = *(long *)(lVar5 + -8);
                      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
                      (**(code **)(lVar8 + 0x10))
                                (auStack_80 + -(extraout_x8_08 + 0xfU & 0xfffffffffffffff0));
                      plVar2 = plVar1;
                      (*(code *)(undefined *)0x10107f064)(plVar1,&PTR_DAT_11037cfa0);
                      (**(code **)(lVar8 + 8))
                                (auStack_80 + -(extraout_x8_08 + 0xfU & 0xfffffffffffffff0),lVar5);
                      puVar3 = &UNK_11037ccb0;
                      func_0x000107c613fc(&UNK_11037ccb0,0x18,7);
                      func_0x000107c61614(puVar3 + 0x10);
                      uVar7 = 0x10107c39c;
                      puVar4 = puVar3;
                      (**(code **)(*plVar2 + 0x60))(0x10107c39c);
                      func_0x000107c61574(plVar2);
                      func_0x000107c61574(puVar3);
                      func_0x000107c614f0(uVar7);
                      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d585e8);
                      pcVar10 = *(code **)(puVar4 + 0x10);
                      func_0x000107c6157c(uVar6);
                      (*pcVar10)();
                      func_0x000107c615e8(uVar7);
                      func_0x000107c61574(uVar6);
                      lVar5 = *(long *)(lVar9 + 0x18);
                      if (lVar5 != 0) {
                        func_0x0001000a8868(lVar9,lVar5);
                        lVar9 = *(long *)(lVar5 + -8);
                        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
                        (**(code **)(lVar9 + 0x10))
                                  (auStack_80 + -(extraout_x8_09 + 0xfU & 0xfffffffffffffff0));
                        (*(code *)(undefined *)0x10107f100)(plVar1,&PTR_DAT_11037cfa0);
                        (**(code **)(lVar9 + 8))
                                  (auStack_80 + -(extraout_x8_09 + 0xfU & 0xfffffffffffffff0),lVar5)
                        ;
                        puVar3 = &UNK_11037ccb0;
                        func_0x000107c613fc(&UNK_11037ccb0,0x18,7);
                        func_0x000107c61614(puVar3 + 0x10);
                        pcVar10 = FUN_10107c394;
                        puVar4 = puVar3;
                        (**(code **)(*plVar1 + 0x60))(FUN_10107c394);
                        func_0x000107c61574(plVar1);
                        func_0x000107c61574(puVar3);
                        func_0x000107c614f0(pcVar10);
                        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d585e8);
                        pcVar11 = *(code **)(puVar4 + 0x10);
                        func_0x000107c6157c(uVar7);
                        (*pcVar11)();
                        func_0x000107c615e8(pcVar10);
                        func_0x000107c61574(uVar7);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10107acb0; end: 10107aff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107acb0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d58600);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c55258(uVar1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 10107aff8; end: 10107b377;  */

void FUN_10107aff8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar14 = param_1[1];
  if (lVar14 != 0) {
    uVar15 = *param_1;
    uVar11 = param_1[2];
    uVar1 = param_1[3];
    uVar12 = param_1[4];
    uVar2 = param_1[5];
    uVar9 = param_1[6];
    uVar3 = param_1[7];
    func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      puVar5 = &UNK_11037ccb0;
      func_0x000107c613fc(&UNK_11037ccb0,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,param_2);
      func_0x000107c6157c(puVar5);
      func_0x000107c5fadc(uVar12,uVar2);
      pcStack_98 = FUN_10107c414;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      pcStack_a8 = FUN_100de205c;
      puStack_a0 = &UNK_11037ccc8;
      ppuVar6 = &puStack_b8;
      puStack_90 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar7 = PTR_PTR_1126aed70;
      func_0x000107c61168();
      puVar8 = puVar7;
      func_0x000107c3dad0();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(uVar12);
      puVar10 = puStack_90;
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar10);
      puVar5 = &UNK_11037ccb0;
      func_0x000107c613fc(&UNK_11037ccb0,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,param_2);
      func_0x000107c6157c(puVar5);
      func_0x000107c5fadc(uVar9,uVar3);
      pcStack_98 = FUN_10107c458;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      pcStack_a8 = FUN_100de205c;
      puStack_a0 = &UNK_11037ccf0;
      ppuVar6 = &puStack_b8;
      puStack_90 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c3dad0();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(uVar9);
      puVar10 = puStack_90;
      func_0x000107c61574(puVar5);
      func_0x000107c61574();
      FUN_100de9c28();
      func_0x000107c613fc();
      *(undefined8 *)(puVar10 + 0x18) = 5;
      *(undefined8 *)(puVar10 + 0x10) = 2;
      *(undefined **)(puVar10 + 0x20) = puVar8;
      *(undefined **)(puVar10 + 0x28) = puVar7;
      puVar5 = PTR_PTR_1126aed78;
      func_0x000107c610f8();
      func_0x000107c61174(puVar8);
      func_0x000107c61174(puVar7);
      func_0x000107c61434(uVar1);
      func_0x000107c61434(lVar14);
      func_0x000107c5fadc(uVar15,lVar14);
      func_0x000107c6142c(lVar14);
      func_0x000107c5fadc(uVar11,uVar1);
      func_0x000107c6142c(uVar1);
      uVar12 = 0;
      func_0x00010107c84c(0,0x112d360a8,&PTR_PTR_1126aed70);
      puVar13 = puVar10;
      func_0x000107c5fc48(puVar10,uVar12);
      func_0x000107c61574(puVar10);
      func_0x000107c48d50();
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(puVar13);
      func_0x000107c53fcc(puVar5);
      puVar10 = puVar5;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10107b378);
        (*pcVar4)();
      }
      func_0x000107c59ba8();
      func_0x000107c61170(puVar10);
      func_0x000107c4f018(param_2);
      func_0x000107c61170(param_2);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar5);
    }
  }
  return;
}



/* Entry: 10107b378; end: 10107b3eb;  */

void FUN_10107b378(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    uVar2 = *param_1;
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      FUN_10107b3ec(uVar2,lVar1);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 10107b3ec; end: 10107b60b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107b3ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  long *plVar6;
  code *pcVar7;
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined1 auStack_80 [24];
  long alStack_68 [3];
  undefined8 uStack_50;
  
  lVar1 = _DAT_112d585d8;
  func_0x000107c61428(unaff_x20 + _DAT_112d585d8,auStack_80,0,0);
  FUN_10107c4a8(unaff_x20 + lVar1,auStack_a8);
  if (lStack_90 == 0) {
    func_0x00010107c4f8(auStack_a8);
  }
  else {
    FUN_10107c540(auStack_a8,alStack_68);
    plVar6 = alStack_68;
    func_0x0001000a8868(plVar6,uStack_50);
    plVar6 = *(long **)(*(long *)(*plVar6 + 0xe0) + 0x10);
    func_0x000107c6157c(plVar6);
    uVar2 = 1;
    func_0x00010061b458(1);
    func_0x000107c61574();
    FUN_10107c558();
    func_0x000104884898();
    func_0x000107c61574(uVar2);
    puVar3 = &UNK_11037ccb0;
    func_0x000107c613fc(&UNK_11037ccb0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_11037cd78;
    func_0x000107c613fc(&UNK_11037cd78,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    pcVar7 = *(code **)(*plVar6 + 0x60);
    func_0x000107c61434(param_2);
    pcVar5 = FUN_10107c5ac;
    puVar3 = puVar4;
    (*pcVar7)(FUN_10107c5ac);
    func_0x000107c61574(plVar6);
    func_0x000107c61574(puVar4);
    func_0x000107c614f0(pcVar5);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d585e8);
    pcVar7 = *(code **)(puVar3 + 0x10);
    func_0x000107c6157c(uVar2);
    (*pcVar7)();
    func_0x000107c615e8(pcVar5);
    func_0x000107c61574(uVar2);
    func_0x0001000834e4(alStack_68);
  }
  return;
}



/* Entry: 10107b60c; end: 10107b91b;  */

void FUN_10107b60c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  uVar13 = *param_1;
  puVar11 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar11,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10107b91c(uVar13);
    uVar2 = uVar13;
    func_0x00010108f8c8();
    puVar3 = &UNK_11037cda0;
    func_0x000107c613fc(&UNK_11037cda0,0x18,7);
    *(long *)(puVar3 + 0x10) = param_2;
    func_0x000107c61174(param_2);
    func_0x000107c5fadc(uVar2,puVar11);
    func_0x000107c6142c(puVar11);
    pcStack_88 = FUN_10107c7f8;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_100de205c;
    puStack_90 = &UNK_11037cdb8;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar5 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61574(puStack_80);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61174();
    if ((ulong)puVar3 >> 0x3e == 0) {
      puVar6 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar3) {
        puVar6 = puVar3;
      }
      func_0x000107c60480(puVar6);
    }
    puVar6 = puVar6 + 1;
    uVar7 = 0;
    FUN_10108329c(0,puVar6,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar12 = uVar7 & 0xffffffffffffff8;
    uVar9 = *(ulong *)(uVar12 + 0x10);
    puVar3 = (undefined *)(uVar9 + 1);
    uVar10 = uVar7;
    if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar9) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
      puVar6 = puVar3;
      FUN_10108329c(uVar10,puVar3,1,uVar7);
      uVar12 = uVar10 & 0xffffffffffffff8;
    }
    *(undefined **)(uVar12 + 0x10) = puVar3;
    *(undefined **)(uVar12 + uVar9 * 8 + 0x20) = puVar5;
    func_0x000107c61174(uVar13);
    uVar2 = uVar13;
    func_0x00010108f8e8();
    puVar3 = PTR_PTR_1126aed78;
    func_0x000107c610f8();
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c5fadc(uVar2,puVar6);
    func_0x000107c6142c(puVar6);
    uVar8 = 0;
    func_0x00010107c84c(0,0x112d360a8,&PTR_PTR_1126aed70);
    uVar9 = uVar10;
    func_0x000107c5fc48(uVar10,uVar8);
    func_0x000107c454c0();
    func_0x000107c61170(uVar13);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar9);
    func_0x000107c53fcc(puVar3);
    puVar6 = puVar3;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10107b91c);
      (*pcVar1)();
    }
    func_0x000107c59ba8();
    func_0x000107c61170(puVar6);
    func_0x000107c4f018(param_2);
    func_0x000107c6142c(uVar10);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 10107b91c; end: 10107ba87;  */

undefined * FUN_10107b91c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c46db4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c53840(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 5;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  puVar4 = puVar1;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40290(0x4060000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(puVar3 + 0x20) = puVar5;
  puVar4 = puVar1;
  func_0x000107c5e308();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar5 = puVar4;
  func_0x000107c40290(0x4060000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(puVar3 + 0x28) = puVar5;
  uVar6 = 0;
  func_0x00010107c84c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar4 = puVar3;
  func_0x000107c5fc48(puVar3,uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 10107ba88; end: 10107bb3f;  */

void FUN_10107ba88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_11037cdf0;
  func_0x000107c613fc(&UNK_11037cdf0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  pcStack_40 = FUN_10107c800;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11037ce08;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10107bb40; end: 10107bbc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107bb40(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 auStack_50 [2];
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d585e0);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    uStack_40 = 6;
    auStack_50[0] = param_1;
    func_0x0001002a64a8(auStack_50);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 10107bbc8; end: 10107bd6f;  */

void FUN_10107bbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10107bd70; end: 10107bd7b; -[_TtC23SCChangeUsernameFeature20EnterNewUsernamePage changeUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107bd70(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = 0;
  uStack_40 = 1;
  uStack_30 = 6;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10107bd7c; end: 10107bd87; -[_TtC23SCChangeUsernameFeature20EnterNewUsernamePage suggestUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107bd7c(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = 0;
  uStack_40 = 4;
  uStack_30 = 6;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10107bd88; end: 10107bdd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107bd88(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_40 [2];
  undefined1 uStack_30;
  
  uStack_30 = 6;
  auStack_40[0] = param_1;
  func_0x000107c61174();
  func_0x0001002a64a8(auStack_40);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10107bdd8; end: 10107bfaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107bdd8(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d585d8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  lVar2 = _DAT_112d585e0;
  uVar3 = 0x112d58650;
  func_0x0001000285a8(0x112d58650,&UNK_10d91f870);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d585e8;
  uVar3 = 0;
  func_0x0001000c6560();
  uVar6 = 0x20;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d585f0;
  FUN_10107906c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d585f8;
  func_0x000101079150();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d58600;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c53840(puVar4);
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d58608;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d58610;
  FUN_1010792f8();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d58618;
  FUN_1010793a4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d58620;
  puVar4 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c59a2c();
  FUN_10108f7b4();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar6);
  func_0x000107c59e1c(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c5a050(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10107bfb0; end: 10107bfcf; -[_TtC23SCChangeUsernameFeature20EnterNewUsernamePage init] */

void FUN_10107bfb0(void)

{
  FUN_10107bdd8();
  return;
}



/* Entry: 10107bfd0; end: 10107c003;  */

void FUN_10107bfd0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10107c004; end: 10107c0bb; -[_TtC23SCChangeUsernameFeature20EnterNewUsernamePage .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010107c050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010107c070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010107c090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010107c074) */
/* WARNING: Removing unreachable block (ram,0x00010107c054) */
/* WARNING: Removing unreachable block (ram,0x00010107c094) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107c004(long param_1)

{
  func_0x00010107c4f8(param_1 + _DAT_112d585d8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d585e0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d585e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d585f0));
  return;
}



/* Entry: 10107c0bc; end: 10107c0db;  */

void FUN_10107c0bc(void)

{
  func_0x000107c61168(&PTR_PTR_1127acd10);
  return;
}



/* Entry: 10107c0dc; end: 10107c183; -[_TtC23SCChangeUsernameFeature20EnterNewUsernamePage dialogDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107c0dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long alStack_58 [2];
  undefined1 uStack_48;
  
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  lVar2 = param_3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c6a4();
    func_0x000107c61170(lVar2);
    alStack_58[1] = 0;
    uStack_48 = 5;
    alStack_58[0] = lVar3;
    func_0x0001002a64a8(alStack_58);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10107c184);
  (*pcVar1)();
}



/* Entry: 10107c184; end: 10107c18b; -[_TtC23SCChangeUsernameFeature20EnterNewUsernamePage textFieldShouldBeginEditing:] */

undefined8 FUN_10107c184(void)

{
  return 1;
}



/* Entry: 10107c18c; end: 10107c287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10107c18c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c610f8();
    func_0x000107c48af4();
    func_0x000107c61170(param_1);
    func_0x000107c5fadc(param_4);
    puVar2 = puVar1;
    func_0x000107c5c180();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_4);
    puVar1 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
    uStack_58 = 0;
    puStack_68 = puVar1;
    uStack_60 = param_5;
    func_0x0001002a64a8(&puStack_68);
    func_0x000107c6142c(param_5);
  }
  return 1;
}


