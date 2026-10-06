/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cb9010; end: 108cb904f; -[SCPreviewConfiguration isSnapFromCameraRollItem] */

bool FUN_108cb9010(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c242400();
  if (lVar2 == 0xb) {
    bVar1 = true;
  }
  else {
    func_0x00010c242400(param_1);
    bVar1 = param_1 == 0x10;
  }
  return bVar1;
}



/* Entry: 108cb9050; end: 108cb906b; -[SCPreviewConfiguration isDreamsSnap] */

bool FUN_108cb9050(long param_1)

{
  func_0x00010c243400();
  return param_1 == 0x26;
}



/* Entry: 108cb906c; end: 108cb9087; -[SCPreviewConfiguration isTextModeSnap] */

bool FUN_108cb906c(long param_1)

{
  func_0x00010c243400();
  return param_1 == 0x28;
}



/* Entry: 108cb9088; end: 108cb90a3; -[SCPreviewConfiguration isMyAIQuickCapture] */

bool FUN_108cb9088(long param_1)

{
  func_0x00010c243400();
  return param_1 == 0x2d;
}



/* Entry: 108cb90a4; end: 108cb90e3; -[SCPreviewConfiguration isMapScreenshot] */

bool FUN_108cb90a4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c243400();
  if (lVar2 == 0x1c) {
    func_0x00010c242400(param_1);
    bVar1 = param_1 == 0x23;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108cb90e4; end: 108cb9163; -[SCPreviewConfiguration isSnapMediaBasedOnScreenContents] */

bool FUN_108cb90e4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0xbb) & 1) != 0) {
    return false;
  }
  lVar2 = param_1;
  func_0x00010c243400();
  if ((((lVar2 == 0xf) || (lVar2 = param_1, func_0x00010c243400(), lVar2 == 0x16)) ||
      (lVar2 = param_1, func_0x00010c243400(), lVar2 == 0x17)) ||
     (lVar2 = param_1, func_0x00010c243400(), lVar2 == 0x18)) {
    bVar1 = true;
  }
  else {
    func_0x00010c243400(param_1);
    bVar1 = param_1 == 0x19;
  }
  return bVar1;
}



/* Entry: 108cb9164; end: 108cb91a3; -[SCPreviewConfiguration isOpenedFromMemoriesTabInMediaDrawer] */

bool FUN_108cb9164(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c243400();
  if (lVar2 == 7) {
    func_0x00010c242400(param_1);
    bVar1 = param_1 == 3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108cb91a4; end: 108cb91e3; -[SCPreviewConfiguration isOpenedFromCameraRollTabInMediaDrawer] */

bool FUN_108cb91a4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c243400();
  if (lVar2 == 6) {
    func_0x00010c242400(param_1);
    bVar1 = param_1 == 3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108cb91e4; end: 108cb921f; -[SCPreviewConfiguration isSnapFromSpectacles] */

undefined8 FUN_108cb91e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07f160();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108cb9220; end: 108cb928f; -[SCPreviewConfiguration isQuickSend] */

ulong FUN_108cb9220(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x298);
  func_0x00010bfb88e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  uVar3 = param_1;
  func_0x00010bfdb1e0();
  if (((uVar3 & 1) == 0) && (lVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c078590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isMyAIQuickCapture_1125fbb70);
    return param_1;
  }
  return 1;
}



/* Entry: 108cb9290; end: 108cb93bf; -[SCPreviewConfiguration hasReplyRecipient] */

undefined8 FUN_108cb9290(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar1 = *(long *)(param_1 + 0x290);
  func_0x00010c1322e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar3 = *(ulong *)(param_1 + 0x290);
    func_0x00010befc200();
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x290);
      func_0x00010c1322c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010c08fa60();
      if (lVar2 == 0) {
        uVar3 = *(ulong *)(param_1 + 0x290);
        func_0x00010befc240();
        if ((uVar3 & 1) != 0) goto LAB_108cb931c;
        lVar5 = *(long *)(param_1 + 0x290);
        func_0x00010bf25140();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar5;
        func_0x00010c08fa60();
        if (lVar2 == 0) {
          lVar6 = *(long *)(param_1 + 0x290);
          func_0x00010c292720();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar6;
          func_0x00010bf529e0();
          if (lVar2 == 0) {
            lVar7 = *(long *)(param_1 + 0x290);
            func_0x00010bfceb60();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar7;
            func_0x00010bf529e0();
            if (lVar2 == 0) {
              uVar8 = *(undefined8 *)(param_1 + 0x290);
              func_0x00010c0729c0(uVar8);
            }
            else {
              uVar8 = 1;
            }
            _objc_release(lVar7);
          }
          else {
            uVar8 = 1;
          }
          _objc_release(lVar6);
        }
        else {
          uVar8 = 1;
        }
        _objc_release(lVar5);
      }
      else {
LAB_108cb931c:
        uVar8 = 1;
      }
      _objc_release(lVar4);
      goto LAB_108cb92d4;
    }
  }
  uVar8 = 1;
