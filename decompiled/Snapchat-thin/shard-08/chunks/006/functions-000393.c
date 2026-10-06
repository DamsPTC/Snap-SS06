/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062ebb54; end: 1062ebde7; -[SCOperaMediaResolver _loadMediaMetadataForMediaBundle:toResult:completion:] */

void FUN_1062ebb54(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6,long param_7)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  double dVar9;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  func_0x00010c00c560();
  dVar9 = param_1;
  if (*(char *)(param_3 + 0xa4) == '\x01') {
    uVar4 = param_5;
    func_0x00010c0cc0c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c4ba0();
    dVar9 = param_1;
    _objc_release(uVar4);
    if (0.0 < param_1) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar5);
      dVar9 = param_1;
    }
  }
  uVar6 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar5);
  uVar1 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  if (uVar1 != 0) {
    func_0x00010bdc10a0(uVar6);
    bVar2 = false;
    if ((dVar9 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar2 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar2 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (!bVar2) {
      puVar5 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_7 + 0x10))(param_7,param_5,puVar5);
      goto LAB_1062ebd9c;
    }
  }
  puVar8 = *(undefined **)(param_3 + 0x18);
  func_0x00010c269d40(puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf26800(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010bf0b9c0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar8);
  _objc_retain(puVar3);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010bf0c0a0(puVar5);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(puVar3);
LAB_1062ebd9c:
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1062ebde8; end: 1062ebe97;  */

void FUN_1062ebde8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8,param_4,&uStack_40,"{CGSize=dd}");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x20));
  _objc_release(puVar3);
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  lVar2 = *(long *)(param_3 + 0x30);
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1,puVar3);
  _objc_release(puVar3);
  return;
}



/* Entry: 1062ebe98; end: 1062ec01f; -[SCOperaMediaResolver _generatePagePropertiesForMediaBundle:] */

void FUN_1062ebe98(long param_1,undefined8 param_2,undefined ***param_3,undefined ***param_4,
                  undefined8 param_5)

