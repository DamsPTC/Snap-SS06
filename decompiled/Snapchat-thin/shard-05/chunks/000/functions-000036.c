/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a6a964; end: 103a6a967;  */

void FUN_103a6a964(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc423b0;
  func_0x000107c61520(&UNK_10dc423b0,&UNK_1106c2820);
  puRam0000000112fd9130 = puVar1;
  return;
}



/* Entry: 103a6a968; end: 103a6a9a7;  */

void FUN_103a6a968(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc423b0;
  func_0x000107c61520(&UNK_10dc423b0,&UNK_1106c2820);
  puRam0000000112fd9130 = puVar1;
  return;
}



/* Entry: 103a6a9a8; end: 103a6aab7;  */

void FUN_103a6a9a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e067a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc42460;
  func_0x000107c61520(&UNK_10dc42460,&UNK_1106c2820);
  puRam0000000112e067a8 = puVar1;
  return;
}



/* Entry: 103a6aab8; end: 103a6ab03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6aab8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9138) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6ab04; end: 103a6ab63; -[MemoriesValdiBackupServices init] */

void FUN_103a6ab04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesValdiBackupServicesAPI.MemoriesValdiBackupServices",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6ab30);
  (*pcVar1)();
}



/* Entry: 103a6ab64; end: 103a6ab73; -[MemoriesValdiBackupServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6ab64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9138));
  return;
}



/* Entry: 103a6ab74; end: 103a6ac4b; -[_TtC30SCMemPlatBackupFlipperServices28MemPlatBackupFlipperServices flipper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6ab74(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001003a5b88();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a6ac4c; end: 103a6ac7f;  */

void FUN_103a6ac4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a6ac80; end: 103a6ac8f; -[_TtC30SCMemPlatBackupFlipperServices28MemPlatBackupFlipperServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6ac80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9168));
  return;
}



/* Entry: 103a6ac90; end: 103a6acdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6ac90(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9198) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6acdc; end: 103a6ad17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6acdc(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fd9198) = param_1;
  func_0x0001002c57bc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6ad18; end: 103a6ad73; -[_TtC35MemPlatBackupSyncedMediaURLServices35MemPlatBackupSyncedMediaURLServices init] */

void FUN_103a6ad18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemPlatBackupSyncedMediaURLServices.MemPlatBackupSyncedMediaURLServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6ad44);
  (*pcVar1)();
}



/* Entry: 103a6ad74; end: 103a6ad83; -[_TtC35MemPlatBackupSyncedMediaURLServices35MemPlatBackupSyncedMediaURLServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6ad74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9198));
  return;
}



/* Entry: 103a6ad84; end: 103a6ae1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6ad84(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd91c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6ae1c; end: 103a6ae7b; -[_TtC49MemPlatBackupUpdateEntriesRequestBuildingServices49MemPlatBackupUpdateEntriesRequestBuildingServices init] */

void FUN_103a6ae1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemPlatBackupUpdateEntriesRequestBuildingServices.MemPlatBackupUpdateEntriesRequestBuildingServices"
                      ,99,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6ae48);
  (*pcVar1)();
}



/* Entry: 103a6ae7c; end: 103a6ae8b; -[_TtC49MemPlatBackupUpdateEntriesRequestBuildingServices49MemPlatBackupUpdateEntriesRequestBuildingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6ae7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd91c8));
  return;
}



/* Entry: 103a6ae8c; end: 103a6aed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6ae8c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd91f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6aed8; end: 103a6af43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6aed8(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fd91f8) = param_1;
  func_0x0001002c0e88();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6af44; end: 103a6af53; -[_TtC34SCMemPlatBackupCleanupStepServices32MemPlatBackupCleanupStepServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6af44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd91f8));
  return;
}



/* Entry: 103a6af54; end: 103a6afeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6af54(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9228) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6afec; end: 103a6b01f;  */

void FUN_103a6afec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a6b020; end: 103a6b02f; -[_TtC44SCMemPlatBackupGenerateThumbnailStepServices42MemPlatBackupGenerateThumbnailStepServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b020(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9228));
  return;
}



/* Entry: 103a6b030; end: 103a6b0c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b030(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9258) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6b0c8; end: 103a6b0fb;  */

void FUN_103a6b0c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a6b0fc; end: 103a6b10b; -[_TtC31SCMemPlatBackupMemoriesServices29MemPlatBackupMemoriesServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b0fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9258));
  return;
}