LAB_108cb92d4:
  _objc_release(lVar1);
  return uVar8;
}



/* Entry: 108cb93c0; end: 108cb94c3; -[SCPreviewConfiguration isSnapReply] */

undefined8 FUN_108cb93c0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + 0x290);
  func_0x00010c1322e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar4 = *(long *)(param_1 + 0x290);
    func_0x00010c1322c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      lVar5 = *(long *)(param_1 + 0x290);
      func_0x00010c292720();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf529e0();
      if (lVar2 == 0) {
        lVar6 = *(long *)(param_1 + 0x290);
        func_0x00010bfceb60();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar6;
        func_0x00010bf529e0();
        if (lVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(param_1 + 0x3c8);
          func_0x00010bf2d240(uVar3);
        }
        _objc_release(lVar6);
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x3c8);
        func_0x00010bf2d240(uVar3);
      }
      _objc_release(lVar5);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x3c8);
      func_0x00010bf2d240(uVar3);
    }
    _objc_release(lVar4);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x3c8);
    func_0x00010bf2d240(uVar3);
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 108cb94c4; end: 108cb9543; -[SCPreviewConfiguration fullScreenImageForOverlay:] */

void FUN_108cb94c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bfbbbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  if (param_3 - 3U < 2) {
    func_0x00010c111580();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      lVar2 = param_1;
    }
    _objc_retain(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108cb9544; end: 108cb95c7; -[SCPreviewConfiguration currentFullScreenImage] */

void FUN_108cb9544(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c25e320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c111580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bfbbbc0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c111580();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c25e320(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb95c8; end: 108cb9627; -[SCPreviewConfiguration availableVideoProvider] */

void FUN_108cb95c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c25e340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c29ae80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cb9628; end: 108cb9747; -[SCPreviewConfiguration productMediaType] */

undefined8 FUN_108cb9628(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)(param_1 + 800);
  _objc_retain(uVar2);
  if (uVar2 == 0) {
    uVar1 = param_1;
    func_0x00010c07e840();
    if ((uVar1 & 1) != 0) {
LAB_108cb968c:
      uVar3 = 0;
      goto LAB_108cb9730;
    }
    func_0x00010c07e960();
    if ((param_1 & 1) == 0) goto LAB_108cb970c;
  }
  else {
    uVar1 = uVar2;
    func_0x00010c073ea0();
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar2;
      func_0x00010bfbd7e0();
      if ((long)uVar1 < 6) {
        if ((long)uVar1 < 3) {
          if (uVar1 < 2) goto LAB_108cb968c;
          if (uVar1 == 2) {
            uVar3 = 2;
            goto LAB_108cb9730;
          }
        }
        else {
          if (uVar1 - 4 < 2) {
            uVar3 = 4;
            goto LAB_108cb9730;
          }
          if (uVar1 == 3) goto LAB_108cb972c;
        }
      }
      else {
        if (uVar1 < 0xd) {
          if ((1L << (uVar1 & 0x3f) & 0x180U) != 0) {
            uVar3 = 5;
            goto LAB_108cb9730;
          }
          if ((1L << (uVar1 & 0x3f) & 0x600U) != 0) {
            uVar3 = 0xc;
            goto LAB_108cb9730;
          }
          if ((1L << (uVar1 & 0x3f) & 0x1800U) != 0) {
            uVar3 = 0xd;
            goto LAB_108cb9730;
          }
        }
        if (uVar1 == 6) {
LAB_108cb972c:
          uVar3 = 3;
          goto LAB_108cb9730;
        }
      }
LAB_108cb970c:
      uVar3 = 0xffffffffffffffff;
      goto LAB_108cb9730;
    }
  }
  uVar3 = 1;
LAB_108cb9730:
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 108cb9748; end: 108cb974b; -[SCPreviewConfiguration shouldShowMultiSnapView] */

void FUN_108cb9748(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c078130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isMultiSnap_1125fba58);
  return;
}



/* Entry: 108cb974c; end: 108cb977f; -[SCPreviewConfiguration isMultiSnapButCurrentlyOnlyOneSnap] */

void FUN_108cb974c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c078120();
  if ((int)lVar1 != 0) {
    func_0x00010bfb4f60(*(undefined8 *)(param_1 + 0x370));
  }
  return;
}



