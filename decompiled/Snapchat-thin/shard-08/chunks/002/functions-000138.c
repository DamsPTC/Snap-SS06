/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e670f0; end: 105e6717f;  */

void FUN_105e670f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain();
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_2,param_3,puVar1,&PTR____CFConstantStringClassReference_110e2cd98);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e67180; end: 105e6721f;  */

ulong FUN_105e67180(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  
  func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110e2cdd8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  uVar4 = param_1;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  uVar2 = uVar4;
  func_0x00010c067fc0();
  _objc_release(uVar4);
  if ((long)uVar2 < 0) {
    uVar4 = 0;
  }
  else {
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3e38;
    func_0x00010c067fc0();
    uVar4 = 0;
    if ((long)uVar2 <= (long)ppuVar3) {
      uVar4 = uVar2;
    }
  }
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 105e67220; end: 105e6732f;  */

void FUN_105e67220(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0dff20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  puVar4 = puVar2;
  if ((undefined *)0x1d < puVar3) {
    func_0x00010bf529e0(puVar2);
    puVar3 = puVar2;
    func_0x00010c25e980(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(puVar2);
  func_0x00010c1d0560(param_1);
  _objc_release(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e67330; end: 105e673af;  */

void FUN_105e67330(long param_1)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_1;
  FUN_105e67180();
  if (lVar1 != 0) {
    FUN_105e670f0(param_1);
    FUN_105e67220(param_1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e673b0; end: 105e67423;  */

void FUN_105e673b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  lVar1 = param_2;
  FUN_105e67180();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(param_2,param_3,puVar2,&PTR____CFConstantStringClassReference_110e2cd78);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e67424; end: 105e674c3; -[SCOffPlatformShareOnMainCameraPreviewStateManager initWithUserStorageServices:snapchatterServices:] */

undefined1 *
FUN_105e67424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed6d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    func_0x00010be92fa0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e674c4; end: 105e674cb; -[SCOffPlatformShareOnMainCameraPreviewStateManager isServiceEnabled] */

undefined1 FUN_105e674c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 105e674cc; end: 105e674d3; -[SCOffPlatformShareOnMainCameraPreviewStateManager shouldShowExternalShareSheetOnMainCameraPreviewPage] */

undefined1 FUN_105e674cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 105e674d4; end: 105e67557; -[SCOffPlatformShareOnMainCameraPreviewStateManager shouldShowSendToTooltipOnMainCameraPreviewPage] */

uint FUN_105e674d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_105e67070();
    uVar4 = (uint)lVar3 ^ 1;
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 105e67558; end: 105e6755f; -[SCOffPlatformShareOnMainCameraPreviewStateManager shouldShowExternalShareFloatingButtonOnSendToPage] */

undefined1 FUN_105e67558(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



/* Entry: 105e67560; end: 105e67567; -[SCOffPlatformShareOnMainCameraPreviewStateManager shouldShowFinalStateUI] */

undefined1 FUN_105e67560(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



/* Entry: 105e67568; end: 105e67583; -[SCOffPlatformShareOnMainCameraPreviewStateManager shouldShowInlineShareSheet] */

byte FUN_105e67568(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x19);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 105e67584; end: 105e675a7; -[SCOffPlatformShareOnMainCameraPreviewStateManager shouldPrepareShareSheetData] */

byte FUN_105e67584(long param_1)

{
  byte bVar1;
  
  if (((*(byte *)(param_1 + 0x1a) & 1) == 0) && ((*(byte *)(param_1 + 0x19) & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x1b);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 105e675a8; end: 105e675cf; -[SCOffPlatformShareOnMainCameraPreviewStateManager statesUpdate] */

void FUN_105e675a8(undefined8 param_1)

{
  func_0x00010beda660();
                    /* WARNING: Could not recover jumptable at 0x00010be92fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetInternalValuesWithState__112582588,0);
  return;
}



/* Entry: 105e675d0; end: 105e67633; -[SCOffPlatformShareOnMainCameraPreviewStateManager didShareOnPlatform] */

void FUN_105e675d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_105e67330();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e67634; end: 105e67697; -[SCOffPlatformShareOnMainCameraPreviewStateManager didShareOffPlatform] */

void FUN_105e67634(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105e67374();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e67698; end: 105e676fb; -[SCOffPlatformShareOnMainCameraPreviewStateManager didOpenSendToAfterSendOrExportTooltipDisplay] */

void FUN_105e67698(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_105e6705c();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e676fc; end: 105e677e3; -[SCOffPlatformShareOnMainCameraPreviewStateManager _updateLatestOutgoingAddFriendTimestamp] */

void FUN_105e676fc(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_2 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_2 + 0x10;
  _objc_loadWeakRetained(param_2);
  lVar4 = param_2;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08b140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  FUN_105e673b0(param_1 / 1000.0,lVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e677e4; end: 105e67837; -[SCOffPlatformShareOnMainCameraPreviewStateManager _resetInternalValuesWithState:] */

void FUN_105e677e4(long param_1,undefined8 param_2,long param_3)

{
  uint7 uVar1;
  
  uVar1 = CONCAT16(-(param_3 == 3),
                   (uint6)CONCAT14(-(param_3 == 2),
                                   (uint)CONCAT12(-(param_3 == 1),(ushort)(byte)~-(param_3 == 0))))
          & 0x1000100010001;
  *(uint *)(param_1 + 0x18) =
       CONCAT13((char)(uVar1 >> 0x30),
                CONCAT12((char)(uVar1 >> 0x20),CONCAT11((char)(uVar1 >> 0x10),(char)uVar1)));
  *(bool *)(param_1 + 0x1c) = param_3 == 4;
  return;
}



/* Entry: 105e67838; end: 105e6785f; -[SCOffPlatformShareOnMainCameraPreviewStateManager .cxx_destruct] */

void FUN_105e67838(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105e67860; end: 105e67967; -[SCPreviewScopedOffPlatformShareOnMainCameraPreviewServiceProvider provide] */

void FUN_105e67860(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c52e8;
  _objc_alloc(PTR_PTR_1126c52e8);
  func_0x00010c04c060();
  puVar3 = PTR_PTR_1126c5300;
  _objc_alloc(PTR_PTR_1126c5300);
  func_0x00010c030fe0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e67968; end: 105e679a7;  */

void FUN_105e67968(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec2640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e679a8; end: 105e67a2b; -[SCPreviewScopedOffPlatformShareOnMainCameraPreviewServiceProvider _stateManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e679a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c52f8;
  _objc_alloc(PTR_PTR_1126c52f8);
  lVar2 = param_1 + _DAT_1127382a4;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + _DAT_1127382a8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c05ef80(puVar1,param_2,lVar2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e67a2c; end: 105e67a6f; -[SCPreviewScopedOffPlatformShareOnMainCameraPreviewServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e67a2c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127382a8);
  _objc_destroyWeak(param_1 + _DAT_1127382a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127382ac);
  return;
}



/* Entry: 105e67a70; end: 105e67b77; -[SCSendToInternalScopedOffPlatformShareOnMainCameraPreviewServiceProvider provide] */

void FUN_105e67a70(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c52e8;
  _objc_alloc(PTR_PTR_1126c52e8);
  func_0x00010c04c060();
  puVar3 = PTR_PTR_1126c5308;
  _objc_alloc(PTR_PTR_1126c5308);
  func_0x00010c030fe0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e67b78; end: 105e67bb7;  */

void FUN_105e67b78(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec2640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e67bb8; end: 105e67c3b; -[SCSendToInternalScopedOffPlatformShareOnMainCameraPreviewServiceProvider _stateManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e67bb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c52f8;
  _objc_alloc(PTR_PTR_1126c52f8);
  lVar2 = param_1 + _DAT_1127382b0;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + _DAT_1127382b4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c05ef80(puVar1,param_2,lVar2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e67c3c; end: 105e67c7f; -[SCSendToInternalScopedOffPlatformShareOnMainCameraPreviewServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e67c3c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127382b4);
  _objc_destroyWeak(param_1 + _DAT_1127382b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127382b8);
  return;
}



/* Entry: 105e67c80; end: 105e67d87; -[SCSendToScopedOffPlatformShareOnMainCameraPreviewServiceProvider provide] */

void FUN_105e67c80(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c52e8;
  _objc_alloc(PTR_PTR_1126c52e8);
  func_0x00010c04c060();
  puVar3 = PTR_PTR_1126c5310;
  _objc_alloc(PTR_PTR_1126c5310);
  func_0x00010c030fe0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e67d88; end: 105e67dc7;  */

void FUN_105e67d88(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec2640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e67dc8; end: 105e67e4b; -[SCSendToScopedOffPlatformShareOnMainCameraPreviewServiceProvider _stateManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e67dc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c52f8;
  _objc_alloc(PTR_PTR_1126c52f8);
  lVar2 = param_1 + _DAT_1127382bc;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + _DAT_1127382c0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c05ef80(puVar1,param_2,lVar2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e67e4c; end: 105e67e8f; -[SCSendToScopedOffPlatformShareOnMainCameraPreviewServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e67e4c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127382c0);
  _objc_destroyWeak(param_1 + _DAT_1127382bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127382c4);
  return;
}



/* Entry: 105e67e90; end: 105e67f8b; -[SCExternalShareSheetScope initWithUIContainer:shareOptions:shareOptionsOrder:shareSource:delegate:] */

undefined1 *
FUN_105e67e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ed6e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_7);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e67f8c; end: 105e680c7; -[SCExternalShareSheetScope initWithViewContainer:shareOptions:shareOptionsOrder:shareSource:delegate:shareSheetBottomPaddingSpace:dismissDisabledRects:] */

undefined1 *
FUN_105e67f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ed6e0;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105e680c8; end: 105e680cf; -[SCExternalShareSheetScope uiContainer] */

undefined8 FUN_105e680c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e680d0; end: 105e680d7; -[SCExternalShareSheetScope viewContainer] */

undefined8 FUN_105e680d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e680d8; end: 105e680df; -[SCExternalShareSheetScope shareOptions] */

undefined8 FUN_105e680d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e680e0; end: 105e680e7; -[SCExternalShareSheetScope shareOptionsOrder] */

undefined8 FUN_105e680e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105e680e8; end: 105e680ef; -[SCExternalShareSheetScope shareSource] */

undefined8 FUN_105e680e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105e680f0; end: 105e68107; -[SCExternalShareSheetScope delegate] */

void FUN_105e680f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e68108; end: 105e6810f; -[SCExternalShareSheetScope shareSheetBottomPaddingSpace] */

undefined8 FUN_105e68108(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105e68110; end: 105e68117; -[SCExternalShareSheetScope dismissDisabledRects] */

undefined8 FUN_105e68110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105e68118; end: 105e68173; -[SCExternalShareSheetScope .cxx_destruct] */

void FUN_105e68118(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e68174; end: 105e68377; -[SCAddFriendSheetFeatureEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e68174(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + _DAT_1127382e8;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_1127382ec;
  _objc_loadWeakRetained();
  lVar2 = lVar7;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = param_1 + _DAT_1127382f0;
  _objc_loadWeakRetained();
  lVar3 = lVar7;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = param_1 + _DAT_1127382f4;
  _objc_loadWeakRetained();
  lVar4 = lVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127382f8);
  *(long *)(param_1 + _DAT_1127382f8) = lVar4;
  _objc_release(uVar6);
  _objc_release(lVar7);
  lVar7 = param_1 + _DAT_1127382fc;
  _objc_loadWeakRetained();
  lVar4 = lVar7;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  puVar5 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112738300);
  *(undefined **)(param_1 + _DAT_112738300) = puVar5;
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126c5318;
  _objc_opt_new();
  lVar7 = (long)_DAT_112738304;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar5;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  _objc_retain(uVar6);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010be11e20(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105e68378; end: 105e685b3;  */

void FUN_105e68378(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010be41460();
    if ((uVar2 & 1) == 0) {
      FUN_105e693d4(*(undefined8 *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110e2ce78
                    ,1);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bef8900(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94100();
    }
    else {
      uVar3 = param_2;
      func_0x00010c06aa60(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be14220(uVar1);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105e685b4; end: 105e686e3; -[SCAddFriendSheetFeatureEntryPoint _fetchInviterDataWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e685b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_1127382e8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06a840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = (long)_DAT_112738308;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112738304);
  _objc_retain(uVar4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c06a980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105e686e4;
  puStack_60 = &UNK_1108ef810;
  lStack_58 = lVar2;
  uStack_50 = uVar4;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bfa7ae0(lVar3,param_2,lVar2,&puStack_78);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(uStack_48);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(lVar2);
  return;
}



/* Entry: 105e686e4; end: 105e68743;  */

void FUN_105e686e4(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  if (param_3 != 0) {
    FUN_105e693d4(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110e2ce78,1
                 );
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e68744; end: 105e688bf; -[SCAddFriendSheetFeatureEntryPoint _isInviteFetchResponseValid:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e68744(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar7 = 0;
    goto LAB_105e6889c;
  }
  uVar1 = param_3;
  func_0x00010c06aa60();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
LAB_105e68890:
    uVar7 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + _DAT_1127382f8);
    func_0x00010c0720c0();
    if ((uVar2 & 1) != 0) goto LAB_105e68890;
    uVar2 = param_3;
    func_0x00010c0e90a0();
    if (10 < uVar2) {
      FUN_105e693d4(*(undefined8 *)(param_1 + _DAT_112738304),
                    &PTR____CFConstantStringClassReference_110e2ce58,1);
      goto LAB_105e68890;
    }
    lVar8 = (long)_DAT_1127382e8;
    lVar3 = param_1 + lVar8;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf68020();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 != 0) {
      uVar2 = param_3;
      func_0x00010c129fc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x000100265394();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      param_1 = param_1 + lVar8;
      _objc_loadWeakRetained();
      lVar3 = param_1;
      func_0x00010bf68020();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0720c0();
      _objc_release(lVar3);
      _objc_release(param_1);
      _objc_release(uVar6);
      if ((int)lVar4 == 0) goto LAB_105e68890;
    }
    uVar7 = 1;
  }
  _objc_release(uVar1);
LAB_105e6889c:
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 105e688c0; end: 105e68a83; -[SCAddFriendSheetFeatureEntryPoint _fetchSnapchatterInfoWithUserID:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e688c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar6 = (long)_DAT_1127382f0;
  _objc_retain(param_3);
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar6 = param_1;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar1 = lVar6;
  func_0x00010c269d40(lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c09dce0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bfb0d80(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  lVar4 = lVar1;
  func_0x00010c25ff60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(lVar6 + 0x20);
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e68a84; end: 105e68ac7;  */

void FUN_105e68a84(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e68ac8; end: 105e68b5f; -[SCAddFriendSheetFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e68ac8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127382fc);
  _objc_destroyWeak(param_1 + _DAT_1127382f4);
  _objc_destroyWeak(param_1 + _DAT_1127382f0);
  _objc_destroyWeak(param_1 + _DAT_112738308);
  _objc_destroyWeak(param_1 + _DAT_1127382ec);
  _objc_destroyWeak(param_1 + _DAT_1127382e8);
  _objc_storeStrong(param_1 + _DAT_112738304,0);
  _objc_storeStrong(param_1 + _DAT_112738300,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127382f8,0);
  return;
}



/* Entry: 105e68b60; end: 105e68ce7; -[SCAddFriendSheetViewController initWithAddFriendSheetScope:valdiRuntimeProvider:snapchatter:snapchattersDataMutator:notificationPool:grapheneLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105e68b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126ed6e8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273830c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112738310;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112738314;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112738318;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273831c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112738320;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e68ce8; end: 105e68f63; -[SCAddFriendSheetViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e68ce8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126b1440;
  _objc_alloc(PTR_PTR_1126b1440);
  func_0x00010c040f20();
  puVar2 = PTR_PTR_1126c5328;
  _objc_alloc(PTR_PTR_1126c5328);
  func_0x00010c0763a0(*(undefined8 *)(param_1 + _DAT_11273830c));
  func_0x00010c044620(puVar2);
  puVar3 = PTR_PTR_1126ae5c0;
  func_0x00010befca80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112738320);
  _objc_retain(uVar8);
  _objc_initWeak(auStack_80,param_1);
  puVar4 = PTR_PTR_1126c5330;
  _objc_alloc(PTR_PTR_1126c5330);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105e68f64;
  puStack_a0 = &UNK_110848218;
  uStack_98 = uVar8;
  _objc_copyWeak(auStack_88,auStack_80);
  puStack_90 = puVar3;
  _objc_copyWeak(auStack_c0,auStack_80);
  func_0x00010bff21e0(puVar4);
  puVar5 = PTR_PTR_1126c5338;
  _objc_alloc(PTR_PTR_1126c5338);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112738310);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar5);
  func_0x00010c222380(param_1);
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105e68f64; end: 105e69017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e68f64(long param_1)

{
  undefined8 uVar1;
  
  FUN_105e69548(*(undefined8 *)(param_1 + 0x20),1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112738318);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8a80();
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 105e69018; end: 105e69027;  */

void FUN_105e69018(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb7850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__showAddFriendSuccessfulNotifica_11258b7b8);
    return;
  }
  return;
}



/* Entry: 105e69028; end: 105e69053;  */

void FUN_105e69028(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e69054; end: 105e690a7; -[SCAddFriendSheetViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e69054(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c06d1a0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273830c);
    func_0x00010bef8900(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105e690a8; end: 105e690ff; -[SCAddFriendSheetViewController _dismiss] */

void FUN_105e690a8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105e69100;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105e69100; end: 105e69117;  */

void FUN_105e69100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             &PTR___NSConcreteGlobalBlock_1108ef840);
  return;
}



/* Entry: 105e69118; end: 105e6925f; -[SCAddFriendSheetViewController _showAddFriendSuccessfulNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e69118(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273831c);
  _objc_retain(uVar5);
  lVar6 = (long)_DAT_112738314;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  if (lVar2 == 0) {
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_105e69348();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105e69260;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar5;
  puStack_38 = puVar4;
  _objc_retain(puVar4);
  _objc_retain(uVar5);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  return;
}



/* Entry: 105e69260; end: 105e692c7;  */

void FUN_105e69260(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf54760(PTR_PTR_1126afde0,param_2,*(undefined8 *)(param_1 + 0x28),0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e692c8; end: 105e69347; -[SCAddFriendSheetViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e692c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112738320,0);
  _objc_storeStrong(param_1 + _DAT_11273831c,0);
  _objc_storeStrong(param_1 + _DAT_112738318,0);
  _objc_storeStrong(param_1 + _DAT_112738314,0);
  _objc_storeStrong(param_1 + _DAT_112738310,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273830c,0);
  return;
}



/* Entry: 105e69348; end: 105e6935f;  */

void FUN_105e69348(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2ce98;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2ce98,
                      &PTR____CFConstantStringClassReference_110e2ceb8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105e69360; end: 105e693d3; -[SCGrapheneAddFriendPromptMetric2 init] */

undefined1 * FUN_105e69360(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed6f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105e693d4; end: 105e69547;  */

void FUN_105e693d4(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3460da;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108ef860;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108ef860,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_105e69548;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_1108ef8b0,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 105e69548; end: 105e695bf;  */

void FUN_105e69548(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108ef8b0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105e695c0; end: 105e695cb; +[SCCAddFriendSheetAddFriendSheet componentPath] */

undefined ** FUN_105e695c0(void)

{
  return &PTR____CFConstantStringClassReference_110e2ced8;
}



/* Entry: 105e695cc; end: 105e695ff; -[SCCAddFriendSheetAddFriendSheet initWithViewModel:componentContext:runtime:] */

void FUN_105e695cc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed6f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105e69600; end: 105e6964f; -[SCCAddFriendSheetAddFriendSheet setViewModel:] */

void FUN_105e69600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e69650; end: 105e69693; -[SCCAddFriendSheetAddFriendSheet viewModel] */

void FUN_105e69650(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e69694; end: 105e69723; -[SCCAddFriendSheetAddFriendSheetContext initWithAddFriendClicked:dismiss:] */

undefined8
FUN_105e69694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  func_0x000105e69790();
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_4;
}



/* Entry: 105e69724; end: 105e6973b; +[SCCAddFriendSheetAddFriendSheetContext valdiMarshallableObjectDescriptor] */

void FUN_105e69724(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108ef910;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e6973c; end: 105e6976f; -[SCCAddFriendSheetAddFriendSheetViewModel initWithSender:isLens:] */

void FUN_105e6973c(undefined8 param_1)

{
  func_0x000105e69790(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105e69770; end: 105e6979b; +[SCCAddFriendSheetAddFriendSheetViewModel valdiMarshallableObjectDescriptor] */

void FUN_105e69770(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ef958;
  param_1[1] = &PTR_DAT_1108ef9a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e6979c; end: 105e6980f; -[SCSnapMediaPlayerServices initWithFactory:] */

undefined1 * FUN_105e6979c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed710;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e69810; end: 105e69817; -[SCSnapMediaPlayerServices factory] */

undefined8 FUN_105e69810(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e69818; end: 105e69823; -[SCSnapMediaPlayerServices .cxx_destruct] */

void FUN_105e69818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e69824; end: 105e698c7; -[SCTextToSpeechServices initWithTextToSpeechNetworkRequester:coordinator:] */

undefined1 *
FUN_105e69824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed718;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e698c8; end: 105e698cf; -[SCTextToSpeechServices networkRequester] */

undefined8 FUN_105e698c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e698d0; end: 105e698d7; -[SCTextToSpeechServices coordinator] */

undefined8 FUN_105e698d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e698d8; end: 105e69907; -[SCTextToSpeechServices .cxx_destruct] */

void FUN_105e698d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e69908; end: 105e699d3; -[SCBillboardLockScreenWidgetsActionHandler initWithUserEducationTrayScopeExposer:userEducationTrayScopeServices:circumstanceEngine:] */

undefined1 *
FUN_105e69908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ed720;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e699d4; end: 105e699db; -[SCBillboardLockScreenWidgetsActionHandler actionHandlerType] */

undefined8 FUN_105e699d4(void)

{
  return 0xe;
}



/* Entry: 105e699dc; end: 105e69b4b; -[SCBillboardLockScreenWidgetsActionHandler handleOnTapActionWithContext:] */

void FUN_105e699dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e2fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar6);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126c5340;
    _objc_alloc(PTR_PTR_1126c5340);
    puVar4 = puVar3;
    FUN_105e6a16c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bdf5520(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bdf5500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053280(puVar3,param_2,puVar4,lVar2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(puVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = param_3;
    func_0x00010c27ece0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c263e20(param_3);
    lVar2 = param_1;
    func_0x00010be0abc0(param_1,param_2,uVar6);
    func_0x00010bf23ca0(uVar7,param_2,uVar1,puVar3,0xd,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c18b5e0(uVar7,param_2,param_1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e69b4c; end: 105e69bb7; -[SCBillboardLockScreenWidgetsActionHandler userEducationTrayDidComplete:] */

void FUN_105e69b4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105e69bb8; end: 105e69bcb; -[SCBillboardLockScreenWidgetsActionHandler _entryTypeForSurface:] */

long FUN_105e69bb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = -(ulong)(param_3 != 3);
  if (param_3 == 2) {
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 105e69bcc; end: 105e69d2f; -[SCBillboardLockScreenWidgetsActionHandler _createUserEducationTrayPages] */

void FUN_105e69bcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae588;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000105e6a19c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01cfe0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e2cf18,puVar2);
  puVar7 = PTR_PTR_1126ae588;
  puStack_70 = puVar1;
  _objc_alloc();
  puVar3 = puVar7;
  func_0x000105e6a1b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01cfe0(puVar7,param_2,&PTR____CFConstantStringClassReference_110e2cf38,puVar3);
  puVar4 = PTR_PTR_1126ae588;
  puStack_68 = puVar7;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000105e6a1cc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01cfe0(puVar4,param_2,&PTR____CFConstantStringClassReference_110e2cf58,puVar5);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar7 = *(undefined **)(puVar2 + 0x18);
  func_0x00010c25d780(puVar7,param_2,&PTR____CFConstantStringClassReference_110e2cef8,
                      &PTR____CFConstantStringClassReference_110daafd8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x000105e6a184();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
LAB_105e69e58:
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2cf00(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    ppuVar8 = &PTR___NSConcreteGlobalBlock_1108ef9b0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf2cf00(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)puVar4 == 0) goto LAB_105e69e58;
    func_0x000105e6a1e4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_105e69f10;
    puStack_d0 = &UNK_110841f50;
    _objc_retain(puVar7);
    ppuVar8 = &puStack_e8;
    puStack_c8 = puVar7;
    _objc_retainBlock(ppuVar8);
    _objc_release(puStack_c8);
    puVar1 = puVar2;
  }
  puVar6 = PTR_PTR_1126ae5a0;
  _objc_alloc(PTR_PTR_1126ae5a0);
  func_0x00010c051340();
  _objc_release(ppuVar8);
  _objc_release(puVar1);
  _objc_release(puVar7);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105e69d30; end: 105e69f03; -[SCBillboardLockScreenWidgetsActionHandler _createUserEducationTrayButtonConfiguration] */

void FUN_105e69d30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = *(undefined **)(param_1 + 0x18);
  func_0x00010c25d780(puVar1,param_2,&PTR____CFConstantStringClassReference_110e2cef8,
                      &PTR____CFConstantStringClassReference_110daafd8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e6a184();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf2cf00(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if ((int)puVar5 != 0) {
      func_0x000105e6a1e4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105e69f10;
      puStack_60 = &UNK_110841f50;
      _objc_retain(puVar1);
      ppuVar6 = &puStack_78;
      puStack_58 = puVar1;
      _objc_retainBlock(ppuVar6);
      _objc_release(puStack_58);
      puVar2 = puVar3;
      goto LAB_105e69eac;
    }
  }
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2cf00(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  ppuVar6 = &PTR___NSConcreteGlobalBlock_1108ef9b0;
LAB_105e69eac:
  puVar3 = PTR_PTR_1126ae5a0;
  _objc_alloc(PTR_PTR_1126ae5a0);
  func_0x00010c051340();
  _objc_release(ppuVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e69f04; end: 105e69f0f;  */

void FUN_105e69f04(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105e69f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2);
  return;
}



/* Entry: 105e69f10; end: 105e69fff;  */

void FUN_105e69f10(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(param_2);
  func_0x00010c22b720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c0e9b80(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  (**(code **)(param_2 + 0x10))(param_2);
  _objc_release(param_2);
  _objc_release(uVar3);
  return;
}



/* Entry: 105e6a000; end: 105e6a003;  */

void FUN_105e6a000(void)

{
  return;
}



/* Entry: 105e6a004; end: 105e6a04b; -[SCBillboardLockScreenWidgetsActionHandler .cxx_destruct] */

void FUN_105e6a004(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e6a04c; end: 105e6a117; -[SCCameraLockScreenWidgetsUserEducationTrayDataSourceImpl initWithTitle:pages:buttonConfiguration:] */

undefined1 *
FUN_105e6a04c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ed728;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e6a118; end: 105e6a11f; -[SCCameraLockScreenWidgetsUserEducationTrayDataSourceImpl title] */

undefined8 FUN_105e6a118(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e6a120; end: 105e6a127; -[SCCameraLockScreenWidgetsUserEducationTrayDataSourceImpl pages] */

undefined8 FUN_105e6a120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e6a128; end: 105e6a12f; -[SCCameraLockScreenWidgetsUserEducationTrayDataSourceImpl buttonConfiguration] */

undefined8 FUN_105e6a128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e6a130; end: 105e6a16b; -[SCCameraLockScreenWidgetsUserEducationTrayDataSourceImpl .cxx_destruct] */

void FUN_105e6a130(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e6a16c; end: 105e6a1fb;  */

void FUN_105e6a16c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2cf78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2cf78,
                      &PTR____CFConstantStringClassReference_110e2cf98,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105e6a1fc; end: 105e6a29f; -[SCInAppTakeoverProviderScope initWithPlugInRegistry:additionalMetricsData:] */

undefined1 *
FUN_105e6a1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed730;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e6a2a0; end: 105e6a2a7; -[SCInAppTakeoverProviderScope plugInRegistry] */

undefined8 FUN_105e6a2a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


