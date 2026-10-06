/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad7824c; end: 10ad78737; +[LSAAssetFactory audioPlayerWithPath:error:] */

void FUN_10ad7824c(undefined *param_1,undefined8 param_2,undefined *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **unaff_x26;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_4 == (long *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar7);
  }
  puVar7 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  puVar4 = puVar7;
  _strlen();
  puVar8 = puVar7;
  func_0x00010a1512bc(puVar7,puVar4);
  if (((ulong)puVar8 & 1) == 0) {
    puVar7 = PTR__OBJC_CLASS___AVAudioPlayer_1126bdec8;
    _objc_alloc(PTR__OBJC_CLASS___AVAudioPlayer_1126bdec8);
    param_1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010c0040c0(puVar7);
    _objc_release(param_1);
    goto LAB_10ad784fc;
  }
  func_0x00010bed03a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x00010ae06f08(0,1,&UNK_10f6aa570,&UNK_10f6aa6a5,0x58,&UNK_10f6aa6d3);
    }
    puVar4 = (undefined *)0x0;
    goto LAB_10ad784f4;
  }
  unaff_x26 = &PTR_PTR_1126bd000;
  puVar7 = PTR__OBJC_CLASS___AVAudioPlayer_1126bdec8;
  _objc_alloc(PTR__OBJC_CLASS___AVAudioPlayer_1126bdec8);
  func_0x00010c008360();
  puVar4 = puVar7;
  if (param_4 == (long *)0x0) goto LAB_10ad784e4;
  lVar2 = *param_4;
  if (lVar2 == 0) goto LAB_10ad784e4;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  if ((int)lVar3 == 0) {
    _objc_release(lVar2);
    goto LAB_10ad7846c;
  }
  lVar3 = *param_4;
  func_0x00010bf3ec40();
  _objc_release(lVar2);
  if (lVar3 != 0x7479703f) goto LAB_10ad7846c;
  if ((bRam00000001137ecf00 & 1) == 0) goto LAB_10ad78594;
LAB_10ad78358:
  puVar8 = (undefined *)0x0;
  do {
    puVar4 = puRam00000001137ecef8;
    func_0x00010bf529e0();
    if (puVar4 <= puVar8) goto LAB_10ad7846c;
    puVar4 = unaff_x26[0x1d9];
    _objc_alloc();
    puVar5 = puRam00000001137ecef8;
    func_0x00010c0dfd40(puRam00000001137ecef8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0083a0();
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar7 = (undefined *)0x0;
    puVar8 = puVar8 + 1;
  } while (puVar4 == (undefined *)0x0);
  goto LAB_10ad784e4;
LAB_10ad7846c:
  puVar4 = puVar7;
  if ((bRam000000011330a9e8 & 1) != 0) {
    _objc_retainAutorelease(param_3);
    func_0x00010bdc3520();
    lVar2 = *param_4;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x00010ae06f08(0,1,&UNK_10f6aa570,&UNK_10f6aa6a5,0x78,&UNK_10f6aa70d);
    _objc_release(lVar2);
  }
LAB_10ad784e4:
  _objc_retain(puVar4);
  _objc_release(puVar4);
LAB_10ad784f4:
  _objc_release(param_1);
LAB_10ad784fc:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
LAB_10ad78594:
  iVar1 = 0x137ecf00;
  ___cxa_guard_acquire();
  if (iVar1 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puRam00000001137ecef8 = puVar4;
    ___cxa_guard_release(0x1137ecf00);
  }
  goto LAB_10ad78358;
}



/* Entry: 10ad78738; end: 10ad78a9f; +[LSAAssetFactory videoPlayerAssetWithPath:] */

undefined1 *
FUN_10ad78738(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  puVar2 = puVar1;
  _strlen();
  puVar9 = puVar1;
  func_0x00010a1512bc(puVar1,puVar2);
  if (((ulong)puVar9 & 1) == 0) {
    puVar1 = param_3;
    func_0x00010c0f58c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x0) {
      uStack_78 = *(undefined8 *)PTR__AVURLAssetPreferPreciseDurationAndTimingKey_1103480f8;
      puStack_70 = PTR____kCFBooleanTrue_11034ab68;
      param_1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bfad300();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      param_4 = param_1;
      func_0x00010bdc2c00(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(param_1);
      goto LAB_10ad78998;
    }
  }
  puVar2 = param_3;
  func_0x00010bed03a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      puVar9 = param_3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      puVar2 = &UNK_10f6aa570;
      param_4 = &UNK_10f6aa757;
      puStack_80 = puVar9;
      func_0x00010ae06f08(0,1,&UNK_10f6aa570,&UNK_10f6aa757,0x87,&UNK_10f6aa784);
    }
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126de088;
    _objc_alloc();
    func_0x00010c0084a0();
    puVar3 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
    func_0x00010c1f6900();
    puVar4 = puVar3;
    func_0x00010bdc2b80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126de090;
    func_0x00010bdc2c20(PTR_PTR_1126de090);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010c13b360();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined *)0x21;
    _dispatch_get_global_queue(0x21,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    param_4 = puVar6;
    func_0x00010c18b640(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
LAB_10ad78998:
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_release(param_1);
  _objc_release(param_3);
  puVar9 = puVar3;
  __Unwind_Resume();
  ppuVar7 = &puStack_c0;
  pcStack_88 = FUN_10ad78aa0;
  puStack_b0 = puVar3;
  puStack_a8 = puVar1;
  puStack_a0 = param_1;
  puStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(param_4);
  puStack_b8 = PTR_PTR_112701288;
  puStack_c0 = puVar9;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_init_1125d9248);
  if (ppuVar7 != (undefined **)0x0) {
    _objc_retain(puVar2);
    uVar8 = *(undefined8 *)((long)ppuVar7 + 8);
    *(undefined **)((long)ppuVar7 + 8) = puVar2;
    _objc_release(uVar8);
    _objc_retain(param_4);
    uVar8 = *(undefined8 *)((long)ppuVar7 + 0x10);
    *(undefined **)((long)ppuVar7 + 0x10) = param_4;
    _objc_release(uVar8);
  }
  _objc_release(param_4);
  _objc_release(puVar2);
  return (undefined1 *)ppuVar7;
}



/* Entry: 10ad78aa0; end: 10ad78b43; -[LSAAssetResourceLoaderStreamDelegate initWithData:path:] */

undefined1 *
FUN_10ad78aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701288;
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



/* Entry: 10ad78b44; end: 10ad78f6b; -[LSAAssetResourceLoaderStreamDelegate resourceLoader:shouldWaitForLoadingOfRequestedResource:] */

undefined * FUN_10ad78b44(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf4c7a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) goto LAB_10ad78d34;
  lVar2 = param_4;
  func_0x00010bf4c7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4c940();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) goto LAB_10ad78d34;
  func_0x00010c08fa60(*(undefined8 *)(param_1 + 8));
  lVar1 = param_4;
  func_0x00010bf4c7a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182140();
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bf4c7a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174ca0();
  _objc_release(lVar1);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0f58c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  _CFStringGetLength();
  if (lVar1 < 1) {
    _CFRelease(lVar2);
LAB_10ad78c78:
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6aa8a7,&UNK_10f6aa8ee,0x2e,&UNK_10f6aa94e);
    }
    lVar3 = *(long *)PTR__kUTTypeMPEG4_11034b1e8;
    lVar1 = 0;
  }
  else {
    lVar3 = *(long *)PTR__kUTTagClassFilenameExtension_11034b1a8;
    _UTTypeCreatePreferredIdentifierForTag(lVar3,lVar2,0);
    _CFRelease(lVar2);
    lVar1 = lVar3;
    if (lVar3 == 0) goto LAB_10ad78c78;
  }
  _objc_retain(lVar3);
  _objc_release(lVar1);
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x00010ae06f08(1,4,&UNK_10f6aa8a7,&UNK_10f6aa8ee,0x32,&UNK_10f6aa995);
  }
  lVar1 = param_4;
  func_0x00010bf4c7a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a00();
  _objc_release(lVar1);
  _objc_release(lVar3);
LAB_10ad78d34:
  lVar1 = param_4;
  func_0x00010bf64280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1372a0();
  lVar3 = param_4;
  func_0x00010bf64280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c137280();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if ((lVar2 == 0) && (lVar5 == 0x7fffffffffffffff)) {
    puVar4 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    _NSStringFromRange(0,0x7fffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010bfd11c0(puVar4);
    _objc_release(lVar1);
    _objc_release(puVar4);
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010c08fa60();
  }
  uVar6 = *(ulong *)(param_1 + 8);
  func_0x00010c08fa60();
  if (uVar6 < (ulong)(lVar5 + lVar2)) {
    func_0x00010c137380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf660a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _NSStringFromRange(lVar2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9aa60();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_release(puVar8);
    _objc_release(lVar2);
    _objc_exception_throw(puVar4);
    _objc_storeStrong(puVar4 + 0x10,0);
    puVar4 = puVar4 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(puVar4,0);
    return puVar4;
  }
  lVar1 = param_4;
  func_0x00010bf64280(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25eac0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b6c0(lVar1);
  _objc_release(uVar7);
  _objc_release(lVar1);
  func_0x00010bfaf920(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined *)0x1;
}



/* Entry: 10ad78f6c; end: 10ad78f9b; -[LSAAssetResourceLoaderStreamDelegate .cxx_destruct] */

void FUN_10ad78f6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad78f9c; end: 10ad78fb7; -[LSAAudioMixProcessing sampleRate] */

int FUN_10ad78f9c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    return (int)*(double *)(*(long *)(param_1 + 0x10) + 8);
  }
  return 0;
}



/* Entry: 10ad78fb8; end: 10ad78fcf; -[LSAAudioMixProcessing numChannels] */

undefined4 FUN_10ad78fb8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10);
  }
  return 0;
}



/* Entry: 10ad78fd0; end: 10ad7903b; -[LSAAudioMixProcessing initWithAudioAssetTrack:processCallback:] */

long FUN_10ad78fd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x18) = *param_4;
  func_0x0001092b2a94(param_1 + 0x20,param_4 + 1);
  return param_1;
}



/* Entry: 10ad7903c; end: 10ad791eb; -[LSAAudioMixProcessing audioMix] */

void FUN_10ad7903c(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puStack_c8;
  undefined8 uStack_80;
  undefined4 uStack_74;
  long lStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_1 + 0x58);
  if (lVar7 == 0) {
    puVar2 = PTR__OBJC_CLASS___AVMutableAudioMix_1126bf588;
    func_0x00010bf0f320();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      param_3 = *(undefined8 **)(param_1 + 8);
      unaff_x21 = PTR__OBJC_CLASS___AVMutableAudioMixInputParameters_1126bf590;
      func_0x00010bf0f3c0();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x21 != (undefined *)0x0) {
        uStack_74 = 0;
        pcStack_68 = FUN_10ad791ec;
        pcStack_60 = FUN_10ad79328;
        pcStack_58 = FUN_10ad7939c;
        pcStack_50 = FUN_10ad794b0;
        pcStack_48 = FUN_10ad794cc;
        iVar1 = (int)*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
        param_2 = &uStack_74;
        param_3 = (undefined8 *)0x1;
        lStack_70 = param_1;
        _MTAudioProcessingTapCreate();
        if (iVar1 == 0) {
          func_0x00010c16c4a0(unaff_x21);
          _CFRelease(uStack_80);
          unaff_x22 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_40 = unaff_x21;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          param_3 = unaff_x22;
          func_0x00010c1ad580(puVar2);
          _objc_release(unaff_x22);
          _objc_retain(puVar2);
          uVar3 = *(undefined8 *)(param_1 + 0x58);
          *(undefined **)(param_1 + 0x58) = puVar2;
          _objc_release(uVar3);
        }
      }
      _objc_release(unaff_x21);
    }
    _objc_release(puVar2);
    lVar7 = *(long *)(param_1 + 0x58);
  }
  lVar4 = lVar7;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x22);
  _objc_release(unaff_x21);
  _objc_release(lVar7);
  __Unwind_Resume(lVar4);
  puVar5 = (undefined8 *)0x18;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110c72048;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[10] = 0;
  puVar6[9] = 0;
  puVar6[0xc] = 0;
  puVar6[0xb] = 0;
  puVar6[0xd] = 0;
  puVar9 = puVar6 + 3;
  puVar6[4] = 0;
  *puVar9 = 0;
  puVar8 = puVar6 + 7;
  puVar6[8] = 0;
  *puVar8 = 0;
  puVar6[6] = FUN_10ac41034;
  *puVar8 = &PTR_DAT_110950c70;
  *puVar5 = puVar9;
  puVar5[1] = puVar6;
  puVar6[4] = 0x40e5888000000000;
  *(undefined4 *)(puVar6 + 5) = 1;
  _objc_retain(param_2);
  *(undefined8 **)(param_2 + 4) = puVar9;
  puVar6[6] = *(undefined8 *)(param_2 + 6);
  func_0x0001092b2a94(puVar8,param_2 + 8);
  *param_3 = puVar5;
  if (lRam00000001137ecf10 != -1) {
    func_0x000107c27d9c(0x1137ecf10,&PTR___NSConcreteGlobalBlock_110c72088);
  }
  puStack_c8 = puVar5;
  func_0x00010585dd64(uRam00000001137ecf08,&puStack_c8,&puStack_c8);
  _objc_release(param_2);
  return;
}



/* Entry: 10ad791ec; end: 10ad79327;  */

