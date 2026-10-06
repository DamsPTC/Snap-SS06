/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108582f10; end: 10858301f; -[SCNGSMEInteractiveImagePlayer _simulateAVPlayerReadied] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108582f10(long param_1)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (((*(byte *)(param_1 + _DAT_112776798) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_112776794) != '\x01')) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_108583020;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000107c312cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
    return;
  }
  lVar1 = param_1;
  func_0x00010c0ff700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac720();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be87910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__recordPlaybackLoggerCall__11257f7e0,
             &PTR____CFConstantStringClassReference_110ee3598);
  return;
}



/* Entry: 108583020; end: 108583103;  */

void FUN_108583020(long param_1,undefined8 param_2)

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



/* Entry: 108583104; end: 1085831ef; -[SCNGSMEInteractiveImagePlayer _prepareToPlayOperation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108583104(long param_1)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (((*(byte *)(param_1 + _DAT_112776794) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_112776798) != '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010be78770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prepareImageViewer_11257bb78);
    return;
  }
  func_0x00010be78720(param_1);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1085831f0;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  lStack_38 = param_1;
  func_0x000107c312cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1085831f0; end: 10858324b;  */

void FUN_1085831f0(long param_1)

{
  long lVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_30 = *(undefined8 *)(param_1 + 0x20);
    puStack_28 = PTR_PTR_1126fcd80;
    _objc_msgSendSuper2(&uStack_30,PTR_s__prepareVideoPlayback_11257bfc8);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10858324c; end: 108583323; -[SCNGSMEInteractiveImagePlayer _prepareVideoPlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858324c(long param_1)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (((*(byte *)(param_1 + _DAT_112776798) & 1) != 0) ||
     (*(char *)(param_1 + _DAT_112776794) == '\x01')) {
    func_0x00010be78720(param_1);
    _objc_initWeak(auStack_28,param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108583324;
    puStack_40 = &UNK_110841fb0;
    _objc_copyWeak(auStack_30,auStack_28);
    lStack_38 = param_1;
    func_0x000107c312cc("APPSTORE",&puStack_58);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 108583324; end: 10858337f;  */

void FUN_108583324(long param_1)

{
  long lVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_30 = *(undefined8 *)(param_1 + 0x20);
    puStack_28 = PTR_PTR_1126fcd80;
    _objc_msgSendSuper2(&uStack_30,PTR_s__prepareVideoPlayback_11257bfc8);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108583380; end: 108583673; -[SCNGSMEInteractiveImagePlayer _prepareImagePlayer] */

void FUN_108583380(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126da178;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c100cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c130060(param_1);
  func_0x00010c02d3c0();
  _objc_release(lVar2);
  func_0x0001091286b8(*(undefined8 *)(param_1 + 200));
  func_0x00010c21d880(puVar1);
  func_0x0001091286cc(*(undefined8 *)(param_1 + 200));
  func_0x00010c166be0(puVar1);
  if (puVar1 == (undefined *)0x0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    puStack_98 = (undefined *)0x0;
    puStack_a0 = (undefined *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfbfbe0(&puStack_a0,puVar1);
    if (lStack_58 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0ff700(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ac680();
      _objc_release(lVar2);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be87900(param_1);
      _objc_release(puVar5);
      goto LAB_1085835f4;
    }
  }
  puVar4 = puStack_98;
  puVar3 = puStack_a0;
  _objc_retain(puStack_a0);
  _objc_retain(puVar4);
  puVar5 = puVar1;
  func_0x00010bdc1c80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c067ec0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_initWeak(auStack_a8,param_1);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_108583674;
  puStack_d0 = &UNK_1108607b8;
  _objc_copyWeak(auStack_b8,auStack_a8);
  _objc_retain(puVar3);
  puStack_c8 = puVar3;
  _objc_retain(puVar4);
  uStack_b0 = SUB84(puVar8,0);
  puStack_c0 = puVar4;
  func_0x000107c312cc("APPSTORE",&puStack_e8);
  _objc_release(puStack_c0);
  _objc_release(puStack_c8);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_a8);
LAB_1085835f4:
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_a0);
  _objc_release(puStack_98);
  _objc_release(puVar1);
  return;
}



/* Entry: 108583674; end: 1085838c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108583674(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar1 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) goto LAB_1085838a4;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  lVar8 = (long)_DAT_1127767c0;
  _objc_retain(uVar6);
  uVar2 = *(undefined8 *)(puVar1 + lVar8);
  *(undefined8 *)(puVar1 + lVar8) = uVar6;
  _objc_release(uVar2);
  func_0x00010c130060(puVar1);
  func_0x00010c1ea8e0(*(undefined8 *)(puVar1 + lVar8));
  puVar3 = puVar1 + _DAT_1127767bc;
  _objc_loadWeakRetained(puVar3);
  func_0x00010c17ed40(*(undefined8 *)(puVar1 + lVar8));
  _objc_release(puVar3);
  *(undefined4 *)(puVar1 + _DAT_1127767d0) = *(undefined4 *)(param_1 + 0x38);
  puVar3 = puVar1;
  if (puVar1[_DAT_112776798] == '\x01') {
    func_0x00010c100cc0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = *(undefined **)(puVar3 + 0x10);
    }
    _objc_retain(puVar7);
    func_0x00010bee34a0(puVar1);
LAB_108583894:
    _objc_release(puVar7);
  }
  else {
    func_0x00010c100fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126bf5e0;
    _objc_opt_class(PTR_PTR_1126bf5e0);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar7);
    puVar7 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    _objc_retain(puVar7);
    _objc_release(puVar3);
    if (puVar7 != (undefined *)0x0) {
      puVar7 = puVar1;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010c0ff700(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ac680();
        _objc_release(puVar5);
        func_0x00010be87900(puVar1);
        _objc_release(puVar4);
      }
      else {
        func_0x00010c1aa640(puVar3);
      }
      goto LAB_108583894;
    }
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c0ff700(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac680();
    _objc_release(puVar7);
    func_0x00010be87900(puVar1);
  }
  _objc_release(puVar3);
LAB_1085838a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085838c4; end: 10858390f; -[SCNGSMEInteractiveImagePlayer _updateVideoProcessorWithRenderEffects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085838c4(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127767c0;
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x00010c1ea7a0();
                    /* WARNING: Could not recover jumptable at 0x00010c1aef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar1),PTR_s_setIppRenderer__1126495f0,
               *(undefined8 *)(param_1 + _DAT_1127767c4));
    return;
  }
  return;
}



/* Entry: 108583910; end: 108583abf; -[SCNGSMEInteractiveImagePlayer _updateSegmentTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108583910(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar7 = param_1;
  func_0x00010c100cc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar7 + 8);
  }
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010911c750(lVar6,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar7);
  if (lVar3 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar3 + 0x20);
  }
  _objc_retain(lVar7);
  lVar6 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x48);
  }
  _objc_retain(lVar7);
  _objc_release(lVar7);
  puVar2 = PTR__CGAffineTransformIdentity_110347008;
  if (lVar7 == 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_1127767b0);
    uVar8 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    *puVar1 = uVar8;
    puVar1[3] = uVar10;
    puVar1[2] = uVar9;
    uVar8 = *(undefined8 *)(puVar2 + 0x20);
    puVar1[5] = *(undefined8 *)(puVar2 + 0x28);
    puVar1[4] = uVar8;
  }
  else {
    func_0x00010c130060(param_1);
    lVar7 = lVar6;
    func_0x000109120dc4(lVar6,1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = (undefined8 *)(param_1 + _DAT_1127767b0);
    lVar4 = lVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      uStack_68 = *(undefined8 *)(lVar5 + 0x10);
      uStack_70 = *(undefined8 *)(lVar5 + 8);
      uStack_58 = *(undefined8 *)(lVar5 + 0x20);
      uStack_60 = *(undefined8 *)(lVar5 + 0x18);
      uStack_48 = *(undefined8 *)(lVar5 + 0x30);
      uStack_50 = *(undefined8 *)(lVar5 + 0x28);
    }
    puVar1[1] = uStack_68;
    *puVar1 = uStack_70;
    puVar1[3] = uStack_58;
    puVar1[2] = uStack_60;
    puVar1[5] = uStack_48;
    puVar1[4] = uStack_50;
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar7);
  }
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 108583ac0; end: 108583de7; -[SCNGSMEInteractiveImagePlayer getRenderedImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108583ac0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(char *)(param_1 + _DAT_112776798) == '\x01') &&
     (lVar9 = (long)_DAT_1127767c0, *(long *)(param_1 + lVar9) != 0)) {
    lVar1 = *(long *)(param_1 + _DAT_1127767b4);
    if (lVar1 == 0) {
      lVar2 = param_1;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010bf54220(*(undefined8 *)PTR__CGSizeZero_110347620,
                          *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
      _objc_release(lVar2);
    }
    else {
      _CVPixelBufferRetain();
    }
    if (lVar1 != 0) {
      uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      uVar6 = uVar8;
      _CFArrayCreateMutable(uVar8,1,PTR__kCFTypeArrayCallBacks_11034ac10);
      _CFArrayAppendValue();
      func_0x00010c130060(param_1);
      func_0x00010bdf1580(param_1);
      param_2 = *(long *)(param_1 + _DAT_1127767b8);
      if (param_2 != 0) {
        lStack_80 = 0;
        _CVPixelBufferPoolCreatePixelBuffer(uVar8,param_2,&lStack_80);
        if ((int)uVar8 == 0 && lStack_80 != 0) {
          puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          func_0x00010c297160();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_70 = puVar7;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          puVar7 = PTR_PTR_1126ae560;
          _objc_alloc_init();
          uVar8 = *(undefined8 *)(param_1 + lVar9);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_78 = puVar4;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar7);
          func_0x00010bf9d080(uVar8);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _CFRelease(uVar6);
          _CVPixelBufferRelease(lVar1);
          puVar4 = puVar7;
          func_0x00010bfbc3e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar7);
          _objc_release();
          goto LAB_108583c0c;
        }
      }
      _CFRelease(uVar6);
      _CVPixelBufferRelease(lVar1);
    }
  }
  puVar3 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
LAB_108583c0c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 2) {
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe7b60(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar3 + 0x20);
    func_0x00010c0ff700(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac640();
    _objc_release(uVar6);
    func_0x00010be87900(*(undefined8 *)(puVar3 + 0x20));
    _objc_release(puVar7);
    puVar7 = (undefined *)0x0;
  }
  _CVPixelBufferRelease(*(undefined8 *)(puVar3 + 0x30));
  func_0x00010bf43d60(*(undefined8 *)(puVar3 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 108583de8; end: 108583eb7;  */

void FUN_108583de8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_2 == 2) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe7b60(PTR__OBJC_CLASS___UIImage_1126aea68,2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110ee34b8,
                        &PTR____CFConstantStringClassReference_110ee35d8,7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ff700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac640();
    _objc_release(uVar1);
    func_0x00010be87900(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
    puVar2 = (undefined *)0x0;
  }
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x30));
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108583eb8; end: 108583f2b; -[SCNGSMEInteractiveImagePlayer getSampleBufferAtTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108583eb8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(char *)(param_1 + _DAT_112776798) == '\x01') {
    lVar2 = param_1;
    func_0x00010bfc8ca0();
    lVar3 = 0;
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(param_1 + _DAT_1127767a8);
      uStack_38 = puVar1[1];
      uStack_40 = *puVar1;
      uStack_30 = puVar1[2];
      func_0x00010bdf2bc0(param_1,param_2,lVar2,&uStack_40);
      lVar3 = param_1;
    }
    return lVar3;
  }
  return 0;
}



/* Entry: 108583f2c; end: 1085840b7; -[SCNGSMEInteractiveImagePlayer getPixelBufferAtTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108583f2c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 auStack_60 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  byte bStack_3c;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + _DAT_112776798) == '\x01') {
    puVar1 = (undefined8 *)(param_1 + _DAT_1127767a8);
    uStack_78 = puVar1[1];
    uStack_80 = *puVar1;
    uStack_70 = puVar1[2];
    func_0x00010c084bc0(&uStack_48);
    auStack_60[0] = uStack_48;
    uStack_50 = uStack_38;
    puVar1 = auStack_60;
    _CMTimeCompare(puVar1,&uStack_80);
    auStack_60[0] = uStack_48;
    uStack_50 = uStack_38;
    uStack_78 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_70 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar2 = auStack_60;
    _CMTimeCompare(puVar2,&uStack_80);
    if (((bStack_3c & 1) == 0) || (((int)puVar2 != 0 && ((int)puVar1 == 0)))) {
      lVar3 = 0;
    }
    else {
      lVar6 = (long)_DAT_1127767b4;
      lVar3 = *(long *)(param_1 + lVar6);
      if (lVar3 == 0) {
        lVar3 = param_1;
        func_0x00010bfe6ac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c130060(param_1);
        lVar4 = lVar3;
        func_0x00010bf54220();
        *(long *)(param_1 + lVar6) = lVar4;
        _objc_release(lVar3);
        lVar3 = *(long *)(param_1 + lVar6);
        if (lVar3 == 0) {
          puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_1;
          func_0x00010c0ff700(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ac640();
          _objc_release(lVar3);
          func_0x00010be87900(param_1);
          _objc_release(puVar5);
          lVar3 = *(long *)(param_1 + lVar6);
        }
      }
    }
    return lVar3;
  }
  return 0;
}



/* Entry: 1085840b8; end: 1085843b7; -[SCNGSMEInteractiveImagePlayer itemTimeForHostTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *****
FUN_1085840b8(double *param_1,double param_2,undefined8 *****param_3,undefined8 param_4,
             undefined8 *****param_5)

{
  double *pdVar1;
  double *pdVar2;
  undefined *puVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  double dVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  double dVar13;
  undefined8 ****ppppuVar14;
  undefined8 ***pppuStack_160;
  undefined8 ***pppuStack_158;
  undefined8 ***pppuStack_150;
  undefined8 ****ppppuStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 ***pppuStack_120;
  double dStack_118;
  double dStack_110;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined8 ***pppuStack_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  double dStack_d8;
  undefined8 ***pppuStack_d0;
  double dStack_c8;
  double dStack_c0;
  undefined8 ***pppuStack_b0;
  double dStack_a8;
  double dStack_a0;
  undefined8 ***pppuStack_90;
  undefined4 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar4 = param_3;
  if (*(float *)(param_3 + 0x14) == 0.0) {
    pdVar1 = (double *)((long)param_3 + (long)_DAT_1127767ac);
    dVar6 = *pdVar1;
    param_1[1] = pdVar1[1];
    *param_1 = dVar6;
    dVar6 = pdVar1[2];
  }
  else {
    lVar10 = (long)_DAT_1127767c8;
    if (*(double *)((long)param_3 + lVar10) == 0.0) {
      *(double *)((long)param_3 + lVar10) = param_2;
      puVar3 = PTR__kCMTimeZero_110348670;
      pdVar1 = (double *)((long)param_3 + (long)_DAT_1127767a8);
      if (((*(byte *)((long)param_3 + (long)_DAT_112776794) & 1) == 0) &&
         ((*(byte *)((long)param_3 + (long)_DAT_112776798) & 1) == 0)) {
        pdVar2 = (double *)((long)param_3 + (long)_DAT_1127767ac);
        dVar6 = pdVar2[2];
        dVar13 = *pdVar2;
        pdVar1[1] = pdVar2[1];
        *pdVar1 = dVar13;
        pdVar1[2] = dVar6;
      }
      else {
        dVar6 = *(double *)PTR__kCMTimeZero_110348670;
        pdVar1[1] = *(double *)(PTR__kCMTimeZero_110348670 + 8);
        *pdVar1 = dVar6;
        pdVar1[2] = *(double *)(puVar3 + 0x10);
      }
      dStack_a8 = pdVar1[1];
      ppppuVar14 = (undefined8 ****)*pdVar1;
      dStack_a0 = pdVar1[2];
      pppppuVar4 = (undefined8 *****)&pppuStack_b0;
      pppuStack_b0 = ppppuVar14;
      _CMTimeGetSeconds();
      *(long *)((long)param_3 + (long)_DAT_1127767cc) = (long)((double)ppppuVar14 * 30.0 + 1.0);
      dVar6 = *pdVar1;
      param_1[1] = pdVar1[1];
      *param_1 = dVar6;
      dVar6 = pdVar1[2];
    }
    else {
      pdVar1 = (double *)((long)param_3 + (long)_DAT_1127767a8);
      pppuStack_90 = (undefined8 ***)*pdVar1;
      uStack_88 = *(undefined4 *)(pdVar1 + 1);
      uVar12 = *(uint *)((long)pdVar1 + 0xc);
      dVar6 = pdVar1[2];
      lVar9 = (long)_DAT_1127767cc;
      lVar11 = *(long *)((long)param_3 + lVar9);
      _CMTimeMake(&pppuStack_b0,1,0x1e);
      dStack_c8 = dStack_a8;
      pppuStack_d0 = pppuStack_b0;
      dStack_c0 = dStack_a0;
      ppppuVar14 = (undefined8 ****)pppuStack_b0;
      _CMTimeGetSeconds(&pppuStack_d0);
      puVar3 = PTR_PTR_1126bf638;
      param_2 = param_2 - *(double *)((long)param_3 + lVar10);
      func_0x00010c100cc0();
      _objc_retainAutoreleasedReturnValue();
      param_5 = pppppuVar4;
      func_0x00010bf8b200(&pppuStack_d0,puVar3);
      _objc_release();
      if ((double)ppppuVar14 <= param_2) {
        lVar7 = (long)(param_2 / (double)ppppuVar14);
        lVar8 = lVar7;
        if (0 < lVar7) {
          do {
            pppuStack_100 = pppuStack_90;
            uStack_f8 = (double)CONCAT44(uVar12,uStack_88);
            dStack_118 = dStack_a8;
            pppuStack_120 = pppuStack_b0;
            dStack_110 = dStack_a0;
            pppppuVar4 = (undefined8 *****)&pppuStack_100;
            dStack_f0 = dVar6;
            _CMTimeAdd(&pppuStack_e8,pppppuVar4,&pppuStack_120);
            pppuStack_90 = pppuStack_e8;
            uStack_88 = uStack_e0;
            lVar8 = lVar8 + -1;
            dVar6 = dStack_d8;
            uVar12 = uStack_dc;
          } while (lVar8 != 0);
        }
        lVar11 = lVar11 + lVar7;
        if (((ulong)dStack_c8 & 0x100000000) != 0) {
          uStack_e0 = uStack_88;
          uStack_f8 = dStack_c8;
          pppuStack_100 = pppuStack_d0;
          dStack_f0 = dStack_c0;
          pppuStack_e8 = pppuStack_90;
          pppppuVar4 = (undefined8 *****)&pppuStack_e8;
          uStack_dc = uVar12;
          dStack_d8 = dVar6;
          _CMTimeCompare(pppppuVar4,&pppuStack_100);
          if (-1 < (int)pppppuVar4) {
            pppuStack_90 = *(undefined8 ****)PTR__kCMTimeZero_110348670;
            uStack_88 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
            uVar12 = *(uint *)(PTR__kCMTimeZero_110348670 + 0xc);
            dVar6 = *(double *)(PTR__kCMTimeZero_110348670 + 0x10);
            lVar11 = 1;
          }
        }
        *(double *)((long)param_3 + lVar10) =
             *(double *)((long)param_3 + lVar10) + (double)ppppuVar14 * (double)lVar7;
      }
      if ((uVar12 & 1) != 0) {
        *pdVar1 = (double)pppuStack_90;
        *(undefined4 *)(pdVar1 + 1) = uStack_88;
        *(uint *)((long)pdVar1 + 0xc) = uVar12;
        pdVar1[2] = dVar6;
        *(long *)((long)param_3 + lVar9) = lVar11;
      }
      dVar6 = *pdVar1;
      param_1[1] = pdVar1[1];
      *param_1 = dVar6;
      dVar6 = pdVar1[2];
    }
  }
  param_1[2] = dVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  if ((*(char *)((long)pppppuVar4 + (long)_DAT_112776794) == '\x01') &&
     ((*(byte *)((long)pppppuVar4 + (long)_DAT_112776798) & 1) == 0)) {
    pcStack_128 = FUN_1085843b8;
    puStack_138 = PTR_PTR_1126fcd80;
    pppuStack_158 = param_5[1];
    pppuStack_160 = *param_5;
    pppuStack_150 = param_5[2];
    pppppuVar5 = &ppppuStack_140;
    ppppuStack_140 = pppppuVar4;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(pppppuVar5,PTR_s__presentationFrameNumberForTimes_11257d780,&pppuStack_160);
    return pppppuVar5;
  }
  return *(undefined8 ******)((long)pppppuVar4 + (long)_DAT_1127767cc);
}



/* Entry: 1085843b8; end: 108584433; -[SCNGSMEInteractiveImagePlayer _presentationFrameNumberForTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1085843b8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_20;
  undefined *puStack_18;
  
  if ((*(char *)(param_1 + _DAT_112776794) == '\x01') &&
     ((*(byte *)(param_1 + _DAT_112776798) & 1) == 0)) {
    puStack_18 = PTR_PTR_1126fcd80;
    uStack_38 = param_3[1];
    uStack_40 = *param_3;
    uStack_30 = param_3[2];
    plVar1 = &lStack_20;
    lStack_20 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s__presentationFrameNumberForTimes_11257d780,&uStack_40);
    return plVar1;
  }
  return *(long **)(param_1 + _DAT_1127767cc);
}



/* Entry: 108584434; end: 1085844a3; -[SCNGSMEInteractiveImagePlayer _fpsForStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108584434(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lStack_20;
  undefined *puStack_18;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  if ((*(char *)(param_2 + _DAT_112776794) == '\x01') &&
     ((*(byte *)(param_2 + _DAT_112776798) & 1) == 0)) {
    puStack_18 = PTR_PTR_1126fcd80;
    lStack_20 = param_2;
    _objc_msgSendSuper2(&lStack_20,PTR_s__fpsForStatus_112563d68);
    return CONCAT44(uVar3,uVar2);
  }
  uVar1 = 0;
  if (*(float *)(param_2 + 0xa0) != 0.0) {
    uVar1 = 0x41f00000;
  }
  return (ulong)uVar1;
}



/* Entry: 1085844a4; end: 1085844e3; -[SCNGSMEInteractiveImagePlayer _imageViewerDisplayLinkCallback:] */

void FUN_1085844a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x00010c26a180(param_3);
  func_0x00010c084bc0(auStack_38,param_1);
  func_0x00010be1a8e0(param_1);
  return;
}



