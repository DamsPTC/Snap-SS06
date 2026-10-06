/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10329dde8; end: 10329de2f; -[SCStorySharingUIConfiguration init] */

void FUN_10329dde8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCStorySharingServices/SCStorySharingUIConfigurationWrapper.swift",0x41,2,
                      0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10329de30);
  (*pcVar1)();
}



/* Entry: 10329de30; end: 10329de4b; +[SCStorySharingUIConfigurationBuilder storySharingUIConfiguration] */

void FUN_10329de30(void)

{
  func_0x000107c614ec();
  func_0x000107c610f8();
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10329de4c; end: 10329de8b; +[SCStorySharingUIConfigurationBuilder storySharingUIConfigurationWithExistingStorySharingUIConfiguration:] */

void FUN_10329de4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_10329e6b4(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10329de8c; end: 10329de97; -[SCStorySharingUIConfigurationBuilder withTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329de8c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f51348);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10329de98; end: 10329dea3; -[SCStorySharingUIConfigurationBuilder withSubtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329de98(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f51350);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10329dea4; end: 10329deaf; -[SCStorySharingUIConfigurationBuilder withThumbnailUrlString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329dea4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f51358);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10329deb0; end: 10329debb; -[SCStorySharingUIConfigurationBuilder withStoryPosterUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329deb0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f51360);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10329debc; end: 10329ded3; -[SCStorySharingUIConfigurationBuilder withBadgeType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329debc(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + _DAT_112f51368);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10329ded4; end: 10329deeb; -[SCStorySharingUIConfigurationBuilder withActionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329ded4(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + _DAT_112f51370);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10329deec; end: 10329df03; -[SCStorySharingUIConfigurationBuilder withHeaderState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329deec(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + _DAT_112f51378);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10329df04; end: 10329df0f; -[SCStorySharingUIConfigurationBuilder withErrorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329df04(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f51380);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10329df10; end: 10329df1b; -[SCStorySharingUIConfigurationBuilder withExtensionCTATitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329df10(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f51388);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10329df1c; end: 10329df27; -[SCStorySharingUIConfigurationBuilder withViewCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329df1c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f51390);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10329df28; end: 10329df33; -[SCStorySharingUIConfigurationBuilder withAvatarBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329df28(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f51398);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10329df34; end: 10329df97;  */

void FUN_10329df34(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + *param_4);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10329df98; end: 10329e22b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329df98(long param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  long unaff_x20;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long lStack_70;
  long lStack_68;
  
  puVar1 = (undefined4 *)(unaff_x20 + _DAT_112f51368);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_74 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_74 = *puVar1;
  }
  puVar1 = (undefined4 *)(unaff_x20 + _DAT_112f51370);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_78 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_78 = *puVar1;
  }
  puVar1 = (undefined4 *)(unaff_x20 + _DAT_112f51378);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_7c = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_7c = *puVar1;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f51348);
  uVar11 = ((undefined8 *)(unaff_x20 + _DAT_112f51348))[1];
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f51350);
  uVar12 = ((undefined8 *)(unaff_x20 + _DAT_112f51350))[1];
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f51358);
  uVar13 = ((undefined8 *)(unaff_x20 + _DAT_112f51358))[1];
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f51360);
  uVar14 = ((undefined8 *)(unaff_x20 + _DAT_112f51360))[1];
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f51380);
  uVar15 = ((undefined8 *)(unaff_x20 + _DAT_112f51380))[1];
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f51388);
  uVar16 = ((undefined8 *)(unaff_x20 + _DAT_112f51388))[1];
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f51390);
  uVar17 = ((undefined8 *)(unaff_x20 + _DAT_112f51390))[1];
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f51398);
  uVar18 = ((undefined8 *)(unaff_x20 + _DAT_112f51398))[1];
  FUN_10329e920();
  lVar20 = param_1;
  func_0x000107c610f8();
  puVar2 = (undefined8 *)(lVar20 + _DAT_112f512f0);
  *puVar2 = uVar3;
  puVar2[1] = uVar11;
  puVar2 = (undefined8 *)(lVar20 + _DAT_112f512f8);
  *puVar2 = uVar4;
  puVar2[1] = uVar12;
  puVar2 = (undefined8 *)(lVar20 + _DAT_112f51300);
  *puVar2 = uVar5;
  puVar2[1] = uVar13;
  puVar2 = (undefined8 *)(lVar20 + _DAT_112f51308);
  *puVar2 = uVar6;
  puVar2[1] = uVar14;
  *(undefined4 *)(lVar20 + _DAT_112f51310) = uStack_74;
  *(undefined4 *)(lVar20 + _DAT_112f51318) = uStack_78;
  *(undefined4 *)(lVar20 + _DAT_112f51320) = uStack_7c;
  puVar2 = (undefined8 *)(lVar20 + _DAT_112f51328);
  *puVar2 = uVar7;
  puVar2[1] = uVar15;
  puVar2 = (undefined8 *)(lVar20 + _DAT_112f51330);
  *puVar2 = uVar8;
  puVar2[1] = uVar16;
  puVar2 = (undefined8 *)(lVar20 + _DAT_112f51338);
  *puVar2 = uVar9;
  puVar2[1] = uVar17;
  puVar2 = (undefined8 *)(lVar20 + _DAT_112f51340);
  *puVar2 = uVar10;
  puVar2[1] = uVar18;
  puVar19 = PTR_s_init_1125d9248;
  lStack_70 = lVar20;
  lStack_68 = param_1;
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar12);
  func_0x000107c61434(uVar13);
  func_0x000107c61434(uVar14);
  func_0x000107c61434(uVar15);
  func_0x000107c61434(uVar16);
  func_0x000107c61434(uVar17);
  func_0x000107c61434(uVar18);
  func_0x000107c61154(&lStack_70,puVar19);
  return;
}