{
  undefined ***pppuVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***unaff_x22;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x48);
  pppuVar1 = param_3;
  func_0x00010c0c4280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  pppuVar4 = pppuVar1;
  func_0x00010be94d40();
  if (lVar2 == 0) {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f0bc38;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110f0bc58;
    ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c55f0;
    ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c55c0;
    pppuVar4 = &ppuStack_58;
    param_4 = &ppuStack_68;
    param_5 = 2;
    unaff_x22 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar2 == 1) {
    unaff_x22 = *(undefined ****)(param_1 + 0x30);
    pppuVar4 = param_3;
    func_0x00010c0f1a80();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar2 == 2) {
    pppuVar3 = *(undefined ****)(param_1 + 0x50);
    pppuVar4 = pppuVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = pppuVar3;
    FUN_1062e6990();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar3);
  }
  _objc_release(pppuVar1);
  _os_unfair_lock_unlock(param_1 + 0x48);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x48);
  __Unwind_Resume();
  _objc_retain(pppuVar4);
  _objc_retain(param_5);
  unaff_x22 = pppuVar1;
  if ((long)param_4 < 2) {
    if (param_4 == (undefined ***)0x0) {
      unaff_x22 = pppuVar4;
      func_0x0001062e67d4(pppuVar4,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == (undefined ***)0x1) {
      unaff_x22 = pppuVar4;
      FUN_1062e64b4(pppuVar4,param_5,*(undefined1 *)((long)param_3 + 0xa7));
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_4 == (undefined ***)0x2) {
LAB_1062ec074:
    unaff_x22 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  }
  else if (param_4 == (undefined ***)0x3) {
    unaff_x22 = pppuVar4;
    func_0x0001062e68e0(pppuVar4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == (undefined ***)0x4) goto LAB_1062ec074;
  _objc_release(param_5);
  _objc_release(pppuVar4);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 1062ec020; end: 1062ec103; -[SCOperaMediaResolver _generatePagePropertiesForAsset:containerLayerType:fromMediaBundle:] */

void FUN_1062ec020(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5)

{
  undefined *unaff_x21;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 < 2) {
    if (param_4 == 0) {
      unaff_x21 = param_3;
      func_0x0001062e67d4(param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 1) {
      unaff_x21 = param_3;
      FUN_1062e64b4(param_3,param_5,*(undefined1 *)(param_1 + 0xa7));
      _objc_retainAutoreleasedReturnValue();
    }
    goto LAB_1062ec0dc;
  }
  if (param_4 != 2) {
    if (param_4 == 3) {
      unaff_x21 = param_3;
      func_0x0001062e68e0(param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1062ec0dc;
    }
    if (param_4 != 4) goto LAB_1062ec0dc;
  }
  unaff_x21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
LAB_1062ec0dc:
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 1062ec104; end: 1062ec2e3; -[SCOperaMediaResolver _recordContentKeys:onBuilder:] */

void FUN_1062ec104(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1062e83c8;
  uStack_40 = 0x1062e83d8;
  uStack_38 = 0;
  func_0x00010c0c1140(param_3);
  lVar1 = puStack_58[5];
  if ((lVar1 != 0) && (func_0x00010bfcaaa0(), lVar1 == 0)) {
    lVar1 = param_3;
    func_0x00010bf4aec0();
    if (lVar1 == 1) {
      uVar2 = puStack_58[5];
      func_0x00010bfc68a0();
      if ((uVar2 & 1) != 0) goto LAB_1062ec294;
    }
    lVar1 = param_3;
    func_0x00010bf4aec0();
    if (lVar1 == 0) {
      uVar3 = puStack_58[5];
      func_0x00010bfc40e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ae280(param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else if (lVar1 == 3) {
      uVar3 = puStack_58[5];
      func_0x00010bfc40e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b51e0(param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      if (lVar1 != 1) goto LAB_1062ec294;
      uVar3 = puStack_58[5];
      func_0x00010bfc40e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a9220(param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(uVar3);
  }
LAB_1062ec294:
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062ec2e4; end: 1062ec2e7;  */

void FUN_1062ec2e4(void)

{
  return;
}



/* Entry: 1062ec2e8; end: 1062ec31f;  */

void FUN_1062ec2e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062ec320; end: 1062ec327;  */

void FUN_1062ec320(void)

{
  return;
}



/* Entry: 1062ec328; end: 1062ec73f; -[SCOperaMediaResolver _generateRemixPagePropertiesFromMediaBundle:singleResult:] */

void FUN_1062ec328(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_opt_class(param_1);
  lVar8 = param_3;
  func_0x00010c0c4280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4aec0(param_4);
  func_0x000107cd1d5c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar8);
  lVar8 = param_4;
  func_0x00010bf4aec0();
  if ((lVar8 != 1) || (lVar8 = param_4, func_0x00010c0c6c20(), lVar8 != 3)) {
    _objc_opt_class(param_1);
    func_0x00010c0c6c20(param_4);
    func_0x000107cd1d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR____NSDictionary0__struct_11034ab58;
    goto LAB_1062ec6b0;
  }
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_1062e83c8;
  uStack_98 = 0x1062e83d8;
  uStack_90 = 0;
  puStack_e0 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  pcStack_d0 = FUN_1062e83c8;
  uStack_c8 = 0x1062e83d8;
  uStack_c0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x2020000000;
  uStack_f0 = 0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0c1140(param_4);
  puVar1 = PTR_PTR_1126c98d8;
  if (puStack_b0[5] == 0) {
    if (puStack_e0[5] != 0) {
      _objc_alloc();
      lVar8 = param_3;
      func_0x00010c0c3fe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010bf0e960(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c46a0();
      func_0x00010c0292c0();
      _objc_release(lVar2);
      _objc_release(lVar8);
      goto LAB_1062ec5b8;
    }
LAB_1062ec654:
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
  }
  else {
    _objc_alloc();
    func_0x00010c003b20();
LAB_1062ec5b8:
    if (puVar1 == (undefined *)0x0) goto LAB_1062ec654;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f0c1b8;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110f0e958;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_78 = puVar1;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_opt_class(param_1);
    func_0x00010c0c4280(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_108,8);
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
LAB_1062ec6b0:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_108,8);
  __Block_object_dispose(&uStack_e8,8);
  uVar6 = 8;
  __Block_object_dispose(&uStack_b8);
  __Unwind_Resume();
  _objc_retain(uVar6);
  uVar5 = uVar6;
  func_0x00010b0eebac();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_3 + 0x28) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar5;
  _objc_release(uVar7);
  puVar4 = PTR_PTR_1126bcba8;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  func_0x00010c25c820();
  _objc_release(puVar1);
  if (puVar4 == (undefined *)0x1) {
    uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c2900e0();
    *(byte *)(*(long *)(*(long *)(param_3 + 0x30) + 8) + 0x18) = (byte)uVar5 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x30) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1062ec740; end: 1062ec82f;  */

void FUN_1062ec740(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010b0eebac();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar1;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126bcba8;
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c25c820();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x1) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c2900e0();
    *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (byte)uVar1 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1062ec830; end: 1062ec867;  */

void FUN_1062ec830(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062ec868; end: 1062ec923;  */

void FUN_1062ec868(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c3fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c5440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1120();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062ec924; end: 1062ec9a3;  */

void FUN_1062ec924(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010b0eebac();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062ec9a4; end: 1062ec9a7;  */

void FUN_1062ec9a4(void)

{
  return;
}



/* Entry: 1062ec9a8; end: 1062ecb77; -[SCOperaMediaResolver _createAndCacheAssetFromMediaBundle:singleResult:] */

void FUN_1062ec9a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf4aec0(param_4);
  lVar3 = param_4;
  func_0x00010c0c6c20(param_4);
  uVar2 = param_3;
  func_0x00010723d78c(param_3,lVar1,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf0b9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar3 = param_1;
    func_0x00010bdeade0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = param_4;
      func_0x00010bf4aec0();
      if (lVar4 == 1) {
        lVar4 = lVar3;
        func_0x00010c299160(lVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_3;
        func_0x00010bf0e960(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29d360();
        func_0x00010c222620(lVar4);
        _objc_release(uVar5);
        _objc_release(lVar4);
      }
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf263c0();
      _objc_release(uVar5);
      _objc_retain(lVar3);
    }
    _objc_release(lVar3);
  }
  else {
    _objc_opt_class(param_1);
    lVar3 = param_4;
    func_0x00010bf4aec0(param_4);
    func_0x000107cd1d5c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c4280(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_retain(lVar1);
    lVar3 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1062ecb78; end: 1062ecee7; -[SCOperaMediaResolver _asyncCeateAndCacheAssetFromMediaBundle:resolutionResult:singleResult:completion:] */

void FUN_1062ecb78(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_5;
  func_0x00010bf4aec0(param_5);
  lVar3 = param_5;
  func_0x00010c0c6c20(param_5);
  lVar2 = param_3;
  func_0x00010723d78c(param_3,lVar1,lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf0b9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar3 = param_3;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar3 == 0) || (lVar4 = param_5, func_0x00010c0c6c20(), lVar4 != 3)) {
      _objc_release(lVar3);
    }
    else {
      lVar4 = param_5;
      func_0x00010bf4aec0();
      _objc_release(lVar3);
      if (lVar4 == 1) {
        _objc_opt_class(param_1);
        lVar3 = param_5;
        func_0x00010bf4aec0(param_5);
        func_0x000107cd1d5c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c4280(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        _objc_initWeak(auStack_68,param_1);
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(param_3);
        _objc_retain(param_6);
        func_0x00010bf54a00(uVar5);
        _objc_release(uVar5);
        _objc_release(param_6);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
        goto LAB_1062ece74;
      }
    }
    lVar3 = param_1;
    func_0x00010bdeade0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010bf4aec0();
    if (lVar4 == 1) {
      lVar4 = lVar3;
      func_0x00010c299160(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010bf0e960(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29d360();
      func_0x00010c222620(lVar4);
      _objc_release(lVar6);
      _objc_release(lVar4);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf263c0();
    _objc_release(uVar5);
    (**(code **)(param_6 + 0x10))(param_6,lVar3,0);
    _objc_release(lVar3);
  }
  else {
    _objc_opt_class(param_1);
    lVar3 = param_5;
    func_0x00010bf4aec0(param_5);
    func_0x000107cd1d5c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c4280(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    (**(code **)(param_6 + 0x10))(param_6,lVar1,0);
  }
LAB_1062ece74:
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062ecee8; end: 1062ecf5f;  */

void FUN_1062ecee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be27460(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062ecf60; end: 1062ed0e7; -[SCOperaMediaResolver _handleCompositionAsset:mediaBundle:cacheKey:error:completion:] */

void FUN_1062ecf60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062ed0e8; end: 1062ed21b;  */

void FUN_1062ed0e8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      lVar4 = *(long *)(param_1 + 0x40);
      if (*(long *)(param_1 + 0x38) != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4,0);
        goto LAB_1062ed1d4;
      }
      puVar6 = (undefined *)0x3;
      FUN_1062e6054(3,&PTR____CFConstantStringClassReference_110e49bf8);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = *(code **)(lVar4 + 0x10);
      puVar5 = (undefined *)0x0;
      puVar2 = puVar6;
    }
    else {
      puVar5 = PTR_PTR_1126c98b0;
      func_0x00010c29bd80(PTR_PTR_1126c98b0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010c299160();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf0e960(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29d360();
      func_0x00010c222620(puVar2);
      _objc_release(uVar3);
      _objc_release(puVar2);
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf263c0();
      _objc_release(uVar3);
      lVar4 = *(long *)(param_1 + 0x40);
      pcVar7 = *(code **)(lVar4 + 0x10);
      puVar6 = (undefined *)0x0;
      puVar2 = puVar5;
    }
    (*pcVar7)(lVar4,puVar5,puVar6);
    _objc_release(puVar2);
  }
LAB_1062ed1d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062ed21c; end: 1062ed56f; -[SCOperaMediaResolver _createAssetFromMediaBundle:singleResult:] */

void FUN_1062ed21c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c9900;
  func_0x00010bf98b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c290420();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00010bdeae00(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = param_4;
      func_0x00010c0c6c20();
      func_0x000107cd1d34();
      if (((ulong)puVar1 & 1) == 0) {
        param_1 = param_4;
        FUN_1062e6140(param_4);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puStack_88 = &uStack_90;
        uStack_90 = 0;
        uStack_80 = 0x3032000000;
        pcStack_78 = FUN_1062e83c8;
        uStack_70 = 0x1062e83d8;
        uStack_68 = 0;
        uVar4 = param_3;
        func_0x00010c0c3fe0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0c5440();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c1120();
        _objc_release(uVar5);
        _objc_release(uVar4);
        if (puStack_88[5] == 0) {
          func_0x00010bdeae00(param_1);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar1 = PTR_PTR_1126bfed8;
          _objc_alloc(PTR_PTR_1126bfed8);
          uVar4 = param_3;
          func_0x00010bf0e960(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c46a0();
          uVar5 = param_3;
          func_0x00010c0c3fe0(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf92c80();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = param_3;
          func_0x00010c0c3fe0(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf92c60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0291c0(puVar1);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          lVar9 = *(long *)(param_1 + 0x10);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bf57a00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar9);
          if (lVar10 == 0) {
            func_0x00010bdeae00(param_1);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            param_1 = PTR_PTR_1126c98b0;
            func_0x00010c29bd80(PTR_PTR_1126c98b0);
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(lVar10);
          _objc_release(puVar1);
        }
        __Block_object_dispose(&uStack_90,8);
        _objc_release(uStack_68);
      }
    }
  }
  else {
    param_1 = (undefined *)0x0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1062ed570; end: 1062ed667;  */

void FUN_1062ed570(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010b0eebac();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(lVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar2;
  _objc_release(uVar1);
  if (param_2 != 0) {
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062ed668; end: 1062ed71f; -[SCOperaMediaResolver _createAssetFromSingleResult:] */

void FUN_1062ed668(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c0c6c20();
  iVar1 = (int)puVar2;
  func_0x000107cd1d34();
  if (iVar1 == 0) {
    puVar2 = param_3;
    FUN_1062e6140(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf54a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c98b0;
    func_0x00010c29bd80(PTR_PTR_1126c98b0,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062ed720; end: 1062ed7fb; -[SCOperaMediaResolver _isRequestCancelledForMediaBundle:] */

undefined8 FUN_1062ed720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar1 = param_3;
  func_0x00010c0c4280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x58);
  func_0x00010c0e00e0(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar4 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c0e00e0(uVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c06e0e0();
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x48);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1062ed7fc; end: 1062ed8af; -[SCOperaMediaResolver _didStartResolvingMediaBundle:cancelable:] */

void FUN_1062ed7fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_opt_class(param_1);
  func_0x00010c0c4280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar1 = param_3;
  func_0x00010c0c4280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58),param_2,param_4,uVar1);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x48);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062ed8b0; end: 1062ed9b7; -[SCOperaMediaResolver _didCancelResolvingMediaBundle:] */

void FUN_1062ed8b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010c0c4280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar1 = param_3;
  func_0x00010c0c4280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar2);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x58),param_2,uVar1);
  func_0x00010c12d7e0(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ab20();
  _objc_release(uVar2);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x40),param_2,uVar1);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x50),param_2,uVar1);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062ed9b8; end: 1062ed9cb; -[SCOperaMediaResolver _didUpdateResolverStageTo:mediaBundle:] */

void FUN_1062ed9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bede990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateResolverStageForMediaBund_112595408,param_4,param_3,0);
  return;
}



/* Entry: 1062ed9cc; end: 1062ed9db; -[SCOperaMediaResolver _didEncounterError:mediaBundle:] */

void FUN_1062ed9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bede990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateResolverStageForMediaBund_112595408,param_4,2,param_3);
  return;
}



/* Entry: 1062ed9dc; end: 1062edb3b; -[SCOperaMediaResolver _updateResolverStageForMediaBundle:stage:error:] */

void FUN_1062ed9dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar1 = param_3;
  func_0x00010c0c4280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_1 + 0x40);
  func_0x00010c0e00e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != puVar3) {
    _objc_opt_class(param_1);
    func_0x00010c0c4280(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = puVar2;
    func_0x00010c067ec0();
    if ((int)puVar4 == 2) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x50),param_2,uVar1);
    }
    if (param_5 != 0) {
      _objc_opt_class(param_1);
      func_0x00010c0c4280(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50),param_2,param_5,uVar1);
    }
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,puVar3,uVar1);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x48);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062edb3c; end: 1062edb7b; -[SCOperaMediaResolver _resolveStageForKey:] */

long FUN_1062edb3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  return (long)(int)uVar2;
}



/* Entry: 1062edb7c; end: 1062edc0b; -[SCOperaMediaResolver _assetsCachedForMediaBundle:] */

bool FUN_1062edb7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar1 = param_3;
  func_0x00010c0c4280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be94d40(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x48);
  _objc_release(param_3);
  return lVar2 == 1;
}



/* Entry: 1062edc0c; end: 1062edcfb; -[SCOperaMediaResolver _mediaBytesCachedForMediaBundle:] */

undefined8 FUN_1062edc0c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_3;
  FUN_1062e5b8c(param_3,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    FUN_1062e5b8c(param_3,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfd8ec0();
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1062edcfc; end: 1062eddff; -[SCOperaMediaResolver _cancelableGroupForItem:] */

void FUN_1062edcfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x60);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (lVar3 == 0) {
    puVar2 = PTR_PTR_1126b2798;
    _objc_opt_new(PTR_PTR_1126b2798);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    uVar1 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,puVar2,uVar1);
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1062ede00; end: 1062ede83; -[SCOperaMediaResolver _handleSingleSnapPlayerDateOnReady:completion:] */

void FUN_1062ede00(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2619e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,param_3,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062ede84; end: 1062edef3; -[SCOperaMediaResolver _handleSingleSnapPlayerDateOnError:completion:] */

void FUN_1062ede84(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR_PTR_1126af5d0;
  _objc_retain(in_x3);
  func_0x00010bfa01c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(in_x3 + 0x10))(in_x3,0,puVar1);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062edef4; end: 1062edf9f; -[SCOperaMediaResolver _prefetchInfoArrayFromResult:] */

void FUN_1062edef4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010bfaea20(param_3,param_2,&PTR___NSConcreteGlobalBlock_11091bc58);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1062edfa0; end: 1062ee037;  */

void FUN_1062edfa0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0777c0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c077500(param_2);
  }
  puVar2 = PTR_PTR_1126c9908;
  _objc_alloc(PTR_PTR_1126c9908);
  uVar1 = param_2;
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060680(puVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062ee038; end: 1062ee10f; -[SCOperaMediaResolver .cxx_destruct] */

void FUN_1062ee038(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1062ee110; end: 1062ee233; -[SCOperaMediaResolverFactoryImpl initWithPlaybackMediaResolver:assetRepository:operaAssetDataSource:operaConfigProvider:singleSnapPlayerMediaService:] */

undefined1 *
FUN_1062ee110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f0de8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062ee234; end: 1062ee2bb; -[SCOperaMediaResolverFactoryImpl createResolverWithMediaBundleProviders:itemLoadStateTracker:] */

void FUN_1062ee234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9910;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c036d40();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062ee2bc; end: 1062ee317; -[SCOperaMediaResolverFactoryImpl createErrorHandlerPluginWithResolver:] */

void FUN_1062ee2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9918;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c029ca0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062ee318; end: 1062ee36b; -[SCOperaMediaResolverFactoryImpl .cxx_destruct] */

void FUN_1062ee318(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062ee36c; end: 1062ee58f; -[SCOperaMediaResolverServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ee36c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112745598;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar6;
  func_0x00010bf0b640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf54200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112745584);
  *(long *)(param_1 + _DAT_112745584) = lVar2;
  _objc_release(uVar5);
  _objc_release(lVar1);
  _objc_release(lVar6);
  puVar3 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1062ee590;
  puStack_68 = &UNK_11091bcb8;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112745588);
  *(undefined **)(param_1 + _DAT_112745588) = puVar3;
  _objc_release(uVar5);
  lVar6 = param_1 + _DAT_11274559c;
  _objc_loadWeakRetained();
  lVar1 = lVar6;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274558c);
  *(long *)(param_1 + _DAT_11274558c) = lVar1;
  _objc_release(uVar5);
  _objc_release(lVar6);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9920;
  _objc_alloc(PTR_PTR_1126c9920);
  func_0x00010c029cc0();
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1062ee590; end: 1062ee60f;  */

void FUN_1062ee590(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdefe20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1062ee610; end: 1062ee6ef; -[SCOperaMediaResolverServiceProvider _createMediaResolverFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ee610(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c9928;
  _objc_alloc(PTR_PTR_1126c9928);
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112745594;
    _objc_loadWeakRetained(lVar3);
  }
  lVar2 = lVar3;
  func_0x00010c0ffb20(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112745584);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112745588);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274558c);
  param_1 = param_1 + _DAT_1127455a0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c036d20(puVar1,param_2,lVar2,uVar4,uVar5,uVar6,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062ee6f0; end: 1062ee727; -[SCOperaMediaResolverServiceProvider _createMediaAssetDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ee6f0(void)

{
  _objc_alloc(PTR_PTR_1126c9930);
  func_0x00010bff4580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062ee728; end: 1062ee797; -[SCOperaMediaResolverServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ee728(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745588);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ab00();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f0df0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062ee798; end: 1062ee823; -[SCOperaMediaResolverServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ee798(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127455a0);
  _objc_destroyWeak(param_1 + _DAT_11274559c);
  _objc_destroyWeak(param_1 + _DAT_112745598);
  _objc_destroyWeak(param_1 + _DAT_112745594);
  _objc_destroyWeak(param_1 + _DAT_112745590);
  _objc_storeStrong(param_1 + _DAT_11274558c,0);
  _objc_storeStrong(param_1 + _DAT_112745588,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112745584,0);
  return;
}



/* Entry: 1062ee824; end: 1062ee95b; -[SCOperaSessionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ee824(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bf04340(PTR_PTR_1126c98e0,param_2,&PTR____CFConstantStringClassReference_110e49c18);
  puVar3 = (undefined *)(param_1 + _DAT_1127455a8);
  _objc_loadWeakRetained();
  puVar4 = puVar3;
  func_0x00010bf22640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar4 != (undefined *)0x0) {
    puVar1 = puVar4;
  }
  _objc_retain(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = (undefined *)(param_1 + _DAT_1127455ac);
  _objc_loadWeakRetained();
  puVar4 = puVar3;
  func_0x00010bf22660();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    puVar2 = puVar4;
  }
  _objc_retain(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010be7d0a0(param_1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010beabf60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062ee95c; end: 1062ee9eb; -[SCOperaSessionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ee95c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_30;
  undefined *puStack_28;
  
  lVar3 = (long)_DAT_1127455b0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c07ab40();
  if (iVar1 != 0) {
    func_0x00010bf84cc0(*(undefined8 *)(param_1 + lVar3));
  }
  func_0x00010becaf80(param_1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  func_0x00010bf04340(PTR_PTR_1126c98e0);
  puStack_28 = PTR_PTR_1126f0df8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062ee9ec; end: 1062ef147; -[SCOperaSessionEntryPoint _presentOperaWithPluginRegistrators:layerViewControllerFactoryPlugins:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ee9ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
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
  undefined8 uVar19;
  long lVar20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be1b9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_70,param_1);
  lVar2 = param_1;
  func_0x00010bdd66a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1062ef148;
  puStack_90 = &UNK_11091bd18;
  _objc_copyWeak(auStack_78,auStack_70);
  _objc_retain(param_4);
  ppuVar3 = &puStack_a8;
  uStack_88 = param_4;
  lStack_80 = lVar2;
  _objc_retainBlock();
  lVar18 = (long)_DAT_1127455a4;
  lVar4 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf668c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    lVar4 = param_1 + lVar18;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf668c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c9938;
    func_0x00010c0ea2e0(PTR_PTR_1126c9938);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf8740(param_1);
    puVar7 = puVar6;
    func_0x00010c2b52c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c0ea300();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + _DAT_1127455b4);
    *(long *)(param_1 + _DAT_1127455b4) = lVar8;
    _objc_release(uVar19);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  lVar9 = param_1;
  func_0x00010be6de40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9940;
  _objc_alloc();
  lVar4 = param_1 + _DAT_1127455bc;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c031e40();
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126c9948;
  _objc_alloc();
  lVar4 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar10 = lVar4;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bdd6d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_1127455c0;
  _objc_loadWeakRetained(lVar5);
  lVar8 = param_1 + _DAT_1127455c4;
  _objc_loadWeakRetained();
  lVar12 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c15fb20();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_1127455c8;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf4d2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bfca520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0392a0();
  lVar20 = (long)_DAT_1127455b0;
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar6;
  _objc_release(uVar19);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar4);
  lVar4 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0eadc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar20));
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c27a6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b320(*(undefined8 *)(param_1 + lVar20));
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar4 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar8 = lVar4;
  func_0x00010c15fb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  lVar5 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar12 = lVar5;
  func_0x00010c15fb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29e220();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(lVar4);
  func_0x00010bf18180();
  lVar4 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf2f7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010c1012c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  _objc_release(lVar4);
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  lVar4 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  if (lVar8 == 0) {
    func_0x00010bf2f7c0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar5;
    func_0x00010bf63f20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + lVar18;
    _objc_loadWeakRetained(lVar8);
    lVar11 = lVar8;
    func_0x00010bf2f7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bfb1100();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + lVar18;
    _objc_loadWeakRetained(lVar14);
    lVar13 = lVar14;
    func_0x00010bf16300();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar18;
    _objc_loadWeakRetained(param_1);
    lVar18 = param_1;
    func_0x00010c10fba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eec0(uVar19);
    _objc_release(lVar18);
    _objc_release(param_1);
    _objc_release(lVar13);
  }
  else {
    func_0x00010bf2f7c0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar5;
    func_0x00010c1012c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + lVar18;
    _objc_loadWeakRetained(lVar8);
    lVar11 = lVar8;
    func_0x00010bf16300();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + lVar18;
    _objc_loadWeakRetained(lVar12);
    lVar14 = lVar12;
    func_0x00010c10fba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eee0(uVar19);
  }
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar8);
  _objc_release(lVar10);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010bf94960(PTR_PTR_1126c98e0);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(lVar9);
  _objc_release(ppuVar3);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062ef148; end: 1062ef1f3;  */

void FUN_1062ef148(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf461c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bdd6680(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1062ef1f4; end: 1062ef267; -[SCOperaSessionEntryPoint _deckPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1062ef1f4(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  param_1 = param_1 + _DAT_1127455a4;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c15fb20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa2560();
  _objc_release(lVar2);
  _objc_release(param_1);
  uVar4 = 0x5d;
  if (lVar3 != 4) {
    uVar4 = 0;
  }
  uVar1 = 0x10;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  return uVar1;
}



/* Entry: 1062ef268; end: 1062ef39f; -[SCOperaSessionEntryPoint _buildRegistrationContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ef268(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c9950;
  func_0x00010c0ea520(PTR_PTR_1126c9950);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_1127455a4;
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15fb20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfa2560();
  func_0x00010c2adb00(puVar1,param_2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15fb20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0fe880();
  func_0x00010c2b5680(puVar1,param_2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c15fb20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29d360();
  func_0x00010c2bc8c0(puVar1,param_2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar5 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1062ef3a0; end: 1062ef5fb; -[SCOperaSessionEntryPoint _generatePlaylistPluginsWithRegistrators:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ef3a0(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  long lVar29;
  ulong uVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  long lVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  undefined *puStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_390;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined *puStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined1 **ppuStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined **ppuStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined **ppuStack_290;
  long lStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar34 = (undefined **)(param_1 + _DAT_1127455a4);
  _objc_loadWeakRetained();
  ppuVar35 = ppuVar34;
  func_0x00010c0eaca0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar28 = (undefined **)PTR____NSArray0__struct_11034ab48;
  if (ppuVar35 != (undefined **)0x0) {
    ppuVar28 = ppuVar35;
  }
  func_0x00010c0d3c80();
  _objc_release(ppuVar35);
  _objc_release(ppuVar34);
  func_0x00010beaef40(param_1);
  lVar29 = param_1;
  func_0x00010bdd68e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  ppuVar34 = param_3;
  func_0x00010bf52a60();
  if (ppuVar34 != (undefined **)0x0) {
    lVar33 = *plStack_120;
    do {
      ppuVar35 = (undefined **)0x0;
      do {
        if (*plStack_120 != lVar33) {
          _objc_enumerationMutation(param_3);
        }
        lVar1 = *(long *)(lStack_128 + (long)ppuVar35 * 8);
        func_0x00010c126e00();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf00560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        lVar1 = lVar2;
        func_0x00010bf529e0();
        if (lVar1 != 0) {
          func_0x00010befa160(ppuVar28);
        }
        _objc_release(lVar2);
        ppuVar35 = (undefined **)((long)ppuVar35 + 1);
      } while (ppuVar34 != ppuVar35);
      ppuVar34 = param_3;
      func_0x00010bf52a60();
    } while (ppuVar34 != (undefined **)0x0);
  }
  _objc_release(param_3);
  func_0x00010bdc8140(param_1);
  func_0x00010bdcd380(param_1);
  ppuVar25 = ppuVar28;
  func_0x00010bdccfe0(param_1);
  ppuVar35 = (undefined **)(param_1 + _DAT_1127455cc);
  _objc_loadWeakRetained();
  ppuVar3 = ppuVar35;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar34 = ppuVar32;
  func_0x00010bf023e0();
  _objc_release(ppuVar32);
  _objc_release(ppuVar3);
  _objc_release(ppuVar35);
  if ((int)ppuVar34 != 0) {
    ppuVar25 = ppuVar28;
    func_0x00010bdc7a20(param_1);
  }
  _objc_release(lVar29);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar28);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1062ef5fc;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar25);
  ppuVar27 = (undefined **)((long)param_3 + (long)_DAT_1127455d0);
  _objc_loadWeakRetained();
  ppuVar4 = ppuVar27;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar27);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_258 = 0;
  puStack_260 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_250 = (undefined8 *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  _objc_retain(ppuVar25);
  ppuVar31 = &puStack_260;
  ppuVar6 = ppuVar25;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar28 = (undefined **)*puStack_250;
    ppuVar32 = &PTR_DAT_1126a5000;
    do {
      ppuVar34 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_250 != ppuVar28) {
          _objc_enumerationMutation(ppuVar25);
        }
        puVar7 = PTR_DAT_1126a52f0;
        ppuVar31 = *(undefined ***)(lStack_258 + (long)ppuVar34 * 8);
        _objc_retain(ppuVar31);
        ppuVar3 = ppuVar31;
        func_0x00010010fab4(ppuVar31,puVar7);
        ppuVar35 = ppuVar31;
        if ((int)ppuVar3 == 0) {
          ppuVar35 = (undefined **)0x0;
        }
        _objc_retain(ppuVar35);
        _objc_release(ppuVar31);
        ppuVar31 = ppuVar35;
        func_0x00010c101280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        ppuVar3 = (undefined **)0x0;
        if (ppuVar31 != (undefined **)0x0) {
          ppuVar3 = ppuVar35;
          func_0x00010c101280();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(ppuVar3);
        }
        _objc_release(ppuVar35);
        ppuVar34 = (undefined **)((long)ppuVar34 + 1);
      } while (ppuVar6 != ppuVar34);
      ppuVar31 = &puStack_260;
      ppuVar6 = ppuVar25;
      func_0x00010bf52a60();
      ppuVar27 = (undefined **)0x0;
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release(ppuVar25);
  puVar7 = puVar5;
  func_0x00010bf529e0();
  if (puVar7 != (undefined *)0x0) {
    puVar7 = PTR_PTR_1126c9958;
    _objc_alloc();
    func_0x00010c038520();
    ppuVar34 = (undefined **)PTR_PTR_1126c9960;
    puStack_268 = puVar7;
    _objc_alloc();
    lVar29 = (long)_DAT_1127455cc;
    puVar7 = (undefined *)((long)param_3 + lVar29);
    ppuStack_2c0 = ppuVar34;
    lStack_288 = lVar29;
    _objc_loadWeakRetained();
    puStack_298 = puVar7;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_290 = (undefined **)(long)_DAT_1127455d4;
    puVar8 = (undefined *)((long)param_3 + (long)ppuStack_290);
    ppuStack_278 = (undefined **)puVar7;
    _objc_loadWeakRetained();
    puStack_2a0 = puVar8;
    func_0x00010c0ffb20();
    _objc_retainAutoreleasedReturnValue();
    puStack_2a8 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)((long)param_3 + (long)_DAT_1127455d8);
    puStack_2e8 = puVar8;
    _objc_loadWeakRetained();
    puStack_2b8 = puVar7;
    func_0x00010c2402c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)((long)param_3 + lVar29);
    puStack_2f0 = puVar7;
    _objc_loadWeakRetained();
    puStack_2c8 = puVar8;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_2d0 = puVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_2d8 = puVar8;
    func_0x00010c107c00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)((long)param_3 + (long)_DAT_1127455dc);
    puStack_300 = puVar8;
    _objc_loadWeakRetained();
    puStack_2e0 = puVar7;
    func_0x00010c0ffb00();
    _objc_retainAutoreleasedReturnValue();
    lStack_2b0 = (long)_DAT_1127455a4;
    puVar8 = (undefined *)((long)param_3 + lStack_2b0);
    puStack_308 = puVar7;
    _objc_loadWeakRetained();
    puStack_2f8 = puVar8;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c29e220();
    puVar10 = (undefined *)((long)param_3 + (long)_DAT_1127455e0);
    ppuStack_270 = ppuVar4;
    _objc_loadWeakRetained();
    puVar11 = puVar10;
    ppuStack_280 = param_3;
    func_0x00010bf0c120();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c11e0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puStack_2e8;
    puVar20 = puStack_2f0;
    puVar18 = puStack_300;
    puStack_320 = puVar7;
    puStack_318 = puVar9;
    puStack_310 = puVar13;
    func_0x00010c001460();
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puStack_2f8);
    _objc_release(puStack_308);
    _objc_release(puStack_2e0);
    _objc_release(puVar18);
    _objc_release(puStack_2d8);
    _objc_release(puStack_2d0);
    _objc_release(puStack_2c8);
    _objc_release(puVar20);
    _objc_release(puStack_2b8);
    _objc_release(puVar23);
    _objc_release(puStack_2a8);
    _objc_release(puStack_2a0);
    _objc_release(ppuStack_278);
    _objc_release(puStack_298);
    ppuVar32 = (undefined **)PTR_PTR_1126c9968;
    _objc_alloc();
    param_3 = ppuStack_280;
    ppuVar34 = (undefined **)((long)ppuStack_280 + (long)ppuStack_290);
    _objc_loadWeakRetained();
    ppuStack_278 = ppuVar34;
    func_0x00010c0ffb20();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_290 = ppuVar34;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)((long)param_3 + lStack_2b0);
    _objc_loadWeakRetained();
    puStack_298 = puVar7;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e220();
    param_3 = (undefined **)((long)param_3 + lStack_288);
    _objc_loadWeakRetained();
    ppuVar27 = param_3;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar27;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar35 = ppuVar3;
    func_0x00010c107c00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar28 = ppuStack_2c0;
    func_0x00010c001420();
    _objc_release(ppuVar35);
    _objc_release(ppuVar3);
    _objc_release(ppuVar27);
    _objc_release(param_3);
    _objc_release(puVar7);
    _objc_release(puStack_298);
    _objc_release(ppuVar34);
    _objc_release(ppuStack_290);
    _objc_release(ppuStack_278);
    ppuVar31 = ppuVar32;
    func_0x00010c06b280();
    if ((int)ppuVar31 != 0) {
      ppuVar27 = (undefined **)(long)_DAT_1127455e4;
      _objc_retain(ppuVar28);
      uVar14 = *(undefined8 *)((long)ppuStack_280 + (long)ppuVar27);
      *(undefined ***)((long)ppuStack_280 + (long)ppuVar27) = ppuVar28;
      _objc_release(uVar14);
    }
    ppuVar31 = ppuVar32;
    func_0x00010befa120(ppuVar25);
    _objc_release(ppuVar32);
    _objc_release(ppuVar28);
    _objc_release(puStack_268);
    ppuVar4 = ppuStack_270;
  }
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  ppuVar6 = ppuVar25;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_328 = FUN_1062efba4;
  lStack_390 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar26 = ppuVar31;
  ppuStack_380 = param_3;
  ppuStack_378 = ppuVar4;
  ppuStack_370 = ppuVar34;
  ppuStack_368 = ppuVar32;
  ppuStack_360 = ppuVar3;
  ppuStack_358 = ppuVar35;
  puStack_350 = puVar5;
  ppuStack_348 = ppuVar28;
  ppuStack_340 = ppuVar27;
  ppuStack_338 = ppuVar25;
  ppuStack_330 = &puStack_140;
  _objc_retain(ppuVar31);
  lVar29 = (long)_DAT_1127455a4;
  puVar5 = (undefined *)((long)ppuVar6 + lVar29);
  _objc_loadWeakRetained();
  puVar7 = puVar5;
  func_0x00010c15fb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar5);
  if (puVar7 != (undefined *)0x0) {
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    lStack_448 = 0;
    puStack_450 = (undefined *)0x0;
    uStack_438 = 0;
    plStack_440 = (long *)0x0;
    _objc_retain(ppuVar31);
    ppuVar26 = &puStack_450;
    ppuVar34 = ppuVar31;
    func_0x00010bf52a60();
    ppuVar28 = ppuVar31;
    if (ppuVar34 != (undefined **)0x0) {
      lVar33 = *plStack_440;
      do {
        ppuVar35 = (undefined **)0x0;
        do {
          if (*plStack_440 != lVar33) {
            _objc_enumerationMutation(ppuVar31);
          }
          uVar30 = *(ulong *)(lStack_448 + (long)ppuVar35 * 8);
          puVar5 = PTR_PTR_1126c9970;
          _objc_opt_class(PTR_PTR_1126c9970);
          uVar15 = uVar30;
          _objc_opt_isKindOfClass(uVar30,puVar5);
          if ((uVar15 & 1) != 0) goto LAB_1062f015c;
          puVar5 = PTR_PTR_1126c9978;
          _objc_opt_class(PTR_PTR_1126c9978);
          _objc_opt_isKindOfClass(uVar30,puVar5);
          if ((uVar30 & 1) != 0) goto LAB_1062f015c;
          ppuVar35 = (undefined **)((long)ppuVar35 + 1);
        } while (ppuVar34 != ppuVar35);
        ppuVar26 = &puStack_450;
        ppuVar34 = ppuVar31;
        func_0x00010bf52a60();
      } while (ppuVar34 != (undefined **)0x0);
    }
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c9970;
    _objc_alloc();
    puVar5 = (undefined *)((long)ppuVar6 + lVar29);
    _objc_loadWeakRetained();
    puVar12 = puVar5;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2560();
    puVar7 = (undefined *)((long)ppuVar6 + lVar29);
    _objc_loadWeakRetained();
    puVar13 = puVar7;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e220();
    puVar8 = (undefined *)((long)ppuVar6 + lVar29);
    _objc_loadWeakRetained();
    puVar16 = puVar8;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe880();
    puVar10 = (undefined *)((long)ppuVar6 + lVar29);
    _objc_loadWeakRetained();
    puVar17 = puVar10;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97160();
    puVar18 = (undefined *)((long)ppuVar6 + lVar29);
    _objc_loadWeakRetained();
    puVar19 = puVar18;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf972a0();
    puVar20 = (undefined *)((long)ppuVar6 + lVar29);
    _objc_loadWeakRetained();
    puVar21 = puVar20;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010c068120();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = (undefined *)((long)ppuVar6 + lVar29);
    _objc_loadWeakRetained();
    func_0x00010c0681e0();
    puVar9 = (undefined *)((long)ppuVar6 + (long)_DAT_1127455dc);
    _objc_loadWeakRetained();
    puVar24 = puVar9;
    func_0x00010c0ffb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011ac0();
    _objc_release(puVar24);
    _objc_release(puVar9);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar10);
    _objc_release(puVar16);
    _objc_release(puVar8);
    _objc_release(puVar13);
    _objc_release(puVar7);
    _objc_release(puVar12);
    _objc_release(puVar5);
    puVar5 = (undefined *)((long)ppuVar6 + (long)_DAT_1127455e8);
    _objc_loadWeakRetained(puVar5);
    puVar7 = puVar5;
    func_0x00010c2587e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c6a0(puVar11);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    if (*(long *)((long)ppuVar6 + (long)_DAT_1127455e4) != 0) {
      func_0x00010c1c4fe0(puVar11);
    }
    func_0x00010befa120(ppuVar31);
    lVar33 = (long)_DAT_1127455c8;
    puVar5 = (undefined *)((long)ppuVar6 + lVar33);
    _objc_loadWeakRetained();
    puVar7 = puVar5;
    func_0x00010bf4d2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar8;
    func_0x00010bfc8e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar5 = (undefined *)((long)ppuVar6 + lVar33);
    _objc_loadWeakRetained();
    puVar7 = puVar5;
    func_0x00010bf4d2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar8;
    func_0x00010bfca520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    ppuVar34 = (undefined **)PTR_PTR_1126c9978;
    _objc_alloc();
    puVar5 = (undefined *)((long)ppuVar6 + lVar29);
    _objc_loadWeakRetained();
    puVar23 = puVar5;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97160();
    puVar7 = (undefined *)((long)ppuVar6 + lVar29);
    _objc_loadWeakRetained(puVar7);
    puVar9 = puVar7;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf972a0();
    puVar8 = (undefined *)((long)ppuVar6 + (long)_DAT_1127455ec);
    _objc_loadWeakRetained();
    puVar10 = (undefined *)((long)ppuVar6 + (long)_DAT_1127455f0);
    _objc_loadWeakRetained();
    puVar12 = puVar10;
    func_0x00010c0d2660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c031e80(ppuVar34);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar23);
    _objc_release(puVar5);
    puVar5 = (undefined *)((long)ppuVar6 + lVar29);
    _objc_loadWeakRetained();
    puVar7 = puVar5;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360();
    func_0x00010c222620(ppuVar34);
    _objc_release(puVar7);
    _objc_release(puVar5);
    ppuVar26 = ppuVar34;
    func_0x00010befa120(ppuVar31);
    _objc_release(ppuVar34);
    _objc_release(puVar20);
    _objc_release(puVar18);
    _objc_release(puVar11);
LAB_1062f015c:
    _objc_release(ppuVar28);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_390) {
    ___stack_chk_fail();
    _objc_retain(ppuVar26);
    lVar29 = (long)_DAT_1127455a4;
    puVar5 = (undefined *)((long)ppuVar31 + lVar29);
    _objc_loadWeakRetained();
    puVar7 = puVar5;
    func_0x00010bf44d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    if (puVar7 != (undefined *)0x0) {
      puVar7 = PTR_PTR_1126c9980;
      _objc_alloc(PTR_PTR_1126c9980);
      puVar5 = (undefined *)((long)ppuVar31 + lVar29);
      _objc_loadWeakRetained(puVar5);
      puVar8 = puVar5;
      func_0x00010bf44d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000820(puVar7);
      _objc_release(puVar8);
      _objc_release(puVar5);
      func_0x00010befa120(ppuVar26);
      _objc_release(puVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar26);
    return;
  }
  return;
}



/* Entry: 1062ef5fc; end: 1062efba3; -[SCOperaSessionEntryPoint _setupPlaylistPrefetchPluginFromPlugins:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ef5fc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined **ppuVar24;
  long lVar25;
  undefined *unaff_x21;
  ulong uVar26;
  long unaff_x23;
  long lVar27;
  long unaff_x24;
  long lVar28;
  undefined **unaff_x25;
  undefined **ppuVar29;
  long unaff_x26;
  undefined *puStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_260;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined **ppuStack_238;
  long lStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar25 = param_1 + _DAT_1127455d0;
  _objc_loadWeakRetained();
  lVar27 = lVar25;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  ppuVar9 = &puStack_130;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x21 = (undefined *)*puStack_120;
    unaff_x25 = &PTR_DAT_1126a5000;
    do {
      unaff_x26 = 0;
      do {
        if ((undefined *)*puStack_120 != unaff_x21) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR_DAT_1126a52f0;
        lVar28 = *(long *)(lStack_128 + unaff_x26 * 8);
        _objc_retain(lVar28);
        lVar25 = lVar28;
        func_0x00010010fab4(lVar28,puVar3);
        unaff_x23 = lVar28;
        if ((int)lVar25 == 0) {
          unaff_x23 = 0;
        }
        _objc_retain(unaff_x23);
        _objc_release(lVar28);
        lVar25 = unaff_x23;
        func_0x00010c101280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        unaff_x24 = 0;
        if (lVar25 != 0) {
          unaff_x24 = unaff_x23;
          func_0x00010c101280();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(unaff_x24);
        }
        _objc_release(unaff_x23);
        unaff_x26 = unaff_x26 + 1;
      } while (lVar2 != unaff_x26);
      ppuVar9 = &puStack_130;
      lVar2 = param_3;
      func_0x00010bf52a60();
      lVar25 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126c9958;
    _objc_alloc();
    func_0x00010c038520();
    puVar4 = PTR_PTR_1126c9960;
    puStack_138 = puVar3;
    _objc_alloc();
    lVar28 = (long)_DAT_1127455cc;
    lVar25 = param_1 + lVar28;
    puStack_190 = puVar4;
    lStack_158 = lVar28;
    _objc_loadWeakRetained();
    lStack_168 = lVar25;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    lStack_160 = (long)_DAT_1127455d4;
    lVar2 = param_1 + lStack_160;
    lStack_148 = lVar25;
    _objc_loadWeakRetained();
    lStack_170 = lVar2;
    func_0x00010c0ffb20();
    _objc_retainAutoreleasedReturnValue();
    lStack_178 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_1 + _DAT_1127455d8;
    lStack_1b8 = lVar2;
    _objc_loadWeakRetained();
    lStack_188 = lVar25;
    func_0x00010c2402c0();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = param_1 + lVar28;
    lStack_1c0 = lVar25;
    _objc_loadWeakRetained();
    lStack_198 = lVar28;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    lStack_1a0 = lVar28;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lStack_1a8 = lVar28;
    func_0x00010c107c00();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_1 + _DAT_1127455dc;
    lStack_1d0 = lVar28;
    _objc_loadWeakRetained();
    lStack_1b0 = lVar25;
    func_0x00010c0ffb00();
    _objc_retainAutoreleasedReturnValue();
    lStack_180 = (long)_DAT_1127455a4;
    lVar2 = param_1 + lStack_180;
    lStack_1d8 = lVar25;
    _objc_loadWeakRetained();
    lStack_1c8 = lVar2;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c29e220();
    lVar28 = param_1 + _DAT_1127455e0;
    lStack_140 = lVar27;
    _objc_loadWeakRetained();
    lVar6 = lVar28;
    lStack_150 = param_1;
    func_0x00010bf0c120();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c11e0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lStack_1b8;
    lVar16 = lStack_1c0;
    lVar27 = lStack_1d0;
    lStack_1f0 = lVar25;
    lStack_1e8 = lVar5;
    lStack_1e0 = lVar8;
    func_0x00010c001460();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar28);
    _objc_release(lVar2);
    _objc_release(lStack_1c8);
    _objc_release(lStack_1d8);
    _objc_release(lStack_1b0);
    _objc_release(lVar27);
    _objc_release(lStack_1a8);
    _objc_release(lStack_1a0);
    _objc_release(lStack_198);
    _objc_release(lVar16);
    _objc_release(lStack_188);
    _objc_release(lVar18);
    _objc_release(lStack_178);
    _objc_release(lStack_170);
    _objc_release(lStack_148);
    _objc_release(lStack_168);
    unaff_x25 = (undefined **)PTR_PTR_1126c9968;
    _objc_alloc();
    param_1 = lStack_150;
    unaff_x26 = lStack_150 + lStack_160;
    _objc_loadWeakRetained();
    lStack_148 = unaff_x26;
    func_0x00010c0ffb20();
    _objc_retainAutoreleasedReturnValue();
    lStack_160 = unaff_x26;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = param_1 + lStack_180;
    _objc_loadWeakRetained();
    lStack_168 = lVar27;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e220();
    param_1 = param_1 + lStack_158;
    _objc_loadWeakRetained();
    lVar25 = param_1;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = lVar25;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x24;
    func_0x00010c107c00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = puStack_190;
    func_0x00010c001420();
    _objc_release(unaff_x23);
    _objc_release(unaff_x24);
    _objc_release(lVar25);
    _objc_release(param_1);
    _objc_release(lVar27);
    _objc_release(lStack_168);
    _objc_release(unaff_x26);
    _objc_release(lStack_160);
    _objc_release(lStack_148);
    ppuVar9 = unaff_x25;
    func_0x00010c06b280();
    if ((int)ppuVar9 != 0) {
      lVar25 = (long)_DAT_1127455e4;
      _objc_retain(unaff_x21);
      uVar10 = *(undefined8 *)(lStack_150 + lVar25);
      *(undefined **)(lStack_150 + lVar25) = unaff_x21;
      _objc_release(uVar10);
    }
    ppuVar9 = unaff_x25;
    func_0x00010befa120(param_3);
    _objc_release(unaff_x25);
    _objc_release(unaff_x21);
    _objc_release(puStack_138);
    lVar27 = lStack_140;
  }
  _objc_release(puVar1);
  _objc_release(lVar27);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_1062efba4;
  lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar24 = ppuVar9;
  lStack_250 = param_1;
  lStack_248 = lVar27;
  lStack_240 = unaff_x26;
  ppuStack_238 = unaff_x25;
  lStack_230 = unaff_x24;
  lStack_228 = unaff_x23;
  puStack_220 = puVar1;
  puStack_218 = unaff_x21;
  lStack_210 = lVar25;
  lStack_208 = param_3;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar9);
  lVar28 = (long)_DAT_1127455a4;
  lVar25 = lVar2 + lVar28;
  _objc_loadWeakRetained();
  lVar27 = lVar25;
  func_0x00010c15fb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar25);
  if (lVar27 != 0) {
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    lStack_318 = 0;
    puStack_320 = (undefined *)0x0;
    uStack_308 = 0;
    plStack_310 = (long *)0x0;
    _objc_retain(ppuVar9);
    ppuVar24 = &puStack_320;
    ppuVar11 = ppuVar9;
    func_0x00010bf52a60();
    ppuVar13 = ppuVar9;
    if (ppuVar11 != (undefined **)0x0) {
      lVar25 = *plStack_310;
      do {
        ppuVar29 = (undefined **)0x0;
        do {
          if (*plStack_310 != lVar25) {
            _objc_enumerationMutation(ppuVar9);
          }
          uVar26 = *(ulong *)(lStack_318 + (long)ppuVar29 * 8);
          puVar1 = PTR_PTR_1126c9970;
          _objc_opt_class(PTR_PTR_1126c9970);
          uVar12 = uVar26;
          _objc_opt_isKindOfClass(uVar26,puVar1);
          if ((uVar12 & 1) != 0) goto LAB_1062f015c;
          puVar1 = PTR_PTR_1126c9978;
          _objc_opt_class(PTR_PTR_1126c9978);
          _objc_opt_isKindOfClass(uVar26,puVar1);
          if ((uVar26 & 1) != 0) goto LAB_1062f015c;
          ppuVar29 = (undefined **)((long)ppuVar29 + 1);
        } while (ppuVar11 != ppuVar29);
        ppuVar24 = &puStack_320;
        ppuVar11 = ppuVar9;
        func_0x00010bf52a60();
      } while (ppuVar11 != (undefined **)0x0);
    }
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c9970;
    _objc_alloc();
    lVar25 = lVar2 + lVar28;
    _objc_loadWeakRetained();
    lVar14 = lVar25;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2560();
    lVar27 = lVar2 + lVar28;
    _objc_loadWeakRetained();
    lVar15 = lVar27;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e220();
    lVar16 = lVar2 + lVar28;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe880();
    lVar18 = lVar2 + lVar28;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97160();
    lVar5 = lVar2 + lVar28;
    _objc_loadWeakRetained();
    lVar20 = lVar5;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf972a0();
    lVar6 = lVar2 + lVar28;
    _objc_loadWeakRetained();
    lVar21 = lVar6;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010c068120();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2 + lVar28;
    _objc_loadWeakRetained();
    func_0x00010c0681e0();
    lVar8 = lVar2 + _DAT_1127455dc;
    _objc_loadWeakRetained();
    lVar23 = lVar8;
    func_0x00010c0ffb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011ac0();
    _objc_release(lVar23);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar6);
    _objc_release(lVar20);
    _objc_release(lVar5);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar27);
    _objc_release(lVar14);
    _objc_release(lVar25);
    lVar25 = lVar2 + _DAT_1127455e8;
    _objc_loadWeakRetained(lVar25);
    lVar27 = lVar25;
    func_0x00010c2587e0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar27;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c6a0(puVar1);
    _objc_release(lVar16);
    _objc_release(lVar27);
    _objc_release(lVar25);
    if (*(long *)(lVar2 + _DAT_1127455e4) != 0) {
      func_0x00010c1c4fe0(puVar1);
    }
    func_0x00010befa120(ppuVar9);
    lVar27 = (long)_DAT_1127455c8;
    lVar25 = lVar2 + lVar27;
    _objc_loadWeakRetained();
    lVar16 = lVar25;
    func_0x00010bf4d2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar18;
    func_0x00010bfc8e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar18);
    _objc_release(lVar16);
    _objc_release(lVar25);
    lVar27 = lVar2 + lVar27;
    _objc_loadWeakRetained();
    lVar25 = lVar27;
    func_0x00010bf4d2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar25;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar16;
    func_0x00010bfca520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar16);
    _objc_release(lVar25);
    _objc_release(lVar27);
    ppuVar11 = (undefined **)PTR_PTR_1126c9978;
    _objc_alloc();
    lVar25 = lVar2 + lVar28;
    _objc_loadWeakRetained();
    lVar7 = lVar25;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97160();
    lVar27 = lVar2 + lVar28;
    _objc_loadWeakRetained(lVar27);
    lVar8 = lVar27;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf972a0();
    lVar16 = lVar2 + _DAT_1127455ec;
    _objc_loadWeakRetained();
    lVar18 = lVar2 + _DAT_1127455f0;
    _objc_loadWeakRetained();
    lVar14 = lVar18;
    func_0x00010c0d2660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c031e80(ppuVar11);
    _objc_release(lVar14);
    _objc_release(lVar18);
    _objc_release(lVar16);
    _objc_release(lVar8);
    _objc_release(lVar27);
    _objc_release(lVar7);
    _objc_release(lVar25);
    lVar2 = lVar2 + lVar28;
    _objc_loadWeakRetained();
    lVar25 = lVar2;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360();
    func_0x00010c222620(ppuVar11);
    _objc_release(lVar25);
    _objc_release(lVar2);
    ppuVar24 = ppuVar11;
    func_0x00010befa120(ppuVar9);
    _objc_release(ppuVar11);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar1);
LAB_1062f015c:
    _objc_release(ppuVar13);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_260) {
    ___stack_chk_fail();
    _objc_retain(ppuVar24);
    lVar25 = (long)_DAT_1127455a4;
    puVar1 = (undefined *)((long)ppuVar9 + lVar25);
    _objc_loadWeakRetained();
    puVar3 = puVar1;
    func_0x00010bf44d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (puVar3 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126c9980;
      _objc_alloc(PTR_PTR_1126c9980);
      puVar1 = (undefined *)((long)ppuVar9 + lVar25);
      _objc_loadWeakRetained(puVar1);
      puVar4 = puVar1;
      func_0x00010bf44d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000820(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar1);
      func_0x00010befa120(ppuVar24);
      _objc_release(puVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar24);
    return;
  }
  return;
}



/* Entry: 1062efba4; end: 1062f01a3; -[SCOperaSessionEntryPoint _appendPerformancePluginsIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062efba4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
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
  undefined *puVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = param_3;
  _objc_retain(param_3);
  lVar26 = (long)_DAT_1127455a4;
  lVar24 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar23 = lVar24;
  func_0x00010c15fb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar24);
  if (lVar23 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar21 = &uStack_130;
    puVar1 = param_3;
    func_0x00010bf52a60();
    puVar4 = param_3;
    if (puVar1 != (undefined8 *)0x0) {
      lVar24 = *plStack_120;
      do {
        puVar25 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar24) {
            _objc_enumerationMutation(param_3);
          }
          uVar22 = *(ulong *)(lStack_128 + (long)puVar25 * 8);
          puVar2 = PTR_PTR_1126c9970;
          _objc_opt_class(PTR_PTR_1126c9970);
          uVar3 = uVar22;
          _objc_opt_isKindOfClass(uVar22,puVar2);
          if ((uVar3 & 1) != 0) goto LAB_1062f015c;
          puVar2 = PTR_PTR_1126c9978;
          _objc_opt_class(PTR_PTR_1126c9978);
          _objc_opt_isKindOfClass(uVar22,puVar2);
          if ((uVar22 & 1) != 0) goto LAB_1062f015c;
          puVar25 = (undefined8 *)((long)puVar25 + 1);
        } while (puVar1 != puVar25);
        puVar21 = &uStack_130;
        puVar1 = param_3;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined8 *)0x0);
    }
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c9970;
    _objc_alloc();
    lVar24 = param_1 + lVar26;
    _objc_loadWeakRetained();
    lVar5 = lVar24;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2560();
    lVar23 = param_1 + lVar26;
    _objc_loadWeakRetained();
    lVar6 = lVar23;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e220();
    lVar7 = param_1 + lVar26;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe880();
    lVar9 = param_1 + lVar26;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97160();
    lVar11 = param_1 + lVar26;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf972a0();
    lVar13 = param_1 + lVar26;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c068120();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + lVar26;
    _objc_loadWeakRetained();
    func_0x00010c0681e0();
    lVar17 = param_1 + _DAT_1127455dc;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010c0ffb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011ac0();
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
    _objc_release(lVar23);
    _objc_release(lVar5);
    _objc_release(lVar24);
    lVar24 = param_1 + _DAT_1127455e8;
    _objc_loadWeakRetained(lVar24);
    lVar23 = lVar24;
    func_0x00010c2587e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar23;
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c6a0(puVar2);
    _objc_release(lVar7);
    _objc_release(lVar23);
    _objc_release(lVar24);
    if (*(long *)(param_1 + _DAT_1127455e4) != 0) {
      func_0x00010c1c4fe0(puVar2);
    }
    func_0x00010befa120(param_3);
    lVar23 = (long)_DAT_1127455c8;
    lVar24 = param_1 + lVar23;
    _objc_loadWeakRetained();
    lVar7 = lVar24;
    func_0x00010bf4d2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010bfc8e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(lVar24);
    lVar23 = param_1 + lVar23;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010bf4d2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar24;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar7;
    func_0x00010bfca520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar24);
    _objc_release(lVar23);
    puVar1 = (undefined8 *)PTR_PTR_1126c9978;
    _objc_alloc();
    lVar24 = param_1 + lVar26;
    _objc_loadWeakRetained();
    lVar16 = lVar24;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97160();
    lVar23 = param_1 + lVar26;
    _objc_loadWeakRetained(lVar23);
    lVar17 = lVar23;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf972a0();
    lVar7 = param_1 + _DAT_1127455ec;
    _objc_loadWeakRetained();
    lVar9 = param_1 + _DAT_1127455f0;
    _objc_loadWeakRetained();
    lVar5 = lVar9;
    func_0x00010c0d2660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c031e80(puVar1);
    _objc_release(lVar5);
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(lVar17);
    _objc_release(lVar23);
    _objc_release(lVar16);
    _objc_release(lVar24);
    param_1 = param_1 + lVar26;
    _objc_loadWeakRetained();
    lVar24 = param_1;
    func_0x00010c15fb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360();
    func_0x00010c222620(puVar1);
    _objc_release(lVar24);
    _objc_release(param_1);
    puVar21 = puVar1;
    func_0x00010befa120(param_3);
    _objc_release(puVar1);
    _objc_release(lVar13);
    _objc_release(lVar11);
    _objc_release(puVar2);
LAB_1062f015c:
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar21);
    lVar24 = (long)_DAT_1127455a4;
    puVar2 = (undefined *)((long)param_3 + lVar24);
    _objc_loadWeakRetained();
    puVar19 = puVar2;
    func_0x00010bf44d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    if (puVar19 != (undefined *)0x0) {
      puVar19 = PTR_PTR_1126c9980;
      _objc_alloc(PTR_PTR_1126c9980);
      puVar2 = (undefined *)((long)param_3 + lVar24);
      _objc_loadWeakRetained(puVar2);
      puVar20 = puVar2;
      func_0x00010bf44d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000820(puVar19);
      _objc_release(puVar20);
      _objc_release(puVar2);
      func_0x00010befa120(puVar21);
      _objc_release(puVar19);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar21);
    return;
  }
  return;
}



/* Entry: 1062f01a4; end: 1062f0273; -[SCOperaSessionEntryPoint _appendComposerEventPluginIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062f01a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_1127455a4;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf44d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126c9980;
    _objc_alloc(PTR_PTR_1126c9980);
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf44d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000820(puVar3,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
    func_0x00010befa120(param_3,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062f0274; end: 1062f029b; -[SCOperaSessionEntryPoint _addScrollAffordancePluginIfNeeded:] */

void FUN_1062f0274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062f029c; end: 1062f02eb; -[SCOperaSessionEntryPoint _addOperaAmbientAudioBehaviorPluginIfNeeded:] */

void FUN_1062f029c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9988;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010befa120(param_3,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062f02ec; end: 1062f046b; -[SCOperaSessionEntryPoint _operaSessionIdWithPlugins:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062f02ec(undefined8 param_1,undefined8 param_2,undefined *param_3)

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
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  do {
    if (puVar1 == (undefined *)0x0) {
      puVar1 = param_3;
      _objc_release();
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
LAB_1062f0428:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
        ___stack_chk_fail();
        puVar15 = PTR_PTR_1126b23c8;
        _objc_opt_new(PTR_PTR_1126b23c8);
        puVar1 = param_3 + _DAT_1127455f4;
        _objc_loadWeakRetained(puVar1);
        puVar14 = puVar1;
        func_0x00010c15fac0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar14;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a8c80(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_1127455f8;
        _objc_loadWeakRetained(puVar1);
        puVar14 = puVar1;
        func_0x00010c293fc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bc420(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_1127455fc;
        _objc_loadWeakRetained(puVar1);
        puVar14 = puVar1;
        func_0x00010bfcdfa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2aef00(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_112745600;
        _objc_loadWeakRetained(puVar1);
        puVar14 = puVar1;
        func_0x00010bf157e0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar14;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b45e0(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_112745604;
        _objc_loadWeakRetained(puVar1);
        puVar14 = puVar1;
        func_0x00010bf17600();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a92a0(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_112745608;
        _objc_loadWeakRetained(puVar1);
        puVar14 = puVar1;
        func_0x00010c25e020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2abae0(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar1);
        lVar13 = (long)_DAT_11274560c;
        puVar1 = param_3 + lVar13;
        _objc_loadWeakRetained(puVar1);
        puVar14 = puVar1;
        func_0x00010c22a220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b8580(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar1 = param_3 + lVar13;
        _objc_loadWeakRetained(puVar1);
        puVar14 = puVar1;
        func_0x00010c08d520();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b8560(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_112745610;
        _objc_loadWeakRetained(puVar1);
        puVar14 = puVar1;
        func_0x00010c100e20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b5760(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_112745614;
        _objc_loadWeakRetained(puVar1);
        puVar14 = puVar1;
        func_0x00010c0ea6a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2ab040(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_112745618;
        _objc_loadWeakRetained(puVar1);
        puVar14 = puVar1;
        func_0x00010bf70ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar14;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2ac3a0(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar14 = PTR_PTR_1126c9990;
        _objc_alloc(PTR_PTR_1126c9990);
        puVar1 = param_3 + _DAT_11274561c;
        _objc_loadWeakRetained(puVar1);
        puVar12 = puVar1;
        func_0x00010bf10b80();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03f100(puVar14);
        func_0x00010c2b2fc0(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar11);
        _objc_release(puVar12);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_112745620;
        _objc_loadWeakRetained(puVar1);
        puVar14 = puVar1;
        func_0x00010bf5f860();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2ab820(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_112745624;
        _objc_loadWeakRetained();
        puVar14 = puVar1;
        func_0x00010bf82be0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar14;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b6cc0(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar12 = PTR_PTR_1126c9998;
        _objc_alloc();
        puVar1 = param_3 + _DAT_112745628;
        _objc_loadWeakRetained();
        puVar14 = puVar1;
        func_0x00010c0d79a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c002280(puVar12);
        func_0x00010c2b6ca0(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar14 = PTR_PTR_1126c5b30;
        _objc_alloc(PTR_PTR_1126c5b30);
        puVar1 = param_3 + _DAT_1127455d0;
        _objc_loadWeakRetained(puVar1);
        puVar12 = puVar1;
        func_0x00010bf398e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bffe1e0();
        func_0x00010c2bc220(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar12);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_11274562c;
        _objc_loadWeakRetained();
        puVar12 = puVar1;
        func_0x00010c1490a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b76c0(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar12);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_112745630;
        _objc_loadWeakRetained();
        puVar14 = puVar1;
        func_0x00010bf62b80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2abc00(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_112745634;
        _objc_loadWeakRetained();
        puVar14 = puVar1;
        func_0x00010c295440();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bc4a0(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar1);
        lVar13 = (long)_DAT_1127455cc;
        puVar1 = param_3 + lVar13;
        _objc_loadWeakRetained();
        puVar14 = puVar1;
        func_0x00010bf461c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2aac20(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar1 = param_3 + lVar13;
        _objc_loadWeakRetained(puVar1);
        puVar12 = puVar1;
        func_0x00010bf461c0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar12;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b0000(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar12);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_1127455c4;
        _objc_loadWeakRetained();
        puVar14 = puVar1;
        func_0x00010c0c4120();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b4e60(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_112745638;
        _objc_loadWeakRetained();
        func_0x00010c2aaba0(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar1);
        lVar13 = (long)_DAT_11274563c;
        puVar1 = param_3 + lVar13;
        _objc_loadWeakRetained();
        puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
        _objc_opt_class();
        puVar14 = puVar1;
        _objc_opt_isKindOfClass(puVar1,puVar12);
        if (((ulong)puVar14 & 1) == 0) {
          puVar14 = param_3 + lVar13;
          _objc_loadWeakRetained();
        }
        else {
          puVar14 = (undefined *)0x0;
        }
        _objc_release(puVar1);
        func_0x00010c2ae420(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar13 = (long)_DAT_112745640;
        puVar1 = param_3 + lVar13;
        _objc_loadWeakRetained();
        puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
        _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
        puVar11 = puVar1;
        _objc_opt_isKindOfClass(puVar1,puVar12);
        if (((ulong)puVar11 & 1) == 0) {
          puVar12 = param_3 + lVar13;
          _objc_loadWeakRetained();
        }
        else {
          puVar12 = (undefined *)0x0;
        }
        _objc_release(puVar1);
        func_0x00010c2abd60(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar1 = param_3 + _DAT_112745644;
        _objc_loadWeakRetained(puVar1);
        puVar11 = puVar1;
        func_0x00010c0dc640();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b4940(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar11);
        _objc_release(puVar1);
        puVar1 = param_3 + _DAT_112745648;
        _objc_loadWeakRetained(puVar1);
        puVar11 = puVar1;
        func_0x00010bf13100();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a93a0(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar11);
        _objc_release(puVar1);
        puVar2 = PTR_PTR_1126c99a0;
        _objc_alloc();
        puVar1 = param_3 + _DAT_11274564c;
        _objc_loadWeakRetained();
        puVar3 = puVar1;
        func_0x00010c14c340();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = (long)_DAT_112745650;
        puVar11 = param_3 + lVar13;
        _objc_loadWeakRetained(puVar11);
        puVar4 = puVar11;
        func_0x00010c2a4360();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_3 + lVar13;
        _objc_loadWeakRetained(puVar5);
        puVar6 = puVar5;
        func_0x00010c2a43e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = param_3 + _DAT_112745654;
        _objc_loadWeakRetained(puVar7);
        puVar8 = puVar7;
        func_0x00010c156d60();
        _objc_retainAutoreleasedReturnValue();
        param_3 = param_3 + _DAT_112745658;
        _objc_loadWeakRetained(param_3);
        puVar9 = param_3;
        func_0x00010c2a3420();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c062c40(puVar2);
        func_0x00010c2bcc60(puVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar9);
        _objc_release(param_3);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar11);
        _objc_release(puVar3);
        _objc_release(puVar1);
        puVar1 = puVar15;
        func_0x00010bf21f60(puVar15);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar14);
        _objc_release(puVar15);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
      return;
    }
    puVar15 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(param_3);
      }
      puVar14 = PTR_PTR_1126c9978;
      puVar11 = *(undefined **)((long)puVar15 * 8);
      _objc_retain(puVar11);
      _objc_opt_class(puVar14);
      puVar12 = puVar11;
      _objc_opt_isKindOfClass(puVar11,puVar14);
      puVar14 = puVar11;
      if (((ulong)puVar12 & 1) == 0) {
        puVar14 = (undefined *)0x0;
      }
      _objc_retain(puVar14);
      _objc_release(puVar11);
      if (puVar14 != (undefined *)0x0) {
        puVar1 = puVar11;
        func_0x00010c0eb3e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        _objc_release(param_3);
        goto LAB_1062f0428;
      }
      puVar15 = puVar15 + 1;
    } while (puVar1 != puVar15);
    puVar1 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1062f046c; end: 1062f0e9f; -[SCOperaSessionEntryPoint _buildOperaDependencies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062f046c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
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
  
  puVar1 = PTR_PTR_1126b23c8;
  _objc_opt_new(PTR_PTR_1126b23c8);
  lVar15 = param_1 + _DAT_1127455f4;
  _objc_loadWeakRetained(lVar15);
  lVar14 = lVar15;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8c80(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar14);
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_1127455f8;
  _objc_loadWeakRetained(lVar15);
  lVar14 = lVar15;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc420(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_1127455fc;
  _objc_loadWeakRetained(lVar15);
  lVar14 = lVar15;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aef00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_112745600;
  _objc_loadWeakRetained(lVar15);
  lVar14 = lVar15;
  func_0x00010bf157e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b45e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar14);
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_112745604;
  _objc_loadWeakRetained(lVar15);
  lVar14 = lVar15;
  func_0x00010bf17600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a92a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_112745608;
  _objc_loadWeakRetained(lVar15);
  lVar14 = lVar15;
  func_0x00010c25e020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2abae0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar15);
  lVar14 = (long)_DAT_11274560c;
  lVar15 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar15);
  lVar2 = lVar15;
  func_0x00010c22a220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b8580(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar15);
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar14);
  lVar15 = lVar14;
  func_0x00010c08d520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b8560(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(lVar14);
  lVar15 = param_1 + _DAT_112745610;
  _objc_loadWeakRetained(lVar15);
  lVar14 = lVar15;
  func_0x00010c100e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5760(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_112745614;
  _objc_loadWeakRetained(lVar15);
  lVar14 = lVar15;
  func_0x00010c0ea6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab040(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_112745618;
  _objc_loadWeakRetained(lVar15);
  lVar14 = lVar15;
  func_0x00010bf70ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac3a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar14);
  _objc_release(lVar15);
  puVar3 = PTR_PTR_1126c9990;
  _objc_alloc(PTR_PTR_1126c9990);
  lVar15 = param_1 + _DAT_11274561c;
  _objc_loadWeakRetained(lVar15);
  lVar14 = lVar15;
  func_0x00010bf10b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f100(puVar3);
  func_0x00010c2b2fc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar14);
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_112745620;
  _objc_loadWeakRetained(lVar15);
  lVar14 = lVar15;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab820(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_112745624;
  _objc_loadWeakRetained();
  lVar2 = lVar15;
  func_0x00010bf82be0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6cc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar2);
  _objc_release(lVar15);
  puVar3 = PTR_PTR_1126c9998;
  _objc_alloc();
  lVar15 = param_1 + _DAT_112745628;
  _objc_loadWeakRetained();
  lVar14 = lVar15;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002280();
  func_0x00010c2b6ca0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar14);
  _objc_release(lVar15);
  puVar3 = PTR_PTR_1126c5b30;
  _objc_alloc(PTR_PTR_1126c5b30);
  lVar15 = param_1 + _DAT_1127455d0;
  _objc_loadWeakRetained();
  lVar14 = lVar15;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0();
  func_0x00010c2bc220(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar14);
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_11274562c;
  _objc_loadWeakRetained();
  lVar2 = lVar15;
  func_0x00010c1490a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b76c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar2);
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_112745630;
  _objc_loadWeakRetained();
  lVar14 = lVar15;
  func_0x00010bf62b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2abc00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_112745634;
  _objc_loadWeakRetained();
  lVar14 = lVar15;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc4a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar15);
  lVar14 = (long)_DAT_1127455cc;
  lVar15 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar2 = lVar15;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aac20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar15);
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar14);
  lVar15 = lVar14;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b0000(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar15);
  _objc_release(lVar14);
  lVar15 = param_1 + _DAT_1127455c4;
  _objc_loadWeakRetained();
  lVar14 = lVar15;
  func_0x00010c0c4120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b4e60(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar15);
  lVar15 = param_1 + _DAT_112745638;
  _objc_loadWeakRetained();
  func_0x00010c2aaba0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar15 = (long)_DAT_11274563c;
  uVar4 = param_1 + lVar15;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_opt_class();
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  if ((uVar5 & 1) == 0) {
    lVar15 = param_1 + lVar15;
    _objc_loadWeakRetained();
  }
  else {
    lVar15 = 0;
  }
  _objc_release(uVar4);
  func_0x00010c2ae420(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112745640;
  uVar4 = param_1 + lVar14;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  if ((uVar5 & 1) == 0) {
    lVar14 = param_1 + lVar14;
    _objc_loadWeakRetained();
  }
  else {
    lVar14 = 0;
  }
  _objc_release(uVar4);
  func_0x00010c2abd60(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112745644;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b4940(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112745648;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a93a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126c99a0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11274564c;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010c14c340();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112745650;
  lVar6 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar6);
  lVar8 = lVar6;
  func_0x00010c2a4360();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar13);
  lVar9 = lVar13;
  func_0x00010c2a43e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112745654;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010c156d60();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112745658;
  _objc_loadWeakRetained(param_1);
  lVar12 = param_1;
  func_0x00010c2a3420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062c40(puVar3);
  func_0x00010c2bcc60(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar13);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar2);
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar15);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062f0ea0; end: 1062f127b; -[SCOperaSessionEntryPoint _buildOperaConfigurationWithPresentingConfig:factoryPlugins:configProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062f0ea0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  float fVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  FUN_10631253c(param_3,puVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar4 = lVar2;
  func_0x00010bf61820(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf529e0(param_4);
  func_0x00010bf0a0e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar2;
  func_0x00010bf61820(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar5);
  _objc_release(lVar4);
  uVar6 = param_4;
  func_0x00010bf00560(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010befa160(puVar5);
  _objc_release(uVar6);
  func_0x00010c2aba40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac940(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5c40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127455d0;
  _objc_loadWeakRetained(lVar4);
  lVar7 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c0d6c60();
  _objc_release(param_3);
  if (lVar4 == 1) {
    param_3 = lVar7;
    func_0x000109128d50(lVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000109128e18();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c2ada80(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf1f440(param_5);
  func_0x00010c2acec0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127455a4;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c15fb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29e220();
  puVar8 = PTR_PTR_1126c99b8;
  _objc_retain(param_5);
  _objc_alloc_init(puVar8);
  func_0x00010c182be0();
  puVar9 = PTR_PTR_1126ae780;
  _objc_alloc_init(PTR_PTR_1126ae780);
  func_0x00010c1d5760();
  fVar11 = 0.1;
  func_0x00010bfb2cc0(0x3dcccccd,param_5);
  _objc_release(param_5);
  func_0x00010c232700((double)(fVar11 * 100.0),PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c2acea0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(param_1);
  func_0x00010c2b49a0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    if (lRam00000001136c3790 != -1) {
      func_0x00010002a2fc(0x1136c3790,&PTR___NSConcreteGlobalBlock_11091bd48);
    }
    if ((bRam00000001136c3788 & 1) != 0) {
      _objc_alloc(PTR_PTR_1126c99b0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062f127c; end: 1062f12d3; -[SCOperaSessionEntryPoint _buildTestsHelperPlugin] */

void FUN_1062f127c(void)

{
  if (lRam00000001136c3790 != -1) {
    func_0x00010002a2fc(0x1136c3790,&PTR___NSConcreteGlobalBlock_11091bd48);
  }
  if ((bRam00000001136c3788 & 1) != 0) {
    _objc_alloc(PTR_PTR_1126c99b0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062f12d4; end: 1062f12d7; -[SCOperaSessionEntryPoint _setupDebugOverlay] */

void FUN_1062f12d4(void)

{
  return;
}



/* Entry: 1062f12d8; end: 1062f12db; -[SCOperaSessionEntryPoint _teardownDebugOverlay] */

void FUN_1062f12d8(void)

{
  return;
}



/* Entry: 1062f12dc; end: 1062f12eb; -[SCOperaSessionEntryPoint presenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062f12dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127455b0);
}



/* Entry: 1062f12ec; end: 1062f132b; -[SCOperaSessionEntryPoint setPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062f12ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127455b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062f132c; end: 1062f15fb; -[SCOperaSessionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062f132c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127455bc);
  _objc_storeStrong(param_1 + _DAT_1127455b8,0);
  _objc_destroyWeak(param_1 + _DAT_1127455ac);
  _objc_destroyWeak(param_1 + _DAT_1127455a8);
  _objc_destroyWeak(param_1 + _DAT_1127455c8);
  _objc_destroyWeak(param_1 + _DAT_1127455d8);
  _objc_destroyWeak(param_1 + _DAT_112745658);
  _objc_destroyWeak(param_1 + _DAT_112745654);
  _objc_destroyWeak(param_1 + _DAT_11274564c);
  _objc_destroyWeak(param_1 + _DAT_1127455f0);
  _objc_destroyWeak(param_1 + _DAT_1127455ec);
  _objc_destroyWeak(param_1 + _DAT_112745648);
  _objc_destroyWeak(param_1 + _DAT_112745640);
  _objc_destroyWeak(param_1 + _DAT_112745644);
  _objc_destroyWeak(param_1 + _DAT_11274563c);
  _objc_destroyWeak(param_1 + _DAT_1127455c4);
  _objc_destroyWeak(param_1 + _DAT_112745650);
  _objc_destroyWeak(param_1 + _DAT_1127455e0);
  _objc_destroyWeak(param_1 + _DAT_1127455d4);
  _objc_destroyWeak(param_1 + _DAT_1127455cc);
  _objc_destroyWeak(param_1 + _DAT_112745638);
  _objc_destroyWeak(param_1 + _DAT_112745634);
  _objc_destroyWeak(param_1 + _DAT_112745624);
  _objc_destroyWeak(param_1 + _DAT_112745628);
  _objc_destroyWeak(param_1 + _DAT_112745630);
  _objc_destroyWeak(param_1 + _DAT_1127455c0);
  _objc_destroyWeak(param_1 + _DAT_1127455dc);
  _objc_destroyWeak(param_1 + _DAT_112745614);
  _objc_destroyWeak(param_1 + _DAT_1127455e8);
  _objc_destroyWeak(param_1 + _DAT_112745610);
  _objc_destroyWeak(param_1 + _DAT_11274560c);
  _objc_destroyWeak(param_1 + _DAT_112745608);
  _objc_destroyWeak(param_1 + _DAT_112745604);
  _objc_destroyWeak(param_1 + _DAT_112745600);
  _objc_destroyWeak(param_1 + _DAT_1127455fc);
  _objc_destroyWeak(param_1 + _DAT_1127455f8);
  _objc_destroyWeak(param_1 + _DAT_1127455f4);
  _objc_destroyWeak(param_1 + _DAT_1127455d0);
  _objc_destroyWeak(param_1 + _DAT_11274561c);
  _objc_destroyWeak(param_1 + _DAT_112745618);
  _objc_destroyWeak(param_1 + _DAT_11274562c);
  _objc_destroyWeak(param_1 + _DAT_112745660);
  _objc_destroyWeak(param_1 + _DAT_112745620);
  _objc_destroyWeak(param_1 + _DAT_1127455a4);
  _objc_destroyWeak(param_1 + _DAT_11274565c);
  _objc_storeStrong(param_1 + _DAT_1127455b0,0);
  _objc_storeStrong(param_1 + _DAT_1127455e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127455b4,0);
  return;
}



/* Entry: 1062f15fc; end: 1062f166f; -[SCOperaPlaylistCompositePrefetcherProvider initWithPrefetchProviders:] */

undefined1 * FUN_1062f15fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0e00;
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



/* Entry: 1062f1670; end: 1062f17e3; -[SCOperaPlaylistCompositePrefetcherProvider prefetchRequestFromPlaylistItem:prefetchSignals:importance:] */

void FUN_1062f1670(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined **unaff_x23;
  undefined *unaff_x24;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  ulong uVar26;
  undefined **unaff_x28;
  undefined8 uVar27;
  long lVar28;
  undefined8 uStack_760;
  long lStack_758;
  long *plStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined1 auStack_720 [128];
  long lStack_6a0;
  undefined8 uStack_690;
  undefined **ppuStack_688;
  undefined **ppuStack_680;
  undefined8 *puStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined1 *puStack_658;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  undefined8 ***pppuStack_640;
  code *pcStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  long lStack_608;
  undefined8 *puStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined1 auStack_5d0 [128];
  long lStack_550;
  undefined8 uStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined8 *puStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 *puStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_480 [128];
  long lStack_400;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined **ppuStack_3c8;
  undefined1 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined **ppuStack_3b0;
  undefined8 *puStack_3a8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [128];
  long lStack_2d0;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined1 *puStack_280;
  undefined8 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined8 *puStack_148;
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
  long lStack_70;
  
  puVar24 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar18 = *(undefined ***)(param_1 + 8);
  _objc_retain(ppuVar18);
  puVar6 = auStack_f0;
  ppuVar1 = ppuVar18;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*plStack_120;
    unaff_x27 = &PTR_s_posterDisplayName_11261f000;
    unaff_x23 = ppuVar1;
    do {
      unaff_x24 = PTR_s_prefetchRequestFromPlaylistItem__11261f968;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(ppuVar18);
        }
        puVar21 = *(undefined **)(lStack_128 + (long)unaff_x28 * 8);
        puVar22 = puVar21;
        _objc_opt_respondsToSelector(puVar21,unaff_x24);
        if (((ulong)puVar22 & 1) != 0) {
          puVar24 = param_3;
          puVar6 = param_4;
          func_0x00010c107d20();
          _objc_retainAutoreleasedReturnValue();
          if (puVar21 != (undefined *)0x0) goto LAB_1062f178c;
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (unaff_x23 != unaff_x28);
      puVar6 = auStack_f0;
      unaff_x23 = ppuVar18;
      puVar24 = &uStack_130;
      func_0x00010bf52a60();
    } while (unaff_x23 != (undefined **)0x0);
  }
  puVar21 = (undefined *)0x0;
LAB_1062f178c:
  _objc_release(ppuVar18);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar15 = &uStack_260;
    pcStack_138 = FUN_1062f17e4;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_190 = unaff_x28;
    ppuStack_188 = unaff_x27;
    ppuStack_180 = unaff_x26;
    puStack_178 = puVar21;
    puStack_170 = unaff_x24;
    ppuStack_168 = unaff_x23;
    ppuStack_160 = ppuVar18;
    uStack_158 = param_5;
    puStack_150 = param_4;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar24);
    _objc_retain(puVar6);
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    puStack_250 = (undefined8 *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    ppuVar17 = (undefined **)puVar2[1];
    _objc_retain(ppuVar17);
    puVar7 = auStack_218;
    uVar8 = 0x10;
    ppuVar1 = ppuVar17;
    func_0x00010bf52a60();
    puVar22 = puVar21;
    if (ppuVar1 != (undefined **)0x0) {
      puVar22 = (undefined *)*puStack_250;
      unaff_x26 = &PTR_s_standardCell_112671000;
      ppuVar18 = ppuVar1;
      do {
        unaff_x23 = (undefined **)PTR_s_startPrefetchForPlaylistItem_com_112671a20;
        unaff_x27 = (undefined **)0x0;
        do {
          if ((undefined *)*puStack_250 != puVar22) {
            _objc_enumerationMutation(ppuVar17);
          }
          puVar21 = *(undefined **)(lStack_258 + (long)unaff_x27 * 8);
          puVar23 = puVar21;
          _objc_opt_respondsToSelector(puVar21,unaff_x23);
          if (((ulong)puVar23 & 1) != 0) {
            puVar15 = puVar24;
            puVar7 = puVar6;
            func_0x00010c24ffe0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar21 != (undefined *)0x0) goto LAB_1062f18f8;
          }
          unaff_x27 = (undefined **)((long)unaff_x27 + 1);
        } while (ppuVar18 != unaff_x27);
        puVar7 = auStack_218;
        uVar8 = 0x10;
        ppuVar18 = ppuVar17;
        puVar15 = &uStack_260;
        func_0x00010bf52a60();
      } while (ppuVar18 != (undefined **)0x0);
    }
    puVar21 = (undefined *)0x0;
LAB_1062f18f8:
    _objc_release(ppuVar17);
    _objc_release(puVar6);
    puVar2 = puVar24;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      puVar3 = &uStack_390;
      pcStack_268 = FUN_1062f1950;
      lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuStack_2c0 = unaff_x28;
      ppuStack_2b8 = unaff_x27;
      ppuStack_2b0 = unaff_x26;
      puStack_2a8 = puVar22;
      puStack_2a0 = puVar21;
      ppuStack_298 = unaff_x23;
      ppuStack_290 = ppuVar18;
      ppuStack_288 = ppuVar17;
      puStack_280 = puVar6;
      puStack_278 = puVar24;
      ppuStack_270 = &puStack_140;
      _objc_retain(puVar15);
      lStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      plStack_380 = (long *)0x0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      ppuVar18 = (undefined **)puVar2[1];
      _objc_retain(ppuVar18);
      puVar6 = auStack_350;
      uVar9 = 0x10;
      ppuVar1 = ppuVar18;
      func_0x00010bf52a60();
      if (ppuVar1 != (undefined **)0x0) {
        unaff_x26 = (undefined **)*plStack_380;
        unaff_x27 = &PTR_s_posterDisplayName_11261f000;
        unaff_x23 = ppuVar1;
        do {
          puVar21 = PTR_s_prefetchRequestForPlaylistItem_r_11261f958;
          unaff_x28 = (undefined **)0x0;
          do {
            if ((undefined **)*plStack_380 != unaff_x26) {
              _objc_enumerationMutation(ppuVar18);
            }
            puVar23 = *(undefined **)(lStack_388 + (long)unaff_x28 * 8);
            puVar22 = puVar23;
            _objc_opt_respondsToSelector(puVar23,puVar21);
            if (((ulong)puVar22 & 1) != 0) {
              puVar3 = puVar15;
              puVar6 = puVar7;
              uVar9 = uVar8;
              func_0x00010c107ce0();
              _objc_retainAutoreleasedReturnValue();
              puVar22 = puVar21;
              if (puVar23 != (undefined *)0x0) goto LAB_1062f1a64;
            }
            unaff_x28 = (undefined **)((long)unaff_x28 + 1);
          } while (unaff_x23 != unaff_x28);
          puVar6 = auStack_350;
          uVar9 = 0x10;
          unaff_x23 = ppuVar18;
          puVar3 = &uStack_390;
          func_0x00010bf52a60();
        } while (unaff_x23 != (undefined **)0x0);
      }
      puVar22 = puVar21;
      puVar23 = (undefined *)0x0;
LAB_1062f1a64:
      puVar21 = puVar23;
      _objc_release(ppuVar18);
      puVar24 = puVar15;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d0) {
        ___stack_chk_fail();
        uVar12 = uStack_390;
        pcStack_398 = FUN_1062f1ab4;
        lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar10 = param_6;
        uVar13 = param_8;
        uStack_4d8 = param_7;
        ppuStack_3f0 = unaff_x28;
        ppuStack_3e8 = unaff_x27;
        ppuStack_3e0 = unaff_x26;
        puStack_3d8 = puVar21;
        puStack_3d0 = puVar22;
        ppuStack_3c8 = unaff_x23;
        puStack_3c0 = puVar7;
        uStack_3b8 = uVar8;
        ppuStack_3b0 = ppuVar18;
        puStack_3a8 = puVar15;
        pppuStack_3a0 = &ppuStack_270;
        _objc_retain(puVar3);
        _objc_retain(puVar6);
        _objc_retain(uVar9);
        _objc_retain(param_6);
        _objc_retain(param_8);
        _objc_retain(uVar12);
        lStack_4b8 = 0;
        uStack_4c0 = 0;
        uStack_4a8 = 0;
        puStack_4b0 = (undefined8 *)0x0;
        uStack_498 = 0;
        uStack_4a0 = 0;
        uStack_488 = 0;
        uStack_490 = 0;
        ppuVar18 = (undefined **)puVar24[1];
        _objc_retain(ppuVar18);
        puVar2 = &uStack_4c0;
        puVar7 = auStack_480;
        uVar8 = 0x10;
        ppuVar1 = ppuVar18;
        func_0x00010bf52a60();
        if (ppuVar1 != (undefined **)0x0) {
          puVar15 = (undefined8 *)*puStack_4b0;
          uStack_4d0 = uVar12;
          uStack_4c8 = param_8;
          do {
            puVar21 = PTR_s_generatePrefetchRequestsForGroup_1125cd938;
            ppuVar17 = (undefined **)0x0;
            do {
              if ((undefined8 *)*puStack_4b0 != puVar15) {
                _objc_enumerationMutation(ppuVar18);
              }
              puVar24 = *(undefined8 **)(lStack_4b8 + (long)ppuVar17 * 8);
              puVar2 = puVar24;
              _objc_opt_respondsToSelector(puVar24,puVar21);
              param_8 = uStack_4c8;
              uVar12 = uStack_4d0;
              if (((ulong)puVar2 & 1) != 0) {
                uStack_4e0 = uStack_4d0;
                puVar2 = puVar3;
                puVar7 = puVar6;
                uVar8 = uVar9;
                uVar10 = param_6;
                param_7 = uStack_4d8;
                uVar13 = uStack_4c8;
                func_0x00010bfbfe40(puVar24);
                unaff_x27 = ppuVar1;
                goto LAB_1062f1c3c;
              }
              ppuVar17 = (undefined **)((long)ppuVar17 + 1);
            } while (ppuVar1 != ppuVar17);
            puVar2 = &uStack_4c0;
            puVar7 = auStack_480;
            uVar8 = 0x10;
            ppuVar1 = ppuVar18;
            func_0x00010bf52a60();
            param_8 = uStack_4c8;
            unaff_x27 = ppuVar1;
            uVar12 = uStack_4d0;
          } while (ppuVar1 != (undefined **)0x0);
        }
LAB_1062f1c3c:
        _objc_release(ppuVar18);
        _objc_release(uVar12);
        _objc_release(param_8);
        _objc_release(param_6);
        _objc_release(uVar9);
        _objc_release(puVar6);
        puVar25 = puVar3;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
          return;
        }
        ___stack_chk_fail();
        uVar27 = uStack_4e0;
        pcStack_4e8 = FUN_1062f1cb0;
        lStack_550 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar11 = uVar10;
        uVar14 = uVar13;
        uStack_628 = param_7;
        uStack_540 = uVar12;
        ppuStack_538 = unaff_x27;
        ppuStack_530 = ppuVar18;
        puStack_528 = puVar24;
        uStack_520 = param_8;
        uStack_518 = param_6;
        uStack_510 = uVar9;
        puStack_508 = puVar6;
        puStack_500 = puVar3;
        puStack_4f8 = puVar15;
        pppuStack_4f0 = &pppuStack_3a0;
        _objc_retain(puVar2);
        _objc_retain(puVar7);
        _objc_retain(uVar8);
        _objc_retain(uVar10);
        _objc_retain(uVar13);
        _objc_retain(uVar27);
        lStack_608 = 0;
        uStack_610 = 0;
        uStack_5f8 = 0;
        puStack_600 = (undefined8 *)0x0;
        uStack_5e8 = 0;
        uStack_5f0 = 0;
        uStack_5d8 = 0;
        uStack_5e0 = 0;
        ppuVar18 = (undefined **)puVar25[1];
        _objc_retain(ppuVar18);
        puVar24 = &uStack_610;
        puVar6 = auStack_5d0;
        uVar9 = 0x10;
        ppuVar1 = ppuVar18;
        func_0x00010bf52a60();
        if (ppuVar1 != (undefined **)0x0) {
          puVar15 = (undefined8 *)*puStack_600;
          uStack_620 = uVar27;
          uStack_618 = uVar13;
          do {
            puVar21 = PTR_s_generateSnapDocPrefetchRequestsF_1125cda08;
            ppuVar17 = (undefined **)0x0;
            do {
              if ((undefined8 *)*puStack_600 != puVar15) {
                _objc_enumerationMutation(ppuVar18);
              }
              puVar25 = *(undefined8 **)(lStack_608 + (long)ppuVar17 * 8);
              puVar24 = puVar25;
              _objc_opt_respondsToSelector(puVar25,puVar21);
              uVar13 = uStack_618;
              uVar27 = uStack_620;
              if (((ulong)puVar24 & 1) != 0) {
                uStack_630 = uStack_620;
                puVar24 = puVar2;
                puVar6 = puVar7;
                uVar9 = uVar8;
                uVar11 = uVar10;
                param_7 = uStack_628;
                uVar14 = uStack_618;
                func_0x00010bfc0180(puVar25);
                unaff_x27 = ppuVar1;
                goto LAB_1062f1e38;
              }
              ppuVar17 = (undefined **)((long)ppuVar17 + 1);
            } while (ppuVar1 != ppuVar17);
            puVar24 = &uStack_610;
            puVar6 = auStack_5d0;
            uVar9 = 0x10;
            ppuVar1 = ppuVar18;
            func_0x00010bf52a60();
            uVar13 = uStack_618;
            unaff_x27 = ppuVar1;
            uVar27 = uStack_620;
          } while (ppuVar1 != (undefined **)0x0);
        }
LAB_1062f1e38:
        _objc_release(ppuVar18);
        _objc_release(uVar27);
        _objc_release(uVar13);
        _objc_release(uVar10);
        _objc_release(uVar8);
        _objc_release(puVar7);
        puVar3 = puVar2;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_550) {
          return;
        }
        ___stack_chk_fail();
        pcStack_638 = FUN_1062f1eac;
        lStack_6a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar12 = param_7;
        uStack_690 = uVar27;
        ppuStack_688 = unaff_x27;
        ppuStack_680 = ppuVar18;
        puStack_678 = puVar25;
        uStack_670 = uVar13;
        uStack_668 = uVar10;
        uStack_660 = uVar8;
        puStack_658 = puVar7;
        puStack_650 = puVar2;
        puStack_648 = puVar15;
        pppuStack_640 = &pppuStack_4f0;
        _objc_retain(puVar24);
        _objc_retain(uVar11);
        _objc_retain(param_7);
        lStack_758 = 0;
        uStack_760 = 0;
        uStack_748 = 0;
        plStack_750 = (long *)0x0;
        uStack_738 = 0;
        uStack_740 = 0;
        uStack_728 = 0;
        uStack_730 = 0;
        lVar20 = puVar3[1];
        _objc_retain(lVar20);
        puVar2 = &uStack_760;
        puVar7 = auStack_720;
        uVar8 = 0x10;
        lVar4 = lVar20;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          lVar28 = *plStack_750;
          do {
            puVar21 = PTR_s_generateHLSPrefetchRequestForFor_1125cd720;
            lVar19 = 0;
            do {
              if (*plStack_750 != lVar28) {
                _objc_enumerationMutation(lVar20);
              }
              uVar26 = *(ulong *)(lStack_758 + lVar19 * 8);
              uVar5 = uVar26;
              _objc_opt_respondsToSelector(uVar26,puVar21);
              if ((uVar5 & 1) != 0) {
                puVar2 = puVar24;
                uVar12 = param_7;
                func_0x00010bfbf5e0(uVar26);
                puVar7 = puVar6;
                uVar8 = uVar9;
                goto LAB_1062f1fcc;
              }
              lVar19 = lVar19 + 1;
            } while (lVar4 != lVar19);
            puVar2 = &uStack_760;
            puVar7 = auStack_720;
            uVar8 = 0x10;
            lVar4 = lVar20;
            func_0x00010bf52a60();
          } while (lVar4 != 0);
        }
LAB_1062f1fcc:
        _objc_release(lVar20);
        _objc_release(param_7);
        _objc_release(uVar11);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a0) {
          return;
        }
        ___stack_chk_fail();
        lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(puVar2);
        _objc_retain(puVar7);
        _objc_retain(uVar8);
        _objc_retain(uVar12);
        _objc_retain(uVar14);
        lVar19 = puVar24[1];
        _objc_retain(lVar19);
        lVar4 = lVar19;
        func_0x00010bf52a60();
        lVar20 = lRam0000000000000000;
        puVar22 = PTR_s_startPrefetchForGroupId_prefetch_112671a18;
        while (PTR_s_startPrefetchForGroupId_prefetch_112671a18 = puVar22, lVar4 != 0) {
          lVar16 = 0;
          do {
            if (lRam0000000000000000 != lVar20) {
              _objc_enumerationMutation(lVar19);
            }
            puVar21 = *(undefined **)(lVar16 * 8);
            puVar23 = puVar21;
            _objc_opt_respondsToSelector(puVar21,puVar22);
            if (((ulong)puVar23 & 1) != 0) {
              func_0x00010c24ffc0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar21 != (undefined *)0x0) goto LAB_1062f2178;
            }
            lVar16 = lVar16 + 1;
          } while (lVar4 != lVar16);
          lVar4 = lVar19;
          func_0x00010bf52a60();
          puVar22 = PTR_s_startPrefetchForGroupId_prefetch_112671a18;
        }
        puVar21 = (undefined *)0x0;
LAB_1062f2178:
        _objc_release(lVar19);
        _objc_release(uVar14);
        _objc_release(uVar12);
        _objc_release(uVar8);
        _objc_release(puVar7);
        _objc_release(puVar2);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar28) {
          ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 1062f17e4; end: 1062f194f; -[SCOperaPlaylistCompositePrefetcherProvider startPrefetchForPlaylistItem:completion:] */

void FUN_1062f17e4(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined **ppuVar19;
  long lVar20;
  undefined *unaff_x23;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined **unaff_x26;
  undefined **unaff_x27;
  ulong uVar27;
  undefined *unaff_x28;
  undefined8 uVar28;
  long lVar29;
  undefined8 uStack_630;
  long lStack_628;
  long *plStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined1 auStack_5f0 [128];
  long lStack_570;
  undefined8 uStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined8 *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 auStack_4a0 [128];
  long lStack_420;
  undefined8 uStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined8 *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined1 ***pppuStack_3c0;
  code *pcStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [128];
  long lStack_2d0;
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined1 *puStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
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
  
  puVar15 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar19 = *(undefined ***)(param_1 + 8);
  _objc_retain(ppuVar19);
  puVar6 = auStack_e8;
  uVar8 = 0x10;
  ppuVar1 = ppuVar19;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    lVar23 = *plStack_120;
    unaff_x26 = &PTR_s_standardCell_112671000;
    do {
      unaff_x23 = PTR_s_startPrefetchForPlaylistItem_com_112671a20;
      unaff_x27 = (undefined **)0x0;
      do {
        if (*plStack_120 != lVar23) {
          _objc_enumerationMutation(ppuVar19);
        }
        puVar21 = *(undefined **)(lStack_128 + (long)unaff_x27 * 8);
        puVar2 = puVar21;
        _objc_opt_respondsToSelector(puVar21,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          puVar15 = param_3;
          puVar6 = param_4;
          func_0x00010c24ffe0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar21 != (undefined *)0x0) goto LAB_1062f18f8;
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      puVar6 = auStack_e8;
      uVar8 = 0x10;
      ppuVar1 = ppuVar19;
      puVar15 = &uStack_130;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  puVar21 = (undefined *)0x0;
LAB_1062f18f8:
  _objc_release(ppuVar19);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar4 = &uStack_260;
    pcStack_138 = FUN_1062f1950;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar15);
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    puVar16 = (undefined *)param_3[1];
    _objc_retain(puVar16);
    puVar7 = auStack_220;
    uVar9 = 0x10;
    puVar2 = puVar16;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      unaff_x26 = (undefined **)*plStack_250;
      unaff_x27 = &PTR_s_posterDisplayName_11261f000;
      unaff_x23 = puVar2;
      do {
        puVar21 = PTR_s_prefetchRequestForPlaylistItem_r_11261f958;
        unaff_x28 = (undefined *)0x0;
        do {
          if ((undefined **)*plStack_250 != unaff_x26) {
            _objc_enumerationMutation(puVar16);
          }
          puVar24 = *(undefined **)(lStack_258 + (long)unaff_x28 * 8);
          puVar2 = puVar24;
          _objc_opt_respondsToSelector(puVar24,puVar21);
          if (((ulong)puVar2 & 1) != 0) {
            puVar4 = puVar15;
            puVar7 = puVar6;
            uVar9 = uVar8;
            func_0x00010c107ce0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar21;
            if (puVar24 != (undefined *)0x0) goto LAB_1062f1a64;
          }
          unaff_x28 = unaff_x28 + 1;
        } while (unaff_x23 != unaff_x28);
        puVar7 = auStack_220;
        uVar9 = 0x10;
        unaff_x23 = puVar16;
        puVar4 = &uStack_260;
        func_0x00010bf52a60();
      } while (unaff_x23 != (undefined *)0x0);
    }
    puVar2 = puVar21;
    puVar24 = (undefined *)0x0;
LAB_1062f1a64:
    puVar21 = puVar24;
    _objc_release(puVar16);
    puVar25 = puVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      uVar12 = uStack_260;
      pcStack_268 = FUN_1062f1ab4;
      lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar10 = param_6;
      uVar13 = param_8;
      uStack_3a8 = param_7;
      puStack_2c0 = unaff_x28;
      ppuStack_2b8 = unaff_x27;
      ppuStack_2b0 = unaff_x26;
      puStack_2a8 = puVar21;
      puStack_2a0 = puVar2;
      puStack_298 = unaff_x23;
      puStack_290 = puVar6;
      uStack_288 = uVar8;
      puStack_280 = puVar16;
      puStack_278 = puVar15;
      ppuStack_270 = &puStack_140;
      _objc_retain(puVar4);
      _objc_retain(puVar7);
      _objc_retain(uVar9);
      _objc_retain(param_6);
      _objc_retain(param_8);
      _objc_retain(uVar12);
      lStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      puStack_380 = (undefined8 *)0x0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      ppuVar19 = (undefined **)puVar25[1];
      _objc_retain(ppuVar19);
      puVar3 = &uStack_390;
      puVar6 = auStack_350;
      uVar8 = 0x10;
      ppuVar1 = ppuVar19;
      func_0x00010bf52a60();
      if (ppuVar1 != (undefined **)0x0) {
        puVar15 = (undefined8 *)*puStack_380;
        uStack_3a0 = uVar12;
        uStack_398 = param_8;
        do {
          puVar21 = PTR_s_generatePrefetchRequestsForGroup_1125cd938;
          ppuVar17 = (undefined **)0x0;
          do {
            if ((undefined8 *)*puStack_380 != puVar15) {
              _objc_enumerationMutation(ppuVar19);
            }
            puVar25 = *(undefined8 **)(lStack_388 + (long)ppuVar17 * 8);
            puVar3 = puVar25;
            _objc_opt_respondsToSelector(puVar25,puVar21);
            param_8 = uStack_398;
            uVar12 = uStack_3a0;
            if (((ulong)puVar3 & 1) != 0) {
              uStack_3b0 = uStack_3a0;
              puVar3 = puVar4;
              puVar6 = puVar7;
              uVar8 = uVar9;
              uVar10 = param_6;
              param_7 = uStack_3a8;
              uVar13 = uStack_398;
              func_0x00010bfbfe40(puVar25);
              unaff_x27 = ppuVar1;
              goto LAB_1062f1c3c;
            }
            ppuVar17 = (undefined **)((long)ppuVar17 + 1);
          } while (ppuVar1 != ppuVar17);
          puVar3 = &uStack_390;
          puVar6 = auStack_350;
          uVar8 = 0x10;
          ppuVar1 = ppuVar19;
          func_0x00010bf52a60();
          param_8 = uStack_398;
          unaff_x27 = ppuVar1;
          uVar12 = uStack_3a0;
        } while (ppuVar1 != (undefined **)0x0);
      }
LAB_1062f1c3c:
      _objc_release(ppuVar19);
      _objc_release(uVar12);
      _objc_release(param_8);
      _objc_release(param_6);
      _objc_release(uVar9);
      _objc_release(puVar7);
      puVar26 = puVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
        return;
      }
      ___stack_chk_fail();
      uVar28 = uStack_3b0;
      pcStack_3b8 = FUN_1062f1cb0;
      lStack_420 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar11 = uVar10;
      uVar14 = uVar13;
      uStack_4f8 = param_7;
      uStack_410 = uVar12;
      ppuStack_408 = unaff_x27;
      ppuStack_400 = ppuVar19;
      puStack_3f8 = puVar25;
      uStack_3f0 = param_8;
      uStack_3e8 = param_6;
      uStack_3e0 = uVar9;
      puStack_3d8 = puVar7;
      puStack_3d0 = puVar4;
      puStack_3c8 = puVar15;
      pppuStack_3c0 = &ppuStack_270;
      _objc_retain(puVar3);
      _objc_retain(puVar6);
      _objc_retain(uVar8);
      _objc_retain(uVar10);
      _objc_retain(uVar13);
      _objc_retain(uVar28);
      lStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4c8 = 0;
      puStack_4d0 = (undefined8 *)0x0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4a8 = 0;
      uStack_4b0 = 0;
      ppuVar19 = (undefined **)puVar26[1];
      _objc_retain(ppuVar19);
      puVar4 = &uStack_4e0;
      puVar7 = auStack_4a0;
      uVar9 = 0x10;
      ppuVar1 = ppuVar19;
      func_0x00010bf52a60();
      if (ppuVar1 != (undefined **)0x0) {
        puVar15 = (undefined8 *)*puStack_4d0;
        uStack_4f0 = uVar28;
        uStack_4e8 = uVar13;
        do {
          puVar21 = PTR_s_generateSnapDocPrefetchRequestsF_1125cda08;
          ppuVar17 = (undefined **)0x0;
          do {
            if ((undefined8 *)*puStack_4d0 != puVar15) {
              _objc_enumerationMutation(ppuVar19);
            }
            puVar26 = *(undefined8 **)(lStack_4d8 + (long)ppuVar17 * 8);
            puVar4 = puVar26;
            _objc_opt_respondsToSelector(puVar26,puVar21);
            uVar13 = uStack_4e8;
            uVar28 = uStack_4f0;
            if (((ulong)puVar4 & 1) != 0) {
              uStack_500 = uStack_4f0;
              puVar4 = puVar3;
              puVar7 = puVar6;
              uVar9 = uVar8;
              uVar11 = uVar10;
              param_7 = uStack_4f8;
              uVar14 = uStack_4e8;
              func_0x00010bfc0180(puVar26);
              unaff_x27 = ppuVar1;
              goto LAB_1062f1e38;
            }
            ppuVar17 = (undefined **)((long)ppuVar17 + 1);
          } while (ppuVar1 != ppuVar17);
          puVar4 = &uStack_4e0;
          puVar7 = auStack_4a0;
          uVar9 = 0x10;
          ppuVar1 = ppuVar19;
          func_0x00010bf52a60();
          uVar13 = uStack_4e8;
          unaff_x27 = ppuVar1;
          uVar28 = uStack_4f0;
        } while (ppuVar1 != (undefined **)0x0);
      }
LAB_1062f1e38:
      _objc_release(ppuVar19);
      _objc_release(uVar28);
      _objc_release(uVar13);
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_release(puVar6);
      puVar25 = puVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_420) {
        return;
      }
      ___stack_chk_fail();
      pcStack_508 = FUN_1062f1eac;
      lStack_570 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar12 = param_7;
      uStack_560 = uVar28;
      ppuStack_558 = unaff_x27;
      ppuStack_550 = ppuVar19;
      puStack_548 = puVar26;
      uStack_540 = uVar13;
      uStack_538 = uVar10;
      uStack_530 = uVar8;
      puStack_528 = puVar6;
      puStack_520 = puVar3;
      puStack_518 = puVar15;
      pppuStack_510 = &pppuStack_3c0;
      _objc_retain(puVar4);
      _objc_retain(uVar11);
      _objc_retain(param_7);
      lStack_628 = 0;
      uStack_630 = 0;
      uStack_618 = 0;
      plStack_620 = (long *)0x0;
      uStack_608 = 0;
      uStack_610 = 0;
      uStack_5f8 = 0;
      uStack_600 = 0;
      lVar22 = puVar25[1];
      _objc_retain(lVar22);
      puVar15 = &uStack_630;
      puVar6 = auStack_5f0;
      uVar8 = 0x10;
      lVar23 = lVar22;
      func_0x00010bf52a60();
      if (lVar23 != 0) {
        lVar29 = *plStack_620;
        do {
          puVar21 = PTR_s_generateHLSPrefetchRequestForFor_1125cd720;
          lVar20 = 0;
          do {
            if (*plStack_620 != lVar29) {
              _objc_enumerationMutation(lVar22);
            }
            uVar27 = *(ulong *)(lStack_628 + lVar20 * 8);
            uVar5 = uVar27;
            _objc_opt_respondsToSelector(uVar27,puVar21);
            if ((uVar5 & 1) != 0) {
              puVar15 = puVar4;
              uVar12 = param_7;
              func_0x00010bfbf5e0(uVar27);
              puVar6 = puVar7;
              uVar8 = uVar9;
              goto LAB_1062f1fcc;
            }
            lVar20 = lVar20 + 1;
          } while (lVar23 != lVar20);
          puVar15 = &uStack_630;
          puVar6 = auStack_5f0;
          uVar8 = 0x10;
          lVar23 = lVar22;
          func_0x00010bf52a60();
        } while (lVar23 != 0);
      }
LAB_1062f1fcc:
      _objc_release(lVar22);
      _objc_release(param_7);
      _objc_release(uVar11);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_570) {
        return;
      }
      ___stack_chk_fail();
      lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar15);
      _objc_retain(puVar6);
      _objc_retain(uVar8);
      _objc_retain(uVar12);
      _objc_retain(uVar14);
      lVar20 = puVar4[1];
      _objc_retain(lVar20);
      lVar23 = lVar20;
      func_0x00010bf52a60();
      lVar22 = lRam0000000000000000;
      puVar2 = PTR_s_startPrefetchForGroupId_prefetch_112671a18;
      while (PTR_s_startPrefetchForGroupId_prefetch_112671a18 = puVar2, lVar23 != 0) {
        lVar18 = 0;
        do {
          if (lRam0000000000000000 != lVar22) {
            _objc_enumerationMutation(lVar20);
          }
          puVar21 = *(undefined **)(lVar18 * 8);
          puVar16 = puVar21;
          _objc_opt_respondsToSelector(puVar21,puVar2);
          if (((ulong)puVar16 & 1) != 0) {
            func_0x00010c24ffc0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar21 != (undefined *)0x0) goto LAB_1062f2178;
          }
          lVar18 = lVar18 + 1;
        } while (lVar23 != lVar18);
        lVar23 = lVar20;
        func_0x00010bf52a60();
        puVar2 = PTR_s_startPrefetchForGroupId_prefetch_112671a18;
      }
      puVar21 = (undefined *)0x0;
LAB_1062f2178:
      _objc_release(lVar20);
      _objc_release(uVar14);
      _objc_release(uVar12);
      _objc_release(uVar8);
      _objc_release(puVar6);
      _objc_release(puVar15);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar29) {
        ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_storeStrong_11034d330)(puVar15 + 1,0);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 1062f1950; end: 1062f1ab3; -[SCOperaPlaylistCompositePrefetcherProvider prefetchRequestForPlaylistItem:requestImportance:trigger:] */

void FUN_1062f1950(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined **ppuVar17;
  long lVar18;
  long lVar19;
  long unaff_x23;
  undefined *unaff_x24;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long unaff_x26;
  undefined **ppuVar23;
  undefined **unaff_x27;
  long unaff_x28;
  undefined8 uVar24;
  long lVar25;
  undefined8 uStack_500;
  long lStack_4f8;
  long *plStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined1 auStack_4c0 [128];
  long lStack_440;
  undefined8 uStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined8 *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined1 ***pppuStack_3e0;
  code *pcStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [128];
  long lStack_2f0;
  undefined8 uStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  long lStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 *puStack_148;
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
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar16 = *(long *)(param_1 + 8);
  _objc_retain(lVar16);
  puVar7 = auStack_f0;
  uVar9 = 0x10;
  lVar2 = lVar16;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x26 = *plStack_120;
    unaff_x27 = &PTR_s_posterDisplayName_11261f000;
    unaff_x23 = lVar2;
    do {
      unaff_x24 = PTR_s_prefetchRequestForPlaylistItem_r_11261f958;
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(lVar16);
        }
        uVar20 = *(ulong *)(lStack_128 + unaff_x28 * 8);
        uVar3 = uVar20;
        _objc_opt_respondsToSelector(uVar20,unaff_x24);
        if ((uVar3 & 1) != 0) {
          puVar6 = param_3;
          puVar7 = param_4;
          uVar9 = param_5;
          func_0x00010c107ce0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar20 != 0) goto LAB_1062f1a64;
        }
        unaff_x28 = unaff_x28 + 1;
      } while (unaff_x23 != unaff_x28);
      puVar7 = auStack_f0;
      uVar9 = 0x10;
      unaff_x23 = lVar16;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (unaff_x23 != 0);
  }
  uVar20 = 0;
LAB_1062f1a64:
  _objc_release(lVar16);
  puVar21 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar14 = uStack_130;
    pcStack_138 = FUN_1062f1ab4;
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar12 = param_6;
    uVar11 = param_8;
    uStack_278 = param_7;
    lStack_190 = unaff_x28;
    ppuStack_188 = unaff_x27;
    lStack_180 = unaff_x26;
    uStack_178 = uVar20;
    puStack_170 = unaff_x24;
    lStack_168 = unaff_x23;
    puStack_160 = param_4;
    uStack_158 = param_5;
    lStack_150 = lVar16;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    _objc_retain(uVar9);
    _objc_retain(param_6);
    _objc_retain(param_8);
    _objc_retain(uVar14);
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    puStack_250 = (undefined8 *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    ppuVar23 = (undefined **)puVar21[1];
    _objc_retain(ppuVar23);
    puVar5 = &uStack_260;
    puVar8 = auStack_220;
    uVar10 = 0x10;
    ppuVar4 = ppuVar23;
    func_0x00010bf52a60();
    if (ppuVar4 != (undefined **)0x0) {
      param_3 = (undefined8 *)*puStack_250;
      uStack_270 = uVar14;
      uStack_268 = param_8;
      do {
        puVar1 = PTR_s_generatePrefetchRequestsForGroup_1125cd938;
        ppuVar17 = (undefined **)0x0;
        do {
          if ((undefined8 *)*puStack_250 != param_3) {
            _objc_enumerationMutation(ppuVar23);
          }
          puVar21 = *(undefined8 **)(lStack_258 + (long)ppuVar17 * 8);
          puVar5 = puVar21;
          _objc_opt_respondsToSelector(puVar21,puVar1);
          param_8 = uStack_268;
          uVar14 = uStack_270;
          if (((ulong)puVar5 & 1) != 0) {
            uStack_280 = uStack_270;
            puVar5 = puVar6;
            puVar8 = puVar7;
            uVar10 = uVar9;
            uVar12 = param_6;
            param_7 = uStack_278;
            uVar11 = uStack_268;
            func_0x00010bfbfe40(puVar21);
            unaff_x27 = ppuVar4;
            goto LAB_1062f1c3c;
          }
          ppuVar17 = (undefined **)((long)ppuVar17 + 1);
        } while (ppuVar4 != ppuVar17);
        puVar5 = &uStack_260;
        puVar8 = auStack_220;
        uVar10 = 0x10;
        ppuVar4 = ppuVar23;
        func_0x00010bf52a60();
        param_8 = uStack_268;
        unaff_x27 = ppuVar4;
        uVar14 = uStack_270;
      } while (ppuVar4 != (undefined **)0x0);
    }
LAB_1062f1c3c:
    _objc_release(ppuVar23);
    _objc_release(uVar14);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(uVar9);
    _objc_release(puVar7);
    puVar22 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
      return;
    }
    ___stack_chk_fail();
    uVar24 = uStack_280;
    pcStack_288 = FUN_1062f1cb0;
    lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar13 = uVar12;
    uVar15 = uVar11;
    uStack_3c8 = param_7;
    uStack_2e0 = uVar14;
    ppuStack_2d8 = unaff_x27;
    ppuStack_2d0 = ppuVar23;
    puStack_2c8 = puVar21;
    uStack_2c0 = param_8;
    uStack_2b8 = param_6;
    uStack_2b0 = uVar9;
    puStack_2a8 = puVar7;
    puStack_2a0 = puVar6;
    puStack_298 = param_3;
    ppuStack_290 = &puStack_140;
    _objc_retain(puVar5);
    _objc_retain(puVar8);
    _objc_retain(uVar10);
    _objc_retain(uVar12);
    _objc_retain(uVar11);
    _objc_retain(uVar24);
    lStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    puStack_3a0 = (undefined8 *)0x0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    ppuVar23 = (undefined **)puVar22[1];
    _objc_retain(ppuVar23);
    puVar6 = &uStack_3b0;
    puVar7 = auStack_370;
    uVar9 = 0x10;
    ppuVar4 = ppuVar23;
    func_0x00010bf52a60();
    if (ppuVar4 != (undefined **)0x0) {
      param_3 = (undefined8 *)*puStack_3a0;
      uStack_3c0 = uVar24;
      uStack_3b8 = uVar11;
      do {
        puVar1 = PTR_s_generateSnapDocPrefetchRequestsF_1125cda08;
        ppuVar17 = (undefined **)0x0;
        do {
          if ((undefined8 *)*puStack_3a0 != param_3) {
            _objc_enumerationMutation(ppuVar23);
          }
          puVar22 = *(undefined8 **)(lStack_3a8 + (long)ppuVar17 * 8);
          puVar6 = puVar22;
          _objc_opt_respondsToSelector(puVar22,puVar1);
          uVar11 = uStack_3b8;
          uVar24 = uStack_3c0;
          if (((ulong)puVar6 & 1) != 0) {
            uStack_3d0 = uStack_3c0;
            puVar6 = puVar5;
            puVar7 = puVar8;
            uVar9 = uVar10;
            uVar13 = uVar12;
            param_7 = uStack_3c8;
            uVar15 = uStack_3b8;
            func_0x00010bfc0180(puVar22);
            unaff_x27 = ppuVar4;
            goto LAB_1062f1e38;
          }
          ppuVar17 = (undefined **)((long)ppuVar17 + 1);
        } while (ppuVar4 != ppuVar17);
        puVar6 = &uStack_3b0;
        puVar7 = auStack_370;
        uVar9 = 0x10;
        ppuVar4 = ppuVar23;
        func_0x00010bf52a60();
        uVar11 = uStack_3b8;
        unaff_x27 = ppuVar4;
        uVar24 = uStack_3c0;
      } while (ppuVar4 != (undefined **)0x0);
    }
LAB_1062f1e38:
    _objc_release(ppuVar23);
    _objc_release(uVar24);
    _objc_release(uVar11);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(puVar8);
    puVar21 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f0) {
      return;
    }
    ___stack_chk_fail();
    pcStack_3d8 = FUN_1062f1eac;
    lStack_440 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar14 = param_7;
    uStack_430 = uVar24;
    ppuStack_428 = unaff_x27;
    ppuStack_420 = ppuVar23;
    puStack_418 = puVar22;
    uStack_410 = uVar11;
    uStack_408 = uVar12;
    uStack_400 = uVar10;
    puStack_3f8 = puVar8;
    puStack_3f0 = puVar5;
    puStack_3e8 = param_3;
    pppuStack_3e0 = &ppuStack_290;
    _objc_retain(puVar6);
    _objc_retain(uVar13);
    _objc_retain(param_7);
    lStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4e8 = 0;
    plStack_4f0 = (long *)0x0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    lVar16 = puVar21[1];
    _objc_retain(lVar16);
    puVar21 = &uStack_500;
    puVar8 = auStack_4c0;
    uVar11 = 0x10;
    lVar2 = lVar16;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar25 = *plStack_4f0;
      do {
        puVar1 = PTR_s_generateHLSPrefetchRequestForFor_1125cd720;
        lVar19 = 0;
        do {
          if (*plStack_4f0 != lVar25) {
            _objc_enumerationMutation(lVar16);
          }
          uVar20 = *(ulong *)(lStack_4f8 + lVar19 * 8);
          uVar3 = uVar20;
          _objc_opt_respondsToSelector(uVar20,puVar1);
          if ((uVar3 & 1) != 0) {
            puVar21 = puVar6;
            uVar14 = param_7;
            func_0x00010bfbf5e0(uVar20);
            puVar8 = puVar7;
            uVar11 = uVar9;
            goto LAB_1062f1fcc;
          }
          lVar19 = lVar19 + 1;
        } while (lVar2 != lVar19);
        puVar21 = &uStack_500;
        puVar8 = auStack_4c0;
        uVar11 = 0x10;
        lVar2 = lVar16;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
LAB_1062f1fcc:
    _objc_release(lVar16);
    _objc_release(param_7);
    _objc_release(uVar13);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_440) {
      return;
    }
    ___stack_chk_fail();
    lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar21);
    _objc_retain(puVar8);
    _objc_retain(uVar11);
    _objc_retain(uVar14);
    _objc_retain(uVar15);
    lVar19 = puVar6[1];
    _objc_retain(lVar19);
    lVar2 = lVar19;
    func_0x00010bf52a60();
    lVar16 = lRam0000000000000000;
    puVar1 = PTR_s_startPrefetchForGroupId_prefetch_112671a18;
    while (PTR_s_startPrefetchForGroupId_prefetch_112671a18 = puVar1, lVar2 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(lVar19);
        }
        uVar20 = *(ulong *)(lVar18 * 8);
        uVar3 = uVar20;
        _objc_opt_respondsToSelector(uVar20,puVar1);
        if ((uVar3 & 1) != 0) {
          func_0x00010c24ffc0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar20 != 0) goto LAB_1062f2178;
        }
        lVar18 = lVar18 + 1;
      } while (lVar2 != lVar18);
      lVar2 = lVar19;
      func_0x00010bf52a60();
      puVar1 = PTR_s_startPrefetchForGroupId_prefetch_112671a18;
    }
    uVar20 = 0;
LAB_1062f2178:
    _objc_release(lVar19);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(puVar8);
    _objc_release(puVar21);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar25) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(puVar21 + 1,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar20);
  return;
}



/* Entry: 1062f1ab4; end: 1062f1caf; -[SCOperaPlaylistCompositePrefetcherProvider generatePrefetchRequestsForGroup:startPosition:prefetchSignalsList:importanceList:maxNumberOfItems:completion:completionQueue:] */

void FUN_1062f1ab4(ulong param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x19;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long unaff_x27;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_390 [128];
  long lStack_310;
  undefined8 uStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 *puStack_2c0;
  long lStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_6;
  uVar11 = param_8;
  uStack_148 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar20 = *(long *)(param_1 + 8);
  _objc_retain(lVar20);
  puVar6 = &uStack_130;
  puVar7 = auStack_f0;
  uVar9 = 0x10;
  lVar2 = lVar20;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x19 = *plStack_120;
    uStack_140 = param_9;
    uStack_138 = param_8;
    do {
      puVar1 = PTR_s_generatePrefetchRequestsForGroup_1125cd938;
      lVar16 = 0;
      do {
        if (*plStack_120 != unaff_x19) {
          _objc_enumerationMutation(lVar20);
        }
        param_1 = *(ulong *)(lStack_128 + lVar16 * 8);
        uVar3 = param_1;
        _objc_opt_respondsToSelector(param_1,puVar1);
        param_8 = uStack_138;
        param_9 = uStack_140;
        if ((uVar3 & 1) != 0) {
          uStack_150 = uStack_140;
          puVar6 = param_3;
          puVar7 = param_4;
          uVar9 = param_5;
          uVar12 = param_6;
          param_7 = uStack_148;
          uVar11 = uStack_138;
          func_0x00010bfbfe40(param_1);
          unaff_x27 = lVar2;
          goto LAB_1062f1c3c;
        }
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      puVar6 = &uStack_130;
      puVar7 = auStack_f0;
      uVar9 = 0x10;
      lVar2 = lVar20;
      func_0x00010bf52a60();
      param_8 = uStack_138;
      unaff_x27 = lVar2;
      param_9 = uStack_140;
    } while (lVar2 != 0);
  }
LAB_1062f1c3c:
  _objc_release(lVar20);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar19 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar22 = uStack_150;
  pcStack_158 = FUN_1062f1cb0;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = uVar12;
  uVar15 = uVar11;
  uStack_298 = param_7;
  uStack_1b0 = param_9;
  lStack_1a8 = unaff_x27;
  lStack_1a0 = lVar20;
  uStack_198 = param_1;
  uStack_190 = param_8;
  uStack_188 = param_6;
  uStack_180 = param_5;
  puStack_178 = param_4;
  puStack_170 = param_3;
  lStack_168 = unaff_x19;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(uVar9);
  _objc_retain(uVar12);
  _objc_retain(uVar11);
  _objc_retain(uVar22);
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lVar20 = puVar19[1];
  _objc_retain(lVar20);
  puVar4 = &uStack_280;
  puVar8 = auStack_240;
  uVar10 = 0x10;
  lVar2 = lVar20;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x19 = *plStack_270;
    uStack_290 = uVar22;
    uStack_288 = uVar11;
    do {
      puVar1 = PTR_s_generateSnapDocPrefetchRequestsF_1125cda08;
      lVar16 = 0;
      do {
        if (*plStack_270 != unaff_x19) {
          _objc_enumerationMutation(lVar20);
        }
        puVar19 = *(undefined8 **)(lStack_278 + lVar16 * 8);
        puVar4 = puVar19;
        _objc_opt_respondsToSelector(puVar19,puVar1);
        uVar11 = uStack_288;
        uVar22 = uStack_290;
        if (((ulong)puVar4 & 1) != 0) {
          uStack_2a0 = uStack_290;
          puVar4 = puVar6;
          puVar8 = puVar7;
          uVar10 = uVar9;
          uVar13 = uVar12;
          param_7 = uStack_298;
          uVar15 = uStack_288;
          func_0x00010bfc0180(puVar19);
          unaff_x27 = lVar2;
          goto LAB_1062f1e38;
        }
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      puVar4 = &uStack_280;
      puVar8 = auStack_240;
      uVar10 = 0x10;
      lVar2 = lVar20;
      func_0x00010bf52a60();
      uVar11 = uStack_288;
      unaff_x27 = lVar2;
      uVar22 = uStack_290;
    } while (lVar2 != 0);
  }
LAB_1062f1e38:
  _objc_release(lVar20);
  _objc_release(uVar22);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(puVar7);
  puVar5 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2a8 = FUN_1062f1eac;
  lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = param_7;
  uStack_300 = uVar22;
  lStack_2f8 = unaff_x27;
  lStack_2f0 = lVar20;
  puStack_2e8 = puVar19;
  uStack_2e0 = uVar11;
  uStack_2d8 = uVar12;
  uStack_2d0 = uVar9;
  puStack_2c8 = puVar7;
  puStack_2c0 = puVar6;
  lStack_2b8 = unaff_x19;
  ppuStack_2b0 = &puStack_160;
  _objc_retain(puVar4);
  _objc_retain(uVar13);
  _objc_retain(param_7);
  lStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  lVar20 = puVar5[1];
  _objc_retain(lVar20);
  puVar6 = &uStack_3d0;
  puVar7 = auStack_390;
  uVar11 = 0x10;
  lVar2 = lVar20;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar16 = *plStack_3c0;
    do {
      puVar1 = PTR_s_generateHLSPrefetchRequestForFor_1125cd720;
      lVar18 = 0;
      do {
        if (*plStack_3c0 != lVar16) {
          _objc_enumerationMutation(lVar20);
        }
        uVar21 = *(ulong *)(lStack_3c8 + lVar18 * 8);
        uVar3 = uVar21;
        _objc_opt_respondsToSelector(uVar21,puVar1);
        if ((uVar3 & 1) != 0) {
          puVar6 = puVar4;
          uVar14 = param_7;
          func_0x00010bfbf5e0(uVar21);
          puVar7 = puVar8;
          uVar11 = uVar10;
          goto LAB_1062f1fcc;
        }
        lVar18 = lVar18 + 1;
      } while (lVar2 != lVar18);
      puVar6 = &uStack_3d0;
      puVar7 = auStack_390;
      uVar11 = 0x10;
      lVar2 = lVar20;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
LAB_1062f1fcc:
  _objc_release(lVar20);
  _objc_release(param_7);
  _objc_release(uVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_310) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(uVar11);
  _objc_retain(uVar14);
  _objc_retain(uVar15);
  lVar18 = puVar4[1];
  _objc_retain(lVar18);
  lVar2 = lVar18;
  func_0x00010bf52a60();
  lVar20 = lRam0000000000000000;
  puVar1 = PTR_s_startPrefetchForGroupId_prefetch_112671a18;
  while (PTR_s_startPrefetchForGroupId_prefetch_112671a18 = puVar1, lVar2 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar20) {
        _objc_enumerationMutation(lVar18);
      }
      uVar21 = *(ulong *)(lVar17 * 8);
      uVar3 = uVar21;
      _objc_opt_respondsToSelector(uVar21,puVar1);
      if ((uVar3 & 1) != 0) {
        func_0x00010c24ffc0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar21 != 0) goto LAB_1062f2178;
      }
      lVar17 = lVar17 + 1;
    } while (lVar2 != lVar17);
    lVar2 = lVar18;
    func_0x00010bf52a60();
    puVar1 = PTR_s_startPrefetchForGroupId_prefetch_112671a18;
  }
  uVar21 = 0;
LAB_1062f2178:
  _objc_release(lVar18);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar11);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar21);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar6 + 1,0);
  return;
}



/* Entry: 1062f1cb0; end: 1062f1eab; -[SCOperaPlaylistCompositePrefetcherProvider generateSnapDocPrefetchRequestsForGroup:startPosition:prefetchSignalsList:importanceList:maxNumberOfItems:completion:completionQueue:] */

void FUN_1062f1cb0(ulong param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x19;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x27;
  ulong uVar17;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_6;
  uVar12 = param_8;
  uStack_148 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar16 = *(long *)(param_1 + 8);
  _objc_retain(lVar16);
  puVar5 = &uStack_130;
  puVar6 = auStack_f0;
  uVar8 = 0x10;
  lVar2 = lVar16;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x19 = *plStack_120;
    uStack_140 = param_9;
    uStack_138 = param_8;
    do {
      puVar1 = PTR_s_generateSnapDocPrefetchRequestsF_1125cda08;
      lVar13 = 0;
      do {
        if (*plStack_120 != unaff_x19) {
          _objc_enumerationMutation(lVar16);
        }
        param_1 = *(ulong *)(lStack_128 + lVar13 * 8);
        uVar3 = param_1;
        _objc_opt_respondsToSelector(param_1,puVar1);
        param_8 = uStack_138;
        param_9 = uStack_140;
        if ((uVar3 & 1) != 0) {
          uStack_150 = uStack_140;
          puVar5 = param_3;
          puVar6 = param_4;
          uVar8 = param_5;
          uVar10 = param_6;
          param_7 = uStack_148;
          uVar12 = uStack_138;
          func_0x00010bfc0180(param_1);
          unaff_x27 = lVar2;
          goto LAB_1062f1e38;
        }
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      puVar5 = &uStack_130;
      puVar6 = auStack_f0;
      uVar8 = 0x10;
      lVar2 = lVar16;
      func_0x00010bf52a60();
      param_8 = uStack_138;
      unaff_x27 = lVar2;
      param_9 = uStack_140;
    } while (lVar2 != 0);
  }
LAB_1062f1e38:
  _objc_release(lVar16);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_1062f1eac;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = param_7;
  uStack_1b0 = param_9;
  lStack_1a8 = unaff_x27;
  lStack_1a0 = lVar16;
  uStack_198 = param_1;
  uStack_190 = param_8;
  uStack_188 = param_6;
  uStack_180 = param_5;
  puStack_178 = param_4;
  puStack_170 = param_3;
  lStack_168 = unaff_x19;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(uVar10);
  _objc_retain(param_7);
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lVar16 = puVar4[1];
  _objc_retain(lVar16);
  puVar4 = &uStack_280;
  puVar7 = auStack_240;
  uVar9 = 0x10;
  lVar2 = lVar16;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_270;
    do {
      puVar1 = PTR_s_generateHLSPrefetchRequestForFor_1125cd720;
      lVar15 = 0;
      do {
        if (*plStack_270 != lVar13) {
          _objc_enumerationMutation(lVar16);
        }
        uVar17 = *(ulong *)(lStack_278 + lVar15 * 8);
        uVar3 = uVar17;
        _objc_opt_respondsToSelector(uVar17,puVar1);
        if ((uVar3 & 1) != 0) {
          puVar4 = puVar5;
          uVar11 = param_7;
          func_0x00010bfbf5e0(uVar17);
          puVar7 = puVar6;
          uVar9 = uVar8;
          goto LAB_1062f1fcc;
        }
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      puVar4 = &uStack_280;
      puVar7 = auStack_240;
      uVar9 = 0x10;
      lVar2 = lVar16;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
LAB_1062f1fcc:
  _objc_release(lVar16);
  _objc_release(param_7);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar7);
  _objc_retain(uVar9);
  _objc_retain(uVar11);
  _objc_retain(uVar12);
  lVar15 = puVar5[1];
  _objc_retain(lVar15);
  lVar2 = lVar15;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  puVar1 = PTR_s_startPrefetchForGroupId_prefetch_112671a18;
  while (PTR_s_startPrefetchForGroupId_prefetch_112671a18 = puVar1, lVar2 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(lVar15);
      }
      uVar17 = *(ulong *)(lVar14 * 8);
      uVar3 = uVar17;
      _objc_opt_respondsToSelector(uVar17,puVar1);
      if ((uVar3 & 1) != 0) {
        func_0x00010c24ffc0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar17 != 0) goto LAB_1062f2178;
      }
      lVar14 = lVar14 + 1;
    } while (lVar2 != lVar14);
    lVar2 = lVar15;
    func_0x00010bf52a60();
    puVar1 = PTR_s_startPrefetchForGroupId_prefetch_112671a18;
  }
  uVar17 = 0;
LAB_1062f2178:
  _objc_release(lVar15);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(puVar7);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar17);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar4 + 1,0);
  return;
}



/* Entry: 1062f1eac; end: 1062f2027; -[SCOperaPlaylistCompositePrefetcherProvider generateHLSPrefetchRequestForForGroup:requestImportance:trigger:completion:completionQueue:] */

void FUN_1062f1eac(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar10 = *(long *)(param_1 + 8);
  _objc_retain(lVar10);
  puVar4 = &uStack_130;
  puVar5 = auStack_f0;
  uVar6 = 0x10;
  lVar2 = lVar10;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar12 = *plStack_120;
    do {
      puVar1 = PTR_s_generateHLSPrefetchRequestForFor_1125cd720;
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar10);
        }
        uVar11 = *(ulong *)(lStack_128 + lVar9 * 8);
        uVar3 = uVar11;
        _objc_opt_respondsToSelector(uVar11,puVar1);
        if ((uVar3 & 1) != 0) {
          puVar4 = param_3;
          uVar7 = param_7;
          func_0x00010bfbf5e0(uVar11);
          puVar5 = param_4;
          uVar6 = param_5;
          goto LAB_1062f1fcc;
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar4 = &uStack_130;
      puVar5 = auStack_f0;
      uVar6 = 0x10;
      lVar2 = lVar10;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
LAB_1062f1fcc:
  _objc_release(lVar10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  _objc_retain(uVar6);
  _objc_retain(uVar7);
  _objc_retain(param_8);
  lVar9 = param_3[1];
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  puVar1 = PTR_s_startPrefetchForGroupId_prefetch_112671a18;
  while (PTR_s_startPrefetchForGroupId_prefetch_112671a18 = puVar1, lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar9);
      }
      uVar11 = *(ulong *)(lVar8 * 8);
      uVar3 = uVar11;
      _objc_opt_respondsToSelector(uVar11,puVar1);
      if ((uVar3 & 1) != 0) {
        func_0x00010c24ffc0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar11 != 0) goto LAB_1062f2178;
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar9;
    func_0x00010bf52a60();
    puVar1 = PTR_s_startPrefetchForGroupId_prefetch_112671a18;
  }
  uVar11 = 0;
LAB_1062f2178:
  _objc_release(lVar9);
  _objc_release(param_8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar4 + 1,0);
  return;
}



/* Entry: 1062f2028; end: 1062f21e7; -[SCOperaPlaylistCompositePrefetcherProvider startPrefetchForGroupId:prefetchSignalsList:importanceList:maxNumberOfItems:completion:completionQueue:] */

void FUN_1062f2028(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar1 = PTR_s_startPrefetchForGroupId_prefetch_112671a18;
  while (PTR_s_startPrefetchForGroupId_prefetch_112671a18 = puVar1, lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar7);
      }
      uVar8 = *(ulong *)(lVar6 * 8);
      uVar4 = uVar8;
      _objc_opt_respondsToSelector(uVar8,puVar1);
      if ((uVar4 & 1) != 0) {
        func_0x00010c24ffc0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar8 != 0) goto LAB_1062f2178;
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = lVar7;
    func_0x00010bf52a60();
    puVar1 = PTR_s_startPrefetchForGroupId_prefetch_112671a18;
  }
  uVar8 = 0;
LAB_1062f2178:
  _objc_release(lVar7);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1062f21e8; end: 1062f21f3; -[SCOperaPlaylistCompositePrefetcherProvider .cxx_destruct] */

void FUN_1062f21e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062f21f4; end: 1062f21fb; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch request] */

undefined8 FUN_1062f21f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1062f21fc; end: 1062f222b; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch setRequest:] */

void FUN_1062f21fc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1062f222c; end: 1062f2233; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch manifestRequest] */

undefined8 FUN_1062f222c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1062f2234; end: 1062f2263; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch setManifestRequest:] */

void FUN_1062f2234(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062f2264; end: 1062f226b; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch snapdocRequest] */

undefined8 FUN_1062f2264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1062f226c; end: 1062f229b; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch setSnapdocRequest:] */

void FUN_1062f226c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1062f229c; end: 1062f22a3; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch item] */

undefined8 FUN_1062f229c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1062f22a4; end: 1062f22d3; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch setItem:] */

void FUN_1062f22a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062f22d4; end: 1062f22db; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch importance] */

undefined8 FUN_1062f22d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1062f22dc; end: 1062f22e3; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch setImportance:] */

void FUN_1062f22dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 1062f22e4; end: 1062f22eb; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch contentId] */

undefined8 FUN_1062f22e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1062f22ec; end: 1062f231b; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch setContentId:] */

void FUN_1062f22ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062f231c; end: 1062f2323; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch prefetchSignalsList] */