/* Entry: 1085844e4; end: 108584837; -[SCNGSMEInteractiveImagePlayer _renderingDisplayLinkCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085844e4(undefined8 param_1,long param_2,undefined1 *param_3,undefined **param_4)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **unaff_x26;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_4;
  _objc_retain(param_4);
  if ((*(long *)(param_2 + _DAT_1127767c4) != 0) &&
     (((*(char *)(param_2 + _DAT_1127767a4) != '\x01' ||
       ((*(byte *)(param_2 + _DAT_11277679c) & 1) != 0)) ||
      (*(char *)(param_2 + _DAT_1127767a0) == '\x01')))) {
    func_0x00010c26a180(param_4);
    lVar7 = param_2;
    func_0x00010bfc8ca0();
    if (lVar7 != 0) {
      lVar7 = (long)_DAT_1127767c0;
      if (*(long *)(param_2 + lVar7) == 0) {
        puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_2;
        func_0x00010c0ff700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ac640();
        _objc_release(lVar7);
        ppuVar6 = &PTR____CFConstantStringClassReference_110ee3678;
        func_0x00010be87900(param_2);
        _objc_release(puVar5);
      }
      else {
        ppuVar2 = *(undefined ***)PTR__kCFAllocatorDefault_11034ab78;
        _CFArrayCreateMutable(ppuVar2,1,PTR__kCFTypeArrayCallBacks_11034ac10);
        _CFArrayAppendValue();
        func_0x00010c084bc0(&uStack_a0,param_1,param_2);
        puVar1 = (undefined8 *)(param_2 + _DAT_1127767b0);
        uStack_c8 = puVar1[1];
        uStack_d0 = *puVar1;
        uStack_b8 = puVar1[3];
        uStack_c0 = puVar1[2];
        uStack_a8 = puVar1[5];
        uStack_b0 = puVar1[4];
        puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297160();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_80 = puVar5;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_initWeak(auStack_d8,param_2);
        uVar8 = *(undefined8 *)(param_2 + lVar7);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_88 = puVar5;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f8 = 0xc2000000;
        pcStack_f0 = FUN_108584838;
        puStack_e8 = &UNK_110a55c08;
        unaff_x26 = &puStack_100;
        param_3 = auStack_d8;
        _objc_copyWeak(auStack_e0);
        uStack_c8 = uStack_98;
        uStack_d0 = uStack_a0;
        uStack_c0 = uStack_90;
        ppuVar6 = ppuVar2;
        func_0x00010c12fce0(uVar8);
        _objc_release(puVar4);
        _objc_release(puVar5);
        if (ppuVar2 != (undefined **)0x0) {
          _CFRelease(ppuVar2);
        }
        *(undefined1 *)(param_2 + _DAT_11277679c) = 0;
        _objc_destroyWeak(auStack_e0);
        _objc_destroyWeak(auStack_d8);
        _objc_release(puVar3);
      }
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 4);
  _objc_destroyWeak(auStack_d8);
  __Unwind_Resume();
  _objc_retain(ppuVar6);
  param_4 = param_4 + 4;
  _objc_loadWeakRetained();
  if (param_4 != (undefined **)0x0) {
    if (param_3 == (undefined1 *)0x2) {
      func_0x00010bde0d60(param_4);
    }
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar2 = param_4;
      func_0x00010c0ff700(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ac640();
      _objc_release(ppuVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 108584838; end: 1085848bf;  */

