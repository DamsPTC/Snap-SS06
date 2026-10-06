/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e13864; end: 106e13927; -[SCOperaGLVideoLayerViewController _resetNGSMEPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e13864(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275eff0;
  func_0x00010c0f5fe0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11275f034;
  if (*(long *)(param_1 + lVar2) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + lVar2) + 0x10);
  }
  _objc_retain(uVar1);
  func_0x00010c128400(uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f040);
  *(undefined8 *)(param_1 + _DAT_11275f040) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f044);
  *(undefined8 *)(param_1 + _DAT_11275f044) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f02c);
  *(undefined8 *)(param_1 + _DAT_11275f02c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f020);
  *(undefined8 *)(param_1 + _DAT_11275f020) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e13928; end: 106e13bc3; -[SCOperaGLVideoLayerViewController _configurePlaybackSessionForAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e13928(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c0ffbc0();
  func_0x00010bea7860(param_1,param_2,lVar6 == 1);
  _objc_release(lVar1);
  lVar6 = (long)_DAT_11275f014;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  lVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c100540();
  func_0x00010c1ddae0(uVar5);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010c29f700(&uStack_70,lVar1);
  }
  func_0x00010c2235a0(uVar5,param_2,&uStack_70);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0efa0();
  lVar4 = param_1;
  if ((int)lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c07caa0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      lVar1 = param_1;
      func_0x00010be97280(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be750a0(param_1,param_2,lVar1,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      func_0x00010c1ede00(*(undefined8 *)(param_1 + lVar6),param_2,1,lVar4);
      func_0x00010c1573a0(*(undefined8 *)(param_1 + lVar6));
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      goto LAB_106e13b10;
    }
  }
  else {
    _objc_release(lVar1);
  }
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  lVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c07caa0();
  func_0x00010c1ede00(uVar5,param_2,lVar2,0);
  _objc_release(lVar1);
  func_0x00010c1573a0(*(undefined8 *)(param_1 + lVar6));
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0efa0();
LAB_106e13b10:
  func_0x00010c2241a0(uVar5);
  _objc_release(lVar4);
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0f660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0f660();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16bf60(*(undefined8 *)(param_1 + lVar6),param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 106e13bc4; end: 106e13c3b; -[SCOperaGLVideoLayerViewController _applyAudioProcessorMixToPlaybackSessionIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e13bc4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bdd1320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0efa0();
  _objc_release(uVar2);
  if (((uVar3 & 1) == 0) && (uVar1 != 0)) {
    func_0x00010c16c100(*(undefined8 *)(param_1 + (long)_DAT_11275f014),param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e13c3c; end: 106e13d67; -[SCOperaGLVideoLayerViewController _playerForWaveformData:audioProcessorMix:] */

void FUN_106e13c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0082a0();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  func_0x00010c100be0(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c279200(puVar1,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if ((param_4 != 0) && (puVar4 != (undefined *)0x0)) {
    func_0x00010c16be60(puVar2,param_2,param_4);
  }
  func_0x00010c16c4c0(puVar2,param_2,
                      *(undefined8 *)PTR__AVAudioTimePitchAlgorithmVarispeed_110347ed8);
  puVar3 = PTR_PTR_1126c9e68;
  _objc_alloc(PTR_PTR_1126c9e68);
  func_0x00010c0370a0();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e13d68; end: 106e13dab; -[SCOperaGLVideoLayerViewController _parseGLRenderOrientationFromTrack:] */

void FUN_106e13d68(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_3 == 0) {
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x00010c106f40(&uStack_40,param_3);
  }
  func_0x00010b691288(&uStack_40);
  func_0x00010b69138c();
  return;
}



/* Entry: 106e13dac; end: 106e13e17; -[SCOperaGLVideoLayerViewController _teardownPlaybackSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e13dac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f014);
  *(undefined8 *)(param_1 + _DAT_11275f014) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11275efc0;
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c137fe0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f01c);
  *(undefined8 *)(param_1 + _DAT_11275f01c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f018);
  *(undefined8 *)(param_1 + _DAT_11275f018) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e13e18; end: 106e13ee3; -[SCOperaGLVideoLayerViewController _videoAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e13e18(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010c299240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0b380();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c2991c0(lVar1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0d5720();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11275f018;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(long *)(param_1 + lVar7) = lVar5;
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  _objc_retain(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106e13ee4; end: 106e13fcb; -[SCOperaGLVideoLayerViewController _audioProcessorMix] */

void FUN_106e13ee4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf0f8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfccd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf0f8e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfccce0(lVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106e13fcc; end: 106e140b3; -[SCOperaGLVideoLayerViewController _reverseAudioData] */

void FUN_106e13fcc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c13ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfccd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c13ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfcce20(lVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106e140b4; end: 106e14143; -[SCOperaGLVideoLayerViewController _glCommandsForKey:] */

void FUN_106e140b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfccd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfccd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e14144; end: 106e141ab; -[SCOperaGLVideoLayerViewController playerItemDidReachEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e14144(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11275f014);
  func_0x00010c2318c0();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126b2638;
    func_0x00010bf112e0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04420(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf78e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f020),PTR_s_didReachEndOfPlayback_1125bbd38);
  return;
}



/* Entry: 106e141ac; end: 106e1425b; -[SCOperaGLVideoLayerViewController setActionMenuEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e141ac(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,uint param_7)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (*(byte *)(param_5 + _DAT_11275f028) == param_7) {
    return;
  }
  *(char *)(param_5 + _DAT_11275f028) = (char)param_7;
  lVar4 = *(long *)(param_5 + _DAT_11275efe8);
  uVar5 = *(undefined8 *)(param_5 + _DAT_11275effc);
  if (param_7 == 0) {
    lVar3 = *(long *)(param_5 + _DAT_11275efcc);
    func_0x00010bf60aa0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141a80();
    func_0x000107dbaf3c(lVar4,uVar5);
  }
  else {
    dVar6 = 0.0;
    _objc_retain();
    _objc_retain(uVar5);
    lVar3 = lVar4;
    func_0x00010c0b8420();
    if ((lVar3 == 3) || (lVar3 = lVar4, func_0x00010c0b8420(), lVar3 == 4)) {
      func_0x00010c0895e0(lVar4);
      dVar8 = dVar6;
      func_0x00010c29f6c0(lVar4);
      dVar7 = 0.0;
      if (dVar8 != 0.0) {
        if (param_2 == 0.0) {
          dVar7 = INFINITY;
        }
        else {
          dVar7 = dVar8 / param_2;
        }
      }
      func_0x00010bf47880(dVar6,dVar7,lVar4);
      dVar6 = 0.0;
      func_0x00010bfb51a0(lVar4);
      func_0x00010c089cc0(lVar4);
      dVar8 = ABS(dVar6);
      func_0x00010c29f6c0(lVar4);
      func_0x00010bf20c00(lVar4);
      bVar1 = false;
      bVar2 = false;
      if (dVar8 < 2.356194490192345) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar8)) {
          bVar1 = dVar8 == 0.7853981633974483;
          bVar2 = 0.7853981633974483 <= dVar8;
        }
      }
      if (!bVar2 || bVar1) {
        dVar6 = dVar7;
      }
      param_4 = param_4 / dVar6;
      func_0x00010c089ce0(lVar4);
      dVar8 = dVar6;
      func_0x00010c089ce0(lVar4);
      func_0x00010c139580(dVar6,dVar8,param_4,uVar5);
    }
    _objc_release(uVar5);
    lVar3 = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106e1425c; end: 106e142b3; -[SCOperaGLVideoLayerViewController _setShouldLoop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1425c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275f014;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c2318c0();
  if ((int)param_3 != iVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c2009b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_setShouldLoop__11265dc90,param_3);
    return;
  }
  return;
}



/* Entry: 106e142b4; end: 106e143df; -[SCOperaGLVideoLayerViewController _startListeningToMotionManagerIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e142b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar6 = (long)_DAT_11275f04c;
  if (*(long *)(param_1 + lVar6) == 0) {
    lVar5 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c07cc60();
    _objc_release(lVar5);
    if ((int)lVar1 != 0) {
      _objc_initWeak(auStack_38,param_1);
      lVar5 = (long)_DAT_11275efcc;
      func_0x00010bf18460(*(undefined8 *)(param_1 + lVar5));
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c297080();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      uVar3 = uVar2;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = uVar3;
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 106e143e0; end: 106e1446f;  */

void FUN_106e143e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010c141a80(param_4);
  uVar1 = param_1;
  func_0x00010c27ada0(param_4);
  uVar2 = uVar1;
  func_0x00010bfce0a0(param_4);
  _objc_release(param_4);
  func_0x00010c0d12a0(param_1,uVar1,param_2,uVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e14470; end: 106e144c7; -[SCOperaGLVideoLayerViewController _stopListeningToMotionManagerIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e14470(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275f04c;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf94da0(*(undefined8 *)(param_1 + _DAT_11275efcc));
    func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106e144c8; end: 106e1460b; -[SCOperaGLVideoLayerViewController motionManagerDidUpdateRotation:translation:gravity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e144c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = param_5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c232cc0();
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar1 = param_5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c07cc60();
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      lVar3 = (long)_DAT_11275efe8;
      lVar1 = *(long *)(param_5 + lVar3);
      func_0x00010c0b8420();
      if (lVar1 != 4) {
        lVar1 = *(long *)(param_5 + lVar3);
        func_0x00010c0b8420();
        if (0xfffffffffffffffc < lVar1 - 6U) {
          uVar2 = *(ulong *)(param_5 + _DAT_11275effc);
          func_0x00010c0fc340();
          if ((uVar2 & 1) != 0) {
            return;
          }
        }
        if (*(char *)(param_5 + _DAT_11275f028) == '\x01') {
          lVar1 = *(long *)(param_5 + lVar3);
          func_0x00010c0b8420();
          if (0xfffffffffffffffc < lVar1 - 6U) {
            return;
          }
        }
        func_0x00010c28ac40(param_2,param_3,*(undefined8 *)(param_5 + lVar3));
        func_0x00010c28ac20(param_1,*(undefined8 *)(param_5 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c28c210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,param_4,*(undefined8 *)(param_5 + _DAT_11275f000),
                   PTR_s_updateVisibilityForRotation_grav_112680aa8);
        return;
      }
    }
  }
  return;
}



/* Entry: 106e1460c; end: 106e146e3; -[SCOperaGLVideoLayerViewController operaRotatingLayerPinchController:didFinishPinchWithScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1460c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c07cc60();
  _objc_release(lVar1);
  if ((int)lVar5 != 0) {
    lVar5 = (long)_DAT_11275effc;
    func_0x00010c075560(*(undefined8 *)(param_1 + lVar5));
    lVar1 = param_1;
    func_0x00010c08f5c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e520();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11275efe8);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275efcc);
    func_0x00010bf60aa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141a80();
    func_0x000107dbaf3c(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106e146e4; end: 106e1481b; -[SCOperaGLVideoLayerViewController operaRotatingLayerPinchController:updateTransformWithScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e146e4(undefined8 param_1,double param_2,undefined *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  uVar11 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c07cc60();
  _objc_release();
  if ((int)puVar5 != 0) {
    func_0x00010c28ac00(param_1,*(undefined8 *)(param_3 + _DAT_11275efe8));
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010c0fc2c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c118dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940();
    _objc_release(param_3);
    _objc_release();
    uVar11 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = puVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c07cc60();
  _objc_release(puVar5);
  if (((int)puVar6 != 0) && (puVar4[_DAT_11275f008] == '\x01')) {
    lVar12 = (long)_DAT_11275efe8;
    lVar10 = *(long *)(puVar4 + lVar12);
    func_0x00010c0b8420();
    if (lVar10 != 5) {
      lVar13 = (long)_DAT_11275effc;
      lVar10 = *(long *)(puVar4 + lVar13);
      if (lVar10 == 0) {
        puVar5 = PTR_PTR_1126d2b58;
        _objc_alloc();
        puVar1 = (undefined8 *)(puVar4 + _DAT_11275efd4);
        puVar6 = puVar4;
        func_0x00010bf46560(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beee8c0();
        puVar7 = puVar4;
        uVar9 = uVar11;
        func_0x00010bf46560(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24c9a0();
        param_2 = (double)puVar1[1];
        func_0x00010c061580(*puVar1,param_2,puVar1[2],puVar1[3],uVar11,uVar9);
        uVar11 = *(undefined8 *)(puVar4 + lVar13);
        *(undefined **)(puVar4 + lVar13) = puVar5;
        _objc_release(uVar11);
        _objc_release(puVar7);
        _objc_release(puVar6);
        uVar11 = *(undefined8 *)(puVar4 + lVar13);
        puVar5 = puVar4;
        func_0x00010c0fc260();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined *)0x0) {
          puVar6 = puVar4;
          func_0x00010c29bf00(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa900(uVar11);
          _objc_release(puVar6);
        }
        else {
          func_0x00010befa900(uVar11);
        }
        _objc_release(puVar5);
        lVar10 = *(long *)(puVar4 + lVar13);
      }
      func_0x000107dbae24(lVar10,*(undefined8 *)(puVar4 + lVar12));
      uVar11 = *(undefined8 *)(puVar4 + lVar13);
      puVar5 = puVar4;
      func_0x00010c08f5c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beeebe0();
      func_0x00010c200ba0(uVar11);
      _objc_release(puVar5);
      uVar11 = *(undefined8 *)(puVar4 + lVar13);
      puVar5 = puVar4;
      func_0x00010c08f5c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c292300();
      puVar7 = puVar4;
      func_0x00010c0f0be0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107dbb2e0(puVar6,puVar8);
      func_0x00010c1aba80(uVar11);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      func_0x00010c14e120(*(undefined8 *)(puVar4 + lVar13));
      func_0x00010c0eb1a0(puVar4);
      lVar12 = *(long *)(puVar4 + lVar12);
      uVar9 = *(undefined8 *)(puVar4 + lVar13);
      dVar14 = 0.0;
      _objc_retain();
      _objc_retain(uVar9);
      uVar11 = uVar9;
      func_0x00010c075560();
      lVar10 = lVar12;
      func_0x00010c0b8420();
      if ((int)uVar11 == 0) {
        if (lVar10 == 4) {
          _objc_retain(lVar12);
          _objc_retain(uVar9);
          func_0x00010c0895e0(lVar12);
          dVar16 = dVar14;
          func_0x00010c29f6c0(lVar12);
          dVar15 = 0.0;
          if (dVar16 != 0.0) {
            if (param_2 == 0.0) {
              dVar15 = INFINITY;
            }
            else {
              dVar15 = dVar16 / param_2;
            }
          }
          func_0x00010bf47880(dVar14,dVar15,lVar12);
          dVar14 = 0.0;
          func_0x00010c28ac20(lVar12);
          func_0x00010c089cc0(lVar12);
          dVar16 = ABS(dVar14);
          func_0x00010c29f6c0(lVar12);
          func_0x00010bf20c00(lVar12);
          _objc_release(lVar12);
          bVar2 = false;
          bVar3 = false;
          if (dVar16 < 2.356194490192345) {
            bVar2 = false;
            bVar3 = true;
            if (!NAN(dVar16)) {
              bVar2 = dVar16 == 0.7853981633974483;
              bVar3 = 0.7853981633974483 <= dVar16;
            }
          }
          if (!bVar3 || bVar2) {
            dVar15 = dVar14;
          }
          func_0x00010c139580(0x3ff0000000000000,param_2 / dVar15,0x3ff0000000000000,uVar9);
          _objc_release(uVar9);
        }
      }
      else if (lVar10 == 3) {
        func_0x000107dbb0a0(0,lVar12,uVar9);
      }
      _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar12);
      return;
    }
  }
  return;
}



/* Entry: 106e1481c; end: 106e14a93; -[SCOperaGLVideoLayerViewController _setupPinchControllerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1481c(undefined8 param_1,double param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar4 = param_3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar4;
  func_0x00010c07cc60();
  _objc_release(lVar4);
  if (((int)lVar11 != 0) && (*(char *)(param_3 + _DAT_11275f008) == '\x01')) {
    lVar11 = (long)_DAT_11275efe8;
    lVar4 = *(long *)(param_3 + lVar11);
    func_0x00010c0b8420();
    if (lVar4 != 5) {
      lVar12 = (long)_DAT_11275effc;
      lVar4 = *(long *)(param_3 + lVar12);
      if (lVar4 == 0) {
        puVar5 = PTR_PTR_1126d2b58;
        _objc_alloc();
        puVar1 = (undefined8 *)(param_3 + _DAT_11275efd4);
        lVar4 = param_3;
        func_0x00010bf46560(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beee8c0();
        lVar6 = param_3;
        uVar10 = param_1;
        func_0x00010bf46560(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24c9a0();
        param_2 = (double)puVar1[1];
        func_0x00010c061580(*puVar1,param_2,puVar1[2],puVar1[3],param_1,uVar10);
        uVar10 = *(undefined8 *)(param_3 + lVar12);
        *(undefined **)(param_3 + lVar12) = puVar5;
        _objc_release(uVar10);
        _objc_release(lVar6);
        _objc_release(lVar4);
        uVar10 = *(undefined8 *)(param_3 + lVar12);
        lVar4 = param_3;
        func_0x00010c0fc260();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
          lVar6 = param_3;
          func_0x00010c29bf00(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa900(uVar10);
          _objc_release(lVar6);
        }
        else {
          func_0x00010befa900(uVar10);
        }
        _objc_release(lVar4);
        lVar4 = *(long *)(param_3 + lVar12);
      }
      func_0x000107dbae24(lVar4,*(undefined8 *)(param_3 + lVar11));
      uVar10 = *(undefined8 *)(param_3 + lVar12);
      lVar4 = param_3;
      func_0x00010c08f5c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beeebe0();
      func_0x00010c200ba0(uVar10);
      _objc_release(lVar4);
      uVar10 = *(undefined8 *)(param_3 + lVar12);
      lVar4 = param_3;
      func_0x00010c08f5c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c292300();
      lVar7 = param_3;
      func_0x00010c0f0be0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107dbb2e0(lVar6,lVar8);
      func_0x00010c1aba80(uVar10);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar4);
      func_0x00010c14e120(*(undefined8 *)(param_3 + lVar12));
      func_0x00010c0eb1a0(param_3);
      lVar11 = *(long *)(param_3 + lVar11);
      uVar9 = *(undefined8 *)(param_3 + lVar12);
      dVar13 = 0.0;
      _objc_retain();
      _objc_retain(uVar9);
      uVar10 = uVar9;
      func_0x00010c075560();
      lVar4 = lVar11;
      func_0x00010c0b8420();
      if ((int)uVar10 == 0) {
        if (lVar4 == 4) {
          _objc_retain(lVar11);
          _objc_retain(uVar9);
          func_0x00010c0895e0(lVar11);
          dVar15 = dVar13;
          func_0x00010c29f6c0(lVar11);
          dVar14 = 0.0;
          if (dVar15 != 0.0) {
            if (param_2 == 0.0) {
              dVar14 = INFINITY;
            }
            else {
              dVar14 = dVar15 / param_2;
            }
          }
          func_0x00010bf47880(dVar13,dVar14,lVar11);
          dVar13 = 0.0;
          func_0x00010c28ac20(lVar11);
          func_0x00010c089cc0(lVar11);
          dVar15 = ABS(dVar13);
          func_0x00010c29f6c0(lVar11);
          func_0x00010bf20c00(lVar11);
          _objc_release(lVar11);
          bVar2 = false;
          bVar3 = false;
          if (dVar15 < 2.356194490192345) {
            bVar2 = false;
            bVar3 = true;
            if (!NAN(dVar15)) {
              bVar2 = dVar15 == 0.7853981633974483;
              bVar3 = 0.7853981633974483 <= dVar15;
            }
          }
          if (!bVar3 || bVar2) {
            dVar14 = dVar13;
          }
          func_0x00010c139580(0x3ff0000000000000,param_2 / dVar14,0x3ff0000000000000,uVar9);
          _objc_release(uVar9);
        }
      }
      else if (lVar4 == 3) {
        func_0x000107dbb0a0(0,lVar11,uVar9);
      }
      _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar11);
      return;
    }
  }
  return;
}



/* Entry: 106e14a94; end: 106e14b0b; -[SCOperaGLVideoLayerViewController setPinchGestureTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e14a94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11275f050;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_3 != lVar1) {
    _objc_storeWeak(param_1 + lVar2,param_3);
    if (*(long *)(param_1 + _DAT_11275effc) != 0) {
      func_0x00010befa900();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e14b0c; end: 106e14baf; -[SCOperaGLVideoLayerViewController movingViewsForFadeTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e14b0c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c07cc60();
  _objc_release(lVar2);
  if (((int)lVar3 != 0) && (*(char *)(param_1 + _DAT_11275f008) == '\x01')) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11275effc);
    func_0x00010c075560();
    if (iVar1 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
      func_0x00010c2a2b60(PTR__OBJC_CLASS___NSHashTable_1126b4538);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      goto LAB_106e14b9c;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_106e14b9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106e14bb0; end: 106e14bb7; -[SCOperaGLVideoLayerViewController fadingViewsForFadeTransition] */

undefined8 FUN_106e14bb0(void)

{
  return 0;
}



/* Entry: 106e14bb8; end: 106e14bc7; -[SCOperaGLVideoLayerViewController mediaViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e14bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb68f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275efd8),PTR_s_frame_1125cb3e0);
  return;
}



/* Entry: 106e14bc8; end: 106e14c73; -[SCOperaGLVideoLayerViewController mediaHeightToWidthAspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106e14bc8(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = param_3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c07cc60();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    func_0x00010bde8060(param_3);
    dVar3 = 0.0;
    if ((param_1 != 0.0) && (param_2 != 0.0)) {
      dVar3 = -param_2;
      if (0.0 <= param_2) {
        dVar3 = param_2;
      }
      dVar4 = -param_1;
      if (0.0 <= param_1) {
        dVar4 = param_1;
      }
      dVar3 = dVar3 / dVar4;
    }
  }
  else {
    dVar3 = *(double *)(param_3 + _DAT_11275efd4 + 0x10);
    if (dVar3 == 0.0) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = *(double *)(param_3 + _DAT_11275efd4 + 0x18) / dVar3;
    }
  }
  return dVar3;
}



/* Entry: 106e14c74; end: 106e14e83; -[SCOperaGLVideoLayerViewController _contentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106e14c74(double param_1,double param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  lVar2 = param_3;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    lVar2 = param_3;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6700();
    dVar7 = *(double *)PTR__CGSizeZero_110347620;
    dVar8 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    dVar5 = param_1;
    dVar6 = param_2;
    _objc_release(lVar2);
    bVar1 = false;
    if ((param_1 == dVar7) && (bVar1 = false, !NAN(param_2) && !NAN(dVar8))) {
      bVar1 = param_2 == dVar8;
    }
    if (bVar1) {
      lVar2 = param_3;
      func_0x00010bee8920();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c279200();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar4 == 0) {
        dVar6 = *(double *)(param_3 + _DAT_11275efd4 + 0x18);
        dVar5 = *(double *)(param_3 + _DAT_11275efd4 + 0x10);
      }
      else {
        func_0x00010c0d5d20(lVar4);
        func_0x00010c106f40(&dStack_90,lVar4);
        dStack_88 = dStack_88 * dVar5;
        dVar5 = dStack_80 * dVar6 + dStack_90 * dVar5;
        dVar6 = dStack_78 * dVar6 + dStack_88;
      }
      _objc_release(lVar4);
      _objc_release(lVar2);
      goto LAB_106e14db8;
    }
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6700();
  }
  else {
    func_0x00010c0f0be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc10a0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    dVar5 = param_1;
    dVar6 = param_2;
  }
  _objc_release(param_3);
LAB_106e14db8:
  auVar9._8_8_ = dVar6;
  auVar9._0_8_ = dVar5;
  return auVar9;
}



/* Entry: 106e14e84; end: 106e14e8b; -[SCOperaGLVideoLayerViewController isOverlay] */

undefined8 FUN_106e14e84(void)

{
  return 0;
}



/* Entry: 106e14e8c; end: 106e14eab; -[SCOperaGLVideoLayerViewController pinchGestureTarget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e14e8c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275f050);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e14eac; end: 106e15093; -[SCOperaGLVideoLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e14eac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275f050);
  _objc_destroyWeak(param_1 + _DAT_11275f004);
  _objc_storeStrong(param_1 + _DAT_11275efd0,0);
  _objc_storeStrong(param_1 + _DAT_11275f024,0);
  _objc_storeStrong(param_1 + _DAT_11275efc8,0);
  _objc_storeStrong(param_1 + _DAT_11275f020,0);
  _objc_storeStrong(param_1 + _DAT_11275effc,0);
  _objc_storeStrong(param_1 + _DAT_11275f000,0);
  _objc_storeStrong(param_1 + _DAT_11275efc0,0);
  _objc_storeStrong(param_1 + _DAT_11275f04c,0);
  _objc_storeStrong(param_1 + _DAT_11275efcc,0);
  _objc_storeStrong(param_1 + _DAT_11275f030,0);
  _objc_storeStrong(param_1 + _DAT_11275f02c,0);
  _objc_storeStrong(param_1 + _DAT_11275eff4,0);
  _objc_storeStrong(param_1 + _DAT_11275eff0,0);
  _objc_storeStrong(param_1 + _DAT_11275f034,0);
  _objc_storeStrong(param_1 + _DAT_11275f044,0);
  _objc_storeStrong(param_1 + _DAT_11275f040,0);
  _objc_storeStrong(param_1 + _DAT_11275eff8,0);
  _objc_storeStrong(param_1 + _DAT_11275f048,0);
  _objc_storeStrong(param_1 + _DAT_11275f014,0);
  _objc_storeStrong(param_1 + _DAT_11275f01c,0);
  _objc_storeStrong(param_1 + _DAT_11275f018,0);
  _objc_storeStrong(param_1 + _DAT_11275efc4,0);
  _objc_storeStrong(param_1 + _DAT_11275efe0,0);
  _objc_storeStrong(param_1 + _DAT_11275efd8,0);
  _objc_storeStrong(param_1 + _DAT_11275efe8,0);
  _objc_storeStrong(param_1 + _DAT_11275efe4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275efdc,0);
  return;
}



/* Entry: 106e15094; end: 106e154ab;  */

void FUN_106e15094(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126bf698;
  _objc_retain(param_2);
  func_0x00010bf0b9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar13 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar17 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uStack_d0 = uVar13;
  uStack_c8 = uVar14;
  uStack_c0 = uVar17;
  func_0x00010c297200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_1 == 0) {
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_d0,param_1);
  }
  func_0x00010c297200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uStack_d0 = uVar13;
  uStack_c8 = uVar14;
  uStack_c0 = uVar17;
  func_0x00010c297200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bf6a0;
  _objc_alloc();
  func_0x00010b7425e0(0x3ff0000000000000);
  puVar6 = PTR_PTR_1126bf6a0;
  _objc_alloc();
  func_0x00010b7425e0(0x3ff0000000000000);
  puVar7 = PTR_PTR_1126bf6a8;
  _objc_alloc();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b742360(puVar7,1,0,&PTR____CFConstantStringClassReference_110db1158,puVar16);
  _objc_release(puVar16);
  puVar8 = PTR_PTR_1126bf6a8;
  _objc_alloc();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b742360(puVar8,0,1,&PTR____CFConstantStringClassReference_110db2d38,puVar16);
  _objc_release(puVar16);
  puVar9 = PTR_PTR_1126bf6b0;
  _objc_alloc();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar7;
  puStack_88 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b742210(puVar9,puVar16);
  _objc_release(puVar16);
  puVar10 = PTR_PTR_1126bf6b8;
  _objc_alloc();
  puVar16 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_1 == 0) {
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_120,param_1);
  }
  uStack_f0 = uVar13;
  uStack_e8 = uVar14;
  uStack_e0 = uVar17;
  _CMTimeRangeMake(&uStack_d0,&uStack_f0,&uStack_120);
  func_0x00010c297240(puVar16);
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_120 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_108 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_110 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_f8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_100 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uVar14 = 2;
  uVar15 = 0;
  uVar17 = param_2;
  uStack_d0 = uStack_120;
  uStack_c8 = uStack_118;
  uStack_c0 = uStack_110;
  uStack_b8 = uStack_108;
  uStack_b0 = uStack_100;
  uStack_a8 = uStack_f8;
  func_0x00010b7432f8(puVar10,puVar16,&uStack_d0,&uStack_120,2,param_2,0,0);
  _objc_release(param_2);
  _objc_release(puVar16);
  puVar16 = PTR_PTR_1126bf6c0;
  _objc_alloc();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  puVar12 = puVar11;
  func_0x00010b743b10(puVar16,puVar9,puVar11,0);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(uVar13);
    _objc_retain(uVar14);
    _objc_retain(uVar17);
    _objc_retain(uVar15);
    func_0x00010c27dd80();
    if (puVar12 == (undefined *)0x15) {
      puVar16 = PTR_PTR_1126d2b68;
      _objc_alloc(PTR_PTR_1126d2b68);
      func_0x00010c0019a0();
    }
    else {
      puVar16 = (undefined *)0x0;
    }
    _objc_release(uVar15);
    _objc_release(uVar17);
    _objc_release(uVar14);
    _objc_release(uVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 106e154ac; end: 106e15567; +[SCOperaGLLayerViewControllerFactory layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_106e154ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c27dd80();
  if (param_3 == 0x15) {
    puVar1 = PTR_PTR_1126d2b68;
    _objc_alloc(PTR_PTR_1126d2b68);
    func_0x00010c0019a0();
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e15568; end: 106e1564b; +[SCOperaGLLayerViewControllerFactory legacyLayerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:sharedResourceManager:] */

void FUN_106e15568(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c27dd80();
  if (param_3 == 0x14) {
    puVar2 = PTR_PTR_1126d2b70;
    _objc_alloc(PTR_PTR_1126d2b70);
    uVar1 = param_6;
    func_0x00010c0d78a0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0019e0(puVar2,param_2,param_4,param_5,param_6,param_7,uVar1);
    _objc_release(uVar1);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e1564c; end: 106e1676f; +[SCContextSessionParams paramsWithGallerySnapId:contextClientInfo:isPrivateSnap:mediaId:snapDetailId:overlay:ctItems:lensId:musicTrackId:userSession:launchSource:circumstanceEngine:stickerInjector:] */

void FUN_106e1564c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined **param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined *param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  undefined **ppuVar26;
  long lVar27;
  undefined **ppuVar28;
  ulong uVar29;
  undefined *puVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  long lVar33;
  undefined **ppuStack_450;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  long lStack_328;
  long *plStack_320;
  undefined *puStack_318;
  undefined **ppuStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_8);
  ppuVar1 = param_8;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c297ca0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar2;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  if ((int)ppuVar32 == 0) {
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    plStack_2b0 = (long *)0x0;
    ppuVar1 = param_8;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      lVar25 = *plStack_2b0;
      do {
        ppuVar32 = (undefined **)0x0;
        do {
          if (*plStack_2b0 != lVar25) {
            _objc_enumerationMutation(ppuVar1);
          }
          ppuVar28 = *(undefined ***)(lStack_2b8 + (long)ppuVar32 * 8);
          ppuVar26 = ppuVar28;
          func_0x00010bfedfc0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar31 = ppuVar26;
          func_0x00010c297b40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar31;
          func_0x00010c297b40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar3;
          func_0x00010c297e20();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar4;
          func_0x00010c08fa60();
          _objc_release(ppuVar4);
          _objc_release(ppuVar3);
          _objc_release(ppuVar31);
          _objc_release(ppuVar26);
          if (ppuVar5 != (undefined **)0x0) {
            func_0x00010bfedfc0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = ppuVar28;
            func_0x00010c297b40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar32 = ppuVar2;
            func_0x00010c297b40();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_450 = ppuVar32;
            func_0x00010c297e20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar32);
            _objc_release(ppuVar2);
            _objc_release(ppuVar28);
            _objc_release(ppuVar1);
            goto LAB_106e15a90;
          }
          ppuVar32 = (undefined **)((long)ppuVar32 + 1);
        } while (ppuVar2 != ppuVar32);
        ppuVar2 = ppuVar1;
        func_0x00010bf52a60();
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar1);
    ppuVar2 = param_8;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuVar32 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_330 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_328 = 0xc2000000;
    plStack_320 = (long *)0x106e172e8;
    puStack_318 = &UNK_11097e840;
    _objc_retain();
    ppuVar1 = &puStack_330;
    ppuStack_310 = ppuVar32;
    _objc_retainBlock();
    lStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    _objc_retain(ppuVar2);
    ppuVar26 = ppuVar2;
    func_0x00010bf52a60();
    if (ppuVar26 != (undefined **)0x0) {
      lVar25 = *plStack_1f0;
      do {
        ppuVar31 = (undefined **)0x0;
        do {
          if (*plStack_1f0 != lVar25) {
            _objc_enumerationMutation(ppuVar2);
          }
          (*(code *)ppuVar1[2])(ppuVar1,*(undefined8 *)(lStack_1f8 + (long)ppuVar31 * 8));
          ppuVar31 = (undefined **)((long)ppuVar31 + 1);
        } while (ppuVar26 != ppuVar31);
        ppuVar26 = ppuVar2;
        func_0x00010bf52a60();
      } while (ppuVar26 != (undefined **)0x0);
    }
    _objc_release(ppuVar2);
    _objc_retain(ppuVar32);
    _objc_release(ppuVar1);
    _objc_release(ppuStack_310);
    _objc_release(ppuVar32);
    _objc_release(ppuVar2);
    _objc_release(ppuVar2);
    ppuVar1 = ppuVar32;
    func_0x00010bf529e0();
    if (ppuVar1 == (undefined **)0x0) {
      ppuStack_450 = (undefined **)0x0;
    }
    else {
      ppuStack_450 = ppuVar32;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    ppuVar32 = param_8;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar32;
    func_0x00010c297c00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_450 = ppuVar1;
    func_0x00010c15a3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  _objc_release(ppuVar32);
LAB_106e15a90:
  _objc_release(param_8);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar8 = PTR_PTR_1126ae740;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  ppuVar1 = param_8;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar25 = *plStack_2b0;
    do {
      ppuVar32 = (undefined **)0x0;
      do {
        if (*plStack_2b0 != lVar25) {
          _objc_enumerationMutation(ppuVar1);
        }
        uVar29 = *(ulong *)(lStack_2b8 + (long)ppuVar32 * 8);
        uVar9 = uVar29;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(uVar9);
        uVar9 = uVar29;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c0ca400();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar10;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(uVar9);
        uVar9 = uVar29;
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c244f40();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar10;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        _objc_release(uVar9);
        func_0x00010bfedfc0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar29;
        func_0x00010c244f40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(uVar29);
        uVar9 = uVar11;
        func_0x00010c08fa60();
        if ((uVar9 == 0) || (uVar9 = uVar11, func_0x00010c0720c0(), (uVar9 & 1) != 0)) {
          uVar9 = uVar12;
          func_0x00010c08fa60();
          if (uVar9 == 0) {
            uVar9 = uVar13;
            func_0x00010c08fa60();
            if ((uVar9 != 0) || (uVar9 = uVar10, func_0x00010c08fa60(), uVar9 != 0)) {
              uVar9 = uVar13;
              func_0x00010c08fa60();
              if ((uVar9 == 0) || (uVar9 = uVar13, func_0x00010c0720c0(), (uVar9 & 1) != 0)) {
                func_0x00010befa120(puVar7);
              }
              else {
                uVar9 = uVar13;
                func_0x000109189420();
                _objc_retainAutoreleasedReturnValue();
                if (uVar9 != 0) {
                  func_0x00010befa120(puVar6);
                }
                _objc_release(uVar9);
              }
              func_0x00010befc800(puVar8);
            }
          }
          else {
            func_0x00010befc800(puVar8);
            func_0x00010befa120(puVar7);
          }
        }
        else {
          uVar9 = uVar11;
          func_0x000109189420();
          _objc_retainAutoreleasedReturnValue();
          if (uVar9 != 0) {
            func_0x00010befc800(puVar8);
            func_0x00010befa120(puVar6);
          }
          _objc_release(uVar9);
        }
        _objc_release(uVar10);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        ppuVar32 = (undefined **)((long)ppuVar32 + 1);
      } while (ppuVar2 != ppuVar32);
      ppuVar2 = ppuVar1;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2e8 = 0xc2000000;
  uStack_2e0 = 0x106e17440;
  puStack_2d8 = &UNK_11097e870;
  _objc_retain(puVar8);
  puStack_2d0 = puVar8;
  _objc_retain(puVar6);
  ppuVar1 = &puStack_2f0;
  puStack_2c8 = puVar6;
  _objc_retainBlock();
  ppuVar2 = param_8;
  func_0x00010bf2fba0(param_8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar1[2])(ppuVar1,ppuVar2);
  _objc_release(ppuVar2);
  uStack_308 = 0;
  ppuStack_310 = (undefined **)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  lStack_328 = 0;
  puStack_330 = (undefined *)0x0;
  puStack_318 = (undefined *)0x0;
  plStack_320 = (long *)0x0;
  ppuVar2 = param_8;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar32 != (undefined **)0x0) {
    lVar25 = *plStack_320;
    do {
      ppuVar26 = (undefined **)0x0;
      do {
        if (*plStack_320 != lVar25) {
          _objc_enumerationMutation(ppuVar2);
        }
        (*(code *)ppuVar1[2])(ppuVar1,*(undefined8 *)(lStack_328 + (long)ppuVar26 * 8));
        ppuVar26 = (undefined **)((long)ppuVar26 + 1);
      } while (ppuVar32 != ppuVar26);
      ppuVar32 = ppuVar2;
      func_0x00010bf52a60();
    } while (ppuVar32 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  ppuVar2 = param_8;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 == (undefined **)0x0) {
    puStack_360 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_358 = 0xc2000000;
    uStack_350 = 0x106e175bc;
    puStack_348 = &UNK_110895860;
    _objc_retain(puVar8);
    puStack_340 = puVar8;
    _objc_retain(puVar6);
    ppuVar2 = &puStack_360;
    puStack_338 = puVar6;
    _objc_retainBlock();
    _objc_retain(param_9);
    lVar25 = param_9;
    func_0x00010bf52a60();
    lVar15 = lRam0000000000000000;
    while (lVar25 != 0) {
      lVar27 = 0;
      do {
        if (lRam0000000000000000 != lVar15) {
          _objc_enumerationMutation(param_9);
        }
        (*(code *)ppuVar2[2])(ppuVar2,*(undefined8 *)(lVar27 * 8));
        lVar27 = lVar27 + 1;
      } while (lVar25 != lVar27);
      lVar25 = param_9;
      func_0x00010bf52a60();
    }
    _objc_release(param_9);
    _objc_release(ppuVar2);
    _objc_release(puStack_338);
    _objc_release(puStack_340);
  }
  _objc_release(ppuVar1);
  _objc_release(puStack_2c8);
  _objc_release(puStack_2d0);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(param_9);
  _objc_release(param_8);
  if (param_4 == (undefined **)0x0) {
    param_4 = (undefined **)PTR_PTR_1126b5c10;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar14 = puVar6;
  func_0x00010bf529e0();
  if (puVar14 != (undefined *)0x0) {
    puVar14 = puVar6;
    func_0x00010c0d3c80(puVar6);
    func_0x00010c1c6a60(param_4);
    _objc_release(puVar14);
  }
  puVar14 = puVar7;
  func_0x00010bf529e0();
  if (puVar14 != (undefined *)0x0) {
    puVar14 = puVar7;
    func_0x00010c0d3c80(puVar7);
    func_0x00010c1c6a80(param_4);
    _objc_release(puVar14);
  }
  puVar14 = puVar8;
  func_0x00010bf529e0();
  if (puVar14 != (undefined *)0x0) {
    func_0x00010c1c6960(param_4);
  }
  FUN_106e16770(param_4,param_11,param_8);
  ppuVar2 = param_8;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar2;
  func_0x00010bf52a60();
  lVar25 = lRam0000000000000000;
  puVar14 = puVar6;
  while (ppuVar1 != (undefined **)0x0) {
    ppuVar32 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar25) {
        _objc_enumerationMutation(ppuVar2);
      }
      lVar33 = *(long *)((long)ppuVar32 * 8);
      lVar15 = lVar33;
      func_0x00010bf06320();
      _objc_retainAutoreleasedReturnValue();
      lVar27 = lVar15;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar27;
      func_0x00010b774bc4();
      _objc_release(lVar27);
      _objc_release(lVar15);
      if (lVar16 == 0x3fa644c1 || lVar16 == -0xfa8a0b3) {
        puVar14 = PTR_PTR_1126d2b78;
        _objc_opt_new(PTR_PTR_1126d2b78);
        lVar15 = lVar33;
        func_0x00010bf06320(lVar33);
        _objc_retainAutoreleasedReturnValue();
        lVar27 = lVar15;
        func_0x00010bf05300();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0440(puVar14);
        _objc_release(lVar27);
        _objc_release(lVar15);
        lVar15 = lVar33;
        func_0x00010bf06320(lVar33);
        _objc_retainAutoreleasedReturnValue();
        lVar27 = lVar15;
        func_0x00010bf05ba0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e52c0(puVar14);
        _objc_release(lVar27);
        _objc_release(lVar15);
        func_0x00010bf06320(lVar33);
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar33;
        func_0x00010bf0d6a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16b3a0(puVar14);
        _objc_release(lVar15);
        _objc_release(lVar33);
        func_0x00010c204aa0(param_4);
        _objc_release(puVar14);
        if ((lVar16 == -0xfa8a0b3) || (lVar16 == 0x3fa644c1)) goto LAB_106e162c0;
      }
      ppuVar32 = (undefined **)((long)ppuVar32 + 1);
    } while (ppuVar1 != ppuVar32);
    ppuVar1 = ppuVar2;
    func_0x00010bf52a60();
  }
LAB_106e162c0:
  _objc_release(ppuVar2);
  FUN_106e18cc8(param_4,param_8,param_9,param_16);
  ppuVar2 = param_8;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR___NSConcreteGlobalBlock_11097e800;
  ppuVar32 = ppuVar2;
  func_0x000100504554();
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar32;
  func_0x00010bf529e0();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_4;
    func_0x00010bf5ccc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_8;
  func_0x00010c23f480();
  _objc_retainAutoreleasedReturnValue();
  ppuVar26 = ppuVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar31 = ppuVar26;
  func_0x00010c2a2e80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar31;
  func_0x00010c2a2ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar31);
  _objc_release(ppuVar26);
  _objc_release(ppuVar2);
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar2 = param_4;
    func_0x00010c269920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar26 = ppuVar2;
    func_0x00010bf8d2c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar31 = ppuVar26;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar26);
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar31;
    func_0x00010beedca0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar31);
  }
  puVar17 = PTR_PTR_1126b2390;
  func_0x00010be4b0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126b2390;
  ppuVar2 = param_8;
  func_0x00010bfaebe0(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7fde0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar19 = puVar18;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126b2380;
  _objc_alloc();
  func_0x00010be0dd20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0607a0();
  _objc_release(param_1);
  ppuVar2 = (undefined **)PTR_PTR_1126b2390;
  _objc_alloc();
  ppuVar26 = ppuVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126b2370;
  _objc_alloc();
  func_0x000108435e5c(param_15);
  func_0x00010c01f560();
  puVar22 = PTR_PTR_1126b2398;
  _objc_alloc();
  puVar23 = param_12;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR_PTR_1126b23a0;
  if (puVar23 == (undefined *)0x0) {
    puVar30 = (undefined *)0x0;
  }
  else {
    puVar14 = param_12;
    func_0x00010c2923e0(param_12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292680();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c01bcc0();
  puVar24 = PTR_PTR_1126b23a8;
  func_0x00010c0ca0a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar31 = ppuVar26;
  func_0x00010c045140();
  _objc_release(puVar24);
  _objc_release(puVar22);
  if (puVar23 != (undefined *)0x0) {
    _objc_release(puVar30);
    _objc_release(puVar14);
  }
  _objc_release(puVar23);
  _objc_release(puVar21);
  _objc_release(ppuVar26);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(ppuVar3);
  _objc_release(ppuVar32);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(ppuStack_450);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar31);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar2 = ppuVar31;
    func_0x00010c095720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar2 == (undefined **)0x0) goto LAB_106e1688c;
    ppuVar2 = ppuVar31;
    func_0x00010c095720();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(ppuVar1);
    ppuVar2 = ppuVar1;
  }
  ppuVar32 = param_4;
  func_0x00010bfd95a0();
  if ((int)ppuVar32 == 0) {
LAB_106e16830:
    puVar6 = PTR_PTR_1126bfac0;
    _objc_opt_new(PTR_PTR_1126bfac0);
    func_0x00010c1ca400(param_4);
    _objc_release(puVar6);
    func_0x00010c282800(ppuVar2);
    ppuVar32 = param_4;
    func_0x00010c0d3a00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c218f80();
    _objc_release(ppuVar32);
  }
  else {
    ppuVar32 = param_4;
    func_0x00010c0d3a00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar26 = ppuVar32;
    func_0x00010c277e80();
    ppuVar3 = ppuVar2;
    func_0x00010c282800();
    _objc_release(ppuVar32);
    if (ppuVar26 != ppuVar3) goto LAB_106e16830;
  }
  _objc_release(ppuVar2);
LAB_106e1688c:
  _objc_release(ppuVar31);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106e16770; end: 106e168b7;  */

void FUN_106e16770(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    lVar1 = param_3;
    func_0x00010c095720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_106e1688c;
    lVar1 = param_3;
    func_0x00010c095720();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    lVar1 = param_2;
  }
  lVar2 = param_1;
  func_0x00010bfd95a0();
  if ((int)lVar2 == 0) {
LAB_106e16830:
    puVar5 = PTR_PTR_1126bfac0;
    _objc_opt_new(PTR_PTR_1126bfac0);
    func_0x00010c1ca400(param_1);
    _objc_release(puVar5);
    func_0x00010c282800(lVar1);
    lVar2 = param_1;
    func_0x00010c0d3a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c218f80();
    _objc_release(lVar2);
  }
  else {
    lVar2 = param_1;
    func_0x00010c0d3a00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c277e80();
    lVar4 = lVar1;
    func_0x00010c282800();
    _objc_release(lVar2);
    if (lVar3 != lVar4) goto LAB_106e16830;
  }
  _objc_release(lVar1);
LAB_106e1688c:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e168b8; end: 106e168bf;  */

void FUN_106e168b8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010bfc0860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b0cc0;
    _objc_alloc_init(PTR_PTR_1126b0cc0);
    puVar3 = PTR_PTR_1126b37e0;
    _objc_alloc_init(PTR_PTR_1126b37e0);
    puVar4 = PTR_PTR_1126dc180;
    _objc_alloc_init(PTR_PTR_1126dc180);
    lVar1 = param_2;
    func_0x00010bfc0860(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2740(puVar4);
    _objc_release(lVar1);
    func_0x00010c178980(puVar3);
    func_0x00010c1c73c0(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106e168c0; end: 106e16903;  */

bool FUN_106e168c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010beedca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf31ca0();
  _objc_release(param_2);
  return (int)uVar1 == 1;
}



/* Entry: 106e16904; end: 106e16ac7; +[SCContextSessionParams paramsWithGalleryItemIdentifier:launchSource:lensId:musicTrackId:circumstanceEngine:] */

void FUN_106e16904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar5 = PTR_PTR_1126b5c10;
  if (param_6 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_6);
    func_0x00010c0cb140(puVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_106e16770();
    _objc_release(param_6);
  }
  puVar1 = PTR_PTR_1126b2370;
  _objc_alloc(PTR_PTR_1126b2370);
  func_0x000108435e5c(param_7);
  func_0x00010c01f560(puVar1);
  puVar2 = PTR_PTR_1126b2390;
  _objc_alloc(PTR_PTR_1126b2390);
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2380;
  _objc_alloc(PTR_PTR_1126b2380);
  func_0x00010c0607a0();
  func_0x00010c045140(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e16ac8; end: 106e16ff7; +[SCContextSessionParams _extractUnlockableSnapInfoFromOverlay:snapEditorLensIds:] */

void FUN_106e16ac8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  bool bVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126c0328;
  _objc_alloc_init();
  if (param_3 == (undefined *)0x0) {
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    _objc_retain(param_4);
    puVar8 = &uStack_2b0;
    puVar10 = param_4;
    func_0x00010bf52a60();
    if (puVar10 != (undefined *)0x0) {
      bVar12 = false;
      lVar14 = *plStack_2a0;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_2a0 != lVar14) {
            _objc_enumerationMutation(param_4);
          }
          lVar4 = *(long *)(lStack_2a8 + (long)puVar13 * 8);
          func_0x00010c0b4ca0();
          if (lVar4 != 0) {
            puVar9 = PTR_PTR_1126d24c8;
            _objc_alloc_init(PTR_PTR_1126d24c8);
            func_0x00010c21bbe0();
            puVar6 = puVar3;
            func_0x00010c098320(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar6);
            _objc_release(puVar9);
            bVar12 = true;
          }
          puVar13 = puVar13 + 1;
        } while (puVar10 != puVar13);
        puVar8 = &uStack_2b0;
        puVar10 = param_4;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined *)0x0);
      puVar10 = param_4;
      _objc_release(param_4);
      goto joined_r0x000106e16f88;
    }
    puVar10 = (undefined *)0x0;
    puVar13 = param_4;
  }
  else {
    puVar10 = param_3;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar10;
    func_0x00010bfc1320();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar13;
    func_0x00010c0b4ca0();
    _objc_release(puVar13);
    _objc_release(puVar10);
    if (puVar9 != (undefined *)0x0) {
      puVar10 = PTR_PTR_1126d2b80;
      _objc_alloc_init(PTR_PTR_1126d2b80);
      func_0x00010c21bbe0();
      puVar13 = puVar3;
      func_0x00010bfaec00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar13);
      _objc_release(puVar10);
    }
    puVar10 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar10;
    func_0x00010c0b4ca0();
    _objc_release(puVar10);
    if (puVar13 != (undefined *)0x0) {
      puVar10 = PTR_PTR_1126d24c8;
      _objc_alloc_init(PTR_PTR_1126d24c8);
      func_0x00010c21bbe0();
      puVar6 = puVar3;
      func_0x00010c098320(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar6);
      _objc_release(puVar10);
    }
    bVar12 = puVar13 != (undefined *)0x0 || puVar9 != (undefined *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    puVar10 = param_3;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar10;
    func_0x00010c27e6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = puVar13;
    func_0x00010bf52a60(puVar13,param_2,&uStack_230,auStack_f0,0x10);
    if (puVar10 != (undefined *)0x0) {
      lVar14 = *plStack_220;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_220 != lVar14) {
            _objc_enumerationMutation(puVar13);
          }
          lVar4 = *(long *)(lStack_228 + (long)puVar9 * 8);
          func_0x00010c0b4ca0();
          if (lVar4 != 0) {
            puVar6 = PTR_PTR_1126d24c8;
            _objc_alloc_init(PTR_PTR_1126d24c8);
            func_0x00010c21bbe0();
            puVar5 = puVar3;
            func_0x00010c098320(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar5);
            _objc_release(puVar6);
            bVar12 = true;
          }
          puVar9 = puVar9 + 1;
        } while (puVar10 != puVar9);
        puVar10 = puVar13;
        func_0x00010bf52a60(puVar13,param_2,&uStack_230,auStack_f0,0x10);
      } while (puVar10 != (undefined *)0x0);
    }
    _objc_release(puVar13);
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    puVar10 = param_3;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = &uStack_270;
    puVar13 = puVar10;
    func_0x00010bf52a60();
    if (puVar13 != (undefined *)0x0) {
      lVar14 = *plStack_260;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar14) {
            _objc_enumerationMutation(puVar10);
          }
          lVar11 = *(long *)(lStack_268 + (long)puVar9 * 8);
          lVar4 = lVar11;
          func_0x00010c2540c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar4 != 0) {
            puVar6 = PTR_PTR_1126d24d0;
            _objc_opt_new(PTR_PTR_1126d24d0);
            func_0x00010c2540c0(lVar11);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar11;
            func_0x00010c0b4ca0();
            func_0x00010c21bbe0(puVar6,param_2,lVar4);
            _objc_release(lVar11);
            puVar5 = puVar3;
            func_0x00010c255400(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar5);
            _objc_release(puVar6);
            bVar12 = true;
          }
          puVar9 = puVar9 + 1;
        } while (puVar13 != puVar9);
        puVar8 = &uStack_270;
        puVar13 = puVar10;
        func_0x00010bf52a60();
      } while (puVar13 != (undefined *)0x0);
    }
    _objc_release(puVar10);