/* Entry: 103a6b10c; end: 103a6b157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b10c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9288) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6b158; end: 103a6b1c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b158(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fd9288) = param_1;
  func_0x0001002c59e8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6b1c4; end: 103a6b1d3; -[_TtC36SCMemPlatBackupTranscodeStepServices34MemPlatBackupTranscodeStepServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b1c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9288));
  return;
}



/* Entry: 103a6b1d4; end: 103a6b26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b1d4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd92b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6b26c; end: 103a6b29f;  */

void FUN_103a6b26c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a6b2a0; end: 103a6b2af; -[_TtC38SCMemPlatBackupUploadMediaStepServices36MemPlatBackupUploadMediaStepServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b2a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd92b8));
  return;
}



/* Entry: 103a6b2b0; end: 103a6b347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b2b0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd92e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6b348; end: 103a6b3a7; -[MemoriesComposerClusteringServices init] */

void FUN_103a6b348(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesComposerClusteringServicesAPI.MemoriesComposerClusteringServices",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6b374);
  (*pcVar1)();
}



/* Entry: 103a6b3a8; end: 103a6b3b7; -[MemoriesComposerClusteringServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b3a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd92e8));
  return;
}



/* Entry: 103a6b3b8; end: 103a6b44f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b3b8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9318) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6b450; end: 103a6b483;  */

void FUN_103a6b450(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a6b484; end: 103a6b493; -[MemoriesSnapDocRenderStepServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9318));
  return;
}



/* Entry: 103a6b494; end: 103a6b52b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b494(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9348) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6b52c; end: 103a6b58b; -[_TtC42MemoriesDoubleEncryptionResolutionServices42MemoriesDoubleEncryptionResolutionServices init] */

void FUN_103a6b52c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesDoubleEncryptionResolutionServices.MemoriesDoubleEncryptionResolutionServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6b558);
  (*pcVar1)();
}



/* Entry: 103a6b58c; end: 103a6b5af; -[_TtC42MemoriesDoubleEncryptionResolutionServices42MemoriesDoubleEncryptionResolutionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b58c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9348));
  return;
}



/* Entry: 103a6b5b0; end: 103a6b65b;  */

void FUN_103a6b5b0(void)

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



/* Entry: 103a6b65c; end: 103a6b65f;  */

void FUN_103a6b65c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc428e0;
  func_0x000107c61520(&UNK_10dc428e0,&UNK_1106c2ee8);
  puRam0000000112fd9378 = puVar1;
  return;
}



/* Entry: 103a6b660; end: 103a6b69f;  */

void FUN_103a6b660(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc428e0;
  func_0x000107c61520(&UNK_10dc428e0,&UNK_1106c2ee8);
  puRam0000000112fd9378 = puVar1;
  return;
}



/* Entry: 103a6b6a0; end: 103a6b813;  */

void FUN_103a6b6a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103a6b814; end: 103a6b897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b814(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001002ca5b0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fd9388) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fd9390) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103a6b898; end: 103a6b89f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b898(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  func_0x0001002ca5b0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112fd9388) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112fd9390) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 103a6b8a0; end: 103a6b903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b8a0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9388) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fd9390) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6b904; end: 103a6b983; -[FaceTaggingBackfillServices faceTaggingBackfillTrigger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b904(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 103a6b984; end: 103a6b9e3; -[FaceTaggingBackfillServices init] */

void FUN_103a6b984(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FaceTaggingBackfillServicesAPI.FaceTaggingBackfillServices",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6b9b0);
  (*pcVar1)();
}



/* Entry: 103a6b9e4; end: 103a6ba1b; -[FaceTaggingBackfillServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a6ba00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a6ba04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6b9e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9388));
  return;
}



/* Entry: 103a6ba1c; end: 103a6ba2b;  */

undefined1  [16] FUN_103a6ba1c(void)

{
  return ZEXT816(0x1106c3010);
}



/* Entry: 103a6ba2c; end: 103a6ba97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6ba2c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001002ce8dc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fd93c8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103a6ba98; end: 103a6ba9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6ba98(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001002ce8dc();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112fd93c8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103a6baa0; end: 103a6baeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6baa0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd93c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6baec; end: 103a6bb6b; -[FaceTaggingItemActionServices faceTaggingItemActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6baec(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 103a6bb6c; end: 103a6bbcb; -[FaceTaggingItemActionServices init] */

void FUN_103a6bb6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FaceTaggingItemActionServicesAPI.FaceTaggingItemActionServices",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6bb98);
  (*pcVar1)();
}



/* Entry: 103a6bbcc; end: 103a6bbeb; -[FaceTaggingItemActionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6bbcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd93c8));
  return;
}



/* Entry: 103a6bbec; end: 103a6bbfb; -[_TtC34FaceTaggingNativeBridgeServicesAPI31FaceTaggingNativeBridgeServices faceTaggingNativeBridge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6bbec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fd9400));
  return;
}



/* Entry: 103a6bbfc; end: 103a6bd03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a6bbfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd93f8) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9400) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103a6bd04; end: 103a6bd63; -[_TtC34FaceTaggingNativeBridgeServicesAPI31FaceTaggingNativeBridgeServices init] */

void FUN_103a6bd04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FaceTaggingNativeBridgeServicesAPI.FaceTaggingNativeBridgeServices",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6bd30);
  (*pcVar1)();
}