void FUN_108584838(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 2) {
      func_0x00010bde0d60(param_1);
    }
    if (param_3 != 0) {
      lVar1 = param_1;
      func_0x00010c0ff700(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ac640();
      _objc_release(lVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085848c0; end: 10858492b; -[SCNGSMEInteractiveImagePlayer _displayLinkCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085848c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (*(char *)(param_1 + _DAT_112776798) == '\x01') {
    func_0x00010be8e760(param_1,param_2,param_3);
  }
  else if ((*(byte *)(param_1 + _DAT_112776794) & 1) == 0) {
    func_0x00010be37880(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10858492c; end: 108584a4b; -[SCNGSMEInteractiveImagePlayer image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858492c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_1127767d4;
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



/* Entry: 108584a4c; end: 108584a63; -[SCNGSMEInteractiveImagePlayer _createPixelBufferPoolIfNeededWithSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108584a4c(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127767b8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdf15d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createPixelBufferPoolWithSize__112559f10);
  return;
}



/* Entry: 108584a64; end: 108584c9b; -[SCNGSMEInteractiveImagePlayer _createPixelBufferPoolWithSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_108584a64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0x42475241);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar6);
  uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  lVar7 = (long)_DAT_1127767b8;
  _CVPixelBufferPoolCreate(uVar4,0,puVar3,param_1 + lVar7);
  if (((int)uVar4 == 0) && (*(long *)(param_1 + lVar7) != 0)) {
    puVar6 = (undefined *)0x1;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c0ff700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac680();
    _objc_release(lVar7);
    func_0x00010be87900(param_1);
    _objc_release(puVar6);
    puVar6 = (undefined *)0x0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar3[_DAT_11277679c] = 1;
  return puVar3;
}



/* Entry: 108584c9c; end: 108584caf; -[SCNGSMEInteractiveImagePlayer markCurrentFrameAsDirty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108584c9c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11277679c) = 1;
  return;
}



/* Entry: 108584cb0; end: 108584cbf; -[SCNGSMEInteractiveImagePlayer setShouldRenderContinuously:isExportMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108584cb0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127767a0) = param_3;
  return;
}



/* Entry: 108584cc0; end: 108584cdf; -[SCNGSMEInteractiveImagePlayer commandProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108584cc0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127767bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108584ce0; end: 108584d3b; -[SCNGSMEInteractiveImagePlayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108584ce0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127767bc);
  _objc_storeStrong(param_1 + _DAT_1127767c4,0);
  _objc_storeStrong(param_1 + _DAT_1127767c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127767d4,0);
  return;
}



/* Entry: 108584d3c; end: 108584e17; -[SCNGSMEInteractivePlayer initWithPlayerModel:playerProvider:audioSession:circumstanceEngine:firstFrameImage:playbackLogger:preparePerformer:] */

undefined8 *
FUN_108584d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126fcd88;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithPlayerModel_playerProvid_1125eb670,param_3,param_4,
                      param_5,param_6,param_7,param_8,param_9);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    FUN_108584e18(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ddb00(puVar1);
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x1c) = 1;
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108584e18; end: 10858504b;  */

void FUN_108584e18(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == (undefined *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  if (lVar1 != 0) {
    _objc_retain(param_1);
    puVar2 = param_1;
    while( true ) {
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) break;
      ___stack_chk_fail();
LAB_108585030:
      _objc_retain(0);
      uVar6 = 0;
      uVar7 = 0;
LAB_108584ea4:
      _objc_retain(uVar7);
      func_0x00010911cc8c(&uStack_e0,uVar7);
      _objc_release(uVar7);
      uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      _CMTimeRangeMake(&uStack_80,&uStack_b0,&uStack_e0);
      puVar3 = PTR_PTR_1126bf6b8;
      _objc_alloc();
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      uStack_d8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_e0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_d0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      uStack_b0 = uStack_e0;
      uStack_a8 = uStack_d8;
      uStack_a0 = uStack_d0;
      uStack_98 = uStack_c8;
      uStack_90 = uStack_c0;
      uStack_88 = uStack_b8;
      func_0x00010b7432f8(puVar3,puVar4,&uStack_b0,&uStack_e0,3,PTR____NSArray0__struct_11034ab48,
                          PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48,0);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (param_1 == (undefined *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x18);
      }
      _objc_retain(uVar7);
      func_0x00010b743b10(puVar2,uVar6,puVar4,uVar7);
      _objc_release(uVar7);
      _objc_release(puVar4);
      _objc_release(uVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  puVar2 = PTR_PTR_1126bf6c0;
  _objc_alloc(PTR_PTR_1126bf6c0);
  if (param_1 == (undefined *)0x0) goto LAB_108585030;
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 8);
  goto LAB_108584ea4;
}



/* Entry: 10858504c; end: 10858509f; -[SCNGSMEInteractivePlayer dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858504c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + _DAT_1127767d8) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_1126fcd88;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085850a0; end: 1085850fb; -[SCNGSMEInteractivePlayer _publishState:] */

void FUN_1085850a0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + 0xa8));
  if ((uVar1 & 1) == 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    *(ulong *)(param_1 + 0xa8) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085850fc; end: 108585183; -[SCNGSMEInteractivePlayer _errorIfNoPlayerItem] */

void FUN_1085850fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126af5d0;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110ee36d8,
                      &PTR____CFConstantStringClassReference_110e08d78,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa01c0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108585184; end: 1085853a7; -[SCNGSMEInteractivePlayer _prepareVideoPlayback] */

void FUN_108585184(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [48];
  char cStack_68;
  
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar3);
  uVar4 = param_1;
  func_0x00010c100cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c130060(param_1);
  func_0x00010bdd1ac0(&uStack_b8,param_1);
  _objc_release(uVar4);
  uVar4 = uStack_b8;
  _objc_retain(uStack_b8);
  uVar1 = uStack_b0;
  _objc_retain(uStack_b0);
  uVar2 = uStack_a0;
  _objc_retain(uStack_a0);
  if (cStack_68 == '\x01') {
    puVar5 = auStack_98;
    func_0x00010b691288();
    func_0x00010b69138c();
  }
  else {
    puVar5 = (undefined1 *)0x5;
  }
  _objc_initWeak(auStack_c0,param_1);
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1085853a8;
  puStack_100 = &UNK_110a55c38;
  _objc_copyWeak(auStack_d8,auStack_c0);
  _objc_retain(uVar4);
  uStack_f8 = uVar4;
  _objc_retain(uVar1);
  uStack_f0 = uVar1;
  uStack_c8 = uStack_a8;
  _objc_retain(uVar2);
  uStack_e8 = uVar2;
  uStack_e0 = param_1;
  puStack_d0 = puVar5;
  func_0x000107c312cc("APPSTORE",&puStack_118);
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar3);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  _objc_release(uStack_a0);
  return;
}



/* Entry: 1085853a8; end: 1085854ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085853a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    lVar4 = (long)_DAT_1127767dc;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + lVar4);
    *(undefined8 *)(lVar1 + lVar4) = uVar3;
    _objc_release(uVar2);
    lVar5 = lVar1;
    func_0x00010c100cc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar5 + 0x10);
    }
    _objc_retain(uVar2);
    func_0x00010c1ea7a0(*(undefined8 *)(lVar1 + lVar4));
    _objc_release(uVar2);
    _objc_release(lVar5);
    func_0x00010c130060(lVar1);
    func_0x00010c1ea8e0(*(undefined8 *)(lVar1 + lVar4));
    func_0x00010c1aef20(*(undefined8 *)(lVar1 + lVar4));
    *(undefined4 *)(lVar1 + _DAT_1127767e4) = *(undefined4 *)(param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    lVar5 = (long)_DAT_1127767e8;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + lVar5);
    *(undefined8 *)(lVar1 + lVar5) = uVar3;
    _objc_release(uVar2);
    *(undefined8 *)(lVar1 + _DAT_1127767ec) = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    puStack_48 = PTR_PTR_1126fcd88;
    _objc_msgSendSuper2(&uStack_50,PTR_s__prepareVideoPlayback_11257bfc8);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1085854f0; end: 10858551f;  */

void FUN_1085854f0(undefined8 *param_1)

{
  _objc_release(*param_1);
  _objc_release(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[3]);
  return;
}



/* Entry: 108585520; end: 1085855c7; -[SCNGSMEInteractivePlayer canChangeModelWithoutRestart:] */

undefined8 FUN_108585520(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c100cc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  _objc_retain(uVar2);
  _objc_release(param_1);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 8);
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  uVar1 = uVar2;
  func_0x00010911ea34(uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1085855c8; end: 1085857e3; -[SCNGSMEInteractivePlayer setPlayerModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085855c8(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uStack_50;
  undefined *puStack_48;
  
  FUN_108584e18();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf2c640();
  if ((int)uVar5 != 0) {
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_3 + 8);
    }
    _objc_retain(uVar5);
    uVar1 = param_1;
    func_0x00010c100cc0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(uVar1 + 8);
    }
    _objc_retain(uVar7);
    uVar2 = uVar5;
    func_0x00010c071ae0();
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_release(uVar5);
    if ((uVar2 & 1) == 0) {
      func_0x00010c130060(param_1);
      lVar3 = param_3;
      FUN_1085857e4();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + (long)_DAT_1127767e8);
      *(long *)(param_1 + (long)_DAT_1127767e8) = lVar3;
      _objc_release(uVar7);
    }
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_3 + 0x10);
    }
    _objc_retain(uVar5);
    uVar1 = param_1;
    func_0x00010c100cc0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(uVar1 + 0x10);
    }
    _objc_retain(uVar7);
    uVar2 = uVar5;
    func_0x00010c071ae0();
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_release(uVar5);
    if ((uVar2 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + (long)_DAT_1127767dc);
      if (param_3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(param_3 + 0x10);
      }
      _objc_retain(uVar6);
      func_0x00010c1ea7a0(uVar7);
      _objc_release(uVar6);
    }
    puVar4 = PTR_PTR_1126da178;
    func_0x00010bf0f380(PTR_PTR_1126da178);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16be60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar4);
    puStack_48 = PTR_PTR_1126fcd88;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,PTR_s_setPlayerModel__1126550e8,param_3);
    uVar5 = param_1;
    func_0x00010c07a400();
    if ((uVar5 & 1) == 0) {
      if (*(long *)(param_1 + (long)_DAT_1127767d8) != 0) {
        func_0x00010c12ffc0(param_1);
      }
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1085857e4; end: 1085859b3;  */

void FUN_1085857e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_128;
  undefined8 uStack_120;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_3 + 8);
  }
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010911c884(lVar4,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar4);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar2 + 0x20);
  }
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  if (lVar1 != 0) {
    puVar5 = PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18;
    func_0x00010c299880(PTR__OBJC_CLASS___AVMutableVideoCompositionLayerInstruction_1126d7d18);
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_120 = (long *)0x0;
    if (lVar2 == 0) goto LAB_1085859ac;
    lVar4 = *(long *)(lVar2 + 0x20);
    while( true ) {
      _objc_retain(lVar4);
      lVar1 = lVar4;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar6 = *uStack_120;
        do {
          lVar7 = 0;
          do {
            if (*uStack_120 != lVar6) {
              _objc_enumerationMutation(lVar4);
            }
            func_0x00010912152c(param_1,param_2,puVar5,*(undefined8 *)(uStack_128 + lVar7 * 8),1);
            lVar7 = lVar7 + 1;
          } while (lVar1 != lVar7);
          lVar1 = lVar4;
          func_0x00010bf52a60();
        } while (lVar1 != 0);
      }
      _objc_release(lVar4);
LAB_108585954:
      _objc_release(lVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) break;
      ___stack_chk_fail();
LAB_1085859ac:
      lVar4 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  puVar5 = (undefined *)0x0;
  goto LAB_108585954;
}



/* Entry: 1085859b4; end: 108585a5b; -[SCNGSMEInteractivePlayer setPlayerView:] */

