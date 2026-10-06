/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10808d2bc; end: 10808d2c3; -[SCAutoCaptionsTransform rotation] */

undefined8 FUN_10808d2bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10808d2c4; end: 10808d2cb; -[SCAutoCaptionsTransform scale] */

undefined8 FUN_10808d2c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10808d2cc; end: 10808d317;  */

void FUN_10808d2cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10808d318; end: 10808d4db;  */

void FUN_10808d318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d38c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar3 = uVar2;
  func_0x00010c0b58e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c2551e0(uVar2);
  FUN_10808d4dc();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c09b8c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar6);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  return;
}



/* Entry: 10808d4dc; end: 10808d58b;  */

void FUN_10808d4dc(int param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (param_1 - 1U < 3) {
    ppuVar1 = (undefined **)(&PTR_PTR_110a19f58)[param_1 - 1U];
  }
  else {
    ppuVar1 = &PTR_PTR_1133bb400;
  }
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10808d58c; end: 10808d67b;  */

void FUN_10808d58c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar4 = param_1;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfb2040(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a19f08);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bfedfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010bfedfc0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0d2940();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0d3920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10808d67c; end: 10808d6d3;  */

bool FUN_10808d67c(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27dd80();
  if (lVar2 == 6) {
    lVar2 = param_2;
    func_0x00010bfee000(param_2);
    bVar1 = lVar2 == 0xb;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10808d6d4; end: 10808d883;  */

void FUN_10808d6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126bc980;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c218f80();
  func_0x00010c216240(puVar1);
  _objc_release(param_2);
  func_0x00010c16a540(puVar1);
  _objc_release(param_3);
  func_0x00010c219040(puVar1);
  func_0x00010c1c0fa0(puVar1);
  _objc_release(param_6);
  func_0x00010c20baa0(puVar1);
  func_0x00010c1b5240(puVar1);
  puVar2 = PTR_PTR_1126bc988;
  _objc_opt_new(PTR_PTR_1126bc988);
  func_0x00010c1ca2c0();
  puVar3 = PTR_PTR_1126ba8f8;
  _objc_opt_new(PTR_PTR_1126ba8f8);
  func_0x00010c21acc0();
  puVar4 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar5 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  puVar6 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  func_0x00010c1ac500();
  func_0x00010c196600(puVar4);
  func_0x00010c1b5d40(puVar5);
  puVar7 = puVar5;
  func_0x00010c0cc0c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac580();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10808d884; end: 10808d91b;  */

undefined4 FUN_10808d884(undefined *param_1)

{
  undefined4 uVar1;
  
  _objc_retain();
  if (param_1 == PTR_PTR_1133bb410) {
    uVar1 = 2;
  }
  else if (param_1 == PTR_PTR_1133bb418) {
    uVar1 = 3;
  }
  else if (param_1 == PTR_PTR_1133bb408) {
    uVar1 = 1;
  }
  else {
    uVar1 = 4;
    if (param_1 != PTR_PTR_1133bb400) {
      uVar1 = 1;
    }
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10808d91c; end: 10808dd5b; +[SCMusicStickerUtils createMusicStickerFromItemInstance:presentationmodelProviderType:musicTrackAssetLoader:valdiRuntimeProvider:completion:] */

void FUN_10808d91c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d38c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b58e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 0) {
    _objc_retain(param_7);
    lVar1 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d38c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126af5d0;
    if (lVar3 == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110ed3d38;
      func_0x000108091430(&PTR____CFConstantStringClassReference_110ed3d38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_7 + 0x10))(param_7,puVar7);
      _objc_release(puVar7);
    }
    else {
      lVar1 = lVar3;
      func_0x00010c2551e0();
      if ((int)lVar1 == 4) {
        ppuVar6 = (undefined **)PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_7 + 0x10))(param_7,ppuVar6);
      }
      else {
        ppuVar6 = (undefined **)PTR_PTR_1126bc968;
        _objc_alloc();
        func_0x00010c277e80(lVar3);
        lVar1 = lVar3;
        func_0x00010c2711a0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010bf0a460(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c054c80();
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_retain(param_7);
        _objc_retain(ppuVar6);
        func_0x00010bf56800(ppuVar6);
        _objc_release(ppuVar6);
        _objc_release(param_7);
      }
    }
    _objc_release(ppuVar6);
    _objc_release(lVar3);
    lVar1 = param_7;
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_7);
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010c0c11a0(param_4);
    _objc_release(param_5);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(param_7);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    lVar1 = param_3;
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10808dd5c; end: 10808e193;  */

void FUN_10808dd5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10808de0c;
  puStack_50 = &UNK_11086c960;
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar4;
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  FUN_10808d318(uVar1,uVar2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  return;
}



/* Entry: 10808e194; end: 10808e4f7;  */

void FUN_10808e194(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126bc958;
  _objc_opt_class(PTR_PTR_1126bc958);
  ppuVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  ppuVar1 = param_2;
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  puVar2 = PTR_PTR_1126af5d0;
  if (ppuVar1 == (undefined **)0x0) {
    lVar6 = *(long *)(param_1 + 0x38);
    ppuVar3 = &PTR____CFConstantStringClassReference_110ed3d58;
    func_0x000108091430(&PTR____CFConstantStringClassReference_110ed3d58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,puVar2);
    _objc_release(puVar2);
  }
  else {
    ppuVar3 = param_2;
    func_0x00010bfc6da0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c0b58c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    _objc_release();
    if (ppuVar4 == (undefined **)0x0) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_10808e4f8;
      puStack_b8 = &UNK_1108b3098;
      _objc_retain(uVar8);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      uStack_b0 = uVar8;
      ppuStack_a8 = ppuVar3;
      _objc_retain(uVar10);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      uStack_a0 = uVar10;
      _objc_retain(uVar7);
      uStack_98 = uVar7;
      _objc_retain(ppuVar3);
      FUN_10808d318(uVar8,uVar9,&puStack_d0);
      _objc_release(uStack_98);
      _objc_release(uStack_a0);
      _objc_release(ppuStack_a8);
      uVar7 = uStack_b0;
    }
    else {
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      uStack_80 = 0x10808e3e8;
      puStack_78 = &UNK_1108465d0;
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      uStack_70 = uVar7;
      ppuStack_68 = ppuVar3;
      _objc_retain(uVar8);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      uStack_60 = uVar8;
      _objc_retain(uVar7);
      uStack_58 = uVar7;
      _objc_retain(ppuVar3);
      func_0x00010c0f7fc0(ppuVar5);
      _objc_release(ppuVar5);
      _objc_release(uStack_58);
      _objc_release(uStack_60);
      _objc_release(ppuStack_68);
      uVar7 = uStack_70;
    }
    _objc_release(uVar7);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10808e4f8; end: 10808e5f7;  */

void FUN_10808e4f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 10808e5f8; end: 10808e6ef;  */

void FUN_10808e5f8(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126bc948;
  _objc_alloc(PTR_PTR_1126bc948);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c242de0(*(undefined8 *)(param_2 + 0x30));
  func_0x00010c0df720(param_1 * 1000.0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf60540(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020220(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  lVar4 = *(long *)(param_2 + 0x40);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10808e6f0; end: 10808e997; -[SCLyricsStickerView initWithItemInstance:lottieJSONString:segmentDurationMs:valdiRuntimeProvider:currentTimeObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10808e6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126fc4f0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_1127740d8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0cc0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0d38c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126d9180;
    _objc_alloc();
    puVar6 = (undefined1 *)puVar1;
    func_0x00010be20580(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04c9a0();
    lVar7 = (long)_DAT_1127740dc;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar6);
    uVar2 = uVar4;
    func_0x00010c0b58e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0fc0(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(uVar2);
    func_0x00010c1c0f80(*(undefined8 *)((long)puVar1 + lVar7));
    if (param_5 == 0) {
      lVar7 = 10000;
    }
    else {
      lVar7 = param_5;
      func_0x00010c282800();
    }
    *(long *)((long)puVar1 + (long)_DAT_1127740e0) = lVar7;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127740e4),param_6);
    lVar7 = (long)_DAT_1127740e8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_7;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126b2798;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127740ec);
    *(undefined **)((long)puVar1 + (long)_DAT_1127740ec) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127740f0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127740f0) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127740f4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127740f4) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127740f8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127740f8) = puVar5;
    _objc_release(uVar2);
    func_0x00010beb14e0(puVar1);
    _objc_release(uVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10808e998; end: 10808e9eb; -[SCLyricsStickerView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808e998(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010becaee0();
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_1127740ec));
  puStack_28 = PTR_PTR_1126fc4f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10808e9ec; end: 10808e9fb; -[SCLyricsStickerView sizeThatFits:] */

void FUN_10808e9ec(void)

{
  return;
}



/* Entry: 10808e9fc; end: 10808ea5b; -[SCLyricsStickerView lyricsStickerType] */

void FUN_10808e9fc(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  func_0x00010be209c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c2551e0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ed3db8;
  if ((int)uVar3 != 3) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ed3d98;
  if ((int)uVar3 != 2) {
    ppuVar2 = ppuVar1;
  }
  _objc_retain(ppuVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10808ea5c; end: 10808eac3; -[SCLyricsStickerView setTimeObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808ea5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127740e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + _DAT_1127740fc) != 0) {
    func_0x00010beb08e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10808eac4; end: 10808eaff; -[SCLyricsStickerView trackId] */

undefined8 FUN_10808eac4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be209c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c277e80();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10808eb00; end: 10808eb43; -[SCLyricsStickerView title] */

void FUN_10808eb00(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be209c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10808eb44; end: 10808eb87; -[SCLyricsStickerView artistName] */

void FUN_10808eb44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be209c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf0a460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10808eb88; end: 10808ec3b; -[SCLyricsStickerView _createAnimatedImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808eb88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_3 + _DAT_112774100) != '\x01') {
    *(undefined1 *)(param_3 + _DAT_112774100) = 1;
    func_0x00010bec2b80(param_3);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10808ec3c;
    puStack_40 = &UNK_110858dc0;
    lStack_38 = param_3;
    uStack_30 = param_1;
    uStack_28 = param_2;
    func_0x00010c0f7fc0(*(undefined8 *)(param_3 + _DAT_1127740f8),param_4,&puStack_58);
  }
  func_0x00010bfbc3e0(*(undefined8 *)(param_3 + _DAT_1127740f4));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10808ec3c; end: 10808ecff;  */

void FUN_10808ec3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar2;
  func_0x00010bdcb4c0(uVar2);
  func_0x00010be1aa40(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),uVar2,param_2,
                      uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10808ed00;
  puStack_48 = &UNK_110841f80;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 10808ed00; end: 10808ed5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808ed00(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bb2a0;
  _objc_alloc();
  func_0x00010c01bf60();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112774104);
  *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_112774104) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127740f4),
             PTR_s_completeWithValue__1125ae900,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10808ed5c; end: 10808ed97; -[SCLyricsStickerView _getOffsetMs] */

undefined8 FUN_10808ed5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be209c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2783a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10808ed98; end: 10808eddf; -[SCLyricsStickerView _getLyricsStickerType] */

void FUN_10808ed98(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be209c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2551e0();
  FUN_10808d4dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10808ede0; end: 10808ee4f; -[SCLyricsStickerView _getMusicStickerMetadataFromCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808ede0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127740d8);
  func_0x00010c0cc0c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d38c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10808ee50; end: 10808f03f; -[SCLyricsStickerView _setupTimeSubscriptionWithComposerCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808ee50(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = param_3;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127740fc);
    *(long *)(param_1 + _DAT_1127740fc) = lVar3;
    _objc_release(uVar2);
    func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_1127740f0));
    lVar4 = (long)_DAT_112774108;
    func_0x00010c069d00(*(undefined8 *)(param_1 + lVar4));
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    lVar3 = *(long *)(param_1 + _DAT_1127740e8);
    if (lVar3 == 0) {
      puStack_88 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x2020000000;
      uStack_78 = 0;
      _objc_copyWeak(auStack_98,auStack_48);
      func_0x00010c150360(0x3fc0000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar1;
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_98);
      __Block_object_dispose(&uStack_90,8);
    }
    else {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_10808f040;
      puStack_58 = &UNK_110852698;
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c25ff60(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar3);
      _objc_destroyWeak(auStack_50);
    }
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10808f040; end: 10808f18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808f040(double param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + _DAT_1127740fc);
    if (lVar1 != 0) {
      if (param_3 == 0) {
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
      }
      else {
        func_0x00010bdc1140(&uStack_48,param_3);
      }
      _CMTimeGetSeconds(&uStack_48);
      (**(code **)(lVar1 + 0x10))(param_1 * 1000.0,lVar1);
    }
  }
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 10808f18c; end: 10808f1df; -[SCLyricsStickerView _tearDownTimeSubscription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808f18c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_1127740f0));
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127740fc);
  *(undefined8 *)(param_1 + _DAT_1127740fc) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112774108;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10808f1e0; end: 10808f3ff; -[SCLyricsStickerView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808f1e0(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126d9188;
  _objc_alloc(PTR_PTR_1126d9188);
  uVar2 = param_1;
  func_0x00010be20580(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be20f00(param_1);
  func_0x00010c02d000((double)uVar3,puVar1);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + (long)_DAT_1127740dc);
  func_0x00010c0b58a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1120(puVar1);
  _objc_release(uVar4);
  _objc_initWeak(auStack_58,param_1);
  puVar5 = PTR_PTR_1126d9190;
  _objc_alloc(PTR_PTR_1126d9190);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c030ce0(puVar5);
  puVar6 = PTR_PTR_1126d9198;
  _objc_alloc();
  lVar7 = param_1 + (long)_DAT_1127740e4;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11277410c);
  *(undefined **)(param_1 + (long)_DAT_11277410c) = puVar6;
  _objc_release(uVar4);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  func_0x00010befbb60(param_1);
  func_0x00010c23d620(param_1);
  func_0x00010c1cbe20(param_1);
  func_0x00010c08cdc0(param_1);
  func_0x00010bdeacc0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  return;
}



/* Entry: 10808f400; end: 10808f54f;  */

void FUN_10808f400(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b2f30;
  _objc_alloc(PTR_PTR_1126b2f30);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10808f550;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  func_0x00010bffae00(puVar1);
  if (param_2 != 0) {
    puVar2 = puVar1;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(puVar2);
    _objc_release(puVar2);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_80);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10808f550; end: 10808f5f7;  */

void FUN_10808f550(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10808f5f8; end: 10808f657;  */

void FUN_10808f5f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becaee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10808f658; end: 10808f9ff; -[SCLyricsStickerView _generateAnimatedImageWithSize:durationMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808f658(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  double dVar14;
  
  lVar1 = param_3 + _DAT_1127740e4;
  dVar14 = param_1;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b82c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar1 = lVar3;
    func_0x00010c2405a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_3 + _DAT_1127740dc);
    func_0x00010c0b58a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar4;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar4);
    if (lVar2 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bff6b20();
      puVar6 = PTR_PTR_1126d91a0;
      func_0x00010bfe9740(PTR_PTR_1126d91a0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      puVar7 = PTR_PTR_1126b9658;
      _objc_alloc();
      func_0x00010c055880();
      puVar13 = puVar7;
      _CGColorSpaceCreateDeviceRGB();
      lVar8 = 0;
      _CGBitmapContextCreate(0,(long)param_1,(long)param_2,8,0,puVar13,0x4001);
      _CGBitmapContextGetBytesPerRow();
      func_0x00010bf8b160(puVar6);
      uVar12 = 0;
      if ((ulong)(long)(dVar14 * 1000.0) <= param_5) {
        param_5 = (long)(dVar14 * 1000.0);
      }
      lVar4 = (long)_DAT_1127740ec;
      do {
        uVar9 = *(ulong *)(param_3 + lVar4);
        func_0x00010c06e0e0();
        if ((uVar9 & 1) != 0) {
          _CGColorSpaceRelease(puVar13);
          _CGContextRelease(lVar8);
          puVar13 = (undefined *)0x0;
          goto LAB_10808f994;
        }
        _CGContextClearRect(0,0,param_1,param_2,lVar8);
        _CGBitmapContextGetData(lVar8);
        lVar10 = param_3;
        func_0x00010be20f00(param_3);
        func_0x00010bf89900(0,0,param_1,param_2,(double)(lVar10 + uVar12) / 1000.0,puVar6);
        lVar10 = lVar8;
        _CGBitmapContextCreateImage();
        puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9200(0x3fc0000000000000,puVar7);
        if (lVar10 == 0) {
          _objc_release(puVar11);
          break;
        }
        _CFRelease(lVar10);
        _objc_release(puVar11);
        uVar12 = (ulong)((double)uVar12 + 125.0);
      } while (uVar12 <= param_5);
      _CGColorSpaceRelease(puVar13);
      _CGContextRelease(lVar8);
      puVar13 = PTR_PTR_1126b2720;
      puVar11 = puVar7;
      func_0x00010bf92d00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe93c0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
LAB_10808f994:
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(0);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10808fa00; end: 10808fa3b; -[SCLyricsStickerView _stickerSize] */

undefined1  [16]
FUN_10808fa00(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
             )

{
  undefined1 auVar1 [16];
  
  func_0x00010bfb68e0();
  func_0x00010bfb68e0(param_5);
  auVar1._8_8_ = param_4 + param_4;
  auVar1._0_8_ = param_3 + param_3;
  return auVar1;
}



/* Entry: 10808fa3c; end: 10808fa5f; -[SCLyricsStickerView _animatedStickerDurationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10808fa3c(long param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = NEON_ucvtf(*(undefined8 *)(param_1 + _DAT_1127740e0));
  dVar2 = (double)NEON_fminnm(uVar1,0x40ed4c0000000000);
  return (long)dVar2;
}



/* Entry: 10808fa60; end: 10808fa67; -[SCLyricsStickerView scaleLimit] */

undefined8 FUN_10808fa60(void)

{
  return 0;
}



/* Entry: 10808fa68; end: 10808fafb; -[SCLyricsStickerView tappableElementBounds] */

undefined * FUN_10808fa68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d91a8;
  _objc_alloc();
  func_0x00010c005f20(0);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 10808fafc; end: 10808fb03; -[SCLyricsStickerView shouldRespondToLongPress:] */

undefined8 FUN_10808fafc(void)

{
  return 0;
}



/* Entry: 10808fb04; end: 10808fb0b; -[SCLyricsStickerView shouldRespondToTap:] */

undefined8 FUN_10808fb04(void)

{
  return 1;
}



/* Entry: 10808fb0c; end: 10808fb83; -[SCLyricsStickerView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808fb0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + _DAT_112774104);
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bec2b80();
    func_0x00010be1aa40(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126bb2a0;
    _objc_alloc(PTR_PTR_1126bb2a0);
    func_0x00010c01bf60();
    _objc_release(param_1);
  }
  else {
    _objc_retain(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10808fb84; end: 10808fb87; -[SCLyricsStickerView didEndDisplay] */

void FUN_10808fb84(void)

{
  return;
}



/* Entry: 10808fb88; end: 10808fb8b; -[SCLyricsStickerView willDisplay] */

void FUN_10808fb88(void)

{
  return;
}



/* Entry: 10808fb8c; end: 10808fb9b; -[SCLyricsStickerView animatedStickerImageFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808fb8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127740f4),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 10808fb9c; end: 10808fc33; -[SCLyricsStickerView animatedStickerImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808fb9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112774104;
  lVar1 = *(long *)(param_3 + lVar2);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bec2b80(param_3);
    lVar1 = param_3;
    func_0x00010bdcb4c0(param_3);
    func_0x00010be1aa40(param_1,param_2,param_3,param_4,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfe6ac0(*(undefined8 *)(param_3 + lVar2));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10808fc34; end: 10808fc37; -[SCLyricsStickerView startAnimating] */

void FUN_10808fc34(void)

{
  return;
}



/* Entry: 10808fc38; end: 10808fc3b; -[SCLyricsStickerView stopAnimating] */

void FUN_10808fc38(void)

{
  return;
}



/* Entry: 10808fc3c; end: 10808fc4b; -[SCLyricsStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10808fc3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774110);
}



/* Entry: 10808fc4c; end: 10808fc5b; -[SCLyricsStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10808fc4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127740d8);
}



/* Entry: 10808fc5c; end: 10808fc6b; -[SCLyricsStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10808fc5c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127740d4);
}



/* Entry: 10808fc6c; end: 10808fc7b; -[SCLyricsStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808fc6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127740d4) = param_3;
  return;
}



/* Entry: 10808fc7c; end: 10808fd67; -[SCLyricsStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808fc7c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127740d8,0);
  _objc_storeStrong(param_1 + _DAT_112774110,0);
  _objc_storeStrong(param_1 + _DAT_1127740ec,0);
  _objc_storeStrong(param_1 + _DAT_1127740f4,0);
  _objc_storeStrong(param_1 + _DAT_1127740f8,0);
  _objc_storeStrong(param_1 + _DAT_1127740fc,0);
  _objc_storeStrong(param_1 + _DAT_1127740e8,0);
  _objc_storeStrong(param_1 + _DAT_1127740f0,0);
  _objc_destroyWeak(param_1 + _DAT_1127740e4);
  _objc_storeStrong(param_1 + _DAT_1127740dc,0);
  _objc_storeStrong(param_1 + _DAT_11277410c,0);
  _objc_storeStrong(param_1 + _DAT_112774104,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112774108,0);
  return;
}



/* Entry: 10808fd68; end: 10808fe77; -[SCMusicStickerView initWithTrackId:title:artistName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10808fd68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fc4f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112774118) = param_3;
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277411c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277411c) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112774120);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112774120) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112774124);
    *(undefined **)((long)puVar1 + (long)_DAT_112774124) = puVar2;
    _objc_release(uVar4);
    func_0x00010beb14e0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10808fe78; end: 10808ffc3; -[SCMusicStickerView createImageViewWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10808fe78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_7);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  lVar3 = *(long *)(param_5 + _DAT_112774128);
  if ((lVar3 == 0) || (lVar5 = (long)_DAT_11277412c, *(long *)(param_5 + lVar5) == 0)) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010bfe7c80(puVar2,param_6,lVar3,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
    uVar4 = *(undefined8 *)(param_5 + _DAT_112774124);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10808ffc4;
    puStack_80 = &UNK_11096ce60;
    puStack_78 = puVar2;
    lStack_70 = param_5;
    uStack_60 = param_1;
    uStack_58 = param_2;
    uStack_50 = param_3;
    uStack_48 = param_4;
    _objc_retain(param_7);
    lStack_68 = param_7;
    _objc_retain(puVar2);
    func_0x00010c0f7fc0(uVar4,param_6,&puStack_98);
    _objc_release(lStack_68);
    _objc_release(puStack_78);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 10808ffc4; end: 10809008f;  */

void FUN_10808ffc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_108090090(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1080902cc;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_68);
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar2);
  return;
}



/* Entry: 108090090; end: 1080902cb;  */

void FUN_108090090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uVar1 = param_5;
  _objc_retain();
  puVar3 = PTR_PTR_1126c3d50;
  FUN_1080906b4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bf67520(puVar3,param_6,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b9658;
  _objc_alloc(PTR_PTR_1126b9658);
  func_0x00010c055880();
  puVar5 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c23d0a0(param_5);
  func_0x00010c0469e0(puVar5);
  puVar8 = puVar3;
  func_0x00010bfb6b20();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar8 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      puVar6 = puVar3;
      func_0x00010bfb6920(puVar3,param_6,puVar8,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = puVar2;
      uStack_d8 = 0xc2000000;
      uStack_d0 = 0x108090d84;
      puStack_c8 = &UNK_1108db520;
      _objc_retain(param_5);
      uStack_c0 = param_5;
      puStack_b8 = puVar6;
      uStack_b0 = param_1;
      uStack_a8 = param_2;
      uStack_a0 = param_3;
      uStack_98 = param_4;
      _objc_retain(puVar6);
      puVar7 = puVar5;
      func_0x00010bfe91c0(puVar5,param_6,&puStack_e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160(puVar6);
      func_0x00010bef9200(puVar4,param_6,puVar7);
      _objc_release(puVar7);
      _objc_release(puStack_b8);
      _objc_release(uStack_c0);
      _objc_release(puVar6);
      puVar8 = puVar8 + 1;
      puVar6 = puVar3;
      func_0x00010bfb6b20();
    } while (puVar8 < puVar6);
  }
  puVar2 = PTR_PTR_1126b2720;
  puVar8 = puVar4;
  func_0x00010bf92d00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe93c0(puVar2,param_6,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1080902cc; end: 10809032f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080902cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bb2a0;
  _objc_alloc();
  func_0x00010c01bf60();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112774130);
  *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_112774130) = puVar1;
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108090320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108090330; end: 1080906b3; -[SCMusicStickerView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108090330(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar4 = (long)_DAT_112774128;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff8000001d);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar5 = (long)_DAT_112774134;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar5),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar5),param_2,0x16);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,
                      *(undefined8 *)(param_1 + _DAT_11277411c));
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0x3fe0000000000000,0x3fe0000000000000);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x3ff0000000000000);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff8000001d);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(uVar3);
  _objc_release(puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar5 = (long)_DAT_112774138;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar5),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar5),param_2,0x17);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,
                      *(undefined8 *)(param_1 + _DAT_112774120));
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0x3fe0000000000000,0x3fe0000000000000);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x3ff0000000000000);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff8000001d);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(uVar3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010befbb60(uVar3,param_2,*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR_PTR_1126b2720;
  FUN_1080906b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d040(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126bb2a0;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar4 = (long)_DAT_11277412c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c23d620(param_1);
  func_0x00010c1cbe20(param_1);
  func_0x00010c08cdc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1080906b4; end: 108090703;  */

void FUN_1080906b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDataAsset_1126d91b0;
  _objc_alloc(PTR__OBJC_CLASS___NSDataAsset_1126d91b0);
  func_0x00010c02d480();
  puVar2 = puVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108090704; end: 1080908d3; -[SCMusicStickerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108090704(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double in_d3;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126fc4f8;
  lStack_90 = param_1;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  lVar3 = (long)_DAT_112774128;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar3));
  dVar9 = in_d3 * 0.5;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar9);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_1);
  dVar10 = in_d3 * 0.5 + -16.0;
  dVar5 = 13.0;
  dVar9 = 32.0;
  dVar8 = 32.0;
  _CGRectGetMaxX(0x402a000000000000,dVar10,0x4040000000000000,0x4040000000000000);
  dVar6 = 8.0;
  dVar5 = dVar5 + 8.0;
  lVar4 = (long)_DAT_112774134;
  func_0x00010c0699c0(*(undefined8 *)(param_1 + lVar4));
  lVar2 = (long)_DAT_112774138;
  dVar7 = dVar6;
  func_0x00010c0699c0(*(undefined8 *)(param_1 + lVar2));
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar3));
  dVar11 = dVar8 * 0.5 - (dVar6 + dVar7) * 0.5;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar3));
  dVar12 = (dVar9 - dVar5) + -13.0;
  dVar9 = dVar5;
  dVar8 = dVar12;
  _CGRectGetMaxY(dVar5,dVar11,dVar12,dVar6);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010b8166f8(0x402a000000000000,dVar10,0x4040000000000000,0x4040000000000000,param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11277412c));
  func_0x00010b8166f8(dVar5,dVar11,dVar12,dVar6,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010b8166f8(dVar5,dVar9,(dVar8 - dVar5) + -13.0,dVar7,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar2));
  return;
}



