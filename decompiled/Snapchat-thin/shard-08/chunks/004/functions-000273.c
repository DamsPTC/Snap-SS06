/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060b3c70; end: 1060b3c87; -[SCFeatureMusicImpl _isFavoritedSoundsEducationTooltipRequestCurrent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1060b3c70(long param_1,undefined8 param_2,long param_3)

{
  return *(long *)(param_1 + _DAT_11273ec34) == param_3;
}



/* Entry: 1060b3c88; end: 1060b3d9f; -[SCFeatureMusicImpl _showFavoritedSoundsEducationTooltipIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b3c88(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar3 = (long)_DAT_11273ec40;
  if (((*(long *)(param_1 + lVar3) == 0) && (*(long *)(param_1 + _DAT_11273ec44) == 0)) &&
     (lVar1 = param_1, func_0x00010be405e0(), (int)lVar1 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273ec34);
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = uVar4;
    func_0x00010c150360(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar2;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1060b3da0; end: 1060b3e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b3da0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11273ec40);
    *(undefined8 *)(lVar1 + _DAT_11273ec40) = 0;
    _objc_release(uVar2);
    *(undefined1 *)(lVar1 + _DAT_11273ec30) = 1;
    func_0x00010bebaba0(lVar1,param_2,*(undefined8 *)(lVar1 + _DAT_11273ec2c),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060b3e10; end: 1060b3e63; -[SCFeatureMusicImpl _showFavoritedSoundsEducationAlbumArtImage:button:duration:] */

bool FUN_1060b3e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  if (param_4 != 0 && param_5 != 0) {
    func_0x00010c237d20(param_1,0,param_5);
    func_0x00010be9b000(param_1,param_2);
  }
  return param_4 != 0 && param_5 != 0;
}



/* Entry: 1060b3e64; end: 1060b3ebb; -[SCFeatureMusicImpl _showScheduledFavoritedSoundsEducationAlbumArtOnlyWithImage:button:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b3e64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010beb9140();
  if ((int)lVar1 != 0) {
    func_0x00010be530c0(param_1,param_2,0);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273ec2c);
  *(undefined8 *)(param_1 + _DAT_11273ec2c) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + _DAT_11273ec28) = 0;
  *(undefined1 *)(param_1 + _DAT_11273ec30) = 0;
  return;
}



/* Entry: 1060b3ebc; end: 1060b412f; -[SCFeatureMusicImpl _showScheduledFavoritedSoundsEducationTooltipWithAlbumArtImage:requestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b3ebc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010be40600();
  if (((int)lVar1 != 0) && (lVar1 = param_2, func_0x00010be405e0(), (int)lVar1 != 0)) {
    lVar1 = param_2 + _DAT_11273ec04;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf25540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010be0e780(param_2);
      uVar3 = *(undefined8 *)(param_2 + _DAT_11273eba0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfdb940();
      _objc_release(uVar3);
      if ((int)uVar4 == 0) {
        _objc_initWeak(auStack_68,lVar2);
        _objc_initWeak(auStack_70,param_2);
        uVar5 = *(undefined8 *)(param_2 + _DAT_11273eb34);
        func_0x00010bf9c660();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010bfa1200();
        if ((int)uVar3 == 0) {
          func_0x000107e483e8();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x000107e48400();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_copyWeak(auStack_90,auStack_70);
        uStack_80 = param_5;
        _objc_copyWeak(auStack_88,auStack_68);
        _objc_retain(param_4);
        uStack_78 = param_1;
        func_0x00010c236140(0,param_1,lVar2);
        _objc_release(uVar3);
        _objc_release(uVar4);
        _objc_release(uVar5);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_88);
        _objc_destroyWeak(auStack_90);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
      }
      else {
        func_0x00010bebab80(param_1,param_2);
      }
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1060b4130; end: 1060b4217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b4130(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010be40600(uVar1,param_2,*(undefined8 *)(param_1 + 0x38));
    if (((int)uVar2 == 0) || (uVar2 = uVar1, func_0x00010be405e0(), (uVar2 & 1) == 0)) {
      lVar3 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bfe1a20();
      _objc_release(lVar3);
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained(param_1);
      func_0x00010bfe2060();
      _objc_release(param_1);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      lVar3 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar3);
      uVar2 = uVar1;
      func_0x00010beb9140(*(undefined8 *)(param_1 + 0x40),uVar1,param_2,uVar4,lVar3);
      _objc_release(lVar3);
      if ((uVar2 & 1) == 0) {
        func_0x00010be9b000(*(undefined8 *)(param_1 + 0x40),uVar1);
      }
      uVar4 = *(undefined8 *)(uVar1 + (long)_DAT_11273ec2c);
      *(undefined8 *)(uVar1 + (long)_DAT_11273ec2c) = 0;
      _objc_release(uVar4);
      func_0x00010be9afe0(uVar1,param_2,*(undefined8 *)(param_1 + 0x38));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060b4218; end: 1060b4317; -[SCFeatureMusicImpl _scheduleFavoritedSoundsEducationTapRoutingTimerWithDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b4218(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar3 = (long)_DAT_11273ec38;
  func_0x00010c069d00(*(undefined8 *)(param_2 + lVar3));
  *(undefined1 *)(param_2 + _DAT_11273ec3c) = 1;
  _objc_initWeak(auStack_48,param_2);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c150360(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined **)(param_2 + lVar3) = puVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1060b4318; end: 1060b4363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b4318(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273ec38);
    *(undefined8 *)(param_1 + _DAT_11273ec38) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + _DAT_11273ec3c) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060b4364; end: 1060b445b; -[SCFeatureMusicImpl _scheduleFavoritedSoundsEducationSeenTimerForRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b4364(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar3 = (long)_DAT_11273ec44;
  if (*(long *)(param_1 + lVar3) == 0) {
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_3;
    func_0x00010c150360(0x3fd2e147ae147ae2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1060b445c; end: 1060b44ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b445c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11273ec44);
    *(undefined8 *)(lVar1 + _DAT_11273ec44) = 0;
    _objc_release(uVar2);
    func_0x00010be5d440(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060b44ac; end: 1060b44ef; -[SCFeatureMusicImpl _markFavoritedSoundsEducationTooltipSeenForRequestId:] */