joined_r0x000106e16f88:
    if (!bVar12) {
      puVar10 = (undefined *)0x0;
      goto LAB_106e16fa0;
    }
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205660(puVar3,param_2,puVar10);
    _objc_release(puVar10);
    func_0x00010c2056c0(puVar3,param_2,2);
    puVar13 = puVar3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined8 *)0x0;
    puVar10 = puVar13;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar13);
LAB_106e16fa0:
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar8);
    puVar7 = puVar8;
    func_0x00010c27e6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
    puVar1 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
    if (puVar7 != (undefined8 *)0x0) {
      puVar1 = puVar7;
    }
    _objc_retain(puVar1);
    _objc_release(puVar7);
    puVar7 = puVar8;
    func_0x00010bfc1340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    if (puVar7 != (undefined8 *)0x0) {
      puVar2 = puVar7;
    }
    _objc_retain(puVar2);
    _objc_release(puVar7);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(puVar2);
    puVar10 = puVar3;
    func_0x00010bf00560(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106e16ff8; end: 106e170df; +[SCContextSessionParams _previewLensIdsFromFilters:] */

void FUN_106e16ff8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c27e6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010bfc1340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf00560(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e170e0; end: 106e17a23; +[SCContextSessionParams _lensIdsFromCtItems:] */

/* WARNING: Possible PIC construction at 0x000106e17514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106e17754: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106e17518) */
/* WARNING: Removing unreachable block (ram,0x000106e17530) */
/* WARNING: Removing unreachable block (ram,0x000106e17548) */
/* WARNING: Removing unreachable block (ram,0x000106e17758) */

void FUN_106e170e0(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *puVar16;
  undefined *unaff_x24;
  undefined *unaff_x25;
  long lVar17;
  undefined *unaff_x26;
  undefined1 *puVar18;
  undefined **unaff_x27;
  undefined *unaff_x28;
  undefined8 ***pppuVar19;
  code *pcVar20;
  undefined8 uStack_5f0;
  long lStack_5e8;
  long *plStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_528;
  undefined *puStack_520;
  undefined **ppuStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 **ppuStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_480 [128];
  long lStack_400;
  undefined *puStack_3f0;
  undefined **ppuStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 **ppuStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_348 [128];
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined1 **ppuStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar3 = param_3;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    unaff_x26 = (undefined *)*puStack_120;
    unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(undefined **)(lStack_128 + (long)unaff_x28 * 8);
        func_0x00010c0840e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = unaff_x24;
        func_0x00010c096c60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        puVar4 = unaff_x22;
        func_0x00010bfd84e0();
        if ((int)puVar4 != 0) {
          unaff_x23 = unaff_x22;
          func_0x00010c08fb40();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = unaff_x23;
          func_0x00010bfe5ea0();
          _objc_release(unaff_x23);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          unaff_x24 = (undefined *)0x0;
          if (puVar5 != (undefined *)0x0) {
            unaff_x24 = unaff_x22;
            func_0x00010c08fb40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe5ea0();
            func_0x00010c0df7c0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = puVar4;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            _objc_release(unaff_x24);
            func_0x00010befa120(puVar15);
            _objc_release(unaff_x25);
            unaff_x23 = puVar4;
          }
        }
        _objc_release(unaff_x22);
        unaff_x28 = unaff_x28 + 1;
      } while (puVar3 != unaff_x28);
      puVar3 = param_3;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uStack_138 = 0x106e172e8;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    puStack_250 = (undefined8 *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    puVar4 = param_2;
    puStack_190 = unaff_x28;
    ppuStack_188 = unaff_x27;
    puStack_180 = unaff_x26;
    puStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    puStack_168 = unaff_x23;
    puStack_160 = unaff_x22;
    uStack_158 = unaff_x21;
    puStack_150 = puVar15;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010c0fd620();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_2;
    func_0x00010bf52a60();
    if (puVar15 != (undefined *)0x0) {
      unaff_x25 = (undefined *)*puStack_250;
      do {
        unaff_x26 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_250 != unaff_x25) {
            _objc_enumerationMutation(param_2);
          }
          unaff_x22 = *(undefined **)(lStack_258 + (long)unaff_x26 * 8);
          unaff_x23 = unaff_x22;
          func_0x00010c0fd0e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010c08fa60();
          _objc_release(unaff_x23);
          if (unaff_x24 != (undefined *)0x0) {
            unaff_x23 = *(undefined **)(puVar3 + 0x20);
            func_0x00010c0fd0e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(unaff_x23);
            _objc_release(unaff_x22);
          }
          unaff_x26 = unaff_x26 + 1;
        } while (puVar15 != unaff_x26);
        puVar15 = param_2;
        func_0x00010bf52a60();
        unaff_x21 = 0;
      } while (puVar15 != (undefined *)0x0);
    }
    puVar15 = param_2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      return;
    }
    ___stack_chk_fail();
    puVar1 = &uStack_390;
    puVar12 = &uStack_390;
    uStack_268 = 0x106e17440;
    lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    puStack_380 = (undefined8 *)0x0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    puVar5 = puVar4;
    puStack_2c0 = unaff_x28;
    ppuStack_2b8 = unaff_x27;
    puStack_2b0 = unaff_x26;
    puStack_2a8 = unaff_x25;
    puStack_2a0 = unaff_x24;
    puStack_298 = unaff_x23;
    puStack_290 = unaff_x22;
    uStack_288 = unaff_x21;
    puStack_280 = param_2;
    puStack_278 = puVar3;
    ppuStack_270 = &puStack_140;
    func_0x00010c293dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = auStack_348;
    puVar3 = puVar4;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      unaff_x25 = (undefined *)*puStack_380;
      do {
        unaff_x26 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_380 != unaff_x25) {
            _objc_enumerationMutation(puVar4);
          }
          unaff_x22 = *(undefined **)(lStack_388 + (long)unaff_x26 * 8);
          unaff_x23 = unaff_x22;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = unaff_x23;
          func_0x00010c08fa60();
          _objc_release(unaff_x23);
          if (puVar16 != (undefined *)0x0) {
            func_0x00010c2923e0();
            iVar2 = (int)unaff_x22;
            _objc_retainAutoreleasedReturnValue();
            pcVar20 = (code *)0x106e17518;
            pppuVar19 = (undefined8 ***)&ppuStack_270;
            goto code_r0x000109189420;
          }
          unaff_x26 = unaff_x26 + 1;
        } while (puVar3 != unaff_x26);
        puVar14 = auStack_348;
        puVar3 = puVar4;
        puVar12 = &uStack_390;
        func_0x00010bf52a60();
        unaff_x24 = (undefined *)0x0;
        unaff_x21 = 0;
      } while (puVar3 != (undefined *)0x0);
    }
    puVar3 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
      return;
    }
    ___stack_chk_fail();
    puVar1 = &uStack_4c0;
    puVar13 = &uStack_4c0;
    uStack_398 = 0x106e175bc;
    lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar5;
    puStack_3f0 = unaff_x28;
    ppuStack_3e8 = unaff_x27;
    puStack_3e0 = unaff_x26;
    puStack_3d8 = unaff_x25;
    puStack_3d0 = unaff_x24;
    puStack_3c8 = unaff_x23;
    puStack_3c0 = unaff_x22;
    uStack_3b8 = unaff_x21;
    puStack_3b0 = puVar4;
    puStack_3a8 = puVar15;
    ppuStack_3a0 = &ppuStack_270;
    _objc_retain(puVar5);
    puVar6 = puVar5;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf30500();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0ca860();
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar16 = (undefined *)0x0;
    puVar4 = (undefined *)puVar12;
    puVar15 = puVar5;
    if (puVar8 != (undefined *)0x0) {
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_488 = 0;
      uStack_490 = 0;
      lStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4a8 = 0;
      plStack_4b0 = (long *)0x0;
      puVar7 = puVar5;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar7;
      func_0x00010bf30500();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar16;
      func_0x00010c0ca840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar7);
      puVar14 = auStack_480;
      puVar4 = puVar6;
      func_0x00010bf52a60();
      if (puVar4 != (undefined *)0x0) {
        unaff_x27 = (undefined **)*plStack_4b0;
        do {
          unaff_x28 = (undefined *)0x0;
          do {
            if ((undefined **)*plStack_4b0 != unaff_x27) {
              _objc_enumerationMutation(puVar6);
            }
            puVar16 = *(undefined **)(lStack_4b8 + (long)unaff_x28 * 8);
            unaff_x24 = puVar16;
            func_0x00010bf96da0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x24;
            func_0x00010c290fa0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = unaff_x25;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(unaff_x25);
            _objc_release(unaff_x24);
            if (puVar7 != (undefined *)0x0) {
              func_0x00010bf96da0();
              iVar2 = (int)puVar16;
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c290fa0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              pcVar20 = (code *)0x106e17758;
              puVar4 = puVar3;
              pppuVar19 = &ppuStack_3a0;
              goto code_r0x000109189420;
            }
            unaff_x28 = unaff_x28 + 1;
          } while (puVar4 != unaff_x28);
          puVar14 = auStack_480;
          puVar4 = puVar6;
          puVar13 = &uStack_4c0;
          func_0x00010bf52a60();
          unaff_x26 = (undefined *)0x0;
          puVar7 = (undefined *)0x0;
        } while (puVar4 != (undefined *)0x0);
      }
      _objc_release(puVar6);
      puVar4 = (undefined *)puVar13;
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
      return;
    }
    ___stack_chk_fail();
    puVar1 = &uStack_5f0;
    uStack_4c8 = 0x106e17810;
    pppuVar19 = &ppuStack_4d0;
    lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_520 = unaff_x28;
    ppuStack_518 = unaff_x27;
    puStack_510 = unaff_x26;
    puStack_508 = unaff_x25;
    puStack_500 = unaff_x24;
    puStack_4f8 = puVar16;
    puStack_4f0 = puVar7;
    puStack_4e8 = puVar6;
    puStack_4e0 = puVar3;
    puStack_4d8 = puVar5;
    ppuStack_4d0 = &ppuStack_3a0;
    _objc_retain();
    _objc_retain(puVar4);
    _objc_retain(puVar14);
    ppuVar11 = &PTR___NSConcreteGlobalBlock_11097e8a0;
    func_0x000100504554(puVar9);
    puVar3 = PTR_PTR_1126ae740;
    func_0x00010bf09f00(PTR_PTR_1126ae740);
    _objc_retainAutoreleasedReturnValue();
    lStack_5e8 = 0;
    uStack_5f0 = 0;
    uStack_5d8 = 0;
    plStack_5e0 = (long *)0x0;
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    _objc_retain(puVar14);
    puVar10 = puVar14;
    func_0x00010bf52a60();
    iVar2 = (int)ppuVar11;
    if (puVar10 != (undefined1 *)0x0) {
      lVar17 = *plStack_5e0;
      do {
        puVar18 = (undefined1 *)0x0;
        do {
          if (*plStack_5e0 != lVar17) {
            _objc_enumerationMutation(puVar14);
          }
          func_0x00010c067ec0(*(undefined8 *)(lStack_5e8 + (long)puVar18 * 8));
          func_0x00010befc800(puVar3);
          puVar18 = puVar18 + 1;
        } while (puVar10 != puVar18);
        puVar10 = puVar14;
        func_0x00010bf52a60();
        iVar2 = (int)ppuVar11;
      } while (puVar10 != (undefined1 *)0x0);
    }
    _objc_release(puVar14);
    puVar5 = puVar9;
    func_0x00010c0d3c80(puVar9);
    puVar16 = puVar15;
    func_0x00010c27f9c0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c6a60();
    _objc_release(puVar16);
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010c0d3c80(puVar4);
    puVar16 = puVar15;
    func_0x00010c27f9c0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c6a80();
    _objc_release(puVar16);
    _objc_release(puVar5);
    puVar5 = puVar15;
    func_0x00010c27f9c0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c6960();
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar9);
    _objc_release(puVar14);
    _objc_release(puVar4);
    _objc_release(puVar15);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
      return;
    }
    pcVar20 = FUN_106e17a24;
    ___stack_chk_fail();
