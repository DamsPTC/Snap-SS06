/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107fb06e8; end: 107fb06ef; -[SCTimelineImageSegmentImpl hasAudioTrack] */

undefined8 FUN_107fb06e8(void)

{
  return 0;
}



/* Entry: 107fb06f0; end: 107fb06f7; -[SCTimelineImageSegmentImpl hasAssetURL] */

undefined8 FUN_107fb06f0(void)

{
  return 1;
}



/* Entry: 107fb06f8; end: 107fb06ff; -[SCTimelineImageSegmentImpl videoAsset] */

undefined8 FUN_107fb06f8(void)

{
  return 0;
}



/* Entry: 107fb0700; end: 107fb0857; -[SCTimelineImageSegmentImpl createImagePixelBufferWithSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107fb0700(double param_1,double param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  dVar6 = *(double *)PTR__CGSizeZero_110347620;
  dVar8 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  bVar1 = false;
  if ((param_1 == dVar6) && (bVar1 = false, !NAN(param_2) && !NAN(dVar8))) {
    bVar1 = param_2 == dVar8;
  }
  if (bVar1) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + _DAT_1127729b8);
    func_0x00010c0f5800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d020(puVar5,param_4,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c23d0a0(puVar5);
    func_0x00010c23d0a0(puVar5);
    dVar7 = param_2 / dVar8;
    dVar9 = param_1 / dVar6;
    if (dVar7 <= param_1 / dVar6) {
      dVar9 = dVar7;
    }
    func_0x00010c23d0a0(puVar5);
    func_0x00010c23d0a0(puVar5);
    _UIGraphicsBeginImageContext(param_1,param_2);
    puVar3 = puVar5;
    func_0x00010bf89920((param_1 - dVar7 * dVar9) * 0.5,(param_2 - dVar8 * dVar9) * 0.5,
                        dVar7 * dVar9,dVar8 * dVar9,puVar5);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _UIGraphicsEndImageContext();
    puVar4 = puVar3;
    func_0x00010c14e300(param_2,puVar3,param_4,0x10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf54240();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  return puVar5;
}



/* Entry: 107fb0858; end: 107fb0867; -[SCTimelineImageSegmentImpl assetURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fb0858(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127729b8);
}



/* Entry: 107fb0868; end: 107fb0877; -[SCTimelineImageSegmentImpl frameImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fb0868(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127729bc);
}



/* Entry: 107fb0878; end: 107fb0887; -[SCTimelineImageSegmentImpl tinselMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fb0878(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127729c0);
}



/* Entry: 107fb0888; end: 107fb0897; -[SCTimelineImageSegmentImpl imagePixelBuffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fb0888(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127729b4);
}



/* Entry: 107fb0898; end: 107fb08e7; -[SCTimelineImageSegmentImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fb0898(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127729c0,0);
  _objc_storeStrong(param_1 + _DAT_1127729bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127729b8,0);
  return;
}



/* Entry: 107fb08e8; end: 107fb0a5b; -[SCTimelineMediaSegmentImpl initWithUniqueId:blizzardLogger:snapSource:activeLensID:externalMediaSource:] */

undefined8 *
FUN_107fb08e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fbf48;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR__kCMTimeRangeInvalid_110348660;
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
    uVar3 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
    uVar6 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
    uVar5 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
    puVar1[0x2e] = uVar4;
    puVar1[0x2d] = uVar3;
    puVar1[0x30] = uVar6;
    puVar1[0x2f] = uVar5;
    uVar8 = *(undefined8 *)(puVar2 + 0x28);
    uVar7 = *(undefined8 *)(puVar2 + 0x20);
    puVar1[0x32] = uVar8;
    puVar1[0x31] = uVar7;
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1[5] = uVar6;
    puVar1[4] = uVar5;
    puVar1[7] = uVar8;
    puVar1[6] = uVar7;
    puVar2 = PTR__kCMTimeZero_110348670;
    uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar6 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    puVar1[0x28] = uVar7;
    puVar1[0x27] = uVar6;
    uVar5 = *(undefined8 *)(puVar2 + 0x10);
    puVar1[0x29] = uVar5;
    puVar1[0x2b] = uVar7;
    puVar1[0x2a] = uVar6;
    puVar1[0x2c] = uVar5;
    puVar2 = PTR_PTR_1126ae820;
    uVar3 = uVar6;
    _objc_opt_new();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    puVar1[8] = param_3;
    _objc_retain(param_4);
    uVar4 = puVar1[9];
    puVar1[9] = param_4;
    _objc_release(uVar4);
    puVar1[0x22] = param_5;
    *(undefined4 *)(puVar1 + 0x14) = param_7;
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    puVar1[0x1f] = uVar3;
    _objc_release(puVar2);
    puVar1[0x20] = 0x3ff0000000000000;
    puVar1[0x11] = uVar7;
    puVar1[0x10] = uVar6;
    puVar1[0x12] = uVar5;
    puVar1[0x13] = 0xffffffffffffffff;
    _objc_retain(param_6);
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = param_6;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 107fb0a5c; end: 107fb0aaf; -[SCTimelineMediaSegmentImpl assetURL] */

void FUN_107fb0a5c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar3 = puVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar2 = puVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar3 = puVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw();
  uStack_128 = *(undefined8 *)(puVar4 + 0x140);
  uStack_130 = *(undefined8 *)(puVar4 + 0x138);
  uStack_120 = *(undefined8 *)(puVar4 + 0x148);
  uStack_f8 = puVar2[1];
  uStack_100 = *puVar2;
  uStack_f0 = puVar2[2];
  _CMTimeSubtract(&uStack_e8,&uStack_130,&uStack_100);
  uVar6 = puVar2[1];
  uVar5 = *puVar2;
  *(undefined8 *)(puVar4 + 0x148) = puVar2[2];
  *(undefined8 *)(puVar4 + 0x140) = uVar6;
  *(undefined8 *)(puVar4 + 0x138) = uVar5;
  uStack_f8 = puVar2[1];
  uStack_100 = *puVar2;
  uStack_f0 = puVar2[2];
  uStack_148 = *(undefined8 *)(puVar4 + 0x188);
  uStack_150 = *(undefined8 *)(puVar4 + 0x180);
  uStack_140 = *(undefined8 *)(puVar4 + 400);
  _CMTimeRangeMake(&uStack_130,&uStack_100,&uStack_150);
  *(undefined8 *)(puVar4 + 0x170) = uStack_128;
  *(undefined8 *)(puVar4 + 0x168) = uStack_130;
  *(undefined8 *)(puVar4 + 0x180) = uStack_118;
  *(undefined8 *)(puVar4 + 0x178) = uStack_120;
  *(undefined8 *)(puVar4 + 400) = uStack_108;
  *(undefined8 *)(puVar4 + 0x188) = uStack_110;
  uStack_f8 = *(undefined8 *)(puVar4 + 0x1a0);
  uStack_100 = *(undefined8 *)(puVar4 + 0x198);
  uStack_f0 = *(undefined8 *)(puVar4 + 0x1a8);
  uStack_148 = uStack_e0;
  uStack_150 = uStack_e8;
  uStack_140 = uStack_d8;
  _CMTimeSubtract(&uStack_130,&uStack_100,&uStack_150);
  *(undefined8 *)(puVar4 + 0x1a0) = uStack_128;
  *(undefined8 *)(puVar4 + 0x198) = uStack_130;
  *(undefined8 *)(puVar4 + 0x1a8) = uStack_120;
  puVar1 = PTR__kCMTimeRangeInvalid_110348660;
  uVar5 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uVar7 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uVar6 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  uVar5 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar4 + 0x38) = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar4 + 0x30) = uVar5;
  return;
}