void FUN_1060b44ac(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be40600();
  if (((int)uVar1 != 0) && (uVar1 = param_1, func_0x00010be405e0(), (uVar1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be5d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__markFavoritedSoundsEducationToo_112574ea8)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be35750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideFavoritedSoundsEducationToo_11256af70);
  return;
}



/* Entry: 1060b44f0; end: 1060b4533; -[SCFeatureMusicImpl _logFavoritedSoundsEducationEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b44f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273eba8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060b4534; end: 1060b45cf; -[SCFeatureMusicImpl _markFavoritedSoundsEducationTooltipSeen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b4534(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273eba0;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdb940();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010be530c0(param_1,param_2,0);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a6ac0();
    _objc_release(uVar3);
  }
  *(undefined1 *)(param_1 + _DAT_11273ec28) = 0;
  *(undefined1 *)(param_1 + _DAT_11273ec30) = 0;
  return;
}



/* Entry: 1060b45d0; end: 1060b4623; -[SCFeatureMusicImpl _canUseFavoritedSoundsAlbumArtForRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1060b45d0(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1;
  func_0x00010be40600();
  if (((int)lVar1 == 0) || (*(char *)(param_1 + _DAT_11273ec28) != '\x01')) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + _DAT_11273ec30) ^ 1;
  }
  return bVar2 & 1;
}



/* Entry: 1060b4624; end: 1060b4687; -[SCFeatureMusicImpl _setPendingFavoritedSoundsAlbumArtImage:requestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b4624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bdda1e0(param_1,param_2,param_4);
  if ((int)lVar2 != 0) {
    lVar2 = (long)_DAT_11273ec2c;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060b4688; end: 1060b484f; -[SCFeatureMusicImpl _loadFavoritedSoundsAlbumArtInfo:requestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b4688(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273eb34);
    func_0x00010c0c57a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf93ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bf93e80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_78,auStack_68);
    uStack_70 = param_4;
    func_0x00010c09ad20(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1060b4850; end: 1060b48af;  */

void FUN_1060b4850(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010bea6340(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060b48b0; end: 1060b4a03; -[SCFeatureMusicImpl _fetchAlbumArtForFavoritedTrackId:requestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b48b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0b4ca0();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_11273eb34);
    func_0x00010c15a860();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      _objc_initWeak(auStack_48,param_1);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_58,auStack_48);
      uStack_50 = param_4;
      func_0x00010c09c160(lVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1060b4a04; end: 1060b4aa7;  */

void FUN_1060b4a04(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_1, func_0x00010bdda1e0(), (int)lVar1 != 0)) {
    lVar1 = param_2;
    func_0x00010beff2a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010beff2a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be4d300(param_1);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060b4aa8; end: 1060b4d6b; -[SCFeatureMusicImpl _preparePlayerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b4aa8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lVar7 = *(long *)(param_1 + _DAT_11273ebb4);
  if (lVar7 != 0) {
    _objc_retain(lVar7);
    lVar9 = (long)_DAT_11273ebbc;
    if (*(long *)(param_1 + lVar9) == 0) {
      func_0x00010be9e2c0();
      puVar1 = PTR_PTR_1126c47f0;
      _objc_alloc();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1060b4d6c;
      puStack_80 = &UNK_1109094f0;
      _objc_retain(lVar7);
      lStack_78 = lVar7;
      func_0x00010bff54a0();
      uVar4 = *(undefined8 *)(param_1 + lVar9);
      *(undefined **)(param_1 + lVar9) = puVar1;
      _objc_release(uVar4);
      func_0x00010c210480(*(undefined8 *)(param_1 + lVar9));
      lVar8 = (long)_DAT_11273ec48;
      func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar8));
      _objc_initWeak(auStack_a0,param_1);
      uVar2 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c100a40();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_a8,auStack_a0);
      uVar4 = uVar2;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      *(undefined8 *)(param_1 + lVar8) = uVar4;
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_a0);
      _objc_release(lStack_78);
    }
    lVar8 = (long)_DAT_11273ec4c;
    if (*(long *)(param_1 + lVar8) == 0) {
      lVar10 = (long)_DAT_11273eb90;
      uVar5 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010bf46680(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf55480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar5);
      uVar3 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c0d3da0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf47660();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      *(undefined8 *)(param_1 + lVar8) = uVar5;
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    func_0x00010bed35e0(param_1);
    func_0x00010c108f40(*(undefined8 *)(param_1 + lVar9));
    _objc_release(lVar7);
  }
  return;
}



/* Entry: 1060b4d6c; end: 1060b4eeb;  */

void FUN_1060b4d6c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15a4a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0ef80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0082a0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010bf0ffa0(&uStack_48,lVar4);
  }
  puVar5 = puVar1;
  func_0x000107fb6770(puVar1,&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1060b4eec; end: 1060b4eef;  */

void FUN_1060b4eec(void)

{
  return;
}



/* Entry: 1060b4ef0; end: 1060b4f9b; -[SCFeatureMusicImpl _relinquishAudioSessionToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b4ef0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273ec4c;
  if (*(long *)(param_1 + lVar3) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273eb90);
    func_0x00010c0d3da0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1288c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1060b4f9c; end: 1060b5227; -[SCFeatureMusicImpl _updateSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b4f9c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be3fa60();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bdd9460(param_1,param_2,0);
    if ((int)uVar1 == 0) {
      func_0x00010bedaa20(param_1,param_2,param_3);
    }
    else {
      func_0x00010bee0240(param_1,param_2,param_3);
    }
  }
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + (long)_DAT_11273ebe0));
  lVar6 = (long)_DAT_11273ebb4;
  if (*(long *)(param_1 + lVar6) != 0) {
    func_0x00010bdeaba0(param_1,param_2,1);
  }
  lVar7 = (long)_DAT_11273ebbc;
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + lVar7));
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = 0;
  _objc_release(uVar2);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(long *)(param_1 + lVar6) = param_3;
  _objc_release(uVar2);
  func_0x00010bee25a0(param_1);
  func_0x00010bed4e40(param_1);
  func_0x00010be78e60(param_1);
  func_0x00010bee4240(param_1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    func_0x00010be02a00(param_1);
    puVar5 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar6 = param_3;
    func_0x00010c15a4a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c277e80();
    func_0x00010c0df880(puVar5,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar6);
    func_0x00010befa120(*(undefined8 *)(param_1 + (long)_DAT_11273ebd4),param_2,puVar3);
    puVar5 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010be9e3e0(param_1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11273eb70);
      func_0x00010c0d3640(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c15a4a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c277e80();
      func_0x00010af28d88();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e8700(uVar2,param_2,lVar7);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(uVar2);
      _objc_release(uVar4);
    }
    _objc_release(puVar3);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + (long)_DAT_11273eb24),param_2,puVar5);
  lVar6 = param_1 + (long)_DAT_11273ebe8;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c0d2d00();
  _objc_release(lVar6);
  func_0x00010be0e8c0(param_1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060b5228; end: 1060b52a7; -[SCFeatureMusicImpl _deleteMusicPlaybackLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b5228(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273eb04);
  func_0x00010c0cfdc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf6b520(PTR_PTR_1126bf6f0,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1060b52a8; end: 1060b541f; -[SCFeatureMusicImpl _createGenericAssetMediaFromSelection:inLegacySnapDocEditor:] */

void FUN_1060b52a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar2 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar3 = puVar1;
  if (param_3 == 0) {
    func_0x00010bf43d60(puVar1);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1060b5420;
    puStack_68 = &UNK_11090cbd8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar1);
    puStack_60 = puVar1;
    _objc_retain(param_4);
    uStack_58 = param_4;
    _objc_retainBlock(&puStack_80);
    func_0x00010bfc01c0(PTR_PTR_1126b2518);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(uStack_58);
    _objc_release(puStack_60);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060b5420; end: 1060b55bf;  */

void FUN_1060b5420(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 != 0) {
      puVar2 = PTR_PTR_1126b25c8;
      _objc_opt_new();
      func_0x00010c16a960();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      puVar3 = PTR_PTR_1126b3080;
      func_0x00010bf64b00(PTR_PTR_1126b3080);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9c20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_copyWeak(auStack_48,param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      puVar3 = puVar2;
      _objc_retain(puVar2);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_48);
      _objc_release(uVar5);
      _objc_release(puVar2);
      goto LAB_1060b5584;
    }
    func_0x00010be52b40(lVar1);
  }
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
LAB_1060b5584:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1060b55c0; end: 1060b564b;  */