void FUN_10ad791ec(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puStack_48;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar2 = (undefined8 *)0x70;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110c72048;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[0xc] = 0;
  puVar2[0xb] = 0;
  puVar2[0xd] = 0;
  puVar4 = puVar2 + 3;
  puVar2[4] = 0;
  *puVar4 = 0;
  puVar3 = puVar2 + 7;
  puVar2[8] = 0;
  *puVar3 = 0;
  puVar2[6] = FUN_10ac41034;
  *puVar3 = &PTR_DAT_110950c70;
  *puVar1 = puVar4;
  puVar1[1] = puVar2;
  puVar2[4] = 0x40e5888000000000;
  *(undefined4 *)(puVar2 + 5) = 1;
  _objc_retain(param_2);
  *(undefined8 **)(param_2 + 0x10) = puVar4;
  puVar2[6] = *(undefined8 *)(param_2 + 0x18);
  func_0x0001092b2a94(puVar3,param_2 + 0x20);
  *param_3 = puVar1;
  if (lRam00000001137ecf10 != -1) {
    func_0x000107c27d9c(0x1137ecf10,&PTR___NSConcreteGlobalBlock_110c72088);
  }
  puStack_48 = puVar1;
  func_0x00010585dd64(uRam00000001137ecf08,&puStack_48,&puStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10ad79328; end: 10ad7939b;  */

void FUN_10ad79328(long param_1)

{
  long lStack_28;
  
  _MTAudioProcessingTapGetStorage();
  if (lRam00000001137ecf10 != -1) {
    func_0x000107c27d9c(0x1137ecf10,&PTR___NSConcreteGlobalBlock_110c72088);
  }
  lStack_28 = param_1;
  func_0x00010585de6c(uRam00000001137ecf08,&lStack_28);
  if (param_1 != 0) {
    FUN_10ad7981c(param_1);
    __ZdlPv();
  }
  return;
}



/* Entry: 10ad7939c; end: 10ad794af;  */

void FUN_10ad7939c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uStack_38;
  
  _MTAudioProcessingTapGetStorage();
  puVar2 = (undefined1 *)*param_1;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CMAudioFormatDescriptionCreate(uVar1,param_3,0,0,0,0,0,&uStack_38);
  if ((int)uVar1 == 0) {
    _CFRelease(uStack_38);
  }
  *(undefined8 *)(puVar2 + 8) = *param_3;
  *(undefined4 *)(puVar2 + 0x10) = 1;
  *puVar2 = 1;
  if (*(int *)(param_3 + 1) != 0x6c70636d) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6aaa9c,&UNK_10f6aaad5,0xb7,&UNK_10f6aab39);
    }
    *puVar2 = 0;
  }
  if ((*(byte *)((long)param_3 + 0xc) & 1) == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6aaa9c,&UNK_10f6aaad5,0xbb,&UNK_10f6aab95);
    }
    *puVar2 = 0;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 10ad794b0; end: 10ad794cb;  */

void FUN_10ad794b0(long param_1)

