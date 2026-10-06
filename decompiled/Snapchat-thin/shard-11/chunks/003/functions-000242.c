/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1084642d0; end: 1084642df; -[SCTimelineVideoSource removeSegmentAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084642d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6c790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112775794),PTR_s_deleteSegmentAtIndex__1125b8b88);
  return;
}



/* Entry: 1084642e0; end: 108464457; -[SCTimelineVideoSource isTime:playableInSnapAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1084642e0(ulong param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar1 = (int)&uStack_c0;
  puVar4 = &uStack_c0;
  uVar5 = param_1;
  func_0x00010c0712a0();
  if ((int)uVar5 != 0) {
    uVar5 = param_1;
    func_0x00010c0d24a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf529e0();
    if (param_4 < uVar2) {
      lVar6 = (long)_DAT_112775794;
      uVar2 = *(ulong *)(param_1 + lVar6);
      func_0x00010c1581e0();
      _objc_release(uVar5);
      if (param_4 < uVar2) {
        lVar3 = *(long *)(param_1 + lVar6);
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        if (lVar6 == 0) {
          uStack_58 = 0;
          uStack_60 = 0;
          uStack_48 = 0;
          uStack_50 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          func_0x00010c27c900(&uStack_70,lVar6);
        }
        uStack_b8 = param_3[1];
        uStack_c0 = *param_3;
        uStack_b0 = param_3[2];
        uStack_88 = uStack_68;
        uStack_90 = uStack_70;
        uStack_80 = uStack_60;
        _CMTimeCompare(&uStack_c0,&uStack_90);
        if (iVar1 < 0) {
          uVar5 = 0;
        }
        else {
          if (lVar6 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
          }
          else {
            func_0x00010bf4d840(&uStack_c0,lVar6);
          }
          _CMTimeRangeGetEnd(&uStack_90,&uStack_c0);
          uStack_b8 = param_3[1];
          uStack_c0 = *param_3;
          uStack_b0 = param_3[2];
          _CMTimeCompare(&uStack_c0,&uStack_90);
          uVar5 = (ulong)puVar4 >> 0x1f & 1;
        }
        _objc_release(lVar6);
        return uVar5;
      }
    }
    else {
      _objc_release(uVar5);
    }
  }
  return 1;
}



/* Entry: 108464458; end: 10846453b; -[SCTimelineVideoSource isTime:seekableInSnapAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108464458(long param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = param_1;
  func_0x00010c0712a0();
  if ((int)lVar5 == 0) {
    bVar1 = true;
  }
  else {
    lVar5 = (long)_DAT_112775794;
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x00010c1581e0();
    if (param_4 < uVar2) {
      lVar3 = *(long *)(param_1 + lVar5);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
      }
      else {
        func_0x00010bf4d840(&uStack_60,lVar5);
      }
      uStack_78 = param_3[1];
      uStack_80 = *param_3;
      uStack_70 = param_3[2];
      puVar4 = &uStack_60;
      _CMTimeRangeContainsTime(puVar4,&uStack_80);
      bVar1 = (int)puVar4 != 0;
      _objc_release(lVar5);
      _objc_release(lVar3);
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}



/* Entry: 10846453c; end: 108464543; -[SCTimelineVideoSource supportsContinuousAudioPlay] */

undefined8 FUN_10846453c(void)

{
  return 1;
}



/* Entry: 108464544; end: 1084645cb; -[SCTimelineVideoSource audioTimeForVideoFrameTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108464544(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = param_2;
  func_0x00010bf4fc80();
  if ((uVar1 & 1) == 0) {
    uVar2 = *param_4;
    param_1[1] = param_4[1];
    *param_1 = uVar2;
    param_1[2] = param_4[2];
  }
  else if (*(long *)(param_2 + (long)_DAT_112775794) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_40 = param_4[2];
    func_0x00010c1004e0(param_1,*(long *)(param_2 + (long)_DAT_112775794),param_3,&uStack_50);
  }
  return;
}



/* Entry: 1084645cc; end: 10846461b; -[SCTimelineVideoSource dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084645cc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_11277579c));
  puStack_28 = PTR_PTR_1126fc9a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10846461c; end: 1084646ab; -[SCTimelineVideoSource setAudioOverrideAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10846461c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  iVar1 = (int)&lStack_30;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) != param_3) {
    puStack_28 = PTR_PTR_1126fc9a8;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_setAudioOverrideAsset__1126389f8,param_3);
    if ((iVar1 != 0) && (*(long *)(param_1 + _DAT_1127757c0) != 0)) {
      func_0x00010bde6ea0(param_1);
      uVar2 = 1;
      goto LAB_108464690;
    }
  }
  uVar2 = 0;
LAB_108464690:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1084646ac; end: 1084646cb; -[SCTimelineVideoSource baseAudioPlayerItemVolume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1084646ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(char *)(param_1 + _DAT_1127757c4) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
  }
  return uVar1;
}



/* Entry: 1084646cc; end: 1084647af; -[SCTimelineVideoSource setIsEditingMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084646cc(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127757c4;
  if (*(byte *)(param_1 + lVar3) == param_3) {
    return;
  }
  *(char *)(param_1 + lVar3) = (char)param_3;
  func_0x00010c139260();
  if (param_3 == 0) {
    if ((*(byte *)(param_1 + lVar3) & 1) != 0) {
      return;
    }
    lVar3 = (long)_DAT_1127757cc;
    if (*(char *)(param_1 + lVar3) == '\x01') {
      func_0x00010bfbfe20(param_1);
      *(undefined1 *)(param_1 + lVar3) = 0;
    }
    piVar2 = (int *)&DAT_1127757d0;
    uVar1 = *(ulong *)(param_1 + _DAT_112775794);
    func_0x00010bf00880();
    if ((uVar1 & 1) == 0) {
      func_0x00010bedd2a0(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      piVar2 = (int *)&DAT_1127757d0;
    }
  }
  else {
    if (*(char *)(param_1 + _DAT_1127757c8) == '\x01') {
      func_0x00010bfbfe20(param_1);
    }
    piVar2 = (int *)&DAT_11277abfc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed97f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateImageSegmentsWithTimeRang_112593fa0,
             *(undefined8 *)(param_1 + *piVar2));
  return;
}



/* Entry: 1084647b0; end: 108464817; -[SCTimelineVideoSource setMixedAudioAssetTrack:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084647b0(long param_1)

{
  int iVar1;
  long lStack_30;
  undefined *puStack_28;
  
  iVar1 = (int)&lStack_30;
  puStack_28 = PTR_PTR_1126fc9a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setMixedAudioAssetTrack_forKey__11264fbe0);
  if ((iVar1 != 0) && (*(long *)(param_1 + _DAT_1127757c0) != 0)) {
    func_0x00010bde6ea0(param_1);
  }
  return;
}



/* Entry: 108464818; end: 108464993; -[SCTimelineVideoSource updateVolumeProportion:forAudioTrackWithKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108464818(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126fc9a8;
  lStack_70 = param_2;
  _objc_msgSendSuper2(param_1,&lStack_70,PTR_s_updateVolumeProportion_forAudioT_112680ae8,param_4);
  lVar6 = (long)_DAT_1127757d4;
  lVar1 = *(long *)(param_2 + lVar6);
  func_0x00010bf51e00();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + lVar6);
  if (param_4 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = *(undefined **)(param_2 + _DAT_1127757d8);
    func_0x00010c0e00e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1d0640(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = *(ulong *)(param_2 + lVar6);
  func_0x00010c071d00();
  if (((uVar4 & 1) == 0) && ((lVar1 != 0 || (*(long *)(param_2 + lVar6) != 0)))) {
    lVar6 = param_2;
    func_0x00010bf16200(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c100ae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16be60();
    _objc_release(param_2);
    _objc_release(lVar6);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 108464994; end: 1084649ff; -[SCTimelineVideoSource assetComposition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108464994(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c0712a0();
  if ((int)lVar1 == 0) {
    lVar2 = (long)_DAT_1127757c0;
    lVar1 = *(long *)(param_1 + lVar2);
    if (lVar1 == 0) {
      func_0x00010bfbfe20(param_1);
      lVar1 = *(long *)(param_1 + lVar2);
    }
    _objc_retain(lVar1);
  }
  else {
    func_0x00010be6e620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108464a00; end: 108464b37; -[SCTimelineVideoSource generatePlaybackAssetComposition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108464a00(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = param_1;
  func_0x00010be6e620();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0d3c80();
  lVar5 = (long)_DAT_1127757c0;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = lVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c0d3e00(uVar3,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127757dc);
  *(undefined8 *)(param_1 + _DAT_1127757dc) = uVar3;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c277e40();
  *(int *)(param_1 + _DAT_1127757b8) = (int)uVar3;
  _objc_release(uVar4);
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c279200(uVar4,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      lVar2 = (long)_DAT_1127757b4;
      func_0x00010c12adc0(*(undefined8 *)(param_1 + lVar2));
      func_0x00010befa140(*(undefined8 *)(param_1 + lVar2),param_2,uVar3);
      _objc_release(uVar3);
      goto LAB_108464ab8;
    }
  }
  func_0x00010bde6ea0(param_1);
LAB_108464ab8:
  func_0x00010be1b960(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 108464b38; end: 108464beb; -[SCTimelineVideoSource assetVideoComposition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108464b38(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112775794);
  func_0x00010bf4b7e0();
  if (iVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c0712a0();
    if ((int)lVar3 == 0) {
      lVar4 = (long)_DAT_1127757e4;
      lVar3 = *(long *)(param_1 + lVar4);
      if (lVar3 == 0) {
        lVar5 = (long)_DAT_1127757e0;
        lVar3 = *(long *)(param_1 + lVar5);
        if (lVar3 == 0) {
          func_0x00010bf0b060(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          lVar3 = *(long *)(param_1 + lVar5);
        }
        _objc_retain(lVar3);
        uVar2 = *(undefined8 *)(param_1 + lVar4);
        *(long *)(param_1 + lVar4) = lVar3;
        _objc_release(uVar2);
        lVar3 = *(long *)(param_1 + lVar4);
      }
    }
    else {
      lVar3 = *(long *)(param_1 + _DAT_1127757e0);
    }
    _objc_retain(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108464bec; end: 108464c37; -[SCTimelineVideoSource frameTimeForPlaybackTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108464bec(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(long *)(param_2 + _DAT_112775794) != 0) {
    uStack_28 = param_4[1];
    uStack_30 = *param_4;
    uStack_20 = param_4[2];
    func_0x00010bfb71e0(*(long *)(param_2 + _DAT_112775794),param_3,&uStack_30);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 108464c38; end: 108464c83; -[SCTimelineVideoSource playbackTimeForFrameTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108464c38(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(long *)(param_2 + _DAT_112775794) != 0) {
    uStack_28 = param_4[1];
    uStack_30 = *param_4;
    uStack_20 = param_4[2];
    func_0x00010c1004e0(*(long *)(param_2 + _DAT_112775794),param_3,&uStack_30);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 108464c84; end: 108464d7f; -[SCTimelineVideoSource playbackStartTimeOfMultiSnapAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108464c84(undefined8 *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined *puStack_38;
  
  uVar3 = param_2;
  func_0x00010c0712a0();
  if ((uVar3 & 1) == 0) {
    iVar2 = (int)*(undefined8 *)(param_2 + (long)_DAT_112775794);
    func_0x00010bf00880();
    if (iVar2 == 0) {
      lVar4 = (long)_DAT_1127757d0;
      uVar3 = *(ulong *)(param_2 + lVar4);
      func_0x00010bf529e0();
      puVar1 = PTR__kCMTimeZero_110348670;
      if (param_4 < uVar3) {
        lVar4 = *(long *)(param_2 + lVar4);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
          uStack_58 = 0;
          uStack_60 = 0;
          uStack_48 = 0;
          uStack_50 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_70,lVar4);
        }
        param_1[1] = uStack_68;
        *param_1 = uStack_70;
        param_1[2] = uStack_60;
        _objc_release(lVar4);
        return;
      }
      uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      param_1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      *param_1 = uVar5;
      param_1[2] = *(undefined8 *)(puVar1 + 0x10);
      return;
    }
  }
  puStack_38 = PTR_PTR_1126fc9a8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(param_1,&uStack_40,PTR_s_playbackStartTimeOfMultiSnapAtIn_11261daf0,param_4);
  return;
}



/* Entry: 108464d80; end: 108464f1f; -[SCTimelineVideoSource setRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108464d80(double param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  ulong uStack_60;
  undefined *puStack_58;
  
  uVar2 = param_2;
  dVar6 = param_1;
  func_0x00010c0712a0();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + (long)_DAT_112775794);
    func_0x00010bf00880();
    if ((iVar1 != 0) && (*(char *)(param_2 + (long)_DAT_1127757c8) == '\x01')) {
      func_0x00010be1b960(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c11fdc0(param_2);
      goto LAB_108464e00;
    }
  }
  func_0x00010c11fdc0(param_2);
  if (param_1 == dVar6) {
    return;
  }
LAB_108464e00:
  if (*(long *)(param_2 + (long)_DAT_1127757c0) != 0) {
    func_0x00010bea6580(param_1,param_2);
    lVar5 = (long)_DAT_112775794;
    iVar1 = (int)*(undefined8 *)(param_2 + lVar5);
    func_0x00010bf4b7e0();
    if (iVar1 != 0) {
      uVar2 = param_2;
      func_0x00010bee8b40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + (long)_DAT_1127757e4);
      *(ulong *)(param_2 + (long)_DAT_1127757e4) = uVar2;
      _objc_release(uVar4);
      uVar3 = *(undefined8 *)(param_2 + lVar5);
      func_0x00010c1585e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar2 = param_2;
      func_0x00010bee8b40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_2 + (long)_DAT_1127757e0);
      *(ulong *)(param_2 + (long)_DAT_1127757e0) = uVar2;
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
  }
  puStack_58 = PTR_PTR_1126fc9a8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(param_1,&uStack_60,PTR_s_setRate__1126577b8);
  return;
}



/* Entry: 108464f20; end: 108464f7b;  */

