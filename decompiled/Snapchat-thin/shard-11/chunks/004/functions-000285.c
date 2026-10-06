/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10857dd74; end: 10857dd8b; -[SCNGSMEBasePlayer startTimestamp] */

void FUN_10857dd74(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1[2] = *(undefined8 *)(param_2 + 0x178);
  uVar1 = *(undefined8 *)(param_2 + 0x168);
  param_1[1] = *(undefined8 *)(param_2 + 0x170);
  *param_1 = uVar1;
  return;
}



/* Entry: 10857dd8c; end: 10857dd9f; -[SCNGSMEBasePlayer endTimestamp] */

void FUN_10857dd8c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x180);
  param_1[1] = *(undefined8 *)(param_2 + 0x188);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 400);
  return;
}



/* Entry: 10857dda0; end: 10857dda7; -[SCNGSMEBasePlayer preciseSeeking] */

undefined1 FUN_10857dda0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x131);
}



/* Entry: 10857dda8; end: 10857ddaf; -[SCNGSMEBasePlayer playerView] */

undefined8 FUN_10857dda8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 10857ddb0; end: 10857ddb7; -[SCNGSMEBasePlayer legacyPreviewPlayer] */

undefined8 FUN_10857ddb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 10857ddb8; end: 10857dde7; -[SCNGSMEBasePlayer setLegacyPreviewPlayer:] */

void FUN_10857ddb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10857dde8; end: 10857ddef; -[SCNGSMEBasePlayer publishVideoFramesEnabled] */

undefined1 FUN_10857dde8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x132);
}



/* Entry: 10857ddf0; end: 10857ddf7; -[SCNGSMEBasePlayer setPublishVideoFramesEnabled:] */

void FUN_10857ddf0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x132) = param_3;
  return;
}



/* Entry: 10857ddf8; end: 10857df3b; -[SCNGSMEBasePlayer .cxx_destruct] */

void FUN_10857ddf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10857df3c; end: 10857e413; +[SCNGSMEImmutableImagePlayer playerModelIsValid:] */

bool FUN_10857df3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_3 + 0x18);
  }
  _objc_retain(lVar4);
  lVar6 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  if (lVar6 == 0) {
    if (param_3 == 0) goto LAB_10857e3a8;
    lVar4 = *(long *)(param_3 + 0x10);
    goto LAB_10857dff0;
  }
LAB_10857dfa0:
  bVar1 = false;
LAB_10857dfa4:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return bVar1;
  }
  ___stack_chk_fail();
LAB_10857e3a8:
  lVar4 = 0;
LAB_10857dff0:
  _objc_retain(lVar4);
  lVar6 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  if (lVar6 == 0) {
LAB_10857e198:
    if (param_3 == 0) {
      _objc_retain(0);
      lVar4 = 0;
LAB_10857e3c4:
      lVar6 = 0;
    }
    else {
      lVar4 = *(long *)(param_3 + 8);
      _objc_retain(lVar4);
      if (lVar4 == 0) goto LAB_10857e3c4;
      lVar6 = *(long *)(lVar4 + 8);
    }
    _objc_retain(lVar6);
    _objc_release(lVar4);
    lVar5 = lVar6;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    bVar1 = false;
    if (lVar5 != 0) goto code_r0x00010857e1e8;
    goto LAB_10857e390;
  }
  if (param_3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_3 + 0x10);
  }
  _objc_retain(lVar4);
  lVar6 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  if (lVar6 == 1) {
    if (param_3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_3 + 0x10);
    }
    _objc_retain(lVar4);
    lVar6 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar6 + 0x18);
    }
    _objc_retain(lVar5);
    _objc_release(lVar6);
    _objc_release(lVar4);
    lVar4 = lVar5;
    func_0x00010bf529e0();
    if (lVar4 == 1) {
      lVar4 = lVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c0654e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010bf529e0();
      if (lVar4 == 1) {
        lVar4 = lVar6;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b26c8);
        lVar10 = lVar4;
        func_0x00010c077980();
        _objc_release(lVar4);
        if ((int)lVar10 != 0) {
          if (param_3 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = *(long *)(param_3 + 0x10);
          }
          _objc_retain(lVar4);
          lVar10 = lVar4;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          if (lVar10 == 0) {
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
          }
          else {
            uStack_118 = *(undefined8 *)(lVar10 + 0x40);
            uStack_120 = *(undefined8 *)(lVar10 + 0x38);
            uStack_108 = *(undefined8 *)(lVar10 + 0x50);
            uStack_110 = *(undefined8 *)(lVar10 + 0x48);
            uStack_f8 = *(undefined8 *)(lVar10 + 0x60);
            uStack_100 = *(undefined8 *)(lVar10 + 0x58);
          }
          _objc_release();
          _objc_release(lVar4);
          uStack_148 = uStack_118;
          uStack_150 = uStack_120;
          uStack_138 = uStack_108;
          uStack_140 = uStack_110;
          uStack_128 = uStack_f8;
          uStack_130 = uStack_100;
          uStack_178 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
          uStack_180 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
          uStack_168 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
          uStack_170 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
          uStack_158 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
          uStack_160 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
          puVar2 = &uStack_150;
          _CGAffineTransformEqualToTransform(puVar2,&uStack_180);
          _objc_release(lVar6);
          _objc_release(lVar5);
          if ((int)puVar2 != 0) goto LAB_10857e198;
          goto LAB_10857dfa0;
        }
      }
      _objc_release(lVar6);
    }
    _objc_release(lVar5);
  }
  goto LAB_10857dfa0;
code_r0x00010857e1e8:
  iVar8 = 0;
  iVar7 = 0;
  iVar9 = 0;
  do {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar6);
      }
      if (*(long *)(lVar10 * 8) == 0) {
LAB_10857e23c:
        iVar8 = iVar8 + 1;
      }
      else {
        lVar3 = *(long *)(*(long *)(lVar10 * 8) + 8);
        if (lVar3 == 2) {
          iVar7 = iVar7 + 1;
        }
        else if (lVar3 == 1) {
          iVar9 = iVar9 + 1;
        }
        else if (lVar3 == 0) goto LAB_10857e23c;
      }
      lVar10 = lVar10 + 1;
    } while (lVar5 != lVar10);
    lVar5 = lVar6;
    func_0x00010bf52a60();
  } while (lVar5 != 0);
  _objc_release(lVar6);
  bVar1 = false;
  if (((iVar9 == 1) && (iVar8 == 0)) && (iVar7 == 0)) {
    if (param_3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_3 + 8);
    }
    _objc_retain(lVar4);
    lVar6 = lVar4;
    func_0x00010911c750(lVar4,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar6 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(lVar6 + 0x20);
    }
    _objc_retain(lVar4);
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar5 == 1) {
      if (lVar6 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(lVar6 + 0x20);
      }
      _objc_retain(lVar4);
      lVar5 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) != 2)) {
        bVar1 = false;
      }
      else {
        lVar4 = *(long *)(lVar5 + 0x48);
        _objc_retain(lVar4);
        if (lVar4 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = *(long *)(lVar4 + 0x10);
        }
        _objc_retain(lVar10);
        lVar3 = lVar10;
        func_0x00010c270d20(lVar10);
        bVar1 = lVar3 == 0;
        _objc_release(lVar10);
        _objc_release(lVar4);
      }
      _objc_release(lVar5);
    }
    else {
      bVar1 = false;
    }
LAB_10857e390:
    _objc_release(lVar6);
  }
  goto LAB_10857dfa4;
}



/* Entry: 10857e414; end: 10857e523; +[SCNGSMEImmutableImagePlayer durationForPlayerModel:] */

void FUN_10857e414(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_4 + 8);
  }
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010911c750(lVar4,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar2 + 0x20);
  }
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar3 == 0) {
    _objc_retain(0);
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x20);
    _objc_retain(lVar4);
    if (lVar4 != 0) {
      func_0x00010bdc1140(&uStack_48,lVar4);
      goto LAB_10857e4d0;
    }
  }
  lVar4 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
LAB_10857e4d0:
  _objc_release(lVar4);
  puVar1 = (undefined8 *)PTR__kCMTimeInvalid_110348648;
  if ((uStack_40 & 0x100000000) != 0) {
    puVar1 = &uStack_48;
  }
  uVar5 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar5;
  param_1[2] = puVar1[2];
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 10857e524; end: 10857e6b3; -[SCNGSMEImmutableImagePlayer initWithPlayerModel:playerProvider:audioSession:playbackLogger:circumstanceEngine:firstFrameImage:preparePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***
FUN_10857e524(undefined8 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar2 = PTR_PTR_1126bf650;
  func_0x00010c100d00();
  if ((int)puVar2 == 0) {
    pppuVar4 = (undefined8 ***)0x0;
  }
  else {
    puStack_68 = PTR_PTR_1126fcd70;
    pppuVar4 = &ppuStack_70;
    ppuStack_70 = param_1;
    _objc_msgSendSuper2(pppuVar4,PTR_s_initWithPlayerModel_playerProvid_1125eb670,param_3,param_4,
                        param_5,param_7,param_8,param_6,param_9);
    if (pppuVar4 != (undefined8 ***)0x0) {
      *(undefined1 *)(pppuVar4 + 0x1c) = 1;
      puVar1 = (undefined8 *)((long)pppuVar4 + (long)_DAT_112776770);
      uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      puVar1[1] = uVar6;
      *puVar1 = uVar5;
      uVar3 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      puVar1[2] = uVar3;
      puVar1 = (undefined8 *)((long)pppuVar4 + (long)_DAT_112776774);
      puVar1[1] = uVar6;
      *puVar1 = uVar5;
      puVar1[2] = uVar3;
      func_0x00010be841e0(pppuVar4);
    }
    _objc_retain(pppuVar4);
    param_1 = pppuVar4;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return pppuVar4;
}



/* Entry: 10857e6b4; end: 10857e6bb; -[SCNGSMEImmutableImagePlayer canChangeModelWithoutRestart:] */

undefined8 FUN_10857e6b4(void)

{
  return 0;
}



/* Entry: 10857e6bc; end: 10857e6bf; -[SCNGSMEImmutableImagePlayer setPlayerModel:] */

void FUN_10857e6bc(void)

{
  return;
}



/* Entry: 10857e6c0; end: 10857e6f7; -[SCNGSMEImmutableImagePlayer setPlayerView:] */

void FUN_10857e6c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  if (param_3 != 0) {
    puStack_18 = PTR_PTR_1126fcd70;
    uStack_20 = param_1;
    _objc_msgSendSuper2(&uStack_20,PTR_s_setPlayerView__112655148);
  }
  return;
}



/* Entry: 10857e6f8; end: 10857e717; -[SCNGSMEImmutableImagePlayer isPlaying] */

bool FUN_10857e6f8(long param_1)

{
  if (*(long *)(param_1 + 0xa8) != 0) {
    return *(long *)(*(long *)(param_1 + 0xa8) + 0x10) == 2;
  }
  return false;
}



/* Entry: 10857e718; end: 10857e737; -[SCNGSMEImmutableImagePlayer currentTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10857e718(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112776770);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  return;
}



/* Entry: 10857e738; end: 10857e75f; -[SCNGSMEImmutableImagePlayer _currentStatus] */

undefined8 FUN_10857e738(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x88) == 1) {
    uVar1 = 2;
    if (*(float *)(param_1 + 0xa0) == 0.0) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 10857e760; end: 10857e7a7; -[SCNGSMEImmutableImagePlayer startRunning] */

void FUN_10857e760(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fcd70;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_startRunning_112671b50);
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  return;
}



