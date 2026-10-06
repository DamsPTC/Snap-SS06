/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7023bc; end: 10b7023c3; -[SCSpectaclesUserDeviceSecurityData lockOutEvent] */

undefined8 FUN_10b7023bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7023c4; end: 10b7023cb; -[SCSpectaclesUserDeviceSecurityData lockOutTime] */

undefined8 FUN_10b7023c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7023cc; end: 10b7023d3; -[SCSpectaclesUserDeviceSecurityData phoneProximity] */

undefined1 FUN_10b7023cc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b7023d4; end: 10b7023db; -[SCSpectaclesUserDeviceSecurityData userIsBlocked] */

undefined1 FUN_10b7023d4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b7023dc; end: 10b7023e3; -[SCSpectaclesUserDeviceSecurityData attemptsLeftBeforeBlocked] */

undefined8 FUN_10b7023dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7023e4; end: 10b7023eb; -[SCSpectaclesUserDeviceSecurityData timeUntilUnblocked] */

undefined8 FUN_10b7023e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7023ec; end: 10b7023f3; -[SCSpectaclesUserDeviceSecurityData isDirectBoot] */

undefined1 FUN_10b7023ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10b7023f4; end: 10b7023fb; -[SCSpectaclesUserDeviceSecurityData isDeviceUnlocked] */

undefined1 FUN_10b7023f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10b7023fc; end: 10b702437; -[SCSpectaclesUserDeviceSecurityData .cxx_destruct] */

void FUN_10b7023fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b702438; end: 10b70247f; -[SCSpectaclesDeviceSecuritySetUserDevicePasswordData initWithResponseCode:] */

void FUN_10b702438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a070;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b702480; end: 10b7024a3; -[SCSpectaclesDeviceSecuritySetUserDevicePasswordData copyWithZone:] */

undefined8 FUN_10b702480(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7024a4; end: 10b7024ab; -[SCSpectaclesDeviceSecuritySetUserDevicePasswordData hash] */

undefined8 FUN_10b7024a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7024ac; end: 10b702533; -[SCSpectaclesDeviceSecuritySetUserDevicePasswordData isEqual:] */

bool FUN_10b7024ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b702534; end: 10b70253b; -[SCSpectaclesDeviceSecuritySetUserDevicePasswordData responseCode] */

undefined8 FUN_10b702534(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b70253c; end: 10b7025e7; -[SCSpectaclesLensLaunchEvent initWithLensId:lensName:] */

undefined1 *
FUN_10b70253c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a078;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7025e8; end: 10b70260b; -[SCSpectaclesLensLaunchEvent copyWithZone:] */

undefined8 FUN_10b7025e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b70260c; end: 10b702613; -[SCSpectaclesLensLaunchEvent lensId] */

undefined8 FUN_10b70260c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b702614; end: 10b70261b; -[SCSpectaclesLensLaunchEvent lensName] */

undefined8 FUN_10b702614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b70261c; end: 10b70264b; -[SCSpectaclesLensLaunchEvent .cxx_destruct] */

void FUN_10b70261c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b70264c; end: 10b70269b; -[SCSpectaclesLensLaunchResponse initWithStatus:isSuccess:] */

void FUN_10b70264c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a080;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  return;
}



/* Entry: 10b70269c; end: 10b7026bf; -[SCSpectaclesLensLaunchResponse copyWithZone:] */

undefined8 FUN_10b70269c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7026c0; end: 10b7026c7; -[SCSpectaclesLensLaunchResponse status] */

undefined8 FUN_10b7026c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7026c8; end: 10b7026cf; -[SCSpectaclesLensLaunchResponse isSuccess] */

undefined1 FUN_10b7026c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7026d0; end: 10b702783; -[SCSpectaclesFirmwareScheduledUpdate initWithTargetHash:targetVersion:isFullUpdate:] */

undefined1 *
FUN_10b7026d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a088;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b702784; end: 10b7027a7; -[SCSpectaclesFirmwareScheduledUpdate copyWithZone:] */

undefined8 FUN_10b702784(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7027a8; end: 10b7027af; -[SCSpectaclesFirmwareScheduledUpdate targetHash] */

undefined8 FUN_10b7027a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7027b0; end: 10b7027b7; -[SCSpectaclesFirmwareScheduledUpdate targetVersion] */

undefined8 FUN_10b7027b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7027b8; end: 10b7027bf; -[SCSpectaclesFirmwareScheduledUpdate isFullUpdate] */

undefined1 FUN_10b7027b8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7027c0; end: 10b7027ef; -[SCSpectaclesFirmwareScheduledUpdate .cxx_destruct] */

void FUN_10b7027c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7027f0; end: 10b702847; +[SCSpectaclesSettingServiceValue booleanWithBoolValue:] */

void FUN_10b7027f0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1a20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b702848; end: 10b7028a3; +[SCSpectaclesSettingServiceValue floatWithFloatValue:] */

void FUN_10b702848(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1a20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7028a4; end: 10b7028ff; +[SCSpectaclesSettingServiceValue integerWithIntValue:] */

void FUN_10b7028a4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1a20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined4 *)(puVar2 + 0x14) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b702900; end: 10b70294b; +[SCSpectaclesSettingServiceValue none] */

void FUN_10b702900(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1a20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b70294c; end: 10b7029b7; +[SCSpectaclesSettingServiceValue textWithStringValue:] */

void FUN_10b70294c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1a20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7029b8; end: 10b7029db; -[SCSpectaclesSettingServiceValue copyWithZone:] */

undefined8 FUN_10b7029b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7029dc; end: 10b702a7b; -[SCSpectaclesSettingServiceValue hash] */

void FUN_10b7029dc(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uStack_48 = (ulong)*(byte *)(param_1 + 0x10);
  lStack_40 = (long)*(int *)(param_1 + 0x14);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar3 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_30 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_11270a090;
  puStack_80 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b702a7c; end: 10b702abf; -[SCSpectaclesSettingServiceValue internalInit] */

void FUN_10b702a7c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270a090;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b702ac0; end: 10b702bb3; -[SCSpectaclesSettingServiceValue isEqual:] */

long FUN_10b702ac0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b702b8c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b702b98;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) &&
        (*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b702b98;
        }
        goto LAB_10b702b8c;
      }
    }
    lVar4 = 0;
  }
