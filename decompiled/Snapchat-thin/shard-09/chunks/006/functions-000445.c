/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fd2508; end: 106fd250f; -[SCSpectaclesCommunicationChannelEndpoint channelType] */

undefined8 FUN_106fd2508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fd2510; end: 106fd2517; -[SCSpectaclesCommunicationChannelEndpoint wifiSSID] */

undefined8 FUN_106fd2510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106fd2518; end: 106fd251f; -[SCSpectaclesCommunicationChannelEndpoint networkURL] */

undefined8 FUN_106fd2518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106fd2520; end: 106fd2527; -[SCSpectaclesCommunicationChannelEndpoint interpretNilSSIDAsUnknown] */

undefined1 FUN_106fd2520(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106fd2528; end: 106fd252f; -[SCSpectaclesCommunicationChannelEndpoint BTCAccessory] */

undefined8 FUN_106fd2528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106fd2530; end: 106fd2537; -[SCSpectaclesCommunicationChannelEndpoint BLEPeripheral] */

undefined8 FUN_106fd2530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106fd2538; end: 106fd253f; -[SCSpectaclesCommunicationChannelEndpoint serviceUUID] */

undefined8 FUN_106fd2538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106fd2540; end: 106fd2547; -[SCSpectaclesCommunicationChannelEndpoint txCharacteristicUUID] */

undefined8 FUN_106fd2540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106fd2548; end: 106fd254f; -[SCSpectaclesCommunicationChannelEndpoint rxCharacteristicUUID] */

undefined8 FUN_106fd2548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106fd2550; end: 106fd267b; -[SCSpectaclesCommunicationChannelEndpoint .cxx_destruct] */

void FUN_106fd2550(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106fd267c; end: 106fd26eb; -[SCSpectaclesCache URLForCacheFileWithSuffix:] */

void FUN_106fd267c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c291e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bdc2c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd26ec; end: 106fd29af; -[SCSpectaclesCache clearCacheExceptForCurrentUser] */

void FUN_106fd26ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined *puStack_168;
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
  undefined8 uStack_108;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  _objc_opt_class();
  func_0x00010be01b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010b703ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  _objc_opt_class(param_1);
  func_0x00010c248a60();
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
  uStack_78 = *(undefined8 *)PTR__NSURLCanonicalPathKey_11034aae8;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  puVar6 = puVar4;
  func_0x00010bf4dfe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uStack_108;
  _objc_retain(uStack_108);
  _objc_release(puVar10);
  _objc_release(uVar5);
  _objc_release(puVar4);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(puVar6);
  puVar4 = puVar6;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar11 = *plStack_140;
    do {
      puVar10 = (undefined *)0x0;
      uVar5 = uVar2;
      puStack_168 = puVar4;
      do {
        if (*plStack_140 != lVar11) {
          _objc_enumerationMutation(puVar6);
        }
        uVar12 = *(ulong *)(lStack_148 + (long)puVar10 * 8);
        uStack_158 = 0;
        func_0x00010bfc99e0(uVar12);
        uVar1 = uStack_158;
        _objc_retain(uStack_158);
        func_0x00010b703ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar12;
        func_0x00010c071ae0();
        uVar2 = uVar5;
        if (((uVar7 & 1) == 0) && (uVar8 = uVar1, func_0x00010bf1f3c0(), (int)uVar8 != 0)) {
          puVar9 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
          _objc_retainAutoreleasedReturnValue();
          uStack_160 = uVar5;
          func_0x00010c12cc60();
          uVar2 = uStack_160;
          _objc_retain(uStack_160);
          _objc_release(uVar5);
          puVar4 = puStack_168;
          _objc_release(puVar9);
          param_1 = uVar5;
        }
        _objc_release(uVar12);
        _objc_release(uVar1);
        puVar10 = puVar10 + 1;
        uVar5 = uVar2;
      } while (puVar4 != puVar10);
      puVar4 = puVar6;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  _objc_release(puVar6);
  _objc_release(uVar2);
  uVar2 = uVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_106fd29b0;
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc0000000;
  pcStack_1a8 = FUN_106fd2a38;
  puStack_1a0 = &UNK_110848088;
  uStack_198 = uVar2;
  uStack_190 = param_1;
  uStack_188 = uVar3;
  puStack_180 = &stack0xfffffffffffffff0;
  if (lRam00000001136c9f28 != -1) {
    func_0x00010002a2fc(0x1136c9f28,&puStack_1b8);
  }
  uVar2 = uRam00000001136c9f30;
  _objc_retain(uRam00000001136c9f30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106fd29b0; end: 106fd2a37; +[SCSpectaclesCache cachedUUID] */

void FUN_106fd29b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fd2a38;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c9f28 != -1) {
    func_0x00010002a2fc(0x1136c9f28,&puStack_48);
  }
  uVar1 = uRam00000001136c9f30;
  _objc_retain(uRam00000001136c9f30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd2a38; end: 106fd2bcf;  */

void FUN_106fd2a38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class(uVar1);
  func_0x00010c248a60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  uVar1 = uVar2;
  func_0x00010c0f5800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64a80(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar5 = puVar4;
  func_0x00010bf67000(puVar4,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c9f30;
  puRam00000001136c9f30 = puVar5;
  _objc_release(uVar1);
  if (puRam00000001136c9f30 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puRam00000001136c9f30;
    puRam00000001136c9f30 = puVar6;
    _objc_release(puVar5);
    uStack_48 = 0;
    puVar5 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puRam00000001136c9f30,0,
                        &uStack_48);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0f5800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e020(puVar5,param_2,uVar1,1);
    _objc_release(uVar1);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 106fd2bd0; end: 106fd2c1f; +[SCSpectaclesCache logDirectory] */

void FUN_106fd2bd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_opt_class();
  func_0x00010c248a60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd2c20; end: 106fd2c6f; +[SCSpectaclesCache idleAnalyticsDirectory] */

void FUN_106fd2c20(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_opt_class();
  func_0x00010c248a60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd2c70; end: 106fd2cdf; +[SCSpectaclesCache totalSizeOfCacheFiles] */

undefined * FUN_106fd2c70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b24e8;
  func_0x00010c248a60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf278a0(puVar2,param_2,uVar1,0);
  _objc_release(uVar1);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 106fd2ce0; end: 106fd2ceb; -[SCSpectaclesCache .cxx_destruct] */

void FUN_106fd2ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fd2cec; end: 106fd2d2b;  */

bool FUN_106fd2cec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lStack_18;
  
  lStack_18 = 0;
  puVar1 = PTR_PTR_1126b24e8;
  func_0x00010bfb7440(PTR_PTR_1126b24e8,param_2,&lStack_18);
  return (lStack_18 == 0 && 0x17 < (ulong)puVar1 >> 0x17) &&
         (lStack_18 != 0 || (ulong)puVar1 >> 0x17 != 0x18);
}



/* Entry: 106fd2d2c; end: 106fd2d77;  */

bool FUN_106fd2d2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lStack_28;
  
  lStack_28 = 0;
  puVar1 = PTR_PTR_1126b24e8;
  func_0x00010bfb7440(PTR_PTR_1126b24e8,param_2,&lStack_28);
  return lStack_28 == 0 && (undefined *)(param_1 + 0x3200000U) <= puVar1;
}



/* Entry: 106fd2d78; end: 106fd311b;  */

void FUN_106fd2d78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110e96178);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cc60(puVar2,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_150,auStack_100,0x10);
    if (lVar1 != 0) {
      lVar8 = *plStack_140;
      do {
        lVar9 = 0;
        do {
          if (*plStack_140 != lVar8) {
            _objc_enumerationMutation(param_1);
          }
          uVar7 = *(undefined8 *)(lStack_148 + lVar9 * 8);
          puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,uVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126b9fa8;
          if (puVar4 != (undefined *)0x0) {
            func_0x00010c0899c0(uVar7);
            _objc_retainAutoreleasedReturnValue();
            puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_170 = 0xc2000000;
            pcStack_168 = FUN_106fd311c;
            puStack_160 = &UNK_110891a60;
            _objc_retain(puVar4);
            puStack_158 = puVar4;
            func_0x00010bf09600(puVar6,param_2,uVar7,1,&puStack_178);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            func_0x00010befa120(puVar2,param_2,puVar6);
            _objc_release(puVar6);
            _objc_release(puStack_158);
          }
          _objc_release(puVar4);
          lVar9 = lVar9 + 1;
        } while (lVar1 != lVar9);
        lVar1 = param_1;
        func_0x00010bf52a60(param_1,param_2,&uStack_150,auStack_100,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(param_1);
    puVar6 = puVar2;
    func_0x00010bf529e0();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b9fb0;
      _objc_alloc();
      ppuStack_110 = &PTR____CFConstantStringClassReference_110f769d8;
      puStack_108 = PTR____kCFBooleanTrue_11034ab68;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_108,
                          &ppuStack_110,1);
      _objc_retainAutoreleasedReturnValue();
      uStack_180 = 0;
      func_0x00010c008480(puVar5,param_2,puVar4,puVar6,&uStack_180);
      uVar7 = uStack_180;
      _objc_retain(uStack_180);
      _objc_release(puVar6);
      uStack_188 = 0;
      puVar6 = puVar5;
      func_0x00010c2858e0(puVar5,param_2,puVar2,&uStack_188);
      _objc_release(uVar7);
      if (((int)puVar6 == 0) ||
         (puVar6 = puVar4, func_0x00010c14e020(puVar4,param_2,puVar3,0), (int)puVar6 == 0)) {
        puVar6 = (undefined *)0x0;
      }
      else {
        _objc_retain(puVar3);
        puVar6 = puVar3;
      }
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar6 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106fd311c; end: 106fd3143;  */

void FUN_106fd311c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fd3144; end: 106fd314b; -[SCSpectaclesProfile authToken] */

undefined8 FUN_106fd3144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106fd314c; end: 106fd3153; -[SCSpectaclesProfile userAgent] */

undefined8 FUN_106fd314c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106fd3154; end: 106fd315b; -[SCSpectaclesProfile snapAdId] */

undefined8 FUN_106fd3154(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106fd315c; end: 106fd3163; -[SCSpectaclesProfile email] */

undefined8 FUN_106fd315c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106fd3164; end: 106fd316b; -[SCSpectaclesProfile birthday] */

undefined8 FUN_106fd3164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106fd316c; end: 106fd31d7; -[SCSpectaclesProfile .cxx_destruct] */

void FUN_106fd316c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 106fd31d8; end: 106fd31df; -[SCSpectaclesBluetoothCentralManagerServices bluetoothCentralManager] */

undefined8 FUN_106fd31d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106fd31e0; end: 106fd31eb; -[SCSpectaclesBluetoothCentralManagerServices .cxx_destruct] */

void FUN_106fd31e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fd31ec; end: 106fd32af; -[SCSpectaclesOTAUpdatePageScope initWithDelegate:uiContainer:] */

undefined8 *
FUN_106fd31ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_3);
  _objc_retain(param_4);
  puStack_40 = PTR_PTR_1126f8258;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_38;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 1,puVar2);
    _objc_release(puVar2);
    _objc_retain(param_4);
    uVar3 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  return puVar1;
}



/* Entry: 106fd32b0; end: 106fd32c7; -[SCSpectaclesOTAUpdatePageScope delegate] */

void FUN_106fd32b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fd32c8; end: 106fd32cf; -[SCSpectaclesOTAUpdatePageScope uiContainer] */

undefined8 FUN_106fd32c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fd32d0; end: 106fd32fb; -[SCSpectaclesOTAUpdatePageScope .cxx_destruct] */

void FUN_106fd32d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106fd32fc; end: 106fd33cf; -[SCSpectaclesOnboardingScope initWithUiContainer:onboardingScopeFlowType:postPairingOnboardingInfo:delegate:] */

undefined1 *
FUN_106fd32fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f8260;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fd33d0; end: 106fd33d7; -[SCSpectaclesOnboardingScope uiContainer] */

undefined8 FUN_106fd33d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106fd33d8; end: 106fd33df; -[SCSpectaclesOnboardingScope onboardingScopeFlowType] */

undefined8 FUN_106fd33d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fd33e0; end: 106fd33e7; -[SCSpectaclesOnboardingScope postPairingOnboardingInfo] */

undefined8 FUN_106fd33e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106fd33e8; end: 106fd33ff; -[SCSpectaclesOnboardingScope delegate] */

void FUN_106fd33e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fd3400; end: 106fd3437; -[SCSpectaclesOnboardingScope .cxx_destruct] */

void FUN_106fd3400(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fd3438; end: 106fd3507; -[SCSpectaclesDeviceStatusBarScope initWithStatusBarUIContainer:settingsUIContainerBlock:homeUIContainer:] */

undefined1 *
FUN_106fd3438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f8268;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fd3508; end: 106fd350f; -[SCSpectaclesDeviceStatusBarScope statusBarUIContainer] */

undefined8 FUN_106fd3508(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106fd3510; end: 106fd353f; -[SCSpectaclesDeviceStatusBarScope setStatusBarUIContainer:] */

void FUN_106fd3510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd3540; end: 106fd3547; -[SCSpectaclesDeviceStatusBarScope settingsUIContainerBlock] */

undefined8 FUN_106fd3540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fd3548; end: 106fd354f; -[SCSpectaclesDeviceStatusBarScope setSettingsUIContainerBlock:] */

void FUN_106fd3548(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106fd3550; end: 106fd3557; -[SCSpectaclesDeviceStatusBarScope homeUIContainer] */

undefined8 FUN_106fd3550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106fd3558; end: 106fd3587; -[SCSpectaclesDeviceStatusBarScope setHomeUIContainer:] */

void FUN_106fd3558(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106fd3588; end: 106fd35c3; -[SCSpectaclesDeviceStatusBarScope .cxx_destruct] */

void FUN_106fd3588(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fd35c4; end: 106fd3687; -[SCSpectaclesKnobsScope initWithCurrentDevice:uiContainer:scopeDelegate:] */

undefined1 *
FUN_106fd35c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f8270;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fd3688; end: 106fd368f; -[SCSpectaclesKnobsScope currentDevice] */

undefined8 FUN_106fd3688(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106fd3690; end: 106fd3697; -[SCSpectaclesKnobsScope uiContainer] */

undefined8 FUN_106fd3690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fd3698; end: 106fd36af; -[SCSpectaclesKnobsScope scopeDelegate] */

void FUN_106fd3698(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fd36b0; end: 106fd36e7; -[SCSpectaclesKnobsScope .cxx_destruct] */

void FUN_106fd36b0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fd36e8; end: 106fd37ab; -[SCSpectaclesLensManagementScope initWithCurrentDevice:uiContainer:delegate:] */

undefined1 *
FUN_106fd36e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f8278;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fd37ac; end: 106fd37b3; -[SCSpectaclesLensManagementScope currentDevice] */

undefined8 FUN_106fd37ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106fd37b4; end: 106fd37bb; -[SCSpectaclesLensManagementScope uiContainer] */

undefined8 FUN_106fd37b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fd37bc; end: 106fd37d3; -[SCSpectaclesLensManagementScope delegate] */

void FUN_106fd37bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fd37d4; end: 106fd384b; -[SCSpectaclesLensManagementScope .cxx_destruct] */

void FUN_106fd37d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fd384c; end: 106fd38cf; -[SCLegacySpectaclesTooltipsServiceProvider _legacySpectaclesTooltipsService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fd384c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d3e78;
  _objc_alloc(PTR_PTR_1126d3e78);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112761f84;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bfa2b80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011c80(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fd38d0; end: 106fd3907; -[SCLegacySpectaclesTooltipsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fd38d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112761f84);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112761f80);
  return;
}



/* Entry: 106fd3908; end: 106fd397b; -[SCLegacySpectaclesTooltipsServiceImpl initWithFeatureSettingsService:] */

undefined1 * FUN_106fd3908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8280;
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



/* Entry: 106fd397c; end: 106fd39bb; -[SCLegacySpectaclesTooltipsServiceImpl hasUsedSpectacles] */

undefined8 FUN_106fd397c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde020();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106fd39bc; end: 106fd39fb; -[SCLegacySpectaclesTooltipsServiceImpl shouldDisplayHdOnlyTooltip] */

uint FUN_106fd39bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1577c0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 106fd39fc; end: 106fd3a33; -[SCLegacySpectaclesTooltipsServiceImpl setDisplayedHdOnlyTooltip] */

void FUN_106fd39fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd3a34; end: 106fd3a73; -[SCLegacySpectaclesTooltipsServiceImpl shouldDisplayGetHdV3ToolTip] */

uint FUN_106fd3a34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1577a0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 106fd3a74; end: 106fd3aab; -[SCLegacySpectaclesTooltipsServiceImpl setViewedGetHdV3] */

void FUN_106fd3a74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd3aac; end: 106fd3aeb; -[SCLegacySpectaclesTooltipsServiceImpl shouldDisplaySpecsTabIncompatibleWithMyEyesOnlyByDefault] */

uint FUN_106fd3aac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157e40();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 106fd3aec; end: 106fd3b23; -[SCLegacySpectaclesTooltipsServiceImpl setViewedSpecsTabIncompatibleWithMyEyesOnlyByDefault] */

void FUN_106fd3aec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fa680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd3b24; end: 106fd3b63; -[SCLegacySpectaclesTooltipsServiceImpl initiatedLagunaHDTransfer] */

undefined8 FUN_106fd3b24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c064e60();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106fd3b64; end: 106fd3b9b; -[SCLegacySpectaclesTooltipsServiceImpl setInitiatedLagunaHDTransfer] */

void FUN_106fd3b64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd3b9c; end: 106fd3bdb; -[SCLegacySpectaclesTooltipsServiceImpl beganLagunaHDTransfer] */

undefined8 FUN_106fd3b9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf17a20();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106fd3bdc; end: 106fd3c13; -[SCLegacySpectaclesTooltipsServiceImpl setBeganLagunaHDTransfer] */

void FUN_106fd3bdc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16fca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd3c14; end: 106fd3c4b; -[SCLegacySpectaclesTooltipsServiceImpl setAddedHomeWifiNetwork] */

void FUN_106fd3c14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1657a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fd3c4c; end: 106fd3c57; -[SCLegacySpectaclesTooltipsServiceImpl .cxx_destruct] */

void FUN_106fd3c4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fd3c58; end: 106fd3c63; -[SCFeatureSettingsService usedSpectaclesAvailable] */

void FUN_106fd3c58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e96198);
  return;
}



/* Entry: 106fd3c64; end: 106fd3c6f; -[SCFeatureSettingsService hasUsedSpectaclesServerParam] */

undefined ** FUN_106fd3c64(void)

{
  return &PTR____CFConstantStringClassReference_110e96198;
}



/* Entry: 106fd3c70; end: 106fd3c7f; -[SCFeatureSettingsService setHasUsedSpectacles:] */

void FUN_106fd3c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e96198,param_3);
  return;
}



/* Entry: 106fd3c80; end: 106fd3c87; -[SCFeatureSettingsService has_paired_laguna_client_value:] */

undefined * FUN_106fd3c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106fd3c88; end: 106fd3c8f; -[SCFeatureSettingsService has_paired_laguna_server_value:] */

void FUN_106fd3c88(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106fd3c90; end: 106fd3c9f; -[SCFeatureSettingsService hasUsedSpectacles] */

void FUN_106fd3c90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e96198,0);
  return;
}



/* Entry: 106fd3ca0; end: 106fd3cab; -[SCFeatureSettingsService hasSeenHdOnlyTooltip] */

void FUN_106fd3ca0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e961b8);
  return;
}



/* Entry: 106fd3cac; end: 106fd3cb7; -[SCFeatureSettingsService seenHdOnlyTooltipServerParam] */

undefined ** FUN_106fd3cac(void)

{
  return &PTR____CFConstantStringClassReference_110e961b8;
}



/* Entry: 106fd3cb8; end: 106fd3cc7; -[SCFeatureSettingsService setSeenHdOnlyTooltip:] */

void FUN_106fd3cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e961b8,param_3);
  return;
}



/* Entry: 106fd3cc8; end: 106fd3ccf; -[SCFeatureSettingsService hd_only_tooltip_client_value:] */

undefined * FUN_106fd3cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106fd3cd0; end: 106fd3cd7; -[SCFeatureSettingsService hd_only_tooltip_server_value:] */

void FUN_106fd3cd0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106fd3cd8; end: 106fd3ce7; -[SCFeatureSettingsService seenHdOnlyTooltip] */

void FUN_106fd3cd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e961b8,0);
  return;
}