/* Entry: 10329e22c; end: 10329e26f; -[SCStorySharingUIConfigurationBuilder build] */

void FUN_10329e22c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10329df98();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10329e270; end: 10329e2b3; -[SCStorySharingUIConfigurationBuilder safeBuildAndReturnError:] */

void FUN_10329e270(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10329df98();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10329e2b4; end: 10329e3a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329e2b4(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51348);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51350);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51358);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51360);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined4 *)(unaff_x20 + _DAT_112f51368);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined4 *)(unaff_x20 + _DAT_112f51370);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined4 *)(unaff_x20 + _DAT_112f51378);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51380);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51388);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51390);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51398);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10329e3a8; end: 10329e3c7; -[SCStorySharingUIConfigurationBuilder init] */

void FUN_10329e3a8(void)

{
  FUN_10329e2b4();
  return;
}



/* Entry: 10329e3c8; end: 10329e3cb;  */

void FUN_10329e3c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10329e3cc; end: 10329e483; -[SCStorySharingUIConfigurationBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010329e3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329e414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329e43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329e464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329e440) */
/* WARNING: Removing unreachable block (ram,0x00010329e418) */
/* WARNING: Removing unreachable block (ram,0x00010329e3f0) */
/* WARNING: Removing unreachable block (ram,0x00010329e468) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329e3cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f51348 + 8))
  ;
  return;
}



/* Entry: 10329e484; end: 10329e4b7;  */