void FUN_1060b55c0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 != 0) && (param_3 == 0)) {
      func_0x00010c1c4880(*(undefined8 *)(param_1 + 0x28));
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1060b562c;
    }
    func_0x00010be52b40(lVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
LAB_1060b562c:
  func_0x00010bf43d60(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060b564c; end: 1060b5873; -[SCFeatureMusicImpl _replaceExistingMediaWithSelection:inLegacySnapDocEditor:] */

void FUN_1060b564c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar1 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0ff580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = param_4;
      func_0x00010c0ff640();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      uVar7 = param_1;
      func_0x00010bdee260(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_68,param_1);
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_4);
      _objc_retain(lVar3);
      lVar5 = lVar6;
      _objc_retain(lVar6);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(uVar7);
      _objc_release(lVar5);
      _objc_release(lVar6);
      _objc_release(lVar3);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(uVar7);
      _objc_release(lVar6);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060b5874; end: 1060b58b7;  */

bool FUN_1060b5874(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 2;
}



/* Entry: 1060b58b8; end: 1060b5993;  */

void FUN_1060b58b8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (((param_3 == 0) && (param_2 != 0)) && (lVar2 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c288840(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf6c3a0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1060b5994; end: 1060b599f;  */

void FUN_1060b5994(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c4030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setMedia__11264ea30,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1060b59a0; end: 1060b5ad3; -[SCFeatureMusicImpl _updateExistingStickerMetadataWithSelection:inLegacySnapDocEditor:] */

void FUN_1060b59a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar1 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0ff580(param_4,param_2,puVar1,&PTR___NSConcreteGlobalBlock_11090cc58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1060b5ae4;
      puStack_50 = &UNK_1108a7508;
      _objc_retain(param_3);
      ppuVar4 = &puStack_68;
      lStack_48 = param_3;
      _objc_retainBlock(ppuVar4);
      func_0x00010c288840(param_4,param_2,lVar3,ppuVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      _objc_release(lStack_48);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1060b5ad4; end: 1060b5ae3;  */

void FUN_1060b5ad4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c078310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bf6f0,PTR_s_isMusicStickerPlaybackLayer__1125fbad0,param_2);
  return;
}



/* Entry: 1060b5ae4; end: 1060b5c23;  */

void FUN_1060b5ae4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d38c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x20) == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010bf0ffa0(&uStack_58);
  }
  _CMTimeGetSeconds(&uStack_58);
  func_0x00010c219040(uVar4);
  uVar1 = param_2;
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c0cc0c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca2c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  return;
}



/* Entry: 1060b5c24; end: 1060b5eb7; -[SCFeatureMusicImpl _updateLegacySnapDocWithMusicSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b5c24(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bdfa360(param_1);
  }
  else {
    puVar1 = param_1 + _DAT_11273ebf4;
    _objc_loadWeakRetained(puVar1);
    func_0x00010c1ca100();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273eb04);
    func_0x00010c0cfdc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126bf6f0;
    func_0x00010bfc7ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c277e80();
    puVar6 = param_3;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c277e80();
    _objc_release(puVar6);
    if (puVar5 == puVar7) {
      puVar5 = param_3;
      func_0x00010c15a4a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8eb20(param_1);
      _objc_release(puVar5);
      puVar6 = param_3;
      func_0x00010c15a4a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed7a00(param_1);
    }
    else {
      func_0x00010bdfa360(param_1);
      puVar5 = param_3;
      func_0x00010c15a4a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010bdee260(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_initWeak(auStack_58,param_1);
      _objc_copyWeak(auStack_60,auStack_58);
      uVar3 = uVar4;
      _objc_retain(uVar4);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(puVar6);
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1060b5eb8; end: 1060b5f73;  */

void FUN_1060b5eb8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((param_3 == 0) && (param_2 != 0)) && (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    func_0x00010c1c4020();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa9a0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060b5f74; end: 1060b618b; -[SCFeatureMusicImpl _updateSnapEditorSnapDocWithMusicSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b5f74(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273eb04);
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126bf6f0;
  func_0x00010bfc7ba0(PTR_PTR_1126bf6f0,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfa360(param_1);
  lVar5 = param_3;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf0ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar8 = PTR_PTR_1126b3080;
  if (lVar7 != 0) {
    lVar5 = param_3;
    func_0x00010c15a4a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf0ef80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64b00(puVar8,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    uVar2 = uVar3;
    func_0x00010bef9c20(uVar3,param_2,puVar8,5);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1060b618c;
    puStack_60 = &UNK_11090cca8;
    _objc_retain(param_3);
    lStack_58 = param_3;
    _objc_retain(uVar3);
    puVar9 = puVar4;
    uStack_50 = uVar3;
    _objc_retain(puVar4);
    puStack_48 = puVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar2,param_2,&puStack_78,puVar9);
    _objc_release(puVar9);
    _objc_release(puStack_48);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
    _objc_release(uVar2);
    _objc_release(puVar8);
  }
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 1060b618c; end: 1060b64ab;  */

void FUN_1060b618c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar2 = PTR_PTR_1126b25c8;
  _objc_retain(param_2);
  _objc_alloc_init();
  func_0x00010c16a960();
  func_0x00010c1c4880(puVar2);
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126c7b90;
  _objc_opt_new();
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    func_0x00010bf0ffa0(&uStack_88,lVar4);
  }
  _CMTimeGetSeconds(&uStack_88);
  func_0x00010c21a520(puVar3);
  _objc_release(lVar4);
  puVar5 = PTR_PTR_1126b25d0;
  _objc_opt_new();
  func_0x00010c1c4020();
  func_0x00010c1e5020(puVar5);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  puVar6 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa9a0(uVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar13 = 0;
  }
  else {
    func_0x00010c2551e0();
    uVar13 = *(undefined8 *)(param_1 + 0x30);
  }
  func_0x00010c0b58e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bf6f0;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15a4a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277e80();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c277f60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c278a00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c277f60(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf0a460();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    func_0x00010bf0ffa0(&uStack_88,lVar4);
  }
  _CMTimeGetSeconds(&uStack_88);
  func_0x00010c0d3860(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  puVar1 = PTR_PTR_1126b13b8;
  puVar12 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb980(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),
                      *(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x3ff0000000000000,0,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar6);
  _objc_release(uVar13);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 1060b64ac; end: 1060b65bf;  */

void FUN_1060b64ac(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c273a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c200100(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7a6a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060b65c0; end: 1060b65eb; -[SCFeatureMusicImpl _favoritedSoundsEducationFavoritesDeepLinkInfo] */

void FUN_1060b65c0(void)

{
  _objc_alloc(PTR_PTR_1126c7b70);
  func_0x00010c00bae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060b65ec; end: 1060b6673; -[SCFeatureMusicImpl _presentCameraToolbarPickerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b65ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_11273ec3c) == '\x01') {
    lVar2 = param_1;
    func_0x00010be0e760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010be7d440(param_1,param_2,0x75,lVar2);
    if ((int)lVar1 != 0) {
      func_0x00010be5d420(param_1);
      func_0x00010be530c0(param_1,param_2,1);
    }
  }
  else {
    func_0x00010be7d440(param_1,param_2,0x75,0);
    lVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1060b6674; end: 1060b667b; -[SCFeatureMusicImpl _presentPickerIfNeededWithSourcePageType:] */

void FUN_1060b6674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7d450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentPickerIfNeededWithSource_11257ceb0,param_3,0);
  return;
}



/* Entry: 1060b667c; end: 1060b6d03; -[SCFeatureMusicImpl _presentPickerIfNeededWithSourcePageType:deepLinkInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060b667c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined8 uStack_128;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  lVar18 = (long)_DAT_11273ebec;
  if (((*(byte *)(param_1 + lVar18) & 1) != 0) || ((*(byte *)(param_1 + _DAT_11273ebf8) & 1) != 0))
  {
    uVar9 = 0;
    goto LAB_1060b6c88;
  }
  lVar11 = (long)_DAT_11273ebe8;
  lVar13 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar1 = lVar13;
  func_0x00010c10fda0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  if (lVar1 == 0) {
LAB_1060b672c:
    uVar9 = 0;
  }
  else {
    lVar13 = lVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar13 != 0) goto LAB_1060b672c;
    puVar2 = PTR_PTR_1126b3008;
    _objc_alloc();
    func_0x00010c04ab00();
    lVar13 = (long)_DAT_11273eb34;
    uVar3 = *(ulong *)(param_1 + lVar13);
    func_0x00010bf9c660();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar14;
    func_0x00010c290780();
    _objc_release(uVar14);
    _objc_release(uVar3);
    iVar10 = (int)uVar4;
    if ((uVar4 & 1) == 0) {
      uVar8 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010bf9c660();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar9;
      func_0x00010c290180();
      _objc_release(uVar9);
      _objc_release(uVar8);
      uVar14 = (ulong)~(uint)uVar5 & 1;
    }
    else {
      uVar14 = 3;
    }
    puVar6 = PTR_PTR_1126aff58;
    _objc_alloc();
    func_0x00010c038f60();
    lVar12 = (long)_DAT_11273ec50;
    uVar3 = *(ulong *)(param_1 + lVar12);
    func_0x00010c07f200();
    if ((uVar3 & 1) == 0) {
      uStack_128 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uStack_128 = 0;
    }
    *(ulong *)(param_1 + _DAT_11273ec54) = uVar14;
    _objc_initWeak(auStack_80,param_1);
    if (iVar10 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar15 = PTR_PTR_1126c7b98;
      _objc_alloc();
      puVar7 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1060b6d04;
      puStack_90 = &UNK_1108e7b80;
      puStack_158 = auStack_88;
      _objc_copyWeak(puStack_158,auStack_80);
      puStack_d0 = puVar7;
      uStack_c8 = 0xc2000000;
      uStack_c0 = 0x1060b6d4c;
      puStack_b8 = &UNK_1108434b0;
      puStack_160 = auStack_b0;
      _objc_copyWeak(puStack_160,auStack_80);
      puStack_f8 = puVar7;
      uStack_f0 = 0xc2000000;
      uStack_e8 = 0x1060b6d78;
      puStack_e0 = &UNK_110848ca8;
      puStack_168 = auStack_d8;
      _objc_copyWeak(puStack_168,auStack_80);
      puStack_170 = auStack_100;
      _objc_copyWeak(puStack_170,auStack_80);
      func_0x00010c00b220();
    }
    lVar12 = (long)_DAT_11273ec58;
    _objc_retain(puVar15);
    uVar9 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar15;
    _objc_release(uVar9);
    if (iVar10 != 0) {
      _objc_release(puVar15);
    }
    puVar15 = PTR_PTR_1126c47c8;
    _objc_alloc(PTR_PTR_1126c47c8);
    func_0x00010c04a7c0();
    if (iVar10 == 0) {
      puVar7 = PTR_PTR_1126c47d0;
      _objc_alloc(PTR_PTR_1126c47d0);
      uVar9 = *(undefined8 *)(param_1 + _DAT_11273ebb4);
      func_0x00010c15a4a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c056980(puVar7);
    }
    else {
      lVar16 = *(long *)(param_1 + _DAT_11273ebc8);
      if (lVar16 == 0) {
        lVar17 = 0;
      }
      else {
        lVar17 = lVar16;
        func_0x00010c137f80(lVar16);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c21fd00(puVar15);
      if (lVar16 != 0) {
        _objc_release(lVar17);
      }
      puVar7 = PTR_PTR_1126c47d0;
      _objc_alloc(PTR_PTR_1126c47d0);
      uVar9 = *(undefined8 *)(param_1 + _DAT_11273ebb4);
      func_0x00010c15a4a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c057540(puVar7);
    }
    _objc_release(uVar9);
    lVar17 = (long)_DAT_11273eb50;
    lVar16 = *(long *)(param_1 + lVar17);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar16 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar17));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar17));
    *(undefined1 *)(param_1 + lVar18) = 1;
    func_0x00010c0d33e0(*(undefined8 *)(param_1 + lVar12));
    uVar8 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010bf9c660();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar9;
    func_0x00010c255d20();
    _objc_release(uVar9);
    _objc_release(uVar8);
    if ((int)uVar5 != 0) {
      lVar11 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar11);
      func_0x00010c0d2e20();
      _objc_release(lVar11);
    }
    func_0x00010bdda840(param_1);
    func_0x00010be0e8c0(param_1);
    func_0x00010bee25a0(param_1);
    func_0x00010bee4240(param_1);
    func_0x00010be02a00(param_1);
    *(long *)(param_1 + _DAT_11273ebd0) = *(long *)(param_1 + _DAT_11273ebd0) + 1;
    lVar18 = (long)_DAT_11273eaf8;
    uVar9 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010bfa1820(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b760();
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010bfa1820(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b740();
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(puVar15);
    if ((uVar4 & 1) != 0) {
      _objc_destroyWeak(puStack_170);
      _objc_destroyWeak(puStack_168);
      _objc_destroyWeak(puStack_160);
      _objc_destroyWeak(puStack_158);
    }
    _objc_destroyWeak(auStack_80);
    _objc_release(uStack_128);
    _objc_release(puVar6);
    _objc_release(puVar2);
    uVar9 = 1;
  }
  _objc_release(lVar1);
LAB_1060b6c88:
  _objc_release(param_4);
  return uVar9;
}



/* Entry: 1060b6d04; end: 1060b6de3;  */

void FUN_1060b6d04(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee0620();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060b6de4; end: 1060b6eb3; -[SCFeatureMusicImpl _dismissPickerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b6de4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (*(char *)(param_1 + _DAT_11273ebec) == '\x01') {
    if (*(long *)(param_1 + _DAT_11273ec54) == 3) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_1060b6eb4;
      puStack_40 = &UNK_110842e18;
      lStack_38 = param_1;
      func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58);
    }
    lVar2 = (long)_DAT_11273eb50;
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010be73c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pickerDidDismiss_11257a8b8);
    return;
  }
  return;
}



/* Entry: 1060b6eb4; end: 1060b6f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b6eb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273eb50);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060b6f10; end: 1060b6fcb; -[SCFeatureMusicImpl _pickerDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b6f10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + _DAT_11273ebec) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273eb34);
  func_0x00010bf9c660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c255d20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    lVar4 = param_1 + _DAT_11273ebe8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c0d2de0();
    _objc_release(lVar4);
  }
  func_0x00010beb9160(param_1);
  func_0x00010be0e8c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bee4250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateVolumeButtonHandling_112596a38);
  return;
}



/* Entry: 1060b6fcc; end: 1060b7033; -[SCFeatureMusicImpl _dismissEditorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b6fcc(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_11273ebf0) != 0) {
    lVar2 = (long)_DAT_11273eb54;
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  return;
}



/* Entry: 1060b7034; end: 1060b706f; -[SCFeatureMusicImpl _presentEditorForCurrentSelectionIfNeededRespectingAutoPlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b7034(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be9e3e0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11273ebb4));
                    /* WARNING: Could not recover jumptable at 0x00010be7b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentEditorForCurrentSelectio_11257c638,param_3,
             (uint)param_3 & (uint)lVar1);
  return;
}



/* Entry: 1060b7070; end: 1060b715f; -[SCFeatureMusicImpl _presentEditorForCurrentSelectionIfNeededRespectingAutoPlay:shouldStartPlayback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b7070(ulong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar4;
  ulong uVar3;
  
  if (*(char *)(param_1 + (long)_DAT_11273ebb8) == '\x01') {
    lVar4 = (long)_DAT_11273ebb4;
    if ((*(long *)(param_1 + lVar4) != 0) && ((*(byte *)(param_1 + (long)_DAT_11273ebec) & 1) == 0))
    {
      uVar2 = param_1;
      func_0x00010be9e3e0();
      if (param_3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar3 = param_1;
        func_0x00010beb6940();
        uVar1 = (uint)uVar3;
      }
      uVar3 = param_1;
      func_0x00010be3fa60();
      if (((((uVar3 & 1) == 0) &&
           (uVar3 = param_1, func_0x00010be3fa80(), ((param_3 & (uint)uVar2 | uVar1) & 1) == 0)) &&
          ((uVar3 & 1) == 0)) && (*(long *)(param_1 + (long)_DAT_11273ebf0) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bed74d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__updateEditorForSelection_source_1125936d8,
                   *(undefined8 *)(param_1 + lVar4),0x76,param_4);
        return;
      }
    }
  }
  return;
}



/* Entry: 1060b7160; end: 1060b71d7; -[SCFeatureMusicImpl _shouldSkipEditorForSoundUnlockWithSourcePageType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060b7160(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + _DAT_11273eb58) == 7) && ((param_3 - 0xcbU < 3 || (param_3 == 0x60)))) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273ebac);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    return uVar2;
  }
  return 0;
}



/* Entry: 1060b71d8; end: 1060b7497; -[SCFeatureMusicImpl _updateEditorForSelection:sourcePageType:shouldAutoPlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b71d8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010be02a00(param_1);
  }
  else if ((*(byte *)(param_1 + _DAT_11273ebf8) & 1) == 0) {
    _objc_initWeak(auStack_78,param_1);
    puVar1 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1060b7498;
    puStack_88 = &UNK_110849680;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010c0311a0(puVar1);
    puVar2 = PTR_PTR_1126b2f28;
    _objc_alloc(PTR_PTR_1126b2f28);
    func_0x00010be3fa60();
    func_0x00010c035f20(0x4024000000000000,puVar2);
    puVar3 = PTR_PTR_1126c7ba0;
    func_0x00010bf4f0a0(PTR_PTR_1126c7ba0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3008;
    _objc_alloc(PTR_PTR_1126b3008);
    func_0x00010c04ab00();
    lVar7 = (long)_DAT_11273eb54;
    lVar5 = *(long *)(param_1 + lVar7);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar7));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar6 = PTR_PTR_1126c47f8;
    _objc_alloc(PTR_PTR_1126c47f8);
    func_0x00010c056940();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar7));
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1060b7498; end: 1060b7533;  */

void FUN_1060b7498(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060b7534; end: 1060b770f; -[SCFeatureMusicImpl _didAttachEditorViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b7534(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar4 = (long)_DAT_11273eb34;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf9c660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c2383c0();
    if ((int)uVar2 == 0) {
      uVar5 = 0;
    }
    else {
      lVar6 = param_1;
      func_0x00010be3fa60(param_1);
      uVar5 = (uint)lVar6 ^ 1;
    }
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf9c660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c2383e0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar4 = (long)_DAT_11273ebf0;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar3);
    func_0x00010be0e8c0(param_1);
    lVar6 = (long)_DAT_11273ebcc;
    lVar4 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c1cbe20();
    _objc_release(lVar4);
    lVar6 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c08cdc0();
    _objc_release(lVar6);
    func_0x00010bed74e0(param_1,param_2,0,(uVar5 | (uint)uVar2) & 1);
    func_0x00010bee4240(param_1);
    lVar4 = param_1 + _DAT_11273ec5c;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c136e00();
    _objc_release(lVar4);
    lVar4 = param_1 + _DAT_11273ebe8;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c0d2e00();
    _objc_release(lVar4);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11273eb28),param_2,
                        PTR____kCFBooleanTrue_11034ab68);
    if (*(long *)(param_1 + _DAT_11273ebb4) == 0) {
      func_0x00010be02a00(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060b7710; end: 1060b787f; -[SCFeatureMusicImpl _didDetachEditorViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b7710(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273ebf0;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + _DAT_11273ebb4) != 0) {
    func_0x00010bdeaba0(param_1,param_2,1);
  }
  func_0x00010be0e8c0(param_1);
  lVar2 = (long)_DAT_11273eb54;
  lVar3 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = (long)_DAT_11273ebcc;
  lVar3 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c1cbe20();
  _objc_release(lVar3);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c08cdc0();
  _objc_release(lVar2);
  func_0x00010bee4240(param_1);
  lVar3 = param_1 + _DAT_11273ec5c;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c136e00();
  _objc_release(lVar3);
  lVar3 = param_1 + _DAT_11273ebe8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0d2dc0();
  _objc_release(lVar3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11273eb28),param_2,
                      PTR____kCFBooleanFalse_11034ab60);
  lVar3 = (long)_DAT_11273ec60;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    func_0x00010be7b240(param_1,param_2,1);
    *(undefined1 *)(param_1 + lVar3) = 0;
  }
  return;
}



/* Entry: 1060b7880; end: 1060b8223; -[SCFeatureMusicImpl _updateEditorViewFrameAnimated:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b7880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,int param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  double dVar33;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = (long)_DAT_11273ebf0;
  puVar7 = param_5;
  if (*(long *)(param_5 + lVar24) == 0) {
LAB_1060b81d8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
      return;
    }
  }
  else {
    if (param_8 == 1) {
      lVar23 = (long)_DAT_11273ebcc;
      puVar7 = param_5 + lVar23;
      _objc_loadWeakRetained(puVar7);
      uVar2 = *(undefined8 *)(param_5 + lVar24);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fc0(puVar7,param_6,uVar2,0);
      _objc_release(uVar2);
      _objc_release(puVar7);
      uVar2 = *(undefined8 *)(param_5 + lVar24);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219b60();
      _objc_release(uVar2);
      puVar7 = param_5 + lVar23;
      _objc_loadWeakRetained();
      puVar22 = puVar7;
      func_0x00010c131ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar22;
      func_0x00010c06f880();
      _objc_release(puVar22);
      _objc_release(puVar7);
      puVar4 = *(undefined **)(param_5 + lVar24);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = param_5 + lVar23;
      _objc_loadWeakRetained(puVar22);
      puVar10 = puVar22;
      puVar7 = puVar5;
      if ((int)puVar1 == 0) {
        func_0x00010c149040();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar10;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf493a0(puVar5,param_6,puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c131ac0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar10;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf493a0(puVar5,param_6,puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
      }
      _objc_release(puVar1);
      _objc_release(puVar10);
      _objc_release(puVar22);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar11 = *(undefined8 *)(param_5 + lVar24);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar11;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = param_5 + lVar23;
      _objc_loadWeakRetained();
      puVar4 = puVar22;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf493a0(uVar2,param_6,puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_5 + lVar24);
      uStack_e8 = uVar3;
      puStack_e0 = puVar7;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar31 = uVar12;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_5 + lVar23;
      _objc_loadWeakRetained();
      puVar6 = puVar1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar32 = uVar31;
      func_0x00010bf493a0(uVar31,param_6,puVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_5 + lVar24);
      uStack_d8 = uVar32;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar13;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_5 + lVar23;
      _objc_loadWeakRetained(puVar5);
      puVar14 = puVar5;
      func_0x00010bf2b240();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar20;
      func_0x00010bf493a0(uVar20,param_6,puVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_5 + lVar24);
      uStack_d0 = uVar21;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar16;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      param_5 = param_5 + lVar23;
      _objc_loadWeakRetained();
      puVar17 = param_5;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar29;
      func_0x00010bf493a0(uVar29,param_6,puVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_c8 = uVar18;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_e8,5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar10,param_6,puVar19);
      _objc_release(puVar19);
      _objc_release(uVar18);
      _objc_release(puVar17);
      _objc_release(param_5);
      _objc_release(uVar29);
      _objc_release(uVar16);
      _objc_release(uVar21);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar5);
      _objc_release(uVar20);
      _objc_release(uVar13);
      _objc_release(uVar32);
      _objc_release(puVar6);
      _objc_release(puVar1);
      _objc_release(uVar31);
      _objc_release(uVar12);
      _objc_release(uVar3);
      _objc_release(puVar4);
      _objc_release(puVar22);
      _objc_release(uVar2);
      _objc_release(uVar11);
LAB_1060b81d4:
      _objc_release();
      goto LAB_1060b81d8;
    }
    if (param_8 != 0) goto LAB_1060b81d8;
    func_0x00010be3fa60();
    if ((int)puVar7 == 0) {
      puVar7 = *(undefined **)(param_5 + lVar24);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar7;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = (long)_DAT_11273ebcc;
      puVar22 = param_5 + lVar23;
      _objc_loadWeakRetained();
      if (puVar1 == puVar22) {
        _objc_release(puVar22);
        _objc_release(puVar1);
        _objc_release(puVar7);
      }
      else {
        lVar8 = *(long *)(param_5 + lVar24);
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar8);
        _objc_release(puVar22);
        _objc_release(puVar1);
        _objc_release();
        if (lVar9 != 0) goto LAB_1060b81d8;
      }
      uVar2 = *(undefined8 *)(param_5 + lVar24);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_5 + lVar23;
      _objc_loadWeakRetained(puVar7);
      func_0x00010bf20c00();
      _CGRectGetWidth();
      uVar29 = 0x7fefffffffffffff;
      func_0x00010c23d5a0(uVar2);
      _objc_release(puVar7);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_5 + lVar24);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219b60();
      _objc_release(uVar2);
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar20 = *(undefined8 *)(param_5 + lVar24);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar20;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf49420(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(param_5 + lVar24);
      uStack_c0 = uVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar31 = uVar21;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar32 = uVar31;
      func_0x00010bf49420(uVar29);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_b8 = uVar32;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_c0,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar7,param_6,puVar22);
      _objc_release(puVar22);
      _objc_release(uVar32);
      _objc_release(uVar31);
      _objc_release(uVar21);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar20);
      puVar7 = param_5 + lVar23;
      _objc_loadWeakRetained();
      puVar22 = puVar7;
      func_0x00010bfe1220();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_5 + lVar24);
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf07120(puVar22,param_6,uVar2);
      _objc_release(uVar2);
      _objc_release(puVar22);
      goto LAB_1060b81d4;
    }
    lVar23 = (long)_DAT_11273ebcc;
    puVar7 = param_5 + lVar23;
    _objc_loadWeakRetained();
    puVar1 = *(undefined **)(param_5 + lVar24);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    _objc_release(puVar7);
    if (puVar7 != puVar22) {
      puVar7 = param_5 + lVar23;
      _objc_loadWeakRetained(puVar7);
      uVar2 = *(undefined8 *)(param_5 + lVar24);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(puVar7,param_6,uVar2);
      _objc_release(uVar2);
      _objc_release(puVar7);
    }
    uVar3 = *(undefined8 *)(param_5 + _DAT_11273eb60);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c06b680();
    _objc_release(uVar3);
    dVar25 = -150.0;
    dVar27 = -130.0;
    dVar30 = dVar27;
    if ((int)uVar2 == 0) {
      dVar30 = dVar25;
    }
    puVar7 = param_5 + lVar23;
    _objc_loadWeakRetained(puVar7);
    _objc_retain();
    func_0x00010bf2b2e0(puVar7,param_6,puVar7);
    dVar26 = dVar25;
    _objc_release(puVar7);
    _objc_release(puVar7);
    uVar2 = *(undefined8 *)(param_5 + lVar24);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_5 + lVar23;
    _objc_loadWeakRetained(puVar7);
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar28 = 1.79769313486232e+308;
    func_0x00010c23d5a0(uVar2);
    dVar33 = dVar26;
    _objc_release(puVar7);
    _objc_release(uVar2);
    puVar7 = param_5 + lVar23;
    _objc_loadWeakRetained(puVar7);
    func_0x00010bf20c00();
    _CGRectGetWidth();
    dVar33 = dVar33 * 0.5 - dVar26 * 0.5;
    _CGRectGetMinY(dVar25,dVar27,param_3,param_4);
    dVar30 = (dVar25 - dVar28) - dVar30;
    _objc_release(puVar7);
    if (param_7 != 0) {
      puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_128 = 0xc2000000;
      pcStack_120 = FUN_1060b8224;
      puStack_118 = &UNK_110870f70;
      puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_110 = param_5;
      dStack_108 = dVar33;
      dStack_100 = dVar30;
      dStack_f8 = dVar26;
      dStack_f0 = dVar28;
      func_0x00010bf03440(0x3fc3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_6,0,
                          &puStack_130,0);
      goto LAB_1060b81d8;
    }
    puVar22 = *(undefined **)(param_5 + lVar24);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar22;
    func_0x00010c19f0e0(dVar33,dVar30,dVar26,dVar28);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) goto code_r0x00010bdbf3e4;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(puVar7 + 0x28);
  uVar3 = *(undefined8 *)(puVar7 + 0x30);
  uVar31 = *(undefined8 *)(puVar7 + 0x38);
  uVar32 = *(undefined8 *)(puVar7 + 0x40);
  puVar22 = *(undefined **)(*(long *)(puVar7 + 0x20) + (long)_DAT_11273ebf0);
  func_0x00010c29bf00(puVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar2,uVar3,uVar31,uVar32);
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar22);
  return;
}



/* Entry: 1060b8224; end: 1060b828b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b8224(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273ebf0);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar2,uVar3,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060b828c; end: 1060b86c3; -[SCFeatureMusicImpl _didActivateLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b828c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  
  _objc_retain(param_3);
  lVar16 = (long)_DAT_11273ec50;
  uVar2 = *(ulong *)(param_1 + lVar16);
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c071ae0(uVar2,param_2,lVar15);
  _objc_release(lVar15);
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) goto LAB_1060b86a0;
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  *(long *)(param_1 + lVar16) = param_3;
  _objc_release(uVar4);
  if ((*(byte *)(param_1 + _DAT_11273ebdc) & 1) != 0) goto LAB_1060b86a0;
  _objc_retain(param_3);
  lVar15 = param_3;
  func_0x00010c245600();
  if ((lVar15 == 0) && (lVar15 = param_3, func_0x00010c27dd80(), lVar15 != 0xb)) {
    lVar15 = param_3;
    func_0x00010c06f040(param_3);
  }
  else {
    lVar15 = 1;
  }
  _objc_release(param_3);
  func_0x00010bed6ec0(param_1,param_2,lVar15);
  if (*(long *)(param_1 + _DAT_11273eb58) == 0xb) goto LAB_1060b86a0;
  lVar17 = (long)_DAT_11273ebb4;
  lVar5 = *(long *)(param_1 + lVar17);
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar5;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar15;
  func_0x00010c247a20();
  if (lVar6 == 0xc9) {
    lVar7 = *(long *)(param_1 + lVar17);
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c277e80();
    lVar8 = *(long *)(param_1 + lVar16);
    FUN_1060b86c4();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c282800();
    bVar1 = lVar6 != lVar9;
    _objc_release(lVar8);
    _objc_release(lVar7);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar15);
  _objc_release(lVar5);
  lVar5 = *(long *)(param_1 + lVar17);
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar5;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar15;
  func_0x00010c247a20();
  if (lVar6 == 200) {
    _objc_release(lVar15);
    _objc_release(lVar5);
LAB_1060b84c0:
    lVar15 = *(long *)(param_1 + lVar17);
    func_0x00010bf5cba0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar15 == 0) {
      uVar18 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + lVar17);
      func_0x00010bf5cba0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010bfd8520();
      if ((int)uVar4 == 0) {
        uVar18 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(param_1 + lVar17);
        func_0x00010bf5cba0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar11;
        func_0x00010c091e80();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar4;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(param_1 + lVar16);
        func_0x00010c094540(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar12;
        func_0x00010c071ae0(uVar12,param_2,uVar13);
        uVar18 = (uint)uVar14 ^ 1;
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar4);
        _objc_release(uVar11);
      }
      _objc_release(uVar10);
    }
    _objc_release(lVar15);
  }
  else {
    lVar7 = *(long *)(param_1 + lVar17);
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010c247a20();
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar15);
    _objc_release(lVar5);
    if (lVar9 == 199) goto LAB_1060b84c0;
    uVar18 = 0;
  }
  if ((bVar1 || (uVar18 & 1) != 0) && (*(char *)(param_1 + _DAT_11273ebb8) == '\x01')) {
    func_0x00010bedf7a0(param_1,param_2,0);
  }
  if ((*(byte *)(param_1 + _DAT_11273ebc4) & 1) == 0) {
    lVar15 = param_3;
    func_0x00010c0d3a80();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010bf529e0();
    if (lVar16 != 0) {
      lVar16 = param_3;
      func_0x00010c0d3a80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar16;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010c290120();
      _objc_release(lVar6);
      _objc_release(lVar16);
      _objc_release(lVar15);
      if (((int)lVar5 == 0) || (*(long *)(param_1 + lVar17) != 0)) goto LAB_1060b86a0;
      lVar15 = param_3;
      FUN_1060b86c4();
      _objc_retainAutoreleasedReturnValue();
      if (lVar15 != 0) {
        lVar16 = lVar15;
        func_0x00010c282800(lVar15);
        func_0x00010be3d440(param_1,param_2,lVar16,0xc9,
                            &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4798,1,0,1,0);
      }
    }
    _objc_release(lVar15);
  }
LAB_1060b86a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060b86c4; end: 1060b87af;  */

void FUN_1060b86c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_38;
  
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010c0d3a80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar3 = PTR__OBJC_CLASS___NSScanner_1126b3380;
    if (lVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c277e80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14f820(puVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      uStack_38 = 0;
      puVar4 = puVar3;
      func_0x00010c14f5c0(puVar3,param_2,&uStack_38);
      puVar5 = (undefined *)0x0;
      if ((int)puVar4 != 0) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_38);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1060b87b0; end: 1060b886f; -[SCFeatureMusicImpl _didFinishCapturingWithSuccess:] */

/* WARNING: Possible PIC construction at 0x0001060b8854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001060b8858) */
/* WARNING: Removing unreachable block (ram,0x00010be95320) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b87b0(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_11273ebd8) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11273ebd8) = 0;
    if ((param_3 & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_11273ec60) = 1;
      func_0x00010be02a00(param_1);
      lVar2 = (long)_DAT_11273ebbc;
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + lVar2));
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
    else {
      func_0x00010be02a00(param_1);
      lVar2 = (long)_DAT_11273ebbc;
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + lVar2));
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010be8a670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__relinquishAudioSessionToken_112580338);
    return;
  }
  return;
}



/* Entry: 1060b8870; end: 1060b898b; -[SCFeatureMusicImpl _updateAudioPlayerSeekTimeIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b8870(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010be3fa60();
  if ((((uVar1 & 1) != 0) || (uVar1 = param_1, func_0x00010be3f360(), (int)uVar1 != 0)) &&
     (*(long *)(param_1 + (long)_DAT_11273ebb4) != 0)) {
    uVar1 = param_1;
    func_0x00010be61580();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
    }
    else {
      func_0x00010c276460(&uStack_38,uVar1);
    }
    _objc_release(uVar1);
    _objc_initWeak(auStack_40,param_1);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11273eb5c);
    _objc_copyWeak(auStack_60,auStack_40);
    uStack_50 = uStack_30;
    uStack_58 = uStack_38;
    uStack_48 = uStack_28;
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_40);
  }
  return;
}



/* Entry: 1060b898c; end: 1060b89db;  */

void FUN_1060b898c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9d3a0();
  _objc_release(param_1);
  return;
}



/* Entry: 1060b89dc; end: 1060b8a67; -[SCFeatureMusicImpl _seekToTimeIfNeededWithTotalDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b89dc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + _DAT_11273ebbc);
  if (lVar1 != 0) {
    _objc_retain(lVar1);
    func_0x00010bf8b160(&uStack_50,lVar1);
    uStack_68 = param_3[1];
    uStack_70 = *param_3;
    uStack_60 = param_3[2];
    _CMTimeMinimum(&uStack_38,&uStack_70,&uStack_50);
    uStack_48 = uStack_30;
    uStack_50 = uStack_38;
    uStack_40 = uStack_28;
    func_0x00010c157260(lVar1);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 1060b8a68; end: 1060b8ab3; -[SCFeatureMusicImpl _updateVolumeButtonHandling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b8a68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11273ebe8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010c078380(param_1);
  func_0x00010c0d2d40(lVar1,param_2,param_1,(uint)lVar2 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060b8ab4; end: 1060b8afb; -[SCFeatureMusicImpl _isDirectorModeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060b8ab4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273eb60);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06b680();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1060b8afc; end: 1060b8c03; -[SCFeatureMusicImpl _isContinuousCaptureActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1060b8afc(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  param_1 = param_1 + _DAT_11273eb9c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4fce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be6c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1060b8c04; end: 1060b8c1f;  */

void FUN_1060b8c04(void)

{
  return;
}



/* Entry: 1060b8c20; end: 1060b8cf3; -[SCFeatureMusicImpl _movieConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b8c20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010be3f360();
  if ((int)lVar4 == 0) {
    lVar4 = (long)_DAT_11273eb60;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06b680();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      lVar4 = 0;
      goto LAB_1060b8ce0;
    }
    param_1 = *(long *)(param_1 + lVar4);
    func_0x00010bfa1820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0c45a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = param_1 + _DAT_11273eb9c;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf4fd80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
LAB_1060b8ce0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1060b8cf4; end: 1060b8d3b; -[SCFeatureMusicImpl _isDirectorModeAddSnapActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060b8cf4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273eb60);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c232b00();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1060b8d3c; end: 1060b8dc3; -[SCFeatureMusicImpl _addSnapMovieConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b8d3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273eb60;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c06b680();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf895c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1060b8dc4; end: 1060b8eb7; -[SCFeatureMusicImpl _createAndEmitPlaybackEventWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b8dc4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_PTR_1126c7ba8;
  lVar4 = (long)_DAT_11273ebb4;
  lVar1 = *(long *)(param_2 + lVar4);
  if (lVar1 != 0) {
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c277e80();
    lVar4 = *(long *)(param_2 + lVar4);
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      func_0x00010bf0ffa0(&uStack_58,lVar4);
    }
    _CMTimeGetSeconds(&uStack_58);
    func_0x00010bf57a60(param_1 * 1000.0,puVar3,param_3,param_4,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar1);
    func_0x00010c0d9840(*(undefined8 *)(param_2 + _DAT_11273eb2c),param_3,puVar3);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 1060b8eb8; end: 1060b8fdb; -[SCFeatureMusicImpl _currentAutoApplyContextId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b8eb8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_11273ebb4;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c247a20();
  if (lVar3 == 200) {
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    lVar4 = *(long *)(param_1 + lVar9);
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c247a20();
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 199) {
      uVar8 = 0;
      goto LAB_1060b8fc0;
    }
  }
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010bf5cba0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c091e80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
LAB_1060b8fc0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1060b8fdc; end: 1060b8feb; -[SCFeatureMusicImpl _selectionShouldAutoPlay:] */

undefined8 FUN_1060b8fdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be9e2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__selectionIsNonPickerAutoPlay__112585258);
    return param_1;
  }
  return 0;
}



