/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062040a4; end: 106204167; -[SCLensThumbnailEventEntity initWithCoder:] */

undefined1 *
FUN_1062040a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126f05f8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106204168; end: 1062041ef; -[SCLensThumbnailEventEntity encodeWithCoder:] */

void FUN_106204168(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dd51f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e45818);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110e45838);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x20),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110e45858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062041f0; end: 1062041f7; -[SCLensThumbnailEventEntity preferFasterCoding] */

undefined8 FUN_1062041f0(void)

{
  return 1;
}



/* Entry: 1062041f8; end: 10620425f; -[SCLensThumbnailEventEntity encodeWithFasterCoder:] */

void FUN_1062041f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93100(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf92ec0(*(undefined8 *)(param_1 + 0x18),param_3);
  func_0x00010bf92ec0(*(undefined8 *)(param_1 + 0x20),param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106204260; end: 1062042df; -[SCLensThumbnailEventEntity decodeWithFasterDecoder:] */

void FUN_106204260(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_4;
  func_0x00010bf67140();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  func_0x00010bf66de0(param_4);
  *(undefined8 *)(param_2 + 0x18) = param_1;
  func_0x00010bf66de0(param_4);
  _objc_release(param_4);
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 1062042e0; end: 106204343; -[SCLensThumbnailEventEntity setObject:forUInt64Key:] */

void FUN_1062042e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0xe7562fcfe3a158) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106204344; end: 106204363; -[SCLensThumbnailEventEntity setSInt64:forUInt64Key:] */

void FUN_106204344(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0xb567afbdf33970) {
    *(undefined8 *)(param_1 + 0x10) = param_3;
  }
  return;
}



/* Entry: 106204364; end: 1062043a7; -[SCLensThumbnailEventEntity setFloat64:forUInt64Key:] */

void FUN_106204364(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 == 0x5fc34d41ad7751) {
    lVar1 = 0x18;
  }
  else {
    if (param_4 != 0x6e468bf8ee53d0) {
      return;
    }
    lVar1 = 0x20;
  }
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 1062043a8; end: 1062043bb; +[SCLensThumbnailEventEntity fasterCodingVersion] */

undefined8 FUN_1062043a8(void)

{
  return 0xb3b8d4588a005a30;
}



/* Entry: 1062043bc; end: 1062043c7; +[SCLensThumbnailEventEntity fasterCodingKeys] */

undefined8 FUN_1062043bc(void)

{
  return 0x113146658;
}



/* Entry: 1062043c8; end: 10620446f; -[SCLensThumbnailEventEntity isEqual:] */

bool FUN_1062043c8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bc85c34(param_1,param_3,0x1136c3458,0x1136c3460,4,1);
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_3);
    if ((*(long *)(param_3 + 0x10) == *(long *)(param_1 + 0x10)) &&
       (*(double *)(param_3 + 0x18) == *(double *)(param_1 + 0x18))) {
      bVar1 = *(double *)(param_3 + 0x20) == *(double *)(param_1 + 0x20);
    }
    else {
      bVar1 = false;
    }
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106204470; end: 106204517; -[SCLensThumbnailEventEntity hash] */

ulong FUN_106204470(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong auStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfde980();
  auStack_48[1] = *(undefined8 *)(param_1 + 0x10);
  auStack_48[3] = (long)*(double *)(param_1 + 0x20);
  auStack_48[2] = (long)*(double *)(param_1 + 0x18);
  lVar2 = 8;
  do {
    uVar1 = *(ulong *)((long)auStack_48 + lVar2) | uVar1 << 0x20;
    uVar1 = ~uVar1 + uVar1 * 0x40000;
    uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
    uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
    uVar1 = uVar1 ^ uVar1 >> 0x16;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return uVar1;
  }
  ___stack_chk_fail();
  return *(ulong *)(uVar1 + 8);
}



/* Entry: 106204518; end: 10620451f; -[SCLensThumbnailEventEntity lensId] */

