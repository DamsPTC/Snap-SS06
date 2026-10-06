/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10903bb18; end: 10903bb1b; -[SCLensEffectQueuePerformer performUnsafeBlockAndWaitWithInfo:block:completion:] */

void FUN_10903bb18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f9190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_performUnsafeBlockV2WithInfo_blo_11261be80);
  return;
}



/* Entry: 10903bb1c; end: 10903bb37; -[SCLensEffectQueuePerformer isCurrentPerformer] */

undefined8 FUN_10903bb1c(long param_1)

{
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 8));
  return 1;
}



/* Entry: 10903bb38; end: 10903bbd3; -[SCLensEffectQueuePerformer _makeBlock:] */

void FUN_10903bb38(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  ppuVar1 = &puStack_50;
  _objc_retain(param_3);
  if (param_3 == 0) {
    ppuVar1 = &PTR___NSConcreteGlobalBlock_110ad5d70;
  }
  else {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10903bbd8;
    puStack_38 = &UNK_11084aaa8;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    _objc_retainBlock(&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10903bbd4; end: 10903bbd7;  */

void FUN_10903bbd4(void)

{
  return;
}



/* Entry: 10903bbd8; end: 10903bc2b;  */

void FUN_10903bbd8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0x30) == '\x01') {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10903bc2c; end: 10903bd1f; -[SCLensEffectQueuePerformer _makeUnsafeBlock:blockInfo:completion:] */

void FUN_10903bc2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    ppuVar1 = &PTR___NSConcreteGlobalBlock_110ad5d90;
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10903bd24;
    puStack_58 = &UNK_1108451b8;
    uStack_50 = param_1;
    _objc_retain(param_3);
    lStack_40 = param_3;
    _objc_retain(param_4);
    uStack_48 = param_4;
    _objc_retain(param_5);
    uStack_38 = param_5;
    _objc_retainBlock(&puStack_70);
    _objc_release(uStack_38);
    _objc_release(uStack_48);
    _objc_release(lStack_40);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10903bd20; end: 10903bd23;  */

void FUN_10903bd20(void)

{
  return;
}



/* Entry: 10903bd24; end: 10903bdff;  */

void FUN_10903bd24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0x30) == '\x01') {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10903be00;
    puStack_58 = &UNK_1108451b8;
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = uVar2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uStack_48 = uVar3;
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x00010c0f9460(lVar1,param_2,&puStack_70);
    _objc_release(lVar1);
    _objc_release(uStack_38);
    _objc_release(uStack_48);
    _objc_release(uStack_40);
  }
  return;
}



/* Entry: 10903be00; end: 10903be0f;  */

void FUN_10903be00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed0490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__tryToExecuteUnsafeBlock_blockIn_112591ac8,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10903be10; end: 10903c12b; -[SCLensEffectQueuePerformer _tryToExecuteUnsafeBlock:blockInfo:completion:] */