/* Entry: 106fd3ce8; end: 106fd3cf3; -[SCFeatureSettingsService hasSeenGetHdV3] */

void FUN_106fd3ce8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e961d8);
  return;
}



/* Entry: 106fd3cf4; end: 106fd3cff; -[SCFeatureSettingsService seenGetHdV3ServerParam] */

undefined ** FUN_106fd3cf4(void)

{
  return &PTR____CFConstantStringClassReference_110e961d8;
}



/* Entry: 106fd3d00; end: 106fd3d0f; -[SCFeatureSettingsService setSeenGetHdV3:] */

void FUN_106fd3d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e961d8,param_3);
  return;
}



/* Entry: 106fd3d10; end: 106fd3d17; -[SCFeatureSettingsService get_hd_v3_tooltip_client_value:] */

undefined * FUN_106fd3d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106fd3d18; end: 106fd3d1f; -[SCFeatureSettingsService get_hd_v3_tooltip_server_value:] */

void FUN_106fd3d18(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106fd3d20; end: 106fd3d2f; -[SCFeatureSettingsService seenGetHdV3] */

void FUN_106fd3d20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e961d8,0);
  return;
}



/* Entry: 106fd3d30; end: 106fd3d3b; -[SCFeatureSettingsService hasSeenSpecsTabIncompatibleWithMyEyesOnlyByDefault] */