code_r0x000109189420:
    *(undefined **)((long)puVar1 + -0x20) = puVar4;
    *(undefined **)((long)puVar1 + -0x18) = puVar15;
    *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar19;
    *(code **)((long)puVar1 + -8) = pcVar20;
    func_0x000107c3094c();
    if (iVar2 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar15 = PTR_PTR_1126afad0;
      _objc_alloc_init(PTR_PTR_1126afad0);
      func_0x00010c1a85a0();
      func_0x00010c1c0fe0(puVar15);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 106e17a24; end: 106e17a2b;  */

void FUN_106e17a24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c3094c(param_2,auStack_28,auStack_30);
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e17a2c; end: 106e18167;  */

void FUN_106e17a2c(undefined *param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    lVar2 = param_2;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_2);
        }
        uVar11 = *(undefined8 *)(lVar10 * 8);
        puVar13 = PTR_PTR_1126d2b88;
        _objc_opt_new(PTR_PTR_1126d2b88);
        puVar3 = PTR_PTR_1126d2b90;
        _objc_opt_new(PTR_PTR_1126d2b90);
        func_0x00010c217900(puVar13);
        _objc_release(puVar3);
        uVar9 = uVar11;
        func_0x00010c275280(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar9;
        func_0x000109189420();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar13;
        func_0x00010c275640(puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2177e0();
        _objc_release(puVar3);
        _objc_release(uVar8);
        _objc_release(uVar9);
        func_0x00010bf85d80(uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar13;
        func_0x00010c275640(puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20ba20();
        _objc_release(puVar3);
        _objc_release(uVar11);
        func_0x00010befa120(puVar1);
        _objc_release(puVar13);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar13 = param_1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16afc0();
    _objc_release(puVar13);
    _objc_release(puVar1);
  }
  puVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010bf0cb20();
  if (puVar13 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = puVar1;
    func_0x00010bf0cb00();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_4;
  func_0x000108e227f4();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf529e0();
  if (((lVar4 != 0) || (lVar4 = param_2, func_0x00010bf529e0(), lVar4 != 0)) ||
     (lVar4 = lVar2, func_0x00010bf529e0(), lVar4 != 0)) {
    puVar3 = param_1;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfdee00();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    if (puVar5 == (undefined *)0x0) {
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_alloc();
      puVar5 = param_1;
      func_0x00010c27f9c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar5;
      func_0x00010bfdede0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff4000();
      _objc_release(puVar12);
      _objc_release(puVar5);
    }
    _objc_retain(puVar13);
    puVar5 = puVar13;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar13);
        }
        uVar11 = *(undefined8 *)((long)puVar12 * 8);
        puVar6 = PTR_PTR_1126d2b98;
        func_0x00010c0cb140(PTR_PTR_1126d2b98);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c275640(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar11;
        func_0x00010c255120();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar9;
        FUN_106e18168();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(uVar11);
        func_0x00010c216240(puVar6);
        func_0x00010c206c40(puVar6);
        func_0x00010befa120(puVar3);
        _objc_release(uVar8);
        _objc_release(puVar6);
        puVar12 = puVar12 + 1;
      } while (puVar5 != puVar12);
      puVar5 = puVar13;
      func_0x00010bf52a60();
    }
    _objc_release(puVar13);
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(undefined8 *)(lVar14 * 8);
        puVar5 = PTR_PTR_1126d2b98;
        func_0x00010c0cb140(PTR_PTR_1126d2b98);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfdedc0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        FUN_106e18168();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        func_0x00010c216240(puVar5);
        func_0x00010c247520();
        func_0x00010c206c40(puVar5);
        func_0x00010befa120(puVar3);
        _objc_release(uVar9);
        _objc_release(puVar5);
        lVar14 = lVar14 + 1;
      } while (lVar4 != lVar14);
      lVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    _objc_retain(lVar2);
    lVar4 = lVar2;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(lVar2);
        }
        uVar9 = *(undefined8 *)(lVar14 * 8);
        puVar5 = PTR_PTR_1126d2b98;
        func_0x00010c0cb140(PTR_PTR_1126d2b98);
        _objc_retainAutoreleasedReturnValue();
        FUN_106e18168(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c216240(puVar5);
        func_0x00010c206c40(puVar5);
        func_0x00010befa120(puVar3);
        _objc_release(uVar9);
        _objc_release(puVar5);
        lVar14 = lVar14 + 1;
      } while (lVar4 != lVar14);
      lVar4 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
    puVar5 = puVar3;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    func_0x00010c0d3c80();
    puVar6 = param_1;
    func_0x00010c27f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7580();
    _objc_release(puVar6);
    _objc_release(puVar12);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(puVar13);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar13 = param_1;
  func_0x00010bf35920();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = param_1;
  if ((int)puVar13 == 0x23) {
    puVar1 = param_1;
    func_0x00010c0b5ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e18168; end: 106e18217;  */

void FUN_106e18168(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf35920(param_1,param_2,0);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = param_1;
  if ((int)puVar1 == 0x23) {
    puVar3 = param_1;
    func_0x00010c0b5ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e28078);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e18218; end: 106e185eb;  */

void FUN_106e18218(undefined *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_1c8 [24];
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar9 = param_2;
  func_0x000109189420();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000109189420();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 == 0) || (lVar11 = param_4, func_0x00010c08fa60(), lVar11 == 0)) {
      lVar11 = 0;
    }
    else {
      puVar2 = PTR_PTR_1126d2ba0;
      _objc_opt_new();
      lStack_160 = lVar9;
      func_0x00010c20d1a0();
      lStack_168 = lVar1;
      func_0x00010c1aeb00(puVar2);
      lStack_150 = param_4;
      func_0x00010c20d540(puVar2);
      uStack_158 = param_5;
      func_0x00010b769af0(param_5);
      func_0x00010c20ddc0(puVar2);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_170 = puVar2;
      puStack_78 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c0d3c80();
      puVar8 = param_1;
      func_0x00010c27f9c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20d380();
      _objc_release(puVar8);
      _objc_release(puVar2);
      _objc_release(puVar3);
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      puStack_148 = param_1;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010bf5ccc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      if (puVar3 != (undefined *)0x0) {
        lVar9 = *plStack_130;
        do {
          puVar8 = (undefined *)0x0;
          do {
            if (*plStack_130 != lVar9) {
              _objc_enumerationMutation(puVar2);
            }
            uVar10 = *(undefined8 *)(lStack_138 + (long)puVar8 * 8);
            uVar4 = uVar10;
            func_0x00010c0cc0c0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010bfedf20();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010bfedf40();
            _objc_release(uVar5);
            _objc_release(uVar4);
            if ((int)uVar6 == 8) {
              uVar4 = uVar10;
              func_0x00010c0cc0c0(uVar10);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010bfedf20();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x00010c259fc0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c20d1a0();
              _objc_release(uVar6);
              _objc_release(uVar5);
              _objc_release(uVar4);
              func_0x00010c0cc0c0(uVar10);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar10;
              func_0x00010bfedf20();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010c259fc0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1aeb00();
              _objc_release(uVar5);
              _objc_release(uVar4);
              _objc_release(uVar10);
            }
            puVar8 = puVar8 + 1;
          } while (puVar3 != puVar8);
          puVar3 = puVar2;
          func_0x00010bf52a60();
        } while (puVar3 != (undefined *)0x0);
      }
      _objc_release(puVar2);
      lVar9 = param_3;
      func_0x00010bf64920(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010bdc2560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(puStack_170);
      param_1 = puStack_148;
      param_4 = lStack_150;
      param_5 = uStack_158;
      lVar9 = lStack_160;
      lVar1 = lStack_168;
    }
    _objc_release(lVar1);
  }
  _objc_release(lVar9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar2 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
    return;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_106e185ec;
  lStack_1b0 = lVar9;
  uStack_1a8 = param_5;
  lStack_1a0 = param_4;
  lStack_198 = param_3;
  lStack_190 = param_2;
  puStack_188 = param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(lVar7);
  if (lVar7 == 0) {
    puVar3 = puVar2;
    func_0x00010c27f9c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca400();
  }
  else {
    puVar3 = PTR_PTR_1126bfac0;
    _objc_opt_new(PTR_PTR_1126bfac0);
    func_0x00010c277e80(lVar7);
    func_0x00010c218f80(puVar3);
    func_0x00010bf0ffa0(auStack_1c8,lVar7);
    _CMTimeGetSeconds(auStack_1c8);
    func_0x00010c209700(puVar3);
    lVar9 = lVar7;
    func_0x00010bf93480();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010c08fa60();
    _objc_release(lVar9);
    if (lVar11 != 0) {
      puVar8 = PTR_PTR_1126b25f8;
      _objc_alloc(PTR_PTR_1126b25f8);
      lVar9 = lVar7;
      func_0x00010bf93480(lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360(puVar8);
      func_0x00010c182620(puVar3);
      _objc_release(puVar8);
      _objc_release(lVar9);
    }
    puVar8 = puVar2;
    func_0x00010c27f9c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca400();
    _objc_release(puVar8);
  }
  _objc_release(puVar3);
  _objc_release(lVar7);
  _objc_release(puVar2);
  return;
}



/* Entry: 106e185ec; end: 106e1874b;  */

void FUN_106e185ec(undefined *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_58 [24];
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    puVar4 = param_1;
    func_0x00010c27f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca400();
  }
  else {
    puVar4 = PTR_PTR_1126bfac0;
    _objc_opt_new(PTR_PTR_1126bfac0);
    func_0x00010c277e80(param_2);
    func_0x00010c218f80(puVar4);
    func_0x00010bf0ffa0(auStack_58,param_2);
    _CMTimeGetSeconds(auStack_58);
    func_0x00010c209700(puVar4);
    lVar1 = param_2;
    func_0x00010bf93480();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126b25f8;
      _objc_alloc(PTR_PTR_1126b25f8);
      lVar1 = param_2;
      func_0x00010bf93480(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360(puVar3);
      func_0x00010c182620(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar1);
    }
    puVar3 = param_1;
    func_0x00010c27f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca400();
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 106e1874c; end: 106e1890f;  */

void FUN_106e1874c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf3f880();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000109189420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    uVar5 = param_1;
    func_0x00010c27f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1ee0();
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126d2ba8;
    _objc_opt_new();
    func_0x00010c1a99c0();
    lVar1 = param_2;
    func_0x00010bf3f8c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fece0(puVar3);
    _objc_release(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c0d3c80();
    uVar5 = param_1;
    func_0x00010c27f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169d40();
    _objc_release(uVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126d2b78;
  _objc_retain(lVar7);
  _objc_retain(param_1);
  _objc_opt_new(puVar3);
  lVar1 = lVar7;
  func_0x00010bf05300(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0440(puVar3);
  _objc_release(lVar1);
  lVar1 = lVar7;
  func_0x00010bf05ba0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e52c0(puVar3);
  _objc_release(lVar1);
  lVar1 = lVar7;
  func_0x00010bf0d6a0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x00010c16b3a0(puVar3);
  _objc_release(lVar1);
  uVar5 = param_1;
  func_0x00010c27f9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c204aa0(uVar5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106e18910; end: 106e18a0f;  */

void FUN_106e18910(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d2b78;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010bf05300(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0440(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf05ba0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e52c0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf0d6a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c16b3a0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c27f9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c204aa0(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e18a10; end: 106e18ae7;  */

void FUN_106e18a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d2bb0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  func_0x00010c191ba0();
  _objc_release(param_2);
  func_0x00010c191b80(puVar1);
  _objc_release(param_3);
  func_0x00010c1bbd60(puVar1);
  _objc_release(param_4);
  uVar2 = param_1;
  func_0x00010c27f9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c191d00(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e18ae8; end: 106e18b77;  */

void FUN_106e18ae8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11097e8c0);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c27f9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf5ccc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e18b78; end: 106e18b7f;  */

void FUN_106e18b78(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010bfc0860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b0cc0;
    _objc_alloc_init(PTR_PTR_1126b0cc0);
    puVar3 = PTR_PTR_1126b37e0;
    _objc_alloc_init(PTR_PTR_1126b37e0);
    puVar4 = PTR_PTR_1126dc180;
    _objc_alloc_init(PTR_PTR_1126dc180);
    lVar1 = param_2;
    func_0x00010bfc0860(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2740(puVar4);
    _objc_release(lVar1);
    func_0x00010c178980(puVar3);
    func_0x00010c1c73c0(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106e18b80; end: 106e18bfb;  */

void FUN_106e18b80(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d2bb8;
  _objc_retain();
  _objc_opt_new(puVar1);
  func_0x00010c1a2580();
  uVar2 = param_1;
  func_0x00010c27f9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1a2560(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e18bfc; end: 106e18cc7;  */

void FUN_106e18bfc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c129980();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d2bc0;
    _objc_opt_new(PTR_PTR_1126d2bc0);
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c21e300(puVar3);
  puVar1 = param_1;
  func_0x00010c27f9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1ea0e0(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106e18cc8; end: 106e19a77;  */

void FUN_106e18cc8(ulong param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  ulong uVar25;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010c269920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8d2c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar25 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(uVar3);
      }
      lVar4 = *(long *)(uVar25 * 8);
      func_0x00010beedca0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      FUN_106e19a78();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar5 != 0) {
        func_0x00010befa120(puVar1);
      }
      _objc_release(lVar5);
      uVar25 = uVar25 + 1;
    } while (uVar2 != uVar25);
    uVar2 = uVar3;
    func_0x00010bf52a60();
  }
  _objc_release(uVar3);
  dVar32 = 0.0;
  lVar4 = param_2;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar22 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar4);
      }
      lVar28 = *(long *)(lVar22 * 8);
      _objc_retain(param_1);
      _objc_retain(lVar28);
      _objc_retain(param_2);
      _objc_retain(param_4);
      lVar29 = param_4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar29;
      func_0x00010c06f740();
      _objc_release(lVar29);
      if ((int)lVar26 == 0) {
        puVar27 = (undefined *)0x0;
      }
      else {
        lVar29 = param_4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar26 = param_2;
        func_0x00010bfaebe0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar26;
        func_0x00010bfedce0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar29;
        func_0x00010bf5cd00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        _objc_release(lVar26);
        _objc_release(lVar29);
        if (lVar8 == 0) {
          puVar27 = (undefined *)0x0;
        }
        else {
          lVar29 = param_4;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar26 = lVar29;
          func_0x00010c269860();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar29);
          lVar29 = lVar8;
          if (lVar26 == 0) {
            dVar32 = 0.0;
            uVar2 = param_1;
            func_0x00010bf5ccc0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010bf52a60();
            lVar7 = lRam0000000000000000;
            if (uVar3 == 0) {
              lVar26 = 0;
            }
            else {
              do {
                uVar25 = 0;
                do {
                  if (lRam0000000000000000 != lVar7) {
                    _objc_enumerationMutation(uVar2);
                  }
                  lVar29 = *(long *)(uVar25 * 8);
                  _objc_retain(lVar29);
                  _objc_retain(lVar8);
                  lVar26 = lVar29;
                  func_0x00010c0840e0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar26;
                  func_0x00010bf96da0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar10 = lVar9;
                  func_0x00010bf96ee0();
                  lVar11 = lVar8;
                  func_0x00010c0840e0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar12 = lVar11;
                  func_0x00010bf96da0();
                  _objc_retainAutoreleasedReturnValue();
                  lVar13 = lVar12;
                  func_0x00010bf96ee0();
                  if ((int)lVar10 == (int)lVar13) {
                    lVar10 = lVar29;
                    func_0x00010c0cc0c0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar13 = lVar10;
                    func_0x00010c0cc820();
                    lVar14 = lVar8;
                    func_0x00010c0cc0c0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar15 = lVar14;
                    func_0x00010c0cc820();
                    if ((int)lVar13 != (int)lVar15) {
                      _objc_release(lVar14);
                      _objc_release(lVar10);
                      goto LAB_106e191f4;
                    }
                    lVar13 = lVar29;
                    func_0x00010c0cc0c0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar15 = lVar13;
                    func_0x00010bfedf20();
                    _objc_retainAutoreleasedReturnValue();
                    lVar16 = lVar15;
                    func_0x00010bfedf40();
                    lVar17 = lVar8;
                    func_0x00010c0cc0c0();
                    _objc_retainAutoreleasedReturnValue();
                    lVar18 = lVar17;
                    func_0x00010bfedf20();
                    _objc_retainAutoreleasedReturnValue();
                    lVar19 = lVar18;
                    func_0x00010bfedf40();
                    _objc_release(lVar18);
                    _objc_release(lVar17);
                    _objc_release(lVar15);
                    _objc_release(lVar13);
                    _objc_release(lVar14);
                    _objc_release(lVar10);
                    _objc_release(lVar12);
                    _objc_release(lVar11);
                    _objc_release(lVar9);
                    _objc_release(lVar26);
                    _objc_release(lVar8);
                    _objc_release(lVar29);
                    if ((int)lVar16 == (int)lVar19) {
                      lVar9 = param_4;
                      func_0x00010c269d40();
                      _objc_retainAutoreleasedReturnValue();
                      lVar26 = lVar9;
                      func_0x00010c269860();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(lVar9);
                      if (lVar26 != 0) {
                        _objc_retain(lVar29);
                        _objc_release(lVar8);
                        goto LAB_106e19290;
                      }
                    }
                  }
                  else {
LAB_106e191f4:
                    _objc_release(lVar12);
                    _objc_release(lVar11);
                    _objc_release(lVar9);
                    _objc_release(lVar26);
                    _objc_release(lVar8);
                    _objc_release(lVar29);
                  }
                  uVar25 = uVar25 + 1;
                } while (uVar3 != uVar25);
                uVar3 = uVar2;
                func_0x00010bf52a60();
              } while (uVar3 != 0);
              lVar26 = 0;
              lVar29 = lVar8;
            }
LAB_106e19290:
            _objc_release(uVar2);
          }
          uVar2 = param_1;
          func_0x00010bf5ccc0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bf4b900();
          _objc_release(uVar2);
          if ((uVar3 & 1) == 0) {
            uVar2 = param_1;
            func_0x00010bf5ccc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(uVar2);
          }
          if (lVar26 == 0) {
            puVar27 = (undefined *)0x0;
          }
          else {
            puVar27 = PTR_PTR_1126d2bc8;
            func_0x00010c0cb140();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c161620();
            lVar7 = param_4;
            func_0x00010c269d40(param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c269900();
            func_0x00010c21acc0(puVar27);
            _objc_release(lVar7);
            _objc_retain(lVar28);
            lVar7 = lVar28;
            func_0x00010c128360(lVar28);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            dVar33 = dVar32;
            _objc_release(lVar7);
            lVar7 = lVar28;
            func_0x00010c1280e0(lVar28);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb2c80();
            dVar31 = dVar33;
            _objc_release(lVar7);
            lVar7 = lVar28;
            func_0x00010c14e120();
            _objc_retainAutoreleasedReturnValue();
            if (lVar7 == 0) {
              dVar34 = 1.0;
            }
            else {
              lVar8 = lVar28;
              func_0x00010c14e120(lVar28);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              dVar34 = (double)SUB84(dVar31,0);
              _objc_release(lVar8);
            }
            _objc_release(lVar7);
            puVar24 = (undefined *)0x0;
            dVar32 = dVar34 * (double)SUB84(dVar32,0);
            if (0.0 < dVar32) {
              dVar31 = (double)SUB84(dVar33,0);
              dVar34 = dVar34 * dVar31;
              if (0.0 < dVar34) {
                puVar24 = PTR_PTR_1126d2bd0;
                func_0x00010c0cb140(PTR_PTR_1126d2bd0);
                fVar30 = SUB84(dVar31,0);
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar28;
                func_0x00010c104260(lVar28);
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar7;
                func_0x00010c2be880();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfb2c80();
                dVar33 = (double)fVar30;
                puVar20 = puVar24;
                func_0x00010bf345e0(puVar24);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c227500(dVar33);
                fVar30 = SUB84(dVar33,0);
                _objc_release(puVar20);
                _objc_release(lVar8);
                _objc_release(lVar7);
                lVar7 = lVar28;
                func_0x00010c104260(lVar28);
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar7;
                func_0x00010c2beba0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfb2c80();
                puVar20 = puVar24;
                func_0x00010bf345e0(puVar24);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c2276e0((double)fVar30);
                _objc_release(puVar20);
                _objc_release(lVar8);
                _objc_release(lVar7);
                puVar20 = puVar24;
                func_0x00010c23d0a0(puVar24);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c2256c0(dVar32);
                _objc_release(puVar20);
                puVar20 = puVar24;
                func_0x00010c23d0a0(puVar24);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1a7d00();
                fVar30 = SUB84(dVar34,0);
                _objc_release(puVar20);
                lVar7 = lVar28;
                func_0x00010c141a80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfb2c80();
                dVar31 = (double)fVar30;
                func_0x00010c1ee7a0(puVar24);
                _objc_release(lVar7);
              }
            }
            _objc_release(lVar28);
            func_0x00010c1695c0(puVar27);
            _objc_release(puVar24);
            dVar32 = dVar31;
          }
          _objc_release(lVar26);
          _objc_release(lVar29);
        }
      }
      _objc_release(param_4);
      _objc_release(param_2);
      _objc_release(lVar28);
      _objc_release(param_1);
      if (puVar27 != (undefined *)0x0) {
        puVar24 = puVar27;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar24;
        FUN_106e19a78();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar24);
        if (puVar20 == (undefined *)0x0) {
LAB_106e19614:
          func_0x00010befa120(puVar23);
        }
        else {
          puVar24 = puVar1;
          func_0x00010bf4b900();
          if (((ulong)puVar24 & 1) == 0) {
            func_0x00010befa120(puVar1);
            goto LAB_106e19614;
          }
        }
        _objc_release(puVar20);
      }
      _objc_release(puVar27);
      lVar22 = lVar22 + 1;
    } while (lVar22 != lVar6);
    lVar6 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c23f480();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar22 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar4);
      }
      lVar26 = *(long *)(lVar22 * 8);
      func_0x00010c2a2e80();
      _objc_retainAutoreleasedReturnValue();
      lVar29 = lVar26;
      func_0x00010c2a2ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar26);
      lVar26 = lVar29;
      func_0x00010c08fa60();
      if (lVar26 != 0) {
        puVar27 = PTR_PTR_1126ba918;
        func_0x00010c0cb140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c179660();
        func_0x00010c1b6b40(puVar27);
        puVar24 = puVar27;
        FUN_106e19a78();
        _objc_retainAutoreleasedReturnValue();
        if (puVar24 == (undefined *)0x0) {
LAB_106e19760:
          puVar20 = PTR_PTR_1126d2bc8;
          func_0x00010c0cb140(PTR_PTR_1126d2bc8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c161620();
          func_0x00010befa120(puVar23);
          _objc_release(puVar20);
        }
        else {
          puVar20 = puVar1;
          func_0x00010bf4b900();
          if (((ulong)puVar20 & 1) == 0) {
            func_0x00010befa120(puVar1);
            goto LAB_106e19760;
          }
        }
        _objc_release(puVar24);
        _objc_release(puVar27);
      }
      _objc_release(lVar29);
      lVar22 = lVar22 + 1;
    } while (lVar6 != lVar22);
    lVar6 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  do {
    if (lVar6 == 0) {
      _objc_release(param_3);
      puVar27 = puVar23;
      func_0x00010bf529e0();
      if (puVar27 != (undefined *)0x0) {
        uVar2 = param_1;
        func_0x00010bfdd280();
        if ((uVar2 & 1) == 0) {
          puVar27 = PTR_PTR_1126cae88;
          func_0x00010c0cb140(PTR_PTR_1126cae88);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c212080(param_1);
          _objc_release(puVar27);
        }
        uVar2 = param_1;
        func_0x00010c269920();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf8d2c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160();
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
      _objc_release(puVar1);
      _objc_release(puVar23);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
        return;
      }
      ___stack_chk_fail();
      _objc_retain();
      uVar2 = param_1;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c08fa60();
      _objc_release(uVar2);
      puVar23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (uVar3 == 0) {
        puVar23 = (undefined *)0x0;
      }
      else {
        func_0x00010bf31ca0();
        uVar2 = param_1;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar23);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
      }
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
      return;
    }
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_3);
      }
      lVar28 = *(long *)(lVar4 * 8);
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar28;
      func_0x00010bfedf20();
      _objc_retainAutoreleasedReturnValue();
      lVar29 = lVar22;
      func_0x00010bfa0a60();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar29;
      func_0x00010bf68960();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar29);
      _objc_release(lVar22);
      _objc_release(lVar28);
      lVar22 = lVar26;
      func_0x00010c08fa60();
      if (lVar22 != 0) {
        puVar27 = PTR_PTR_1126ba918;
        func_0x00010c0cb140();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c179660();
        func_0x00010c1b6b40(puVar27);
        puVar24 = puVar27;
        FUN_106e19a78();
        _objc_retainAutoreleasedReturnValue();
        if (puVar24 == (undefined *)0x0) {
LAB_106e198fc:
          puVar20 = PTR_PTR_1126d2bc8;
          func_0x00010c0cb140(PTR_PTR_1126d2bc8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c161620();
          func_0x00010befa120(puVar23);
          _objc_release(puVar20);
        }
        else {
          puVar20 = puVar1;
          func_0x00010bf4b900();
          if (((ulong)puVar20 & 1) == 0) {
            func_0x00010befa120(puVar1);
            goto LAB_106e198fc;
          }
        }
        _objc_release(puVar24);
        _objc_release(puVar27);
      }
      _objc_release(lVar26);
      lVar4 = lVar4 + 1;
    } while (lVar6 != lVar4);
    lVar6 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106e19a78; end: 106e19bbb;  */

void FUN_106e19a78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010bf31ca0();
    lVar1 = param_1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e48c38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e19bbc; end: 106e19c5f; -[SCLensProcessingPersistentStoreManagerAdapter initWithSessionPersistentStore:lensCommandMetadata:] */

undefined1 *
FUN_106e19bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6fe8;
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



/* Entry: 106e19c60; end: 106e19d37; -[SCLensProcessingPersistentStoreManagerAdapter restoreLensSerializedState:] */

void FUN_106e19c60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c15ea40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fdc00(uVar3,param_2,lVar2,lVar1);
    _objc_release(lVar2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar2 = param_3;
    func_0x00010c15ea40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2872e0(uVar3,param_2,lVar2,lVar1);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e19d38; end: 106e19eb3; -[SCLensProcessingPersistentStoreManagerAdapter serializedStateForLensIDs:] */

void FUN_106e19d38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      puVar6 = (undefined *)0x0;
LAB_106e19e64:
      _objc_release(param_3);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
        return;
      }
      ___stack_chk_fail();
      _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
      return;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar3 = *(long *)(param_1 + 8);
      func_0x00010bfe6360();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0fa320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        puVar6 = PTR_PTR_1126b3850;
        _objc_alloc_init();
        func_0x00010c1bbd60();
        func_0x00010c1fd060(puVar6);
        _objc_release(lVar4);
        goto LAB_106e19e64;
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106e19eb4; end: 106e19ee3; -[SCLensProcessingPersistentStoreManagerAdapter .cxx_destruct] */

void FUN_106e19eb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e19ee4; end: 106e19f63; -[SCMutableImageProcessLensCommandMetadata init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106e19ee4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6ff0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithLensPersistentStoreData__112535240,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_11275f05c) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275f060);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275f060) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275f064);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275f064) = 0;
    _objc_release(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106e19f64; end: 106e19ff3; -[SCMutableImageProcessLensCommandMetadata updateLensPersistentStoreData:forLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e19f64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = (long)_DAT_11275f05c;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f064);
  *(undefined8 *)(param_1 + _DAT_11275f064) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f060);
  *(undefined8 *)(param_1 + _DAT_11275f060) = param_4;
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar2);
  return;
}