/* Entry: 1060b8fec; end: 1060b913f; -[SCFeatureMusicImpl _selectionIsNonPickerAutoPlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1060b8fec(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c277e80();
  lVar4 = *(long *)(param_1 + _DAT_11273ec50);
  FUN_1060b86c4();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c282800();
  if (lVar3 == lVar5) {
    bVar1 = true;
LAB_1060b9108:
    _objc_release(lVar4);
  }
  else {
    lVar3 = param_3;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c247a20();
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (lVar6 == 0xc9) {
      bVar1 = true;
      goto LAB_1060b9118;
    }
    lVar2 = param_3;
    func_0x00010bf5cba0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar4 = param_3;
      func_0x00010c15a4a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c247a20();
      bVar1 = lVar5 == 200;
      _objc_release(lVar3);
      goto LAB_1060b9108;
    }
    bVar1 = false;
  }
  _objc_release(lVar2);
LAB_1060b9118:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1060b9140; end: 1060b9293; -[SCFeatureMusicImpl _selectionIsRecommendation:] */

bool FUN_1060b9140(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf5cba0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = param_3;
      func_0x00010c15a4a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c247a20();
      if (lVar5 == 200) {
        bVar1 = true;
      }
      else {
        lVar5 = param_3;
        func_0x00010c15a4a0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c0b3ae0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c247a20();
        if (lVar7 == 199) {
          bVar1 = true;
        }
        else {
          lVar7 = param_3;
          func_0x00010c15a4a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c0b3ae0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010c247a20();
          bVar1 = lVar9 == 0xa8;
          _objc_release(lVar8);
          _objc_release(lVar7);
        }
        _objc_release(lVar6);
        _objc_release(lVar5);
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1060b9294; end: 1060b92ef; -[SCFeatureMusicImpl _resetAudioPlayerSeek] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b9294(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = (long)_DAT_11273ebbc;
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x00010c0f5b20();
    uStack_38 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_40 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_30 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x00010c157260(*(undefined8 *)(param_1 + lVar1),param_2,&uStack_40);
  }
  return;
}



/* Entry: 1060b92f0; end: 1060b92f7; -[SCFeatureMusicImpl _restartAutoplayPlaybackIfNeeded] */

void FUN_1060b92f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebf830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startAutoplayPlaybackIfNeededRe_11258d7b0,1)
  ;
  return;
}



