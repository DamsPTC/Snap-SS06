/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ba96ec; end: 108ba974b; -[SCAdLensCarouselInteraction .cxx_destruct] */

void FUN_108ba96ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108ba974c; end: 108ba97b7; -[SCUnlockableLensSwipeInteraction init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108ba974c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd680;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127780f8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127780f8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108ba97b8; end: 108ba9aef; -[SCUnlockableLensSwipeInteraction copyWithZone:] */

undefined1 * FUN_108ba97b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd680;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_copyWithZone__1125b2238);
  func_0x00010bf28e60(param_1);
  func_0x00010c176040(puVar1);
  func_0x00010c06c960(param_1);
  func_0x00010c1af440(puVar1);
  func_0x00010c2bd1a0(param_1);
  func_0x00010c2271a0(puVar1);
  func_0x00010c2b8140(param_1);
  func_0x00010c226c80(puVar1);
  func_0x00010c06dd80(param_1);
  func_0x00010c1afc60(puVar1);
  uVar2 = param_1;
  func_0x00010c095a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1bc480(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf93ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c195a40(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c280e20(param_1);
  func_0x00010c21bb40(puVar1);
  func_0x00010bfb1180(param_1);
  func_0x00010c19cf40(puVar1);
  func_0x00010bfb1ee0(param_1);
  func_0x00010c19d7a0(puVar1);
  func_0x00010bf13560(param_1);
  func_0x00010c16dea0(puVar1);
  func_0x00010c08fe80(param_1);
  func_0x00010c1ba9e0(puVar1);
  func_0x00010bfb6f00(param_1);
  func_0x00010c19f440(puVar1);
  uVar2 = param_1;
  func_0x00010c115fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  func_0x00010c1e3c60(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c076460(param_1);
  func_0x00010c1b22a0(puVar1);
  func_0x00010c07c360(param_1);
  func_0x00010c1b3da0(puVar1);
  uVar2 = param_1;
  func_0x00010c095800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1bc3e0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0cf060(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1c87c0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c096da0(param_1);
  func_0x00010c1bcce0(puVar1);
  func_0x00010c07de20(param_1);
  func_0x00010c1b4580(puVar1);
  uVar2 = param_1;
  func_0x00010c0c2d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1c3640(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c068860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ae200(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c068580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ae0c0(puVar1);
  _objc_release(uVar2);
  func_0x00010c0fed20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd3a0(puVar1);
  _objc_release(param_1);
  return (undefined1 *)puVar1;
}



/* Entry: 108ba9af0; end: 108ba9f87; -[SCUnlockableLensSwipeInteraction isEqual:] */

ulong FUN_108ba9af0(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  double dVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  ulong uStack_60;
  undefined *puStack_58;
  
  uVar8 = (undefined4)((ulong)param_1 >> 0x20);
  fVar6 = (float)param_1;
  iVar2 = (int)&uStack_60;
  _objc_retain(param_4);
  if (param_2 == param_4) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
    if ((param_2 != 0) && (param_4 != 0)) {
      uVar5 = param_2;
      _objc_opt_class(param_2);
      uVar3 = param_4;
      _objc_opt_isKindOfClass(param_4,uVar5);
      if ((uVar3 & 1) != 0) {
        puStack_58 = PTR_PTR_1126fd680;
        uStack_60 = param_2;
        _objc_msgSendSuper2(&uStack_60,PTR_s_isEqual__1125fa0c8,param_4);
        if (iVar2 != 0) {
          uVar5 = param_2;
          func_0x00010bf28e60();
          uVar3 = param_4;
          func_0x00010bf28e60();
          if (uVar5 == uVar3) {
            uVar5 = param_2;
            func_0x00010c06c960();
            uVar3 = param_4;
            func_0x00010c06c960();
            if ((int)uVar5 == (int)uVar3) {
              uVar5 = param_2;
              func_0x00010c2bd1a0();
              uVar3 = param_4;
              func_0x00010c2bd1a0();
              if ((int)uVar5 == (int)uVar3) {
                uVar5 = param_2;
                func_0x00010c2b8140();
                uVar3 = param_4;
                func_0x00010c2b8140();
                if ((int)uVar5 == (int)uVar3) {
                  uVar5 = param_2;
                  func_0x00010c095a20();
                  _objc_retainAutoreleasedReturnValue();
                  uVar3 = param_4;
                  func_0x00010c095a20(param_4);
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar5;
                  func_0x00010bd86de8(uVar5,uVar3);
                  _objc_release(uVar3);
                  _objc_release(uVar5);
                  if ((int)uVar4 != 0) {
                    uVar5 = param_2;
                    func_0x00010bf93ae0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar3 = param_4;
                    func_0x00010bf93ae0(param_4);
                    _objc_retainAutoreleasedReturnValue();
                    uVar4 = uVar5;
                    func_0x00010bd86de8(uVar5,uVar3);
                    _objc_release(uVar3);
                    _objc_release(uVar5);
                    if ((int)uVar4 != 0) {
                      uVar5 = param_2;
                      func_0x00010c280e20();
                      uVar3 = param_4;
                      func_0x00010c280e20();
                      if (uVar5 == uVar3) {
                        func_0x00010bfb1180(param_2);
                        dVar1 = (double)CONCAT44(uVar8,fVar6);
                        func_0x00010bfb1180(param_4);
                        if (dVar1 == (double)CONCAT44(uVar8,fVar6)) {
                          func_0x00010bfb1ee0(param_2);
                          dVar1 = (double)CONCAT44(uVar8,fVar6);
                          func_0x00010bfb1ee0(param_4);
                          if (dVar1 == (double)CONCAT44(uVar8,fVar6)) {
                            func_0x00010bf13560(param_2);
                            fVar7 = fVar6;
                            func_0x00010bf13560(param_4);
                            if (fVar6 == fVar7) {
                              uVar5 = param_2;
                              func_0x00010c08fe80();
                              uVar3 = param_4;
                              func_0x00010c08fe80();
                              if (uVar5 == uVar3) {
                                uVar5 = param_2;
                                func_0x00010bfb6f00();
                                uVar3 = param_4;
                                func_0x00010bfb6f00();
                                if (uVar5 == uVar3) {
                                  uVar5 = param_2;
                                  func_0x00010c115fa0();
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar3 = param_4;
                                  func_0x00010c115fa0(param_4);
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar4 = uVar5;
                                  func_0x00010bd86de8(uVar5,uVar3);
                                  _objc_release(uVar3);
                                  _objc_release(uVar5);
                                  if ((int)uVar4 != 0) {
                                    uVar5 = param_2;
                                    func_0x00010c076460();
                                    uVar3 = param_4;
                                    func_0x00010c076460();
                                    if ((int)uVar5 == (int)uVar3) {
                                      uVar5 = param_2;
                                      func_0x00010c07c360();
                                      uVar3 = param_4;
                                      func_0x00010c07c360();
                                      if ((int)uVar5 == (int)uVar3) {
                                        uVar5 = param_2;
                                        func_0x00010c095800();
                                        _objc_retainAutoreleasedReturnValue();
                                        uVar3 = param_4;
                                        func_0x00010c095800(param_4);
                                        _objc_retainAutoreleasedReturnValue();
                                        uVar4 = uVar5;
                                        func_0x00010bd86de8(uVar5,uVar3);
                                        _objc_release(uVar3);
                                        _objc_release(uVar5);
                                        if ((int)uVar4 != 0) {
                                          uVar5 = param_2;
                                          func_0x00010c0cf060();
                                          _objc_retainAutoreleasedReturnValue();
                                          uVar3 = param_4;
                                          func_0x00010c0cf060(param_4);
                                          _objc_retainAutoreleasedReturnValue();
                                          uVar4 = uVar5;
                                          func_0x00010bd86de8(uVar5,uVar3);
                                          _objc_release(uVar3);
                                          _objc_release(uVar5);
                                          if ((int)uVar4 != 0) {
                                            uVar5 = param_2;
                                            func_0x00010c096da0();
                                            uVar3 = param_4;
                                            func_0x00010c096da0();
                                            if (uVar5 == uVar3) {
                                              uVar5 = param_2;
                                              func_0x00010c07de20();
                                              uVar3 = param_4;
                                              func_0x00010c07de20();
                                              if ((int)uVar5 == (int)uVar3) {
                                                uVar5 = param_2;
                                                func_0x00010c0c2d20();
                                                _objc_retainAutoreleasedReturnValue();
                                                uVar3 = param_4;
                                                func_0x00010c0c2d20(param_4);
                                                _objc_retainAutoreleasedReturnValue();
                                                uVar4 = uVar5;
                                                func_0x00010bd86de8(uVar5,uVar3);
                                                _objc_release(uVar3);
                                                _objc_release(uVar5);
                                                if ((int)uVar4 != 0) {
                                                  uVar5 = param_2;
                                                  func_0x00010c068860();
                                                  _objc_retainAutoreleasedReturnValue();
                                                  uVar3 = param_4;
                                                  func_0x00010c068860(param_4);
                                                  _objc_retainAutoreleasedReturnValue();
                                                  uVar4 = uVar5;
                                                  func_0x00010bd86de8(uVar5,uVar3);
                                                  _objc_release(uVar3);
                                                  _objc_release(uVar5);
                                                  if ((int)uVar4 != 0) {
                                                    func_0x00010c068580(param_2);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    uVar3 = param_4;
                                                    func_0x00010c068580(param_4);
                                                    _objc_retainAutoreleasedReturnValue();
                                                    uVar5 = param_2;
                                                    func_0x00010bd86de8(param_2,uVar3);
                                                    _objc_release(uVar3);
                                                    _objc_release(param_2);
                                                    goto LAB_108ba9f60;
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
      }
      uVar5 = 0;
    }
  }
LAB_108ba9f60:
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 108ba9f88; end: 108ba9f97; -[SCUnlockableLensSwipeInteraction camera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ba9f88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127780b4);
}



/* Entry: 108ba9f98; end: 108ba9fa7; -[SCUnlockableLensSwipeInteraction setCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba9f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127780b4) = param_3;
  return;
}



/* Entry: 108ba9fa8; end: 108ba9fb7; -[SCUnlockableLensSwipeInteraction isAudioOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ba9fa8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127780b8);
}



/* Entry: 108ba9fb8; end: 108ba9fc7; -[SCUnlockableLensSwipeInteraction setIsAudioOn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba9fb8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127780b8) = param_3;
  return;
}



/* Entry: 108ba9fc8; end: 108ba9fd7; -[SCUnlockableLensSwipeInteraction withWorldCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ba9fc8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127780bc);
}



/* Entry: 108ba9fd8; end: 108ba9fe7; -[SCUnlockableLensSwipeInteraction setWithWorldCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba9fd8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127780bc) = param_3;
  return;
}



/* Entry: 108ba9fe8; end: 108ba9ff7; -[SCUnlockableLensSwipeInteraction withSelfieCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ba9fe8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127780c0);
}



/* Entry: 108ba9ff8; end: 108baa007; -[SCUnlockableLensSwipeInteraction setWithSelfieCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba9ff8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127780c0) = param_3;
  return;
}



/* Entry: 108baa008; end: 108baa017; -[SCUnlockableLensSwipeInteraction lensOptionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa008(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127780fc);
}



/* Entry: 108baa018; end: 108baa057; -[SCUnlockableLensSwipeInteraction setLensOptionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127780fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108baa058; end: 108baa067; -[SCUnlockableLensSwipeInteraction encryptedGeoData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa058(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112778100);
}



/* Entry: 108baa068; end: 108baa0a7; -[SCUnlockableLensSwipeInteraction setEncryptedGeoData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa068(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112778100;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108baa0a8; end: 108baa0b7; -[SCUnlockableLensSwipeInteraction unlockType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa0a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127780c4);
}



/* Entry: 108baa0b8; end: 108baa0c7; -[SCUnlockableLensSwipeInteraction setUnlockType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127780c4) = param_3;
  return;
}



/* Entry: 108baa0c8; end: 108baa0d7; -[SCUnlockableLensSwipeInteraction firstFaceRenderTimestampSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa0c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127780c8);
}



/* Entry: 108baa0d8; end: 108baa0e7; -[SCUnlockableLensSwipeInteraction setFirstFaceRenderTimestampSec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa0d8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127780c8) = param_1;
  return;
}



/* Entry: 108baa0e8; end: 108baa0f7; -[SCUnlockableLensSwipeInteraction firstTriggerTimestampSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa0e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127780cc);
}



/* Entry: 108baa0f8; end: 108baa107; -[SCUnlockableLensSwipeInteraction setFirstTriggerTimestampSec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa0f8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127780cc) = param_1;
  return;
}



/* Entry: 108baa108; end: 108baa117; -[SCUnlockableLensSwipeInteraction avgFps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_108baa108(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127780d0);
}



/* Entry: 108baa118; end: 108baa127; -[SCUnlockableLensSwipeInteraction setAvgFps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa118(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + _DAT_1127780d0) = param_1;
  return;
}



/* Entry: 108baa128; end: 108baa137; -[SCUnlockableLensSwipeInteraction lensApplyDelayMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa128(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127780d4);
}



/* Entry: 108baa138; end: 108baa147; -[SCUnlockableLensSwipeInteraction setLensApplyDelayMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa138(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127780d4) = param_3;
  return;
}



/* Entry: 108baa148; end: 108baa157; -[SCUnlockableLensSwipeInteraction frameProcessingTimeAvgMillis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa148(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127780d8);
}



/* Entry: 108baa158; end: 108baa167; -[SCUnlockableLensSwipeInteraction setFrameProcessingTimeAvgMillis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa158(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127780d8) = param_3;
  return;
}



/* Entry: 108baa168; end: 108baa177; -[SCUnlockableLensSwipeInteraction productInteractions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa168(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127780f8);
}



/* Entry: 108baa178; end: 108baa1b7; -[SCUnlockableLensSwipeInteraction setProductInteractions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127780f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108baa1b8; end: 108baa1c7; -[SCUnlockableLensSwipeInteraction isLensCachedBeforeSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108baa1b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127780dc);
}



/* Entry: 108baa1c8; end: 108baa1d7; -[SCUnlockableLensSwipeInteraction setIsLensCachedBeforeSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa1c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127780dc) = param_3;
  return;
}



/* Entry: 108baa1d8; end: 108baa1e7; -[SCUnlockableLensSwipeInteraction isRendered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108baa1d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127780e0);
}



/* Entry: 108baa1e8; end: 108baa1f7; -[SCUnlockableLensSwipeInteraction setIsRendered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa1e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127780e0) = param_3;
  return;
}



/* Entry: 108baa1f8; end: 108baa207; -[SCUnlockableLensSwipeInteraction lensNamespace] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa1f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112778104);
}



/* Entry: 108baa208; end: 108baa247; -[SCUnlockableLensSwipeInteraction setLensNamespace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112778104;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108baa248; end: 108baa257; -[SCUnlockableLensSwipeInteraction mixerRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa248(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112778108);
}



/* Entry: 108baa258; end: 108baa297; -[SCUnlockableLensSwipeInteraction setMixerRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa258(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112778108;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108baa298; end: 108baa2a7; -[SCUnlockableLensSwipeInteraction lensSponsoredType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa298(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127780e4);
}



/* Entry: 108baa2a8; end: 108baa2b7; -[SCUnlockableLensSwipeInteraction setLensSponsoredType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa2a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127780e4) = param_3;
  return;
}



/* Entry: 108baa2b8; end: 108baa2c7; -[SCUnlockableLensSwipeInteraction isShoppingLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108baa2b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127780e8);
}



/* Entry: 108baa2c8; end: 108baa2d7; -[SCUnlockableLensSwipeInteraction setIsShoppingLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa2c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127780e8) = param_3;
  return;
}



/* Entry: 108baa2d8; end: 108baa2e7; -[SCUnlockableLensSwipeInteraction impressionTrigger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa2d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127780ec);
}



/* Entry: 108baa2e8; end: 108baa2f7; -[SCUnlockableLensSwipeInteraction setImpressionTrigger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa2e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127780ec) = param_3;
  return;
}



/* Entry: 108baa2f8; end: 108baa307; -[SCUnlockableLensSwipeInteraction maxScreenPortionRendered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa2f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277810c);
}



/* Entry: 108baa308; end: 108baa313; -[SCUnlockableLensSwipeInteraction setMaxScreenPortionRendered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa308(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108baa314; end: 108baa323; -[SCUnlockableLensSwipeInteraction hasEngagedClick] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108baa314(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127780f0);
}



/* Entry: 108baa324; end: 108baa333; -[SCUnlockableLensSwipeInteraction setHasEngagedClick:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa324(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127780f0) = param_3;
  return;
}



/* Entry: 108baa334; end: 108baa343; -[SCUnlockableLensSwipeInteraction creatorInteractions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa334(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112778110);
}



/* Entry: 108baa344; end: 108baa383; -[SCUnlockableLensSwipeInteraction setCreatorInteractions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa344(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112778110;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108baa384; end: 108baa393; -[SCUnlockableLensSwipeInteraction shoppingLensTrackingEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa384(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112778114);
}



/* Entry: 108baa394; end: 108baa3d3; -[SCUnlockableLensSwipeInteraction setShoppingLensTrackingEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112778114;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108baa3d4; end: 108baa3e3; -[SCUnlockableLensSwipeInteraction playableTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa3d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112778118);
}



/* Entry: 108baa3e4; end: 108baa423; -[SCUnlockableLensSwipeInteraction setPlayableTrackInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa3e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112778118;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108baa424; end: 108baa433; -[SCUnlockableLensSwipeInteraction isCameraFlipped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108baa424(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127780f4);
}



/* Entry: 108baa434; end: 108baa443; -[SCUnlockableLensSwipeInteraction setIsCameraFlipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa434(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127780f4) = param_3;
  return;
}



/* Entry: 108baa444; end: 108baa453; -[SCUnlockableLensSwipeInteraction interactionStartTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa444(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277811c);
}



/* Entry: 108baa454; end: 108baa493; -[SCUnlockableLensSwipeInteraction setInteractionStartTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa454(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277811c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108baa494; end: 108baa4a3; -[SCUnlockableLensSwipeInteraction interactionEndTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa494(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112778120);
}



/* Entry: 108baa4a4; end: 108baa4e3; -[SCUnlockableLensSwipeInteraction setInteractionEndTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa4a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112778120;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108baa4e4; end: 108baa5b3; -[SCUnlockableLensSwipeInteraction .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa4e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112778120,0);
  _objc_storeStrong(param_1 + _DAT_11277811c,0);
  _objc_storeStrong(param_1 + _DAT_112778118,0);
  _objc_storeStrong(param_1 + _DAT_112778114,0);
  _objc_storeStrong(param_1 + _DAT_112778110,0);
  _objc_storeStrong(param_1 + _DAT_11277810c,0);
  _objc_storeStrong(param_1 + _DAT_112778108,0);
  _objc_storeStrong(param_1 + _DAT_112778104,0);
  _objc_storeStrong(param_1 + _DAT_1127780f8,0);
  _objc_storeStrong(param_1 + _DAT_112778100,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127780fc,0);
  return;
}



/* Entry: 108baa5b4; end: 108baa5bb; -[SCAdUnlockableTrackingServices snapAdsUnlockableTracker] */

undefined8 FUN_108baa5b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108baa5bc; end: 108baa5c3; -[SCAdUnlockableTrackingServices adLensCarouselInteractionHistoryTracker] */

undefined8 FUN_108baa5bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108baa5c4; end: 108baa5cb; -[SCAdUnlockableTrackingServices unlockableGeoFilterTracker] */

undefined8 FUN_108baa5c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108baa5cc; end: 108baa5d3; -[SCAdUnlockableTrackingServices unlockableUCOTracker] */

undefined8 FUN_108baa5cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108baa5d4; end: 108baa5db; -[SCAdUnlockableTrackingServices unlockableVideoCallingLensTracker] */

undefined8 FUN_108baa5d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108baa5dc; end: 108baa63b; -[SCAdUnlockableTrackingServices .cxx_destruct] */

void FUN_108baa5dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108baa63c; end: 108baa64b; -[SCUnlockableGeoFilterSwipeInteraction firstSeenTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa63c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112778140);
}



/* Entry: 108baa64c; end: 108baa68b; -[SCUnlockableGeoFilterSwipeInteraction setFirstSeenTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa64c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112778140;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108baa68c; end: 108baa69b; -[SCUnlockableGeoFilterSwipeInteraction encryptedGeoData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa68c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112778144);
}



/* Entry: 108baa69c; end: 108baa6db; -[SCUnlockableGeoFilterSwipeInteraction setEncryptedGeoData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa69c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112778144;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108baa6dc; end: 108baa6eb; -[SCUnlockableGeoFilterSwipeInteraction geofilterType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108baa6dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277813c);
}



/* Entry: 108baa6ec; end: 108baa6fb; -[SCUnlockableGeoFilterSwipeInteraction setGeofilterType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa6ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277813c) = param_3;
  return;
}



/* Entry: 108baa6fc; end: 108baa73b; -[SCUnlockableGeoFilterSwipeInteraction .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108baa6fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112778144,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112778140,0);
  return;
}



/* Entry: 108baa73c; end: 108baa9ff; -[SCUnlockableSwipeInteraction copyWithZone:] */

undefined8 FUN_108baa73c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  _objc_opt_class();
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010c2a8920(param_1);
  func_0x00010c225ca0(uVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00010bf0d600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c16b360(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf0cf40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c16b1c0(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2813a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c21bcc0(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2810a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c21bbe0(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c15e680(param_1);
  func_0x00010c1fcfa0(uVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00010bfed240(param_1);
  func_0x00010c1ac060(uVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00010c242fe0(param_1);
  func_0x00010c2054c0(uVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00010c243600(param_1);
  func_0x00010c2057c0(uVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00010c25a8c0(param_1);
  func_0x00010c20d640(uVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00010c0c9600(param_1);
  func_0x00010c1c63a0(uVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00010bf7f0a0(param_1);
  func_0x00010c18e160(uVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00010c264ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c210880(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c123f40(param_1);
  func_0x00010c1e9020(uVar1);
  func_0x00010c104760(param_1);
  func_0x00010c1df180(uVar1);
  uVar2 = param_1;
  func_0x00010bfb2440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19da40(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0da7e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1cd800(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0da7a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1cd7e0(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c0c2f80(param_1);
  func_0x00010c1c3800(uVar1);
  func_0x00010c0c1f60(param_1);
  func_0x00010c1c3100(uVar1);
  return uVar1;
}



/* Entry: 108baaa00; end: 108baaf47; -[SCUnlockableSwipeInteraction isEqual:] */

ulong FUN_108baaa00(double param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_4);
  if (param_2 == param_4) {
    uVar3 = 1;
    goto LAB_108baaa7c;
  }
  uVar3 = 0;
  if ((param_2 == 0) || (param_4 == 0)) goto LAB_108baaa7c;
  uVar3 = param_2;
  _objc_opt_class(param_2);
  uVar1 = param_4;
  _objc_opt_isKindOfClass(param_4,uVar3);
  if ((uVar1 & 1) != 0) {
    uVar3 = param_2;
    func_0x00010c2a8920();
    uVar1 = param_4;
    func_0x00010c2a8920();
    if ((int)uVar3 == (int)uVar1) {
      uVar1 = param_2;
      func_0x00010bf0d600();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf0d600();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar1);
      _objc_retain(uVar3);
      if (uVar1 != uVar3) {
        if (uVar3 != 0) {
          uVar2 = uVar1;
          func_0x00010c071ae0();
          _objc_release(uVar3);
          _objc_release(uVar1);
          _objc_release(uVar3);
          _objc_release(uVar1);
          if ((uVar2 & 1) == 0) goto LAB_108baaa70;
          goto LAB_108baab3c;
        }
LAB_108baabb8:
        uVar3 = 0;
        uVar2 = uVar1;
LAB_108baabc0:
        _objc_release(uVar1);
        _objc_release(uVar2);
        goto LAB_108baaa7c;
      }
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar1);
LAB_108baab3c:
      uVar1 = param_2;
      func_0x00010bf0cf40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf0cf40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar1);
      _objc_retain(uVar3);
      if (uVar1 == uVar3) {
        _objc_release(uVar3);
        _objc_release(uVar1);
        _objc_release(uVar3);
        _objc_release(uVar1);
      }
      else {
        if (uVar3 == 0) goto LAB_108baabb8;
        uVar2 = uVar1;
        func_0x00010c071ae0();
        _objc_release(uVar3);
        _objc_release(uVar1);
        _objc_release(uVar3);
        _objc_release(uVar1);
        if ((uVar2 & 1) == 0) goto LAB_108baaa70;
      }
      uVar2 = param_2;
      func_0x00010c2813a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c2813a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar2);
      _objc_retain(uVar3);
      if (uVar2 == uVar3) {
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
      else {
        if (uVar3 == 0) {
          _objc_release(0);
          _objc_release(uVar2);
          uVar3 = 0;
          uVar1 = 0;
          goto LAB_108baabc0;
        }
        uVar1 = uVar2;
        func_0x00010c071ae0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((uVar1 & 1) == 0) goto LAB_108baaa70;
      }
      uVar1 = param_2;
      func_0x00010c2810a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c2810a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bd86de8(uVar1,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar3 == 0) goto LAB_108baaa7c;
      uVar3 = param_2;
      func_0x00010c15e680();
      uVar1 = param_4;
      func_0x00010c15e680();
      if (uVar3 == uVar1) {
        uVar3 = param_2;
        func_0x00010bfed240();
        uVar1 = param_4;
        func_0x00010bfed240();
        if (uVar3 == uVar1) {
          uVar3 = param_2;
          func_0x00010c242fe0();
          uVar1 = param_4;
          func_0x00010c242fe0();
          if (uVar3 == uVar1) {
            uVar3 = param_2;
            func_0x00010c243600();
            uVar1 = param_4;
            func_0x00010c243600();
            if (uVar3 == uVar1) {
              uVar3 = param_2;
              func_0x00010c25a8c0();
              uVar1 = param_4;
              func_0x00010c25a8c0();
              if (uVar3 == uVar1) {
                uVar3 = param_2;
                func_0x00010c0c9600();
                uVar1 = param_4;
                func_0x00010c0c9600();
                if (uVar3 == uVar1) {
                  uVar3 = param_2;
                  func_0x00010bf7f0a0();
                  uVar1 = param_4;
                  func_0x00010bf7f0a0();
                  if (uVar3 == uVar1) {
                    uVar1 = param_2;
                    func_0x00010c264ea0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar2 = param_4;
                    func_0x00010c264ea0(param_4);
                    _objc_retainAutoreleasedReturnValue();
                    uVar3 = uVar1;
                    func_0x00010bd86de8(uVar1,uVar2);
                    _objc_release(uVar2);
                    _objc_release(uVar1);
                    if ((int)uVar3 == 0) goto LAB_108baaa7c;
                    func_0x00010c123f40(param_2);
                    dVar4 = param_1;
                    func_0x00010c123f40(param_4);
                    if (param_1 == dVar4) {
                      func_0x00010c104760(param_2);
                      dVar5 = dVar4;
                      func_0x00010c104760(param_4);
                      if (dVar4 == dVar5) {
                        uVar1 = param_2;
                        func_0x00010bfb2440();
                        _objc_retainAutoreleasedReturnValue();
                        uVar2 = param_4;
                        func_0x00010bfb2440(param_4);
                        _objc_retainAutoreleasedReturnValue();
                        uVar3 = uVar1;
                        func_0x00010bd86de8(uVar1,uVar2);
                        _objc_release(uVar2);
                        _objc_release(uVar1);
                        if ((int)uVar3 == 0) goto LAB_108baaa7c;
                        func_0x00010c0c2f80(param_2);
                        dVar4 = dVar5;
                        func_0x00010c0c2f80(param_4);
                        if (dVar5 == dVar4) {
                          func_0x00010c0c1f60(param_2);
                          dVar5 = dVar4;
                          func_0x00010c0c1f60(param_4);
                          if (dVar4 == dVar5) {
                            uVar1 = param_2;
                            func_0x00010c0da7e0();
                            _objc_retainAutoreleasedReturnValue();
                            uVar2 = param_4;
                            func_0x00010c0da7e0(param_4);
                            _objc_retainAutoreleasedReturnValue();
                            uVar3 = uVar1;
                            func_0x00010bd86de8(uVar1,uVar2);
                            _objc_release(uVar2);
                            _objc_release(uVar1);
                            if ((int)uVar3 == 0) goto LAB_108baaa7c;
                            func_0x00010c0da7a0(param_2);
                            _objc_retainAutoreleasedReturnValue();
                            uVar1 = param_4;
                            func_0x00010c0da7a0(param_4);
                            _objc_retainAutoreleasedReturnValue();
                            uVar3 = param_2;
                            func_0x00010bd86de8(param_2,uVar1);
                            uVar2 = param_2;
                            goto LAB_108baabc0;
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
    }
  }
LAB_108baaa70:
  uVar3 = 0;
LAB_108baaa7c:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 108baaf48; end: 108baaf4f; -[SCUnlockableSwipeInteraction withAttachmentOpen] */

undefined1 FUN_108baaf48(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108baaf50; end: 108baaf57; -[SCUnlockableSwipeInteraction setWithAttachmentOpen:] */

void FUN_108baaf50(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108baaf58; end: 108baaf5f; -[SCUnlockableSwipeInteraction attachmentType] */

undefined8 FUN_108baaf58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108baaf60; end: 108baaf8f; -[SCUnlockableSwipeInteraction setAttachmentType:] */

void FUN_108baaf60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108baaf90; end: 108baaf97; -[SCUnlockableSwipeInteraction attachmentInteraction] */

undefined8 FUN_108baaf90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108baaf98; end: 108baafc7; -[SCUnlockableSwipeInteraction setAttachmentInteraction:] */

void FUN_108baaf98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108baafc8; end: 108baafcf; -[SCUnlockableSwipeInteraction unlockableTrackInfo] */

undefined8 FUN_108baafc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108baafd0; end: 108baafff; -[SCUnlockableSwipeInteraction setUnlockableTrackInfo:] */

void FUN_108baafd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bab000; end: 108bab007; -[SCUnlockableSwipeInteraction unlockableId] */

undefined8 FUN_108bab000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108bab008; end: 108bab00f; -[SCUnlockableSwipeInteraction setUnlockableId:] */

void FUN_108bab008(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108bab010; end: 108bab017; -[SCUnlockableSwipeInteraction sequenceNumber] */

undefined8 FUN_108bab010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108bab018; end: 108bab01f; -[SCUnlockableSwipeInteraction setSequenceNumber:] */

void FUN_108bab018(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108bab020; end: 108bab027; -[SCUnlockableSwipeInteraction indexPosition] */

undefined8 FUN_108bab020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108bab028; end: 108bab02f; -[SCUnlockableSwipeInteraction setIndexPosition:] */

void FUN_108bab028(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 108bab030; end: 108bab037; -[SCUnlockableSwipeInteraction snapSendCount] */

undefined8 FUN_108bab030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108bab038; end: 108bab03f; -[SCUnlockableSwipeInteraction setSnapSendCount:] */

void FUN_108bab038(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 108bab040; end: 108bab047; -[SCUnlockableSwipeInteraction snapTakenCount] */

undefined8 FUN_108bab040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108bab048; end: 108bab04f; -[SCUnlockableSwipeInteraction setSnapTakenCount:] */

void FUN_108bab048(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 108bab050; end: 108bab057; -[SCUnlockableSwipeInteraction storyPostCount] */

undefined8 FUN_108bab050(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108bab058; end: 108bab05f; -[SCUnlockableSwipeInteraction setStoryPostCount:] */

void FUN_108bab058(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 108bab060; end: 108bab067; -[SCUnlockableSwipeInteraction memoriesSaveCount] */

undefined8 FUN_108bab060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108bab068; end: 108bab06f; -[SCUnlockableSwipeInteraction setMemoriesSaveCount:] */

void FUN_108bab068(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 108bab070; end: 108bab077; -[SCUnlockableSwipeInteraction directSnapSendRecipients] */

undefined8 FUN_108bab070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108bab078; end: 108bab07f; -[SCUnlockableSwipeInteraction setDirectSnapSendRecipients:] */

void FUN_108bab078(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}


