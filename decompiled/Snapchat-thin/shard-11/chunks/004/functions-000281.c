/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108565390; end: 1085653bb; +[SCGrapheneSkipTranscodeMetric transcodeReason] */

void FUN_108565390(void)

{
  _objc_alloc(PTR_PTR_1126da078);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085653bc; end: 10856545b; -[SCGrapheneSkipTranscodeMetric description] */

void FUN_1085653bc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee2c98;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ee2c98,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fcce0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10856545c; end: 1085655a7; -[SCGrapheneRegistry skipTranscodeGraphene] */

void FUN_10856545c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1085654e4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372c400 != -1) {
    func_0x000107c27d9c(0x11372c400,&puStack_48);
  }
  uVar1 = uRam000000011372c3f8;
  _objc_retain(uRam000000011372c3f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085655a8; end: 108565633;  */

undefined1 * FUN_1085655a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126fcce8;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
    }
  }
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 108565634; end: 108565657; -[SCSnapVideoFilterInputParameters copyWithZone:] */

undefined8 FUN_108565634(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108565658; end: 1085656cb; -[SCSnapVideoFilterInputParameters hash] */

undefined8 * FUN_108565658(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108565750;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_108565750;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_108565750;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_108565750:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 1085656cc; end: 10856576b; -[SCSnapVideoFilterInputParameters isEqual:] */

long FUN_1085656cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108565750;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_108565750;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108565750;
    }
  }
  lVar3 = 1;
LAB_108565750:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10856576c; end: 108565777; -[SCSnapVideoFilterInputParameters .cxx_destruct] */

void FUN_10856576c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108565778; end: 108565863; -[SCSnapVideoFilterPersistModel initWithCoder:] */

undefined1 * FUN_108565778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fccf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108565864; end: 10856594b; -[SCSnapVideoFilterPersistModel initWithFilterState:transcodeFailureCount:multiSnapOverlayStates:crossPostToStoryInfoData:] */

undefined1 *
FUN_108565864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fccf0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10856594c; end: 10856596f; -[SCSnapVideoFilterPersistModel copyWithZone:] */

undefined8 FUN_10856594c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108565970; end: 1085659f7; -[SCSnapVideoFilterPersistModel encodeWithCoder:] */

void FUN_108565970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ee2cf8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ee2d18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ee2d38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ee2d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085659f8; end: 108565a7b; -[SCSnapVideoFilterPersistModel hash] */

undefined8 * FUN_1085659f8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108565b24:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108565b30;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[2] == param_3[2])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_108565b30;
          }
          goto LAB_108565b24;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108565b30:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108565a7c; end: 108565b4b; -[SCSnapVideoFilterPersistModel isEqual:] */

long FUN_108565a7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108565b24:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108565b30;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_108565b30;
          }
          goto LAB_108565b24;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108565b30:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108565b4c; end: 108565b53; -[SCSnapVideoFilterPersistModel filterState] */

undefined8 FUN_108565b4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108565b54; end: 108565b5b; -[SCSnapVideoFilterPersistModel transcodeFailureCount] */

undefined8 FUN_108565b54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108565b5c; end: 108565b63; -[SCSnapVideoFilterPersistModel multiSnapOverlayStates] */

undefined8 FUN_108565b5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108565b64; end: 108565b6b; -[SCSnapVideoFilterPersistModel crossPostToStoryInfoData] */

undefined8 FUN_108565b64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108565b6c; end: 108565ba7; -[SCSnapVideoFilterPersistModel .cxx_destruct] */

void FUN_108565b6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108565ba8; end: 108565e0f; -[SCTranscodingProcessorFactoryImpl initWithLogger:parameterProvider:targetTrajectoryFactory:backgroundTaskWrapper:audioProcessingSessionFactory:circumstanceEngine:spectaclesImageProcessCommandFactory:cameraConfiguration:previewAssetVideoProviderFactory:ippCommandProvider:] */

undefined8 *
FUN_108565ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126fccf8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108565e10; end: 108565ea7; -[SCTranscodingProcessorFactoryImpl createProcessorWithRequestInput:output:] */

void FUN_108565e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da118;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03f080();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108565ea8; end: 108565f37; -[SCTranscodingProcessorFactoryImpl .cxx_destruct] */

void FUN_108565ea8(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 108565f38; end: 108566013; -[SCVideoCompositionBuilder initWithVideoAssetMutator:mutatorOutput:runIPPThroughCustomCompositor:circumstanceEngine:] */

undefined1 *
FUN_108565f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fcd00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108566014; end: 10856604f; -[SCVideoCompositionBuilder buildCompositionOutput] */

void FUN_108566014(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x00010bfbefa0(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10),
                      &uStack_18,*(undefined1 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108566050; end: 10856608b; -[SCVideoCompositionBuilder .cxx_destruct] */

void FUN_108566050(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10856608c; end: 108566157; +[SCVideoReversePassthroughProcessor performer] */

void FUN_10856608c(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372c408 != -1) {
    func_0x000107c27d9c(0x11372c408,&PTR___NSConcreteGlobalBlock_110a55358);
  }
  uVar1 = uRam000000011372c410;
  _objc_retain(uRam000000011372c410);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108566158; end: 108566253; -[SCVideoReversePassthroughProcessor initWithSegment:outputURL:transcodingConfiguration:transcodingLogger:] */

undefined1 *
FUN_108566158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fcd08;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108566254; end: 10856665b; -[SCVideoReversePassthroughProcessor processWithCompletionHandler:] */

void FUN_108566254(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulong uVar10;
  ulong uVar11;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_5);
  puStack_d0 = &uStack_a0;
  uStack_a0 = 0;
  dVar7 = 1.02270250269256e-312;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10856665c;
  uStack_80 = 0x10856666c;
  uStack_78 = 0;
  if (*(long *)(param_3 + 8) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_3 + 8) + 8);
  }
  puStack_98 = puStack_d0;
  _objc_retain(uVar6);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_108566674;
  puStack_b0 = &UNK_11084e620;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1085666bc;
  puStack_d8 = &UNK_11084e6b0;
  puStack_a8 = puStack_d0;
  func_0x00010c0bc940(uVar6);
  _objc_release(uVar6);
  puVar1 = (undefined *)puStack_98[5];
  if (puVar1 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,0,puVar4);
  }
  else {
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_5 + 0x10))(param_5,0,puVar5);
    }
    else {
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x000107c31298();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfad300();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bdc2c60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
      func_0x000107c31920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d5d20(puVar4);
      func_0x00010c106f40(&dStack_120,puVar4);
      dVar8 = dStack_110;
      func_0x00010bf99700(puVar4);
      dVar9 = dStack_110 * param_2 + dStack_120 * dVar7;
      dVar7 = dStack_108 * param_2 + dStack_118 * dVar7;
      uVar10 = (ulong)dVar9 ^ ((ulong)dVar9 ^ (ulong)-dVar9) & -(ulong)(dVar9 < 0.0);
      uVar11 = (ulong)dVar7 ^ ((ulong)dVar7 ^ (ulong)-dVar7) & -(ulong)(dVar7 < 0.0);
      func_0x00010bdf4fe0(uVar10,uVar11,uVar10,uVar11,(double)SUB84(dVar8,0),
                          (double)SUB84(dVar8,0) * 5.0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_retain(puVar3);
      _objc_retain(param_5);
      func_0x00010c2505a0(param_3);
      _objc_release(param_5);
      _objc_release(puVar3);
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(puVar1);
      _objc_release(puVar3);
    }
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_5);
  return;
}



/* Entry: 10856665c; end: 108566673;  */

void FUN_10856665c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108566674; end: 1085666f3;  */

void FUN_108566674(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1085666f4; end: 1085666f7;  */

void FUN_1085666f4(void)

{
  return;
}



/* Entry: 1085666f8; end: 108566777;  */

void FUN_1085666f8(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c252d60();
  if (uVar1 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be32410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__handleTranscodingFailureForInte_11256a2a0,
               *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    return;
  }
  if (uVar1 != 3) {
    if (uVar1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010be32430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)(param_1 + 0x28),PTR_s__handleTranscodingSuccessForInte_11256a2a8,
                 *(undefined8 *)(param_1 + 0x30),(long)*(double *)(param_1 + 0x50),
                 *(undefined8 *)(param_1 + 0x38));
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be323f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__handleTranscodingCancelledForIn_11256a298,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 108566778; end: 108566a3f; -[SCVideoReversePassthroughProcessor _createTranscodingSessionForReversePreprocessWithSegment:inputAsset:videoSourceSize:videoTargetSize:videoSourceBitrate:targetBitrate:outputUrl:taskId:] */

void FUN_108566778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  func_0x00010911f7b8(&uStack_88,param_9);
  if (param_9 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_9 + 0x18);
  }
  _objc_retain(lVar4);
  _objc_release(param_9);
  if (lVar4 == 0) {
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
  }
  else {
    func_0x00010bdc1140(&uStack_100,lVar4);
  }
  uStack_c8 = uStack_80;
  uStack_d0 = uStack_88;
  uStack_c0 = uStack_78;
  _CMTimeRangeMake(&uStack_b8,&uStack_100,&uStack_d0);
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126da0c0;
  _objc_alloc(PTR_PTR_1126da0c0);
  uStack_f8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_100 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_e8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_f0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_d8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_e0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297160(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uStack_b0;
  uStack_100 = uStack_b8;
  uStack_e8 = uStack_a0;
  uStack_f0 = uStack_a8;
  uStack_d8 = uStack_90;
  uStack_e0 = uStack_98;
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297240();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  puVar6 = puVar3;
  func_0x00010c01e1e0(puVar1);
  _objc_release(param_10);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126da120;
  _objc_alloc(PTR_PTR_1126da120);
  if (*(long *)(param_7 + 0x18) == 0) {
    _objc_retain(0);
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_7 + 0x18) + 8);
    _objc_retain(lVar4);
    if (lVar4 != 0) {
      dVar5 = (double)*(long *)(lVar4 + 0x48);
      goto LAB_108566944;
    }
  }
  dVar5 = 0.0;