/* Entry: 1060b92f8; end: 1060b92ff; -[SCFeatureMusicImpl _resumeAutoplayPlaybackIfNeeded] */

void FUN_1060b92f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebf830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startAutoplayPlaybackIfNeededRe_11258d7b0,0)
  ;
  return;
}



/* Entry: 1060b9300; end: 1060b93cb; -[SCFeatureMusicImpl _startAutoplayPlaybackIfNeededResettingSeek:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b9300(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (((*(char *)(param_1 + _DAT_11273ebec) != '\x01') || (*(long *)(param_1 + _DAT_11273ec58) == 0)
      ) && (*(char *)(param_1 + _DAT_11273ebb8) == '\x01')) {
    if ((*(long *)(param_1 + _DAT_11273ebb4) != 0) &&
       (lVar1 = param_1, func_0x00010be9e3e0(), (int)lVar1 != 0)) {
      if (param_3 != 0) {
        func_0x00010be92380(param_1);
      }
      lVar1 = (long)_DAT_11273ebbc;
      func_0x00010c2241a0(0x3f800000,*(undefined8 *)(param_1 + lVar1));
      func_0x00010c2009a0(*(undefined8 *)(param_1 + lVar1),param_2,1);
      uStack_38 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
      uStack_40 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
      uStack_30 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
      func_0x00010c0fea40(*(undefined8 *)(param_1 + lVar1),param_2,&uStack_40);
    }
  }
  return;
}



/* Entry: 1060b93cc; end: 1060b9407; -[SCFeatureMusicImpl _pauseMusicForBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b93cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ebbc;
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be8a670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__relinquishAudioSessionToken_112580338);
  return;
}



/* Entry: 1060b9408; end: 1060b94ab; -[SCFeatureMusicImpl _recoverMusicUIAfterForegroundIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b9408(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + _DAT_11273ebb4) != 0) && (*(char *)(param_1 + _DAT_11273ebb8) == '\x01'))
  {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273eb38);
    func_0x00010bf9c6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d3060();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be78e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__preparePlayerIfNeeded_11257bd38);
      return;
    }
  }
  return;
}



/* Entry: 1060b94ac; end: 1060b94bb; -[SCFeatureMusicImpl _updateSoundPillForPickerV2NominatedSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b94ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c287f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273ebc8),PTR_s_updateNominatedSelection__11267fa08);
  return;
}



/* Entry: 1060b94bc; end: 1060b94cb; -[SCFeatureMusicImpl _clearSoundPillPickerV2Nomination] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b94bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3ba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273ebc8),PTR_s_clearNominatedSelection_1125ac838);
  return;
}



/* Entry: 1060b94cc; end: 1060b965b; -[SCFeatureMusicImpl _createSoundPillManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b94cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar10 = (long)_DAT_11273ebc8;
  if (*(long *)(param_1 + lVar10) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c7bb0;
  _objc_alloc();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11273eb28);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11273eb24);
  lVar2 = param_1;
  func_0x00010bdf67a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273eb84);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + _DAT_11273eb68);
  uVar12 = *(undefined8 *)(param_1 + _DAT_11273eb00);
  lVar6 = param_1 + _DAT_11273ebcc;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bfe12e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00edc0(puVar1,param_2,uVar8,uVar9,lVar2,uVar5,uVar11,uVar12,lVar7,
                      *(undefined8 *)(param_1 + _DAT_11273eb58),param_1,
                      *(undefined8 *)(param_1 + _DAT_11273eb88));
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1060b965c; end: 1060b978b; -[SCFeatureMusicImpl _currentCTRecommendationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b965c(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1060b99c4;
  puStack_58 = &UNK_11090cd58;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273eb64);
  func_0x00010bfa1820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5e2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1060b978c; end: 1060b99c3;  */