undefined8 FUN_1062f231c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1062f2324; end: 1062f2353; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch setPrefetchSignalsList:] */

void FUN_1062f2324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062f2354; end: 1062f235b; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch importanceList] */

undefined8 FUN_1062f2354(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1062f235c; end: 1062f238b; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch setImportanceList:] */

void FUN_1062f235c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062f238c; end: 1062f2393; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch loggingId] */

undefined8 FUN_1062f238c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1062f2394; end: 1062f239b; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch setLoggingId:] */

void FUN_1062f2394(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1062f239c; end: 1062f2413; -[SCPlaylistAdaptiveContentFetcherPendingPrefetch .cxx_destruct] */

void FUN_1062f239c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062f2414; end: 1062f2773; -[SCPlaylistAdaptiveContentFetcher initWithConfigProvider:operaConfigProvider:mediaResolver:snapDocMediaResolver:prefetchProvider:prefetchPluginConfig:playbackMediaPrefetcher:viewSource:queue:] */

undefined1 *
FUN_1062f2414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f0e08;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_11;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_8;
    _objc_release(uVar2);
    uVar3 = *(ulong *)((long)puVar1 + 0x48);
    func_0x00010bf45ba0();
    uVar6 = uVar3 & 0xffffffff;
    if ((int)uVar3 == 0) {
      uVar6 = 0xffffffffffffffff;
    }
    *(ulong *)((long)puVar1 + 0x50) = uVar6;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined **)((long)puVar1 + 0xb8) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined **)((long)puVar1 + 0x98) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined **)((long)puVar1 + 0xa0) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined **)((long)puVar1 + 0xa8) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined **)((long)puVar1 + 0xb0) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126c99c0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0xc0) = 0;
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010beed9a0();
    *(char *)((long)puVar1 + 0xc4) = (char)uVar2;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf8efe0();
    _objc_release(uVar5);
    if ((int)uVar2 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
      _objc_release(puVar4);
    }
  }
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1062f2774; end: 1062f2d17; -[SCPlaylistAdaptiveContentFetcher triggerPrefetchWithPlaylistItemController:] */