{
  _MTAudioProcessingTapGetStorage();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 10ad794cc; end: 10ad79783;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10ad794cc(undefined8 ******param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  char cVar3;
  long *plVar4;
  bool bVar5;
  undefined8 ******ppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 *****pppppuVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *******pppppppuStack_78;
  undefined8 *******pppppppuStack_70;
  undefined8 uStack_68;
  
  ppppppuVar6 = param_1;
  _MTAudioProcessingTapGetStorage();
  if (lRam00000001137ecf10 != -1) {
    func_0x000107c27d9c(0x1137ecf10,&PTR___NSConcreteGlobalBlock_110c72088);
  }
  pppppppuStack_70 = (undefined8 *******)0x0;
  uStack_68 = 0;
  plVar10 = puRam00000001137ecf08 + 1;
  plVar11 = (long *)*puRam00000001137ecf08;
  pppppppuStack_78 = &pppppppuStack_70;
  if (plVar11 != plVar10) {
    do {
      func_0x00010585df5c(&pppppppuStack_78,&pppppppuStack_70,plVar11 + 4,plVar11 + 4);
      plVar4 = (long *)plVar11[1];
      plVar12 = plVar11;
      if ((long *)plVar11[1] == (long *)0x0) {
        do {
          plVar11 = (long *)plVar12[2];
          bVar5 = (long *)*plVar11 != plVar12;
          plVar12 = plVar11;
        } while (bVar5);
      }
      else {
        do {
          plVar11 = plVar4;
          plVar4 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
      pppppppuVar7 = pppppppuStack_70;
    } while (plVar11 != plVar10);
    for (; pppppppuVar7 != (undefined8 *******)0x0; pppppppuVar7 = (undefined8 *******)*pppppppuVar7
        ) {
      if (pppppppuVar7[4] <= ppppppuVar6) {
        if (ppppppuVar6 <= pppppppuVar7[4]) {
          func_0x00010585e17c(&pppppppuStack_78);
          if (*(char *)(ppppppuVar6 + 2) != '\0') {
            return;
          }
          pppppuVar9 = *ppppppuVar6;
          pppppuVar2 = ppppppuVar6[1];
          if (pppppuVar2 != (undefined8 *****)0x0) {
            pppppuVar1 = pppppuVar2 + 1;
            do {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
              if (bVar5) {
                *pppppuVar1 = (undefined8 ****)((long)*pppppuVar1 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (*(char *)pppppuVar9 == '\0') {
            if ((bRam000000011330a9e8 & 1) != 0) {
              func_0x00010ae06f08(0,1,&UNK_10f6aaa9c,&UNK_10f6aabef,0xd9,&UNK_10f6aac88);
            }
          }
          else {
            _MTAudioProcessingTapGetSourceAudio(param_1,param_2,param_4,param_6,0,param_5);
            if ((int)param_1 == 0) {
              pppppppuStack_78 = (undefined8 *******)0x0;
              pppppppuStack_70 = (undefined8 *******)0x0;
              uStack_68 = 0;
              FUN_10a0ca588(&pppppppuStack_78,*(long *)(param_4 + 0x10),
                            *(long *)(param_4 + 0x10) + (ulong)(*(uint *)(param_4 + 0xc) >> 2) * 4);
              pppppuVar9 = pppppuVar9 + 3;
              (*(code *)*pppppuVar9)(&pppppppuStack_78,pppppuVar9);
              if (pppppppuStack_78 != (undefined8 *******)0x0) {
                pppppppuStack_70 = pppppppuStack_78;
                __ZdlPv();
              }
            }
            else if ((bRam000000011330a9e8 & 1) != 0) {
              func_0x00010ae06f08(0,1,&UNK_10f6aaa9c,&UNK_10f6aabef,0xe0,&UNK_10f6aacc3,param_7,
                                  param_8,param_1);
            }
          }
          if (pppppuVar2 == (undefined8 *****)0x0) {
            return;
          }
          pppppuVar9 = pppppuVar2 + 1;
          do {
            ppppuVar8 = *pppppuVar9;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppppuVar9,0x10);
            if (bVar5) {
              *pppppuVar9 = (undefined8 ****)((long)ppppuVar8 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppuVar8 != (undefined8 ****)0x0) {
            return;
          }
          (*(code *)(*pppppuVar2)[2])(pppppuVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar2);
          return;
        }
        pppppppuVar7 = pppppppuVar7 + 1;
      }
    }
  }
  func_0x00010585e17c(&pppppppuStack_78,pppppppuStack_70);
  return;
}



/* Entry: 10ad79784; end: 10ad797c3; -[LSAAudioMixProcessing .cxx_destruct] */

void FUN_10ad79784(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  (*(code *)**(undefined8 **)(param_1 + 0x20))((undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad797c4; end: 10ad797eb; -[LSAAudioMixProcessing .cxx_construct] */

void FUN_10ad797c4(long param_1)

{
  *(code **)(param_1 + 0x18) = FUN_10ac41034;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110950c70;
  return;
}



/* Entry: 10ad797ec; end: 10ad7980b;  */

void FUN_10ad797ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c72048;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad7980c; end: 10ad7981b;  */

void FUN_10ad7980c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad79814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x38))();
  return;
}



/* Entry: 10ad7981c; end: 10ad79873;  */

long FUN_10ad7981c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ad79874; end: 10ad798a3;  */

void FUN_10ad79874(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = puVar1 + 1;
  puRam00000001137ecf08 = puVar1;
  return;
}



/* Entry: 10ad798a4; end: 10ad7993f; -[LSALiveVideoStreamPlayer initWithUrl:] */

undefined1 * FUN_10ad798a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112701290;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFilepath__1125e2590,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21d340(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ad79940; end: 10ad7994f; -[LSALiveVideoStreamPlayer url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10ad79940(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112784104);
}



/* Entry: 10ad79950; end: 10ad7998f; -[LSALiveVideoStreamPlayer setUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad79950(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112784104;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ad79990; end: 10ad799a3; -[LSALiveVideoStreamPlayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad79990(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112784104,0);
  return;
}



/* Entry: 10ad799a4; end: 10ad7b00f;  */

void FUN_10ad799a4(undefined8 *param_1,long param_2,ulong *param_3,undefined8 *param_4,ulong param_5
                  )

{
  code **ppcVar1;
  undefined **ppuVar2;
  long *plVar3;
  ulong uVar4;
  ushort uVar5;
  int iVar6;
  char cVar7;
  ulong uVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  code **ppcVar23;
  code **ppcVar24;
  code **ppcVar25;
  byte *pbVar26;
  byte *pbVar27;
  long *plVar28;
  undefined8 uVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  undefined8 *puVar33;
  ulong uVar34;
  long lVar35;
  undefined **ppuVar36;
  long *plVar37;
  ulong uVar38;
  byte *pbVar39;
  bool bVar40;
  long *plVar41;
  code *pcVar42;
  float fVar43;
  double dVar44;
  undefined *puVar45;
  float fVar46;
  undefined8 uVar47;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_360;
  long *plStack_358;
  uint uStack_344;
  undefined8 uStack_340;
  code **ppcStack_338;
  ulong uStack_330;
  ulong uStack_328;
  code *pcStack_320;
  undefined **ppuStack_318;
  ulong uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b0;
  uint uStack_2a8;
  undefined4 uStack_2a4;
  uint uStack_2a0;
  int iStack_29c;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  code *pcStack_288;
  undefined8 uStack_280;
  code *apcStack_278 [2];
  code *pcStack_268;
  char cStack_261;
  code *pcStack_260;
  code *pcStack_258;
  code *pcStack_250;
  undefined4 uStack_248;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *param_3;
  if (uVar15 == 0) {
    iVar14 = *(int *)(param_2 + 0x58);
    *(int *)(param_2 + 0x58) = iVar14 + 1;
    if (10 < iVar14) {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6aad1b,&UNK_10f6aad57,0xe4,&UNK_10f6aae13);
      }
      *(undefined4 *)(param_2 + 0x58) = 0;
    }
    lVar31 = *(long *)(param_2 + 0x50);
    uVar29 = *(undefined8 *)(param_2 + 0x48);
    param_1[1] = *(undefined8 *)(param_2 + 0x50);
    *param_1 = uVar29;
    uStack_298 = (undefined8 *)CONCAT44(uStack_298._4_4_,(undefined4)uStack_298);
    if (lVar31 != 0) {
      plVar41 = (long *)(lVar31 + 8);
      do {
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar41,0x10);
        if (bVar10) {
          *plVar41 = *plVar41 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        uStack_298 = (undefined8 *)CONCAT44(uStack_298._4_4_,(undefined4)uStack_298);
      } while (cVar7 != '\0');
    }
LAB_10ad7aaf8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    *(undefined4 *)(param_2 + 0x58) = 0;
    _CVPixelBufferGetPixelFormatType();
    dVar44 = (double)param_4[1];
    _atan2(dVar44,*param_4);
    lVar31 = (long)((dVar44 * 180.0) / 3.141592653589793);
    if (lVar31 == -0x5a) {
      uVar13 = 3;
    }
    else if (lVar31 == 0x5a) {
      uVar13 = 1;
    }
    else if (lVar31 == 0xb4) {
      uVar13 = 2;
    }
    else {
      uVar13 = 0;
    }
    uVar16 = *param_3;
    uStack_344 = uVar13;
    _CVPixelBufferGetWidth();
    uVar17 = *param_3;
    _CVPixelBufferGetHeight();
    uVar4 = uVar16;
    uVar8 = uVar17;
    if ((uVar13 & 1) != 0) {
      uVar4 = uVar17;
      uVar8 = uVar16;
    }
    plVar18 = (long *)0x0;
    FUN_10a2421c8();
    puVar33 = (undefined8 *)(param_2 + 0x48);
    plVar41 = (long *)*puVar33;
    if (plVar41 == (long *)0x0) {
LAB_10ad79b6c:
      plVar41 = (long *)plVar18[0x45];
      uStack_2b0._0_4_ = 0;
      iStack_29c = 0;
      uStack_298._0_4_ = 0x21;
      uStack_2a4 = 1;
      uStack_2a0 = 4;
      uStack_298._4_4_ = 1;
      uStack_280 = 0;
      uStack_290 = 0;
      uStack_28c = 0;
      pcStack_288 = (code *)((ulong)pcStack_288 & 0xffffffffffffff00);
      uStack_2b0._4_4_ = (uint)uVar4;
      uStack_2a8 = (uint)uVar8;
      (**(code **)(*plVar41 + 0x20))(plVar41,&uStack_2b0);
      FUN_10a099d88(puVar33,plVar41);
      uVar13 = uStack_344;
    }
    else {
      plVar37 = plVar41;
      (**(code **)(*plVar41 + 0x28))();
      uVar11 = (uint)plVar37;
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      (**(code **)(*plVar41 + 0x30))();
      uVar12 = (uint)plVar41;
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      if (uVar11 != (uint)uVar4 || uVar12 != (uint)uVar8) goto LAB_10ad79b6c;
    }
    uStack_298 = (undefined8 *)CONCAT44(uStack_298._4_4_,(undefined4)uStack_298);
    if ((((param_5 & 1) != 0) &&
        (uStack_298 = (undefined8 *)CONCAT44(uStack_298._4_4_,(undefined4)uStack_298), uVar13 == 0))
       && (uVar38 = *param_3,
          uStack_298 = (undefined8 *)CONCAT44(uStack_298._4_4_,(undefined4)uStack_298), uVar38 != 0)
       ) {
      pcVar42 = (code *)*puVar33;
      pcVar9 = pcVar42;
      (**(code **)(*(long *)pcVar42 + 0x28))();
      uVar13 = (uint)pcVar9;
      if (uVar13 < 2) {
        uVar13 = 1;
      }
      pcVar9 = pcVar42;
      (**(code **)(*(long *)pcVar42 + 0x30))();
      uVar11 = (uint)pcVar9;
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      pcVar9 = pcVar42;
      (**(code **)(*(long *)pcVar42 + 0x38))();
      uStack_298 = (undefined8 *)CONCAT44(uStack_298._4_4_,(undefined4)uStack_298);
      if ((uint)pcVar9 < 2) {
        pcVar9 = pcVar42;
        (**(code **)(*(long *)pcVar42 + 0x50))();
        uStack_298 = (undefined8 *)CONCAT44(uStack_298._4_4_,(undefined4)uStack_298);
        if ((int)pcVar9 == 4) {
          uVar34 = uVar38;
          _CVPixelBufferGetWidth();
          uVar19 = uVar38;
          _CVPixelBufferGetHeight();
          uVar12 = (uint)uVar34;
          uStack_298 = (undefined8 *)CONCAT44(uStack_298._4_4_,(undefined4)uStack_298);
          if ((uVar13 == uVar12) &&
             (uVar30 = (uint)uVar19,
             uStack_298 = (undefined8 *)CONCAT44(uStack_298._4_4_,(undefined4)uStack_298),
             uVar11 == uVar30)) {
            uVar20 = uVar38;
            _CVPixelBufferGetPixelFormatType();
            iVar14 = (int)uVar20;
            if (iVar14 < 0x41424752) {
              if (iVar14 != 0x20) {
                iVar6 = 0x34323066;
                goto LAB_10ad79cd8;
              }
            }
            else if ((iVar14 != 0x41424752) && (iVar14 != 0x52474241)) {
              iVar6 = 0x42475241;
LAB_10ad79cd8:
              if (iVar14 != iVar6) goto LAB_10ad79f84;
            }
            _CVPixelBufferLockBaseAddress(uVar38,0);
            uStack_a0 = (undefined ***)CONCAT44(uVar11,uVar13);
            uStack_98 = CONCAT44(uStack_98._4_4_,1);
            pcVar9 = pcVar42;
            (**(code **)(*(long *)pcVar42 + 0x80))(pcVar42,&uStack_a0,4);
            puVar33 = (undefined8 *)(((ulong)uStack_a0 & 0xffffffff) * 4);
            ppuVar36 = (undefined **)(uVar19 & 0xffffffff);
            lVar31 = (long)puVar33 * (long)ppuVar36;
            __Znam();
            _bzero(lVar31,(long)puVar33 * (long)ppuVar36);
            uStack_2b0._0_4_ = (uint)lVar31;
            uStack_2b0._4_4_ = (uint)((ulong)lVar31 >> 0x20);
            uStack_2a4 = 0;
            uVar34 = uVar34 & 0xffffffff;
            iStack_29c = 0;
            puStack_3e0 = (undefined *)CONCAT44(puStack_3e0._4_4_,0x3020100);
            pcStack_320 = pcVar9;
            ppuStack_318 = ppuVar36;
            uStack_310 = uVar34;
            puStack_308 = puVar33;
            uStack_2a8 = uVar30;
            uStack_2a0 = uVar12;
            uStack_298 = puVar33;
            if (iVar14 < 0x41424752) {
              if ((iVar14 == 0x20) || (bVar10 = false, iVar14 == 0x34323066)) {
                puStack_3e0 = (undefined *)CONCAT44(puStack_3e0._4_4_,0x30201);
                if (iVar14 == 0x20) goto LAB_10ad79eb8;
                if (iVar14 == 0x34323066) {
                  uVar34 = uVar38;
                  _CVPixelBufferGetBaseAddressOfPlane(uVar38,0);
                  _CVPixelBufferGetHeightOfPlane(uVar38,0);
                  _CVPixelBufferGetWidthOfPlane(uVar38,0);
                  uVar19 = uVar38;
                  _CVPixelBufferGetBytesPerRowOfPlane(uVar38,0);
                  uVar20 = uVar38;
                  _CVPixelBufferGetBaseAddressOfPlane(uVar38,1);
                  _CVPixelBufferGetHeightOfPlane(uVar38,1);
                  _CVPixelBufferGetWidthOfPlane(uVar38,1);
                  uVar21 = uVar38;
                  _CVPixelBufferGetBytesPerRowOfPlane(uVar38,1);
                  FUN_10a19c418(uVar34,uVar20,CONCAT44(uStack_2b0._4_4_,(uint)uStack_2b0),
                                CONCAT44(iStack_29c,uStack_2a0),CONCAT44(uStack_2a4,uStack_2a8),
                                uVar19,uVar21,uStack_298,1);
                  goto LAB_10ad79ef8;
                }
                goto LAB_10ad79ef0;
              }
            }
            else {
              if (iVar14 != 0x52474241) {
                if (iVar14 == 0x42475241) {
                  puVar45 = (undefined *)0x3000000010002;
                }
                else {
                  bVar10 = false;
                  if (iVar14 != 0x41424752) goto LAB_10ad79f10;
                  puVar45 = &UNK_100020003;
                }
                puStack_3e0 = (undefined *)
                              CONCAT44(puStack_3e0._4_4_,
                                       CONCAT13((char)((ulong)puVar45 >> 0x30),
                                                CONCAT12((char)((ulong)puVar45 >> 0x20),
                                                         CONCAT11((char)((ulong)puVar45 >> 0x10),
                                                                  (char)puVar45))));
              }
LAB_10ad79eb8:
              uVar19 = uVar38;
              _CVPixelBufferGetBaseAddress();
              uVar20 = uVar38;
              uStack_340 = uVar19;
              ppcStack_338 = (code **)ppuVar36;
              uStack_330 = uVar34;
              _CVPixelBufferGetBytesPerRow();
              puVar22 = &uStack_340;
              uStack_328 = uVar20;
              _vImagePermuteChannels_ARGB8888(puVar22,&uStack_2b0,&puStack_3e0,0);
              puVar33 = uStack_298;
              if (puVar22 == (undefined8 *)0x0) {
LAB_10ad79ef8:
                puVar33 = &uStack_2b0;
                _vImageVerticalReflect_ARGB8888(puVar33,&pcStack_320,0);
                bVar10 = puVar33 == (undefined8 *)0x0;
                puVar33 = uStack_298;
              }
              else {
LAB_10ad79ef0:
                bVar10 = false;
              }
            }
LAB_10ad79f10:
            uStack_298 = puVar33;
            __ZdaPv(lVar31);
            (**(code **)(*(long *)pcVar42 + 0x88))(pcVar42);
            uStack_2b0._0_4_ = 0;
            uStack_2b0._4_4_ = 0;
            uStack_2a8 = 0;
            (**(code **)(*(long *)pcVar42 + 0x90))(pcVar42,0,&uStack_2b0);
            _CVPixelBufferUnlockBaseAddress(uVar38,0);
            if (bVar10) {
              lVar31 = *(long *)(param_2 + 0x50);
              uVar29 = *(undefined8 *)(param_2 + 0x48);
              param_1[1] = *(undefined8 *)(param_2 + 0x50);
              *param_1 = uVar29;
              if (lVar31 != 0) {
                plVar41 = (long *)(lVar31 + 8);
                do {
                  cVar7 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar41,0x10);
                  if (bVar10) {
                    *plVar41 = *plVar41 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              goto LAB_10ad7aaf8;
            }
          }
        }
      }
    }
LAB_10ad79f84:
    FUN_10a244d68();
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0xe0))(plVar18);
    }
    if ((int)uVar15 == 0x42475241) {
      bVar10 = false;
      lVar31 = 0;
      bVar40 = true;
    }
    else {
      if ((int)uVar15 != 0x34323066) {
        lVar31 = *(long *)(param_2 + 0x50);
        uVar29 = *(undefined8 *)(param_2 + 0x48);
        param_1[1] = *(undefined8 *)(param_2 + 0x50);
        *param_1 = uVar29;
        if (lVar31 != 0) {
          plVar41 = (long *)(lVar31 + 8);
          do {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar41,0x10);
            if (bVar10) {
              *plVar41 = *plVar41 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        goto LAB_10ad7aaf8;
      }
      bVar40 = false;
      bVar10 = true;
      lVar31 = 2;
    }
    lVar31 = param_2 + lVar31 * 0x10;
    plVar41 = (long *)(lVar31 + 8);
    if (*plVar41 == 0) {
      puVar45 = &UNK_10f6aae9c;
      if (!bVar10) {
        puVar45 = &UNK_10f6aae89;
      }
      uVar29 = 0xe;
      if (!bVar10) {
        uVar29 = 0x12;
      }
      FUN_10ab451f4(&uStack_2b0,0,puVar45,uVar29,puVar45,uVar29,puVar45,uVar29,1);
      lVar32 = **(long **)(CONCAT44(uStack_2b0._4_4_,(uint)uStack_2b0) + 0x228);
      uStack_310 = lVar32 + 0x40;
      uVar5 = *(ushort *)(lVar32 + 0x129);
      *(ushort *)(lVar32 + 0x129) = uVar5 & 0xff80 | uVar5 + 1 & 0x7f;
      *(ushort *)(lVar32 + 0x70) =
           *(ushort *)(lVar32 + 0x70) & 0xff80 | *(ushort *)(lVar32 + 0x70) + 1 & 0x7f;
      puStack_308 = (undefined8 *)CONCAT71(puStack_308._1_7_,1);
      pcStack_320 = FUN_10a1d3648;
      ppuStack_318 = &PTR_FUN_110bad818;
      func_0x00010a3326b8(lVar32 + 0x218,1);
      func_0x00010a332748(lVar32 + 0x219,0);
      lVar35 = *(long *)(lVar32 + 600);
      *(undefined8 *)(lVar35 + 0x30) = 0;
      *(undefined8 *)(lVar35 + 0x28) = 6;
      *(undefined8 *)(lVar35 + 0x40) = 0;
      *(undefined8 *)(lVar35 + 0x38) = 0;
      *(undefined8 *)(lVar35 + 0x50) = 0;
      *(undefined8 *)(lVar35 + 0x48) = 0;
      *(undefined4 *)(lVar32 + 0x21e) = 0x1010101;
      func_0x00010a3325d0(lVar32,0);
      ppcStack_338 = (code **)CONCAT44(uStack_2a4,uStack_2a8);
      uStack_340 = CONCAT44(uStack_2b0._4_4_,(uint)uStack_2b0);
      if (CONCAT44(uStack_2a4,uStack_2a8) != 0) {
        plVar37 = (long *)(CONCAT44(uStack_2a4,uStack_2a8) + 8);
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar10) {
            *plVar37 = *plVar37 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      FUN_10a044790(&pcStack_320);
      (*(code *)*ppuStack_318)(&ppuStack_318);
      FUN_10a044790(&uStack_2a0);
      (*(code *)*uStack_298)(&uStack_298);
      plVar37 = (long *)CONCAT44(uStack_2a4,uStack_2a8);
      if (plVar37 != (long *)0x0) {
        plVar28 = plVar37 + 1;
        do {
          lVar35 = *plVar28;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar10) {
            *plVar28 = lVar35 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar35 == 0) {
          (**(code **)(*plVar37 + 0x10))(plVar37);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar37);
        }
      }
      func_0x00010a015c50(plVar41,&uStack_340);
      ppcVar23 = ppcStack_338;
      if (ppcStack_338 != (code **)0x0) {
        plVar37 = (long *)(ppcStack_338 + 1);
        do {
          lVar35 = *plVar37;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar37,0x10);
          if (bVar10) {
            *plVar37 = lVar35 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar35 == 0) {
          (**(code **)((long)*ppcStack_338 + 0x10))(ppcStack_338);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar23);
        }
      }
    }
    plVar37 = (long *)(param_2 + 0x38);
    if (*plVar37 == 0) {
      uStack_340 = 0;
      ppcStack_338 = (code **)0x0;
      ppcVar23 = &pcStack_320;
      FUN_10a0d0194(&uStack_2b0);
      ppcVar24 = ppcStack_338;
      ppcVar25 = (code **)CONCAT44(uStack_2a4,uStack_2a8);
      uStack_340 = CONCAT44(uStack_2b0._4_4_,(uint)uStack_2b0);
      uStack_2b0._0_4_ = 0;
      uStack_2b0._4_4_ = 0;
      uStack_2a8 = 0;
      uStack_2a4 = 0;
      if (ppcStack_338 != (code **)0x0) {
        ppcVar1 = ppcStack_338 + 1;
        do {
          pcVar9 = *ppcVar1;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppcVar1,0x10);
          if (bVar10) {
            *ppcVar1 = pcVar9 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pcVar9 == (code *)0x0) {
          pcVar9 = *ppcStack_338;
          ppcStack_338 = ppcVar25;
          (**(code **)(pcVar9 + 0x10))(ppcVar24);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppcVar23 = ppcVar24;
          ppcVar25 = ppcStack_338;
        }
      }
      ppcStack_338 = ppcVar25;
      ppcVar25 = (code **)CONCAT44(uStack_2a4,uStack_2a8);
      if (ppcVar25 != (code **)0x0) {
        ppcVar24 = ppcVar25 + 1;
        do {
          pcVar9 = *ppcVar24;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppcVar24,0x10);
          if (bVar10) {
            *ppcVar24 = pcVar9 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (pcVar9 == (code *)0x0) {
          (**(code **)(*ppcVar25 + 0x10))(ppcVar25);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppcVar23 = ppcVar25;
        }
      }
      FUN_10ab6e898();
      if (*(char *)((long)ppcVar23 + 0x17) < '\0') {
        ppcVar25 = (code **)&uStack_2b0;
        func_0x000107c3192c(ppcVar25,*ppcVar23,ppcVar23[1]);
      }
      else {
        uStack_2a0 = (uint)ppcVar23[2];
        iStack_29c = (int)((ulong)ppcVar23[2] >> 0x20);
        uStack_2a8 = (uint)ppcVar23[1];
        uStack_2a4 = (undefined4)((ulong)ppcVar23[1] >> 0x20);
        uStack_2b0._0_4_ = (uint)*ppcVar23;
        uStack_2b0._4_4_ = (uint)((ulong)*ppcVar23 >> 0x20);
        ppcVar25 = ppcVar23;
      }
      uStack_298._0_4_ = SUB84(ppcVar23[3],0);
      uStack_298._4_4_ = (undefined4)((ulong)ppcVar23[3] >> 0x20);
      pcStack_288 = ppcVar23[5];
      uStack_290 = SUB84(ppcVar23[4],0);
      uStack_28c = (undefined4)((ulong)ppcVar23[4] >> 0x20);
      uStack_280 = CONCAT44(uStack_280._4_4_,*(undefined4 *)(ppcVar23 + 6));
      FUN_10ab6f020();
      if (*(char *)((long)ppcVar25 + 0x17) < '\0') {
        func_0x000107c3192c(apcStack_278,*ppcVar25,ppcVar25[1]);
      }
      else {
        pcStack_268 = ppcVar25[2];
        apcStack_278[1] = ppcVar25[1];
        apcStack_278[0] = *ppcVar25;
      }
      pcStack_260 = ppcVar25[3];
      pcStack_250 = ppcVar25[5];
      pcStack_258 = ppcVar25[4];
      uStack_248 = *(undefined4 *)(ppcVar25 + 6);
      FUN_10ab6f520(&pcStack_320,&uStack_2b0,2);
      uVar15 = uStack_340;
      *(undefined4 *)(uStack_340 + 0xf0) = pcStack_320._0_4_;
      if ((code **)(uStack_340 + 0xf0) != &pcStack_320) {
        FUN_10a1903c4(uStack_340 + 0xf8,ppuStack_318,uStack_310,
                      ((long)(uStack_310 - (long)ppuStack_318) >> 3) * 0x6db6db6db6db6db7);
      }
      *(undefined8 *)(uVar15 + 0x118) = uStack_2f8;
      *(undefined8 *)(uVar15 + 0x110) = uStack_300;
      *(undefined8 *)(uVar15 + 0x128) = uStack_2e8;
      *(long **)(uVar15 + 0x120) = plStack_2f0;
      *(undefined8 *)(uVar15 + 0x130) = uStack_2e0;
      uStack_a0 = &ppuStack_318;
      func_0x00010a190844(&uStack_a0);
      lVar35 = 0;
      do {
        if ((&cStack_261)[lVar35] < '\0') {
          __ZdlPv(*(undefined8 *)((long)apcStack_278 + lVar35));
        }
        lVar35 = lVar35 + -0x38;
      } while (lVar35 != -0x70);
      *(undefined8 *)(uStack_340 + 0xe8) = 0x100000000;
      FUN_10ab4a154(uStack_340,4);
      uVar13 = *(uint *)(uStack_340 + 0x110);
      if (uVar13 == 0xffffffff) {
        lVar35 = 0;
      }
      else {
        uVar15 = (*(long *)(uStack_340 + 0x100) - *(long *)(uStack_340 + 0xf8) >> 3) *
                 0x6db6db6db6db6db7;
        if (uVar15 < uVar13 || uVar15 - uVar13 == 0) {
          FUN_10ab725fc();
          goto LAB_10ad7ae14;
        }
        lVar35 = *(long *)(uStack_340 + 0xf8) + (ulong)uVar13 * 0x38;
      }
      uVar13 = *(int *)(lVar35 + 0x24) - 1;
      if (uVar13 < 7) {
        iVar14 = *(int *)(&UNK_10e5120a0 + (ulong)uVar13 * 4);
      }
      else {
        iVar14 = 0;
      }
      if (*(int *)(lVar35 + 0x28) * iVar14 == 8) {
        puVar33 = (undefined8 *)(*(long *)(uStack_340 + 0x10) + (ulong)*(uint *)(lVar35 + 0x30));
        uVar15 = (ulong)*(uint *)(uStack_340 + 0xf0);
      }
      else {
        puVar33 = (undefined8 *)0x0;
        uVar15 = 0;
      }
      lVar35 = 0;
      do {
        *puVar33 = *(undefined8 *)(&UNK_10e511fa8 + lVar35);
        lVar35 = lVar35 + 8;
        puVar33 = (undefined8 *)((long)puVar33 + uVar15);
      } while (lVar35 != 0x20);
      pcStack_320 = (code *)0x0;
      FUN_10a1995d0(&uStack_2b0,&uStack_a0,&pcStack_320,&uStack_340);
      func_0x00010a19a938(plVar37,&uStack_2b0);
      plVar28 = (long *)CONCAT44(uStack_2a4,uStack_2a8);
      if (plVar28 != (long *)0x0) {
        plVar3 = plVar28 + 1;
        do {
          lVar35 = *plVar3;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar10) {
            *plVar3 = lVar35 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar35 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
        }
      }
      plVar28 = (long *)*plVar37;
      if (*(char *)((long)plVar28 + 0xb9) != '\x01') {
        *(undefined1 *)((long)plVar28 + 0xb9) = 1;
        (**(code **)(*plVar28 + 0xa0))();
        plVar28 = (long *)*plVar37;
      }
      if (*(char *)((long)plVar28 + 0xba) != '\x01') {
        *(undefined1 *)((long)plVar28 + 0xba) = 1;
        (**(code **)(*plVar28 + 0xa0))();
      }
      ppcVar23 = ppcStack_338;
      uStack_298 = (undefined8 *)CONCAT44(uStack_298._4_4_,(undefined4)uStack_298);
      if (ppcStack_338 != (code **)0x0) {
        ppuVar36 = ppcStack_338 + 1;
        do {
          puVar45 = *ppuVar36;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppuVar36,0x10);
          if (bVar10) {
            *ppuVar36 = puVar45 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        uStack_298 = (undefined8 *)CONCAT44(uStack_298._4_4_,(undefined4)uStack_298);
        if (puVar45 == (undefined *)0x0) {
          (**(code **)(*ppcStack_338 + 0x10))(ppcStack_338);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar23);
        }
      }
    }
    plStack_358 = *(long **)(lVar31 + 0x10);
    lVar31 = *plVar41;
    if (plStack_358 != (long *)0x0) {
      plVar41 = plStack_358 + 1;
      do {
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar41,0x10);
        if (bVar10) {
          *plVar41 = *plVar41 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    ppcStack_338 = (code **)0x3f80000000000000;
    uStack_340 = 0;
    uStack_328 = 0x3f8000003f800000;
    uStack_330 = 0x3f800000;
    lStack_360 = lVar31;
    if (uStack_344 != 0) {
      lVar35 = 0;
      do {
        FUN_10a108ed4(&uStack_344,(long)&uStack_340 + lVar35,(long)&uStack_340 + lVar35 + 4);
        lVar35 = lVar35 + 8;
      } while (lVar35 != 0x20);
      lVar35 = 8;
      uVar15 = uStack_340;
      do {
        uVar38 = *(ulong *)((long)&uStack_340 + lVar35);
        uVar15 = uVar15 ^ (uVar15 ^ uVar38) &
                          ~CONCAT44(-(uint)((float)(uVar15 >> 0x20) < (float)(uVar38 >> 0x20)),
                                    -(uint)((float)uVar15 < (float)uVar38));
        lVar35 = lVar35 + 8;
      } while (lVar35 != 0x20);
      fVar43 = (float)uVar15;
      fVar46 = (float)(uVar15 >> 0x20);
      uStack_330 = CONCAT44((float)(uStack_330 >> 0x20) - fVar46,(float)uStack_330 - fVar43);
      uStack_328 = CONCAT44((float)(uStack_328 >> 0x20) - fVar46,(float)uStack_328 - fVar43);
      uStack_340 = CONCAT44((float)(uStack_340 >> 0x20) - fVar46,(float)uStack_340 - fVar43);
      ppcStack_338 = (code **)CONCAT44((float)((ulong)ppcStack_338 >> 0x20) - fVar46,
                                       SUB84(ppcStack_338,0) - fVar43);
    }
    plVar41 = (long *)*plVar37;
    (**(code **)(*plVar41 + 0x90))();
    lVar35 = *plVar41;
    uVar13 = *(uint *)(lVar35 + 0x120);
    if (uVar13 == 0xffffffff) {
      lVar32 = 0;
LAB_10ad7a38c:
      uVar13 = *(int *)(lVar32 + 0x24) - 1;
      if (uVar13 < 7) {
        iVar14 = *(int *)(&UNK_10e5120a0 + (ulong)uVar13 * 4);
      }
      else {
        iVar14 = 0;
      }
      if (*(int *)(lVar32 + 0x28) * iVar14 == 8) {
        puVar33 = (undefined8 *)(*(long *)(lVar35 + 0x10) + (ulong)*(uint *)(lVar32 + 0x30));
        uVar15 = (ulong)*(uint *)(lVar35 + 0xf0);
      }
      else {
        puVar33 = (undefined8 *)0x0;
        uVar15 = 0;
      }
      lVar35 = 0;
      do {
        *puVar33 = *(undefined8 *)((long)&uStack_340 + lVar35);
        lVar35 = lVar35 + 8;
        puVar33 = (undefined8 *)((long)puVar33 + uVar15);
      } while (lVar35 != 0x20);
      pbVar39 = (byte *)(plVar18 + 4);
      if (((*pbVar39 & 1) == 0) && (*(int *)((long)plVar18 + 0x24) == 0)) {
        uStack_2a4 = 0;
        uStack_2b0._0_4_ = (uint)uStack_2b0 & 0xffffff;
        uStack_2b0._4_4_ = 0;
        uStack_2a8 = 0;
        uStack_2a0 = 0;
        iStack_29c = 0;
        uStack_298 = (undefined8 *)0x0;
        plVar18[8] = 0x17d;
        *(undefined8 *)((long)plVar18 + 0x55) = 0;
        *(ulong *)((long)plVar18 + 0x4d) = (ulong)(uint)uStack_2b0;
        uStack_290 = 0;
        *(undefined4 *)((long)plVar18 + 0x6d) = 0;
        *(undefined2 *)((long)plVar18 + 0x4a) = 0;
        *(undefined1 *)((long)plVar18 + 0x4c) = 0;
        *(undefined8 *)((long)plVar18 + 0x65) = 0;
        *(undefined8 *)((long)plVar18 + 0x5d) = 0;
      }
      *(int *)((long)plVar18 + 0x24) = *(int *)((long)plVar18 + 0x24) + 1;
      pbVar26 = pbVar39;
      FUN_10a5dfd94(pbVar39,lVar31);
      pbVar27 = pbVar39;
      FUN_10a01eacc(pbVar39,(ulong)pbVar26 & 0xffffffff);
      uStack_98 = 0;
      uStack_a0 = (undefined ***)0x0;
      uStack_88 = 0;
      uStack_90 = 0;
      if (bVar40) {
        lStack_3d0 = -0x572642eb39e20485;
        uStack_3d8 = 0xb;
        puStack_3e0 = &DAT_10f6aae47;
        uStack_370 = 0x1912837e7734e3e6;
        uStack_378 = 7;
        puStack_380 = &DAT_10f6aae53;
        uStack_398 = 0xe;
        puStack_3a0 = &DAT_10f6aae5b;
        uStack_390 = 0x80a40f2eb20bdaa1;
        FUN_10ad7b010(&uStack_2b0,*param_3,4,0);
        func_0x000107c2b074(&pcStack_320,&puStack_3e0);
        if (CONCAT44(uStack_2b0._4_4_,(uint)uStack_2b0) == 0) {
          uVar29 = 0;
        }
        else {
          uVar29 = *(undefined8 *)(CONCAT44(uStack_2b0._4_4_,(uint)uStack_2b0) + 0x268);
        }
        FUN_10a5e17a8(pbVar27,&pcStack_320,uVar29,&UNK_10e4ac8a8);
        if ((long)uStack_310 < 0) {
          __ZdlPv(pcStack_320);
        }
        func_0x000107c2b074(&pcStack_320,&puStack_380);
        uStack_3c0 = (undefined *)CONCAT44((float)(int)uVar17,(float)(int)uVar16);
        FUN_10a022468(pbVar27,&pcStack_320,&uStack_3c0);
        if ((long)uStack_310 < 0) {
          __ZdlPv(pcStack_320);
        }
        func_0x000107c2b074(&pcStack_320,&puStack_3a0);
        FUN_10a047898(*(undefined8 *)(pbVar27 + 0x158),&pcStack_320,&pcStack_320);
        if ((long)uStack_310 < 0) {
          __ZdlPv(pcStack_320);
        }
        func_0x00010a04a704(&uStack_a0,&uStack_2b0);
        FUN_10a044790(&uStack_2a0);
        (*(code *)*uStack_298)(&uStack_298);
        plVar41 = (long *)CONCAT44(uStack_2a4,uStack_2a8);
        if (plVar41 != (long *)0x0) {
          plVar28 = plVar41 + 1;
          do {
            lVar31 = *plVar28;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar10) {
              *plVar28 = lVar31 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_10ad7a7ec:
          if (lVar31 == 0) {
            (**(code **)(*plVar41 + 0x10))(plVar41);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
          }
        }
      }
      else {
        uStack_378 = 0xb;
        puStack_380 = &DAT_10f6aae6a;
        uStack_370 = 0x630aef3d201d4e71;
        uStack_398 = 8;
        puStack_3a0 = &DAT_10f6aae76;
        uStack_390 = 0x378d564b34d7c289;
        uStack_3b8 = 9;
        uStack_3c0 = &DAT_10f6aae7f;
        uStack_3b0 = 0xdd28825c74664664;
        func_0x000107c2b074(&uStack_2b0,&puStack_380);
        FUN_10a0d9f14(&pcStack_320,&uStack_2b0,1,&puStack_3e0);
        if (*(code ***)(pbVar27 + 0x158) != &pcStack_320) {
          FUN_10a1f503c(*(code ***)(pbVar27 + 0x158),pcStack_320,&ppuStack_318);
        }
        FUN_10a0da1b8(&pcStack_320,ppuStack_318);
        if (iStack_29c < 0) {
          __ZdlPv(CONCAT44(uStack_2b0._4_4_,(uint)uStack_2b0));
        }
        FUN_10ad7b010(&uStack_2b0,*param_3,0x26,0);
        FUN_10ad7b010(&pcStack_320,*param_3,2,1);
        func_0x000107c2b074(&puStack_3e0,&puStack_3a0);
        if (CONCAT44(uStack_2b0._4_4_,(uint)uStack_2b0) == 0) {
          uVar29 = 0;
        }
        else {
          uVar29 = *(undefined8 *)(CONCAT44(uStack_2b0._4_4_,(uint)uStack_2b0) + 0x268);
        }
        FUN_10a5e17a8(pbVar27,&puStack_3e0,uVar29,&UNK_10e4ac8a8);
        if (lStack_3d0 < 0) {
          __ZdlPv(puStack_3e0);
        }
        func_0x000107c2b074(&puStack_3e0,&uStack_3c0);
        if (pcStack_320 == (code *)0x0) {
          lVar31 = 0;
        }
        else {
          lVar31 = *(long *)(pcStack_320 + 0x268);
        }
        FUN_10a5e17a8(pbVar27,&puStack_3e0,lVar31,&UNK_10e4ac8a8);
        if (lStack_3d0 < 0) {
          __ZdlPv(puStack_3e0);
        }
        func_0x00010a04a704(&uStack_a0,&uStack_2b0);
        func_0x00010a04a704(&uStack_90,&pcStack_320);
        FUN_10a044790(&uStack_310);
        (*(code *)*puStack_308)(&puStack_308);
        ppuVar36 = ppuStack_318;
        if (ppuStack_318 != (undefined **)0x0) {
          ppuVar2 = ppuStack_318 + 1;
          do {
            puVar45 = *ppuVar2;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
            if (bVar10) {
              *ppuVar2 = puVar45 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (puVar45 == (undefined *)0x0) {
            (**(code **)(*ppuStack_318 + 0x10))(ppuStack_318);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar36);
          }
        }
        FUN_10a044790(&uStack_2a0);
        (*(code *)*uStack_298)(&uStack_298);
        plVar41 = (long *)CONCAT44(uStack_2a4,uStack_2a8);
        if (plVar41 != (long *)0x0) {
          plVar28 = plVar41 + 1;
          do {
            lVar31 = *plVar28;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar10) {
              *plVar28 = lVar31 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          goto LAB_10ad7a7ec;
        }
      }
      uStack_2b0._0_4_ = 0;
      uStack_2b0._4_4_ = 0;
      uStack_108 = 0;
      uStack_f8 = 0;
      plStack_100 = (long *)0x0;
      uStack_f0 = 0xffffffffffffffff;
      uStack_e8 = 0xffffffffffffffff;
      uStack_d0 = 0;
      plStack_d8 = (long *)0x0;
      uStack_e0 = 0;
      uStack_c8 = 0xffffffffffffffff;
      uStack_c0 = 0xffffffffffffffff;
      uStack_b8 = 0x3f800000;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_2c8 = 0;
      ppuStack_318 = (undefined **)0x0;
      pcStack_320 = (code *)0x0;
      uStack_310 = 0;
      puStack_308 = (undefined8 *)0xffffffffffffffff;
      uStack_300 = 0xffffffffffffffff;
      uStack_2f8 = 0;
      plStack_2f0 = (long *)0x0;
      uStack_2e8 = 0;
      uStack_2e0 = 0xffffffffffffffff;
      uStack_2d8 = 0xffffffffffffffff;
      uStack_2d0 = 0;
      uStack_2c0 = 0;
      FUN_10a061728(&uStack_2b0,&pcStack_320);
      plVar41 = plStack_2f0;
      if (plStack_2f0 != (long *)0x0) {
        plVar28 = plStack_2f0 + 1;
        do {
          lVar31 = *plVar28;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar10) {
            *plVar28 = lVar31 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar31 == 0) {
          (**(code **)(*plStack_2f0 + 0x10))(plStack_2f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
        }
      }
      ppuVar36 = ppuStack_318;
      if (ppuStack_318 != (undefined **)0x0) {
        ppuVar2 = ppuStack_318 + 1;
        do {
          puVar45 = *ppuVar2;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar10) {
            *ppuVar2 = puVar45 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (puVar45 == (undefined *)0x0) {
          (**(code **)(*ppuStack_318 + 0x10))(ppuStack_318);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar36);
        }
      }
      uVar47 = *(undefined8 *)(param_2 + 0x50);
      uVar29 = *(undefined8 *)(param_2 + 0x48);
      if (*(long *)(param_2 + 0x50) != 0) {
        plVar41 = (long *)(*(long *)(param_2 + 0x50) + 8);
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar41,0x10);
          if (bVar10) {
            *plVar41 = *plVar41 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      plVar41 = (long *)CONCAT44(iStack_29c,uStack_2a0);
      uStack_2a0 = (uint)uVar47;
      iStack_29c = (int)((ulong)uVar47 >> 0x20);
      uStack_2a8 = (uint)uVar29;
      uStack_2a4 = (undefined4)((ulong)uVar29 >> 0x20);
      if (plVar41 != (long *)0x0) {
        plVar28 = plVar41 + 1;
        do {
          lVar31 = *plVar28;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar10) {
            *plVar28 = lVar31 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar31 == 0) {
          (**(code **)(*plVar41 + 0x10))(plVar41);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
        }
      }
      uStack_298._0_4_ = 0;
      uStack_298._4_4_ = 0;
      uStack_290 = 0xffffffff;
      uStack_28c = 0xffffffff;
      pcStack_288 = (code *)0xffffffffffffffff;
      uStack_248 = 2;
      uStack_b0 = 2;
      uStack_ac = 2;
      (**(code **)(*plVar18 + 0x88))(plVar18,&uStack_2b0);
      ppuStack_318 = (undefined **)(uVar4 & 0xffffffff | uVar8 << 0x20);
      pcStack_320 = (code *)0x0;
      (**(code **)(*plVar18 + 0xc0))(plVar18,&pcStack_320);
      ppuStack_318 = (undefined **)0x0;
      pcStack_320 = (code *)0x3f800000;
      puStack_308 = (undefined8 *)0x0;
      uStack_310 = 0x3f80000000000000;
      uStack_2f8 = 0x3f800000;
      uStack_300 = 0;
      uStack_2e8 = 0x3f80000000000000;
      plStack_2f0 = (long *)0x0;
      (**(code **)(*plVar18 + 0x58))(plVar18,*plVar37,(ulong)pbVar26 & 0xffffffff,&pcStack_320,3);
      (**(code **)(*plVar18 + 0x90))(plVar18,0,3,3);
      plVar41 = plStack_d8;
      lVar31 = *(long *)(param_2 + 0x50);
      uVar29 = *(undefined8 *)(param_2 + 0x48);
      param_1[1] = *(undefined8 *)(param_2 + 0x50);
      *param_1 = uVar29;
      if (lVar31 != 0) {
        plVar18 = (long *)(lVar31 + 8);
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar10) {
            *plVar18 = *plVar18 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (plStack_d8 != (long *)0x0) {
        plVar18 = plStack_d8 + 1;
        do {
          lVar31 = *plVar18;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar10) {
            *plVar18 = lVar31 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar31 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
        }
      }
      plVar41 = plStack_100;
      if (plStack_100 != (long *)0x0) {
        plVar18 = plStack_100 + 1;
        do {
          lVar31 = *plVar18;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar10) {
            *plVar18 = lVar31 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar31 == 0) {
          (**(code **)(*plStack_100 + 0x10))(plStack_100);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
        }
      }
      func_0x00010a048e34(&uStack_2a8,CONCAT44(uStack_2b0._4_4_,(uint)uStack_2b0));
      lVar31 = 0x10;
      do {
        func_0x00010a05248c((long)&uStack_a0 + lVar31);
        lVar31 = lVar31 + -0x10;
      } while (lVar31 != -0x10);
      func_0x00010a5dfd48(pbVar39);
      plVar41 = plStack_358;
      uStack_298 = (undefined8 *)CONCAT44(uStack_298._4_4_,(undefined4)uStack_298);
      if (plStack_358 != (long *)0x0) {
        plVar18 = plStack_358 + 1;
        do {
          lVar31 = *plVar18;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar10) {
            *plVar18 = lVar31 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        uStack_298 = (undefined8 *)CONCAT44(uStack_298._4_4_,(undefined4)uStack_298);
        if (lVar31 == 0) {
          (**(code **)(*plStack_358 + 0x10))(plStack_358);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
          uStack_298 = (undefined8 *)CONCAT44(uStack_298._4_4_,(undefined4)uStack_298);
        }
      }
      goto LAB_10ad7aaf8;
    }
    uVar15 = (*(long *)(lVar35 + 0x100) - *(long *)(lVar35 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar13 <= uVar15 && uVar15 - uVar13 != 0) {
      lVar32 = *(long *)(lVar35 + 0xf8) + (ulong)uVar13 * 0x38;
      goto LAB_10ad7a38c;
    }
  }
  FUN_10ab725fc();
LAB_10ad7ae14:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10ad7ae18);
  (*pcVar9)();
}



/* Entry: 10ad7b010; end: 10ad7b22f;  */

void FUN_10ad7b010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_41;
  
  plStack_58 = (long *)0x0;
  plStack_50 = (long *)0x0;
  ppuVar3 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  lVar5 = 0;
  if ((char)*(long *)((long)*ppuVar3 + 0x160) == '\0') {
    lVar5 = 8;
  }
  plVar7 = *(long **)(*(long *)*ppuVar3 + lVar5);
  if ((*plVar7 == 0) || (*(int *)(*plVar7 + 0x734) == 1)) {
    plVar7 = (long *)0x1a0;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar4 = plVar7 + 3;
    *plVar7 = (long)&PTR_FUN_110c72198;
    FUN_10ad6fc68(plVar4,param_2,param_3,param_4);
    plStack_58 = plVar4;
    if (plStack_50 == (long *)0x0) goto LAB_10ad7b12c;
    plVar4 = plStack_50 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_50;
    } while (cVar1 != '\0');
  }
  else {
    FUN_10ad55ab4(auStack_68,param_2,param_4);
    FUN_10a15c630(plVar7,auStack_68);
    FUN_10a099d88(&plStack_58,plVar7);
    plVar7 = plStack_50;
    if (plStack_60 == (long *)0x0) goto LAB_10ad7b12c;
    plVar4 = plStack_60 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_60;
    } while (cVar1 != '\0');
  }
  plStack_50 = plVar7;
  plVar7 = plStack_50;
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    plVar7 = plStack_50;
  }
LAB_10ad7b12c:
  plStack_50 = plVar7;
  uStack_70 = 0;
  FUN_10a064d24(auStack_68,&uStack_41,&uStack_70,&plStack_58);
  uStack_70 = 0;
  FUN_10a17647c(param_1,&uStack_70,auStack_68);
  if (plStack_60 != (long *)0x0) {
    plVar7 = plStack_60 + 1;
    do {
      lVar5 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
    }
  }
  plVar7 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    plVar4 = plStack_50 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10ad7b230; end: 10ad7b233;  */

undefined8 * FUN_10ad7b230(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110c72148;
  func_0x00010a0523dc(param_1 + 9);
  func_0x00010a1943a0(param_1 + 7);
  lVar1 = 0x28;
  do {
    FUN_10a0617bc((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -8);
  return param_1;
}



/* Entry: 10ad7b234; end: 10ad7b247;  */

void FUN_10ad7b234(void)

{
  FUN_10ad7b284();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad7b248; end: 10ad7b257;  */

void FUN_10ad7b248(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c72198;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad7b258; end: 10ad7b277;  */

void FUN_10ad7b258(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c72198;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad7b278; end: 10ad7b283;  */

undefined8 * FUN_10ad7b278(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  FUN_10a195bbc(param_1 + 400);
  func_0x00010a09dbbc(param_1 + 0x180);
  _objc_release(*(undefined8 *)(param_1 + 0x170));
  lVar2 = *(long *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (lVar2 != 0) {
    func_0x00010a159354(param_1 + 0x160);
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x140);
    __ZdlPv();
  }
  FUN_10a09d22c(param_1 + 0x130);
  FUN_10a09d22c(param_1 + 0x120);
  func_0x00010a09db0c(param_1 + 0x108);
  FUN_10ad70e90(param_1 + 0xf8);
  func_0x00010a276064(param_1 + 0xe8);
  *(undefined ***)(param_1 + 0xd0) = &PTR_DAT_110c71980;
  func_0x00010abd8624(param_1 + 0xd8);
  *puVar1 = &PTR_FUN_110c4f858;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c4f948;
  *(undefined ***)(param_1 + 0xb8) = &PTR_FUN_110c4f968;
  func_0x00010a09db0c(param_1 + 0xc0);
  *puVar1 = &PTR_DAT_110c4f540;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c50768;
  return puVar1;
}



/* Entry: 10ad7b284; end: 10ad7b2db;  */

undefined8 * FUN_10ad7b284(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110c72148;
  func_0x00010a0523dc(param_1 + 9);
  func_0x00010a1943a0(param_1 + 7);
  lVar1 = 0x28;
  do {
    FUN_10a0617bc((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -8);
  return param_1;
}



/* Entry: 10ad7b2dc; end: 10ad7b373; -[LSASequentialVideoPlayer initWithInputPath:] */

undefined1 * FUN_10ad7b2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112701298;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be3b980(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ad7b374; end: 10ad7b37f; -[LSASequentialVideoPlayer getPixelFormat] */

undefined8 FUN_10ad7b374(void)

{
  return 0x42475241;
}



/* Entry: 10ad7b380; end: 10ad7b91f; -[LSASequentialVideoPlayer _initializeReader:] */

/* WARNING: Removing unreachable block (ram,0x00010ad7b798) */
/* WARNING: Removing unreachable block (ram,0x00010ad7b97c) */
/* WARNING: Removing unreachable block (ram,0x00010ad7b988) */

void FUN_10ad7b380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  double dVar15;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 **ppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar4 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc3520();
  func_0x000107c2b054(&uStack_110,uVar4);
  uVar3 = 0;
  FUN_10ad01a04();
  if (lStack_100 < 0) {
    __ZdlPv(uStack_110);
  }
  if ((uVar3 & 1) == 0) {
    func_0x000107c2b054(auStack_a8,&UNK_10f6aaeab);
    _objc_retainAutorelease(param_3);
    func_0x00010bdc3520(param_3);
    func_0x000107c2b054(&ppuStack_c0,param_3);
    pppuVar1 = (undefined8 ***)ppuStack_c0;
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      pppuVar1 = &ppuStack_c0;
    }
    puVar13 = auStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar13,pppuVar1,uStack_b8);
    uStack_88 = puVar13[1];
    uStack_90 = *puVar13;
    uStack_80 = puVar13[2];
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = 0;
    func_0x000107c2b054(&ppuStack_d8,&UNK_10f5ffe3e);
    pppuVar1 = (undefined8 ***)ppuStack_d8;
    if (-1 < (char)bStack_c1) {
      uStack_d0 = (ulong)bStack_c1;
      pppuVar1 = &ppuStack_d8;
    }
    puVar13 = &uStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar13,pppuVar1,uStack_d0);
    uStack_108 = puVar13[1];
    uStack_110 = *puVar13;
    lStack_100 = puVar13[2];
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = 0;
    if ((char)bStack_c1 < '\0') {
      __ZdlPv(ppuStack_d8);
    }
    if ((char)bStack_a9 < '\0') {
      __ZdlPv(ppuStack_c0);
    }
    if (cStack_91 < '\0') {
      __ZdlPv(auStack_a8[0]);
    }
    puVar13 = (undefined8 *)0x120;
    ___cxa_allocate_exception();
    FUN_10a002a94();
    *puVar13 = &PTR_FUN_110b99e70;
    ___cxa_throw(puVar13,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad7b7fc);
    (*pcVar2)();
  }
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar4);
  lVar12 = param_1;
  func_0x00010bfc8cc0();
  *(int *)(param_1 + 0x20) = (int)lVar12;
  *(undefined1 *)(param_1 + 0x25) = 0;
  uVar4 = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffff00000000;
  puVar5 = PTR_PTR_1126de098;
  func_0x00010c29acc0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    uStack_110 = 0;
    uStack_108 = 0;
    lStack_100 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_110,puVar5);
  }
  _CMTimeGetSeconds(&uStack_110);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  puVar6 = puVar5;
  func_0x00010c279200();
  uVar14 = (undefined4)uVar4;
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf529e0();
  if (puVar7 == (undefined *)0x0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
  }
  puVar7 = puVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da9e0();
  *(undefined4 *)(param_1 + 0x30) = uVar14;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f6aaee5,&UNK_10f6aaf21,0x4b,&UNK_10f6aaf50);
  }
  if (puVar7 == (undefined *)0x0) {
    uStack_f8 = 0;
    lStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010c106f40(&uStack_110,puVar7);
  }
  *(undefined8 *)(param_1 + 0x48) = uStack_108;
  *(undefined8 *)(param_1 + 0x40) = uStack_110;
  *(undefined8 *)(param_1 + 0x58) = uStack_f8;
  *(long *)(param_1 + 0x50) = lStack_100;
  *(undefined8 *)(param_1 + 0x68) = uStack_e8;
  *(undefined8 *)(param_1 + 0x60) = uStack_f0;
  dVar15 = *(double *)(param_1 + 0x48);
  _atan2(dVar15,*(undefined8 *)(param_1 + 0x40));
  lVar12 = (long)((dVar15 * 180.0) / 3.141592653589793);
  if (lVar12 == -0x5a) {
    uVar14 = 3;
  }
  else if (lVar12 == 0x5a) {
    uVar14 = 1;
  }
  else if (lVar12 == 0xb4) {
    uVar14 = 2;
  }
  else {
    uVar14 = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = uVar14;
  puVar8 = PTR_PTR_1126de0a0;
  func_0x00010bf0b5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar8;
  _objc_release(uVar4);
  uStack_78 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar8;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c0d3c80();
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_1126bf5a0;
  _objc_alloc();
  func_0x00010c054b20();
  puVar13 = (undefined8 *)(param_1 + 0x10);
  uVar4 = *puVar13;
  *puVar13 = puVar8;
  _objc_release(uVar4);
  uVar11 = 1;
  func_0x00010c2100e0(*puVar13);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_100 < 0) {
    __ZdlPv(uStack_110);
  }
  _objc_release(param_3);
  __Unwind_Resume(uVar4);
  _objc_retain(uVar11);
  puVar5 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
  _objc_alloc();
  func_0x00010bff4200();
  _objc_retain(0);
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar6);
  }
  _objc_release(0);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10ad7b920; end: 10ad7ba97; +[LSASequentialVideoPlayer assetReaderForMovieAsset:] */

/* WARNING: Removing unreachable block (ram,0x00010ad7b97c) */
/* WARNING: Removing unreachable block (ram,0x00010ad7b988) */

void FUN_10ad7b920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___AVAssetReader_1126bf598;
  _objc_alloc();
  func_0x00010bff4200();
  _objc_retain(0);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x00010bf5eec0(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd11c0();
    _objc_release(puVar2);
  }
  _objc_release(0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10ad7ba98; end: 10ad7ba9f; -[LSASequentialVideoPlayer prepareWithLoop:] */

void FUN_10ad7ba98(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x24) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c064710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initialize_1125f6bd0);
  return;
}



/* Entry: 10ad7baa0; end: 10ad7bc93; -[LSASequentialVideoPlayer initialize] */

void FUN_10ad7baa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf2c480(uVar1,param_2,*(undefined8 *)(param_1 + 0x10));
  if ((int)uVar1 == 0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f6aaee5,&UNK_10f6ab001,0x75,&UNK_10f6ab069);
      if ((bRam000000011330a9e8 & 1) != 0) {
        uVar1 = *(undefined8 *)(param_1 + 8);
        func_0x00010c252d60();
        func_0x00010ae06f08(0,1,&UNK_10f6aaee5,&UNK_10f6ab001,0x76,&UNK_10f6ab0a3,in_x6,in_x7,uVar1)
        ;
      }
    }
  }
  else {
    func_0x00010befa4c0(*(undefined8 *)(param_1 + 8));
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c250140();
    if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf52110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_copyNextFrame_1125b21e8);
      return;
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c09e560();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x00010ae06f08(0,1,&UNK_10f6aaee5,&UNK_10f6ab001,0x70,&UNK_10f6ab028,in_x6,in_x7,uVar4,
                          uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 10ad7bc94; end: 10ad7be73; -[LSASequentialVideoPlayer copyNextFrame] */

void FUN_10ad7bc94(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long *extraout_x8;
  undefined *unaff_x23;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 auStack_78 [3];
  
  uVar7 = (undefined4)((ulong)param_1 >> 0x20);
  uVar6 = (undefined4)param_1;
  if (*(long *)(param_2 + 0x78) != 0) {
    _CFRelease();
  }
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010bf52120();
  *(long *)(param_2 + 0x78) = lVar1;
  if (lVar1 == 0) {
    lVar1 = 9;
    do {
      lVar2 = *(long *)(param_2 + 8);
      func_0x00010c252d60();
      if (lVar2 != 3) {
        if (lVar2 != 1) {
          if (lVar2 == 2) {
            return;
          }
          if (lVar2 != 4) {
            FUN_10a00946c(&UNK_10f6ab255);
            goto LAB_10ad7be38;
          }
          FUN_10a00946c(&UNK_10f6ab203);
        }
        if (lVar1 != 0) {
          auStack_78[0] = 1000000;
          __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
                    (auStack_78);
          return;
        }
LAB_10ad7be44:
        puVar4 = &UNK_10f6ab0d1;
        FUN_10a00946c();
        _objc_release(unaff_x23);
        __Unwind_Resume();
        puVar5 = puVar4;
        func_0x00010c072f20();
        if ((((ulong)puVar5 & 1) == 0) && (lVar1 = *(long *)(puVar4 + 0x78), lVar1 != 0)) {
          _CMSampleBufferGetImageBuffer();
          *extraout_x8 = lVar1;
          if (lVar1 != 0) {
            _CFRetain();
          }
          return;
        }
        *extraout_x8 = 0;
        return;
      }
      if (lVar1 == 0) {
LAB_10ad7be38:
        FUN_10a00946c(&UNK_10f6ab19f);
        goto LAB_10ad7be44;
      }
      if ((bRam000000011330a9e8 & 1) != 0) {
        unaff_x23 = *(undefined **)(param_2 + 8);
        func_0x00010bf987e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = unaff_x23;
        func_0x00010c09e4e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        puVar4 = &DAT_10f306b93;
        if (puVar3 != (undefined *)0x0) {
          puVar4 = puVar3;
        }
        func_0x00010ae06f08(0,1,&UNK_10f6aaee5,&UNK_10f6ab121,0x93,&UNK_10f6ab14b,in_x6,in_x7,puVar4
                           );
        _objc_release(puVar5);
        _objc_release(unaff_x23);
      }
      auStack_78[0] = 1000000000;
      __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
                (auStack_78);
      lVar2 = *(long *)(param_2 + 0x10);
      func_0x00010bf52120();
      *(long *)(param_2 + 0x78) = lVar2;
      lVar1 = lVar1 + -1;
    } while (lVar2 == 0);
  }
  _CMSampleBufferGetPresentationTimeStamp(auStack_78);
  _CMTimeGetSeconds(auStack_78);
  *(float *)(param_2 + 0x34) = (float)(double)CONCAT44(uVar7,uVar6);
  return;
}



/* Entry: 10ad7be74; end: 10ad7bebb; -[LSASequentialVideoPlayer getCurrentFrame] */

void FUN_10ad7be74(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x00010c072f20();
  if (((uVar1 & 1) == 0) && (lVar2 = *(long *)(param_2 + 0x78), lVar2 != 0)) {
    _CMSampleBufferGetImageBuffer();
    *param_1 = lVar2;
    if (lVar2 != 0) {
      _CFRetain();
    }
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10ad7bebc; end: 10ad7bee7; -[LSASequentialVideoPlayer currentFrameIsValid] */

bool FUN_10ad7bebc(long param_1)

{
  return 1.1920928955078125e-07 < *(double *)(param_1 + 0x38) - (double)*(float *)(param_1 + 0x34)
         && *(long *)(param_1 + 0x78) != 0;
}



/* Entry: 10ad7bee8; end: 10ad7bf5b; -[LSASequentialVideoPlayer _stepNextFrame] */

void FUN_10ad7bee8(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x25) & 1) == 0) {
    func_0x00010bf52100();
    uVar1 = param_1;
    func_0x00010bf5ec60();
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 8);
      func_0x00010c252d60();
      if (lVar2 == 1) {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        if (*(char *)(param_1 + 0x24) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c13bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_restart_11262c9e8);
          return;
        }
        *(undefined1 *)(param_1 + 0x25) = 1;
      }
    }
  }
  return;
}



/* Entry: 10ad7bf5c; end: 10ad7c063; -[LSASequentialVideoPlayer continueFromStart] */

void FUN_10ad7bf5c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [48];
  
  lVar3 = *(long *)(param_1 + 0x78);
  while (lVar3 != 0) {
    func_0x00010bf52100(param_1);
    lVar3 = *(long *)(param_1 + 0x78);
  }
  uStack_78 = *(undefined8 *)((long)PTR__kCMTimeZero_110348670 + 8);
  uStack_80 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_70 = *(undefined8 *)((long)PTR__kCMTimeZero_110348670 + 0x10);
  uStack_98 = *(undefined8 *)((long)PTR__kCMTimePositiveInfinity_110348658 + 8);
  uStack_a0 = *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
  uStack_90 = *(undefined8 *)((long)PTR__kCMTimePositiveInfinity_110348658 + 0x10);
  _CMTimeRangeMake(auStack_60,&uStack_80,&uStack_a0);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010befa120();
  func_0x00010c138b80(*(undefined8 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10ad7c064; end: 10ad7c09b; -[LSASequentialVideoPlayer stepByCount:] */

void FUN_10ad7c064(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      func_0x00010bec29c0(param_1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10ad7c09c; end: 10ad7c0c3; -[LSASequentialVideoPlayer restart] */

void FUN_10ad7c09c(long param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  func_0x00010bf4fbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bf52110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_copyNextFrame_1125b21e8);
  return;
}



/* Entry: 10ad7c0c4; end: 10ad7c0d7; -[LSASequentialVideoPlayer preferredTransform] */

void FUN_10ad7c0c4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  param_1[1] = *(undefined8 *)(param_2 + 0x48);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  param_1[5] = *(undefined8 *)(param_2 + 0x68);
  param_1[4] = uVar1;
  return;
}



/* Entry: 10ad7c0d8; end: 10ad7c1d3; -[LSASequentialVideoPlayer isReady] */

bool FUN_10ad7c0d8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c252d60();
  if (1 < lVar1 - 1U) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar2 != 0) && ((bRam000000011330a9e8 & 1) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x00010ae06f08(0,1,&UNK_10f6aaee5,&UNK_10f6ab2ba,0xec,&UNK_10f6aafbb,in_x6,in_x7,uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
  return lVar1 - 1U < 2;
}



/* Entry: 10ad7c1d4; end: 10ad7c1db; -[LSASequentialVideoPlayer isFinished] */

undefined1 FUN_10ad7c1d4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x25);
}



/* Entry: 10ad7c1dc; end: 10ad7c1e3; -[LSASequentialVideoPlayer playCount] */

undefined4 FUN_10ad7c1dc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 10ad7c1e4; end: 10ad7c1eb; -[LSASequentialVideoPlayer currentFrameIndex] */

undefined4 FUN_10ad7c1e4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



/* Entry: 10ad7c1ec; end: 10ad7c213; -[LSASequentialVideoPlayer inputPath] */

void FUN_10ad7c1ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ad7c214; end: 10ad7c21b; -[LSASequentialVideoPlayer transform] */

undefined4 FUN_10ad7c214(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



/* Entry: 10ad7c21c; end: 10ad7c223; -[LSASequentialVideoPlayer framerate] */

undefined4 FUN_10ad7c21c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



/* Entry: 10ad7c224; end: 10ad7c22b; -[LSASequentialVideoPlayer presentationTime] */

undefined4 FUN_10ad7c224(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



/* Entry: 10ad7c22c; end: 10ad7c2a3; -[LSASequentialVideoPlayer dealloc] */

void FUN_10ad7c22c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_112701298;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10ad7c2a4; end: 10ad7c2df; -[LSASequentialVideoPlayer .cxx_destruct] */

void FUN_10ad7c2a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad7c2e0; end: 10ad7c2e7; -[LSASequentialVideoPlayer .cxx_construct] */

void FUN_10ad7c2e0(long param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



/* Entry: 10ad7c2e8; end: 10ad7c3c3;  */

undefined8 * FUN_10ad7c2e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  *param_1 = &PTR_FUN_110c721e8;
  uVar1 = 0x10;
  __Znwm();
  FUN_10ad7c744();
  param_1[1] = uVar1;
  uVar1 = param_2;
  func_0x00010c065d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x000107c2b054(param_1 + 2,uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10ad7c3c4; end: 10ad7c437;  */

void FUN_10ad7c3c4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10a470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (**(undefined8 **)(param_1 + 8),PTR_s_prepareWithLoop__112620338,param_2);
  return;
}



/* Entry: 10ad7c438; end: 10ad7c4df;  */

void FUN_10ad7c438(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  plVar1 = (long *)(*(long **)(param_2 + 8))[1];
  if (**(long **)(param_2 + 8) == 0) {
    uStack_38 = 0;
  }
  else {
    func_0x00010bfc4520(&uStack_38);
    if (**(long **)(param_2 + 8) != 0) {
      func_0x00010c106f40(&uStack_70);
      goto LAB_10ad7c490;
    }
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
LAB_10ad7c490:
  (**(code **)(*plVar1 + 0x10))(param_1,plVar1,&uStack_38,&uStack_70,1);
  FUN_10ad579f0(&uStack_38);
  return;
}



/* Entry: 10ad7c4e0; end: 10ad7c4e7;  */

long FUN_10ad7c4e0(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 10ad7c4e8; end: 10ad7c55b;  */

void FUN_10ad7c4e8(undefined8 *param_1,long param_2)

{
  long lStack_28;
  
  if (**(long **)(param_2 + 8) == 0) {
    lStack_28 = 0;
  }
  else {
    func_0x00010bfc4520(&lStack_28);
    if (lStack_28 != 0) {
      FUN_10ad5228c(param_1,lStack_28,0);
      goto LAB_10ad7c530;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_10ad7c530:
  FUN_10ad579f0(&lStack_28);
  return;
}



/* Entry: 10ad7c55c; end: 10ad7c6cb;  */

void FUN_10ad7c55c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined1 uStack_40;
  long lStack_38;
  
  plVar2 = &lStack_d0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (**(long **)(param_2 + 8) == 0) {
    lStack_d0 = 0;
  }
  else {
    func_0x00010bfc4520(&lStack_d0);
    if (lStack_d0 != 0) {
      FUN_10ad51d24(auStack_c8,lStack_d0,0,0xffffffff,0xffffffff);
      puVar1 = (undefined8 *)0xa8;
      __Znwm();
      puVar1[6] = uStack_b0;
      puVar1[5] = uStack_b8;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_FUN_110baa4d8;
      puVar1[8] = uStack_a0;
      puVar1[7] = uStack_a8;
      puVar1[10] = uStack_90;
      puVar1[9] = uStack_98;
      *(undefined1 *)(puVar1 + 4) = 0;
      puVar1[3] = &PTR_FUN_110bab9a0;
      puVar1[0xb] = 0;
      puVar1[0xc] = uStack_80;
      (*(code *)ppuStack_78[2])(puVar1 + 0xd,&ppuStack_78);
      *(undefined1 *)(puVar1 + 0x14) = uStack_40;
      uStack_80 = 0x109d138c8;
      (*(code *)*ppuStack_78)(&ppuStack_78);
      ppuStack_78 = &PTR_DAT_110b3e838;
      pcStack_70 = FUN_10a1b2664;
      *param_1 = puVar1 + 3;
      param_1[1] = puVar1;
      FUN_10a1b2b9c(auStack_c8);
      goto LAB_10ad7c668;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_10ad7c668:
  FUN_10ad579f0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a1b2b9c(auStack_c8);
  FUN_10ad579f0(&lStack_d0);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010c27a470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (**(undefined8 **)((long)plVar2 + 8),PTR_s_transform_11267c340);
  return;
}



/* Entry: 10ad7c6cc; end: 10ad7c6d7;  */

void FUN_10ad7c6cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27a470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(**(undefined8 **)(param_1 + 8),PTR_s_transform_11267c340);
  return;
}



/* Entry: 10ad7c6d8; end: 10ad7c71f;  */

undefined8 * FUN_10ad7c6d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c721e8;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  FUN_10ad7c7d0(param_1 + 1,0);
  return param_1;
}



/* Entry: 10ad7c720; end: 10ad7c723;  */

undefined8 * FUN_10ad7c720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c721e8;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  FUN_10ad7c7d0(param_1 + 1,0);
  return param_1;
}



/* Entry: 10ad7c724; end: 10ad7c737;  */

void FUN_10ad7c724(void)

{
  FUN_10ad7c6d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad7c738; end: 10ad7c743;  */

undefined1  [16] FUN_10ad7c738(void)

{
  return ZEXT816(0);
}



/* Entry: 10ad7c744; end: 10ad7c7cf;  */

undefined8 * FUN_10ad7c744(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  _objc_retain(param_2);
  *param_1 = 0;
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  puVar1[0xb] = 0;
  *puVar1 = &PTR_FUN_110c72148;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  *param_1 = param_2;
  param_1[1] = puVar1;
  _objc_release(0);
  return param_1;
}



/* Entry: 10ad7c7d0; end: 10ad7c7f7;  */

void FUN_10ad7c7d0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10ad7c7f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad7c7f8; end: 10ad7c843;  */

undefined8 * FUN_10ad7c7f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = *param_1;
  *param_1 = 0;
  _objc_release(uVar1);
  plVar2 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  _objc_release(*param_1);
  return param_1;
}



/* Entry: 10ad7c844; end: 10ad7c8c3; +[LSAURLAssetWithAssociatedObject URLAssetWithURL:options:associatedObject:] */

void FUN_10ad7c844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c057b00();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ad7c8c4; end: 10ad7c957; -[LSAURLAssetWithAssociatedObject initWithURL:options:associatedObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10ad7c8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1127012a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithURL_options__1125f38c8,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112784140;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10ad7c958; end: 10ad7c96b; -[LSAURLAssetWithAssociatedObject .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad7c958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112784140,0);
  return;
}



/* Entry: 10ad7c96c; end: 10ad7c9e7;  */

void FUN_10ad7c96c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm();
  FUN_10ad81ac0();
  *param_1 = uVar1;
  return;
}



/* Entry: 10ad7c9e8; end: 10ad7ca53;  */

void FUN_10ad7c9e8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm();
  FUN_10ad81ac0();
  *param_1 = uVar1;
  return;
}



/* Entry: 10ad7ca54; end: 10ad7cc13;  */

void FUN_10ad7ca54(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *extraout_x8;
  long lStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126de0a8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012f00();
  _objc_release(puVar2);
  if (*(char *)(param_2 + 8) == '\x01') {
    func_0x00010c0d3ea0(puVar1);
  }
  if (*(char *)(param_2 + 9) == '\x01') {
    func_0x00010c2640e0(puVar1);
  }
  plVar3 = (long *)0x30;
  __Znwm();
  FUN_10ad7f490();
  plVar5 = param_4 + 1;
  if (*(char *)(*plVar5 + 8) == '\x01') {
    lStack_88 = *param_4;
    param_4 = &lStack_88;
    (**(code **)(*plVar5 + 0x18))(apuStack_80);
    (**(code **)(*plVar3 + 0x90))(plVar3);
    (*(code *)*apuStack_80[0])(apuStack_80);
  }
  *param_1 = plVar3;
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_80[0])(param_4 + 1);
  (**(code **)(*plVar3 + 8))(plVar3);
  _objc_release(puVar1);
  __Unwind_Resume(puVar2);
  puVar1 = PTR_PTR_1126de0a0;
  _objc_alloc(PTR_PTR_1126de0a0);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01e0e0(puVar1);
  _objc_release(puVar2);
  uVar4 = 0x28;
  __Znwm();
  FUN_10ad7c2e8();
  *extraout_x8 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ad7cc14; end: 10ad7ccd7;  */

void FUN_10ad7cc14(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126de0a0;
  _objc_alloc(PTR_PTR_1126de0a0);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01e0e0(puVar1);
  _objc_release(puVar2);
  uVar3 = 0x28;
  __Znwm();
  FUN_10ad7c2e8();
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ad7ccd8; end: 10ad7cd9b;  */

void FUN_10ad7ccd8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126de0b0;
  _objc_alloc(PTR_PTR_1126de0b0);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059ea0(puVar1);
  _objc_release(puVar2);
  uVar3 = 0x30;
  __Znwm();
  FUN_10ad7f490();
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ad7cd9c; end: 10ad7cda3;  */

void FUN_10ad7cd9c(void)

{
  return;
}



/* Entry: 10ad7cda4; end: 10ad7cfb7; -[LSAVideoPlayer initWithFilepath:] */

undefined1 * FUN_10ad7cda4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1127012a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__kCMTimeInvalid_110348648;
    *(undefined1 *)((long)puVar1 + 9) = 0;
    uVar2 = *(undefined8 *)puVar3;
    *(undefined8 *)((long)puVar1 + 0x78) = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x80) = *(undefined8 *)(puVar3 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x28) = 0x7fffffffffffffff;
    puVar3 = PTR__CGAffineTransformIdentity_110347008;
    uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    *(undefined8 *)((long)puVar1 + 0xb8) =
         *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    *(undefined8 *)((long)puVar1 + 0xb0) = uVar2;
    *(undefined8 *)((long)puVar1 + 200) = uVar5;
    *(undefined8 *)((long)puVar1 + 0xc0) = uVar4;
    uVar2 = *(undefined8 *)(puVar3 + 0x20);
    *(undefined8 *)((long)puVar1 + 0xd8) = *(undefined8 *)(puVar3 + 0x28);
    *(undefined8 *)((long)puVar1 + 0xd0) = uVar2;
    *(undefined1 *)((long)puVar1 + 0xb) = 0;
    *(undefined8 *)((long)puVar1 + 0x60) = 0x3ff0000000000000;
    func_0x00010c1c7b20(0,puVar1);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ad7cfb8; end: 10ad7d03b; -[LSAVideoPlayer setupInitialAudioState] */

void FUN_10ad7cfb8(long param_1)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    func_0x00010c2640e0(param_1);
  }
  func_0x00010c2241a0(*(undefined8 *)(param_1 + 0x60),param_1);
  if (*(char *)(param_1 + 0xb) == '\x01') {
    func_0x00010c0d3ea0(param_1);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad7d03c; end: 10ad7d443; -[LSAVideoPlayer createRegularPlayer] */

undefined * FUN_10ad7d03c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *apuStack_110 [7];
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(*(long *)(param_1 + 0xe8) + 8) == '\x01') {
    puVar1 = *(undefined **)(param_1 + 0x48);
    func_0x00010c279200(puVar1,param_2,*(undefined8 *)PTR__AVMediaTypeAudio_110348070);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar9 != (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
      func_0x00010c100be0(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = PTR_PTR_1126de0b8;
      _objc_alloc();
      uStack_88 = *(undefined8 *)(param_1 + 0xe0);
      unaff_x24 = &uStack_88;
      (**(code **)(*(long *)(param_1 + 0xe8) + 0x18))(apuStack_80,(long *)(param_1 + 0xe8));
      puVar2 = unaff_x23;
      func_0x00010bff5200();
      puVar10 = (undefined8 *)(param_1 + 0x68);
      uVar8 = *puVar10;
      *puVar10 = puVar2;
      _objc_release(uVar8);
      (*(code *)*apuStack_80[0])(apuStack_80);
      uVar8 = *puVar10;
      func_0x00010bf0f320(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16be60(puVar1);
      _objc_release(uVar8);
      puVar2 = PTR__OBJC_CLASS___AVPlayer_1126bf5e8;
      func_0x00010c101120();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar2;
      _objc_release(uVar8);
      _objc_release(puVar1);
      goto LAB_10ad7d204;
    }
  }
  puVar9 = PTR__OBJC_CLASS___AVPlayer_1126bf5e8;
  if (*(long *)(param_1 + 0x48) == 0) {
    _objc_opt_new();
    puVar1 = *(undefined **)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar9;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
    func_0x00010c100be0(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101120();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar9;
    _objc_release(uVar8);
  }
  _objc_release(puVar1);
  puVar9 = (undefined *)0x0;
LAB_10ad7d204:
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf5f0a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf57660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa4c0(uVar8);
  _objc_release(lVar3);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf5f0a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_status_112672580;
  _NSStringFromSelector(PTR_s_status_112672580);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa220(uVar8);
  _objc_release(puVar1);
  _objc_release(uVar8);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar1);
  _objc_release(uVar8);
  _objc_release(puVar1);
  func_0x00010c228c60(param_1);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(uVar8);
  _objc_release(puVar1);
  _objc_release(puVar9);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar6 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  pcStack_98 = FUN_10ad7d444;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = *(undefined **)(puVar4 + 0x48);
  puVar5 = puVar11;
  puStack_d0 = unaff_x24;
  puStack_c8 = unaff_x23;
  uStack_c0 = uVar8;
  puStack_b8 = puVar1;
  puStack_b0 = puVar2;
  puStack_a8 = puVar9;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (puVar11 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    _objc_opt_new(PTR__OBJC_CLASS___AVAsset_1126aff38);
  }
  func_0x00010c100be0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  if (puVar11 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  if (*(char *)(*(long *)(puVar4 + 0xe8) + 8) == '\x01') {
    lVar7 = *(long *)(puVar4 + 0x48);
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    if (lVar3 != 0) {
      puVar9 = PTR_PTR_1126de0b8;
      _objc_alloc();
      (**(code **)(*(long *)(puVar4 + 0xe8) + 0x18))(apuStack_110,puVar4 + 0xe8);
      func_0x00010bff5200();
      puVar10 = (undefined8 *)(puVar4 + 0x68);
      uVar8 = *puVar10;
      *puVar10 = puVar9;
      _objc_release(uVar8);
      (*(code *)*apuStack_110[0])(apuStack_110);
      uVar8 = *puVar10;
      func_0x00010bf0f320(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16be60(puVar6);
      _objc_release(uVar8);
    }
    _objc_release(lVar3);
  }
  puVar9 = PTR__OBJC_CLASS___AVQueuePlayer_1126de0c0;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11e000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_retain(puVar9);
  uVar8 = *(undefined8 *)(puVar4 + 0x38);
  *(undefined **)(puVar4 + 0x38) = puVar9;
  _objc_release(uVar8);
  puVar1 = PTR__OBJC_CLASS___AVPlayerLooper_1126dbce0;
  func_0x00010c100ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = (undefined8 *)(puVar4 + 0x30);
  uVar8 = *puVar10;
  *puVar10 = puVar1;
  _objc_release(uVar8);
  uVar8 = *puVar10;
  puVar1 = PTR_s_status_112672580;
  _NSStringFromSelector(PTR_s_status_112672580);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa220(uVar8);
  _objc_release(puVar1);
  func_0x00010c228c60(puVar4);
  _objc_release(puVar9);
  puVar2 = puVar6;
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar9);
  _objc_release(puVar6);
  __Unwind_Resume(puVar2);
  return (undefined *)0x1;
}



/* Entry: 10ad7d444; end: 10ad7d75b; -[LSAVideoPlayer createLooperAndQueuePlayer] */

undefined * FUN_10ad7d444(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = *(undefined **)(param_1 + 0x48);
  puVar1 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    _objc_opt_new(PTR__OBJC_CLASS___AVAsset_1126aff38);
  }
  func_0x00010c100be0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  if (*(char *)(*(long *)(param_1 + 0xe8) + 8) == '\x01') {
    lVar3 = *(long *)(param_1 + 0x48);
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      puVar1 = PTR_PTR_1126de0b8;
      _objc_alloc();
      (**(code **)(*(long *)(param_1 + 0xe8) + 0x18))(apuStack_80,(long *)(param_1 + 0xe8));
      func_0x00010bff5200();
      puVar8 = (undefined8 *)(param_1 + 0x68);
      uVar6 = *puVar8;
      *puVar8 = puVar1;
      _objc_release(uVar6);
      (*(code *)*apuStack_80[0])(apuStack_80);
      uVar6 = *puVar8;
      func_0x00010bf0f320(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16be60(puVar2);
      _objc_release(uVar6);
    }
    _objc_release(lVar4);
  }
  puVar1 = PTR__OBJC_CLASS___AVQueuePlayer_1126de0c0;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11e000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_retain(puVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar6);
  puVar7 = PTR__OBJC_CLASS___AVPlayerLooper_1126dbce0;
  func_0x00010c100ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = (undefined8 *)(param_1 + 0x30);
  uVar6 = *puVar8;
  *puVar8 = puVar7;
  _objc_release(uVar6);
  uVar6 = *puVar8;
  puVar7 = PTR_s_status_112672580;
  _NSStringFromSelector(PTR_s_status_112672580);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa220(uVar6);
  _objc_release(puVar7);
  func_0x00010c228c60(param_1);
  _objc_release(puVar1);
  puVar5 = puVar2;
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar2);
  __Unwind_Resume(puVar5);
  return (undefined *)0x1;
}



/* Entry: 10ad7d75c; end: 10ad7d763; -[LSAVideoPlayer supportsLooper] */

undefined8 FUN_10ad7d75c(void)

{
  return 1;
}



/* Entry: 10ad7d764; end: 10ad7d9ef; -[LSAVideoPlayer prepareWithRate:loop:initialTimeSec:] */

void FUN_10ad7d764(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined **unaff_x22;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  if (*(long *)(param_3 + 0x38) == 0) {
    param_3[10] = param_5;
    *(undefined4 *)(param_3 + 0x10) = param_1;
    *(undefined4 *)(param_3 + 0x14) = param_2;
    puVar1 = PTR_PTR_1126de098;
    func_0x00010c29acc0(PTR_PTR_1126de098,param_4,*(undefined8 *)(param_3 + 0x50));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_3 + 0x48);
    *(undefined **)(param_3 + 0x48) = puVar1;
    _objc_release(uVar5);
    if ((*(long *)(param_3 + 0x48) == 0) && ((bRam000000011330a9e8 & 1) != 0)) {
      uVar5 = *(undefined8 *)(param_3 + 0x50);
      func_0x00010bdc3520();
      uStack_a0 = uVar5;
      func_0x00010ae06f08(0,1,&UNK_10f6ab2de,&UNK_10f6ab310,0xa0,&UNK_10f6ab347);
    }
    if ((param_3[10] == '\x01') && (puVar1 = param_3, func_0x00010c2638c0(), (int)puVar1 != 0)) {
      func_0x00010bf57000(param_3);
    }
    else {
      func_0x00010bf582e0(param_3);
    }
    puVar1 = PTR_s_duration_1125c0600;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_s_tracks_11267be90;
    puStack_60 = puVar1;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_s_preferredTransform_11261f5f0;
    puStack_58 = puVar2;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_initWeak(auStack_68,param_3);
    func_0x00010bf0af00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10ad7d9f0;
    puStack_78 = &UNK_110876b10;
    unaff_x22 = &puStack_90;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c09c640(param_3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    puVar1 = unaff_x20;
    _objc_release();
    unaff_x21 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x22 + 4);
  _objc_release(unaff_x21);
  _objc_destroyWeak(auStack_68);
  _objc_release(unaff_x20);
  puVar2 = puVar1;
  __Unwind_Resume();
  pcStack_a8 = FUN_10ad7d9f0;
  puVar2 = puVar2 + 0x20;
  ppuStack_d0 = unaff_x22;
  puStack_c8 = unaff_x20;
  puStack_c0 = unaff_x20;
  puStack_b8 = puVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    func_0x00010c0da9e0(puVar4);
    func_0x00010c1cb300(puVar2);
    puVar1 = puVar2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_e8,puVar1);
    }
    uStack_118 = uStack_e0;
    uStack_120 = uStack_e8;
    uStack_110 = uStack_d8;
    func_0x00010c192d40(puVar2);
    _objc_release(puVar1);
    func_0x00010c0d5960(puVar2);
    puVar1 = puVar2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_120,puVar1);
    }
    func_0x00010c1cfb40(puVar2);
    _objc_release(puVar1);
    if (puVar4 == (undefined *)0x0) {
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
    }
    else {
      func_0x00010c106f40(&uStack_120,puVar4);
    }
    uStack_100 = 0;
    uStack_f8 = 0;
    func_0x00010c1e0300(puVar2);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  return;
}



/* Entry: 10ad7d9f0; end: 10ad7dbe3;  */

void FUN_10ad7d9f0(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c0da9e0(lVar3);
    func_0x00010c1cb300(param_2,param_3,(long)param_1);
    lVar1 = param_2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      func_0x00010bf8b160(&lStack_48,lVar1);
    }
    uStack_78 = uStack_40;
    lStack_80 = lStack_48;
    uStack_70 = uStack_38;
    func_0x00010c192d40(param_2,param_3,&lStack_80);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c0d5960(param_2);
    lVar2 = param_2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010bf8b160(&lStack_80,lVar2);
    }
    func_0x00010c1cfb40(param_2,param_3,lStack_80 * lVar1);
    _objc_release(lVar2);
    if (lVar3 == 0) {
      uStack_78 = 0;
      lStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010c106f40(&lStack_80,lVar3);
    }
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_a8 = uStack_78;
    lStack_b0 = lStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = 0;
    uStack_90 = 0;
    func_0x00010c1e0300(param_2,param_3,&lStack_b0);
    _objc_release(lVar3);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10ad7dbe4; end: 10ad7dc07; -[LSAVideoPlayer relativeTimeToSec:] */

float FUN_10ad7dbe4(float param_1)

{
  float fVar1;
  
  fVar1 = param_1;
  func_0x00010bfc5060();
  return param_1 * fVar1;
}



/* Entry: 10ad7dc08; end: 10ad7dd53; -[LSAVideoPlayer seekSec:] */

void FUN_10ad7dc08(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_sync_enter(param_2);
  lVar1 = *(long *)(param_2 + 0x38);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar3 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_58,lVar2);
    uVar3 = uStack_50 & 0xffffffff;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _CMTimeMakeWithSeconds(&uStack_58,(double)(float)param_1,uVar3);
  func_0x00010c1c7b20(param_1,param_2);
  uStack_68 = uStack_50;
  uStack_70 = uStack_58;
  uStack_60 = uStack_48;
  uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_b0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_a0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_90 = uStack_b0;
  uStack_88 = uStack_a8;
  uStack_80 = uStack_a0;
  func_0x00010c1572c0(*(undefined8 *)(param_2 + 0x38),param_3,&uStack_70,&uStack_90,&uStack_b0);
  _objc_sync_exit(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10ad7dd54; end: 10ad7de07; -[LSAVideoPlayer getDurationSec] */

float FUN_10ad7dd54(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(param_2 + 0x38);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_58,lVar2);
  }
  _CMTimeGetSeconds(&uStack_58);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return (float)param_1;
}



/* Entry: 10ad7de08; end: 10ad7de0f; -[LSAVideoPlayer resume] */

void FUN_10ad7de08(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c289110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateRate_11267fe68);
  return;
}



/* Entry: 10ad7de10; end: 10ad7de1b; -[LSAVideoPlayer pause] */

void FUN_10ad7de10(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c289110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateRate_11267fe68);
  return;
}