ulong FUN_1060b978c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar7 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c123180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd5be0();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
    _objc_release(uVar7);
  }
  else {
    uVar3 = param_3;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c123180();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfd5be0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar7);
    if ((int)uVar5 != 0) {
      uVar1 = param_2;
      func_0x00010c0ec5e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c123180();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010bf4e080();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0ec5e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c123180();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf4e080();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c071ae0(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(uVar1);
      goto LAB_1060b9994;
    }
  }
  uVar7 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c123180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd5be0();
  if ((int)uVar2 == 0) {
    uVar3 = param_3;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c123180();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfd5be0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar7);
    if ((int)uVar5 == 0) {
      uVar7 = 1;
      goto LAB_1060b9994;
    }
  }
  else {
    _objc_release(uVar1);
    _objc_release(uVar7);
  }
  uVar7 = 0;
LAB_1060b9994:
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar7;
}



/* Entry: 1060b99c4; end: 1060b9a2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1060b99c4(long param_1)

{
  byte bVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 == 0) || ((*(byte *)(param_1 + _DAT_11273ebd8) & 1) != 0)) ||
     (*(char *)(param_1 + _DAT_11273ebb8) != '\x01')) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + _DAT_11273eb7c) ^ 1;
  }
  _objc_release();
  return bVar1 & 1;
}



/* Entry: 1060b9a2c; end: 1060b9c63; -[SCFeatureMusicImpl _setupMusicRecommendationObservation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b9a2c(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  ppuVar4 = &puStack_f0;
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1060b9c64;
  puStack_88 = &UNK_11084eff0;
  _objc_copyWeak(auStack_80,auStack_78);
  ppuVar2 = &puStack_a0;
  _objc_retainBlock(ppuVar2);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1060b9d54;
  puStack_b0 = &UNK_11084eff0;
  _objc_copyWeak(auStack_a8,auStack_78);
  ppuVar3 = &puStack_c8;
  _objc_retainBlock(ppuVar3);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1060b9e88;
  puStack_d8 = &UNK_11084eff0;
  _objc_copyWeak(auStack_d0,auStack_78);
  _objc_retainBlock(&puStack_f0);
  func_0x00010bdf67a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf65f60(0x3fe0000000000000,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf87460();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf87460();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_d0);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 1060b9c64; end: 1060b9d1f;  */

