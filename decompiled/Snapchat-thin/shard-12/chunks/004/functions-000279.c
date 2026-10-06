/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090b0418; end: 1090b041f; -[SCNeoPlayerEventLogger didTeardownSubtitleManager] */

void FUN_1090b0418(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(char *)(lVar2 + 0x60) == '\x01') {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x10) + 8);
    for (lVar3 = *(long *)(lVar2 + 0x18) << 4; lVar3 != 0; lVar3 = lVar3 + -0x10) {
      if (*(uint *)(puVar1 + -1) < 3) {
        (*(code *)*puVar1)(2,*(undefined4 *)(lVar2 + 0x50),lVar2 + 0x48,&UNK_10f550f74,
                           &stack0x00000000);
      }
      puVar1 = puVar1 + 2;
    }
  }
  return;
}



/* Entry: 1090b0420; end: 1090b0427; -[SCNeoPlayerEventLogger didRecreateSubtitleManager] */

void FUN_1090b0420(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(char *)(lVar2 + 0x60) == '\x01') {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x10) + 8);
    for (lVar3 = *(long *)(lVar2 + 0x18) << 4; lVar3 != 0; lVar3 = lVar3 + -0x10) {
      if (*(uint *)(puVar1 + -1) < 3) {
        (*(code *)*puVar1)(2,*(undefined4 *)(lVar2 + 0x50),lVar2 + 0x48,&UNK_10f550f8e,
                           &stack0x00000000);
      }
      puVar1 = puVar1 + 2;
    }
  }
  return;
}



/* Entry: 1090b0428; end: 1090b04ab; -[SCNeoPlayerEventLogger didMapExternalIdentifierWithName:value:] */

void FUN_1090b0428(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x0001090b057c();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_109095bd4(auStack_38,param_3);
  FUN_109095bd4(auStack_40,param_4);
  func_0x0001090e4d04(uVar1,auStack_38,auStack_40);
  func_0x000107c278f4(auStack_40);
  func_0x0001090b0544();
  func_0x0001090b054c();
  return;
}



/* Entry: 1090b04ac; end: 1090b04b7; -[SCNeoPlayerEventLogger didResetVideoDecoderWithGenerationId:] */

void FUN_1090b04ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001090e4f20(*(undefined8 *)(param_1 + 0x10),param_3,&UNK_10f550fe4);
  return;
}



/* Entry: 1090b04b8; end: 1090b04c7; -[SCNeoPlayerEventLogger didIgnoreStaleVideoDecodeErrorCallbackWithCallbackGenerationId:currentGenerationId:] */

void FUN_1090b04b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001090e4f30(*(undefined8 *)(param_1 + 0x10),param_3,&UNK_10f551012);
  return;
}



/* Entry: 1090b04c8; end: 1090b04cf; -[SCNeoPlayerEventLogger timebase] */

undefined8 FUN_1090b04c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1090b04d0; end: 1090b04fb; -[SCNeoPlayerEventLogger .cxx_destruct] */

undefined8 * FUN_1090b04d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  FUN_109097138(*(undefined8 *)(param_1 + 0x10));
  return (undefined8 *)(param_1 + 0x10);
}



/* Entry: 1090b04fc; end: 1090b059b; -[SCNeoPlayerEventLogger .cxx_construct] */

void FUN_1090b04fc(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1090b059c; end: 1090b06b3; -[SCNeoPlayerHLSMediaInitSectionResolver initWithDataProvider:byteRange:queue:instruments:] */

undefined1 *
FUN_1090b059c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x0001090b0e10();
  puStack_48 = PTR_PTR_112700580;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001090b0e08();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x0001090b0e10();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release();
    func_0x0001090b0e88();
    puVar3 = PTR_PTR_1126dd478;
    func_0x00010c22bee0(PTR_PTR_1126dd478);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e700();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  func_0x0001090b0e50();
  func_0x0001090b0e68();
  func_0x0001090b0e00();
  return (undefined1 *)puVar1;
}



/* Entry: 1090b06b4; end: 1090b06f7; -[SCNeoPlayerHLSMediaInitSectionResolver dealloc] */

void FUN_1090b06b4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2e620();
  puStack_28 = PTR_PTR_112700580;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090b06f8; end: 1090b0727; -[SCNeoPlayerHLSMediaInitSectionResolver cancelLoad] */

void FUN_1090b06f8(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010bf2e640(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 1090b0728; end: 1090b091f; -[SCNeoPlayerHLSMediaInitSectionResolver _makeMutableInfoResolverCopy] */

void FUN_1090b0728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  undefined8 uStack_68;
  
  func_0x0001090b0edc();
  uStack_68 = extraout_x8;
  func_0x0001090b0e88();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x00010c25c600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x00010c25c5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d3c80();
  func_0x00010c04e700(param_1,param_2,uVar2,uVar3,*(undefined8 *)(unaff_x20 + 0x30),0);
  _objc_release(uVar3);
  func_0x0001090b0ea0();
  func_0x0001090b0e50();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uVar4 = *(ulong *)(unaff_x20 + 0x28);
  func_0x00010c277fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf52a60();
  if (uVar5 != 0) {
    lVar6 = *plStack_120;
    do {
      uVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(uVar4);
        }
        uVar3 = *(undefined8 *)(lStack_128 + uVar7 * 8);
        uVar2 = uVar3;
        func_0x00010c277e80(uVar3);
        func_0x00010c219000(param_1,param_2,uVar3,uVar2);
        uVar7 = uVar7 + 1;
        in_ZR = uVar7 == uVar5;
      } while (uVar7 < uVar5);
      uVar5 = uVar4;
      func_0x00010bf52a60(uVar4,param_2,&uStack_130,auStack_e8,0x10);
    } while (uVar5 != 0);
  }
  func_0x0001090b0e50();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_1090b0920;
  puStack_140 = &UNK_110ad8560;
  func_0x0001090b0e08();
  uStack_138 = param_1;
  func_0x00010bf98000(uVar3,param_2,&puStack_158);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  puStack_180 = puVar1;
  uStack_178 = 0xc2000000;
  uStack_170 = 0x1090b0948;
  puStack_168 = &UNK_110ad8590;
  func_0x0001090b0e08();
  uStack_160 = param_1;
  func_0x00010bf98020(uVar2,param_2,&puStack_180);
  func_0x0001090b0e08();
  func_0x0001090b0e68();
  _objc_release(uStack_138);
  func_0x0001090b0e00();
  func_0x0001090b0ec8(uStack_68);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
  func_0x0001090b0e40();
  func_0x0001090b0eb4();
  func_0x00010c1f53a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1090b0920; end: 1090b096f;  */

void FUN_1090b0920(void)

{
  func_0x0001090b0e40();
  func_0x0001090b0eb4();
  func_0x00010c1f53a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090b0970; end: 1090b0a87; -[SCNeoPlayerHLSMediaInitSectionResolver _notifyCallbacks] */

void FUN_1090b0970(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  ulong unaff_x20;
  ulong uVar6;
  ulong uVar7;
  
  func_0x0001090b0edc();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x0001090b0e08();
  uVar2 = *(ulong *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  _objc_release();
  func_0x0001090b0e08();
  func_0x0001090b0e2c();
  lVar1 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar5);
      }
      uVar6 = *(ulong *)(uVar7 * 8);
      if (*(long *)(unaff_x20 + 0x48) == 0) {
        uVar3 = unaff_x20;
        func_0x00010be5bec0();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(uVar6 + 0x10))(uVar6,uVar3,0);
        _objc_release();
      }
      else {
        (**(code **)(uVar6 + 0x10))(uVar6,0);
        uVar3 = uVar6;
      }
      uVar7 = uVar7 + 1;
      in_ZR = uVar7 == uVar2;
    } while (uVar7 < uVar2);
    func_0x0001090b0e2c();
    uVar2 = uVar3;
  }
  func_0x0001090b0e00();
  func_0x0001090b0e00();
  func_0x0001090b0ec8(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001090b0dd0();
  func_0x0001090b0e10();
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  if (param_4 == 0) {
    puVar4 = PTR_PTR_1126dd3d8;
    _objc_alloc(PTR_PTR_1126dd3d8);
    func_0x00010c01e480();
    func_0x00010bf06ae0();
    func_0x00010c08fa60(uVar5);
    func_0x00010c195f60(puVar4);
    func_0x00010c0f3ee0(*(undefined8 *)(unaff_x20 + 0x28));
    func_0x0001090b0e10();
    func_0x00010bf3a660(puVar4);
    func_0x0001090b0e10();
    func_0x0001090b0e7c();
    func_0x00010be645c0();
    func_0x0001090b0ea0();
  }
  else {
    func_0x0001090b0e10();
    func_0x0001090b0e7c();
    func_0x00010be645c0();
  }
  func_0x0001090b0e50();
  func_0x0001090b0e00();
  return;
}