/* Entry: 1080908d4; end: 1080909d3; -[SCMusicStickerView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1080908d4(double param_1,double param_2,long param_3)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  dVar5 = -32.0;
  dVar2 = param_1 + -13.0 + -32.0 + -13.0;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar3 = dVar2;
  dVar4 = param_2;
  func_0x00010c23d5a0(*(undefined8 *)(param_3 + _DAT_112774134));
  func_0x00010c23d5a0(*(undefined8 *)(param_3 + _DAT_112774138));
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  if (dVar2 <= dVar3) {
    dVar2 = dVar3;
  }
  dVar2 = dVar2 + 53.0 + 13.0;
  if (dVar5 * 0.7 <= dVar2) {
    dVar2 = dVar5 * 0.7;
  }
  dVar5 = 32.0;
  if (32.0 <= dVar4 + param_2) {
    dVar5 = dVar4 + param_2;
  }
  auVar6._8_8_ = dVar5 + 6.0 + 6.0;
  auVar6._0_8_ = dVar2;
  return auVar6;
}



/* Entry: 1080909d4; end: 1080909db; -[SCMusicStickerView scaleLimit] */

undefined8 FUN_1080909d4(void)

{
  return 0;
}



/* Entry: 1080909dc; end: 108090a6f; -[SCMusicStickerView tappableElementBounds] */