void FUN_10903be10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c075f80();
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x10));
    func_0x00010c123600(param_4);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    dVar8 = 1.60807493534087e-314;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10903c12c;
    puStack_80 = &UNK_110841fb0;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    lVar2 = 0;
    uStack_78 = param_4;
    func_0x000107c27d90(0,&puStack_98);
    func_0x00010c09ac00(*(undefined8 *)(param_1 + 0x10));
    _dispatch_time(0,(long)(dVar8 * 1000000000.0));
    func_0x000107c27d84();
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  puVar3 = PTR_PTR_1126db568;
  if (*(char *)(param_1 + 0x31) == '\x01') {
    func_0x00010c142e40();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(char *)(param_1 + 0x32) == '\x01') {
    func_0x00010c142e60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c142e20();
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar2 != 0) {
    _dispatch_block_cancel(lVar2);
  }
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x00010c08fa60();
    if ((puVar4 == (undefined *)0x0) || (puVar4 = puVar5, func_0x00010c0720c0(), (int)puVar4 == 0))
    {
      func_0x00010c0a4000(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      puVar4 = puVar3;
      func_0x00010c292820(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010c292820(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010bf2f5a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf72ca0();
      _objc_release(param_1);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
  }
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,puVar3);
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10903c12c; end: 10903c183;  */

void FUN_10903c12c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf31000(0x4008000000000000,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9880(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10903c184; end: 10903c19b; -[SCLensEffectQueuePerformer delegate] */

void FUN_10903c184(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10903c19c; end: 10903c1a7; -[SCLensEffectQueuePerformer setDelegate:] */

void FUN_10903c19c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10903c1a8; end: 10903c1bf; -[SCLensEffectQueuePerformer cancelationDelegate] */

void FUN_10903c1a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10903c1c0; end: 10903c1cb; -[SCLensEffectQueuePerformer setCancelationDelegate:] */

void FUN_10903c1c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10903c1cc; end: 10903c1d3; -[SCLensEffectQueuePerformer performer] */

undefined8 FUN_10903c1cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10903c1d4; end: 10903c237; -[SCLensEffectQueuePerformer .cxx_destruct] */

void FUN_10903c1d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10903c238; end: 10903c333; -[SCLensEffectProcessorConfiguration initWithResourcePath:userDataPath:configurationProvider:isHDLensRenderingEnabled:isInputRotated:screenScale:] */

undefined1 *
FUN_10903c238(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fffd0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10903c334; end: 10903c357; -[SCLensEffectProcessorConfiguration copyWithZone:] */

undefined8 FUN_10903c334(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10903c358; end: 10903c40f; -[SCLensEffectProcessorConfiguration hash] */

undefined8 * FUN_10903c358(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar7 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  lStack_30 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  puVar4 = &uStack_58;
  uStack_48 = uVar2;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10903c4f8:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10903c504;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))))) {
      fVar10 = ABS(*(float *)((long)puVar4 + 0xc) - *(float *)((long)param_3 + 0xc));
      fVar9 = ABS(*(float *)((long)puVar4 + 0xc) + *(float *)((long)param_3 + 0xc)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar10) && (bVar1 = false, !NAN(fVar10) && !NAN(fVar9))) {
        bVar1 = fVar10 < fVar9;
      }
      if (((bVar1) &&
          ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[4];
        if (puVar8 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_10903c504;
        }
        goto LAB_10903c4f8;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10903c504:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10903c410; end: 10903c51f; -[SCLensEffectProcessorConfiguration isEqual:] */

long FUN_10903c410(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10903c4f8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10903c504;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      fVar6 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
      fVar5 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10903c504;
        }
        goto LAB_10903c4f8;
      }
    }
    lVar4 = 0;
  }
LAB_10903c504:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10903c520; end: 10903c527; -[SCLensEffectProcessorConfiguration resourcePath] */

undefined8 FUN_10903c520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10903c528; end: 10903c52f; -[SCLensEffectProcessorConfiguration userDataPath] */

undefined8 FUN_10903c528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10903c530; end: 10903c537; -[SCLensEffectProcessorConfiguration configurationProvider] */

undefined8 FUN_10903c530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10903c538; end: 10903c53f; -[SCLensEffectProcessorConfiguration isHDLensRenderingEnabled] */

undefined1 FUN_10903c538(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10903c540; end: 10903c547; -[SCLensEffectProcessorConfiguration isInputRotated] */

undefined1 FUN_10903c540(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10903c548; end: 10903c54f; -[SCLensEffectProcessorConfiguration screenScale] */

undefined4 FUN_10903c548(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10903c550; end: 10903c58b; -[SCLensEffectProcessorConfiguration .cxx_destruct] */

void FUN_10903c550(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10903c58c; end: 10903c5db; -[SCLensEffectApplicatorConfiguration initWithAsyncApplication:keepEffectUntilLoaded:] */

void FUN_10903c58c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fffd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 10903c5dc; end: 10903c5ff; -[SCLensEffectApplicatorConfiguration copyWithZone:] */

undefined8 FUN_10903c5dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10903c600; end: 10903c65b; -[SCLensEffectApplicatorConfiguration hash] */

ulong * FUN_10903c600(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(char *)((long)puVar1 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10903c65c; end: 10903c6f3; -[SCLensEffectApplicatorConfiguration isEqual:] */

bool FUN_10903c65c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10903c6f4; end: 10903c6fb; -[SCLensEffectApplicatorConfiguration asyncApplication] */

undefined1 FUN_10903c6f4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10903c6fc; end: 10903c703; -[SCLensEffectApplicatorConfiguration keepEffectUntilLoaded] */

undefined1 FUN_10903c6fc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10903c704; end: 10903c74b; -[SCLensEffectConcurrentProcessingStrategyConfiguration initWithMaxAsyncFrameCount:] */

void FUN_10903c704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fffe0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10903c74c; end: 10903c76f; -[SCLensEffectConcurrentProcessingStrategyConfiguration copyWithZone:] */

undefined8 FUN_10903c74c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10903c770; end: 10903c77f; -[SCLensEffectConcurrentProcessingStrategyConfiguration hash] */

long FUN_10903c770(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10903c780; end: 10903c807; -[SCLensEffectConcurrentProcessingStrategyConfiguration isEqual:] */

bool FUN_10903c780(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10903c808; end: 10903c80f; -[SCLensEffectConcurrentProcessingStrategyConfiguration maxAsyncFrameCount] */

undefined8 FUN_10903c808(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10903c810; end: 10903c88b; +[SCLensNativeMetrics descriptor] */

undefined * FUN_10903c810(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be27a0,
                        &PTR____CFConstantStringClassReference_110f1c758,&PTR_DAT_1132bfe20,
                        &PTR_s_duration_1132bfe38,0x3d,0x108,0x1c);
    func_0x00010c2289e0();
    puRam0000000113730750 = puVar1;
  }
  return puRam0000000113730750;
}



/* Entry: 10903c88c; end: 10903caf3;  */

undefined *
FUN_10903c88c(undefined8 param_1,undefined **param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined *param_6,undefined8 *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_2;
  puVar11 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_5;
  if (param_5 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = param_6;
  if (param_6 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_opt_new();
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (param_6 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar7);
    if ((long)param_2 - 1U < 7) {
      ppuVar13 = (undefined **)(&PTR_PTR_110ad5db0)[(long)param_2 - 1U];
    }
    else {
      ppuVar13 = &PTR____CFConstantStringClassReference_110f1c878;
    }
    _objc_retain(ppuVar13);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110f1c898;
    }
    else {
      ppuVar6 = ppuVar7;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = &PTR____CFConstantStringClassReference_110f1c8d8;
    puVar3 = puVar2;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(ppuVar6);
    _objc_release(ppuVar13);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      _objc_retain(ppuVar10);
      _objc_retain(puVar3);
      _objc_retain(puVar11);
      if (((ulong)ppuVar7[1] & 1) == 0) {
        func_0x00010beb0760(ppuVar7);
      }
      ppuVar13 = ppuVar10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar13 == (undefined **)0x0) {
        if (param_7 != (undefined8 *)0x0) {
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = 200;
          FUN_10903c88c(200,&PTR____CFConstantStringClassReference_110f78ef8,puVar5,puVar11,ppuVar7,
                        0);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_7 = uVar9;
          _objc_release(puVar5);
        }
      }
      else {
        ppuVar6 = ppuVar13;
        func_0x00010c067ec0(ppuVar13);
        _glBindFramebuffer(0x8d40,ppuVar6);
        func_0x00010c28fd20(puVar3);
        _glActiveTexture(0x84c5);
        _glBindTexture(0xde1,param_2);
        _glTexParameteri(0xde1,0x2801,0x2601);
        _glTexParameteri(0xde1,0x2800,0x2601);
        _glTexParameteri(0xde1,0x2802,0x812f);
        _glTexParameteri(0xde1,0x2803,0x812f);
        _glUniform1i(*(undefined4 *)(ppuVar7 + 2),5);
        _glActiveTexture(0x84c4);
        ppuVar6 = ppuVar10;
        func_0x00010c0e00e0(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar6;
        func_0x00010c067ec0();
        _glBindTexture(0xde1,ppuVar8);
        _objc_release(ppuVar6);
        _glTexParameteri(0xde1,0x2801,0x2601);
        _glTexParameteri(0xde1,0x2800,0x2601);
        _glTexParameteri(0xde1,0x2802,0x812f);
        _glTexParameteri(0xde1,0x2803,0x812f);
        _glUniform1i(*(undefined4 *)((long)ppuVar7 + 0xc),4);
      }
      _objc_release(ppuVar13);
      _objc_release(puVar11);
      _objc_release(puVar3);
      _objc_release(ppuVar10);
      return (undefined *)(ulong)(ppuVar13 != (undefined **)0x0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 10903caf4; end: 10903cc6b;  */

undefined * FUN_10903caf4(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 in_x5;
  undefined8 *in_x6;
  long lVar9;
  undefined **ppuVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 - 1U < 7) {
    ppuVar10 = (undefined **)(&PTR_PTR_110ad5db0)[param_1 - 1U];
  }
  else {
    ppuVar10 = &PTR____CFConstantStringClassReference_110f1c878;
  }
  _objc_retain(ppuVar10);
  if (param_2 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f1c898;
  }
  else {
    ppuVar1 = param_2;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110f1c8d8;
  puVar8 = puVar3;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  _objc_retain(puVar8);
  _objc_retain(in_x5);
  if (((ulong)param_2[1] & 1) == 0) {
    func_0x00010beb0760(param_2);
  }
  ppuVar10 = ppuVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar10 == (undefined **)0x0) {
    if (in_x6 != (undefined8 *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 200;
      FUN_10903c88c(200,&PTR____CFConstantStringClassReference_110f78ef8,puVar4,in_x5,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *in_x6 = uVar6;
      _objc_release(puVar4);
    }
  }
  else {
    ppuVar1 = ppuVar10;
    func_0x00010c067ec0(ppuVar10);
    _glBindFramebuffer(0x8d40,ppuVar1);
    func_0x00010c28fd20(puVar8);
    _glActiveTexture(0x84c5);
    _glBindTexture(0xde1,param_1);
    _glTexParameteri(0xde1,0x2801,0x2601);
    _glTexParameteri(0xde1,0x2800,0x2601);
    _glTexParameteri(0xde1,0x2802,0x812f);
    _glTexParameteri(0xde1,0x2803,0x812f);
    _glUniform1i(*(undefined4 *)(param_2 + 2),5);
    _glActiveTexture(0x84c4);
    ppuVar1 = ppuVar7;
    func_0x00010c0e00e0(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar1;
    func_0x00010c067ec0();
    _glBindTexture(0xde1,ppuVar5);
    _objc_release(ppuVar1);
    _glTexParameteri(0xde1,0x2801,0x2601);
    _glTexParameteri(0xde1,0x2800,0x2601);
    _glTexParameteri(0xde1,0x2802,0x812f);
    _glTexParameteri(0xde1,0x2803,0x812f);
    _glUniform1i(*(undefined4 *)((long)param_2 + 0xc),4);
  }
  _objc_release(ppuVar10);
  _objc_release(in_x5);
  _objc_release(puVar8);
  _objc_release(ppuVar7);
  return (undefined *)(ulong)(ppuVar10 != (undefined **)0x0);
}



/* Entry: 10903cc6c; end: 10903cea7; -[SCImageProcessLensCommandDrawRGBAction executeWithContext:processedTexture:program:lensId:error:] */

bool FUN_10903cc6c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010beb0760(param_1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (param_7 != (undefined8 *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 200;
      FUN_10903c88c(200,&PTR____CFConstantStringClassReference_110f78ef8,puVar4,param_6,param_1,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_7 = uVar5;
      _objc_release(puVar4);
    }
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067ec0(lVar1);
    _glBindFramebuffer(0x8d40,lVar2);
    func_0x00010c28fd20(param_5);
    _glActiveTexture(0x84c5);
    _glBindTexture(0xde1,param_4);
    _glTexParameteri(0xde1,0x2801,0x2601);
    _glTexParameteri(0xde1,0x2800,0x2601);
    _glTexParameteri(0xde1,0x2802,0x812f);
    _glTexParameteri(0xde1,0x2803,0x812f);
    _glUniform1i(*(undefined4 *)(param_1 + 0x10),5);
    _glActiveTexture(0x84c4);
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067ec0();
    _glBindTexture(0xde1,lVar3);
    _objc_release(lVar2);
    _glTexParameteri(0xde1,0x2801,0x2601);
    _glTexParameteri(0xde1,0x2800,0x2601);
    _glTexParameteri(0xde1,0x2802,0x812f);
    _glTexParameteri(0xde1,0x2803,0x812f);
    _glUniform1i(*(undefined4 *)(param_1 + 0xc),4);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 10903cea8; end: 10903ceb3; -[SCImageProcessLensCommandDrawRGBAction fragmentShaderString] */

undefined ** FUN_10903cea8(void)

{
  return &PTR____CFConstantStringClassReference_110f1c8f8;
}



/* Entry: 10903ceb4; end: 10903cf23; -[SCImageProcessLensCommandDrawRGBAction _setupTexturesWithProgram:] */

void FUN_10903ceb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c117700();
  uVar1 = (undefined4)uVar2;
  _glGetUniformLocation();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar2 = param_3;
  func_0x00010c117700();
  _objc_release(param_3);
  _glGetUniformLocation(uVar2,&UNK_10f548e66);
  *(int *)(param_1 + 0x10) = (int)uVar2;
  return;
}



/* Entry: 10903cf24; end: 10903d1e7; -[SCImageProcessApplyLensCommandV2 initWithLensMode:lensProcessingCore:fpsTracker:dirtyFrameProvider:entryPointTracker:lensCrashLogger:lensId:isVideo:isSnapEditor:isExportMode:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10903cf24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126fffe8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithLensProcessingCore_fpsTr_1125e6f00,param_4,param_5,
                      param_6,param_7,param_8,param_9,(undefined1)param_10);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127800b8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127800bc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127800c0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127800c4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127800c8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127800cc;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127800d0;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127800d4) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127800d8) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127800dc) = param_10._2_1_;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127800e0) = 5;
    _objc_initWeak(auStack_78,puVar1);
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c0e33e0(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10903d1e8; end: 10903d22f;  */

void FUN_10903d1e8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb17a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10903d230; end: 10903d3c3; -[SCImageProcessApplyLensCommandV2 initWithCommand:isExportMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10903d230(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_3 + _DAT_1127800b8);
  uVar4 = *(undefined8 *)(param_3 + _DAT_1127800bc);
  uVar5 = *(undefined8 *)(param_3 + _DAT_1127800c0);
  uVar6 = *(undefined8 *)(param_3 + _DAT_1127800c4);
  uVar7 = *(undefined8 *)(param_3 + _DAT_1127800c8);
  uVar8 = *(undefined8 *)(param_3 + _DAT_1127800cc);
  lVar1 = param_3;
  func_0x00010c094660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025100(param_1,param_2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,lVar2,
                      *(undefined1 *)(param_3 + _DAT_1127800d4));
  _objc_retain();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((param_4 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0765a0(param_3);
    func_0x00010c1b22c0(param_1,param_2,lVar1);
    lVar1 = param_3;
    func_0x00010c0763e0(param_3);
    func_0x00010c1b2280(param_1,param_2,lVar1);
  }
  lVar1 = param_3;
  func_0x00010c08fb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba8a0(param_1,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(param_1,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_1);
  return param_1;
}



/* Entry: 10903d3c4; end: 10903d527; -[SCImageProcessApplyLensCommandV2 initWithCommand:lensMode:lensProcessingCore:isExportMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10903d3c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(param_3 + _DAT_1127800c0);
  uVar4 = *(undefined8 *)(param_3 + _DAT_1127800c4);
  uVar5 = *(undefined8 *)(param_3 + _DAT_1127800c8);
  uVar6 = *(undefined8 *)(param_3 + _DAT_1127800cc);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025100(param_1,param_2,param_4,param_5,uVar3,uVar4,uVar5,uVar6,lVar2,
                      *(undefined1 *)(param_3 + _DAT_1127800d4));
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_retain(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08fb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1ba8a0(param_1,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  return param_1;
}



/* Entry: 10903d528; end: 10903d607; -[SCImageProcessApplyLensCommandV2 lensIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903d528(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  puStack_38 = PTR_PTR_1126fffe8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_lensIds_112602ba8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + _DAT_1127800b8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf8cda0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf51e00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar3 = lVar4;
  func_0x00010c08fa60();
  puVar5 = (undefined1 *)plVar1;
  if (lVar3 == 0) {
    _objc_retain(plVar1);
  }
  else {
    func_0x00010c174bc0(plVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar4);
  _objc_release(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10903d608; end: 10903d66f; -[SCImageProcessApplyLensCommandV2 isDynamicLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10903d608(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127800b8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8ccc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07a800();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10903d670; end: 10903d6d7; -[SCImageProcessApplyLensCommandV2 isAnimatedLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10903d670(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127800b8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8ccc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07a7e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10903d6d8; end: 10903d71f; -[SCImageProcessApplyLensCommandV2 isEffectLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10903d6d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127800b8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071320();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10903d720; end: 10903d767; -[SCImageProcessApplyLensCommandV2 isEffectApplied] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10903d720(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127800b8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071300();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10903d768; end: 10903d7cf; -[SCImageProcessApplyLensCommandV2 isResourcesDownloaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10903d768(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127800b8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8ccc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c072d20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10903d7d0; end: 10903d7d3; -[SCImageProcessApplyLensCommandV2 isLoaded] */

void FUN_10903d7d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0765b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isLensLoaded_1125fb378);
  return;
}



/* Entry: 10903d7d4; end: 10903d8af; -[SCImageProcessApplyLensCommandV2 loadWithContext:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903d7d4(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  iVar1 = (int)&uStack_40;
  puStack_38 = PTR_PTR_1126fffe8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_loadWithContext_error__112604c28);
  if (iVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c0763e0();
    if ((uVar2 & 1) == 0) {
      func_0x00010c1b2280(param_1);
      if ((((*(byte *)(param_1 + (long)_DAT_1127800dc) & 1) == 0) &&
          (*(char *)(param_1 + (long)_DAT_1127800d8) != '\x01')) &&
         (((*(byte *)(param_1 + (long)_DAT_1127800d4) & 1) != 0 ||
          (uVar2 = param_1, func_0x00010c07c780(), (int)uVar2 == 0)))) {
        func_0x00010bdce080(param_1);
      }
      else {
        func_0x00010bdce0a0(param_1);
      }
    }
    if ((*(byte *)(param_1 + (long)_DAT_1127800d4) & 1) == 0) {
      func_0x00010c0765a0(param_1);
    }
  }
  return;
}



/* Entry: 10903d8b0; end: 10903d913; -[SCImageProcessApplyLensCommandV2 unloadWithError:] */

undefined1 * FUN_10903d8b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fffe8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_unloadWithError__11267dcf0);
  if ((int)puVar1 != 0) {
    func_0x00010c1b2280(param_1);
    func_0x00010c1b22c0(param_1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10903d914; end: 10903d94f; -[SCImageProcessApplyLensCommandV2 clearEffect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903d914(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127800b8);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10903d950; end: 10903d973; -[SCImageProcessApplyLensCommandV2 copyWithZone:] */

undefined8 FUN_10903d950(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10903d974; end: 10903da77; -[SCImageProcessApplyLensCommandV2 _setupWithLensMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903d974(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010bf74540();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127800e4);
  *(undefined8 *)(param_1 + _DAT_1127800e4) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10903da78; end: 10903daa3;  */

void FUN_10903da78(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10903daa4; end: 10903db57; -[SCImageProcessApplyLensCommandV2 _didDisableLensMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903daa4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c1b22c0(param_1,param_2,0);
  func_0x00010c1b2280(param_1);
  if ((*(byte *)(param_1 + _DAT_1127800dc) & 1) != 0) {
    return;
  }
  lVar4 = (long)_DAT_1127800c4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  lVar1 = param_1;
  func_0x00010c094660(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138660(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0bb410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_markCurrentFrameAsDirty_11260c718);
  return;
}



/* Entry: 10903db58; end: 10903dcf3; -[SCImageProcessApplyLensCommandV2 _applyEffect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903db58(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010c160640(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c094660(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250960(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_initWeak(auStack_48,param_1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127800b8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010beefda0();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = puVar2;
  _objc_copyWeak(auStack_58,auStack_48);
  func_0x00010c297260(uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10903dcf4; end: 10903deb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903dcf4(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010bf94200(puVar1);
    _objc_release(puVar1);
    puVar1 = (undefined *)(param_1 + 0x20);
    _objc_loadWeakRetained();
    if (puVar1 == (undefined *)0x0) goto LAB_10903de8c;
    func_0x00010c1b22c0(puVar1);
    func_0x00010c1b2280(puVar1);
    puVar3 = puVar1;
    func_0x00010c160640(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c132ce0();
  }
  else {
    func_0x00010bf941e0(puVar1);
    _objc_release(puVar1);
    puVar1 = (undefined *)(param_1 + 0x20);
    _objc_loadWeakRetained();
    if (puVar1 == (undefined *)0x0) goto LAB_10903de8c;
    func_0x00010c1ba8a0(puVar1);
    func_0x00010c1b22c0(puVar1);
    lVar4 = (long)_DAT_1127800c4;
    func_0x00010c0bb420(*(undefined8 *)(puVar1 + lVar4));
    puVar3 = puVar1;
    func_0x00010bf6b020(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c091880();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar2 = param_2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010be3f340(puVar1);
    func_0x00010c183960(*(undefined8 *)(puVar1 + lVar4));
  }
  _objc_release(puVar3);
LAB_10903de8c:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10903deb8; end: 10903e277; -[SCImageProcessApplyLensCommandV2 _applyEffectAndWaitWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903deb8(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  char cStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  puVar2 = &UNK_10f548eee;
  func_0x000107c31820(&UNK_10f548eee);
  _objc_initWeak(auStack_70,param_1);
  lVar3 = param_1;
  func_0x00010c160640();
  _objc_retainAutoreleasedReturnValue();
  cVar1 = *(char *)(param_1 + _DAT_1127800dc);
  uVar7 = *(undefined8 *)(param_1 + _DAT_1127800c4);
  _objc_retain(uVar7);
  lVar4 = param_1;
  func_0x00010c094660(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250960(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar4);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10903e278;
  uStack_80 = 0x10903e288;
  uStack_78 = 0;
  lVar8 = (long)_DAT_1127800b8;
  lVar4 = *(long *)(param_1 + lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    func_0x00010c1b22c0(param_1);
    func_0x00010c1b2280(param_1);
    uVar5 = 2;
    FUN_10903caf4(2,param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puStack_98[5];
    puStack_98[5] = uVar5;
    _objc_release(uVar9);
    func_0x00010c132ce0(lVar3);
    if (param_3 != (long *)0x0) {
      lVar4 = puStack_98[5];
      _objc_retainAutorelease();
      *param_3 = lVar4;
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + _DAT_1127800e0);
    lVar4 = 0;
    _dispatch_semaphore_create();
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    if (cVar1 == '\0') {
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010beefda0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfb4940();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar5);
    _objc_copyWeak(auStack_b8,auStack_70);
    _objc_retain(lVar3);
    _objc_retain(lVar4);
    cStack_a8 = cVar1;
    _objc_retain(uVar7);
    uStack_b0 = uVar9;
    func_0x00010c297260(uVar6);
    uVar5 = 0;
    _dispatch_time(0,3000000000);
    lVar8 = lVar4;
    _dispatch_semaphore_wait(lVar4,uVar5);
    if (lVar8 != 0) {
      uVar5 = 3;
      FUN_10903caf4(3,param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = puStack_98[5];
      puStack_98[5] = uVar5;
      _objc_release(uVar9);
      func_0x00010c1b22c0(param_1);
      func_0x00010c1b2280(param_1);
    }
    if (param_3 != (long *)0x0) {
      lVar8 = puStack_98[5];
      if (lVar8 != 0) {
        _objc_retainAutorelease();
        *param_3 = lVar8;
      }
    }
    _objc_release(uVar7);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uVar6);
    _objc_release(lVar4);
  }
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_70);
  func_0x000107c31828(puVar2);
  return;
}



/* Entry: 10903e278; end: 10903e28f;  */

void FUN_10903e278(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10903e290; end: 10903e40f;  */

void FUN_10903e290(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = param_3;
    _objc_release(uVar2);
    lVar3 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1b22c0();
    _objc_release(lVar3);
    lVar3 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1b2280();
    _objc_release(lVar3);
    func_0x00010c132ce0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar3 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1ba8a0();
    _objc_release(lVar3);
    lVar3 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1b22c0();
    _objc_release(lVar3);
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      func_0x00010c0bb420(*(undefined8 *)(param_1 + 0x30));
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar3 = param_2;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      func_0x00010be3f340(*(undefined8 *)(param_1 + 0x38));
      func_0x00010c183960(*(undefined8 *)(param_1 + 0x30));
      _objc_release(puVar1);
    }
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10903e410; end: 10903e46b; -[SCImageProcessApplyLensCommandV2 _isContinuesRenderingRequiredFroLens:] */

long FUN_10903e410(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  _objc_retain();
  FUN_1090416c8();
  if (lVar1 == 2) {
    lVar1 = 0;
  }
  else if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c1379c0(param_3);
  }
  else {
    lVar1 = 1;
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10903e46c; end: 10903e47f; -[SCImageProcessApplyLensCommandV2 isLensLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10903e46c(long param_1)

{
  return *(byte *)(param_1 + _DAT_1127800b0) & 1;
}



/* Entry: 10903e480; end: 10903e48f; -[SCImageProcessApplyLensCommandV2 setIsLensLoaded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903e480(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127800b0) = param_3;
  return;
}



/* Entry: 10903e490; end: 10903e49f; -[SCImageProcessApplyLensCommandV2 lens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903e490(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_1127800e8,1);
  return;
}



/* Entry: 10903e4a0; end: 10903e4ab; -[SCImageProcessApplyLensCommandV2 setLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903e4a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10903e4ac; end: 10903e4bf; -[SCImageProcessApplyLensCommandV2 isLensActivating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10903e4ac(long param_1)

{
  return *(byte *)(param_1 + _DAT_1127800b4) & 1;
}



/* Entry: 10903e4c0; end: 10903e4cf; -[SCImageProcessApplyLensCommandV2 setIsLensActivating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903e4c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127800b4) = param_3;
  return;
}



/* Entry: 10903e4d0; end: 10903e57f; -[SCImageProcessApplyLensCommandV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903e4d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127800e8,0);
  _objc_storeStrong(param_1 + _DAT_1127800d0,0);
  _objc_storeStrong(param_1 + _DAT_1127800e4,0);
  _objc_storeStrong(param_1 + _DAT_1127800cc,0);
  _objc_storeStrong(param_1 + _DAT_1127800c8,0);
  _objc_storeStrong(param_1 + _DAT_1127800c4,0);
  _objc_storeStrong(param_1 + _DAT_1127800c0,0);
  _objc_storeStrong(param_1 + _DAT_1127800bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127800b8,0);
  return;
}



/* Entry: 10903e580; end: 10903e617; -[SCImageProcessCommandMapperV2 initWithSharedServices:] */

undefined1 * FUN_10903e580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ffff0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar2 + 8),param_3);
    *(undefined4 *)((long)puVar2 + 0x2c) = 0;
    puVar1 = PTR____NSArray0__struct_11034ab48;
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined **)((long)puVar2 + 0x18) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined **)((long)puVar2 + 0x20) = puVar1;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10903e618; end: 10903e6a7; -[SCImageProcessCommandMapperV2 lensModeProvider] */

void FUN_10903e618(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(char *)(param_1 + 0x28) == '\x01') && ((*(byte *)(param_1 + 0x29) & 1) != 0)) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c279fe0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0955a0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10903e6a8; end: 10903e717; -[SCImageProcessCommandMapperV2 lensProcessingCore] */

void FUN_10903e6a8(long param_1)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x28) == '\x01') && ((*(byte *)(param_1 + 0x29) & 1) != 0)) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c27a000();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c096120();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10903e718; end: 10903e773; -[SCImageProcessCommandMapperV2 isSupported:] */

uint FUN_10903e718(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c40e0;
  _objc_opt_class(PTR_PTR_1126c40e0);
  lVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  return (uint)(param_3 != 0) & (uint)lVar2;
}



/* Entry: 10903e774; end: 10903ed4f; -[SCImageProcessCommandMapperV2 unifiedCameraObjectCommandFromStackedContainer:commandContainerConfiguration:isVideo:] */

void FUN_10903e774(long param_1,undefined *param_2,long param_3,ulong param_4,byte param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x2c);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar8 = param_3;
  func_0x00010c08ea00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c140d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar8;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar8);
  lVar8 = param_3;
  func_0x00010c24d2c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar4);
  _objc_release(lVar8);
  func_0x00010befa160(puVar4);
  puVar7 = puVar4;
  func_0x00010c0ba200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    func_0x00010c094660();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar7;
    func_0x00010c072060();
    if (((ulong)puVar16 & 1) == 0) {
      _objc_release(lVar8);
    }
    else {
      uVar9 = param_4;
      func_0x00010c072520();
      _objc_release(lVar8);
      if ((uVar9 & 1) == 0) {
        puVar16 = *(undefined **)(param_1 + 0x10);
        _objc_retain(puVar16);
        goto LAB_10903ec94;
      }
    }
  }
  lVar17 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar17);
  lVar8 = lVar17;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar17);
      }
      uVar18 = *(ulong *)(lVar14 * 8);
      uVar9 = uVar18;
      func_0x00010c094660();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c069880();
      _objc_release(uVar9);
      if ((uVar10 & 1) == 0) {
        func_0x00010bf3b260(uVar18);
      }
      lVar14 = lVar14 + 1;
    } while (lVar8 != lVar14);
    lVar8 = lVar17;
    func_0x00010bf52a60();
  }
  _objc_release(lVar17);
  lVar8 = lVar6;
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar8 != 0) {
      lVar17 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar17);
      lVar8 = lVar17;
      func_0x00010bf52a60();
      lVar5 = lRam0000000000000000;
      while (lVar8 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(lVar17);
          }
          uVar18 = *(ulong *)(lVar14 * 8);
          uVar9 = uVar18;
          func_0x00010c094660();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c069880();
          _objc_release(uVar9);
          if ((uVar10 & 1) == 0) {
            func_0x00010bf3b260(uVar18);
          }
          lVar14 = lVar14 + 1;
        } while (lVar8 != lVar14);
        lVar8 = lVar17;
        func_0x00010bf52a60();
      }
      _objc_release(lVar17);
    }
  }
  puVar16 = puVar4;
  func_0x00010bf529e0();
  if ((undefined *)0x1 < puVar16) {
    uVar9 = param_4;
    func_0x00010c072520();
    *(char *)(param_1 + 0x28) = (char)uVar9;
    *(byte *)(param_1 + 0x29) = param_5;
    lVar8 = param_3;
    func_0x00010c24d2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126b9b28;
    func_0x00010c104740(PTR_PTR_1126b9b28);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be5d0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(lVar8);
    _objc_retain(lVar5);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar5;
    _objc_release(uVar11);
    lVar8 = param_1;
    func_0x00010be5d0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar8;
    _objc_release(uVar11);
    puVar16 = PTR_PTR_1126d9660;
    _objc_alloc();
    lVar17 = lVar5;
    func_0x00010bf09f80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffe00();
    puVar15 = (undefined8 *)(param_1 + 0x10);
    uVar11 = *puVar15;
    *puVar15 = puVar16;
    _objc_release(uVar11);
    _objc_release(lVar17);
    puVar16 = (undefined *)*puVar15;
    _objc_retain(puVar16);
    _objc_release(lVar8);
    _objc_release(lVar5);
    goto LAB_10903ec94;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar11);
  puVar16 = PTR____NSArray0__struct_11034ab48;
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = PTR____NSArray0__struct_11034ab48;
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar16;
  _objc_release(uVar11);
  puVar16 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  param_2 = PTR_PTR_1126c40c8;
  _objc_opt_class(PTR_PTR_1126c40c8);
  puVar12 = puVar16;
  _objc_opt_isKindOfClass(puVar16,param_2);
  puVar1 = puVar16;
  if (((ulong)puVar12 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar16);
  if ((param_5 & 1) == 0) {
    uVar9 = param_4;
    func_0x00010c072520();
    iVar3 = 0;
    if (puVar1 != (undefined *)0x0) {
      iVar3 = (int)uVar9;
    }
    if (iVar3 != 1) goto LAB_10903ec78;
    func_0x00010c071320();
    ppuVar2 = &PTR_PTR_1126c40e0;
    if ((int)puVar16 == 0) {
      ppuVar2 = &PTR_PTR_1126c40c8;
    }
    puVar16 = *ppuVar2;
    _objc_alloc(puVar16);
    func_0x00010bfffd20();
  }
  else {
LAB_10903ec78:
    puVar16 = puVar4;
    func_0x00010bfb1920(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
LAB_10903ec94:
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _os_unfair_lock_unlock(param_1 + 0x2c);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(param_1 + 0x2c);
    __Unwind_Resume(param_3);
    func_0x00010c094660(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_2;
    func_0x00010bf04a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 10903ed50; end: 10903ed97;  */

void FUN_10903ed50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094660(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10903ed98; end: 10903ee37; -[SCImageProcessCommandMapperV2 _mappedCommands:modeIdentifierPrefix:] */

void FUN_10903ed98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10903ee38;
  puStack_48 = &UNK_110ad5eb8;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bf43280(param_3,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10903ee38; end: 10903f05b;  */

void FUN_10903ee38(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  if (((*(char *)(*(long *)(param_1 + 0x20) + 0x28) == '\x01') &&
      ((*(byte *)(*(long *)(param_1 + 0x20) + 0x29) & 1) == 0)) &&
     (uVar1 = param_2, func_0x00010c071320(), (int)uVar1 != 0)) {
    puVar2 = PTR_PTR_1126c40e0;
    _objc_alloc(PTR_PTR_1126c40e0);
    func_0x00010bfffd20();
  }
  else {
    puVar2 = PTR_PTR_1126c40c8;
    _objc_retain(param_2);
    _objc_opt_class(puVar2);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    uVar1 = param_2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    uVar3 = param_2;
    _objc_release();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = PTR_PTR_1126c40e0;
    if ((uVar1 == 0) || (puVar2 = PTR_PTR_1126c40c8, *(long *)(param_1 + 0x28) == 0)) {
      _objc_alloc(puVar2);
      func_0x00010bfffd20();
    }
    else {
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0955a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_2;
      func_0x00010c094660(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bf04a20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c095560(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar3);
      _objc_release(uVar5);
      puVar2 = PTR_PTR_1126c40c8;
      _objc_alloc(PTR_PTR_1126c40c8);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c096120(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfffd40(puVar2);
      _objc_release(uVar5);
      _objc_release(uVar7);
      _objc_release(puVar4);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10903f05c; end: 10903f09f; -[SCImageProcessCommandMapperV2 .cxx_destruct] */

void FUN_10903f05c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10903f0a0; end: 10903f347; -[SCImageProcessLensCommandV2 initWithLensProcessingCore:fpsTracker:dirtyFrameProvider:entryPointTracker:lensCrashLogger:lensId:isVideo:isExportMode:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10903f0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puVar2 = PTR_PTR_1126dd098;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126d8a78;
  _objc_alloc(PTR_PTR_1126d8a78);
  puVar4 = puVar2;
  func_0x00010bfb68c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060ac0(puVar3);
  puStack_68 = PTR_PTR_1126ffff8;
  puVar5 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_initWithProgram__11253a1b0,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  if (puVar5 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_112780108;
    _objc_retain(puVar2);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar8);
    *(undefined **)((long)puVar5 + lVar8) = puVar2;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_11278010c;
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar8);
    *(undefined8 *)((long)puVar5 + lVar8) = param_3;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112780110;
    _objc_retain(param_4);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar8);
    *(undefined8 *)((long)puVar5 + lVar8) = param_4;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112780114;
    _objc_retain(param_5);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar8);
    *(undefined8 *)((long)puVar5 + lVar8) = param_5;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112780118;
    _objc_retain(param_6);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar8);
    *(undefined8 *)((long)puVar5 + lVar8) = param_6;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_11278011c;
    _objc_retain(param_7);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar8);
    *(undefined8 *)((long)puVar5 + lVar8) = param_7;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112780120;
    _objc_retain(param_11);
    uVar6 = *(undefined8 *)((long)puVar5 + lVar8);
    *(undefined8 *)((long)puVar5 + lVar8) = param_11;
    _objc_release(uVar6);
    uVar6 = param_8;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)puVar5 + (long)_DAT_112780124);
    *(undefined8 *)((long)puVar5 + (long)_DAT_112780124) = uVar6;
    _objc_release(uVar7);
    *(undefined1 *)((long)puVar5 + (long)_DAT_112780128) = (undefined1)param_9;
    *(undefined1 *)((long)puVar5 + (long)_DAT_11278012c) = param_9._1_1_;
    puVar1 = (undefined8 *)((long)puVar5 + (long)_DAT_112780130);
    _CMTimeMake(&uStack_88,0,600);
    puVar1[2] = uStack_78;
    puVar1[1] = uStack_80;
    *puVar1 = uStack_88;
    puVar3 = PTR_PTR_1126dd0a0;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar5 + (long)_DAT_112780134);
    *(undefined **)((long)puVar5 + (long)_DAT_112780134) = puVar3;
    _objc_release(uVar6);
  }
  _objc_release(puVar2);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10903f348; end: 10903f47b; -[SCImageProcessLensCommandV2 initWithCommand:isExportMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10903f348(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(param_3 + _DAT_11278010c);
  uVar4 = *(undefined8 *)(param_3 + _DAT_112780110);
  uVar5 = *(undefined8 *)(param_3 + _DAT_112780114);
  uVar6 = *(undefined8 *)(param_3 + _DAT_112780118);
  uVar7 = *(undefined8 *)(param_3 + _DAT_11278011c);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094660(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025460(param_1,param_2,uVar3,uVar4,uVar5,uVar6,uVar7,lVar2,
                      *(undefined1 *)(param_3 + _DAT_112780128));
  _objc_retain();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c18b5e0(param_1,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  return param_1;
}



/* Entry: 10903f47c; end: 10903f4ef; -[SCImageProcessLensCommandV2 lensIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10903f47c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112780124);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (lVar1 == 0) {
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10903f4f0; end: 10903f553; -[SCImageProcessLensCommandV2 commandName] */

void FUN_10903f4f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c094660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110f1c998);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10903f554; end: 10903f55b; -[SCImageProcessLensCommandV2 isDynamicLens] */

undefined8 FUN_10903f554(void)

{
  return 0;
}



/* Entry: 10903f55c; end: 10903f563; -[SCImageProcessLensCommandV2 isAnimatedLens] */

undefined8 FUN_10903f55c(void)

{
  return 0;
}



/* Entry: 10903f564; end: 10903f56b; -[SCImageProcessLensCommandV2 isEffectLoaded] */

undefined8 FUN_10903f564(void)

{
  return 1;
}



/* Entry: 10903f56c; end: 10903f573; -[SCImageProcessLensCommandV2 isEffectApplied] */

undefined8 FUN_10903f56c(void)

{
  return 1;
}



/* Entry: 10903f574; end: 10903f577; -[SCImageProcessLensCommandV2 clearEffect] */

void FUN_10903f574(void)

{
  return;
}



/* Entry: 10903f578; end: 10903f57f; -[SCImageProcessLensCommandV2 isGPUPass] */

undefined8 FUN_10903f578(void)

{
  return 1;
}



/* Entry: 10903f580; end: 10903f587; -[SCImageProcessLensCommandV2 isUnifiedCameraObjectCompatible] */

undefined8 FUN_10903f580(void)

{
  return 1;
}



/* Entry: 10903f588; end: 10903f58f; -[SCImageProcessLensCommandV2 isRenderingCompatible] */

undefined8 FUN_10903f588(void)

{
  return 1;
}



/* Entry: 10903f590; end: 10903f597; -[SCImageProcessLensCommandV2 isColorFilter] */

undefined8 FUN_10903f590(void)

{
  return 0;
}



/* Entry: 10903f598; end: 10903f59f; -[SCImageProcessLensCommandV2 isUnifiedCameraObjectExportable] */

undefined8 FUN_10903f598(void)

{
  return 1;
}



/* Entry: 10903f5a0; end: 10903f5a7; -[SCImageProcessLensCommandV2 isPixelBufferInputCompatible] */

undefined8 FUN_10903f5a0(void)

{
  return 1;
}