/* Entry: 106e19ff4; end: 106e1a047; -[SCMutableImageProcessLensCommandMetadata lensPersistentStoreData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e19ff4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275f05c;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f064);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e1a048; end: 106e1a09b; -[SCMutableImageProcessLensCommandMetadata lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1a048(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275f05c;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f060);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e1a09c; end: 106e1a0db; -[SCMutableImageProcessLensCommandMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1a09c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275f060,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f064,0);
  return;
}



/* Entry: 106e1a0dc; end: 106e1a227; -[SCPreviewFeatureUcoInMemoriesImpl initWithUcoDataFetcher:lensAssetContainer:imageProcessCommandsObservable:persistentStoreManager:lensCommandMetadata:] */

undefined8 *
FUN_106e1a0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_50 = PTR_PTR_1126f6ff8;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar3 = auStack_48;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 4,puVar3);
    _objc_release(puVar3);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e1a228; end: 106e1a31b; -[SCPreviewFeatureUcoInMemoriesImpl initWithUcoDataFetcher:lensAssetContainer:imageProcessCommandsObservable:] */

undefined8 *
FUN_106e1a228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_4);
  _objc_retain(param_5);
  puStack_40 = PTR_PTR_1126f6ff8;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar3 = auStack_38;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 4,puVar3);
    _objc_release(puVar3);
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  _objc_release(param_5);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e1a31c; end: 106e1a37b; -[SCPreviewFeatureUcoInMemoriesImpl genericAssetFromVideoData:] */