/* Entry: 108cb9780; end: 108cb97b3; -[SCPreviewConfiguration hasSavedBounceState] */

bool FUN_108cb9780(long param_1)

{
  func_0x00010bf20960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 108cb97b4; end: 108cb9813; -[SCPreviewConfiguration isSnapWithLens] */

bool FUN_108cb97b4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c1115c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c09a760(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_1 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 108cb9814; end: 108cb9847; -[SCPreviewConfiguration isSnapWithLiveCameraLens] */

bool FUN_108cb9814(long param_1)

{
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 108cb9848; end: 108cb985f; -[SCPreviewConfiguration savingDisabled] */

undefined8 FUN_108cb9848(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0xa4) & 1) != 0) {
    return 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x290);
                    /* WARNING: Could not recover jumptable at 0x00010c07b050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_isPreviewSavingDisabled_1125fc620);
  return uVar1;
}



/* Entry: 108cb9860; end: 108cb98c7; -[SCPreviewConfiguration captureMode] */

undefined8 FUN_108cb9860(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)param_1;
  uVar2 = param_1;
  func_0x00010c078120();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c06d080();
    if ((uVar2 & 1) == 0) {
      func_0x00010c070a20();
      if ((param_1 & 1) == 0) {
        func_0x00010c0811c0();
        uVar3 = 3;
        if (iVar1 == 0) {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 4;
      }
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 108cb98c8; end: 108cb98e7; -[SCPreviewConfiguration isMultiSnap] */

bool FUN_108cb98c8(long param_1)

{
  if (*(long *)(param_1 + 0x370) != 0) {
    return true;
  }
  return *(long *)(param_1 + 0x388) != 0;
}



/* Entry: 108cb98e8; end: 108cb98f7; -[SCPreviewConfiguration isBatchCapture] */

bool FUN_108cb98e8(long param_1)

{
  return *(long *)(param_1 + 0xc0) != 0;
}



/* Entry: 108cb98f8; end: 108cb991f; -[SCPreviewConfiguration isTimelineMode] */

uint FUN_108cb98f8(long param_1)

{
  if (*(long *)(param_1 + 0x378) != 0) {
    func_0x00010c070a20();
    return (uint)param_1 ^ 1;
  }
  return 0;
}



/* Entry: 108cb9920; end: 108cb992f; -[SCPreviewConfiguration isMultiCamMode] */

bool FUN_108cb9920(long param_1)

{
  return *(long *)(param_1 + 200) != 0;
}



/* Entry: 108cb9930; end: 108cb993f; -[SCPreviewConfiguration isGreenScreenMode] */

bool FUN_108cb9930(long param_1)

{
  return *(long *)(param_1 + 0xd8) != 0;
}



/* Entry: 108cb9940; end: 108cb9947; -[SCPreviewConfiguration isFromLegacyMultiSnaps] */

void FUN_108cb9940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c073bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 800),PTR_s_isFromLegacyMultiSnaps_1125fa908);
  return;
}