/* Entry: 103a6bd64; end: 103a6bde7; -[_TtC34FaceTaggingNativeBridgeServicesAPI31FaceTaggingNativeBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6bd64(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fd93f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fd9400));
  return;
}



/* Entry: 103a6bde8; end: 103a6be47; -[MemoriesClientGenTaskCoordinatorServices init] */

void FUN_103a6bde8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesClientGenTaskCoordinatorServices.MemoriesClientGenTaskCoordinatorServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6be14);
  (*pcVar1)();
}



/* Entry: 103a6be48; end: 103a6c437; -[MemoriesClientGenTaskCoordinatorServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6be48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fd9430));
  return;
}



/* Entry: 103a6c438; end: 103a6c587;  */

void FUN_103a6c438(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000103a6be58(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a6c588; end: 103a6c597;  */

void FUN_103a6c588(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103a6c598; end: 103a6c603;  */

ulong FUN_103a6c598(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c60608();
  func_0x000107c6142c(param_2);
  if (0x3c < uVar1) {
    uVar1 = 0x3d;
  }
  return uVar1;
}



/* Entry: 103a6c604; end: 103a6c607;  */

void FUN_103a6c604(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc42c8c;
  func_0x000107c61520(&UNK_10dc42c8c,&UNK_1106c31f8);
  puRam0000000112fd9460 = puVar1;
  return;
}



/* Entry: 103a6c608; end: 103a6c647;  */

void FUN_103a6c608(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc42c8c;
  func_0x000107c61520(&UNK_10dc42c8c,&UNK_1106c31f8);
  puRam0000000112fd9460 = puVar1;
  return;
}



/* Entry: 103a6c648; end: 103a6c7ab;  */

int FUN_103a6c648(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xc3 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x3c) {
      iVar2 = 4;
    }
    if (param_2 + 0x3c >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103a6c6c4;
        goto LAB_103a6c6a8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103a6c6a8:
      return ((uint)*param_1 | uVar1 << 8) - 0x3c;
    }
  }
LAB_103a6c6c4:
  iVar2 = *param_1 - 0x3d;
  if (*param_1 < 0x3d) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103a6c7ac; end: 103a6c7f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6c7ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9a58) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6c7f8; end: 103a6c863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6c7f8(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fd9a58) = param_1;
  func_0x0001002cd584();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6c864; end: 103a6c873; -[_TtC32SCMemoriesAISnapsManagerServices32SCMemoriesAISnapsManagerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6c864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fd9a58));
  return;
}



/* Entry: 103a6c874; end: 103a6ca1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6c874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fd9a88);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112fd9a90) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fd9a98);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112fd9aa0) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fd9aa8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_112fd9ab0) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6ca1c; end: 103a6ca73; -[SCMemoriesAISnapGenerationRequest description] */

void FUN_103a6ca1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a6ca74();
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a6ca74; end: 103a6cb03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103a6ca74(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0x5031;
  if (*(char *)(unaff_x20 + _DAT_112fd9aa0) != '\0') {
    uVar1 = 0x5032;
  }
  func_0x000107c5fb78(uVar1,0xe200000000000000);
  func_0x000107c6142c(0xe200000000000000);
  func_0x000107c5fb78(0x3a6449736e656c7c,0xe800000000000000);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + _DAT_112fd9a98),
                      ((undefined8 *)(unaff_x20 + _DAT_112fd9a98))[1]);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 103a6cb04; end: 103a6cb63; -[SCMemoriesAISnapGenerationRequest init] */

void FUN_103a6cb04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesAISnapsManager.MemoriesAISnapGenerationRequest",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6cb30);
  (*pcVar1)();
}



