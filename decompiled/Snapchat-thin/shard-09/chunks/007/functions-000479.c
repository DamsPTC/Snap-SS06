/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10705e3b8; end: 10705e573; -[SCSenderLineView setFillColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705e3b8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar4 = &puStack_d0;
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112763624;
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + lVar5));
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = param_1;
    func_0x00010bfeaf00();
    if ((int)lVar5 == 0) {
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10705e674;
      puStack_90 = &UNK_11085bbb8;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_10705e6f4;
      puStack_b8 = &UNK_1109898b8;
      ppuVar3 = &puStack_a8;
      lStack_b0 = param_1;
      lStack_88 = param_1;
    }
    else {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      uStack_48 = 0x10705e4e4;
      puStack_40 = &UNK_11085bbb8;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_10705e574;
      puStack_68 = &UNK_1109898b8;
      ppuVar3 = &puStack_58;
      ppuVar4 = &puStack_80;
      lStack_60 = param_1;
      lStack_38 = param_1;
    }
    func_0x00010c0bddc0(param_3,param_2,ppuVar3,ppuVar4);
    func_0x00010c1cbe60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10705e574; end: 10705e673;  */

void FUN_10705e574(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_4);
  func_0x00010bfcd9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_colorsWithStops__1125adf70;
  _NSStringFromSelector(PTR_s_colorsWithStops__1125adf70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c6a0(uVar3,param_3,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bfcd9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_calculatePoints__1125a7810;
  _NSStringFromSelector(PTR_s_calculatePoints__1125a7810);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c6a0(uVar3,param_3,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10705e674; end: 10705e6f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705e674(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retainAutorelease(param_2);
  func_0x00010bdc0fe0(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112763628;
  func_0x00010c12c940(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705e6f4; end: 10705e7b7;  */

void FUN_10705e6f4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_4);
  func_0x00010bfcd9c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41720();
  _objc_release(param_4);
  func_0x00010bf279a0(param_1,uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10705e7b8; end: 10705e803; -[SCSenderLineView setNeedsPathUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705e7b8(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_11276362c) = 1;
  func_0x00010c1cbe20();
  lVar1 = param_1;
  func_0x00010bfeaf00();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
    return;
  }
  return;
}



/* Entry: 10705e804; end: 10705e9e7; -[SCSenderLineView updatePathIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705e804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  ppuVar3 = &puStack_150;
  lVar6 = (long)_DAT_11276362c;
  if (*(char *)(param_5 + lVar6) == '\x01') {
    func_0x00010bf20c00();
    lVar4 = (long)_DAT_112763630;
    *(undefined8 *)(param_5 + lVar4) = param_3;
    ((undefined8 *)(param_5 + lVar4))[1] = param_4;
    *(undefined1 *)(param_5 + lVar6) = 0;
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    lVar6 = param_5;
    uVar5 = param_1;
    func_0x00010bf52540(param_5);
    func_0x00010bf525a0(param_5);
    uVar7 = uVar5;
    func_0x00010bf525a0(param_5);
    func_0x00010bf199e0(param_1,param_2,param_3,param_4,uVar5,uVar7,puVar1,param_6,lVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + _DAT_112763634);
    *(undefined **)(param_5 + _DAT_112763634) = puVar1;
    _objc_release(uVar5);
    lVar6 = param_5;
    func_0x00010bfeaf00();
    lVar4 = param_5;
    func_0x00010bfad500(param_5);
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar6 == 0) {
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_10705eb18;
      puStack_f0 = &UNK_11085bbb8;
      puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_148 = 0xc2000000;
      pcStack_140 = FUN_10705eb6c;
      puStack_138 = &UNK_1109898e8;
      ppuVar2 = &puStack_108;
      lStack_130 = param_5;
      uStack_128 = param_1;
      uStack_120 = param_2;
      uStack_118 = param_3;
      uStack_110 = param_4;
      lStack_e8 = param_5;
    }
    else {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10705e9e8;
      puStack_80 = &UNK_11085bbb8;
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      uStack_d0 = 0x10705ea68;
      puStack_c8 = &UNK_1109898e8;
      ppuVar2 = &puStack_98;
      ppuVar3 = &puStack_e0;
      lStack_c0 = param_5;
      uStack_b8 = param_1;
      uStack_b0 = param_2;
      uStack_a8 = param_3;
      uStack_a0 = param_4;
      lStack_78 = param_5;
    }
    func_0x00010c0bddc0(lVar4,param_6,ppuVar2,ppuVar3);
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 10705e9e8; end: 10705eb17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705e9e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_path_11261b020;
  _NSStringFromSelector(PTR_s_path_11261b020);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112763634);
  func_0x00010bdc1040(uVar3);
  func_0x00010c14c6a0(uVar1,param_2,puVar2,uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705eb18; end: 10705eb6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705eb18(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdc1040(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112763634));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705eb6c; end: 10705ebc7;  */

void FUN_10705eb6c(long param_1)

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
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcd9c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar2,uVar3,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10705ebc8; end: 10705ec03; -[SCSenderLineView hasSizeChanged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10705ebc8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112763630;
  func_0x00010bf20c00();
  return ((double *)(param_5 + lVar1))[1] != param_4 || *(double *)(param_5 + lVar1) != param_3;
}



/* Entry: 10705ec04; end: 10705ec27; -[SCSenderLineView inAnimationBlock] */

bool FUN_10705ec04(double param_1)

{
  func_0x00010bfee1e0(PTR__OBJC_CLASS___UIView_1126aec20);
  return 0.0 < param_1;
}



/* Entry: 10705ec28; end: 10705ec2b; -[SCSenderLineView shapeLayer] */

void FUN_10705ec28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 10705ec2c; end: 10705ecbb; -[SCSenderLineView gradientLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705ec2c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112763628;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066f40();
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10705ecbc; end: 10705ed0f; -[SCSenderLineView setFrame:] */

void FUN_10705ecbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f86a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setFrame__112645658);
  uVar1 = param_1;
  func_0x00010bfeaf00();
  if ((int)uVar1 != 0) {
    func_0x00010c08cdc0(param_1);
  }
  return;
}



/* Entry: 10705ed10; end: 10705ed63; -[SCSenderLineView setBounds:] */

void FUN_10705ed10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f86a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setBounds__11263a898);
  uVar1 = param_1;
  func_0x00010bfeaf00();
  if ((int)uVar1 != 0) {
    func_0x00010c08cdc0(param_1);
  }
  return;
}



/* Entry: 10705ed64; end: 10705edc7; -[SCSenderLineView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705ed64(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f86a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_1;
  func_0x00010bfdc1a0();
  if ((int)lVar1 != 0) {
    *(undefined1 *)(param_1 + _DAT_11276362c) = 1;
  }
  func_0x00010c288640(param_1);
  return;
}



/* Entry: 10705edc8; end: 10705edd3; +[SCSenderLineView layerClass] */

void FUN_10705edc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d4350);
  return;
}