undefined * FUN_1080909dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d91a8;
  _objc_alloc();
  func_0x00010c005f20(0x3fe0000000000000);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 108090a70; end: 108090a77; -[SCMusicStickerView shouldRespondToLongPress:] */

undefined8 FUN_108090a70(void)

{
  return 0;
}



/* Entry: 108090a78; end: 108090a7f; -[SCMusicStickerView shouldRespondToTap:] */

undefined8 FUN_108090a78(void)

{
  return 1;
}



/* Entry: 108090a80; end: 108090ae7; -[SCMusicStickerView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108090a80(long param_1)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + _DAT_112774130);
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bf03800();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126bb2a0;
    _objc_alloc(PTR_PTR_1126bb2a0);
    func_0x00010c01bf60();
    _objc_release(param_1);
  }
  else {
    _objc_retain(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108090ae8; end: 108090aeb; -[SCMusicStickerView didEndDisplay] */

void FUN_108090ae8(void)

{
  return;
}



/* Entry: 108090aec; end: 108090aef; -[SCMusicStickerView willDisplay] */

void FUN_108090aec(void)

{
  return;
}



/* Entry: 108090af0; end: 108090b43; -[SCMusicStickerView animatedStickerImageFuture] */

void FUN_108090af0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bf03800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108090b44; end: 108090c33; -[SCMusicStickerView animatedStickerImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108090b44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = (long)_DAT_112774130;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (lVar1 == 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112774128);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010bfe7c80(puVar3,param_2,uVar5,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_11277412c));
    puVar2 = puVar3;
    FUN_108090090(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    puVar2 = *(undefined **)(param_1 + lVar4);
    func_0x00010bfe6ac0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108090c34; end: 108090c43; -[SCMusicStickerView startAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108090c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277412c),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 108090c44; end: 108090c53; -[SCMusicStickerView stopAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108090c44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277412c),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 108090c54; end: 108090c63; -[SCMusicStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108090c54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277413c);
}



