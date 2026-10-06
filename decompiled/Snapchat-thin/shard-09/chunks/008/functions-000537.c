/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071f30ac; end: 1071f30e7; -[Story hash] */

long FUN_1071f30ac(long param_1)

{
  long lVar1;
  
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return lVar1 + 0x3c1;
}



/* Entry: 1071f30e8; end: 1071f3153; -[Story hasOfficialStoryAttribution] */

uint FUN_1071f30e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c22c0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return (uint)puVar2 ^ 1;
}



/* Entry: 1071f3154; end: 1071f315b; -[Story isHD] */

undefined8 FUN_1071f3154(void)

{
  return 0;
}



/* Entry: 1071f315c; end: 1071f3193; -[Story isSpectaclesMedia] */

ulong FUN_1071f315c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c07f180();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c07f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isSpectaclesImage_1125fd648);
  return param_1;
}



/* Entry: 1071f3194; end: 1071f319b; -[Story isSpectacles60fps] */

undefined8 FUN_1071f3194(void)

{
  return 0;
}



/* Entry: 1071f319c; end: 1071f31f3; -[Story spectaclesExportSize] */

undefined1  [16] FUN_1071f319c(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  iVar1 = (int)param_1;
  func_0x00010c06e920();
  if ((param_1 & 1) == 0) {
    uVar2 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar3 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    func_0x00010c07f0e0();
    uVar2 = 0x409b000000000000;
    uVar3 = uVar2;
    if (iVar1 == 0) {
      uVar2 = 0x4092000000000000;
      uVar3 = uVar2;
    }
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1071f31f4; end: 1071f334f; -[Story isGenAISnap] */

undefined1 * FUN_1071f31f4(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c0c5c40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf529e0();
  _objc_release();
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    func_0x00010c0c5c40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bf52a60();
    puVar6 = (undefined1 *)0x0;
    if (puVar1 != (undefined1 *)0x0) {
      lVar5 = *plStack_100;
      do {
        puVar6 = (undefined1 *)0x0;
        do {
          if (*plStack_100 != lVar5) {
            _objc_enumerationMutation(param_1);
          }
          lVar4 = *(long *)(lStack_108 + (long)puVar6 * 8);
          lVar2 = lVar4;
          func_0x00010c0ed1a0();
          if (((lVar2 == 5) || (lVar2 = lVar4, func_0x00010c0ed1a0(), lVar2 == 6)) ||
             (func_0x00010c0ed1a0(), lVar4 == 7)) {
            puVar6 = (undefined1 *)0x1;
            goto LAB_1071f3308;
          }
          puVar6 = puVar6 + 1;
        } while (puVar1 != puVar6);
        puVar1 = param_1;
        puVar3 = &uStack_110;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
      puVar6 = (undefined1 *)0x0;
    }
LAB_1071f3308:
    _objc_release();
    puVar1 = param_1;
    param_3 = (undefined1 *)puVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar6 = puVar1;
  func_0x00010bf0c480();
  if (param_3 != puVar6) {
    func_0x00010c16ae60(puVar1);
    puVar6 = puVar1;
    func_0x00010c0c69a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258f60();
    _objc_release(puVar6);
    if (param_3 != (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1b8290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_setLastMediaLoadError__11264bac8,0);
      return puVar1;
    }
  }
  return puVar6;
}



/* Entry: 1071f3350; end: 1071f33d3; -[Story setMediaState:] */

void FUN_1071f3350(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf0c480();
  if (param_3 != lVar1) {
    func_0x00010c16ae60(param_1);
    lVar1 = param_1;
    func_0x00010c0c69a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258f60();
    _objc_release(lVar1);
    if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1b8290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setLastMediaLoadError__11264bac8,0);
      return;
    }
  }
  return;
}



/* Entry: 1071f33d4; end: 1071f33d7; -[Story mediaState] */

void FUN_1071f33d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_atomicMediaState_1125a0ac8);
  return;
}



/* Entry: 1071f33d8; end: 1071f343b; -[Story updateMediaState:error:] */