/* Entry: 10705edd4; end: 10705ede3; -[SCSenderLineView cornerMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10705edd4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276361c);
}



/* Entry: 10705ede4; end: 10705edf3; -[SCSenderLineView cornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10705ede4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763620);
}



/* Entry: 10705edf4; end: 10705ee03; -[SCSenderLineView fillColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10705edf4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112763624);
}



/* Entry: 10705ee04; end: 10705ee53; -[SCSenderLineView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705ee04(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112763624,0);
  _objc_storeStrong(param_1 + _DAT_112763628,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112763634,0);
  return;
}



/* Entry: 10705ee54; end: 10705f297; +[SCFocusedMessageViewModelGenerator viewModelFromMessage:conversation:conversationParticipants:currentUserId:senderUserId:width:snapchattersData:groupsCustomColorsFetcher:] */

void FUN_10705ee54(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  double dVar13;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x000108ef5474();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bfdcfe0(param_5);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c127e40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + -70.0;
  puVar4 = param_4;
  FUN_10706abc8(param_1,0x4049000000000000,param_4,uVar1,param_7,param_8,param_9,uVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = param_4;
  func_0x00010c0cb9a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar2 = param_5;
  func_0x00010bfe5d80(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_4;
  func_0x00010bf026e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  FUN_107069fa8(puVar3,uVar2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar2);
  puVar5 = param_4;
  func_0x00010c15cca0(param_4);
  uVar7 = param_8;
  FUN_1070686b8(param_8,param_7,param_6,puVar5,param_9,param_10,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  puVar5 = param_4;
  func_0x00010c07d080();
  if (((ulong)puVar5 & 1) == 0) {
    uVar8 = 0;
    func_0x0001070681ac(0);
  }
  else {
    uVar8 = 0;
    FUN_10706814c(0);
  }
  uVar2 = param_5;
  func_0x00010c074920();
  uVar9 = param_5;
  func_0x00010c0cb860();
  _objc_retain(param_4);
  puVar10 = param_4;
  func_0x00010c07d080();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar13 = 0.0;
  if ((uVar9 != 0) && (((ulong)puVar10 & 1) == 0)) {
    if ((uVar2 & 1) == 0) {
      puVar10 = param_4;
      func_0x00010c0cc0c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1211c0();
      func_0x00010bf651a0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
    }
    else {
      puVar5 = param_4;
      func_0x00010c0cb9a0(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
    _objc_opt_new(PTR__OBJC_CLASS___NSDateComponents_1126aef68);
    func_0x00010c1c8500();
    puVar11 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf64e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    if (puVar12 == (undefined *)0x0) {
      dVar13 = 0.0;
    }
    else {
      func_0x00010c26f3a0(puVar12);
      param_1 = param_1 / ((double)uVar9 * 60.0);
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      dVar13 = 1.0;
      if (param_1 <= 1.0) {
        dVar13 = param_1;
      }
    }
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar5);
  }
  _objc_release(param_4);
  puVar5 = PTR_PTR_1126d4358;
  _objc_alloc(PTR_PTR_1126d4358);
  puVar10 = puVar5;
  func_0x000107069e24();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044720(dVar13,puVar5);
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126d4360;
  _objc_alloc(PTR_PTR_1126d4360);
  func_0x00010bff4ee0();
  _objc_release(puVar5);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10705f298; end: 10705f2db; -[SCChatAsyncComposerContextWrapper initWithMessageId:contentType:graphene:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705f298(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f86a8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithMessageId_contentType_gr_1125e8768);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_112763638) = 0;
  }
  return;
}



/* Entry: 10705f2dc; end: 10705f387; -[SCChatAsyncComposerContextWrapper setMargins:wrapWithBubble:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705f2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lStack_60;
  undefined *puStack_58;
  
  lVar1 = (long)_DAT_112763638;
  _os_unfair_lock_lock(param_5 + lVar1);
  puStack_58 = PTR_PTR_1126f86a8;
  lStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&lStack_60,
                      PTR_s_setMargins_wrapWithBubble__11264e4f8,param_7);
  _os_unfair_lock_unlock(param_5 + lVar1);
  return;
}



/* Entry: 10705f388; end: 10705f3cf; -[SCChatAsyncComposerContextWrapper contentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10705f388(long param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  
  lVar2 = (long)_DAT_112763638;
  _os_unfair_lock_lock(param_1 + lVar2);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x18);
  _os_unfair_lock_unlock(param_1 + lVar2);
  return auVar1;
}



/* Entry: 10705f3d0; end: 10705f467; -[SCChatAsyncComposerContextWrapper applyValdiContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705f3d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = (long)_DAT_112763638;
  _os_unfair_lock_lock(param_1 + lVar1);
  puStack_38 = PTR_PTR_1126f86a8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_applyValdiContext__11259fc78,param_3);
  *(undefined1 *)(param_1 + _DAT_11276363c) = 0;
  _os_unfair_lock_unlock(param_1 + lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10705f468; end: 10705f4d7; -[SCChatAsyncComposerContextWrapper destroy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705f468(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = (long)_DAT_112763638;
  _os_unfair_lock_lock(param_1 + lVar1);
  *(undefined1 *)(param_1 + _DAT_112763640) = 1;
  _os_unfair_lock_unlock(param_1 + lVar1);
  puStack_38 = PTR_PTR_1126f86a8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_destroy_1125b9580);
  return;
}



/* Entry: 10705f4d8; end: 10705f553; -[SCChatAsyncComposerContextWrapper markSizeDirtyAndNotify] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705f4d8(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112763638;
  _os_unfair_lock_lock(param_1 + lVar1);
  *(undefined1 *)(param_1 + 8) = 1;
  if (*(char *)(param_1 + _DAT_112763644) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112763648) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar1);
    return;
  }
  _os_unfair_lock_unlock(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0dd2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_notifyLayoutDirty_112614ed0);
  return;
}



/* Entry: 10705f554; end: 10705f5f7; -[SCChatAsyncComposerContextWrapper setChatViewVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705f554(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112763638;
  _os_unfair_lock_lock(param_1 + lVar1);
  if ((*(byte *)(param_1 + _DAT_112763640) & 1) == 0) {
    if ((((uint)*(byte *)(param_1 + _DAT_112763644) != (param_3 ^ 1)) &&
        (*(char *)(param_1 + _DAT_112763644) = (char)(param_3 ^ 1), param_3 != 0)) &&
       ((*(byte *)(param_1 + _DAT_112763648) & 1) != 0)) {
      *(undefined1 *)(param_1 + _DAT_112763648) = 0;
      *(undefined1 *)(param_1 + 8) = 1;
      _os_unfair_lock_unlock(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0dd2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_notifyLayoutDirty_112614ed0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar1);
  return;
}



/* Entry: 10705f5f8; end: 10705f6af; -[SCChatAsyncComposerContextWrapper contentSizeForMaxWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10705f5f8(double param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = param_2;
  func_0x00010bfe1300();
  if ((int)lVar2 != 0) {
    uVar5 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar6 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    goto LAB_10705f698;
  }
  lVar2 = (long)_DAT_112763638;
  _os_unfair_lock_lock(param_2 + lVar2);
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    dVar4 = ABS(*(double *)(param_2 + 0x10) - param_1);
    dVar3 = ABS(param_1 + *(double *)(param_2 + 0x10)) * 2.220446049250313e-16;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar3))) {
      bVar1 = dVar4 < dVar3;
    }
    if (!bVar1) goto LAB_10705f670;
  }
  else {
LAB_10705f670:
    *(double *)(param_2 + 0x10) = param_1;
    _os_unfair_lock_unlock(param_2 + lVar2);
    func_0x00010be9adc0(param_2);
    _os_unfair_lock_lock(param_2 + lVar2);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  _os_unfair_lock_unlock(param_2 + lVar2);
LAB_10705f698:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Entry: 10705f6b0; end: 10705f7ff; -[SCChatAsyncComposerContextWrapper handleRenderCompletedAfterLayoutDirtyForValdiContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705f6b0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be3f8c0();
  if ((uVar1 & 1) == 0) {
    lVar2 = (long)_DAT_112763638;
    _os_unfair_lock_lock(param_1 + lVar2);
    if (*(char *)(param_1 + (long)_DAT_112763644) == '\x01') {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_1 + (long)_DAT_112763648) = 1;
      _os_unfair_lock_unlock(param_1 + lVar2);
    }
    else {
      _os_unfair_lock_unlock(param_1 + lVar2);
      _objc_initWeak(auStack_38,param_1);
      _objc_initWeak(auStack_40,param_3);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_10705f800;
      puStack_58 = &UNK_110854350;
      _objc_copyWeak(auStack_50,auStack_38);
      _objc_copyWeak(auStack_48,auStack_40);
      func_0x0001000d76cc("APPSTORE",&puStack_70);
      _objc_destroyWeak(auStack_48);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10705f800; end: 10705f84b;  */

void FUN_10705f800(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2eec0(lVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10705f84c; end: 10705fa17; -[SCChatAsyncComposerContextWrapper _handleRenderCompletedAfterLayoutDirtyOnMainThreadForValdiContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705f84c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_7);
  func_0x00010c06ad80(param_5);
  lVar3 = (long)_DAT_112763638;
  _os_unfair_lock_lock(param_5 + lVar3);
  if ((*(byte *)(param_5 + _DAT_112763640) & 1) == 0) {
    if (param_7 == 0) {
LAB_10705f8ec:
      *(undefined1 *)(param_5 + 8) = 1;
      if (*(char *)(param_5 + _DAT_112763644) != '\x01') {
        _os_unfair_lock_unlock(param_5 + lVar3);
LAB_10705f928:
        func_0x00010c0dd2e0(param_5);
        goto LAB_10705f930;
      }
    }
    else {
      lVar1 = param_5;
      func_0x00010c295200();
      _objc_retainAutoreleasedReturnValue();
      if (param_7 != lVar1) {
        _objc_release(lVar1);
        goto LAB_10705f8ec;
      }
      lVar2 = param_7;
      func_0x00010bf6f140();
      _objc_release(lVar1);
      if ((int)lVar2 != 0) goto LAB_10705f8ec;
      if (*(char *)(param_5 + _DAT_112763644) != '\x01') {
        dVar5 = *(double *)(param_5 + 0x10);
        if (dVar5 <= 0.0) {
          *(undefined1 *)(param_5 + 8) = 1;
          goto LAB_10705f914;
        }
        *(undefined1 *)(param_5 + 8) = 0;
        func_0x00010c0bafa0(param_5);
        lVar1 = param_5;
        dVar4 = param_1;
        func_0x00010c2bd700(param_5);
        dVar7 = *(double *)(param_5 + 0x18);
        dVar6 = *(double *)(param_5 + 0x20);
        _os_unfair_lock_unlock(param_5 + lVar3);
        _CACurrentMediaTime();
        func_0x00010be5e380(dVar5,param_1,param_2,param_3,param_4,dVar4,param_5,param_6,param_7,
                            lVar1);
        if ((dVar5 == dVar7) && (param_1 == dVar6)) goto LAB_10705f930;
        goto LAB_10705f928;
      }
      *(undefined1 *)(param_5 + 8) = 1;
    }
    *(undefined1 *)(param_5 + _DAT_112763648) = 1;
  }
LAB_10705f914:
  _os_unfair_lock_unlock(param_5 + lVar3);
LAB_10705f930:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10705fa18; end: 10705fa63; -[SCChatAsyncComposerContextWrapper _isDestroyed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10705fa18(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112763638;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined1 *)(param_1 + _DAT_112763640);
  _os_unfair_lock_unlock(param_1 + lVar2);
  return uVar1;
}



/* Entry: 10705fa64; end: 10705fbe7; -[SCChatAsyncComposerContextWrapper _measureAndCommitWithValdiContext:maxWidth:margins:wrapWithBubble:startTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10705fa64(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9,
             undefined8 param_10)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  _objc_retain(param_9);
  if ((param_9 == 0) || (lVar2 = param_9, func_0x00010bf6f140(), (int)lVar2 != 0)) {
    lVar2 = param_7 + _DAT_112763638;
    _os_unfair_lock_lock(lVar2);
    lVar3 = param_7;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_9 == lVar3) {
      *(undefined1 *)(param_7 + 8) = 1;
    }
    dVar4 = *(double *)(param_7 + 0x18);
    param_2 = *(undefined8 *)(param_7 + 0x20);
  }
  else {
    dVar4 = param_1;
    func_0x00010c0c3f60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10);
    lVar2 = param_7 + _DAT_112763638;
    _os_unfair_lock_lock(lVar2);
    lVar3 = param_7;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    if (param_9 == lVar3) {
      dVar6 = ABS(*(double *)(param_7 + 0x10) - param_1);
      dVar5 = ABS(param_1 + *(double *)(param_7 + 0x10)) * 2.220446049250313e-16;
      _objc_release();
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        *(double *)(param_7 + 0x18) = dVar4;
        *(undefined8 *)(param_7 + 0x20) = param_2;
      }
    }
    else {
      _objc_release();
    }
  }
  _os_unfair_lock_unlock(lVar2);
  _objc_release(param_9);
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = dVar4;
  return auVar7;
}



/* Entry: 10705fbe8; end: 10705fdf3; -[SCChatAsyncComposerContextWrapper _scheduleAsyncMeasureIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705fbe8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _CACurrentMediaTime();
  lVar4 = (long)_DAT_112763638;
  _os_unfair_lock_lock(param_2 + lVar4);
  if (((*(byte *)(param_2 + _DAT_112763640) & 1) == 0) &&
     (lVar5 = (long)_DAT_11276363c, (*(byte *)(param_2 + lVar5) & 1) == 0)) {
    if (*(char *)(param_2 + _DAT_112763644) == '\x01') {
      lVar3 = 0;
      *(undefined1 *)(param_2 + _DAT_112763648) = 1;
    }
    else {
      lVar3 = param_2;
      func_0x00010c295200();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar3 != 0) && (lVar1 = lVar3, func_0x00010bf6f140(), (int)lVar1 == 0)) {
        *(undefined1 *)(param_2 + lVar5) = 1;
        _os_unfair_lock_unlock(param_2 + lVar4);
        _objc_initWeak(auStack_48,param_2);
        _objc_initWeak(auStack_50,lVar3);
        puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
        func_0x00010c077480();
        puStack_68 = &uStack_70;
        uStack_70 = 0;
        uStack_60 = 0x2020000000;
        uStack_58 = 0;
        _objc_copyWeak(auStack_90,auStack_48);
        uStack_78 = SUB81(puVar2,0);
        _objc_copyWeak(auStack_88,auStack_50);
        uStack_80 = param_1;
        func_0x00010c2a15a0(lVar3);
        *(undefined1 *)(puStack_68 + 3) = 1;
        _objc_destroyWeak(auStack_88);
        _objc_destroyWeak(auStack_90);
        __Block_object_dispose(&uStack_70,8);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
        goto LAB_10705fc48;
      }
    }
  }
  else {
    lVar3 = 0;
  }
  _os_unfair_lock_unlock(param_2 + lVar4);
LAB_10705fc48:
  _objc_release(lVar3);
  return;
}



/* Entry: 10705fdf4; end: 10705ff0b;  */

void FUN_10705fdf4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  byte bVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  byte bStack_38;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((uVar1 == 0) || (uVar2 = uVar1, func_0x00010be3f8c0(), (uVar2 & 1) != 0)) goto LAB_10705fed4;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010c077480();
    if ((int)puVar3 == 0) goto LAB_10705fe58;
    bVar4 = *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) ^ 1;
  }
  else {
LAB_10705fe58:
    bVar4 = 0;
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10705ff0c;
  puStack_58 = &UNK_110989918;
  _objc_copyWeak(auStack_50,param_1 + 0x28);
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  bStack_38 = bVar4 & 1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_50);
LAB_10705fed4:
  _objc_release(uVar1);
  return;
}



/* Entry: 10705ff0c; end: 10705ff6f;  */

void FUN_10705ff0c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be25da0(*(undefined8 *)(param_1 + 0x30),lVar1,param_2,lVar2,
                      (*(byte *)(param_1 + 0x38) ^ 0xff) & 1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10705ff70; end: 107060107; -[SCChatAsyncComposerContextWrapper _handleAsyncMeasureRenderCompletedForValdiContext:startTime:notifyLayoutDirty:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10705ff70(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,ulong param_7,int param_8)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = param_1;
  _objc_retain(param_7);
  lVar2 = (long)_DAT_112763638;
  _os_unfair_lock_lock(param_5 + lVar2);
  if ((param_7 != 0) && ((*(byte *)(param_5 + (long)_DAT_112763640) & 1) == 0)) {
    uVar1 = param_5;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_7 == uVar1) {
      *(undefined1 *)(param_5 + (long)_DAT_11276363c) = 0;
      if (*(char *)(param_5 + (long)_DAT_112763644) == '\x01') {
        *(undefined1 *)(param_5 + 8) = 1;
        *(undefined1 *)(param_5 + (long)_DAT_112763648) = 1;
      }
      else {
        uVar1 = param_7;
        func_0x00010bf6f140();
        if (((uVar1 & 1) == 0) && (dVar4 = *(double *)(param_5 + 0x10), 0.0 < dVar4)) {
          *(undefined1 *)(param_5 + 8) = 0;
          func_0x00010c0bafa0(param_5);
          uVar1 = param_5;
          func_0x00010c2bd700(param_5);
          dVar6 = *(double *)(param_5 + 0x18);
          dVar5 = *(double *)(param_5 + 0x20);
          _os_unfair_lock_unlock(param_5 + lVar2);
          func_0x00010be5e380(dVar4,dVar3,param_2,param_3,param_4,param_1,param_5,param_6,param_7,
                              uVar1);
          if (((dVar4 != dVar6) || (dVar3 != dVar5)) && (func_0x00010c06ad80(param_5), param_8 != 0)
             ) {
            func_0x00010c0dd2e0(param_5);
          }
          goto LAB_1070600c8;
        }
      }
    }
  }
  _os_unfair_lock_unlock(param_5 + lVar2);
LAB_1070600c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 107060108; end: 10706010f; -[SCChatPluginComposerContext pluginIdentifier] */

undefined8 FUN_107060108(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107060110; end: 10706013f; -[SCChatPluginComposerContext setPluginIdentifier:] */

void FUN_107060110(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107060140; end: 107060147; -[SCChatPluginComposerContext composerComponentPath] */

undefined8 FUN_107060140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107060148; end: 107060177; -[SCChatPluginComposerContext setComposerComponentPath:] */

void FUN_107060148(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107060178; end: 10706017f; -[SCChatPluginComposerContext valdiContext] */

undefined8 FUN_107060178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107060180; end: 1070601af; -[SCChatPluginComposerContext setValdiContext:] */

void FUN_107060180(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1070601b0; end: 1070601b7; -[SCChatPluginComposerContext rendersOverMessage] */

undefined1 FUN_1070601b0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1070601b8; end: 1070601bf; -[SCChatPluginComposerContext setRendersOverMessage:] */

void FUN_1070601b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1070601c0; end: 1070601fb; -[SCChatPluginComposerContext .cxx_destruct] */

void FUN_1070601c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1070601fc; end: 107060273; -[SCChatComposerContextWrapper initWithPluginComposerContext:messageId:contentType:graphene:] */

long FUN_1070601fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_3);
  func_0x00010c02b600(param_1,param_2,param_4,param_5,param_6);
  if (param_1 != 0) {
    func_0x00010bea6660(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107060274; end: 1070603bf; -[SCChatComposerContextWrapper initWithPluginComposerContextObservable:messageId:contentType:graphene:] */

long FUN_107060274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c02b600();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    uVar2 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1070603c0; end: 10706042f;  */

void FUN_1070603c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bea6660(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107060430; end: 1070604e3; -[SCChatComposerContextWrapper initWithMessageId:contentType:graphene:] */

undefined1 *
FUN_107060430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f86b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = 1;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1070604e4; end: 107060527; -[SCChatComposerContextWrapper composerViewModel] */

void FUN_1070604e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107060528; end: 107060743; -[SCChatComposerContextWrapper isEqual:] */

uint FUN_107060528(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cb4c0;
  _objc_opt_class(PTR_PTR_1126cb4c0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar12 = 0;
    goto LAB_107060710;
  }
  uVar3 = param_1;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf6f140();
  uVar5 = param_3;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf6f140();
  if ((int)uVar4 == (int)uVar6) {
    uVar4 = param_1;
    func_0x00010bf4dac0();
    uVar6 = param_3;
    func_0x00010bf4dac0();
    if (uVar4 != uVar6) goto LAB_1070606ac;
    uVar4 = param_1;
    func_0x00010c0cb5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c0cb5a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c0720c0();
    if ((int)uVar7 == 0) {
      uVar12 = 0;
    }
    else {
      uVar7 = param_1;
      func_0x00010c13fda0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c13fda0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c071ae0();
      if ((int)uVar9 == 0) {
        uVar12 = 0;
      }
      else {
        uVar9 = param_1;
        func_0x00010bf449a0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_3;
        func_0x00010bf449a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar9;
        func_0x00010c071ae0(uVar9,uVar10,uVar10);
        if ((int)uVar11 == 0) {
          uVar12 = 0;
        }
        else {
          func_0x00010c2bd700(param_1);
          uVar11 = param_3;
          func_0x00010c2bd700(param_3);
          uVar12 = (uint)param_1 ^ (uint)uVar11 ^ 1;
        }
        _objc_release(uVar10);
        _objc_release(uVar9);
      }
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  else {
LAB_1070606ac:
    uVar12 = 0;
  }
  _objc_release(uVar5);
  _objc_release(uVar3);
LAB_107060710:
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar12;
}



/* Entry: 107060744; end: 107060797; -[SCChatComposerContextWrapper setMargins:wrapWithBubble:] */

void FUN_107060744(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,uint param_7)

{
  ushort uVar1;
  
  uVar1 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_5 + 0x98) == param_4),
                              CONCAT24(-(ushort)(*(double *)(param_5 + 0x90) == param_3),
                                       CONCAT22(-(ushort)(*(double *)(param_5 + 0x88) == param_2),
                                                -(ushort)(*(double *)(param_5 + 0x80) == param_1))))
                     ,2);
  if (((uVar1 & 1) == 0) || (*(byte *)(param_5 + 0x40) != param_7)) {
    *(double *)(param_5 + 0x80) = param_1;
    *(double *)(param_5 + 0x88) = param_2;
    *(double *)(param_5 + 0x90) = param_3;
    *(double *)(param_5 + 0x98) = param_4;
    *(char *)(param_5 + 0x40) = (char)param_7;
    *(undefined1 *)(param_5 + 8) = 1;
  }
  return;
}



/* Entry: 107060798; end: 107060907; -[SCChatComposerContextWrapper contentSizeForMaxWidth:] */

undefined1  [16] FUN_107060798(double param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  lVar3 = param_2;
  dVar6 = param_1;
  func_0x00010bfe1300();
  if ((int)lVar3 == 0) {
    if ((*(byte *)(param_2 + 8) & 1) == 0) {
      dVar7 = ABS(*(double *)(param_2 + 0x10) - param_1);
      dVar6 = ABS(param_1 + *(double *)(param_2 + 0x10)) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar6))) {
        bVar2 = dVar7 < dVar6;
      }
      if (bVar2) {
        param_1 = *(double *)(param_2 + 0x18);
        uVar8 = *(undefined8 *)(param_2 + 0x20);
        goto LAB_1070608e0;
      }
    }
    *(double *)(param_2 + 0x10) = param_1;
    *(undefined1 *)(param_2 + 8) = 0;
    _CACurrentMediaTime();
    uVar8 = *(undefined8 *)(param_2 + 0x80);
    uVar9 = *(undefined8 *)(param_2 + 0x88);
    uVar10 = *(undefined8 *)(param_2 + 0x90);
    uVar11 = *(undefined8 *)(param_2 + 0x98);
    uVar1 = *(undefined1 *)(param_2 + 0x40);
    lVar3 = param_2;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar3 == 0) || (lVar4 = lVar3, func_0x00010bf6f140(), (int)lVar4 != 0)) {
      *(undefined1 *)(param_2 + 8) = 1;
      param_1 = *(double *)(param_2 + 0x18);
      uVar8 = *(undefined8 *)(param_2 + 0x20);
    }
    else {
      lVar4 = param_2;
      func_0x00010c101c60(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0720c0();
      _objc_release(lVar4);
      func_0x00010c2a1580(lVar3,param_3,lVar5);
      func_0x00010c0c3f60(param_1,uVar8,uVar9,uVar10,uVar11,dVar6,param_2,param_3,lVar3,uVar1);
      *(double *)(param_2 + 0x18) = param_1;
      *(undefined8 *)(param_2 + 0x20) = uVar8;
    }
    _objc_release(lVar3);
  }
  else {
    param_1 = *(double *)PTR__CGSizeZero_110347620;
    uVar8 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
LAB_1070608e0:
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = param_1;
  return auVar12;
}



/* Entry: 107060908; end: 10706097b; -[SCChatComposerContextWrapper reuseIdentifier] */

void FUN_107060908(undefined *param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  
  puVar2 = param_1;
  func_0x00010c101c60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (ulong *)(param_1 + 0x50);
  if (*puVar1 < 5) {
    param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,(&PTR_PTR_110989978)[*puVar1]);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10706097c; end: 107060983; -[SCChatComposerContextWrapper cellWillDisplayAction] */

undefined8 FUN_10706097c(void)

{
  return 0;
}



/* Entry: 107060984; end: 10706098b; -[SCChatComposerContextWrapper hidden] */

undefined1 FUN_107060984(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 10706098c; end: 10706098f; -[SCChatComposerContextWrapper onContextChange:] */

void FUN_10706098c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d1d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setOnContextChangeCallback__112652170);
  return;
}



/* Entry: 107060990; end: 107060993; -[SCChatComposerContextWrapper onLayoutDirty:] */

void FUN_107060990(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d2870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setOnLayoutDirtyCallback__112652440);
  return;
}



/* Entry: 107060994; end: 10706099b; -[SCChatComposerContextWrapper contentSize] */

undefined1  [16] FUN_107060994(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 10706099c; end: 1070609ef; -[SCChatComposerContextWrapper destroy] */

void FUN_10706099c(long param_1,undefined8 param_2)

{
  func_0x00010c1d2860(param_1,param_2,0);
  func_0x00010c1d1d20(param_1,param_2,0);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6ef60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070609f0; end: 1070609f3; -[SCChatComposerContextWrapper setChatViewVisible:] */

void FUN_1070609f0(void)

{
  return;
}



/* Entry: 1070609f4; end: 107060a2b; -[SCChatComposerContextWrapper applyValdiContext:] */

void FUN_1070609f4(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c21fea0();
  *(undefined1 *)(param_1 + 8) = 1;
  *(bool *)(param_1 + 0x30) = param_3 == 0;
  return;
}



/* Entry: 107060a2c; end: 107060a4f; -[SCChatComposerContextWrapper handleRenderCompletedAfterLayoutDirtyForValdiContext:] */

void FUN_107060a2c(undefined8 param_1)

{
  func_0x00010c06ad80();
                    /* WARNING: Could not recover jumptable at 0x00010c0bbad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_markSizeDirtyAndNotify_11260c8c8);
  return;
}



/* Entry: 107060a50; end: 107060a5b; -[SCChatComposerContextWrapper markSizeDirtyAndNotify] */

void FUN_107060a50(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c0dd2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_notifyLayoutDirty_112614ed0);
  return;
}



/* Entry: 107060a5c; end: 107060a97; -[SCChatComposerContextWrapper notifyLayoutDirty] */

void FUN_107060a5c(long param_1)

{
  func_0x00010c0e4c20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x10))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107060a98; end: 107060ad3; -[SCChatComposerContextWrapper invokeOnContextChangeCallback] */

void FUN_107060a98(long param_1)

{
  func_0x00010c0e3200();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x10))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107060ad4; end: 107060bbb; -[SCChatComposerContextWrapper measureWithValdiContext:maxWidth:margins:wrapWithBubble:startTime:] */

undefined1  [16]
FUN_107060ad4(double param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,int param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  long lVar4;
  double dVar5;
  long lVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  dVar7 = param_3 + param_5 + 16.0;
  dVar1 = param_2 + param_4 + 16.0;
  if (param_10 == 0) {
    dVar7 = param_3 + param_5;
    dVar1 = param_2 + param_4;
  }
  dVar2 = 0.0;
  if (0.0 <= param_1 - dVar7) {
    dVar2 = param_1 - dVar7;
  }
  _objc_retain(param_9);
  func_0x00010c21d780(param_9,param_8,0);
  dVar5 = 1.79769313486232e+308;
  func_0x00010c0c3ec0(param_9,param_8,0);
  dVar3 = dVar2;
  _objc_release(param_9);
  _CACurrentMediaTime();
  func_0x00010be07f00(param_7,param_8,(long)((dVar3 - param_6) * 1000.0));
  lVar4 = (long)(dVar7 + dVar2);
  if (dVar2 <= 0.0) {
    lVar4 = 0;
  }
  lVar6 = (long)(dVar1 + dVar5);
  if (dVar5 <= 0.0) {
    lVar6 = 0;
  }
  auVar8._8_8_ = lVar6;
  auVar8._0_8_ = lVar4;
  return auVar8;
}



/* Entry: 107060bbc; end: 107060d6b; -[SCChatComposerContextWrapper _setPluginComposerContext:] */

void FUN_107060bbc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c130920();
  *(char *)(param_1 + 0x41) = (char)lVar1;
  lVar1 = param_3;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != lVar1) {
    lVar2 = param_3;
    func_0x00010bf449a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c180000(param_1);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c101c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ddf60(param_1);
    _objc_release(lVar2);
    func_0x00010bf08b40(param_1);
    func_0x00010c06ad80(param_1);
    func_0x00010c0bbac0(param_1);
    if (lVar1 != 0) {
      _objc_initWeak(auStack_38,param_1);
      _objc_initWeak(auStack_40,lVar1);
      _objc_copyWeak(auStack_50,auStack_38);
      _objc_copyWeak(auStack_48,auStack_40);
      func_0x00010c0e4c00(lVar1);
      _objc_destroyWeak(auStack_48);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107060d6c; end: 107060e73;  */

void FUN_107060d6c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((uVar1 != 0) && (uVar2 != 0)) && (uVar3 = uVar2, func_0x00010bf6f140(), (uVar3 & 1) == 0)) {
    uVar3 = uVar1;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 == uVar2) {
      _objc_copyWeak(auStack_40,param_1 + 0x20);
      _objc_copyWeak(auStack_38,param_1 + 0x28);
      func_0x00010c2a15a0(uVar2);
      _objc_destroyWeak(auStack_38);
      _objc_destroyWeak(auStack_40);
    }
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107060e74; end: 107060ebf;  */

void FUN_107060e74(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd2420(lVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107060ec0; end: 107060fdb; -[SCChatComposerContextWrapper _emitMetricForMeasureTime:] */

void FUN_107060ec0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)(param_1 + 0x50);
  if (2 < lVar3 - 2U) {
    puVar4 = PTR_PTR_1126b2950;
    if (lVar3 == 1) {
      func_0x00010bf44ee0(PTR_PTR_1126b2950);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar3 == 0) {
      func_0x00010bf44e80(PTR_PTR_1126b2950);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = (undefined *)0x0;
    }
    lVar3 = param_1;
    func_0x00010c101c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbf1b8,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107060fdc; end: 107060fe3; -[SCChatComposerContextWrapper messageId] */

undefined8 FUN_107060fdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107060fe4; end: 107060fef; -[SCChatComposerContextWrapper margins] */

undefined8 FUN_107060fe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107060ff0; end: 107060ff7; -[SCChatComposerContextWrapper wrapWithBubble] */

undefined1 FUN_107060ff0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 107060ff8; end: 107060fff; -[SCChatComposerContextWrapper contentType] */

undefined8 FUN_107060ff8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107061000; end: 107061007; -[SCChatComposerContextWrapper setContentType:] */

void FUN_107061000(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 107061008; end: 10706100f; -[SCChatComposerContextWrapper rendersOverMessage] */

undefined1 FUN_107061008(long param_1)

{
  return *(undefined1 *)(param_1 + 0x41);
}



/* Entry: 107061010; end: 107061017; -[SCChatComposerContextWrapper setRendersOverMessage:] */

void FUN_107061010(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x41) = param_3;
  return;
}



/* Entry: 107061018; end: 107061023; -[SCChatComposerContextWrapper pluginIdentifier] */

void FUN_107061018(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x58,1);
  return;
}



/* Entry: 107061024; end: 10706102b; -[SCChatComposerContextWrapper setPluginIdentifier:] */

void FUN_107061024(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10706102c; end: 107061037; -[SCChatComposerContextWrapper composerComponentPath] */

void FUN_10706102c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 107061038; end: 10706103f; -[SCChatComposerContextWrapper setComposerComponentPath:] */

void FUN_107061038(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 107061040; end: 10706104b; -[SCChatComposerContextWrapper valdiContext] */

void FUN_107061040(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x68,1);
  return;
}



/* Entry: 10706104c; end: 107061053; -[SCChatComposerContextWrapper setValdiContext:] */

void FUN_10706104c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 107061054; end: 10706105f; -[SCChatComposerContextWrapper onLayoutDirtyCallback] */

void FUN_107061054(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x70,1);
  return;
}



/* Entry: 107061060; end: 107061067; -[SCChatComposerContextWrapper setOnLayoutDirtyCallback:] */

void FUN_107061060(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 107061068; end: 107061073; -[SCChatComposerContextWrapper onContextChangeCallback] */

void FUN_107061068(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x78,1);
  return;
}



/* Entry: 107061074; end: 10706107b; -[SCChatComposerContextWrapper setOnContextChangeCallback:] */

void FUN_107061074(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 10706107c; end: 1070610f3; -[SCChatComposerContextWrapper .cxx_destruct] */

void FUN_10706107c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 1070610f4; end: 107061177; -[SCChatStackedComposerContextWrapper initWithContextWrappers:axis:] */

undefined1 *
FUN_1070610f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f86b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107061178; end: 10706150f; -[SCChatStackedComposerContextWrapper contentSizeForMaxWidth:] */

undefined **
FUN_107061178(undefined *param_1,double param_2,double param_3,double param_4,undefined **param_5,
             undefined8 param_6)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  double dVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  double dVar14;
  double dVar15;
  undefined *puVar16;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
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
  undefined1 auStack_218 [128];
  undefined1 auStack_198 [128];
  undefined1 auStack_118 [128];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_5;
  puVar16 = param_1;
  func_0x00010bfe1300();
  if ((int)ppuVar4 != 0) {
    puVar16 = *(undefined **)PTR__CGSizeZero_110347620;
    param_5[2] = *(undefined **)(PTR__CGSizeZero_110347620 + 8);
    param_5[1] = puVar16;
    puVar11 = param_5[2];
    goto LAB_1070614c4;
  }
  func_0x00010c0bafa0(param_5);
  func_0x00010c0bafa0(param_5);
  func_0x00010c0bafa0(param_5);
  func_0x00010c0bafa0(param_5);
  puVar12 = (undefined *)((double)puVar16 + param_3 + 16.0);
  dVar15 = param_2 + param_4 + 16.0;
  puVar11 = puVar12;
  if (*(char *)(param_5 + 3) == '\0') {
    dVar15 = param_2 + param_4;
    puVar11 = (undefined *)((double)puVar16 + param_3);
  }
  puVar13 = (undefined *)((double)param_1 - dVar15);
  if (param_5[5] == (undefined *)0x1) {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    puVar3 = param_5[4];
    _objc_retain(puVar3);
    puVar16 = puVar3;
    func_0x00010bf52a60(puVar3,param_6,&uStack_260,auStack_118,0x10);
    if (puVar16 == (undefined *)0x0) {
      _objc_release(puVar3);
LAB_1070613a8:
      dVar14 = 0.0;
    }
    else {
      uVar5 = 0;
      lVar7 = *plStack_250;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_250 != lVar7) {
            _objc_enumerationMutation(puVar3);
          }
          uVar1 = (uint)*(undefined8 *)(lStack_258 + (long)puVar8 * 8);
          func_0x00010bfe1300();
          uVar5 = uVar5 + (uVar1 ^ 1);
          puVar8 = puVar8 + 1;
        } while (puVar16 != puVar8);
        puVar16 = puVar3;
        func_0x00010bf52a60(puVar3,param_6,&uStack_260,auStack_118,0x10);
      } while (puVar16 != (undefined *)0x0);
      _objc_release(puVar3);
      if (uVar5 == 0) goto LAB_1070613a8;
      dVar14 = (double)puVar13 / (double)uVar5;
    }
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    lStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    plStack_290 = (long *)0x0;
    ppuVar4 = (undefined **)param_5[4];
    _objc_retain(ppuVar4);
    ppuVar2 = ppuVar4;
    func_0x00010bf52a60(ppuVar4,param_6,&uStack_2a0,auStack_198,0x10);
    if (ppuVar2 == (undefined **)0x0) {
      puVar3 = (undefined *)0x0;
      puVar16 = (undefined *)0x0;
    }
    else {
      lVar7 = *plStack_290;
      puVar3 = (undefined *)0x0;
      puVar16 = (undefined *)0x0;
      do {
        ppuVar9 = (undefined **)0x0;
        puVar8 = puVar3;
        do {
          if (*plStack_290 != lVar7) {
            _objc_enumerationMutation(ppuVar4);
          }
          uVar6 = *(ulong *)(lStack_298 + (long)ppuVar9 * 8);
          uVar5 = uVar6;
          func_0x00010bfe1300();
          puVar3 = puVar8;
          if ((uVar5 & 1) == 0) {
            puVar3 = (undefined *)((double)puVar16 + 0.0);
            if ((double)puVar16 <= 0.0) {
              puVar3 = puVar16;
            }
            dVar10 = dVar14;
            func_0x00010bf4d660(uVar6);
            puVar16 = (undefined *)((double)puVar3 + dVar10);
            puVar3 = puVar12;
            if ((double)puVar12 <= (double)puVar8) {
              puVar3 = puVar8;
            }
          }
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
          puVar8 = puVar3;
        } while (ppuVar2 != ppuVar9);
        ppuVar2 = ppuVar4;
        func_0x00010bf52a60(ppuVar4,param_6,&uStack_2a0,auStack_198,0x10);
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar4);
    if ((double)puVar13 <= (double)puVar16) {
      puVar16 = puVar13;
    }
    puVar11 = (undefined *)((double)puVar11 + (double)puVar3);
    if ((double)puVar3 <= 0.0) {
      puVar11 = puVar3;
    }
    param_1 = (undefined *)(dVar15 + (double)puVar16);
    if ((double)puVar16 <= 0.0) {
      param_1 = puVar16;
    }
  }
  else {
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    lStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    plStack_2d0 = (long *)0x0;
    ppuVar4 = (undefined **)param_5[4];
    _objc_retain(ppuVar4);
    ppuVar2 = ppuVar4;
    func_0x00010bf52a60(ppuVar4,param_6,&uStack_2e0,auStack_218,0x10);
    if (ppuVar2 == (undefined **)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      lVar7 = *plStack_2d0;
      puVar3 = (undefined *)0x0;
      do {
        ppuVar9 = (undefined **)0x0;
        do {
          if (*plStack_2d0 != lVar7) {
            _objc_enumerationMutation(ppuVar4);
          }
          uVar6 = *(ulong *)(lStack_2d8 + (long)ppuVar9 * 8);
          uVar5 = uVar6;
          func_0x00010bfe1300();
          if ((uVar5 & 1) == 0) {
            puVar16 = (undefined *)((double)puVar3 + 4.0);
            if ((double)puVar3 <= 0.0) {
              puVar16 = puVar3;
            }
            func_0x00010bf4d660(puVar13,uVar6);
            puVar3 = (undefined *)((double)puVar16 + (double)puVar12);
          }
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
        } while (ppuVar2 != ppuVar9);
        ppuVar2 = ppuVar4;
        func_0x00010bf52a60(ppuVar4,param_6,&uStack_2e0,auStack_218,0x10);
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar4);
    puVar16 = (undefined *)((double)puVar11 + (double)puVar3);
    puVar11 = puVar16;
    if ((double)puVar3 <= 0.0) {
      puVar11 = puVar3;
    }
  }
  param_5[1] = param_1;
  param_5[2] = puVar11;
LAB_1070614c4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail(puVar16,puVar11);
    return &PTR____CFConstantStringClassReference_110e99718;
  }
  return ppuVar4;
}



/* Entry: 107061510; end: 10706151b; -[SCChatStackedComposerContextWrapper reuseIdentifier] */

undefined ** FUN_107061510(void)

{
  return &PTR____CFConstantStringClassReference_110e99718;
}



/* Entry: 10706151c; end: 10706158b; -[SCChatStackedComposerContextWrapper pluginIdentifier] */

void FUN_10706151c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar2 = *(undefined ***)(param_1 + 0x20);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c101c60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10706158c; end: 107061593; -[SCChatStackedComposerContextWrapper cellWillDisplayAction] */

undefined8 FUN_10706158c(void)

{
  return 0;
}



/* Entry: 107061594; end: 107061697; -[SCChatStackedComposerContextWrapper hidden] */

undefined1 * FUN_107061594(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
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
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        iVar1 = (int)*(undefined8 *)(lStack_108 + lVar7 * 8);
        func_0x00010bfe1300();
        if (iVar1 == 0) {
          puVar5 = (undefined1 *)0x0;
          goto LAB_107061658;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar4;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  puVar5 = (undefined1 *)0x1;
LAB_107061658:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar4 = *(long *)(lVar4 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_220,auStack_1d8,0x10);
  if (lVar2 != 0) {
    lVar6 = *plStack_210;
    do {
      lVar7 = 0;
      do {
        if (*plStack_210 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c0e4c00(*(undefined8 *)(lStack_218 + lVar7 * 8),param_2,puVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_220,auStack_1d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return (undefined1 *)puVar3;
  }
  ___stack_chk_fail();
  return (undefined1 *)puVar3;
}



/* Entry: 107061698; end: 1070617a3; -[SCChatStackedComposerContextWrapper onLayoutDirty:] */

undefined1  [16]
FUN_107061698(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  uVar5 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_3 + 0x20);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_4,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c0e4c00(*(undefined8 *)(lStack_108 + lVar4 * 8),param_4,param_5);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_4,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = uVar5;
    return auVar6;
  }
  ___stack_chk_fail();
  return *(undefined1 (*) [16])(param_5 + 8);
}



/* Entry: 1070617a4; end: 1070617ab; -[SCChatStackedComposerContextWrapper contentSize] */

undefined1  [16] FUN_1070617a4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 8);
}