/* Entry: 1090b0a88; end: 1090b0b53; -[SCNeoPlayerHLSMediaInitSectionResolver _didLoadData:error:] */

void FUN_1090b0a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_1090b0dd0();
  func_0x0001090b0e10();
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  if (param_4 == 0) {
    puVar1 = PTR_PTR_1126dd3d8;
    _objc_alloc(PTR_PTR_1126dd3d8);
    func_0x00010c01e480();
    func_0x00010bf06ae0();
    func_0x00010c08fa60();
    func_0x00010c195f60(puVar1,param_2,unaff_x19);
    uStack_38 = 0;
    func_0x00010c0f3ee0(*(undefined8 *)(unaff_x20 + 0x28),param_2,puVar1,&uStack_38);
    func_0x0001090b0e10();
    func_0x00010bf3a660(puVar1);
    func_0x0001090b0e10();
    func_0x0001090b0e7c();
    func_0x00010be645c0();
    func_0x0001090b0ea0();
  }
  else {
    func_0x0001090b0e10();
    func_0x0001090b0e7c();
    func_0x00010be645c0();
  }
  func_0x0001090b0e50();
  func_0x0001090b0e00();
  return;
}



/* Entry: 1090b0b54; end: 1090b0c33; -[SCNeoPlayerHLSMediaInitSectionResolver resolveMediaInfoWithCompletion:] */

void FUN_1090b0b54(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  FUN_1090b0dd0();
  if (*(char *)(unaff_x20 + 0x50) == '\x01') {
    if (*(long *)(unaff_x20 + 0x48) == 0) {
      func_0x00010be5bec0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(unaff_x19 + 0x10))();
      func_0x0001090b0e68();
    }
    else {
      (**(code **)(unaff_x19 + 0x10))();
    }
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 0x38);
    if (lVar3 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
      *(undefined **)(unaff_x20 + 0x38) = puVar1;
      _objc_release(uVar2);
      lVar3 = *(long *)(unaff_x20 + 0x38);
    }
    _objc_retainBlock();
    func_0x00010befa120(lVar3);
    func_0x0001090b0ea0();
    if (*(long *)(unaff_x20 + 0x40) == 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + 8);
      func_0x00010c09b2a0();
      *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090b0c34; end: 1090b0c97; -[SCNeoPlayerHLSMediaInitSectionResolver onLoadCompleted:] */

void FUN_1090b0c34(void)

{
  undefined8 unaff_x19;
  long unaff_x21;
  undefined1 auStack_38 [8];
  
  FUN_1090b0dd0();
  func_0x0001090b0ea8();
  func_0x0001090b0ef0();
  func_0x0001090b0de0(FUN_1090b0c98,0xc2000000);
  func_0x0001090b0e08();
  func_0x0001090b0e70();
  _objc_release(unaff_x19);
  func_0x0001090b0e00();
  _objc_destroyWeak(unaff_x21 + 0x28);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1090b0c98; end: 1090b0cc7;  */

void FUN_1090b0c98(undefined8 param_1)

{
  func_0x0001090b0e94();
  func_0x00010bdfe720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090b0cc8; end: 1090b0d2b; -[SCNeoPlayerHLSMediaInitSectionResolver onLoadFailed:] */

void FUN_1090b0cc8(void)

{
  undefined8 unaff_x19;
  long unaff_x21;
  undefined1 auStack_38 [8];
  
  FUN_1090b0dd0();
  func_0x0001090b0ea8();
  func_0x0001090b0ef0();
  func_0x0001090b0de0(FUN_1090b0d2c,0xc2000000);
  func_0x0001090b0e08();
  func_0x0001090b0e70();
  _objc_release(unaff_x19);
  func_0x0001090b0e00();
  _objc_destroyWeak(unaff_x21 + 0x28);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1090b0d2c; end: 1090b0d7f;  */

void FUN_1090b0d2c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001090b0e94();
  FUN_109096480(*(undefined8 *)(unaff_x19 + 0x20),&PTR____CFConstantStringClassReference_110f20df8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfe720(param_1);
  func_0x0001090b0e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090b0d80; end: 1090b0d83; -[SCNeoPlayerHLSMediaInitSectionResolver onDataSizeResolved:] */

void FUN_1090b0d80(void)

{
  return;
}



/* Entry: 1090b0d84; end: 1090b0dcf; -[SCNeoPlayerHLSMediaInitSectionResolver .cxx_destruct] */

void FUN_1090b0d84(long param_1)

{
  func_0x0001090b0e24(param_1 + 0x48);
  func_0x0001090b0e24(param_1 + 0x38);
  func_0x0001090b0e24(param_1 + 0x30);
  func_0x0001090b0e24(param_1 + 0x28);
  func_0x0001090b0e24(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090b0dd0; end: 1090b0f03;  */

void FUN_1090b0dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1090b0f04; end: 1090b110f; -[SCNeoPlayerHLSMediaSampleBufferProvider initWithURL:dataProviderFactory:mainPlaylistData:instruments:mediaAssetConfiguration:mediaQueue:delegate:] */

undefined1 *
FUN_1090b0f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x0001090b23e0();
  func_0x0001090b23c8();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112700588;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined8 *)((long)puVar1 + 0xb0) = param_8;
    _objc_release(uVar2);
    func_0x0001090b243c();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x0001090b23c8();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_9);
    puVar3 = PTR_PTR_1126dd4c0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x0001090b23d0(uVar2);
    puVar3 = PTR_PTR_1126dd4f8;
    _objc_alloc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb0);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00b460();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x0001090b23d0(uVar5);
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x20));
    func_0x00010c2174e0(*(undefined8 *)((long)puVar1 + 0x20));
    puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c087ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar4;
    func_0x0001090b23d0(uVar2);
    puVar4 = PTR_PTR_1126dd3e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar4;
    func_0x0001090b23d0(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_9);
  func_0x0001090b2454();
  func_0x0001090b2400();
  func_0x0001090b23d8();
  func_0x0001090b238c();
  func_0x0001090b23a4();
  func_0x0001090b2384();
  return (undefined1 *)puVar1;
}



/* Entry: 1090b1110; end: 1090b1157; -[SCNeoPlayerHLSMediaSampleBufferProvider dealloc] */