/* Entry: 108cb9948; end: 108cb9957; -[SCPreviewConfiguration isAddSnapEnabled] */

bool FUN_108cb9948(long param_1)

{
  return *(long *)(param_1 + 0x380) != 0;
}



/* Entry: 108cb9958; end: 108cb99f3; -[SCPreviewConfiguration isSnapSquareOrLandscape] */

bool FUN_108cb9958(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  lVar1 = param_2;
  func_0x00010c0c5ae0();
  if ((lVar1 != 2) && (lVar1 = param_2, func_0x00010c0c5ae0(), lVar1 != 3)) {
    lVar1 = param_2;
    func_0x00010c0c5ae0();
    if (lVar1 != 0) {
      return false;
    }
    func_0x00010c0c4080(param_2);
    fVar3 = (float)(double)CONCAT44(uVar5,uVar2);
    if (fVar3 < 1.0) {
      fVar4 = ABS(fVar3 + 1.0) * 1.1920929e-07;
      if (fVar4 <= 1.1754944e-38) {
        fVar4 = 1.1754944e-38;
      }
      return ABS(fVar3 + -1.0) < fVar4;
    }
  }
  return true;
}



/* Entry: 108cb99f4; end: 108cb9a47; -[SCPreviewConfiguration shouldDisplayTrackingObjectTooltipFromSnapConfiguration] */