/* Entry: 107fb0ab0; end: 107fb0b03; -[SCTimelineMediaSegmentImpl hasAssetURL] */

void FUN_107fb0ab0(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar3 = puVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar2 = puVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw();
  uStack_108 = *(undefined8 *)(puVar4 + 0x140);
  uStack_110 = *(undefined8 *)(puVar4 + 0x138);
  uStack_100 = *(undefined8 *)(puVar4 + 0x148);
  uStack_d8 = puVar3[1];
  uStack_e0 = *puVar3;
  uStack_d0 = puVar3[2];
  _CMTimeSubtract(&uStack_c8,&uStack_110,&uStack_e0);
  uVar6 = puVar3[1];
  uVar5 = *puVar3;
  *(undefined8 *)(puVar4 + 0x148) = puVar3[2];
  *(undefined8 *)(puVar4 + 0x140) = uVar6;
  *(undefined8 *)(puVar4 + 0x138) = uVar5;
  uStack_d8 = puVar3[1];
  uStack_e0 = *puVar3;
  uStack_d0 = puVar3[2];
  uStack_128 = *(undefined8 *)(puVar4 + 0x188);
  uStack_130 = *(undefined8 *)(puVar4 + 0x180);
  uStack_120 = *(undefined8 *)(puVar4 + 400);
  _CMTimeRangeMake(&uStack_110,&uStack_e0,&uStack_130);
  *(undefined8 *)(puVar4 + 0x170) = uStack_108;
  *(undefined8 *)(puVar4 + 0x168) = uStack_110;
  *(undefined8 *)(puVar4 + 0x180) = uStack_f8;
  *(undefined8 *)(puVar4 + 0x178) = uStack_100;
  *(undefined8 *)(puVar4 + 400) = uStack_e8;
  *(undefined8 *)(puVar4 + 0x188) = uStack_f0;
  uStack_d8 = *(undefined8 *)(puVar4 + 0x1a0);
  uStack_e0 = *(undefined8 *)(puVar4 + 0x198);
  uStack_d0 = *(undefined8 *)(puVar4 + 0x1a8);
  uStack_128 = uStack_c0;
  uStack_130 = uStack_c8;
  uStack_120 = uStack_b8;
  _CMTimeSubtract(&uStack_110,&uStack_e0,&uStack_130);
  *(undefined8 *)(puVar4 + 0x1a0) = uStack_108;
  *(undefined8 *)(puVar4 + 0x198) = uStack_110;
  *(undefined8 *)(puVar4 + 0x1a8) = uStack_100;
  puVar1 = PTR__kCMTimeRangeInvalid_110348660;
  uVar5 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uVar7 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uVar6 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  uVar5 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar4 + 0x38) = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar4 + 0x30) = uVar5;
  return;
}



/* Entry: 107fb0b04; end: 107fb0b57; -[SCTimelineMediaSegmentImpl videoAsset] */

void FUN_107fb0b04(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar3 = puVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw();
  uStack_e8 = *(undefined8 *)(puVar4 + 0x140);
  uStack_f0 = *(undefined8 *)(puVar4 + 0x138);
  uStack_e0 = *(undefined8 *)(puVar4 + 0x148);
  uStack_b8 = puVar2[1];
  uStack_c0 = *puVar2;
  uStack_b0 = puVar2[2];
  _CMTimeSubtract(&uStack_a8,&uStack_f0,&uStack_c0);
  uVar6 = puVar2[1];
  uVar5 = *puVar2;
  *(undefined8 *)(puVar4 + 0x148) = puVar2[2];
  *(undefined8 *)(puVar4 + 0x140) = uVar6;
  *(undefined8 *)(puVar4 + 0x138) = uVar5;
  uStack_b8 = puVar2[1];
  uStack_c0 = *puVar2;
  uStack_b0 = puVar2[2];
  uStack_108 = *(undefined8 *)(puVar4 + 0x188);
  uStack_110 = *(undefined8 *)(puVar4 + 0x180);
  uStack_100 = *(undefined8 *)(puVar4 + 400);
  _CMTimeRangeMake(&uStack_f0,&uStack_c0,&uStack_110);
  *(undefined8 *)(puVar4 + 0x170) = uStack_e8;
  *(undefined8 *)(puVar4 + 0x168) = uStack_f0;
  *(undefined8 *)(puVar4 + 0x180) = uStack_d8;
  *(undefined8 *)(puVar4 + 0x178) = uStack_e0;
  *(undefined8 *)(puVar4 + 400) = uStack_c8;
  *(undefined8 *)(puVar4 + 0x188) = uStack_d0;
  uStack_b8 = *(undefined8 *)(puVar4 + 0x1a0);
  uStack_c0 = *(undefined8 *)(puVar4 + 0x198);
  uStack_b0 = *(undefined8 *)(puVar4 + 0x1a8);
  uStack_108 = uStack_a0;
  uStack_110 = uStack_a8;
  uStack_100 = uStack_98;
  _CMTimeSubtract(&uStack_f0,&uStack_c0,&uStack_110);
  *(undefined8 *)(puVar4 + 0x1a0) = uStack_e8;
  *(undefined8 *)(puVar4 + 0x198) = uStack_f0;
  *(undefined8 *)(puVar4 + 0x1a8) = uStack_e0;
  puVar1 = PTR__kCMTimeRangeInvalid_110348660;
  uVar5 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uVar7 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uVar6 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  uVar5 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar4 + 0x38) = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar4 + 0x30) = uVar5;
  return;
}



/* Entry: 107fb0b58; end: 107fb0bab; -[SCTimelineMediaSegmentImpl frameImage] */

void FUN_107fb0b58(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw();
  uStack_c8 = *(undefined8 *)(puVar3 + 0x140);
  uStack_d0 = *(undefined8 *)(puVar3 + 0x138);
  uStack_c0 = *(undefined8 *)(puVar3 + 0x148);
  uStack_98 = puVar4[1];
  uStack_a0 = *puVar4;
  uStack_90 = puVar4[2];
  _CMTimeSubtract(&uStack_88,&uStack_d0,&uStack_a0);
  uVar6 = puVar4[1];
  uVar5 = *puVar4;
  *(undefined8 *)(puVar3 + 0x148) = puVar4[2];
  *(undefined8 *)(puVar3 + 0x140) = uVar6;
  *(undefined8 *)(puVar3 + 0x138) = uVar5;
  uStack_98 = puVar4[1];
  uStack_a0 = *puVar4;
  uStack_90 = puVar4[2];
  uStack_e8 = *(undefined8 *)(puVar3 + 0x188);
  uStack_f0 = *(undefined8 *)(puVar3 + 0x180);
  uStack_e0 = *(undefined8 *)(puVar3 + 400);
  _CMTimeRangeMake(&uStack_d0,&uStack_a0,&uStack_f0);
  *(undefined8 *)(puVar3 + 0x170) = uStack_c8;
  *(undefined8 *)(puVar3 + 0x168) = uStack_d0;
  *(undefined8 *)(puVar3 + 0x180) = uStack_b8;
  *(undefined8 *)(puVar3 + 0x178) = uStack_c0;
  *(undefined8 *)(puVar3 + 400) = uStack_a8;
  *(undefined8 *)(puVar3 + 0x188) = uStack_b0;
  uStack_98 = *(undefined8 *)(puVar3 + 0x1a0);
  uStack_a0 = *(undefined8 *)(puVar3 + 0x198);
  uStack_90 = *(undefined8 *)(puVar3 + 0x1a8);
  uStack_e8 = uStack_80;
  uStack_f0 = uStack_88;
  uStack_e0 = uStack_78;
  _CMTimeSubtract(&uStack_d0,&uStack_a0,&uStack_f0);
  *(undefined8 *)(puVar3 + 0x1a0) = uStack_c8;
  *(undefined8 *)(puVar3 + 0x198) = uStack_d0;
  *(undefined8 *)(puVar3 + 0x1a8) = uStack_c0;
  puVar1 = PTR__kCMTimeRangeInvalid_110348660;
  uVar5 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uVar7 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uVar6 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  uVar5 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar3 + 0x38) = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  return;
}



