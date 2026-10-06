/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b67d3a0; end: 10b67d4db; -[SCCachingImageDecodeRequest cancel] */

void FUN_10b67d3a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x00010bfec280(*(undefined8 *)(param_1 + 8));
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x30));
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = 0;
  if (lVar1 == 0) goto LAB_10b67d49c;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != 0) {
      _objc_retain(lVar1);
      func_0x00010c0f7fc0(lVar3);
      lVar3 = lVar1;
      goto LAB_10b67d48c;
    }
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10b67d4dc;
    puStack_40 = &UNK_110849530;
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    func_0x000107c27d8c(lVar3,&puStack_58);
    lVar3 = lStack_38;
LAB_10b67d48c:
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
LAB_10b67d49c:
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 10b67d4dc; end: 10b67d4fb;  */

void FUN_10b67d4dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b67d4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b67d4fc; end: 10b67d663; -[SCCachingImageDecodeRequest performWithImage:] */

void FUN_10b67d4fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = 0;
  if (lVar1 == 0) goto LAB_10b67d61c;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != 0) {
      _objc_retain(lVar1);
      _objc_retain(param_3);
      func_0x00010c0f7fc0(lVar3);
      _objc_release(param_3);
      lVar3 = lVar1;
      goto LAB_10b67d60c;
    }
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10b67d664;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    _objc_retain(param_3);
    uStack_40 = param_3;
    func_0x000107c27d8c(lVar3,&puStack_60);
    _objc_release(uStack_40);
    lVar3 = lStack_38;
LAB_10b67d60c:
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
LAB_10b67d61c:
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b67d664; end: 10b67d683;  */

void FUN_10b67d664(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b67d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b67d684; end: 10b67d69b; -[SCCachingImageDecodeRequest progressReceiver] */

void FUN_10b67d684(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b67d69c; end: 10b67d6a7; -[SCCachingImageDecodeRequest setProgressReceiver:] */

void FUN_10b67d69c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10b67d6a8; end: 10b67d6af; -[SCCachingImageDecodeRequest upstreamRequest] */

undefined8 FUN_10b67d6a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b67d6b0; end: 10b67d70b; -[SCCachingImageDecodeRequest .cxx_destruct] */

void FUN_10b67d6b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b67d70c; end: 10b67d7d7; +[SCCachingImageGenerating defaultOperationQueue] */

void FUN_10b67d70c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7818 != -1) {
    func_0x000107c27d9c(0x1137f7818,&PTR___NSConcreteGlobalBlock_110d58518);
  }
  uVar1 = uRam00000001137f7810;
  _objc_retain(uRam00000001137f7810);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b67d7d8; end: 10b67d9b3; -[SCCachingImageGenerating initWithImages:decodedImage:entity:cachingMediaManager:sourceLevel:count:logger:] */

undefined8 *
FUN_10b67d7d8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112709b40;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf529e0();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        uVar3 = param_3;
        func_0x00010c0dfd40(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar4);
        _objc_release(uVar3);
        uVar6 = uVar6 + 1;
        uVar3 = param_3;
        func_0x00010bf529e0();
      } while (uVar6 < uVar3);
    }
    func_0x00010c1aad00(puVar1);
    func_0x00010c18a480(puVar1);
    _objc_retain(param_5);
    uVar5 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar5);
    _objc_storeWeak(puVar1 + 2,param_6);
    puVar1[4] = param_7;
    puVar1[9] = param_8;
    _objc_retain(param_9);
    uVar5 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar5);
    puVar1[0xd] = 0x3ff0000000000000;
    _objc_release(puVar2);
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b67d9b4; end: 10b67db7b; -[SCCachingImageGenerating initWithImages:decodedImage:targetSize:sourceImageGenerating:sourceLevel:count:logger:] */

undefined8 *
FUN_10b67d9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_112709b40;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x00010bf529e0();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        uVar3 = param_5;
        func_0x00010c0dfd40(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar4);
        _objc_release(uVar3);
        uVar6 = uVar6 + 1;
        uVar3 = param_5;
        func_0x00010bf529e0();
      } while (uVar6 < uVar3);
    }
    func_0x00010c1aad00(puVar1);
    func_0x00010c18a480(puVar1);
    puVar1[5] = param_1;
    puVar1[6] = param_2;
    _objc_retain(param_7);
    uVar5 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar5);
    puVar1[4] = param_8;
    puVar1[9] = param_9;
    _objc_retain(param_10);
    uVar5 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar5);
    puVar1[0xd] = 0x3ff0000000000000;
    _objc_release(puVar2);
  }
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10b67db7c; end: 10b67dccb; -[SCCachingImageGenerating initWithImages:decodedImage:] */

undefined1 * FUN_10b67db7c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_112709b40;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bf529e0();
    if (uVar5 != 0) {
      uVar5 = 0;
      do {
        uVar3 = param_3;
        func_0x00010c0dfd40(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(puVar4);
        _objc_release(uVar3);
        uVar5 = uVar5 + 1;
        uVar3 = param_3;
        func_0x00010bf529e0();
      } while (uVar5 < uVar3);
    }
    func_0x00010c1aad00(puVar1);
    func_0x00010c18a480(puVar1);
    uVar5 = param_3;
    func_0x00010bf529e0();
    *(ulong *)((long)puVar1 + 0x48) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x68) = 0x3ff0000000000000;
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b67dccc; end: 10b67dde3; -[SCCachingImageGenerating copyWithZone:] */

undefined * FUN_10b67dccc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126bfbd0;
  if (*(long *)(param_1 + 8) == 0) {
    lVar4 = *(long *)(param_1 + 0x18);
    _objc_alloc(PTR_PTR_1126bfbd0);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010bf00d20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      func_0x00010c01d080(puVar2,param_2,uVar1,*(undefined8 *)(param_1 + 0x78));
    }
    else {
      func_0x00010c01d0c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),puVar2,
                          param_2,uVar1,*(undefined8 *)(param_1 + 0x78),
                          *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38));
    }
  }
  else {
    _objc_alloc(PTR_PTR_1126bfbd0);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010bf00d20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    uVar5 = *(undefined8 *)(param_1 + 8);
    lVar4 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c01d0a0(puVar2,param_2,uVar1,uVar3,uVar5,lVar4,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38));
    _objc_release(lVar4);
  }
  _objc_release(uVar1);
  return puVar2;
}



/* Entry: 10b67dde4; end: 10b67de17; -[SCCachingImageGenerating hasDecoded] */

bool FUN_10b67dde4(long param_1)