void FUN_1085859b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar1 == 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_108585a5c;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    _objc_retain(param_3);
    uStack_28 = param_3;
    func_0x00010bcbe2c4("APPSTORE",&puStack_50);
    _objc_release(uStack_28);
  }
  else {
    func_0x00010bea6620(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108585a5c; end: 108585a67;  */

void FUN_108585a5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea6630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setPlayerViewDispatchBlock__112587330,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108585a68; end: 108585b5b; -[SCNGSMEInteractivePlayer _setPlayerViewDispatchBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108585a68(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fcd88;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s__setPlayerViewDispatchBlock__112587330,param_3);
  puVar2 = PTR_PTR_1126bf5e0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    func_0x00010bf3b540(param_3);
    puStack_48 = PTR_PTR_1126fcd88;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_setPlayerView__112655148,param_3);
    uVar3 = param_3;
    func_0x00010c0ef040();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127767e0);
    *(ulong *)(param_1 + _DAT_1127767e0) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108585b5c; end: 108585bdb; -[SCNGSMEInteractivePlayer _displayLinkCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108585b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_1127767e0) != 0) {
    func_0x00010c26a180(param_3);
    lVar1 = param_1;
    func_0x00010bfc9c00();
    if (lVar1 != 0) {
      lVar2 = (long)_DAT_1127767d8;
      if (*(long *)(param_1 + lVar2) != 0) {
        _CFRelease();
      }
      *(long *)(param_1 + lVar2) = lVar1;
      func_0x00010c12ffc0(param_1,param_2,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108585bdc; end: 108585eaf; -[SCNGSMEInteractivePlayer renderSampleBuffer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108585bdc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c8eb8;
  _objc_alloc(PTR_PTR_1126c8eb8);
  func_0x00010c0413a0();
  lVar2 = param_1;
  func_0x00010c11aec0();
  if ((int)lVar2 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x68));
  }
  lVar2 = param_3;
  _CMSampleBufferGetImageBuffer();
  lVar3 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
  _CFArrayCreateMutable(lVar3,1,PTR__kCFTypeArrayCallBacks_11034ac10);
  if (lVar2 != 0) {
    _CFArrayAppendValue();
    _CMSampleBufferGetPresentationTimeStamp(auStack_80,param_3);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + _DAT_1127767e8) != 0) {
      func_0x00010bfcb740();
    }
    puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297160(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4);
    _objc_release(puVar7);
    func_0x00010c12fce0(*(undefined8 *)(param_1 + _DAT_1127767dc));
    if (lVar3 != 0) {
      _CFRelease(lVar3);
    }
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 108585eb0; end: 108585eb3;  */

void FUN_108585eb0(void)

{
  return;
}



/* Entry: 108585eb4; end: 1085863eb; -[SCNGSMEInteractivePlayer _captureRenderedImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108585eb4(double param_1,double param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 auStack_170 [8];
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_1127767dc;
  if (*(long *)(param_3 + lVar13) == 0) {
LAB_1085862c8:
    puVar10 = PTR_PTR_1126ae558;
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bfe9c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  else {
    lVar1 = *(long *)(param_3 + _DAT_1127767d8);
    if (lVar1 == 0) {
      _CACurrentMediaTime();
      lVar1 = param_3;
      func_0x00010bfc9c00();
    }
    else {
      _CFRetain();
    }
    if (lVar1 == 0) goto LAB_1085862c8;
    lVar2 = lVar1;
    _CMSampleBufferGetImageBuffer();
    if (lVar2 == 0) {
      _CFRelease(lVar1);
      goto LAB_1085862c8;
    }
    uStack_b0 = *(undefined8 *)PTR__kCVPixelBufferOpenGLESCompatibilityKey_11034a3a8;
    uStack_a8 = *(undefined8 *)PTR__kCVPixelBufferMetalCompatibilityKey_11034a398;
    puStack_98 = PTR____kCFBooleanTrue_11034ab68;
    puStack_90 = PTR____kCFBooleanTrue_11034ab68;
    uStack_a0 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
    puStack_88 = PTR____NSDictionary0__struct_11034ab58;
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    lStack_d0 = 0;
    func_0x00010c130060(param_3);
    func_0x00010c130060(param_3);
    puVar14 = *(undefined **)PTR__kCFAllocatorDefault_11034ab78;
    param_4 = (undefined1 *)(long)param_1;
    puVar10 = puVar14;
    _CVPixelBufferCreate(puVar14,param_4,(long)param_2,0x42475241,puVar9,&lStack_d0);
    if (((int)puVar10 == 0) && (lStack_d0 != 0)) {
      _CMSampleBufferGetPresentationTimeStamp(&uStack_e8,lVar1);
      func_0x00010b69138c(*(undefined8 *)(param_3 + _DAT_1127767ec));
      uStack_118 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_120 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_108 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_110 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_f8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_100 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      if (*(long *)(param_3 + _DAT_1127767e8) != 0) {
        uStack_158 = uStack_e0;
        uStack_160 = uStack_e8;
        uStack_150 = uStack_d8;
        func_0x00010bfcb740();
      }
      _CFArrayCreateMutable(puVar14,1,PTR__kCFTypeArrayCallBacks_11034ac10);
      _CFArrayAppendValue();
      puVar3 = PTR_PTR_1126ae560;
      _objc_alloc_init();
      _objc_initWeak(auStack_128,param_3);
      uVar12 = *(undefined8 *)(param_3 + lVar13);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b8 = puVar10;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c0 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uStack_158 = uStack_118;
      uStack_160 = uStack_120;
      uStack_148 = uStack_108;
      uStack_150 = uStack_110;
      uStack_138 = uStack_f8;
      uStack_140 = uStack_100;
      puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297160();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c8 = puVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      lStack_168 = lStack_d0;
      _objc_retain(puVar3);
      param_4 = auStack_128;
      _objc_copyWeak(auStack_170);
      uStack_158 = uStack_e0;
      uStack_160 = uStack_e8;
      uStack_150 = uStack_d8;
      puVar11 = puVar14;
      func_0x00010bf9d080(uVar12);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar10);
      _CFRelease(puVar14);
      _CFRelease(lVar1);
      puVar10 = puVar3;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_destroyWeak(auStack_170);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_128);
      _objc_release(puVar3);
    }
    else {
      _CFRelease(lVar1);
      puVar10 = PTR_PTR_1126ae558;
      puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar14;
      func_0x00010bfe9c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_128);
  __Unwind_Resume();
  _objc_retain(puVar11);
  if (param_4 == (undefined1 *)0x2) {
    puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe7b60();
    _objc_retainAutoreleasedReturnValue();
    _CVPixelBufferRelease(*(undefined8 *)(puVar9 + 0x30));
    if (puVar10 != (undefined *)0x0) {
      func_0x00010bf43d60(*(undefined8 *)(puVar9 + 0x20));
      goto LAB_1085864dc;
    }
  }
  else {
    _CVPixelBufferRelease(*(undefined8 *)(puVar9 + 0x30));
  }
  if (puVar11 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar11);
    puVar10 = puVar11;
  }
  puVar14 = puVar9 + 0x28;
  _objc_loadWeakRetained(puVar14);
  puVar3 = puVar14;
  func_0x00010c0ff700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac640();
  _objc_release(puVar3);
  func_0x00010bf43ca0(*(undefined8 *)(puVar9 + 0x20));
  _objc_release(puVar14);
LAB_1085864dc:
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 1085863ec; end: 1085864fb;  */

void FUN_1085863ec(long param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_2 == 2) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe7b60();
    _objc_retainAutoreleasedReturnValue();
    _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x30));
    if (puVar1 != (undefined *)0x0) {
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
      goto LAB_1085864dc;
    }
  }
  else {
    _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x30));
  }
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0ff700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac640();
  _objc_release(lVar3);
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar2);
LAB_1085864dc:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085864fc; end: 10858650b; -[SCNGSMEInteractivePlayer _supportedVideoTrackCount:andImageOverlayCount:] */

bool FUN_1085864fc(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  return param_3 == 1 && param_4 == 0;
}



/* Entry: 10858650c; end: 108586853; -[SCNGSMEInteractivePlayer _avPlayerItemFromNGSMESnap:renderSize:circumstanceEngine:] */