LAB_108566944:
  func_0x00010b68dc3c(param_3,param_4,param_6,dVar5,0,puVar2,0,0,0,0,1,0x3c,0,
                      *(undefined8 *)PTR__AVVideoProfileLevelH264MainAutoLevel_110348178,
                      (ulong)puVar6 & 0xffffffffffffff00,1,uVar7 & 0xffffffffffffff00);
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126da0d0;
  _objc_alloc(PTR_PTR_1126da0d0);
  func_0x00010c01e080();
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108566a40; end: 108566b13; -[SCVideoReversePassthroughProcessor _handleTranscodingSuccessForIntermediateAssetUrl:videoTargetSize:videoTargetBitrate:completionHandler:] */

void FUN_108566a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_108566b14;
  puStack_78 = &UNK_110a55398;
  uStack_70 = param_3;
  uStack_68 = param_5;
  uStack_60 = param_7;
  uStack_58 = param_1;
  uStack_50 = param_2;
  uStack_48 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010be972e0(param_3,param_4,param_5,&puStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_7);
  _objc_release(param_5);
  return;
}



/* Entry: 108566b14; end: 108566b43;  */

void FUN_108566b14(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be2f5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__handleReverseFailureForIntermed_112569710,
               *(undefined8 *)(param_1 + 0x28),param_3,*(undefined8 *)(param_1 + 0x30));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be2f5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s__handleReverseSuccessForIntermed_112569718,
             *(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 108566b44; end: 108566c53; -[SCVideoReversePassthroughProcessor _handleReverseSuccessForIntermediateAssetUrl:reversedSegment:videoTargetSize:videoTargetBitrate:completionHandler:] */

void FUN_108566b44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf69bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0f5800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf0e880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad040();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(param_3);
  _objc_release(puVar1);
  (**(code **)(param_6 + 0x10))(param_6,param_4,0);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108566c54; end: 108566d0f; -[SCVideoReversePassthroughProcessor _handleTranscodingCancelledForIntermediateAssetUrl:completionHandler:] */

void FUN_108566c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf99260(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(param_3);
  _objc_release(puVar2);
  (**(code **)(param_4 + 0x10))(param_4,0,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108566d10; end: 108566dcb; -[SCVideoReversePassthroughProcessor _handleTranscodingFailureForIntermediateAssetUrl:completionHandler:] */

void FUN_108566d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf99260(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(param_3);
  _objc_release(puVar2);
  (**(code **)(param_4 + 0x10))(param_4,0,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108566dcc; end: 108566e67; -[SCVideoReversePassthroughProcessor _handleReverseFailureForIntermediateAssetUrl:error:completionHandler:] */

void FUN_108566dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf69bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(param_3);
  _objc_release(puVar1);
  (**(code **)(param_5 + 0x10))(param_5,0,param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108566e68; end: 108567103; -[SCVideoReversePassthroughProcessor _reversedCompressedFrameBuffersWithIntermediateAssetURL:CompletionHandler:] */

void FUN_108566e68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  _objc_retain(param_4);
  lStack_78 = 0;
  func_0x00010beaa9e0(param_1);
  lVar2 = lStack_78;
  _objc_retain(lStack_78);
  if (lVar2 == 0) {
    func_0x00010c250140(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be86800(param_1);
    func_0x00010c251d20(*(undefined8 *)(param_1 + 0x28));
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_90 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010c2508a0();
    _dispatch_group_create();
    _dispatch_group_enter();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    lVar4 = param_1;
    _objc_opt_class(param_1);
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_108567104;
    puStack_a8 = &UNK_110841f80;
    lStack_a0 = param_1;
    _objc_retain(uVar3);
    uStack_98 = uVar3;
    func_0x00010c135d80(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (*(long *)(param_1 + 0x48) != 0) {
      _dispatch_group_enter(uVar3);
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bf52120();
      *(undefined8 *)(param_1 + 0x50) = uVar6;
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      lVar4 = param_1;
      _objc_opt_class(param_1);
      func_0x00010c0f98a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_f0 = puVar1;
      uStack_e8 = 0xc2000000;
      uStack_e0 = 0x10856718c;
      puStack_d8 = &UNK_110841f80;
      lStack_d0 = param_1;
      _objc_retain(uVar3);
      uStack_c8 = uVar3;
      func_0x00010c135d80(uVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(uStack_c8);
    }
    lVar4 = param_1;
    _objc_opt_class(param_1);
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar1;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_108567258;
    puStack_108 = &UNK_11084aaa8;
    lStack_100 = param_1;
    _objc_retain(param_4);
    lStack_f8 = param_4;
    func_0x000100bc0718(uVar3,lVar5,&puStack_120);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lStack_f8);
    _objc_release(uStack_98);
    _objc_release(uVar3);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,0,lVar2);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 108567104; end: 108567257;  */

void FUN_108567104(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c07bca0();
  if (iVar1 != 0) {
    do {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010bdc3de0();
      if (lVar2 == 0) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
        func_0x00010c252d60();
        if (lVar2 != 1) {
          return;
        }
        func_0x00010c0bb0a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
        return;
      }
      func_0x00010bf06fe0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),param_2,lVar2);
      uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x30);
      func_0x00010c07bca0();
    } while ((uVar3 & 1) != 0);
  }
  return;
}



/* Entry: 108567258; end: 108567263;  */

void FUN_108567258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be175d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__finishWritingWithCompletionHand_112563710,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108567264; end: 108567347; -[SCVideoReversePassthroughProcessor _accessNextCompressedSampleBuffer] */

undefined8 FUN_108567264(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010bf529e0();
  if ((lVar1 != 0) && (uVar4 = *(ulong *)(param_1 + 0x68), -1 < (long)uVar4)) {
    uVar2 = *(ulong *)(param_1 + 0x60);
    func_0x00010bf529e0();
    if (uVar4 < uVar2) {
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      _CFArrayGetValueAtIndex(uVar3,*(undefined8 *)(param_1 + 0x68));
      lVar1 = *(long *)(param_1 + 0x60);
      func_0x00010bf529e0(lVar1);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
      }
      else {
        func_0x00010bdc1140(&uStack_48,lVar1);
      }
      _objc_release(lVar1);
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + -1;
      uStack_58 = uStack_40;
      uStack_60 = uStack_48;
      uStack_50 = uStack_38;
      _CMSampleBufferSetOutputPresentationTimeStamp(uVar3,&uStack_60);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 108567348; end: 1085673d7; -[SCVideoReversePassthroughProcessor _finishWritingWithCompletionHandler:] */

void FUN_108567348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1085673d8;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bfaff80(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1085673d8; end: 108567473;  */

void FUN_1085673d8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar2 + 0x58) != 0) {
    _CFRelease(*(long *)(lVar2 + 0x58));
    lVar2 = *(long *)(param_1 + 0x20);
  }
  if (*(long *)(lVar2 + 0x50) != 0) {
    _CFRelease(*(long *)(lVar2 + 0x50));
    lVar2 = *(long *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010beeb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar2,PTR_s__wrapOutputAndReturnInCompletion_112598768,*(undefined8 *)(param_1 + 0x28))
  ;
  return;
}



/* Entry: 108567474; end: 1085675af; -[SCVideoReversePassthroughProcessor _setupAssetReaderAndWriterWithAssetURL:error:] */

void FUN_108567474(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
  _objc_alloc();
  func_0x00010bff4200();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar2;
  _objc_release(uVar4);
  if (*param_4 == 0) {
    lVar3 = param_1;
    func_0x00010beaf500(param_1,param_2,*(undefined8 *)(param_1 + 0x20),puVar1,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar3;
    _objc_release(uVar4);
    if (*param_4 == 0) {
      lVar3 = param_1;
      func_0x00010beaf4e0(param_1,param_2,*(undefined8 *)(param_1 + 0x20),puVar1,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      *(long *)(param_1 + 0x48) = lVar3;
      _objc_release(uVar4);
      if (*param_4 == 0) {
        puVar2 = PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8;
        _objc_alloc();
        func_0x00010c057a20();
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        *(undefined **)(param_1 + 0x28) = puVar2;
        _objc_release(uVar4);
        if (*param_4 == 0) {
          func_0x00010beb1940(param_1,param_2,puVar1,param_4);
          if (*param_4 == 0) {
            func_0x00010beb18e0(param_1,param_2,puVar1);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085675b0; end: 108567693; -[SCVideoReversePassthroughProcessor _setupReaderVideoOutput:inputAsset:error:] */

void FUN_1085675b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010c279200(param_4,param_2,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110ee2d98,0x1f45,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar3 = (undefined *)0x0;
    *param_5 = puVar2;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
    func_0x00010bf0b5e0(PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0,param_2,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa4c0(param_3,param_2,puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108567694; end: 1085677d7; -[SCVideoReversePassthroughProcessor _setupReaderAudioOutput:inputAsset:error:] */

void FUN_108567694(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_4;
  _objc_retain(param_3);
  puVar5 = *(undefined **)PTR__AVMediaTypeAudio_110348070;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_4;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (puVar1 == (undefined8 *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uStack_58 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
    uStack_50 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
    ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfca0;
    ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfcb8;
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_48,&uStack_58,2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
    puVar6 = puVar2;
    func_0x00010bf0b5e0(PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010befa4c0(param_3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)PTR__AVMediaTypeVideo_110348090;
  func_0x00010c279200(puVar5,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puVar7 == (undefined *)0x0) {
    if (puVar6 != (undefined8 *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110ee2d98,0x1f45,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar6 = puVar5;
    }
  }
  else {
    puVar5 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
    _objc_alloc();
    puVar3 = puVar7;
    func_0x00010bfb5b00(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02a060(puVar5,param_2,uVar8,0,puVar4);
    uVar8 = *(undefined8 *)(param_3 + 0x30);
    *(undefined **)(param_3 + 0x30) = puVar5;
    _objc_release(uVar8);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c198a40(*(undefined8 *)(param_3 + 0x30),param_2,0);
    func_0x00010bef93a0(*(undefined8 *)(param_3 + 0x28),param_2,*(undefined8 *)(param_3 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1085677d8; end: 1085678fb; -[SCVideoReversePassthroughProcessor _setupWriterVideoInputWithIntermediateAsset:error:] */

void FUN_1085677d8(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)PTR__AVMediaTypeVideo_110348090;
  func_0x00010c279200(param_3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == 0) {
    if (param_4 != (undefined8 *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110ee2d98,0x1f45,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar4;
    }
  }
  else {
    puVar4 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
    _objc_alloc();
    lVar2 = lVar1;
    func_0x00010bfb5b00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02a060(puVar4,param_2,uVar5,0,lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c198a40(*(undefined8 *)(param_1 + 0x30),param_2,0);
    func_0x00010bef93a0(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085678fc; end: 1085679eb; -[SCVideoReversePassthroughProcessor _setupWriterAudioInputWithIntermediateAsset:] */

void FUN_1085678fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)PTR__AVMediaTypeAudio_110348070;
  func_0x00010c279200(param_3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
    _objc_alloc();
    lVar3 = lVar1;
    func_0x00010bfb5b00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02a060(puVar2,param_2,uVar5,0,lVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010c198a40(*(undefined8 *)(param_1 + 0x38),param_2,0);
    func_0x00010bef93a0(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085679ec; end: 108567b27; -[SCVideoReversePassthroughProcessor _readVideoSampleBuffers:] */

void FUN_1085679ec(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_58 [12];
  uint uStack_4c;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CFArrayCreateMutable(uVar1,0,PTR__kCFTypeArrayCallBacks_11034ac10);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar5 = param_3;
  func_0x00010bf52120();
  while (lVar5 != 0) {
    _CMSampleBufferGetPresentationTimeStamp(auStack_58,lVar5);
    if (((uStack_4c & 1) != 0) && (lVar3 = lVar5, _CMSampleBufferGetDataBuffer(), lVar3 != 0)) {
      _CFArrayAppendValue(*(undefined8 *)(param_1 + 0x58),lVar5);
      puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(puVar4);
    }
    _CFRelease(lVar5);
    lVar5 = param_3;
    func_0x00010bf52120();
  }
  puVar4 = puVar2;
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar4;
  _objc_release(uVar1);
  lVar5 = *(long *)(param_1 + 0x60);
  func_0x00010bf529e0();
  *(long *)(param_1 + 0x68) = lVar5 + -1;
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 108567b28; end: 108567d27; -[SCVideoReversePassthroughProcessor _wrapOutputAndReturnInCompletionHandler:] */

void FUN_108567b28(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  
  puVar1 = PTR_PTR_1126bf6a0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    puVar2 = PTR_PTR_1126bf698;
    func_0x00010bf0b920(PTR_PTR_1126bf698);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 8) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
    }
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 8) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x20);
    }
    _objc_retain(uVar7);
    if (*(long *)(param_1 + 8) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x28);
    }
    _objc_retain(uVar8);
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 == 0) {
      uVar9 = 0;
      dVar12 = 0.0;
    }
    else {
      dVar11 = *(double *)(lVar4 + 0x30);
      dVar12 = -dVar11;
      if (0.0 <= dVar11) {
        dVar12 = dVar11;
      }
      uVar9 = *(undefined8 *)(lVar4 + 0x38);
    }
    _objc_retain(uVar9);
    if (*(long *)(param_1 + 8) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x40);
    }
    _objc_retain(uVar10);
    if (*(long *)(param_1 + 8) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x48);
    }
    _objc_retain(uVar5);
    func_0x00010b7425e0(dVar12,puVar1,puVar2,uVar6,puVar3,uVar7,uVar8,uVar9,uVar10,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar3);
    _objc_release(puVar2);
    (**(code **)(param_3 + 0x10))(param_3,puVar1,0);
    _objc_release(param_3);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 108567d28; end: 108567dc3; -[SCVideoReversePassthroughProcessor .cxx_destruct] */

void FUN_108567d28(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 108567dc4; end: 108567e8f; +[SCVideoReverseProcessor performer] */

void FUN_108567dc4(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372c418 != -1) {
    func_0x000107c27d9c(0x11372c418,&PTR___NSConcreteGlobalBlock_110a553c8);
  }
  uVar1 = uRam000000011372c420;
  _objc_retain(uRam000000011372c420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108567e90; end: 108567f7b; -[SCVideoReverseProcessor initWithVideoAsset:outputURL:targetBitrate:targetSize:targetTransform:shouldInvolveAudioTrack:] */

undefined1 *
FUN_108567e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126fcd10;
  uStack_70 = param_4;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    uVar3 = param_8[1];
    uVar2 = *param_8;
    uVar4 = param_8[2];
    uVar6 = param_8[5];
    uVar5 = param_8[4];
    *(undefined8 *)((long)puVar1 + 0x48) = param_8[3];
    *(undefined8 *)((long)puVar1 + 0x40) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x58) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x50) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    *(undefined1 *)((long)puVar1 + 0x60) = param_9;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 108567f7c; end: 108568437; -[SCVideoReverseProcessor processWithCompletionHandler:] */

void FUN_108567f7c(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d0;
  undefined8 *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x2020000000;
  uStack_c0 = 0;
  puVar11 = PTR_PTR_1126da0f0;
  _objc_alloc();
  func_0x00010c060bc0();
  puVar10 = (undefined8 *)(param_1 + 0x98);
  uVar8 = *puVar10;
  *puVar10 = puVar11;
  _objc_release(uVar8);
  lStack_e0 = 0;
  func_0x00010c24da40(*puVar10);
  lVar9 = lStack_e0;
  _objc_retain(lStack_e0);
  if (lVar9 == 0) {
    puVar10 = (undefined8 *)PTR__OBJC_CLASS___AVAssetReader_1126bf598;
    _objc_alloc();
    lStack_e8 = 0;
    func_0x00010bff4200();
    lVar9 = lStack_e8;
    _objc_retain(lStack_e8);
    uVar8 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 **)(param_1 + 0x68) = puVar10;
    _objc_release(uVar8);
    if (lVar9 == 0) {
      puVar3 = *(undefined8 **)(param_1 + 8);
      func_0x00010c279200();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if ((puVar10 == (undefined8 *)0x0) || (*(char *)(param_1 + 0x60) != '\x01')) {
        puVar11 = (undefined *)0x0;
        *(undefined1 *)(puStack_b0 + 3) = 1;
      }
      else {
        uStack_98 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
        uStack_90 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
        ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfcd0;
        ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfce8;
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
        func_0x00010bf0b5e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa4c0(*(undefined8 *)(param_1 + 0x68));
        _objc_release(puVar4);
      }
      func_0x00010c250140(*(undefined8 *)(param_1 + 0x68));
      puVar4 = PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8;
      _objc_alloc();
      lStack_f0 = 0;
      func_0x00010c057a20();
      lVar9 = lStack_f0;
      _objc_retain(lStack_f0);
      uVar8 = *(undefined8 *)(param_1 + 0x70);
      *(undefined **)(param_1 + 0x70) = puVar4;
      _objc_release(uVar8);
      if (lVar9 == 0) {
        func_0x00010beb1900(param_1);
        func_0x00010beb18a0(param_1);
        func_0x00010c251d20(*(undefined8 *)(param_1 + 0x70));
        uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uStack_110 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uStack_100 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        func_0x00010c2508a0(*(undefined8 *)(param_1 + 0x70));
        uVar8 = *(undefined8 *)(param_1 + 0x78);
        lVar5 = param_1;
        _objc_opt_class(param_1);
        func_0x00010c0f98a0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_148 = 0xc2000000;
        pcStack_140 = FUN_108568438;
        puStack_138 = &UNK_11090f5b8;
        puStack_120 = &uStack_d8;
        puStack_118 = &uStack_b8;
        lStack_130 = param_1;
        _objc_retain(param_3);
        lStack_128 = param_3;
        func_0x00010c135d80(uVar8);
        _objc_release(lVar6);
        _objc_release(lVar5);
        if ((puVar10 != (undefined8 *)0x0) && (*(char *)(param_1 + 0x60) == '\x01')) {
          puVar7 = puVar11;
          func_0x00010bf52120();
          *(undefined **)(param_1 + 0x90) = puVar7;
          uVar8 = *(undefined8 *)(param_1 + 0x80);
          lVar5 = param_1;
          _objc_opt_class(param_1);
          func_0x00010c0f98a0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c11de00();
          _objc_retainAutoreleasedReturnValue();
          puStack_198 = puVar4;
          uStack_190 = 0xc2000000;
          pcStack_188 = FUN_10856854c;
          puStack_180 = &UNK_11084be40;
          puStack_160 = &uStack_b8;
          lStack_178 = param_1;
          _objc_retain(puVar11);
          puStack_158 = &uStack_d8;
          puStack_170 = puVar11;
          _objc_retain(param_3);
          lStack_168 = param_3;
          func_0x00010c135d80(uVar8);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lStack_168);
          _objc_release(puStack_170);
        }
        _objc_release(lStack_128);
      }
      else {
        (**(code **)(param_3 + 0x10))(param_3,lVar9);
      }
      _objc_release(puVar11);
      _objc_release(puVar10);
    }
    else {
      (**(code **)(param_3 + 0x10))(param_3,lVar9);
    }
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3,lVar9);
  }
  __Block_object_dispose(&uStack_d8,8);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_d8,8);
  __Block_object_dispose(&uStack_b8,8);
  lVar5 = param_3;
  __Unwind_Resume();
  pcStack_1a8 = FUN_108568438;
  bVar1 = *(byte *)(*(long *)(*(long *)(lVar5 + 0x30) + 8) + 0x18);
  puStack_1b0 = &stack0xfffffffffffffff0;
  lStack_1b8 = param_3;
  puStack_1c8 = puVar10;
  lStack_1d0 = lVar9;
  lStack_1c0 = param_1;
  do {
    if ((bVar1 & 1) != 0) {
LAB_10856851c:
      if (*(char *)(*(long *)(*(long *)(lVar5 + 0x38) + 8) + 0x18) == '\x01') {
        func_0x00010be175c0(*(undefined8 *)(lVar5 + 0x20));
      }
      return;
    }
    iVar2 = (int)*(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x78);
    func_0x00010c07bca0();
    if (iVar2 == 0) {
      if (*(char *)(*(long *)(*(long *)(lVar5 + 0x30) + 8) + 0x18) != '\x01') {
        return;
      }
      goto LAB_10856851c;
    }
    lVar9 = *(long *)(lVar5 + 0x20);
    if (*(long *)(lVar9 + 0x98) == 0) {
      uStack_1e0 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      lStack_1e8 = 0;
      uStack_1f0 = 0;
LAB_1085684cc:
      lVar9 = *(long *)(lVar9 + 0x70);
      func_0x00010c252d60();
      if (lVar9 == 1) {
        func_0x00010c0bb0a0(*(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x78));
      }
      *(undefined1 *)(*(long *)(*(long *)(lVar5 + 0x30) + 8) + 0x18) = 1;
    }
    else {
      func_0x00010beeccc0(&uStack_200);
      lVar6 = lStack_1e8;
      lVar9 = *(long *)(lVar5 + 0x20);
      if (lStack_1e8 == 0) goto LAB_1085684cc;
      func_0x00010bf06f60(*(undefined8 *)(lVar9 + 0x88));
      _CVBufferRelease(lVar6);
    }
    bVar1 = *(byte *)(*(long *)(*(long *)(lVar5 + 0x30) + 8) + 0x18);
  } while( true );
}



/* Entry: 108568438; end: 10856854b;  */

void FUN_108568438(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
  do {
    if ((bVar1 & 1) != 0) {
LAB_10856851c:
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == '\x01') {
        func_0x00010be175c0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28))
        ;
      }
      return;
    }
    iVar3 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
    func_0x00010c07bca0();
    if (iVar3 == 0) {
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) != '\x01') {
        return;
      }
      goto LAB_10856851c;
    }
    lVar4 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar4 + 0x98) == 0) {
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
LAB_1085684cc:
      lVar4 = *(long *)(lVar4 + 0x70);
      func_0x00010c252d60();
      if (lVar4 == 1) {
        func_0x00010c0bb0a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78));
      }
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
    }
    else {
      func_0x00010beeccc0(&uStack_60);
      lVar2 = lStack_48;
      lVar4 = *(long *)(param_1 + 0x20);
      if (lStack_48 == 0) goto LAB_1085684cc;
      uStack_78 = uStack_58;
      uStack_80 = uStack_60;
      uStack_70 = uStack_50;
      func_0x00010bf06f60(*(undefined8 *)(lVar4 + 0x88),param_2,lStack_48,&uStack_80);
      _CVBufferRelease(lVar2);
    }
    bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
  } while( true );
}



/* Entry: 10856854c; end: 108568677;  */

void FUN_10856854c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) & 1) == 0) {
    while( true ) {
      iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
      func_0x00010c07bca0();
      if (iVar1 == 0) break;
      if (*(long *)(*(long *)(param_1 + 0x20) + 0x90) == 0) {
LAB_1085685f0:
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) & 1) == 0) {
          lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
          func_0x00010c252d60();
          if (lVar2 == 1) {
            func_0x00010c0bb0a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80));
          }
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
        }
        break;
      }
      lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x68);
      func_0x00010c252d60();
      if (lVar2 != 1) goto LAB_1085685f0;
      lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
      func_0x00010c252d60();
      if (lVar2 != 1) goto LAB_1085685f0;
      func_0x00010bf06fe0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80));
      _CFRelease(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90));
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf52120();
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90) = uVar3;
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == '\x01') break;
    }
  }
  if ((*(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) == '\x01') &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010be175d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__finishWritingWithCompletionHand_112563710,
               *(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 108568678; end: 108568707; -[SCVideoReverseProcessor _finishWritingWithCompletionHandler:] */

void FUN_108568678(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108568708;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bfaff80(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108568708; end: 1085687bb;  */

void FUN_108568708(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar2 + 0x90) != 0) {
    _CFRelease();
    lVar2 = *(long *)(param_1 + 0x20);
  }
  func_0x00010c2557e0(*(undefined8 *)(lVar2 + 0x98));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085687ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    return;
  }
  return;
}



/* Entry: 1085687bc; end: 108568a1f; -[SCVideoReverseProcessor _setupWriterVideoInput] */

void FUN_1085687bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
  _objc_alloc();
  func_0x00010c02a040();
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x78) = puVar1;
  _objc_release(uVar8);
  func_0x00010c198a40(*(undefined8 *)(param_1 + 0x78));
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x78));
  puVar1 = PTR__OBJC_CLASS___AVAssetWriterInputPixelBufferAdaptor_1126d0110;
  _objc_alloc();
  func_0x00010bff46a0();
  uVar8 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar8);
  func_0x00010bef93a0(*(undefined8 *)(param_1 + 0x70));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(puVar5 + 8);
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if ((lVar7 != 0) && (puVar5[0x60] == '\x01')) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
    _objc_alloc();
    func_0x00010c02a040();
    uVar8 = *(undefined8 *)(puVar5 + 0x80);
    *(undefined **)(puVar5 + 0x80) = puVar2;
    _objc_release(uVar8);
    func_0x00010c198a40(*(undefined8 *)(puVar5 + 0x80));
    func_0x00010bef93a0(*(undefined8 *)(puVar5 + 0x70));
    _objc_release(puVar1);
  }
  _objc_release(lVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar7 + 0x98,0);
  _objc_storeStrong(lVar7 + 0x88,0);
  _objc_storeStrong(lVar7 + 0x80,0);
  _objc_storeStrong(lVar7 + 0x78,0);
  _objc_storeStrong(lVar7 + 0x70,0);
  _objc_storeStrong(lVar7 + 0x68,0);
  _objc_storeStrong(lVar7 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar7 + 8,0);
  return;
}



