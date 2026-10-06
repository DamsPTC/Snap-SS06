/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f5e5e0; end: 106f5e663;  */

undefined8 FUN_106f5e5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0881e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0881e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106f5e664; end: 106f5e7db; -[SCSpectaclesAuxiliaryContentStore updateAccessDateForMediaIdentifier:] */

void FUN_106f5e664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106f5e70c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f5e7dc; end: 106f5ed63; -[SCSpectaclesAuxiliaryContentStore _loadManifests] */

void FUN_106f5e7dc(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 unaff_x19;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  ulong uStack_230;
  undefined8 uStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1f8 = param_1;
  func_0x00010bdfbe40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64a80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar3 = puVar2;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cb40(uStack_1f8);
    _objc_release(puVar5);
  }
  else {
    func_0x00010c18cb40(uStack_1f8);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  uVar13 = uStack_1f8;
  func_0x00010be5e980(uStack_1f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar13);
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  puStack_208 = puVar3;
  func_0x00010bfeea60();
  _objc_release(puVar2);
  func_0x00010c1ec620(puVar1);
  puStack_210 = puVar1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4b60(uStack_1f8);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1c4b60(uStack_1f8);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uVar13 = uStack_1f8;
  func_0x00010bf70a40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar13;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  uStack_200 = uVar6;
  func_0x00010bf52a60();
  if (uVar6 != 0) {
    lVar15 = *plStack_1a0;
    do {
      uVar13 = 0;
      do {
        if (*plStack_1a0 != lVar15) {
          _objc_enumerationMutation(uStack_200);
        }
        uVar14 = uStack_1f8;
        func_0x00010bf70a40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar14;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c15e740();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c0720c0();
        if ((uVar9 & 1) == 0) {
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar14);
LAB_106f5eb20:
          uVar14 = uStack_1f8;
          func_0x00010bf70a40(uStack_1f8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(uVar14);
        }
        else {
          uVar9 = uStack_1f8;
          func_0x00010bf70a40();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010bf27ca0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar14);
          if (uVar11 == 0) goto LAB_106f5eb20;
        }
        uVar13 = uVar13 + 1;
      } while (uVar6 != uVar13);
      uVar6 = uStack_200;
      func_0x00010bf52a60();
      unaff_x19 = 0;
    } while (uVar6 != 0);
  }
  _objc_release(uStack_200);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uVar13 = uStack_1f8;
  func_0x00010c0c58a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar13;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  uStack_200 = uVar6;
  func_0x00010bf52a60();
  if (uVar6 != 0) {
    lVar15 = *plStack_1e0;
    do {
      uVar14 = 0;
      do {
        if (*plStack_1e0 != lVar15) {
          _objc_enumerationMutation(uStack_200);
        }
        uVar7 = uStack_1f8;
        func_0x00010c0c58a0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar9;
        func_0x00010c0720c0();
        if ((uVar13 & 1) == 0) {
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
LAB_106f5ecc0:
          uVar13 = uStack_1f8;
          func_0x00010c0c58a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640();
          _objc_release(uVar13);
        }
        else {
          uVar13 = uStack_1f8;
          func_0x00010c0c58a0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar13;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010c082b20();
          _objc_release(uVar10);
          _objc_release(uVar13);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          if ((uVar11 & 1) == 0) goto LAB_106f5ecc0;
        }
        uVar14 = uVar14 + 1;
      } while (uVar6 != uVar14);
      uVar6 = uStack_200;
      func_0x00010bf52a60();
      unaff_x19 = 0;
    } while (uVar6 != 0);
  }
  _objc_release(uStack_200);
  _objc_release(puStack_210);
  puVar1 = puStack_208;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_218 = FUN_106f5ed64;
    uStack_230 = uVar13;
    uStack_228 = unaff_x19;
    puStack_220 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_238,puVar1);
    uVar12 = *(undefined8 *)(puVar1 + 0x18);
    _objc_copyWeak(auStack_240,auStack_238);
    func_0x00010c0f7fc0(uVar12);
    _objc_destroyWeak(auStack_240);
    _objc_destroyWeak(auStack_238);
    return;
  }
  return;
}



/* Entry: 106f5ed64; end: 106f5ee0b; -[SCSpectaclesAuxiliaryContentStore _saveManifests] */

void FUN_106f5ed64(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f5ee0c; end: 106f5ef83;  */

void FUN_106f5ee0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010bf70a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf51e00();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c0c58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf51e00();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bdfbe40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be5e980(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,lVar3,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,lVar4,0,0);
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = 0;
    func_0x00010c14e040(puVar6,param_2,lVar2,0,&uStack_58);
    uVar1 = uStack_58;
    _objc_retain(uStack_58);
    uStack_60 = 0;
    func_0x00010c14e040(puVar7,param_2,lVar5,0,&uStack_60);
    _objc_release(uVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 106f5ef84; end: 106f5ef93; -[SCSpectaclesAuxiliaryContentStore _deviceManifestPath] */

void FUN_106f5ef84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_stringByAppendingPathComponent__112674da8,
             &PTR____CFConstantStringClassReference_110e8f978);
  return;
}



/* Entry: 106f5ef94; end: 106f5efa3; -[SCSpectaclesAuxiliaryContentStore _mediaManifestPath] */

void FUN_106f5ef94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_stringByAppendingPathComponent__112674da8,
             &PTR____CFConstantStringClassReference_110e8f998);
  return;
}



