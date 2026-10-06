/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b72bc7c; end: 10b72bd2f;  */

void FUN_10b72bc7c(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010b76b26c();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((param_2 == -0x2af47b95) || (param_2 == 0x2894c23a)) {
    func_0x00010c067fc0(param_3);
    func_0x00010c0df780(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b72bd30; end: 10b72be7b; +[SCLensParser _parseSponsoredType:] */

undefined1 FUN_10b72bd30(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010b79d12c();
    if (lVar2 < 0xa28831b) {
      lVar3 = -0x3f29547e;
      uVar4 = 2;
      if (lVar2 != -0x72f9360) {
        uVar4 = 0;
      }
      uVar6 = 4;
      if (lVar2 != -0x1f800f39) {
        uVar6 = uVar4;
      }
      uVar4 = 8;
      if (lVar2 != -0x3f29547d) {
        uVar4 = uVar6;
      }
      lVar5 = -0x6d92dd4e;
      uVar6 = 3;
      uVar7 = 10;
      if (lVar2 != -0x416df918) {
        uVar7 = 0;
      }
    }
    else {
      lVar3 = 0x4403430b;
      uVar6 = 7;
      if (lVar2 != 0x55520945) {
        uVar6 = lVar2 == 0x627b7940;
      }
      uVar4 = 9;
      if (lVar2 != 0x4403430c) {
        uVar4 = uVar6;
      }
      lVar5 = 0xa28831b;
      uVar6 = 6;
      uVar1 = 5;
      if (lVar2 != 0x330f5559) {
        uVar1 = 0;
      }
      uVar7 = 0xb;
      if (lVar2 != 0x1e747abb) {
        uVar7 = uVar1;
      }
    }
    if (lVar2 != lVar5) {
      uVar6 = uVar7;
    }
    if (lVar2 <= lVar3) {
      uVar4 = uVar6;
    }
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10b72be7c; end: 10b72c017; +[SCLensParser _assetStorageOptionsWithManifestItemStorageOptions:assetId:lensId:assetSignature:] */

void FUN_10b72be7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_10b72c018;
    uStack_60 = 0x10b72c028;
    uStack_58 = 0;
    func_0x00010bf97e80(param_3);
    if (puStack_78[5] == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_50 = puStack_78[5];
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  lVar1 = 8;
  __Block_object_dispose(&uStack_80);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 10b72c018; end: 10b72c02f;  */

void FUN_10b72c018(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b72c030; end: 10b72c103;  */

void FUN_10b72c030(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010be45400();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126bb840;
    _objc_alloc();
    uVar3 = param_2;
    func_0x00010bfad3c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bf38a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056340();
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b72c104; end: 10b72c1c7; +[SCLensParser _isValidLNSAssetStorageOption:] */

long FUN_10b72c104(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf38a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar3 = 0;
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010bfad3c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar3 = 0;
      if (lVar1 != 0) {
        uVar2 = 0x12711;
        func_0x00010b789328(0x12711);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_3;
        func_0x00010c0ec560(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c0720c0();
        _objc_release(lVar1);
        _objc_release(uVar2);
      }
    }
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b72c1c8; end: 10b72c8db; +[SCLensParser _sponsoredSlugFromSOJUGeofilterResponse:] */

void FUN_10b72c1c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c07f2e0();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c24a620();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c104260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_3;
      func_0x00010c24a680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        uStack_70 = (undefined *)0x0;
      }
      else {
        lVar1 = param_3;
        func_0x00010c24a680();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf8ac40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar1);
        if (lVar2 == 0) {
          uStack_78 = (undefined *)0x0;
        }
        else {
          uStack_78 = PTR_PTR_1126de6d0;
          _objc_alloc();
          lVar1 = param_3;
          func_0x00010c24a680(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010bf8ac40();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c2be880();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_3;
          func_0x00010c24a680(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf8ac40();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c2beba0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c063600(uStack_78,param_2,lVar3,lVar6);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(lVar2);
          _objc_release(lVar1);
        }
        uStack_70 = PTR_PTR_1126de6d8;
        _objc_alloc();
        lVar1 = param_3;
        func_0x00010c24a680(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bfb3a80();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_3;
        func_0x00010c24a680(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c26c800();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_3;
        func_0x00010c24a680(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf40c40();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_3;
        func_0x00010c24a680(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bf8ac20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c013ac0(uStack_70,param_2,lVar2,lVar4,lVar6,lVar8,uStack_78);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_release(uStack_78);
      }
      lVar1 = param_3;
      func_0x00010c24a620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        puVar22 = (undefined *)0x0;
      }
      else {
        lVar1 = param_3;
        func_0x00010c24a620();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c29e100();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar1);
        if (lVar2 == 0) {
          uStack_78 = (undefined *)0x0;
        }
        else {
          uStack_78 = PTR_PTR_1126de6e0;
          _objc_alloc();
          lVar1 = param_3;
          func_0x00010c24a620();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010c29e100();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c2be880();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_3;
          func_0x00010c24a620();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c29e100();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c2beba0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = param_3;
          func_0x00010c24a620(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c29e100();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010c2a5040();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = param_3;
          func_0x00010c24a620(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010c29e100();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010bfe0640();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c063620(uStack_78,param_2,lVar3,lVar6,lVar9,lVar12);
          _objc_release(lVar12);
          _objc_release(lVar11);
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(lVar2);
          _objc_release(lVar1);
        }
        puVar22 = PTR_PTR_1126bb888;
        _objc_alloc();
        lVar1 = param_3;
        func_0x00010c24a620();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010beffa20();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_3;
        func_0x00010c24a620();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c104260();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_3;
        func_0x00010c24a620();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfe3c20();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_3;
        func_0x00010c24a620();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c2a0740();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = param_3;
        func_0x00010c24a620();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = param_3;
        func_0x00010c24a620();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010c24aae0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = param_3;
        func_0x00010c24a620();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar13;
        func_0x00010c24a240();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = param_3;
        func_0x00010c24a620();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar15;
        func_0x00010c26f0e0();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = param_3;
        func_0x00010c24a620();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = lVar17;
        func_0x00010c0b5480();
        _objc_retainAutoreleasedReturnValue();
        lVar19 = param_3;
        func_0x00010c24a620();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar19;
        func_0x00010c0b54a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c062080(puVar22,param_2,uStack_78,lVar2,lVar4,lVar6,lVar8,lVar10,lVar12,lVar14,
                            lVar16,lVar18,lVar20);
        _objc_release(lVar20);
        _objc_release(lVar19);
        _objc_release(lVar18);
        _objc_release(lVar17);
        _objc_release(lVar16);
        _objc_release(lVar15);
        _objc_release(lVar14);
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_release(uStack_78);
      }
      puVar21 = PTR_PTR_1126bb890;
      _objc_alloc(PTR_PTR_1126bb890);
      func_0x00010c04eb60();
      _objc_release(puVar22);
      _objc_release(uStack_70);
      goto LAB_10b72c8b0;
    }
  }
  puVar21 = (undefined *)0x0;
LAB_10b72c8b0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 10b72c8dc; end: 10b72cf5b; +[SCLensParser _unlockablesAttachmentFromSOJUUnlockablesAttachment:] */

void FUN_10b72c8dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar23 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0b4b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      uStack_70 = (undefined *)0x0;
    }
    else {
      uStack_70 = PTR_PTR_1126bb7e8;
      _objc_alloc();
      lVar1 = param_3;
      func_0x00010c0b4b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c29a460();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c0b4b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c29a900();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c0b4b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c29bbe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c060e60(uStack_70,param_2,lVar2,lVar4,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010c2a3bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      uStack_78 = (undefined *)0x0;
    }
    else {
      uStack_78 = PTR_PTR_1126bb7f0;
      _objc_alloc();
      lVar1 = param_3;
      func_0x00010c2a3bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c2a4480();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c2a3bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c22dfc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c062fa0(uStack_78,param_2,lVar2,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010bf054e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      uStack_80 = (undefined *)0x0;
    }
    else {
      uStack_80 = PTR_PTR_1126bb7f8;
      _objc_alloc();
      lVar1 = param_3;
      func_0x00010bf054e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf05ba0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bf054e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c06aee0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010bf054e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf02aa0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010bf054e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf052e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff3520(uStack_80,param_2,lVar2,lVar4,lVar6,lVar8);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar24 = (undefined *)0x0;
    }
    else {
      puVar24 = PTR_PTR_1126bb800;
      _objc_alloc();
      lVar1 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c28f280();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfeb020();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf06520();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bfeaf20();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c06aec0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c06aee0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf02a60();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010bf02ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar17;
      func_0x00010c269100();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar19;
      func_0x00010bf68380();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = param_3;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar21;
      func_0x00010bf67dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059e40(puVar24,param_2,lVar2,lVar4,lVar6,lVar8,lVar10,lVar12,lVar14,lVar16,lVar18
                          ,lVar20,lVar22);
      _objc_release(lVar22);
      _objc_release(lVar21);
      _objc_release(lVar20);
      _objc_release(lVar19);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    puVar23 = PTR_PTR_1126bb7e0;
    _objc_alloc(PTR_PTR_1126bb7e0);
    lVar1 = param_3;
    func_0x00010bf0d600(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf5d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c09e4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4cc0(puVar23,param_2,lVar1,uStack_70,uStack_78,lVar2,uStack_80,puVar24,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar24);
    _objc_release(uStack_80);
    _objc_release(uStack_78);
    _objc_release(uStack_70);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 10b72cf5c; end: 10b72cff7; +[SCLensParser _unlockablesCarouselGroupFromSOJUUnlockablesCarouselGroup:] */

void FUN_10b72cf5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bb808;
  puVar4 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010bfcef60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf32a40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0191e0(puVar1,param_2,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b72cff8; end: 10b72d11b; +[SCLensParser _dataFromSOJU:] */

void FUN_10b72cff8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if (((ulong)puVar2 & 1) != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    puVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    puVar1 = param_3;
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(param_3);
    if (puVar1 != (undefined *)0x0) {
      puVar1 = param_3;
      func_0x00010bf529e0();
      puVar2 = puVar1;
      _malloc();
      if (puVar1 != (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
        do {
          puVar3 = param_3;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bf358e0();
          puVar2[(long)puVar5] = (char)puVar4;
          _objc_release(puVar3);
          puVar5 = puVar5 + 1;
        } while (puVar1 != puVar5);
      }
      puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      goto LAB_10b72d0fc;
    }
  }
  _objc_retain(param_3);
  puVar1 = param_3;
LAB_10b72d0fc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b72d11c; end: 10b72d47f; -[SCSOJULensResourceParser resourceContainerFromSOJULensData:] */

undefined1 * FUN_10b72d11c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar1 = param_3;
  func_0x00010c096880();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    puVar9 = (undefined *)0x0;
    lVar12 = *plStack_130;
    lStack_148 = param_3;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(lVar1);
        }
        lVar10 = *(long *)(lStack_138 + lVar11 * 8);
        lVar3 = lVar10;
        func_0x00010c13b480();
        if (lVar3 == 0x12711) {
          puVar4 = PTR_PTR_1126b62d8;
          _objc_opt_new();
          lVar3 = lVar10;
          func_0x00010bf096a0(lVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c2bbd60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          _objc_release(lVar3);
          puVar4 = puVar5;
          func_0x00010c2bbd20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          func_0x00010bf38a80(lVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c2aa6a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          _objc_release(lVar10);
          puVar4 = puVar5;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          if (puVar9 == (undefined *)0x0) {
            _objc_retain(puVar4);
            puVar9 = puVar4;
          }
          _objc_release(puVar4);
          _objc_release(puVar5);
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    _objc_release(lVar1);
    param_3 = lStack_148;
    if (puVar9 != (undefined *)0x0) goto LAB_10b72d3e4;
  }
  lVar1 = param_3;
  func_0x00010c094d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b72dd5c();
  _objc_release(lVar1);
  puVar9 = PTR_PTR_1126b62d8;
  _objc_opt_new();
  lVar1 = param_3;
  func_0x00010c094d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar9;
  func_0x00010c2bbd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(lVar1);
  puVar9 = puVar4;
  func_0x00010c2bbd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar1 = param_3;
  func_0x00010c23c2c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar9;
  func_0x00010c2b9000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(lVar1);
  puVar9 = puVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
LAB_10b72d3e4:
  puVar4 = PTR_PTR_1126b62e0;
  _objc_alloc(PTR_PTR_1126b62e0);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f8 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c03faa0(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar9);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    plVar6 = &lStack_180;
    pcStack_158 = FUN_10b72d480;
    puStack_170 = puVar9;
    lStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    puStack_178 = PTR_PTR_11270a348;
    lStack_180 = lVar1;
    _objc_msgSendSuper2(&lStack_180,PTR_s_init_1125d9248);
    if (plVar6 != (long *)0x0) {
      _objc_retain(puVar8);
      uVar7 = *(undefined8 *)((long)plVar6 + 8);
      *(undefined **)((long)plVar6 + 8) = puVar8;
      _objc_release(uVar7);
    }
    _objc_release(puVar8);
    return (undefined1 *)plVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 10b72d480; end: 10b72d4f3; -[SCAssetValidator initWithLensSecurity:] */

undefined1 * FUN_10b72d480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a348;
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



/* Entry: 10b72d4f4; end: 10b72d63b; -[SCAssetValidator isAssetValidByChecksum:error:] */

undefined * FUN_10b72d4f4(ulong param_1,undefined8 param_2,undefined *param_3,ulong *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf38aa0(param_3,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bdda260(param_1,param_2,param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    if (param_4 != (ulong *)0x0) {
      func_0x00010bded780(param_1,param_2,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = param_1;
    }
    puVar3 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c08fa60();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar4 = param_3;
      func_0x00010c28f340(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c08fa60();
      puVar6 = (undefined *)(ulong)(puVar6 != (undefined *)0x0);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
  }
  else {
    puVar3 = PTR_PTR_1126c3450;
    func_0x00010beec6e0(PTR_PTR_1126c3450,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b7fb8;
    func_0x00010c298860(PTR_PTR_1126b7fb8,param_2,puVar1,puVar3,param_4);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b72d63c; end: 10b72d70f; -[SCAssetValidator _canValidateAsset:checksum:] */

byte FUN_10b72d63c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    bVar1 = lVar5 != 0;
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c08fa60(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar2 != 0 & bVar1;
}



/* Entry: 10b72d710; end: 10b72d8d3; -[SCAssetValidator _createErrorForAsset:checksum:] */

/* WARNING: Type propagation algorithm not settling */

undefined ** FUN_10b72d710(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_1d0;
  ulong auStack_1c8 [3];
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [128];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar17 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar17;
  func_0x00010c08fa60();
  ppuVar8 = &PTR____CFConstantStringClassReference_110f773d8;
  if (lVar2 != 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_retain(ppuVar8);
  _objc_release(lVar17);
  lVar17 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar17;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  ppuVar9 = &PTR____CFConstantStringClassReference_110f773f8;
  if (lVar3 != 0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_retain(ppuVar9);
  _objc_release(lVar2);
  _objc_release(lVar17);
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f77418);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110f773b8;
  puVar16 = (undefined8 *)0x0;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
    return ppuVar6;
  }
  ___stack_chk_fail();
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_new();
  ppuVar9 = ppuVar8;
  func_0x00010c08fa60();
  if (ppuVar9 != (undefined **)0x0) {
    puVar5 = PTR_PTR_1126c3450;
    func_0x00010beec6e0(PTR_PTR_1126c3450,param_2,ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)PTR__NSURLNameKey_11034ab20;
    uVar21 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f0 = uVar20;
    uStack_e8 = uVar21;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_f0,2);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf98160(puVar11,param_2,puVar10,puVar18,0,&PTR___NSConcreteGlobalBlock_110d5a970);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    _objc_release(puVar11);
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    auStack_1c8[2] = 0;
    auStack_1c8[1] = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    _objc_retain(puVar12);
    puVar11 = puVar12;
    func_0x00010bf52a60(puVar12,param_2,auStack_1c8 + 1,auStack_170,0x10);
    if (puVar11 != (undefined *)0x0) {
      lVar17 = *plStack_1b0;
      do {
        puVar18 = (undefined *)0x0;
        do {
          if (*plStack_1b0 != lVar17) {
            _objc_enumerationMutation(puVar12);
          }
          uVar19 = *(undefined8 *)(auStack_1c8[2] + (long)puVar18 * 8);
          auStack_1c8[0] = 0;
          uVar13 = uVar19;
          func_0x00010bfc99e0(uVar19,param_2,auStack_1c8,uVar21,0);
          uVar1 = auStack_1c8[0];
          _objc_retain(auStack_1c8[0]);
          if (((int)uVar13 != 0) && (uVar14 = uVar1, func_0x00010bf1f3c0(), (uVar14 & 1) == 0)) {
            uStack_1d0 = 0;
            func_0x00010bfc99e0(uVar19,param_2,&uStack_1d0,uVar20,0);
            if ((int)uVar19 != 0) {
              func_0x00010bf06ba0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dcf4b8);
            }
          }
          _objc_release(uVar1);
          puVar18 = puVar18 + 1;
        } while (puVar11 != puVar18);
        puVar11 = puVar12;
        func_0x00010bf52a60(puVar12,param_2,auStack_1c8 + 1,auStack_170,0x10);
      } while (puVar11 != (undefined *)0x0);
    }
    _objc_release(puVar12);
    puVar18 = PTR__OBJC_CLASS___NSError_1126ae858;
    uVar19 = *puVar16;
    _objc_retain(uVar19);
    uVar20 = uVar19;
    func_0x00010bf87dc0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar19;
    func_0x00010bf3ec40(uVar19);
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uStack_180 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    uVar13 = uVar19;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar11,param_2,&PTR____CFConstantStringClassReference_110f77438);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_178 = puVar11;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_178,&uStack_180,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar18,param_2,uVar20,uVar21,puVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar11);
    _objc_release(uVar13);
    _objc_release(uVar20);
    _objc_retainAutorelease(puVar18);
    *puVar16 = puVar18;
    _objc_release();
    _objc_release(uVar19);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(ppuVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  return (undefined **)0x1;
}



/* Entry: 10b72d8d4; end: 10b72dc8f; -[SCAssetValidator _listAssetContentsForAsset:error:] */

/* WARNING: Type propagation algorithm not settling */

long FUN_10b72d8d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_160;
  ulong auStack_158 [3];
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [128];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_new();
  lVar11 = lVar2;
  func_0x00010c08fa60();
  if (lVar11 != 0) {
    puVar4 = PTR_PTR_1126c3450;
    func_0x00010beec6e0(PTR_PTR_1126c3450,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)PTR__NSURLNameKey_11034ab20;
    uVar15 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar14;
    uStack_78 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf98160(puVar6,param_2,puVar5,puVar12,0,&PTR___NSConcreteGlobalBlock_110d5a970);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar6);
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    auStack_158[2] = 0;
    auStack_158[1] = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    _objc_retain(puVar7);
    puVar6 = puVar7;
    func_0x00010bf52a60(puVar7,param_2,auStack_158 + 1,auStack_100,0x10);
    if (puVar6 != (undefined *)0x0) {
      lVar11 = *plStack_140;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_140 != lVar11) {
            _objc_enumerationMutation(puVar7);
          }
          uVar13 = *(undefined8 *)(auStack_158[2] + (long)puVar12 * 8);
          auStack_158[0] = 0;
          uVar8 = uVar13;
          func_0x00010bfc99e0(uVar13,param_2,auStack_158,uVar15,0);
          uVar1 = auStack_158[0];
          _objc_retain(auStack_158[0]);
          if (((int)uVar8 != 0) && (uVar9 = uVar1, func_0x00010bf1f3c0(), (uVar9 & 1) == 0)) {
            uStack_160 = 0;
            func_0x00010bfc99e0(uVar13,param_2,&uStack_160,uVar14,0);
            if ((int)uVar13 != 0) {
              func_0x00010bf06ba0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dcf4b8);
            }
          }
          _objc_release(uVar1);
          puVar12 = puVar12 + 1;
        } while (puVar6 != puVar12);
        puVar6 = puVar7;
        func_0x00010bf52a60(puVar7,param_2,auStack_158 + 1,auStack_100,0x10);
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar7);
    puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
    uVar13 = *param_4;
    _objc_retain(uVar13);
    uVar14 = uVar13;
    func_0x00010bf87dc0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010bf3ec40(uVar13);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uStack_110 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    uVar8 = uVar13;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110f77438);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_108 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_108,&uStack_110,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar12,param_2,uVar14,uVar15,puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(uVar8);
    _objc_release(uVar14);
    _objc_retainAutorelease(puVar12);
    *param_4 = puVar12;
    _objc_release();
    _objc_release(uVar13);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar2;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 10b72dc90; end: 10b72dc97;  */

undefined8 FUN_10b72dc90(void)

{
  return 1;
}



/* Entry: 10b72dc98; end: 10b72dcc7; -[SCAssetValidator .cxx_destruct] */

void FUN_10b72dc98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b72dcc8; end: 10b72dd5b;  */

void FUN_10b72dcc8(undefined *param_1,long param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = param_1;
    if (param_2 - 3U < 2) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
    }
    _objc_retain(puVar1);
    param_1 = puVar1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b72dd5c; end: 10b72de93;  */

undefined8 FUN_10b72dd5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f3ecb8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf4bb00(param_1,param_2,puVar1);
  if ((int)uVar5 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f3ecb8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bf4bb00(param_1,param_2,puVar2);
    if ((int)uVar5 == 0) {
      uVar5 = param_1;
      func_0x00010c0899c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c0f58c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(puVar2);
      _objc_release(puVar1);
      uVar5 = 3;
      if ((int)uVar4 == 0) {
        uVar5 = 0;
      }
      goto LAB_10b72de70;
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  uVar5 = 3;
LAB_10b72de70:
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 10b72de94; end: 10b72df27; -[SCLensSecurity initWithUserPreferences:] */

undefined8 FUN_10b72de94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bbaf0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c05cbe0(puVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
  func_0x00010c0257a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return param_1;
}



/* Entry: 10b72df28; end: 10b72e00f; -[SCLensSecurity verifyResource:withContentPath:completion:] */

void FUN_10b72df28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b72e010;
  puStack_70 = &UNK_110875f70;
  uStack_48 = 0;
  lStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b72e010; end: 10b72e107;  */

void FUN_10b72e010(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010c298ac0(uVar3,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      &uStack_38,&uStack_40);
  uVar2 = uStack_38;
  _objc_retain(uStack_38);
  uVar1 = uStack_40;
  _objc_retain(uStack_40);
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10b72e108;
    puStack_68 = &UNK_110864938;
    _objc_retain(lVar4);
    uStack_48 = (undefined1)uVar3;
    lStack_50 = lVar4;
    _objc_retain(uVar2);
    uStack_60 = uVar2;
    _objc_retain(uVar1);
    uStack_58 = uVar1;
    func_0x000107c312d0("APPSTORE",&puStack_80);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(lStack_50);
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b72e108; end: 10b72e11f;  */

void FUN_10b72e108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b72e11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b72e120; end: 10b72e29f; -[SCLensSecurity verifyContentAtPathValid:completion:] */

void FUN_10b72e120(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10b72e1d8;
  puStack_58 = &UNK_110845188;
  uStack_38 = 0;
  lStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b72e2a0; end: 10b72e2b3;  */

void FUN_10b72e2a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b72e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b72e2b4; end: 10b72e2bb; -[SCLensSecurity isAllowedToRequestContentWithUrlString:checksum:] */

void FUN_10b72e2b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_isAllowedToRequestContentWithUrl_1125f89d8);
  return;
}



/* Entry: 10b72e2bc; end: 10b72e2eb; -[SCLensSecurity .cxx_destruct] */

void FUN_10b72e2bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b72e2ec; end: 10b72e3c3; -[SCLensStoredResource initWithContentId:contentPath:lensResource:] */

undefined1 *
FUN_10b72e2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_11270a358;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b72e3c4; end: 10b72e3e7; -[SCLensStoredResource copyWithZone:] */

undefined8 FUN_10b72e3c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b72e3e8; end: 10b72e4bf; -[SCLensStoredResource initWithCoder:] */

undefined1 * FUN_10b72e3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a358;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b72e4c0; end: 10b72e533; -[SCLensStoredResource encodeWithCoder:] */

void FUN_10b72e4c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e1a878);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f77478);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f77498);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b72e534; end: 10b72e53b; -[SCLensStoredResource preferFasterCoding] */

undefined8 FUN_10b72e534(void)

{
  return 1;
}



/* Entry: 10b72e53c; end: 10b72e597; -[SCLensStoredResource encodeWithFasterCoder:] */

void FUN_10b72e53c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b72e598; end: 10b72e62b; -[SCLensStoredResource decodeWithFasterDecoder:] */

void FUN_10b72e598(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b72e62c; end: 10b72e6d3; -[SCLensStoredResource setObject:forUInt64Key:] */

void FUN_10b72e62c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0x899c5fb6a313d) {
    lVar2 = 8;
  }
  else if (param_4 == 0xfc97940e6caee8) {
    lVar2 = 0x18;
  }
  else {
    if (param_4 != 0xaa913c5fdfa58d) goto LAB_10b72e6c0;
    lVar2 = 0x10;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_10b72e6c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b72e6d4; end: 10b72e6e7; +[SCLensStoredResource fasterCodingVersion] */

undefined8 FUN_10b72e6d4(void)

{
  return 0x61d15c9e9c1d6b06;
}



/* Entry: 10b72e6e8; end: 10b72e6f3; +[SCLensStoredResource fasterCodingKeys] */

undefined8 FUN_10b72e6e8(void)

{
  return 0x1133c91b0;
}



/* Entry: 10b72e6f4; end: 10b72e70f; -[SCLensStoredResource isEqual:] */

undefined8 * FUN_10b72e6f4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar4 = (long *)0x1137f8f70;
  if (param_1 == param_3) {
    return (undefined8 *)0x1;
  }
  lVar3 = 3;
  lVar5 = 3;
  _objc_opt_class();
  puVar2 = param_3;
  func_0x00010c077980();
  if ((int)puVar2 != 0) {
    if ((bRam00000001137f8f68 & 1) == 0) {
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
          *(char **)(lVar7 * 8 + 0x1137f8f70) = pcVar6;
          lVar7 = lVar7 + 1;
        }
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
      _free(puVar2);
      DataMemoryBarrier(2,3);
      bRam00000001137f8f68 = 1;
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



/* Entry: 10b72e710; end: 10b72e723; -[SCLensStoredResource hash] */

ulong FUN_10b72e710(undefined8 *param_1)

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
  
  plVar5 = (long *)0x1137f8f70;
  if ((bRam00000001137f8f68 & 1) == 0) {
    puVar1 = param_1;
    _objc_opt_class();
    _class_copyIvarList();
    lVar7 = 0;
    lVar9 = 3;
    puVar8 = puVar1;
    do {
      pcVar6 = (char *)*puVar8;
      pcVar2 = pcVar6;
      _ivar_getTypeEncoding();
      if (*pcVar2 == '@') {
        _ivar_getOffset();
        *(char **)(lVar7 * 8 + 0x1137f8f70) = pcVar6;
        lVar7 = lVar7 + 1;
      }
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
    _free(puVar1);
    DataMemoryBarrier(2,3);
    bRam00000001137f8f68 = 1;
  }
  uVar3 = *(ulong *)((long)param_1 + lRam00000001137f8f70);
  func_0x00010bfde980(uVar3);
  lVar7 = 2;
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



/* Entry: 10b72e724; end: 10b72e72b; -[SCLensStoredResource contentId] */

undefined8 FUN_10b72e724(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b72e72c; end: 10b72e733; -[SCLensStoredResource contentPath] */

undefined8 FUN_10b72e72c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b72e734; end: 10b72e73b; -[SCLensStoredResource lensResource] */

undefined8 FUN_10b72e734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b72e73c; end: 10b72e777; -[SCLensStoredResource .cxx_destruct] */

void FUN_10b72e73c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b72e778; end: 10b72e857; +[SCLensStoredResourceBuilder withLensStoredResource:] */

void FUN_10b72e778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126e06a0;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010bf4c700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf4cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c096820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b72e858; end: 10b72e88b; -[SCLensStoredResourceBuilder build] */

void FUN_10b72e858(void)

{
  _objc_alloc(PTR_PTR_1126df9c8);
  func_0x00010c003580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b72e88c; end: 10b72e8c3; -[SCLensStoredResourceBuilder setContentId:] */

long FUN_10b72e88c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b72e8c4; end: 10b72e8fb; -[SCLensStoredResourceBuilder setContentPath:] */

long FUN_10b72e8c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b72e8fc; end: 10b72e933; -[SCLensStoredResourceBuilder setLensResource:] */

long FUN_10b72e8fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b72e934; end: 10b72e96f; -[SCLensStoredResourceBuilder .cxx_destruct] */

void FUN_10b72e934(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b72e970; end: 10b72e9bb; -[SCLensSynchronousSecurity init] */

undefined8 FUN_10b72e970(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c05cbe0(param_1,param_2,0,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10b72e9bc; end: 10b72e9cb; -[SCLensSynchronousSecurity areFailuresStored] */

bool FUN_10b72e9bc(long param_1)

{
  return *(long *)(param_1 + 8) != 0;
}



/* Entry: 10b72e9cc; end: 10b72eb73; -[SCLensSynchronousSecurity verifyResource:withContentPath:checksum:error:] */

undefined8
FUN_10b72e9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b7fb8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfdea60(puVar1,param_2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c096820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23c2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf4c700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c096820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bdc3360();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c096820(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar8 = uVar7;
  func_0x00010bf38a80(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010bee8440(param_1,param_2,uVar3,uVar4,puVar1,uVar6,uVar8,param_6);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (param_5 != (undefined8 *)0x0) {
    _objc_retainAutorelease(puVar1);
    *param_5 = puVar1;
  }
  func_0x00010bea2f80(param_1,param_2,uVar9,param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  return uVar9;
}



/* Entry: 10b72eb74; end: 10b72ecf3; -[SCLensSynchronousSecurity verifyContentAtPathValid:error:] */

undefined *
FUN_10b72eb74(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 *param_4,
             undefined *param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c08fa60();
  if (ppuVar1 != (undefined **)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    ppuVar4 = param_3;
    func_0x00010bfacbe0();
    _objc_release(puVar6);
    if (((ulong)puVar2 & 1) != 0) {
      ppuVar1 = param_3;
      func_0x00010c25ce00(param_3,param_2,&PTR____CFConstantStringClassReference_110f77538);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      ppuVar4 = ppuVar1;
      func_0x00010bfacbe0();
      _objc_release(puVar2);
      _objc_release(ppuVar1);
      goto LAB_10b72ecb4;
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar6 = (undefined *)0x0;
  if (param_4 != (undefined8 *)0x0) {
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110f77558;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&uStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110f5dd58;
    puVar5 = (undefined8 *)0x4;
    param_5 = puVar6;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = puVar2;
    _objc_release(puVar6);
    puVar6 = (undefined *)0x0;
  }
LAB_10b72ecb4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(param_5);
  puVar6 = (undefined *)0x0;
  if ((ppuVar4 != (undefined **)0x0) && (param_5 != (undefined *)0x0)) {
    puVar6 = PTR_PTR_1126b7fb8;
    func_0x00010c298880(PTR_PTR_1126b7fb8,param_2,param_5,ppuVar4,param_6);
    puVar3 = puVar5;
    func_0x00010c08fa60();
    if ((puVar3 != (undefined8 *)0x0) &&
       (ppuVar4 = param_3, func_0x00010bf09940(), (int)ppuVar4 != 0)) {
      ppuVar4 = param_3;
      func_0x00010bee7d80(param_3,param_2,puVar5,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee3220(param_3,param_2,ppuVar4,puVar6);
      _objc_release(ppuVar4);
    }
  }
  _objc_release(param_5);
  _objc_release(puVar5);
  return puVar6;
}



/* Entry: 10b72ecf4; end: 10b72edc7; -[SCLensSynchronousSecurity verifyData:fromURL:checksum:error:] */

undefined *
FUN_10b72ecf4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
             undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = (undefined *)0x0;
  if ((param_3 != 0) && (param_5 != 0)) {
    puVar3 = PTR_PTR_1126b7fb8;
    func_0x00010c298880(PTR_PTR_1126b7fb8,param_2,param_5,param_3,param_6);
    lVar1 = param_4;
    func_0x00010c08fa60();
    if ((lVar1 != 0) && (uVar2 = param_1, func_0x00010bf09940(), (int)uVar2 != 0)) {
      uVar2 = param_1;
      func_0x00010bee7d80(param_1,param_2,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee3220(param_1,param_2,uVar2,puVar3);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 10b72edc8; end: 10b72ef5f; -[SCLensSynchronousSecurity isAllowedToRequestContentWithUrlString:checksum:] */

bool FUN_10b72edc8(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if ((lVar2 == 0) || (lVar2 = param_3, func_0x00010c08fa60(), lVar2 == 0)) {
    bVar1 = false;
  }
  else {
    uVar3 = param_1;
    func_0x00010bf09940();
    if ((int)uVar3 == 0) {
      bVar1 = true;
    }
    else {
      uVar3 = param_1;
      func_0x00010bee7d80(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c296c00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = uVar5;
      func_0x00010bf529e0();
      if (uVar4 < 0x1f) {
        uVar4 = uVar5;
        func_0x00010bf529e0();
        if (uVar4 < 2) {
          bVar1 = true;
        }
        else {
          uVar4 = uVar5;
          func_0x00010c089820(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf529e0(uVar5);
          uVar7 = uVar4;
          func_0x00010bf64e40((double)(uVar6 * 0xe10),uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          lVar8 = *(long *)(param_1 + 0x10);
          func_0x00010bf5e5e0(lVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar8;
          func_0x00010bf433a0();
          bVar1 = lVar2 == 1;
          _objc_release(lVar8);
          _objc_release(uVar7);
        }
      }
      else {
        bVar1 = false;
      }
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b72ef60; end: 10b72f043; -[SCLensSynchronousSecurity setValidationFailures:] */

void FUN_10b72ef60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdccea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8));
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    uVar8 = *(ulong *)(puVar2 + 8);
    puVar3 = PTR_PTR_1126e06a8;
    _objc_opt_class(PTR_PTR_1126e06a8);
    _objc_opt_isKindOfClass(uVar8,puVar3);
    puVar3 = PTR____NSDictionary0__struct_11034ab58;
    if ((uVar8 & 1) != 0) {
      puVar4 = *(undefined **)(puVar2 + 8);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      puVar5 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar3);
      puVar3 = PTR____NSDictionary0__struct_11034ab58;
      if (((ulong)puVar5 & 1) != 0) {
        puVar5 = puVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdccea0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        puVar3 = PTR____NSDictionary0__struct_11034ab58;
        if ((int)puVar6 != 0) {
          puVar2 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          puVar6 = puVar2;
          _objc_opt_isKindOfClass(puVar2,puVar3);
          puVar3 = PTR____NSDictionary0__struct_11034ab58;
          if (((ulong)puVar6 & 1) != 0) {
            _objc_retain(puVar2);
            puVar3 = puVar2;
          }
          _objc_release(puVar2);
        }
        _objc_release(puVar5);
      }
      _objc_release(puVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10b72f044; end: 10b72f19f; -[SCLensSynchronousSecurity validationFailures] */

void FUN_10b72f044(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  puVar1 = PTR_PTR_1126e06a8;
  _objc_opt_class(PTR_PTR_1126e06a8);
  _objc_opt_isKindOfClass(uVar6,puVar1);
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if ((uVar6 & 1) != 0) {
    puVar2 = *(undefined **)(param_1 + 8);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar1);
    puVar1 = PTR____NSDictionary0__struct_11034ab58;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdccea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0720c0();
      _objc_release(param_1);
      puVar1 = PTR____NSDictionary0__struct_11034ab58;
      if ((int)puVar4 != 0) {
        puVar4 = puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        puVar5 = puVar4;
        _objc_opt_isKindOfClass(puVar4,puVar1);
        puVar1 = PTR____NSDictionary0__struct_11034ab58;
        if (((ulong)puVar5 & 1) != 0) {
          _objc_retain(puVar4);
          puVar1 = puVar4;
        }
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b72f1a0; end: 10b72f37b; -[SCLensSynchronousSecurity _verifyBase64Signature:contentId:contentHash:contentUrlString:targetHash:error:] */

undefined *
FUN_10b72f1a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
             long param_6,long param_7,long *param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_8 != (long *)0x0) {
LAB_10b72f304:
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010c14d540(PTR__OBJC_CLASS___NSError_1126ae858,param_2,param_4,param_7,param_5,
                          param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar5 = (undefined *)0x0;
      *param_8 = (long)puVar3;
      goto LAB_10b72f334;
    }
  }
  else {
    lVar1 = param_5;
    func_0x00010c08fa60();
    if ((lVar1 == 0) || (lVar1 = param_3, func_0x00010c08fa60(), lVar1 == 0)) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar1 = param_5;
      func_0x00010c25ce40(param_5,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126e06b0;
      uVar2 = param_1;
      func_0x00010be83be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2985e0(puVar5,param_2,param_3,lVar1,uVar2,param_8);
      _objc_release(uVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_7;
    func_0x00010c08fa60();
    if (((lVar1 != 0) && (lVar1 = param_6, func_0x00010c08fa60(), lVar1 != 0)) &&
       (uVar2 = param_1, func_0x00010bf09940(), (int)uVar2 != 0)) {
      uVar2 = param_1;
      func_0x00010bee7d80(param_1,param_2,param_6,param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee3220(param_1,param_2,uVar2,puVar5);
      _objc_release(uVar2);
    }
    uVar4 = (uint)puVar5;
    if (param_8 == (long *)0x0) {
      uVar4 = 1;
    }
    if ((uVar4 & 1) != 0) goto LAB_10b72f334;
    if (*param_8 == 0) goto LAB_10b72f304;
  }
  puVar5 = (undefined *)0x0;
LAB_10b72f334:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b72f37c; end: 10b72f543; -[SCLensSynchronousSecurity _updateValidationFailuresForKey:isValid:] */

void FUN_10b72f37c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  puVar1 = param_1;
  func_0x00010c296c00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  if ((int)param_4 == 0) {
    puVar1 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    if (puVar1 == (undefined *)0x0) {
      func_0x00010bf5e5e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_50 = uVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
    }
    else {
      func_0x00010bf5e5e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bf09f60(puVar1,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(uVar5);
    }
    lVar7 = param_3;
    func_0x00010c1d0640(puVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c12d3e0(puVar2,param_2,param_3);
  }
  puVar1 = puVar2;
  func_0x00010bf51e00();
  puVar3 = puVar1;
  func_0x00010c2200c0(param_1);
  iVar6 = (int)puVar3;
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  _objc_retain(lVar7);
  lVar4 = lVar7;
  func_0x00010c08fa60();
  if (lVar4 == 0) goto LAB_10b72f700;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfacbe0();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) goto LAB_10b72f700;
  lVar4 = lVar7;
  func_0x00010c25ce00(lVar7,param_2,&PTR____CFConstantStringClassReference_110f77538);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (iVar6 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfacbe0();
    _objc_release(puVar1);
    if ((int)puVar2 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc40();
      goto LAB_10b72f6f0;
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    func_0x00010c085d60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010bf5e5e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d400(puVar2,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110f77578);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf64920(puVar1,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf561e0();
    _objc_release(puVar3);
    _objc_release(puVar2);
LAB_10b72f6f0:
    _objc_release(puVar1);
  }
  _objc_release(lVar4);
LAB_10b72f700:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 10b72f544; end: 10b72f71f; -[SCLensSynchronousSecurity _setContentValid:atPath:] */

void FUN_10b72f544(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) goto LAB_10b72f700;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfacbe0();
  _objc_release(puVar2);
  if ((int)puVar3 == 0) goto LAB_10b72f700;
  lVar1 = param_4;
  func_0x00010c25ce00(param_4,param_2,&PTR____CFConstantStringClassReference_110f77538);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfacbe0();
    _objc_release(puVar2);
    if ((int)puVar3 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc40();
      goto LAB_10b72f6f0;
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    func_0x00010c085d60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf5e5e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c25d400(puVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110f77578);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf64920(puVar2,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf561e0();
    _objc_release(puVar5);
    _objc_release(puVar3);
LAB_10b72f6f0:
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
LAB_10b72f700:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b72f720; end: 10b72f7b3; -[SCLensSynchronousSecurity _appVersion] */

void FUN_10b72f720(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b72f7b4; end: 10b72f7bf; -[SCLensSynchronousSecurity _publicKey] */

undefined ** FUN_10b72f7b4(void)

{
  return &PTR____CFConstantStringClassReference_110f77518;
}



/* Entry: 10b72f7c0; end: 10b72f7cb; -[SCLensSynchronousSecurity _validationFailureKeyWithUrlString:checksum:] */

void FUN_10b72f7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringByAppendingString__112674db8,param_4);
  return;
}



/* Entry: 10b72f7cc; end: 10b72f7fb; -[SCLensSynchronousSecurity .cxx_destruct] */

void FUN_10b72f7cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b72f7fc; end: 10b72f86f; -[SCLensValidator initWithLensSecurity:] */

undefined1 * FUN_10b72f7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a368;
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



/* Entry: 10b72f870; end: 10b72fa3f; -[SCLensValidator _canValidateLens:withError:] */

undefined8 FUN_10b72f870(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf4cf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c13b280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c079580();
  if ((((((uVar3 & 1) == 0) && (uVar3 = param_3, func_0x00010c081dc0(), (uVar3 & 1) == 0)) &&
       (uVar3 = param_3, func_0x00010c076ce0(), (uVar3 & 1) == 0)) &&
      ((uVar3 = param_3, func_0x00010c27dd80(), uVar3 != 0xb &&
       (uVar3 = param_3, func_0x00010c072c60(), (uVar3 & 1) == 0)))) &&
     (uVar3 = param_3, func_0x00010c070f60(), (uVar3 & 1) == 0)) {
    uVar3 = param_3;
    func_0x00010c072b00();
    uVar9 = (uint)uVar3 ^ 1;
  }
  else {
    uVar9 = 0;
  }
  uVar3 = uVar4;
  func_0x00010c27dd80();
  if (uVar4 == 0) {
LAB_10b72f9cc:
    if (param_4 == (undefined8 *)0x0) {
LAB_10b72f9f8:
      uVar8 = 0;
      goto LAB_10b72f9fc;
    }
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010c14d560(PTR__OBJC_CLASS___NSError_1126ae858,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = uVar4;
    func_0x00010c23c2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c08fa60();
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010c27dd80();
    uVar1 = uVar5 == 0 & uVar9;
    if (((param_3 != 0) && (((uVar3 != 3 && uVar6 == 0) & uVar9) == 0)) && (uVar1 == 0)) {
      uVar8 = 1;
      goto LAB_10b72f9fc;
    }
    if (uVar1 == 0) goto LAB_10b72f9cc;
    func_0x00010c0a9820(param_1,param_2,param_3);
    if (param_4 == (undefined8 *)0x0) goto LAB_10b72f9f8;
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010c14d5a0(PTR__OBJC_CLASS___NSError_1126ae858,param_2,uVar4,0,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autorelease();
  uVar8 = 0;
  *param_4 = puVar7;
LAB_10b72f9fc:
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 10b72fa40; end: 10b72fdc3; -[SCLensValidator validateLens:completion:] */

void FUN_10b72fa40(ulong param_1,undefined8 param_2,ulong param_3,undefined *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010bf4cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c13b280();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uStack_68 = 0;
  uVar3 = param_1;
  func_0x00010bdda280();
  uVar1 = uStack_68;
  _objc_retain(uStack_68);
  if ((uVar3 & 1) == 0) {
    if (param_4 == (undefined *)0x0) goto LAB_10b72fd58;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10b72fdc4;
    puStack_80 = &UNK_11084aaa8;
    _objc_retain(param_4);
    puStack_70 = param_4;
    _objc_retain(uVar1);
    uStack_78 = uVar1;
    func_0x000107c312cc("APPSTORE",&puStack_98);
    _objc_release(uStack_78);
    puVar6 = puStack_70;
  }
  else {
    uVar3 = uVar2;
    func_0x00010c08fa60();
    if ((uVar3 == 0) || (uVar3 = uVar2, func_0x00010bf4bb00(), (int)uVar3 == 0)) {
      uVar3 = uVar4;
      func_0x00010c27dd80();
      uVar5 = param_3;
      func_0x00010c080040();
      if (((uVar5 & 1) == 0) && ((uVar5 = uVar2, func_0x00010c08fa60(), uVar3 != 3 && (uVar5 != 0)))
         ) {
        puVar6 = PTR_PTR_1126df9c8;
        _objc_alloc();
        uVar3 = param_3;
        func_0x00010c094540(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c003580();
        _objc_release(uVar3);
        _objc_initWeak(auStack_f0,param_1);
        uVar8 = *(undefined8 *)(param_1 + 8);
        puVar7 = puVar6;
        func_0x00010bf4cf00(puVar6);
        _objc_retainAutoreleasedReturnValue();
        uStack_f8 = 0;
        _objc_copyWeak(auStack_100,auStack_f0);
        _objc_retain(param_3);
        _objc_retain(puVar6);
        _objc_retain(param_4);
        func_0x00010c298ae0(uVar8);
        _objc_release(puVar7);
        _objc_release(param_4);
        _objc_release(puVar6);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_100);
        _objc_destroyWeak(auStack_f0);
      }
      else {
        if (param_4 == (undefined *)0x0) goto LAB_10b72fd58;
        puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_e0 = 0xc2000000;
        uStack_d8 = 0x10b72fde4;
        puStack_d0 = &UNK_110849530;
        _objc_retain(param_4);
        puStack_c8 = param_4;
        func_0x000107c312cc("APPSTORE",&puStack_e8);
        puVar6 = puStack_c8;
      }
    }
    else {
      if (param_4 == (undefined *)0x0) goto LAB_10b72fd58;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      uStack_b0 = 0x10b72fdd4;
      puStack_a8 = &UNK_110849530;
      _objc_retain(param_4);
      puStack_a0 = param_4;
      func_0x000107c312cc("APPSTORE",&puStack_c0);
      puVar6 = puStack_a0;
    }
  }
  _objc_release(puVar6);
LAB_10b72fd58:
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b72fdc4; end: 10b72fdf3;  */

void FUN_10b72fdc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b72fdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b72fdf4; end: 10b72fe73;  */

void FUN_10b72fdf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c114780();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b72fe74; end: 10b73003b; -[SCLensValidator processContentVerificationResponseWithLens:result:checksum:error:storedResource:completion:] */

void FUN_10b72fe74(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_6);
  puVar1 = param_6;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0720c0();
  puVar8 = param_6;
  if ((int)puVar2 != 0) {
    puVar3 = param_6;
    func_0x00010bf3ec40();
    _objc_release(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar3 != (undefined *)0x2) goto LAB_10b72ffdc;
    puVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_7;
    func_0x00010c096820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf38a80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_7;
    func_0x00010c096820(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c23c2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d540(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar8 = puVar2;
  }
  _objc_release(puVar1);
LAB_10b72ffdc:
  if (param_8 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,param_6);
  }
  _objc_release(puVar8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b73003c; end: 10b73005b; -[SCLensValidator logLensWithUnknownResource:] */

void FUN_10b73003c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf4cf00(param_3);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b73005c; end: 10b730063; -[SCLensValidator _getLensContentFileAttributesListRecursively:] */

undefined8 FUN_10b73005c(void)

{
  return 0;
}



/* Entry: 10b730064; end: 10b7300b7; -[SCLensValidator .cxx_destruct] */

void FUN_10b730064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7300b8; end: 10b7300c3; -[SCBundledLensProviderServices .cxx_destruct] */

void FUN_10b7300b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7300c4; end: 10b730167; -[SCLensHintProvidingServices initWithLensHintProviderCreator:defaultLensHintProvider:] */

undefined1 *
FUN_10b7300c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270a378;
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



/* Entry: 10b730168; end: 10b73016f; -[SCLensHintProvidingServices lensHintProviderCreator] */

undefined8 FUN_10b730168(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b730170; end: 10b730177; -[SCLensHintProvidingServices defaultLensHintProvider] */

undefined8 FUN_10b730170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b730178; end: 10b7301a7; -[SCLensHintProvidingServices .cxx_destruct] */

void FUN_10b730178(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7301a8; end: 10b7301b3; -[SCLensMetadataRepositoryPluginScope .cxx_destruct] */

void FUN_10b7301a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7301b4; end: 10b7301bb; -[SCLensMetadataRepositoryServices lensMetadataRepositoryFactory] */

undefined8 FUN_10b7301b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7301bc; end: 10b7301eb; -[SCLensMetadataRepositoryServices .cxx_destruct] */

void FUN_10b7301bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7301ec; end: 10b730383;  */

undefined *
FUN_10b7301ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_class();
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f77638);
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_58 = puVar1;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f77678);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar4,param_2,param_1,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c07e1a0();
  _objc_release(puVar4);
  puVar4 = (undefined *)0x2;
  if ((int)puVar1 != 0) {
    puVar4 = (undefined *)0x3;
  }
  return puVar4;
}



/* Entry: 10b730384; end: 10b7303cf; +[SCDevice deviceClass] */

undefined8 FUN_10b730384(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c07e1a0();
  _objc_release(puVar2);
  uVar1 = 2;
  if ((int)puVar3 != 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 10b7303d0; end: 10b7304b3; +[SCDevice deviceClassAsString] */

undefined ** FUN_10b7303d0(ulong param_1)

{
  undefined **ppuVar1;
  
  func_0x00010bf70060();
  if (param_1 < 3) {
    ppuVar1 = (undefined **)(&PTR_PTR_110d5a9c0)[param_1];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f77698;
  }
  return ppuVar1;
}



/* Entry: 10b7304b4; end: 10b7304ff; -[SCLens isPreviewOriginalLens] */

undefined * FUN_10b7304b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae6a8;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07aee0(puVar1,param_2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 10b730500; end: 10b73054b; -[SCLens isAnyOriginalLens] */

undefined * FUN_10b730500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae6a8;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06c300(puVar1,param_2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 10b73054c; end: 10b73058f; -[SCLens isReplyWithLensOriginalLens] */

undefined8 FUN_10b73054c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf3ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b730590; end: 10b7305db; -[SCLens isFeedLens] */

undefined * FUN_10b730590(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae6a8;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072c80(puVar1,param_2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 10b7305dc; end: 10b73061f; -[SCLens isEmptyStateFeedLens] */

undefined8 FUN_10b7305dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b730620; end: 10b73066b; -[SCLens isDualCameraModeLens] */

undefined * FUN_10b730620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae6a8;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c070f80(puVar1,param_2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 10b73066c; end: 10b7306af; -[SCLens isLoadingPlaceholderLens] */

undefined8 FUN_10b73066c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b7306b0; end: 10b7306fb; -[SCLens isLoadingSpinnerLens] */

undefined * FUN_10b7306b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae6a8;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076d60(puVar1,param_2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 10b7306fc; end: 10b73073f; -[SCLens isRemixLens] */

undefined8 FUN_10b7306fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf3ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b730740; end: 10b730783; -[SCLens isFavoritesOnboardingLens] */

undefined8 FUN_10b730740(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b730784; end: 10b73079f; -[SCLens isUtilityLens] */

bool FUN_10b730784(long param_1)

{
  func_0x00010c27dd80();
  return param_1 == 0xb;
}



/* Entry: 10b7307a0; end: 10b730857; +[SCLens isFeedLensId:] */

undefined * FUN_10b7307a0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  puVar3 = param_3;
  func_0x00010bf4b900();
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return puVar2;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f77798);
  return puVar3;
}



/* Entry: 10b730858; end: 10b730867; +[SCLens isDualCameraModeLensId:] */

void FUN_10b730858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f77798);
  return;
}



/* Entry: 10b730868; end: 10b730877; +[SCLens isLoadingSpinnerLensId:] */

void FUN_10b730868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110e62258);
  return;
}



/* Entry: 10b730878; end: 10b730887; +[SCLens isPreviewOriginalLensId:] */

void FUN_10b730878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f27658);
  return;
}