/* Entry: 107fb0bac; end: 107fb0bff; -[SCTimelineMediaSegmentImpl imagePixelBuffer] */

void FUN_107fb0bac(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  uStack_a8 = *(undefined8 *)(puVar2 + 0x140);
  uStack_b0 = *(undefined8 *)(puVar2 + 0x138);
  uStack_a0 = *(undefined8 *)(puVar2 + 0x148);
  uStack_78 = puVar3[1];
  uStack_80 = *puVar3;
  uStack_70 = puVar3[2];
  _CMTimeSubtract(&uStack_68,&uStack_b0,&uStack_80);
  uVar5 = puVar3[1];
  uVar4 = *puVar3;
  *(undefined8 *)(puVar2 + 0x148) = puVar3[2];
  *(undefined8 *)(puVar2 + 0x140) = uVar5;
  *(undefined8 *)(puVar2 + 0x138) = uVar4;
  uStack_78 = puVar3[1];
  uStack_80 = *puVar3;
  uStack_70 = puVar3[2];
  uStack_c8 = *(undefined8 *)(puVar2 + 0x188);
  uStack_d0 = *(undefined8 *)(puVar2 + 0x180);
  uStack_c0 = *(undefined8 *)(puVar2 + 400);
  _CMTimeRangeMake(&uStack_b0,&uStack_80,&uStack_d0);
  *(undefined8 *)(puVar2 + 0x170) = uStack_a8;
  *(undefined8 *)(puVar2 + 0x168) = uStack_b0;
  *(undefined8 *)(puVar2 + 0x180) = uStack_98;
  *(undefined8 *)(puVar2 + 0x178) = uStack_a0;
  *(undefined8 *)(puVar2 + 400) = uStack_88;
  *(undefined8 *)(puVar2 + 0x188) = uStack_90;
  uStack_78 = *(undefined8 *)(puVar2 + 0x1a0);
  uStack_80 = *(undefined8 *)(puVar2 + 0x198);
  uStack_70 = *(undefined8 *)(puVar2 + 0x1a8);
  uStack_c8 = uStack_60;
  uStack_d0 = uStack_68;
  uStack_c0 = uStack_58;
  _CMTimeSubtract(&uStack_b0,&uStack_80,&uStack_d0);
  *(undefined8 *)(puVar2 + 0x1a0) = uStack_a8;
  *(undefined8 *)(puVar2 + 0x198) = uStack_b0;
  *(undefined8 *)(puVar2 + 0x1a8) = uStack_a0;
  puVar1 = PTR__kCMTimeRangeInvalid_110348660;
  uVar4 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uVar6 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uVar5 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar2 + 0x30) = uVar4;
  return;
}



/* Entry: 107fb0c00; end: 107fb0d13; -[SCTimelineMediaSegmentImpl setStartTimeOffset:] */

void FUN_107fb0c00(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_88 = *(undefined8 *)(param_1 + 0x140);
  uStack_90 = *(undefined8 *)(param_1 + 0x138);
  uStack_80 = *(undefined8 *)(param_1 + 0x148);
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  _CMTimeSubtract(&uStack_48,&uStack_90,&uStack_60);
  uVar3 = param_3[1];
  uVar2 = *param_3;
  *(undefined8 *)(param_1 + 0x148) = param_3[2];
  *(undefined8 *)(param_1 + 0x140) = uVar3;
  *(undefined8 *)(param_1 + 0x138) = uVar2;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  uStack_a8 = *(undefined8 *)(param_1 + 0x188);
  uStack_b0 = *(undefined8 *)(param_1 + 0x180);
  uStack_a0 = *(undefined8 *)(param_1 + 400);
  _CMTimeRangeMake(&uStack_90,&uStack_60,&uStack_b0);
  *(undefined8 *)(param_1 + 0x170) = uStack_88;
  *(undefined8 *)(param_1 + 0x168) = uStack_90;
  *(undefined8 *)(param_1 + 0x180) = uStack_78;
  *(undefined8 *)(param_1 + 0x178) = uStack_80;
  *(undefined8 *)(param_1 + 400) = uStack_68;
  *(undefined8 *)(param_1 + 0x188) = uStack_70;
  uStack_58 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_60 = *(undefined8 *)(param_1 + 0x198);
  uStack_50 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_a8 = uStack_40;
  uStack_b0 = uStack_48;
  uStack_a0 = uStack_38;
  _CMTimeSubtract(&uStack_90,&uStack_60,&uStack_b0);
  *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
  *(undefined8 *)(param_1 + 0x198) = uStack_90;
  *(undefined8 *)(param_1 + 0x1a8) = uStack_80;
  puVar1 = PTR__kCMTimeRangeInvalid_110348660;
  uVar2 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uVar4 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uVar3 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  return;
}



/* Entry: 107fb0d14; end: 107fb0dd7; -[SCTimelineMediaSegmentImpl setSegmentDuration:] */

void FUN_107fb0d14(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)(param_1 + 0x168);
  uStack_58 = *(undefined8 *)(param_1 + 0x170);
  uStack_60 = *puVar1;
  uStack_48 = *(undefined8 *)(param_1 + 0x180);
  uStack_50 = *(undefined8 *)(param_1 + 0x178);
  uStack_38 = *(undefined8 *)(param_1 + 400);
  uStack_40 = *(undefined8 *)(param_1 + 0x188);
  uStack_88 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  uStack_90 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uStack_78 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uStack_80 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  uStack_68 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
  uStack_70 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
  puVar2 = &uStack_60;
  _CMTimeRangeEqual(puVar2,&uStack_90);
  if ((int)puVar2 != 0) {
    uStack_88 = *(undefined8 *)(param_1 + 0x140);
    uStack_90 = *(undefined8 *)(param_1 + 0x138);
    uStack_80 = *(undefined8 *)(param_1 + 0x148);
    uStack_a8 = param_3[1];
    uStack_b0 = *param_3;
    uStack_a0 = param_3[2];
    _CMTimeRangeMake(&uStack_60,&uStack_90,&uStack_b0);
    *(undefined8 *)(param_1 + 0x170) = uStack_58;
    *puVar1 = uStack_60;
    *(undefined8 *)(param_1 + 0x180) = uStack_48;
    *(undefined8 *)(param_1 + 0x178) = uStack_50;
    *(undefined8 *)(param_1 + 400) = uStack_38;
    *(undefined8 *)(param_1 + 0x188) = uStack_40;
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x198) = *puVar1;
    *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x188);
  }
  return;
}