void FUN_108464f20(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_2 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010bf4d840(&uStack_50,param_2);
  }
  func_0x00010c297240(puVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108464f7c; end: 10846586f; -[SCTimelineVideoSource _updatePlaybackAssetCompositionWithClipLevelRates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108464f7c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double *pdVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  undefined *puVar22;
  long lVar23;
  double dVar24;
  double dVar25;
  double dStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  double dStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  double dStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  double dStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  double dStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  double dStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  double dStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double dStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar20 = (long)_DAT_1127757c0;
  lVar2 = param_1;
  func_0x00010bdc77e0(param_1,param_2,*(undefined8 *)(param_1 + lVar20),
                      *(undefined8 *)PTR__AVMediaTypeVideo_110348090,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdc77e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_1127757dc;
  if (*(long *)(param_1 + lVar16) == 0) {
    dStack_98 = 0.0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    dStack_b0 = 0.0;
  }
  else {
    func_0x00010c106f40(&dStack_b0);
  }
  uStack_1a8 = uStack_a8;
  dStack_1b0 = dStack_b0;
  dStack_198 = dStack_98;
  uStack_1a0 = uStack_a0;
  uStack_188 = uStack_88;
  uStack_190 = uStack_90;
  func_0x00010c1e0300(lVar2);
  uVar19 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  dVar24 = *(double *)PTR__kCMTimeZero_110348670;
  uVar17 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  dStack_d0 = dVar24;
  uStack_c8 = uVar19;
  uStack_c0 = uVar17;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_112775794;
  lVar5 = *(long *)(param_1 + lVar23);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  if (lVar10 != 0) {
    uVar21 = 0;
    lVar10 = 0;
    do {
      lVar6 = *(long *)(param_1 + lVar23);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      if (lVar5 == 0) {
        dStack_e8 = 0.0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_f8 = 0;
        dStack_100 = 0.0;
      }
      else {
        func_0x00010c09e0e0(&dStack_100,lVar5);
      }
      lVar6 = *(long *)(param_1 + _DAT_1127757d0);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        dStack_118 = 0.0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_128 = 0;
        dStack_130 = 0.0;
      }
      else {
        func_0x00010bdc1120(&dStack_130,lVar6);
      }
      _objc_release(lVar6);
      uStack_1a8 = uStack_128;
      dStack_1b0 = dStack_130;
      dStack_198 = dStack_118;
      uStack_1a0 = uStack_120;
      uStack_188 = uStack_108;
      uStack_190 = uStack_110;
      uStack_148 = uStack_c8;
      dStack_150 = dStack_d0;
      uStack_140 = uStack_c0;
      lStack_138 = lVar10;
      func_0x00010c067160(lVar2);
      lVar6 = lStack_138;
      _objc_retain(lStack_138);
      _objc_release(lVar10);
      lVar10 = lVar2;
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar10;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      if (lVar7 == 0) {
        dStack_168 = 0.0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        dStack_1b0 = 0.0;
        dStack_198 = 0.0;
        uStack_1a0 = 0;
      }
      else {
        func_0x00010c26f4e0(&dStack_1b0,lVar7);
      }
      uStack_148 = uStack_160;
      dStack_150 = dStack_168;
      uStack_140 = uStack_158;
      pdVar8 = &dStack_150;
      dVar25 = dVar24;
      dStack_1d0 = dVar24;
      uStack_1c8 = uVar19;
      uStack_1c0 = uVar17;
      _CMTimeCompare(pdVar8,&dStack_1d0);
      if ((int)pdVar8 == 0) {
        lVar10 = lVar2;
        func_0x00010c1585e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar2;
        func_0x00010c1585e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        lVar9 = lVar10;
        func_0x00010c25e980(lVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1faba0(lVar2);
        _objc_release(lVar9);
        _objc_release(lVar18);
        _objc_release(lVar10);
      }
      func_0x00010c0fff40(lVar5);
      uStack_1a8 = uStack_e0;
      dStack_1b0 = dStack_e8;
      uStack_1a0 = uStack_d8;
      _CMTimeMultiplyByFloat64(&dStack_150,1.0 / dVar25,&dStack_1b0);
      uStack_1c8 = uStack_c8;
      dStack_1d0 = dStack_d0;
      uStack_1c0 = uStack_c0;
      uStack_1e8 = uStack_110;
      dStack_1f0 = dStack_118;
      uStack_1e0 = uStack_108;
      _CMTimeRangeMake(&dStack_1b0,&dStack_1d0,&dStack_1f0);
      uStack_1c8 = uStack_148;
      dStack_1d0 = dStack_150;
      uStack_1c0 = uStack_140;
      func_0x00010c14e420(lVar2);
      lVar18 = (long)_DAT_1127757b4;
      lVar10 = *(long *)(param_1 + lVar18);
      func_0x00010bf529e0();
      if (lVar10 != 0) {
        uVar11 = *(undefined8 *)(param_1 + lVar18);
        func_0x00010bfb1920(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uStack_1a8 = uStack_128;
        dStack_1b0 = dStack_130;
        dStack_198 = dStack_118;
        uStack_1a0 = uStack_120;
        uStack_188 = uStack_108;
        uStack_190 = uStack_110;
        uStack_1c8 = uStack_c8;
        dStack_1d0 = dStack_d0;
        uStack_1c0 = uStack_c0;
        func_0x00010c067160(lVar3);
        _objc_retain(lVar6);
        _objc_release(lVar6);
        _objc_release(uVar11);
        lVar10 = lVar3;
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar10;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        _objc_release(lVar10);
        if (lVar18 == 0) {
          dStack_168 = 0.0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_1a8 = 0;
          dStack_1b0 = 0.0;
          dStack_198 = 0.0;
          uStack_1a0 = 0;
        }
        else {
          func_0x00010c26f4e0(&dStack_1b0,lVar18);
        }
        uStack_1c8 = uStack_160;
        dStack_1d0 = dStack_168;
        uStack_1c0 = uStack_158;
        pdVar8 = &dStack_1d0;
        dStack_1f0 = dVar24;
        uStack_1e8 = uVar19;
        uStack_1e0 = uVar17;
        _CMTimeCompare(pdVar8,&dStack_1f0);
        if ((int)pdVar8 == 0) {
          lVar10 = lVar3;
          func_0x00010c1585e0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar3;
          func_0x00010c1585e0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          lVar9 = lVar10;
          func_0x00010c25e980(lVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1faba0(lVar3);
          _objc_release(lVar9);
          _objc_release(lVar7);
          _objc_release(lVar10);
        }
        uStack_1c8 = uStack_c8;
        dStack_1d0 = dStack_d0;
        uStack_1c0 = uStack_c0;
        uStack_1e8 = uStack_110;
        dStack_1f0 = dStack_118;
        uStack_1e0 = uStack_108;
        _CMTimeRangeMake(&dStack_1b0,&dStack_1d0,&dStack_1f0);
        uStack_1c8 = uStack_148;
        dStack_1d0 = dStack_150;
        uStack_1c0 = uStack_140;
        func_0x00010c14e420(lVar3);
        lVar7 = lVar18;
      }
      puVar12 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      uStack_1c8 = uStack_c8;
      dStack_1d0 = dStack_d0;
      uStack_1c0 = uStack_c0;
      uStack_1e8 = uStack_148;
      dStack_1f0 = dStack_150;
      uStack_1e0 = uStack_140;
      _CMTimeRangeMake(&dStack_1b0,&dStack_1d0,&dStack_1f0);
      func_0x00010c297240(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4);
      _objc_release(puVar12);
      uStack_1a8 = uStack_c8;
      dStack_1b0 = dStack_d0;
      uStack_1a0 = uStack_c0;
      uStack_1c8 = uStack_148;
      dStack_1d0 = dStack_150;
      uStack_1c0 = uStack_140;
      _CMTimeAdd(&dStack_d0,&dStack_1b0,&dStack_1d0);
      _objc_release(lVar7);
      _objc_release(lVar5);
      uVar21 = uVar21 + 1;
      uVar13 = *(ulong *)(param_1 + lVar23);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bf529e0();
      _objc_release(uVar13);
      lVar10 = lVar6;
    } while (uVar21 < uVar14);
    if (lVar6 != 0) goto LAB_108465830;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + lVar23);
  func_0x00010bf4b7e0();
  if (iVar1 != 0) {
    puVar12 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
    func_0x00010c2998a0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar4;
    dStack_130 = dVar24;
    uStack_128 = uVar19;
    uStack_120 = uVar17;
    func_0x00010bf529e0();
    if (puVar22 != (undefined *)0x0) {
      puVar22 = (undefined *)0x0;
      do {
        puVar15 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        if (puVar15 == (undefined *)0x0) {
          dStack_198 = 0.0;
          uStack_1a0 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_1a8 = 0;
          dStack_1b0 = 0.0;
        }
        else {
          func_0x00010bdc1120(&dStack_1b0,puVar15);
        }
        _objc_release(puVar15);
        lVar10 = (long)_DAT_1127757a0;
        puVar15 = *(undefined **)(param_1 + lVar10);
        func_0x00010bf529e0();
        if (puVar22 < puVar15) {
          lVar10 = *(long *)(param_1 + lVar10);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          if (lVar10 == 0) {
            dStack_e8 = 0.0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_f8 = 0;
            dStack_100 = 0.0;
          }
          else {
            func_0x00010bdc0fc0(&dStack_100,lVar10);
          }
          uStack_148 = uStack_1a8;
          dStack_150 = dStack_1b0;
          uStack_140 = uStack_1a0;
          func_0x00010c219980(puVar12);
          _objc_release(lVar10);
        }
        uStack_f8 = uStack_128;
        dStack_100 = dStack_130;
        uStack_f0 = uStack_120;
        uStack_148 = uStack_190;
        dStack_150 = dStack_198;
        uStack_140 = uStack_188;
        _CMTimeAdd(&dStack_130,&dStack_100,&dStack_150);
        puVar22 = puVar22 + 1;
        puVar15 = puVar4;
        func_0x00010bf529e0();
      } while (puVar22 < puVar15);
    }
    func_0x00010bee9160(param_1);
    uStack_1a8 = uStack_128;
    dStack_1b0 = dStack_130;
    uStack_1a0 = uStack_120;
    puVar22 = puVar12;
    func_0x000109126f00(puVar12,&dStack_1b0);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + _DAT_1127757e4);
    *(undefined **)(param_1 + _DAT_1127757e4) = puVar22;
    _objc_release(uVar17);
    _objc_release(puVar12);
  }
  func_0x00010c12ec60(*(undefined8 *)(param_1 + lVar20));
  _objc_retain(lVar2);
  uVar17 = *(undefined8 *)(param_1 + lVar16);
  *(long *)(param_1 + lVar16) = lVar2;
  _objc_release(uVar17);
  lVar10 = (long)_DAT_1127757b4;
  lVar16 = *(long *)(param_1 + lVar10);
  func_0x00010bf529e0();
  if (lVar16 != 0) {
    uVar19 = *(undefined8 *)(param_1 + lVar20);
    uVar17 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bfb1920(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ec60(uVar19);
    _objc_release(uVar17);
    func_0x00010c130f40(*(undefined8 *)(param_1 + lVar10));
  }
  puVar12 = puVar4;
  func_0x00010bf51e00();
  uVar17 = *(undefined8 *)(param_1 + _DAT_1127757d0);
  *(undefined **)(param_1 + _DAT_1127757d0) = puVar12;
  _objc_release(uVar17);
  lVar6 = 0;
  *(undefined1 *)(param_1 + _DAT_1127757c8) = 1;
LAB_108465830:
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 108465870; end: 108465ba3; -[SCTimelineVideoSource acquirePixelBufferForItemTime:itemTimeForDisplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108465870(undefined1 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar4 = &puStack_1b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar11 = *(undefined1 **)(param_1 + _DAT_1127757b0);
  _objc_retain(puVar11);
  puVar10 = (undefined8 *)0x10;
  puVar13 = puVar11;
  func_0x00010bf52a60();
  if (puVar13 != (undefined1 *)0x0) {
    lVar14 = *plStack_120;
    do {
      puVar15 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(puVar11);
        }
        puVar12 = *(undefined1 **)(lStack_128 + (long)puVar15 * 8);
        puVar2 = puVar12;
        func_0x00010bfe8da0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 == (undefined1 *)0x0) {
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_160,puVar2);
        }
        uStack_178 = param_3[1];
        uStack_180 = *param_3;
        uStack_170 = param_3[2];
        puVar8 = &uStack_180;
        puVar9 = &uStack_160;
        puVar3 = param_1;
        func_0x00010be41580();
        if ((int)puVar3 != 0) {
          func_0x00010c084c00(&uStack_180,param_1);
          uStack_198 = param_3[1];
          uStack_1a0 = *param_3;
          uStack_190 = param_3[2];
          _CMTimeAdd(&uStack_160,&uStack_1a0,&uStack_180);
          param_4[1] = uStack_158;
          *param_4 = uStack_160;
          param_4[2] = uStack_150;
          puVar13 = param_1;
          func_0x00010c2907a0();
          if (((int)puVar13 != 0) &&
             (puVar13 = param_1, func_0x00010c0712a0(), ((ulong)puVar13 & 1) == 0)) {
            uStack_178 = param_4[1];
            uStack_180 = *param_4;
            uStack_170 = param_4[2];
            puVar8 = &uStack_180;
            func_0x00010bfb71e0(&uStack_160,param_1);
            param_4[1] = uStack_158;
            *param_4 = uStack_160;
            param_4[2] = uStack_150;
          }
          func_0x00010bfe8420();
          _CVPixelBufferRetain();
          _objc_release(puVar2);
          _objc_release();
          goto LAB_108465aa4;
        }
        _objc_release(puVar2);
        puVar15 = puVar15 + 1;
      } while (puVar13 != puVar15);
      puVar10 = (undefined8 *)0x10;
      puVar13 = puVar11;
      func_0x00010bf52a60();
    } while (puVar13 != (undefined1 *)0x0);
  }
  _objc_release(puVar11);
  puVar13 = param_1;
  func_0x00010c0712a0();
  if (((ulong)puVar13 & 1) == 0) {
    lVar14 = (long)_DAT_112775794;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar14);
    func_0x00010bf00880();
    if (iVar1 == 0) {
      puVar11 = param_1;
      func_0x00010c29a780();
      _objc_retainAutoreleasedReturnValue();
      uStack_158 = param_3[1];
      uStack_160 = *param_3;
      uStack_150 = param_3[2];
      puVar8 = &uStack_160;
      puVar12 = puVar11;
      puVar9 = param_4;
      func_0x00010bf52140();
      _objc_release();
      if (param_4 != (undefined8 *)0x0) {
        func_0x00010c084c00(&uStack_180,param_1);
        uStack_198 = param_4[1];
        uStack_1a0 = *param_4;
        uStack_190 = param_4[2];
        _CMTimeAdd(&uStack_160,&uStack_1a0,&uStack_180);
        param_4[1] = uStack_158;
        *param_4 = uStack_160;
        param_4[2] = uStack_150;
        puVar11 = *(undefined1 **)(param_1 + lVar14);
        if (puVar11 == (undefined1 *)0x0) {
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_150 = 0;
        }
        else {
          uStack_178 = param_4[1];
          uStack_180 = *param_4;
          uStack_170 = param_4[2];
          puVar8 = &uStack_180;
          func_0x00010bfb71c0(&uStack_160);
        }
        param_4[1] = uStack_158;
        *param_4 = uStack_160;
        param_4[2] = uStack_150;
      }
      goto LAB_108465aa4;
    }
  }
  puStack_1a8 = PTR_PTR_1126fc9a8;
  uStack_158 = param_3[1];
  uStack_160 = *param_3;
  uStack_150 = param_3[2];
  puVar8 = &uStack_160;
  puStack_1b0 = param_1;
  _objc_msgSendSuper2(&puStack_1b0,PTR_s_acquirePixelBufferForItemTime_it_1125990c0);
  puVar11 = (undefined1 *)ppuVar4;
  puVar9 = param_4;
  puVar12 = (undefined1 *)ppuVar4;
LAB_108465aa4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar12;
  }
  ___stack_chk_fail();
  puVar13 = (undefined1 *)(long)_DAT_1127757b0;
  lVar14 = *(long *)(puVar11 + (long)puVar13);
  func_0x00010bf529e0();
  if (lVar14 != 0) {
    lVar14 = (long)_DAT_112775794;
    puVar5 = *(undefined8 **)(puVar11 + lVar14);
    func_0x00010c1581e0();
    if (puVar9 < puVar5) {
      uVar6 = *(undefined8 *)(puVar11 + lVar14);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar15 = *(undefined1 **)(puVar11 + (long)puVar13);
      _objc_retain(uVar7);
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      if (puVar15 != (undefined1 *)0x0) {
        uVar16 = puVar8[1];
        uVar6 = *puVar8;
        puVar10[2] = puVar8[2];
        puVar10[1] = uVar16;
        *puVar10 = uVar6;
        puVar13 = puVar15;
        func_0x00010bfe8420(puVar15);
        _CVPixelBufferRetain();
      }
      _objc_release(puVar15);
      _objc_release(uVar7);
      _objc_release(uVar7);
      if (puVar15 != (undefined1 *)0x0) {
        return puVar13;
      }
    }
  }
  func_0x00010beedc60(puVar11);
  return puVar11;
}



/* Entry: 108465ba4; end: 108465cff; -[SCTimelineVideoSource acquirePixelBufferForItemTime:forSegmentAtIndex:itemTimeForDisplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108465ba4(long param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
                  undefined8 *param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar5 = (long)_DAT_1127757b0;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = (long)_DAT_112775794;
    uVar2 = *(ulong *)(param_1 + lVar1);
    func_0x00010c1581e0();
    if (param_4 < uVar2) {
      uVar3 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010c1585e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      lVar1 = *(long *)(param_1 + lVar5);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_108465d00;
      puStack_50 = &UNK_110a49f70;
      uStack_48 = uVar4;
      _objc_retain(uVar4);
      func_0x00010bfb2040(lVar1,param_2,&puStack_68);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        uVar6 = param_3[1];
        uVar3 = *param_3;
        param_5[2] = param_3[2];
        param_5[1] = uVar6;
        *param_5 = uVar3;
        lVar5 = lVar1;
        func_0x00010bfe8420(lVar1);
        _CVPixelBufferRetain();
      }
      _objc_release(lVar1);
      _objc_release(uStack_48);
      _objc_release(uVar4);
      if (lVar1 != 0) {
        return lVar5;
      }
    }
  }
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  uStack_70 = param_3[2];
  func_0x00010beedc60(param_1,param_2,&uStack_80,param_5);
  return param_1;
}



/* Entry: 108465d00; end: 108465d37;  */

