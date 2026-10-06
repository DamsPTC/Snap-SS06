/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2d0838; end: 10b2d0877; -[TTTAttributedLabel setDataDetector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0838(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e5e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2d0878; end: 10b2d0887; -[TTTAttributedLabel activeLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0878(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5bc);
}



/* Entry: 10b2d0888; end: 10b2d0967; -[TTTAttributedLabel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0888(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e5bc,0);
  _objc_storeStrong(param_1 + _DAT_11278e5e0,0);
  _objc_storeStrong(param_1 + _DAT_11278e5b8,0);
  _objc_storeStrong(param_1 + _DAT_11278e5dc,0);
  _objc_storeStrong(param_1 + _DAT_11278e5d8,0);
  _objc_storeStrong(param_1 + _DAT_11278e5d4,0);
  _objc_storeStrong(param_1 + _DAT_11278e5d0,0);
  _objc_storeStrong(param_1 + _DAT_11278e5cc,0);
  _objc_storeStrong(param_1 + _DAT_11278e5c8,0);
  _objc_storeStrong(param_1 + _DAT_11278e5c4,0);
  _objc_storeStrong(param_1 + _DAT_11278e5c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e5b0,0);
  return;
}



/* Entry: 10b2d0968; end: 10b2d09ff;  */

void FUN_10b2d0968(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,
                        *(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)PTR__kCTForegroundColorAttributeName_11034a128);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b800(uVar1);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c12b3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_removeAttribute_range__112628710,
               *(undefined8 *)PTR__kCTForegroundColorFromContextAttributeName_11034a130,param_3,
               param_4);
    return;
  }
  return;
}



/* Entry: 10b2d0a00; end: 10b2d0b2b;  */

void FUN_10b2d0a00(double param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    _objc_opt_class(PTR__OBJC_CLASS___UIFont_1126aec38);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar3 = param_3;
    if ((uVar2 & 1) == 0) {
      _CTFontCopyName(param_3,*(undefined8 *)PTR__kCTFontPostScriptNameKey_11034a0b8);
      _CTFontGetSize(param_3);
    }
    else {
      func_0x00010bfb3f20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c102de0(param_3);
    }
    func_0x00010c12b3c0(*(undefined8 *)(param_2 + 0x20));
    uVar2 = uVar3;
    _CTFontCreateWithName((long)(param_1 * *(double *)(param_2 + 0x28)),uVar3,0);
    func_0x00010bef6f20(*(undefined8 *)(param_2 + 0x20));
    _CFRelease(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2d0b2c; end: 10b2d0d23;  */

void FUN_10b2d0b2c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f62b78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f62b78,
                      &PTR____CFConstantStringClassReference_110f62b98,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10b2d0d24; end: 10b2d0e0b;  */

void FUN_10b2d0d24(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bd86364();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d5040;
  _objc_alloc(PTR_PTR_1126d5040);
  func_0x00010c033560();
  func_0x00010c1ee700(param_2,param_3,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c2a72a0(puVar4);
  func_0x00010c225b00(param_1 + 1.0,param_2);
  func_0x00010c1a7f60(param_2,param_3,0);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b2d0e0c; end: 10b2d0e17; -[SCWrapperPageNameViewController initWithPageViewName:] */

void FUN_10b2d0e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c033570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithPageViewName_shouldAutor_1125ea758,param_3,1,0x1a);
  return;
}



/* Entry: 10b2d0e18; end: 10b2d0e8b; -[SCWrapperPageNameViewController initWithPageViewName:shouldAutorotate:supportedInterfaceOrientations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706348;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e5e4) = param_3;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278e5e8) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e5ec) = param_5;
  }
  return;
}



/* Entry: 10b2d0e8c; end: 10b2d0e9b; -[SCWrapperPageNameViewController supportedInterfaceOrientations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0e8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5ec);
}



/* Entry: 10b2d0e9c; end: 10b2d0eab; -[SCWrapperPageNameViewController shouldAutorotate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2d0e9c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e5e8);
}



/* Entry: 10b2d0eac; end: 10b2d0ebb; -[SCWrapperPageNameViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0eac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5e4);
}



/* Entry: 10b2d0ebc; end: 10b2d0ec7; -[SCNetworkClock .cxx_destruct] */

void FUN_10b2d0ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b2d0ec8; end: 10b2d0f1f; -[SCApplicationState _protectedDataDidBecomeAvailable] */

void FUN_10b2d0ec8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b2d0f20;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c09fac0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_38);
  return;
}