/* Entry: 107fb0dd8; end: 107fb0e67; -[SCTimelineMediaSegmentImpl setTotalContentDuration:] */

void FUN_107fb0dd8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((*(byte *)((long)param_3 + 0xc) & 1) != 0) {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    *(undefined8 *)(param_1 + 0x90) = param_3[2];
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    uStack_40 = param_3[2];
    _CMTimeGetSeconds(&uStack_50);
    func_0x00010c1a16c0(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    uStack_40 = param_3[2];
    _CMTimeGetSeconds(&uStack_50);
    func_0x00010c1a16c0(uVar1);
  }
  return;
}



/* Entry: 107fb0e68; end: 107fb0e7f; -[SCTimelineMediaSegmentImpl firstFrameTime] */

void FUN_107fb0e68(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1[2] = *(undefined8 *)(param_2 + 0x1a8);
  uVar1 = *(undefined8 *)(param_2 + 0x198);
  param_1[1] = *(undefined8 *)(param_2 + 0x1a0);
  *param_1 = uVar1;
  return;
}



/* Entry: 107fb0e80; end: 107fb0eff; -[SCTimelineMediaSegmentImpl localTrimmedTimeRange] */

void FUN_107fb0e80(undefined8 param_1,long param_2)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  uStack_48 = *(undefined8 *)(param_2 + 0x1a0);
  uStack_50 = *(undefined8 *)(param_2 + 0x198);
  uStack_40 = *(undefined8 *)(param_2 + 0x1a8);
  uStack_68 = *(undefined8 *)(param_2 + 0x140);
  uStack_70 = *(undefined8 *)(param_2 + 0x138);
  uStack_60 = *(undefined8 *)(param_2 + 0x148);
  _CMTimeSubtract(auStack_38,&uStack_50,&uStack_70);
  uStack_48 = *(undefined8 *)(param_2 + 0x1b8);
  uStack_50 = *(undefined8 *)(param_2 + 0x1b0);
  uStack_40 = *(undefined8 *)(param_2 + 0x1c0);
  _CMTimeRangeMake(param_1,auStack_38,&uStack_50);
  return;
}



/* Entry: 107fb0f00; end: 107fb0f27; -[SCTimelineMediaSegmentImpl trimmedTimeRangeObservable] */

void FUN_107fb0f00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fb0f28; end: 107fb101f; -[SCTimelineMediaSegmentImpl setTrimmedTimeRange:] */

void FUN_107fb0f28(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar5 = param_3[1];
  uVar3 = *param_3;
  uVar4 = param_3[2];
  uVar7 = param_3[5];
  uVar6 = param_3[4];
  *(undefined8 *)(param_1 + 0x1b0) = param_3[3];
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  *(undefined8 *)(param_1 + 0x1c0) = uVar7;
  *(undefined8 *)(param_1 + 0x1b8) = uVar6;
  *(undefined8 *)(param_1 + 0x1a0) = uVar5;
  *(undefined8 *)(param_1 + 0x198) = uVar3;
  puVar1 = PTR__kCMTimeRangeInvalid_110348660;
  uVar6 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  uVar5 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uVar9 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uVar8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  uVar7 = *(undefined8 *)(puVar1 + 0x28);
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  uStack_38 = param_3[5];
  uStack_40 = param_3[4];
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  uStack_58 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_60 = *(undefined8 *)(param_1 + 0x198);
  uStack_48 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_50 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_38 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_40 = *(undefined8 *)(param_1 + 0x1b8);
  puVar2 = &uStack_60;
  uStack_90 = uVar5;
  uStack_88 = uVar6;
  uStack_80 = uVar8;
  uStack_78 = uVar9;
  uStack_70 = uVar4;
  uStack_68 = uVar7;
  _CMTimeRangeEqual(puVar2,&uStack_90);
  if ((int)puVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x1b8);
    uStack_60 = *(undefined8 *)(param_1 + 0x1b0);
    uStack_50 = *(undefined8 *)(param_1 + 0x1c0);
    _CMTimeGetSeconds(&uStack_60);
    func_0x00010c1fab60(uVar3);
  }
  return;
}



/* Entry: 107fb1020; end: 107fb106b; -[SCTimelineMediaSegmentImpl trimmingTimeRange] */

void FUN_107fb1020(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((((*(byte *)(param_2 + 0x1c) & 1) == 0) || ((*(byte *)(param_2 + 0x34) & 1) == 0)) ||
      (*(long *)(param_2 + 0x38) != 0)) || (*(long *)(param_2 + 0x28) < 0)) {
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x1a0);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_2 + 0x198);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x1b0);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x1a8);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x1c0);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x1b8);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x38);
  param_1[4] = uVar1;
  return;
}



/* Entry: 107fb106c; end: 107fb10ab; -[SCTimelineMediaSegmentImpl updateTrimmingTimeRangeWithStartTime:] */

void FUN_107fb106c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [48];
  
  func_0x00010c27c9c0(auStack_50);
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x20) = param_3[2];
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



/* Entry: 107fb10ac; end: 107fb111f; -[SCTimelineMediaSegmentImpl updateTrimmingTimeRangeWithEndTime:] */

void FUN_107fb10ac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x00010c27c9c0(&uStack_50);
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_60 = param_3[2];
  uStack_88 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_90 = *(undefined8 *)(param_1 + 0x198);
  uStack_80 = *(undefined8 *)(param_1 + 0x1a8);
  _CMTimeSubtract(&uStack_50,&uStack_70,&uStack_90);
  *(undefined8 *)(param_1 + 0x30) = uStack_48;
  *(undefined8 *)(param_1 + 0x28) = uStack_50;
  *(undefined8 *)(param_1 + 0x38) = uStack_40;
  return;
}



/* Entry: 107fb1120; end: 107fb113f; -[SCTimelineMediaSegmentImpl hasDirectSnapDiscard] */

bool FUN_107fb1120(long param_1)

{
  if (*(long *)(param_1 + 0x58) != 0) {
    return true;
  }
  return *(long *)(param_1 + 0x60) != 0;
}



/* Entry: 107fb1140; end: 107fb123f; -[SCTimelineMediaSegmentImpl setDirectSnapDiscardWithSnapSessionId:cameraShortcutId:scanSessionId:] */