LAB_10b702b98:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b702bb4; end: 10b702cdb; -[SCSpectaclesSettingServiceValue matchBoolean:integer:text:float:none:] */

void FUN_10b702bb4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_10b702ca4;
      uVar1 = (uint)*(byte *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if ((lVar2 != 1) || (param_4 == 0)) goto LAB_10b702ca4;
      uVar1 = *(uint *)(param_1 + 0x14);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    (*pcVar3)(lVar2,uVar1);
  }
  else if (lVar2 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x18));
    }
  }
  else if (lVar2 == 3) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(*(undefined8 *)(param_1 + 0x20),param_6);
    }
  }
  else if ((lVar2 == 4) && (param_7 != 0)) {
    (**(code **)(param_7 + 0x10))(param_7);
  }
LAB_10b702ca4:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b702cdc; end: 10b702ce7; -[SCSpectaclesSettingServiceValue .cxx_destruct] */

void FUN_10b702cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b702ce8; end: 10b702e1f; -[SCSpectaclesSettingServiceSetting initWithSettingId:title:desc:value:options:] */

undefined1 *
FUN_10b702ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_11270a098;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b702e20; end: 10b702e43; -[SCSpectaclesSettingServiceSetting copyWithZone:] */

undefined8 FUN_10b702e20(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b702e44; end: 10b702edb; -[SCSpectaclesSettingServiceSetting hash] */

undefined8 * FUN_10b702e44(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b702fa4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b702fb0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10b702fb0;
              }
              goto LAB_10b702fa4;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b702fb0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b702edc; end: 10b702fcb; -[SCSpectaclesSettingServiceSetting isEqual:] */

long FUN_10b702edc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b702fa4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b702fb0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10b702fb0;
              }
              goto LAB_10b702fa4;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b702fb0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b702fcc; end: 10b702fd3; -[SCSpectaclesSettingServiceSetting settingId] */

undefined8 FUN_10b702fcc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b702fd4; end: 10b702fdb; -[SCSpectaclesSettingServiceSetting title] */

undefined8 FUN_10b702fd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b702fdc; end: 10b702fe3; -[SCSpectaclesSettingServiceSetting desc] */

undefined8 FUN_10b702fdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b702fe4; end: 10b702feb; -[SCSpectaclesSettingServiceSetting value] */

undefined8 FUN_10b702fe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b702fec; end: 10b702ff3; -[SCSpectaclesSettingServiceSetting options] */

undefined8 FUN_10b702fec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b702ff4; end: 10b703047; -[SCSpectaclesSettingServiceSetting .cxx_destruct] */

void FUN_10b702ff4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b703048; end: 10b7030f3; -[SCSpectaclesSettingServiceSettingOption initWithLabel:value:] */

undefined1 *
FUN_10b703048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a0a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7030f4; end: 10b703117; -[SCSpectaclesSettingServiceSettingOption copyWithZone:] */