void FUN_1090b1110(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2e620(*(undefined8 *)(param_1 + 0x20));
  puStack_28 = PTR_PTR_112700588;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090b1158; end: 1090b1273; -[SCNeoPlayerHLSMediaSampleBufferProvider _findBestEntryWithStartTime:] */

void FUN_1090b1158(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 uStack_70;
  double dStack_68;
  long lStack_60;
  
  func_0x0001090b2464();
  if (param_1 != 0) {
    func_0x00010bf458e0(&uStack_70);
    dVar5 = dStack_68;
    uVar2 = uStack_70;
    uVar3 = *(undefined8 *)(unaff_x19 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
    func_0x00010bf97060(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97200();
    func_0x00010bf12880(dVar5,uVar3,param_2,uVar2,uVar1);
    func_0x0001090b2400();
    if (lStack_60 != 0) {
      uVar2 = *(undefined8 *)(unaff_x19 + 0x50);
      func_0x00010bf97060(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1585c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090b238c();
      func_0x00010c250f20(uVar2);
      dVar4 = dVar5;
      func_0x00010bf8b160(uVar2);
      dVar5 = dVar5 + dVar4;
      func_0x0001090b23d8();
      goto LAB_1090b121c;
    }
  }
  dVar5 = 0.0;
LAB_1090b121c:
  uVar2 = *(undefined8 *)(unaff_x19 + 0x88);
  func_0x00010c2831c0(uVar2);
  FUN_1090b1274(dVar5,&uStack_70);
  param_3[1] = dStack_68;
  *param_3 = uStack_70;
  param_3[2] = lStack_60;
  func_0x00010bf971c0(*(undefined8 *)(unaff_x19 + 0x20),param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090b1274; end: 1090b127f;  */

void FUN_1090b1274(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbb870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CMTimeMakeWithSeconds_110348450)(param_1,10000);
  return;
}



/* Entry: 1090b1280; end: 1090b12f7; -[SCNeoPlayerHLSMediaSampleBufferProvider _notifyHasNextSampleBuffersIfNeeded] */

void FUN_1090b1280(int param_1)

{
  int iVar1;
  long unaff_x19;
  
  func_0x0001090b2464();
  func_0x00010bfd9760();
  if (param_1 != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1496e0();
    func_0x0001090b23a4();
  }
  iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x58);
  func_0x00010bfd9700();
  if (iVar1 != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1496c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x19);
    return;
  }
  return;
}



/* Entry: 1090b12f8; end: 1090b13db; -[SCNeoPlayerHLSMediaSampleBufferProvider _getOrCreateHLSStreamForEntry:] */

void FUN_1090b12f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x0001090b23e0();
  puVar4 = *(undefined **)(param_1 + 0x78);
  func_0x0001090b241c();
  func_0x00010c0dff20(puVar4,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126bff60;
    _objc_alloc(PTR_PTR_1126bff60);
    func_0x00010c01e480();
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf12140(puVar4,param_2,uVar2);
    func_0x0001090b238c();
    puVar4 = PTR_PTR_1126dd500;
    _objc_alloc(PTR_PTR_1126dd500);
    func_0x00010c010160();
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    puVar3 = puVar4;
    func_0x0001090b241c();
    func_0x00010c1d0560(uVar2,param_2,puVar4,puVar3);
    func_0x0001090b23d8();
  }
  func_0x0001090b2384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1090b13dc; end: 1090b142f; -[SCNeoPlayerHLSMediaSampleBufferProvider _updateStartTimeAndSetActiveInPreparingStream:startTime:] */

void FUN_1090b13dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  uStack_30 = param_4[2];
  func_0x0001090b23e0();
  func_0x00010c209a20(param_3,param_2,&uStack_40);
  func_0x00010c162480(param_3,param_2,1);
  func_0x0001090b2384();
  return;
}



/* Entry: 1090b1430; end: 1090b1633; -[SCNeoPlayerHLSMediaSampleBufferProvider setPreparingMainEntry:preparingAudioEntry:startTime:] */

void FUN_1090b1430(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x0001090b23e0();
  func_0x0001090b23c8();
  uVar1 = *(ulong *)(param_1 + 0x60);
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != param_3) {
    func_0x0001090b245c(*(undefined8 *)(param_1 + 0x60));
    if (param_3 == 0) {
      lVar2 = 0;
    }
    else {
      uVar1 = param_3;
      func_0x00010c158640();
      if ((uVar1 & 1) == 0) {
        func_0x00010c09c140(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
      }
      lVar2 = param_1;
      func_0x00010be21100(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar2;
    func_0x0001090b23d0(uVar3);
    func_0x0001090b23ac();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf99fe0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x0001090b241c();
    func_0x00010bf7e8a0(uVar3,param_2,param_3,uVar1);
    _objc_release(param_3);
    func_0x0001090b2454();
    func_0x0001090b2400();
  }
  uVar1 = *(ulong *)(param_1 + 0x68);
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != param_4) {
    if (*(long *)(param_1 + 0x68) != *(long *)(param_1 + 0x60)) {
      func_0x0001090b245c();
    }
    if (param_4 == 0) {
      lVar2 = 0;
    }
    else {
      uVar1 = param_4;
      func_0x00010c158640();
      if ((uVar1 & 1) == 0) {
        func_0x00010c09c140(*(undefined8 *)(param_1 + 0x20),param_2,param_4);
      }
      lVar2 = param_1;
      func_0x00010be21100(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *(long *)(param_1 + 0x68) = lVar2;
    func_0x0001090b23d0(uVar3);
    if (*(long *)(param_1 + 0x68) != *(long *)(param_1 + 0x60)) {
      func_0x0001090b23ac();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf99fe0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    func_0x00010c28f340(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97200(param_4);
    func_0x00010bf7e000(uVar3,param_2,uVar1,param_4);
    func_0x0001090b2400();
    func_0x0001090b23d8();
    func_0x0001090b238c();
  }
  func_0x0001090b23a4();
  func_0x0001090b2384();
  return;
}



/* Entry: 1090b1634; end: 1090b16bf; -[SCNeoPlayerHLSMediaSampleBufferProvider _updatePlaybackStreamsIfNeeded] */

void FUN_1090b1634(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x21;
  
  lVar4 = *(long *)(param_1 + 0x60);
  uVar1 = *(long *)(param_1 + 0x50) == lVar4;
  if ((bool)uVar1) {
    func_0x0001090b2498();
    if ((bool)uVar1) {
      return;
    }
  }
  else {
    func_0x0001090b23c8();
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = lVar4;
    _objc_release(uVar2);
    func_0x0001090b2498();
    if ((bool)uVar1) goto LAB_1090b168c;
  }
  func_0x0001090b23c8();
  lVar3 = *unaff_x21;
  *unaff_x21 = lVar4;
  _objc_release(lVar3);
LAB_1090b168c:
  func_0x00010bee27e0(param_1);
  func_0x00010be647e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be649b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyHasNextSampleBuffersIfNee_112576c08);
  return;
}



/* Entry: 1090b16c0; end: 1090b176b; -[SCNeoPlayerHLSMediaSampleBufferProvider _updateActiveEntries] */

void FUN_1090b16c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined8 in_register_00005008;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = param_2;
  func_0x0001090b2394();
  uStack_40 = *(undefined8 *)(extraout_x8 + 0x10);
  uStack_50 = param_1;
  uStack_48 = in_register_00005008;
  func_0x00010be16800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0f100();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x0001090b23c8();
    lVar2 = lVar1;
  }
  uStack_68 = uStack_48;
  uStack_70 = uStack_50;
  uStack_60 = uStack_40;
  func_0x00010c1e09c0(param_2,param_3,lVar1,lVar2,&uStack_70);
  if (*(long *)(param_2 + 0x50) == 0) {
    func_0x00010bedd480(param_2);
  }
  func_0x0001090b238c();
  func_0x0001090b23a4();
  return;
}



/* Entry: 1090b176c; end: 1090b1773; -[SCNeoPlayerHLSMediaSampleBufferProvider hlsPlaylistManager:didFailWithError:] */

void FUN_1090b176c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be690b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onError__112577dc8,param_4);
  return;
}



/* Entry: 1090b1774; end: 1090b1937; -[SCNeoPlayerHLSMediaSampleBufferProvider hlsPlaylistManager:didLoadTopLevelEntries:] */

void FUN_1090b1774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = param_4;
  func_0x0001090b2470();
  _objc_retain(uVar8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x00010bf99fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010bf529e0(param_4);
  func_0x00010bf77ba0(uVar2,param_2,uVar8);
  func_0x0001090b238c();
  _objc_opt_new();
  puVar3 = PTR_PTR_1126dd510;
  _objc_alloc();
  func_0x00010bff6900();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined **)(unaff_x20 + 0x88) = puVar3;
  func_0x0001090b23d0(uVar8);
  puVar4 = (ulong *)PTR_PTR_1126dd398;
  _objc_alloc();
  func_0x00010c04e940();
  puVar5 = puVar4;
  func_0x0001090b243c();
  func_0x0001090b2408();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (ulong *)0x0) {
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      uVar9 = *(ulong *)(uVar10 * 8);
      puVar6 = puVar4;
      func_0x00010bf07340();
      uVar7 = uVar9;
      func_0x00010bf97200();
      *puVar6 = uVar7;
      func_0x00010bf1c7c0();
      puVar6[1] = uVar9;
      uVar10 = uVar10 + 1;
      in_ZR = (ulong *)uVar10 == puVar5;
    } while (uVar10 < puVar5);
    func_0x0001090b2408();
    puVar5 = (ulong *)uVar9;
  }
  func_0x0001090b2384();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
  puVar5 = puVar4;
  func_0x00010bf25f00();
  func_0x00010c23d0a0(puVar4);
  func_0x00010bfb1920(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010bf97200();
  func_0x00010c064be0(uVar2,param_2,puVar5,puVar4,uVar8);
  _objc_release(param_4);
  func_0x00010bed2820();
  func_0x0001090b23d8();
  func_0x0001090b238c();
  func_0x0001090b2384();
  func_0x0001090b2484(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  _objc_retain(puVar4);
  func_0x00010bf99fe0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c28f340(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1585e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf77ac0(uVar8,param_2,puVar5,puVar4);
  func_0x0001090b2454();
  func_0x0001090b2400();
  func_0x0001090b23d8();
  func_0x0001090b238c();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  func_0x0001090b241c();
  func_0x0001090b2384();
  func_0x00010c0dff20(uVar2,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1090b1938; end: 1090b1a13; -[SCNeoPlayerHLSMediaSampleBufferProvider hlsPlaylistManager:didLoadSegmentsInEntry:] */

void FUN_1090b1938(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010bf99fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c28f340(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1585e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf77ac0(uVar2,param_2,uVar1,param_4);
  func_0x0001090b2454();
  func_0x0001090b2400();
  func_0x0001090b23d8();
  func_0x0001090b238c();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x0001090b241c();
  func_0x0001090b2384();
  func_0x00010c0dff20(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090b1a14; end: 1090b1b37; -[SCNeoPlayerHLSMediaSampleBufferProvider _onError:] */

void FUN_1090b1a14(void)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  long unaff_x20;
  ulong uVar4;
  
  func_0x0001090b2470();
  func_0x0001090b23e0();
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x00010c0e3f00();
  if ((int)lVar1 != 0) {
    uVar2 = *(ulong *)(unaff_x20 + 0x78);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar3 != 0) {
      uVar4 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar2);
        }
        func_0x0001090b245c(*(undefined8 *)(uVar4 * 8));
        uVar4 = uVar4 + 1;
        in_ZR = uVar4 == uVar3;
      } while (uVar4 < uVar3);
      uVar3 = uVar2;
      func_0x00010bf52a60();
    }
    func_0x0001090b238c();
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149640();
    func_0x0001090b238c();
    lVar1 = unaff_x20;
  }
  func_0x0001090b2384();
  func_0x0001090b2484(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf6df70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + 0x58),PTR_s_dequeueNextAudioSampleBufferWith_1125b9180);
  return;
}



/* Entry: 1090b1b38; end: 1090b1b3f; -[SCNeoPlayerHLSMediaSampleBufferProvider dequeueNextAudioSampleBufferWithError:] */

void FUN_1090b1b38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6df70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_dequeueNextAudioSampleBufferWith_1125b9180);
  return;
}