/* Entry: 108090c64; end: 108090c73; -[SCMusicStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108090c64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774140);
}



/* Entry: 108090c74; end: 108090c83; -[SCMusicStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108090c74(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112774114);
}



/* Entry: 108090c84; end: 108090c93; -[SCMusicStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108090c84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112774114) = param_3;
  return;
}



/* Entry: 108090c94; end: 108090ca3; -[SCMusicStickerView artistName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108090c94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774120);
}



/* Entry: 108090ca4; end: 108090cb3; -[SCMusicStickerView title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108090ca4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277411c);
}



/* Entry: 108090cb4; end: 108090cc3; -[SCMusicStickerView trackId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108090cb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774118);
}



/* Entry: 108090cc4; end: 108090dd7; -[SCMusicStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108090cc4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277411c,0);
  _objc_storeStrong(param_1 + _DAT_112774120,0);
  _objc_storeStrong(param_1 + _DAT_112774140,0);
  _objc_storeStrong(param_1 + _DAT_11277413c,0);
  _objc_storeStrong(param_1 + _DAT_112774124,0);
  _objc_storeStrong(param_1 + _DAT_11277412c,0);
  _objc_storeStrong(param_1 + _DAT_112774138,0);
  _objc_storeStrong(param_1 + _DAT_112774134,0);
  _objc_storeStrong(param_1 + _DAT_112774130,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112774128,0);
  return;
}



/* Entry: 108090dd8; end: 108090e5b; -[SCLyricsSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108090dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fc500;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112774144;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108090e5c; end: 108090efb; -[SCLyricsSticker isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108090e5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    puVar2 = PTR_PTR_1126bc970;
    _objc_opt_class(PTR_PTR_1126bc970);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + (long)_DAT_112774144);
      func_0x00010c071ae0(uVar4);
    }
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 108090efc; end: 108090f0b; -[SCLyricsSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108090efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112774144),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 108090f0c; end: 10809105b; -[SCLyricsSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108090f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ba898;
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_alloc(puVar1);
  lVar2 = param_7;
  func_0x00010c27dd80(param_7);
  lVar3 = param_7;
  func_0x00010bfee0e0(param_7);
  uVar4 = *(undefined8 *)(param_7 + _DAT_112774144);
  func_0x00010c263180();
  func_0x00010c055c20(param_1,param_2,param_3,param_4,param_5,param_6,puVar1,param_8,lVar2,lVar3,0,0
                      ,0,uVar4,param_9,param_10);
  _objc_release(param_12);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10809105c; end: 108091067; -[SCLyricsSticker stickerId] */