void FUN_10329e484(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10329e4b8; end: 10329e56f; -[SCStorySharingUIConfiguration .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010329e4d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329e500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329e528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329e550: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329e52c) */
/* WARNING: Removing unreachable block (ram,0x00010329e504) */
/* WARNING: Removing unreachable block (ram,0x00010329e4dc) */
/* WARNING: Removing unreachable block (ram,0x00010329e554) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329e4b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f512f0 + 8))
  ;
  return;
}



/* Entry: 10329e570; end: 10329e6b3;  */

/* WARNING: Possible PIC construction at 0x00010329e664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329e674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329e684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329e694: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329e688) */
/* WARNING: Removing unreachable block (ram,0x00010329e678) */
/* WARNING: Removing unreachable block (ram,0x00010329e668) */
/* WARNING: Removing unreachable block (ram,0x00010329e698) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329e570(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112f512f0);
  puVar2 = (undefined8 *)(param_2 + _DAT_112f51300);
  uVar8 = *(undefined4 *)(param_2 + _DAT_112f51310);
  puVar3 = (undefined8 *)(param_2 + _DAT_112f51308);
  uVar9 = *(undefined4 *)(param_2 + _DAT_112f51318);
  uVar10 = *(undefined4 *)(param_2 + _DAT_112f51320);
  puVar4 = (undefined8 *)(param_2 + _DAT_112f51328);
  puVar5 = (undefined8 *)(param_2 + _DAT_112f51330);
  puVar6 = (undefined8 *)(param_2 + _DAT_112f51338);
  puVar7 = (undefined8 *)(param_2 + _DAT_112f51340);
  uVar11 = puVar1[1];
  uVar12 = *puVar1;
  uVar14 = ((undefined8 *)(param_2 + _DAT_112f512f8))[1];
  uVar13 = *(undefined8 *)(param_2 + _DAT_112f512f8);
  param_1[1] = puVar1[1];
  *param_1 = uVar12;
  param_1[3] = uVar14;
  param_1[2] = uVar13;
  uVar12 = *puVar2;
  uVar14 = puVar3[1];
  uVar13 = *puVar3;
  param_1[5] = puVar2[1];
  param_1[4] = uVar12;
  param_1[7] = uVar14;
  param_1[6] = uVar13;
  *(undefined4 *)(param_1 + 8) = uVar8;
  *(undefined4 *)((long)param_1 + 0x44) = uVar9;
  *(undefined4 *)(param_1 + 9) = uVar10;
  uVar12 = *puVar4;
  uVar14 = puVar5[1];
  uVar13 = *puVar5;
  param_1[0xb] = puVar4[1];
  param_1[10] = uVar12;
  param_1[0xd] = uVar14;
  param_1[0xc] = uVar13;
  uVar12 = *puVar6;
  uVar14 = puVar7[1];
  uVar13 = *puVar7;
  param_1[0xf] = puVar6[1];
  param_1[0xe] = uVar12;
  param_1[0x11] = uVar14;
  param_1[0x10] = uVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar11);
  return;
}



/* Entry: 10329e6b4; end: 10329e91f;  */

/* WARNING: Possible PIC construction at 0x00010329e6e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329e6ec) */

void FUN_10329e6b4(long param_1)

{
  if (param_1 == 0) {
    func_0x00010329e940();
    func_0x000107c610f8();
  }
  else {
    func_0x00010329e940();
    func_0x000107c610f8();
    func_0x000107c61174(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10329e920; end: 10329e95f;  */

void FUN_10329e920(void)

{
  func_0x000107c61168(&PTR_PTR_1128c70c0);
  return;
}



/* Entry: 10329e960; end: 10329e963;  */

void FUN_10329e960(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10329e964; end: 10329ec6b;  */

long FUN_10329e964(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10329ec6c; end: 10329ec7b; -[_TtC25SCStorySharePlaybackScope25SCStorySharePlaybackScope sourceView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329ec6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f513f8));
  return;
}



/* Entry: 10329ec7c; end: 10329ec87; -[_TtC25SCStorySharePlaybackScope25SCStorySharePlaybackScope parentViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329ec7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51400;
  func_0x000107c61428(param_1 + _DAT_112f51400,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10329ec88; end: 10329ec93; -[_TtC25SCStorySharePlaybackScope25SCStorySharePlaybackScope setParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329ec88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51400;
  func_0x000107c61428(param_1 + _DAT_112f51400,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10329ec94; end: 10329eca3; -[_TtC25SCStorySharePlaybackScope25SCStorySharePlaybackScope operaLaunchingCandidates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329ec94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f51408));
  return;
}



/* Entry: 10329eca4; end: 10329ed0b; -[_TtC25SCStorySharePlaybackScope25SCStorySharePlaybackScope playlistPlugins] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329eca4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112f51410);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    uVar1 = 0x112e9e980;
    func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,uVar1);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10329ed0c; end: 10329ed1b; -[_TtC25SCStorySharePlaybackScope25SCStorySharePlaybackScope operaSessionContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329ed0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f51418));
  return;
}



/* Entry: 10329ed1c; end: 10329ed27; -[_TtC25SCStorySharePlaybackScope25SCStorySharePlaybackScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329ed1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51420;
  func_0x000107c61428(param_1 + _DAT_112f51420,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10329ed28; end: 10329ed33; -[_TtC25SCStorySharePlaybackScope25SCStorySharePlaybackScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329ed28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51420;
  func_0x000107c61428(param_1 + _DAT_112f51420,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10329ed34; end: 10329ed3f; -[_TtC25SCStorySharePlaybackScope25SCStorySharePlaybackScope operaPresenterDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329ed34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f51428;
  func_0x000107c61428(param_1 + _DAT_112f51428,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10329ed40; end: 10329ed83;  */

void FUN_10329ed40(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10329ed84; end: 10329ed8f; -[_TtC25SCStorySharePlaybackScope25SCStorySharePlaybackScope setOperaPresenterDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329ed84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f51428;
  func_0x000107c61428(param_1 + _DAT_112f51428,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10329ed90; end: 10329ede3;  */

void FUN_10329ed90(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10329ede4; end: 10329edf3; -[_TtC25SCStorySharePlaybackScope25SCStorySharePlaybackScope transitionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10329ede4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f51430);
}



/* Entry: 10329edf4; end: 10329efb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10329edf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_b8 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f51400;
  func_0x000107c61614(unaff_x20 + _DAT_112f51400,0);
  lVar3 = _DAT_112f51420;
  func_0x000107c61614(unaff_x20 + _DAT_112f51420,0);
  lVar4 = _DAT_112f51428;
  func_0x000107c61614(unaff_x20 + _DAT_112f51428,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f513f8) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112f51408) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f51410) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f51418) = param_5;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_6);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_a8,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_7);
  *(undefined8 *)(unaff_x20 + _DAT_112f51430) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puVar5 = auStack_b8;
  func_0x000107c61154(puVar5,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  return puVar5;
}



/* Entry: 10329efb8; end: 10329f0eb; -[_TtC25SCStorySharePlaybackScope25SCStorySharePlaybackScope initWithSourceView:parentViewController:operaLaunchingCandidates:playlistPlugins:operaSessionContext:delegate:operaPresenterDelegate:transitionMode:] */

undefined8
FUN_10329efb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_78;
  
  if (param_6 == 0) {
    lStack_78 = 0;
  }
  else {
    uVar1 = 0x112e9e980;
    func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
    func_0x000107c5fc54(param_6,uVar1);
    lStack_78 = param_6;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  uVar3 = param_5;
  func_0x000107c61174(param_5);
  uVar4 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  FUN_10329f1d4(param_3,param_4,param_5,lStack_78,param_7,param_8,param_9,param_10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_9);
  return param_3;
}



/* Entry: 10329f0ec; end: 10329f14b; -[_TtC25SCStorySharePlaybackScope25SCStorySharePlaybackScope init] */

void FUN_10329f0ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStorySharePlaybackScope.SCStorySharePlaybackScope",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10329f118);
  (*pcVar1)();
}



/* Entry: 10329f14c; end: 10329f1d3; -[_TtC25SCStorySharePlaybackScope25SCStorySharePlaybackScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010329f178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010329f1b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010329f17c) */
/* WARNING: Removing unreachable block (ram,0x00010329f1bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10329f14c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f513f8));
  param_1 = param_1 + _DAT_112f51400;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10329f1d4; end: 10329f34f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329f1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112f51400;
  func_0x000107c61614(unaff_x20 + _DAT_112f51400,0);
  lVar3 = _DAT_112f51420;
  func_0x000107c61614(unaff_x20 + _DAT_112f51420,0);
  lVar4 = _DAT_112f51428;
  func_0x000107c61614(unaff_x20 + _DAT_112f51428,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f513f8) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112f51408) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f51410) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f51418) = param_5;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_6);
  func_0x000107c61428(unaff_x20 + lVar4,auStack_a8,1,0);
  func_0x000107c61604(unaff_x20 + lVar4,param_7);
  *(undefined8 *)(unaff_x20 + _DAT_112f51430) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&stack0xffffffffffffff48,puVar1);
  return;
}



/* Entry: 10329f350; end: 10329f36f;  */

void FUN_10329f350(void)

{
  func_0x000107c61168(&PTR_PTR_1128c72e0);
  return;
}



/* Entry: 10329f370; end: 10329f683;  */

long FUN_10329f370(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10329f684; end: 10329f68f; -[SCStoryShareUpNextConfig pageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329f684(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f51460))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f51460);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329f690; end: 10329f69f; -[SCStoryShareUpNextConfig firstStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329f690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f51468));
  return;
}



/* Entry: 10329f6a0; end: 10329f6e7; -[SCStoryShareUpNextConfig initialStoryIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329f6a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f51470);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10329f6e8; end: 10329f737; -[SCStoryShareUpNextConfig defaultFallbackStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329f6e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f51478);
  func_0x000101c84db4(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10329f738; end: 10329f743; -[SCStoryShareUpNextConfig triggeringStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329f738(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f51480))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f51480);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329f744; end: 10329f79b;  */

void FUN_10329f744(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10329f79c; end: 10329f7bb; -[SCStoryShareUpNextConfig playbackDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329f79c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f51488));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10329f7bc; end: 10329f7cb; -[SCStoryShareUpNextConfig lastPlaylistIndexBeforeUpNext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10329f7bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f51490);
}



/* Entry: 10329f7cc; end: 10329f7db; -[SCStoryShareUpNextConfig triggeringAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10329f7cc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112f51498);
}



/* Entry: 10329f7dc; end: 10329f8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329f7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51460);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f51468) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f51470) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f51478) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51480);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f51488) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f51490) = param_9;
  *(undefined4 *)(unaff_x20 + _DAT_112f51498) = param_10;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10329f8cc; end: 10329fa2b; -[SCStoryShareUpNextConfig initWithPageSessionId:firstStory:initialStoryIds:defaultFallbackStories:triggeringStoryId:playbackDataProvider:lastPlaylistIndexBeforeUpNext:triggeringAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329f8cc(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined4 param_10)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c5fc54(param_5,PTR___sSSN_11034da80);
  lVar4 = 0;
  func_0x000101c84db4();
  func_0x000107c5fc54();
  if (param_7 == 0) {
    param_7 = 0;
    lVar4 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f51460);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112f51468) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f51470) = param_5;
  *(undefined8 *)(param_1 + _DAT_112f51478) = param_6;
  plVar1 = (long *)(param_1 + _DAT_112f51480);
  *plVar1 = param_7;
  plVar1[1] = lVar4;
  *(undefined8 *)(param_1 + _DAT_112f51488) = param_8;
  *(undefined8 *)(param_1 + _DAT_112f51490) = param_9;
  *(undefined4 *)(param_1 + _DAT_112f51498) = param_10;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_8);
  func_0x000107c61154(&lStack_70,puVar2);
  return;
}



/* Entry: 10329fa2c; end: 10329fa6b;  */

undefined8 FUN_10329fa2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_10329fba0(param_1);
  FUN_10329fd18(param_1);
  return uVar1;
}



/* Entry: 10329fa6c; end: 10329fa6f; -[SCStoryShareUpNextConfig copyWithZone:] */

void FUN_10329fa6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10329fa70; end: 10329faa3; -[SCStoryShareUpNextConfig description] */

void FUN_10329fa70(void)

{
  undefined1 auStack_60 [80];
  
  FUN_10329fd4c(auStack_60);
  FUN_10329fd18(auStack_60);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10329faa4; end: 10329fb1f; -[SCStoryShareUpNextConfig init] */

void FUN_10329faa4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCStorySharePlaybackScope/SCStoryShareUpNextConfigWrapper.swift",0x3f,2,0x41,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10329faec);
  (*pcVar1)();
}



/* Entry: 10329fb20; end: 10329fb9f; -[SCStoryShareUpNextConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329fb20(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f51460 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f51468));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f51470));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f51478));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f51480 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f51488));
  return;
}



/* Entry: 10329fba0; end: 10329fd17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329fba0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f51460);
  puVar2[1] = uStack_48;
  *puVar2 = uStack_50;
  uStack_58 = param_1[2];
  uStack_60 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112f51468) = uStack_58;
  *(undefined8 *)(unaff_x20 + _DAT_112f51470) = uStack_60;
  uStack_68 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_112f51478) = uStack_68;
  uVar4 = param_1[5];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f51480);
  puVar2[1] = param_1[6];
  *puVar2 = uVar4;
  uStack_78 = param_1[6];
  uStack_80 = param_1[5];
  uVar4 = param_1[7];
  uVar1 = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_112f51488) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f51490) = uVar1;
  *(undefined4 *)(unaff_x20 + _DAT_112f51498) = *(undefined4 *)(param_1 + 9);
  FUN_10329fe44(&uStack_50,auStack_90,0x112d35ff8,&UNK_10d900cd0);
  FUN_10329fe44(&uStack_58,auStack_90,0x112f514c8,&UNK_10dba65e8);
  FUN_10329fe44(&uStack_60,auStack_90,0x112d38270,&UNK_10d905a20);
  FUN_10329fe44(&uStack_68,auStack_90,0x112e400c0,&UNK_10da2e120);
  FUN_10329fe44(&uStack_80,auStack_90,0x112d35ff8,&UNK_10d900cd0);
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c615f0(uVar4);
  func_0x000107c61154(&stack0xffffffffffffff60,puVar3);
  return;
}



/* Entry: 10329fd18; end: 10329fd4b;  */

undefined8 FUN_10329fd18(undefined8 param_1)

{
  (*(code *)(undefined *)0x10329f39c)();
  return param_1;
}



/* Entry: 10329fd4c; end: 10329fe23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329fd4c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar6 = *(undefined8 *)(param_2 + _DAT_112f51468);
  puVar1 = (undefined8 *)(param_2 + _DAT_112f51460);
  uVar7 = *(undefined8 *)(param_2 + _DAT_112f51470);
  uVar8 = *(undefined8 *)(param_2 + _DAT_112f51478);
  puVar2 = (undefined8 *)(param_2 + _DAT_112f51480);
  uVar9 = *(undefined8 *)(param_2 + _DAT_112f51488);
  uVar5 = *(undefined8 *)(param_2 + _DAT_112f51490);
  uVar3 = *(undefined4 *)(param_2 + _DAT_112f51498);
  uVar4 = puVar1[1];
  uVar10 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar10;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  param_1[4] = uVar8;
  uVar10 = puVar2[1];
  uVar11 = *puVar2;
  param_1[6] = puVar2[1];
  param_1[5] = uVar11;
  param_1[7] = uVar9;
  param_1[8] = uVar5;
  *(undefined4 *)(param_1 + 9) = uVar3;
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(uVar9);
  return;
}



/* Entry: 10329fe24; end: 10329fe43;  */

void FUN_10329fe24(void)

{
  func_0x000107c61168(&PTR_PTR_1128c73d8);
  return;
}



/* Entry: 10329fe44; end: 10329fe8b;  */

undefined8 FUN_10329fe44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10329fe8c; end: 10329fe97; -[SCStoryShareContentProductPlaybackConfig initialStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329fe8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f514d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f514d0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329fe98; end: 10329feff; -[SCStoryShareContentProductPlaybackConfig storyLoggingFieldsOverrideDict] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329fe98(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112f514d8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5f9dc();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10329ff00; end: 10329ff0b; -[SCStoryShareContentProductPlaybackConfig initialClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329ff00(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f514e0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f514e0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329ff0c; end: 10329ff17; -[SCStoryShareContentProductPlaybackConfig currentPageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329ff0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f514e8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f514e8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10329ff18; end: 10329ff6f;  */

void FUN_10329ff18(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10329ff70; end: 10329ff7f; -[SCStoryShareContentProductPlaybackConfig isMyStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10329ff70(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f514f0);
}



/* Entry: 10329ff80; end: 1032a0043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329ff80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f514d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f514d8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f514e0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f514e8);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112f514f0) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a0044; end: 1032a01a3; -[SCStoryShareContentProductPlaybackConfig initWithInitialStoryId:storyLoggingFieldsOverrideDict:initialClientId:currentPageSessionId:isMyStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a0044(long param_1,undefined *param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined1 param_7)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    param_3 = 0;
    puVar2 = (undefined *)0x0;
    puVar5 = PTR___sSSN_11034da80;
  }
  else {
    func_0x000107c5faec();
    puVar2 = param_2;
    puVar5 = PTR___sSSN_11034da80;
  }
  PTR___sSSN_11034da80 = puVar5;
  if (param_4 != 0) {
    func_0x000107c5f9e8(param_4,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    param_2 = puVar5;
  }
  if (param_5 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    puVar5 = param_2;
  }
  lVar4 = param_6;
  func_0x000107c61174();
  if (lVar4 == 0) {
    param_6 = 0;
    param_2 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
  }
  plVar1 = (long *)(param_1 + _DAT_112f514d0);
  *plVar1 = param_3;
  plVar1[1] = (long)puVar2;
  *(long *)(param_1 + _DAT_112f514d8) = param_4;
  plVar1 = (long *)(param_1 + _DAT_112f514e0);
  *plVar1 = param_5;
  plVar1[1] = (long)puVar5;
  plVar1 = (long *)(param_1 + _DAT_112f514e8);
  *plVar1 = param_6;
  plVar1[1] = (long)param_2;
  *(undefined1 *)(param_1 + _DAT_112f514f0) = param_7;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a01a4; end: 1032a02c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a01a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c610f8();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f514d0);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112f514d8) = uStack_58;
  uStack_68 = param_1[4];
  uStack_70 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f514e0);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  uStack_78 = param_1[6];
  uStack_80 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f514e8);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  FUN_1032a02c8(&uStack_50,auStack_90,0x112d35ff8,&UNK_10d900cd0);
  FUN_1032a02c8(&uStack_58,auStack_90,0x112f39d78,&UNK_10db84f78);
  FUN_1032a02c8(&uStack_70,auStack_90,0x112d35ff8,&UNK_10d900cd0);
  FUN_1032a02c8(&uStack_80,auStack_90,0x112d35ff8,&UNK_10d900cd0);
  func_0x0001032a0310(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112f514f0) = *(undefined1 *)(param_1 + 7);
  func_0x000107c61154(auStack_a0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a02c8; end: 1032a0343;  */

undefined8 FUN_1032a02c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1032a0344; end: 1032a0347; -[SCStoryShareContentProductPlaybackConfig copyWithZone:] */

void FUN_1032a0344(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1032a0348; end: 1032a037b; -[SCStoryShareContentProductPlaybackConfig description] */

void FUN_1032a0348(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032a037c; end: 1032a03f7; -[SCStoryShareContentProductPlaybackConfig init] */

void FUN_1032a037c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCStorySharePlaybackScope/SCStoryShareContentProductPlaybackConfigWrapper.swift"
                      ,0x4f,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032a03c4);
  (*pcVar1)();
}



/* Entry: 1032a03f8; end: 1032a045b; -[SCStoryShareContentProductPlaybackConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032a0418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a043c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a041c) */
/* WARNING: Removing unreachable block (ram,0x0001032a0440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a03f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f514d0 + 8))
  ;
  return;
}



/* Entry: 1032a045c; end: 1032a047b;  */

void FUN_1032a045c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c74d8);
  return;
}



/* Entry: 1032a047c; end: 1032a04b3;  */

void FUN_1032a047c(undefined8 *param_1)

{
  (*(code *)&UNK_103b13c00)();
  uRam00000001135183e8 = *param_1;
  uRam00000001135183f0 = param_1[1];
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 1032a04b4; end: 1032a04e3;  */

void FUN_1032a04b4(undefined8 *param_1,code *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  (*param_2)();
  uVar1 = param_1[1];
  *param_3 = *param_1;
  *param_4 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 1032a04e4; end: 1032a0a47;  */

/* WARNING: Possible PIC construction at 0x0001032a0638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a0748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a0798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a097c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a098c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a09ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a0918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a0940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a09c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a09d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a09ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a0878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032a096c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a09b0) */
/* WARNING: Removing unreachable block (ram,0x0001032a09dc) */
/* WARNING: Removing unreachable block (ram,0x0001032a09cc) */
/* WARNING: Removing unreachable block (ram,0x0001032a0944) */
/* WARNING: Removing unreachable block (ram,0x0001032a091c) */
/* WARNING: Removing unreachable block (ram,0x0001032a093c) */
/* WARNING: Removing unreachable block (ram,0x0001032a09f0) */
/* WARNING: Removing unreachable block (ram,0x0001032a0990) */
/* WARNING: Removing unreachable block (ram,0x0001032a09e0) */
/* WARNING: Removing unreachable block (ram,0x0001032a0980) */
/* WARNING: Removing unreachable block (ram,0x0001032a079c) */
/* WARNING: Removing unreachable block (ram,0x0001032a0954) */
/* WARNING: Removing unreachable block (ram,0x0001032a07a0) */
/* WARNING: Removing unreachable block (ram,0x0001032a0960) */
/* WARNING: Removing unreachable block (ram,0x0001032a07b0) */
/* WARNING: Removing unreachable block (ram,0x0001032a07e0) */
/* WARNING: Removing unreachable block (ram,0x0001032a0988) */
/* WARNING: Removing unreachable block (ram,0x0001032a0820) */
/* WARNING: Removing unreachable block (ram,0x0001032a0834) */
/* WARNING: Removing unreachable block (ram,0x0001032a0828) */
/* WARNING: Removing unreachable block (ram,0x0001032a087c) */
/* WARNING: Removing unreachable block (ram,0x0001032a08c0) */
/* WARNING: Removing unreachable block (ram,0x0001032a08ac) */
/* WARNING: Removing unreachable block (ram,0x0001032a08c8) */
/* WARNING: Removing unreachable block (ram,0x0001032a09a0) */
/* WARNING: Removing unreachable block (ram,0x0001032a08dc) */
/* WARNING: Removing unreachable block (ram,0x0001032a09c4) */
/* WARNING: Removing unreachable block (ram,0x0001032a0908) */
/* WARNING: Removing unreachable block (ram,0x0001032a08bc) */
/* WARNING: Removing unreachable block (ram,0x0001032a0978) */
/* WARNING: Removing unreachable block (ram,0x0001032a074c) */
/* WARNING: Removing unreachable block (ram,0x0001032a063c) */
/* WARNING: Removing unreachable block (ram,0x0001032a0658) */
/* WARNING: Removing unreachable block (ram,0x0001032a0678) */
/* WARNING: Removing unreachable block (ram,0x0001032a0698) */
/* WARNING: Removing unreachable block (ram,0x0001032a0774) */
/* WARNING: Removing unreachable block (ram,0x0001032a0778) */
/* WARNING: Removing unreachable block (ram,0x0001032a06ac) */
/* WARNING: Removing unreachable block (ram,0x0001032a06c4) */
/* WARNING: Removing unreachable block (ram,0x0001032a0748) */
/* WARNING: Removing unreachable block (ram,0x0001032a0970) */
/* WARNING: Removing unreachable block (ram,0x0001032a09e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a04e4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  func_0x000107d02b54();
  func_0x000107c61180();
  lVar2 = unaff_x20 + _DAT_112f51520;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (lRam00000001135183e0 != -1) {
      func_0x000107c61568(0x1135183e0,FUN_1032a047c);
    }
    uVar3 = uRam00000001135183e8;
    func_0x000107c5fadc(uRam00000001135183e8,uRam00000001135183f0);
    lVar4 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    if (lRam00000001135183f8 != -1) {
      func_0x000107c61568(0x1135183f8,0x1032a0498);
    }
    uVar1 = uRam0000000113518408;
    *(undefined8 *)(lVar4 + 0x20) = uRam0000000113518400;
    *(undefined8 *)(lVar4 + 0x28) = uVar1;
    uVar5 = 0x112f51528;
    func_0x0001000285a8(0x112f51528,&UNK_10dba6628);
    *(undefined8 *)(lVar4 + 0x48) = uVar5;
    *(undefined8 *)(lVar4 + 0x30) = param_1;
    func_0x000107c61434(uVar1);
    func_0x000107c61174(param_1);
    lVar6 = lVar4;
    func_0x000100214a84(lVar4);
    func_0x000107c61588(lVar4);
    func_0x000100f15a0c(lVar4 + 0x20);
    func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                       );
    func_0x000107c6142c(lVar6);
    func_0x000107c4df84(lVar2);
    param_1 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032a0a48; end: 1032a0b7b; -[SCSpotlightWidgetPlugin injectSpotlightPreviewIntoOperaWithStory:] */

/* WARNING: Possible PIC construction at 0x0001032a0a80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a0a84) */

void FUN_1032a0a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1032a04e4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1032a0b7c; end: 1032a0b97;  */

void FUN_1032a0b7c(void)

{
  return;
}



/* Entry: 1032a0b98; end: 1032a0c93; -[SCSpotlightWidgetPlugin isSpotlightWidgetPreviewStoryWithDataModel:] */

uint FUN_1032a0b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = 0;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_40,param_3);
  func_0x000107c615e8(param_3);
  func_0x0001032a0a98(auStack_40);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_40);
  return uVar1 & 1;
}



/* Entry: 1032a0c94; end: 1032a0cbb; -[SCSpotlightWidgetPlugin advanceToNextStory] */

void FUN_1032a0c94(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001032a0c08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032a0cbc; end: 1032a0d07; -[SCSpotlightWidgetPlugin removeSpotlightWidgetPreviewFromPlaylistWithStory:] */

/* WARNING: Possible PIC construction at 0x0001032a0cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032a0cf4) */

void FUN_1032a0cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1032a1130();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1032a0d08; end: 1032a0d1b; -[SCSpotlightWidgetPlugin setPlaylistItemController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a0d08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f51538,param_3);
  return;
}



/* Entry: 1032a0d1c; end: 1032a0d2f; -[SCSpotlightWidgetPlugin setOperaControlling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a0d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f51530,param_3);
  return;
}



/* Entry: 1032a0d30; end: 1032a0ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a0d30(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f51520,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f51538,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f51530,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f51540) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f51548);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f51550) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f51558) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032a0de0; end: 1032a0dff; -[SCSpotlightWidgetPlugin init] */

void FUN_1032a0de0(void)

{
  FUN_1032a0d30();
  return;
}



/* Entry: 1032a0e00; end: 1032a0e33;  */

void FUN_1032a0e00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032a0e34; end: 1032a0eaf; -[SCSpotlightWidgetPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032a0e34(long param_1)

{
  func_0x000100d3fffc(param_1 + _DAT_112f51520);
  func_0x000100d3fffc(param_1 + _DAT_112f51538);
  func_0x000100d3fffc(param_1 + _DAT_112f51530);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f51540));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f51548 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f51550));
  return;
}



/* Entry: 1032a0eb0; end: 1032a0eb7; -[SCSpotlightWidgetPlugin playlistDataSource] */

void FUN_1032a0eb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}