/* Entry: 10ad7de1c; end: 10ad7de97; -[LSAVideoPlayer updateRate] */

void FUN_10ad7de1c(long param_1)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  if (((*(byte *)(param_1 + 8) & 1) == 0) && (*(char *)(param_1 + 0xc) != '\x01')) {
    func_0x00010c1e7640(*(undefined4 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x38));
  }
  else {
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x38));
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ad7de98; end: 10ad7deab; -[LSAVideoPlayer preferredTransform] */

void FUN_10ad7de98(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  uVar3 = *(undefined8 *)(param_2 + 200);
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  param_1[1] = *(undefined8 *)(param_2 + 0xb8);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  param_1[5] = *(undefined8 *)(param_2 + 0xd8);
  param_1[4] = uVar1;
  return;
}



/* Entry: 10ad7deac; end: 10ad7deb3; -[LSAVideoPlayer setPlaybackRate:] */

void FUN_10ad7deac(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c289110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_updateRate_11267fe68);
  return;
}



/* Entry: 10ad7deb4; end: 10ad7debb; -[LSAVideoPlayer playbackRate] */

undefined4 FUN_10ad7deb4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10ad7debc; end: 10ad7df33; -[LSAVideoPlayer setVolume:] */

void FUN_10ad7debc(double param_1,long param_2)

{
  _objc_retain();
  _objc_sync_enter(param_2);
  *(double *)(param_2 + 0x60) = param_1;
  if (((*(byte *)(param_2 + 0xb) & 1) == 0) && (*(long *)(param_2 + 0x38) != 0)) {
    func_0x00010c2241a0((float)param_1);
  }
  _objc_sync_exit(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad7df34; end: 10ad7df7b; -[LSAVideoPlayer volume] */

undefined8 FUN_10ad7df34(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10ad7df7c; end: 10ad7df83; -[LSAVideoPlayer isPaused] */

undefined1 FUN_10ad7df7c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10ad7df84; end: 10ad7df93; -[LSAVideoPlayer sampleRate] */

void FUN_10ad7df84(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c149850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x68),PTR_s_sampleRate_112630030);
    return;
  }
  return;
}


