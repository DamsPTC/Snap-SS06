/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043cde58; end: 1043cde6f; -[SCManagedVideoCapturerOutputSettingsBuilder withCodecType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cde58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130756f8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cde70; end: 1043cde7f; -[SCManagedVideoCapturerOutputSettingsBuilder withWriteEXIFMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cde70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075700) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cde80; end: 1043cdedf; -[SCManagedVideoCapturerOutputSettingsBuilder withLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043cde80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113075708);
  *(undefined8 *)(param_1 + _DAT_113075708) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043cdee0; end: 1043cdf3f; -[SCManagedVideoCapturerOutputSettingsBuilder withMusicId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043cdee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113075710);
  *(undefined8 *)(param_1 + _DAT_113075710) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043cdf40; end: 1043cdf57; -[SCManagedVideoCapturerOutputSettingsBuilder withCameraPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cdf40(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + _DAT_113075678);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cdf58; end: 1043ce1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cdf58(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130756d0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_78 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_78 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130756d8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_80 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_80 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130756e0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar10 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar10 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130756e8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar11 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar11 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130756f0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar12 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar12 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130756f8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar6 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar6 = *puVar1;
  }
  bVar3 = *(byte *)(unaff_x20 + _DAT_113075700);
  if (bVar3 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075700) = 0;
  }
  puVar2 = (undefined4 *)(unaff_x20 + _DAT_113075678);
  if (*(char *)(puVar2 + 1) == '\x01') {
    uVar9 = 0;
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
  }
  else {
    uVar9 = *puVar2;
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113075708);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113075710);
  FUN_1043ce78c();
  lVar5 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar5 + _DAT_113075680) = uStack_78;
  *(undefined8 *)(lVar5 + _DAT_113075688) = uStack_80;
  *(undefined8 *)(lVar5 + _DAT_113075690) = uVar10;
  *(undefined8 *)(lVar5 + _DAT_113075698) = uVar11;
  *(undefined8 *)(lVar5 + _DAT_1130756a0) = uVar12;
  *(undefined8 *)(lVar5 + _DAT_1130756a8) = uVar6;
  *(byte *)(lVar5 + _DAT_1130756b0) = bVar3 & 1;
  *(undefined8 *)(lVar5 + _DAT_1130756b8) = uVar8;
  *(undefined8 *)(lVar5 + _DAT_1130756c0) = uVar7;
  *(undefined4 *)(lVar5 + _DAT_1130756c8) = uVar9;
  puVar4 = PTR_s_init_1125d9248;
  lStack_70 = lVar5;
  lStack_68 = param_1;
  _objc_retain(uVar8);
  _objc_retain(uVar7);
  _objc_msgSendSuper2(&lStack_70,puVar4);
  return;
}



/* Entry: 1043ce1b8; end: 1043ce1fb; -[SCManagedVideoCapturerOutputSettingsBuilder build] */

void FUN_1043ce1b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043cdf58();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043ce1fc; end: 1043ce23f; -[SCManagedVideoCapturerOutputSettingsBuilder safeBuildAndReturnError:] */

void FUN_1043ce1fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043cdf58();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043ce240; end: 1043ce32b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ce240(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130756d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130756d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130756e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130756e8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130756f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130756f8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_113075700) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_113075708) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113075710) = 0;
  puVar2 = (undefined4 *)(unaff_x20 + _DAT_113075678);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043ce32c; end: 1043ce34b; -[SCManagedVideoCapturerOutputSettingsBuilder init] */

void FUN_1043ce32c(void)

{
  FUN_1043ce240();
  return;
}



/* Entry: 1043ce34c; end: 1043ce34f;  */

void FUN_1043ce34c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043ce350; end: 1043ce387; -[SCManagedVideoCapturerOutputSettingsBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ce350(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113075708));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113075710));
  return;
}



/* Entry: 1043ce388; end: 1043ce3bb;  */