{
  func_0x00010bf673a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 10b67de18; end: 10b67dfbb; -[SCCachingImageGenerating decodeImageWithPerformer:resultHandler:] */

void FUN_10b67de18(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf673a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bfe9920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (lVar2 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126e0450;
      _objc_alloc();
      func_0x00010c034f60();
      puVar3 = PTR_PTR_1126bfbd0;
      func_0x00010bf69dc0(PTR_PTR_1126bfbd0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar4);
      _objc_retain(lVar2);
      func_0x00010befa3a0(puVar3);
      _objc_release(puVar3);
      _objc_retain(puVar4);
      _objc_release(lVar2);
      _objc_release(puVar4);
      _objc_release(puVar4);
    }
    _objc_release(lVar2);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,lVar1);
    puVar4 = (undefined *)0x0;
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b67dfbc; end: 10b67e0ab;  */

void FUN_10b67dfbc(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  uVar1 = *(ulong *)(param_2 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c1179e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1341e0();
  _objc_release(uVar2);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  dVar5 = param_1;
  FUN_10b68639c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x38);
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 8);
  func_0x00010bdc3540(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c13e940(dVar5 - param_1,uVar4,param_3,7,uVar3);
  _objc_release(uVar3);
  func_0x00010c18a480(*(undefined8 *)(param_2 + 0x30),param_3,uVar2);
  func_0x00010c0f94e0(*(undefined8 *)(param_2 + 0x20),param_3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b67e0ac; end: 10b67e0b7;  */

undefined ** FUN_10b67e0ac(void)

{
  return &PTR____CFConstantStringClassReference_110f6d3d8;
}



/* Entry: 10b67e0b8; end: 10b67e1bb; -[SCCachingImageGenerating _transformImageIfNeeded:] */

void FUN_10b67e0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar2 = param_3;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010bfe8a60(param_3,param_2,*(undefined8 *)(param_1 + 0x60));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  dVar4 = *(double *)(param_1 + 0x68);
  cVar1 = *(char *)(param_1 + 0x41);
  dVar6 = 1.0;
  if ((dVar4 == 1.0) || (dVar4 == 0.0)) {
    if (cVar1 == '\0') goto LAB_10b67e1a0;
    func_0x00010c23d0a0(uVar2);
LAB_10b67e154:
    dVar5 = dVar6;
    if (dVar6 <= dVar4) {
      dVar5 = dVar4;
    }
    dVar5 = dVar5 * 0.5 * dVar5 * 0.5;
    dVar7 = SQRT(dVar5 + dVar5);
    dVar5 = dVar7;
    if (dVar4 <= dVar7) {
      dVar5 = dVar4;
    }
    if (dVar6 <= dVar7) {
      dVar7 = dVar6;
    }
  }
  else {
    func_0x00010c23d0a0(uVar2);
    dVar5 = dVar4 * *(double *)(param_1 + 0x68);
    dVar7 = dVar6 * *(double *)(param_1 + 0x68);
    dVar4 = dVar5;
    dVar6 = dVar7;
    if (cVar1 != '\0') goto LAB_10b67e154;
  }
  uVar3 = uVar2;
  func_0x00010bf5c840(dVar5,dVar7,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
LAB_10b67e1a0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b67e1bc; end: 10b67e2eb; -[SCCachingImageGenerating imageAtIndex:] */

void FUN_10b67e1bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf27700();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf673a0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) && (lVar1 != 0)) {
    func_0x00010becece0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_1;
    func_0x00010bfe9920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0(lVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (lVar4 == 0) {
      param_1 = 0;
    }
    else {
      lVar5 = lVar4;
      FUN_10b686308(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becece0(param_1,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b67e2ec; end: 10b67e383; -[SCCachingImageGenerating count] */

ulong FUN_10b67e2ec(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x48);
  if (uVar1 == 0) {
    lVar2 = param_1;
    func_0x00010bfe9920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = param_1;
      func_0x00010bfe9920();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      *(long *)(param_1 + 0x48) = lVar3;
      _objc_release(lVar2);
      return *(ulong *)(param_1 + 0x48);
    }
    uVar1 = *(ulong *)(param_1 + 0x48);
  }
  if (1 < uVar1) {
    uVar1 = 1;
    *(undefined8 *)(param_1 + 0x48) = 1;
  }
  return uVar1;
}



/* Entry: 10b67e384; end: 10b67e60b; -[SCCachingImageGenerating imageAtIndex:queue:resultHandler:] */

void FUN_10b67e384(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf27700();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf673a0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) && (lVar1 != 0)) {
    func_0x00010becece0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,param_1,1);
    _objc_release(param_1);
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x00010bfe9920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    if (lVar3 == 0) {
      puVar6 = PTR_PTR_1126e0450;
      _objc_alloc();
      _objc_retain(param_5);
      func_0x00010c03c760();
      puVar5 = PTR_PTR_1126bfbd0;
      func_0x00010bf69dc0(PTR_PTR_1126bfbd0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar6);
      func_0x00010befa3a0(puVar5);
      _objc_release(puVar5);
      _objc_retain(puVar6);
      _objc_release(puVar6);
      _objc_release(puVar6);
      _objc_release(param_5);
    }
    else {
      lVar4 = lVar3;
      FUN_10b686308(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becece0(param_1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_5 + 0x10))(param_5,param_1,0);
      _objc_release(param_1);
      _objc_release(lVar4);
      puVar6 = (undefined *)0x0;
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b67e60c; end: 10b67e653;  */

void FUN_10b67e60c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010becece0(uVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b67e654; end: 10b67e74b;  */

void FUN_10b67e654(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x10b67e6e8;
    puStack_40 = &UNK_110850cc8;
    _objc_retain(uVar4);
    uStack_38 = uVar4;
    func_0x00010be1b6c0(uVar1,param_2,uVar2,uVar4,&puStack_58);
    _objc_release(uStack_38);
  }
  return;
}



/* Entry: 10b67e74c; end: 10b67ea47; -[SCCachingImageGenerating _generateMoreImagesAtIndex:decodeRequest:resultHandler:] */

void FUN_10b67e74c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar4 = *(long *)(param_1 + 0x70);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3 + 1;
    lVar5 = lVar4;
    if (uVar7 < *(ulong *)(param_1 + 0x48)) {
      do {
        lVar4 = *(long *)(param_1 + 0x70);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(puVar1);
        if (lVar4 == 0) {
          puVar1 = puVar6;
          func_0x00010bf51e00(puVar6);
          (**(code **)(param_5 + 0x10))(param_5,puVar1);
          goto LAB_10b67ea04;
        }
        func_0x00010befa120();
        uVar7 = uVar7 + 1;
        lVar5 = lVar4;
      } while (uVar7 < *(ulong *)(param_1 + 0x48));
    }
    _objc_release(puVar6);
  }
  puVar6 = PTR_DAT_1126a5c50;
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 == 0) goto LAB_10b67ea10;
    _objc_retain(param_5);
    func_0x00010be1b6c0(lVar5);
    puVar6 = param_5;
  }
  else {
    _objc_retain(lVar5);
    lVar2 = lVar5;
    func_0x000107c318f8(lVar5,puVar6);
    _objc_release(lVar5);
    if ((int)lVar2 == 0) goto LAB_10b67ea10;
    puVar6 = *(undefined **)(param_1 + 8);
    _objc_retain(puVar6);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    puVar1 = PTR_PTR_1126bfbc8;
    func_0x00010bf586e0(PTR_PTR_1126bfbc8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    puVar3 = puVar6;
    func_0x00010bf27780(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d2e0(param_4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(param_1);
    puVar1 = param_5;
LAB_10b67ea04:
    _objc_release(puVar1);
  }
  _objc_release(puVar6);
LAB_10b67ea10:
  _objc_release(lVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10b67ea48; end: 10b67eb13;  */

void FUN_10b67ea48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126bfbd0;
  func_0x00010bf69dc0(PTR_PTR_1126bfbd0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010befa3a0(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10b67eb14; end: 10b67ec8f;  */

void FUN_10b67eb14(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c0d3c80(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar8 = 0;
    do {
      uVar3 = *(ulong *)(param_1 + 0x28);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
      uVar6 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar5 = uVar3;
      if ((uVar6 & 1) != 0) {
        _UIImageJPEGRepresentation(0x3fe0000000000000);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
      }
      puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar4);
      if ((uVar6 & 1) == 0) {
LAB_10b67ec00:
        _objc_release(uVar5);
      }
      else if (uVar5 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar1);
        _objc_release(puVar4);
        goto LAB_10b67ec00;
      }
      uVar8 = uVar8 + 1;
      uVar6 = *(ulong *)(param_1 + 0x28);
      func_0x00010bf529e0();
    } while (uVar8 < uVar6);
  }
  uVar7 = uVar1;
  func_0x00010bf51e00(uVar1);
  func_0x00010c1aad00(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x20) + 0x58;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf276e0();
  _objc_release(lVar2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b67ec90; end: 10b67ee1b;  */

void FUN_10b67ec90(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c0d3c80(uVar1);
  uVar2 = param_2;
  func_0x00010bf529e0();
  if (uVar2 != 0) {
    uVar8 = 0;
    do {
      _objc_autoreleasePoolPush();
      uVar3 = param_2;
      func_0x00010c0dfd40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_10b68628c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
                    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar4;
      _UIImageJPEGRepresentation(0x3fe0000000000000,uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar1);
      _objc_release(puVar5);
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_autoreleasePoolPop(uVar2);
      uVar8 = uVar8 + 1;
      uVar2 = param_2;
      func_0x00010bf529e0();
    } while (uVar8 < uVar2);
  }
  uVar6 = uVar1;
  func_0x00010bf51e00(uVar1);
  func_0x00010c1aad00(*(undefined8 *)(param_1 + 0x20));
  lVar7 = *(long *)(param_1 + 0x20) + 0x58;
  _objc_loadWeakRetained(lVar7);
  func_0x00010bf276e0();
  _objc_release(lVar7);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  _objc_release(uVar6);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b67ee1c; end: 10b67ee23; -[SCCachingImageGenerating imageFormat] */

undefined8 FUN_10b67ee1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b67ee24; end: 10b67ee3b; -[SCCachingImageGenerating delegate] */

void FUN_10b67ee24(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b67ee3c; end: 10b67ee47; -[SCCachingImageGenerating setDelegate:] */

void FUN_10b67ee3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 10b67ee48; end: 10b67ee4f; -[SCCachingImageGenerating shouldOverrideOrientation] */

undefined1 FUN_10b67ee48(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 10b67ee50; end: 10b67ee57; -[SCCachingImageGenerating setShouldOverrideOrientation:] */

void FUN_10b67ee50(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b67ee58; end: 10b67ee5f; -[SCCachingImageGenerating overrideOrientation] */

undefined8 FUN_10b67ee58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b67ee60; end: 10b67ee67; -[SCCachingImageGenerating setOverrideOrientation:] */

void FUN_10b67ee60(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10b67ee68; end: 10b67ee6f; -[SCCachingImageGenerating scaleFactor] */

undefined8 FUN_10b67ee68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b67ee70; end: 10b67ee77; -[SCCachingImageGenerating setScaleFactor:] */

void FUN_10b67ee70(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x68) = param_1;
  return;
}



/* Entry: 10b67ee78; end: 10b67ee7f; -[SCCachingImageGenerating scaleToRemoveWhiteBorder] */

undefined1 FUN_10b67ee78(long param_1)

{
  return *(undefined1 *)(param_1 + 0x41);
}



/* Entry: 10b67ee80; end: 10b67ee87; -[SCCachingImageGenerating setScaleToRemoveWhiteBorder:] */

void FUN_10b67ee80(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x41) = param_3;
  return;
}



/* Entry: 10b67ee88; end: 10b67ee93; -[SCCachingImageGenerating images] */

void FUN_10b67ee88(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x70,1);
  return;
}



/* Entry: 10b67ee94; end: 10b67ee9b; -[SCCachingImageGenerating setImages:] */

void FUN_10b67ee94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 10b67ee9c; end: 10b67eea7; -[SCCachingImageGenerating decodedImage] */

void FUN_10b67ee9c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x78,1);
  return;
}



/* Entry: 10b67eea8; end: 10b67eeaf; -[SCCachingImageGenerating setDecodedImage:] */

void FUN_10b67eea8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10b67eeb0; end: 10b67ef13; -[SCCachingImageGenerating .cxx_destruct] */

void FUN_10b67eeb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b67ef14; end: 10b67efa7; -[SCCachingMediaItemBuildRequest initWithResultHandler:] */

undefined1 * FUN_10b67ef14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709b48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = param_3;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b67efa8; end: 10b67efc7; -[SCCachingMediaItemBuildRequest isCancelled] */

bool FUN_10b67efa8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 10b67efc8; end: 10b67f003; -[SCCachingMediaItemBuildRequest cancel] */

void FUN_10b67efc8(long param_1)

{
  func_0x00010bfec280(*(undefined8 *)(param_1 + 8));
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b67f004; end: 10b67f083; -[SCCachingMediaItemBuildRequest performWithItem:count:isCancelled:isFinal:] */

void FUN_10b67f004(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,int param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_3,param_4);
  }
  if (param_6 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b67f084; end: 10b67f09b; -[SCCachingMediaItemBuildRequest progressReceiver] */

void FUN_10b67f084(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b67f09c; end: 10b67f0a7; -[SCCachingMediaItemBuildRequest setProgressReceiver:] */

void FUN_10b67f09c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10b67f0a8; end: 10b67f0bf; -[SCCachingMediaItemBuildRequest requestGroup] */

void FUN_10b67f0a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b67f0c0; end: 10b67f0cb; -[SCCachingMediaItemBuildRequest setRequestGroup:] */

void FUN_10b67f0c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10b67f0cc; end: 10b67f10b; -[SCCachingMediaItemBuildRequest .cxx_destruct] */

void FUN_10b67f0cc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b67f10c; end: 10b67f1cf; -[SCCachingMediaItemBuildRequestGroup initWithPerformer:sourceLevel:] */

undefined1 *
FUN_10b67f10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112709b50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b67f1d0; end: 10b67f29f; -[SCCachingMediaItemBuildRequestGroup dealloc] */

void FUN_10b67f1d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b67f2a0;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_68 = PTR_PTR_112709b50;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b67f2a0; end: 10b67f3ab;  */

void FUN_10b67f2a0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010c0f9500(*(undefined8 *)(lStack_108 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar5;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf2dba0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  if ((undefined8 *)*(undefined1 **)(lVar2 + 0x30) != puVar4) {
    func_0x00010bf2dba0();
    lVar5 = lVar2;
    func_0x00010c06e0e0();
    if ((int)lVar5 == 0) {
      _objc_retain(puVar4);
      uVar3 = *(undefined8 *)(lVar2 + 0x30);
      *(undefined8 **)(lVar2 + 0x30) = puVar4;
      _objc_release(uVar3);
      puVar1 = PTR_DAT_1126a4fc8;
      lVar6 = *(long *)(lVar2 + 0x30);
      _objc_retain(lVar6);
      lVar5 = lVar6;
      func_0x000107c318f8(lVar6,puVar1);
      _objc_release(lVar6);
      if (((int)lVar5 != 0) && (lVar6 != 0)) {
        func_0x00010c1e4860(*(undefined8 *)(lVar2 + 0x30));
      }
    }
    else {
      func_0x00010bf2dba0(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b67f3ac; end: 10b67f45b; -[SCCachingMediaItemBuildRequestGroup setUpstreamRequest:] */

void FUN_10b67f3ac(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x30) != param_3) {
    func_0x00010bf2dba0();
    lVar2 = param_1;
    func_0x00010c06e0e0();
    if ((int)lVar2 == 0) {
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = param_3;
      _objc_release(uVar3);
      puVar1 = PTR_DAT_1126a4fc8;
      lVar4 = *(long *)(param_1 + 0x30);
      _objc_retain(lVar4);
      lVar2 = lVar4;
      func_0x000107c318f8(lVar4,puVar1);
      _objc_release(lVar4);
      if (((int)lVar2 != 0) && (lVar4 != 0)) {
        func_0x00010c1e4860(*(undefined8 *)(param_1 + 0x30));
      }
    }
    else {
      func_0x00010bf2dba0(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b67f45c; end: 10b67f463; -[SCCachingMediaItemBuildRequestGroup addRequest:] */

void FUN_10b67f45c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 10b67f464; end: 10b67f58b; -[SCCachingMediaItemBuildRequestGroup invalidate] */

ulong FUN_10b67f464(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c0f9500(*(undefined8 *)(lStack_108 + lVar6 * 8),param_2,0,0,1,1);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010bfec280(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x30));
  uVar2 = *(ulong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar2;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(uVar2 + 0x18);
  func_0x00010c296d80(uVar3);
  return (ulong)(0 < (int)uVar3);
}



/* Entry: 10b67f58c; end: 10b67f5ab; -[SCCachingMediaItemBuildRequestGroup isCancelled] */

bool FUN_10b67f58c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 10b67f5ac; end: 10b67f63b; -[SCCachingMediaItemBuildRequestGroup removeRequest:] */

void FUN_10b67f5ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b67f63c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b67f63c; end: 10b67f6c7;  */

void FUN_10b67f63c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010c0f9500(*(undefined8 *)(param_1 + 0x28),param_2,0,0,1,1);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0fa4e0();
    if ((uVar2 & 1) == 0) {
      func_0x00010bfec280(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
      func_0x00010bf2dba0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 10b67f6c8; end: 10b67f803; -[SCCachingMediaItemBuildRequestGroup performWithItem:count:isFinal:] */

void FUN_10b67f6c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar2 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar5 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar5);
  puVar3 = auStack_e8;
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010c0f9500(*(undefined8 *)(lStack_128 + lVar7 * 8),param_2,param_3,param_4,0,
                            param_5);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      puVar3 = auStack_e8;
      lVar1 = lVar5;
      puVar2 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  if ((int)param_5 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10b67f804;
  uStack_160 = param_4;
  uStack_158 = param_5;
  lStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  uVar4 = *(undefined8 *)(lVar1 + 8);
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_10b67f8bc;
  puStack_180 = &UNK_11084a9e8;
  lStack_178 = lVar1;
  puStack_170 = (undefined1 *)puVar2;
  puStack_168 = puVar3;
  _objc_retain(puVar3);
  _objc_retain(puVar2);
  func_0x00010c0f7fc0(uVar4,param_2,&puStack_198);
  _objc_release(puStack_168);
  _objc_release(puStack_170);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 10b67f804; end: 10b67f8bb; -[SCCachingMediaItemBuildRequestGroup reporterWithIdentifier:didReportProgress:] */

void FUN_10b67f804(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b67f8bc;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b67f8bc; end: 10b67f9d7;  */

long FUN_10b67f8bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar5 * 8);
        func_0x00010c1179e0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1341e0();
        _objc_release(uVar2);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar3;
  }
  ___stack_chk_fail();
  return *(long *)(lVar3 + 0x28);
}



/* Entry: 10b67f9d8; end: 10b67f9df; -[SCCachingMediaItemBuildRequestGroup sourceLevel] */

undefined8 FUN_10b67f9d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b67f9e0; end: 10b67f9e7; -[SCCachingMediaItemBuildRequestGroup setSourceLevel:] */

void FUN_10b67f9e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b67f9e8; end: 10b67f9ef; -[SCCachingMediaItemBuildRequestGroup upstreamRequest] */

undefined8 FUN_10b67f9e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b67f9f0; end: 10b67f9f7; -[SCCachingMediaItemBuildRequestGroup persistsGeneration] */

undefined1 FUN_10b67f9f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10b67f9f8; end: 10b67f9ff; -[SCCachingMediaItemBuildRequestGroup setPersistsGeneration:] */

void FUN_10b67f9f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b67fa00; end: 10b67fa07; -[SCCachingMediaItemBuildRequestGroup didReportCacheMiss] */

undefined1 FUN_10b67fa00(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 10b67fa08; end: 10b67fa0f; -[SCCachingMediaItemBuildRequestGroup setDidReportCacheMiss:] */

void FUN_10b67fa08(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 10b67fa10; end: 10b67fa57; -[SCCachingMediaItemBuildRequestGroup .cxx_destruct] */

void FUN_10b67fa10(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b67fa58; end: 10b67fcff; -[SCCachingMediaItem initWithContentURL:entity:cachingMediaManager:targetSize:maxSourceLevel:encryption:performer:logger:shouldSkipFileIO:] */

undefined8 *
FUN_10b67fa58(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_112709b58;
  puVar2 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar2 + 0xb) = param_12;
    _objc_retain(param_5);
    uVar3 = puVar2[1];
    puVar2[1] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_6;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 3,param_7);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    bVar1 = false;
    if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    uVar3 = param_6;
    if (bVar1) {
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf51e00();
      puVar6 = (undefined *)puVar2[2];
      puVar2[2] = uVar5;
    }
    else {
      func_0x00010bdc3540();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc2600();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = puVar2[2];
      puVar2[2] = puVar4;
      _objc_release(uVar5);
    }
    _objc_release(puVar6);
    _objc_release(uVar3);
    puVar2[0x13] = param_1;
    puVar2[0x14] = param_2;
    puVar2[4] = param_8;
    puVar2[0xe] = 1;
    _objc_retain(param_9);
    uVar3 = puVar2[6];
    puVar2[6] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[7];
    puVar2[7] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[9];
    puVar2[9] = param_11;
    _objc_release(uVar3);
    puVar2[0xf] = 0xffffffffffffffff;
    puVar2[0x10] = (long)(((double)(long)puVar2[0xe] * 0.1 + 1.0) *
                         (double)(((long)((double)puVar2[0x13] * 4.0) + 0x1fU & 0xffffffffffffffe0)
                                 * (long)(double)puVar2[0x14]));
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x11];
    puVar2[0x11] = puVar4;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar2;
}



/* Entry: 10b67fd00; end: 10b67fe5f; -[SCCachingMediaItem readHighestLevelSourceImageInfoFromDisk] */

void FUN_10b67fd00(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  if ((((*(byte *)(param_1 + 0x58) & 1) != 0) || ((*(byte *)(param_1 + 0x40) & 1) != 0)) ||
     (*(undefined1 *)(param_1 + 0x40) = 1, *(long *)(param_1 + 8) == 0)) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  if (-1 < *(long *)(param_1 + 0x20)) {
    lVar7 = *(long *)(param_1 + 0x20);
    puVar5 = (undefined *)0x0;
    do {
      puVar4 = PTR_PTR_1126e0460;
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010bdc3540(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf82d60(puVar4,param_2,uVar3,lVar7,*(undefined8 *)(param_1 + 8));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(uVar3);
      puVar5 = puVar4;
      func_0x00010c0f5800(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bfacbe0(puVar2,param_2,puVar5);
      _objc_release(puVar5);
      if (((ulong)puVar6 & 1) != 0) {
        puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be804a0(param_1,param_2,puVar5,lVar7);
        _objc_release(puVar5);
        break;
      }
      bVar1 = 0 < lVar7;
      lVar7 = lVar7 + -1;
      puVar5 = puVar4;
    } while (bVar1);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b67fe60; end: 10b68003b; -[SCCachingMediaItem _processAndDecryptDataFromDisk:sourceLevel:] */

/* WARNING: Removing unreachable block (ram,0x00010b67fedc) */
/* WARNING: Removing unreachable block (ram,0x00010b67fee4) */
/* WARNING: Removing unreachable block (ram,0x00010b67ffb4) */
/* WARNING: Removing unreachable block (ram,0x00010b67ffc4) */
/* WARNING: Removing unreachable block (ram,0x00010b680008) */

void FUN_10b67fe60(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_10b68003c(param_3,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != 0) {
      func_0x00010bfc3360(param_3);
      func_0x00010bfc3360(param_3);
    }
    _objc_release(param_3);
  }
  return;
}



/* Entry: 10b68003c; end: 10b6801db;  */

void FUN_10b68003c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_1);
  puVar5 = param_1;
  if (param_2 == (undefined *)0x0) {
    puVar4 = param_1;
    FUN_10b686490();
    if (((ulong)puVar4 & 1) != 0) goto LAB_10b6801b4;
    puVar5 = (undefined *)0x0;
    puVar4 = param_1;
  }
  else {
    puVar4 = param_2;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010c0646e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c08fa60();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (puVar2 != (undefined *)0x20) {
      _objc_retainAutorelease(puVar4);
      func_0x00010bf25f00();
      func_0x00010bf64a00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar3;
    }
    puVar2 = puVar1;
    func_0x00010c08fa60();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (puVar2 != (undefined *)0x10) {
      _objc_retainAutorelease(puVar1);
      func_0x00010bf25f00();
      func_0x00010bf64a00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = puVar3;
    }
    func_0x00010c156c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar3 = puVar5;
    FUN_10b686490();
    if (((ulong)puVar3 & 1) == 0) {
      _objc_retain(param_1);
      _objc_release(puVar5);
      puVar3 = param_1;
      FUN_10b686490();
      puVar5 = param_1;
      if (((ulong)puVar3 & 1) == 0) {
        _objc_release(param_1);
        puVar5 = (undefined *)0x0;
      }
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar4);
LAB_10b6801b4:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b6801dc; end: 10b6802ab;  */

void FUN_10b6801dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126e0460;
  func_0x00010bf82d60(PTR_PTR_1126e0460,param_2,param_2,param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0f5800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf0e880(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c0e00e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6802ac; end: 10b680527; -[SCCachingMediaItem readDataImagesIntoMemory] */

void FUN_10b6802ac(double param_1,double param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  double dVar12;
  
  if (*(long *)(param_3 + 0x28) != 0) {
    return;
  }
  *(undefined1 *)(param_3 + 0x40) = 1;
  if (*(long *)(param_3 + 8) != 0) {
    if (((*(byte *)(param_3 + 0x58) & 1) == 0) && (lVar8 = *(long *)(param_3 + 0x20), -1 < lVar8)) {
      do {
        puVar2 = PTR_PTR_1126e0460;
        if (*(long *)(param_3 + 8) != 0) {
          uVar11 = *(undefined8 *)(param_3 + 0x30);
          _objc_retain(uVar11);
          func_0x00010bf82d60(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf64ac0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          FUN_10b68003c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar11);
          if (puVar4 == (undefined *)0x0) {
            puVar10 = (undefined *)0x0;
          }
          else {
            puVar10 = puVar4;
            FUN_10b6865cc(puVar4,1);
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
          if (puVar10 != (undefined *)0x0) {
            _objc_retain(puVar10);
            uVar11 = *(undefined8 *)(param_3 + 0x28);
            *(undefined **)(param_3 + 0x28) = puVar10;
            _objc_release(uVar11);
            *(long *)(param_3 + 0x78) = lVar8;
            uVar11 = *(undefined8 *)(param_3 + 8);
            FUN_10b6801dc(uVar11,*(undefined8 *)(param_3 + 0x10),lVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = *(undefined8 *)(param_3 + 0x88);
            *(undefined8 *)(param_3 + 0x88) = uVar11;
            _objc_release(uVar7);
            if (*(long *)(param_3 + 0x88) == 0) {
              puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
              func_0x00010bf64de0();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = *(undefined8 *)(param_3 + 0x88);
              *(undefined **)(param_3 + 0x88) = puVar2;
              _objc_release(uVar11);
            }
            _objc_release(puVar10);
            break;
          }
        }
        bVar1 = 0 < lVar8;
        lVar8 = lVar8 + -1;
      } while (bVar1);
    }
    lVar8 = *(long *)(param_3 + 0x28);
    if (lVar8 != 0) {
      if ((*(byte *)(param_3 + 0x59) & 1) == 0) {
        *(undefined1 *)(param_3 + 0x59) = 1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar8;
        FUN_10b686308();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        func_0x00010c23d0a0(lVar5);
        dVar12 = param_1;
        func_0x00010c14e120(lVar5);
        param_1 = param_1 * dVar12;
        func_0x00010c23d0a0(lVar5);
        func_0x00010c14e120(lVar5);
        *(double *)(param_3 + 0x98) = param_1;
        *(double *)(param_3 + 0xa0) = param_2 * dVar12;
        uVar9 = *(ulong *)(param_3 + 0x70);
        uVar6 = *(ulong *)(param_3 + 0x28);
        func_0x00010bf529e0();
        if (uVar9 <= uVar6) {
          uVar9 = uVar6;
        }
        *(ulong *)(param_3 + 0x70) = uVar9;
        _objc_release(lVar5);
      }
      *(long *)(param_3 + 0x80) =
           (long)(((double)*(long *)(param_3 + 0x70) * 0.1 + 1.0) *
                 (double)(((long)(*(double *)(param_3 + 0x98) * 4.0) + 0x1fU & 0xffffffffffffffe0) *
                         (long)*(double *)(param_3 + 0xa0)));
    }
  }
  return;
}



/* Entry: 10b680528; end: 10b6806eb; -[SCCachingMediaItem _writeLastAccessTimeToDisk] */

void FUN_10b680528(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010bf51e00();
    uVar2 = uVar1;
    FUN_10b686a58();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10b6805d4;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    uStack_38 = uVar1;
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
    _objc_release(uVar2);
    _objc_release(uStack_38);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 10b6806ec; end: 10b680703; -[SCCachingMediaItem buildImageGeneratingFromSourceItem:requiredSourceLevel:requestOptions:cacheMissHandler:resultHandler:] */

void FUN_10b6806ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__buildImageGeneratingFromSourceI_112553288,param_3,1,param_4,param_5,
             param_6,param_7);
  return;
}



/* Entry: 10b680704; end: 10b680e47; -[SCCachingMediaItem _buildImageGeneratingFromSourceItem:preferDecode:requiredSourceLevel:requestOptions:cacheMissHandler:resultHandler:] */

void FUN_10b680704(long param_1,undefined8 param_2,long param_3,int param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long lStack_180;
  undefined1 uStack_178;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  long lStack_130;
  undefined1 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126e0468;
  _objc_alloc();
  func_0x00010c03fd80();
  uVar3 = *(ulong *)(param_1 + 0x50);
  if (uVar3 == 0) {
    lVar9 = 0;
  }
  else {
    func_0x00010c06e0e0();
    lVar8 = *(long *)(param_1 + 0x50);
    lVar9 = lVar8;
    if ((uVar3 & 1) == 0) {
      func_0x00010c2478a0();
      lVar9 = *(long *)(param_1 + 0x50);
      if (param_5 <= lVar8) {
        func_0x00010c1ebc40(puVar2);
        func_0x00010befafa0(*(undefined8 *)(param_1 + 0x50));
        iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
        func_0x00010bf79d00();
        if ((param_7 != 0) && (iVar1 != 0)) {
          (**(code **)(param_7 + 0x10))(param_7);
        }
        goto LAB_10b680db0;
      }
    }
  }
  func_0x00010c069d00(lVar9);
  lVar9 = *(long *)(param_1 + 0x50);
  if ((lVar9 != 0) && (func_0x00010c2478a0(), lVar9 < param_5)) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    _objc_release(uVar4);
    *(undefined1 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  puVar5 = PTR_PTR_1126e0470;
  _objc_alloc();
  func_0x00010c0350c0();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar5;
  _objc_release(uVar4);
  _objc_retain(puVar5);
  uVar3 = *(ulong *)(param_1 + 0x60);
  _objc_opt_respondsToSelector(uVar3,PTR_s_shouldCompleteGenerationWhenCanc_1126694c0);
  if ((uVar3 & 1) != 0) {
    func_0x00010c22ea60(*(undefined8 *)(param_1 + 0x60));
  }
  func_0x00010c1dada0(puVar5);
  func_0x00010c1ebc40(puVar2);
  func_0x00010befafa0(puVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar4);
  uVar12 = *(undefined8 *)(param_1 + 0x70);
  lVar9 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 == 0) {
LAB_10b6808d8:
    if (param_3 == 0) {
      func_0x00010c18db80(puVar5);
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7);
      }
      puVar7 = PTR_DAT_1126a5c50;
      lVar13 = *(long *)(param_1 + 0x60);
      _objc_retain(lVar13);
      lVar8 = lVar13;
      func_0x000107c318f8(lVar13,puVar7);
      _objc_release(lVar13);
      if (((int)lVar8 != 0) && (lVar13 != 0)) {
        uVar10 = *(undefined8 *)(param_1 + 0x60);
        _objc_retain(uVar10);
        _objc_initWeak(auStack_80,param_1);
        _objc_initWeak(auStack_170,puVar5);
        lVar8 = param_1 + 0x18;
        _objc_loadWeakRetained();
        _objc_copyWeak(auStack_190,auStack_80);
        _objc_retain(puVar2);
        _objc_copyWeak(auStack_188,auStack_170);
        _objc_retain(param_6);
        lStack_180 = param_5;
        uStack_178 = (char)param_4;
        _objc_retain(uVar4);
        uVar12 = uVar10;
        func_0x00010bf27780(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21d2e0(*(undefined8 *)(param_1 + 0x50));
        _objc_release(uVar12);
        _objc_release(lVar8);
        _objc_release(uVar4);
        _objc_release(param_6);
        _objc_destroyWeak(auStack_188);
        _objc_release(puVar2);
        _objc_destroyWeak(auStack_190);
        _objc_destroyWeak(auStack_170);
        _objc_destroyWeak(auStack_80);
        goto LAB_10b680d80;
      }
    }
    else {
LAB_10b6808dc:
      lVar8 = param_3;
      func_0x00010bfe7dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar8 == 0) {
        _objc_initWeak(auStack_80,param_1);
        puVar7 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_118 = 0xc2000000;
        pcStack_110 = FUN_10b680f30;
        puStack_108 = &UNK_11084aaa8;
        _objc_retain(puVar5);
        puStack_100 = puVar5;
        _objc_retain(param_7);
        ppuVar6 = &puStack_120;
        lStack_f8 = param_7;
        _objc_retainBlock(ppuVar6);
        puStack_168 = puVar7;
        uStack_160 = 0xc2000000;
        pcStack_158 = FUN_10b680f70;
        puStack_150 = &UNK_110d585b8;
        _objc_copyWeak(auStack_138,auStack_80);
        _objc_retain(puVar2);
        puStack_148 = puVar2;
        lStack_130 = param_5;
        uStack_128 = (char)param_4;
        _objc_retain(param_6);
        lVar8 = param_3;
        uStack_140 = param_6;
        func_0x00010bdd63a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21d2e0(*(undefined8 *)(param_1 + 0x50));
        _objc_release(lVar8);
        _objc_release(uStack_140);
        _objc_release(puStack_148);
        _objc_destroyWeak(auStack_138);
        _objc_release(ppuVar6);
        _objc_release(lStack_f8);
        _objc_release(puStack_100);
        _objc_destroyWeak(auStack_80);
      }
      else {
        func_0x00010be1bee0(param_1);
      }
    }
  }
  else {
    if ((param_3 != 0) && (func_0x00010bf529e0(), lVar8 != *(long *)(param_1 + 0x70)))
    goto LAB_10b6808dc;
    if (*(long *)(param_1 + 0x78) < param_5) goto LAB_10b6808d8;
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x78);
    if (param_4 == 0) {
      puVar7 = PTR_PTR_1126bfbd0;
      _objc_alloc();
      func_0x00010c01d0a0();
      uVar12 = *(undefined8 *)(param_1 + 0x68);
      *(undefined **)(param_1 + 0x68) = puVar7;
      _objc_release(uVar12);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x68));
      func_0x00010c0f9520(*(undefined8 *)(param_1 + 0x50));
      uVar12 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = 0;
      _objc_release(uVar12);
    }
    else {
      _objc_initWeak(auStack_80,param_1);
      puVar7 = PTR_PTR_1126bfbd0;
      func_0x00010bf69dc0(PTR_PTR_1126bfbd0);
      _objc_retainAutoreleasedReturnValue();
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_10b680e48;
      puStack_d8 = &UNK_110d58588;
      _objc_copyWeak(auStack_a0,auStack_80);
      _objc_retain(puVar5);
      puStack_d0 = puVar5;
      _objc_retain(uVar10);
      uStack_c8 = uVar10;
      uStack_98 = uVar11;
      uStack_90 = uVar12;
      lStack_88 = param_5;
      _objc_retain(param_6);
      uStack_c0 = param_6;
      _objc_retain(puVar2);
      puStack_b8 = puVar2;
      _objc_retain(uVar4);
      uStack_b0 = uVar4;
      _objc_retain(lVar9);
      lStack_a8 = lVar9;
      func_0x00010befa3a0(puVar7);
      _objc_release(puVar7);
      _objc_release(lStack_a8);
      _objc_release(uStack_b0);
      _objc_release(puStack_b8);
      _objc_release(uStack_c0);
      _objc_release(uStack_c8);
      _objc_release(puStack_d0);
      _objc_destroyWeak(auStack_a0);
      _objc_destroyWeak(auStack_80);
    }
LAB_10b680d80:
    _objc_release(uVar10);
  }
  _objc_retain(puVar2);
  _objc_release(lVar9);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar5);
LAB_10b680db0:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b680e48; end: 10b680f13;  */

void FUN_10b680e48(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if (iVar1 == 0) {
      func_0x00010bdf8800(lVar2,param_2,*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                          *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x30),
                          *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    }
    else {
      uVar4 = *(undefined8 *)(lVar2 + 0x38);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_10b680f14;
      puStack_48 = &UNK_110841f80;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      uStack_40 = uVar3;
      lStack_38 = lVar2;
      func_0x00010c0f7fc0(uVar4,param_2,&puStack_60);
      _objc_release(uStack_40);
    }
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10b680f14; end: 10b680f2f;  */

void FUN_10b680f14(long param_1)

{
  if (*(long *)(param_1 + 0x20) != *(long *)(*(long *)(param_1 + 0x28) + 0x50)) {
    return;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b680f30; end: 10b680f6f;  */

void FUN_10b680f30(long param_1,undefined8 param_2)

{
  func_0x00010c18db80(*(undefined8 *)(param_1 + 0x20),param_2,1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b680f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b680f70; end: 10b681033;  */

void FUN_10b680f70(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c135620();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(lVar2 + 0x50);
    _objc_release();
    if (lVar3 == lVar5) {
      iVar1 = (int)*(undefined8 *)(lVar2 + 0x50);
      func_0x00010c06e0e0();
      if (iVar1 == 0) {
        func_0x00010be1bee0(lVar2);
      }
      else {
        uVar4 = *(undefined8 *)(lVar2 + 0x50);
        *(undefined8 *)(lVar2 + 0x50) = 0;
        _objc_release(uVar4);
      }
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b681034; end: 10b681213;  */

void FUN_10b681034(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c1179e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10b681214;
    puStack_90 = &UNK_110d585e8;
    _objc_retain(param_2);
    uStack_88 = param_2;
    uStack_80 = param_3;
    uStack_78 = param_4;
    func_0x00010c1341e0(uVar2);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(lVar1 + 0x38);
    _objc_copyWeak(auStack_d0,param_1 + 0x38);
    _objc_copyWeak(auStack_c8,param_1 + 0x40);
    uStack_b0 = param_4;
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_af = param_5;
    _objc_retain(uVar4);
    uStack_ae = *(undefined1 *)(param_1 + 0x50);
    uStack_b8 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_c0 = param_3;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_d0);
    _objc_release(uStack_88);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b681214; end: 10b681267;  */

void FUN_10b681214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf529e0();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6d438);
  return;
}



/* Entry: 10b681268; end: 10b681793;  */

void FUN_10b681268(double param_1,double param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined **unaff_x24;
  undefined **ppuVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [8];
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
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = param_3 + 0x40;
  _objc_loadWeakRetained();
  if (lVar14 != 0) {
    lVar3 = param_3 + 0x48;
    _objc_loadWeakRetained();
    if ((lVar3 != 0) && (lVar4 = *(long *)(lVar14 + 0x50), lVar3 == lVar4)) {
      func_0x00010c06e0e0();
      if ((int)lVar4 == 0) {
        if ((*(char *)(param_3 + 0x60) == '\x01') && (lVar4 = *(long *)(param_3 + 0x20), lVar4 != 0)
           ) {
          func_0x00010bf529e0();
          *(long *)(lVar14 + 0x70) = lVar4;
        }
        puVar7 = PTR__CGSizeZero_110347620;
        uVar5 = *(undefined8 *)(lVar14 + 0x70);
        ppuVar16 = *(undefined ***)(param_3 + 0x20);
        if (ppuVar16 != (undefined **)0x0) {
          if (*(char *)(param_3 + 0x61) == '\x01') {
            dVar20 = *(double *)PTR__CGSizeZero_110347620;
            dVar21 = *(double *)(PTR__CGSizeZero_110347620 + 8);
          }
          else {
            func_0x00010c1369e0(*(undefined8 *)(param_3 + 0x28));
            ppuVar16 = *(undefined ***)(param_3 + 0x20);
            dVar20 = param_1;
            dVar21 = param_2;
          }
          _objc_retain(ppuVar16);
          ppuVar10 = ppuVar16;
          if ((*(byte *)(param_3 + 0x61) & 1) == 0) {
            func_0x00010c1369e0(*(undefined8 *)(param_3 + 0x28));
            puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            dVar19 = *(double *)(puVar7 + 8);
            bVar1 = false;
            if ((*(double *)puVar7 == param_1) && (bVar1 = false, !NAN(dVar19) && !NAN(param_2))) {
              bVar1 = dVar19 == param_2;
            }
            if (!bVar1) {
              uVar6 = *(undefined8 *)(lVar14 + 0x60);
              func_0x00010bdc3540();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar8;
              func_0x00010c14de00(puVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdc2600();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = *(undefined8 *)(lVar14 + 0x10);
              *(undefined **)(lVar14 + 0x10) = puVar8;
              _objc_release(uVar11);
              _objc_release(puVar7);
              _objc_release(uVar6);
              unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x00010bf09f00();
              _objc_retainAutoreleasedReturnValue();
              lStack_148 = 0;
              uStack_150 = 0;
              uStack_138 = 0;
              plStack_140 = (long *)0x0;
              uStack_128 = 0;
              uStack_130 = 0;
              uStack_118 = 0;
              uStack_120 = 0;
              lVar17 = *(long *)(param_3 + 0x20);
              _objc_retain(lVar17);
              lVar4 = lVar17;
              func_0x00010bf52a60();
              if (lVar4 != 0) {
                lVar15 = *plStack_140;
                do {
                  lVar12 = 0;
                  do {
                    if (*plStack_140 != lVar15) {
                      _objc_enumerationMutation();
                    }
                    lVar18 = *(long *)(lStack_148 + lVar12 * 8);
                    _objc_autoreleasePoolPush();
                    func_0x00010c1369e0(*(undefined8 *)(param_3 + 0x28));
                    FUN_10b68628c();
                    _objc_retainAutoreleasedReturnValue();
                    lVar9 = lVar18;
                    _UIImageJPEGRepresentation(0x3fe0000000000000);
                    _objc_retainAutoreleasedReturnValue();
                    if (lVar9 != 0) {
                      func_0x00010befa120(unaff_x24);
                    }
                    _objc_release(lVar9);
                    _objc_release(lVar18);
                    _objc_autoreleasePoolPop();
                    lVar12 = lVar12 + 1;
                  } while (lVar4 != lVar12);
                  lVar4 = lVar17;
                  func_0x00010bf52a60();
                } while (lVar4 != 0);
              }
              _objc_release(lVar17);
              ppuVar10 = unaff_x24;
              func_0x00010bf51e00();
              _objc_release(ppuVar16);
              _objc_release(unaff_x24);
            }
          }
          func_0x00010beebc80(dVar20,dVar21,lVar14);
          uVar11 = *(undefined8 *)(param_3 + 0x20);
          _objc_retain(uVar11);
          uVar6 = *(undefined8 *)(lVar14 + 0x28);
          *(undefined8 *)(lVar14 + 0x28) = uVar11;
          _objc_release(uVar6);
          _objc_release(ppuVar10);
        }
        if (*(char *)(param_3 + 0x62) == '\x01') {
          puVar7 = PTR_PTR_1126bfbd0;
          func_0x00010bf69dc0();
          _objc_retainAutoreleasedReturnValue();
          puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1b0 = 0xc2000000;
          pcStack_1a8 = FUN_10b681794;
          puStack_1a0 = &UNK_110d58618;
          unaff_x24 = &puStack_1b8;
          _objc_copyWeak(auStack_170,param_3 + 0x40);
          _objc_retain(lVar3);
          uVar6 = *(undefined8 *)(param_3 + 0x20);
          lStack_198 = lVar3;
          _objc_retain(uVar6);
          uStack_168 = *(undefined8 *)(param_3 + 0x50);
          uStack_158 = *(undefined8 *)(param_3 + 0x58);
          uVar11 = *(undefined8 *)(param_3 + 0x28);
          uStack_190 = uVar6;
          uStack_160 = uVar5;
          _objc_retain(uVar11);
          uVar6 = *(undefined8 *)(param_3 + 0x30);
          uStack_188 = uVar11;
          _objc_retain(uVar6);
          uVar5 = *(undefined8 *)(param_3 + 0x38);
          uStack_180 = uVar6;
          _objc_retain(uVar5);
          uStack_178 = uVar5;
          func_0x00010befa3a0(puVar7);
          _objc_release(puVar7);
          _objc_release(uStack_178);
          _objc_release(uStack_180);
          _objc_release(uStack_188);
          _objc_release(uStack_190);
          _objc_release(lStack_198);
          _objc_destroyWeak(auStack_170);
        }
        else {
          if (*(long *)(param_3 + 0x20) == 0) {
            uVar5 = *(undefined8 *)(lVar14 + 0x68);
            *(undefined8 *)(lVar14 + 0x68) = 0;
            _objc_release(uVar5);
          }
          else {
            unaff_x24 = (undefined **)PTR_PTR_1126bfbd0;
            _objc_alloc();
            lVar4 = lVar14 + 0x18;
            _objc_loadWeakRetained();
            ppuVar16 = unaff_x24;
            func_0x00010c01d0a0();
            plVar13 = (long *)(lVar14 + 0x68);
            lVar17 = *plVar13;
            *plVar13 = (long)ppuVar16;
            _objc_release(lVar17);
            _objc_release(lVar4);
            func_0x00010c18b5e0(*plVar13);
          }
          lVar15 = *(long *)(param_3 + 0x28);
          lVar4 = *(long *)(param_3 + 0x50);
          lVar17 = *(long *)(param_3 + 0x58);
          func_0x00010bfe90a0();
          func_0x00010c0f9520(*(undefined8 *)(lVar14 + 0x50));
          if (lVar17 <= lVar4 || lVar15 != 1) {
            uVar5 = *(undefined8 *)(lVar14 + 0x50);
            *(undefined8 *)(lVar14 + 0x50) = 0;
            _objc_release(uVar5);
          }
        }
      }
      else {
        uVar5 = *(undefined8 *)(lVar14 + 0x50);
        *(undefined8 *)(lVar14 + 0x50) = 0;
        _objc_release(uVar5);
      }
    }
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 9);
  __Unwind_Resume();
  lVar3 = lVar14 + 0x48;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    iVar2 = (int)*(undefined8 *)(lVar14 + 0x20);
    func_0x00010c06e0e0();
    if (iVar2 == 0) {
      lVar14 = lVar3 + 0x18;
      _objc_loadWeakRetained();
      func_0x00010bdf8800(lVar3);
    }
    else {
      uVar5 = *(undefined8 *)(lVar3 + 0x38);
      lVar14 = *(long *)(lVar14 + 0x20);
      _objc_retain(lVar14);
      func_0x00010c0f7fc0(uVar5);
    }
    _objc_release(lVar14);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10b681794; end: 10b68189f;  */

void FUN_10b681794(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar7 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar7 != 0) {
    iVar6 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if (iVar6 == 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x50);
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      uVar10 = *(undefined8 *)(param_1 + 0x60);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      uVar11 = *(undefined8 *)(lVar7 + 0x50);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      lVar8 = lVar7 + 0x18;
      _objc_loadWeakRetained();
      func_0x00010bdf8800(lVar7,param_2,uVar1,uVar9,uVar3,uVar10,uVar4,uVar2,uVar11,uVar5,lVar8);
    }
    else {
      uVar9 = *(undefined8 *)(lVar7 + 0x38);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_10b6818a0;
      puStack_78 = &UNK_110841f80;
      lVar8 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar8);
      lStack_70 = lVar8;
      lStack_68 = lVar7;
      func_0x00010c0f7fc0(uVar9,param_2,&puStack_90);
      lVar8 = lStack_70;
    }
    _objc_release(lVar8);
  }
  _objc_release(lVar7);
  return;
}



/* Entry: 10b6818a0; end: 10b6818bb;  */

void FUN_10b6818a0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != *(long *)(*(long *)(param_1 + 0x28) + 0x50)) {
    return;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b6818bc; end: 10b681bc7; -[SCCachingMediaItem _decodeImageWithDataImages:sourceLevel:count:requiredSourceLevel:requestOptions:buildRequest:requestGroup:entity:cachingMediaManager:] */

void FUN_10b6818bc(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined *param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  double dVar6;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar5 = param_10;
  func_0x00010c06e0e0();
  if ((int)puVar5 == 0) {
    uVar3 = param_9;
    func_0x00010c1179e0(param_9);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10b681be4;
    puStack_b8 = &UNK_110847450;
    _objc_retain(param_4);
    lStack_b0 = param_4;
    func_0x00010c1341e0(uVar3,param_3,&PTR____CFConstantStringClassReference_110f6d458,&puStack_d0);
    _objc_release(uVar3);
    if (param_4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      _CACurrentMediaTime();
      lVar1 = param_4;
      dVar6 = param_1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar2 = 0;
      if (lVar1 != 0) {
        lVar1 = param_4;
        func_0x00010bfb1920(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        FUN_10b68639c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
      }
      uVar4 = *(undefined8 *)(param_2 + 0x48);
      uVar3 = *(undefined8 *)(param_2 + 0x60);
      func_0x00010bdc3540(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _CACurrentMediaTime();
      func_0x00010c13e940(dVar6 - param_1,uVar4,param_3,7,uVar3);
      _objc_release(uVar3);
      puVar5 = PTR_PTR_1126bfbd0;
      _objc_alloc();
      func_0x00010c01d0a0();
      _objc_release(lVar2);
    }
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_10b681c28;
    puStack_118 = &UNK_1108bd3f0;
    puStack_108 = param_10;
    lStack_110 = param_2;
    _objc_retain(param_4);
    lStack_100 = param_4;
    puStack_f8 = puVar5;
    _objc_retain(param_8);
    uStack_f0 = param_8;
    uStack_e8 = param_5;
    uStack_e0 = param_7;
    uStack_d8 = param_6;
    _objc_retain(puVar5);
    _objc_retain(param_10);
    func_0x00010c0f7fc0(uVar3,param_3,&puStack_130);
    _objc_release(uStack_f0);
    _objc_release(puStack_f8);
    _objc_release(lStack_100);
    _objc_release(puStack_108);
    _objc_release(lStack_b0);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10b681bc8;
    puStack_90 = &UNK_110841f80;
    puStack_88 = param_10;
    lStack_80 = param_2;
    _objc_retain(param_10);
    func_0x00010c0f7fc0(uVar3,param_3,&puStack_a8);
    puVar5 = puStack_88;
  }
  _objc_release(puVar5);
  _objc_release(param_10);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  return;
}



/* Entry: 10b681bc8; end: 10b681be3;  */

void FUN_10b681bc8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != *(long *)(*(long *)(param_1 + 0x28) + 0x50)) {
    return;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b681be4; end: 10b681c27;  */

void FUN_10b681be4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf529e0();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110f6d478);
  return;
}



/* Entry: 10b681c28; end: 10b681cef;  */

void FUN_10b681c28(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar5 + 0x50) == *(long *)(param_1 + 0x28)) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar4;
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = *(long *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(lVar5 + 0x68);
    *(undefined8 *)(lVar5 + 0x68) = uVar4;
    _objc_release(uVar3);
    if (*(long *)(*(long *)(param_1 + 0x20) + 0x68) != 0) {
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38));
    }
    lVar5 = *(long *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 0x48);
    lVar6 = *(long *)(param_1 + 0x50);
    func_0x00010bfe90a0();
    bVar1 = lVar6 <= lVar2;
    func_0x00010c0f9520(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),param_2,
                        *(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x58),
                        bVar1 || lVar5 != 1);
    if (bVar1 || lVar5 != 1) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 10b681cf0; end: 10b6820ab; -[SCCachingMediaItem _generateSourceItemWithMediaItem:count:preferDecode:requiredSourceLevel:requestOptions:buildRequest:requestGroup:] */

void FUN_10b681cf0(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_8;
  func_0x00010c1179e0(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1341e0();
  _objc_release(uVar1);
  *(ulong *)(param_1 + 0x70) = param_4;
  _CACurrentMediaTime();
  uVar5 = *(ulong *)(param_3 + 0x28);
  _objc_retain(uVar5);
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  uStack_98 = 0x10b6820b8;
  uStack_90 = 0x10b6820c8;
  uVar6 = *(ulong *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uStack_88 = uVar6;
  func_0x00010bf529e0();
  uVar2 = uVar5;
  func_0x00010bf529e0();
  uVar7 = uVar5;
  if (uVar2 <= uVar6) {
    uVar7 = puStack_a8[5];
    _objc_retain(uVar7);
    _objc_release(uVar5);
  }
  uVar2 = uVar7;
  func_0x00010bf529e0();
  if (uVar2 == param_4) {
    if (uVar7 != puStack_a8[5]) {
      func_0x00010c2478a0();
    }
    puVar4 = PTR_PTR_1126bfbd0;
    func_0x00010bf69dc0(PTR_PTR_1126bfbd0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_9);
    _objc_retain(uVar7);
    _objc_retain(param_7);
    func_0x00010befa3a0(puVar4);
    _objc_release(puVar4);
    _objc_release(param_7);
    _objc_release(uVar7);
    lVar3 = param_9;
  }
  else {
    lVar3 = param_3;
    func_0x00010bfe7dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) goto LAB_10b682028;
    lVar3 = param_3;
    func_0x00010bfe7dc0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar7 != puStack_a8[5]) {
      func_0x00010c2478a0();
    }
    puVar4 = PTR_PTR_1126bfbd0;
    func_0x00010bf69dc0(PTR_PTR_1126bfbd0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_9);
    _objc_retain(uVar7);
    _objc_retain(lVar3);
    func_0x00010befa3a0(puVar4);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(uVar7);
    _objc_release(param_9);
  }
  _objc_release(lVar3);
LAB_10b682028:
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  _objc_release(uVar7);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6820ac; end: 10b6820cf;  */

undefined ** FUN_10b6820ac(void)

{
  return &PTR____CFConstantStringClassReference_110f6d4b8;
}



/* Entry: 10b6820d0; end: 10b68247b;  */

void FUN_10b6820d0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if (iVar1 != 0) {
    puVar6 = *(undefined **)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_10b68247c;
    puStack_110 = &UNK_110841f80;
    _objc_retain(puVar6);
    uStack_100 = *(undefined8 *)(param_1 + 0x28);
    puStack_108 = puVar6;
    func_0x00010c0f7fc0(uVar7,param_2,&puStack_128);
    puVar6 = puStack_108;
    goto LAB_10b682430;
  }
  puVar2 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  if (puVar2 == *(undefined **)(param_1 + 0x30)) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar6 = puVar2;
      FUN_10b68639c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b68230c;
    }
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lVar8 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar8);
    lVar5 = lVar8;
    func_0x00010bf52a60(lVar8,param_2,&uStack_170,auStack_f8,0x10);
    if (lVar5 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = (undefined *)0x0;
      lVar11 = *plStack_160;
      do {
        lVar12 = 0;
        lVar3 = lVar5;
        do {
          if (*plStack_160 != lVar11) {
            lVar3 = lVar8;
            _objc_enumerationMutation(lVar8);
          }
          puVar10 = *(undefined **)(lStack_168 + lVar12 * 8);
          _objc_autoreleasePoolPush();
          FUN_10b68628c(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar10;
          _UIImageJPEGRepresentation(0x3fe0000000000000);
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 == (undefined *)0x0) {
            if (*(char *)(param_1 + 0x78) == '\x01') {
              _objc_retain(puVar10);
              puVar6 = puVar10;
            }
            else {
              puVar6 = (undefined *)0x0;
            }
          }
          if (puVar4 != (undefined *)0x0) {
            func_0x00010befa120(puVar2,param_2,puVar4);
          }
          _objc_release(puVar4);
          _objc_release(puVar10);
          _objc_autoreleasePoolPop(lVar3);
          lVar12 = lVar12 + 1;
        } while (lVar5 != lVar12);
        lVar5 = lVar8;
        func_0x00010bf52a60(lVar8,param_2,&uStack_170,auStack_f8,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(lVar8);
    puVar4 = puVar2;
    func_0x00010bf51e00();
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar7 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar4;
    _objc_release(uVar7);
LAB_10b68230c:
    _objc_release(puVar2);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    puVar2 = (undefined *)0x0;
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar7 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = 0;
  }
  else {
    puVar2 = PTR_PTR_1126bfbd0;
    _objc_alloc();
    uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010bf51e00(uVar7);
    func_0x00010c01d080(puVar2,param_2,uVar7,puVar6);
  }
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  lStack_1c8 = *(long *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(lStack_1c8 + 0x38);
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_10b682498;
  puStack_1d0 = &UNK_110d586c8;
  _objc_retain(uVar7);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x58);
  uStack_198 = *(undefined8 *)(param_1 + 0x60);
  uStack_188 = *(undefined8 *)(param_1 + 0x50);
  uStack_190 = *(undefined8 *)(param_1 + 0x48);
  uVar14 = *(undefined8 *)(param_1 + 0x40);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  uStack_1c0 = uVar7;
  puStack_1b8 = puVar2;
  _objc_retain(uVar13);
  uStack_178 = *(undefined8 *)(param_1 + 0x70);
  uStack_180 = *(undefined8 *)(param_1 + 0x68);
  uStack_1b0 = uVar13;
  uStack_1a8 = uVar14;
  _objc_retain(puVar2);
  func_0x00010c0f7fc0(uVar9,param_2,&puStack_1e8);
  _objc_release(uStack_1b0);
  _objc_release(puStack_1b8);
  _objc_release(uStack_1c0);
  _objc_release(puVar2);
LAB_10b682430:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar6 + 0x20) == *(long *)(*(long *)(puVar6 + 0x28) + 0x50)) {
    *(undefined8 *)(*(long *)(puVar6 + 0x28) + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 10b68247c; end: 10b682497;  */

void FUN_10b68247c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != *(long *)(*(long *)(param_1 + 0x28) + 0x50)) {
    return;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b682498; end: 10b6825b3;  */

void FUN_10b682498(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar3 + 0x50) == *(long *)(param_2 + 0x28)) {
    uVar4 = *(undefined8 *)(lVar3 + 0x48);
    uVar2 = *(undefined8 *)(lVar3 + 0x60);
    func_0x00010bdc3540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010c13e940(param_1 - *(double *)(param_2 + 0x48),uVar4,param_3,8,uVar2);
    _objc_release(uVar2);
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x40) + 8) + 0x28);
    lVar5 = *(long *)(param_2 + 0x20);
    if (lVar3 != 0 && lVar3 != *(long *)(lVar5 + 0x28)) {
      func_0x00010beebc80(*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x60),lVar5,
                          param_3,lVar3,*(undefined8 *)(param_2 + 0x50),1);
      lVar5 = *(long *)(param_2 + 0x20);
    }
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(lVar5 + 0x68);
    *(undefined8 *)(lVar5 + 0x68) = uVar4;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + 0x30),param_3,*(undefined8 *)(param_2 + 0x20));
    lVar3 = *(long *)(param_2 + 0x38);
    lVar5 = *(long *)(param_2 + 0x50);
    lVar6 = *(long *)(param_2 + 0x68);
    func_0x00010bfe90a0();
    bVar1 = lVar6 <= lVar5;
    func_0x00010c0f9520(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50),param_3,
                        *(long *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x70),
                        bVar1 || lVar3 != 1);
    if (bVar1 || lVar3 != 1) {
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50);
      *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 10b6825b4; end: 10b682937;  */

void FUN_10b6825b4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if (iVar1 != 0) {
    puVar6 = *(undefined **)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_10b682938;
    puStack_110 = &UNK_110841f80;
    _objc_retain(puVar6);
    uStack_100 = *(undefined8 *)(param_1 + 0x28);
    puStack_108 = puVar6;
    func_0x00010c0f7fc0(uVar7,param_2,&puStack_128);
    puVar6 = puStack_108;
    goto LAB_10b6828ec;
  }
  puVar2 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  if (puVar2 == *(undefined **)(param_1 + 0x30)) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar6 = puVar2;
      FUN_10b68639c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b6827ec;
    }
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lVar8 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar8);
    lVar5 = lVar8;
    func_0x00010bf52a60(lVar8,param_2,&uStack_170,auStack_f8,0x10);
    if (lVar5 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = (undefined *)0x0;
      lVar11 = *plStack_160;
      do {
        lVar12 = 0;
        lVar3 = lVar5;
        do {
          if (*plStack_160 != lVar11) {
            lVar3 = lVar8;
            _objc_enumerationMutation(lVar8);
          }
          puVar10 = *(undefined **)(lStack_168 + lVar12 * 8);
          _objc_autoreleasePoolPush();
          FUN_10b68628c(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar10;
          _UIImageJPEGRepresentation(0x3fe0000000000000);
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 == (undefined *)0x0) {
            if (*(char *)(param_1 + 0x70) == '\x01') {
              _objc_retain(puVar10);
              puVar6 = puVar10;
            }
            else {
              puVar6 = (undefined *)0x0;
            }
          }
          if (puVar4 != (undefined *)0x0) {
            func_0x00010befa120(puVar2,param_2,puVar4);
          }
          _objc_release(puVar4);
          _objc_release(puVar10);
          _objc_autoreleasePoolPop(lVar3);
          lVar12 = lVar12 + 1;
        } while (lVar5 != lVar12);
        lVar5 = lVar8;
        func_0x00010bf52a60(lVar8,param_2,&uStack_170,auStack_f8,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(lVar8);
    puVar4 = puVar2;
    func_0x00010bf51e00();
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar7 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar4;
    _objc_release(uVar7);
LAB_10b6827ec:
    _objc_release(puVar2);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar7 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = 0;
    _objc_release(uVar7);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126bfbd0;
    _objc_alloc();
    func_0x00010c01d0c0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  lStack_1b8 = *(long *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(lStack_1b8 + 0x38);
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_10b682954;
  puStack_1c0 = &UNK_110d58728;
  _objc_retain(uVar7);
  uStack_198 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x40);
  uStack_190 = *(undefined8 *)(param_1 + 0x58);
  uStack_178 = *(undefined8 *)(param_1 + 0x60);
  uStack_180 = *(undefined8 *)(param_1 + 0x50);
  uStack_188 = *(undefined8 *)(param_1 + 0x48);
  uStack_1b0 = uVar7;
  puStack_1a8 = puVar2;
  _objc_retain(puVar2);
  func_0x00010c0f7fc0(uVar9,param_2,&puStack_1d8);
  _objc_release(puStack_1a8);
  _objc_release(uStack_1b0);
  _objc_release(puVar2);
LAB_10b6828ec:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar6 + 0x20) == *(long *)(*(long *)(puVar6 + 0x28) + 0x50)) {
    *(undefined8 *)(*(long *)(puVar6 + 0x28) + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}