void FUN_1060b9c64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1060b9d20; end: 1060b9d53;  */

void FUN_1060b9d20(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be8d020(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060b9d54; end: 1060b9e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b9d54(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar5 = (long)_DAT_11273ebf4;
    lVar1 = param_1 + lVar5;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c1ca100();
    _objc_release(lVar1);
    if (*(long *)(param_1 + _DAT_11273ebb4) == 0) {
      lVar1 = param_2;
      func_0x00010c0ec5e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c123180();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c2791c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar4 != 0) {
        lVar5 = param_1 + lVar5;
        _objc_loadWeakRetained(lVar5);
        lVar1 = param_2;
        func_0x00010c0ec5e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ca100(lVar5);
        _objc_release(lVar1);
        _objc_release(lVar5);
      }
      _objc_release(lVar4);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060b9e88; end: 1060b9eff;  */

void FUN_1060b9e88(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010be26060(param_1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060b9f00; end: 1060b9fd3; -[SCFeatureMusicImpl _removeRecommendedSound] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b9f00(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11273ebb4;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c15a4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c277e80();
  lVar2 = *(long *)(param_1 + (long)_DAT_11273ec50);
  FUN_1060b86c4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c282800();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == lVar3) {
    return;
  }
  lVar4 = *(long *)(param_1 + lVar6);
  func_0x00010bf5cba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar5 = param_1;
    func_0x00010be9e2e0();
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  else {
    _objc_release();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedf7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSelection__112595790,0);
  return;
}



/* Entry: 1060b9fd4; end: 1060ba307; -[SCFeatureMusicImpl _handleAutoApplyForRecommendation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060b9fd4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  if (((*(long *)(param_1 + (long)_DAT_11273eb58) != 0xb) &&
      ((*(byte *)(param_1 + (long)_DAT_11273ebc4) & 1) == 0)) &&
     ((*(byte *)(param_1 + (long)_DAT_11273ebdc) & 1) == 0)) {
    uVar1 = param_3;
    if (*(long *)(param_1 + (long)_DAT_11273ebb4) != 0) {
      uVar1 = param_1;
      func_0x00010be9e2e0();
      if (param_3 == 0) goto LAB_1060ba164;
      uVar1 = uVar1 & 1;
    }
    if (uVar1 != 0) {
      uVar1 = param_3;
      func_0x00010c123180();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf11340();
      _objc_release(uVar1);
      if (((int)uVar2 != 0) && (uVar1 = param_1, func_0x00010be05a20(), (int)uVar1 != 0)) {
        uVar1 = param_3;
        func_0x00010c123180();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c2791c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if (uVar3 != 0) {
          uVar1 = uVar3;
          func_0x0001084203fc();
          _objc_retainAutoreleasedReturnValue();
          if (uVar1 != 0) {
            uVar2 = uVar1;
            func_0x000100078e94();
            _objc_retainAutoreleasedReturnValue();
            puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_70 = 0xc2000000;
            uStack_68 = 0x1060ba184;
            puStack_60 = &UNK_110848ba8;
            uStack_58 = param_1;
            _objc_retain(param_3);
            uStack_50 = param_3;
            uStack_48 = uVar1;
            func_0x00010c0f7fc0(uVar2,param_2,&puStack_78);
            _objc_release(uVar2);
            _objc_release(uStack_50);
          }
          _objc_release(uVar1);
        }
        _objc_release(uVar3);
      }
    }
  }
LAB_1060ba164:
  _objc_release(param_3);
  return;
}



/* Entry: 1060ba308; end: 1060ba38b; -[SCFeatureMusicImpl _doesRecommendationAutoApplyFollowVolumeRule] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1060ba308(float param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if ((*(byte *)(param_2 + _DAT_11273ebc0) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_11273eb90);
    func_0x00010c15fac0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ef220();
    bVar3 = 0.0 < param_1;
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 1060ba38c; end: 1060ba39f; -[SCFeatureMusicImpl _featureDidUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ba38c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273eb14),PTR_s_next__112614028,param_1);
  return;
}



/* Entry: 1060ba3a0; end: 1060ba3a3; -[SCFeatureMusicImpl _logErrorWithMessage:assertFail:] */

void FUN_1060ba3a0(void)

{
  return;
}



/* Entry: 1060ba3a4; end: 1060ba3ab; -[SCFeatureMusicImpl modeEnabledStateChangedObservable] */

undefined8 FUN_1060ba3a4(void)

{
  return 0;
}