void FUN_1043ce388(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043ce3bc; end: 1043ce3f3; -[SCManagedVideoCapturerOutputSettings .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ce3bc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130756b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130756c0));
  return;
}



/* Entry: 1043ce3f4; end: 1043ce4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ce3f4(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uVar1 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113075680) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113075688) = uVar1;
  uVar1 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_113075690) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_113075698) = uVar1;
  uVar1 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_1130756a0) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_1130756a8) = uVar1;
  *(undefined1 *)(unaff_x20 + _DAT_1130756b0) = *(undefined1 *)(param_1 + 6);
  uStack_38 = param_1[7];
  uStack_40 = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_1130756b8) = uStack_38;
  *(undefined8 *)(unaff_x20 + _DAT_1130756c0) = uStack_40;
  *(undefined4 *)(unaff_x20 + _DAT_1130756c8) = *(undefined4 *)(param_1 + 9);
  func_0x000103e05540(&uStack_38,auStack_48);
  func_0x000103e05540(&uStack_40,auStack_48);
  _objc_msgSendSuper2(&stack0xffffffffffffffa8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043ce4ec; end: 1043ce5d3;  */

undefined8 FUN_1043ce4ec(undefined8 param_1)

{
  (*(code *)(undefined *)0x1043bac30)();
  return param_1;
}



/* Entry: 1043ce5d4; end: 1043ce78b;  */

/* WARNING: Possible PIC construction at 0x0001043ce608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001043ce60c) */

void FUN_1043ce5d4(long param_1)

{
  if (param_1 == 0) {
    func_0x0001043ce7ac();
    _objc_allocWithZone();
  }
  else {
    func_0x0001043ce7ac();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1043ce78c; end: 1043ce7cb;  */

void FUN_1043ce78c(void)

{
  _objc_opt_self(&PTR_PTR_1129ab6c0);
  return;
}



/* Entry: 1043ce7cc; end: 1043ce7cf;  */

void FUN_1043ce7cc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043ce7d0; end: 1043ce7df; -[SCVideoCaptureConfiguration captureTrigger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ce7d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075768);
}



/* Entry: 1043ce7e0; end: 1043ce7eb; -[SCVideoCaptureConfiguration snapSessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ce7e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113075770))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113075770);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ce7ec; end: 1043ce7f7; -[SCVideoCaptureConfiguration captureSessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ce7ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113075778))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113075778);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ce7f8; end: 1043ce803; -[SCVideoCaptureConfiguration lensSessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ce7f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113075780))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113075780);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ce804; end: 1043ce80f; -[SCVideoCaptureConfiguration activeLensID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ce804(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113075788))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113075788);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ce810; end: 1043ce86b; -[SCVideoCaptureConfiguration activeLensMusicTrackMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ce810(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113075790);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000101b66cd8(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043ce86c; end: 1043ce87b; -[SCVideoCaptureConfiguration lensEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ce86c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075798);
}



/* Entry: 1043ce87c; end: 1043ce88b; -[SCVideoCaptureConfiguration isStoppingRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ce87c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130757a0);
}



/* Entry: 1043ce88c; end: 1043ce89b; -[SCVideoCaptureConfiguration lensInitiatedCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ce88c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130757a8);
}



/* Entry: 1043ce89c; end: 1043ce8ab; -[SCVideoCaptureConfiguration batchCaptureActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ce89c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130757b0);
}



/* Entry: 1043ce8ac; end: 1043ce8bb; -[SCVideoCaptureConfiguration timelineModeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ce8ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130757b8);
}



/* Entry: 1043ce8bc; end: 1043ce8cb; -[SCVideoCaptureConfiguration timerModeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ce8bc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130757c0);
}



/* Entry: 1043ce8cc; end: 1043ce8db; -[SCVideoCaptureConfiguration musicModeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ce8cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130757c8);
}



/* Entry: 1043ce8dc; end: 1043ce8eb; -[SCVideoCaptureConfiguration musicTrackId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ce8dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130757d0);
}



/* Entry: 1043ce8ec; end: 1043ce8fb; -[SCVideoCaptureConfiguration speedModeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ce8ec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130757d8);
}



/* Entry: 1043ce8fc; end: 1043ce90b; -[SCVideoCaptureConfiguration isInMainCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ce8fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130757e0);
}



/* Entry: 1043ce90c; end: 1043ce91b; -[SCVideoCaptureConfiguration isInDirectorMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ce90c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130757e8);
}



/* Entry: 1043ce91c; end: 1043ce92b; -[SCVideoCaptureConfiguration isContinuousCaptureActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ce91c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130757f0);
}



/* Entry: 1043ce92c; end: 1043ce93b; -[SCVideoCaptureConfiguration recordingSpeedMultiplier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ce92c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130757f8);
}



/* Entry: 1043ce93c; end: 1043ce94b; -[SCVideoCaptureConfiguration recordingDelay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ce93c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075800);
}



/* Entry: 1043ce94c; end: 1043ce95b; -[SCVideoCaptureConfiguration defaultRecordingDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ce94c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075808);
}



/* Entry: 1043ce95c; end: 1043ce96b; -[SCVideoCaptureConfiguration minimumRecordingDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ce95c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075810);
}



/* Entry: 1043ce96c; end: 1043ce977; -[SCVideoCaptureConfiguration snapSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ce96c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113075818))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113075818);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ce978; end: 1043ce9cb; -[SCVideoCaptureConfiguration activeCameraModes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ce978(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113075820);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043ce9cc; end: 1043ce9db; -[SCVideoCaptureConfiguration isHEVCEncoderEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ce9cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075828);
}



/* Entry: 1043ce9dc; end: 1043ce9eb; -[SCVideoCaptureConfiguration H264BitrateMultiplier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ce9dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075830);
}



/* Entry: 1043ce9ec; end: 1043ce9f7; -[SCVideoCaptureConfiguration detailedCameraModes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ce9ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113075838))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113075838);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043ce9f8; end: 1043cea4f;  */

void FUN_1043ce9f8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043cea50; end: 1043cea5f; -[SCVideoCaptureConfiguration ringStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043cea50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075840);
}