/* Entry: 1090b1b40; end: 1090b1b47; -[SCNeoPlayerHLSMediaSampleBufferProvider dequeueNextVideoSampleBufferWithError:] */

void FUN_1090b1b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_dequeueNextVideoSampleBufferWith_1125b91a0);
  return;
}



/* Entry: 1090b1b48; end: 1090b1b4f; -[SCNeoPlayerHLSMediaSampleBufferProvider hasNextAudioSampleBuffer] */

void FUN_1090b1b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd9710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_hasNextAudioSampleBuffer_1125d3f80);
  return;
}



/* Entry: 1090b1b50; end: 1090b1b57; -[SCNeoPlayerHLSMediaSampleBufferProvider hasNextVideoSampleBuffer] */

void FUN_1090b1b50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd9770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_hasNextVideoSampleBuffer_1125d3f98);
  return;
}



/* Entry: 1090b1b58; end: 1090b1b5f; -[SCNeoPlayerHLSMediaSampleBufferProvider didReachEndOfAudioTrack] */

void FUN_1090b1b58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf78e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_didReachEndOfAudioTrack_1125bbd30);
  return;
}



/* Entry: 1090b1b60; end: 1090b1b67; -[SCNeoPlayerHLSMediaSampleBufferProvider didReachEndOfVideoTrack] */

void FUN_1090b1b60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf78eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_didReachEndOfVideoTrack_1125bbd50);
  return;
}



/* Entry: 1090b1b68; end: 1090b1c33; -[SCNeoPlayerHLSMediaSampleBufferProvider _currentPlaybackStreamContainsTime:] */

bool FUN_1090b1b68(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [48];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bf5ff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010c250f20(lVar2);
      FUN_1090b1274(&uStack_38);
      func_0x00010bf8b160(lVar2);
      FUN_1090b1274(&uStack_50);
      uStack_98 = uStack_30;
      uStack_a0 = uStack_38;
      uStack_90 = uStack_28;
      uStack_b8 = uStack_48;
      uStack_c0 = uStack_50;
      uStack_b0 = uStack_40;
      _CMTimeRangeMake(auStack_80,&uStack_a0,&uStack_c0);
      uStack_98 = param_3[1];
      uStack_a0 = *param_3;
      uStack_90 = param_3[2];
      puVar3 = auStack_80;
      _CMTimeRangeContainsTime(puVar3,&uStack_a0);
      bVar1 = (int)puVar3 != 0;
    }
    func_0x0001090b2384();
  }
  return bVar1;
}



/* Entry: 1090b1c34; end: 1090b1d17; -[SCNeoPlayerHLSMediaSampleBufferProvider seekToTime:toleranceBefore:toleranceAfter:] */

void FUN_1090b1c34(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_50 = param_4[2];
  uVar1 = param_2;
  func_0x00010bdf6f00(param_2,param_3,&uStack_60);
  if ((uVar1 & 1) == 0) {
    func_0x00010bedd480(param_2);
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    func_0x0001090b24ac();
    func_0x0001090b23e8(*(undefined8 *)(param_6 + 0x10));
    param_4[1] = uStack_58;
    *param_4 = uStack_60;
    param_4[2] = uStack_50;
  }
  if ((*(long *)(param_2 + 0x58) != 0) && (*(long *)(param_2 + 0x58) != *(long *)(param_2 + 0x50)))
  {
    func_0x0001090b24ac();
    func_0x0001090b2394();
    func_0x0001090b23e8();
  }
  uVar2 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = uVar2;
  param_1[2] = param_4[2];
  return;
}



/* Entry: 1090b1d18; end: 1090b1da3; -[SCNeoPlayerHLSMediaSampleBufferProvider _updateTrackIds] */

void FUN_1090b1d18(long param_1)

{
  long unaff_x19;
  
  func_0x0001090b2464();
  if (param_1 == *(long *)(unaff_x19 + 0x58)) {
    func_0x0001090b2394();
  }
  else {
    func_0x0001090b2394();
    func_0x00010c222100();
  }
  func_0x00010c222100();
  return;
}



/* Entry: 1090b1da4; end: 1090b1dc7; -[SCNeoPlayerHLSMediaSampleBufferProvider setVideoTrackId:audioTrackId:currentTime:] */

void FUN_1090b1da4(long param_1,undefined8 param_2,int param_3,int param_4)

{
  if ((*(int *)(param_1 + 0x70) == param_4) && (*(int *)(param_1 + 0x74) == param_3)) {
    return;
  }
  *(int *)(param_1 + 0x70) = param_4;
  *(int *)(param_1 + 0x74) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bee27f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTrackIds_1125963a0);
  return;
}



/* Entry: 1090b1dc8; end: 1090b1ddf; -[SCNeoPlayerHLSMediaSampleBufferProvider computeMediaDataManagerMetrics] */

void FUN_1090b1dc8(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf458f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_2 + 0x50),PTR_s_computeMediaDataManagerMetrics_1125aefe0);
    return;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1090b1de0; end: 1090b1de7; -[SCNeoPlayerHLSMediaSampleBufferProvider loadedTimeRanges] */

undefined8 FUN_1090b1de0(void)