void FUN_10858650c(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined4 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_6 + 8);
  }
  _objc_retain(uVar7);
  func_0x00010be3f120(param_4,param_5,uVar7);
  _objc_release(uVar7);
  if ((param_4 & 1) == 0) {
    param_1[10] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    puVar3 = PTR_PTR_1126da178;
    _objc_alloc();
    func_0x00010c02d3c0(param_2,param_3);
    uVar7 = param_7;
    func_0x0001091286cc(param_7);
    func_0x00010c166be0(puVar3,param_5,uVar7);
    lStack_b8 = 0;
    lStack_d0 = 0;
    lStack_c8 = 0;
    if (puVar3 == (undefined *)0x0) {
      lStack_f8 = 0;
      lStack_100 = 0;
      lStack_e8 = 0;
      lStack_f0 = 0;
      lStack_118 = 0;
      lStack_120 = 0;
      lStack_108 = 0;
      lStack_110 = 0;
    }
    else {
      func_0x00010bfbfbe0(&lStack_120,puVar3,param_5,&lStack_d8,0,param_7);
    }
    lVar1 = lStack_120;
    _objc_retain(lStack_120);
    lStack_d0 = lVar1;
    _objc_release(0);
    func_0x00010c16c4c0(lVar1,param_5,
                        *(undefined8 *)PTR__AVAudioTimePitchAlgorithmVarispeed_110347ed8);
    lVar2 = lStack_118;
    _objc_retain(lStack_118);
    lStack_c8 = lVar2;
    _objc_release(0);
    if (lStack_d8 == 0) {
      puVar4 = puVar3;
      func_0x00010bdc1c80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      if (puVar6 == (undefined *)0x0) {
        lVar8 = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
        puVar4 = PTR__CGAffineTransformIdentity_110347008;
        lVar9 = *(long *)PTR__CGAffineTransformIdentity_110347008;
        lVar11 = *(long *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
        lVar10 = *(long *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
        param_1[5] = *(long *)(PTR__CGAffineTransformIdentity_110347008 + 8);
        param_1[4] = lVar9;
        param_1[7] = lVar11;
        param_1[6] = lVar10;
        lVar9 = *(long *)(puVar4 + 0x20);
        param_1[9] = *(long *)(puVar4 + 0x28);
        param_1[8] = lVar9;
        *(undefined1 *)(param_1 + 10) = 0;
      }
      else {
        puVar4 = puVar6;
        func_0x00010c067ec0();
        lVar8 = param_6;
        uStack_c0 = (int)puVar4;
        FUN_1085857e4(param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        lStack_b8 = lVar8;
        _objc_release(0);
        lStack_a8 = lStack_108;
        lStack_b0 = lStack_110;
        lStack_98 = lStack_f8;
        lStack_a0 = lStack_100;
        lStack_88 = lStack_e8;
        lStack_90 = lStack_f0;
        lVar9 = lStack_120;
        func_0x00010c299820();
        _objc_retainAutoreleasedReturnValue();
        uStack_80 = lVar9 == 0;
        _objc_release();
        _objc_retain(lVar1);
        *param_1 = lVar1;
        _objc_retain(lVar2);
        param_1[1] = lVar2;
        *(int *)(param_1 + 2) = (int)puVar4;
        _objc_retain(lVar8);
        param_1[3] = lVar8;
        param_1[5] = lStack_a8;
        param_1[4] = lStack_b0;
        param_1[7] = lStack_98;
        param_1[6] = lStack_a0;
        param_1[9] = lStack_88;
        param_1[8] = lStack_90;
        *(undefined1 *)(param_1 + 10) = uStack_80;
      }
      _objc_release(puVar6);
    }
    else {
      lVar8 = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      puVar4 = PTR__CGAffineTransformIdentity_110347008;
      lVar9 = *(long *)PTR__CGAffineTransformIdentity_110347008;
      lVar11 = *(long *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      lVar10 = *(long *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      param_1[5] = *(long *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      param_1[4] = lVar9;
      param_1[7] = lVar11;
      param_1[6] = lVar10;
      lVar9 = *(long *)(puVar4 + 0x20);
      param_1[9] = *(long *)(puVar4 + 0x28);
      param_1[8] = lVar9;
      *(undefined1 *)(param_1 + 10) = 0;
    }
    _objc_release(lStack_120);
    _objc_release(lStack_118);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar8);
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 108586854; end: 1085868b3; -[SCNGSMEInteractivePlayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108586854(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127767dc,0);
  _objc_storeStrong(param_1 + _DAT_1127767e0,0);
  _objc_storeStrong(param_1 + _DAT_1127767f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127767e8,0);
  return;
}



/* Entry: 1085868b4; end: 10858694b; -[SCNGSMEPlayerGPURenderView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1085868b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fcd90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___CAEAGLLayer_1126d55b0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127767f4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127767f4) = puVar2;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10858694c; end: 1085869eb; -[SCNGSMEPlayerGPURenderView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858694c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_40;
  undefined *puStack_38;
  
  if (*(long *)(param_1 + _DAT_1127767f8) != 0) {
    puVar1 = PTR_PTR_1126d13b0;
    _objc_alloc(PTR_PTR_1126d13b0);
    func_0x00010c03e200();
    puVar2 = PTR_PTR_1126bf4d0;
    func_0x00010c22bec0(PTR_PTR_1126bf4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befafa0();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  puStack_38 = PTR_PTR_1126fcd90;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085869ec; end: 108586a63; -[SCNGSMEPlayerGPURenderView layoutSubviews] */

/* WARNING: Possible PIC construction at 0x000108586a14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108586a18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085869ec(long param_1)

{
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127767f4),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 108586a64; end: 108586aef; -[SCNGSMEPlayerGPURenderView outputRenderer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108586a64(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127767f8;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126bf4b8;
    _objc_opt_new(PTR_PTR_1126bf4b8);
    puVar2 = PTR_PTR_1126bf4e8;
    _objc_alloc();
    func_0x00010c01cce0();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108586af0; end: 108586af7; -[SCNGSMEPlayerGPURenderView playerModelCanChange] */

undefined8 FUN_108586af0(void)

{
  return 1;
}



/* Entry: 108586af8; end: 108586aff; -[SCNGSMEPlayerGPURenderView setPlayerPixelBufferToPlaceholder] */

undefined8 FUN_108586af8(void)

{
  return 0;
}



/* Entry: 108586b00; end: 108586b03; -[SCNGSMEPlayerGPURenderView setPlaceholderPixelBufferTransform:] */

void FUN_108586b00(void)

{
  return;
}



/* Entry: 108586b04; end: 108586bf7; -[SCNGSMEPlayerGPURenderView setImageOnOverlayLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108586b04(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127767fc;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010c12c940();
  }
  if (param_3 == 0) {
    lVar3 = *(long *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c182ca0(*(undefined8 *)(param_1 + lVar4),param_2,
                        *(undefined8 *)PTR__kCAGravityResizeAspect_110346d28);
    lVar3 = param_3;
    func_0x00010bfe8380(param_3);
    func_0x00010bed97a0(param_1,param_2,lVar3);
    lVar3 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bdc1020();
    func_0x00010c182c80(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
    lVar3 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
  }
  _objc_release(lVar3);
  func_0x00010bea41e0(param_1,param_2,param_3 != 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108586bf8; end: 108586c3b; -[SCNGSMEPlayerGPURenderView clearImageOverlayLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108586bf8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127767fc;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12c940();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea41f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setGLLayerHidden__112586a20,0);
  return;
}



/* Entry: 108586c3c; end: 108586c93; -[SCNGSMEPlayerGPURenderView _setGLLayerHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108586c3c(long param_1)

{
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127767f4));
                    /* WARNING: Could not recover jumptable at 0x00010bf42770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CATransaction_1126b5718,PTR_s_commit_1125ae380);
  return;
}



/* Entry: 108586c94; end: 108586e0b; -[SCNGSMEPlayerGPURenderView _updateImageOrientation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108586c94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = (long)_DAT_1127767fc;
  if (*(long *)(param_1 + lVar1) == 0) {
    return;
  }
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,1);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  if (param_3 < 4) {
    if (param_3 == 1) {
      uVar2 = 0x400921fb54442d18;
    }
    else if (param_3 == 2) {
      uVar2 = 0xbff921fb54442d18;
    }
    else {
      if (param_3 != 3) goto LAB_108586dd4;
      uVar2 = 0x3ff921fb54442d18;
    }
    _CGAffineTransformMakeRotation(&uStack_60,uVar2);
    goto LAB_108586dd4;
  }
  if (param_3 < 6) {
    if (param_3 == 4) {
      _CGAffineTransformMakeScale(&uStack_60,0xbff0000000000000,0x3ff0000000000000);
      goto LAB_108586dd4;
    }
    if (param_3 != 5) goto LAB_108586dd4;
    uVar2 = 0x400921fb54442d18;
  }
  else if (param_3 == 6) {
    uVar2 = 0xbff921fb54442d18;
  }
  else {
    if (param_3 != 7) goto LAB_108586dd4;
    uVar2 = 0x3ff921fb54442d18;
  }
  _CGAffineTransformMakeRotation(&uStack_60,uVar2);
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  uStack_98 = uStack_38;
  uStack_a0 = uStack_40;
  _CGAffineTransformScale(&uStack_90,0xbff0000000000000,0x3ff0000000000000,&uStack_c0);
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  uStack_38 = uStack_68;
  uStack_40 = uStack_70;
LAB_108586dd4:
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c166440(*(undefined8 *)(param_1 + lVar1),param_2,&uStack_90);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  return;
}



/* Entry: 108586e0c; end: 108586e1b; -[SCNGSMEPlayerGPURenderView videoGravity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108586e0c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112776800,1);
  return;
}



/* Entry: 108586e1c; end: 108586e27; -[SCNGSMEPlayerGPURenderView setVideoGravity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108586e1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 108586e28; end: 108586e37; -[SCNGSMEPlayerGPURenderView glLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108586e28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127767f4);
}



/* Entry: 108586e38; end: 108586e97; -[SCNGSMEPlayerGPURenderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108586e38(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776800,0);
  _objc_storeStrong(param_1 + _DAT_1127767f8,0);
  _objc_storeStrong(param_1 + _DAT_1127767fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127767f4,0);
  return;
}



/* Entry: 108586e98; end: 108587287; -[SCNGSMEVideoAssetMutator generateMutatedVideoAndImagePlayerItemWithErrorType:shouldRenderInternally:circumstanceEngine:] */

void FUN_108586e98(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  lVar1 = param_2;
  func_0x00010bfbfc20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  if (lVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar9);
  func_0x00010c100be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (lVar1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = *(undefined **)(lVar1 + 0x10);
  }
  _objc_retain(puVar10);
  puVar3 = puVar10;
  func_0x00010c0d3c80(puVar10);
  _objc_release(puVar10);
  if (lVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar9);
  uVar4 = uVar9;
  func_0x000109126a88();
  _objc_release(uVar9);
  if ((int)uVar4 != 0) {
    func_0x00010c17e9a0(puVar3);
    func_0x00010c17ea60(puVar3);
    func_0x00010c17eb20(puVar3);
  }
  func_0x00010c2213a0(puVar2);
  if (lVar1 == 0) {
    _objc_retain(0);
    func_0x00010c16be60(puVar2);
    _objc_release(0);
    lVar11 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar1 + 0x18);
    _objc_retain(uVar9);
    func_0x00010c16be60(puVar2);
    _objc_release(uVar9);
    lVar11 = *(long *)(lVar1 + 8);
  }
  _objc_retain(lVar11);
  lVar5 = lVar11;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar11);
  lVar11 = lVar6;
  func_0x00010bf529e0();
  if (lVar11 == 0) {
    *param_4 = 0x20;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
  }
  else {
    if ((param_5 == 0) || (lVar11 = param_2, func_0x00010beb5a00(), (int)lVar11 == 0)) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = puVar2;
      func_0x00010c299820(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar10;
      func_0x00010c0d3c80();
      _objc_release(puVar3);
      _objc_release(puVar10);
      _objc_opt_class(PTR_PTR_1126da1d8);
      func_0x00010c188f80(puVar7);
      func_0x00010c2213a0(puVar2);
      puVar3 = puVar2;
      func_0x00010bf62b40();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126da1d8;
      _objc_opt_class(PTR_PTR_1126da1d8);
      puVar8 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar10);
      puVar10 = puVar3;
      if (((ulong)puVar8 & 1) == 0) {
        puVar10 = (undefined *)0x0;
      }
      _objc_retain(puVar10);
      _objc_release(puVar3);
      func_0x00010bdd5fc0(param_2);
      puVar3 = puVar7;
    }
    lVar11 = param_2;
    func_0x00010beb2d60();
    if ((int)lVar11 != 0) {
      func_0x00010c2213a0(puVar2);
    }
    *param_1 = 0;
    param_1[1] = 0;
    if ((param_5 & 1) == 0) {
      func_0x000109128668(param_6);
      func_0x00010912867c(param_6);
      lVar11 = param_2;
      func_0x00010bee8ea0();
      _objc_retainAutoreleasedReturnValue();
      param_1[1] = lVar11;
    }
    _objc_retain(puVar2);
    *param_1 = puVar2;
    func_0x00010c23ca80(&uStack_90,param_2);
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    _objc_release(puVar10);
  }
  _objc_release(lVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  return;
}



/* Entry: 108587288; end: 1085872b7;  */

void FUN_108587288(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c277e40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,param_2);
  return;
}



/* Entry: 1085872b8; end: 1085875a3; -[SCNGSMEVideoAssetMutator generateAssetReaderVideoCompositionOutputWithMutatorOutput:errorType:shouldRunIPPThroughCustomCompositor:circumstanceEngine:] */

void FUN_1085872b8(undefined8 param_1,undefined *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(param_3);
  func_0x00010bf72080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___AVAssetReaderVideoCompositionOutput_1126da1e0;
  _objc_alloc();
  if (param_3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_3 + 8);
  }
  _objc_retain(uVar9);
  uVar3 = uVar9;
  func_0x00010c279200(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0612c0();
  _objc_release(uVar3);
  _objc_release(uVar9);
  if (param_3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_3 + 8);
  }
  _objc_retain(uVar9);
  uVar3 = uVar9;
  func_0x00010c279200(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar9);
  if (param_3 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = *(undefined **)(param_3 + 0x10);
  }
  _objc_retain(puVar10);
  puVar5 = puVar10;
  func_0x00010c0d3c80(puVar10);
  _objc_release(puVar10);
  if (param_3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_3 + 0x10);
  }
  _objc_retain(uVar9);
  _objc_release(param_3);
  func_0x00010c2213a0(puVar2);
  _objc_release(uVar9);
  uVar9 = param_1;
  func_0x00010beb5a00();
  puVar10 = puVar5;
  if ((int)uVar9 != 0) {
    puVar6 = puVar2;
    func_0x00010c299820(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010c0d3c80();
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_opt_class(PTR_PTR_1126da1d8);
    func_0x00010c188f80(puVar10);
    func_0x00010c2213a0(puVar2);
    puVar6 = puVar2;
    func_0x00010bf62b40();
    _objc_retainAutoreleasedReturnValue();
    param_2 = PTR_PTR_1126da1d8;
    _objc_opt_class(PTR_PTR_1126da1d8);
    puVar7 = puVar6;
    _objc_opt_isKindOfClass(puVar6,param_2);
    puVar5 = puVar6;
    if (((ulong)puVar7 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar6);
    func_0x00010bdd5fc0(param_1);
    _objc_release(puVar5);
  }
  _objc_release(puVar10);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c277e40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,param_2);
  return;
}



/* Entry: 1085875a4; end: 1085875d3;  */

void FUN_1085875a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c277e40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,param_2);
  return;
}



/* Entry: 1085875d4; end: 1085876ab; -[SCNGSMEVideoAssetMutator _shouldClearUnusedCompositionForInternalRender:compositor:videoTrackContainsHDR:circumstanceEngine:] */

ulong FUN_1085875d4(long param_1,undefined8 param_2,int param_3,long param_4,ulong param_5,
                   ulong param_6)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if ((param_5 & 1) == 0) {
    func_0x00010c0da2e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 8);
    }
    _objc_retain(uVar4);
    uVar2 = uVar4;
    func_0x00010911eebc();
    _objc_release(uVar4);
    _objc_release(param_1);
    if ((int)uVar2 != 0) {
      if (param_3 == 0) {
        uVar3 = param_6;
        func_0x000109128620(param_6);
      }
      else {
        uVar3 = param_6;
        func_0x00010912860c();
        uVar1 = 0;
        if (param_4 == 0) {
          uVar1 = (uint)uVar3;
        }
        uVar3 = (ulong)uVar1;
      }
      goto LAB_108587670;
    }
  }
  uVar3 = 0;
LAB_108587670:
  _objc_release(param_6);
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 1085876ac; end: 1085877a7; -[SCNGSMEVideoAssetMutator _shouldSetupCustomCompositor:shouldRunIPPThroughCustomCompositor:] */