/* Entry: 1043cea60; end: 1043cea6f; -[SCVideoCaptureConfiguration remixLaunchSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043cea60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075848);
}



/* Entry: 1043cea70; end: 1043cea7f; -[SCVideoCaptureConfiguration captureBitrateLadderConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cea70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113075850));
  return;
}



/* Entry: 1043cea80; end: 1043cea8f; -[SCVideoCaptureConfiguration cameraType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043cea80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075858);
}



/* Entry: 1043cea90; end: 1043cea9f; -[SCVideoCaptureConfiguration isNightModeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043cea90(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075860);
}



/* Entry: 1043ceaa0; end: 1043ceaaf; -[SCVideoCaptureConfiguration shouldKeepVideoSizeAsOutputSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ceaa0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075868);
}



/* Entry: 1043ceab0; end: 1043ceabf; -[SCVideoCaptureConfiguration aspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ceab0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075870);
}



/* Entry: 1043ceac0; end: 1043ceacf; -[SCVideoCaptureConfiguration audioCaptureEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ceac0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075878);
}



/* Entry: 1043cead0; end: 1043ceadf; -[SCVideoCaptureConfiguration shouldSyncVideoAndMusicPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043cead0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075880);
}



/* Entry: 1043ceae0; end: 1043ceaef; -[SCVideoCaptureConfiguration isHDModeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ceae0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075888);
}



/* Entry: 1043ceaf0; end: 1043ceaff; -[SCVideoCaptureConfiguration isGenAI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ceaf0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075890);
}



/* Entry: 1043ceb00; end: 1043ceb0f; -[SCVideoCaptureConfiguration recordGestureStartTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043ceb00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075898);
}



/* Entry: 1043ceb10; end: 1043ceb1f; -[SCVideoCaptureConfiguration isGreenScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ceb10(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130758a0);
}



/* Entry: 1043ceb20; end: 1043ceb2f; -[SCVideoCaptureConfiguration shouldDisableBufferedRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ceb20(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130758a8);
}



/* Entry: 1043ceb30; end: 1043ceb3f; -[SCVideoCaptureConfiguration captureOrientationFixEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043ceb30(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130758b0);
}



/* Entry: 1043ceb40; end: 1043cf32b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ceb40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
                  undefined4 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined1 param_26,undefined4 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined4 param_34,undefined4 param_35,undefined1 param_36)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_b8 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113075768) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075770);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075778);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075780);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075788);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_113075790) = param_17;
  *(undefined1 *)(unaff_x20 + _DAT_113075798) = (undefined1)param_18;
  *(undefined1 *)(unaff_x20 + _DAT_1130757a0) = param_18._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_1130757a8) = param_18._2_1_;
  *(undefined1 *)(unaff_x20 + _DAT_1130757b0) = param_18._3_1_;
  *(undefined1 *)(unaff_x20 + _DAT_1130757b8) = (undefined1)param_19;
  *(undefined1 *)(unaff_x20 + _DAT_1130757c0) = param_19._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_1130757c8) = param_19._2_1_;
  *(undefined8 *)(unaff_x20 + _DAT_1130757d0) = param_20;
  *(undefined1 *)(unaff_x20 + _DAT_1130757d8) = (undefined1)param_21;
  *(undefined1 *)(unaff_x20 + _DAT_1130757e0) = param_21._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_1130757e8) = param_21._2_1_;
  *(undefined1 *)(unaff_x20 + _DAT_1130757f0) = param_21._3_1_;
  *(undefined8 *)(unaff_x20 + _DAT_1130757f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113075800) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113075808) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113075810) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075818);
  *puVar1 = param_23;
  puVar1[1] = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_113075820) = param_25;
  *(undefined1 *)(unaff_x20 + _DAT_113075828) = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_113075830) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075838);
  *puVar1 = param_28;
  puVar1[1] = param_29;
  *(undefined8 *)(unaff_x20 + _DAT_113075840) = param_30;
  *(undefined8 *)(unaff_x20 + _DAT_113075848) = param_31;
  *(undefined8 *)(unaff_x20 + _DAT_113075850) = param_32;
  *(undefined8 *)(unaff_x20 + _DAT_113075858) = param_33;
  *(undefined1 *)(unaff_x20 + _DAT_113075860) = (undefined1)param_34;
  *(undefined1 *)(unaff_x20 + _DAT_113075868) = param_34._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_113075870) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113075878) = param_34._2_1_;
  *(undefined1 *)(unaff_x20 + _DAT_113075880) = param_34._3_1_;
  *(undefined1 *)(unaff_x20 + _DAT_113075888) = (undefined1)param_35;
  *(undefined1 *)(unaff_x20 + _DAT_113075890) = param_35._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_113075898) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_1130758a0) = param_35._2_1_;
  *(undefined1 *)(unaff_x20 + _DAT_1130758a8) = param_35._3_1_;
  *(undefined1 *)(unaff_x20 + _DAT_1130758b0) = param_36;
  _objc_msgSendSuper2(auStack_b8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043cf32c; end: 1043cf6cf; -[SCVideoCaptureConfiguration initWithCaptureTrigger:snapSessionID:captureSessionID:lensSessionID:activeLensID:activeLensMusicTrackMetadata:lensEnabled:isStoppingRecording:lensInitiatedCapture:batchCaptureActive:timelineModeActive:timerModeActive:musicModeActive:musicTrackId:speedModeActive:isInMainCamera:isInDirectorMode:isContinuousCaptureActive:recordingSpeedMultiplier:recordingDelay:defaultRecordingDuration:minimumRecordingDuration:snapSource:activeCameraModes:isHEVCEncoderEnabled:H264BitrateMultiplier:detailedCameraModes:ringStyle:remixLaunchSource:captureBitrateLadderConfig:cameraType:isNightModeActive:shouldKeepVideoSizeAsOutputSize:aspectRatio:audioCaptureEnabled:shouldSyncVideoAndMusicPlayer:isHDModeActive:isGenAI:recordGestureStartTimestamp:isGreenScreen:shouldDisableBufferedRecording:captureOrientationFixEnabled:] */