uint FUN_108cb99f4(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  func_0x00010c083340();
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c2485a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf91760();
    uVar2 = (uint)uVar1 ^ 1;
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 108cb9a48; end: 108cb9acb; -[SCPreviewConfiguration shouldShowToolbarTimer] */

uint FUN_108cb9a48(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = param_1;
  func_0x00010c083340();
  uVar2 = param_1;
  func_0x00010c0792e0();
  if (((((uVar1 & 1) == 0) && ((int)uVar2 != 0)) ||
      (uVar1 = param_1, func_0x00010c06d080(), (uVar1 & 1) != 0)) ||
     (uVar1 = param_1, func_0x00010c07e960(), (uVar1 & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c233c60(param_1);
    uVar2 = param_1;
    func_0x00010c0792e0();
    if ((uVar2 & 1) == 0) {
      func_0x00010c07e920(param_1);
      uVar3 = (uint)param_1;
    }
    else {
      uVar3 = 1;
    }
    uVar3 = (uint)uVar1 ^ 1 | uVar3;
  }
  return uVar3 & 1;
}



/* Entry: 108cb9acc; end: 108cb9b07; -[SCPreviewConfiguration shouldHideAnimatedStickers] */

undefined8 FUN_108cb9acc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07f120();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108cb9b08; end: 108cb9c5f; -[SCPreviewConfiguration isSnapCropInteractionEnabled] */

bool FUN_108cb9b08(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = param_1;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010c2440e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d2400();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == 0) {
      uVar5 = param_1;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c23f220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
    }
    else {
      _objc_retain(uVar4);
      uVar6 = uVar4;
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = uVar6;
    FUN_109024028();
    _objc_release(uVar6);
    if ((int)uVar2 == 0) {
      return false;
    }
  }
  uVar2 = param_1;
  func_0x00010c07e620();
  if (((((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x00010c07e920(), (uVar2 & 1) == 0)) &&
      (uVar2 = param_1, func_0x00010c07e960(), (uVar2 & 1) == 0)) &&
     (((uVar2 = param_1, func_0x00010c07ea60(), (uVar2 & 1) == 0 &&
       (uVar2 = param_1, func_0x00010c243400(), uVar2 != 0x11)) &&
      (uVar2 = param_1, func_0x00010c243400(), uVar2 != 0x19)))) {
    func_0x00010c243400(param_1);
    bVar1 = param_1 == 0x2f;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 108cb9c60; end: 108cb9cdf; -[SCPreviewConfiguration isTwoDTryOnSnap] */

bool FUN_108cb9c60(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0xc0);
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (lVar3 = lVar2, func_0x00010bf529e0(), lVar3 == 0)) {
    bVar1 = false;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c31910(lVar2,&PTR___NSConcreteGlobalBlock_110ac18a8);
    lVar4 = lVar3;
    func_0x00010bf529e0();
    bVar1 = lVar4 != 0;
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 108cb9ce0; end: 108cb9ce7;  */

void FUN_108cb9ce0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0819b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isTryOnApplied_1125fe078);
  return;
}



/* Entry: 108cb9ce8; end: 108cb9d37; -[SCPreviewConfiguration isSpotlightRemix] */

long FUN_108cb9ce8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x290);
  func_0x00010c1297c0();
  if ((lVar1 - 10U < 5) && ((0x1bU >> (ulong)((uint)(lVar1 - 10U) & 0x1f) & 1) != 0)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c07bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isRecoveringSpotlightRemix_1125fc9e8);
  return param_1;
}



/* Entry: 108cb9d38; end: 108cb9d73; -[SCPreviewConfiguration baseMediaMusicSelection] */

void FUN_108cb9d38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c083340();
  if ((int)lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108cb9d74; end: 108cb9dcb; -[SCPreviewConfiguration liveCameraLensMetadata] */

void FUN_108cb9d74(long param_1)

{
  long lVar1;
  
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 != 0) {
    _objc_retain(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108cb9dcc; end: 108cb9dd3; -[SCPreviewConfiguration replyConfiguration] */

void FUN_108cb9dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c131bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x290),PTR_s_replyConfiguration_11262a110);
  return;
}



/* Entry: 108cb9dd4; end: 108cb9dfb; -[SCPreviewConfiguration bitmojiFashionContext] */

void FUN_108cb9dd4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cb9dfc; end: 108cb9f8b; -[SCPreviewConfiguration isReplyingToPromptLens] */

bool FUN_108cb9dfc(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x00010bfdb1e0();
  if ((int)uVar2 == 0) {
    bVar1 = false;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_108cb9f8c;
    uStack_40 = 0x108cb9f9c;
    uStack_38 = 0;
    func_0x00010c131bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bcaa0();
    _objc_release(param_1);
    lVar3 = puStack_58[5];
    func_0x00010c13b900();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = puStack_58[5];
      func_0x00010c1185e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c08fa60();
      if (lVar5 == 0) {
        bVar1 = false;
      }
      else {
        lVar6 = puStack_58[5];
        func_0x00010c094540(lVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar6;
        func_0x00010c08fa60();
        bVar1 = lVar5 != 0;
        _objc_release(lVar6);
      }
      _objc_release(lVar4);
    }
    else {
      bVar1 = false;
    }
    _objc_release(lVar3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  return bVar1;
}



/* Entry: 108cb9f8c; end: 108cb9fa3;  */

void FUN_108cb9f8c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108cb9fa4; end: 108cba01b;  */

void FUN_108cb9fa4(long param_1)

{
  long lVar1;
  long in_x7;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(in_x7);
  lVar1 = in_x7;
  func_0x00010c118700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = in_x7;
    func_0x00010c118700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x7);
  return;
}



/* Entry: 108cba01c; end: 108cba057; -[SCPreviewConfiguration isPublicPromptImageLens] */

undefined8 FUN_108cba01c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c09a7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07b7a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108cba058; end: 108cba093; -[SCPreviewConfiguration isTurnByTurnPromptLens] */

undefined8 FUN_108cba058(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c09a7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c081a80();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108cba094; end: 108cba097; -[SCPreviewConfiguration isPromptLensWithRestrictedDestinations] */

void FUN_108cba094(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07b790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isPublicPromptImageLens_1125fc7f0);
  return;
}



/* Entry: 108cba098; end: 108cba0a7; -[SCPreviewConfiguration isQuickCut] */

bool FUN_108cba098(long param_1)

{
  return *(long *)(param_1 + 0x78) != 0;
}



/* Entry: 108cba0a8; end: 108cba0af; -[SCPreviewConfiguration ctLensID] */

void FUN_108cba0a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x270),PTR_s_lensID_112602ad8);
  return;
}