void FUN_106fd3d30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e961f8);
  return;
}



/* Entry: 106fd3d3c; end: 106fd3d47; -[SCFeatureSettingsService seenSpecsTabIncompatibleWithMyEyesOnlyByDefaultServerParam] */

undefined ** FUN_106fd3d3c(void)

{
  return &PTR____CFConstantStringClassReference_110e961f8;
}



/* Entry: 106fd3d48; end: 106fd3d57; -[SCFeatureSettingsService setSeenSpecsTabIncompatibleWithMyEyesOnlyByDefault:] */

void FUN_106fd3d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e961f8,param_3);
  return;
}



/* Entry: 106fd3d58; end: 106fd3d5f; -[SCFeatureSettingsService specs_incompatible_my_eyes_only_default_tooltip_client_value:] */

undefined * FUN_106fd3d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106fd3d60; end: 106fd3d67; -[SCFeatureSettingsService specs_incompatible_my_eyes_only_default_tooltip_server_value:] */

void FUN_106fd3d60(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106fd3d68; end: 106fd3d77; -[SCFeatureSettingsService seenSpecsTabIncompatibleWithMyEyesOnlyByDefault] */

void FUN_106fd3d68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e961f8,0);
  return;
}



/* Entry: 106fd3d78; end: 106fd3d83; -[SCFeatureSettingsService hasInitiatedLagunaHDTransfer] */

void FUN_106fd3d78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e96218);
  return;
}



/* Entry: 106fd3d84; end: 106fd3d8f; -[SCFeatureSettingsService initiatedLagunaHDTransferServerParam] */

undefined ** FUN_106fd3d84(void)

{
  return &PTR____CFConstantStringClassReference_110e96218;
}