ulong FUN_1085876ac(ulong param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0da2e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulong *)(uVar1 + 8);
  }
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010911c884(uVar3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf04920();
  uVar3 = param_3;
  func_0x00010bf1f440();
  if ((uVar3 & 1) == 0) {
    if ((((uint)uVar1 | param_4 ^ 1) & 1) != 0) goto LAB_108587778;
  }
  else if ((uVar1 & 1) != 0) {
    uVar1 = 1;
    goto LAB_108587778;
  }
  func_0x00010be34500(param_1);
  uVar1 = param_1;
LAB_108587778:
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1085877a8; end: 1085877f7;  */

undefined8 FUN_1085877a8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
  }
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x00010bf04920(uVar2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1085877f8; end: 1085878ff;  */

undefined1 FUN_1085877f8(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
  }
  _objc_retain(uVar2);
  func_0x00010c0bc940(uVar2);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 108587900; end: 10858792f;  */

void FUN_108587900(long param_1,undefined1 param_2)

{
  func_0x00010c074fe0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 108587930; end: 108587947;  */

void FUN_108587930(void)

{
  return;
}



/* Entry: 108587948; end: 108587a4f; -[SCNGSMEVideoAssetMutator _hasRenderEffects:] */

uint FUN_108587948(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0da2e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar1 + 0x10);
  }
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar5 = param_3;
    func_0x00010bf1f440(param_3,param_2,&PTR____CFConstantStringClassReference_110ee3778,0,0);
    if ((int)uVar5 == 0) {
      uVar3 = 1;
    }
    else {
      lVar1 = param_1;
      func_0x00010c0da2e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar1 + 0x10);
      }
      _objc_retain(uVar5);
      func_0x00010be34320(param_1,param_2,uVar5);
      uVar3 = (uint)param_1 ^ 1;
      _objc_release(uVar5);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 108587a50; end: 108587c53; -[SCNGSMEVideoAssetMutator _hasOnlyIdentityCommand:] */

uint FUN_108587a50(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    lVar1 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(lVar1 + 0x18);
    }
    _objc_retain(lVar8);
    lVar2 = lVar8;
    func_0x00010bf529e0();
    _objc_release(lVar8);
    _objc_release(lVar1);
    if (lVar2 == 1) {
      lVar1 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(ulong *)(lVar1 + 0x18);
      }
      _objc_retain(uVar10);
      uVar3 = uVar10;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(lVar1);
      puVar4 = PTR_PTR_1126b26c8;
      _objc_opt_class(PTR_PTR_1126b26c8);
      uVar10 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      puVar4 = PTR_PTR_1126b26e8;
      if ((uVar10 & 1) == 0) {
        _objc_retain(uVar3);
        _objc_opt_class(puVar4);
        uVar5 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar4);
        uVar10 = uVar3;
        if ((uVar5 & 1) == 0) {
          uVar10 = 0;
        }
        _objc_retain(uVar10);
        _objc_release(uVar3);
        if (uVar10 == 0) {
LAB_108587c0c:
          uVar9 = 0;
        }
        else {
          uVar5 = uVar3;
          func_0x00010c0654e0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf529e0();
          _objc_release(uVar5);
          if (uVar6 != 1) goto LAB_108587c0c;
          uVar5 = uVar3;
          func_0x00010c0654e0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126b26c8;
          _objc_opt_class(PTR_PTR_1126b26c8);
          uVar7 = uVar6;
          _objc_opt_isKindOfClass(uVar6,puVar4);
          uVar9 = (uint)uVar7;
          _objc_release(uVar6);
          _objc_release(uVar5);
        }
        _objc_release(uVar10);
      }
      else {
        uVar9 = 1;
      }
      _objc_release(uVar3);
      goto LAB_108587c20;
    }
  }
  uVar9 = 0;
LAB_108587c20:
  _objc_release(param_3);
  return uVar9 & 1;
}



/* Entry: 108587c54; end: 1085880af; -[SCNGSMEVideoAssetMutator _videoProcessorWithErrorType:renderInputImagesAsBGRA:sessionTextureCacheEnabled:] */

void FUN_108587c54(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126da1e8;
  _objc_opt_new();
  func_0x00010c1fddc0();
  func_0x00010c1ea7e0(puVar2);
  func_0x00010c29b000(param_1);
  func_0x00010c1ea8e0(puVar2);
  lVar3 = param_1;
  func_0x00010c0da2e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar3 + 0x10);
  }
  _objc_retain(uVar10);
  func_0x00010c1ea7a0(puVar2);
  _objc_release(uVar10);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c0da2e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar3 + 8);
  }
  _objc_retain(lVar11);
  lVar4 = lVar11;
  func_0x00010911c884(lVar11,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c0da2e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar11 + 8);
  }
  _objc_retain(uVar10);
  func_0x00010911e590();
  _objc_release(uVar10);
  _objc_release(lVar11);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar3 + 0x20);
  }
  _objc_retain(lVar11);
  lVar7 = lVar11;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar11);
      }
      if (*(long *)(lVar9 * 8) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(*(long *)(lVar9 * 8) + 8);
      }
      _objc_retain(uVar10);
      _objc_retain(puVar5);
      _objc_retain(puVar6);
      _objc_retain(puVar5);
      _objc_retain(puVar6);
      func_0x00010c0bc940(uVar10);
      _objc_release(uVar10);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(puVar5);
      lVar9 = lVar9 + 1;
    } while (lVar7 != lVar9);
    lVar7 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  func_0x00010bdc1c80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar3 + 0x18);
  }
  _objc_retain(uVar10);
  lVar11 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(param_1);
  if (lVar11 != 0) {
    if (lVar3 == 0) goto LAB_1085880a8;
    uVar10 = *(undefined8 *)(lVar3 + 0x18);
    while( true ) {
      _objc_retain(uVar10);
      func_0x00010befb2e0(puVar2);
      _objc_release(uVar10);
      _objc_retain(puVar2);
      puVar12 = puVar2;
LAB_10858800c:
      _objc_release(lVar11);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(puVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) break;
      ___stack_chk_fail();
LAB_1085880a8:
      uVar10 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  puVar12 = (undefined *)0x0;
  *param_3 = *param_3 | 0x200;
  goto LAB_10858800c;
}



/* Entry: 1085880b0; end: 108588223;  */

void FUN_1085880b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [48];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c074fe0();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if ((int)uVar1 == 0) goto LAB_108588204;
  uVar1 = param_2;
  func_0x00010c0f5800(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (puVar2 == (undefined *)0x0) goto LAB_108588204;
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_retain(0);
LAB_108588168:
    lVar4 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
    _objc_retain(lVar4);
    if (lVar4 == 0) goto LAB_108588168;
    func_0x00010bdc1140(&uStack_88,lVar4);
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_retain(0);
LAB_1085881a4:
    lVar5 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
    _objc_retain(lVar5);
    if (lVar5 == 0) goto LAB_1085881a4;
    func_0x00010bdc1140(&uStack_a0,lVar5);
  }
  _CMTimeRangeMake(auStack_70,&uStack_88,&uStack_a0);
  func_0x00010c297240(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_108588204:
  _objc_release(param_2);
  return;
}



/* Entry: 108588224; end: 108588227;  */

void FUN_108588224(void)

{
  return;
}



/* Entry: 108588228; end: 108588383;  */

void FUN_108588228(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [48];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    **(ulong **)(param_1 + 0x38) = **(ulong **)(param_1 + 0x38) | 0x20;
    goto LAB_108588368;
  }
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      _objc_retain(0);
LAB_1085882b0:
      lVar2 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
      _objc_retain(lVar2);
      if (lVar2 == 0) goto LAB_1085882b0;
      func_0x00010bdc1140(&uStack_48,lVar2);
    }
    _objc_release(lVar2);
  }
  else {
    _CMTimeMakeWithSeconds(&uStack_48,0x3ff0000000000000,600);
  }
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (*(long *)(param_1 + 0x20) == 0) {
    _objc_retain(0);
LAB_1085882fc:
    lVar2 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
    _objc_retain(lVar2);
    if (lVar2 == 0) goto LAB_1085882fc;
    func_0x00010bdc1140(&uStack_90,lVar2);
  }
  uStack_a8 = uStack_40;
  uStack_b0 = uStack_48;
  uStack_a0 = uStack_38;
  _CMTimeRangeMake(auStack_78,&uStack_90,&uStack_b0);
  func_0x00010c297240(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar1);
LAB_108588368:
  _objc_release(param_2);
  return;
}



/* Entry: 108588384; end: 10858898b; -[SCNGSMEVideoAssetMutator _buildCustomCompositor:videoTrackIDs:circumstanceEngine:withErrorType:setRenderEffects:playbackMode:] */

void FUN_108588384(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5,ulong *param_6,undefined *param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 auStack_198 [280];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = param_1;
  func_0x00010c0da2e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = *(undefined **)(puVar3 + 8);
  }
  _objc_retain(puVar14);
  puVar4 = puVar14;
  func_0x00010911c884(puVar14,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar3);
  func_0x00010912867c(param_5);
  func_0x00010c1fddc0(param_3);
  func_0x00010c29b000(param_1);
  func_0x00010c1ea8e0(param_3);
  func_0x00010c198a00(param_3);
  func_0x00010c1dd720(param_3);
  puVar3 = param_1;
  func_0x00010bfe6880();
  lVar15 = param_5;
  puVar14 = param_1;
  if (((ulong)puVar3 & 1) != 0) goto LAB_1085884c8;
  puVar3 = param_1;
  func_0x00010c0da2e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) goto LAB_10858897c;
  uVar13 = *(undefined8 *)(puVar3 + 8);
  do {
    _objc_retain(uVar13);
    func_0x00010911e848(uVar13);
    func_0x00010c1a6ca0(param_3);
    _objc_release(uVar13);
    _objc_release(puVar3);
    lVar15 = param_5;
    puVar14 = param_1;
LAB_1085884c8:
    puVar3 = puVar14;
    func_0x00010c0da2e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(puVar3 + 8);
    }
    _objc_retain(uVar13);
    uVar5 = uVar13;
    func_0x00010911e590();
    _objc_release(uVar13);
    _objc_release(puVar3);
    puVar3 = puVar14;
    func_0x00010c0da2e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(puVar3 + 8);
    }
    _objc_retain(uVar13);
    func_0x00010911cc8c(auStack_198,uVar13);
    func_0x00010c218320(param_3);
    _objc_release(uVar13);
    _objc_release(puVar3);
    if ((int)param_7 != 0) {
      puVar3 = puVar14;
      func_0x00010c0da2e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar9 = *(undefined **)(puVar3 + 0x10);
      }
      _objc_retain(puVar9);
      _objc_release(puVar3);
      param_7 = puVar9;
      if ((int)uVar5 != 0) {
        param_7 = puVar14;
        func_0x00010bee5120();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar3 = param_7;
      }
      func_0x00010c1ea7a0(param_3);
      _objc_release(param_7);
    }
    func_0x000109128668(lVar15);
    func_0x00010c1ea7e0(param_3);
    _objc_retain(puVar4);
    puVar9 = puVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    param_5 = lVar15;
    param_1 = puVar14;
    while (puVar9 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar4);
        }
        param_5 = *(long *)((long)puVar10 * 8);
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        param_7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = 0;
        if (param_5 != 0) {
          lVar11 = *(long *)(param_5 + 0x20);
        }
        _objc_retain(lVar11);
        lVar7 = lVar11;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar7 != 0) {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar11);
            }
            param_1 = *(undefined **)(lVar12 * 8);
            if (param_1 == (undefined *)0x0) {
              uVar13 = 0;
            }
            else {
              uVar13 = *(undefined8 *)(param_1 + 8);
            }
            _objc_retain(uVar13);
            _objc_retain(puVar6);
            _objc_retain(param_7);
            _objc_retain(puVar6);
            _objc_retain(param_7);
            func_0x00010c0bc940(uVar13);
            _objc_release(uVar13);
            _objc_release(param_7);
            _objc_release(puVar6);
            _objc_release(param_7);
            _objc_release(puVar6);
            lVar12 = lVar12 + 1;
          } while (lVar7 != lVar12);
          lVar7 = lVar11;
          func_0x00010bf52a60();
        }
        _objc_release(lVar11);
        puVar8 = puVar14;
        func_0x00010bdc1c80();
        _objc_retainAutoreleasedReturnValue();
        if (param_5 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined8 *)(param_5 + 0x18);
        }
        _objc_retain(uVar13);
        puVar3 = puVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        _objc_release(puVar8);
        if (puVar3 == (undefined *)0x0) {
          *param_6 = *param_6 | 0x200;
          _objc_release(param_7);
          _objc_release(puVar6);
          goto LAB_1085888f8;
        }
        if (param_5 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined8 *)(param_5 + 0x18);
        }
        _objc_retain(uVar13);
        func_0x00010befb2e0(param_3);
        _objc_release(uVar13);
        _objc_release(puVar3);
        _objc_release(param_7);
        _objc_release(puVar6);
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar9);
      puVar9 = puVar4;
      func_0x00010bf52a60();
      param_7 = puVar10;
    }