/* Entry: 103a6cb64; end: 103a6cbb7; -[SCMemoriesAISnapGenerationRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a6cb84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a6cb88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6cb64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fd9a88 + 8))
  ;
  return;
}



/* Entry: 103a6cbb8; end: 103a6cbd7;  */

void FUN_103a6cbb8(void)

{
  func_0x000107c61168(&PTR_PTR_112918ea0);
  return;
}



/* Entry: 103a6cbd8; end: 103a6cbeb;  */

bool FUN_103a6cbd8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a6cbec; end: 103a6cdc3;  */

void FUN_103a6cbec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x64656e6e616c70;
  if (cVar4 != '\x01') {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x73736563637573;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a6cdc4; end: 103a6ce1f;  */

void FUN_103a6cdc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x64656e6e616c70;
  if (cVar4 != '\x01') {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x73736563637573;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 103a6ce20; end: 103a6cfa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6ce20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fd9ae0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fd9ae8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fd9af0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112fd9af8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fd9b00) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a6cfa8; end: 103a6d007; -[SCMemoriesAISnapGenerationResponse init] */

void FUN_103a6cfa8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesAISnapsManager.MemoriesAISnapGenerationResponse",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6cfd4);
  (*pcVar1)();
}



/* Entry: 103a6d008; end: 103a6d0cf; -[SCMemoriesAISnapGenerationResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6d008(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fd9ae0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fd9ae8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fd9af0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)(param_1 + _DAT_112fd9b00));
  return;
}



/* Entry: 103a6d0d0; end: 103a6d0d3;  */

void FUN_103a6d0d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc42e00;
  func_0x000107c61520(&UNK_10dc42e00,&UNK_1106c3378);
  puRam0000000112fd9b08 = puVar1;
  return;
}



/* Entry: 103a6d0d4; end: 103a6d113;  */

void FUN_103a6d0d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc42e00;
  func_0x000107c61520(&UNK_10dc42e00,&UNK_1106c3378);
  puRam0000000112fd9b08 = puVar1;
  return;
}



/* Entry: 103a6d114; end: 103a6d277;  */

int FUN_103a6d114(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103a6d190;
        goto LAB_103a6d174;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103a6d174:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103a6d190:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103a6d278; end: 103a6d297;  */

void FUN_103a6d278(void)

{
  func_0x000107c61168(&PTR_PTR_112918f88);
  return;
}



/* Entry: 103a6d298; end: 103a6d2ab;  */

bool FUN_103a6d298(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a6d2ac; end: 103a6d357;  */

void FUN_103a6d2ac(void)

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



/* Entry: 103a6d358; end: 103a6d35b;  */

void FUN_103a6d358(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9ba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc42ee8;
  func_0x000107c61520(&UNK_10dc42ee8,&UNK_1106c34e0);
  puRam0000000112fd9ba8 = puVar1;
  return;
}



/* Entry: 103a6d35c; end: 103a6d39b;  */

void FUN_103a6d35c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fd9ba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc42ee8;
  func_0x000107c61520(&UNK_10dc42ee8,&UNK_1106c34e0);
  puRam0000000112fd9ba8 = puVar1;
  return;
}



/* Entry: 103a6d39c; end: 103a6d4ff;  */

int FUN_103a6d39c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103a6d418;
        goto LAB_103a6d3fc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103a6d3fc:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103a6d418:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103a6d500; end: 103a6d56b;  */

long FUN_103a6d500(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103a6d56c; end: 103a6d627;  */

undefined1 * FUN_103a6d56c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  param_1[0x38] = param_2[0x38];
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  param_1[0x88] = param_2[0x88];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 103a6d628; end: 103a6d73b;  */

undefined1 * FUN_103a6d628(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[0x38] = param_2[0x38];
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[0x48] = param_2[0x48];
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  param_1[0x49] = param_2[0x49];
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  param_1[0x88] = param_2[0x88];
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  return param_1;
}



/* Entry: 103a6d73c; end: 103a6d7f7;  */

undefined1 * FUN_103a6d73c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  param_1[0x38] = param_2[0x38];
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  param_1[0x88] = param_2[0x88];
  return param_1;
}



/* Entry: 103a6d7f8; end: 103a6d92b;  */

int FUN_103a6d7f8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x89) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103a6d92c; end: 103a6d96f;  */

void FUN_103a6d92c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 103a6d970; end: 103a6d9d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6d970(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fd9bd0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fd9bd8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}