{
  return 0;
}



/* Entry: 1090b1de8; end: 1090b1e1f; -[SCNeoPlayerHLSMediaSampleBufferProvider trackInfos] */

void FUN_1090b1de8(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  func_0x0001090b242c();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x0001090b23c8();
  func_0x0001090b2424();
  func_0x0001090b2384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090b1e20; end: 1090b1e53; -[SCNeoPlayerHLSMediaSampleBufferProvider loadedTrackInfos] */

undefined1 FUN_1090b1e20(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  func_0x0001090b242c();
  uVar1 = *(undefined1 *)(param_1 + 0xa8);
  func_0x0001090b2424();
  func_0x0001090b2384();
  return uVar1;
}



/* Entry: 1090b1e54; end: 1090b1e5b; -[SCNeoPlayerHLSMediaSampleBufferProvider error] */

void FUN_1090b1e54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf987f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_error_1125c3ba0);
  return;
}



/* Entry: 1090b1e5c; end: 1090b1e9b; -[SCNeoPlayerHLSMediaSampleBufferProvider duration] */

void FUN_1090b1e5c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  func_0x0001090b242c();
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  param_1[1] = *(undefined8 *)(param_2 + 0x98);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0xa0);
  func_0x0001090b2424();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1090b1e9c; end: 1090b1ea7; -[SCNeoPlayerHLSMediaSampleBufferProvider setDelegate:] */

void FUN_1090b1e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1090b1ea8; end: 1090b1ebf; -[SCNeoPlayerHLSMediaSampleBufferProvider delegate] */

void FUN_1090b1ea8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090b1ec0; end: 1090b1efb; -[SCNeoPlayerHLSMediaSampleBufferProvider timebase] */

undefined8 FUN_1090b1ec0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf99fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26fdc0();
  func_0x0001090b2384();
  return uVar1;
}



/* Entry: 1090b1efc; end: 1090b1faf; -[SCNeoPlayerHLSMediaSampleBufferProvider _buildTrackInfosArray] */

void FUN_1090b1efc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c277fa0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x50) == lVar4) {
    lVar4 = 0;
  }
  else {
    func_0x00010c277fa0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(lVar1);
  lVar2 = lVar4;
  func_0x00010bf529e0(lVar4);
  func_0x00010bf0a0e0(puVar3,param_2,lVar2 + lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  if (lVar4 != 0) {
    func_0x00010befa160(puVar3,param_2,lVar4);
  }
  func_0x0001090b23a4();
  func_0x0001090b2384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1090b1fb0; end: 1090b20f7; -[SCNeoPlayerHLSMediaSampleBufferProvider _notifyDidLoadTrackInfosIfNeeded] */

void FUN_1090b1fb0(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0001090b2464();
  func_0x00010c09ca80();
  if (param_2 != 0) {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x58);
    func_0x00010c09ca80();
    if (iVar1 != 0) {
      lVar2 = unaff_x19;
      func_0x00010bdd6dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090b2394();
      uStack_70 = *(undefined8 *)(extraout_x8 + 0x10);
      uStack_50 = param_1;
      uStack_48 = in_register_00005008;
      uStack_40 = uStack_70;
      if (*(long *)(unaff_x19 + 0x50) == 0) {
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_68);
      }
      uStack_80 = param_1;
      uStack_78 = in_register_00005008;
      _CMTimeMaximum(&uStack_50,&uStack_80,&uStack_68);
      if (*(long *)(unaff_x19 + 0x50) != *(long *)(unaff_x19 + 0x58)) {
        if (*(long *)(unaff_x19 + 0x58) == 0) {
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
        }
        else {
          func_0x00010bf8b160(&uStack_80);
        }
        uStack_98 = uStack_48;
        uStack_a0 = uStack_50;
        uStack_90 = uStack_40;
        _CMTimeMaximum(&uStack_68,&uStack_a0,&uStack_80);
        uStack_48 = uStack_60;
        uStack_50 = uStack_68;
        uStack_40 = uStack_58;
      }
      func_0x0001090b243c();
      func_0x0001090b242c();
      uVar3 = *(undefined8 *)(unaff_x19 + 0x80);
      *(long *)(unaff_x19 + 0x80) = lVar2;
      _objc_release(uVar3);
      *(undefined8 *)(unaff_x19 + 0x98) = uStack_48;
      *(undefined8 *)(unaff_x19 + 0x90) = uStack_50;
      *(undefined8 *)(unaff_x19 + 0xa0) = uStack_40;
      *(undefined1 *)(unaff_x19 + 0xa8) = 1;
      func_0x0001090b2424();
      func_0x0001090b2384();
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1496a0();
      func_0x0001090b23a4();
    }
  }
  return;
}



/* Entry: 1090b20f8; end: 1090b211b; -[SCNeoPlayerHLSMediaSampleBufferProvider isActiveSampleBufferProvider:] */

bool FUN_1090b20f8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x50)) {
    return param_3 == *(long *)(param_1 + 0x58);
  }
  return true;
}



/* Entry: 1090b211c; end: 1090b2123; -[SCNeoPlayerHLSMediaSampleBufferProvider sampleBufferProvider:didFailWithError:] */

void FUN_1090b211c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be690b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onError__112577dc8,param_4);
  return;
}



/* Entry: 1090b2124; end: 1090b2127; -[SCNeoPlayerHLSMediaSampleBufferProvider sampleBufferProvider:loadedTimeRangesDidChange:] */

void FUN_1090b2124(void)

{
  return;
}



/* Entry: 1090b2128; end: 1090b2153; -[SCNeoPlayerHLSMediaSampleBufferProvider sampleBufferProviderDidLoadTrackInfos:] */

void FUN_1090b2128(int param_1)

{
  func_0x0001090b2444();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be647f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 1090b2154; end: 1090b217f; -[SCNeoPlayerHLSMediaSampleBufferProvider sampleBufferProviderHasNewAudioBuffer:] */

void FUN_1090b2154(int param_1)

{
  func_0x0001090b2444();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be649b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 1090b2180; end: 1090b21ab; -[SCNeoPlayerHLSMediaSampleBufferProvider sampleBufferProviderHasNewVideoBuffer:] */

void FUN_1090b2180(int param_1)

{
  func_0x0001090b2444();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be649b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 1090b21ac; end: 1090b2213; -[SCNeoPlayerHLSMediaSampleBufferProvider sampleBufferProvider:didLoadDataSize:withLatency:] */

void FUN_1090b21ac(undefined8 param_1,undefined8 param_2)

{
  func_0x0001090b23e0();
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149660(param_1);
  func_0x0001090b23a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1090b2214; end: 1090b221f; -[SCNeoPlayerHLSMediaSampleBufferProvider hlsStream:didLoadDataSize:withLatency:] */

void FUN_1090b2214(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_didUpdateMediaBufferWithDownload_1125bd2c8,
             param_4);
  return;
}



/* Entry: 1090b2220; end: 1090b2233; -[SCNeoPlayerHLSMediaSampleBufferProvider hlsStream:didCompleteLoadingSegmentForIndex:] */

void FUN_1090b2220(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x60)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed2830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateActiveEntries_1125923b0);
  return;
}



/* Entry: 1090b2234; end: 1090b22d7; -[SCNeoPlayerHLSMediaSampleBufferProvider hlsStream:didChangeToSegmentIndex:] */

void FUN_1090b2234(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 != *(long *)(param_1 + 0x50)) {
    return;
  }
  iVar1 = (int)&uStack_70;
  func_0x00010bf5ff20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250f20();
  FUN_1090b1274(&uStack_38);
  func_0x0001090b23a4();
  if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x60)) {
    if (*(long *)(param_1 + 0x60) == 0) {
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
    }
    else {
      func_0x00010c250f20(&uStack_50);
    }
    uStack_68 = uStack_30;
    uStack_70 = uStack_38;
    uStack_60 = uStack_28;
    _CMTimeCompare(&uStack_70,&uStack_50);
    if (-1 < iVar1) {
      func_0x00010bedd480(param_1);
    }
  }
  return;
}



/* Entry: 1090b22d8; end: 1090b237b; -[SCNeoPlayerHLSMediaSampleBufferProvider .cxx_destruct] */