/* Entry: 10857e7a8; end: 10857e7c7; -[SCNGSMEImmutableImagePlayer resumeRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10857e7a8(long param_1)

{
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined8 *)(param_1 + _DAT_112776778) = 0;
  return;
}



/* Entry: 10857e7c8; end: 10857e7ff; -[SCNGSMEImmutableImagePlayer pauseRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10857e7c8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + _DAT_112776778) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112776774);
  puVar2 = (undefined8 *)(param_1 + _DAT_112776770);
  uVar3 = puVar2[2];
  uVar4 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar4;
  puVar1[2] = uVar3;
  return;
}



/* Entry: 10857e800; end: 10857e84f; -[SCNGSMEImmutableImagePlayer stopPlayingAndSeekSmoothlyToTime:] */

void FUN_10857e800(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010c0f5fe0();
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  func_0x00010c157280(param_1,param_2,&uStack_40,&PTR___NSConcreteGlobalBlock_110a55a68);
  return;
}



/* Entry: 10857e850; end: 10857e853;  */

void FUN_10857e850(void)

{
  return;
}



/* Entry: 10857e854; end: 10857e957; -[SCNGSMEImmutableImagePlayer seekToTime:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10857e854(long param_1,undefined8 param_2,double *param_3,long param_4)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  
  _objc_retain(param_4);
  if ((*(uint *)((long)param_3 + 0xc) & 0x1d) == 1) {
    dStack_48 = param_3[1];
    dStack_50 = *param_3;
    dStack_60 = param_3[2];
  }
  else {
    dStack_48 = *(double *)(PTR__kCMTimeZero_110348670 + 8);
    dStack_50 = *(double *)PTR__kCMTimeZero_110348670;
    dStack_60 = *(double *)(PTR__kCMTimeZero_110348670 + 0x10);
  }
  pdVar1 = (double *)(param_1 + _DAT_112776770);
  pdVar1[1] = dStack_48;
  *pdVar1 = dStack_50;
  pdVar1[2] = dStack_60;
  dStack_68 = dStack_48;
  dStack_70 = dStack_50;
  dVar3 = dStack_50;
  dStack_40 = dStack_60;
  _CMTimeGetSeconds(&dStack_70);
  *(long *)(param_1 + _DAT_11277677c) = (long)(dVar3 * 30.0 + 1.0);
  *(undefined8 *)(param_1 + _DAT_112776778) = 0;
  pdVar2 = (double *)(param_1 + _DAT_112776774);
  dVar4 = pdVar1[1];
  dVar3 = *pdVar1;
  pdVar2[2] = pdVar1[2];
  pdVar2[1] = dVar4;
  *pdVar2 = dVar3;
  func_0x00010be1a8e0(param_1);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10857e958; end: 10857e997; -[SCNGSMEImmutableImagePlayer seekVideoAndAudioToBeginning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10857e958(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__kCMTimeZero_110348670;
  puVar1 = (undefined8 *)(param_1 + _DAT_112776770);
  uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  puVar1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *puVar1 = uVar3;
  puVar1[2] = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(param_1 + _DAT_11277677c) = 1;
  *(undefined8 *)(param_1 + _DAT_112776778) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be1a8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateAndPublishCurrentState_1125643d8);
  return;
}



/* Entry: 10857e998; end: 10857eb6f; -[SCNGSMEImmutableImagePlayer _prepareToPlayOperation] */