void FUN_1043cf32c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,long param_12,long param_13,
                  long param_14,long param_15,undefined1 param_16,undefined1 param_17,
                  undefined8 param_18,undefined1 param_19,undefined4 param_20,long param_21,
                  long param_22,undefined4 param_23,undefined4 param_24,long param_25)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_118;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  
  if (param_11 == 0) {
    uStack_d8 = 0;
    lStack_d0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_d8 = param_9;
    lStack_d0 = param_11;
  }
  if (param_12 == 0) {
    uStack_e8 = 0;
    lStack_e0 = 0;
    uStack_108 = param_9;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_108 = param_9;
    uStack_e8 = param_9;
    lStack_e0 = param_12;
  }
  if (param_13 == 0) {
    uStack_f8 = 0;
    lStack_f0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_f8 = uStack_108;
    lStack_f0 = param_13;
  }
  lVar1 = param_14;
  _objc_retain();
  lVar2 = param_15;
  _objc_retain();
  _objc_retain();
  lVar3 = param_22;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (lVar1 == 0) {
    uStack_108 = 0;
    lStack_100 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar1);
    lStack_100 = param_14;
  }
  if (lVar2 == 0) {
    lStack_118 = 0;
    param_15 = lStack_118;
  }
  else {
    func_0x000101b66cd8();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(lVar2);
  }
  if (param_21 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_21);
  }
  if (lVar3 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_22,PTR___sSSN_11034da80);
    _objc_release(lVar3);
  }
  if (param_25 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_25);
  }
  func_0x0001043cef38(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_10,lStack_d0,
                      uStack_d8,lStack_e0,uStack_e8,lStack_f0,uStack_f8,lStack_100,uStack_108,
                      param_15,param_16,param_17,param_18,param_19);
  return;
}