LAB_1085888f8:
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(lVar15);
    _objc_release(param_4);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
    param_4 = puVar4;
LAB_10858897c:
    uVar13 = 0;
  } while( true );
}



/* Entry: 10858898c; end: 108588aff;  */

void FUN_10858898c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [48];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c074fe0();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if ((int)uVar1 == 0) goto LAB_108588ae0;
  uVar1 = param_2;
  func_0x00010c0f5800(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (puVar2 == (undefined *)0x0) goto LAB_108588ae0;
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_retain(0);
LAB_108588a44:
    lVar4 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
    _objc_retain(lVar4);
    if (lVar4 == 0) goto LAB_108588a44;
    func_0x00010bdc1140(&uStack_88,lVar4);
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_retain(0);
LAB_108588a80:
    lVar5 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
    _objc_retain(lVar5);
    if (lVar5 == 0) goto LAB_108588a80;
    func_0x00010bdc1140(&uStack_a0,lVar5);
  }
  _CMTimeRangeMake(auStack_70,&uStack_88,&uStack_a0);
  func_0x00010c297240(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_108588ae0:
  _objc_release(param_2);
  return;
}



/* Entry: 108588b00; end: 108588b03;  */

void FUN_108588b00(void)

{
  return;
}



/* Entry: 108588b04; end: 108588c5f;  */

void FUN_108588b04(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [48];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    **(ulong **)(param_1 + 0x38) = **(ulong **)(param_1 + 0x38) | 0x20;
    goto LAB_108588c44;
  }
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      _objc_retain(0);
LAB_108588b8c:
      lVar2 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
      _objc_retain(lVar2);
      if (lVar2 == 0) goto LAB_108588b8c;
      func_0x00010bdc1140(&uStack_48,lVar2);
    }
    _objc_release(lVar2);
  }
  else {
    _CMTimeMakeWithSeconds(&uStack_48,0x3ff0000000000000,600);
  }
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (*(long *)(param_1 + 0x20) == 0) {
    _objc_retain(0);
LAB_108588bd8:
    lVar2 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
    _objc_retain(lVar2);
    if (lVar2 == 0) goto LAB_108588bd8;
    func_0x00010bdc1140(&uStack_90,lVar2);
  }
  uStack_a8 = uStack_40;
  uStack_b0 = uStack_48;
  uStack_a0 = uStack_38;
  _CMTimeRangeMake(auStack_78,&uStack_90,&uStack_b0);
  func_0x00010c297240(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar1);
LAB_108588c44:
  _objc_release(param_2);
  return;
}



/* Entry: 108588c60; end: 108588ee7; -[SCNGSMEVideoAssetMutator _updateZeroDurationRenderEffectDags:] */

void FUN_108588c60(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
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
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d3c80();
  uVar7 = param_3;
  func_0x00010bf529e0();
  if (uVar7 != 0) {
    uVar7 = 0;
    uVar14 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar13 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    do {
      uVar2 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 == 0) {
        _objc_retain();
LAB_108588d00:
        lVar8 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        lVar8 = *(long *)(uVar2 + 8);
        _objc_retain(lVar8);
        if (lVar8 == 0) goto LAB_108588d00;
        func_0x00010bdc1120(&uStack_a0,lVar8);
      }
      _objc_release(lVar8);
      uStack_c8 = uStack_80;
      uStack_d0 = uStack_88;
      uStack_c0 = uStack_78;
      puVar3 = &uStack_d0;
      uStack_100 = uVar13;
      uStack_f8 = uVar14;
      uStack_f0 = uVar6;
      _CMTimeCompare(puVar3,&uStack_100);
      if ((int)puVar3 == 0) {
        _CMTimeMakeWithSeconds(&uStack_100,0x3ff0000000000000,600);
        uStack_128 = uStack_98;
        uStack_130 = uStack_a0;
        uStack_120 = uStack_90;
        _CMTimeRangeMake(&uStack_d0,&uStack_130,&uStack_100);
        puVar4 = PTR_PTR_1126bf6b8;
        _objc_alloc(PTR_PTR_1126bf6b8);
        uStack_f8 = uStack_c8;
        uStack_100 = uStack_d0;
        uStack_e8 = uStack_b8;
        uStack_f0 = uStack_c0;
        uStack_d8 = uStack_a8;
        uStack_e0 = uStack_b0;
        puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297240(PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        if (uVar2 == 0) {
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          _objc_retain(0);
          _objc_retain(0);
          uVar10 = 0;
          uVar11 = 0;
          uVar9 = 0;
          uVar12 = 0;
        }
        else {
          uStack_f8 = *(undefined8 *)(uVar2 + 0x40);
          uStack_100 = *(undefined8 *)(uVar2 + 0x38);
          uStack_e8 = *(undefined8 *)(uVar2 + 0x50);
          uStack_f0 = *(undefined8 *)(uVar2 + 0x48);
          uStack_d8 = *(undefined8 *)(uVar2 + 0x60);
          uStack_e0 = *(undefined8 *)(uVar2 + 0x58);
          uStack_118 = *(undefined8 *)(uVar2 + 0x80);
          uStack_120 = *(undefined8 *)(uVar2 + 0x78);
          uStack_108 = *(undefined8 *)(uVar2 + 0x90);
          uStack_110 = *(undefined8 *)(uVar2 + 0x88);
          uStack_128 = *(undefined8 *)(uVar2 + 0x70);
          uStack_130 = *(undefined8 *)(uVar2 + 0x68);
          uVar11 = *(undefined8 *)(uVar2 + 0x10);
          uVar9 = *(undefined8 *)(uVar2 + 0x18);
          _objc_retain(uVar9);
          uVar10 = *(undefined8 *)(uVar2 + 0x20);
          _objc_retain(uVar10);
          uVar12 = *(undefined8 *)(uVar2 + 0x28);
        }
        _objc_retain(uVar12);
        func_0x00010b7432f8(puVar4,puVar5,&uStack_100,&uStack_130,uVar11,uVar9,uVar10,uVar12,0);
        _objc_release(uVar12);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(puVar5);
        func_0x00010c1d04c0(uVar1);
        _objc_release(puVar4);
      }
      _objc_release(uVar2);
      uVar7 = uVar7 + 1;
      uVar2 = param_3;
      func_0x00010bf529e0();
    } while (uVar7 < uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108588ee8; end: 108588f5b; -[SCGrapheneNgsmePlayerMetric2 init] */

undefined1 * FUN_108588ee8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fcd98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108588f5c; end: 108588fd3;  */

void FUN_108588f5c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a55e08,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 108588fd4; end: 10858904b;  */

void FUN_108588fd4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a55e58,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10858904c; end: 1085891b7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10858904c(uint param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if ((param_1 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee3ad8);
  }
  if ((param_1 >> 1 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee3af8);
  }
  if ((param_1 >> 2 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee3b18);
  }
  if ((param_1 >> 3 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee3b38);
  }
  if ((param_1 >> 4 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee3b58);
  }
  if ((param_1 >> 5 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110e29738);
  }
  if ((param_1 >> 6 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee3b78);
  }
  if ((param_1 >> 7 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee3b98);
  }
  if ((param_1 >> 8 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee3bb8);
  }
  if ((param_1 >> 9 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee3bd8);
  }
  if ((param_1 >> 10 & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee3bf8);
  }
  if ((param_1 >> 0xb & 1) != 0) {
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee3c18);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085891b8; end: 1085894ab; -[SCMediaTranscodingLogger initWithPerformer:userBlizzardLogger:performanceAutomationLogger:notificationServices:grapheneRegistry:applicationLifecycleEvents:logVideoTranscodeErrorTypeEnabled:logFrameStatisticsEnabled:] */

undefined8 *
FUN_1085891b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_78 = PTR_PTR_1126fcda0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x41) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0x42) = param_9._1_1_;
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar4 = puVar1[7];
    puVar1[7] = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_88,puVar1);
    uVar4 = param_8;
    func_0x00010bf75dc0(param_8);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1085894ac;
    puStack_98 = &UNK_110846510;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = param_8;
    func_0x00010c2a6420(param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1085894ac; end: 10858951b;  */

void FUN_1085894ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10858951c; end: 1085897f3; -[SCMediaTranscodingLogger startCameraVideoTranscodingLoggingWithTaskId:captureSessionId:snapSessionId:clientMessageId:inputVideoDurationMS:inputMediaFormat:inputResolution:inputFileSize:inputVideoBitrate:mediaSource:mediaDestination:mediaQualityLevel:numSegments:segmentIndex:segmentTimeRange:lensIds:spotlightModes:playbackRateMultiplier:inputHasAudio:inputAudioBitrate:snapIsMuted:keyframeInterval:inputFrameRate:inputAudioChannels:inputIsHDR:snapSource:mediaOrchestrationId:] */

void FUN_10858951c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 *param_20,
                  undefined8 param_21,undefined8 param_22,undefined1 param_23,undefined4 param_24,
                  undefined8 param_25,undefined1 param_26,undefined4 param_27,undefined8 param_28,
                  undefined8 param_29,undefined1 param_30,undefined4 param_31,undefined8 param_32,
                  undefined8 param_33)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  
  uVar2 = param_13;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_5 + 8);
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_1085897f4;
  puStack_190 = &UNK_110a55ea8;
  uStack_110 = param_14;
  uStack_118 = param_13;
  uStack_100 = param_16;
  uStack_108 = param_15;
  uStack_f0 = param_18;
  uStack_f8 = param_17;
  uStack_e8 = param_19;
  uStack_a8 = param_20[3];
  uStack_b0 = param_20[2];
  uStack_98 = param_20[5];
  uStack_a0 = param_20[4];
  uStack_b8 = param_20[1];
  uStack_c0 = *param_20;
  uStack_168 = param_21;
  uStack_160 = param_22;
  uStack_8c = param_23;
  uStack_8b = param_26;
  uStack_d8 = param_25;
  uStack_d0 = param_28;
  uStack_c8 = param_29;
  uStack_8a = param_30;
  uStack_150 = param_32;
  uStack_148 = param_33;
  uStack_188 = param_7;
  uStack_180 = param_8;
  uStack_178 = param_9;
  uStack_170 = param_12;
  uStack_158 = param_10;
  lStack_140 = param_5;
  uStack_138 = uVar2;
  uStack_130 = param_11;
  uStack_128 = param_1;
  uStack_120 = param_2;
  uStack_e0 = param_3;
  uStack_90 = param_4;
  _objc_retain(param_33);
  _objc_retain(param_32);
  _objc_retain(param_10);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1,param_6,&puStack_1a8);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(uStack_178);
  _objc_release(uStack_180);
  _objc_release(uStack_188);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_10);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 1085897f4; end: 1085899e7;  */