/* Entry: 108cba0b0; end: 108cba0d7; -[SCPreviewConfiguration legacyFilterDataProvider] */

void FUN_108cba0b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cba0d8; end: 108cba197; -[SCPreviewConfiguration snapEditorMediaType] */

uint FUN_108cba0d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar1 = param_1;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c083340();
    uVar4 = (uint)param_1 ^ 1;
  }
  else {
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 1) {
      lVar2 = lVar1;
      func_0x00010c0dfd40(lVar1,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c083320();
      uVar4 = (uint)lVar3 ^ 1;
      _objc_release(lVar2);
    }
    else {
      uVar4 = 2;
    }
    _objc_release(lVar1);
  }
  return uVar4;
}



/* Entry: 108cba198; end: 108cba27f; +[SCPreviewConfiguration maxPreviewImagePixelSize] */

undefined8 FUN_108cba198(double param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c075d00();
  if ((int)puVar2 == 0) {
    param_4 = 1280.0;
  }
  else {
    puVar2 = PTR_PTR_1126b2930;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c07e1a0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar3 == 0) {
      param_4 = 1280.0;
      goto LAB_108cba260;
    }
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    param_4 = param_4 * param_1;
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_108cba260:
  uVar4 = NEON_fminnm(param_4,0x40a1400000000000);
  return uVar4;
}



/* Entry: 108cba280; end: 108cba293; +[SCPreviewConfiguration fullScreenPreviewImageWithData:maxPixelSize:] */

void FUN_108cba280(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14d070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_1,0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
             PTR_s_sc_imageWithData_maxOutputSize_s_112630e38);
  return;
}



/* Entry: 108cba294; end: 108cba2e7; +[SCPreviewConfiguration fullScreenPreviewImageWithData:] */

void FUN_108cba294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0c2a20(param_1);
  func_0x00010bfbbc20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cba2e8; end: 108cba3cf; +[SCPreviewConfiguration maxScanPreviewImagePixelSize] */

undefined8 FUN_108cba2e8(double param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c075d00();
  if ((int)puVar2 == 0) {
    param_4 = 1280.0;
  }
  else {
    puVar2 = PTR_PTR_1126b2930;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c07e1a0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar3 == 0) {
      param_4 = 1280.0;
      goto LAB_108cba3b0;
    }
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    param_4 = param_4 * param_1;
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_108cba3b0:
  uVar4 = NEON_fminnm(param_4,0x4094d80000000000);
  return uVar4;
}



/* Entry: 108cba3d0; end: 108cba3db; -[SCPreviewConfiguration maxPreviewImagePixelSize] */

void FUN_108cba3d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c2a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126afee0,PTR_s_maxPreviewImagePixelSize_11260e4a0)
  ;
  return;
}



/* Entry: 108cba3dc; end: 108cba3e7; -[SCPreviewConfiguration maxScanPreviewImagePixelSize] */

void FUN_108cba3dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c2d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126afee0,PTR_s_maxScanPreviewImagePixelSize_11260e558);
  return;
}