/* Entry: 1043cf6d0; end: 1043cf70f;  */

undefined8 FUN_1043cf6d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1043d0a30(param_1);
  FUN_1043d0e18(param_1);
  return uVar1;
}



/* Entry: 1043cf710; end: 1043cf713; -[SCVideoCaptureConfiguration copyWithZone:] */

void FUN_1043cf710(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043cf714; end: 1043cf74f; -[SCVideoCaptureConfiguration description] */

void FUN_1043cf714(void)

{
  undefined1 auStack_128 [264];
  
  FUN_1043d0e4c(auStack_128);
  FUN_1043d0e18(auStack_128);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043cf750; end: 1043cf797; -[SCVideoCaptureConfiguration init] */

void FUN_1043cf750(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCapturer/SCVideoCaptureConfigurationWrapper.swift",0x33,2,0xfb,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043cf798);
  (*pcVar1)();
}



/* Entry: 1043cf798; end: 1043cf7b3; +[SCVideoCaptureConfigurationBuilder videoCaptureConfiguration] */

void FUN_1043cf798(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043cf7b4; end: 1043cf7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf7b4(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_1130759c8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043cf7c8; end: 1043cf807; +[SCVideoCaptureConfigurationBuilder videoCaptureConfigurationWithExistingVideoCaptureConfiguration:] */

void FUN_1043cf7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043d11bc(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043cf808; end: 1043cf81f; -[SCVideoCaptureConfigurationBuilder withCaptureTrigger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130758b8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf820; end: 1043cf82b; -[SCVideoCaptureConfigurationBuilder withSnapSessionID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf820(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130758c0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cf82c; end: 1043cf837; -[SCVideoCaptureConfigurationBuilder withCaptureSessionID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf82c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130758c8);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cf838; end: 1043cf843; -[SCVideoCaptureConfigurationBuilder withLensSessionID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf838(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130758d0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cf844; end: 1043cf84f; -[SCVideoCaptureConfigurationBuilder withActiveLensID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf844(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130758d8);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cf850; end: 1043cf8bb; -[SCVideoCaptureConfigurationBuilder withActiveLensMusicTrackMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf850(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    func_0x000101b66cd8(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130758e0);
  *(long *)(param_1 + _DAT_1130758e0) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cf8bc; end: 1043cf8cb; -[SCVideoCaptureConfigurationBuilder withLensEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf8bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130758e8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf8cc; end: 1043cf8db; -[SCVideoCaptureConfigurationBuilder withIsStoppingRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf8cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130758f0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf8dc; end: 1043cf8eb; -[SCVideoCaptureConfigurationBuilder withLensInitiatedCapture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf8dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130758f8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf8ec; end: 1043cf8fb; -[SCVideoCaptureConfigurationBuilder withBatchCaptureActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf8ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075900) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf8fc; end: 1043cf90b; -[SCVideoCaptureConfigurationBuilder withTimelineModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf8fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075908) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf90c; end: 1043cf91b; -[SCVideoCaptureConfigurationBuilder withTimerModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf90c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075910) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf91c; end: 1043cf92b; -[SCVideoCaptureConfigurationBuilder withMusicModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf91c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075918) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf92c; end: 1043cf943; -[SCVideoCaptureConfigurationBuilder withMusicTrackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf92c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113075920);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf944; end: 1043cf953; -[SCVideoCaptureConfigurationBuilder withSpeedModeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf944(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075928) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf954; end: 1043cf963; -[SCVideoCaptureConfigurationBuilder withIsInMainCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf954(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075930) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf964; end: 1043cf973; -[SCVideoCaptureConfigurationBuilder withIsInDirectorMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf964(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075938) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf974; end: 1043cf983; -[SCVideoCaptureConfigurationBuilder withIsContinuousCaptureActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf974(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075940) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf984; end: 1043cf99b; -[SCVideoCaptureConfigurationBuilder withRecordingSpeedMultiplier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf984(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113075948);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf99c; end: 1043cf9b3; -[SCVideoCaptureConfigurationBuilder withRecordingDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf99c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113075950);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf9b4; end: 1043cf9cb; -[SCVideoCaptureConfigurationBuilder withDefaultRecordingDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf9b4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113075958);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf9cc; end: 1043cf9e3; -[SCVideoCaptureConfigurationBuilder withMinimumRecordingDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf9cc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113075960);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cf9e4; end: 1043cf9ef; -[SCVideoCaptureConfigurationBuilder withSnapSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf9e4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113075968);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cf9f0; end: 1043cfa53; -[SCVideoCaptureConfigurationBuilder withActiveCameraModes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cf9f0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_113075970);
  *(long *)(param_1 + _DAT_113075970) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cfa54; end: 1043cfa63; -[SCVideoCaptureConfigurationBuilder withIsHEVCEncoderEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cfa54(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113075978) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cfa64; end: 1043cfa7b; -[SCVideoCaptureConfigurationBuilder withH264BitrateMultiplier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cfa64(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113075980);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043cfa7c; end: 1043cfa87; -[SCVideoCaptureConfigurationBuilder withDetailedCameraModes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cfa7c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113075988);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cfa88; end: 1043cfaeb;  */

void FUN_1043cfa88(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + *param_4);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _objc_retain();
  _swift_bridgeObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043cfaec; end: 1043cfb03; -[SCVideoCaptureConfigurationBuilder withRingStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043cfaec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113075990);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}