bool FUN_108465d00(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c280560(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c280560(lVar1);
  return param_2 == lVar1;
}



/* Entry: 108465d38; end: 108465dbf; -[SCTimelineVideoSource updateRenderOrientation] */

/* WARNING: Possible PIC construction at 0x000108465dac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108465db0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108465d38(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = &uStack_50;
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112775794);
  func_0x00010bf4b7e0();
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x00010c106f40(&uStack_50);
    }
    func_0x00010b691288(&uStack_50);
    func_0x00010b69138c();
  }
  else {
    puVar2 = (undefined8 *)0x5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1ea870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setRenderOrientation__112658440,puVar2);
  return;
}



/* Entry: 108465dc0; end: 108466623; -[SCTimelineVideoSource _originalAssetComposition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108465dc0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  long lStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  int iStack_2ac;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + 8);
  lStack_2b8 = param_1;
  if (lVar9 == 0) {
    _CACurrentMediaTime();
    puVar2 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
    func_0x00010bf45600();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lStack_2b8;
    uStack_290 = *(undefined8 *)PTR__AVMediaTypeVideo_110348090;
    lVar3 = lStack_2b8;
    func_0x00010bdc77e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_298 = *(undefined8 *)PTR__AVMediaTypeAudio_110348070;
    lVar10 = lVar9;
    puStack_2d0 = puVar2;
    func_0x00010bdc77e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_112775794;
    iStack_2ac = (int)*(undefined8 *)(lVar9 + lVar11);
    lStack_2a8 = lVar10;
    func_0x00010bf4b7e0();
    lStack_2c8 = (long)_DAT_1127757a0;
    func_0x00010c12adc0(*(undefined8 *)(lVar9 + lStack_2c8));
    func_0x00010c12adc0(*(undefined8 *)(lVar9 + _DAT_1127757b0));
    uStack_258 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_260 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_268 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lVar9 = *(long *)(lVar9 + lVar11);
    lStack_2d8 = lVar11;
    uStack_110 = uStack_260;
    uStack_108 = uStack_258;
    uStack_100 = uStack_268;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_2c0 = lVar9;
    func_0x00010bf52a60();
    if (lVar9 == 0) {
      lStack_278 = 0;
      lVar10 = 0;
    }
    else {
      lStack_278 = 0;
      lVar10 = 0;
      lStack_2a0 = *plStack_140;
      lStack_288 = lVar9;
      lStack_270 = lVar3;
      do {
        lVar9 = 0;
        lVar11 = lVar10;
        do {
          if (*plStack_140 != lStack_2a0) {
            _objc_enumerationMutation(lStack_2c0);
          }
          puVar2 = PTR_DAT_1126a4e48;
          puVar13 = *(undefined **)(lStack_148 + lVar9 * 8);
          _objc_retain(puVar13);
          puVar5 = puVar13;
          func_0x000107c318f8(puVar13,puVar2);
          puVar2 = puVar13;
          if ((int)puVar5 == 0) {
            puVar2 = (undefined *)0x0;
          }
          _objc_retain(puVar2);
          _objc_release(puVar13);
          puVar5 = PTR_DAT_1126a4e40;
          _objc_retain(puVar13);
          puVar4 = puVar13;
          func_0x000107c318f8(puVar13,puVar5);
          puVar5 = puVar13;
          if ((int)puVar4 == 0) {
            puVar5 = (undefined *)0x0;
          }
          _objc_retain(puVar5);
          _objc_release(puVar13);
          puStack_248 = puVar5;
          if (puVar2 == (undefined *)0x0) {
            if (puVar5 == (undefined *)0x0) {
              puVar5 = (undefined *)0x0;
            }
            else {
              puVar5 = (undefined *)0x0;
              func_0x00010911c6b4();
              _objc_retainAutoreleasedReturnValue();
            }
          }
          else {
            puVar4 = puVar13;
            func_0x00010c2991a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar5 = PTR__OBJC_CLASS___AVAsset_1126aff38;
            if (puVar4 == (undefined *)0x0) {
              puVar4 = puVar13;
              func_0x00010bf0b7e0(puVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf0b9e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar4);
            }
            else {
              puVar5 = puVar13;
              func_0x00010c2991a0();
              _objc_retainAutoreleasedReturnValue();
            }
          }
          puVar4 = PTR_PTR_1126b0010;
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_f8 = puVar6;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          uStack_158 = 0;
          func_0x00010c266c80(puVar4);
          uVar8 = uStack_158;
          _objc_retain(uStack_158);
          _objc_release(puVar7);
          _objc_release(puVar6);
          puVar4 = puVar5;
          func_0x00010c279200();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          if (puVar6 == (undefined *)0x0) {
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_188 = 0;
            uStack_190 = 0;
          }
          else {
            func_0x00010c106f40(&uStack_190,puVar6);
          }
          lVar3 = lStack_270;
          uStack_1b8 = uStack_188;
          uStack_1c0 = uStack_190;
          uStack_1a8 = uStack_178;
          uStack_1b0 = uStack_180;
          uStack_198 = uStack_168;
          uStack_1a0 = uStack_170;
          func_0x00010c1e0300(lStack_270);
          if (puVar13 == (undefined *)0x0) {
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1e8 = 0;
            uStack_1f0 = 0;
          }
          else {
            func_0x00010bf4d840(&uStack_1f0,puVar13);
          }
          uStack_208 = uStack_258;
          uStack_210 = uStack_260;
          uStack_200 = uStack_268;
          uStack_228 = uStack_1d0;
          uStack_230 = uStack_1d8;
          uStack_220 = uStack_1c8;
          _CMTimeRangeMake(&uStack_1c0,&uStack_210,&uStack_230);
          uStack_208 = uStack_108;
          uStack_210 = uStack_110;
          uStack_200 = uStack_100;
          lStack_238 = lVar11;
          func_0x00010c067160(lVar3);
          lVar10 = lStack_238;
          _objc_retain(lStack_238);
          _objc_release(lVar11);
          puVar4 = puVar5;
          func_0x00010c279200();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar4;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          if (puVar7 != (undefined *)0x0) {
            lStack_280 = lVar9;
            if (puVar13 == (undefined *)0x0) {
              uStack_1d8 = 0;
              uStack_1e0 = 0;
              uStack_1c8 = 0;
              uStack_1d0 = 0;
              uStack_1e8 = 0;
              uStack_1f0 = 0;
            }
            else {
              func_0x00010bf4d840(&uStack_1f0,puVar13);
            }
            uStack_208 = uStack_258;
            uStack_210 = uStack_260;
            uStack_200 = uStack_268;
            uStack_228 = uStack_1d0;
            uStack_230 = uStack_1d8;
            uStack_220 = uStack_1c8;
            _CMTimeRangeMake(&uStack_1c0,&uStack_210,&uStack_230);
            lVar9 = lStack_278;
            lStack_240 = lStack_278;
            uStack_208 = uStack_108;
            uStack_210 = uStack_110;
            uStack_200 = uStack_100;
            func_0x00010c067160(lStack_2a8);
            lVar11 = lStack_240;
            _objc_retain(lStack_240);
            _objc_release(lVar9);
            lStack_278 = lVar11;
            lVar9 = lStack_280;
          }
          lVar11 = lStack_2b8;
          puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          if (puVar2 == (undefined *)0x0) {
            if (puStack_248 == (undefined *)0x0) goto LAB_1084663d8;
            func_0x00010bf4d840(&uStack_1f0,puVar13);
            uStack_208 = uStack_108;
            uStack_210 = uStack_110;
            uStack_200 = uStack_100;
            uStack_228 = uStack_1d0;
            uStack_230 = uStack_1d8;
            uStack_220 = uStack_1c8;
            _CMTimeRangeMake(&uStack_1c0,&uStack_210,&uStack_230);
            func_0x00010c297240(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be2ab00(lStack_2b8);
            _objc_release(puVar4);
LAB_1084663dc:
            func_0x00010bf4d840(&uStack_1c0,puVar13);
          }
          else {
            if (iStack_2ac != 0) {
              func_0x00010bee9160(lStack_2b8);
              func_0x000109126dac(&uStack_1c0,puVar6);
              uVar12 = *(undefined8 *)(lVar11 + lStack_2c8);
              uStack_1e8 = uStack_1b8;
              uStack_1f0 = uStack_1c0;
              uStack_1d8 = uStack_1a8;
              uStack_1e0 = uStack_1b0;
              uStack_1c8 = uStack_198;
              uStack_1d0 = uStack_1a0;
              puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              func_0x00010c297160(PTR__OBJC_CLASS___NSValue_1126afdf8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(uVar12);
              lVar3 = lStack_270;
              _objc_release(puVar4);
            }
LAB_1084663d8:
            if (puVar13 != (undefined *)0x0) goto LAB_1084663dc;
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
          }
          uStack_1e8 = uStack_108;
          uStack_1f0 = uStack_110;
          uStack_1e0 = uStack_100;
          uStack_208 = uStack_1a0;
          uStack_210 = uStack_1a8;
          uStack_200 = uStack_198;
          param_2 = &uStack_210;
          _CMTimeAdd(&uStack_110,&uStack_1f0);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(uVar8);
          _objc_release(puVar5);
          _objc_release(puStack_248);
          _objc_release(puVar2);
          lVar9 = lVar9 + 1;
          lVar11 = lVar10;
        } while (lStack_288 != lVar9);
        lVar9 = lStack_2c0;
        func_0x00010bf52a60();
        lStack_288 = lVar9;
      } while (lVar9 != 0);
    }
    lStack_288 = 0;
    _objc_release(lStack_2c0);
    lVar9 = lStack_2b8;
    if (iStack_2ac != 0) {
      uVar12 = *(undefined8 *)(lStack_2b8 + lStack_2d8);
      func_0x00010c1585e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar12;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      func_0x00010c11fdc0(lVar9);
      lVar11 = lVar9;
      func_0x00010bee8b40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(lVar9 + _DAT_1127757e0);
      *(long *)(lVar9 + _DAT_1127757e0) = lVar11;
      _objc_release(uVar12);
      _objc_release(uVar8);
    }
    lVar1 = lStack_278;
    lVar11 = lStack_2a8;
    unaff_x20 = puStack_2d0;
    if (lVar10 == 0 && lStack_278 == 0) {
      uStack_2e0 = 0;
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a120();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lStack_2b8;
      uVar8 = *(undefined8 *)(lStack_2b8 + 0x18);
      *(undefined **)(lStack_2b8 + 0x18) = puVar2;
      _objc_release(uVar8);
      _objc_retain(lVar3);
      uVar8 = *(undefined8 *)(lVar9 + 0x10);
      *(long *)(lVar9 + 0x10) = lVar3;
      _objc_release(uVar8);
      _objc_retain(unaff_x20);
      uVar8 = *(undefined8 *)(lVar9 + 8);
      *(undefined **)(lVar9 + 8) = unaff_x20;
      _objc_release(uVar8);
      lVar9 = *(long *)(lVar9 + 8);
      _objc_retain(lVar9);
    }
    else {
      lVar9 = 0;
    }
    _objc_release(lVar11);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar10);
    _objc_release(unaff_x20);
  }
  else {
    _objc_retain(lVar9);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    pcStack_2e8 = FUN_108466624;
    puStack_300 = unaff_x20;
    lStack_2f8 = lVar9;
    puStack_2f0 = &stack0xfffffffffffffff0;
    if (param_2 == (undefined8 *)0x0) {
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
    }
    else {
      func_0x00010bf4d840(&uStack_330,param_2);
    }
    func_0x00010c297240(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108466624; end: 10846667f;  */

void FUN_108466624(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_2 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x00010bf4d840(&uStack_50,param_2);
  }
  func_0x00010c297240(puVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108466680; end: 10846690f; -[SCTimelineVideoSource _handleImageSegment:timeRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108466680(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined *param_6)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010bfe8420();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (lVar2 == 0) {
    lVar2 = param_5;
    func_0x00010bf0b7e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d020(puVar4,param_4,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    pdVar1 = (double *)(param_3 + _DAT_1127757ac);
    dVar8 = *pdVar1;
    func_0x00010c23d0a0(puVar4);
    dVar9 = pdVar1[1];
    func_0x00010c23d0a0(puVar4);
    dVar9 = dVar9 / param_2;
    dVar10 = dVar8 / param_1;
    if (dVar9 <= dVar8 / param_1) {
      dVar10 = dVar9;
    }
    func_0x00010c23d0a0(puVar4);
    func_0x00010c23d0a0(puVar4);
    _UIGraphicsBeginImageContext(*pdVar1,pdVar1[1]);
    puVar5 = puVar4;
    func_0x00010bf89920((*pdVar1 - dVar9 * dVar10) * 0.5,(pdVar1[1] - param_2 * dVar10) * 0.5,
                        dVar9 * dVar10,param_2 * dVar10,puVar4);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _UIGraphicsEndImageContext();
    puVar4 = puVar5;
    func_0x00010c14e300(pdVar1[1],puVar5,param_4,0x10);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf54240();
    puVar7 = PTR_PTR_1126d96f8;
    _objc_alloc(PTR_PTR_1126d96f8);
    lVar2 = param_5;
    func_0x00010c280560(param_5);
    _objc_release(param_5);
    func_0x00010c059020(puVar7,param_4,lVar2,param_6,puVar6);
    _objc_release(param_6);
    _CVPixelBufferRelease(puVar6);
    _objc_release(puVar4);
  }
  else {
    puVar7 = PTR_PTR_1126d96f8;
    _objc_alloc(PTR_PTR_1126d96f8);
    lVar2 = param_5;
    func_0x00010c280560(param_5);
    lVar3 = param_5;
    func_0x00010bfe8420(param_5);
    _objc_release(param_5);
    func_0x00010c059020(puVar7,param_4,lVar2,param_6,lVar3);
    puVar5 = param_6;
  }
  _objc_release(puVar5);
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297160(PTR__OBJC_CLASS___NSValue_1126afdf8,param_4,&uStack_90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_3 + _DAT_1127757a0),param_4,puVar4);
  func_0x00010befa120(*(undefined8 *)(param_3 + _DAT_1127757b0),param_4,puVar7);
  _objc_release(puVar4);
  _objc_release(puVar7);
  return;
}



/* Entry: 108466910; end: 1084669ff; -[SCTimelineVideoSource _isItemtime:inImageTimeRange:] */

bool FUN_108466910(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = (undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar1 = &uStack_60;
  _CMTimeCompare(puVar1,&uStack_b0);
  if (-1 < (int)puVar1) {
    puVar2 = param_3;
  }
  uStack_c8 = puVar2[1];
  uStack_d0 = *puVar2;
  uStack_c0 = puVar2[2];
  _CMTimeMake(&uStack_60,1,0x28);
  uStack_78 = param_4[4];
  uStack_80 = param_4[3];
  uStack_70 = param_4[5];
  _CMTimeAdd(&uStack_b0,&uStack_80,&uStack_60);
  uStack_78 = param_4[1];
  uStack_80 = *param_4;
  uStack_70 = param_4[2];
  _CMTimeRangeMake(&uStack_60,&uStack_80,&uStack_b0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_88 = uStack_38;
  uStack_90 = uStack_40;
  puVar2 = &uStack_b0;
  _CMTimeRangeContainsTime(puVar2,&uStack_d0);
  return (int)puVar2 != 0;
}



/* Entry: 108466a00; end: 108466b4b; -[SCTimelineVideoSource _updateImageSegmentsWithTimeRanges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108466a00(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    uVar5 = 0;
    lVar7 = (long)_DAT_112775794;
    do {
      uVar1 = *(ulong *)(param_1 + lVar7);
      func_0x00010c1581e0();
      if (uVar5 < uVar1) {
        lVar2 = *(long *)(param_1 + lVar7);
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar2 = lVar6;
        func_0x000107c318f8(lVar6,PTR_DAT_1126a4e40);
        _objc_release(lVar6);
        if ((int)lVar2 != 0 && lVar6 != 0) {
          lVar6 = (long)_DAT_1127757b0;
          uVar1 = *(ulong *)(param_1 + lVar6);
          func_0x00010bf529e0();
          if (uVar4 < uVar1) {
            uVar3 = *(undefined8 *)(param_1 + lVar6);
            func_0x00010c0dfd40(uVar3);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = param_3;
            func_0x00010c0dfd40(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1aaae0(uVar3);
            _objc_release(uVar1);
            _objc_release(uVar3);
            uVar4 = uVar4 + 1;
          }
        }
      }
      uVar5 = uVar5 + 1;
      uVar1 = param_3;
      func_0x00010bf529e0();
    } while (uVar5 < uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108466b4c; end: 108466f2b; -[SCTimelineVideoSource _setPlaybackAssetRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108466b4c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [256];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined8 *)(param_2 + _DAT_112775798);
  uStack_1d8 = puVar7[1];
  uStack_1e0 = *puVar7;
  uStack_1d0 = puVar7[2];
  func_0x00010be9a8a0(&uStack_190,param_1,param_2,param_3,&uStack_1e0);
  if (*(long *)(param_2 + _DAT_1127757c0) == 0) {
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_1a8);
  }
  uVar10 = *(undefined8 *)(param_2 + _DAT_1127757dc);
  uVar17 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar16 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar12 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_218 = uStack_1a0;
  uStack_220 = uStack_1a8;
  uStack_210 = uStack_198;
  uStack_200 = uVar16;
  uStack_1f8 = uVar17;
  uStack_1f0 = uVar12;
  _CMTimeRangeMake(&uStack_1e0,&uStack_200,&uStack_220);
  uStack_1f8 = uStack_188;
  uStack_200 = uStack_190;
  uStack_1f0 = uStack_180;
  func_0x00010c14e420(uVar10);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar11 = *(long *)(param_2 + _DAT_1127757b4);
  _objc_retain(lVar11);
  lVar1 = lVar11;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar14 = *plStack_250;
    do {
      lVar15 = 0;
      do {
        if (*plStack_250 != lVar14) {
          _objc_enumerationMutation(lVar11);
        }
        uVar10 = *(undefined8 *)(lStack_258 + lVar15 * 8);
        uStack_218 = uStack_1a0;
        uStack_220 = uStack_1a8;
        uStack_210 = uStack_198;
        uStack_200 = uVar16;
        uStack_1f8 = uVar17;
        uStack_1f0 = uVar12;
        _CMTimeRangeMake(&uStack_1e0,&uStack_200,&uStack_220);
        uStack_1f8 = uStack_188;
        uStack_200 = uStack_190;
        uStack_1f0 = uStack_180;
        func_0x00010c14e420(uVar10);
        lVar15 = lVar15 + 1;
      } while (lVar1 != lVar15);
      lVar1 = lVar11;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar11);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uStack_200 = uVar16;
  uStack_1f8 = uVar17;
  uStack_1f0 = uVar12;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  plStack_290 = (long *)0x0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  lVar11 = *(long *)(param_2 + _DAT_112775794);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = &uStack_2a0;
  puVar8 = auStack_178;
  puVar9 = (undefined1 *)0x10;
  lVar1 = lVar11;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar14 = *plStack_290;
    do {
      lVar15 = 0;
      do {
        if (*plStack_290 != lVar14) {
          _objc_enumerationMutation(lVar11);
        }
        if (*(long *)(lStack_298 + lVar15 * 8) == 0) {
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
        }
        else {
          func_0x00010c09e0e0(&uStack_1e0);
        }
        uStack_2b8 = uStack_1c0;
        uStack_2c0 = uStack_1c8;
        uStack_2b0 = uStack_1b8;
        _CMTimeMultiplyByFloat64(&uStack_220,1.0 / param_1,&uStack_2c0);
        puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        uStack_2b8 = uStack_1f8;
        uStack_2c0 = uStack_200;
        uStack_2b0 = uStack_1f0;
        uStack_2d8 = uStack_218;
        uStack_2e0 = uStack_220;
        uStack_2d0 = uStack_210;
        _CMTimeRangeMake(&uStack_1e0,&uStack_2c0,&uStack_2e0);
        func_0x00010c297240();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar3);
        uStack_1d8 = uStack_1f8;
        uStack_1e0 = uStack_200;
        uStack_1d0 = uStack_1f0;
        uStack_2b8 = uStack_218;
        uStack_2c0 = uStack_220;
        uStack_2b0 = uStack_210;
        uVar10 = uStack_220;
        _CMTimeAdd(&uStack_200,&uStack_1e0,&uStack_2c0);
        lVar15 = lVar15 + 1;
      } while (lVar1 != lVar15);
      puVar7 = &uStack_2a0;
      puVar8 = auStack_178;
      puVar9 = (undefined1 *)0x10;
      lVar1 = lVar11;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar11);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  uVar12 = *(undefined8 *)(param_2 + _DAT_1127757d0);
  *(undefined **)(param_2 + _DAT_1127757d0) = puVar3;
  _objc_release(uVar12);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  puVar3 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
  func_0x00010c2998a0(PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18);
  _objc_retainAutoreleasedReturnValue();
  uStack_378 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_380 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_370 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar13 = puVar8;
  func_0x00010bf529e0();
  if (puVar13 != (undefined1 *)0x0) {
    puVar13 = (undefined1 *)0x0;
    do {
      puVar4 = puVar8;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined1 *)0x0) {
        uStack_398 = 0;
        uStack_3a0 = 0;
        uStack_388 = 0;
        uStack_390 = 0;
        uStack_3a8 = 0;
        uStack_3b0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_3b0,puVar4);
      }
      _objc_release(puVar4);
      puVar4 = puVar9;
      func_0x00010bf529e0();
      if (puVar13 < puVar4) {
        puVar4 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 == (undefined1 *)0x0) {
          uStack_3c8 = 0;
          uStack_3d0 = 0;
          uStack_3b8 = 0;
          uStack_3c0 = 0;
          uStack_3d8 = 0;
          uStack_3e0 = 0;
        }
        else {
          func_0x00010bdc0fc0(&uStack_3e0,puVar4);
        }
        func_0x00010be9a8a0(&uStack_400,uVar10,puVar2);
        func_0x00010c219980(puVar3);
        _objc_release(puVar4);
      }
      uStack_3d8 = uStack_378;
      uStack_3e0 = uStack_380;
      uStack_3d0 = uStack_370;
      uStack_3f8 = uStack_390;
      uStack_400 = uStack_398;
      uStack_3f0 = uStack_388;
      _CMTimeAdd(&uStack_380,&uStack_3e0,&uStack_400);
      puVar13 = puVar13 + 1;
      puVar4 = puVar8;
      func_0x00010bf529e0();
    } while (puVar13 < puVar4);
  }
  func_0x00010bee9160(puVar2);
  uStack_3a8 = uStack_378;
  uStack_3b0 = uStack_380;
  uStack_3a0 = uStack_370;
  puVar2 = puVar3;
  func_0x000109126f00(puVar3,&uStack_3b0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  puVar6 = puVar7;
  func_0x0001091268ac();
  if (((ulong)puVar6 & 1) != 0) {
    func_0x00010c17e9a0(puVar5);
    func_0x00010c17ea60(puVar5);
    func_0x00010c17eb20(puVar5);
  }
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108466f2c; end: 10846719b; -[SCTimelineVideoSource _videoCompositionForVideoTrack:withTimeRanges:transforms:videoRate:] */

void FUN_108466f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,ulong param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
  func_0x00010c2998a0(PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_90 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uVar5 = param_5;
  func_0x00010bf529e0();
  if (uVar5 != 0) {
    uVar5 = 0;
    do {
      uVar2 = param_5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x00010bdc1120(&uStack_c0,uVar2);
      }
      _objc_release(uVar2);
      uVar2 = param_6;
      func_0x00010bf529e0();
      if (uVar5 < uVar2) {
        uVar2 = param_6;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        if (uVar2 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
        }
        else {
          func_0x00010bdc0fc0(&uStack_f0,uVar2);
        }
        func_0x00010be9a8a0(&uStack_110,param_1,param_2);
        func_0x00010c219980(puVar1);
        _objc_release(uVar2);
      }
      uStack_e8 = uStack_88;
      uStack_f0 = uStack_90;
      uStack_e0 = uStack_80;
      uStack_108 = uStack_a0;
      uStack_110 = uStack_a8;
      uStack_100 = uStack_98;
      _CMTimeAdd(&uStack_90,&uStack_f0,&uStack_110);
      uVar5 = uVar5 + 1;
      uVar2 = param_5;
      func_0x00010bf529e0();
    } while (uVar5 < uVar2);
  }
  func_0x00010bee9160(param_2);
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_b0 = uStack_80;
  puVar3 = puVar1;
  func_0x000109126f00(puVar1,&uStack_c0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  uVar5 = param_4;
  func_0x0001091268ac();
  if ((uVar5 & 1) != 0) {
    func_0x00010c17e9a0(puVar4);
    func_0x00010c17ea60(puVar4);
    func_0x00010c17eb20(puVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10846719c; end: 1084671f3; -[SCTimelineVideoSource _scaleCMTime:withRate:] */

void FUN_10846719c(undefined8 *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (param_2 == 2.0) {
    uStack_28 = param_5[1];
    uStack_30 = *param_5;
    uStack_20 = param_5[2];
    _CMTimeMultiplyByRatio(&uStack_30,1,2);
    return;
  }
  uVar1 = *param_5;
  param_1[1] = param_5[1];
  *param_1 = uVar1;
  param_1[2] = param_5[2];
  return;
}



/* Entry: 1084671f4; end: 108467233; -[SCTimelineVideoSource _videoTransformRenderSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1084671f4(long param_1)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  dVar2 = dRam000000011332ebe8;
  pdVar1 = (double *)(param_1 + _DAT_1127757ac);
  dVar4 = *pdVar1;
  dVar5 = pdVar1[1];
  bVar3 = false;
  if ((dVar4 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar3 = false, !NAN(dVar5) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar3 = dVar5 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (bVar3) {
    pdVar1[1] = dRam000000011332ebf0;
    *pdVar1 = dVar2;
    dVar4 = *pdVar1;
    dVar5 = pdVar1[1];
  }
  auVar6._8_8_ = dVar5;
  auVar6._0_8_ = dVar4;
  return auVar6;
}



/* Entry: 108467234; end: 108467d47; -[SCTimelineVideoSource _generatePlaybackAssetCompositionContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108467234(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  double *pdVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  double *pdVar13;
  ulong unaff_x22;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  ulong uStack_3d0;
  double *pdStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  undefined1 *puStack_3b0;
  code *pcStack_3a8;
  long lStack_3a0;
  undefined *puStack_398;
  ulong uStack_390;
  undefined8 uStack_388;
  double dStack_380;
  undefined8 uStack_378;
  long lStack_370;
  ulong uStack_368;
  long lStack_360;
  undefined8 uStack_358;
  double dStack_350;
  undefined8 uStack_348;
  undefined8 uStack_338;
  double dStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  double dStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  double dStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2c8;
  double dStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  double dStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  double dStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  double dStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  double dStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  double dStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  double dStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_1127757c0;
  if (*(long *)(param_1 + lVar15) == 0) {
    uStack_198 = 0;
    dStack_1a0 = 0.0;
    uStack_190 = 0;
  }
  else {
    func_0x00010bf8b160(&dStack_1a0);
  }
  pdVar13 = &dStack_2a0;
  lStack_3a0 = (long)_DAT_112775794;
  if (*(long *)(param_1 + lStack_3a0) == 0) {
    dStack_1b8 = 0.0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
  }
  else {
    func_0x00010c276460(&dStack_1b8);
  }
  lStack_360 = (long)_DAT_1127757dc;
  uVar11 = *(undefined8 *)(param_1 + lStack_360);
  uStack_348 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  dStack_350 = *(double *)PTR__kCMTimeZero_110348670;
  uStack_358 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_1c8 = uStack_198;
  dStack_1d0 = dStack_1a0;
  uStack_1c0 = uStack_190;
  dStack_280 = dStack_350;
  uStack_278 = uStack_348;
  uStack_270 = uStack_358;
  _CMTimeRangeMake(&dStack_330,&dStack_280,&dStack_1d0);
  func_0x00010c12eb60(uVar11);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar14 = param_1;
    func_0x00010becdea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_278 = uStack_348;
    dStack_280 = dStack_350;
    uStack_270 = uStack_358;
    uStack_1c8 = uStack_198;
    dStack_1d0 = dStack_1a0;
    uStack_1c0 = uStack_190;
    _CMTimeRangeMake(&dStack_330,&dStack_280,&dStack_1d0);
    func_0x00010c12eb60(lVar14);
    _objc_release(lVar14);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_1084674d4;
  }
  lVar14 = (long)_DAT_1127757e8;
  if (*(char *)(param_1 + lVar14) == '\x01') {
    uStack_328 = uStack_198;
    dStack_330 = dStack_1a0;
    uStack_320 = uStack_190;
    uStack_278 = uStack_1b0;
    dStack_280 = dStack_1b8;
    uStack_270 = uStack_1a8;
    pdVar4 = &dStack_330;
    _CMTimeCompare(pdVar4,&dStack_280);
    lVar14 = param_1;
    if ((int)pdVar4 < 1) {
      uStack_328 = uStack_198;
      dStack_330 = dStack_1a0;
      uStack_320 = uStack_190;
      uStack_278 = uStack_1b0;
      dStack_280 = dStack_1b8;
      uStack_270 = uStack_1a8;
      pdVar4 = &dStack_330;
      _CMTimeCompare(pdVar4,&dStack_280);
      if (-1 < (int)pdVar4) goto LAB_1084674d4;
      lVar5 = (long)_DAT_1127757b8;
      unaff_x22 = *(ulong *)(param_1 + lVar15);
      uStack_278 = uStack_198;
      dStack_280 = dStack_1a0;
      uStack_270 = uStack_190;
      uStack_1c8 = uStack_1b0;
      dStack_1d0 = dStack_1b8;
      uStack_1c0 = uStack_1a8;
      _CMTimeRangeFromTimeToTime(&dStack_330,&dStack_280,&dStack_1d0);
      func_0x00010be8ea00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar14 != 0) {
        unaff_x22 = (ulong)*(uint *)(param_1 + lVar5);
        uStack_278 = uStack_348;
        dStack_280 = dStack_350;
        uStack_270 = uStack_358;
        uStack_1c8 = uStack_1b0;
        dStack_1d0 = dStack_1b8;
        uStack_1c0 = uStack_1a8;
        _CMTimeRangeMake(&dStack_330,&dStack_280,&dStack_1d0);
        func_0x00010be8ea00(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010becdea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uStack_278 = uStack_1b0;
      dStack_280 = dStack_1b8;
      uStack_270 = uStack_1a8;
      uStack_1c8 = uStack_198;
      dStack_1d0 = dStack_1a0;
      uStack_1c0 = uStack_190;
      _CMTimeRangeFromTimeToTime(&dStack_330,&dStack_280,&dStack_1d0);
      func_0x00010c12eb60(lVar14);
    }
    _objc_release(lVar14);
  }
  else {
    unaff_x22 = (ulong)*(uint *)(param_1 + _DAT_1127757b8);
    uStack_278 = uStack_348;
    dStack_280 = dStack_350;
    uStack_270 = uStack_358;
    uStack_1c8 = uStack_1b0;
    dStack_1d0 = dStack_1b8;
    uStack_1c0 = uStack_1a8;
    _CMTimeRangeMake(&dStack_330,&dStack_280,&dStack_1d0);
    func_0x00010be8ea00(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    *(undefined1 *)(param_1 + lVar14) = 1;
  }
LAB_1084674d4:
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  lVar15 = *(long *)(param_1 + 0x20);
  puStack_398 = puVar3;
  _objc_retain(lVar15);
  lStack_370 = lVar15;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    uStack_368 = *plStack_200;
    do {
      lVar14 = 0;
      do {
        if (*plStack_200 != uStack_368) {
          _objc_enumerationMutation(lStack_370);
        }
        lVar5 = *(long *)(param_1 + 0x20);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + _DAT_1127757d8);
        func_0x00010c0e00e0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        if (lVar5 == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = *(undefined8 *)(lVar5 + 0x10);
        }
        _objc_retain(uVar16);
        uStack_278 = uStack_348;
        dStack_280 = dStack_350;
        uStack_270 = uStack_358;
        uStack_1c8 = uStack_1b0;
        dStack_1d0 = dStack_1b8;
        uStack_1c0 = uStack_1a8;
        _CMTimeRangeMake(&dStack_330,&dStack_280,&dStack_1d0);
        func_0x00010be8ea00(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar16);
        _objc_release(uVar11);
        _objc_release(lVar5);
        lVar14 = lVar14 + 1;
      } while (lVar15 != lVar14);
      lVar15 = lStack_370;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar15 != 0);
  }
  _objc_release(lStack_370);
  uStack_1c8 = uStack_348;
  dStack_1d0 = dStack_350;
  uStack_1c0 = uStack_358;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uVar12 = *(ulong *)(param_1 + 0x70);
  _objc_retain(uVar12);
  uStack_390 = uVar12;
  func_0x00010bf52a60();
  uVar11 = 0;
  puVar3 = puStack_398;
  if (uVar12 != 0) {
    lStack_370 = *plStack_240;
    uStack_378 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
    dVar17 = *(double *)PTR__kCMTimeInvalid_110348648;
    uStack_388 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
    dStack_380 = dVar17;
    uStack_368 = uVar12;
    do {
      unaff_x22 = 0;
      uVar16 = uVar11;
      do {
        if (*plStack_240 != lStack_370) {
          _objc_enumerationMutation(uStack_390);
        }
        if (*(long *)(lStack_248 + unaff_x22 * 8) == 0) {
          dVar17 = 0.0;
          dStack_268 = 0.0;
          uStack_270 = 0;
          uStack_258 = 0;
          uStack_260 = 0;
          uStack_278 = 0;
          dStack_280 = 0.0;
        }
        else {
          func_0x00010bdc1120(&dStack_280);
        }
        func_0x00010c11fdc0(param_1);
        if (dVar17 != 1.0) {
          func_0x00010c11fdc0(param_1);
          uStack_328 = uStack_278;
          dStack_330 = dStack_280;
          uStack_320 = uStack_270;
          func_0x00010be9a8a0(&dStack_2a0,param_1);
          func_0x00010c11fdc0(param_1);
          uStack_328 = uStack_260;
          dStack_330 = dStack_268;
          uStack_320 = uStack_258;
          func_0x00010be9a8a0(&dStack_2c0,param_1);
          _CMTimeRangeMake(&dStack_330,&dStack_2a0,&dStack_2c0);
          uStack_278 = uStack_328;
          dStack_280 = dStack_330;
          dStack_268 = dStack_318;
          uStack_270 = uStack_320;
          uStack_258 = uStack_308;
          uStack_260 = uStack_310;
        }
        lVar15 = lStack_360;
        uStack_328 = uStack_278;
        dStack_330 = dStack_280;
        dStack_318 = dStack_268;
        uStack_320 = uStack_270;
        uStack_308 = uStack_258;
        uStack_310 = uStack_260;
        uStack_298 = uStack_378;
        dStack_2a0 = dStack_380;
        uStack_290 = uStack_388;
        uStack_2c8 = uVar16;
        func_0x00010c067160(*(undefined8 *)(param_1 + lStack_360));
        uVar11 = uStack_2c8;
        _objc_retain(uStack_2c8);
        _objc_release(uVar16);
        lVar14 = *(long *)(param_1 + lVar15);
        func_0x00010c1585e0();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar14;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        if (lVar15 == 0) {
          dStack_2e8 = 0.0;
          uStack_2f0 = 0;
          uStack_2d8 = 0;
          uStack_2e0 = 0;
          uStack_308 = 0;
          uStack_310 = 0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          uStack_328 = 0;
          dStack_330 = 0.0;
          dStack_318 = 0.0;
          uStack_320 = 0;
        }
        else {
          func_0x00010c26f4e0(&dStack_330,lVar15);
        }
        uStack_298 = uStack_2e0;
        dStack_2a0 = dStack_2e8;
        uStack_290 = uStack_2d8;
        uStack_2b8 = uStack_348;
        dStack_2c0 = dStack_350;
        uStack_2b0 = uStack_358;
        pdVar4 = &dStack_2a0;
        _CMTimeCompare(pdVar4,&dStack_2c0);
        lVar14 = lStack_360;
        if ((int)pdVar4 == 0) {
          uVar6 = *(undefined8 *)(param_1 + lStack_360);
          func_0x00010c1585e0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)(param_1 + lVar14);
          func_0x00010c1585e0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          uVar16 = uVar6;
          func_0x00010c25e980(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1faba0(*(undefined8 *)(param_1 + lVar14));
          _objc_release(uVar16);
          _objc_release(uVar7);
          _objc_release(uVar6);
        }
        if (*(long *)(param_1 + 0x28) == 0) {
          lVar8 = *(long *)(param_1 + _DAT_1127757b4);
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010bfb1920(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uStack_338 = uVar11;
          uStack_328 = uStack_278;
          dStack_330 = dStack_280;
          dStack_318 = dStack_268;
          uStack_320 = uStack_270;
          uStack_308 = uStack_258;
          uStack_310 = uStack_260;
          uStack_298 = uStack_1c8;
          dStack_2a0 = dStack_1d0;
          uStack_290 = uStack_1c0;
          func_0x00010c067160(lVar8);
          uVar16 = uStack_338;
          _objc_retain(uStack_338);
          _objc_release(uVar11);
          lVar14 = lVar8;
          func_0x00010c1585e0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar14;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar15);
          _objc_release(lVar14);
          if (lVar5 == 0) {
            dStack_2e8 = 0.0;
            uStack_2f0 = 0;
            uStack_2d8 = 0;
            uStack_2e0 = 0;
            uStack_308 = 0;
            uStack_310 = 0;
            uStack_2f8 = 0;
            uStack_300 = 0;
            uStack_328 = 0;
            dStack_330 = 0.0;
            dStack_318 = 0.0;
            uStack_320 = 0;
          }
          else {
            func_0x00010c26f4e0(&dStack_330,lVar5);
          }
          uStack_298 = uStack_2e0;
          dStack_2a0 = dStack_2e8;
          uStack_290 = uStack_2d8;
          uStack_2b8 = uStack_348;
          dStack_2c0 = dStack_350;
          uStack_2b0 = uStack_358;
          pdVar4 = &dStack_2a0;
          _CMTimeCompare(pdVar4,&dStack_2c0);
          if ((int)pdVar4 == 0) {
            lVar15 = lVar8;
            func_0x00010c1585e0(lVar8);
            _objc_retainAutoreleasedReturnValue();
            lVar14 = lVar8;
            func_0x00010c1585e0(lVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf529e0();
            lVar9 = lVar15;
            func_0x00010c25e980(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1faba0(lVar8);
            _objc_release(lVar9);
            _objc_release(lVar14);
            _objc_release(lVar15);
          }
          _objc_release(uVar6);
          _objc_release(lVar8);
          uVar11 = uVar16;
          lVar15 = lVar5;
          puVar3 = puStack_398;
        }
        puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        uStack_298 = uStack_1c8;
        dStack_2a0 = dStack_1d0;
        uStack_290 = uStack_1c0;
        uStack_2b8 = uStack_260;
        dStack_2c0 = dStack_268;
        uStack_2b0 = uStack_258;
        _CMTimeRangeMake(&dStack_330,&dStack_2a0,&dStack_2c0);
        func_0x00010c297240(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar10);
        uStack_328 = uStack_1c8;
        dStack_330 = dStack_1d0;
        uStack_320 = uStack_1c0;
        uStack_298 = uStack_260;
        dStack_2a0 = dStack_268;
        uStack_290 = uStack_258;
        dVar17 = dStack_268;
        _CMTimeAdd(&dStack_1d0,&dStack_330,&dStack_2a0);
        _objc_release(lVar15);
        unaff_x22 = unaff_x22 + 1;
        uVar16 = uVar11;
      } while (uStack_368 != unaff_x22);
      uVar12 = uStack_390;
      func_0x00010bf52a60();
      uStack_368 = uVar12;
    } while (uVar12 != 0);
  }
  uStack_368 = 0;
  _objc_release(uStack_390);
  puVar10 = puVar3;
  func_0x00010bf51e00();
  lVar14 = (long)_DAT_1127757d0;
  uVar16 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar10;
  _objc_release(uVar16);
  lVar15 = *(long *)(param_1 + lVar14);
  func_0x00010bed97e0(param_1);
  iVar2 = (int)*(undefined8 *)(param_1 + lStack_3a0);
  func_0x00010bf4b7e0();
  if (iVar2 != 0) {
    lVar14 = *(long *)(param_1 + lStack_360);
    pdVar13 = *(double **)(param_1 + 0x70);
    unaff_x22 = *(ulong *)(param_1 + _DAT_1127757a0);
    func_0x00010c11fdc0(param_1);
    lVar5 = param_1;
    lVar15 = lVar14;
    func_0x00010bee8b40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + _DAT_1127757e4);
    *(long *)(param_1 + _DAT_1127757e4) = lVar5;
    _objc_release(uVar16);
  }
  *(undefined1 *)(param_1 + _DAT_1127757c8) = 0;
  func_0x00010c289240(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
    return;
  }
  ___stack_chk_fail();
  pcStack_3a8 = FUN_108467d48;
  uStack_3d0 = unaff_x22;
  pdStack_3c8 = pdVar13;
  lStack_3c0 = lVar14;
  lStack_3b8 = param_1;
  puStack_3b0 = &stack0xfffffffffffffff0;
  _objc_retain(lVar15);
  puVar3[_DAT_1127757cc] = 1;
  lVar14 = (long)_DAT_112775794;
  if (*(long *)(puVar3 + lVar14) == 0) {
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
  }
  else {
    func_0x00010c276200(&uStack_3e8);
  }
  *(undefined8 *)(puVar3 + 0x60) = uStack_3e0;
  *(undefined8 *)(puVar3 + 0x58) = uStack_3e8;
  *(undefined8 *)(puVar3 + 0x68) = uStack_3d8;
  if (*(long *)(puVar3 + lVar14) == 0) {
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
  }
  else {
    func_0x00010c276460(&uStack_3e8);
  }
  puVar1 = (undefined8 *)(puVar3 + _DAT_112775798);
  puVar1[1] = uStack_3e0;
  *puVar1 = uStack_3e8;
  puVar1[2] = uStack_3d8;
  func_0x00010c12adc0(*(undefined8 *)(puVar3 + 0x70));
  func_0x00010befa160(*(undefined8 *)(puVar3 + 0x70));
  func_0x00010bed97e0(puVar3);
  _objc_release(lVar15);
  return;
}



/* Entry: 108467d48; end: 108467e23; -[SCTimelineVideoSource _updateMultiSnapTimeRangesWithTimeRanges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108467d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_1127757cc) = 1;
  lVar2 = (long)_DAT_112775794;
  if (*(long *)(param_1 + lVar2) == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010c276200(&uStack_48);
  }
  *(undefined8 *)(param_1 + 0x60) = uStack_40;
  *(undefined8 *)(param_1 + 0x58) = uStack_48;
  *(undefined8 *)(param_1 + 0x68) = uStack_38;
  if (*(long *)(param_1 + lVar2) == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010c276460(&uStack_48);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112775798);
  puVar1[1] = uStack_40;
  *puVar1 = uStack_48;
  puVar1[2] = uStack_38;
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x70));
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
  func_0x00010bed97e0(param_1,param_2,*(undefined8 *)(param_1 + 0x70));
  _objc_release(param_3);
  return;
}



/* Entry: 108467e24; end: 108467fcf; -[SCTimelineVideoSource _constructPlaybackCompositionFromOverrideAndMixedTracks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108467e24(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iStack_340;
  long lStack_320;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_198;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_1127757c0;
  lVar2 = *(long *)(param_1 + lVar16);
  func_0x00010c279200(lVar2,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c12ec60(*(undefined8 *)(param_1 + lVar16));
      lVar17 = lVar17 + 1;
    } while (lVar3 != lVar17);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  func_0x00010c12adc0(*(undefined8 *)(param_1 + _DAT_1127757b4));
  puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar17 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar17);
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + _DAT_1127757d8);
  *(undefined **)(param_1 + _DAT_1127757d8) = puVar14;
  _objc_release(uVar12);
  puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + _DAT_1127757d4);
  *(undefined **)(param_1 + _DAT_1127757d4) = puVar14;
  _objc_release(uVar12);
  *(undefined4 *)(param_1 + _DAT_1127757b8) = 0;
  lVar10 = *(long *)(param_1 + 0x20);
  uVar12 = *(undefined8 *)(param_1 + lVar16);
  lVar3 = lVar17;
  func_0x00010bde6e80(param_1);
  _objc_release(lVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar3);
  _objc_retain(lVar10);
  _objc_retain(uVar12);
  lVar11 = lVar2;
  func_0x00010bdc77e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar16 = lVar2;
    func_0x00010bdc7ae0();
    _objc_retainAutoreleasedReturnValue();
    iStack_340 = _DAT_1127757b4;
    func_0x00010befa140(*(undefined8 *)(lVar2 + _DAT_1127757b4));
    lVar17 = lVar11;
    func_0x00010c277e40();
    *(int *)(lVar2 + _DAT_1127757b8) = (int)lVar17;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(*(undefined4 *)(lVar2 + 0x30),PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar15 = *(undefined8 *)(lVar2 + _DAT_1127757d4);
    func_0x00010c277e40(lVar11);
    func_0x00010c0df760(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar15);
    _objc_release(puVar14);
    _objc_release(puVar4);
    _objc_release(lVar16);
    _objc_release(lVar11);
  }
  else {
    lVar16 = lVar3;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar16);
    if (lVar17 == 0) {
      uVar15 = 0;
    }
    else {
      puVar8 = (undefined8 *)(lVar2 + _DAT_112775798);
      uVar20 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uVar19 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uVar15 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_288 = puVar8[1];
      uStack_290 = *puVar8;
      uStack_280 = puVar8[2];
      uStack_270 = uVar19;
      uStack_268 = uVar20;
      uStack_260 = uVar15;
      _CMTimeRangeMake(&uStack_250,&uStack_270,&uStack_290);
      uStack_298 = 0;
      uStack_270 = uVar19;
      uStack_268 = uVar20;
      uStack_260 = uVar15;
      func_0x00010c067160(lVar11);
      uVar15 = uStack_298;
      _objc_retain(uStack_298);
    }
    iStack_340 = _DAT_1127757b4;
    func_0x00010befa140(*(undefined8 *)(lVar2 + _DAT_1127757b4));
    lVar16 = lVar11;
    func_0x00010c277e40();
    *(int *)(lVar2 + _DAT_1127757b8) = (int)lVar16;
    _objc_release(uVar15);
    _objc_release(lVar17);
    _objc_release(lVar11);
  }
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  plStack_2d0 = (long *)0x0;
  _objc_retain(lVar10);
  lStack_320 = lVar10;
  func_0x00010bf52a60();
  if (lStack_320 != 0) {
    lVar11 = *plStack_2d0;
    do {
      lVar16 = 0;
      do {
        if (*plStack_2d0 != lVar11) {
          _objc_enumerationMutation(lVar10);
        }
        lVar17 = lVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar2;
        func_0x00010bdc77e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        if (lVar17 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(lVar17 + 0x10);
        }
        _objc_retain(lVar13);
        lVar6 = lVar13;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        _objc_release(lVar13);
        if (lVar7 == 0) {
LAB_1084684a0:
          func_0x00010befa140(*(undefined8 *)(lVar2 + iStack_340));
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c277e40(lVar5);
          func_0x00010c0df760(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(lVar2 + _DAT_1127757d8));
          _objc_release(puVar14);
          if (lVar17 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(undefined4 *)(lVar17 + 8);
          }
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df740(uVar18);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar15 = *(undefined8 *)(lVar2 + _DAT_1127757d4);
          func_0x00010c277e40(lVar5);
          func_0x00010c0df760(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar15);
          _objc_release(puVar14);
          _objc_release(puVar4);
          _objc_release(0);
        }
        else {
          if (lVar17 == 0) {
            uStack_250 = 0;
            uStack_248 = 0;
            uStack_240 = 0;
          }
          else {
            uStack_248 = *(undefined8 *)(lVar17 + 0x28);
            uStack_250 = *(undefined8 *)(lVar17 + 0x20);
            uStack_240 = *(undefined8 *)(lVar17 + 0x30);
          }
          func_0x00010bf8b160(&uStack_270,lVar2);
          puVar8 = &uStack_250;
          _CMTimeCompare(puVar8,&uStack_270);
          if ((int)puVar8 < 1) {
            if (lVar17 == 0) {
              _objc_retain(0);
              uStack_268 = 0;
              uStack_260 = 0;
              uStack_270 = 0;
              _objc_release(0);
              uStack_290 = 0;
              uStack_288 = 0;
              uStack_280 = 0;
            }
            else {
              lVar13 = *(long *)(lVar17 + 0x10);
              _objc_retain(lVar13);
              if (lVar13 == 0) {
                uStack_270 = 0;
                uStack_268 = 0;
                uStack_260 = 0;
              }
              else {
                func_0x00010bf8b160(&uStack_270,lVar13);
              }
              _objc_release(lVar13);
              uStack_288 = *(undefined8 *)(lVar17 + 0x28);
              uStack_290 = *(undefined8 *)(lVar17 + 0x20);
              uStack_280 = *(undefined8 *)(lVar17 + 0x30);
            }
            uStack_2f8 = uStack_268;
            uStack_300 = uStack_270;
            uStack_2f0 = uStack_260;
            _CMTimeAdd(&uStack_250,&uStack_290,&uStack_300);
            puVar1 = (undefined8 *)(lVar2 + _DAT_112775798);
            uStack_288 = puVar1[1];
            uStack_290 = *puVar1;
            uStack_280 = puVar1[2];
            puVar8 = &uStack_250;
            _CMTimeCompare(puVar8,&uStack_290);
            if (0 < (int)puVar8) {
              if (lVar17 == 0) {
                uStack_290 = 0;
                uStack_288 = 0;
                uStack_280 = 0;
              }
              else {
                uStack_288 = *(undefined8 *)(lVar17 + 0x28);
                uStack_290 = *(undefined8 *)(lVar17 + 0x20);
                uStack_280 = *(undefined8 *)(lVar17 + 0x30);
              }
              uStack_2f8 = puVar1[1];
              uStack_300 = *puVar1;
              uStack_2f0 = puVar1[2];
              _CMTimeSubtract(&uStack_250,&uStack_300,&uStack_290);
              uStack_268 = uStack_248;
              uStack_270 = uStack_250;
              uStack_260 = uStack_240;
            }
            uStack_288 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
            uStack_290 = *(undefined8 *)PTR__kCMTimeZero_110348670;
            uStack_280 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
            uStack_2f8 = uStack_268;
            uStack_300 = uStack_270;
            uStack_2f0 = uStack_260;
            _CMTimeRangeMake(&uStack_250,&uStack_290,&uStack_300);
            if (lVar17 == 0) {
              uStack_290 = 0;
              uStack_288 = 0;
              uStack_280 = 0;
            }
            else {
              uStack_288 = *(undefined8 *)(lVar17 + 0x28);
              uStack_290 = *(undefined8 *)(lVar17 + 0x20);
              uStack_280 = *(undefined8 *)(lVar17 + 0x30);
            }
            func_0x00010c067160(lVar5);
            _objc_retain(0);
            goto LAB_1084684a0;
          }
        }
        _objc_release(lVar7);
        _objc_release(lVar5);
        _objc_release(lVar17);
        lVar16 = lVar16 + 1;
      } while (lStack_320 != lVar16);
      lStack_320 = lVar10;
      func_0x00010bf52a60();
    } while (lStack_320 != 0);
  }
  _objc_release(lVar10);
  _objc_release(uVar12);
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)(lVar3 + 0x20);
  func_0x00010bf529e0();
  if ((lVar10 == 0) || ((*(byte *)(lVar3 + _DAT_1127757c4) & 1) != 0)) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR__OBJC_CLASS___AVMutableAudioMix_1126bf588;
    func_0x00010bf0f320(PTR__OBJC_CLASS___AVMutableAudioMix_1126bf588);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcd2c0(0,lVar3);
    puVar9 = puVar4;
    func_0x00010bf51e00(puVar4);
    func_0x00010c1ad580(puVar14);
    _objc_release(puVar9);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 108467fd0; end: 10846866b; -[SCTimelineVideoSource _constructPlaybackCompositionFromOverride:mixedTracks:inComposition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108467fd0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iStack_220;
  long lStack_200;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar9 = param_1;
  func_0x00010bdc77e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar13 = param_1;
    func_0x00010bdc7ae0();
    _objc_retainAutoreleasedReturnValue();
    iStack_220 = _DAT_1127757b4;
    func_0x00010befa140(*(undefined8 *)(param_1 + _DAT_1127757b4));
    lVar2 = lVar9;
    func_0x00010c277e40();
    *(int *)(param_1 + _DAT_1127757b8) = (int)lVar2;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(*(undefined4 *)(param_1 + 0x30),PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar12 = *(undefined8 *)(param_1 + _DAT_1127757d4);
    func_0x00010c277e40(lVar9);
    func_0x00010c0df760(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar3);
    _objc_release(lVar13);
    _objc_release(lVar9);
  }
  else {
    lVar13 = param_3;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar13;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    if (lVar2 == 0) {
      uVar12 = 0;
    }
    else {
      puVar7 = (undefined8 *)(param_1 + _DAT_112775798);
      uVar16 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uVar15 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uVar12 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_168 = puVar7[1];
      uStack_170 = *puVar7;
      uStack_160 = puVar7[2];
      uStack_150 = uVar15;
      uStack_148 = uVar16;
      uStack_140 = uVar12;
      _CMTimeRangeMake(&uStack_130,&uStack_150,&uStack_170);
      uStack_178 = 0;
      uStack_150 = uVar15;
      uStack_148 = uVar16;
      uStack_140 = uVar12;
      func_0x00010c067160(lVar9);
      uVar12 = uStack_178;
      _objc_retain(uStack_178);
    }
    iStack_220 = _DAT_1127757b4;
    func_0x00010befa140(*(undefined8 *)(param_1 + _DAT_1127757b4));
    lVar13 = lVar9;
    func_0x00010c277e40();
    *(int *)(param_1 + _DAT_1127757b8) = (int)lVar13;
    _objc_release(uVar12);
    _objc_release(lVar2);
    _objc_release(lVar9);
  }
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  _objc_retain(param_4);
  lStack_200 = param_4;
  func_0x00010bf52a60();
  if (lStack_200 != 0) {
    lVar9 = *plStack_1b0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1b0 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        lVar2 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010bdc77e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = *(long *)(lVar2 + 0x10);
        }
        _objc_retain(lVar10);
        lVar5 = lVar10;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar10);
        if (lVar6 == 0) {
LAB_1084684a0:
          func_0x00010befa140(*(undefined8 *)(param_1 + iStack_220));
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c277e40(lVar4);
          func_0x00010c0df760(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_1127757d8));
          _objc_release(puVar11);
          if (lVar2 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(undefined4 *)(lVar2 + 8);
          }
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df740(uVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar12 = *(undefined8 *)(param_1 + _DAT_1127757d4);
          func_0x00010c277e40(lVar4);
          func_0x00010c0df760(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar12);
          _objc_release(puVar11);
          _objc_release(puVar3);
          _objc_release(0);
        }
        else {
          if (lVar2 == 0) {
            uStack_130 = 0;
            uStack_128 = 0;
            uStack_120 = 0;
          }
          else {
            uStack_128 = *(undefined8 *)(lVar2 + 0x28);
            uStack_130 = *(undefined8 *)(lVar2 + 0x20);
            uStack_120 = *(undefined8 *)(lVar2 + 0x30);
          }
          func_0x00010bf8b160(&uStack_150,param_1);
          puVar7 = &uStack_130;
          _CMTimeCompare(puVar7,&uStack_150);
          if ((int)puVar7 < 1) {
            if (lVar2 == 0) {
              _objc_retain(0);
              uStack_148 = 0;
              uStack_140 = 0;
              uStack_150 = 0;
              _objc_release(0);
              uStack_170 = 0;
              uStack_168 = 0;
              uStack_160 = 0;
            }
            else {
              lVar10 = *(long *)(lVar2 + 0x10);
              _objc_retain(lVar10);
              if (lVar10 == 0) {
                uStack_150 = 0;
                uStack_148 = 0;
                uStack_140 = 0;
              }
              else {
                func_0x00010bf8b160(&uStack_150,lVar10);
              }
              _objc_release(lVar10);
              uStack_168 = *(undefined8 *)(lVar2 + 0x28);
              uStack_170 = *(undefined8 *)(lVar2 + 0x20);
              uStack_160 = *(undefined8 *)(lVar2 + 0x30);
            }
            uStack_1d8 = uStack_148;
            uStack_1e0 = uStack_150;
            uStack_1d0 = uStack_140;
            _CMTimeAdd(&uStack_130,&uStack_170,&uStack_1e0);
            puVar1 = (undefined8 *)(param_1 + _DAT_112775798);
            uStack_168 = puVar1[1];
            uStack_170 = *puVar1;
            uStack_160 = puVar1[2];
            puVar7 = &uStack_130;
            _CMTimeCompare(puVar7,&uStack_170);
            if (0 < (int)puVar7) {
              if (lVar2 == 0) {
                uStack_170 = 0;
                uStack_168 = 0;
                uStack_160 = 0;
              }
              else {
                uStack_168 = *(undefined8 *)(lVar2 + 0x28);
                uStack_170 = *(undefined8 *)(lVar2 + 0x20);
                uStack_160 = *(undefined8 *)(lVar2 + 0x30);
              }
              uStack_1d8 = puVar1[1];
              uStack_1e0 = *puVar1;
              uStack_1d0 = puVar1[2];
              _CMTimeSubtract(&uStack_130,&uStack_1e0,&uStack_170);
              uStack_148 = uStack_128;
              uStack_150 = uStack_130;
              uStack_140 = uStack_120;
            }
            uStack_168 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
            uStack_170 = *(undefined8 *)PTR__kCMTimeZero_110348670;
            uStack_160 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
            uStack_1d8 = uStack_148;
            uStack_1e0 = uStack_150;
            uStack_1d0 = uStack_140;
            _CMTimeRangeMake(&uStack_130,&uStack_170,&uStack_1e0);
            if (lVar2 == 0) {
              uStack_170 = 0;
              uStack_168 = 0;
              uStack_160 = 0;
            }
            else {
              uStack_168 = *(undefined8 *)(lVar2 + 0x28);
              uStack_170 = *(undefined8 *)(lVar2 + 0x20);
              uStack_160 = *(undefined8 *)(lVar2 + 0x30);
            }
            func_0x00010c067160(lVar4);
            _objc_retain(0);
            goto LAB_1084684a0;
          }
        }
        _objc_release(lVar6);
        _objc_release(lVar4);
        _objc_release(lVar2);
        lVar13 = lVar13 + 1;
      } while (lStack_200 != lVar13);
      lStack_200 = param_4;
      func_0x00010bf52a60();
    } while (lStack_200 != 0);
  }
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    lVar9 = *(long *)(param_3 + 0x20);
    func_0x00010bf529e0();
    if ((lVar9 == 0) || ((*(byte *)(param_3 + _DAT_1127757c4) & 1) != 0)) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___AVMutableAudioMix_1126bf588;
      func_0x00010bf0f320(PTR__OBJC_CLASS___AVMutableAudioMix_1126bf588);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdcd2c0(0,param_3);
      puVar8 = puVar3;
      func_0x00010bf51e00(puVar3);
      func_0x00010c1ad580(puVar11);
      _objc_release(puVar8);
      _objc_release(puVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  return;
}



/* Entry: 10846866c; end: 10846872b; -[SCTimelineVideoSource basePlayerItemAudioMix] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10846866c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if ((lVar1 == 0) || ((*(byte *)(param_1 + _DAT_1127757c4) & 1) != 0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___AVMutableAudioMix_1126bf588;
    func_0x00010bf0f320(PTR__OBJC_CLASS___AVMutableAudioMix_1126bf588);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcd2c0(0,param_1,param_2,puVar2,*(undefined8 *)(param_1 + _DAT_1127757d4));
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c1ad580(puVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10846872c; end: 10846878f; -[SCTimelineVideoSource _trackFromComposition:withID:] */

void FUN_10846872c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010c278b40(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0c6c20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108468790; end: 108468b13; -[SCTimelineVideoSource _replaceAudioTrackWithId:inAVMutableComposition:withAsset:inTimeRange:] */

void FUN_108468790(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  double *param_6)

{
  long lVar1;
  long lVar2;
  double *pdVar3;
  undefined *puVar4;
  double dVar5;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c279200(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010becdea0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_5 == 0) {
      dStack_68 = 0.0;
      dStack_60 = 0.0;
      dStack_58 = 0.0;
    }
    else {
      func_0x00010bf8b160(&dStack_68,param_5);
    }
    dStack_c8 = dStack_60;
    dStack_d0 = dStack_68;
    dStack_c0 = dStack_58;
    dVar5 = dStack_68;
    _CMTimeGetSeconds(&dStack_d0);
    if (dVar5 == 0.0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      dStack_78 = param_6[1];
      dStack_80 = *param_6;
      dStack_70 = param_6[2];
      if (param_4 == 0) {
        dStack_d0 = 0.0;
        dStack_c8 = 0.0;
        dStack_c0 = 0.0;
      }
      else {
        func_0x00010bf8b160(&dStack_d0,param_4);
      }
      dStack_98 = dStack_78;
      dStack_a0 = dStack_80;
      dStack_90 = dStack_70;
      pdVar3 = &dStack_d0;
      _CMTimeCompare(pdVar3,&dStack_a0);
      if (0 < (int)pdVar3) {
        if (param_4 == 0) {
          dStack_a0 = 0.0;
          dStack_98 = 0.0;
          dStack_90 = 0.0;
        }
        else {
          func_0x00010bf8b160(&dStack_a0,param_4);
        }
        dStack_e8 = dStack_78;
        dStack_f0 = dStack_80;
        dStack_e0 = dStack_70;
        _CMTimeRangeFromTimeToTime(&dStack_d0,&dStack_f0,&dStack_a0);
        func_0x00010c12eb60(param_1);
      }
      dStack_98 = *(double *)(PTR__kCMTimeZero_110348670 + 8);
      dStack_a0 = *(double *)PTR__kCMTimeZero_110348670;
      dStack_90 = *(double *)(PTR__kCMTimeZero_110348670 + 0x10);
      dStack_e8 = dStack_60;
      dStack_f0 = dStack_68;
      dStack_e0 = dStack_58;
      _CMTimeRangeMake(&dStack_d0,&dStack_a0,&dStack_f0);
      dStack_e8 = dStack_78;
      dStack_f0 = dStack_80;
      dStack_e0 = dStack_70;
      _CMTimeFoldIntoRange(&dStack_a0,&dStack_f0,&dStack_d0);
      dStack_c8 = dStack_60;
      dStack_d0 = dStack_68;
      dStack_c0 = dStack_58;
      uStack_108 = dStack_98;
      dStack_110 = dStack_a0;
      uStack_100 = dStack_90;
      _CMTimeSubtract(&dStack_f0,&dStack_d0,&dStack_110);
      dStack_c8 = param_6[1];
      dStack_d0 = *param_6;
      dStack_b8 = param_6[3];
      dStack_c0 = param_6[2];
      dStack_a8 = param_6[5];
      dStack_b0 = param_6[4];
      _CMTimeRangeGetEnd(&dStack_110,&dStack_d0);
      dStack_128 = dStack_78;
      dStack_130 = dStack_80;
      dStack_120 = dStack_70;
      dStack_148 = dStack_e8;
      dStack_150 = dStack_f0;
      dStack_140 = dStack_e0;
      _CMTimeAdd(&dStack_d0,&dStack_130,&dStack_150);
      dStack_128 = (double)uStack_108;
      dStack_130 = dStack_110;
      dStack_120 = (double)uStack_100;
      pdVar3 = &dStack_d0;
      _CMTimeCompare(pdVar3,&dStack_130);
      if (0 < (int)pdVar3) {
        dStack_128 = (double)uStack_108;
        dStack_130 = dStack_110;
        dStack_120 = (double)uStack_100;
        dStack_148 = dStack_78;
        dStack_150 = dStack_80;
        dStack_140 = dStack_70;
        _CMTimeSubtract(&dStack_d0,&dStack_130,&dStack_150);
        dStack_e8 = dStack_c8;
        dStack_f0 = dStack_d0;
        dStack_e0 = dStack_c0;
      }
      dStack_128 = dStack_98;
      dStack_130 = dStack_a0;
      dStack_120 = dStack_90;
      dStack_148 = dStack_e8;
      dStack_150 = dStack_f0;
      dStack_140 = dStack_e0;
      _CMTimeRangeMake(&dStack_d0,&dStack_130,&dStack_150);
      dStack_128 = dStack_78;
      dStack_130 = dStack_80;
      dStack_120 = dStack_70;
      func_0x00010c067160(param_1);
      puVar4 = (undefined *)0x0;
      _objc_retain(0);
    }
  }
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108468b14; end: 108468e67; -[SCTimelineVideoSource _addOriginalAudioToCompositionTrack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108468b14(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_110 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_100 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar2 = *(long *)(param_1 + _DAT_112775794);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = &uStack_150;
  puVar8 = auStack_f0;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    puVar12 = (undefined8 *)0x0;
    lVar10 = *plStack_140;
    do {
      lVar11 = 0;
      do {
        if (*plStack_140 != lVar10) {
          _objc_enumerationMutation(lVar2);
        }
        puVar8 = PTR_DAT_1126a4e48;
        lVar13 = *(long *)(lStack_148 + lVar11 * 8);
        _objc_retain(lVar13);
        lVar4 = lVar13;
        func_0x000107c318f8(lVar13,puVar8);
        _objc_release(lVar13);
        puVar5 = PTR__OBJC_CLASS___AVAsset_1126aff38;
        if ((int)lVar4 == 0 || lVar13 == 0) {
          if (lVar13 != 0) goto LAB_108468d98;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
        }
        else {
          lVar4 = lVar13;
          func_0x00010bf0b7e0(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0b9e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          puVar8 = PTR_PTR_1126b0010;
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_f8 = puVar6;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          puStack_158 = puVar12;
          func_0x00010c266c80(puVar8);
          puVar1 = puStack_158;
          _objc_retain(puStack_158);
          _objc_release(puVar12);
          _objc_release(puVar7);
          _objc_release(puVar6);
          puVar8 = puVar5;
          func_0x00010c279200();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar8;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          puVar12 = puVar1;
          if (puVar6 != (undefined *)0x0) {
            func_0x00010c09e0e0(&uStack_190,lVar13);
            uStack_1a8 = uStack_108;
            uStack_1b0 = uStack_110;
            uStack_1a0 = uStack_100;
            puStack_198 = puVar1;
            puVar9 = &uStack_190;
            puVar8 = puVar6;
            func_0x00010c067160(param_3);
            puVar12 = puStack_198;
            _objc_retain(puStack_198);
            _objc_release(puVar1);
            if (puVar12 != (undefined8 *)0x0) {
              _objc_release(puVar6);
              _objc_release(puVar5);
              goto LAB_108468e18;
            }
            puVar12 = (undefined8 *)0x0;
          }
          _objc_release(puVar6);
          _objc_release(puVar5);
LAB_108468d98:
          func_0x00010c09e0e0(&uStack_190,lVar13);
        }
        uStack_1a8 = uStack_108;
        uStack_1b0 = uStack_110;
        uStack_1a0 = uStack_100;
        uStack_1c8 = uStack_170;
        uStack_1d0 = uStack_178;
        uStack_1c0 = uStack_168;
        _CMTimeAdd(&uStack_110,&uStack_1b0,&uStack_1d0);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar9 = &uStack_150;
      puVar8 = auStack_f0;
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
LAB_108468e18:
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    puVar12 = puVar9;
    ___stack_chk_fail();
    _objc_retain(puVar8);
    func_0x00010bef9f20(puVar12);
    _objc_retainAutoreleasedReturnValue();
    FUN_1084691e0(*(undefined8 *)(param_3 + _DAT_1127757bc),puVar8,puVar12 != (undefined8 *)0x0,1);
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 108468e68; end: 108468ee7; -[SCTimelineVideoSource _addMutableTrackToComposition:mediaType:preferredTrackID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108468e68(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bef9f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1084691e0(*(undefined8 *)(param_1 + _DAT_1127757bc),param_4,param_3 != 0,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108468ee8; end: 108468ef7; -[SCTimelineVideoSource isEditingMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108468ee8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127757c4);
}



/* Entry: 108468ef8; end: 108468f07; -[SCTimelineVideoSource timelineConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108468ef8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112775794);
}



/* Entry: 108468f08; end: 108468f17; -[SCTimelineVideoSource playbackTimeRanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108468f08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127757d0);
}



/* Entry: 108468f18; end: 108469037; -[SCTimelineVideoSource .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108468f18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127757d0,0);
  _objc_storeStrong(param_1 + _DAT_112775794,0);
  _objc_storeStrong(param_1 + _DAT_1127757bc,0);
  _objc_storeStrong(param_1 + _DAT_1127757d8,0);
  _objc_storeStrong(param_1 + _DAT_1127757d4,0);
  _objc_storeStrong(param_1 + _DAT_1127757b0,0);
  _objc_storeStrong(param_1 + _DAT_1127757a8,0);
  _objc_storeStrong(param_1 + _DAT_1127757a4,0);
  _objc_storeStrong(param_1 + _DAT_1127757a0,0);
  _objc_storeStrong(param_1 + _DAT_1127757e0,0);
  _objc_storeStrong(param_1 + _DAT_1127757e4,0);
  _objc_storeStrong(param_1 + _DAT_1127757ec,0);
  _objc_storeStrong(param_1 + _DAT_1127757b4,0);
  _objc_storeStrong(param_1 + _DAT_1127757dc,0);
  _objc_storeStrong(param_1 + _DAT_1127757c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277579c,0);
  return;
}



/* Entry: 108469038; end: 1084690cb; -[SCTimelineVideoSourceImageSegment initWithUniqueId:imageTimeRange:imagePixelBuffer:] */

undefined1 *
FUN_108469038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc9b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _CVPixelBufferRetain();
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1084690cc; end: 108469117; -[SCTimelineVideoSourceImageSegment dealloc] */

void FUN_1084690cc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  puStack_28 = PTR_PTR_1126fc9b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108469118; end: 10846911f; -[SCTimelineVideoSourceImageSegment uniqueId] */

undefined8 FUN_108469118(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108469120; end: 108469127; -[SCTimelineVideoSourceImageSegment imageTimeRange] */

undefined8 FUN_108469120(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108469128; end: 108469157; -[SCTimelineVideoSourceImageSegment setImageTimeRange:] */

void FUN_108469128(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108469158; end: 10846915f; -[SCTimelineVideoSourceImageSegment imagePixelBuffer] */

undefined8 FUN_108469158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108469160; end: 10846916b; -[SCTimelineVideoSourceImageSegment .cxx_destruct] */

void FUN_108469160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10846916c; end: 1084691df; -[SCGrapheneBcTimelineSourceMetric2 init] */

undefined1 * FUN_10846916c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc9b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1084691e0; end: 1084693c7;  */

undefined * FUN_1084691e0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f49af5d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_78,puVar1);
    puVar1 = &UNK_10f49af5e;
    if ((int)param_3 == 0) {
      puVar1 = &UNK_10f49af63;
    }
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar5 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a49fc0,puVar5,param_4);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar6 = 0;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_d0;
  pcStack_a8 = FUN_1084693c8;
  puStack_c0 = puVar1;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puStack_c8 = PTR_PTR_1126fc9c0;
  puStack_d0 = puVar2;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    _objc_retain(puVar5);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined8 **)((long)ppuVar3 + 8) = puVar5;
    _objc_release(uVar4);
  }
  _objc_release(puVar5);
  return (undefined *)ppuVar3;
}



/* Entry: 1084693c8; end: 10846943b; -[SCPreviewFeatureSmartTemplateDependencyService initWithSmartTemplateService:] */

undefined1 * FUN_1084693c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc9c0;
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



/* Entry: 10846943c; end: 108469443; -[SCPreviewFeatureSmartTemplateDependencyService smartTemplateService] */

undefined8 FUN_10846943c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108469444; end: 10846944f; -[SCPreviewFeatureSmartTemplateDependencyService .cxx_destruct] */

void FUN_108469444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108469450; end: 1084694c3; -[SCPreviewFeatureSmartTemplateServices initWithSmartTemplate:] */

undefined1 * FUN_108469450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc9c8;
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



/* Entry: 1084694c4; end: 1084694cb; -[SCPreviewFeatureSmartTemplateServices smartTemplate] */

undefined8 FUN_1084694c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1084694cc; end: 1084694d7; -[SCPreviewFeatureSmartTemplateServices .cxx_destruct] */

void FUN_1084694cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1084694d8; end: 108469d57;  */

void FUN_1084694d8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
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
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar2 = param_1;
  func_0x00010c0ee3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar4;
  func_0x00010bf4b900();
  if ((int)puVar5 == 0) {
    uStack_80 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar4;
    func_0x00010bf4b900();
    if ((int)puVar5 == 0) {
      iVar1 = 0;
    }
    else {
      uVar2 = param_2;
      func_0x00010bf1f440();
      iVar1 = (int)uVar2;
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100();
    _objc_retainAutoreleasedReturnValue();
    if (iVar1 != 0) {
      func_0x00010befa120(puVar5);
    }
    puVar6 = PTR_PTR_1126cc7d0;
    _objc_alloc();
    uVar2 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c259bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c24b1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c24b0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c2759e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22eae0();
    uVar18 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c22a7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010c24b0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar24;
    func_0x00010c24c6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04d720();
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uStack_80 = PTR_PTR_1126b5cc0;
    _objc_alloc();
    uVar2 = param_1;
    func_0x00010c15a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bfcd340();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010bf24f40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22dd20();
    func_0x00010c037e40();
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c12d360(puVar4);
    if (iVar1 == 0) goto LAB_108469978;
  }
  func_0x00010c12d360(puVar4);
LAB_108469978:
  puVar5 = puVar4;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    uStack_88 = (undefined *)0x0;
  }
  else {
    uStack_88 = PTR_PTR_1126cc7d0;
    _objc_alloc();
    uVar2 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c259bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c24b1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c24b0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c2759e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22eae0();
    uVar18 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c22a7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04d720();
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  puVar5 = PTR_PTR_1126b5cc0;
  _objc_alloc();
  func_0x00010c105440();
  uVar2 = param_1;
  func_0x00010c0d4ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4bc0();
  uVar3 = param_1;
  func_0x00010beffdc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c0d9740(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c15a0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010bfcd340();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bf24f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22dd20();
  func_0x00010c105460();
  uVar11 = param_1;
  func_0x00010bf252c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037e40(puVar5);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126d9700;
  _objc_alloc(PTR_PTR_1126d9700);
  func_0x00010c04b280();
  _objc_release(puVar5);
  _objc_release(uStack_88);
  _objc_release(uStack_80);
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108469d58; end: 108469e27;  */

void FUN_108469d58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  func_0x00010c2584a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_1084694d8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126c33d0;
  _objc_alloc(PTR_PTR_1126c33d0);
  uVar3 = uVar1;
  func_0x00010c24af80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d5e0(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108469e28; end: 108469fc7;  */

void FUN_108469e28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010c2584a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1084694d8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c33d0;
  _objc_alloc(PTR_PTR_1126c33d0);
  uVar1 = param_1;
  func_0x00010c122f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfcf800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0bc3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c0fb120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c13bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf24f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010befd440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c03d5e0(puVar3);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108469fc8; end: 10846a0c7;  */

uint FUN_108469fc8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  
  _objc_retain();
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    if (param_4 != 0 || param_3 != 0) {
      uVar5 = 1;
      goto LAB_10846a09c;
    }
    uVar1 = param_1;
    func_0x00010846b900(param_1,param_2);
    if (((int)uVar1 == 0) || (uVar4 = param_5, func_0x00010bf1f440(), (uVar4 & 1) == 0)) {
      uVar1 = param_1;
      func_0x00010846b7fc(param_1,param_2);
      uVar5 = (uint)uVar1 ^ 1;
      goto LAB_10846a09c;
    }
  }
  uVar5 = 0;
LAB_10846a09c:
  _objc_release(param_5);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 10846a0c8; end: 10846a173; -[SCMultisnapAnnihilationCrossPostingConfig initWithSpotlightConfig:restOfConfig:] */

undefined1 *
FUN_10846a0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc9d0;
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



/* Entry: 10846a174; end: 10846a197; -[SCMultisnapAnnihilationCrossPostingConfig copyWithZone:] */

undefined8 FUN_10846a174(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10846a198; end: 10846a20b; -[SCMultisnapAnnihilationCrossPostingConfig hash] */

undefined8 * FUN_10846a198(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10846a28c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10846a298;
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
          goto LAB_10846a298;
        }
        goto LAB_10846a28c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10846a298:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10846a20c; end: 10846a2b3; -[SCMultisnapAnnihilationCrossPostingConfig isEqual:] */

long FUN_10846a20c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10846a28c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10846a298;
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
          goto LAB_10846a298;
        }
        goto LAB_10846a28c;
      }
    }
    lVar3 = 0;
  }
LAB_10846a298:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10846a2b4; end: 10846a2bb; -[SCMultisnapAnnihilationCrossPostingConfig spotlightConfig] */

undefined8 FUN_10846a2b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10846a2bc; end: 10846a2c3; -[SCMultisnapAnnihilationCrossPostingConfig restOfConfig] */

undefined8 FUN_10846a2bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10846a2c4; end: 10846a39f; -[SCMultisnapAnnihilationCrossPostingConfig .cxx_destruct] */

void FUN_10846a2c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10846a3a0; end: 10846a417;  */

void FUN_10846a3a0(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  _objc_retain();
  func_0x00010846a2f4();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010c0720c0(param_1,param_2,ppuVar1);
  _objc_release(ppuVar1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e43098;
  if ((int)ppuVar2 == 0) {
    ppuVar1 = param_1;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10846a418; end: 10846a47b;  */

void FUN_10846a418(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e43098);
  if ((int)uVar1 == 0) {
    _objc_retain(param_1);
    uVar1 = param_1;
  }
  else {
    func_0x00010846a2f4();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10846a47c; end: 10846a54b;  */

void FUN_10846a47c(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d9708;
  _objc_opt_new(PTR_PTR_1126d9708);
  if (param_1 < 4) {
    func_0x00010c1e34a0(puVar1);
  }
  if (param_2 != 0) {
    puVar2 = PTR_PTR_1126d9710;
    _objc_opt_new(PTR_PTR_1126d9710);
    func_0x00010c189120(puVar1);
    _objc_release(puVar2);
    FUN_10846a54c(param_2);
    puVar2 = puVar1;
    func_0x00010bf62e40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21a900();
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126cf408;
  _objc_opt_new(PTR_PTR_1126cf408);
  func_0x00010c1cad00();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10846a54c; end: 10846a56f;  */

undefined4 FUN_10846a54c(long param_1)

{
  if (param_1 - 2U < 7) {
    return *(undefined4 *)(&UNK_10df2fcbc + (param_1 - 2U) * 4);
  }
  return 0;
}



/* Entry: 10846a570; end: 10846a70b;  */

void FUN_10846a570(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d9718;
  _objc_retain();
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x000100576e9c(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1a4760(puVar1);
  _objc_release(uVar2);
  if (param_2 != 0) {
    puVar3 = PTR_PTR_1126d9710;
    _objc_opt_new(PTR_PTR_1126d9710);
    func_0x00010c189120(puVar1);
    _objc_release(puVar3);
    FUN_10846a54c(param_2);
    puVar3 = puVar1;
    func_0x00010bf62e40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21a900();
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126cf408;
  _objc_opt_new(PTR_PTR_1126cf408);
  func_0x00010c188a80();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10846a70c; end: 10846b037;  */

void FUN_10846a70c(ulong param_1,long param_2,uint param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined1 auStack_270 [384];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126d9720;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126ae740;
  _objc_opt_new(PTR_PTR_1126ae740);
  func_0x00010c18c4a0(puVar2);
  _objc_release(puVar3);
  uVar4 = param_1;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08fa60();
  _objc_release(uVar4);
  if (uVar5 != 0) {
    uVar4 = param_1;
    func_0x00010bf24ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100576e9c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174420(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  uVar5 = param_1;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (uVar4 != 0) {
    uVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(uVar5);
      }
      func_0x00010c067fc0();
      puVar3 = puVar2;
      func_0x00010bf6eee0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc800();
      _objc_release(puVar3);
      uVar16 = uVar16 + 1;
    } while (uVar4 != uVar16);
    uVar4 = uVar5;
    func_0x00010bf52a60();
  }
  _objc_release(uVar5);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c1a7580(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar5 = param_1;
  func_0x00010c2759e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (uVar4 != 0) {
    uVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(uVar5);
      }
      uVar19 = *(undefined8 *)(uVar16 * 8);
      uVar6 = uVar19;
      func_0x00010bfdedc0(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar6;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(uVar17);
      _objc_release(uVar6);
      puVar7 = PTR_PTR_1126d9728;
      _objc_opt_new(PTR_PTR_1126d9728);
      uVar6 = uVar19;
      func_0x00010bfdedc0(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(puVar7);
      _objc_release(uVar6);
      func_0x00010c261f60(uVar19);
      func_0x00010c1b4420(puVar7);
      func_0x00010c247520();
      func_0x00010c206c40(puVar7);
      puVar18 = puVar2;
      func_0x00010bfdede0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar18);
      _objc_release(puVar7);
      uVar16 = uVar16 + 1;
    } while (uVar4 != uVar16);
    uVar4 = uVar5;
    func_0x00010bf52a60();
  }
  _objc_release(uVar5);
  _objc_retain(param_2);
  puVar13 = auStack_270;
  lVar8 = param_2;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(param_2);
      }
      uVar17 = *(undefined8 *)(lVar14 * 8);
      uVar6 = uVar17;
      func_0x00010bfdd7c0();
      if ((int)uVar6 != 0) {
        func_0x00010c275640(uVar17);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar17;
        func_0x00010c255120();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar6;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010bf4b900();
        _objc_release(uVar19);
        if (((ulong)puVar7 & 1) == 0) {
          func_0x00010befa120(puVar3);
          puVar7 = PTR_PTR_1126d9728;
          _objc_opt_new(PTR_PTR_1126d9728);
          func_0x00010c216240();
          func_0x00010c206c40(puVar7);
          puVar18 = puVar2;
          func_0x00010bfdede0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar18);
          _objc_release(puVar7);
        }
        _objc_release(uVar6);
        _objc_release(uVar17);
      }
      lVar14 = lVar14 + 1;
    } while (lVar8 != lVar14);
    puVar13 = auStack_270;
    lVar8 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  uVar4 = param_1;
  func_0x00010c24b0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08fa60();
  _objc_release(uVar4);
  if (uVar5 != 0) {
    puVar7 = PTR_PTR_1126b76a8;
    _objc_opt_new(PTR_PTR_1126b76a8);
    uVar4 = param_1;
    func_0x00010c24b0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar7);
    _objc_release(uVar4);
    func_0x00010c203e40(puVar2);
    _objc_release(puVar7);
  }
  uVar4 = param_1;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    puVar7 = PTR_PTR_1126d9730;
    _objc_opt_new(PTR_PTR_1126d9730);
    uVar4 = param_1;
    func_0x00010c0fd640(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0fd120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010c1dc420(puVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = param_1;
    func_0x00010c0fd640(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0fd140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010c1dc440(puVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = param_1;
    func_0x00010c0fd640(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c159d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc8a0(puVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = param_1;
    func_0x00010c0fd640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fd5e0();
    func_0x00010c1dc8c0(puVar7);
    _objc_release(uVar4);
    func_0x00010c1dc900(puVar2);
    _objc_release(puVar7);
  }
  uVar4 = param_1;
  func_0x00010c0ed760();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08fa60();
  _objc_release(uVar4);
  if (uVar5 != 0) {
    uVar4 = param_1;
    func_0x00010c0ed760(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_10846d990();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6720(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  func_0x00010c22eae0(param_1);
  func_0x00010c185160(puVar2);
  if ((param_3 & 1) == 0) {
    uVar4 = param_1;
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    bVar1 = uVar5 != 0;
    _objc_release(uVar4);
  }
  else {
    bVar1 = true;
  }
  uVar4 = param_1;
  func_0x00010c22a7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  puVar7 = PTR_PTR_1126ae740;
  _objc_opt_new();
  if (bVar1) {
    uVar9 = uVar4;
    func_0x00010c24ace0();
    uVar10 = uVar4;
    func_0x00010c241e00();
    _objc_retain(uVar5);
    puVar13 = auStack_f0;
    uVar16 = uVar5;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (uVar16 != 0) {
      uVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(uVar5);
        }
        lVar11 = *(long *)(uVar15 * 8);
        func_0x00010c067fc0();
        if ((lVar11 == 2 && (uVar9 & 1) == 0) || (lVar11 == 1 && (uVar10 & 1) == 0)) {
          func_0x00010befc800(puVar7);
        }
        uVar15 = uVar15 + 1;
      } while (uVar16 != uVar15);
      puVar13 = auStack_f0;
      uVar16 = uVar5;
      func_0x00010bf52a60();
    }
    _objc_release(uVar5);
    puVar18 = puVar7;
    func_0x00010bf529e0();
    if (puVar18 == (undefined *)0x0) {
      func_0x00010befc800(puVar7);
    }
    _objc_retain(puVar7);
    puVar18 = puVar7;
  }
  else {
    puVar18 = (undefined *)0x0;
  }
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010c2016e0(puVar2);
  _objc_release(puVar18);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar7 = PTR_PTR_1126cf408;
  _objc_opt_new();
  puVar18 = puVar2;
  func_0x00010c1d6c00();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar13);
    puVar2 = PTR_PTR_1126d9738;
    _objc_retain(puVar18);
    _objc_retain(lVar12);
    _objc_retain(param_1);
    _objc_opt_new(puVar2);
    uVar4 = param_1;
    func_0x000100576e9c(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c174420(puVar2);
    _objc_release(uVar4);
    func_0x00010c1fd740(puVar2);
    _objc_release(lVar12);
    puVar3 = puVar18;
    func_0x00010c067ec0();
    _objc_release(puVar18);
    if ((int)puVar3 != 0) {
      puVar7 = PTR_PTR_1126d9710;
      _objc_opt_new(PTR_PTR_1126d9710);
      func_0x00010c189120(puVar2);
      _objc_release(puVar7);
      FUN_10846a54c((long)(int)puVar3);
      puVar3 = puVar2;
      func_0x00010bf62e40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21a900();
      _objc_release(puVar3);
    }
    if (puVar13 != (undefined1 *)0x0) {
      func_0x00010c067ec0(puVar13);
      func_0x00010c20de40(puVar2);
    }
    puVar7 = PTR_PTR_1126cf408;
    _objc_opt_new(PTR_PTR_1126cf408);
    func_0x00010c2051a0();
    _objc_release(puVar2);
    _objc_release(puVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10846b038; end: 10846b19b;  */

void FUN_10846b038(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d9738;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x000100576e9c(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c174420(puVar1);
  _objc_release(uVar2);
  func_0x00010c1fd740(puVar1);
  _objc_release(param_2);
  uVar2 = param_3;
  func_0x00010c067ec0();
  _objc_release(param_3);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126d9710;
    _objc_opt_new(PTR_PTR_1126d9710);
    func_0x00010c189120(puVar1);
    _objc_release(puVar3);
    FUN_10846a54c((long)(int)uVar2);
    puVar3 = puVar1;
    func_0x00010bf62e40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21a900();
    _objc_release(puVar3);
  }
  if (param_4 != 0) {
    func_0x00010c067ec0(param_4);
    func_0x00010c20de40(puVar1);
  }
  puVar3 = PTR_PTR_1126cf408;
  _objc_opt_new(PTR_PTR_1126cf408);
  func_0x00010c2051a0();
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10846b19c; end: 10846b2e7;  */

undefined8 FUN_10846b19c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 < 0x15e) {
    uVar6 = 0xd;
    if (param_1 != 0x140) {
      uVar6 = 0;
    }
    uVar5 = 3;
    if (param_1 != 300) {
      uVar5 = uVar6;
    }
    uVar6 = 0xc;
    if (param_1 != 0xfa) {
      uVar6 = 0;
    }
    uVar2 = 0xb;
    if (param_1 != 0xdc) {
      uVar2 = uVar6;
    }
    if (param_1 < 300) {
      uVar5 = uVar2;
    }
    uVar6 = 10;
    if (param_1 != 0xd2) {
      uVar6 = 0;
    }
    uVar2 = 2;
    if (param_1 != 200) {
      uVar2 = uVar6;
    }
    uVar6 = 1;
    if (param_1 != 100) {
      uVar6 = uVar2;
    }
    bVar3 = SBORROW8(param_1,0xdb);
    lVar1 = param_1 + -0xdb;
    bVar4 = param_1 == 0xdb;
  }
  else {
    uVar6 = 8;
    if (param_1 != 5000) {
      uVar6 = 0;
    }
    uVar5 = 7;
    if (param_1 != 700) {
      uVar5 = uVar6;
    }
    uVar6 = 6;
    if (param_1 != 600) {
      uVar6 = 0;
    }
    uVar2 = 5;
    if (param_1 != 500) {
      uVar2 = uVar6;
    }
    if (param_1 < 700) {
      uVar5 = uVar2;
    }
    uVar6 = 9;
    if (param_1 != 0x1c2) {
      uVar6 = 0;
    }
    uVar2 = 4;
    if (param_1 != 400) {
      uVar2 = uVar6;
    }
    uVar6 = 0xe;
    if (param_1 != 0x15e) {
      uVar6 = uVar2;
    }
    bVar3 = SBORROW8(param_1,499);
    lVar1 = param_1 + -499;
    bVar4 = param_1 == 499;
  }
  if (bVar4 || lVar1 < 0 != bVar3) {
    uVar5 = uVar6;
  }
  return uVar5;
}



/* Entry: 10846b2e8; end: 10846b3d3;  */

void FUN_10846b2e8(void)

{
  func_0x000108533750();
  return;
}



/* Entry: 10846b3d4; end: 10846b483;  */

void FUN_10846b3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_3);
  func_0x00010c24f500(param_2);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 10846b484; end: 10846b57f;  */

void FUN_10846b484(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  double dStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 != 0) && (lVar1 = param_2, func_0x00010c276f80(), 0 < lVar1)) {
    lVar1 = param_2;
    func_0x00010bf43fa0();
    lVar2 = param_2;
    func_0x00010c276f80();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10846b580;
    puStack_60 = &UNK_110844b80;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = uVar4;
    dStack_48 = (double)lVar1 / (double)lVar2;
    _objc_retain(uVar3);
    uStack_50 = uVar3;
    func_0x000107c312d0("APPSTORE",&puStack_78);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10846b580; end: 10846b58f;  */

void FUN_10846b580(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c288ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s_updatePostingProgress_forStory__11267fcd8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10846b590; end: 10846b69b;  */

ulong FUN_10846b590(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c105440();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      uVar2 = param_1;
      func_0x00010beffdc0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      if (uVar3 == 0) {
        uVar3 = param_1;
        func_0x00010c105460(param_1);
      }
      else {
        uVar3 = 1;
      }
      _objc_release(uVar2);
    }
    else {
      uVar3 = 1;
    }
    _objc_release(uVar1);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10846b69c; end: 10846b6bb;  */

bool FUN_10846b69c(undefined8 param_1,long param_2)

{
  func_0x00010c27dd80(param_2);
  return param_2 == 1;
}



/* Entry: 10846b6bc; end: 10846b74f;  */

long FUN_10846b6bc(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010beffdc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar4 = param_1;
  func_0x00010846b638(param_1);
  uVar5 = param_1;
  func_0x00010c105440(param_1);
  lVar1 = (uVar3 - uVar4) + (uVar5 & 0xffffffff);
  uVar3 = param_1;
  func_0x00010c0ee3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (uVar3 != 0) {
    lVar1 = lVar1 + 1;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  return lVar1;
}



/* Entry: 10846b750; end: 10846b7fb;  */

long FUN_10846b750(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c105440(param_1);
  uVar2 = param_1;
  func_0x00010c0ee3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  uVar5 = param_1;
  func_0x00010beffdc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar6 = uVar5;
  func_0x00010bf529e0(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return uVar4 + (uVar1 & 0xffffffff) + uVar6;
}



/* Entry: 10846b7fc; end: 10846ba3b;  */

bool FUN_10846b7fc(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain();
  lVar2 = param_1;
  FUN_10846b750();
  if (lVar2 + param_2 == 1) {
    lVar2 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0ee300();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    if (lVar4 == 1) {
      lVar4 = param_1;
      func_0x00010c0ee3a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0ee300();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c067fc0();
      bVar1 = lVar7 == 2;
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    else {
      bVar1 = false;
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10846ba3c; end: 10846bbcf;  */

void FUN_10846ba3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0ee300();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf4b900();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 != 0) {
      func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfa78);
    }
    lVar2 = param_1;
    func_0x00010c105460();
    if ((int)lVar2 != 0) {
      func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfa90);
    }
    lVar2 = param_1;
    func_0x00010c105440();
    if ((int)lVar2 != 0) {
      func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfaa8);
    }
    lVar2 = param_1;
    func_0x00010beffdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfa60);
    }
    lVar2 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0ee300();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf4b900();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 != 0) {
      func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfa48);
    }
    puVar5 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10846bbd0; end: 10846bd93;  */

void FUN_10846bbd0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_3;
  func_0x00010c0ee3a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0ee3a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ee300();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf4b900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar5 = param_4;
  func_0x00010bf529e0(param_4);
  _objc_release(param_4);
  uVar1 = param_3;
  func_0x00010c105440();
  uVar2 = param_3;
  func_0x00010beffdc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf529e0();
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126c4910;
  _objc_alloc(PTR_PTR_1126c4910);
  lVar7 = param_2;
  func_0x00010bf529e0(param_2);
  _objc_release(param_2);
  func_0x00010b68e9f8(puVar6,param_1,lVar7 != 0,0,uVar3,(uint)(lVar5 != 0) | (uint)uVar4 & 1,uVar4,
                      lVar5 != 0,(char)uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10846bd94; end: 10846be9f;  */

undefined8 FUN_10846bd94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  func_0x00010bf529e0();
  if (param_3 == 0) {
    lVar1 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar4 = 0;
    if (lVar1 == 0) goto LAB_10846bdd0;
    lVar1 = param_1;
    func_0x00010c0ee3a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0ee300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c0ee3a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0ee300();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf4b900();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar3 != 0) {
        uVar4 = param_2;
        func_0x000108f4afc0(param_2);
        goto LAB_10846bdd0;
      }
    }
  }
  uVar4 = 0;
LAB_10846bdd0:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 10846bea0; end: 10846bea7;  */

undefined8 FUN_10846bea0(void)

{
  return 0;
}



/* Entry: 10846bea8; end: 10846c39f;  */

void FUN_10846bea8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126d7250;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126d7248;
  _objc_alloc_init();
  func_0x00010c1954a0(puVar2);
  func_0x00010c172fe0(puVar3);
  lVar4 = param_1;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    _objc_retain(puVar2);
    _objc_retain(param_1);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(param_1);
    func_0x00010bf0a0e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18bbe0(puVar2);
    _objc_release(puVar5);
    _objc_retain(param_1);
    lVar4 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar11 = *(undefined8 *)(lVar10 * 8);
        puVar5 = PTR_PTR_1126c0dd8;
        _objc_opt_new();
        puVar6 = PTR_PTR_1126b1080;
        _objc_opt_new(PTR_PTR_1126b1080);
        func_0x00010c1805c0(puVar5);
        _objc_release(puVar6);
        puVar6 = puVar5;
        func_0x00010bf454e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1843a0();
        _objc_release(puVar6);
        func_0x00010bfe5ec0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf454e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a99c0();
        _objc_release(puVar6);
        _objc_release(uVar11);
        puVar6 = puVar5;
        func_0x00010bf454e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220e20();
        _objc_release(puVar6);
        lVar7 = param_1;
        func_0x00010c0e00e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c08b1c0();
        lVar8 = lVar8 + 1;
        func_0x000108f1399c(lVar8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18bae0(puVar5);
        _objc_release(lVar8);
        puVar6 = puVar2;
        func_0x00010bf6d640(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar6);
        _objc_release(lVar7);
        _objc_release(puVar5);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    _objc_release(param_1);
    _objc_release(puVar2);
    func_0x00010c172fe0(puVar3);
  }
  lVar4 = param_2;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    _objc_retain(puVar2);
    _objc_retain(param_2);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18bbe0(puVar2);
    _objc_release(puVar5);
    _objc_retain(param_2);
    lVar4 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar11 = *(undefined8 *)(lVar10 * 8);
        puVar5 = PTR_PTR_1126c0dd8;
        _objc_opt_new();
        func_0x000108f52050(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1805c0(puVar5);
        _objc_release(uVar11);
        puVar6 = PTR_PTR_1126d67d8;
        _objc_opt_new(PTR_PTR_1126d67d8);
        func_0x00010c18bae0(puVar5);
        _objc_release(puVar6);
        lVar8 = param_2;
        func_0x00010c0e00e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf6d2c0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1829a0();
        _objc_release(puVar6);
        _objc_release(lVar8);
        puVar6 = puVar2;
        func_0x00010bf6d640(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar6);
        _objc_release(puVar5);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    _objc_release(param_2);
    _objc_release(puVar2);
    func_0x00010c172fe0(puVar3);
  }
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126d6738;
    _objc_retain();
    _objc_opt_new(puVar2);
    func_0x00010c21e620();
    _objc_release(param_1);
    puVar3 = PTR_PTR_1126d6730;
    _objc_opt_new(PTR_PTR_1126d6730);
    puVar5 = PTR_PTR_1126d6720;
    _objc_opt_new(PTR_PTR_1126d6720);
    func_0x00010c1e5b60();
    func_0x00010c1e5c00(puVar3);
    _objc_release(puVar5);
    func_0x00010c196620(puVar2);
    _objc_release(puVar3);
    func_0x00010c216900(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10846c3a0; end: 10846c54f;  */

void FUN_10846c3a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d6738;
  _objc_retain();
  _objc_opt_new(puVar1);
  func_0x00010c21e620();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126d6730;
  _objc_opt_new(PTR_PTR_1126d6730);
  puVar3 = PTR_PTR_1126d6720;
  _objc_opt_new(PTR_PTR_1126d6720);
  func_0x00010c1e5b60();
  func_0x00010c1e5c00(puVar2);
  _objc_release(puVar3);
  func_0x00010c196620(puVar1);
  _objc_release(puVar2);
  func_0x00010c216900(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10846c550; end: 10846c5a3;  */

void FUN_10846c550(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372b990 != -1) {
    func_0x000107c27d9c(0x11372b990,&PTR___NSConcreteGlobalBlock_110a4a0d0);
  }
  uVar1 = uRam000000011372b998;
  _objc_retain(uRam000000011372b998);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10846c5a4; end: 10846c7b7;  */

/* WARNING: Possible PIC construction at 0x00010846ce10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010846ce14) */

void FUN_10846c5a4(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined1 **ppuVar19;
  undefined8 uVar20;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  ppuVar3 = ppuVar2;
  func_0x00010c0720c0();
  if (((((ulong)ppuVar3 & 1) == 0) &&
      (ppuVar3 = ppuVar2, func_0x00010c0720c0(), ((ulong)ppuVar3 & 1) == 0)) &&
     (ppuVar3 = ppuVar2, func_0x00010c0720c0(), (int)ppuVar3 == 0)) {
    ppuVar3 = ppuVar2;
    func_0x00010c0720c0();
    if (((ulong)ppuVar3 & 1) == 0) {
      ppuVar7 = ppuVar2;
      func_0x00010c0720c0();
      ppuVar3 = &PTR____CFConstantStringClassReference_110edd158;
      if (((ulong)ppuVar7 & 1) == 0) {
        ppuVar7 = ppuVar2;
        func_0x00010c0720c0();
        if ((int)ppuVar7 == 0) {
          ppuVar3 = &PTR____CFConstantStringClassReference_110edd178;
        }
      }
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110edd158;
    }
  }
  else {
    _objc_retain(ppuVar2);
    ppuVar3 = ppuVar2;
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  puVar4 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  func_0x00010c11d4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = (undefined *)0x1;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c1e6460(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = puRam000000011372b998;
  puRam000000011372b998 = puVar6;
  _objc_release(uVar20);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126c1048;
  uStack_58 = 0x10846c7b8;
  ppuVar19 = &puStack_60;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(param_5);
  _objc_retain(puVar17);
  _objc_retain(puVar8);
  _objc_retain(ppuVar1);
  _objc_opt_new();
  func_0x00010c21e620();
  _objc_release(ppuVar1);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c17d2c0(puVar6);
  _objc_release(puVar4);
  func_0x00010c216900(puVar6);
  func_0x00010c206c40(puVar6);
  func_0x00010c20d3a0(puVar6);
  _objc_release(puVar8);
  puVar8 = param_5;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar5 = PTR_PTR_1126b4960;
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110e15d98;
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_100 = puVar8;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110dad998;
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c0 = puVar17;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b19f8;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d0 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = 1;
  uStack_f0 = 3;
  uStack_e8 = 1;
  puStack_100 = (undefined *)0x3;
  ppuStack_f8 = (undefined **)0x1;
  puVar16 = puVar4;
  puVar18 = PTR____NSDictionary0__struct_11034ab58;
  func_0x00010bf58780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar15 = puVar6;
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
    uVar20 = 0x10846ca8c;
    ___stack_chk_fail();
    ppuVar1 = &puStack_100;
    puVar14 = puVar5;
    while( true ) {
      *(undefined **)((long)ppuVar1 + -0x60) = puVar13;
      *(undefined **)((long)ppuVar1 + -0x58) = puVar12;
      *(undefined **)((long)ppuVar1 + -0x50) = puVar11;
      *(undefined **)((long)ppuVar1 + -0x48) = puVar14;
      *(undefined **)((long)ppuVar1 + -0x40) = puVar10;
      *(undefined **)((long)ppuVar1 + -0x38) = puVar4;
      *(undefined **)((long)ppuVar1 + -0x30) = puVar9;
      *(undefined **)((long)ppuVar1 + -0x28) = puVar8;
      *(undefined **)((long)ppuVar1 + -0x20) = puVar17;
      *(undefined **)((long)ppuVar1 + -0x18) = puVar6;
      *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar19;
      *(undefined8 *)((long)ppuVar1 + -8) = uVar20;
      *(undefined8 *)((long)ppuVar1 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar17 = param_2;
      _objc_retain(puVar16);
      puVar4 = PTR_PTR_1126c0fa0;
      _objc_retain(param_2);
      _objc_retain(puVar15);
      _objc_opt_new();
      puVar5 = puVar15;
      func_0x00010c2923e0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      func_0x00010c21e620(puVar4);
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c17d2c0(puVar4);
      _objc_release(puVar5);
      func_0x00010c216900(puVar4);
      func_0x00010c206c40(puVar4);
      func_0x00010c20d3a0(puVar4);
      _objc_release(param_2);
      if ((int)puVar18 != 0) {
        func_0x00010c1a8480(puVar4);
      }
      puVar5 = PTR_PTR_1126b4960;
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      *(undefined ***)((long)ppuVar1 + -0xc0) = &PTR____CFConstantStringClassReference_110def498;
      *(undefined ***)((long)ppuVar1 + -0xb8) = &PTR____CFConstantStringClassReference_110e15df8;
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)ppuVar1 + -0x78) = &PTR____CFConstantStringClassReference_110edd0d8;
      puVar9 = puVar6;
      func_0x000108f54ee4();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)ppuVar1 + -0x70) = puVar9;
      puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar4;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)ppuVar1 + -0x88) = &PTR____CFConstantStringClassReference_110dad998;
      *(undefined **)((long)ppuVar1 + -0x80) = puVar16;
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)ppuVar1 + -0x98) = puVar16;
      puVar13 = PTR_PTR_1126b19f8;
      func_0x00010c11f9e0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)ppuVar1 + -0x90) = puVar13;
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      *(undefined1 *)((long)ppuVar1 + -0xa0) = 1;
      *(undefined8 *)((long)ppuVar1 + -0xb0) = 3;
      *(undefined8 *)((long)ppuVar1 + -0xa8) = 1;
      *(undefined8 *)((long)ppuVar1 + -0xc0) = 3;
      *(undefined8 *)((long)ppuVar1 + -0xb8) = 1;
      puVar16 = puVar6;
      func_0x00010bf58780();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar14);
      _objc_release(puVar9);
      _objc_release(puVar6);
      _objc_release(puVar8);
      _objc_release(puVar4);
      puVar15 = *(undefined **)((long)ppuVar1 + -0x98);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar1 + -0x68)) break;
      ___stack_chk_fail();
      *(undefined **)((long)ppuVar1 + -0x100) = puVar5;
      *(undefined **)((long)ppuVar1 + -0xf8) = puVar9;
      *(undefined **)((long)ppuVar1 + -0xf0) = puVar6;
      *(undefined **)((long)ppuVar1 + -0xe8) = puVar8;
      *(undefined **)((long)ppuVar1 + -0xe0) = puVar4;
      *(undefined **)((long)ppuVar1 + -0xd8) = puVar10;
      *(undefined1 **)((long)ppuVar1 + -0xd0) = (undefined1 *)((long)ppuVar1 + -0x10);
      *(code **)((long)ppuVar1 + -200) = FUN_10846cd9c;
      ppuVar19 = (undefined1 **)((long)ppuVar1 + -0xd0);
      _objc_retain(puVar16);
      _objc_retain(puVar17);
      _objc_retain(puVar15);
      puVar4 = puVar17;
      func_0x00010c25b720();
      puVar18 = (undefined *)(ulong)(puVar4 == (undefined *)0xd);
      param_2 = puVar17;
      FUN_108471760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      uVar20 = 0x10846ce14;
      ppuVar1 = (undefined **)((long)ppuVar1 + -0x100);
      puVar6 = puVar16;
      puVar8 = puVar15;
      puVar9 = puVar18;
      puVar4 = param_2;
      puVar10 = puVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10846c7b8; end: 10846cd9b;  */

/* WARNING: Possible PIC construction at 0x00010846ce10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010846ce14) */

void FUN_10846c7b8(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar2 = PTR_PTR_1126c1048;
  puVar15 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_opt_new();
  func_0x00010c21e620();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c17d2c0(puVar2);
  _objc_release(puVar3);
  func_0x00010c216900(puVar2);
  func_0x00010c206c40(puVar2);
  func_0x00010c20d3a0(puVar2);
  _objc_release(param_3);
  puVar4 = param_5;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar10 = PTR_PTR_1126b4960;
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e15d98;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_b0 = puVar4;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dad998;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = param_4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b19f8;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = 1;
  uStack_a0 = 3;
  uStack_98 = 1;
  puStack_b0 = (undefined *)0x3;
  ppuStack_a8 = (undefined **)0x1;
  puVar13 = puVar3;
  puVar14 = PTR____NSDictionary0__struct_11034ab58;
  func_0x00010bf58780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar12 = puVar2;
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    uVar16 = 0x10846ca8c;
    ___stack_chk_fail();
    ppuVar1 = &puStack_b0;
    puVar11 = puVar10;
    while( true ) {
      *(undefined **)((long)ppuVar1 + -0x60) = puVar9;
      *(undefined **)((long)ppuVar1 + -0x58) = puVar8;
      *(undefined **)((long)ppuVar1 + -0x50) = puVar7;
      *(undefined **)((long)ppuVar1 + -0x48) = puVar11;
      *(undefined **)((long)ppuVar1 + -0x40) = puVar6;
      *(undefined **)((long)ppuVar1 + -0x38) = puVar3;
      *(undefined **)((long)ppuVar1 + -0x30) = puVar5;
      *(undefined **)((long)ppuVar1 + -0x28) = puVar4;
      *(undefined **)((long)ppuVar1 + -0x20) = param_4;
      *(undefined **)((long)ppuVar1 + -0x18) = puVar2;
      *(undefined1 **)((long)ppuVar1 + -0x10) = puVar15;
      *(undefined8 *)((long)ppuVar1 + -8) = uVar16;
      *(undefined8 *)((long)ppuVar1 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      param_4 = param_2;
      _objc_retain(puVar13);
      puVar3 = PTR_PTR_1126c0fa0;
      _objc_retain(param_2);
      _objc_retain(puVar12);
      _objc_opt_new();
      puVar10 = puVar12;
      func_0x00010c2923e0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      func_0x00010c21e620(puVar3);
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c17d2c0(puVar3);
      _objc_release(puVar10);
      func_0x00010c216900(puVar3);
      func_0x00010c206c40(puVar3);
      func_0x00010c20d3a0(puVar3);
      _objc_release(param_2);
      if ((int)puVar14 != 0) {
        func_0x00010c1a8480(puVar3);
      }
      puVar10 = PTR_PTR_1126b4960;
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      *(undefined ***)((long)ppuVar1 + -0xc0) = &PTR____CFConstantStringClassReference_110def498;
      *(undefined ***)((long)ppuVar1 + -0xb8) = &PTR____CFConstantStringClassReference_110e15df8;
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)ppuVar1 + -0x78) = &PTR____CFConstantStringClassReference_110edd0d8;
      puVar5 = puVar2;
      func_0x000108f54ee4();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)ppuVar1 + -0x70) = puVar5;
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)((long)ppuVar1 + -0x88) = &PTR____CFConstantStringClassReference_110dad998;
      *(undefined **)((long)ppuVar1 + -0x80) = puVar13;
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)ppuVar1 + -0x98) = puVar13;
      puVar9 = PTR_PTR_1126b19f8;
      func_0x00010c11f9e0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)ppuVar1 + -0x90) = puVar9;
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      *(undefined1 *)((long)ppuVar1 + -0xa0) = 1;
      *(undefined8 *)((long)ppuVar1 + -0xb0) = 3;
      *(undefined8 *)((long)ppuVar1 + -0xa8) = 1;
      *(undefined8 *)((long)ppuVar1 + -0xc0) = 3;
      *(undefined8 *)((long)ppuVar1 + -0xb8) = 1;
      puVar13 = puVar2;
      func_0x00010bf58780();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar11);
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar12 = *(undefined **)((long)ppuVar1 + -0x98);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar1 + -0x68)) break;
      ___stack_chk_fail();
      *(undefined **)((long)ppuVar1 + -0x100) = puVar10;
      *(undefined **)((long)ppuVar1 + -0xf8) = puVar5;
      *(undefined **)((long)ppuVar1 + -0xf0) = puVar2;
      *(undefined **)((long)ppuVar1 + -0xe8) = puVar4;
      *(undefined **)((long)ppuVar1 + -0xe0) = puVar3;
      *(undefined **)((long)ppuVar1 + -0xd8) = puVar6;
      *(undefined1 **)((long)ppuVar1 + -0xd0) = (undefined1 *)((long)ppuVar1 + -0x10);
      *(code **)((long)ppuVar1 + -200) = FUN_10846cd9c;
      puVar15 = (undefined1 *)((long)ppuVar1 + -0xd0);
      _objc_retain(puVar13);
      _objc_retain(param_4);
      _objc_retain(puVar12);
      puVar3 = param_4;
      func_0x00010c25b720();
      puVar14 = (undefined *)(ulong)(puVar3 == (undefined *)0xd);
      param_2 = param_4;
      FUN_108471760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      uVar16 = 0x10846ce14;
      ppuVar1 = (undefined **)((long)ppuVar1 + -0x100);
      puVar2 = puVar13;
      puVar4 = puVar12;
      puVar5 = puVar14;
      puVar3 = param_2;
      puVar6 = puVar10;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10846cd9c; end: 10846ce4f;  */

void FUN_10846cd9c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  lVar1 = param_2;
  func_0x00010c25b720(param_2);
  lVar2 = param_2;
  FUN_108471760(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = param_1;
  func_0x00010846ca8c(param_1,lVar2,param_3,lVar1 == 0xd);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10846ce50; end: 10846d98f;  */

void FUN_10846ce50(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined *puVar34;
  undefined **ppuVar35;
  long lVar36;
  undefined auStack_1e0 [128];
  long lStack_160;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar34 = PTR_PTR_1126c0fa0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_opt_new();
  uVar32 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c21e620(puVar34);
  _objc_release(uVar32);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c17d2c0(puVar34);
  _objc_release(puVar5);
  func_0x00010c216900(puVar34);
  func_0x00010c206c40(puVar34);
  puVar5 = PTR_PTR_1126c0fa8;
  _objc_opt_new();
  puVar6 = PTR_PTR_1126d9740;
  puStack_a8 = puVar5;
  _objc_opt_new();
  puStack_a0 = puVar6;
  func_0x00010c19b200();
  func_0x00010c17a180(puVar5);
  func_0x00010c20d3a0(puVar34);
  puVar31 = PTR_PTR_1126b4960;
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uStack_f0 = &PTR____CFConstantStringClassReference_110def498;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110e15df8;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar5;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110edd0d8;
  puVar5 = puVar6;
  func_0x000108f54ee4();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_b8 = puVar5;
  puStack_70 = puVar5;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar34;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dad998;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_80 = param_3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b19f8;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b19f8;
  puStack_98 = puVar11;
  func_0x00010c11f9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = 1;
  uStack_e0 = 3;
  uStack_d8 = 1;
  uStack_f0 = (undefined **)0x3;
  ppuStack_e8 = (undefined **)0x1;
  puVar20 = puVar6;
  puVar22 = puVar7;
  puVar24 = puVar8;
  puVar5 = puVar9;
  puVar26 = puVar10;
  puVar27 = puVar13;
  func_0x00010bf58780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_c0);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puStack_b8);
  _objc_release(puVar6);
  _objc_release(puStack_b0);
  _objc_release(puStack_a0);
  _objc_release(puStack_a8);
  puVar14 = puVar34;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppuVar16 = ppuStack_e8;
  uVar15 = (ulong)uStack_f0;
  uStack_f8 = 0x10846d1c0;
  bVar4 = uStack_f0._1_1_;
  bVar3 = (byte)uStack_f0;
  lStack_160 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = param_2;
  puVar23 = puVar22;
  puVar25 = puVar24;
  puStack_150 = puVar8;
  puStack_148 = puVar7;
  puStack_140 = puVar9;
  puStack_138 = puVar31;
  puStack_130 = puVar12;
  puStack_128 = puVar6;
  puStack_120 = puVar13;
  puStack_118 = puVar11;
  puStack_110 = puVar10;
  puStack_108 = puVar34;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar20);
  _objc_retain(puVar22);
  _objc_retain(puVar24);
  _objc_retain(puVar26);
  _objc_retain(puVar27);
  _objc_retain(ppuVar16);
  puVar31 = PTR_PTR_1126c0f90;
  _objc_opt_new();
  func_0x00010c1ebd20();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar31);
  _objc_release(puVar6);
  func_0x00010c1d64a0(puVar31);
  if (puVar24 == (undefined *)0x0) {
    puVar6 = puVar31;
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cb60(puVar31);
    _objc_release(puVar6);
  }
  else {
    func_0x00010c17cb60();
  }
  func_0x00010c17cd40(puVar31);
  func_0x00010c166000(puVar31);
  func_0x00010afb79f0();
  if (((byte)(bVar3 | bVar4 ^ 1) == 1) && ((int)param_2 != 0)) {
    func_0x00010c19b200(puVar31);
  }
  puVar6 = puVar20;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    puVar6 = PTR_PTR_1126b7828;
    _objc_opt_new();
    func_0x00010c19b220(puVar31);
    _objc_release(puVar6);
    _objc_retain(puVar20);
    puVar23 = auStack_1e0;
    puVar25 = (undefined *)0x10;
    puVar6 = puVar20;
    func_0x00010bf52a60();
    lVar29 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar34 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar29) {
          _objc_enumerationMutation(puVar20);
        }
        uVar32 = *(undefined8 *)((long)puVar34 * 8);
        puVar7 = puVar31;
        func_0x00010bfa43c0(puVar31);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0(uVar32);
        func_0x00010befc800(puVar7);
        _objc_release(puVar7);
        puVar34 = puVar34 + 1;
      } while (puVar6 != puVar34);
      puVar23 = auStack_1e0;
      puVar25 = (undefined *)0x10;
      puVar6 = puVar20;
      func_0x00010bf52a60();
    }
    _objc_release(puVar20);
  }
  func_0x00010c1b8a60(puVar31);
  func_0x00010c1ec040(puVar31);
  puVar6 = puVar14;
  func_0x00010c0720c0();
  if (((ulong)puVar6 & 1) == 0) {
    puVar6 = puVar14;
    func_0x00010c0720c0();
    if ((((ulong)puVar6 & 1) != 0) ||
       (puVar6 = puVar14, func_0x00010c0720c0(), ((ulong)puVar6 & 1) != 0)) {
      ppuVar21 = (undefined **)0x2;
      goto LAB_10846d488;
    }
    puVar6 = puVar14;
    func_0x00010c0720c0();
    if (((ulong)puVar6 & 1) != 0) {
      ppuVar21 = (undefined **)0x1;
      goto LAB_10846d488;
    }
    puVar6 = puVar14;
    func_0x00010c0720c0();
    uVar28 = 4;
    if ((int)puVar6 != 0) {
      uVar28 = 1;
    }
    ppuVar21 = (undefined **)(ulong)uVar28;
    if (((uVar15 & 1) != 0) || (((ulong)puVar6 & 1) != 0)) goto LAB_10846d488;
    ppuVar21 = &PTR____CFConstantStringClassReference_110e3cd18;
    puVar6 = puVar14;
    func_0x00010c0720c0();
    if ((int)puVar6 != 0) {
      ppuVar21 = (undefined **)0x7;
      goto LAB_10846d488;
    }
  }
  else {
    ppuVar21 = (undefined **)0x3;
LAB_10846d488:
    func_0x00010c21a2a0(puVar31);
  }
  _objc_release(ppuVar16);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar24);
  _objc_release(puVar22);
  _objc_release(puVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_160) {
    ___stack_chk_fail();
    lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(uVar19);
    _objc_retain(ppuVar21);
    _objc_retain(puVar23);
    _objc_retain(puVar25);
    _objc_retain(puVar5);
    puVar31 = PTR_PTR_1126d9748;
    _objc_opt_new();
    func_0x00010c1ebd20();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    func_0x00010c1ec1a0(puVar31);
    _objc_release(puVar6);
    func_0x00010c1d64a0(puVar31);
    func_0x00010c17cd40(puVar31);
    func_0x00010c166000(puVar31);
    uVar15 = uVar19;
    func_0x00010c0720c0();
    if (((((uVar15 & 1) != 0) || (uVar15 = uVar19, func_0x00010c0720c0(), (uVar15 & 1) != 0)) ||
        (uVar15 = uVar19, func_0x00010c0720c0(), (uVar15 & 1) != 0)) ||
       (uVar15 = uVar19, func_0x00010c0720c0(), (int)uVar15 != 0)) {
      func_0x00010c21a2a0(puVar31);
    }
    func_0x00010c1b8a60(puVar31);
    _objc_retain(ppuVar21);
    ppuVar16 = ppuVar21;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar16 != (undefined **)0x0) {
      ppuVar35 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar21);
        }
        lVar30 = *(long *)((long)ppuVar35 * 8);
        lVar17 = lVar30;
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar17;
        func_0x000108f52050();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar17);
        if (lVar18 != 0) {
          puVar6 = puVar31;
          func_0x00010c0ecf80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126d9750;
          _objc_opt_new(PTR_PTR_1126d9750);
          func_0x00010c1805c0();
          func_0x00010bf6e240(lVar30);
          func_0x00010c18bfe0(puVar6);
          func_0x00010c11ce20(lVar30);
          func_0x00010c1afa60(puVar6);
          func_0x00010bf6e260();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar30;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar17 != 0) {
            lVar36 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar30);
              }
              uVar33 = *(undefined8 *)(lVar36 * 8);
              puVar34 = PTR_PTR_1126d9758;
              _objc_opt_new(PTR_PTR_1126d9758);
              uVar32 = uVar33;
              func_0x00010c14f880(uVar33);
              func_0x00010b7dcf90(puVar34,uVar32);
              func_0x00010c2a4a60(uVar33);
              func_0x00010c225440(puVar34);
              puVar7 = puVar6;
              func_0x00010bf6e280(puVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120();
              _objc_release(puVar7);
              _objc_release(puVar34);
              lVar36 = lVar36 + 1;
            } while (lVar17 != lVar36);
            lVar17 = lVar30;
            func_0x00010bf52a60();
          }
          _objc_release(lVar30);
          puVar34 = puVar31;
          func_0x00010c259100(puVar31);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar34);
          _objc_release(puVar6);
        }
        _objc_release(lVar18);
        ppuVar35 = (undefined **)((long)ppuVar35 + 1);
      } while (ppuVar35 != ppuVar16);
      ppuVar16 = ppuVar21;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar21);
    _objc_release(puVar5);
    _objc_release(puVar25);
    _objc_release(puVar23);
    _objc_release(ppuVar21);
    _objc_release(uVar19);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar29) {
      ___stack_chk_fail();
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar14;
      func_0x00010bf529e0();
      if (puVar5 == (undefined *)0x3) {
        puVar31 = PTR_PTR_1126b1080;
        _objc_alloc_init(PTR_PTR_1126b1080);
        puVar5 = puVar14;
        func_0x00010c0dfd40(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        func_0x00010c1843a0(puVar31);
        _objc_release(puVar5);
        puVar5 = puVar14;
        func_0x00010c0dfd40(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a99c0(puVar31);
        _objc_release(puVar5);
        puVar5 = puVar14;
        func_0x00010c0dfd40(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        func_0x00010c220e20(puVar31);
        _objc_release(puVar5);
      }
      else {
        puVar31 = (undefined *)0x0;
      }
      _objc_release(puVar14);
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar31);
  return;
}