void FUN_1085897f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_PTR_1126da1f0;
  _objc_alloc(PTR_PTR_1126da1f0);
  func_0x00010c050e40();
  func_0x00010c209a80(*(undefined8 *)(param_1 + 0x70));
  func_0x00010c179280(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c205660(puVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010c1ad740(puVar1,param_2,1);
  func_0x00010c1ad720(puVar1,param_2,*(undefined8 *)(param_1 + 0x78));
  func_0x00010c1ad4e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c1ad620(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),puVar1);
  func_0x00010c1ad340(puVar1,param_2,*(undefined8 *)(param_1 + 0x90));
  func_0x00010c1ad700(puVar1,param_2,*(undefined8 *)(param_1 + 0x98));
  func_0x00010c1c52c0(puVar1,param_2,*(undefined8 *)(param_1 + 0xa0));
  func_0x00010c1c44c0(puVar1,param_2,*(undefined8 *)(param_1 + 0xa8));
  func_0x00010c1c5060(puVar1,param_2,*(undefined8 *)(param_1 + 0xb0));
  func_0x00010c1cf3a0(puVar1,param_2,*(undefined8 *)(param_1 + 0xb8));
  func_0x00010c1faa60(puVar1,param_2,*(undefined8 *)(param_1 + 0xc0));
  func_0x00010c1bbdc0(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  uStack_38 = *(undefined8 *)(param_1 + 0xf0);
  uStack_40 = *(undefined8 *)(param_1 + 0xe8);
  uStack_30 = *(undefined8 *)(param_1 + 0xf8);
  _CMTimeGetSeconds(&uStack_40);
  func_0x00010c1fab00(puVar1);
  uStack_38 = *(undefined8 *)(param_1 + 0x108);
  uStack_40 = *(undefined8 *)(param_1 + 0x100);
  uStack_30 = *(undefined8 *)(param_1 + 0x110);
  _CMTimeGetSeconds(&uStack_40);
  func_0x00010c1faa00(puVar1);
  func_0x00010c208880(puVar1,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010c1dd7e0(*(undefined8 *)(param_1 + 200),puVar1);
  func_0x00010c1ad760(puVar1,param_2,*(undefined1 *)(param_1 + 0x11c));
  func_0x00010c1ad1a0(puVar1,param_2,*(undefined8 *)(param_1 + 0xd0));
  func_0x00010c17cda0(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010c2048e0(puVar1,param_2,*(undefined1 *)(param_1 + 0x11d));
  func_0x00010c1b6f40(puVar1,param_2,*(undefined8 *)(param_1 + 0xd8));
  func_0x00010c1ad380(*(undefined4 *)(param_1 + 0x118),puVar1);
  func_0x00010c1ad1c0(puVar1,param_2,*(undefined8 *)(param_1 + 0xe0));
  func_0x00010c1ad440(puVar1,param_2,*(undefined1 *)(param_1 + 0x11e));
  func_0x00010c2056c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x00010c1c4c60(puVar1,param_2,*(undefined8 *)(param_1 + 0x60));
  func_0x00010bdc8900(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
  func_0x00010be50c60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
  func_0x00010be54680(*(undefined8 *)(param_1 + 0x68),param_2,0,*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xa8),
                      &PTR____CFConstantStringClassReference_110e65f18);
  _objc_release(puVar1);
  return;
}



/* Entry: 1085899e8; end: 108589d03; -[SCMediaTranscodingLogger startCameraVideoTranscodingMultipleInputLoggingWithTaskId:captureSessionId:snapSessionId:clientMessageId:inputVideoFilesNumber:inputVideoTotalDurationMS:inputTotalFileSize:inputMediaFormat:inputResolution:inputVideoBitrate:mediaSource:mediaDestination:mediaQualityLevel:numSegments:segmentIndex:segmentTimeRange:lensIds:spotlightModes:playbackRateMultiplier:hasAudioMixing:inputHasAudio:inputAudioBitrate:inputAudioChannels:snapIsMuted:keyframeInterval:inputFrameRate:isORT:inputIsHDR:snapSource:mediaOrchestrationId:] */

void FUN_1085899e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 *param_21,undefined8 param_22,undefined8 param_23,undefined1 param_24,
                  undefined4 param_25,undefined8 param_26,undefined8 param_27,undefined1 param_28,
                  undefined4 param_29,undefined8 param_30,undefined1 param_31,undefined4 param_32,
                  undefined8 param_33,undefined8 param_34)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
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
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined1 uStack_92;
  undefined1 uStack_91;
  
  uVar2 = param_15;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_14);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_5 + 8);
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_108589d04;
  puStack_1a0 = &UNK_110a55ed8;
  uStack_130 = param_19;
  uStack_128 = param_20;
  uStack_c0 = param_21[1];
  uStack_c8 = *param_21;
  uStack_b0 = param_21[3];
  uStack_b8 = param_21[2];
  uStack_a0 = param_21[5];
  uStack_a8 = param_21[4];
  uStack_120 = param_13;
  uStack_178 = param_22;
  uStack_170 = param_14;
  uStack_100 = param_16;
  uStack_108 = param_15;
  uStack_f8 = param_17;
  uStack_f0 = param_18;
  uStack_94 = param_24;
  uStack_d8 = param_27;
  uStack_e0 = param_26;
  uStack_92 = param_28;
  uStack_d0 = param_30;
  uStack_91 = param_31;
  uStack_168 = param_23;
  uStack_160 = param_33;
  uStack_158 = param_34;
  uStack_198 = param_7;
  uStack_190 = param_8;
  uStack_188 = param_9;
  uStack_180 = param_10;
  lStack_150 = param_5;
  uStack_148 = uVar2;
  uStack_140 = param_11;
  uStack_138 = param_12;
  uStack_118 = param_1;
  uStack_110 = param_2;
  uStack_e8 = param_3;
  uStack_98 = param_4;
  _objc_retain();
  _objc_retain(param_33);
  _objc_retain(param_23);
  _objc_retain(param_14);
  _objc_retain(param_22);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1,param_6,&puStack_1b8);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(uStack_178);
  _objc_release(uStack_180);
  _objc_release(uStack_188);
  _objc_release(uStack_190);
  _objc_release(uStack_198);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_23);
  _objc_release(param_14);
  _objc_release(param_22);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 108589d04; end: 108589f27;  */

void FUN_108589d04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_PTR_1126da1f0;
  _objc_alloc(PTR_PTR_1126da1f0);
  func_0x00010c050e40();
  func_0x00010c209a80(*(undefined8 *)(param_1 + 0x70));
  func_0x00010c179280(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c205660(puVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010c17cda0(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c1ad740(puVar1,param_2,*(undefined8 *)(param_1 + 0x78));
  func_0x00010c1ad720(puVar1,param_2,*(undefined8 *)(param_1 + 0x80));
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 < 2) {
    lVar2 = 1;
  }
  func_0x00010c1cf3a0(puVar1,param_2,lVar2);
  func_0x00010c1faa60(puVar1,param_2,*(undefined8 *)(param_1 + 0x90));
  uStack_38 = *(undefined8 *)(param_1 + 0xf8);
  uStack_40 = *(undefined8 *)(param_1 + 0xf0);
  uStack_30 = *(undefined8 *)(param_1 + 0x100);
  _CMTimeGetSeconds(&uStack_40);
  func_0x00010c1fab00(puVar1);
  uStack_38 = *(undefined8 *)(param_1 + 0x110);
  uStack_40 = *(undefined8 *)(param_1 + 0x108);
  uStack_30 = *(undefined8 *)(param_1 + 0x118);
  _CMTimeGetSeconds(&uStack_40);
  func_0x00010c1faa00(puVar1);
  func_0x00010c1ad340(puVar1,param_2,*(undefined8 *)(param_1 + 0x98));
  func_0x00010c1bbdc0(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010c1ad4e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010c1ad620(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),puVar1);
  func_0x00010c1ad700(puVar1,param_2,*(undefined8 *)(param_1 + 0xb0));
  func_0x00010c1c52c0(puVar1,param_2,*(undefined8 *)(param_1 + 0xb8));
  func_0x00010c1c44c0(puVar1,param_2,*(undefined8 *)(param_1 + 0xc0));
  func_0x00010c1c5060(puVar1,param_2,*(undefined8 *)(param_1 + 200));
  func_0x00010c208880(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010c1dd7e0(*(undefined8 *)(param_1 + 0xd0),puVar1);
  func_0x00010c1a5920(puVar1,param_2,*(undefined1 *)(param_1 + 0x124));
  func_0x00010c1ad760(puVar1,param_2,*(undefined1 *)(param_1 + 0x125));
  func_0x00010c1ad1a0(puVar1,param_2,*(undefined8 *)(param_1 + 0xd8));
  func_0x00010c1ad1c0(puVar1,param_2,*(undefined8 *)(param_1 + 0xe0));
  func_0x00010c17cda0(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c2048e0(puVar1,param_2,*(undefined1 *)(param_1 + 0x126));
  func_0x00010c1b6f40(puVar1,param_2,*(undefined8 *)(param_1 + 0xe8));
  func_0x00010c1ad380(*(undefined4 *)(param_1 + 0x120),puVar1);
  func_0x00010c1b2e80(puVar1,param_2,*(undefined1 *)(param_1 + 0x127));
  func_0x00010c1ad440(puVar1,param_2,*(undefined1 *)(param_1 + 0x128));
  func_0x00010c2056c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x00010c1c4c60(puVar1,param_2,*(undefined8 *)(param_1 + 0x60));
  func_0x00010bdc8900(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
  func_0x00010be50c60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
  func_0x00010be54680(*(undefined8 *)(param_1 + 0x68),param_2,0,*(undefined8 *)(param_1 + 0xb8),
                      *(undefined8 *)(param_1 + 0xc0),
                      &PTR____CFConstantStringClassReference_110ee3c38);
  _objc_release(puVar1);
  return;
}



/* Entry: 108589f28; end: 108589f7b; -[SCMediaTranscodingLogger stopCameraVideoTranscodingLoggingStatusSuccessWithTaskId:clientMessageId:reasons:imageProcessCommandsInfo:outputVideoDurationMS:outputVideoTrackDurationMS:outputAudioTrackDurationMS:outputMediaFormat:outputResolution:outputFileSize:outputVideoBitrate:outputHasAudio:outputOverlayFileSize:outputFrameRate:imageProcessingError:retryCount:captureSessionId:] */

void FUN_108589f28(void)

{
  func_0x00010c255d00();
  return;
}



/* Entry: 108589f7c; end: 10858a18f; -[SCMediaTranscodingLogger stopCameraVideoTranscodingMultipleOutputLoggingStatusSuccessWithTaskId:clientMessageId:reasons:imageProcessCommandsInfo:outputVideoDurationMS:outputVideoTrackDurationMS:outputAudioTrackDurationMS:outputMediaFormat:outputResolution:outputFileSize:outputVideoBitrate:outputHasAudio:outputOverlayFileSize:outputFrameRate:keyframeInterval:outputVideoFilesNumber:outputVideoFileIndex:imageProcessingError:retryCount:captureSessionId:] */

void FUN_108589f7c(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
                  undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  
  uVar2 = param_20;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_13);
  _objc_retain(param_22);
  _objc_retain(param_24);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_4 + 8);
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_10858a190;
  puStack_140 = &UNK_110a55f08;
  uStack_e0 = param_12;
  uStack_120 = param_13;
  uStack_c8 = param_14;
  uStack_c0 = param_15;
  uStack_8c = param_16;
  uStack_b8 = param_18;
  uStack_a8 = param_21;
  uStack_b0 = param_20;
  uStack_118 = param_22;
  uStack_a0 = param_19;
  uStack_98 = param_23;
  uStack_108 = param_24;
  lStack_138 = param_4;
  uStack_130 = param_6;
  uStack_128 = param_9;
  uStack_110 = param_7;
  uStack_100 = uVar2;
  uStack_f8 = param_8;
  uStack_f0 = param_10;
  uStack_e8 = param_11;
  uStack_d8 = param_1;
  uStack_d0 = param_2;
  uStack_90 = param_3;
  _objc_retain(param_24);
  _objc_retain(param_7);
  _objc_retain(param_22);
  _objc_retain(param_13);
  _objc_retain(param_9);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1,param_5,&puStack_158);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(param_24);
  _objc_release(param_7);
  _objc_release(param_22);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_6);
  return;
}



/* Entry: 10858a190; end: 10858a37b;  */

void FUN_10858a190(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010be23460(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126da1f0;
  _objc_opt_class(PTR_PTR_1126da1f0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c251040(uVar2);
    func_0x00010becdc20(uVar5);
    func_0x00010c20bfa0(*(undefined8 *)(param_1 + 0x58),uVar2);
    func_0x00010c219740(uVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    FUN_10858904c(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219680(uVar2);
    _objc_release(uVar5);
    func_0x00010c1aa760(uVar2);
    func_0x00010c1d7240(uVar2);
    func_0x00010c1d72c0(uVar2);
    func_0x00010c1d6ea0(uVar2);
    func_0x00010c1d7080(uVar2);
    func_0x00010c1d7140(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),uVar2);
    func_0x00010c1d6fa0(uVar2);
    func_0x00010c1d7220(uVar2);
    func_0x00010c1d72a0(uVar2);
    func_0x00010c1d70e0(uVar2);
    func_0x00010c1d7020(*(undefined4 *)(param_1 + 200),uVar2);
    func_0x00010c1d7280(uVar2);
    func_0x00010c1d7260(uVar2);
    if (*(long *)(param_1 + 0xb8) != 0) {
      func_0x00010c1b6f40(uVar2);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf6e340(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa7a0(uVar2);
    _objc_release(uVar5);
    func_0x00010c17cda0(uVar2);
    func_0x00010c1ed9a0(uVar2);
    func_0x00010c179280(uVar2);
    func_0x00010be50980(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be59e40(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be8d980(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10858a37c; end: 10858a3af; -[SCMediaTranscodingLogger stopCameraVideoTranscodingLoggingStatusFailedWithTaskId:imageProcessCommandsInfo:error:imageProcessingError:retryCount:] */

void FUN_10858a37c(void)

{
  func_0x00010c255ce0();
  return;
}