void FUN_1062f2774(double param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  double dVar16;
  ulong uStack_c8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_1062f2cd0;
  uVar2 = param_4;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x48);
    func_0x00010c101760();
    if (iVar1 != 2) {
      iVar1 = (int)*(undefined8 *)(param_2 + 0x48);
      func_0x00010c101760();
      if (iVar1 != 3) {
        _CACurrentMediaTime();
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        dVar16 = param_1;
        _objc_opt_new();
        uVar4 = uVar2;
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010bf5ee40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010bfecde0();
        _objc_release(uVar5);
        _objc_release(uVar4);
        iVar1 = (int)*(undefined8 *)(param_2 + 0x48);
        func_0x00010c101760();
        uVar4 = uVar2;
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf529e0();
        _objc_release(uVar4);
        if (uVar6 < uVar5) {
          uStack_c8 = 0;
          do {
            uVar4 = uVar2;
            func_0x00010bfcf800();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            func_0x00010c109b00(param_4);
            uVar4 = uVar2;
            func_0x00010bf5ee40();
            _objc_retainAutoreleasedReturnValue();
            if (uVar5 == uVar4) {
              uVar13 = uVar5;
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar5;
              func_0x00010bf5f0a0(uVar5);
              _objc_retainAutoreleasedReturnValue();
              uVar15 = uVar13;
              func_0x00010bfecde0();
              _objc_release(uVar7);
              _objc_release(uVar13);
            }
            else {
              uVar15 = 0;
            }
            _objc_release(uVar4);
            uVar4 = uVar2;
            func_0x00010bf5ee40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (uVar5 == uVar4) {
              uVar15 = uVar15 + 1;
            }
            uVar4 = uVar5;
            func_0x00010c084fc0();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar4;
            func_0x00010bf529e0();
            _objc_release(uVar4);
            uVar4 = uStack_c8;
            if (uVar15 < uVar13) {
              do {
                uVar13 = uVar5;
                func_0x00010c084fc0();
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar13;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar13);
                if (uVar7 != 0) {
                  if (iVar1 == 1) {
                    uVar13 = uVar7;
                    func_0x00010c27dd80(uVar7);
                    _objc_retainAutoreleasedReturnValue();
                    uVar8 = param_2;
                    func_0x00010be5dc00();
                    _objc_release(uVar13);
                    if (uVar8 < uVar4) goto LAB_1062f2b30;
                  }
                  puVar9 = PTR_PTR_1126c99c8;
                  _objc_opt_new(PTR_PTR_1126c99c8);
                  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df840();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df840();
                  _objc_retainAutoreleasedReturnValue();
                  uVar13 = uVar7;
                  func_0x00010be36bc0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c14de00(puVar12);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1c06e0(puVar9);
                  _objc_release(puVar12);
                  _objc_release(uVar13);
                  _objc_release(puVar11);
                  _objc_release(puVar10);
                  uStack_78 = 500;
                  func_0x00010be75f60(param_2);
                  func_0x00010c1b5d40(puVar9);
                  func_0x00010c1ab100(puVar9);
                  func_0x00010befa120(puVar3);
                  puVar12 = puVar3;
                  func_0x00010bf529e0();
                  uVar13 = *(ulong *)(param_2 + 0x48);
                  func_0x00010bf69f20();
                  _objc_release(puVar9);
                  if ((undefined *)(uVar13 & 0xffffffff) <= puVar12) {
                    _objc_release(uVar7);
                    _objc_release(uVar5);
                    goto LAB_1062f2bd4;
                  }
                }
LAB_1062f2b30:
                _objc_release(uVar7);
                uVar15 = uVar15 + 1;
                uVar13 = uVar5;
                func_0x00010c084fc0();
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar13;
                func_0x00010bf529e0();
                _objc_release(uVar13);
                uVar4 = uVar4 + 1;
              } while (uVar15 < uVar7);
            }
            _objc_release(uVar5);
            uVar6 = uVar6 + 1;
            uVar4 = uVar2;
            func_0x00010bfcf800();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010bf529e0();
            _objc_release(uVar4);
            uStack_c8 = uStack_c8 + 1;
          } while (uVar6 < uVar5);
        }
LAB_1062f2bd4:
        _CACurrentMediaTime();
        uVar14 = *(undefined8 *)(param_2 + 0x40);
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar12;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        FUN_1062f9844(uVar14,&PTR____CFConstantStringClassReference_110e49d18,puVar9,
                      (long)((dVar16 - param_1) * 1000.0));
        _objc_release(puVar9);
        _objc_release(puVar12);
        _objc_initWeak(&uStack_78,param_2);
        uVar14 = *(undefined8 *)(param_2 + 0x38);
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_1062f2d18;
        puStack_90 = &UNK_110841fb0;
        _objc_copyWeak(auStack_80,&uStack_78);
        _objc_retain(puVar3);
        puStack_88 = puVar3;
        func_0x000100a0df38(uVar14,&puStack_a8);
        _objc_release(puStack_88);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(&uStack_78);
        _objc_release(puVar3);
        goto LAB_1062f2cc8;
      }
    }
    func_0x00010be24f20(param_2);
  }
LAB_1062f2cc8:
  _objc_release(uVar2);
LAB_1062f2cd0:
  _objc_release(param_4);
  return;
}



/* Entry: 1062f2d18; end: 1062f2d4b;  */

void FUN_1062f2d18(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be818a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062f2d4c; end: 1062f2df3; -[SCPlaylistAdaptiveContentFetcher featureWentOffscreen] */

void FUN_1062f2d4c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1062f2df4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100a0df38(uVar1,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}