/* Entry: 108568a20; end: 108568b83; -[SCVideoReverseProcessor _setupWriterAudioInput] */

void FUN_108568a20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c279200(lVar1,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x60) == '\x01')) {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
    _objc_alloc();
    func_0x00010c02a040();
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar4;
    _objc_release(uVar6);
    func_0x00010c198a40(*(undefined8 *)(param_1 + 0x80));
    func_0x00010bef93a0(*(undefined8 *)(param_1 + 0x70));
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar2 + 0x98,0);
  _objc_storeStrong(lVar2 + 0x88,0);
  _objc_storeStrong(lVar2 + 0x80,0);
  _objc_storeStrong(lVar2 + 0x78,0);
  _objc_storeStrong(lVar2 + 0x70,0);
  _objc_storeStrong(lVar2 + 0x68,0);
  _objc_storeStrong(lVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + 8,0);
  return;
}



/* Entry: 108568b84; end: 108568bfb; -[SCVideoReverseProcessor .cxx_destruct] */

void FUN_108568b84(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108568bfc; end: 108568d5b; -[SCVideoTranscodingCommandsGenerator initWithMediaSource:mediaDestination:sourceSize:targetSize:overlayImage:videoTrackedImages:imageProcessData:targetTrajectoryFactory:spectaclesImageProcessCommandFactory:] */

undefined1 *
FUN_108568bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_78 = PTR_PTR_1126fcd18;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    *(undefined8 *)((long)puVar1 + 0x40) = param_1;
    *(undefined8 *)((long)puVar1 + 0x48) = param_2;
    *(undefined8 *)((long)puVar1 + 0x50) = param_3;
    *(undefined8 *)((long)puVar1 + 0x58) = param_4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 108568d5c; end: 108568f73; -[SCVideoTranscodingCommandsGenerator overlayImage] */

void FUN_108568d5c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    puVar1 = param_1;
    func_0x00010bfe85c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(puVar1 + 0x28);
    }
    _objc_retain(lVar5);
    _objc_release(lVar5);
    _objc_release(puVar1);
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (lVar5 == 0) {
      puVar1 = param_1;
      func_0x00010bfe85c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 == (undefined *)0x0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(long *)(puVar1 + 0x30);
      }
      _objc_retain(lVar5);
      _objc_release(lVar5);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      if (lVar5 == 0) goto LAB_108568f2c;
      puVar4 = param_1;
      func_0x00010bfe85c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = *(undefined **)(puVar4 + 0x30);
      }
      _objc_retain(puVar6);
      func_0x00010c14d040(puVar1,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107c31298();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar6,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010bfe85c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(puVar2 + 0x28);
      }
      _objc_retain(uVar7);
      uVar3 = uVar7;
      func_0x00010c128220(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010bdc2c60(puVar6,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      puVar6 = puVar4;
      func_0x00010c0f5800(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d020(puVar1,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
LAB_108568f2c:
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 108568f74; end: 108569a2f; -[SCVideoTranscodingCommandsGenerator generateGPUCommands] */

void FUN_108568f74(undefined *param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **unaff_x21;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  double dVar18;
  undefined *puVar19;
  undefined **ppuStack_1f8;
  long lStack_1e8;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [128];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_3;
  func_0x00010be33da0();
  if ((int)ppuVar3 == 0) goto LAB_108569894;
  unaff_x21 = param_3;
  func_0x00010bdf6200();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x21 == (undefined **)0x0) {
    ppuStack_1f8 = (undefined **)0x0;
  }
  else {
    ppuVar3 = param_3;
    func_0x00010bfe85c0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 == (undefined **)0x0) {
      bVar8 = 0;
    }
    else {
      bVar8 = *(byte *)(ppuVar3 + 1);
    }
    _objc_release();
    ppuStack_1f8 = unaff_x21;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    if ((bVar8 & 1) == 0) {
      _CGImageRetain();
    }
    else {
      func_0x00010c29b640(param_3);
      func_0x00010b690c88();
    }
  }
  ppuVar3 = param_3;
  func_0x00010bfe85c0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined **)0x0) goto LAB_1085699a8;
  param_1 = ppuVar3[9];
  lStack_1e8 = (long)(double)param_1;
  while( true ) {
    _objc_release();
    puVar4 = ppuVar14[0xbb];
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_3;
    func_0x00010bfe85c0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 == (undefined **)0x0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = ppuVar3[3];
    }
    _objc_retain(puVar16);
    puVar17 = puVar16;
    func_0x00010c0b8600(puVar16,param_4,&PTR___NSConcreteGlobalBlock_110a553e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4,param_4,puVar17);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(ppuVar3);
    ppuVar3 = param_3;
    func_0x00010bfe85c0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 == (undefined **)0x0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = ppuVar3[4];
    }
    _objc_retain(puVar16);
    puVar17 = puVar16;
    func_0x00010c0b8600(puVar16,param_4,&PTR___NSConcreteGlobalBlock_110a55408);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4,param_4,puVar17);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(ppuVar3);
    ppuVar3 = param_3;
    func_0x00010bfe85c0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 == (undefined **)0x0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = ppuVar3[10];
    }
    _objc_retain(puVar16);
    _objc_release(puVar16);
    _objc_release(ppuVar3);
    puVar17 = PTR_PTR_1126b26d8;
    if (puVar16 != (undefined *)0x0) {
      ppuVar3 = param_3;
      func_0x00010bfe85c0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar3 == (undefined **)0x0) {
        puVar16 = (undefined *)0x0;
      }
      else {
        puVar16 = ppuVar3[10];
      }
      _objc_retain(puVar16);
      func_0x00010bf97940(puVar17,param_4,puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_4,puVar17);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(ppuVar3);
    }
    ppuVar3 = param_3;
    func_0x00010bfe85c0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 == (undefined **)0x0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = ppuVar3[2];
    }
    _objc_retain(puVar16);
    _objc_release(puVar16);
    _objc_release(ppuVar3);
    puVar17 = PTR_PTR_1126b26d8;
    if (puVar16 != (undefined *)0x0) {
      ppuVar3 = param_3;
      func_0x00010bfe85c0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar3 == (undefined **)0x0) {
        puVar16 = (undefined *)0x0;
      }
      else {
        puVar16 = ppuVar3[2];
      }
      _objc_retain(puVar16);
      func_0x00010bf97900(puVar17,param_4,puVar16,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_4,puVar17);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(ppuVar3);
    }
    puVar16 = PTR_PTR_1126b26e0;
    ppuVar3 = param_3;
    func_0x00010be43ea0(param_3);
    ppuVar13 = param_3;
    func_0x00010bfe85c0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar13 == (undefined **)0x0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar17 = ppuVar13[0xb];
    }
    _objc_retain(puVar17);
    func_0x00010c29b060(puVar16,param_4,puVar4,ppuVar3,0,puVar17,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(ppuVar13);
    ppuVar3 = param_3;
    func_0x00010bfe85c0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 == (undefined **)0x0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar17 = ppuVar3[0xe];
    }
    _objc_retain(puVar17);
    puVar10 = puVar17;
    func_0x00010bf41e60(puVar17,param_4,puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2,param_4,puVar10);
    _objc_release(puVar10);
    _objc_release(puVar17);
    _objc_release(ppuVar3);
    puVar17 = puVar2;
    func_0x00010bf529e0();
    if (puVar17 == (undefined *)0x0) {
      ppuVar3 = param_3;
      func_0x00010bfe85c0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar3 == (undefined **)0x0) {
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar17 = ppuVar3[0xd];
      }
      _objc_retain(puVar17);
      _objc_release(puVar17);
      _objc_release(ppuVar3);
      if (puVar17 != (undefined *)0x0) {
        ppuVar3 = param_3;
        func_0x00010bfe85c0();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar3 == (undefined **)0x0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = ppuVar3[0xe];
        }
        _objc_retain(puVar17);
        ppuVar14 = param_3;
        func_0x00010bfe85c0();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar14 == (undefined **)0x0) {
          puVar10 = (undefined *)0x0;
        }
        else {
          puVar10 = ppuVar14[0xd];
        }
        _objc_retain(puVar10);
        puVar5 = puVar17;
        func_0x00010c249640(puVar17,param_4,puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(ppuVar14);
        _objc_release(puVar17);
        _objc_release(ppuVar3);
        func_0x00010befa120(puVar2,param_4,puVar5);
        _objc_release(puVar5);
        ppuVar14 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      }
    }
    puVar17 = ppuVar14[0xbb];
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = ppuVar14[0xbb];
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3[7];
    func_0x00010bf529e0();
    if (puVar5 != (undefined *)0x0) {
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_148 = 0;
      plStack_150 = (long *)0x0;
      lStack_158 = 0;
      uStack_160 = 0;
      puVar9 = param_3[7];
      _objc_retain(puVar9);
      puVar19 = puVar9;
      func_0x00010bf52a60(puVar9,param_4,&uStack_160,auStack_118,0x10);
      puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      if (puVar19 != (undefined *)0x0) {
        lVar12 = *plStack_150;
        do {
          puVar11 = (undefined *)0x0;
          do {
            if (*plStack_150 != lVar12) {
              _objc_enumerationMutation(puVar9);
            }
            uVar15 = *(undefined8 *)(lStack_158 + (long)puVar11 * 8);
            uVar6 = uVar15;
            func_0x00010c27a460(uVar15);
            _objc_retainAutoreleasedReturnValue();
            puStack_1a0 = puVar5;
            uStack_198 = 0xc2000000;
            pcStack_190 = FUN_108569a9c;
            puStack_188 = &UNK_110a54f48;
            lStack_168 = lStack_1e8;
            _objc_retain(puVar10);
            puStack_1d8 = puVar5;
            uStack_1d0 = 0xc2000000;
            pcStack_1c8 = FUN_108569b54;
            puStack_1c0 = &UNK_110a54f78;
            ppuStack_1b8 = param_3;
            puStack_180 = puVar10;
            ppuStack_178 = param_3;
            uStack_170 = uVar15;
            _objc_retain(puVar10);
            puStack_1b0 = puVar10;
            uStack_1a8 = uVar15;
            func_0x00010c0c0400(uVar6,param_4,&puStack_1a0,&puStack_1d8);
            _objc_release(uVar6);
            func_0x00010bfe6ac0(uVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar17,param_4,uVar15);
            _objc_release(uVar15);
            _objc_release(puStack_1b0);
            _objc_release(puStack_180);
            puVar11 = puVar11 + 1;
          } while (puVar19 != puVar11);
          puVar19 = puVar9;
          func_0x00010bf52a60(puVar9,param_4,&uStack_160,auStack_118,0x10);
        } while (puVar19 != (undefined *)0x0);
      }
      _objc_release(puVar9);
      ppuVar3 = param_3;
      func_0x00010bfe85c0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = (undefined *)0x0;
      puVar5 = (undefined *)0x0;
      if (ppuVar3 != (undefined **)0x0) {
        puVar5 = ppuVar3[7];
      }
      _objc_release();
      ppuVar3 = param_3;
      func_0x00010bfe85c0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar3 != (undefined **)0x0) {
        puVar19 = ppuVar3[7];
      }
      dVar18 = ABS((double)puVar19 + 0.0) * 2.220446049250313e-16;
      param_2 = 0x10000000000000;
      if (dVar18 <= 2.2250738585072014e-308) {
        dVar18 = 2.2250738585072014e-308;
      }
      _objc_release();
      param_1 = (undefined *)0x3ff0000000000000;
      if (dVar18 <= ABS(0.0 - (double)puVar19)) {
        param_1 = puVar5;
      }
      ppuVar14 = (undefined **)PTR_PTR_1126b26f0;
      _objc_alloc();
      ppuVar3 = param_3;
      func_0x00010bdf62a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01d120(param_1,ppuVar14,param_4,puVar17,puVar10,0,ppuVar3);
      func_0x00010c14c720(puVar2,param_4,ppuVar14);
      _objc_release(ppuVar14);
      _objc_release(ppuVar3);
    }
    ppuVar3 = ppuStack_1f8;
    if (unaff_x21 != (undefined **)0x0) {
      if (lStack_1e8 != 0) {
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
        _objc_alloc();
        func_0x00010bffa220();
        param_1 = (undefined *)(double)lStack_1e8;
        param_2 = 0;
        ppuVar14 = ppuVar3;
        func_0x00010bfe98e0(param_1,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        _CGImageRelease(ppuStack_1f8);
        ppuVar3 = ppuVar14;
        _objc_retainAutorelease();
        func_0x00010bdc1020();
        _CGImageRetain();
        _objc_release(ppuVar14);
      }
      func_0x00010c29b640(param_3);
      ppuVar14 = param_3;
      puVar5 = param_1;
      uVar6 = param_2;
      func_0x00010be62880();
      if ((int)ppuVar14 != 0) {
        func_0x00010c29b420(param_3);
        param_1 = puVar5;
        param_2 = uVar6;
      }
      ppuVar14 = param_3;
      func_0x00010bfe85c0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar14 == (undefined **)0x0) {
        _objc_release();
        ppuVar14 = (undefined **)PTR_PTR_1126bf488;
      }
      else {
        cVar1 = *(char *)(ppuVar14 + 1);
        _objc_release();
        ppuVar14 = &PTR_PTR_1126bf498;
        if (cVar1 == '\0') {
          ppuVar14 = &PTR_PTR_1126bf488;
        }
        ppuVar14 = (undefined **)*ppuVar14;
      }
      func_0x00010bf41dc0(param_1,param_2,ppuVar14,param_4,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720(puVar2,param_4,ppuVar14);
      _objc_release(ppuVar14);
    }
    if (ppuVar3 != (undefined **)0x0) {
      _CGImageRelease(ppuVar3);
    }
    puVar5 = puVar2;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      ppuVar14 = param_3;
      func_0x00010bfe85c0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar14 == (undefined **)0x0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar5 = ppuVar14[8];
      }
      _objc_retain(puVar5);
      _objc_release(puVar5);
      _objc_release(ppuVar14);
      if (puVar5 != (undefined *)0x0) {
        ppuVar14 = (undefined **)PTR_PTR_1126b26c8;
        func_0x00010c22b820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_4,ppuVar14);
        _objc_release(ppuVar14);
      }
    }
    _objc_release(puVar10);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar4);
    _objc_release(unaff_x21);