undefined8 FUN_10b7030f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b703118; end: 10b70318b; -[SCSpectaclesSettingServiceSettingOption hash] */

undefined8 * FUN_10b703118(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b70320c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b703218;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10b703218;
        }
        goto LAB_10b70320c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b703218:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b70318c; end: 10b703233; -[SCSpectaclesSettingServiceSettingOption isEqual:] */

long FUN_10b70318c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b70320c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b703218;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10b703218;
        }
        goto LAB_10b70320c;
      }
    }
    lVar3 = 0;
  }
LAB_10b703218:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b703234; end: 10b70323b; -[SCSpectaclesSettingServiceSettingOption label] */

undefined8 FUN_10b703234(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b70323c; end: 10b703243; -[SCSpectaclesSettingServiceSettingOption value] */

undefined8 FUN_10b70323c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b703244; end: 10b703273; -[SCSpectaclesSettingServiceSettingOption .cxx_destruct] */

void FUN_10b703244(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b703274; end: 10b70330f; -[SCSpectaclesBackupStatusEvent initWithStatus:contendId:backupProgress:thumbnailSize:] */

undefined1 *
FUN_10b703274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_11270a0a8;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b703310; end: 10b703333; -[SCSpectaclesBackupStatusEvent copyWithZone:] */

undefined8 FUN_10b703310(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b703334; end: 10b7033e3; -[SCSpectaclesBackupStatusEvent hash] */

undefined8 * FUN_10b703334(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b7034c4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b7034d0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[1] == param_3[1])) {
      dVar8 = ABS((double)puVar3[3] - (double)param_3[3]);
      dVar7 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        dVar8 = ABS((double)puVar3[4] - (double)param_3[4]);
        dVar7 = ABS((double)puVar3[4] + (double)param_3[4]) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar1 = dVar8 < dVar7;
        }
        if (bVar1) {
          puVar6 = (undefined8 *)puVar3[2];
          if (puVar6 != (undefined8 *)param_3[2]) {
            func_0x00010c071ae0();
            goto LAB_10b7034d0;
          }
          goto LAB_10b7034c4;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b7034d0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b7033e4; end: 10b7034eb; -[SCSpectaclesBackupStatusEvent isEqual:] */

long FUN_10b7033e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7034c4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7034d0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
        dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          lVar4 = *(long *)(param_1 + 0x10);
          if (lVar4 != *(long *)(param_3 + 0x10)) {
            func_0x00010c071ae0();
            goto LAB_10b7034d0;
          }
          goto LAB_10b7034c4;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b7034d0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b7034ec; end: 10b7034f3; -[SCSpectaclesBackupStatusEvent status] */

undefined8 FUN_10b7034ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7034f4; end: 10b7034fb; -[SCSpectaclesBackupStatusEvent contendId] */

undefined8 FUN_10b7034f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7034fc; end: 10b703503; -[SCSpectaclesBackupStatusEvent backupProgress] */

undefined8 FUN_10b7034fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b703504; end: 10b70350b; -[SCSpectaclesBackupStatusEvent thumbnailSize] */

undefined8 FUN_10b703504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b70350c; end: 10b703517; -[SCSpectaclesBackupStatusEvent .cxx_destruct] */

void FUN_10b70350c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b703518; end: 10b7035eb; -[SCSpectaclesBackupStatusItem initWithBackupStatus:entryId:snapId:thumbnailFileSize:backupProgress:] */

undefined1 *
FUN_10b703518(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_11270a0b0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined4 *)((long)puVar1 + 8) = param_1;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7035ec; end: 10b7036d7; -[SCSpectaclesBackupStatusItem initWithCoder:] */

undefined1 *
FUN_10b7035ec(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_11270a0b0;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x00010bf66e40(param_4);
    *(undefined4 *)((long)puVar1 + 8) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7036d8; end: 10b703773; -[SCSpectaclesBackupStatusItem encodeWithCoder:] */

void FUN_10b7036d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f72d98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f57e18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110dbb0f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f72db8);
  func_0x00010bf92ee0(*(undefined4 *)(param_1 + 8),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f72dd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b703774; end: 10b70377b; -[SCSpectaclesBackupStatusItem backupStatus] */

undefined8 FUN_10b703774(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b70377c; end: 10b703783; -[SCSpectaclesBackupStatusItem entryId] */

undefined8 FUN_10b70377c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b703784; end: 10b70378b; -[SCSpectaclesBackupStatusItem snapId] */

undefined8 FUN_10b703784(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b70378c; end: 10b703793; -[SCSpectaclesBackupStatusItem thumbnailFileSize] */

undefined8 FUN_10b70378c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b703794; end: 10b70379b; -[SCSpectaclesBackupStatusItem backupProgress] */

undefined4 FUN_10b703794(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b70379c; end: 10b7037cb; -[SCSpectaclesBackupStatusItem .cxx_destruct] */

void FUN_10b70379c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b7037cc; end: 10b70381b; -[SCSpectaclesFlightImuCalibrationResult initWithCalibrationDirection:finished:] */

void FUN_10b7037cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a0b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  return;
}



/* Entry: 10b70381c; end: 10b70383f; -[SCSpectaclesFlightImuCalibrationResult copyWithZone:] */

undefined8 FUN_10b70381c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b703840; end: 10b70389b; -[SCSpectaclesFlightImuCalibrationResult hash] */

undefined8 * FUN_10b703840(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = (ulong)*(byte *)(param_1 + 8);
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (undefined8 *)0x1;
  }
  else {
    puVar3 = (undefined8 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (puVar1[2] != param_3[2])) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = (undefined8 *)(ulong)(*(char *)(puVar1 + 1) == *(char *)(param_3 + 1));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b70389c; end: 10b703933; -[SCSpectaclesFlightImuCalibrationResult isEqual:] */

bool FUN_10b70389c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b703934; end: 10b70393b; -[SCSpectaclesFlightImuCalibrationResult calibrationDirection] */

undefined8 FUN_10b703934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b70393c; end: 10b703943; -[SCSpectaclesFlightImuCalibrationResult finished] */

undefined1 FUN_10b70393c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b703944; end: 10b7039cf; -[SCSpectaclesFlightImuCalibrationStatus initWithResults:calibrationDirection:calibrationState:] */

undefined1 *
FUN_10b703944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270a0c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7039d0; end: 10b7039f3; -[SCSpectaclesFlightImuCalibrationStatus copyWithZone:] */

undefined8 FUN_10b7039d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7039f4; end: 10b703a63; -[SCSpectaclesFlightImuCalibrationStatus hash] */

undefined8 * FUN_10b7039f4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b703af8;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b703af8;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b703af8;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b703af8:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b703a64; end: 10b703b13; -[SCSpectaclesFlightImuCalibrationStatus isEqual:] */

long FUN_10b703a64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b703af8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b703af8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b703af8;
    }
  }
  lVar3 = 1;
LAB_10b703af8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b703b14; end: 10b703b1b; -[SCSpectaclesFlightImuCalibrationStatus results] */

undefined8 FUN_10b703b14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b703b1c; end: 10b703b23; -[SCSpectaclesFlightImuCalibrationStatus calibrationDirection] */

undefined8 FUN_10b703b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b703b24; end: 10b703b2b; -[SCSpectaclesFlightImuCalibrationStatus calibrationState] */

undefined8 FUN_10b703b24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b703b2c; end: 10b703b37; -[SCSpectaclesFlightImuCalibrationStatus .cxx_destruct] */

void FUN_10b703b2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b703b38; end: 10b703c8b; -[SCSpectaclesPairingDeviceInfo initWithSerialNumber:displayName:firmwareVersion:hardwareVersion:bleState:btcState:deviceColor:previousUserMediaCount:] */

undefined1 *
FUN_10b703b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_11270a0c8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b703c8c; end: 10b703c93; -[SCSpectaclesPairingDeviceInfo serialNumber] */

undefined8 FUN_10b703c8c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b703c94; end: 10b703c9b; -[SCSpectaclesPairingDeviceInfo displayName] */

undefined8 FUN_10b703c94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b703c9c; end: 10b703ca3; -[SCSpectaclesPairingDeviceInfo firmwareVersion] */

undefined8 FUN_10b703c9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b703ca4; end: 10b703cab; -[SCSpectaclesPairingDeviceInfo hardwareVersion] */

undefined8 FUN_10b703ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b703cac; end: 10b703cb3; -[SCSpectaclesPairingDeviceInfo bleState] */

undefined8 FUN_10b703cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b703cb4; end: 10b703cbb; -[SCSpectaclesPairingDeviceInfo btcState] */

undefined8 FUN_10b703cb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b703cbc; end: 10b703cc3; -[SCSpectaclesPairingDeviceInfo deviceColor] */

undefined8 FUN_10b703cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b703cc4; end: 10b703ccb; -[SCSpectaclesPairingDeviceInfo previousUserMediaCount] */

undefined8 FUN_10b703cc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b703ccc; end: 10b703d1f; -[SCSpectaclesPairingDeviceInfo .cxx_destruct] */

void FUN_10b703ccc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b703d20; end: 10b703d7b; -[SCSpectaclesDeviceConnectionState initWithBle:btc:wifi:] */

void FUN_10b703d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a0d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}