void FUN_107fb1140(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be440c0();
  if ((int)lVar1 == 0) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x110);
  }
  puVar2 = PTR_PTR_1126c4bf8;
  _objc_opt_new();
  func_0x00010bea3720(param_1,param_2,puVar2,param_3,param_4,param_5,uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126d8a50;
  _objc_opt_new();
  func_0x00010bea3720(param_1,param_2,puVar3,param_3,param_4,param_5,
                      *(undefined8 *)(param_1 + 0x110));
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107fb1240; end: 107fb1327; -[SCTimelineMediaSegmentImpl _setDirectSnapDiscardEvent:withSnapSessionId:cameraShortcutId:scanSessionId:snapSource:] */

void FUN_107fb1240(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c179280(param_3,param_2,uVar1);
  func_0x00010c205660(param_3,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1ffc60(param_3,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1f64e0(param_3,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c176a60(param_3,param_2,*(undefined8 *)(param_1 + 0xe8));
  func_0x00010c18c600(param_3,param_2,*(undefined8 *)(param_1 + 0xf0));
  func_0x00010c1faa60(param_3,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010c2056c0(param_3,param_2,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fb1328; end: 107fb1357; -[SCTimelineMediaSegmentImpl setDirectSnapDiscardMethod:] */

/* WARNING: Possible PIC construction at 0x000107fb1340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107fb1344) */

void FUN_107fb1328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18e110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_setDirectSnapDiscardMethod__112641260);
  return;
}



/* Entry: 107fb1358; end: 107fb1387; -[SCTimelineMediaSegmentImpl setIsWholeVideo:] */

/* WARNING: Possible PIC construction at 0x000107fb1370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107fb1374) */

void FUN_107fb1358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b5b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_setIsWholeVideo__11264b0f8);
  return;
}



/* Entry: 107fb1388; end: 107fb13b7; -[SCTimelineMediaSegmentImpl setDiscardLocation:] */

/* WARNING: Possible PIC construction at 0x000107fb13a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107fb13a4) */

void FUN_107fb1388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_setDiscardLocation__112641560);
  return;
}



/* Entry: 107fb13b8; end: 107fb13e7; -[SCTimelineMediaSegmentImpl setRecoveredSnap] */

/* WARNING: Possible PIC construction at 0x000107fb13d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107fb13d4) */

void FUN_107fb13b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e9070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_setRecoveredSnap__112657e40,1);
  return;
}



/* Entry: 107fb13e8; end: 107fb1417; -[SCTimelineMediaSegmentImpl setContentLossReason:] */

/* WARNING: Possible PIC construction at 0x000107fb1400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107fb1404) */

void FUN_107fb13e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c182170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_setContentLossReason__11263e278);
  return;
}



/* Entry: 107fb1418; end: 107fb15bb; -[SCTimelineMediaSegmentImpl updateTimelineLoggingForDirectSnapDiscardWithSnapSource:flashOn:adjustingFocus:adjustingExposure:frontCamera:lowLightStatus:shutterSpeed:aperture:ISO:brightness:filterLensId:targetingCampaignId:rankingId:rankingData:] */

void FUN_107fb1418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
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
  
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000000);
  func_0x00010bed6e60(param_1,param_2,param_3,param_4,param_5);
  func_0x00010bed6e60(param_1,param_2,param_3,param_4,param_5);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  uStack_b8 = *(undefined8 *)(param_5 + 0x1a0);
  uStack_c0 = *(undefined8 *)(param_5 + 0x198);
  uStack_a8 = *(undefined8 *)(param_5 + 0x1b0);
  uStack_b0 = *(undefined8 *)(param_5 + 0x1a8);
  uStack_98 = *(undefined8 *)(param_5 + 0x1c0);
  uStack_a0 = *(undefined8 *)(param_5 + 0x1b8);
  uStack_e8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  uStack_f0 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uStack_d8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uStack_e0 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  uStack_c8 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
  uStack_d0 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
  puVar1 = &uStack_c0;
  _CMTimeRangeEqual(puVar1,&uStack_f0);
  if ((int)puVar1 == 0) {
    uVar2 = *(undefined8 *)(param_5 + 0x60);
    uStack_b8 = *(undefined8 *)(param_5 + 0x1b8);
    uStack_c0 = *(undefined8 *)(param_5 + 0x1b0);
    uStack_b0 = *(undefined8 *)(param_5 + 0x1c0);
    _CMTimeGetSeconds(&uStack_c0);
    func_0x00010c1fab60(uVar2);
  }
  return;
}



/* Entry: 107fb15bc; end: 107fb1733; -[SCTimelineMediaSegmentImpl _updateDirectSnapDiscardEvent:withSnapSource:flashOn:adjustingFocus:adjustingExposure:frontCamera:lowLightStatus:shutterSpeed:aperture:ISO:brightness:filterLensId:targetingCampaignId:rankingId:rankingData:] */