LAB_108569894:
    ppuVar3 = param_3;
    func_0x00010be62860();
    if ((int)ppuVar3 != 0) {
      unaff_x21 = (undefined **)param_3[1];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_3;
      func_0x00010bfe85c0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar13 = (undefined **)0x0;
      }
      else {
        ppuVar13 = (undefined **)ppuVar3[0xc];
      }
      _objc_retain(ppuVar13);
      ppuVar14 = ppuVar13;
      func_0x00010c299740();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = unaff_x21;
      func_0x00010c299720(unaff_x21,param_4,ppuVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14c720(puVar2,param_4,ppuVar7);
      _objc_release(ppuVar7);
      _objc_release(ppuVar14);
      _objc_release(ppuVar13);
      _objc_release(ppuVar3);
      _objc_release(unaff_x21);
    }
    puVar4 = puVar2;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar2;
      func_0x00010bf51e00(puVar2);
    }
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) break;
    ___stack_chk_fail();
LAB_1085699a8:
    lStack_1e8 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108569a30; end: 108569a43;  */

void FUN_108569a30(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b26d8,PTR_s_entryWithFilterName_filterConfig_1125c37f0,0,param_2);
  return;
}



/* Entry: 108569a44; end: 108569a9b;  */

void FUN_108569a44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b26d8;
  func_0x00010bfadea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97960(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108569a9c; end: 108569b53;  */

void FUN_108569a9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2708;
  lVar2 = *(long *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (lVar2 == 0) {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    func_0x00010c0db660(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c01ce60(puVar1);
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010bdf5dc0((float)lVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  func_0x00010befa120(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108569b54; end: 108569c1b;  */

void FUN_108569b54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c26a1c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0d9160();
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126b26f8;
  _objc_alloc(PTR_PTR_1126b26f8);
  func_0x00010c0db660(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c01cea0(puVar2);
  func_0x00010befa120(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108569c1c; end: 10856a50b; -[SCVideoTranscodingCommandsGenerator generateCPUCommands] */

void FUN_108569c1c(double param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  code cVar15;
  code *pcVar16;
  code *pcVar17;
  code *unaff_x23;
  long unaff_x24;
  code *unaff_x25;
  undefined8 unaff_x26;
  long lVar18;
  undefined8 uVar19;
  long unaff_x27;
  double dVar20;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  pcVar11 = param_3;
  func_0x00010bfe85c0();
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = param_3;
  if (pcVar11 == (code *)0x0) {
    _objc_retain();
    pcVar17 = (code *)0x0;
  }
  else {
    pcVar17 = *(code **)(pcVar11 + 0x10);
    _objc_retain(pcVar17);
    if (pcVar17 != (code *)0x0) {
      unaff_x23 = param_3;
      func_0x00010bfe85c0();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x23 == (code *)0x0) goto LAB_10856a4a4;
      unaff_x24 = *(long *)(unaff_x23 + 0x70);
      do {
        _objc_retain(unaff_x24);
        unaff_x25 = pcVar6;
        func_0x00010bfe85c0();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x25 == (code *)0x0) {
          unaff_x26 = 0;
        }
        else {
          unaff_x26 = *(undefined8 *)(unaff_x25 + 0x10);
        }
        _objc_retain(unaff_x26);
        pcVar5 = pcVar6;
        func_0x00010be43ea0(pcVar6);
        unaff_x27 = unaff_x24;
        func_0x00010c299300(unaff_x24,param_4,unaff_x26,0,pcVar5);
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x27 == 0) {
          bVar3 = true;
LAB_108569dc8:
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
        }
        else {
          bVar2 = false;
LAB_108569d2c:
          pcVar5 = pcVar6;
          func_0x00010bfe85c0();
          _objc_retainAutoreleasedReturnValue();
          if (pcVar5 == (code *)0x0) {
            _objc_retain();
LAB_108569d60:
            func_0x00010bfe85c0();
            _objc_retainAutoreleasedReturnValue();
            if (pcVar6 == (code *)0x0) {
              lVar12 = 0;
            }
            else {
              lVar12 = *(long *)(pcVar6 + 0x20);
            }
            _objc_retain(lVar12);
            lVar18 = lVar12;
            func_0x00010bf529e0();
            bVar3 = lVar18 != 0;
            _objc_release(lVar12);
            _objc_release(pcVar6);
            lVar12 = 0;
          }
          else {
            lVar12 = *(long *)(pcVar5 + 0x50);
            _objc_retain(lVar12);
            if (lVar12 == 0) goto LAB_108569d60;
            bVar3 = true;
          }
          _objc_release(lVar12);
          _objc_release(pcVar5);
          if (!bVar2) goto LAB_108569dc8;
        }
        _objc_release(pcVar17);
        _objc_release(pcVar11);
        bVar3 = (bool)(bVar3 ^ 1);
        pcVar6 = param_3;
        func_0x00010bfe85c0();
        _objc_retainAutoreleasedReturnValue();
        if (pcVar6 != (code *)0x0) {
          param_1 = *(double *)(pcVar6 + 0x48);
          bVar3 = (bool)((long)param_1 == 0 & bVar3);
        }
        _objc_release();
        pcVar6 = param_3;
        func_0x00010be33da0();
        if ((bVar3) && ((int)pcVar6 != 0)) {
          pcVar11 = param_3;
          func_0x00010bdf6200();
          _objc_retainAutoreleasedReturnValue();
          if (pcVar11 == (code *)0x0) {
            pcVar17 = (code *)0x0;
          }
          else {
            pcVar6 = param_3;
            func_0x00010bfe85c0();
            _objc_retainAutoreleasedReturnValue();
            if (pcVar6 == (code *)0x0) {
              cVar15 = (code)0x0;
            }
            else {
              cVar15 = pcVar6[8];
            }
            _objc_release();
            pcVar17 = pcVar11;
            _objc_retainAutorelease();
            func_0x00010bdc1020();
            if (((byte)cVar15 & 1) == 0) {
              _CGImageRetain();
            }
            else {
              func_0x00010c29b640(param_3);
              func_0x00010b690c88();
            }
          }
          unaff_x23 = param_3;
          func_0x00010bfe85c0();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x23 == (code *)0x0) {
            _objc_retain();
LAB_10856a034:
            _objc_release(unaff_x23);
          }
          else {
            lVar12 = *(long *)(unaff_x23 + 0x10);
            _objc_retain(lVar12);
            if (lVar12 == 0) goto LAB_10856a034;
            pcVar6 = param_3;
            func_0x00010bfe85c0();
            _objc_retainAutoreleasedReturnValue();
            if (pcVar6 == (code *)0x0) {
              lVar18 = 0;
            }
            else {
              lVar18 = *(long *)(pcVar6 + 0x70);
            }
            _objc_retain(lVar18);
            pcVar5 = param_3;
            func_0x00010bfe85c0();
            _objc_retainAutoreleasedReturnValue();
            if (pcVar5 == (code *)0x0) {
              uVar13 = 0;
            }
            else {
              uVar13 = *(undefined8 *)(pcVar5 + 0x10);
            }
            _objc_retain(uVar13);
            pcVar16 = param_3;
            func_0x00010be43ea0(param_3);
            lVar7 = lVar18;
            func_0x00010c299300(lVar18,param_4,uVar13,0,pcVar16);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar13);
            _objc_release(pcVar5);
            _objc_release(lVar18);
            _objc_release(pcVar6);
            _objc_release(lVar12);
            _objc_release(unaff_x23);
            if (lVar7 != 0) {
              unaff_x23 = param_3;
              func_0x00010bfe85c0();
              _objc_retainAutoreleasedReturnValue();
              if (unaff_x23 == (code *)0x0) {
                uVar13 = 0;
              }
              else {
                uVar13 = *(undefined8 *)(unaff_x23 + 0x70);
              }
              _objc_retain(uVar13);
              pcVar6 = param_3;
              func_0x00010bfe85c0();
              _objc_retainAutoreleasedReturnValue();
              if (pcVar6 == (code *)0x0) {
                uVar19 = 0;
              }
              else {
                uVar19 = *(undefined8 *)(pcVar6 + 0x10);
              }
              _objc_retain(uVar19);
              pcVar5 = param_3;
              func_0x00010be43ea0(param_3);
              uVar8 = uVar13;
              func_0x00010c299300(uVar13,param_4,uVar19,0,pcVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14c720(puVar4,param_4,uVar8);
              _objc_release(uVar8);
              _objc_release(uVar19);
              _objc_release(pcVar6);
              _objc_release(uVar13);
              goto LAB_10856a034;
            }
          }
          puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = param_3;
          func_0x00010c29b880();
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar6;
          func_0x00010bf529e0();
          _objc_release(pcVar6);
          if (pcVar5 != (code *)0x0) {
            param_1 = 0.0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_138 = 0;
            plStack_140 = (long *)0x0;
            lStack_148 = 0;
            uStack_150 = 0;
            pcVar6 = param_3;
            func_0x00010c29b880();
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = pcVar6;
            func_0x00010bf52a60();
            puVar10 = PTR___NSConcreteStackBlock_11034bd00;
            if (pcVar5 != (code *)0x0) {
              lVar12 = *plStack_140;
              unaff_x23 = FUN_10856a5c4;
              do {
                pcVar16 = (code *)0x0;
                do {
                  if (*plStack_140 != lVar12) {
                    _objc_enumerationMutation(pcVar6);
                  }
                  uVar19 = *(undefined8 *)(lStack_148 + (long)pcVar16 * 8);
                  uVar13 = uVar19;
                  func_0x00010c27a460(uVar19);
                  _objc_retainAutoreleasedReturnValue();
                  puStack_190 = puVar10;
                  uStack_188 = 0xc2000000;
                  pcStack_180 = FUN_10856a50c;
                  puStack_178 = &UNK_110a54f48;
                  uStack_158 = 0;
                  _objc_retain(puVar9);
                  puStack_1c8 = puVar10;
                  uStack_1c0 = 0xc2000000;
                  pcStack_1b8 = FUN_10856a5c4;
                  puStack_1b0 = &UNK_110a54f78;
                  pcStack_1a8 = param_3;
                  puStack_170 = puVar9;
                  pcStack_168 = param_3;
                  uStack_160 = uVar19;
                  _objc_retain(puVar9);
                  puStack_1a0 = puVar9;
                  uStack_198 = uVar19;
                  func_0x00010c0c0400(uVar13,param_4,&puStack_190,&puStack_1c8);
                  _objc_release(uVar13);
                  func_0x00010bfe6ac0(uVar19);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar14,param_4,uVar19);
                  _objc_release(uVar19);
                  _objc_release(puStack_1a0);
                  _objc_release(puStack_170);
                  pcVar16 = pcVar16 + 1;
                } while (pcVar5 != pcVar16);
                pcVar5 = pcVar6;
                func_0x00010bf52a60(pcVar6,param_4,&uStack_150,auStack_108,0x10);
              } while (pcVar5 != (code *)0x0);
            }
            _objc_release(pcVar6);
            puVar10 = PTR_PTR_1126da098;
            _objc_alloc(PTR_PTR_1126da098);
            pcVar6 = param_3;
            func_0x00010bdf62a0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c01d100(puVar10,param_4,puVar14,puVar9,pcVar6);
            func_0x00010c14c720(puVar4,param_4,puVar10);
            _objc_release(puVar10);
            _objc_release(pcVar6);
          }
          if (pcVar11 != (code *)0x0) {
            func_0x00010c29b640(param_3);
            pcVar6 = param_3;
            dVar20 = param_1;
            uVar13 = param_2;
            func_0x00010be62880();
            if ((int)pcVar6 != 0) {
              func_0x00010c29b420(param_3);
              param_1 = dVar20;
              param_2 = uVar13;
            }
            pcVar6 = param_3;
            func_0x00010bfe85c0();
            _objc_retainAutoreleasedReturnValue();
            if (pcVar6 == (code *)0x0) {
              _objc_release();
              puVar10 = PTR_PTR_1126bf490;
            }
            else {
              cVar15 = pcVar6[8];
              _objc_release();
              ppuVar1 = &PTR_PTR_1126bf4a0;
              if (cVar15 == (code)0x0) {
                ppuVar1 = &PTR_PTR_1126bf490;
              }
              puVar10 = *ppuVar1;
            }
            func_0x00010bf41dc0(param_1,param_2,puVar10,param_4,pcVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14c720(puVar4,param_4,puVar10);
            _objc_release(puVar10);
          }
          if (pcVar17 != (code *)0x0) {
            _CGImageRelease(pcVar17);
          }
          puVar10 = puVar4;
          func_0x00010bf529e0();
          if (puVar10 == (undefined *)0x0) {
            pcVar6 = param_3;
            func_0x00010bfe85c0();
            _objc_retainAutoreleasedReturnValue();
            if (pcVar6 == (code *)0x0) {
              pcVar17 = (code *)0x0;
            }
            else {
              pcVar17 = *(code **)(pcVar6 + 0x40);
            }
            _objc_retain(pcVar17);
            _objc_release(pcVar17);
            _objc_release(pcVar6);
            if (pcVar17 != (code *)0x0) {
              puVar10 = PTR_PTR_1126da0a0;
              func_0x00010c22b820(PTR_PTR_1126da0a0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4,param_4,puVar10);
              _objc_release(puVar10);
            }
          }
          _objc_release(puVar9);
          _objc_release(puVar14);
          _objc_release(pcVar11);
        }
        pcVar5 = param_3;
        func_0x00010be62860();
        pcVar6 = param_3;
        if ((int)pcVar5 != 0) {
          pcVar11 = *(code **)(param_3 + 8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe85c0();
          _objc_retainAutoreleasedReturnValue();
          if (pcVar6 == (code *)0x0) {
            pcVar17 = (code *)0x0;
          }
          else {
            pcVar17 = *(code **)(pcVar6 + 0x60);
          }
          _objc_retain(pcVar17);
          pcVar5 = pcVar17;
          func_0x00010c299740(pcVar17);
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = pcVar11;
          func_0x00010c299700(pcVar11,param_4,pcVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14c720(puVar4,param_4,unaff_x23);
          _objc_release(unaff_x23);
          _objc_release(pcVar5);
          _objc_release(pcVar17);
          _objc_release(pcVar6);
          _objc_release(pcVar11);
        }
        puVar14 = puVar4;
        func_0x00010bf529e0();
        if (puVar14 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = puVar4;
          func_0x00010bf51e00(puVar4);
        }
        _objc_release(puVar4);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
          return;
        }
        ___stack_chk_fail();
LAB_10856a4a4:
        unaff_x24 = 0;
      } while( true );
    }
  }
  bVar2 = true;
  goto LAB_108569d2c;
}



/* Entry: 10856a50c; end: 10856a5c3;  */

void FUN_10856a50c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2708;
  lVar2 = *(long *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (lVar2 == 0) {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    func_0x00010c0db660(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c01ce60(puVar1);
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010bdf5dc0((float)lVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  func_0x00010befa120(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10856a5c4; end: 10856a68b;  */

void FUN_10856a5c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c26a1c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0d9160();
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126b26f8;
  _objc_alloc(PTR_PTR_1126b26f8);
  func_0x00010c0db660(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c01cea0(puVar2);
  func_0x00010befa120(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10856a68c; end: 10856a6cb; -[SCVideoTranscodingCommandsGenerator _isSpectaclesMedia] */

bool FUN_10856a68c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c0c67c0();
  if (lVar2 == 5) {
    bVar1 = true;
  }
  else {
    func_0x00010c0c67c0(param_1);
    bVar1 = param_1 == 6;
  }
  return bVar1;
}



/* Entry: 10856a6cc; end: 10856a733; -[SCVideoTranscodingCommandsGenerator _isCircular] */

undefined8 FUN_10856a6cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfe85c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
  }
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x00010c06e8e0(uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10856a734; end: 10856a82b; -[SCVideoTranscodingCommandsGenerator _cropOverlayIfNeeded] */

void FUN_10856a734(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = param_3;
  func_0x00010c0ef960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010be3eea0();
    lVar2 = param_3;
    func_0x00010c0c4a00();
    lVar3 = param_3;
    func_0x00010c0ef960(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar5 = param_1;
    dVar6 = param_2;
    func_0x00010c29b640(param_3);
    _objc_release(lVar3);
    lVar4 = param_3;
    func_0x00010c0ef960(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    if ((((int)lVar1 != 0) && (lVar2 == 2)) && (param_2 != dVar6 || param_1 != dVar5)) {
      func_0x00010be6ec40(param_3);
      func_0x00010bf5c7c0(lVar4,param_4,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10856a82c; end: 10856a94b; -[SCVideoTranscodingCommandsGenerator _overlayImageRectForTargetVideoSize] */

double FUN_10856a82c(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = param_3;
  func_0x00010c0ef960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar5 = param_1;
  dVar4 = param_2;
  func_0x00010c29b640(param_3);
  dVar3 = dVar5;
  _objc_release(uVar2);
  bVar1 = false;
  if ((param_1 == dVar5) && (bVar1 = false, !NAN(param_2) && !NAN(dVar4))) {
    bVar1 = param_2 == dVar4;
  }
  if (bVar1) {
    func_0x00010c29b640(param_3);
    func_0x00010c29b640(param_3);
    dVar5 = 0.0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0ef960(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar5 = dVar3;
    func_0x00010c29b640(param_3);
    dVar5 = (dVar3 - dVar5) * 0.5;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0ef960(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c29b640(param_3);
    _objc_release(uVar2);
    func_0x00010c29b640(param_3);
    func_0x00010c29b640(param_3);
  }
  return dVar5;
}



/* Entry: 10856a94c; end: 10856ad27; -[SCVideoTranscodingCommandsGenerator _hasEdits] */

uint FUN_10856a94c(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar11 = (uint)&uStack_90;
  lVar6 = param_1;
  func_0x00010c0ef960();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lVar7 = param_1;
    func_0x00010bfe85c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      _objc_retain();
LAB_10856a9c0:
      lVar8 = param_1;
      func_0x00010c29b880();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar8;
      func_0x00010bf529e0();
      if (lVar10 == 0) {
        lVar10 = param_1;
        func_0x00010bfe85c0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar10 == 0) {
          _objc_retain();
LAB_10856aa18:
          lVar12 = param_1;
          func_0x00010bfe85c0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar12 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = *(long *)(lVar12 + 0x18);
          }
          _objc_retain(lVar14);
          lVar2 = lVar14;
          func_0x00010bf529e0();
          if (lVar2 == 0) {
            lVar2 = param_1;
            func_0x00010bfe85c0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar2 == 0) {
              lVar15 = 0;
            }
            else {
              lVar15 = *(long *)(lVar2 + 0x20);
            }
            _objc_retain(lVar15);
            lVar3 = lVar15;
            func_0x00010bf529e0(lVar15);
            uVar16 = (uint)(lVar3 != 0);
            _objc_release(lVar15);
            _objc_release(lVar2);
          }
          else {
            uVar16 = 1;
          }
          _objc_release(lVar14);
          _objc_release(lVar12);
          lVar12 = 0;
        }
        else {
          lVar12 = *(long *)(lVar10 + 0x50);
          _objc_retain(lVar12);
          if (lVar12 == 0) goto LAB_10856aa18;
          uVar16 = 1;
        }
        _objc_release(lVar12);
        _objc_release(lVar10);
      }
      else {
        uVar16 = 1;
      }
      _objc_release(lVar8);
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(lVar7 + 0x10);
      _objc_retain(lVar8);
      if (lVar8 == 0) goto LAB_10856a9c0;
      uVar16 = 1;
    }
    _objc_release(lVar8);
    _objc_release(lVar7);
  }
  else {
    uVar16 = 1;
  }
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010bfe85c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    _objc_retain();
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x40);
    _objc_retain(lVar7);
    if (lVar7 != 0) {
      lVar8 = param_1;
      func_0x00010bfe85c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 == 0) {
        _objc_retain();
LAB_10856ab54:
        lVar10 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        lVar10 = *(long *)(lVar8 + 0x40);
        _objc_retain(lVar10);
        if (lVar10 == 0) goto LAB_10856ab54;
        func_0x00010bf27a60(&uStack_90,lVar10,param_2,0);
      }
      _CGAffineTransformIsIdentity(&uStack_90);
      uVar11 = uVar11 ^ 1;
      _objc_release(lVar10);
      _objc_release(lVar8);
      goto LAB_10856ab80;
    }
  }
  uVar11 = 0;
LAB_10856ab80:
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010bfe85c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    dVar17 = 0.0;
  }
  else {
    dVar17 = *(double *)(lVar6 + 0x38);
  }
  dVar18 = ABS(1.0 - dVar17);
  dVar17 = ABS(dVar17 + 1.0) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar18) && (bVar1 = false, !NAN(dVar18) && !NAN(dVar17))) {
    bVar1 = dVar18 < dVar17;
  }
  if (bVar1) {
    uVar13 = 0;
  }
  else {
    lVar7 = param_1;
    func_0x00010bfe85c0();
    _objc_retainAutoreleasedReturnValue();
    dVar17 = 0.0;
    if (lVar7 != 0) {
      dVar17 = *(double *)(lVar7 + 0x38);
    }
    dVar18 = ABS(dVar17 + 0.0) * 2.220446049250313e-16;
    if (dVar18 <= 2.2250738585072014e-308) {
      dVar18 = 2.2250738585072014e-308;
    }
    uVar13 = (uint)(dVar18 <= ABS(0.0 - dVar17));
    _objc_release();
  }
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010bfe85c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar6 + 0x60);
  }
  _objc_retain(uVar9);
  uVar4 = uVar9;
  func_0x00010c299740(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c1303e0();
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(lVar6);
  func_0x00010bfe85c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x68);
  }
  uVar11 = uVar11 | uVar16 | uVar13 | (uint)uVar5;
  _objc_retain(lVar6);
  if (lVar6 != 0) {
    uVar11 = 1;
  }
  _objc_release(lVar6);
  _objc_release(param_1);
  return uVar11;
}



/* Entry: 10856ad28; end: 10856ae27; -[SCVideoTranscodingCommandsGenerator _createdShiftedImageProcessProviderWithDisparityXOffset:forVideoTrackedImage:staticTransform:] */

void FUN_10856ad28(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c27ada0(param_5);
  dVar5 = (double)SUB84(param_1,0);
  dVar6 = dVar3 + dVar5;
  func_0x00010c27ada0(param_5);
  puVar1 = PTR_PTR_1126b2700;
  _objc_alloc(PTR_PTR_1126b2700);
  func_0x00010c14e120(param_5);
  dVar4 = dVar3;
  func_0x00010c141a80(param_5);
  _objc_release(param_5);
  func_0x00010c055500(dVar6,dVar5,dVar3,dVar4,puVar1);
  puVar2 = PTR_PTR_1126b2708;
  _objc_alloc(PTR_PTR_1126b2708);
  func_0x00010c0db660(param_4);
  _objc_release(param_4);
  func_0x00010c01ce60(dVar6,dVar5,puVar2,param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10856ae28; end: 10856ae8b; -[SCVideoTranscodingCommandsGenerator _croppingStateForVideoTrackedImages] */

void FUN_10856ae28(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010be3eea0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bfe85c0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x40);
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10856ae8c; end: 10856aeef; -[SCVideoTranscodingCommandsGenerator _needsVideoCircleRendererOrCropping] */

bool FUN_10856ae8c(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010be62860();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c0c4a00();
    if (uVar2 == 2) {
      func_0x00010bdf62a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = param_1 != 0;
      _objc_release();
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10856aef0; end: 10856aff3; -[SCVideoTranscodingCommandsGenerator _needsVideoCircleRenderer] */

void FUN_10856aef0(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = param_1;
  func_0x00010be3eea0();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bfe85c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(uVar1 + 0x60);
    }
    _objc_retain(lVar5);
    lVar2 = lVar5;
    func_0x00010c299740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(uVar1);
    if ((lVar2 != 0) && (uVar1 = param_1, func_0x00010be33da0(), (uVar1 & 1) == 0)) {
      func_0x00010bfe85c0();
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x60);
      }
      _objc_retain(uVar4);
      uVar3 = uVar4;
      func_0x00010c299740(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1303e0();
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_release(param_1);
    }
  }
  return;
}



/* Entry: 10856aff4; end: 10856affb; -[SCVideoTranscodingCommandsGenerator mediaSource] */

undefined8 FUN_10856aff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10856affc; end: 10856b003; -[SCVideoTranscodingCommandsGenerator setMediaSource:] */

void FUN_10856affc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10856b004; end: 10856b00b; -[SCVideoTranscodingCommandsGenerator mediaDestination] */

undefined8 FUN_10856b004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10856b00c; end: 10856b013; -[SCVideoTranscodingCommandsGenerator setMediaDestination:] */

void FUN_10856b00c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10856b014; end: 10856b01b; -[SCVideoTranscodingCommandsGenerator videoSourceSize] */

undefined1  [16] FUN_10856b014(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x40);
}



/* Entry: 10856b01c; end: 10856b023; -[SCVideoTranscodingCommandsGenerator setVideoSourceSize:] */

void FUN_10856b01c(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x40) = param_1;
  *(undefined8 *)(param_3 + 0x48) = param_2;
  return;
}



/* Entry: 10856b024; end: 10856b02b; -[SCVideoTranscodingCommandsGenerator videoTargetSize] */

undefined1  [16] FUN_10856b024(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x50);
}



/* Entry: 10856b02c; end: 10856b033; -[SCVideoTranscodingCommandsGenerator setVideoTargetSize:] */

void FUN_10856b02c(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x50) = param_1;
  *(undefined8 *)(param_3 + 0x58) = param_2;
  return;
}



/* Entry: 10856b034; end: 10856b03b; -[SCVideoTranscodingCommandsGenerator imageProcessData] */

undefined8 FUN_10856b034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10856b03c; end: 10856b06b; -[SCVideoTranscodingCommandsGenerator setImageProcessData:] */

void FUN_10856b03c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10856b06c; end: 10856b073; -[SCVideoTranscodingCommandsGenerator targetTrajectoryFactory] */

undefined8 FUN_10856b06c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10856b074; end: 10856b0a3; -[SCVideoTranscodingCommandsGenerator setTargetTrajectoryFactory:] */

void FUN_10856b074(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10856b0a4; end: 10856b0d3; -[SCVideoTranscodingCommandsGenerator setOverlayImage:] */

void FUN_10856b0a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10856b0d4; end: 10856b0db; -[SCVideoTranscodingCommandsGenerator videoTrackedImages] */

undefined8 FUN_10856b0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10856b0dc; end: 10856b10b; -[SCVideoTranscodingCommandsGenerator setVideoTrackedImages:] */

void FUN_10856b0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10856b10c; end: 10856b15f; -[SCVideoTranscodingCommandsGenerator .cxx_destruct] */

void FUN_10856b10c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10856b160; end: 10856b283; -[SCVideoTranscodingImageProcessorProvider initWithRequestInput:requestOutput:targetTrajectoryFactory:spectaclesImageProcessCommandFactory:circumstanceEngine:] */

undefined1 *
FUN_10856b160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fcd20;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10856b284; end: 10856b3b3; -[SCVideoTranscodingImageProcessorProvider generateImageProcessorWithSourceSize:targetSize:orientation:useUpgradedIpp:overlayImageDataHandler:] */

void FUN_10856b284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,int param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_9);
  if (*(long *)(param_5 + 8) == 0) {
    _objc_retain(0);
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_5 + 8) + 8);
    _objc_retain(lVar2);
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 8);
      goto LAB_10856b2e8;
    }
  }
  lVar3 = 0;
LAB_10856b2e8:
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010911c884(lVar3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    param_5 = 0;
  }
  else if (param_8 == 0) {
    func_0x00010bdf4c40(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdf5420();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}