void FUN_106e1a31c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c4d00;
    _objc_alloc(PTR_PTR_1126c4d00);
    func_0x00010bff4360();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e1a37c; end: 106e1a3ff; -[SCPreviewFeatureUcoInMemoriesImpl genericAssetFromOriginalImage:] */

void FUN_106e1a37c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010bfe9820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x000108eb5cc8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c4d00;
    _objc_alloc(PTR_PTR_1126c4d00);
    func_0x00010bff4360();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e1a400; end: 106e1a43f; -[SCPreviewFeatureUcoInMemoriesImpl snapOverlayContainsUco:] */

bool FUN_106e1a400(long param_1)

{
  long lVar1;
  
  func_0x00010c2423c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 106e1a440; end: 106e1a7b7; -[SCPreviewFeatureUcoInMemoriesImpl snapOverlayUcoFilterIds:] */

void FUN_106e1a440(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar10 = &uStack_1f0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar13 = *plStack_1a0;
    do {
      lVar14 = 0;
      do {
        if (*plStack_1a0 != lVar13) {
          _objc_enumerationMutation(lVar2);
        }
        lVar12 = *(long *)(lStack_1a8 + lVar14 * 8);
        lVar15 = lVar12;
        func_0x00010bfe5e40();
        _objc_retainAutoreleasedReturnValue();
        if (lVar15 != 0) {
          func_0x00010c1d0640(puVar3,param_2,lVar12,lVar15);
        }
        _objc_release(lVar15);
        lVar14 = lVar14 + 1;
      } while (lVar1 != lVar14);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar1 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar1;
  func_0x00010bfc1340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(lVar13);
  puVar9 = auStack_170;
  uVar11 = 0x10;
  lVar1 = lVar13;
  func_0x00010bf52a60(lVar13,param_2,&uStack_1f0,puVar9,0x10);
  if (lVar1 != 0) {
    lVar14 = *plStack_1e0;
    do {
      lVar15 = 0;
      do {
        if (*plStack_1e0 != lVar14) {
          _objc_enumerationMutation(lVar13);
        }
        uVar11 = *(undefined8 *)(lStack_1e8 + lVar15 * 8);
        puVar5 = puVar3;
        func_0x00010c0e00e0(puVar3,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c081f60();
        if ((int)puVar6 != 0) {
          func_0x00010befa120(puVar4,param_2,uVar11);
        }
        _objc_release(puVar5);
        lVar15 = lVar15 + 1;
      } while (lVar1 != lVar15);
      puVar9 = auStack_170;
      uVar11 = 0x10;
      lVar1 = lVar13;
      puVar10 = &uStack_1f0;
      func_0x00010bf52a60(lVar13,param_2,&uStack_1f0,puVar9,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar13);
  lVar1 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x00010c27e6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf529e0();
  _objc_release(lVar14);
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar6 = puVar4;
  if (lVar15 != 0) {
    lVar1 = param_3;
    func_0x00010bfaebe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1;
    func_0x00010c27e6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar5,param_2,lVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    _objc_release(lVar1);
    puVar7 = puVar5;
    puVar10 = (undefined8 *)puVar4;
    func_0x00010c174be0(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar8;
    func_0x00010c0d3c80();
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  _objc_release(lVar13);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  _objc_retain(uVar11);
  _objc_retain(puVar10);
  func_0x00010c0c5d00(puVar9,param_2,9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be15ca0(param_3,param_2,puVar10,puVar9,uVar11,param_6);
  _objc_release(param_6);
  _objc_release(uVar11);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 106e1a7b8; end: 106e1a857; -[SCPreviewFeatureUcoInMemoriesImpl restoreUcoGallerySnapWithUcoAppliedImageContainer:overlayFormat:ucoFilterIds:performer:] */

void FUN_106e1a7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0c5d00(param_4,param_2,9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be15ca0(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106e1a858; end: 106e1a9f3; -[SCPreviewFeatureUcoInMemoriesImpl restoreUcoGallerySnapWithUcoAppliedImageContainer:gallerySnap:ucoRawMediaCloudFile:ucoLensAssetCloudFile:encryptedContentManager:ucoFilterIds:performer:] */

void FUN_106e1a858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if ((param_5 != 0) && (lVar1 = param_5, func_0x00010c06cde0(), (int)lVar1 != 0)) {
    lVar1 = param_5;
    func_0x00010bfaca60(param_5,param_2,&PTR____CFConstantStringClassReference_110f72758);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    func_0x00010bfad280(param_5,param_2,&PTR____CFConstantStringClassReference_110f72758);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf93dc0(lVar1);
    uVar4 = param_1;
    func_0x00010be370c0(param_1,param_2,param_5,&PTR____CFConstantStringClassReference_110f72758,
                        lVar3,param_4,lVar2,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be919e0(param_1,param_2,param_3,param_7,param_4,param_6);
    func_0x00010be15ca0(param_1,param_2,param_3,uVar4,param_8,param_9);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uVar4);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e1a9f4; end: 106e1acdb; -[SCPreviewFeatureUcoInMemoriesImpl restoreUcoGallerySnapWithUcoAppliedVideoContainer:gallerySnap:ucoRawMediaCloudFile:ucoLensAssetCloudFile:contentDataProvider:ucoFilterIds:performer:timelineConfigurationUpdateHandler:] */

void FUN_106e1a9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = param_8;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d2648;
    _objc_alloc();
    func_0x00010c046e40();
    uVar3 = param_3;
    func_0x00010c29ae80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221d20(param_3,param_2,0);
    puVar4 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    puVar5 = puVar4;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e8f00(param_3,param_2,puVar5);
    _objc_release(puVar5);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_106e1acdc;
    puStack_c8 = &UNK_11097e8e0;
    uStack_c0 = uVar3;
    puStack_b8 = puVar2;
    uStack_b0 = param_1;
    _objc_retain(param_3);
    uStack_a8 = param_3;
    _objc_retain(param_7);
    uStack_a0 = param_7;
    _objc_retain(param_4);
    uStack_98 = param_4;
    _objc_retain(param_6);
    uStack_90 = param_6;
    _objc_retain(param_10);
    uStack_80 = param_10;
    puStack_88 = puVar4;
    _objc_retain(puVar4);
    _objc_retain(puVar2);
    _objc_retain(uVar3);
    ppuVar6 = &puStack_e0;
    _objc_retainBlock();
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_106e1add8;
    puStack_f0 = &UNK_11084e3a0;
    ppuStack_e8 = ppuVar6;
    _objc_retain();
    func_0x00010be15120(param_1,param_2,param_8,param_9,&puStack_108);
    _objc_release(ppuStack_e8);
    _objc_release(ppuVar6);
    _objc_release(puStack_88);
    _objc_release(uStack_80);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(puStack_b8);
    _objc_release(uStack_c0);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e1acdc; end: 106e1add7;  */

void FUN_106e1acdc(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar2 = 0x20;
  if (param_3 == 0) {
    lVar2 = 0x28;
  }
  uVar4 = *(undefined8 *)(param_2 + lVar2);
  _objc_retain(uVar4);
  uVar1 = uVar4;
  func_0x00010c2bd7e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d2e0(uVar4);
  func_0x00010be919e0(*(undefined8 *)(param_2 + 0x30));
  if (((param_3 & 1) == 0) && (lVar2 = *(long *)(param_2 + 0x60), lVar2 != 0)) {
    (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  }
  puVar3 = PTR_PTR_1126b5fb0;
  _objc_alloc(PTR_PTR_1126b5fb0);
  func_0x00010c299d80(uVar4);
  func_0x00010bf3f040(uVar4);
  func_0x00010c0613a0(param_1,puVar3);
  func_0x00010bf43d60(*(undefined8 *)(param_2 + 0x58));
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106e1add8; end: 106e1adeb;  */

void FUN_106e1add8(long param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106e1ade8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3 != 0);
  return;
}



/* Entry: 106e1adec; end: 106e1adfb; -[SCPreviewFeatureUcoInMemoriesImpl prefetchUcoFilterIds:performer:] */

void FUN_106e1adec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be15130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__fetchUcoFilterIds_performer_com_112562de8,param_3,param_4,
             &PTR___NSConcreteGlobalBlock_11097e910);
  return;
}



/* Entry: 106e1adfc; end: 106e1afd7; -[SCPreviewFeatureUcoInMemoriesImpl _requestSyncLensMetadataWithUcoAppliedLensAssetContainer:dataProvider:gallerySnap:ucoLensAssetCloudFile:] */

void FUN_106e1adfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x106e1af04;
    puStack_60 = &UNK_11097e930;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_5);
    uStack_50 = param_5;
    _objc_retain(param_6);
    lStack_48 = param_6;
    func_0x00010c1351c0(param_4,param_2,param_5,param_6,
                        &PTR____CFConstantStringClassReference_110f727d8,1,0,&puStack_78);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106e1afd8; end: 106e1b06f; -[SCPreviewFeatureUcoInMemoriesImpl _fetchUcoFilterIds:performer:completion:] */

void FUN_106e1afd8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010be0f440(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260();
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e1b070; end: 106e1b1f3; -[SCPreviewFeatureUcoInMemoriesImpl _imageForCloudFile:representation:encryptionHint:snap:url:encryptedContentManager:] */

void FUN_106e1b070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106e1b1f4;
  uStack_60 = 0x106e1b204;
  uStack_58 = 0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c1351c0(param_8);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e1b1f4; end: 106e1b20b;  */

void FUN_106e1b1f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106e1b20c; end: 106e1b253;  */

void FUN_106e1b20c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106e1b254; end: 106e1b343; -[SCPreviewFeatureUcoInMemoriesImpl _croppedImage:toSize:] */

void FUN_106e1b254(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = param_1;
  dVar3 = param_2;
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  dVar4 = INFINITY;
  if (dVar3 != 0.0) {
    dVar4 = dVar2 / dVar3;
  }
  dVar3 = 0.0;
  if (dVar2 != 0.0) {
    dVar3 = dVar4;
  }
  dVar2 = INFINITY;
  if (param_2 != 0.0) {
    dVar2 = param_1 / param_2;
  }
  dVar4 = 0.0;
  if (param_1 != 0.0) {
    dVar4 = dVar2;
  }
  dVar2 = dVar3 - dVar4;
  func_0x00010c23d0a0(param_5);
  if (dVar4 <= dVar3) {
    dVar4 = dVar3;
  }
  dVar3 = param_2;
  if (param_2 <= param_1) {
    dVar3 = param_1;
  }
  if (dVar3 <= dVar4) {
    dVar3 = dVar4;
  }
  dVar4 = 1.0 / dVar3;
  if (dVar3 <= 0.0) {
    dVar4 = 1.1920928955078125e-07;
  }
  uVar1 = param_5;
  if (dVar4 < ABS(dVar2)) {
    func_0x00010c14e6c0(param_1,param_2,0x3ff0000000000000,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e1b344; end: 106e1b423; -[SCPreviewFeatureUcoInMemoriesImpl _fillImageContainer:withImage:] */

void FUN_106e1b344(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010bfbbbc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010bdf6260(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c249920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bfbbbc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar1 == lVar2) {
      func_0x00010c207b00(param_3,param_2,param_1);
    }
    func_0x00010c1a1640(param_3,param_2,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e1b424; end: 106e1b5af; -[SCPreviewFeatureUcoInMemoriesImpl _fillImageContainer:withImage:ucoFilterIds:performer:] */

void FUN_106e1b424(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010bfbbbc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010bfbbbc0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126ae560;
      _objc_alloc_init();
      puVar3 = puVar2;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1660(param_3,param_2,puVar3);
      _objc_release(puVar3);
      func_0x00010be15c80(param_1,param_2,param_3,lVar1);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_106e1b5b0;
      puStack_70 = &UNK_11085fb08;
      puStack_68 = puVar2;
      lStack_60 = lVar1;
      _objc_retain(param_4);
      lStack_58 = param_4;
      _objc_retain(lVar1);
      _objc_retain(puVar2);
      func_0x00010be15120(param_1,param_2,param_5,param_6,&puStack_88);
      _objc_release(lStack_58);
      _objc_release(lStack_60);
      _objc_release(puStack_68);
      _objc_release(lVar1);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e1b5b0; end: 106e1b5cf;  */

void FUN_106e1b5b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0x30;
  if (param_3 != 0) {
    lVar1 = 0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 106e1b5d0; end: 106e1b693; -[SCPreviewFeatureUcoInMemoriesImpl _fetchAllUcoIdsFutureFromIds:withPerformer:] */

void FUN_106e1b5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106e1b694;
  puStack_48 = &UNK_11097e9c0;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c0b8600(param_3,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e1b694; end: 106e1b78b;  */

void FUN_106e1b694(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  _objc_retain(puVar2);
  func_0x00010c297260(uVar4);
  puVar3 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e1b78c; end: 106e1b82f;  */

void FUN_106e1b78c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    func_0x00010bfab0c0(param_2);
    _objc_release(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 106e1b830; end: 106e1b847;  */

void FUN_106e1b830(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
               PTR____kCFBooleanTrue_11034ab68);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 106e1b848; end: 106e1b937; -[SCPreviewFeatureUcoInMemoriesImpl activate] */

void FUN_106e1b848(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar2 = uVar1;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
  }
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106e1b938; end: 106e1bb33;  */

void FUN_106e1b938(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    _objc_retain(param_2);
    lVar6 = param_2;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_2);
        }
        puVar4 = PTR_PTR_1126c40e0;
        uVar10 = *(ulong *)(lVar11 * 8);
        _objc_retain(uVar10);
        _objc_opt_class(puVar4);
        uVar5 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar4);
        uVar1 = uVar10;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar10);
        if (uVar1 != 0) {
          func_0x00010c094660(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c280520(puVar3);
          _objc_release(uVar10);
        }
        _objc_release(uVar1);
        lVar11 = lVar11 + 1;
      } while (lVar6 != lVar11);
      lVar6 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    _os_unfair_lock_lock(param_1 + 0x40);
    puVar4 = puVar3;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar4;
    _objc_release(uVar9);
    _os_unfair_lock_unlock(param_1 + 0x40);
    func_0x00010be95620(param_1);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x40);
  __Unwind_Resume();
  _os_unfair_lock_lock(param_2 + 0x40);
  lVar6 = *(long *)(param_2 + 0x38);
  func_0x00010bf51e00();
  _os_unfair_lock_unlock(param_2 + 0x40);
  lVar8 = lVar6;
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c15eca0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
  }
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 106e1bb34; end: 106e1bbd7; -[SCPreviewFeatureUcoInMemoriesImpl lensAssetData] */

void FUN_106e1bb34(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _os_unfair_lock_lock(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf51e00();
  _os_unfair_lock_unlock(param_1 + 0x40);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c15eca0(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106e1bbd8; end: 106e1bc27; -[SCPreviewFeatureUcoInMemoriesImpl lensCommandMetadata] */

void FUN_106e1bbd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c095bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e1bc28; end: 106e1bc7f; -[SCPreviewFeatureUcoInMemoriesImpl _restoreInitalSerializedStateIfNeeded] */

void FUN_106e1bc28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c096ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13c460(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e1bc80; end: 106e1bc97; -[SCPreviewFeatureUcoInMemoriesImpl delegate] */

void FUN_106e1bc80(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e1bc98; end: 106e1bca3; -[SCPreviewFeatureUcoInMemoriesImpl setDelegate:] */

void FUN_106e1bc98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 106e1bca4; end: 106e1bd13; -[SCPreviewFeatureUcoInMemoriesImpl .cxx_destruct] */

void FUN_106e1bca4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e1bd14; end: 106e1be2b; -[SCPreviewFeatureUcoInMemoriesServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1bd14(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2bd8;
  _objc_alloc(PTR_PTR_1126d2bd8);
  func_0x00010c0580a0();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11275f0a4);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106e1be2c; end: 106e1be6b;  */

void FUN_106e1be2c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27e760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106e1be6c; end: 106e1bf93; -[SCPreviewFeatureUcoInMemoriesServicesEntryPoint imageProcessCommandsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1be6c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  FUN_106e1bf94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c075080();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    if (param_1 != 0) {
      param_1 = param_1 + (long)_DAT_11275f0a0;
      _objc_loadWeakRetained(param_1);
    }
    uVar1 = param_1;
    func_0x00010c29a960(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_1 != 0) {
      param_1 = param_1 + (long)_DAT_11275f09c;
      _objc_loadWeakRetained(param_1);
    }
    uVar1 = param_1;
    func_0x00010bfe8440(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfe85a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106e1bf94; end: 106e1bfb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1bf94(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275f08c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