/* Entry: 106f5efa4; end: 106f5f08f; -[SCSpectaclesAuxiliaryContentStore _createDeviceEntryIfNecessaryForSerialNumber:] */

void FUN_106f5efa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf70a40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126d3710;
    _objc_alloc_init(PTR_PTR_1126d3710);
    lVar1 = param_1;
    func_0x00010bf70a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(lVar1);
    _objc_release(puVar3);
    func_0x00010bf70a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcfc0();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f5f090; end: 106f5f0f3; -[SCSpectaclesAuxiliaryContentStore spectaclesDeviceDidPair:] */

void FUN_106f5f090(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c078aa0();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1366d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_requestSkyClassifierWithCompleti_11262b3d0,0);
    return;
  }
  return;
}



/* Entry: 106f5f0f4; end: 106f5f183; -[SCSpectaclesAuxiliaryContentStore isCalibrationAvailableForSerialNumber:] */

bool FUN_106f5f0f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bf70a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf27ca0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 106f5f184; end: 106f5f263; -[SCSpectaclesAuxiliaryContentStore calibrationPathForSerialNumber:] */

void FUN_106f5f184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_1;
  func_0x00010c06db80(param_1,param_2,param_3);
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf7f980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf70a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf27ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c25ce00(uVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106f5f264; end: 106f5f2f3; -[SCSpectaclesAuxiliaryContentStore isImuAvailableForMediaIdentifier:] */

bool FUN_106f5f264(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c0c58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bfeae80(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 106f5f2f4; end: 106f5f3df; -[SCSpectaclesAuxiliaryContentStore pathForImuWithMediaIdentifier:] */

void FUN_106f5f2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_1;
  func_0x00010c075280(param_1,param_2,param_3);
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010c2832a0(param_1,param_2,param_3);
    uVar1 = param_1;
    func_0x00010bf7f980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfeae80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c25ce00(uVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106f5f3e0; end: 106f5f47f; -[SCSpectaclesAuxiliaryContentStore writeDataGraph:forMediaId:] */

void FUN_106f5f3e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0dff20(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 8),param_2,lVar1,param_4);
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106f5f480; end: 106f5f4e3; -[SCSpectaclesAuxiliaryContentStore dataGraphForMediaId:] */

void FUN_106f5f480(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0dff20(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f5f4e4; end: 106f5f5eb; -[SCSpectaclesAuxiliaryContentStore fetchDataForMediaId:key:progress:completion:] */

void FUN_106f5f4e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf63c20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106f5f5ec;
  puStack_50 = &UNK_1108903a0;
  uStack_48 = param_5;
  _objc_retain(param_5);
  lVar2 = lVar1;
  func_0x00010bfa6340(lVar1,param_2,param_4,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  func_0x00010c297260(lVar2,param_2,param_6,*(undefined8 *)(param_1 + 0x18));
  _objc_release(param_6);
  _objc_release(lVar2);
  _objc_release(uStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 106f5f5ec; end: 106f5f603;  */

void FUN_106f5f5ec(float param_1,long param_2)

{
  if (*(long *)(param_2 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106f5f5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))((double)param_1);
    return;
  }
  return;
}



/* Entry: 106f5f604; end: 106f5f747; -[SCSpectaclesAuxiliaryContentStore fetchDataForMediaId:key:] */

void FUN_106f5f604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106f5f748;
  uStack_50 = 0x106f5f758;
  uStack_48 = 0;
  _dispatch_group_create();
  _dispatch_group_enter();
  _objc_retain(uVar1);
  func_0x00010bfa6280(param_1);
  _dispatch_group_wait(uVar1,0xffffffffffffffff);
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f5f748; end: 106f5f75f;  */

void FUN_106f5f748(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106f5f760; end: 106f5f7bb;  */

void FUN_106f5f760(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f5f7bc; end: 106f5f8ab; -[SCSpectaclesAuxiliaryContentStore hasCachedDataForMediaId:key:completion:] */

void FUN_106f5f7bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf63c20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd4f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106f5f8ac;
  puStack_50 = &UNK_110881a90;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = param_5;
  _objc_retain(param_5);
  func_0x00010c297260(lVar2,param_2,&puStack_68,uVar3);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(lVar2);
  return;
}



/* Entry: 106f5f8ac; end: 106f5f8ff;  */

void FUN_106f5f8ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf1f3c0(param_2);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f5f900; end: 106f5f9fb; -[SCSpectaclesAuxiliaryContentStore hasCachedDataForMediaId:key:] */

undefined1
FUN_106f5f900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  _dispatch_group_create();
  _dispatch_group_enter();
  func_0x00010bfd4ee0(param_1);
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106f5f9fc; end: 106f5fa0b;  */

void FUN_106f5f9fc(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 106f5fa0c; end: 106f5fa8b; -[SCSpectaclesAuxiliaryContentStore primaryCameraForMediaIdentifier:] */

undefined8 FUN_106f5fa0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0c58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c112d00(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f5fa8c; end: 106f5fb0b; -[SCSpectaclesAuxiliaryContentStore flightModeForMediaIdentifier:] */

undefined8 FUN_106f5fa8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0c58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bfb2960(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f5fb0c; end: 106f5fb8b; -[SCSpectaclesAuxiliaryContentStore isAssetMetadataAvailableForMediaId:] */

undefined8 FUN_106f5fb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0c58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c082b20(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f5fb8c; end: 106f601f3; -[SCSpectaclesAuxiliaryContentStore writeAssetMetadata:forMediaIdentifier:] */

undefined8 FUN_106f5fb8c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c06c6c0();
  if ((int)uVar1 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0c58a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b76c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar4);
    func_0x00010be99540(param_1);
    uVar8 = 1;
    goto LAB_106f601c0;
  }
  uVar1 = param_1;
  func_0x00010bf12360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1366c0();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06f7e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR_PTR_1126d3718;
      _objc_alloc_init(PTR_PTR_1126d3718);
      uVar1 = param_1;
      func_0x00010c0c58a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(uVar1);
      _objc_release(puVar4);
      uVar1 = param_1;
      func_0x00010c0c58a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4880();
      _objc_release(uVar2);
      _objc_release(uVar1);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c0c58a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b76c0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(puVar4);
      uVar2 = param_3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126d3500;
      _objc_opt_class(PTR_PTR_1126d3500);
      uVar3 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar4);
      uVar1 = uVar2;
      if ((uVar3 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010bfeace0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar2 != 0) {
        uVar2 = param_1;
        func_0x00010c28f4e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010bfeace0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e060();
        _objc_release(uVar3);
        uVar3 = uVar2;
        func_0x00010c0899c0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_1;
        func_0x00010c0c58a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ab560();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
      uVar2 = uVar1;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar2 != 0) {
        uVar2 = param_1;
        func_0x00010c28f4e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010c0cc0c0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e060();
        _objc_release(uVar3);
        uVar3 = uVar2;
        func_0x00010c0899c0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_1;
        func_0x00010c0c58a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c7580();
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
      uVar2 = param_3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126d34f8;
      _objc_opt_class(PTR_PTR_1126d34f8);
      uVar3 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar4);
      _objc_release(uVar2);
      if ((uVar3 & 1) == 0) {
LAB_106f600e4:
        uVar2 = param_3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126d3510;
        _objc_opt_class(PTR_PTR_1126d3510);
        uVar3 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar4);
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          uVar2 = param_3;
          func_0x00010c269d40(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2960();
          uVar3 = param_1;
          func_0x00010c0c58a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19dd60();
          _objc_release(uVar5);
          _objc_release(uVar3);
          func_0x00010bfb2960(uVar2);
          _objc_release(uVar2);
        }
        func_0x00010be99540(param_1);
        uVar8 = 1;
      }
      else {
        uVar2 = param_3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf27c00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar3 != 0) {
          uVar3 = uVar2;
          func_0x00010bf27c00(uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010c15e740();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          uVar3 = param_1;
          func_0x00010c06db80();
          if ((uVar3 & 1) == 0) {
            uVar3 = uVar2;
            func_0x00010bf27c00(uVar2);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar3;
            func_0x00010bf63640();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = param_1;
            func_0x00010beeb860();
            _objc_retain(0);
            _objc_release(uVar6);
            _objc_release(uVar3);
            if ((uVar7 & 1) == 0) {
              _objc_release(uVar5);
              _objc_release(0);
              goto LAB_106f601ac;
            }
          }
          func_0x00010c112d00(uVar2);
          uVar3 = param_1;
          func_0x00010c0c58a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e29c0();
          _objc_release(uVar6);
          _objc_release(uVar3);
          func_0x00010c112d00(uVar2);
          _objc_release(uVar5);
          _objc_release(0);
          _objc_release(uVar2);
          goto LAB_106f600e4;
        }
LAB_106f601ac:
        _objc_release(uVar2);
        uVar8 = 0;
      }
      _objc_release(uVar1);
      goto LAB_106f601c0;
    }
  }
  uVar8 = 0;
LAB_106f601c0:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 106f601f4; end: 106f603eb; -[SCSpectaclesAuxiliaryContentStore _writeCalibrationData:forSerialNumber:overwrite:error:] */

undefined8
FUN_106f601f4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [8];
  byte bStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_5 & 1) == 0) && (uVar1 = param_1, func_0x00010c06db80(), (uVar1 & 1) != 0)) {
    uVar5 = 1;
  }
  else {
    uVar1 = param_1;
    func_0x00010c28f4e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c14e080();
    if ((int)uVar5 != 0) {
      func_0x00010bdecf80(param_1);
      uVar2 = uVar1;
      func_0x00010c0899c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bf70a40(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1756e0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_initWeak(auStack_68,param_1);
      func_0x00010c0f98a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retain(param_4);
      bStack_70 = param_5;
      func_0x00010c0f7fc0(param_1);
      _objc_release(param_1);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106f603ec; end: 106f60453;  */

void FUN_106f603ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be0dba0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),1,
                        *(undefined1 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be0dba0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),0,
                        *(undefined1 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f60454; end: 106f6058b; -[SCSpectaclesAuxiliaryContentStore requestLookupTableForSerialNumber:mediaType:camera:completion:] */

void FUN_106f60454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_5;
  uStack_50 = param_4;
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6058c; end: 106f6088f;  */

void FUN_106f6058c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar2 == 0) || (*(long *)(param_1 + 0x38) == 0)) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
  else {
    uVar1 = *(int *)(param_1 + 0x40) - 3;
    if (uVar1 < 9) {
      uVar7 = *(undefined8 *)(&UNK_10de18ea8 + (ulong)uVar1 * 8);
    }
    else {
      uVar7 = 0;
    }
    lVar3 = lVar2;
    func_0x00010be0dba0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0f98a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x106f60708;
    puStack_80 = &UNK_110892620;
    _objc_copyWeak(auStack_68,param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar8);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uStack_70 = uVar8;
    uStack_60 = uVar7;
    _objc_retain(uVar6);
    uStack_78 = uVar6;
    func_0x000100bc0718(lVar3,lVar5,&puStack_98);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uStack_78);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106f60890; end: 106f60ba3; -[SCSpectaclesAuxiliaryContentStore _extractLookupTablesForSerialNumber:contentType:overwrite:] */

void FUN_106f60890(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d3720;
  _objc_alloc(PTR_PTR_1126d3720);
  func_0x00010c044880();
  lVar2 = *(long *)(param_1 + 0x60);
  func_0x00010c0e00e0(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  _objc_release();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x60);
    func_0x00010c0e00e0(lVar3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106f60b70;
  }
  _dispatch_group_create();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,lVar3,puVar1);
  lVar2 = param_1;
  func_0x00010c0b5c20(param_1,param_2,param_4,1);
  lVar4 = param_1;
  func_0x00010c28f4e0(param_1,param_2,param_3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0b5c20(param_1,param_2,param_4,2);
  lVar5 = param_1;
  func_0x00010c28f4e0(param_1,param_2,param_3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) {
    lVar2 = lVar4;
    func_0x00010c0f5800(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfacbe0(puVar6,param_2,lVar2);
    if (((ulong)puVar7 & 1) == 0) {
      _objc_release(lVar2);
      goto LAB_106f60a80;
    }
    puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c0f5800(lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bfacbe0(puVar7,param_2,lVar8);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(lVar2);
    _objc_release(puVar6);
    if (((ulong)puVar9 & 1) == 0) goto LAB_106f60a88;
  }
  else {
    func_0x00010c12cc60(puVar6,param_2,lVar4,0);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
LAB_106f60a80:
    _objc_release(puVar6);
LAB_106f60a88:
    lVar8 = param_1;
    func_0x00010bf27cc0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_group_enter(lVar3);
    func_0x00010bf12360(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106f60ba4;
    puStack_88 = &UNK_110985788;
    _objc_retain(lVar4);
    lStack_80 = lVar4;
    _objc_retain(lVar5);
    lStack_78 = lVar5;
    uStack_68 = param_4;
    _objc_retain(lVar3);
    lStack_70 = lVar3;
    func_0x00010bf9ee20(param_1,param_2,lVar8,param_4,&puStack_a0);
    _objc_release(param_1);
    lVar2 = lStack_70;
    _objc_retain(lVar3);
    _objc_release(lVar2);
    _objc_release(lStack_78);
    _objc_release(lStack_80);
    _objc_release(lVar3);
    _objc_release(lVar8);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
LAB_106f60b70:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106f60ba4; end: 106f60c9b;  */

void FUN_106f60ba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  _objc_retain(param_4);
  func_0x00010bf09780(puVar1,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f5800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e020(puVar1,param_2,uVar2,1);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_4,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f5800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e020(puVar3,param_2,uVar2,1);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106f60c9c; end: 106f60db3; -[SCSpectaclesAuxiliaryContentStore spectaclesDevice:didUpdateInfo:] */

void FUN_106f60c9c(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((param_4 >> 0xd & 1) != 0) {
    lVar1 = param_3;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf27c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(lVar2);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106f60db4; end: 106f60e4b;  */

void FUN_106f60db4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf63640(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15e740(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uStack_38 = 0;
    func_0x00010beeb860(lVar1,param_2,uVar2,uVar3,1,&uStack_38);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106f60e4c; end: 106f60f6f; -[SCSpectaclesAuxiliaryContentStore spectaclesTransferSession:onTransferUpdate:] */

void FUN_106f60e4c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf61080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c23e340();
  _objc_release(uVar1);
  if (((param_4 == 5) && ((uVar2 & 1) == 0)) && (uVar1 = param_3, func_0x00010bf44300(), uVar1 == 3)
     ) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106f60f70; end: 106f6105f;  */

void FUN_106f60f70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf61080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae720;
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106f61060;
    puStack_40 = &UNK_1109857b8;
    uStack_38 = uVar2;
    _objc_retain();
    func_0x00010bf11fe0(puVar3,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bdc3540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bd8a0(lVar1,param_2,puVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uStack_38);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106f61060; end: 106f61073;  */

void FUN_106f61060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d36f0,PTR_s_assetMetadataForContent__1125a06b8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106f61074; end: 106f61103; -[SCSpectaclesAuxiliaryContentStore isPrimaryDepthAvailableForMediaIdentifier:] */

bool FUN_106f61074(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c0c58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf6ddc0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 106f61104; end: 106f61183; -[SCSpectaclesAuxiliaryContentStore isSecondaryDepthAvailableForMediaIdentifier:] */

undefined8 FUN_106f61104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0c58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c154ec0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f61184; end: 106f61203; -[SCSpectaclesAuxiliaryContentStore isDepthFailedForMediaIdentifier:] */

undefined8 FUN_106f61184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0c58a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf6dd40(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f61204; end: 106f6125b; -[SCSpectaclesAuxiliaryContentStore totalSizeOfDepthForMediaIdentifier:] */

undefined * FUN_106f61204(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010be70b40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b24e8;
    func_0x00010bf278a0(PTR_PTR_1126b24e8,param_2,param_1,0);
  }
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 106f6125c; end: 106f612f7; -[SCSpectaclesAuxiliaryContentStore _pathForDepthWithMediaIdentifier:] */

void FUN_106f6125c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c07b120(param_1,param_2,param_3);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf6dd60(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0eec80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f612f8; end: 106f61357; -[SCSpectaclesAuxiliaryContentStore depthFileHandlersForMediaIds:] */

void FUN_106f612f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106f61358;
  puStack_20 = &UNK_1109057d0;
  uStack_18 = param_1;
  func_0x00010c0b8600(param_3,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f61358; end: 106f61363;  */

void FUN_106f61358(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6dd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_depthFileHandlerForMediaId__1125b9100,param_2);
  return;
}



/* Entry: 106f61364; end: 106f61407; -[SCSpectaclesAuxiliaryContentStore depthFileHandlerForMediaId:] */

void FUN_106f61364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3728;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bf7f980(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5de0(puVar1,param_2,param_1,param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f61408; end: 106f615a7; -[SCSpectaclesAuxiliaryContentStore loadPrimaryDepthAvailabilityForMediaIdentifier:snapId:mediaType:completion:] */

void FUN_106f61408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,long param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c2832a0(param_1);
  uVar1 = param_1;
  func_0x00010c070720();
  if ((int)uVar1 == 0) {
    uVar1 = param_1;
    func_0x00010c07b120();
    if ((param_5 != 7) && ((int)uVar1 == 0)) {
      _objc_initWeak(auStack_48,param_1);
      func_0x00010bf12360(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      _objc_retain(param_6);
      func_0x00010c09bf40(param_1);
      _objc_release(param_1);
      _objc_release(param_6);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      goto LAB_106f61554;
    }
    pcVar2 = *(code **)(param_6 + 0x10);
    uVar1 = 4;
  }
  else {
    pcVar2 = *(code **)(param_6 + 0x10);
    uVar1 = 2;
  }
  (*pcVar2)(param_6,uVar1,0);
LAB_106f61554:
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f615a8; end: 106f6166f;  */

void FUN_106f615a8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_2 == 2) && (lVar1 != 0)) {
    func_0x00010c06c6c0(lVar1);
    lVar2 = lVar1;
    func_0x00010c0c58a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18bea0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010be99540(lVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f61670; end: 106f6183f; -[SCSpectaclesAuxiliaryContentStore prepareDepthForMediaIdentifier:snapId:depthPart:data:mediaType:immediate:progress:completion:] */

void FUN_106f61670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010c06c6c0(param_1);
  _objc_initWeak(auStack_68,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  uStack_78 = param_5;
  uStack_70 = param_7;
  _objc_retain(param_4);
  _objc_retain(param_6);
  uStack_6c = param_8;
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f61840; end: 106f61a17;  */

void FUN_106f61840(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  ppuVar7 = &puStack_70;
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c06c6c0(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0c58a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b76c0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
    lVar3 = lVar1;
    func_0x00010bf6dd60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    if (*(int *)(param_1 + 0x58) == 8) {
      func_0x00010be05d20(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_106f61a18;
      puStack_58 = &UNK_110841fb0;
      _objc_copyWeak(auStack_48,param_1 + 0x48);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar6);
      uStack_50 = uVar6;
      _objc_retainBlock(&puStack_70);
      _objc_release(uStack_50);
      _objc_destroyWeak(auStack_48);
    }
    else {
      func_0x00010be0dd60(lVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = (undefined **)0x0;
    }
    lVar5 = lVar1;
    func_0x00010bf6de80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11df20();
    _objc_release(lVar5);
    _objc_release(ppuVar7);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106f61a18; end: 106f61a73;  */

void FUN_106f61a18(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf12360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e240();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f61a74; end: 106f61b77; -[SCSpectaclesAuxiliaryContentStore prioritizeDepthForMediaIdentifier:] */

void FUN_106f61a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010c06c6c0(param_1);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f61b78; end: 106f61c47;  */

void FUN_106f61b78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c06c6c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0c58a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b76c0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
    lVar3 = lVar1;
    func_0x00010bf6de80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c113b60();
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f61c48; end: 106f61f93; -[SCSpectaclesAuxiliaryContentStore awaitDepthForMediaIdentifiers:depthPart:progress:completion:] */

void FUN_106f61c48(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  double dStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_3;
  func_0x00010bf529e0();
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x2020000000;
  uStack_118 = 0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _dispatch_group_create();
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (uVar5 != 0) {
    lVar7 = *plStack_160;
    do {
      uVar8 = 0;
      do {
        if (*plStack_160 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        _dispatch_group_enter(puVar4);
        uStack_190 = 0;
        uStack_180 = 0x2020000000;
        uStack_178 = 0;
        puStack_1d0 = puVar1;
        uStack_1c8 = 0xc2000000;
        pcStack_1c0 = FUN_106f61f94;
        puStack_1b8 = &UNK_110985818;
        puStack_1a0 = &uStack_130;
        puStack_1a8 = &uStack_190;
        dStack_198 = (double)uVar2;
        puStack_188 = &uStack_190;
        _objc_retain(param_5);
        puStack_200 = puVar1;
        uStack_1f8 = 0xc2000000;
        pcStack_1f0 = FUN_106f6200c;
        puStack_1e8 = &UNK_1108420a0;
        uStack_1b0 = param_5;
        _objc_retain(puVar3);
        puStack_1e0 = puVar3;
        _objc_retain(puVar4);
        puStack_1d8 = puVar4;
        func_0x00010bdd1fa0(param_1);
        _objc_release(puStack_1d8);
        _objc_release(puStack_1e0);
        _objc_release(uStack_1b0);
        __Block_object_dispose(&uStack_190,8);
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
      uVar5 = param_3;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_230 = puVar1;
  dVar9 = 1.60807493534087e-314;
  uStack_228 = 0xc2000000;
  uStack_220 = 0x106f6203c;
  puStack_218 = &UNK_11084aaa8;
  puStack_210 = puVar3;
  uStack_208 = param_6;
  _objc_retain(puVar3);
  _objc_retain(param_6);
  func_0x000100bc0718(puVar4,uVar6,&puStack_230);
  _objc_release(uVar6);
  _objc_release(puStack_210);
  _objc_release(uStack_208);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_130,8);
  __Unwind_Resume();
  lVar7 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  *(double *)(lVar7 + 0x18) =
       (dVar9 - *(double *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18)) /
       *(double *)(param_3 + 0x38) + *(double *)(lVar7 + 0x18);
  if (*(long *)(param_3 + 0x20) != 0) {
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))
              (*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x30) + 8) + 0x18));
  }
  *(double *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18) = dVar9;
  return;
}



/* Entry: 106f61f94; end: 106f6200b;  */

void FUN_106f61f94(double param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  *(double *)(lVar1 + 0x18) =
       (param_1 - *(double *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18)) /
       *(double *)(param_2 + 0x38) + *(double *)(lVar1 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))
              (*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18));
  }
  *(double *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = param_1;
  return;
}



/* Entry: 106f6200c; end: 106f6208f;  */

void FUN_106f6200c(long param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106f62090; end: 106f621f3; -[SCSpectaclesAuxiliaryContentStore _awaitDepthForMediaIdentifier:depthPart:progress:completion:] */

void FUN_106f62090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c06c6c0(param_1);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106f621f4; end: 106f6235f;  */

void FUN_106f621f4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = (undefined *)(param_1 + 0x38);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) goto LAB_106f62348;
  func_0x00010c06c6c0(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0c58a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b76c0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 == 0) {
    puVar2 = puVar1;
    func_0x00010c07b120();
    if ((int)puVar2 == 0) {
      lVar5 = *(long *)(param_1 + 0x40);
      goto LAB_106f622a4;
    }
  }
  else {
LAB_106f622a4:
    if ((lVar5 != 1) || (puVar2 = puVar1, func_0x00010c07d580(), (int)puVar2 == 0)) {
      puVar2 = puVar1;
      func_0x00010c070720();
      if ((int)puVar2 == 0) {
        puVar2 = puVar1;
        func_0x00010bf6de80(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf136e0();
      }
      else {
        lVar5 = *(long *)(param_1 + 0x28);
        puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar5 + 0x10))(lVar5,puVar2);
      }
      _objc_release(puVar2);
      goto LAB_106f62348;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
LAB_106f62348:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106f62360; end: 106f62477; -[SCSpectaclesAuxiliaryContentStore _downloadBlockForMediaId:depthFileHandler:depthPart:snapId:] */

void FUN_106f62360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_90;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106f62478;
  puStack_78 = &UNK_110985848;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_70 = param_6;
  uStack_68 = param_4;
  uStack_60 = param_3;
  uStack_50 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retainBlock(&puStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106f62478; end: 106f62587;  */

void FUN_106f62478(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = (undefined *)(param_1 + 0x38);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d3650;
    func_0x00010bf2f680(PTR_PTR_1126d3650);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar3);
  }
  else {
    puVar3 = puVar1;
    func_0x00010bf12360(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bdfadc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bf88b80(puVar3);
    param_3 = puVar2;
  }
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f62588; end: 106f62697; -[SCSpectaclesAuxiliaryContentStore _extractionBlockForMediaId:depthFileHandler:data:] */

void FUN_106f62588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106f62698;
  puStack_70 = &UNK_1109858a8;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_68 = param_3;
  uStack_60 = param_5;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  ppuVar1 = &puStack_88;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106f62698; end: 106f62907;  */

void FUN_106f62698(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  puVar1 = (undefined *)(param_1 + 0x38);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar10 = PTR_PTR_1126d3650;
    func_0x00010bf2f680(PTR_PTR_1126d3650);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar10);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000109024fa8(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf27cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010c0f5920(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c28f4e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e060();
    _objc_release(uVar2);
    puVar5 = puVar1;
    func_0x00010bdfadc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar6 = puVar1;
    func_0x00010bf12360(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c0f5800(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c0c58a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c112d00();
    _objc_retain(puVar5);
    _objc_retain(puVar4);
    func_0x00010bf9ecc0(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
    param_3 = puVar3;
  }
  _objc_release(param_3);
  _objc_release(puVar10);
  _objc_release(puVar1);
  return;
}



/* Entry: 106f62908; end: 106f6299b;  */

void FUN_106f62908(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_2);
  func_0x00010bf69bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f5800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f6299c; end: 106f62abb; -[SCSpectaclesAuxiliaryContentStore _depthExtractionCallbackForMediaId:depthFileHandler:depthPart:extractBothSides:completion:] */

void FUN_106f6299c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_initWeak(auStack_48,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106f62abc;
  puStack_80 = &UNK_1109858d8;
  uStack_68 = param_7;
  _objc_retain(param_7);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_98;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_60);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106f62abc; end: 106f62cff;  */

void FUN_106f62abc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106f62d00;
  puStack_68 = &UNK_11084aaa8;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_58 = uVar2;
  _objc_retain(param_2);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x106f62d10;
  puStack_98 = &UNK_1108538b0;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = param_2;
  _objc_retain(uVar2);
  uStack_88 = uVar2;
  _objc_retain(param_2);
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_106f62d20;
  puStack_e0 = &UNK_11096f6b0;
  uStack_90 = param_2;
  _objc_copyWeak(auStack_c0,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_b8 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_d8 = uVar2;
  _objc_retain(uVar3);
  uStack_c8 = uVar3;
  _objc_retain(param_2);
  uStack_d0 = param_2;
  _objc_copyWeak(auStack_110,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_108 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uStack_100 = *(undefined1 *)(param_1 + 0x48);
  _objc_retain(param_2);
  func_0x00010c0bce60(param_2);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_110);
  _objc_release(uStack_d0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d8);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uStack_90);
  _objc_release(uStack_88);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106f62d00; end: 106f62d1f;  */

void FUN_106f62d00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106f62d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106f62d20; end: 106f62db3;  */

void FUN_106f62d20(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar2 = lVar1;
      func_0x00010c0c58a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18bea0();
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    func_0x00010be99540(lVar1);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f62db4; end: 106f62f27;  */

void FUN_106f62db4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    puVar2 = PTR_PTR_1126d3650;
    func_0x00010bf2f680(PTR_PTR_1126d3650);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
    _objc_release(puVar2);
  }
  else {
    lVar3 = lVar1;
    func_0x00010c0f98a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    uStack_48 = *(undefined1 *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    func_0x00010c0f7fc0(lVar3);
    _objc_release(lVar3);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106f62f28; end: 106f63163;  */

void FUN_106f62f28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x38);
    puVar4 = PTR_PTR_1126d3650;
    func_0x00010bf2f680(PTR_PTR_1126d3650);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,puVar4);
    _objc_release(puVar4);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x48);
    if (lVar5 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0eec80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010c0899c0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c0c58a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18bee0();
      _objc_release(lVar3);
      _objc_release(lVar5);
      _objc_release(uVar6);
      _objc_release(uVar2);
      lVar5 = *(long *)(param_1 + 0x48);
    }
    if ((lVar5 == 1) || (*(char *)(param_1 + 0x50) == '\x01')) {
      lVar5 = lVar1;
      func_0x00010c0c58a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1f8f60();
      _objc_release(lVar3);
      _objc_release(lVar5);
    }
    func_0x00010be99540(lVar1);
    lVar5 = lVar1;
    func_0x00010bf04760(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2484c0();
    _objc_release(lVar5);
    _objc_copyWeak(auStack_50,param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    func_0x00010becffe0(lVar1);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106f63164; end: 106f6319f;  */

void FUN_106f63164(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f631a0; end: 106f631e3; -[SCSpectaclesAuxiliaryContentStore skyClassifierPath] */

void FUN_106f631a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf12360();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c23e740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f631e4; end: 106f631eb; -[SCSpectaclesAuxiliaryContentStore performer] */

undefined8 FUN_106f631e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106f631ec; end: 106f631f3; -[SCSpectaclesAuxiliaryContentStore mediaRetriever] */

undefined8 FUN_106f631ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106f631f4; end: 106f631fb; -[SCSpectaclesAuxiliaryContentStore auxiliaryContentProvider] */

undefined8 FUN_106f631f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106f631fc; end: 106f63203; -[SCSpectaclesAuxiliaryContentStore dataGraphFactory] */

undefined8 FUN_106f631fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106f63204; end: 106f6320b; -[SCSpectaclesAuxiliaryContentStore spectaclesManager] */

undefined8 FUN_106f63204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106f6320c; end: 106f63213; -[SCSpectaclesAuxiliaryContentStore directoryPath] */

undefined8 FUN_106f6320c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106f63214; end: 106f6321b; -[SCSpectaclesAuxiliaryContentStore announcer] */

undefined8 FUN_106f63214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106f6321c; end: 106f63227; -[SCSpectaclesAuxiliaryContentStore deviceManifest] */

void FUN_106f6321c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 106f63228; end: 106f6322f; -[SCSpectaclesAuxiliaryContentStore setDeviceManifest:] */

void FUN_106f63228(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106f63230; end: 106f6323b; -[SCSpectaclesAuxiliaryContentStore mediaManifest] */

void FUN_106f63230(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x58,1);
  return;
}



/* Entry: 106f6323c; end: 106f63243; -[SCSpectaclesAuxiliaryContentStore setMediaManifest:] */

void FUN_106f6323c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106f63244; end: 106f6324b; -[SCSpectaclesAuxiliaryContentStore extractions] */

undefined8 FUN_106f63244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106f6324c; end: 106f63253; -[SCSpectaclesAuxiliaryContentStore depthQueue] */

undefined8 FUN_106f6324c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106f63254; end: 106f6325b; -[SCSpectaclesAuxiliaryContentStore lookupTables] */

undefined8 FUN_106f63254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106f6325c; end: 106f6330f; -[SCSpectaclesAuxiliaryContentStore .cxx_destruct] */

void FUN_106f6325c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f63310; end: 106f633bb; -[SCSpectaclesLookupTableExtractionInfo initWithSerialNumber:contentType:] */

undefined1 * FUN_106f63310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7f40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f633bc; end: 106f633d7; -[SCSpectaclesLookupTableExtractionInfo isEqual:] */

undefined8 * FUN_106f633bc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar4 = (long *)0x1136c8650;
  if (param_1 == param_3) {
    return (undefined8 *)0x1;
  }
  lVar3 = 2;
  lVar5 = 2;
  _objc_opt_class();
  puVar2 = param_3;
  func_0x00010c077980();
  if ((int)puVar2 != 0) {
    if ((bRam00000001136c8648 & 1) == 0) {
      puVar2 = param_1;
      _objc_opt_class();
      _class_copyIvarList();
      lVar7 = 0;
      puVar8 = puVar2;
      do {
        pcVar6 = (char *)*puVar8;
        pcVar1 = pcVar6;
        _ivar_getTypeEncoding();
        if (*pcVar1 == '@') {
          _ivar_getOffset();
          *(char **)(lVar7 * 8 + 0x1136c8650) = pcVar6;
          lVar7 = lVar7 + 1;
        }
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
      _free(puVar2);
      DataMemoryBarrier(2,3);
      bRam00000001136c8648 = 1;
    }
    do {
      puVar2 = *(undefined8 **)((long)param_1 + *plVar4);
      if ((puVar2 != *(undefined8 **)((long)param_3 + *plVar4)) &&
         (func_0x00010c071ae0(), (int)puVar2 == 0)) {
        return puVar2;
      }
      lVar3 = lVar3 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
    puVar2 = (undefined8 *)0x1;
  }
  return puVar2;
}



/* Entry: 106f633d8; end: 106f633eb; -[SCSpectaclesLookupTableExtractionInfo hash] */

ulong FUN_106f633d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  plVar5 = (long *)0x1136c8650;
  if ((bRam00000001136c8648 & 1) == 0) {
    puVar1 = param_1;
    _objc_opt_class();
    _class_copyIvarList();
    lVar7 = 0;
    lVar9 = 2;
    puVar8 = puVar1;
    do {
      pcVar6 = (char *)*puVar8;
      pcVar2 = pcVar6;
      _ivar_getTypeEncoding();
      if (*pcVar2 == '@') {
        _ivar_getOffset();
        *(char **)(lVar7 * 8 + 0x1136c8650) = pcVar6;
        lVar7 = lVar7 + 1;
      }
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
    _free(puVar1);
    DataMemoryBarrier(2,3);
    bRam00000001136c8648 = 1;
  }
  uVar3 = *(ulong *)((long)param_1 + lRam00000001136c8650);
  func_0x00010bfde980(uVar3);
  lVar7 = 1;
  do {
    plVar5 = plVar5 + 1;
    uVar4 = *(ulong *)((long)param_1 + *plVar5);
    func_0x00010bfde980(uVar4);
    uVar4 = uVar4 | uVar3 << 0x20;
    uVar3 = ~uVar4 + uVar4 * 0x40000;
    uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
    uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
    uVar3 = uVar3 ^ uVar3 >> 0x16;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return uVar3;
}



/* Entry: 106f633ec; end: 106f6340f; -[SCSpectaclesLookupTableExtractionInfo copyWithZone:] */

undefined8 FUN_106f633ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106f63410; end: 106f63417; -[SCSpectaclesLookupTableExtractionInfo serialNumber] */

undefined8 FUN_106f63410(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f63418; end: 106f6341f; -[SCSpectaclesLookupTableExtractionInfo contentType] */

undefined8 FUN_106f63418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f63420; end: 106f6344f; -[SCSpectaclesLookupTableExtractionInfo .cxx_destruct] */

void FUN_106f63420(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f63450; end: 106f63543; -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler initWithAuxiliaryContentDirectory:mediaId:fileManager:] */

undefined1 *
FUN_106f63450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f7f48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010c25ce20(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f63544; end: 106f63557; -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler outputDepthDirectory] */

void FUN_106f63544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSURL_1126ae598,PTR_s_URLWithString__11254e6b8,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 106f63558; end: 106f635d3; -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler dataPathForCamera:dataSource:index:] */

void FUN_106f63558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010be01b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebc2a0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25ce00(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f635d4; end: 106f6365f; -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler depthProtobufWithError:] */

void FUN_106f635d4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bdfade0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64aa0(puVar1,param_2,param_1,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (*param_3 == 0) {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f63660; end: 106f636db; -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler createOutputDepthDirectoryWithError:] */

void FUN_106f63660(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte bStack_21;
  
  bStack_21 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfacc00(uVar1,param_2,*(undefined8 *)(param_1 + 8),&bStack_21);
  if (((uint)uVar1 == 0) || ((bStack_21 & 1) != 0)) {
    if (((uint)uVar1 & (uint)bStack_21 & 1) != 0) {
      return;
    }
  }
  else {
    func_0x00010c12cc40(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 8),0);
  }
  func_0x00010bf55d80(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 8),1,0,
                      param_3);
  return;
}



/* Entry: 106f636dc; end: 106f6374f; -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler writeDepthProtobuf:error:] */

undefined8
FUN_106f636dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdfade0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c14e040(param_3,param_2,param_1,1,param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}