undefined8 FUN_106204518(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106204520; end: 106204527; -[SCLensThumbnailEventEntity lensIndex] */

undefined8 FUN_106204520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106204528; end: 10620452f; -[SCLensThumbnailEventEntity onScreenTimeNotReady] */

undefined8 FUN_106204528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106204530; end: 106204537; -[SCLensThumbnailEventEntity onScreenTimeTotal] */

undefined8 FUN_106204530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106204538; end: 106204543; -[SCLensThumbnailEventEntity .cxx_destruct] */

void FUN_106204538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106204544; end: 1062045ef; +[SCLensThumbnailEventEntityBuilder withLensThumbnailEventEntity:] */

void FUN_106204544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c8cc0;
  _objc_retain(param_4);
  _objc_alloc_init();
  uVar2 = param_4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c094780();
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  func_0x00010c0e6280(param_4);
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x00010c0e62a0(param_4);
  _objc_release(param_4);
  *(undefined8 *)(puVar1 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062045f0; end: 106204623; -[SCLensThumbnailEventEntityBuilder build] */

void FUN_1062045f0(long param_1)

{
  _objc_alloc(PTR_PTR_1126c8cf0);
  func_0x00010c0245a0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106204624; end: 10620465b; -[SCLensThumbnailEventEntityBuilder setLensId:] */

long FUN_106204624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10620465c; end: 106204663; -[SCLensThumbnailEventEntityBuilder setLensIndex:] */

void FUN_10620465c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106204664; end: 10620466b; -[SCLensThumbnailEventEntityBuilder setOnScreenTimeNotReady:] */

void FUN_106204664(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10620466c; end: 106204673; -[SCLensThumbnailEventEntityBuilder setOnScreenTimeTotal:] */

void FUN_10620466c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 106204674; end: 10620467f; -[SCLensThumbnailEventEntityBuilder .cxx_destruct] */

void FUN_106204674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106204680; end: 1062046f3; -[SCLensVerificationLogger initWithGraphene:] */

undefined1 * FUN_106204680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0600;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062046f4; end: 10620481f; -[SCLensVerificationLogger incrementStoredAssetValid:error:] */

void FUN_1062046f4(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bb928;
  func_0x00010bf0b120(PTR_PTR_1126bb928);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = puVar2;
  if ((param_3 & 1) == 0) {
    if (param_4 == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110dabe78;
    }
    else {
      lVar3 = param_4;
      func_0x00010bf3ec40(param_4);
      func_0x00010c0df780(ppuVar4,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
    }
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9558,ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(ppuVar5);
  }
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106204820; end: 10620482b; -[SCLensVerificationLogger .cxx_destruct] */

void FUN_106204820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10620482c; end: 106204833; -[ContenderConfig animated] */

undefined1 FUN_10620482c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106204834; end: 10620483b; -[ContenderConfig setAnimated:] */

void FUN_106204834(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10620483c; end: 106204843; -[ContenderConfig needToShow] */

undefined1 FUN_10620483c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106204844; end: 10620484b; -[ContenderConfig setNeedToShow:] */

void FUN_106204844(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10620484c; end: 10620494f; -[SCFeatureCameraBottomUIArbitratorImpl requestUIVisible:animated:forContender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620484c(long param_1,undefined8 param_2,int param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010be38be0(param_1);
    lVar5 = (long)_DAT_1127430d8;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0dfd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167e40();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0dfd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbc60();
    _objc_release(uVar4);
    if (param_3 == 0) {
      func_0x00010be354e0(param_1);
    }
    else {
      func_0x00010beb8240();
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106204950; end: 106204a63; -[SCFeatureCameraBottomUIArbitratorImpl isUIVisibleForContender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106204950(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar4 = param_1;
  func_0x00010be38be0();
  if (lVar4 == 0x7fffffffffffffff) {
LAB_1062049b8:
    uVar7 = 0;
  }
  else {
    lVar9 = (long)_DAT_1127430d8;
    if (0 < lVar4) {
      lVar8 = 0;
      do {
        uVar5 = *(ulong *)(param_1 + lVar9);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010c0d71a0();
        _objc_release(uVar5);
        if ((uVar3 & 1) != 0) goto LAB_1062049b8;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c0dfd40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0d71a0();
    _objc_release(uVar6);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 106204a64; end: 106204b2f; -[SCFeatureCameraBottomUIArbitratorImpl _indexOfContender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106204a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127430d4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106204afc;
  puStack_30 = &UNK_110915da8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfece40(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106204b30; end: 106204cbb; -[SCFeatureCameraBottomUIArbitratorImpl _showBottomUIForContender:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106204b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be38be0(param_1,param_2,param_3);
  lVar7 = (long)_DAT_1127430d4;
  lVar2 = *(long *)(param_1 + lVar7);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar6 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0dfd40(uVar3,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c071ae0();
      if ((int)uVar4 != 0) {
        lVar2 = param_1;
        func_0x00010beea0c0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = (long)_DAT_1127430dc;
        if ((lVar2 != 0) && (lVar2 = *(long *)(param_1 + lVar7), _objc_release(), lVar2 != lVar1)) {
          lVar2 = param_1;
          func_0x00010beea0c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + _DAT_1127430d8);
          func_0x00010c0dfd40(uVar5,param_2,*(undefined8 *)(param_1 + lVar7));
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar5;
          func_0x00010bf034a0();
          func_0x00010c177560(lVar2,param_2,0,uVar4,param_1);
          _objc_release(uVar5);
          _objc_release(lVar2);
        }
        *(long *)(param_1 + lVar7) = lVar1;
        func_0x00010beea0c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c177560();
        _objc_release(param_1);
        _objc_release(uVar3);
        break;
      }
      uVar8 = *(ulong *)(param_1 + _DAT_1127430dc);
      _objc_release(uVar3);
      if (uVar6 == uVar8) break;
      uVar6 = uVar6 + 1;
      uVar8 = *(ulong *)(param_1 + lVar7);
      func_0x00010bf529e0();
    } while (uVar6 < uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106204cbc; end: 106204df3; -[SCFeatureCameraBottomUIArbitratorImpl _hideBottomUIForContender:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106204cbc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be38be0(param_1,param_2,param_3);
  lVar5 = (long)_DAT_1127430dc;
  if (uVar1 == *(ulong *)(param_1 + lVar5)) {
    func_0x00010c177560(param_3,param_2,0,param_4,param_1);
    *(undefined8 *)(param_1 + lVar5) = 0x7fffffffffffffff;
    lVar6 = (long)_DAT_1127430d4;
    do {
      uVar1 = uVar1 + 1;
      uVar2 = *(ulong *)(param_1 + lVar6);
      func_0x00010bf529e0();
      if (uVar2 <= uVar1) goto LAB_106204dd4;
      lVar7 = (long)_DAT_1127430d8;
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0dfd40(uVar3,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0d71a0();
      _objc_release(uVar3);
    } while ((int)uVar4 == 0);
    *(ulong *)(param_1 + lVar5) = uVar1;
    uVar2 = param_1;
    func_0x00010beea0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0dfd40(uVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf034a0();
    func_0x00010c177560(uVar2,param_2,1,uVar4,param_1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
LAB_106204dd4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106204df4; end: 106204e23; -[SCFeatureCameraBottomUIArbitratorImpl _nameOfContender:] */

void FUN_106204df4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    _objc_opt_class(param_3);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106204e24; end: 106204e6b; -[SCFeatureCameraBottomUIArbitratorImpl _visibleContender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106204e24(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127430dc) != 0x7fffffffffffffff) {
    func_0x00010c0dfd40(*(undefined8 *)(param_1 + _DAT_1127430d4));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106204e6c; end: 106204eab; -[SCFeatureCameraBottomUIArbitratorImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106204e6c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127430d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127430d4,0);
  return;
}



/* Entry: 106204eac; end: 106204eb3; -[SCCameraTooltipContenderConfig animated] */

undefined1 FUN_106204eac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106204eb4; end: 106204ebb; -[SCCameraTooltipContenderConfig setAnimated:] */

void FUN_106204eb4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106204ebc; end: 106204ec3; -[SCCameraTooltipContenderConfig needToShow] */

undefined1 FUN_106204ebc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106204ec4; end: 106204ecb; -[SCCameraTooltipContenderConfig setNeedToShow:] */

void FUN_106204ec4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106204ecc; end: 106204fdb; -[SCFeatureCameraTooltipArbitratorImpl requestUIVisible:animated:forContender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106204ecc(long param_1,undefined8 param_2,int param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if ((uVar1 != 0) && (lVar5 = param_1, func_0x00010be38be0(), lVar5 != 0x7fffffffffffffff)) {
    lVar5 = (long)_DAT_1127430ec;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0dfd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167e40();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0dfd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbc60();
    _objc_release(uVar4);
    if (param_3 == 0) {
      func_0x00010be35ee0(param_1);
    }
    else {
      func_0x00010bebb860();
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106204fdc; end: 1062050ef; -[SCFeatureCameraTooltipArbitratorImpl isUIVisibleForContender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106204fdc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar4 = param_1;
  func_0x00010be38be0();
  if (lVar4 == 0x7fffffffffffffff) {
LAB_106205044:
    uVar7 = 0;
  }
  else {
    lVar9 = (long)_DAT_1127430ec;
    if (0 < lVar4) {
      lVar8 = 0;
      do {
        uVar5 = *(ulong *)(param_1 + lVar9);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010c0d71a0();
        _objc_release(uVar5);
        if ((uVar3 & 1) != 0) goto LAB_106205044;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
    }
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c0dfd40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0d71a0();
    _objc_release(uVar6);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 1062050f0; end: 1062051bb; -[SCFeatureCameraTooltipArbitratorImpl _indexOfContender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062050f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127430e8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106205188;
  puStack_30 = &UNK_110915dd8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfece40(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1062051bc; end: 106205347; -[SCFeatureCameraTooltipArbitratorImpl _showTooltipForContender:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062051bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be38be0(param_1,param_2,param_3);
  lVar7 = (long)_DAT_1127430e8;
  lVar2 = *(long *)(param_1 + lVar7);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar6 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0dfd40(uVar3,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c071ae0();
      if ((int)uVar4 != 0) {
        lVar2 = param_1;
        func_0x00010beea0c0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = (long)_DAT_1127430f0;
        if ((lVar2 != 0) && (lVar2 = *(long *)(param_1 + lVar7), _objc_release(), lVar2 != lVar1)) {
          lVar2 = param_1;
          func_0x00010beea0c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + _DAT_1127430ec);
          func_0x00010c0dfd40(uVar5,param_2,*(undefined8 *)(param_1 + lVar7));
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar5;
          func_0x00010bf034a0();
          func_0x00010c177560(lVar2,param_2,0,uVar4,param_1);
          _objc_release(uVar5);
          _objc_release(lVar2);
        }
        *(long *)(param_1 + lVar7) = lVar1;
        func_0x00010beea0c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c177560();
        _objc_release(param_1);
        _objc_release(uVar3);
        break;
      }
      uVar8 = *(ulong *)(param_1 + _DAT_1127430f0);
      _objc_release(uVar3);
      if (uVar6 == uVar8) break;
      uVar6 = uVar6 + 1;
      uVar8 = *(ulong *)(param_1 + lVar7);
      func_0x00010bf529e0();
    } while (uVar6 < uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106205348; end: 10620547f; -[SCFeatureCameraTooltipArbitratorImpl _hideTooltipForContender:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106205348(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be38be0(param_1,param_2,param_3);
  lVar5 = (long)_DAT_1127430f0;
  if (uVar1 == *(ulong *)(param_1 + lVar5)) {
    func_0x00010c177560(param_3,param_2,0,param_4,param_1);
    *(undefined8 *)(param_1 + lVar5) = 0x7fffffffffffffff;
    lVar6 = (long)_DAT_1127430e8;
    do {
      uVar1 = uVar1 + 1;
      uVar2 = *(ulong *)(param_1 + lVar6);
      func_0x00010bf529e0();
      if (uVar2 <= uVar1) goto LAB_106205460;
      lVar7 = (long)_DAT_1127430ec;
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0dfd40(uVar3,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0d71a0();
      _objc_release(uVar3);
    } while ((int)uVar4 == 0);
    *(ulong *)(param_1 + lVar5) = uVar1;
    uVar2 = param_1;
    func_0x00010beea0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0dfd40(uVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf034a0();
    func_0x00010c177560(uVar2,param_2,1,uVar4,param_1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
LAB_106205460:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106205480; end: 1062054c7; -[SCFeatureCameraTooltipArbitratorImpl _visibleContender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106205480(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127430f0) != 0x7fffffffffffffff) {
    func_0x00010c0dfd40(*(undefined8 *)(param_1 + _DAT_1127430e8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062054c8; end: 106205507; -[SCFeatureCameraTooltipArbitratorImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062054c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127430ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127430e8,0);
  return;
}



/* Entry: 106205508; end: 10620561f; -[SCFeatureCompositeUIArbitrator requestUIVisible:animated:forContender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106205508(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = *(long *)(param_1 + _DAT_1127430f4);
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_110;
    do {
      lVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010c177560(*(undefined8 *)(lStack_118 + lVar4 * 8),param_2,param_3,param_4,param_1)
        ;
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar2;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 106205620; end: 106205627; -[SCFeatureCompositeUIArbitrator isUIVisibleForContender:] */

undefined8 FUN_106205620(void)

{
  return 0;
}



/* Entry: 106205628; end: 10620563b; -[SCFeatureCompositeUIArbitrator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106205628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127430f4,0);
  return;
}



/* Entry: 10620563c; end: 106205643; -[SCARBarBottomUIContenderConfig animateTransition] */

undefined1 FUN_10620563c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106205644; end: 10620564b; -[SCARBarBottomUIContenderConfig setAnimateTransition:] */

void FUN_106205644(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10620564c; end: 106205653; -[SCARBarBottomUIContenderConfig wantsToShow] */

undefined1 FUN_10620564c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106205654; end: 10620565b; -[SCARBarBottomUIContenderConfig setWantsToShow:] */

void FUN_106205654(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10620565c; end: 10620576b; -[SCFeatureARBarBottomUIArbitratorImpl requestUIVisible:animated:forContender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620565c(long param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_5);
  if ((param_5 != 0) &&
     (lVar1 = param_1, func_0x00010be38be0(param_1,param_2,param_5), lVar1 != 0x7fffffffffffffff)) {
    lVar4 = (long)_DAT_112743104;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c0dfd40(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167e20();
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c0dfd40(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c2a1b40();
    _objc_release(uVar3);
    if (param_3 != (int)uVar2) {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c0dfd40(uVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c224740();
      _objc_release(uVar2);
      if (param_3 == 0) {
        func_0x00010be354e0(param_1,param_2,param_5,param_4);
      }
      else {
        func_0x00010beb8240();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10620576c; end: 1062057c3; -[SCFeatureARBarBottomUIArbitratorImpl isUIVisibleForContender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10620576c(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1;
  func_0x00010be38be0();
  if ((lVar1 == 0x7fffffffffffffff) || (lVar1 != *(long *)(param_1 + _DAT_112743108))) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + _DAT_11274310c);
  }
  return bVar2 & 1;
}



/* Entry: 1062057c4; end: 10620582f; -[SCFeatureARBarBottomUIArbitratorImpl setCameraUIVisible:animated:arbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062057c4(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  if (*(byte *)(param_1 + _DAT_11274310c) != param_3) {
    *(char *)(param_1 + _DAT_11274310c) = (char)param_3;
    if (param_3 == 0) {
      func_0x00010be00620(param_1);
    }
    else {
      func_0x00010be00680(param_1,param_2,param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106205830; end: 10620592f; -[SCFeatureARBarBottomUIArbitratorImpl _didSetVisibleWithAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106205830(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112743108;
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 == 0x7fffffffffffffff) {
    lVar3 = (long)_DAT_112743100;
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + lVar4);
    }
    else {
      lVar2 = *(long *)(param_1 + lVar3);
      func_0x00010bf529e0();
      lVar2 = lVar2 + -1;
      *(long *)(param_1 + lVar4) = lVar2;
    }
  }
  lVar3 = (long)_DAT_112743104;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c0dfd40(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167e20();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c0dfd40(uVar1,param_2,*(undefined8 *)(param_1 + lVar4));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224740();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743100);
  func_0x00010c0dfd40(uVar1,param_2,*(undefined8 *)(param_1 + lVar4));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c177580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106205930; end: 106205abb; -[SCFeatureARBarBottomUIArbitratorImpl _showBottomUIForContender:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106205930(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112743108;
  lVar5 = *(long *)(param_1 + lVar6);
  lVar1 = param_1;
  func_0x00010be38be0(param_1,param_2,param_3);
  if (lVar1 != 0x7fffffffffffffff) {
    if (lVar1 < lVar5) {
      *(long *)(param_1 + lVar6) = lVar1;
    }
    if (*(char *)(param_1 + _DAT_11274310c) == '\x01') {
      if (lVar5 != *(long *)(param_1 + lVar6)) {
        if (lVar5 != 0x7fffffffffffffff) {
          uVar2 = *(undefined8 *)(param_1 + _DAT_112743100);
          func_0x00010c0dfd40(uVar2,param_2,lVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = *(undefined8 *)(param_1 + _DAT_112743104);
          func_0x00010c0dfd40(uVar3,param_2,lVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf03240();
          func_0x00010c177580(uVar2,param_2,0,uVar4,0,param_1);
          _objc_release(uVar3);
          _objc_release(uVar2);
        }
        func_0x00010c177580(param_3,param_2,1,param_4,0,param_1);
      }
    }
    else if (lVar5 == 0x7fffffffffffffff) {
      lVar5 = (long)_DAT_112743110;
      lVar1 = param_1 + lVar5;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar1 == 0) {
        func_0x00010c177560(param_1,param_2,1,0,0);
      }
      else {
        param_1 = param_1 + lVar5;
        _objc_loadWeakRetained(param_1);
        func_0x00010c136e00();
        _objc_release(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106205abc; end: 106205b77; -[SCFeatureARBarBottomUIArbitratorImpl _didSetNotVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106205abc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112743100;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar6 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c0dfd40(uVar2,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_112743104);
      func_0x00010c0dfd40(uVar3,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf03240();
      func_0x00010c177580(uVar2,param_2,0,uVar4,1,param_1);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar6 = uVar6 + 1;
      uVar5 = *(ulong *)(param_1 + lVar7);
      func_0x00010bf529e0();
    } while (uVar6 < uVar5);
  }
  return;
}



/* Entry: 106205b78; end: 106205d6b; -[SCFeatureARBarBottomUIArbitratorImpl _hideBottomUIForContender:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106205b78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112743108;
  lVar9 = *(long *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = 0x7fffffffffffffff;
  lVar8 = (long)_DAT_112743100;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar6 = 0;
    lVar1 = (long)_DAT_112743104;
    do {
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010c0dfd40(uVar2,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2a1b40();
      _objc_release(uVar2);
      if ((int)uVar3 != 0) {
        *(ulong *)(param_1 + lVar7) = uVar6;
        break;
      }
      uVar6 = uVar6 + 1;
      uVar4 = *(ulong *)(param_1 + lVar8);
      func_0x00010bf529e0();
    } while (uVar6 < uVar4);
  }
  if (*(char *)(param_1 + _DAT_11274310c) == '\x01') {
    lVar1 = param_1;
    func_0x00010be38be0(param_1,param_2,param_3);
    if (lVar1 == 0x7fffffffffffffff) goto LAB_106205d4c;
    if (lVar9 == lVar1) {
      func_0x00010c177580(param_3,param_2,0,param_4,0,param_1);
    }
    lVar1 = *(long *)(param_1 + lVar7);
    if (lVar1 != 0x7fffffffffffffff && lVar9 < lVar1) {
      uVar2 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + _DAT_112743104);
      func_0x00010c0dfd40(uVar5,param_2,*(undefined8 *)(param_1 + lVar7));
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bf03240();
      func_0x00010c177580(uVar2,param_2,1,uVar3,0,param_1);
      _objc_release(uVar5);
      _objc_release(uVar2);
      goto LAB_106205ce4;
    }
  }
  else {
LAB_106205ce4:
    lVar1 = *(long *)(param_1 + lVar7);
  }
  if (lVar1 == 0x7fffffffffffffff) {
    lVar7 = (long)_DAT_112743110;
    lVar1 = param_1 + lVar7;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010c177560(param_1,param_2,0,0,0);
    }
    else {
      param_1 = param_1 + lVar7;
      _objc_loadWeakRetained(param_1);
      func_0x00010c136e00();
      _objc_release(param_1);
    }
  }
LAB_106205d4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106205d6c; end: 106205e37; -[SCFeatureARBarBottomUIArbitratorImpl _indexOfContender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106205d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112743100);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106205e04;
  puStack_30 = &UNK_110915e08;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfece40(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106205e38; end: 106205e57; -[SCFeatureARBarBottomUIArbitratorImpl cameraBottomUIArbitrator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106205e38(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112743110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106205e58; end: 106205ea3; -[SCFeatureARBarBottomUIArbitratorImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106205e58(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112743110);
  _objc_storeStrong(param_1 + _DAT_112743104,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112743100,0);
  return;
}



/* Entry: 106205ea4; end: 106205f63; -[SCFeatureLensCloseButtonImpl arBarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106205ea4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c8d10;
  _objc_alloc(PTR_PTR_1126c8d10);
  puVar3 = PTR_PTR_1126ae6b8;
  lVar2 = param_1;
  func_0x00010be36b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d780(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8,puVar3,1,0,
                      &PTR____CFConstantStringClassReference_110e45878,0,
                      *(undefined1 *)(param_1 + _DAT_112743114));
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106205f64; end: 106205f6b; -[SCFeatureLensCloseButtonImpl arBarFeatureType] */

undefined8 FUN_106205f64(void)

{
  return 0;
}



/* Entry: 106205f6c; end: 106205f7f; -[SCFeatureLensCloseButtonImpl currentPresentationType] */

void FUN_106205f6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0860b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6b8,PTR_s_just__1125ff238,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4ff0);
  return;
}



/* Entry: 106205f80; end: 106205f87; -[SCFeatureLensCloseButtonImpl activationBehavior] */

undefined8 FUN_106205f80(void)

{
  return 2;
}



/* Entry: 106205f88; end: 106205ff7; -[SCFeatureLensCloseButtonImpl activateFromARBar:activationType:completion:] */

undefined8 FUN_106205f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfd1600();
  _objc_release(param_1);
  if ((int)uVar1 != 0) {
    func_0x00010c137fe0(param_3);
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 106205ff8; end: 10620600b; -[SCFeatureLensCloseButtonImpl deactivateFromARBar:deactivationType:completion:] */

void FUN_106205ff8(void)

{
  long in_x4;
  
  if (in_x4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106206004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_x4 + 0x10))(in_x4);
    return;
  }
  return;
}



/* Entry: 10620600c; end: 106206053; -[SCFeatureLensCloseButtonImpl setCameraUIVisible:animated:arbitrator:] */

void FUN_10620600c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c091400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106206054; end: 1062060cf; -[SCFeatureLensCloseButtonImpl _iconXSignFillImage] */

void FUN_106206054(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,0x4000000000000000,0x4000000000000000,
                      0x4000000000000000,0x4000000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062060d0; end: 1062060ef; -[SCFeatureLensCloseButtonImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062060d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112743118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062060f0; end: 106206103; -[SCFeatureLensCloseButtonImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062060f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112743118,param_3);
  return;
}



/* Entry: 106206104; end: 106206113; -[SCFeatureLensCloseButtonImpl isVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106206104(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112743114);
}



/* Entry: 106206114; end: 106206123; -[SCFeatureLensCloseButtonImpl setIsVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106206114(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112743114) = param_3;
  return;
}



/* Entry: 106206124; end: 106206133; -[SCFeatureLensCloseButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106206124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112743118);
  return;
}



/* Entry: 106206134; end: 106206193; -[SCFeatureCameraRevertedUIContender setCameraUIVisible:animated:arbitrator:] */

void FUN_106206134(long param_1)

{
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c177560();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106206194; end: 10620619b; -[SCFeatureCameraRevertedUIContender .cxx_destruct] */

void FUN_106206194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10620619c; end: 106206223; -[SCMainCameraLensViewThroughTrackingCaptureEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620619c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0630;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_begin_1125a3840);
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112743128;
    _objc_loadWeakRetained(lVar1);
  }
  lVar2 = lVar1;
  func_0x00010c0c4320(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 106206224; end: 106206267; -[SCMainCameraLensViewThroughTrackingCaptureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106206224(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112743128);
  _objc_destroyWeak(param_1 + _DAT_112743124);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112743120);
  return;
}



/* Entry: 106206268; end: 1062062d3; -[SCMainCameraLensViewThroughTrackingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106206268(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112743140);
  _objc_storeStrong(param_1 + _DAT_11274313c,0);
  _objc_destroyWeak(param_1 + _DAT_112743138);
  _objc_destroyWeak(param_1 + _DAT_112743134);
  _objc_destroyWeak(param_1 + _DAT_112743130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274312c);
  return;
}



/* Entry: 1062062d4; end: 1062067bf; -[SCSponsoredSocialUnlockOnCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062062d4(undefined *param_1)

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
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_f0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_1062067c0;
  uStack_78 = 0x1062067d0;
  uStack_70 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0xffffffffffffffff;
  if (param_1 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = param_1 + _DAT_112743148;
    _objc_loadWeakRetained(puVar11);
  }
  puVar1 = puVar11;
  func_0x00010c131bc0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcaa0();
  _objc_release(puVar1);
  _objc_release(puVar11);
  if (param_1 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = param_1 + _DAT_112743164;
    _objc_loadWeakRetained();
  }
  puVar1 = puVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar11);
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf1f440();
    _objc_release(puVar1);
    _objc_release(puVar11);
    puVar11 = PTR_PTR_1126c8d18;
    if ((int)puVar2 != 0) {
      puStack_f0 = param_1;
      FUN_106206854();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      func_0x000106206878(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010620689c(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_1;
      func_0x0001062068c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x0001062068e4(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29e5e0();
      func_0x00010c29e600();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + _DAT_112743144);
      *(undefined **)(param_1 + _DAT_112743144) = puVar11;
      _objc_release(uVar10);
      _objc_release(puVar3);
      goto LAB_106206720;
    }
  }
  puVar11 = param_1;
  FUN_106206854();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar11;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar11);
  puVar1 = PTR_PTR_1126c8d20;
  _objc_alloc();
  puVar11 = puStack_f0;
  func_0x00010c23d840(puStack_f0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puStack_f0;
  func_0x000100873628(puStack_f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02f220();
  _objc_release(puVar2);
  _objc_release(puVar11);
  puVar2 = PTR_PTR_1126c8d38;
  _objc_alloc();
  puVar11 = param_1;
  func_0x000106206878();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar12;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010620689c(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  puVar6 = param_1;
  func_0x0001062068c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c23d860();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x0001062068e4();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c23d7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023100();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar12);
  _objc_release(puVar11);
  func_0x00010bee9da0(param_1);
  puVar11 = puVar2;
  func_0x00010c29e620();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = *(undefined **)(param_1 + _DAT_112743144);
  *(undefined **)(param_1 + _DAT_112743144) = puVar11;
LAB_106206720:
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puStack_f0);
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  return;
}



/* Entry: 1062067c0; end: 1062067d7;  */

void FUN_1062067c0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1062067d8; end: 106206853;  */

void FUN_1062067d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  func_0x00010c281320();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c243400();
  _objc_release(param_2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 106206854; end: 106206907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106206854(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274315c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106206908; end: 10620695f; -[SCSponsoredSocialUnlockOnCameraEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106206908(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bfafd20(*(undefined8 *)(param_1 + _DAT_112743144));
  puStack_28 = PTR_PTR_1126f0640;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106206960; end: 106206977; -[SCSponsoredSocialUnlockOnCameraEntryPoint _viewTrackTypeFromSnapSource:] */

undefined1 FUN_106206960(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 0) {
    uVar1 = param_3 == 7;
  }
  return uVar1;
}



/* Entry: 106206978; end: 106206a07; -[SCSponsoredSocialUnlockOnCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106206978(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112743164);
  _objc_destroyWeak(param_1 + _DAT_112743160);
  _objc_destroyWeak(param_1 + _DAT_11274315c);
  _objc_destroyWeak(param_1 + _DAT_112743158);
  _objc_destroyWeak(param_1 + _DAT_112743154);
  _objc_destroyWeak(param_1 + _DAT_112743150);
  _objc_destroyWeak(param_1 + _DAT_11274314c);
  _objc_destroyWeak(param_1 + _DAT_112743148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112743144,0);
  return;
}



/* Entry: 106206a08; end: 106206deb; -[SCSponsoredSocialUnlockOnMainCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106206a08(undefined *param_1,undefined8 param_2)

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
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  if (param_1 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = param_1 + _DAT_112743190;
    _objc_loadWeakRetained();
  }
  puVar1 = puVar13;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar13);
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf1f440();
    _objc_release(puVar1);
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126c8d18;
    if ((int)puVar2 != 0) {
      puVar2 = param_1;
      FUN_106206dec(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      func_0x000106206e10(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x000106206e34(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x000106206e58(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = param_1;
      func_0x000106206e7c(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      func_0x000106206ea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c29e420();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29e600(puVar13,param_2,puVar2,puVar1,puVar3,puVar4,puVar14,puVar6,0,3);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + _DAT_112743168);
      *(undefined **)(param_1 + _DAT_112743168) = puVar13;
      _objc_release(uVar12);
      _objc_release(puVar6);
      _objc_release(puVar5);
      goto LAB_106206da0;
    }
  }
  puVar13 = param_1;
  FUN_106206dec();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar13;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar13);
  puVar1 = PTR_PTR_1126c8d20;
  _objc_alloc(PTR_PTR_1126c8d20);
  puVar13 = puVar2;
  func_0x00010c23d840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000100873628(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02f220(puVar1,param_2,puVar13,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar13);
  puVar13 = param_1;
  func_0x000106206ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar13;
  func_0x00010c29e420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar4 = PTR_PTR_1126c8d38;
  _objc_alloc();
  puVar13 = param_1;
  func_0x000106206e10();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar14;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x000106206e34(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  puVar8 = param_1;
  func_0x000106206e58(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c23d860();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_1;
  func_0x000106206e7c();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c23d7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023100(puVar4,param_2,puVar5,puVar6,puVar7,puVar9,puVar1,puVar3,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar14);
  _objc_release(puVar13);
  puVar13 = puVar4;
  func_0x00010c29e620(puVar4,param_2,0,3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = *(undefined **)(param_1 + _DAT_112743168);
  *(undefined **)(param_1 + _DAT_112743168) = puVar13;
LAB_106206da0:
  _objc_release(puVar14);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106206dec; end: 106206ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106206dec(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112743184);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106206ec4; end: 106206f1b; -[SCSponsoredSocialUnlockOnMainCameraEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106206ec4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bfafd20(*(undefined8 *)(param_1 + _DAT_112743168));
  puStack_28 = PTR_PTR_1126f0648;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106206f1c; end: 106206fc3; -[SCSponsoredSocialUnlockOnMainCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106206f1c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112743190);
  _objc_destroyWeak(param_1 + _DAT_11274318c);
  _objc_destroyWeak(param_1 + _DAT_112743188);
  _objc_destroyWeak(param_1 + _DAT_112743184);
  _objc_destroyWeak(param_1 + _DAT_112743180);
  _objc_destroyWeak(param_1 + _DAT_11274317c);
  _objc_destroyWeak(param_1 + _DAT_112743178);
  _objc_destroyWeak(param_1 + _DAT_112743174);
  _objc_destroyWeak(param_1 + _DAT_112743170);
  _objc_destroyWeak(param_1 + _DAT_11274316c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112743168,0);
  return;
}



/* Entry: 106206fc4; end: 106207123; -[SCSponsoredSocialUnlockOnMainCameraPreviewEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106206fc4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_1127431a0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  if (lVar2 == 0) {
    _objc_release(lVar5);
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf1f440();
    _objc_release(lVar2);
    _objc_release(lVar5);
    puVar1 = PTR_PTR_1126c8d18;
    if ((int)lVar3 != 0) {
      FUN_106207124(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95b20(puVar1);
      goto LAB_1062070dc;
    }
  }
  lVar5 = param_1;
  FUN_106207124(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c0c4320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(lVar2);
  _objc_release(lVar5);
  FUN_106207124(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c29e420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95b00();
  _objc_release(lVar5);
LAB_1062070dc:
  _objc_release(lVar4);
  puStack_38 = PTR_PTR_1126f0650;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106207124; end: 106207147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106207124(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274319c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106207148; end: 1062071df; -[SCSponsoredSocialUnlockOnMainCameraPreviewEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106207148(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127431a0);
  _objc_destroyWeak(param_1 + _DAT_11274319c);
  _objc_destroyWeak(param_1 + _DAT_112743198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112743194);
  return;
}



/* Entry: 1062071e0; end: 106207267; -[SCLensCameraFeatureEntryPoint end] */

void FUN_1062071e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x000100b58558();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0917c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287100();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f0658;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