void FUN_10809105c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 108091068; end: 108091073; -[SCLyricsSticker shortLoggingName] */

void FUN_108091068(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 108091074; end: 10809107b; -[SCLyricsSticker toCTPItem] */

undefined8 FUN_108091074(void)

{
  return 0;
}



/* Entry: 10809107c; end: 1080910ab; -[SCLyricsSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10809107c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112774144);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080910ac; end: 1080910b3; -[SCLyricsSticker supportedFlows] */

undefined8 FUN_1080910ac(void)

{
  return 0;
}



/* Entry: 1080910b4; end: 1080910bb; -[SCLyricsSticker infoType] */

undefined8 FUN_1080910b4(void)

{
  return 0xb;
}



/* Entry: 1080910bc; end: 1080910cb; -[SCLyricsSticker intrinsicSize] */

undefined1  [16] FUN_1080910bc(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 1080910cc; end: 1080910df; -[SCLyricsSticker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080910cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112774144,0);
  return;
}



/* Entry: 1080910e0; end: 1080911ab; -[SCMusicSticker initWithTrackId:title:artistName:isTrending:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1080910e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fc508;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10808d6d4(param_3,param_4,param_5,1,0,0,param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112774148);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112774148) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1080911ac; end: 10809124b; -[SCMusicSticker isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080911ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    puVar2 = PTR_PTR_1126bc978;
    _objc_opt_class(PTR_PTR_1126bc978);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + (long)_DAT_112774148);
      func_0x00010c071ae0(uVar4);
    }
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10809124c; end: 10809125b; -[SCMusicSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10809124c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112774148),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10809125c; end: 1080913ab; -[SCMusicSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10809125c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ba898;
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_alloc(puVar1);
  lVar2 = param_7;
  func_0x00010c27dd80(param_7);
  lVar3 = param_7;
  func_0x00010bfee0e0(param_7);
  uVar4 = *(undefined8 *)(param_7 + _DAT_112774148);
  func_0x00010c263180();
  func_0x00010c055c20(param_1,param_2,param_3,param_4,param_5,param_6,puVar1,param_8,lVar2,lVar3,0,0
                      ,0,uVar4,param_9,param_10);
  _objc_release(param_12);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080913ac; end: 1080913b7; -[SCMusicSticker stickerId] */

void FUN_1080913ac(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 1080913b8; end: 1080913c3; -[SCMusicSticker shortLoggingName] */

void FUN_1080913b8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}