/* Entry: 10b2d0f20; end: 10b2d0f2f;  */

void FUN_10b2d0f20(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x30) = 1;
  return;
}



/* Entry: 10b2d0f30; end: 10b2d0f87; -[SCApplicationState _protectedDataWillBecomeUnavailable] */

void FUN_10b2d0f30(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b2d0f88;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c09fac0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_38);
  return;
}



/* Entry: 10b2d0f88; end: 10b2d0f93;  */

void FUN_10b2d0f88(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x30) = 0;
  return;
}



/* Entry: 10b2d0f94; end: 10b2d0feb; -[SCApplicationState appWillResignActive] */

void FUN_10b2d0f94(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b2d0fec;
  puStack_28 = &UNK_110848c48;
  uStack_18 = 0;
  lStack_20 = param_1;
  func_0x00010c09fac0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 10b2d0fec; end: 10b2d1003;  */

void FUN_10b2d0fec(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 2;
  return;
}



/* Entry: 10b2d1004; end: 10b2d105f; -[SCApplicationState appDidEnterBackground] */

void FUN_10b2d1004(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b2d1060;
  puStack_28 = &UNK_110848c48;
  uStack_18 = 2;
  lStack_20 = param_1;
  func_0x00010c09fac0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 10b2d1060; end: 10b2d107f;  */

void FUN_10b2d1060(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 1;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x20) = 0;
  return;
}



/* Entry: 10b2d1080; end: 10b2d10db; -[SCApplicationState appWillEnterForeground] */

void FUN_10b2d1080(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b2d10dc;
  puStack_28 = &UNK_110848c48;
  uStack_18 = 2;
  lStack_20 = param_1;
  func_0x00010c09fac0(*(undefined8 *)(param_1 + 8),param_2,&puStack_40);
  return;
}



/* Entry: 10b2d10dc; end: 10b2d10ef;  */

void FUN_10b2d10dc(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
  return;
}



/* Entry: 10b2d10f0; end: 10b2d111f; -[SCApplicationState .cxx_destruct] */

void FUN_10b2d10f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b2d1120; end: 10b2d11bf; -[SCDataProviderFactory makeDataProvider:] */

void FUN_10b2d1120(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_3;
  _malloc();
  if (lVar1 == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        *(undefined8 *)PTR__NSMallocException_11034aa98,
                        &PTR____CFConstantStringClassReference_110f62df8);
  }
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a20(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dfd50;
  _objc_alloc(PTR_PTR_1126dfd50);
  func_0x00010c0083e0();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b2d11c0; end: 10b2d1317; -[SCDataProviderFactory subspan:offset:len:] */

void FUN_10b2d11c0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (((long)(param_5 | param_4) < 0) ||
     (uVar1 = param_3, func_0x00010c08fa60(), uVar1 < param_5 + param_4)) {
    puVar5 = PTR__OBJC_CLASS___NSException_1126af520;
    uVar6 = *(undefined8 *)PTR__NSRangeException_11034aaa0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010c0df840(puVar4,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f020(puVar5,param_2,uVar6,&PTR____CFConstantStringClassReference_110f62e18);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar4 = PTR_PTR_1126d6338;
  _objc_alloc(PTR_PTR_1126d6338);
  func_0x00010c0084e0();
  puVar5 = PTR_PTR_1126dfd50;
  _objc_alloc(PTR_PTR_1126dfd50);
  func_0x00010c0083e0();
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b2d1318; end: 10b2d150b; -[SCCarrierNetworkInfoProviderImpl _updateNetworkInfo:] */

void FUN_10b2d1318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c15f8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15f700();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar12;
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126e0180;
  _objc_alloc();
  uVar12 = uVar1;
  func_0x00010bf32da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x000107c2c4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0cf460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x000107c2c4e4();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0cf480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000107c2c4e4();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c083f00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x000107c2c4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c0c1f20(param_1);
  lVar11 = param_1;
  func_0x00010c121ba0(param_1);
  func_0x00010bffcdc0(puVar4,param_2,uVar2,uVar5,uVar7,uVar9,lVar10,lVar11,
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b2d150c; end: 10b2d157f;  */

void FUN_10b2d150c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bedc180();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar1;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2d1580; end: 10b2d1587; -[SCCarrierNetworkInfoProviderImpl carrierNetworkInfoObservable] */

undefined8 FUN_10b2d1580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b2d1588; end: 10b2d15e7; -[SCCarrierNetworkInfoProviderImpl .cxx_destruct] */

void FUN_10b2d1588(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b2d15e8; end: 10b2d15f3; -[SCNetworkConnectivityMonitor initWithDefaultHost] */

void FUN_10b2d15e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00a030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDefaultHostName__1125e01d8,
             &PTR____CFConstantStringClassReference_110f62078);
  return;
}



/* Entry: 10b2d15f4; end: 10b2d1637; -[SCNetworkConnectivityMonitor dealloc] */

void FUN_10b2d15f4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be934e0();
  puStack_28 = PTR_PTR_112706368;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b2d1638; end: 10b2d165f; -[SCNetworkConnectivityMonitor networkReconnectObservable] */

void FUN_10b2d1638(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2d1660; end: 10b2d168b; -[SCNetworkConnectivityMonitor isConnected] */

void FUN_10b2d1660(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba4e8;
  func_0x00010bf48f60();
                    /* WARNING: Could not recover jumptable at 0x00010c06f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_isConnected__1125f9618,param_1);
  return;
}



/* Entry: 10b2d168c; end: 10b2d1743; -[SCNetworkConnectivityMonitor onConnectivityChangeBasedOnNQE:] */

void FUN_10b2d168c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b2d1744; end: 10b2d17d7;  */

void FUN_10b2d1744(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar5 = lVar2;
    func_0x00010bf48f60();
    bVar1 = *(byte *)(param_1 + 0x28);
    puVar3 = PTR_PTR_1126ba4e8;
    func_0x00010c06f020(PTR_PTR_1126ba4e8,param_2,lVar5);
    if ((uint)bVar1 != (uint)puVar3) {
      if (*(char *)(param_1 + 0x28) == '\x01') {
        uVar4 = 4;
      }
      else {
        if (lVar5 != 4) goto LAB_10b2d17c4;
        uVar4 = 0;
        lVar5 = 4;
      }
      func_0x00010bea2da0(lVar2,param_2,uVar4,lVar5);
    }
  }
LAB_10b2d17c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10b2d17d8; end: 10b2d17e3;  */

void FUN_10b2d17d8(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)();
    return;
  }
  return;
}



/* Entry: 10b2d17e4; end: 10b2d17eb; -[SCNetworkConnectivityMonitor networkConnectivityBehaviorSubject] */

undefined8 FUN_10b2d17e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b2d17ec; end: 10b2d17f3; -[SCNetworkConnectivityMonitor networkReconnectPublishSubject] */

undefined8 FUN_10b2d17ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b2d17f4; end: 10b2d183b; -[SCNetworkConnectivityMonitor .cxx_destruct] */

void FUN_10b2d17f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b2d183c; end: 10b2d18e3; -[SCNetworkClockCallback initWithCallbackQueue:callbackBlock:] */

undefined1 *
FUN_10b2d183c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706370;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2d18e4; end: 10b2d18eb; -[SCNetworkClockCallback callbackQueue] */

undefined8 FUN_10b2d18e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b2d18ec; end: 10b2d18f3; -[SCNetworkClockCallback callbackBlock] */

undefined8 FUN_10b2d18ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b2d18f4; end: 10b2d1923; -[SCNetworkClockCallback .cxx_destruct] */

void FUN_10b2d18f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b2d1924; end: 10b2d19d3; -[SCNetworkClockTime initWithServerTime:timeProvider:] */

undefined1 *
FUN_10b2d1924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112706378;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    func_0x00010bf5e680(*(undefined8 *)((long)puVar1 + 0x10));
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b2d19d4; end: 10b2d1a03; -[SCNetworkClockTime currentTime] */

void FUN_10b2d19d4(double param_1,long param_2)

{
  func_0x00010bf5e680(*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bf64e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 - *(double *)(param_2 + 0x18),*(undefined8 *)(param_2 + 8),
             PTR_s_dateByAddingTimeInterval__1125b6d38);
  return;
}



/* Entry: 10b2d1a04; end: 10b2d1a0b; -[SCNetworkClockTime creationMediaTime] */

undefined8 FUN_10b2d1a04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b2d1a0c; end: 10b2d1a3b; -[SCNetworkClockTime .cxx_destruct] */

void FUN_10b2d1a0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b2d1a3c; end: 10b2d1a43; -[SCServerNetworkClockProviderImpl setNetworkTime:] */

void FUN_10b2d1a3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10b2d1a44; end: 10b2d1a97; -[SCServerNetworkClockProviderImpl .cxx_destruct] */

void FUN_10b2d1a44(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b2d1a98; end: 10b2d1cbb;  */

void FUN_10b2d1a98(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_PTR_1126e0198;
  _objc_alloc(PTR_PTR_1126e0198);
  lVar3 = param_1;
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x18;
  func_0x000107c27f68(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x38;
  func_0x000107c27f68(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x58;
  func_0x000107c27f68(lVar6);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    lVar8 = param_1 + 0x78;
    FUN_10b499100(lVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar8 = 0;
  }
  lVar7 = param_1 + 200;
  func_0x0001056329cc(lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined1 *)(param_1 + 0xf0);
  if (*(char *)(param_1 + 0x100) == '\x01') {
    lVar9 = param_1 + 0xf4;
    FUN_10b495c28();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar9 = 0;
  }
  if (*(char *)(param_1 + 0x114) == '\x01') {
    FUN_10b2d1ea4();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c020ce0(puVar2,param_2,lVar3,lVar4,lVar5,lVar6,lVar8,lVar7,uVar1);
  FUN_10b2d1cbc();
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x000107c355a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b2d1cbc; end: 10b2d1cc7;  */

void FUN_10b2d1cbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b2d1cc8; end: 10b2d1d1b; -[SCNClientSwitchboardClientSwitchboardConfigFetcher .cxx_destruct] */

void FUN_10b2d1cc8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cd1738;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c2c04c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b2d1d1c; end: 10b2d1d9b; -[SCNClientSwitchboardClientSwitchboardFactory initWithCpp:] */

undefined1 * FUN_10b2d1d1c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_112706390;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x00010b2d1e44(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10b2d1d9c; end: 10b2d1df7; -[SCNClientSwitchboardClientSwitchboardFactory .cxx_destruct] */

void FUN_10b2d1d9c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cd1748;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b2d1e44((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b2d1df8; end: 10b2d1e6f; -[SCNClientSwitchboardClientSwitchboardFactory .cxx_construct] */

undefined8 * FUN_10b2d1df8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x000107c31704();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b2d1e70; end: 10b2d1ea3;  */

void FUN_10b2d1e70(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_2 + 0x30);
  *(long *)(param_2 + 0x30) = 0;
  *(long *)(param_1 + 0x30) = lVar2;
  lVar4 = *(long *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar3 = *(long *)(param_2 + 0x48);
  *(long *)(param_1 + 0x48) = lVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = *(ulong *)(param_1 + 0x38);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long *)(lVar2 + uVar5 * 8) = param_1 + 0x40;
    *(long *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}



/* Entry: 10b2d1ea4; end: 10b2d1f33;  */

void FUN_10b2d1ea4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126e01b0;
  _objc_alloc(PTR_PTR_1126e01b0);
  lVar2 = param_1;
  func_0x000107c28128(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 8;
  func_0x000107c28128(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019740(puVar1,param_2,lVar2,param_1);
  FUN_10b2d1f34();
  func_0x00010b2d1f3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2d1f34; end: 10b2d1f43;  */

void FUN_10b2d1f34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b2d1f44; end: 10b2d2097;  */

void FUN_10b2d1f44(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  func_0x00010c086560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_68);
  uVar2 = param_2;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107c28134();
  uVar4 = param_2;
  func_0x00010c267420();
  func_0x00010bfa2a20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(&uStack_80);
  uVar1 = uStack_58;
  param_1[1] = uStack_60;
  *param_1 = uStack_68;
  uStack_60 = 0;
  uStack_58 = 0;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  param_1[4] = param_3 & 0xff;
  *(int *)(param_1 + 5) = (int)uVar4;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[8] = uStack_70;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x000107c27914(&uStack_80);
  _objc_release(param_2);
  _objc_release(uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
  func_0x000107c355bc();
  func_0x000107c355b8();
  return;
}



/* Entry: 10b2d2098; end: 10b2d20e7; -[SCNConfigConfigurationMarshallerCppProxy initWithCpp:] */

undefined1 * FUN_10b2d2098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706398;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c2c4f8((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b2d20e8; end: 10b2d2143; -[SCNConfigConfigurationMarshallerCppProxy getSystemType] */

long FUN_10b2d20e8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x10))();
  return (long)(int)plVar1;
}



/* Entry: 10b2d2144; end: 10b2d21d3; -[SCNConfigConfigurationMarshallerCppProxy getConfigurationState] */

void FUN_10b2d2144(long param_1)

{
  undefined1 auStack_40 [32];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_40);
  FUN_10b2d2f48(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b2d2884();
  func_0x000107c279c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2d21d4; end: 10b2d227b; -[SCNConfigConfigurationMarshallerCppProxy getRealValue:] */

void FUN_10b2d21d4(void)

{
  undefined4 *puVar1;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  FUN_10b2d27f4();
  plVar2 = *(long **)(unaff_x20 + 0x18);
  func_0x00010b2d28a8();
  (**(code **)(*plVar2 + 0x20))(plVar2,auStack_80);
  uStack_38 = SUB84(plVar2,0);
  uStack_34 = (undefined1)((ulong)plVar2 >> 0x20);
  func_0x00010b2d285c();
  puVar1 = &uStack_38;
  func_0x0001079245a4(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c355c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2d227c; end: 10b2d2323; -[SCNConfigConfigurationMarshallerCppProxy getStringValue:] */

void FUN_10b2d227c(void)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [32];
  
  FUN_10b2d27f4();
  func_0x00010b2d2838();
  func_0x00010b2d2874();
  func_0x00010b2d2830();
  puVar1 = auStack_50;
  func_0x000107c27f68(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c279a4(auStack_50);
  func_0x000107c355c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2d2324; end: 10b2d23cb; -[SCNConfigConfigurationMarshallerCppProxy getBinaryValue:] */

void FUN_10b2d2324(void)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [32];
  
  FUN_10b2d27f4();
  func_0x00010b2d2838();
  func_0x00010b2d2874();
  func_0x00010b2d2830();
  puVar1 = auStack_50;
  func_0x000107c28240(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c279c4(auStack_50);
  func_0x000107c355c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2d23cc; end: 10b2d246b; -[SCNConfigConfigurationMarshallerCppProxy getBooleanValue:] */

void FUN_10b2d23cc(void)

{
  undefined2 *puVar1;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_80 [78];
  undefined2 uStack_32;
  
  FUN_10b2d27f4();
  plVar2 = *(long **)(unaff_x20 + 0x18);
  func_0x00010b2d28a8();
  (**(code **)(*plVar2 + 0x38))(plVar2,auStack_80);
  uStack_32 = SUB82(plVar2,0);
  func_0x00010b2d285c();
  puVar1 = &uStack_32;
  func_0x000107c28308(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c355c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2d246c; end: 10b2d2517; -[SCNConfigConfigurationMarshallerCppProxy getIntegerValue:] */

void FUN_10b2d246c(void)

{
  long **pplVar1;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_88 [72];
  long *plStack_40;
  undefined1 uStack_38;
  
  FUN_10b2d27f4();
  plVar2 = *(long **)(unaff_x20 + 0x18);
  func_0x00010b2d2838();
  uStack_38 = SUB81(auStack_88,0);
  (**(code **)(*plVar2 + 0x40))();
  plStack_40 = plVar2;
  func_0x00010b2d2830();
  pplVar1 = &plStack_40;
  func_0x000107c28138(pplVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c355c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pplVar1);
  return;
}



/* Entry: 10b2d2518; end: 10b2d2587;  */

void FUN_10b2d2518(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110cd1758,&PTR_DAT_110cd1768,0);
    if (lVar1 == 0) {
      FUN_10b2d2714(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b2d2588; end: 10b2d25db; -[SCNConfigConfigurationMarshallerCppProxy .cxx_destruct] */

void FUN_10b2d2588(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cd18e0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27d08((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b2d25dc; end: 10b2d261b; -[SCNConfigConfigurationMarshallerCppProxy .cxx_construct] */

undefined8 * FUN_10b2d25dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c355c0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b2d261c; end: 10b2d261f;  */

void FUN_10b2d261c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd17f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2d2620; end: 10b2d2633;  */

void FUN_10b2d2620(void)

{
  FUN_10b2d2704();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d2634; end: 10b2d26ab;  */

void FUN_10b2d2634(void)

{
  func_0x00010b2d28b4();
  return;
}



/* Entry: 10b2d26ac; end: 10b2d2703;  */

void FUN_10b2d26ac(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  func_0x00010bfc3fe0(*(undefined8 *)(param_2 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  FUN_10b2d2ee4(param_1);
  func_0x000107c355cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b2d2704; end: 10b2d2713;  */

void FUN_10b2d2704(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd17f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2d2714; end: 10b2d2787;  */

void FUN_10b2d2714(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cd18e0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000107c355c0();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b2d2788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b2d2884();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2d2788; end: 10b2d27f3;  */

void FUN_10b2d2788(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e01c0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107c355c0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107c27d08(&uStack_30);
  return;
}



/* Entry: 10b2d27f4; end: 10b2d28bf;  */

void FUN_10b2d27f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b2d28c0; end: 10b2d293f; -[SCNConfigConfigurationRegistry initWithCpp:] */

undefined1 * FUN_10b2d28c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1127063a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x00010b2d2e48(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10b2d2940; end: 10b2d29af; +[SCNConfigConfigurationRegistry setUserPrefs:] */

void FUN_10b2d2940(void)

{
  undefined1 auStack_40 [16];
  
  func_0x000107c355ec();
  func_0x000107c355e8();
  func_0x00010b4d855c(auStack_40);
  func_0x000107c355f0();
  func_0x000107c355f4();
  return;
}



/* Entry: 10b2d29b0; end: 10b2d2a1f; +[SCNConfigConfigurationRegistry getUserPrefs] */

void FUN_10b2d29b0(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b4d8588(auStack_30);
  FUN_10b2d2518(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b2d2e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2d2a20; end: 10b2d2a8f; +[SCNConfigConfigurationRegistry setExperiments:] */

void FUN_10b2d2a20(void)

{
  undefined1 auStack_40 [16];
  
  func_0x000107c355ec();
  func_0x000107c355e8();
  func_0x00010b4d8418(auStack_40);
  func_0x000107c355f0();
  func_0x000107c355f4();
  return;
}



/* Entry: 10b2d2a90; end: 10b2d2aff; +[SCNConfigConfigurationRegistry getExperiments] */

void FUN_10b2d2a90(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b4d8444(auStack_30);
  FUN_10b2d2518(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b2d2e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2d2b00; end: 10b2d2b6f; +[SCNConfigConfigurationRegistry setServerConfig:] */

void FUN_10b2d2b00(void)

{
  undefined1 auStack_40 [16];
  
  func_0x000107c355ec();
  func_0x000107c355e8();
  func_0x00010b4d8484(auStack_40);
  func_0x000107c355f0();
  func_0x000107c355f4();
  return;
}



/* Entry: 10b2d2b70; end: 10b2d2bdf; +[SCNConfigConfigurationRegistry getServerConfig] */

void FUN_10b2d2b70(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b4d84b0(auStack_30);
  FUN_10b2d2518(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b2d2e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2d2be0; end: 10b2d2c4f; +[SCNConfigConfigurationRegistry getCircumstanceEngine] */

void FUN_10b2d2be0(void)

{
  undefined1 auStack_30 [16];
  
  func_0x000107c30404(auStack_30);
  FUN_10b2d2518(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b2d2e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2d2c50; end: 10b2d2cbf; +[SCNConfigConfigurationRegistry setTweaks:] */

void FUN_10b2d2c50(void)

{
  undefined1 auStack_40 [16];
  
  func_0x000107c355ec();
  func_0x000107c355e8();
  func_0x00010b4d84f0(auStack_40);
  func_0x000107c355f0();
  func_0x000107c355f4();
  return;
}



/* Entry: 10b2d2cc0; end: 10b2d2d2f; +[SCNConfigConfigurationRegistry getTweaks] */

void FUN_10b2d2cc0(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b4d851c(auStack_30);
  FUN_10b2d2518(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b2d2e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2d2d30; end: 10b2d2d9f; +[SCNConfigConfigurationRegistry getCompositeConfig] */

void FUN_10b2d2d30(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10b4d83d8(auStack_30);
  FUN_10b2d2518(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b2d2e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2d2da0; end: 10b2d2dfb; -[SCNConfigConfigurationRegistry .cxx_destruct] */

void FUN_10b2d2da0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cd18f0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b2d2e48((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b2d2dfc; end: 10b2d2e73; -[SCNConfigConfigurationRegistry .cxx_construct] */

undefined8 * FUN_10b2d2dfc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x000107c31704();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b2d2e74; end: 10b2d2ee3;  */

undefined8 FUN_10b2d2e74(undefined8 param_1)

{
  func_0x0001000df750();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10b2d2ee4; end: 10b2d2f47;  */

void FUN_10b2d2ee4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [32];
  
  func_0x00010bf3f440();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28248(auStack_40);
  func_0x000107c27b7c(param_1,auStack_40);
  func_0x000107c279c4(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 10b2d2f48; end: 10b2d2fa7;  */

void FUN_10b2d2f48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba000;
  _objc_alloc(PTR_PTR_1126ba000);
  func_0x000107c28240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff5c0(puVar1,param_2,param_1);
  FUN_10b2d2fa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b2d2fa8; end: 10b2d2fb3;  */

void FUN_10b2d2fa8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b2d2fb4; end: 10b2d3207; -[SCNClientSwitchboardClientSwitchboardConfig initWithKey:rerouteHost:path:routeTag:retryConfig:headers:inAppSessionRetry:compressConfig:timeoutConfig:enableDistributedTracing:] */

undefined8 *
FUN_10b2d2fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1127063a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x00010b2d32bc(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x00010b2d32bc(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x00010b2d32bc(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x00010b2d32bc(uVar3);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x00010b2d32bc(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_9;
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_13;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b2d3208; end: 10b2d320f; -[SCNClientSwitchboardClientSwitchboardConfig key] */

undefined8 FUN_10b2d3208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b2d3210; end: 10b2d3217; -[SCNClientSwitchboardClientSwitchboardConfig rerouteHost] */

undefined8 FUN_10b2d3210(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b2d3218; end: 10b2d321f; -[SCNClientSwitchboardClientSwitchboardConfig path] */

undefined8 FUN_10b2d3218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