void FUN_1071f33d8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010c0c6960();
  if (lVar2 != param_3) {
    uVar1 = param_4;
    if (param_3 != 0) {
      uVar1 = 0;
    }
    func_0x00010c1b8280(param_1,param_2,uVar1);
    func_0x00010c1c5340(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071f343c; end: 1071f34eb; -[Story updatePostingState:] */

void FUN_1071f343c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c105980();
  if (lVar1 == param_3) {
    return;
  }
  func_0x00010c105980(param_1);
  lVar1 = param_1;
  func_0x00010c1df7c0(param_1,param_2,param_3);
  func_0x000107a0478c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288b20(lVar2,param_2,param_3,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071f34ec; end: 1071f34ef; -[Story checkAndSetStreamingMediaInfo:] */

void FUN_1071f34ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20e650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStreamingMediaInfo__1126613b8);
  return;
}



/* Entry: 1071f34f0; end: 1071f354f; -[Story mediaStateListenerAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f34f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127655f4;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126d5258;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1071f3550; end: 1071f359f; -[Story addMediaStateListener:] */

void FUN_1071f3550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0c69a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071f35a0; end: 1071f35ef; -[Story removeMediaStateListener:] */

void FUN_1071f35a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0c69a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071f35f0; end: 1071f367b; +[Story _postNotificationWithName:object:userInfo:] */

void FUN_1071f35f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf68fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071f367c; end: 1071f368f; -[Story handleVideoProcessingCallback:data:retriable:error:] */

void FUN_1071f367c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  if (param_6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c29adb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_videoProcessingDidFailForSnapVid_112684590,param_3,param_5,param_6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c29adf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_videoProcessingDidSucceedForSnap_1126845a0);
  return;
}



/* Entry: 1071f3690; end: 1071f37b7; -[Story videoProcessingDidSucceedForSnapVideoFilter:data:] */

void FUN_1071f3690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1071f3744;
  puStack_50 = &UNK_1108500c8;
  uStack_48 = param_3;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be995e0(param_1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071f37b8; end: 1071f38e3; -[Story _videoProcessingDidSucceedForSnapVideoFilter:data:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f37b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  func_0x00010c11cec0(param_3);
  lVar1 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5060();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4480();
  _objc_release(param_4);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c105980();
  if (lVar1 == -6) {
    func_0x000107a30ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0d20();
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + _DAT_112765574) = 1;
  }
  else {
    lVar1 = param_1;
    func_0x00010c105980();
    if (0 < lVar1) {
      func_0x000107a30ee0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c105980(param_1);
      func_0x00010c0b0c80(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c28e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_uploadMedia_112681298);
  return;
}



/* Entry: 1071f38e4; end: 1071f3b1f; -[Story videoProcessingDidFailForSnapVideoFilter:retriable:error:] */

void FUN_1071f38e4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b26c0;
  _objc_opt_class(PTR_PTR_1126b26c0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c241520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x1071f39f4;
    puStack_58 = &UNK_110841f80;
    uStack_50 = param_1;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(uStack_48);
  }
  else {
    func_0x00010bfa05e0(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1071f3b20; end: 1071f3c73; -[Story loggingParamsForViewingType:] */

undefined * FUN_1071f3b20(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ea2858;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dbf6f8;
  uVar2 = param_1;
  puStack_60 = puVar1;
  func_0x00010c0a7de0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110ea2878;
  uStack_58 = uVar2;
  func_0x00010c26f000(param_1);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_78,3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010c27df60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar4,param_2,param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  uVar5 = param_1;
  func_0x00010c27dd80();
  uVar2 = uVar5 + 1;
  if (uVar2 < 0x1c) {
    if ((1L << (uVar2 & 0x3f) & 0xb4b5dbbU) == 0) {
      if ((1L << (uVar2 & 0x3f) & 0x484a040U) != 0) {
        return (undefined *)0xa;
      }
    }
    else if ((((0x1a < uVar5 + 1) || ((1L << (uVar5 + 1 & 0x3f) & 0x6c6bd77U) == 0)) &&
             (uVar5 - 5 < 0x16)) && ((0x3f3fe3U >> (ulong)((uint)(uVar5 - 5) & 0x1f) & 1) != 0)) {
      return (undefined *)0xa;
    }
  }
  uVar2 = param_1;
  func_0x00010c06d9a0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c07dc60();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c0d7240();
      if ((uVar2 & 1) == 0) {
        func_0x00010c078fe0();
        puVar6 = (undefined *)0x3;
        if ((int)param_1 == 0) {
          puVar6 = (undefined *)0x0;
        }
      }
      else {
        puVar6 = (undefined *)0x1;
      }
    }
    else {
      puVar6 = (undefined *)0x6;
    }
  }
  else {
    puVar6 = (undefined *)0x17;
  }
  return puVar6;
}



/* Entry: 1071f3c74; end: 1071f3d6b; -[Story storySpecificType] */

undefined8 FUN_1071f3c74(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c27dd80();
  uVar2 = uVar1 + 1;
  if (uVar2 < 0x1c) {
    if ((1L << (uVar2 & 0x3f) & 0xb4b5dbbU) == 0) {
      if ((1L << (uVar2 & 0x3f) & 0x484a040U) != 0) {
        return 10;
      }
    }
    else if ((((0x1a < uVar1 + 1) || ((1L << (uVar1 + 1 & 0x3f) & 0x6c6bd77U) == 0)) &&
             (uVar1 - 5 < 0x16)) && ((0x3f3fe3U >> (ulong)((uint)(uVar1 - 5) & 0x1f) & 1) != 0)) {
      return 10;
    }
  }
  uVar2 = param_1;
  func_0x00010c06d9a0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c07dc60();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c0d7240();
      if ((uVar2 & 1) == 0) {
        func_0x00010c078fe0();
        uVar3 = 3;
        if ((int)param_1 == 0) {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 6;
    }
  }
  else {
    uVar3 = 0x17;
  }
  return uVar3;
}



/* Entry: 1071f3d6c; end: 1071f3d6f; -[Story myStorySpecificType] */

void FUN_1071f3d6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_storySpecificType_112674718);
  return;
}