/* Entry: 108cba3e8; end: 108cba45f; -[SCPreviewConfiguration shouldSendAsChatMedia] */

ulong FUN_108cba3e8(ulong param_1)

{
  ulong uVar1;
  
  if ((*(byte *)(param_1 + 0xbb) & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c07e960();
    if (((((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c07ea60(), (uVar1 & 1) == 0)) &&
        (uVar1 = param_1, func_0x00010c07e920(), (uVar1 & 1) == 0)) &&
       ((uVar1 = param_1, func_0x00010c07e860(), (uVar1 & 1) == 0 &&
        (uVar1 = param_1, func_0x00010c2330c0(), (uVar1 & 1) == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00010c075070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isImageGeneratedByTextToImage_1125fae28);
      return param_1;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 108cba460; end: 108cba493; -[SCPreviewConfiguration shouldShowSendToPreview] */

byte FUN_108cba460(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = param_1;
  func_0x00010c233020();
  if ((uVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0xbb);
  }
  else {
    bVar2 = 1;
  }
  return bVar2 & 1;
}



/* Entry: 108cba494; end: 108cba49b; -[SCPreviewConfiguration filtersEnabled] */

undefined1 FUN_108cba494(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



/* Entry: 108cba49c; end: 108cba58f; -[SCPreviewConfiguration isSnapMeReply] */

byte FUN_108cba49c(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x00010c11ea80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c11ea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    puStack_38 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    func_0x00010c0bd380(lVar1);
    bVar2 = *(byte *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  _objc_release(lVar1);
  return bVar2 & 1;
}



/* Entry: 108cba590; end: 108cba5a3;  */

void FUN_108cba590(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108cba5a4; end: 108cba697; -[SCPreviewConfiguration isSnapMeAddToStory] */

byte FUN_108cba5a4(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x00010c11ea80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c11ea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    puStack_38 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    func_0x00010c0bd380(lVar1);
    bVar2 = *(byte *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  _objc_release(lVar1);
  return bVar2 & 1;
}



/* Entry: 108cba698; end: 108cba6ab;  */

void FUN_108cba698(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108cba6ac; end: 108cba79f; -[SCPreviewConfiguration isQuestionStickerQuotedReply] */

byte FUN_108cba6ac(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x00010c11ea80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c11ea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    puStack_38 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    func_0x00010c0bd380(lVar1);
    bVar2 = *(byte *)(puStack_38 + 3);
    __Block_object_dispose(&uStack_40,8);
  }
  _objc_release(lVar1);
  return bVar2 & 1;
}



/* Entry: 108cba7a0; end: 108cba7b7;  */

void FUN_108cba7a0(long param_1,undefined8 param_2,long param_3)

{
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3 == 2;
  return;
}



/* Entry: 108cba7b8; end: 108cba7bf; -[SCPreviewConfiguration batchCaptureConfiguration] */

undefined8 FUN_108cba7b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 108cba7c0; end: 108cba7c7; -[SCPreviewConfiguration multiCamModeLoggingParameters] */

undefined8 FUN_108cba7c0(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 108cba7c8; end: 108cba7f7; -[SCPreviewConfiguration setMultiCamModeLoggingParameters:] */

void FUN_108cba7c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cba7f8; end: 108cba7ff; -[SCPreviewConfiguration multiCamModeContextInfo] */

undefined8 FUN_108cba7f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 108cba800; end: 108cba82f; -[SCPreviewConfiguration setMultiCamModeContextInfo:] */

void FUN_108cba800(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cba830; end: 108cba837; -[SCPreviewConfiguration greenScreenModeLoggingParameters] */

undefined8 FUN_108cba830(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 108cba838; end: 108cba867; -[SCPreviewConfiguration setGreenScreenModeLoggingParameters:] */

void FUN_108cba838(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cba868; end: 108cba86f; -[SCPreviewConfiguration activeCameraModes] */

undefined8 FUN_108cba868(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 108cba870; end: 108cba877; -[SCPreviewConfiguration detailedCameraModes] */

undefined8 FUN_108cba870(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 108cba878; end: 108cba87f; -[SCPreviewConfiguration setDetailedCameraModes:] */

void FUN_108cba878(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cba880; end: 108cba887; -[SCPreviewConfiguration spectaclesConfig] */

undefined8 FUN_108cba880(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 108cba888; end: 108cba8b7; -[SCPreviewConfiguration setSpectaclesConfig:] */

void FUN_108cba888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cba8b8; end: 108cba8bf; -[SCPreviewConfiguration shoppingLensPreviewPayload] */

undefined8 FUN_108cba8b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 108cba8c0; end: 108cba8ef; -[SCPreviewConfiguration setShoppingLensPreviewPayload:] */

void FUN_108cba8c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cba8f0; end: 108cba8f7; -[SCPreviewConfiguration preselectedTool] */

undefined8 FUN_108cba8f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 108cba8f8; end: 108cba8ff; -[SCPreviewConfiguration setPreselectedTool:] */

void FUN_108cba8f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x100) = param_3;
  return;
}



/* Entry: 108cba900; end: 108cba907; -[SCPreviewConfiguration animatePreviewToolbarOnOpen] */

undefined1 FUN_108cba900(long param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}



/* Entry: 108cba908; end: 108cba90f; -[SCPreviewConfiguration setAnimatePreviewToolbarOnOpen:] */

void FUN_108cba908(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 108cba910; end: 108cba917; -[SCPreviewConfiguration quickSendRecipientEditingDisabled] */

undefined1 FUN_108cba910(long param_1)

{
  return *(undefined1 *)(param_1 + 0x91);
}



/* Entry: 108cba918; end: 108cba91f; -[SCPreviewConfiguration setQuickSendRecipientEditingDisabled:] */

void FUN_108cba918(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x91) = param_3;
  return;
}



/* Entry: 108cba920; end: 108cba927; -[SCPreviewConfiguration lensConfigInfo] */

undefined8 FUN_108cba920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108cba928; end: 108cba92f; -[SCPreviewConfiguration setLensConfigInfo:] */

void FUN_108cba928(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cba930; end: 108cba937; -[SCPreviewConfiguration lensTurnBasedPromptMetadata] */

undefined8 FUN_108cba930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108cba938; end: 108cba93f; -[SCPreviewConfiguration setLensTurnBasedPromptMetadata:] */

void FUN_108cba938(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cba940; end: 108cba947; -[SCPreviewConfiguration lensMusicInfo] */

undefined8 FUN_108cba940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 108cba948; end: 108cba94f; -[SCPreviewConfiguration setLensMusicInfo:] */

void FUN_108cba948(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cba950; end: 108cba957; -[SCPreviewConfiguration lensTappableElements] */

undefined8 FUN_108cba950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108cba958; end: 108cba95f; -[SCPreviewConfiguration setLensTappableElements:] */

void FUN_108cba958(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cba960; end: 108cba967; -[SCPreviewConfiguration cameraType] */

undefined8 FUN_108cba960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 108cba968; end: 108cba96f; -[SCPreviewConfiguration isCompletedTurnByTurnPromptLens] */

undefined1 FUN_108cba968(long param_1)

{
  return *(undefined1 *)(param_1 + 0x92);
}



/* Entry: 108cba970; end: 108cba977; -[SCPreviewConfiguration setIsCompletedTurnByTurnPromptLens:] */

void FUN_108cba970(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x92) = param_3;
  return;
}



/* Entry: 108cba978; end: 108cba97f; -[SCPreviewConfiguration snapModeInfo] */

undefined8 FUN_108cba978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 108cba980; end: 108cba9af; -[SCPreviewConfiguration setSnapModeInfo:] */

void FUN_108cba980(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