void FUN_1090b22d8(long param_1)

{
  FUN_1090b237c(param_1 + 0xb0);
  FUN_1090b237c(param_1 + 0x88);
  FUN_1090b237c(param_1 + 0x80);
  FUN_1090b237c(param_1 + 0x78);
  FUN_1090b237c(param_1 + 0x68);
  FUN_1090b237c(param_1 + 0x60);
  FUN_1090b237c(param_1 + 0x58);
  FUN_1090b237c(param_1 + 0x50);
  FUN_1090b237c(param_1 + 0x48);
  FUN_1090b237c(param_1 + 0x40);
  FUN_1090b237c(param_1 + 0x38);
  FUN_1090b237c(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  FUN_1090b237c(param_1 + 0x20);
  FUN_1090b237c(param_1 + 0x18);
  FUN_1090b237c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090b237c; end: 1090b24bf;  */

void FUN_1090b237c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1090b24c0; end: 1090b254b; -[SCNeoPlayerHLSSegmentsRequest initWithBaseURL:queue:completion:] */

long FUN_1090b24c0(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001090b39d8();
  func_0x0001090b396c();
  func_0x0001090b3988();
  func_0x0001090b39a8();
  func_0x0001090b3a34();
  if (param_1 != 0) {
    func_0x0001090b3980();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = unaff_x19;
    _objc_release(uVar1);
    func_0x0001090b3988();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = unaff_x20;
    _objc_release(uVar1);
    _objc_retainBlock();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = in_x4;
    func_0x0001090b39d0(uVar1);
  }
  func_0x0001090b39fc();
  func_0x0001090b395c();
  func_0x0001090b3954();
  return param_1;
}



/* Entry: 1090b254c; end: 1090b257b; -[SCNeoPlayerHLSSegmentsRequest cancelRequest] */

void FUN_1090b254c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bf2e640(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1090b257c; end: 1090b25d7; -[SCNeoPlayerHLSSegmentsRequest onLoadFailed:] */

void FUN_1090b257c(void)

{
  func_0x0001090b3938();
  func_0x0001090b39b0();
  func_0x0001090b3980();
  func_0x0001090b3aa0();
  func_0x0001090b3a04();
  func_0x0001090b3954();
  return;
}



/* Entry: 1090b25d8; end: 1090b263b;  */

void FUN_1090b25d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_109096480(uVar2,&PTR____CFConstantStringClassReference_110f20e18);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,uVar2);
  func_0x0001090b3954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1090b263c; end: 1090b273f; -[SCNeoPlayerHLSSegmentsRequest onLoadCompleted:] */

void FUN_1090b263c(void)

{
  func_0x0001090b3938();
  func_0x0001090b39b0();
  func_0x0001090b3980();
  func_0x0001090b3aa0();
  func_0x0001090b3a88();
  func_0x0001090b3954();
  return;
}



/* Entry: 1090b2740; end: 1090b2743; -[SCNeoPlayerHLSSegmentsRequest onDataSizeResolved:] */

void FUN_1090b2740(void)

{
  return;
}



/* Entry: 1090b2744; end: 1090b274b; -[SCNeoPlayerHLSSegmentsRequest baseURL] */

undefined8 FUN_1090b2744(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1090b274c; end: 1090b2753; -[SCNeoPlayerHLSSegmentsRequest queue] */

undefined8 FUN_1090b274c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1090b2754; end: 1090b275b; -[SCNeoPlayerHLSSegmentsRequest completion] */

undefined8 FUN_1090b2754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1090b275c; end: 1090b2763; -[SCNeoPlayerHLSSegmentsRequest requestId] */

undefined8 FUN_1090b275c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1090b2764; end: 1090b276b; -[SCNeoPlayerHLSSegmentsRequest setRequestId:] */

void FUN_1090b2764(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1090b276c; end: 1090b2773; -[SCNeoPlayerHLSSegmentsRequest dataProvider] */

undefined8 FUN_1090b276c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1090b2774; end: 1090b2793; -[SCNeoPlayerHLSSegmentsRequest setDataProvider:] */

void FUN_1090b2774(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001090b3938();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090b2794; end: 1090b27cf; -[SCNeoPlayerHLSSegmentsRequest .cxx_destruct] */

void FUN_1090b2794(long param_1)

{
  func_0x0001090b3990(param_1 + 0x28);
  func_0x0001090b3990(param_1 + 0x18);
  func_0x0001090b3990(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090b27d0; end: 1090b28b7; -[SCNeoPlayerHLSPlaylistManager initWithDelegateQueue:dataProviderFactory:] */

long FUN_1090b27d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x0001090b396c();
  func_0x0001090b3988();
  func_0x0001090b3a34();
  if (param_1 != 0) {
    uVar1 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x15,0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = &UNK_10f54e741;
    _dispatch_queue_create(&UNK_10f54e741,uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    func_0x0001090b39d0(uVar1);
    func_0x0001090b39c8();
    func_0x0001090b3980();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_3;
    _objc_release(uVar1);
    func_0x0001090b3988();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_4;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126dd3e0;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar2;
    func_0x0001090b39d0(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar2;
    func_0x0001090b39d0(uVar1);
  }
  func_0x0001090b395c();
  func_0x0001090b3954();
  return param_1;
}



/* Entry: 1090b28b8; end: 1090b2993; -[SCNeoPlayerHLSPlaylistManager cancelLoad] */

void FUN_1090b28b8(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001090b3964();
  if (uVar2 != 0) {
    lVar3 = *plStack_100;
    do {
      uVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(uVar1);
        }
        func_0x00010bf2eda0(*(undefined8 *)(lStack_108 + uVar4 * 8));
        uVar4 = uVar4 + 1;
        in_ZR = uVar4 == uVar2;
      } while (uVar4 < uVar2);
      uVar2 = uVar1;
      func_0x0001090b3964(uVar1,param_2,&uStack_110,auStack_c8);
      unaff_x20 = 0;
    } while (uVar2 != 0);
  }
  func_0x0001090b3954();
  func_0x0001090b3924(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001090b3938();
  func_0x00010bf6b020(unaff_x20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe3b20();
  func_0x0001090b3954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1090b2994; end: 1090b29d7; -[SCNeoPlayerHLSPlaylistManager _onError:] */

void FUN_1090b2994(void)

{
  undefined8 unaff_x20;
  
  func_0x0001090b3938();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe3b20();
  func_0x0001090b3954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1090b29d8; end: 1090b2bd3; -[SCNeoPlayerHLSPlaylistManager _getOrCreateEntryForURL:rendition:parameters:] */

void FUN_1090b29d8(void)

{
  long lVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *in_x4;
  undefined *unaff_x20;
  long unaff_x22;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  
  func_0x0001090b39d8();
  func_0x0001090b390c();
  func_0x0001090b3988();
  func_0x0001090b39a8();
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(unaff_x22 + 0x28);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar3 = puVar2;
  func_0x0001090b3964();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar3 == (undefined *)0x0) {
      func_0x0001090b39a0();
      *(long *)(unaff_x22 + 0x40) = *(long *)(unaff_x22 + 0x40) + 1;
      puVar6 = PTR_PTR_1126dd518;
      _objc_alloc(PTR_PTR_1126dd518);
      func_0x00010c0103c0();
      func_0x00010c1d0560(*(undefined8 *)(unaff_x22 + 0x30));
      if (puVar2 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(unaff_x22 + 0x28));
      }
      func_0x0001090b3aac();
LAB_1090b2b8c:
      func_0x0001090b39a0();
      func_0x0001090b39c8();
      func_0x0001090b39fc();
      func_0x0001090b395c();
      func_0x0001090b3954();
      func_0x0001090b3924(uStack_70);
      if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(puVar2 + 0x30),PTR_s_objectForKey__1126159e0);
      return;
    }
    puVar5 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      puVar6 = *(undefined **)((long)puVar5 * 8);
      puVar4 = puVar6;
      func_0x00010c130940();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == unaff_x20) {
        puVar4 = puVar6;
        func_0x00010c0f3840();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        func_0x0001090b39c0();
        in_ZR = puVar4 == in_x4;
        if ((bool)in_ZR) {
          puVar2 = puVar6;
          _objc_retain();
          func_0x0001090b39a0();
          goto LAB_1090b2b8c;
        }
      }
      else {
        func_0x0001090b39c0();
      }
      puVar5 = puVar5 + 1;
      in_ZR = puVar5 == puVar3;
    } while (puVar5 < puVar3);
    puVar3 = puVar2;
    func_0x0001090b3964();
  } while( true );
}



/* Entry: 1090b2bd4; end: 1090b2bdb; -[SCNeoPlayerHLSPlaylistManager entryForId:] */

void FUN_1090b2bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 1090b2bdc; end: 1090b2d23; -[SCNeoPlayerHLSPlaylistManager _alternativeEntriesWithGroupId:inPlaylist:] */

void FUN_1090b2bdc(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined *unaff_x20;
  undefined8 unaff_x24;
  undefined8 unaff_x26;
  long lVar10;
  long unaff_x27;
  undefined *unaff_x28;
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  undefined1 *puStack_2d0;
  undefined *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined *puStack_2b8;
  undefined1 *puStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined1 *puStack_288;
  undefined1 *puStack_280;
  long lStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  puVar8 = &uStack_130;
  func_0x0001090b39d8();
  func_0x0001090b390c();
  func_0x0001090b3988();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01ee0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar4 = auStack_f0;
  func_0x0001090b3964();
  if (unaff_x20 != (undefined *)0x0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = (undefined *)0x0;
      do {
        if (*plStack_120 != unaff_x27) {
          func_0x0001090b3a78();
        }
        unaff_x26 = *(undefined8 *)(lStack_128 + (long)unaff_x28 * 8);
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be210e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001090b3a5c();
        puVar2 = puVar1;
        func_0x0001090b3aac();
        func_0x0001090b3a64();
        unaff_x28 = unaff_x28 + 1;
        in_ZR = unaff_x28 == unaff_x20;
      } while (unaff_x28 < unaff_x20);
      puVar4 = auStack_f0;
      puVar8 = &uStack_130;
      func_0x0001090b3948();
      unaff_x24 = 0;
      unaff_x20 = puVar2;
    } while (puVar2 != (undefined *)0x0);
  }
  puVar2 = (undefined *)0x0;
  func_0x0001090b3998();
  func_0x0001090b395c();
  func_0x0001090b3954();
  func_0x0001090b3924(uStack_70);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1090b2d24;
  puStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  uStack_180 = unaff_x26;
  uStack_170 = unaff_x24;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x0001090b390c();
  _objc_retain(puVar4);
  func_0x0001090b3980();
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 **)(puVar2 + 0x48) = puVar8;
  _objc_release(uVar3);
  puVar9 = (undefined1 *)puVar8;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x0001090b39c8();
  if (puVar9 == (undefined1 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_288 = puVar4;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    puVar4 = (undefined1 *)puVar8;
    func_0x00010c297800();
    _objc_retainAutoreleasedReturnValue();
    puStack_280 = puVar4;
    func_0x0001090b3964();
    if (puVar4 != (undefined1 *)0x0) {
      lStack_278 = *plStack_260;
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          if (*plStack_260 != lStack_278) {
            _objc_enumerationMutation(puStack_280);
          }
          lVar10 = *(long *)(lStack_268 + (long)puVar9 * 8);
          func_0x00010c28f340(lVar10);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar10;
          func_0x00010c0f3840(lVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar2;
          func_0x00010be210e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          func_0x0001090b39c0();
          lVar5 = lVar10;
          func_0x00010c0f3840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0f160();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          func_0x0001090b39c0();
          if (lVar5 != 0) {
            lVar5 = lVar10;
            func_0x00010c0f3840(lVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf0f160();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdca4e0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c16bc60(puVar6);
            func_0x0001090b395c();
            _objc_release(lVar5);
            func_0x0001090b39c0();
          }
          lVar5 = lVar10;
          func_0x00010c0f3840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c261240();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          func_0x0001090b395c();
          if (lVar5 != 0) {
            func_0x00010c0f3840(lVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c261240();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdca4e0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c20f800(puVar6);
            func_0x0001090b39c0();
            func_0x0001090b3a5c();
            func_0x0001090b395c();
          }
          func_0x0001090b3aac(puVar1);
          func_0x0001090b3a64();
          puVar9 = puVar9 + 1;
          in_ZR = puVar9 == puVar4;
        } while (puVar9 < puVar4);
        puVar4 = puStack_280;
        func_0x0001090b3964();
      } while (puVar4 != (undefined1 *)0x0);
    }
    _objc_release(puStack_280);
    puVar6 = puVar1;
    func_0x00010bf51e00();
    puVar4 = puStack_288;
  }
  else {
    puVar1 = puVar2;
    func_0x00010be210e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1a8 = puVar1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined **)(puVar2 + 0x20) = puVar6;
  func_0x0001090b39d0(uVar3);
  func_0x0001090b3998();
  func_0x00010bf6b020(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe3b60();
  func_0x0001090b395c();
  puVar9 = (undefined1 *)puVar8;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar9;
  func_0x00010bf529e0();
  func_0x0001090b395c();
  if (puVar7 != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)puVar8;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfe880(puVar2);
    func_0x0001090b395c();
  }
  func_0x0001090b39a0();
  func_0x0001090b3954();
  func_0x0001090b3924(uStack_1a0);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_298 = FUN_1090b30c4;
  puStack_2d0 = puVar4;
  puStack_2c8 = puVar1;
  puStack_2c0 = puVar7;
  puStack_2b8 = puVar2;
  puStack_2b0 = puVar9;
  puStack_2a8 = (undefined1 *)puVar8;
  ppuStack_2a0 = &puStack_140;
  func_0x0001090b39d8();
  func_0x0001090b396c();
  func_0x0001090b3988();
  uVar3 = *(undefined8 *)(puVar7 + 0x10);
  func_0x0001090b39a8();
  _objc_initWeak(auStack_2d8,puVar7);
  func_0x0001090b39a8();
  func_0x0001090b3988();
  func_0x0001090b3980();
  _objc_copyWeak(auStack_2e0,auStack_2d8);
  func_0x0001090b3a80();
  func_0x0001090b3a98();
  _objc_release(uVar3);
  func_0x0001090b3a90();
  func_0x0001090b3a04();
  func_0x0001090b39fc();
  _objc_destroyWeak(auStack_2d8);
  func_0x0001090b395c();
  func_0x0001090b3954();
  return;
}



/* Entry: 1090b2d24; end: 1090b30c3; -[SCNeoPlayerHLSPlaylistManager _didParseTopLevelPlaylist:url:] */

void FUN_1090b2d24(undefined *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined *puStack_198;
  ulong uStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  ulong uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  FUN_1090b390c();
  _objc_retain(param_4);
  func_0x0001090b3980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x0001090b39c8();
  if (uVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uStack_158 = param_4;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uVar2 = param_3;
    func_0x00010c297800();
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = uVar2;
    func_0x0001090b3964();
    if (uVar2 != 0) {
      lStack_148 = *plStack_130;
      do {
        uVar6 = 0;
        do {
          if (*plStack_130 != lStack_148) {
            _objc_enumerationMutation(uStack_150);
          }
          lVar7 = *(long *)(lStack_138 + uVar6 * 8);
          func_0x00010c28f340(lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar7;
          func_0x00010c0f3840(lVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = param_1;
          func_0x00010be210e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          func_0x0001090b39c0();
          lVar4 = lVar7;
          func_0x00010c0f3840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0f160();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          func_0x0001090b39c0();
          if (lVar4 != 0) {
            lVar4 = lVar7;
            func_0x00010c0f3840(lVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf0f160();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdca4e0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c16bc60(puVar5);
            func_0x0001090b395c();
            _objc_release(lVar4);
            func_0x0001090b39c0();
          }
          lVar4 = lVar7;
          func_0x00010c0f3840();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c261240();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          func_0x0001090b395c();
          if (lVar4 != 0) {
            func_0x00010c0f3840(lVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c261240();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdca4e0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c20f800(puVar5);
            func_0x0001090b39c0();
            func_0x0001090b3a5c();
            func_0x0001090b395c();
          }
          func_0x0001090b3aac(puVar3);
          func_0x0001090b3a64();
          uVar6 = uVar6 + 1;
          in_ZR = uVar6 == uVar2;
        } while (uVar6 < uVar2);
        uVar2 = uStack_150;
        func_0x0001090b3964();
      } while (uVar2 != 0);
    }
    _objc_release(uStack_150);
    puVar5 = puVar3;
    func_0x00010bf51e00();
    param_4 = uStack_158;
  }
  else {
    puVar3 = param_1;
    func_0x00010be210e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar5;
  func_0x0001090b39d0(uVar1);
  func_0x0001090b3998();
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe3b60();
  func_0x0001090b395c();
  uVar2 = param_3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf529e0();
  func_0x0001090b395c();
  if (uVar6 != 0) {
    uVar2 = param_3;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfe880(param_1);
    func_0x0001090b395c();
  }
  func_0x0001090b39a0();
  func_0x0001090b3954();
  func_0x0001090b3924(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_1090b30c4;
  uStack_1a0 = param_4;
  puStack_198 = puVar3;
  uStack_190 = uVar6;
  puStack_188 = param_1;
  uStack_180 = uVar2;
  uStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x0001090b39d8();
  func_0x0001090b396c();
  func_0x0001090b3988();
  uVar1 = *(undefined8 *)(uVar6 + 0x10);
  func_0x0001090b39a8();
  _objc_initWeak(auStack_1a8,uVar6);
  func_0x0001090b39a8();
  func_0x0001090b3988();
  func_0x0001090b3980();
  _objc_copyWeak(auStack_1b0,auStack_1a8);
  func_0x0001090b3a80();
  func_0x0001090b3a98();
  _objc_release(uVar1);
  func_0x0001090b3a90();
  func_0x0001090b3a04();
  func_0x0001090b39fc();
  _objc_destroyWeak(auStack_1a8);
  func_0x0001090b395c();
  func_0x0001090b3954();
  return;
}



/* Entry: 1090b30c4; end: 1090b3277; -[SCNeoPlayerHLSPlaylistManager setTopLevelPlaylistData:url:] */

void FUN_1090b30c4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x0001090b39d8();
  func_0x0001090b396c();
  func_0x0001090b3988();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x0001090b39a8();
  _objc_initWeak(auStack_48);
  func_0x0001090b39a8();
  func_0x0001090b3988();
  func_0x0001090b3980();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x0001090b3a80();
  func_0x0001090b3a98();
  _objc_release(uVar1);
  func_0x0001090b3a90();
  func_0x0001090b3a04();
  func_0x0001090b39fc();
  _objc_destroyWeak(auStack_48);
  func_0x0001090b395c();
  func_0x0001090b3954();
  return;
}



/* Entry: 1090b3278; end: 1090b32b3;  */

void FUN_1090b3278(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001090b3a0c();
  if (unaff_x21 == 0) {
    func_0x00010bdfeb20(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),
                        *(undefined8 *)(unaff_x20 + 0x30));
  }
  else {
    func_0x0001090b3a6c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090b32b4; end: 1090b34eb; -[SCNeoPlayerHLSPlaylistManager _didLoadSegments:forURL:] */

void FUN_1090b32b4(ulong param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  undefined1 auStack_170 [256];
  undefined8 uStack_70;
  
  puVar4 = param_4;
  FUN_1090b390c();
  func_0x0001090b3988();
  func_0x00010bf529e0();
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 0) {
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_109096480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be690a0(param_1);
    func_0x0001090b39a0();
    func_0x0001090b39c8();
  }
  else {
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(ulong *)(param_1 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51e00();
    func_0x0001090b39a0();
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    func_0x0001090b3a1c();
    func_0x0001090b3948();
    if (uVar1 != 0) {
      lVar5 = *plStack_1a0;
      do {
        uVar6 = 0;
        do {
          if (*plStack_1a0 != lVar5) {
            func_0x0001090b3a78();
          }
          uVar2 = *(ulong *)(lStack_1a8 + uVar6 * 8);
          func_0x00010c1faba0();
          uVar6 = uVar6 + 1;
          in_ZR = uVar6 == uVar1;
        } while (uVar6 < uVar1);
        func_0x0001090b3948();
        uVar1 = uVar2;
      } while (uVar2 != 0);
    }
    uVar1 = 0;
    func_0x0001090b3998();
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    func_0x0001090b3a1c();
    puVar3 = &uStack_1f0;
    puVar4 = auStack_170;
    func_0x0001090b3948();
    if (uVar1 != 0) {
      lVar5 = *plStack_1e0;
      do {
        uVar6 = 0;
        do {
          if (*plStack_1e0 != lVar5) {
            func_0x0001090b3a78();
          }
          uVar2 = param_1;
          func_0x00010bf6b020();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe3b40();
          func_0x0001090b3a5c();
          uVar6 = uVar6 + 1;
          in_ZR = uVar6 == uVar1;
        } while (uVar6 < uVar1);
        puVar3 = &uStack_1f0;
        puVar4 = auStack_170;
        func_0x0001090b3948();
        uVar1 = uVar2;
      } while (uVar2 != 0);
    }
    func_0x0001090b3998();
    func_0x0001090b3998();
  }
  _objc_release(param_4);
  func_0x0001090b395c();
  func_0x0001090b3954();
  func_0x0001090b3924(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  func_0x00010c1585e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfe880(param_4);
  func_0x0001090b3954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1090b34ec; end: 1090b3543; -[SCNeoPlayerHLSPlaylistManager _didLoadPlaylist:forURL:] */

void FUN_1090b34ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c1585e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfe880(param_1,param_2,param_3,param_4);
  func_0x0001090b3954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090b3544; end: 1090b3747; -[SCNeoPlayerHLSPlaylistManager loadSegmentsAtURL:] */

void FUN_1090b3544(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x0001090b396c();
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090b3998();
    func_0x0001090b3a1c();
    _objc_initWeak(auStack_68,param_1);
    puVar2 = PTR_PTR_1126dd520;
    _objc_alloc(PTR_PTR_1126dd520);
    func_0x00010bdc2cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090b39b0();
    func_0x0001090b3a1c();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x0001090b3980();
    func_0x00010bff70c0(puVar2);
    func_0x0001090b3a64();
    func_0x00010c189680(puVar2);
    func_0x00010c09b2a0(uVar3);
    func_0x00010c1ebd20(puVar2);
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar2;
      func_0x0001090b39d0(uVar3);
      lVar1 = *(long *)(param_1 + 0x38);
    }
    func_0x00010c1d0640(lVar1);
    func_0x0001090b3a04();
    _objc_destroyWeak(auStack_70);
    func_0x0001090b3a88();
    _objc_destroyWeak(auStack_68);
    func_0x0001090b3998();
    func_0x0001090b39fc();
  }
  func_0x0001090b39a0();
  func_0x0001090b395c();
  func_0x0001090b3954();
  return;
}



/* Entry: 1090b3748; end: 1090b3803;  */

void FUN_1090b3748(long param_1,undefined8 param_2)

{
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  func_0x0001090b3980();
  func_0x0001090b39b0();
  func_0x0001090b3980();
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  func_0x0001090b39a8();
  func_0x0001090b3988();
  func_0x0001090b3a80();
  func_0x0001090b3a90();
  func_0x0001090b3a04();
  func_0x0001090b3a98();
  func_0x0001090b3a88();
  func_0x0001090b395c();
  func_0x0001090b3954();
  return;
}



/* Entry: 1090b3804; end: 1090b383f;  */

void FUN_1090b3804(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001090b3a0c();
  if (unaff_x21 == 0) {
    func_0x00010bdfe820(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),
                        *(undefined8 *)(unaff_x20 + 0x30));
  }
  else {
    func_0x0001090b3a6c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090b3840; end: 1090b387b; -[SCNeoPlayerHLSPlaylistManager loadSegmentsOfEntry:] */

void FUN_1090b3840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c120(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090b387c; end: 1090b3893; -[SCNeoPlayerHLSPlaylistManager delegate] */

void FUN_1090b387c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