/* Entry: 1071f3d70; end: 1071f3daf; -[Story myStoryType] */

undefined8 FUN_1071f3d70(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1;
  func_0x00010c074980();
  if ((param_1 & 1) == 0) {
    func_0x00010c078fe0();
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 6;
  }
  return uVar2;
}



/* Entry: 1071f3db0; end: 1071f3df3; -[Story isBrandSnapStory] */

undefined8 FUN_1071f3db0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfdcf80();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1071f3df4; end: 1071f3e47; -[Story baseLayerType] */

undefined8 FUN_1071f3df4(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)param_1;
  uVar2 = param_1;
  func_0x00010c074fe0();
  if ((uVar2 & 1) == 0) {
    func_0x00010c07f180();
    if ((param_1 & 1) == 0) {
      func_0x00010c0830a0();
      uVar3 = 6;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 5;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 1071f3e48; end: 1071f3e9b; -[Story storyTypeFromStory] */

undefined8 FUN_1071f3e48(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)param_1;
  uVar2 = param_1;
  func_0x00010c07b540();
  if ((uVar2 & 1) == 0) {
    func_0x00010c074980();
    if ((param_1 & 1) == 0) {
      func_0x00010c07dc60();
      uVar3 = 1;
      if (iVar1 == 0) {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 6;
    }
  }
  else {
    uVar3 = 7;
  }
  return uVar3;
}



/* Entry: 1071f3e9c; end: 1071f3eab; -[Story streamingFailureCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071f3e9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127655e8);
}



/* Entry: 1071f3eac; end: 1071f3ebb; -[Story setStreamingFailureCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f3eac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127655e8) = param_3;
  return;
}



/* Entry: 1071f3ebc; end: 1071f3ecb; -[Story isGroupStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1071f3ebc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276557c);
}



/* Entry: 1071f3ecc; end: 1071f3edb; -[Story setIsGroupStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f3ecc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276557c) = param_3;
  return;
}



/* Entry: 1071f3edc; end: 1071f3eeb; -[Story isSharedStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1071f3edc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112765580);
}



/* Entry: 1071f3eec; end: 1071f3efb; -[Story setIsSharedStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f3eec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112765580) = param_3;
  return;
}



/* Entry: 1071f3efc; end: 1071f3f0b; -[Story postingState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071f3efc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765584);
}



/* Entry: 1071f3f0c; end: 1071f3f1b; -[Story setPostingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f3f0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112765584) = param_3;
  return;
}



/* Entry: 1071f3f1c; end: 1071f3f2b; -[Story expirationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f3f1c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_1127655f8,1);
  return;
}



/* Entry: 1071f3f2c; end: 1071f3f37; -[Story setExpirationDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f3f2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1071f3f38; end: 1071f3f4b; -[Story shouldShowToastWhenPostComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1071f3f38(long param_1)

{
  return *(byte *)(param_1 + _DAT_112765588) & 1;
}



/* Entry: 1071f3f4c; end: 1071f3f5b; -[Story setShouldShowToastWhenPostComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f3f4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112765588) = param_3;
  return;
}



/* Entry: 1071f3f5c; end: 1071f3f6b; -[Story mediaKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f3f5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_1127655fc,1);
  return;
}



/* Entry: 1071f3f6c; end: 1071f3f77; -[Story setMediaKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f3f6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1071f3f78; end: 1071f3f87; -[Story mediaIv] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f3f78(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112765600,1);
  return;
}



/* Entry: 1071f3f88; end: 1071f3f93; -[Story setMediaIv:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f3f88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1071f3f94; end: 1071f3fa3; -[Story thumbnailIv] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f3f94(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112765604,1);
  return;
}



/* Entry: 1071f3fa4; end: 1071f3faf; -[Story setThumbnailIv:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f3fa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1071f3fb0; end: 1071f3fbf; -[Story mediaId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071f3fb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765608);
}



/* Entry: 1071f3fc0; end: 1071f3fcb; -[Story setMediaId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f3fc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1071f3fcc; end: 1071f3fdb; -[Story boltMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071f3fcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276560c);
}



/* Entry: 1071f3fdc; end: 1071f401b; -[Story setBoltMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f3fdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276560c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071f401c; end: 1071f402b; -[Story boltOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071f401c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765610);
}



/* Entry: 1071f402c; end: 1071f406b; -[Story setBoltOverlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f402c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112765610;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071f406c; end: 1071f407b; -[Story thumbnailURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f406c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112765614,1);
  return;
}



/* Entry: 1071f407c; end: 1071f4087; -[Story setThumbnailURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f407c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1071f4088; end: 1071f4097; -[Story requestContexts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4088(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112765618,1);
  return;
}



/* Entry: 1071f4098; end: 1071f40a3; -[Story setRequestContexts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4098(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1071f40a4; end: 1071f40b3; -[Story timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f40a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11276561c,1);
  return;
}



/* Entry: 1071f40b4; end: 1071f40bf; -[Story setTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f40b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1071f40c0; end: 1071f40cf; -[Story posterUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f40c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112765620,1);
  return;
}



/* Entry: 1071f40d0; end: 1071f40db; -[Story setPosterUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f40d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1071f40dc; end: 1071f40eb; -[Story userDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f40dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112765624,1);
  return;
}



/* Entry: 1071f40ec; end: 1071f40f7; -[Story setUserDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f40ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1071f40f8; end: 1071f4107; -[Story businessProfileHostUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f40f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112765628,1);
  return;
}



/* Entry: 1071f4108; end: 1071f4113; -[Story setBusinessProfileHostUsername:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4108(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1071f4114; end: 1071f4123; -[Story userPostedTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4114(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11276562c,1);
  return;
}



/* Entry: 1071f4124; end: 1071f412f; -[Story setUserPostedTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4124(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1071f4130; end: 1071f413f; -[Story markedAsViewedTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4130(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112765630,1);
  return;
}



/* Entry: 1071f4140; end: 1071f414b; -[Story setMarkedAsViewedTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4140(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1071f414c; end: 1071f415f; -[Story isOfficialStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1071f414c(long param_1)

{
  return *(byte *)(param_1 + _DAT_11276558c) & 1;
}



/* Entry: 1071f4160; end: 1071f416f; -[Story setIsOfficialStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4160(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276558c) = param_3;
  return;
}



/* Entry: 1071f4170; end: 1071f417f; -[Story officialBadgeType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071f4170(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112765590);
}



/* Entry: 1071f4180; end: 1071f418f; -[Story setOfficialBadgeType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4180(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112765590) = param_3;
  return;
}



/* Entry: 1071f4190; end: 1071f41a3; -[Story isPublic] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1071f4190(long param_1)

{
  return *(byte *)(param_1 + _DAT_112765594) & 1;
}



/* Entry: 1071f41a4; end: 1071f41b3; -[Story setIsPublic:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f41a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112765594) = param_3;
  return;
}



/* Entry: 1071f41b4; end: 1071f41c7; -[Story isPromotedStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1071f41b4(long param_1)

{
  return *(byte *)(param_1 + _DAT_112765598) & 1;
}



/* Entry: 1071f41c8; end: 1071f41d7; -[Story setIsPromotedStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f41c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112765598) = param_3;
  return;
}



/* Entry: 1071f41d8; end: 1071f41e7; -[Story streamingMediaInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f41d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_1127655e4,1);
  return;
}



/* Entry: 1071f41e8; end: 1071f41f3; -[Story setStreamingMediaInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f41e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1071f41f4; end: 1071f4203; -[Story boostMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f41f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112765634,1);
  return;
}



/* Entry: 1071f4204; end: 1071f420f; -[Story setBoostMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4204(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1071f4210; end: 1071f421f; -[Story spotlightEngagementMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4210(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112765638,1);
  return;
}



/* Entry: 1071f4220; end: 1071f422b; -[Story setSpotlightEngagementMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4220(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1071f422c; end: 1071f423f; -[Story viewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1071f422c(long param_1)

{
  return *(byte *)(param_1 + _DAT_11276559c) & 1;
}



/* Entry: 1071f4240; end: 1071f424f; -[Story setViewed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4240(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276559c) = param_3;
  return;
}



/* Entry: 1071f4250; end: 1071f425f; -[Story flushableStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4250(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11276563c,1);
  return;
}



/* Entry: 1071f4260; end: 1071f426b; -[Story setFlushableStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4260(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1071f426c; end: 1071f427f; -[Story needsAuthToFetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1071f426c(long param_1)

{
  return *(byte *)(param_1 + _DAT_1127655a0) & 1;
}



/* Entry: 1071f4280; end: 1071f428f; -[Story setNeedsAuthToFetch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4280(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127655a0) = param_3;
  return;
}



/* Entry: 1071f4290; end: 1071f429f; -[Story screenshotToReportCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071f4290(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127655a4);
}



/* Entry: 1071f42a0; end: 1071f42af; -[Story setScreenshotToReportCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f42a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127655a4) = param_3;
  return;
}



/* Entry: 1071f42b0; end: 1071f42c3; -[Story savedByUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1071f42b0(long param_1)

{
  return *(byte *)(param_1 + _DAT_1127655a8) & 1;
}



/* Entry: 1071f42c4; end: 1071f42d3; -[Story setSavedByUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f42c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127655a8) = param_3;
  return;
}



/* Entry: 1071f42d4; end: 1071f42e3; -[Story framing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f42d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112765640,1);
  return;
}



/* Entry: 1071f42e4; end: 1071f42ef; -[Story setFraming:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f42e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1071f42f0; end: 1071f42ff; -[Story ourStoriesMetadataToPostTo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f42f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112765644,1);
  return;
}



/* Entry: 1071f4300; end: 1071f430b; -[Story setOurStoriesMetadataToPostTo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4300(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1071f430c; end: 1071f431f; -[Story shouldCreateHighlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1071f430c(long param_1)

{
  return *(byte *)(param_1 + _DAT_1127655ac) & 1;
}



/* Entry: 1071f4320; end: 1071f432f; -[Story setShouldCreateHighlight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4320(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127655ac) = param_3;
  return;
}



/* Entry: 1071f4330; end: 1071f4343; -[Story isSpotlightStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1071f4330(long param_1)

{
  return *(byte *)(param_1 + _DAT_1127655b0) & 1;
}



/* Entry: 1071f4344; end: 1071f4353; -[Story setIsSpotlightStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071f4344(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127655b0) = param_3;
  return;
}



/* Entry: 1071f4354; end: 1071f4363; -[Story spotlightSnapStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071f4354(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127655b4);
}