void FUN_10857e998(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = param_1;
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf660;
  _objc_opt_class(PTR_PTR_1126bf660);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c0ff700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac680();
    _objc_release(puVar1);
    func_0x00010be87900(param_1);
  }
  else {
    puVar3 = param_1;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c0ff700(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ac680();
      _objc_release(puVar4);
      func_0x00010be87900(param_1);
    }
    else {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_10857eb70;
      puStack_58 = &UNK_110841f80;
      _objc_retain(puVar3);
      puStack_50 = puVar3;
      _objc_retain(puVar1);
      puStack_48 = puVar2;
      func_0x000107c312cc("APPSTORE",&puStack_70);
      func_0x00010bebc200(param_1);
      _objc_release(puStack_48);
      puVar1 = puStack_50;
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 10857eb70; end: 10857ec03;  */

void FUN_10857eb70(double param_1,double param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
  dVar3 = 1.0;
  if (0.0 < param_2) {
    func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c23d0a0(*(undefined8 *)(param_3 + 0x20));
    dVar3 = param_1 / param_2;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6d80(dVar3,uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1aa650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x28),PTR_s_setImageOnOverlayLayer__1126483b8,
             *(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 10857ec04; end: 10857ecab; -[SCNGSMEImmutableImagePlayer _simulateAVPlayerReadied] */

void FUN_10857ec04(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10857ecac;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10857ecac; end: 10857ed8f;  */

void FUN_10857ecac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c100cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126af5d0;
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      lVar1 = param_1;
      func_0x00010c100cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2619e0(puVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar3,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(lVar1);
    }
    *(undefined8 *)(param_1 + 0x98) = 1;
    *(undefined8 *)(param_1 + 0x90) = 2;
    *(undefined8 *)(param_1 + 0x88) = 1;
    *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
    puVar2 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10857ed90; end: 10857ede3; -[SCNGSMEImmutableImagePlayer getRenderedImage] */

void FUN_10857ed90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10857ede4; end: 10857f09f; -[SCNGSMEImmutableImagePlayer itemTimeForHostTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_10857ede4(double *param_1,double param_2,double *param_3)

{
  double *pdVar1;
  undefined *puVar2;
  double *pdVar3;
  double dVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  double dVar11;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  double dStack_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_90;
  undefined4 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar3 = param_3;
  if (*(float *)(param_3 + 0x14) == 0.0) {
    param_3 = (double *)((long)param_3 + (long)_DAT_112776774);
    dVar4 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = dVar4;
    dVar4 = param_3[2];
  }
  else {
    lVar8 = (long)_DAT_112776778;
    if (*(double *)((long)param_3 + lVar8) == 0.0) {
      *(double *)((long)param_3 + lVar8) = param_2;
      pdVar1 = (double *)((long)param_3 + (long)_DAT_112776770);
      pdVar3 = (double *)((long)param_3 + (long)_DAT_112776774);
      dVar4 = pdVar3[2];
      dVar11 = *pdVar3;
      pdVar1[1] = pdVar3[1];
      *pdVar1 = dVar11;
      pdVar1[2] = dVar4;
      dStack_a8 = pdVar3[1];
      dVar4 = *pdVar3;
      dStack_a0 = pdVar3[2];
      pdVar3 = &dStack_b0;
      dStack_b0 = dVar4;
      _CMTimeGetSeconds();
      *(long *)((long)param_3 + (long)_DAT_11277677c) = (long)(dVar4 * 30.0 + 1.0);
      dVar4 = *pdVar1;
      param_1[1] = pdVar1[1];
      *param_1 = dVar4;
      dVar4 = pdVar1[2];
    }
    else {
      pdVar1 = (double *)((long)param_3 + (long)_DAT_112776770);
      dStack_90 = *pdVar1;
      uStack_88 = *(undefined4 *)(pdVar1 + 1);
      uVar10 = *(uint *)((long)pdVar1 + 0xc);
      dVar4 = pdVar1[2];
      lVar7 = (long)_DAT_11277677c;
      lVar9 = *(long *)((long)param_3 + lVar7);
      _CMTimeMake(&dStack_b0,1,0x1e);
      dStack_c8 = dStack_a8;
      dStack_d0 = dStack_b0;
      dStack_c0 = dStack_a0;
      dVar11 = dStack_b0;
      _CMTimeGetSeconds(&dStack_d0);
      puVar2 = PTR_PTR_1126bf650;
      param_2 = param_2 - *(double *)((long)param_3 + lVar8);
      func_0x00010c100cc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b200(&dStack_d0,puVar2);
      _objc_release();
      if (dVar11 <= param_2) {
        lVar5 = (long)(param_2 / dVar11);
        lVar6 = lVar5;
        if (0 < lVar5) {
          do {
            dStack_100 = dStack_90;
            uStack_f8 = (double)CONCAT44(uVar10,uStack_88);
            dStack_118 = dStack_a8;
            dStack_120 = dStack_b0;
            dStack_110 = dStack_a0;
            pdVar3 = &dStack_100;
            dStack_f0 = dVar4;
            _CMTimeAdd(&dStack_e8,pdVar3,&dStack_120);
            dStack_90 = dStack_e8;
            uStack_88 = uStack_e0;
            lVar6 = lVar6 + -1;
            dVar4 = dStack_d8;
            uVar10 = uStack_dc;
          } while (lVar6 != 0);
        }
        lVar9 = lVar9 + lVar5;
        if (((ulong)dStack_c8 & 0x100000000) != 0) {
          uStack_e0 = uStack_88;
          uStack_f8 = dStack_c8;
          dStack_100 = dStack_d0;
          dStack_f0 = dStack_c0;
          dStack_e8 = dStack_90;
          pdVar3 = &dStack_e8;
          uStack_dc = uVar10;
          dStack_d8 = dVar4;
          _CMTimeCompare(pdVar3,&dStack_100);
          if (-1 < (int)pdVar3) {
            dStack_90 = *(double *)PTR__kCMTimeZero_110348670;
            uStack_88 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
            uVar10 = *(uint *)(PTR__kCMTimeZero_110348670 + 0xc);
            dVar4 = *(double *)(PTR__kCMTimeZero_110348670 + 0x10);
            lVar9 = 1;
          }
        }
        *(double *)((long)param_3 + lVar8) =
             *(double *)((long)param_3 + lVar8) + dVar11 * (double)lVar5;
      }
      if ((uVar10 & 1) != 0) {
        *pdVar1 = dStack_90;
        *(undefined4 *)(pdVar1 + 1) = uStack_88;
        *(uint *)((long)pdVar1 + 0xc) = uVar10;
        pdVar1[2] = dVar4;
        *(long *)((long)param_3 + lVar7) = lVar9;
      }
      dVar4 = *pdVar1;
      param_1[1] = pdVar1[1];
      *param_1 = dVar4;
      dVar4 = pdVar1[2];
    }
  }
  param_1[2] = dVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return pdVar3;
  }
  ___stack_chk_fail();
  return *(double **)((long)pdVar3 + (long)_DAT_11277677c);
}



/* Entry: 10857f0a0; end: 10857f0af; -[SCNGSMEImmutableImagePlayer _presentationFrameNumberForTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10857f0a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277677c);
}



/* Entry: 10857f0b0; end: 10857f0c7; -[SCNGSMEImmutableImagePlayer _fpsForStatus] */

undefined4 FUN_10857f0b0(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(float *)(param_1 + 0xa0) != 0.0) {
    uVar1 = 0x41f00000;
  }
  return uVar1;
}



/* Entry: 10857f0c8; end: 10857f107; -[SCNGSMEImmutableImagePlayer _displayLinkCallback:] */

void FUN_10857f0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x00010c26a180(param_3);
  func_0x00010c084bc0(auStack_38,param_1);
  func_0x00010be1a8e0(param_1);
  return;
}



/* Entry: 10857f108; end: 10857f227; -[SCNGSMEImmutableImagePlayer image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10857f108(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11277676c;
  lVar4 = *(long *)(param_1 + lVar7);
  if (lVar4 == 0) {
    lVar4 = param_1;
    func_0x00010c100cc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar4 + 8);
    }
    _objc_retain(lVar5);
    lVar1 = lVar5;
    func_0x00010911c750(lVar5,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(lVar1 + 0x20);
    }
    _objc_retain(lVar4);
    lVar5 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar5 + 8);
    }
    _objc_retain(uVar6);
    uVar2 = uVar6;
    func_0x000109120aa8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar1);
    lVar4 = *(long *)(param_1 + lVar7);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10857f228; end: 10857f253; -[SCNGSMEImmutableImagePlayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10857f228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277676c,0);
  return;
}



/* Entry: 10857f254; end: 10857f363;  */

void FUN_10857f254(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if ((param_2 != 0) && (*(long *)(param_2 + 8) == 2)) {
    lVar2 = *(long *)(param_2 + 0x20);
    _objc_retain(lVar2);
    lVar1 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar3);
    func_0x00010c0bc940(uVar3);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) != 0) {
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10857f364; end: 10857f36b;  */

void FUN_10857f364(void)

{
  return;
}



/* Entry: 10857f36c; end: 10857f3a3;  */

void FUN_10857f36c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10857f3a4; end: 10857f41f;  */

void FUN_10857f3a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_2);
  func_0x00010bf69bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0f5800(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfacbe0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10857f420; end: 10857f427;  */

void FUN_10857f420(void)

{
  return;
}



/* Entry: 10857f428; end: 10857f97b; -[SCNGSMEImmutableModelPlayer initWithPlayerModel:playerProvider:audioSession:playbackLogger:circumstanceEngine:firstFrameImage:keepLastFrameWhenStop:preparePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***
FUN_10857f428(undefined8 ***param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 ***pppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 **ppuStack_220;
  undefined8 **ppuStack_200;
  undefined *puStack_1f8;
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
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_3);
  if (param_3 == 0) {
    _objc_retain(0);
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_3 + 8);
    _objc_retain(lVar5);
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 8);
      goto LAB_10857f4ec;
    }
  }
  lVar7 = 0;
LAB_10857f4ec:
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  _objc_release(lVar5);
  ppuStack_220 = param_1;
  if (lVar2 == 0) {
    _objc_release(param_3);
    goto LAB_10857f8a0;
  }
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  if (param_3 == 0) goto LAB_10857f938;
  lVar5 = *(long *)(param_3 + 8);
  _objc_retain(lVar5);
  if (lVar5 == 0) goto LAB_10857f944;
  lVar7 = *(long *)(lVar5 + 8);
  while( true ) {
    _objc_retain(lVar7);
    _objc_release(lVar5);
    lVar5 = lVar7;
    func_0x00010bf52a60();
    if (lVar5 != 0) break;
LAB_10857f6ec:
    _objc_release(lVar7);
    _objc_release(param_3);
    ppuStack_200 = ppuStack_220;
    puStack_1f8 = PTR_PTR_1126fcd78;
    pppuVar6 = &ppuStack_200;
    _objc_msgSendSuper2(pppuVar6,PTR_s_initWithPlayerModel_playerProvid_1125eb670,param_3,param_4,
                        param_5,param_7,param_8,param_6,param_11);
    if (pppuVar6 != (undefined8 ***)0x0) {
      if (param_3 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(long *)(param_3 + 8);
      }
      _objc_retain(lVar5);
      _objc_retain(lVar5);
      uStack_f0 = 0;
      uStack_e0 = 0x3032000000;
      uStack_d8 = 0x10857f23c;
      uStack_d0 = 0x10857f24c;
      uStack_c8 = 0;
      if (lVar5 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(lVar5 + 8);
      }
      puStack_e8 = &uStack_f0;
      _objc_retain(uVar11);
      puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_168 = 0xc2000000;
      pcStack_160 = FUN_10857f254;
      puStack_158 = &UNK_110a55b88;
      puStack_150 = &uStack_f0;
      func_0x00010bf97e80(uVar11);
      _objc_release(uVar11);
      uVar8 = puStack_e8[5];
      _objc_retain(uVar8);
      __Block_object_dispose(&uStack_f0,8);
      _objc_release(uStack_c8);
      _objc_release(lVar5);
      uVar11 = *(undefined8 *)((long)pppuVar6 + (long)_DAT_112776784);
      *(undefined8 *)((long)pppuVar6 + (long)_DAT_112776784) = uVar8;
      _objc_release(uVar11);
      _objc_release(lVar5);
      *(undefined1 *)((long)pppuVar6 + (long)_DAT_112776788) = param_9;
      pppuVar1 = pppuVar6;
      func_0x00010c11aec0();
      *(char *)(pppuVar6 + 0x1c) = (char)pppuVar1;
      uVar11 = param_7;
      func_0x00010bf1f440();
      *(char *)((long)pppuVar6 + (long)_DAT_11277678c) = (char)uVar11;
      func_0x00010be841e0(pppuVar6);
    }
    _objc_retain(pppuVar6);
    ppuStack_220 = pppuVar6;
LAB_10857f8a4:
    _objc_release(param_11);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(ppuStack_220);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return pppuVar6;
    }
    ___stack_chk_fail();
LAB_10857f938:
    _objc_retain(0);
    lVar5 = 0;
LAB_10857f944:
    lVar7 = 0;
  }
  lVar2 = *plStack_1a0;
LAB_10857f590:
  lVar4 = 0;
LAB_10857f594:
  if (*plStack_1a0 != lVar2) {
    _objc_enumerationMutation(lVar7);
  }
  lVar9 = *(long *)(lStack_1a8 + lVar4 * 8);
  if (lVar9 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(lVar9 + 0x20);
  }
  _objc_retain(lVar12);
  lVar13 = lVar12;
  func_0x00010bf529e0();
  _objc_release(lVar12);
  if (lVar13 != 0) goto code_r0x00010857f5e4;
  _objc_release(lVar7);
  _objc_release(param_3);
LAB_10857f8a0:
  pppuVar6 = (undefined8 ***)0x0;
  goto LAB_10857f8a4;
code_r0x00010857f5e4:
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x20);
  }
  _objc_retain(lVar9);
  lVar12 = lVar9;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar13 = *plStack_1e0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1e0 != lVar13) {
          _objc_enumerationMutation(lVar9);
        }
        lVar3 = *(long *)(lStack_1e8 + lVar10 * 8);
        if (lVar3 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar3 + 8);
        }
        _objc_retain(uVar11);
        func_0x00010c0bc940(uVar11);
        _objc_release(uVar11);
        lVar10 = lVar10 + 1;
      } while (lVar12 != lVar10);
      lVar12 = lVar9;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(lVar9);
  lVar4 = lVar4 + 1;
  if (lVar4 == lVar5) goto LAB_10857f6d0;
  goto LAB_10857f594;
LAB_10857f6d0:
  lVar5 = lVar7;
  func_0x00010bf52a60();
  if (lVar5 == 0) goto LAB_10857f6ec;
  goto LAB_10857f590;
}



/* Entry: 10857f97c; end: 10857f9af; -[SCNGSMEImmutableModelPlayer _calculatePublishTime] */

void FUN_10857f97c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fcd78;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s__calculatePublishTime_112553bc8);
  return;
}



/* Entry: 10857f9b0; end: 10857f9c3; -[SCNGSMEImmutableModelPlayer _setPlayedToEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10857f9b0(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112776780) = 1;
  return;
}



/* Entry: 10857f9c4; end: 10857fa63;  */

void FUN_10857f9c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010c29b240(PTR_PTR_1126b0010,param_4,param_4);
  lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return;
}



/* Entry: 10857fa64; end: 10857fb53; -[SCNGSMEImmutableModelPlayer _errorIfNoPlayerItem] */

void FUN_10857fa64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110ee33b8,
                      &PTR____CFConstantStringClassReference_110e08d78,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0ff700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac680();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ee3418);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be87900(param_1,param_2,puVar3);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10857fb54; end: 1085804f3; -[SCNGSMEImmutableModelPlayer _prepareVideoPlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10857fb54(undefined **param_1,undefined *param_2,undefined *param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  double dVar18;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined **ppuStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined1 auStack_260 [8];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  code *pcStack_1b0;
  char *pcStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  code *pcStack_180;
  char *pcStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c130060();
  if ((param_3[_DAT_11277678c] & 1) == 0) {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar2);
    func_0x00010c130060(param_3);
    puVar2 = param_3;
    func_0x00010c100cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    if (puVar2 == (undefined *)0x0) goto LAB_108580438;
    lVar14 = *(long *)(puVar2 + 8);
    _objc_retain(lVar14);
    if (lVar14 == 0) goto LAB_108580444;
    lVar12 = *(long *)(lVar14 + 8);
    goto LAB_10857fc30;
  }
  do {
    puVar2 = param_3;
    func_0x00010c100fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
LAB_1085800ec:
      puVar2 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf18ba0();
      _objc_release(puVar2);
      uStack_118 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_120 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_108 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_110 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_f8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_100 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      puVar7 = param_3;
      func_0x00010c100cc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010bdd1ae0(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = param_3;
      func_0x00010bee67c0();
      if (((ulong)puVar7 & 1) == 0) {
        func_0x00010c1ea8e0(param_1,param_2,param_3);
        _objc_retain(puVar2);
        uVar9 = *(undefined8 *)(param_3 + 0x20);
        *(undefined **)(param_3 + 0x20) = puVar2;
        _objc_release(uVar9);
        puStack_220 = PTR_PTR_1126fcd78;
        puStack_228 = param_3;
        _objc_msgSendSuper2(&puStack_228,PTR_s__prepareVideoPlayback_11257bfc8);
        _objc_initWeak(&uStack_160,param_3);
        puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_278 = 0xc2000000;
        pcStack_270 = FUN_1085804f4;
        puStack_268 = &UNK_1108f3228;
        _objc_copyWeak(auStack_260,&uStack_160);
        uStack_250 = uStack_118;
        uStack_258 = uStack_120;
        uStack_240 = uStack_108;
        uStack_248 = uStack_110;
        uStack_230 = uStack_f8;
        uStack_238 = uStack_100;
        func_0x000107c312cc("APPSTORE",&puStack_280);
        _objc_destroyWeak(auStack_260);
        _objc_destroyWeak(&uStack_160);
      }
      else {
        _objc_initWeak(&uStack_160,param_3);
        puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2f0 = 0xc2000000;
        uStack_2e8 = 0x1085805c4;
        puStack_2e0 = &UNK_110a55b28;
        _objc_copyWeak(auStack_2c8,&uStack_160);
        ppuStack_2c0 = param_1;
        puStack_2b8 = param_2;
        _objc_retain(puVar2);
        uStack_2a8 = uStack_118;
        uStack_2b0 = uStack_120;
        uStack_298 = uStack_108;
        uStack_2a0 = uStack_110;
        uStack_288 = uStack_f8;
        uStack_290 = uStack_100;
        puStack_2d8 = puVar2;
        puStack_2d0 = param_3;
        func_0x000107c312cc("APPSTORE",&puStack_2f8);
        _objc_release(puStack_2d8);
        _objc_destroyWeak(auStack_2c8);
        _objc_destroyWeak(&uStack_160);
      }
      param_3 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
      _objc_release(param_3);
      _objc_release(puVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
        return;
      }
    }
    else {
      puVar7 = param_3;
      func_0x00010c100fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126bf660;
      _objc_opt_class(PTR_PTR_1126bf660);
      puVar8 = puVar7;
      _objc_opt_isKindOfClass(puVar7,puVar2);
      puVar2 = puVar7;
      if (((ulong)puVar8 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(puVar7);
      if (puVar2 != (undefined *)0x0) {
        _objc_release(puVar7);
        goto LAB_1085800ec;
      }
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010c0ff700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ac680();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be87900(param_3);
      _objc_release(puVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar7);
        return;
      }
    }
    ___stack_chk_fail();
LAB_108580438:
    _objc_retain(0);
    lVar14 = 0;
LAB_108580444:
    lVar12 = 0;
LAB_10857fc30:
    _objc_retain(lVar12);
    _objc_release(lVar14);
    lVar14 = lVar12;
    func_0x00010bf52a60();
    if (lVar14 == 0) {
LAB_108580044:
      _objc_release(lVar12);
    }
    else {
      iVar15 = 0;
      iVar16 = 0;
      lVar17 = *plStack_150;
      do {
        lVar11 = 0;
        do {
          if (*plStack_150 != lVar17) {
            _objc_enumerationMutation(lVar12);
          }
          lVar10 = *(long *)(lStack_158 + lVar11 * 8);
          if (lVar10 != 0) {
            lVar10 = *(long *)(lVar10 + 8);
            if (lVar10 == 2) {
              iVar15 = iVar15 + 1;
            }
            else if (lVar10 == 1) {
              iVar16 = iVar16 + 1;
            }
          }
          lVar11 = lVar11 + 1;
        } while (lVar14 != lVar11);
        lVar14 = lVar12;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
      _objc_release(lVar12);
      if ((iVar16 == 1) && (iVar15 == 0)) {
        if (puVar2 == (undefined *)0x0) {
          lVar14 = 0;
        }
        else {
          lVar14 = *(long *)(puVar2 + 8);
        }
        _objc_retain(lVar14);
        lVar12 = lVar14;
        func_0x00010911c750(lVar14,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        if (lVar12 == 0) {
          lVar14 = 0;
        }
        else {
          lVar14 = *(long *)(lVar12 + 0x20);
        }
        _objc_retain(lVar14);
        lVar17 = lVar14;
        func_0x00010bf529e0();
        _objc_release(lVar14);
        if (lVar17 == 1) {
          if (puVar2 == (undefined *)0x0) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(ulong *)(puVar2 + 0x10);
          }
          _objc_retain(uVar13);
          uVar3 = uVar13;
          func_0x00010bf529e0();
          _objc_release(uVar13);
          if (uVar3 < 2) {
            if (puVar2 == (undefined *)0x0) {
              lVar14 = 0;
            }
            else {
              lVar14 = *(long *)(puVar2 + 0x10);
            }
            _objc_retain(lVar14);
            lVar17 = lVar14;
            func_0x00010bf529e0();
            _objc_release(lVar14);
            if (lVar17 == 0) {
LAB_10857fefc:
              if (lVar12 == 0) {
                lVar14 = 0;
              }
              else {
                lVar14 = *(long *)(lVar12 + 0x20);
              }
              _objc_retain(lVar14);
              lVar17 = lVar14;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              if (lVar17 == 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = *(ulong *)(lVar17 + 8);
              }
              _objc_retain(uVar13);
              _objc_release(lVar17);
              _objc_release(lVar14);
              ppuStack_1f8 = &puStack_190;
              puStack_190 = (undefined *)0x0;
              pcStack_180 = (code *)0x3010000000;
              pcStack_178 = "";
              puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
              ppuStack_1b8 = (undefined **)0xc2000000;
              pcStack_1b0 = FUN_10857f9c4;
              pcStack_1a8 = "";
              puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_1e8 = 0xc2000000;
              uStack_1e0 = 0x10857f9fc;
              puStack_1d8 = &UNK_11084e6b0;
              puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_210 = 0xc2000000;
              uStack_208 = 0x10857fa34;
              puStack_200 = &UNK_11084d758;
              ppuStack_1d0 = ppuStack_1f8;
              ppuStack_1a0 = ppuStack_1f8;
              ppuStack_188 = ppuStack_1f8;
              ppuStack_170 = param_1;
              puStack_168 = param_2;
              func_0x00010c0bc940(uVar13);
              ppuVar6 = ppuStack_188;
              ppuVar1 = (undefined **)0x0;
              if ((double)ppuStack_188[4] != 0.0) {
                if ((double)ppuStack_188[5] == 0.0) {
LAB_108580004:
                  param_2 = (undefined *)0x0;
                  ppuVar1 = param_1;
                }
                else {
                  dVar18 = (double)ppuStack_188[4] / (double)ppuStack_188[5];
                  if (dVar18 != 0.0) {
                    if (dVar18 == INFINITY) goto LAB_108580004;
                    ppuVar1 = (undefined **)((double)param_2 * dVar18);
                    if ((double)param_1 <= (double)param_2 * dVar18) {
                      param_2 = (undefined *)((double)param_1 / dVar18);
                      ppuVar1 = param_1;
                    }
                  }
                }
              }
              param_1 = ppuVar1;
              ppuStack_188[4] = (undefined *)param_1;
              ppuVar6[5] = param_2;
              __Block_object_dispose(&puStack_190,8);
            }
            else {
              if (puVar2 == (undefined *)0x0) {
                lVar14 = 0;
              }
              else {
                lVar14 = *(long *)(puVar2 + 0x10);
              }
              _objc_retain(lVar14);
              lVar17 = lVar14;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              if (lVar17 == 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = *(ulong *)(lVar17 + 0x18);
              }
              _objc_retain(uVar13);
              _objc_release(lVar17);
              _objc_release(lVar14);
              uVar3 = uVar13;
              func_0x00010bf529e0();
              if (uVar3 == 1) {
                uVar3 = uVar13;
                func_0x00010bfb1920();
                _objc_retainAutoreleasedReturnValue();
                uVar4 = uVar3;
                func_0x00010c0654e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar3);
                uVar3 = uVar4;
                func_0x00010bf529e0();
                if (uVar3 == 1) {
                  uVar3 = uVar4;
                  func_0x00010bfb1920();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_opt_class(PTR_PTR_1126b26c8);
                  uVar5 = uVar3;
                  func_0x00010c077980();
                  _objc_release(uVar3);
                  if ((uVar5 & 1) != 0) {
                    if (puVar2 == (undefined *)0x0) {
                      lVar14 = 0;
                    }
                    else {
                      lVar14 = *(long *)(puVar2 + 0x10);
                    }
                    _objc_retain(lVar14);
                    lVar17 = lVar14;
                    func_0x00010c0dfd40();
                    _objc_retainAutoreleasedReturnValue();
                    if (lVar17 == 0) {
                      pcStack_178 = (char *)0x0;
                      pcStack_180 = (code *)0x0;
                      puStack_168 = (undefined *)0x0;
                      ppuStack_170 = (undefined **)0x0;
                      ppuStack_188 = (undefined **)0x0;
                      puStack_190 = (undefined *)0x0;
                    }
                    else {
                      ppuStack_188 = *(undefined ***)(lVar17 + 0x40);
                      puStack_190 = *(undefined **)(lVar17 + 0x38);
                      pcStack_178 = *(char **)(lVar17 + 0x50);
                      pcStack_180 = *(code **)(lVar17 + 0x48);
                      puStack_168 = *(undefined **)(lVar17 + 0x60);
                      ppuStack_170 = *(undefined ***)(lVar17 + 0x58);
                    }
                    _objc_release();
                    _objc_release(lVar14);
                    pcStack_1a8 = pcStack_178;
                    pcStack_1b0 = pcStack_180;
                    puStack_198 = puStack_168;
                    ppuStack_1a0 = ppuStack_170;
                    uStack_1e8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
                    puStack_1f0 = *(undefined **)PTR__CGAffineTransformIdentity_110347008;
                    puStack_1d8 = *(undefined **)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
                    uStack_1e0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
                    uStack_1c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
                    ppuStack_1d0 = *(undefined ***)(PTR__CGAffineTransformIdentity_110347008 + 0x20)
                    ;
                    ppuStack_1b8 = ppuStack_188;
                    puStack_1c0 = puStack_190;
                    ppuVar6 = &puStack_1c0;
                    _CGAffineTransformEqualToTransform(ppuVar6,&puStack_1f0);
                    _objc_release(uVar4);
                    _objc_release(uVar13);
                    if ((int)ppuVar6 == 0) goto LAB_108580044;
                    goto LAB_10857fefc;
                  }
                }
                _objc_release(uVar4);
              }
            }
            _objc_release(uVar13);
          }
        }
        goto LAB_108580044;
      }
    }
    _objc_release(puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar2);
  } while( true );
}



/* Entry: 1085804f4; end: 1085806d7;  */

void FUN_1085804f4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  uVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x00010c100fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bf660;
    _objc_opt_class(PTR_PTR_1126bf660);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010c1dcb40(uVar1);
    func_0x00010c2218a0(uVar1);
    func_0x00010c1dda40(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 1085806d8; end: 10858082b; -[SCNGSMEImmutableModelPlayer _captureRenderedImage] */

void FUN_1085806d8(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c252d60();
  if (lVar1 == 1) {
    puVar3 = param_1;
    func_0x00010be8e6c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110ee33b8,
                          &PTR____CFConstantStringClassReference_110ee3498,7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ff700(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ac640();
      _objc_release(param_1);
      puVar2 = PTR_PTR_1126ae558;
      func_0x00010bfe9c80(PTR_PTR_1126ae558,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110ee33b8,
                        &PTR____CFConstantStringClassReference_110ee3478,7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ff700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac640();
    _objc_release(param_1);
    puVar2 = PTR_PTR_1126ae558;
    func_0x00010bfe9c80(PTR_PTR_1126ae558,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10858082c; end: 1085808d7; -[SCNGSMEImmutableModelPlayer _renderedImageFromCurrentFrame] */

void FUN_10858082c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf62b40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126da1d8;
  _objc_opt_class(PTR_PTR_1126da1d8);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar3 = uVar1;
  func_0x00010bf52040();
  _objc_release(uVar1);
  if (uVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe96e0(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  _CVPixelBufferRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1085808d8; end: 1085809fb; -[SCNGSMEImmutableModelPlayer canChangeModelWithoutRestart:] */

undefined8 FUN_1085808d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c100cc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar2);
  _objc_release(lVar1);
  func_0x00010c100cc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_retain(uVar3);
  _objc_release(param_1);
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 8);
  }
  _objc_retain(uVar4);
  uVar5 = uVar2;
  func_0x00010c071ae0(uVar2,param_2,uVar4);
  if ((int)uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    if (param_3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_3 + 0x10);
    }
    _objc_retain(uVar6);
    uVar5 = uVar3;
    func_0x00010c071b60(uVar3,param_2,uVar6);
    _objc_release(uVar6);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1085809fc; end: 108580a6f; -[SCNGSMEImmutableModelPlayer setPlayerModel:] */

void FUN_1085809fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf2c640(param_1,param_2,param_3);
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126da178;
    func_0x00010bf0f380(PTR_PTR_1126da178,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16be60(*(undefined8 *)(param_1 + 0x20),param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108580a70; end: 108580ad7; -[SCNGSMEImmutableModelPlayer setPublishVideoFramesEnabled:] */

void FUN_108580a70(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fcd78;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setPublishVideoFramesEnabled__11252b638);
  *(undefined1 *)(param_1 + 0xe0) = param_3;
  lVar1 = param_1;
  func_0x00010c11aec0();
  if ((int)lVar1 == 0) {
    func_0x00010becad00(param_1);
  }
  else {
    func_0x00010bea91c0(param_1);
  }
  return;
}



/* Entry: 108580ad8; end: 108580ba7; -[SCNGSMEImmutableModelPlayer setPlayerView:] */

void FUN_108580ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108580ba8;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000107c312cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108580ba8; end: 108580be3;  */

void FUN_108580ba8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bea6620(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108580be4; end: 108580d97; -[SCNGSMEImmutableModelPlayer _setPlayerViewDispatchBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108580be4(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fcd78;
  lStack_60 = param_3;
  _objc_msgSendSuper2(&lStack_60,PTR_s__setPlayerViewDispatchBlock__112587330,param_5);
  puVar2 = PTR_PTR_1126bf660;
  _objc_retain(param_5);
  _objc_opt_class(puVar2);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_5);
  if (uVar1 != 0) {
    func_0x00010c130060(param_3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6d80(param_1 / param_2,param_5);
    _objc_release(puVar2);
    func_0x00010c1aa640(param_5);
    if (*(long *)(param_3 + 0x28) != 0) {
      func_0x00010c1dcb20(param_5);
    }
    uVar3 = param_5;
    func_0x00010c100c60(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uVar4 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    uStack_90 = uVar4;
    uStack_88 = uVar6;
    uStack_80 = uVar8;
    uStack_78 = uVar9;
    uStack_70 = uVar5;
    uStack_68 = uVar7;
    func_0x00010c166440();
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010bfe83c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar4;
    uStack_88 = uVar6;
    uStack_80 = uVar8;
    uStack_78 = uVar9;
    uStack_70 = uVar5;
    uStack_68 = uVar7;
    func_0x00010c166440();
    _objc_release(uVar3);
    puStack_98 = PTR_PTR_1126fcd78;
    lStack_a0 = param_3;
    _objc_msgSendSuper2(&lStack_a0,PTR_s_setPlayerView__112655148,param_5);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 108580d98; end: 108580e07; -[SCNGSMEImmutableModelPlayer setShouldLoop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108580d98(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fcd78;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setShouldLoop__11265dc90);
  lVar1 = param_1;
  func_0x00010c2318c0();
  if (((int)lVar1 != 0) && (*(char *)(param_1 + _DAT_112776780) == '\x01')) {
    func_0x00010c1573a0(param_1);
    func_0x00010c0fe360(*(undefined8 *)(param_1 + 8));
  }
  return;
}



/* Entry: 108580e08; end: 108580e57; -[SCNGSMEImmutableModelPlayer setRenderSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108580e08(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fcd78;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setRenderSize__112658460);
  *(undefined1 *)(param_1 + _DAT_11277678c) = 1;
  return;
}



/* Entry: 108580e58; end: 108580efb; -[SCNGSMEImmutableModelPlayer _displayLinkCallback:] */

void FUN_108580e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c11aec0();
  if ((int)lVar1 != 0) {
    func_0x00010c26a180(param_3);
    lVar1 = param_1;
    func_0x00010bfc9c00();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c8eb8;
      _objc_alloc(PTR_PTR_1126c8eb8);
      func_0x00010c0413a0();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x68),param_2,puVar2);
      _CFRelease(lVar1);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108580efc; end: 108580fb7; -[SCNGSMEImmutableModelPlayer _setPlaceholderImageOnPlayerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108580efc(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + _DAT_112776788) == '\x01') {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_108580fb8;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000107c312cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 108580fb8; end: 108580feb;  */

void FUN_108580fb8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bea6540(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108580fec; end: 108581053; -[SCNGSMEImmutableModelPlayer _setPlaceholderImageOnPlayerViewDispatchBlock] */

void FUN_108580fec(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf660;
  _objc_opt_class(PTR_PTR_1126bf660);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 != 0) {
    func_0x00010c1ddb20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108581054; end: 10858110f; -[SCNGSMEImmutableModelPlayer clearLastFrameImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108581054(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + _DAT_112776788) == '\x01') {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_108581110;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000107c312cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 108581110; end: 108581143;  */

void FUN_108581110(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bde0c20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108581144; end: 1085811bb; -[SCNGSMEImmutableModelPlayer _clearPlaceholderImageOnPlayerViewDispatchBlock] */

void FUN_108581144(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf660;
  _objc_opt_class(PTR_PTR_1126bf660);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if ((uVar1 != 0) && (uVar3 = param_1, func_0x00010bfda500(), (int)uVar3 != 0)) {
    func_0x00010c1dcb20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085811bc; end: 1085811ef; -[SCNGSMEImmutableModelPlayer setPlaybackRate:] */

void FUN_1085811bc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fcd78;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setPlaybackRate__112655018);
  return;
}



/* Entry: 1085811f0; end: 108581313; -[SCNGSMEImmutableModelPlayer seekVideoAndAudioToBeginning] */

void FUN_1085811f0(undefined4 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  
  func_0x00010c11fdc0(*(undefined8 *)(param_2 + 8));
  lVar1 = param_2;
  func_0x00010c07a400();
  if ((int)lVar1 != 0) {
    func_0x00010c0f5b20(*(undefined8 *)(param_2 + 8));
  }
  _objc_initWeak(auStack_48,param_2);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c2510e0(auStack_60,param_2);
  _objc_copyWeak(auStack_70,auStack_48);
  uStack_64 = (undefined1)lVar1;
  uStack_68 = param_1;
  func_0x00010c157300(uVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 108581314; end: 10858135b;  */

void FUN_108581314(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x2c) == '\x01')) {
    func_0x00010c1e7640(*(undefined4 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10858135c; end: 108581367; -[SCNGSMEImmutableModelPlayer _supportedVideoTrackCount:andImageOverlayCount:] */

bool FUN_10858135c(void)

{
  int in_w3;
  
  return in_w3 < 2;
}



/* Entry: 108581368; end: 1085815fb; -[SCNGSMEImmutableModelPlayer _avPlayerItemFromNGSMESnap:renderSize:singleVideoTrackTransformInOut:circumstanceEngine:] */

void FUN_108581368(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_5 + 8);
  }
  _objc_retain(uVar4);
  func_0x00010be3f120(param_3,param_4,uVar4);
  _objc_release(uVar4);
  if ((param_3 & 1) != 0) {
    puVar2 = PTR_PTR_1126da178;
    _objc_alloc();
    func_0x00010c02d3c0(param_1,param_2);
    uVar4 = param_7;
    func_0x0001091286b8(param_7);
    func_0x00010c21d880(puVar2,param_4,uVar4);
    uVar4 = param_7;
    func_0x0001091286cc(param_7);
    func_0x00010c166be0(puVar2,param_4,uVar4);
    if (puVar2 == (undefined *)0x0) {
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      lStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      lVar3 = lStack_170;
    }
    else {
      func_0x00010bfbfbe0(&lStack_170,puVar2,param_4,auStack_128,1,param_7);
      lVar3 = lStack_170;
    }
    lStack_170 = lVar3;
    if (param_6 != (undefined8 *)0x0) {
      func_0x00010c299820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        param_6[1] = uStack_158;
        *param_6 = uStack_160;
        param_6[3] = uStack_148;
        param_6[2] = uStack_150;
        param_6[5] = uStack_138;
        param_6[4] = uStack_140;
      }
    }
    lVar3 = lStack_170;
    _objc_retain(lStack_170);
    func_0x00010c16c4c0(lVar3,param_4,
                        *(undefined8 *)PTR__AVAudioTimePitchAlgorithmVarispeed_110347ed8);
    _objc_release(lStack_170);
    _objc_release(uStack_168);
    while( true ) {
      _objc_release(puVar2);
      _objc_release(param_7);
      _objc_release(param_5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) break;
      ___stack_chk_fail();
LAB_1085815c0:
      _objc_retain(0);
      lVar3 = 0;
LAB_1085815cc:
      puVar2 = (undefined *)0x0;
LAB_108581480:
      _objc_retain(puVar2);
      _objc_release(lVar3);
      puVar1 = puVar2;
      func_0x00010bf52a60(puVar2,param_4,&uStack_120,auStack_d8,0x10);
      lVar3 = 0;
      if (puVar1 != (undefined *)0x0) {
        lVar3 = *plStack_110;
        do {
          if (*plStack_110 != lVar3) {
            _objc_enumerationMutation(puVar2);
          }
          puVar1 = puVar1 + -1;
        } while ((puVar1 != (undefined *)0x0) ||
                (puVar1 = puVar2, func_0x00010bf52a60(puVar2,param_4,&uStack_120,auStack_d8,0x10),
                puVar1 != (undefined *)0x0));
        lVar3 = 0;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
    return;
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  if (param_5 == 0) goto LAB_1085815c0;
  lVar3 = *(long *)(param_5 + 8);
  _objc_retain(lVar3);
  if (lVar3 == 0) goto LAB_1085815cc;
  puVar2 = *(undefined **)(lVar3 + 8);
  goto LAB_108581480;
}



/* Entry: 1085815fc; end: 10858160f; -[SCNGSMEImmutableModelPlayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085815fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776784,0);
  return;
}



/* Entry: 108581610; end: 108581873; +[SCNGSMEInteractiveImagePlayer playerModelIsValid:] */

bool FUN_108581610(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    _objc_retain(0);
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_3 + 8);
    _objc_retain(lVar6);
    if (lVar6 != 0) {
      lVar5 = *(long *)(lVar6 + 8);
      goto LAB_108581670;
    }
  }
  lVar5 = 0;
LAB_108581670:
  _objc_retain(lVar5);
  _objc_release(lVar6);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  bVar1 = false;
  if (lVar2 == 0) goto LAB_1085817f0;
  iVar7 = 0;
  iVar8 = 0;
  iVar9 = 0;
  do {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar5);
      }
      if (*(long *)(lVar10 * 8) == 0) {
LAB_1085816f0:
        iVar8 = iVar8 + 1;
      }
      else {
        lVar4 = *(long *)(*(long *)(lVar10 * 8) + 8);
        if (lVar4 == 2) {
          iVar7 = iVar7 + 1;
        }
        else if (lVar4 == 1) {
          iVar9 = iVar9 + 1;
        }
        else if (lVar4 == 0) goto LAB_1085816f0;
      }
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = lVar5;
    func_0x00010bf52a60();
    if (lVar2 == 0) {
      _objc_release(lVar5);
      bVar1 = false;
      if (iVar9 != 1) goto LAB_1085817f8;
      if (1 < iVar8) goto LAB_1085817f8;
      if (iVar7 != 0) goto LAB_1085817f8;
      if (param_3 == 0) goto LAB_108581854;
      lVar6 = *(long *)(param_3 + 8);
      while( true ) {
        _objc_retain(lVar6);
        lVar5 = lVar6;
        func_0x00010911c750(lVar6,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)(lVar5 + 0x20);
        }
        _objc_retain(lVar6);
        lVar2 = lVar6;
        func_0x00010bf529e0();
        _objc_release(lVar6);
        if (lVar2 == 1) {
          if (lVar5 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *(long *)(lVar5 + 0x20);
          }
          _objc_retain(lVar6);
          lVar2 = lVar6;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          if (lVar2 == 0) {
            bVar1 = false;
          }
          else {
            bVar1 = *(long *)(lVar2 + 0x10) == 2;
          }
          _objc_release(lVar2);
        }
        else {
          bVar1 = false;
        }
LAB_1085817f0:
        _objc_release(lVar5);
LAB_1085817f8:
        _objc_release(param_3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) break;
        ___stack_chk_fail();
LAB_108581854:
        lVar6 = 0;
      }
      return bVar1;
    }
  } while( true );
}



/* Entry: 108581874; end: 1085818bf; +[SCNGSMEInteractiveImagePlayer playerModelRequiresAudioPlayer:] */

bool FUN_108581874(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x18);
  }
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf529e0(lVar2);
  _objc_release(lVar2);
  return lVar1 != 0;
}



/* Entry: 1085818c0; end: 10858190b; +[SCNGSMEInteractiveImagePlayer playerModelRequiresRendering:] */

bool FUN_1085818c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x10);
  }
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf529e0(lVar2);
  _objc_release(lVar2);
  return lVar1 != 0;
}



/* Entry: 10858190c; end: 108581a1b; +[SCNGSMEInteractiveImagePlayer durationForPlayerModel:] */

void FUN_10858190c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_4 + 8);
  }
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010911c750(lVar4,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar2 + 0x20);
  }
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar3 == 0) {
    _objc_retain(0);
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x20);
    _objc_retain(lVar4);
    if (lVar4 != 0) {
      func_0x00010bdc1140(&uStack_48,lVar4);
      goto LAB_1085819c8;
    }
  }
  lVar4 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
LAB_1085819c8:
  _objc_release(lVar4);
  puVar1 = (undefined8 *)PTR__kCMTimeInvalid_110348648;
  if ((uStack_40 & 0x100000000) != 0) {
    puVar1 = &uStack_48;
  }
  uVar5 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar5;
  param_1[2] = puVar1[2];
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 108581a1c; end: 108581c1f; -[SCNGSMEInteractiveImagePlayer initWithPlayerModel:playerProvider:audioSession:playbackLogger:circumstanceEngine:firstFrameImage:preparePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***
FUN_108581a1c(undefined8 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar2 = PTR_PTR_1126bf638;
  func_0x00010c100d00();
  if ((int)puVar2 == 0) {
    pppuVar4 = (undefined8 ***)0x0;
  }
  else {
    puStack_68 = PTR_PTR_1126fcd80;
    pppuVar4 = &ppuStack_70;
    ppuStack_70 = param_1;
    _objc_msgSendSuper2(pppuVar4,PTR_s_initWithPlayerModel_playerProvid_1125eb670,param_3,param_4,
                        param_5,param_7,param_8,param_6,param_9);
    if (pppuVar4 != (undefined8 ***)0x0) {
      puVar2 = PTR_PTR_1126bf638;
      func_0x00010c100d40();
      *(char *)((long)pppuVar4 + (long)_DAT_112776794) = (char)puVar2;
      puVar2 = PTR_PTR_1126bf638;
      func_0x00010c100d60();
      *(char *)((long)pppuVar4 + (long)_DAT_112776798) = (char)puVar2;
      *(undefined1 *)((long)pppuVar4 + (long)_DAT_11277679c) = 0;
      *(undefined1 *)((long)pppuVar4 + (long)_DAT_1127767a0) = 1;
      uVar3 = param_7;
      func_0x000109128690();
      *(char *)((long)pppuVar4 + (long)_DAT_1127767a4) = (char)uVar3;
      *(undefined1 *)(pppuVar4 + 0x1c) = 1;
      puVar1 = (undefined8 *)((long)pppuVar4 + (long)_DAT_1127767a8);
      uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      puVar1[1] = uVar6;
      *puVar1 = uVar5;
      uVar3 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      puVar1[2] = uVar3;
      puVar1 = (undefined8 *)((long)pppuVar4 + (long)_DAT_1127767ac);
      puVar1[1] = uVar6;
      *puVar1 = uVar5;
      puVar1[2] = uVar3;
      puVar1 = (undefined8 *)((long)pppuVar4 + (long)_DAT_1127767b0);
      func_0x00010c130060(pppuVar4);
      FUN_108581c20(&uStack_a0,param_3);
      puVar1[1] = uStack_98;
      *puVar1 = uStack_a0;
      puVar1[3] = uStack_88;
      puVar1[2] = uStack_90;
      puVar1[5] = uStack_78;
      puVar1[4] = uStack_80;
      func_0x00010be841e0(pppuVar4);
    }
    _objc_retain(pppuVar4);
    param_1 = pppuVar4;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return pppuVar4;
}



/* Entry: 108581c20; end: 108581dbb;  */

void FUN_108581c20(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_4 + 8);
  }
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010911c750(lVar6,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar2 + 0x20);
  }
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar3 + 0x48);
  }
  _objc_retain(lVar6);
  _objc_release(lVar6);
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  if (lVar6 == 0) {
    uVar7 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    param_3[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    *param_3 = uVar7;
    param_3[3] = uVar9;
    param_3[2] = uVar8;
    uVar7 = *(undefined8 *)(puVar1 + 0x20);
    param_3[5] = *(undefined8 *)(puVar1 + 0x28);
    param_3[4] = uVar7;
  }
  else {
    lVar6 = lVar3;
    func_0x000109120dc4(param_1,param_2,*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),lVar3,1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__CGAffineTransformIdentity_110347008;
    if (lVar4 == 0) {
      uVar7 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      param_3[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      *param_3 = uVar7;
      param_3[3] = uVar9;
      param_3[2] = uVar8;
      uVar7 = *(undefined8 *)(puVar1 + 0x20);
      param_3[5] = *(undefined8 *)(puVar1 + 0x28);
      param_3[4] = uVar7;
    }
    else {
      lVar5 = lVar4;
      func_0x00010c154b60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        param_3[3] = 0;
        param_3[2] = 0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[1] = 0;
        *param_3 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar5 + 8);
        uVar9 = *(undefined8 *)(lVar5 + 0x20);
        uVar8 = *(undefined8 *)(lVar5 + 0x18);
        param_3[1] = *(undefined8 *)(lVar5 + 0x10);
        *param_3 = uVar7;
        param_3[3] = uVar9;
        param_3[2] = uVar8;
        uVar7 = *(undefined8 *)(lVar5 + 0x28);
        param_3[5] = *(undefined8 *)(lVar5 + 0x30);
        param_3[4] = uVar7;
      }
      _objc_release();
    }
    _objc_release(lVar4);
    _objc_release(lVar6);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108581dbc; end: 108581e2b; -[SCNGSMEInteractiveImagePlayer dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108581dbc(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = (long)_DAT_1127767b4;
  if (*(long *)(param_1 + lVar1) != 0) {
    _CVPixelBufferRelease();
    *(undefined8 *)(param_1 + lVar1) = 0;
  }
  lVar1 = (long)_DAT_1127767b8;
  if (*(long *)(param_1 + lVar1) != 0) {
    _CVPixelBufferPoolRelease();
    *(undefined8 *)(param_1 + lVar1) = 0;
  }
  puStack_28 = PTR_PTR_1126fcd80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108581e2c; end: 108581e87; -[SCNGSMEInteractiveImagePlayer setCommandProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108581e2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127767bc;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010c17ed40(*(undefined8 *)(param_1 + _DAT_1127767c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108581e88; end: 108581faf; -[SCNGSMEInteractiveImagePlayer canChangeModelWithoutRestart:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108581e88(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bf638;
  func_0x00010c100d00();
  if ((int)puVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_1;
    func_0x00010c100cc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar3 + 8);
    }
    _objc_retain(uVar7);
    _objc_release(lVar3);
    if (param_3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(param_3 + 8);
    }
    _objc_retain(uVar8);
    uVar4 = uVar7;
    func_0x00010911ea34(uVar7,uVar8);
    _objc_release(uVar8);
    if ((int)uVar4 == 0) {
      bVar1 = false;
    }
    else {
      puVar2 = PTR_PTR_1126bf638;
      func_0x00010c100d40(PTR_PTR_1126bf638);
      puVar5 = PTR_PTR_1126bf638;
      func_0x00010c100d60(PTR_PTR_1126bf638);
      if ((*(byte *)(param_1 + _DAT_112776794) & 1) == 0) {
        uVar6 = (uint)*(byte *)(param_1 + _DAT_112776798);
      }
      else {
        uVar6 = 1;
      }
      bVar1 = uVar6 == (((uint)puVar2 | (uint)puVar5) & 1);
    }
    _objc_release(uVar7);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108581fb0; end: 10858239b; -[SCNGSMEInteractiveImagePlayer setPlayerModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108581fb0(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar3 = param_1;
  func_0x00010bf2c640();
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010c0ff700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac680();
    _objc_release(puVar5);
    func_0x00010be87900(param_1);
    func_0x00010c0ff700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0afb60();
LAB_1085822d4:
    _objc_release(param_1);
  }
  else {
    lVar8 = (long)_DAT_112776798;
    if (param_3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(param_3 + 0x10);
    }
    bVar2 = param_1[lVar8];
    _objc_retain(uVar6);
    puVar3 = param_1;
    func_0x00010c100cc0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(puVar3 + 0x10);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c071ae0();
    _objc_release(uVar7);
    _objc_release(puVar3);
    _objc_release(uVar6);
    if ((uVar4 & 1) == 0) {
      if (param_3 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(param_3 + 0x10);
      }
      _objc_retain(uVar7);
      func_0x00010bee34a0(param_1);
      _objc_release(uVar7);
    }
    if (param_3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(param_3 + 0x18);
    }
    _objc_retain(uVar6);
    puVar3 = param_1;
    func_0x00010c100cc0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(puVar3 + 0x18);
    }
    _objc_retain(uVar7);
    uVar4 = uVar6;
    func_0x00010c071ae0();
    _objc_release(uVar7);
    _objc_release(puVar3);
    _objc_release(uVar6);
    if ((uVar4 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      puVar3 = PTR_PTR_1126da178;
      func_0x00010bf0f380(PTR_PTR_1126da178);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16be60(uVar7);
      _objc_release(puVar3);
    }
    puStack_58 = PTR_PTR_1126fcd80;
    puStack_60 = param_1;
    _objc_msgSendSuper2(&puStack_60,PTR_s_setPlayerModel__1126550e8,param_3);
    puVar3 = PTR_PTR_1126bf638;
    func_0x00010c100d40();
    param_1[_DAT_112776794] = (char)puVar3;
    puVar3 = PTR_PTR_1126bf638;
    func_0x00010c100d60();
    param_1[lVar8] = (char)puVar3;
    puVar1 = (undefined8 *)(param_1 + _DAT_1127767b0);
    func_0x00010c130060(param_1);
    FUN_108581c20(&uStack_90,param_3);
    puVar1[1] = uStack_88;
    *puVar1 = uStack_90;
    puVar1[3] = uStack_78;
    puVar1[2] = uStack_80;
    puVar1[5] = uStack_68;
    puVar1[4] = uStack_70;
    param_1[_DAT_1127767a0] = 1;
    puVar3 = param_1;
    if ((bVar2 & 1) != 0) {
      if ((param_1[lVar8] & 1) != 0) goto LAB_1085822e4;
      puVar5 = param_1;
      func_0x00010c100fe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bddbdc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar3 != (undefined *)0x0) && (param_1 != (undefined *)0x0)) {
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_10858239c;
        puStack_a8 = &UNK_110841f80;
        puStack_a0 = puVar3;
        puStack_98 = param_1;
        _objc_retain(param_1);
        _objc_retain(puVar3);
        func_0x000107c312cc("APPSTORE",&puStack_c0);
        _objc_release(puStack_98);
        _objc_release(puStack_a0);
      }
      goto LAB_1085822d4;
    }
    if (param_1[lVar8] == 0) goto LAB_1085822e4;
    func_0x00010c130060(param_1);
    func_0x00010bdf1580(param_1);
    puVar5 = param_1;
    func_0x00010c100fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddbdc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (puVar3 != (undefined *)0x0) {
      func_0x00010be5dac0(param_1);
    }
    func_0x00010bea91c0(param_1);
  }
  _objc_release(puVar3);
LAB_1085822e4:
  _objc_release(param_3);
  return;
}



/* Entry: 10858239c; end: 1085823a7;  */

void FUN_10858239c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setImageOnOverlayLayer__1126483b8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1085823a8; end: 1085824f3; -[SCNGSMEInteractiveImagePlayer _castToGPURenderView:] */

void FUN_1085823a8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bf5e0;
  _objc_opt_class(PTR_PTR_1126bf5e0);
  puVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = param_3;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0ff700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac680();
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be87900(param_1);
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar4 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    puVar4 = param_3;
    puVar1 = param_3;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1085824f4; end: 1085825c3; -[SCNGSMEInteractiveImagePlayer _maskRenderViewUntilFirstRenderedFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085824f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1085825c4;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = lVar1;
  _objc_retain();
  _objc_retain(param_3);
  func_0x000107c312cc("APPSTORE",&puStack_60);
  *(undefined1 *)(param_1 + _DAT_112776790) = 1;
  func_0x00010c0bb400(param_1);
  _objc_release(lStack_38);
  _objc_release(uStack_40);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1085825c4; end: 1085825cf;  */

void FUN_1085825c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setImageOnOverlayLayer__1126483b8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1085825d0; end: 1085826af; -[SCNGSMEInteractiveImagePlayer _clearRenderViewMaskAfterFirstRenderedFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085825d0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  lVar5 = (long)_DAT_112776790;
  if (*(char *)(param_1 + lVar5) == '\x01') {
    uVar2 = param_1;
    func_0x00010c100fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bf5e0;
    _objc_opt_class(PTR_PTR_1126bf5e0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 != 0) {
      *(undefined1 *)(param_1 + lVar5) = 0;
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_1085826b0;
      puStack_40 = &UNK_110842e18;
      _objc_retain(uVar2);
      uStack_38 = uVar1;
      func_0x000107c312cc("APPSTORE",&puStack_58);
      _objc_release(uStack_38);
    }
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 1085826b0; end: 1085826b7;  */

void FUN_1085826b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3b550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_clearImageOverlayLayer_1125ac6f8);
  return;
}



/* Entry: 1085826b8; end: 10858275f; -[SCNGSMEInteractiveImagePlayer setPlayerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085826b8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x00010bddbdc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + _DAT_112776798) == '\x01') {
      func_0x00010be5dac0(param_1);
    }
    puStack_28 = PTR_PTR_1126fcd80;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_setPlayerView__112655148,lVar1);
    lVar2 = lVar1;
    func_0x00010c0ef040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127767c4);
    *(long *)(param_1 + _DAT_1127767c4) = lVar2;
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108582760; end: 1085827d7; -[SCNGSMEInteractiveImagePlayer isPlaying] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_108582760(long param_1)

{
  long *plVar1;
  long lStack_20;
  undefined *puStack_18;
  
  if (((*(byte *)(param_1 + _DAT_112776794) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_112776798) != '\x01')) {
    if (*(long *)(param_1 + 0xa8) != 0) {
      return (long *)(ulong)(*(long *)(*(long *)(param_1 + 0xa8) + 0x10) == 2);
    }
    return (long *)(undefined1 *)0x0;
  }
  plVar1 = &lStack_20;
  puStack_18 = PTR_PTR_1126fcd80;
  lStack_20 = param_1;
  _objc_msgSendSuper2(&lStack_20,PTR_s_isPlaying_1125fc310);
  return plVar1;
}



/* Entry: 1085827d8; end: 10858284f; -[SCNGSMEInteractiveImagePlayer currentTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085827d8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lStack_20;
  undefined *puStack_18;
  
  if (((*(byte *)(param_2 + _DAT_112776794) & 1) == 0) &&
     (*(char *)(param_2 + _DAT_112776798) != '\x01')) {
    puVar1 = (undefined8 *)(param_2 + _DAT_1127767a8);
    uVar2 = *puVar1;
    param_1[1] = puVar1[1];
    *param_1 = uVar2;
    param_1[2] = puVar1[2];
    return;
  }
  puStack_18 = PTR_PTR_1126fcd80;
  lStack_20 = param_2;
  _objc_msgSendSuper2(&lStack_20,PTR_s_currentTime_1125b5ac8);
  return;
}



/* Entry: 108582850; end: 1085828cf; -[SCNGSMEInteractiveImagePlayer _currentStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_108582850(long param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long lStack_20;
  undefined *puStack_18;
  
  if (((*(byte *)(param_1 + _DAT_112776794) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_112776798) != '\x01')) {
    if (*(long *)(param_1 + 0x88) == 1) {
      puVar1 = (undefined1 *)0x2;
      if (*(float *)(param_1 + 0xa0) == 0.0) {
        puVar1 = (undefined1 *)0x1;
      }
      return (long *)puVar1;
    }
    return (long *)(undefined1 *)0x0;
  }
  plVar2 = &lStack_20;
  puStack_18 = PTR_PTR_1126fcd80;
  lStack_20 = param_1;
  _objc_msgSendSuper2(&lStack_20,PTR_s__currentStatus_11255b628);
  return plVar2;
}



/* Entry: 1085828d0; end: 108582937; -[SCNGSMEInteractiveImagePlayer startRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085828d0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fcd80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_startRunning_112671b50);
  if (((*(byte *)(param_1 + _DAT_112776794) & 1) == 0) &&
     ((*(byte *)(param_1 + _DAT_112776798) & 1) == 0)) {
    *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  }
  return;
}



/* Entry: 108582938; end: 1085829af; -[SCNGSMEInteractiveImagePlayer resumeRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108582938(long param_1)

{
  long lStack_20;
  undefined *puStack_18;
  
  if (((*(byte *)(param_1 + _DAT_112776794) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_112776798) != '\x01')) {
    *(undefined1 *)(param_1 + 0x78) = 1;
    *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
    *(undefined8 *)(param_1 + _DAT_1127767c8) = 0;
    return;
  }
  puStack_18 = PTR_PTR_1126fcd80;
  lStack_20 = param_1;
  _objc_msgSendSuper2(&lStack_20,PTR_s_resumeRunning_11262d010);
  return;
}



/* Entry: 1085829b0; end: 108582a3f; -[SCNGSMEInteractiveImagePlayer pauseRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085829b0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_20;
  undefined *puStack_18;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1127767ac);
  puVar2 = (undefined8 *)(param_1 + _DAT_1127767a8);
  uVar3 = puVar2[2];
  uVar4 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar4;
  puVar1[2] = uVar3;
  if (((*(byte *)(param_1 + _DAT_112776794) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_112776798) != '\x01')) {
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + _DAT_1127767c8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be1a8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateAndPublishCurrentState_1125643d8);
    return;
  }
  puStack_18 = PTR_PTR_1126fcd80;
  lStack_20 = param_1;
  _objc_msgSendSuper2(&lStack_20,PTR_s_pauseRunning_11261b218);
  return;
}



/* Entry: 108582a40; end: 108582aeb; -[SCNGSMEInteractiveImagePlayer stopPlayingAndSeekSmoothlyToTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108582a40(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_30;
  undefined *puStack_28;
  
  if (((*(byte *)(param_1 + _DAT_112776794) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_112776798) != '\x01')) {
    func_0x00010c0f5fe0(param_1);
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    uStack_40 = param_3[2];
    func_0x00010c157280(param_1);
  }
  else {
    puStack_28 = PTR_PTR_1126fcd80;
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    uStack_40 = param_3[2];
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_stopPlayingAndSeekSmoothlyToTime_1126733b0,&uStack_50);
  }
  return;
}



/* Entry: 108582aec; end: 108582aef;  */

void FUN_108582aec(void)

{
  return;
}



/* Entry: 108582af0; end: 108582c4f; -[SCNGSMEInteractiveImagePlayer seekToTime:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108582af0(long param_1,undefined8 param_2,double *param_3,long param_4)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  if (((*(byte *)(param_1 + _DAT_112776794) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_112776798) != '\x01')) {
    if ((*(uint *)((long)param_3 + 0xc) & 0x1d) == 1) {
      dStack_58 = param_3[1];
      dStack_60 = *param_3;
      dStack_70 = param_3[2];
    }
    else {
      dStack_58 = *(double *)(PTR__kCMTimeZero_110348670 + 8);
      dStack_60 = *(double *)PTR__kCMTimeZero_110348670;
      dStack_70 = *(double *)(PTR__kCMTimeZero_110348670 + 0x10);
    }
    pdVar1 = (double *)(param_1 + _DAT_1127767a8);
    pdVar1[1] = dStack_58;
    *pdVar1 = dStack_60;
    pdVar1[2] = dStack_70;
    dStack_78 = dStack_58;
    dStack_80 = dStack_60;
    dVar3 = dStack_60;
    dStack_50 = dStack_70;
    _CMTimeGetSeconds(&dStack_80);
    *(long *)(param_1 + _DAT_1127767cc) = (long)(dVar3 * 30.0 + 1.0);
    *(undefined8 *)(param_1 + _DAT_1127767c8) = 0;
    pdVar2 = (double *)(param_1 + _DAT_1127767ac);
    dVar4 = pdVar1[1];
    dVar3 = *pdVar1;
    pdVar2[2] = pdVar1[2];
    pdVar2[1] = dVar4;
    *pdVar2 = dVar3;
    func_0x00010be1a8e0(param_1);
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,1);
    }
  }
  else {
    puStack_38 = PTR_PTR_1126fcd80;
    dStack_58 = param_3[1];
    dStack_60 = *param_3;
    dStack_50 = param_3[2];
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_seekToTime_completionHandler__1126336c0,&dStack_60,param_4)
    ;
  }
  _objc_release(param_4);
  return;
}



/* Entry: 108582c50; end: 108582ce7; -[SCNGSMEInteractiveImagePlayer seekVideoAndAudioToBeginning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108582c50(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_20;
  undefined *puStack_18;
  
  puVar2 = PTR__kCMTimeZero_110348670;
  if (((*(byte *)(param_1 + _DAT_112776794) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_112776798) != '\x01')) {
    puVar1 = (undefined8 *)(param_1 + _DAT_1127767a8);
    uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    puVar1[1] = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    *puVar1 = uVar3;
    puVar1[2] = *(undefined8 *)(puVar2 + 0x10);
    *(undefined8 *)(param_1 + _DAT_1127767cc) = 1;
    *(undefined8 *)(param_1 + _DAT_1127767c8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be1a8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateAndPublishCurrentState_1125643d8);
    return;
  }
  puStack_18 = PTR_PTR_1126fcd80;
  lStack_20 = param_1;
  _objc_msgSendSuper2(&lStack_20,PTR_s_seekVideoAndAudioToBeginning_112633708);
  return;
}



/* Entry: 108582ce8; end: 108582ebf; -[SCNGSMEInteractiveImagePlayer _prepareImageViewer] */

void FUN_108582ce8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = param_1;
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf5e0;
  _objc_opt_class(PTR_PTR_1126bf5e0);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c0ff700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac680();
    _objc_release(puVar1);
    func_0x00010be87900(param_1);
  }
  else {
    puVar3 = param_1;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c0ff700(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ac680();
      _objc_release(puVar4);
      func_0x00010be87900(param_1);
    }
    else {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_108582ec0;
      puStack_58 = &UNK_110841f80;
      _objc_retain(puVar1);
      puStack_50 = puVar2;
      _objc_retain(puVar3);
      puStack_48 = puVar3;
      func_0x000107c312cc("APPSTORE",&puStack_70);
      func_0x00010bebc200(param_1);
      _objc_release(puStack_48);
      puVar1 = puStack_50;
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 108582ec0; end: 108582f0f;  */

void FUN_108582ec0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1aa650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setImageOnOverlayLayer__1126483b8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}