void FUN_107fb15bc(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_7);
  func_0x00010c2056c0(param_7,param_6,param_8);
  func_0x00010c19daa0(param_7,param_6,param_9);
  func_0x00010c225ba0(param_7,param_6,param_10);
  func_0x00010c225b80(param_7,param_6,param_11);
  func_0x00010c226360(param_7,param_6,param_12);
  func_0x00010c1c1040(param_7,param_6,param_13);
  func_0x00010c2027a0(param_1,param_7);
  func_0x00010c168620(param_2,param_7);
  func_0x00010c1a9600(param_7,param_6,(long)param_3);
  func_0x00010c173c60(param_4,param_7);
  func_0x00010c19c240(param_7,param_6,param_14);
  _objc_release(param_14);
  func_0x00010c212740(param_7,param_6,param_15);
  _objc_release(param_15);
  func_0x00010c1e74c0(param_7,param_6,param_16);
  _objc_release(param_16);
  func_0x00010c1e74e0(param_7,param_6,param_17);
  _objc_release(param_17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 107fb1734; end: 107fb17ff; -[SCTimelineMediaSegmentImpl updateTimelineLoggingForDirectSnapDiscardWithSegmentSource:mediaSource:] */

void FUN_107fb1734(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x98) = param_4;
  func_0x00010bb1394c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_40 = param_4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1c52e0(*(undefined8 *)(param_1 + 0x58),param_2,puVar1);
  func_0x00010c1c52e0(*(undefined8 *)(param_1 + 0x60),param_2,puVar1);
  func_0x00010c1faae0(*(undefined8 *)(param_1 + 0x60),param_2,param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(puVar1 + 0x58);
  *(undefined8 *)(puVar1 + 0x58) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(puVar1 + 0x60);
  *(undefined8 *)(puVar1 + 0x60) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(puVar1 + 0x68);
  *(undefined8 *)(puVar1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fb1800; end: 107fb183b; -[SCTimelineMediaSegmentImpl clearDirectSnapDiscard] */

void FUN_107fb1800(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb183c; end: 107fb18b7; -[SCTimelineMediaSegmentImpl logDirectSnapDiscardIfNecessary] */

void FUN_107fb183c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107fb18b8; end: 107fb18c7; -[SCTimelineMediaSegmentImpl hasTimelineSegmentDiscard] */

bool FUN_107fb18b8(long param_1)

{
  return *(long *)(param_1 + 0x68) != 0;
}



/* Entry: 107fb18c8; end: 107fb195b; -[SCTimelineMediaSegmentImpl setTimelineSegmentDiscardWithSnapSessionId:captureSessionId:segmentIndex:] */

void FUN_107fb18c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d8a58;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010c205660();
  _objc_release(param_3);
  func_0x00010c179280(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1faa60(puVar1,param_2,param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fb195c; end: 107fb19ef; -[SCTimelineMediaSegmentImpl setTimelineSegmentDiscardWithSnapSessionId:importedContentId:segmentIndex:] */

void FUN_107fb195c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d8a58;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010c205660();
  _objc_release(param_3);
  func_0x00010c1ab140(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1faa60(puVar1,param_2,param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fb19f0; end: 107fb1a37; -[SCTimelineMediaSegmentImpl logTimelineSegmentDiscardIfNecessary] */

void FUN_107fb19f0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107fb1a38; end: 107fb1a47; -[SCTimelineMediaSegmentImpl hasAddSnapTap] */

bool FUN_107fb1a38(long param_1)

{
  return *(long *)(param_1 + 0x78) != 0;
}



/* Entry: 107fb1a48; end: 107fb1b27; -[SCTimelineMediaSegmentImpl logAddSnapTapWithCameraMode:captureSessionId:snapSessionId:] */

void FUN_107fb1a48(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 5) {
    func_0x00010c179280(*(undefined8 *)(param_1 + 0x70),param_2,param_4);
    func_0x00010c205660(*(undefined8 *)(param_1 + 0x70),param_2,param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar1);
  }
  func_0x00010c1769e0(*(undefined8 *)(param_1 + 0x78),param_2,param_3);
  func_0x00010c179280(*(undefined8 *)(param_1 + 0x78),param_2,param_4);
  func_0x00010c205660(*(undefined8 *)(param_1 + 0x78),param_2,param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107fb1b28; end: 107fb1b93; -[SCTimelineMediaSegmentImpl setAddSnapTapWithPreviewToTapAddButtonMs:] */

/* WARNING: Possible PIC construction at 0x000107fb1b60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107fb1b64) */

void FUN_107fb1b28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d8a60;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1e22f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_setPreviewToTapAddButtonMs__1126562e0,param_3);
  return;
}



/* Entry: 107fb1b94; end: 107fb1be7; -[SCTimelineMediaSegmentImpl hasAudioTrack] */

uint FUN_107fb1b94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  return (uint)(*(ulong *)(puVar1 + 0x110) < 0x3d) &
         (uint)(0x1000000000001800 >> (*(ulong *)(puVar1 + 0x110) & 0x3f));
}



/* Entry: 107fb1be8; end: 107fb1c07; -[SCTimelineMediaSegmentImpl isImportedContent] */

uint FUN_107fb1be8(long param_1)

{
  return (uint)(*(ulong *)(param_1 + 0x110) < 0x3d) &
         (uint)(0x1000000000001800 >> (*(ulong *)(param_1 + 0x110) & 0x3f));
}



/* Entry: 107fb1c08; end: 107fb1c37; -[SCTimelineMediaSegmentImpl updateWithSnapCommonLoggingParams:] */

void FUN_107fb1c08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb1c38; end: 107fb1e33; -[SCTimelineMediaSegmentImpl snapSegmentLoggingParamsWithSnapSessionId:] */

void FUN_107fb1c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4588;
  func_0x00010c23f8a0(PTR_PTR_1126c4588,param_2,*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be9d5e0(param_1);
  func_0x00010c2bbc80(puVar1,param_2,lVar2 != -1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x50) == 0) {
    lVar3 = param_1;
    func_0x00010bf6f7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac340(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bef0520(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a76a0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c243400(param_1);
    func_0x00010c2b9b80(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf311e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aa1c0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010c2b9740(puVar1,param_2,param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if ((*(byte *)(param_1 + 0x8c) & 1) != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x88);
    dVar7 = *(double *)(param_1 + 0x80);
    uStack_60 = *(undefined8 *)(param_1 + 0x90);
    dStack_70 = dVar7;
    _CMTimeGetSeconds(&dStack_70);
    func_0x00010c2ae9a0((float)dVar7,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c4aa0;
  _objc_alloc(PTR_PTR_1126c4aa0);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = *(undefined8 *)(param_1 + 0x1b8);
  dStack_70 = *(double *)(param_1 + 0x1b0);
  uStack_60 = *(undefined8 *)(param_1 + 0x1c0);
  _CMTimeGetSeconds(&dStack_70);
  func_0x00010c0439e0(puVar5,param_2,uVar6,lVar2,puVar4,*(undefined8 *)(param_1 + 0x98));
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107fb1e34; end: 107fb1ef3; -[SCTimelineMediaSegmentImpl _segmentTrimmedLocation] */

undefined8 FUN_107fb1e34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_78 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_80 = *(undefined8 *)(param_1 + 0x198);
  uStack_70 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_48 = *(undefined8 *)(param_1 + 0x170);
  uStack_50 = *(undefined8 *)(param_1 + 0x168);
  uStack_40 = *(undefined8 *)(param_1 + 0x178);
  puVar4 = &uStack_80;
  _CMTimeCompare(puVar4,&uStack_50);
  uStack_78 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_80 = *(undefined8 *)(param_1 + 0x198);
  uStack_68 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_70 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_58 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_60 = *(undefined8 *)(param_1 + 0x1b8);
  _CMTimeRangeGetEnd(&uStack_50,&uStack_80);
  uStack_78 = *(undefined8 *)(param_1 + 0x170);
  uStack_80 = *(undefined8 *)(param_1 + 0x168);
  uStack_68 = *(undefined8 *)(param_1 + 0x180);
  uStack_70 = *(undefined8 *)(param_1 + 0x178);
  uStack_58 = *(undefined8 *)(param_1 + 400);
  uStack_60 = *(undefined8 *)(param_1 + 0x188);
  _CMTimeRangeGetEnd(auStack_98,&uStack_80);
  puVar5 = &uStack_50;
  _CMTimeCompare(puVar5,auStack_98);
  bVar3 = (int)puVar5 != -1;
  uVar2 = 2;
  if (bVar3) {
    uVar2 = 0;
  }
  uVar1 = 0xffffffffffffffff;
  if (!bVar3) {
    uVar1 = 1;
  }
  if ((int)puVar4 != 1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 107fb1ef4; end: 107fb1f07; -[SCTimelineMediaSegmentImpl _isSpotlightPostingContent] */

bool FUN_107fb1ef4(long param_1)

{
  return *(long *)(param_1 + 0x110) - 0x5fU < 2;
}



/* Entry: 107fb1f08; end: 107fb1f1f; -[SCTimelineMediaSegmentImpl startTimeOffset] */

void FUN_107fb1f08(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1[2] = *(undefined8 *)(param_2 + 0x148);
  uVar1 = *(undefined8 *)(param_2 + 0x138);
  param_1[1] = *(undefined8 *)(param_2 + 0x140);
  *param_1 = uVar1;
  return;
}



/* Entry: 107fb1f20; end: 107fb1f37; -[SCTimelineMediaSegmentImpl contentTimeRange] */

void FUN_107fb1f20(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x168);
  uVar3 = *(undefined8 *)(param_2 + 0x180);
  uVar2 = *(undefined8 *)(param_2 + 0x178);
  param_1[1] = *(undefined8 *)(param_2 + 0x170);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x188);
  param_1[5] = *(undefined8 *)(param_2 + 400);
  param_1[4] = uVar1;
  return;
}



/* Entry: 107fb1f38; end: 107fb1f4f; -[SCTimelineMediaSegmentImpl trimmedTimeRange] */

void FUN_107fb1f38(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x198);
  uVar3 = *(undefined8 *)(param_2 + 0x1b0);
  uVar2 = *(undefined8 *)(param_2 + 0x1a8);
  param_1[1] = *(undefined8 *)(param_2 + 0x1a0);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x1b8);
  param_1[5] = *(undefined8 *)(param_2 + 0x1c0);
  param_1[4] = uVar1;
  return;
}



/* Entry: 107fb1f50; end: 107fb1f57; -[SCTimelineMediaSegmentImpl uniqueId] */

undefined8 FUN_107fb1f50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107fb1f58; end: 107fb1f5f; -[SCTimelineMediaSegmentImpl captureSessionID] */

undefined8 FUN_107fb1f58(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107fb1f60; end: 107fb1f67; -[SCTimelineMediaSegmentImpl setCaptureSessionID:] */

void FUN_107fb1f60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fb1f68; end: 107fb1f6f; -[SCTimelineMediaSegmentImpl lensSessionID] */

undefined8 FUN_107fb1f68(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107fb1f70; end: 107fb1f77; -[SCTimelineMediaSegmentImpl setLensSessionID:] */

void FUN_107fb1f70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fb1f78; end: 107fb1f7f; -[SCTimelineMediaSegmentImpl firstFrameThumbnailFuture] */

undefined8 FUN_107fb1f78(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107fb1f80; end: 107fb1faf; -[SCTimelineMediaSegmentImpl setFirstFrameThumbnailFuture:] */

void FUN_107fb1f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb1fb0; end: 107fb1fb7; -[SCTimelineMediaSegmentImpl editedThumbnail] */

undefined8 FUN_107fb1fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 107fb1fb8; end: 107fb1fe7; -[SCTimelineMediaSegmentImpl setEditedThumbnail:] */

void FUN_107fb1fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fb1fe8; end: 107fb1fef; -[SCTimelineMediaSegmentImpl thumbnailFutures] */

undefined8 FUN_107fb1fe8(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 107fb1ff0; end: 107fb201f; -[SCTimelineMediaSegmentImpl setThumbnailFutures:] */

void FUN_107fb1ff0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107fb2020; end: 107fb2027; -[SCTimelineMediaSegmentImpl activeLensID] */

undefined8 FUN_107fb2020(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 107fb2028; end: 107fb202f; -[SCTimelineMediaSegmentImpl setActiveLensID:] */

void FUN_107fb2028(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fb2030; end: 107fb2037; -[SCTimelineMediaSegmentImpl activeLensMusicTrackMetadata] */

undefined8 FUN_107fb2030(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 107fb2038; end: 107fb203f; -[SCTimelineMediaSegmentImpl setActiveLensMusicTrackMetadata:] */

void FUN_107fb2038(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fb2040; end: 107fb2047; -[SCTimelineMediaSegmentImpl baseMediaMusicSelection] */

undefined8 FUN_107fb2040(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 107fb2048; end: 107fb204f; -[SCTimelineMediaSegmentImpl setBaseMediaMusicSelection:] */

void FUN_107fb2048(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fb2050; end: 107fb2057; -[SCTimelineMediaSegmentImpl activeCameraModes] */

undefined8 FUN_107fb2050(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 107fb2058; end: 107fb205f; -[SCTimelineMediaSegmentImpl setActiveCameraModes:] */

void FUN_107fb2058(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fb2060; end: 107fb2067; -[SCTimelineMediaSegmentImpl detailedCameraModes] */

undefined8 FUN_107fb2060(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 107fb2068; end: 107fb206f; -[SCTimelineMediaSegmentImpl setDetailedCameraModes:] */

void FUN_107fb2068(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fb2070; end: 107fb2077; -[SCTimelineMediaSegmentImpl segmentCreationTimeTs] */

undefined8 FUN_107fb2070(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 107fb2078; end: 107fb208b; -[SCTimelineMediaSegmentImpl localFirstFrameTime] */

void FUN_107fb2078(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x150);
  param_1[1] = *(undefined8 *)(param_2 + 0x158);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x160);
  return;
}



/* Entry: 107fb208c; end: 107fb209f; -[SCTimelineMediaSegmentImpl setLocalFirstFrameTime:] */

void FUN_107fb208c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x160) = param_3[2];
  *(undefined8 *)(param_1 + 0x158) = uVar2;
  *(undefined8 *)(param_1 + 0x150) = uVar1;
  return;
}



/* Entry: 107fb20a0; end: 107fb20a7; -[SCTimelineMediaSegmentImpl playbackRate] */

undefined8 FUN_107fb20a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 107fb20a8; end: 107fb20af; -[SCTimelineMediaSegmentImpl setPlaybackRate:] */

void FUN_107fb20a8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x100) = param_1;
  return;
}



/* Entry: 107fb20b0; end: 107fb20b7; -[SCTimelineMediaSegmentImpl creativeEditTag] */

undefined8 FUN_107fb20b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 107fb20b8; end: 107fb20bf; -[SCTimelineMediaSegmentImpl setCreativeEditTag:] */

void FUN_107fb20b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fb20c0; end: 107fb20c7; -[SCTimelineMediaSegmentImpl snapSource] */

undefined8 FUN_107fb20c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 107fb20c8; end: 107fb20cf; -[SCTimelineMediaSegmentImpl externalMediaSource] */

undefined4 FUN_107fb20c8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}



/* Entry: 107fb20d0; end: 107fb20d7; -[SCTimelineMediaSegmentImpl externalMediaCreationTimeTs] */

undefined8 FUN_107fb20d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 107fb20d8; end: 107fb20df; -[SCTimelineMediaSegmentImpl setExternalMediaCreationTimeTs:] */

void FUN_107fb20d8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x118) = param_1;
  return;
}



/* Entry: 107fb20e0; end: 107fb20e7; -[SCTimelineMediaSegmentImpl remixMetadata] */

undefined8 FUN_107fb20e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 107fb20e8; end: 107fb20ef; -[SCTimelineMediaSegmentImpl setRemixMetadata:] */

void FUN_107fb20e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fb20f0; end: 107fb20f7; -[SCTimelineMediaSegmentImpl tinselMedia] */

undefined8 FUN_107fb20f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 107fb20f8; end: 107fb20ff; -[SCTimelineMediaSegmentImpl spotlightMediaSource] */

undefined8 FUN_107fb20f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107fb2100; end: 107fb2107; -[SCTimelineMediaSegmentImpl setSpotlightMediaSource:] */

void FUN_107fb2100(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 107fb2108; end: 107fb210f; -[SCTimelineMediaSegmentImpl originalMediaOrigins] */

undefined8 FUN_107fb2108(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 107fb2110; end: 107fb2117; -[SCTimelineMediaSegmentImpl setOriginalMediaOrigins:] */

void FUN_107fb2110(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107fb2118; end: 107fb2237; -[SCTimelineMediaSegmentImpl .cxx_destruct] */

void FUN_107fb2118(long param_1)

{
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107fb2238; end: 107fb2257;  */

undefined1  [16] FUN_107fb2238(double param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_1 * 62.0;
  auVar1._0_8_ = param_1 * 35.0;
  return auVar1;
}



/* Entry: 107fb2258; end: 107fb2567;  */

long FUN_107fb2258(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
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
  _objc_retain(param_1);
  lVar4 = param_1;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar10 = *plStack_140;
    do {
      lVar8 = 0;
      do {
        if (*plStack_140 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        puVar6 = PTR_DAT_1126a4e40;
        lVar9 = *(long *)(lStack_148 + lVar8 * 8);
        _objc_retain(lVar9);
        lVar5 = lVar9;
        func_0x00010010fab4(lVar9,puVar6);
        lVar1 = lVar9;
        if ((int)lVar5 == 0) {
          lVar1 = 0;
        }
        _objc_retain(lVar1);
        _objc_release(lVar9);
        if (lVar1 == 0) {
          if (lVar9 != 0) goto LAB_107fb243c;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
        }
        else {
          lVar5 = lVar9;
          func_0x00010bfb6cc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar5 != 0) {
            lVar5 = lVar9;
            func_0x00010bfb6cc0(lVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            _objc_release(lVar5);
            puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
            func_0x00010c27c900(&uStack_1b0,lVar9);
            uStack_1c8 = uStack_108;
            uStack_1d0 = uStack_110;
            uStack_1c0 = uStack_100;
            uStack_1e8 = uStack_190;
            uStack_1f0 = uStack_198;
            uStack_1e0 = uStack_188;
            _CMTimeRangeMake(&uStack_180,&uStack_1d0,&uStack_1f0);
            func_0x00010c297240(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(puVar6);
          }
LAB_107fb243c:
          func_0x00010c27c900(&uStack_180,lVar9);
        }
        uStack_1a8 = uStack_108;
        uStack_1b0 = uStack_110;
        uStack_1a0 = uStack_100;
        uStack_1c8 = uStack_160;
        uStack_1d0 = uStack_168;
        uStack_1c0 = uStack_158;
        _CMTimeAdd(&uStack_110,&uStack_1b0,&uStack_1d0);
        _objc_release(lVar1);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = param_1;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_1);
  if (param_2 != 0) {
    puVar6 = puVar2;
    func_0x00010bf51e00(puVar2);
    puVar7 = puVar3;
    func_0x00010bf51e00(puVar3);
    (**(code **)(param_2 + 0x10))(param_2,puVar6,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar4 = param_1;
  func_0x00010bfb1920(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fff40();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c0bc7a0(param_1);
  _objc_release(param_1);
  return lVar4;
}



/* Entry: 107fb2568; end: 107fb2607;  */

undefined8 FUN_107fb2568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fff40();
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_107fb2608;
  puStack_40 = &UNK_1108e9870;
  uVar1 = param_2;
  uStack_38 = param_1;
  func_0x00010c0bc7a0(param_2,param_3,&puStack_58);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107fb2608; end: 107fb2657;  */

bool FUN_107fb2608(double param_1,long param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_2 + 0x20);
  func_0x00010c0fff40(param_3);
  dVar1 = ABS(dVar2 + param_1) * 2.220446049250313e-16;
  if (dVar1 <= 2.2250738585072014e-308) {
    dVar1 = 2.2250738585072014e-308;
  }
  return ABS(dVar2 - param_1) < dVar1;
}



/* Entry: 107fb2658; end: 107fb295f;  */

ulong FUN_107fb2658(double *param_1,ulong param_2,double *param_3)

{
  uint uVar1;
  ulong uVar2;
  double *pdVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  dStack_108 = *(double *)(PTR__kCMTimeZero_110348670 + 8);
  dStack_110 = *(double *)PTR__kCMTimeZero_110348670;
  dStack_100 = *(double *)(PTR__kCMTimeZero_110348670 + 0x10);
  dVar7 = 0.0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar5 = *plStack_140;
    do {
      uVar6 = 0;
      do {
        if (*plStack_140 != lVar5) {
          _objc_enumerationMutation(param_2);
        }
        uVar4 = *(ulong *)(lStack_148 + uVar6 * 8);
        if (uVar4 == 0) {
          dVar7 = 0.0;
          dStack_188 = 0.0;
          dStack_190 = 0.0;
          uStack_178 = 0;
          uStack_180 = 0;
          dStack_198 = 0.0;
          dStack_1a0 = 0.0;
        }
        else {
          func_0x00010c27c900(&dStack_1a0,uVar4);
        }
        func_0x00010c0fff40(uVar4);
        dStack_1e8 = (double)uStack_180;
        dStack_1f0 = dStack_188;
        dStack_1e0 = (double)uStack_178;
        _CMTimeMultiplyByFloat64(&dStack_170,1.0 / dVar7,&dStack_1f0);
        dStack_1e8 = dStack_108;
        dStack_1f0 = dStack_110;
        dStack_1e0 = dStack_100;
        dStack_1b8 = dStack_168;
        dStack_1c0 = dStack_170;
        dStack_1b0 = dStack_160;
        _CMTimeRangeMake(&dStack_1a0,&dStack_1f0,&dStack_1c0);
        dStack_1e8 = dStack_198;
        dStack_1f0 = dStack_1a0;
        dStack_1d8 = dStack_188;
        dStack_1e0 = dStack_190;
        dStack_1b8 = param_3[1];
        dStack_1c0 = *param_3;
        uStack_1c8 = uStack_178;
        uStack_1d0 = uStack_180;
        dStack_1b0 = param_3[2];
        pdVar3 = &dStack_1f0;
        _CMTimeRangeContainsTime(pdVar3,&dStack_1c0);
        if ((int)pdVar3 != 0) {
          _objc_retain(uVar4);
          _objc_release(param_2);
          if (uVar4 == 0) goto LAB_107fb28cc;
          dStack_198 = param_3[1];
          dStack_1a0 = *param_3;
          dStack_190 = param_3[2];
          dStack_168 = dStack_108;
          dStack_170 = dStack_110;
          dStack_160 = dStack_100;
          _CMTimeSubtract(&dStack_1f0,&dStack_1a0,&dStack_170);
          func_0x00010c0fff40(uVar4);
          dStack_198 = dStack_1e8;
          dStack_1a0 = dStack_1f0;
          dStack_190 = dStack_1e0;
          _CMTimeMultiplyByFloat64(&dStack_170,&dStack_1a0);
          func_0x00010c27c900(&dStack_1a0,uVar4);
          dStack_1b8 = dStack_198;
          dStack_1c0 = dStack_1a0;
          dStack_1b0 = dStack_190;
          dStack_208 = dStack_168;
          dStack_210 = dStack_170;
          dStack_200 = dStack_160;
          _CMTimeAdd(param_1,&dStack_1c0,&dStack_210);
          goto LAB_107fb2914;
        }
        dStack_1e8 = dStack_108;
        dStack_1f0 = dStack_110;
        dStack_1e0 = dStack_100;
        dStack_1b8 = dStack_168;
        dStack_1c0 = dStack_170;
        dStack_1b0 = dStack_160;
        dVar7 = dStack_170;
        _CMTimeAdd(&dStack_110,&dStack_1f0,&dStack_1c0);
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
      uVar2 = param_2;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
  }
  _objc_release(param_2);
LAB_107fb28cc:
  uVar4 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (uVar4 == 0) {
    dStack_188 = 0.0;
    dStack_190 = 0.0;
    uStack_178 = 0;
    uStack_180 = 0;
    dStack_198 = 0.0;
    dStack_1a0 = 0.0;
  }
  else {
    func_0x00010c27c900(&dStack_1a0,uVar4);
  }
  param_1[1] = dStack_198;
  *param_1 = dStack_1a0;
  param_1[2] = dStack_190;
LAB_107fb2914:
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain();
  uVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a4e40);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (uint)uVar2;
  }
  _objc_release(param_2);
  return (ulong)uVar1;
}



/* Entry: 107fb2960; end: 107fb29a3;  */

undefined4 FUN_107fb2960(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010010fab4(param_1,PTR_DAT_1126a4e40);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (undefined4)lVar2;
  }
  _objc_release(param_1);
  return uVar1;
}


