/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049582b0; end: 1049582b7;  */

void FUN_1049582b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((bRam00000001136b8690 & 1) == 0) {
    iVar1 = 0x136b8690;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once_f");
      pcRam00000001136b8688 = pcVar2;
      func_0x000107c60e4c(0x1136b8690);
    }
  }
  lStack_40 = param_2;
  uStack_38 = param_3;
  (*pcRam00000001136b8688)(param_2 + 8,&lStack_40,&UNK_100029ddc);
  return;
}



/* Entry: 1049582b8; end: 1049582c3; +[FBSDKDynamicFrameworkLoaderProxy loadkSecAttrAccessibleAfterFirstUnlockThisDeviceOnly] */

void FUN_1049582b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09d610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126addf8,PTR_s_loadkSecAttrAccessibleAfterFirst_112604f90);
  return;
}



/* Entry: 1049582c4; end: 1049589a7; -[FBSDKErrorConfiguration initWithDictionary:] */

undefined8 *
FUN_1049582c4(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
             ulong param_5)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined8 *puVar40;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar27 = param_3;
  _objc_retain();
  puStack_1e0 = PTR_PTR_1126e3358;
  puVar40 = &uStack_1e8;
  uStack_1e8 = param_1;
  _objc_msgSendSuper2(puVar40,PTR_s_init_1125d9248);
  if (puVar40 != (undefined8 *)0x0) {
    if (param_3 == (undefined **)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar39 = puVar40[1];
      puVar40[1] = puVar1;
      _objc_release(uVar39);
      puVar1 = PTR_PTR_1126add20;
      func_0x00010c22c4c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf24a20();
      _objc_retainAutoreleasedReturnValue();
      puVar38 = puVar2;
      func_0x00010c09e800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126add20;
      func_0x00010c22c4c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf24a20();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c09e800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126add20;
      func_0x00010c22c4c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf24a20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c09e800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126add20;
      func_0x00010c22c4c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf24a20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c09e800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar1);
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110dd1df8;
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110dbf1b8;
      ppuStack_b8 = &PTR____CFConstantStringClassReference_111019178;
      ppuStack_e0 = &PTR____CFConstantStringClassReference_110db9558;
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_d8 = puVar1;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_f0 = &PTR____CFConstantStringClassReference_110db9558;
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_d0 = puVar2;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_e8 = puVar6;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c8 = puVar7;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110da3638;
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110da3658;
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_100 = puVar38;
      puStack_f8 = puVar3;
      puStack_98 = puVar8;
      puStack_90 = puVar5;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_88 = puVar9;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_120 = &PTR____CFConstantStringClassReference_110ecf258;
      ppuStack_140 = &PTR____CFConstantStringClassReference_110dbf1b8;
      ppuStack_138 = &PTR____CFConstantStringClassReference_111019178;
      ppuStack_180 = &PTR____CFConstantStringClassReference_110db9558;
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_80 = puVar10;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_178 = puVar11;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_190 = &PTR____CFConstantStringClassReference_110db9558;
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_170 = puVar12;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_188 = puVar13;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1a0 = &PTR____CFConstantStringClassReference_110db9558;
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_168 = puVar14;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_198 = puVar15;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1b0 = &PTR____CFConstantStringClassReference_110db9558;
      puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_160 = puVar16;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_1a8 = puVar17;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1c0 = &PTR____CFConstantStringClassReference_110db9558;
      puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_158 = puVar18;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_1b8 = puVar19;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1d0 = &PTR____CFConstantStringClassReference_110db9558;
      puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_150 = puVar20;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_1c8 = puVar21;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_148 = puVar22;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_130 = &PTR____CFConstantStringClassReference_110da3638;
      ppuStack_128 = &PTR____CFConstantStringClassReference_110da3658;
      puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_1d8 = puVar38;
      puStack_118 = puVar23;
      puStack_110 = puVar4;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_5 = 4;
      puVar25 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_108 = puVar24;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      param_4 = (undefined **)0x2;
      ppuVar26 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar25;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar2);
      _objc_release(puVar1);
      ppuVar27 = ppuVar26;
      func_0x00010c28c440(puVar40);
      _objc_release(ppuVar26);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      ppuVar27 = param_3;
      func_0x00010bf72020();
      _objc_retainAutoreleasedReturnValue();
      puVar38 = (undefined *)puVar40[1];
      puVar40[1] = puVar1;
    }
    _objc_release(puVar38);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar40;
  }
  ___stack_chk_fail();
  _objc_retain();
  ppuVar26 = &PTR____CFConstantStringClassReference_110ddcc18;
  if (ppuVar27 != (undefined **)0x0) {
    ppuVar26 = ppuVar27;
  }
  _objc_retain(ppuVar26);
  _objc_retain();
  ppuVar27 = &PTR____CFConstantStringClassReference_110ddcc18;
  if (param_4 != (undefined **)0x0) {
    ppuVar27 = param_4;
  }
  _objc_retain(ppuVar27);
  _objc_release(param_4);
  puVar28 = (undefined8 *)param_3[1];
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = puVar28;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar40 == (undefined8 *)0x0) {
    puVar29 = (undefined8 *)param_3[1];
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar29;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar30 == (undefined8 *)0x0) {
      puVar31 = (undefined8 *)param_3[1];
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar32 = puVar31;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar32 == (undefined8 *)0x0) {
        puVar33 = (undefined8 *)param_3[1];
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar34 = puVar33;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar33);
      }
      else {
        puVar34 = puVar32;
        _objc_retain();
      }
      _objc_release(puVar32);
      _objc_release(puVar31);
    }
    else {
      puVar34 = puVar30;
      _objc_retain();
    }
    _objc_release(puVar30);
    _objc_release(puVar29);
  }
  else {
    puVar34 = puVar40;
    _objc_retain();
  }
  _objc_release(puVar40);
  _objc_release(puVar28);
  puVar40 = puVar34;
  func_0x00010bf98920();
  if (puVar40 == (undefined8 *)0x2) {
    puVar1 = PTR_PTR_1126ade50;
    func_0x00010c22bfc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf3d5c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar1);
    }
    else {
      uVar35 = param_5;
      func_0x00010c0f3840();
      _objc_retainAutoreleasedReturnValue();
      uVar36 = uVar35;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar38 = PTR_PTR_1126ade50;
      func_0x00010c22bfc0(PTR_PTR_1126ade50);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar38;
      func_0x00010bf3d5c0();
      _objc_retainAutoreleasedReturnValue();
      uVar37 = uVar36;
      func_0x00010bfdcf80();
      _objc_release(puVar3);
      _objc_release(puVar38);
      _objc_release(uVar36);
      _objc_release(uVar35);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if ((uVar37 & 1) != 0) {
        puVar40 = (undefined8 *)0x0;
        goto LAB_104958c60;
      }
    }
  }
  puVar40 = puVar34;
  _objc_retain(puVar34);
LAB_104958c60:
  _objc_release(puVar34);
  _objc_release(param_5);
  _objc_release(ppuVar27);
  _objc_release(ppuVar26);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar40);
  return puVar40;
}



/* Entry: 1049589a8; end: 104958ca3; -[FBSDKErrorConfiguration recoveryConfigurationForCode:subcode:request:] */

void FUN_1049589a8(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  ulong param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ddcc18;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  _objc_retain(ppuVar1);
  _objc_retain();
  ppuVar2 = &PTR____CFConstantStringClassReference_110ddcc18;
  if (param_4 != (undefined **)0x0) {
    ppuVar2 = param_4;
  }
  _objc_retain(ppuVar2);
  _objc_release(param_4);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c0e00e0(lVar3,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar17 == 0) {
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010c0e00e0(lVar4,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      lVar6 = *(long *)(param_1 + 8);
      func_0x00010c0e00e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ddcc18);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 == 0) {
        lVar8 = *(long *)(param_1 + 8);
        func_0x00010c0e00e0(lVar8,param_2,&PTR____CFConstantStringClassReference_110ddcc18);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
      }
      else {
        lVar9 = lVar7;
        _objc_retain();
      }
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    else {
      lVar9 = lVar5;
      _objc_retain();
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    lVar9 = lVar17;
    _objc_retain();
  }
  _objc_release(lVar17);
  _objc_release(lVar3);
  lVar17 = lVar9;
  func_0x00010bf98920();
  if (lVar17 == 2) {
    puVar10 = PTR_PTR_1126ade50;
    func_0x00010c22bfc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf3d5c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar11 == (undefined *)0x0) {
      _objc_release(puVar10);
    }
    else {
      uVar12 = param_5;
      func_0x00010c0f3840();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR_PTR_1126ade50;
      func_0x00010c22bfc0(PTR_PTR_1126ade50);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010bf3d5c0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar13;
      func_0x00010bfdcf80(uVar13,param_2,puVar15);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      if ((uVar16 & 1) != 0) {
        lVar17 = 0;
        goto LAB_104958c60;
      }
    }
  }
  lVar17 = lVar9;
  _objc_retain(lVar9);
LAB_104958c60:
  _objc_release(lVar9);
  _objc_release(param_5);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar17);
  return;
}



/* Entry: 104958ca4; end: 104958def; -[FBSDKErrorConfiguration updateWithArray:] */

undefined * FUN_104958ca4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [128];
  undefined1 auStack_260 [128];
  long lStack_1e0;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar2 = PTR_PTR_1126add78;
  func_0x00010bf0a0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar3 != (undefined *)0x0) {
    lVar19 = *plStack_130;
    do {
      puVar22 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar19) {
          _objc_enumerationMutation(puVar2);
        }
        uStack_150 = *(undefined8 *)(lStack_138 + (long)puVar22 * 8);
        puStack_170 = puVar5;
        uStack_168 = 0xc2000000;
        pcStack_160 = FUN_104958df0;
        puStack_158 = &UNK_110882030;
        uStack_148 = param_1;
        func_0x00010bf71e40(PTR_PTR_1126add78,param_2,uStack_150,&puStack_170);
        puVar22 = puVar22 + 1;
      } while (puVar3 != puVar22);
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_140,auStack_f8,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126add78;
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c0e00e0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dbf1b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3f0e0(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar3 = puVar5;
  func_0x00010c0720c0(puVar5,param_2,&PTR____CFConstantStringClassReference_110dd2318);
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010c0720c0(puVar5,param_2,&PTR____CFConstantStringClassReference_110ecf258);
  }
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c0e00e0(uVar4,param_2,&PTR____CFConstantStringClassReference_110da3638);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c0e00e0(uVar6,param_2,&PTR____CFConstantStringClassReference_110da3658);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126add78;
  uVar21 = *(undefined8 *)(puVar2 + 0x20);
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x00010bf71e60(puVar3,param_2,uVar21,&PTR____CFConstantStringClassReference_111019178,puVar22
                     );
  _objc_retainAutoreleasedReturnValue();
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  _objc_retain();
  puVar22 = puVar3;
  func_0x00010bf52a60();
  if (puVar22 != (undefined *)0x0) {
    lVar19 = *plStack_310;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_310 != lVar19) {
          _objc_enumerationMutation(puVar3);
        }
        puVar7 = PTR_PTR_1126add78;
        func_0x00010bf71fc0(PTR_PTR_1126add78,param_2,
                            *(undefined8 *)(lStack_318 + (long)puVar17 * 8));
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126add78;
        if (puVar7 != (undefined *)0x0) {
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x00010bf71e60(puVar9,param_2,puVar7,&PTR____CFConstantStringClassReference_110db9558
                              ,puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar9;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          if (puVar8 == (undefined *)0x0) {
            _objc_release(puVar9);
            _objc_release(puVar7);
            goto LAB_10495924c;
          }
          puVar10 = *(undefined **)(*(long *)(puVar2 + 0x28) + 8);
          func_0x00010c0e00e0(puVar10,param_2,puVar8);
          _objc_retainAutoreleasedReturnValue();
          if (puVar10 == (undefined *)0x0) {
            puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            func_0x00010bf71e20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf71e80(PTR_PTR_1126add78,param_2,
                                *(undefined8 *)(*(long *)(puVar2 + 0x28) + 8),puVar10,puVar8);
          }
          puVar12 = PTR_PTR_1126add78;
          puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
          func_0x00010bf71e60(puVar12,param_2,puVar7,
                              &PTR____CFConstantStringClassReference_110da3678,puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010bf529e0();
          puVar11 = PTR_PTR_1126add78;
          if (puVar13 == (undefined *)0x0) {
            puVar13 = PTR_PTR_1126ade88;
            _objc_alloc(PTR_PTR_1126ade88);
            func_0x00010c03d760();
            func_0x00010bf71e80(puVar11,param_2,puVar10,puVar13,
                                &PTR____CFConstantStringClassReference_110ddcc18);
          }
          else {
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_328 = 0;
            uStack_330 = 0;
            lStack_358 = 0;
            uStack_360 = 0;
            uStack_348 = 0;
            plStack_350 = (long *)0x0;
            puVar13 = puVar12;
            _objc_retain();
            puVar11 = puVar13;
            func_0x00010bf52a60();
            if (puVar11 != (undefined *)0x0) {
              lVar18 = *plStack_350;
              do {
                puVar20 = (undefined *)0x0;
                do {
                  if (*plStack_350 != lVar18) {
                    _objc_enumerationMutation(puVar13);
                  }
                  puVar14 = PTR_PTR_1126add78;
                  func_0x00010c0df6c0(PTR_PTR_1126add78,param_2,
                                      *(undefined8 *)(lStack_358 + (long)puVar20 * 8));
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR_PTR_1126add78;
                  if (puVar14 != (undefined *)0x0) {
                    puVar15 = PTR_PTR_1126ade88;
                    _objc_alloc(PTR_PTR_1126ade88);
                    func_0x00010c03d760();
                    puVar16 = puVar14;
                    func_0x00010c25d700(puVar14);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf71e80(puVar1,param_2,puVar10,puVar15,puVar16);
                    _objc_release(puVar16);
                    _objc_release(puVar15);
                  }
                  _objc_release(puVar14);
                  puVar20 = puVar20 + 1;
                } while (puVar11 != puVar20);
                puVar11 = puVar13;
                func_0x00010bf52a60(puVar13,param_2,&uStack_360,auStack_2e0,0x10);
              } while (puVar11 != (undefined *)0x0);
            }
          }
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar10);
          _objc_release(puVar8);
          _objc_release(puVar9);
          _objc_release(puVar7);
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != puVar22);
      puVar22 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_320,auStack_260,0x10);
    } while (puVar22 != (undefined *)0x0);
  }
LAB_10495924c:
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e0) {
    ___stack_chk_fail();
    return (undefined *)0x1;
  }
  return puVar5;
}



/* Entry: 104958df0; end: 1049592af;  */

undefined * FUN_104958df0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uStack_1f0;
  long lStack_1e8;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar3 = PTR_PTR_1126add78;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dbf1b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3f0e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = puVar3;
  func_0x00010c0720c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd2318);
  if (((ulong)puVar4 & 1) == 0) {
    func_0x00010c0720c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110ecf258);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110da3638);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar5,param_2,&PTR____CFConstantStringClassReference_110da3658);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126add78;
  uVar21 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x00010bf71e60(puVar4,param_2,uVar21,&PTR____CFConstantStringClassReference_111019178,puVar6)
  ;
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain();
  puVar6 = puVar4;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar17 = *plStack_1a0;
    do {
      puVar18 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar17) {
          _objc_enumerationMutation(puVar4);
        }
        puVar7 = PTR_PTR_1126add78;
        func_0x00010bf71fc0(PTR_PTR_1126add78,param_2,
                            *(undefined8 *)(lStack_1a8 + (long)puVar18 * 8));
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126add78;
        if (puVar7 != (undefined *)0x0) {
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x00010bf71e60(puVar9,param_2,puVar7,&PTR____CFConstantStringClassReference_110db9558
                              ,puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar9;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          if (puVar8 == (undefined *)0x0) {
            _objc_release(puVar9);
            _objc_release(puVar7);
            goto LAB_10495924c;
          }
          puVar10 = *(undefined **)(*(long *)(param_1 + 0x28) + 8);
          func_0x00010c0e00e0(puVar10,param_2,puVar8);
          _objc_retainAutoreleasedReturnValue();
          if (puVar10 == (undefined *)0x0) {
            puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            func_0x00010bf71e20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf71e80(PTR_PTR_1126add78,param_2,
                                *(undefined8 *)(*(long *)(param_1 + 0x28) + 8),puVar10,puVar8);
          }
          puVar12 = PTR_PTR_1126add78;
          puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
          func_0x00010bf71e60(puVar12,param_2,puVar7,
                              &PTR____CFConstantStringClassReference_110da3678,puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010bf529e0();
          puVar11 = PTR_PTR_1126add78;
          if (puVar13 == (undefined *)0x0) {
            puVar13 = PTR_PTR_1126ade88;
            _objc_alloc(PTR_PTR_1126ade88);
            func_0x00010c03d760();
            func_0x00010bf71e80(puVar11,param_2,puVar10,puVar13,
                                &PTR____CFConstantStringClassReference_110ddcc18);
          }
          else {
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            lStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            plStack_1e0 = (long *)0x0;
            puVar13 = puVar12;
            _objc_retain();
            puVar11 = puVar13;
            func_0x00010bf52a60();
            if (puVar11 != (undefined *)0x0) {
              lVar19 = *plStack_1e0;
              do {
                puVar20 = (undefined *)0x0;
                do {
                  if (*plStack_1e0 != lVar19) {
                    _objc_enumerationMutation(puVar13);
                  }
                  puVar14 = PTR_PTR_1126add78;
                  func_0x00010c0df6c0(PTR_PTR_1126add78,param_2,
                                      *(undefined8 *)(lStack_1e8 + (long)puVar20 * 8));
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR_PTR_1126add78;
                  if (puVar14 != (undefined *)0x0) {
                    puVar15 = PTR_PTR_1126ade88;
                    _objc_alloc(PTR_PTR_1126ade88);
                    func_0x00010c03d760();
                    puVar16 = puVar14;
                    func_0x00010c25d700(puVar14);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf71e80(puVar1,param_2,puVar10,puVar15,puVar16);
                    _objc_release(puVar16);
                    _objc_release(puVar15);
                  }
                  _objc_release(puVar14);
                  puVar20 = puVar20 + 1;
                } while (puVar11 != puVar20);
                puVar11 = puVar13;
                func_0x00010bf52a60(puVar13,param_2,&uStack_1f0,auStack_170,0x10);
              } while (puVar11 != (undefined *)0x0);
            }
          }
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar10);
          _objc_release(puVar8);
          _objc_release(puVar9);
          _objc_release(puVar7);
        }
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar6);
      puVar6 = puVar4;
      func_0x00010bf52a60(puVar4,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (puVar6 != (undefined *)0x0);
  }
LAB_10495924c:
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return (undefined *)0x1;
  }
  return puVar3;
}



/* Entry: 1049592b0; end: 1049592b7; +[FBSDKErrorConfiguration supportsSecureCoding] */

undefined8 FUN_1049592b0(void)

{
  return 1;
}



/* Entry: 1049592b8; end: 1049593e3; -[FBSDKErrorConfiguration initWithCoder:] */

undefined8 FUN_1049592b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf39c40();
  func_0x00010bf39c40();
  func_0x00010bf39c40();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_3;
  func_0x00010bf67040(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c00c560(param_1);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar4,PTR_s_encodeObject_forKey__1125c25b0,*(undefined8 *)(puVar2 + 8),
             &PTR____CFConstantStringClassReference_110da3698);
  return uVar4;
}



/* Entry: 1049593e4; end: 1049593fb; -[FBSDKErrorConfiguration encodeWithCoder:] */

void FUN_1049593e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeObject_forKey__1125c25b0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110da3698);
  return;
}



/* Entry: 1049593fc; end: 1049593ff; -[FBSDKErrorConfiguration copyWithZone:] */

void FUN_1049593fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104959400; end: 104959407; -[FBSDKErrorConfiguration configurationDictionary] */

undefined8 FUN_104959400(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104959408; end: 104959413; -[FBSDKErrorConfiguration setConfigurationDictionary:] */

void FUN_104959408(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 104959414; end: 10495941f; -[FBSDKErrorConfiguration .cxx_destruct] */

void FUN_104959414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104959420; end: 1049594bb; -[FBSDKErrorConfigurationProvider errorConfiguration] */

void FUN_104959420(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ade20;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf274a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf989a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ade90;
    _objc_alloc(PTR_PTR_1126ade90);
    func_0x00010c00c560();
  }
  else {
    puVar4 = puVar3;
    _objc_retain(puVar3);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1049594bc; end: 10495957f; -[FBSDKTemporaryErrorRecoveryAttempter attemptRecoveryFromError:completionHandler:] */

void FUN_1049594bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain();
  (**(code **)(param_4 + 0x10))();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104959580; end: 104959627; +[FBSDKErrorRecoveryAttempter recoveryAttempterFromConfiguration:] */

void FUN_104959580(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010bf98920();
  ppuVar3 = (undefined **)PTR_PTR_1126ade98;
  if (lVar1 == 1) {
LAB_1049595b0:
    func_0x00010c0d8420();
  }
  else {
    lVar1 = param_3;
    func_0x00010bf98920();
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c124240();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0720c0();
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110da36d8;
        _NSClassFromString();
        if (ppuVar3 != (undefined **)0x0) goto LAB_1049595b0;
      }
    }
    ppuVar3 = (undefined **)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104959628; end: 10495962b; -[FBSDKErrorRecoveryAttempter attemptRecoveryFromError:completionHandler:] */

void FUN_104959628(void)

{
  return;
}



/* Entry: 10495962c; end: 10495971b; -[FBSDKErrorRecoveryConfiguration initWithRecoveryDescription:optionDescriptions:category:recoveryActionName:] */

undefined1 *
FUN_10495962c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_48 = PTR_PTR_1126e3360;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10495971c; end: 104959723; +[FBSDKErrorRecoveryConfiguration supportsSecureCoding] */

undefined8 FUN_10495971c(void)

{
  return 1;
}



/* Entry: 104959724; end: 1049598f3; -[FBSDKErrorRecoveryConfiguration initWithCoder:] */

long FUN_104959724(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf39c40(puVar1);
  lVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dd3178);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf39c40();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_68 = puVar3;
  func_0x00010bf39c40();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bf67040(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dcf298);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
  lVar6 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dcef38);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar7 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110daf5b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar8 = lVar6;
  func_0x00010c2827c0(lVar6);
  lVar9 = lVar2;
  func_0x00010c03d760(param_1,param_2,lVar2,lVar5,lVar8,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(lVar9);
  func_0x00010bf93020();
  func_0x00010bf93020(lVar9,param_2,*(undefined8 *)(lVar2 + 0x10),
                      &PTR____CFConstantStringClassReference_110dcf298);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(lVar2 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(lVar9,param_2,puVar1,&PTR____CFConstantStringClassReference_110dcef38);
  _objc_release(puVar1);
  func_0x00010bf93020(lVar9,param_2,*(undefined8 *)(lVar2 + 0x20),
                      &PTR____CFConstantStringClassReference_110daf5b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return lVar9;
}



/* Entry: 1049598f4; end: 10495999b; -[FBSDKErrorRecoveryConfiguration encodeWithCoder:] */

void FUN_1049598f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110dcf298);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dcef38);
  _objc_release(puVar1);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110daf5b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10495999c; end: 10495999f; -[FBSDKErrorRecoveryConfiguration copyWithZone:] */

void FUN_10495999c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1049599a0; end: 1049599a7; -[FBSDKErrorRecoveryConfiguration localizedRecoveryDescription] */

undefined8 FUN_1049599a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1049599a8; end: 1049599af; -[FBSDKErrorRecoveryConfiguration localizedRecoveryOptionDescriptions] */

undefined8 FUN_1049599a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1049599b0; end: 1049599b7; -[FBSDKErrorRecoveryConfiguration errorCategory] */

undefined8 FUN_1049599b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1049599b8; end: 1049599bf; -[FBSDKErrorRecoveryConfiguration recoveryActionName] */

undefined8 FUN_1049599b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1049599c0; end: 1049599fb; -[FBSDKErrorRecoveryConfiguration .cxx_destruct] */

void FUN_1049599c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1049599fc; end: 104959aa3; -[FBSDKErrorReporter init] */

undefined8 FUN_1049599fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126add18;
  func_0x00010c0d8420(PTR_PTR_1126add18);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ade50;
  func_0x00010c22bfc0(PTR_PTR_1126ade50);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSData_1126ae778);
  func_0x00010c018060(param_1,param_2,puVar1,puVar2,puVar3,puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 104959aa4; end: 104959bbf; -[FBSDKErrorReporter initWithGraphRequestFactory:fileManager:settings:fileDataExtractor:] */

undefined1 *
FUN_104959aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar4 = &uStack_60;
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  uVar3 = param_5;
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126e3368;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar4 + 0x10),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar4 + 0x18),param_4);
    _objc_storeStrong((undefined1 *)((long)puVar4 + 0x20),param_5);
    puVar5 = (undefined1 *)((long)puVar4 + 0x28);
    _objc_storeStrong(puVar5,param_6);
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar4 + 0x30);
    *(undefined1 **)((long)puVar4 + 0x30) = puVar6;
    _objc_release(uVar7);
    _objc_release(puVar5);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (undefined1 *)puVar4;
}



/* Entry: 104959bc0; end: 104959c5b; +[FBSDKErrorReporter shared] */

void FUN_104959bc0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x104959c34;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  if (lRam000000011369d290 != -1) {
    func_0x00010002a2fc(0x11369d290,&puStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d288);
  return;
}



/* Entry: 104959c5c; end: 104959cbb; -[FBSDKErrorReporter enable] */

void FUN_104959c5c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bf560c0();
  uVar1 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0701c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c28dc00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1b0b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsEnabled__112649cf0,1);
  return;
}



/* Entry: 104959cbc; end: 104959d33; +[FBSDKErrorReporter saveError:errorDomain:message:] */

void FUN_104959cbc(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  
  puVar1 = PTR_PTR_1126adea0;
  _objc_retain(in_x4);
  _objc_retain(in_x3);
  func_0x00010c0d8420(puVar1);
  func_0x00010c14a540();
  _objc_release(in_x4);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104959d34; end: 104959e8f; -[FBSDKErrorReporter saveError:errorDomain:message:] */

void FUN_104959d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c071800();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da0738);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    ppuStack_78 = &PTR____CFConstantStringClassReference_110db0dd8;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_70 = &PTR____CFConstantStringClassReference_110e7cfd8;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110dc1558;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar2;
    uStack_58 = param_4;
    puStack_50 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_78,3)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be98fe0(param_1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = param_4;
  func_0x00010bface80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010bf7f980(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bfa1640(uVar5,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  if ((uVar7 & 1) == 0) {
    uVar5 = param_4;
    func_0x00010bface80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010bf7f980(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bfa15e0(uVar5,param_2,uVar6,0,0,0);
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((uVar7 & 1) == 0) {
      func_0x00010bf7f980();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da3718);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      func_0x00010c23cd40(PTR_PTR_1126add38,param_2,&PTR____CFConstantStringClassReference_110da4e38
                          ,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 104959e90; end: 104959fd3; -[FBSDKErrorReporter createErrorDirectoryIfNeeded] */

void FUN_104959e90(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010bface80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf7f980(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfa1640(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bface80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf7f980(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfa15e0(uVar1,param_2,uVar2,0,0,0);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((uVar3 & 1) == 0) {
      func_0x00010bf7f980();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110da3718);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      func_0x00010c23cd40(PTR_PTR_1126add38,param_2,&PTR____CFConstantStringClassReference_110da4e38
                          ,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
  return;
}



/* Entry: 104959fd4; end: 10495a1ff; -[FBSDKErrorReporter uploadErrors] */

void FUN_104959fd4(undefined **param_1,undefined8 param_2,undefined **param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_1;
  func_0x00010c09b440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf529e0();
  if (ppuVar2 == (undefined **)0x0) {
    func_0x00010bde0360(param_1);
  }
  else {
    param_4 = (undefined *)0x0;
    puVar3 = PTR_PTR_1126add78;
    param_3 = ppuVar1;
    func_0x00010bf64b60();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      func_0x00010c008340();
      ppuVar4 = param_1;
      func_0x00010bfcde20(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar5 = param_1;
      func_0x00010c227f80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010bf05260();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar6;
      func_0x00010c25d9e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110da2b58);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_70 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar2 != (undefined **)0x0) {
        ppuStack_70 = ppuVar2;
      }
      ppuStack_78 = &PTR____CFConstantStringClassReference_110da3738;
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_70,&ppuStack_78
                          ,1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar4;
      param_4 = puVar8;
      func_0x00010bf56560(ppuVar4,param_2,puVar7,puVar8,
                          &PTR____CFConstantStringClassReference_110dada18,0,param_7,param_8,
                          ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_10495a200;
      puStack_88 = &UNK_1107b94c8;
      param_3 = &puStack_a0;
      ppuStack_80 = param_1;
      func_0x00010c251a80(ppuVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      _objc_release(ppuVar2);
    }
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  if (param_4 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    ppuVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar3);
    if ((int)ppuVar2 != 0) {
      ppuVar2 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dab0d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar2 != (undefined **)0x0) {
        func_0x00010bde0360(ppuVar1[4]);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10495a200; end: 10495a283;  */

void FUN_10495a200(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain();
  if (param_4 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    lVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)lVar2 != 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dab0d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        func_0x00010bde0360(*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10495a284; end: 10495a4ef; -[FBSDKErrorReporter loadErrorReports] */

void FUN_10495a284(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bface80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf7f980(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bfa15c0(uVar7,param_2,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar7);
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR___NSConcreteGlobalBlock_1107b9808);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bfaea40(uVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar2 = uVar7;
  func_0x00010c246ca0(uVar7,param_2,&PTR___NSConcreteGlobalBlock_1107b9828);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = uVar2;
  func_0x00010bf529e0();
  uVar3 = uVar2;
  if (uVar7 != 0) {
    uVar7 = uVar2;
    func_0x00010bf529e0();
    if (999 < uVar7) {
      uVar7 = 1000;
    }
    func_0x00010c25e980(uVar2,param_2,0,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar7 = uVar3;
    func_0x00010bf529e0();
    if (uVar7 != 0) {
      uVar7 = 0;
      do {
        uVar2 = param_1;
        func_0x00010bf7f980(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126add78;
        func_0x00010bf09f40(PTR_PTR_1126add78,param_2,uVar3,uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010c25ce00(uVar2,param_2,puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(uVar2);
        uVar2 = param_1;
        func_0x00010bf63820();
        func_0x00010bfa1620();
        _objc_retainAutoreleasedReturnValue();
        if (uVar2 != 0) {
          puVar5 = PTR_PTR_1126add78;
          func_0x00010bdc1900(PTR_PTR_1126add78,param_2,uVar2,0,0);
          _objc_retainAutoreleasedReturnValue();
          if (puVar5 != (undefined *)0x0) {
            func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar1,puVar5);
          }
          _objc_release(puVar5);
        }
        _objc_release(uVar2);
        _objc_release(uVar6);
        uVar7 = uVar7 + 1;
        uVar2 = uVar3;
        func_0x00010bf529e0();
      } while (uVar7 < uVar2);
    }
  }
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10495a4f0; end: 10495a54b;  */

undefined8 FUN_10495a4f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bfda7c0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bfdcf80(param_2);
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10495a54c; end: 10495a557;  */

void FUN_10495a54c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_compare__1125ae690,param_2);
  return;
}



/* Entry: 10495a558; end: 10495a723; -[FBSDKErrorReporter _clearErrorInfo] */

void FUN_10495a558(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bface80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf7f980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfa15c0(lVar1,param_2,lVar9,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain();
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        func_0x00010bfda7c0(uVar8,param_2,&PTR____CFConstantStringClassReference_110da3778);
        if ((int)uVar8 != 0) {
          lVar3 = param_1;
          func_0x00010bf7f980(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c25ce00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          lVar3 = param_1;
          func_0x00010bface80(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa1700();
          _objc_release(lVar3);
          _objc_release(lVar4);
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar2;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar6 = (undefined1 *)puVar5;
  func_0x00010bf529e0();
  if (puVar6 != (undefined1 *)0x0) {
    puVar7 = PTR_PTR_1126add78;
    func_0x00010bf64b60(PTR_PTR_1126add78,param_2,puVar5,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be70b80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2be500(puVar7,param_2,lVar2,1);
    _objc_release(lVar2);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10495a724; end: 10495a7b7; -[FBSDKErrorReporter _saveErrorInfoToDisk:] */

void FUN_10495a724(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126add78;
    func_0x00010bf64b60(PTR_PTR_1126add78,param_2,param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be70b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2be500(puVar2,param_2,param_1,1);
    _objc_release(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10495a7b8; end: 10495a897; -[FBSDKErrorReporter _pathToErrorInfoFile] */

void FUN_10495a7b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da0738);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bf7f980(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110da3798);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c25ce00(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10495a898; end: 10495a89f; -[FBSDKErrorReporter graphRequestFactory] */

undefined8 FUN_10495a898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10495a8a0; end: 10495a8ab; -[FBSDKErrorReporter setGraphRequestFactory:] */

void FUN_10495a8a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10495a8ac; end: 10495a8b3; -[FBSDKErrorReporter fileManager] */

undefined8 FUN_10495a8ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10495a8b4; end: 10495a8bf; -[FBSDKErrorReporter setFileManager:] */

void FUN_10495a8b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10495a8c0; end: 10495a8c7; -[FBSDKErrorReporter settings] */

undefined8 FUN_10495a8c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10495a8c8; end: 10495a8d3; -[FBSDKErrorReporter setSettings:] */

void FUN_10495a8c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10495a8d4; end: 10495a8db; -[FBSDKErrorReporter dataExtractor] */

undefined8 FUN_10495a8d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10495a8dc; end: 10495a8e7; -[FBSDKErrorReporter setDataExtractor:] */

void FUN_10495a8dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10495a8e8; end: 10495a8ef; -[FBSDKErrorReporter directoryPath] */

undefined8 FUN_10495a8e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10495a8f0; end: 10495a8f7; -[FBSDKErrorReporter isEnabled] */

undefined1 FUN_10495a8f0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10495a8f8; end: 10495a8ff; -[FBSDKErrorReporter setIsEnabled:] */

void FUN_10495a8f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10495a900; end: 10495a953; -[FBSDKErrorReporter .cxx_destruct] */

void FUN_10495a900(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10495a954; end: 10495a95f; +[FBSDKEventBinding numberParser] */

void FUN_10495a954(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d298);
  return;
}



/* Entry: 10495a960; end: 10495a96f; +[FBSDKEventBinding setNumberParser:] */

void FUN_10495a960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d298,param_3);
  return;
}



/* Entry: 10495a970; end: 10495a9d3; +[FBSDKEventBinding initialize] */

void FUN_10495a970(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126adea8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026a20(puVar2,param_2,puVar3);
  uVar1 = puRam000000011369d298;
  puRam000000011369d298 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10495a9d4; end: 10495adc3; -[FBSDKEventBinding initWithJSON:eventLogger:] */

undefined **
FUN_10495a9d4(undefined *param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **unaff_x23;
  undefined *unaff_x24;
  undefined **unaff_x25;
  long lVar16;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined8 uStack_480;
  long lStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined auStack_438 [128];
  long lStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined **ppuStack_388;
  undefined *puStack_380;
  undefined **ppuStack_378;
  undefined1 **ppuStack_370;
  code *pcStack_368;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_280;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined *puStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = param_3;
  _objc_retain();
  ppuVar1 = param_4;
  _objc_retain();
  puStack_178 = PTR_PTR_1126e3370;
  ppuVar15 = &puStack_180;
  puStack_180 = param_1;
  _objc_msgSendSuper2(ppuVar15,PTR_s_init_1125d9248);
  if (ppuVar15 != (undefined **)0x0) {
    ppuStack_210 = ppuVar1;
    _objc_storeStrong(ppuVar15 + 7,param_4);
    ppuVar13 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar13;
    func_0x00010bf51e00();
    puVar10 = ppuVar15[1];
    ppuVar15[1] = (undefined *)ppuVar1;
    _objc_release(puVar10);
    _objc_release(ppuVar13);
    ppuVar13 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar13;
    func_0x00010bf51e00();
    puVar10 = ppuVar15[2];
    ppuVar15[2] = (undefined *)ppuVar1;
    _objc_release(puVar10);
    _objc_release(ppuVar13);
    ppuVar13 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar13;
    func_0x00010bf51e00();
    puVar10 = ppuVar15[3];
    ppuVar15[3] = (undefined *)ppuVar1;
    _objc_release(puVar10);
    _objc_release(ppuVar13);
    ppuVar13 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar13;
    func_0x00010bf51e00();
    puVar10 = ppuVar15[5];
    ppuVar15[5] = (undefined *)ppuVar1;
    _objc_release(puVar10);
    _objc_release(ppuVar13);
    param_4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    puStack_1b0 = (undefined8 *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    _objc_retain();
    ppuVar13 = param_4;
    func_0x00010bf52a60();
    unaff_x27 = &PTR_PTR_1126ad000;
    if (ppuVar13 != (undefined **)0x0) {
      unaff_x28 = (undefined **)*puStack_1b0;
      do {
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_1b0 != unaff_x28) {
            _objc_enumerationMutation(param_4);
          }
          puVar12 = PTR_PTR_1126ade60;
          _objc_alloc(PTR_PTR_1126ade60);
          func_0x00010c020680();
          func_0x00010bf09f20(PTR_PTR_1126add78);
          _objc_release(puVar12);
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar13 != unaff_x26);
        ppuVar13 = param_4;
        func_0x00010bf52a60();
      } while (ppuVar13 != (undefined **)0x0);
    }
    _objc_release(param_4);
    puVar12 = puVar10;
    func_0x00010bf51e00();
    puVar11 = ppuVar15[4];
    ppuVar15[4] = puVar12;
    _objc_release(puVar11);
    ppuStack_208 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1f8 = 0;
    puStack_200 = (undefined *)0x0;
    uStack_1e8 = 0;
    puStack_1f0 = (undefined8 *)0x0;
    unaff_x23 = param_3;
    _objc_retain();
    ppuVar13 = &puStack_200;
    ppuVar1 = unaff_x23;
    func_0x00010bf52a60();
    unaff_x25 = param_3;
    if (ppuVar1 != (undefined **)0x0) {
      unaff_x28 = (undefined **)*puStack_1f0;
      do {
        ppuVar13 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_1f0 != unaff_x28) {
            _objc_enumerationMutation(unaff_x23);
          }
          unaff_x26 = (undefined **)PTR_PTR_1126adeb0;
          _objc_alloc();
          func_0x00010c020680();
          func_0x00010bf09f20(PTR_PTR_1126add78);
          _objc_release(unaff_x26);
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while (ppuVar1 != ppuVar13);
        ppuVar13 = &puStack_200;
        ppuVar1 = unaff_x23;
        func_0x00010bf52a60();
        unaff_x25 = (undefined **)0x0;
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(unaff_x23);
    puVar10 = unaff_x24;
    func_0x00010bf51e00();
    puVar12 = ppuVar15[6];
    ppuVar15[6] = puVar10;
    _objc_release(puVar12);
    _objc_release(unaff_x23);
    _objc_release(unaff_x24);
    _objc_release(param_4);
    param_3 = ppuStack_208;
    ppuVar1 = ppuStack_210;
  }
  _objc_release(ppuVar1);
  ppuVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar15;
  }
  ___stack_chk_fail();
  pcStack_218 = FUN_10495adc4;
  lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = unaff_x28;
  ppuStack_268 = unaff_x27;
  ppuStack_260 = unaff_x26;
  ppuStack_258 = unaff_x25;
  puStack_250 = unaff_x24;
  ppuStack_248 = unaff_x23;
  ppuStack_240 = param_4;
  ppuStack_238 = ppuVar15;
  ppuStack_230 = ppuVar1;
  ppuStack_228 = param_3;
  puStack_220 = &stack0xfffffffffffffff0;
  _objc_retain();
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
  ppuVar1 = ppuVar13;
  func_0x00010c075f00();
  ppuStack_348 = ppuVar13;
  if ((int)ppuVar1 == 0) {
    ppuStack_348 = (undefined **)0x0;
  }
  ppuStack_358 = ppuVar13;
  _objc_retain();
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(PTR_PTR_1126add78);
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  ppuStack_350 = ppuVar2;
  func_0x00010c0f3840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar13 != (undefined **)0x0) {
    lVar16 = *plStack_330;
    do {
      ppuVar15 = (undefined **)0x0;
      do {
        if (*plStack_330 != lVar16) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x27 = *(undefined ***)(lStack_338 + (long)ppuVar15 * 8);
        ppuVar1 = unaff_x27;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        if ((ppuVar1 == (undefined **)0x0) ||
           (ppuVar3 = ppuVar1, func_0x00010c08fa60(), ppuVar5 = ppuVar1,
           ppuVar3 == (undefined **)0x0)) {
          ppuVar5 = (undefined **)PTR_PTR_1126adeb8;
          ppuVar3 = unaff_x27;
          func_0x00010c0f5800(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = unaff_x27;
          func_0x00010c0f59e0(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfaf460();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar1);
          _objc_release(ppuVar4);
          _objc_release(ppuVar3);
          unaff_x28 = ppuVar5;
        }
        ppuVar1 = ppuVar5;
        func_0x00010c08fa60();
        if (ppuVar1 != (undefined **)0x0) {
          ppuVar1 = unaff_x27;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar1;
          func_0x00010c0720c0();
          _objc_release(ppuVar1);
          puVar12 = PTR_PTR_1126add78;
          if ((int)ppuVar3 == 0) {
            unaff_x28 = unaff_x27;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf71e80(puVar12);
          }
          else {
            ppuVar1 = ppuStack_350;
            func_0x00010bf39c40();
            func_0x00010c0df680();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = ppuVar1;
            func_0x00010c0f4320();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar1);
            puVar12 = PTR_PTR_1126add78;
            ppuVar1 = unaff_x27;
            func_0x00010c0d4f60(unaff_x27);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf71e80(puVar12);
            _objc_release(ppuVar1);
          }
          _objc_release(unaff_x28);
        }
        _objc_release(ppuVar5);
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      } while (ppuVar13 != ppuVar15);
      ppuVar13 = ppuVar2;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (ppuVar13 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  ppuVar13 = ppuStack_350;
  ppuVar1 = ppuStack_350;
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = ppuVar13[1];
  puVar12 = puVar10;
  func_0x00010bf51e00();
  puVar11 = puVar14;
  puVar6 = puVar12;
  func_0x00010c0a5a60(ppuVar1);
  _objc_release(puVar12);
  _objc_release(ppuVar1);
  _objc_release(puVar10);
  _objc_release(ppuStack_348);
  ppuVar13 = ppuStack_358;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_280) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_480;
  pcStack_368 = FUN_10495b118;
  lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3b0 = unaff_x28;
  ppuStack_3a8 = unaff_x27;
  puStack_3a0 = unaff_x24;
  puStack_398 = puVar12;
  puStack_390 = puVar10;
  ppuStack_388 = ppuVar15;
  puStack_380 = puVar14;
  ppuStack_378 = ppuVar1;
  ppuStack_370 = &puStack_220;
  _objc_retain();
  _objc_retain();
  lStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  plStack_470 = (long *)0x0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  _objc_retain();
  puVar10 = auStack_438;
  puVar12 = puVar11;
  func_0x00010bf52a60();
  if (puVar12 != (undefined *)0x0) {
    lVar16 = *plStack_470;
    do {
      unaff_x24 = (undefined *)0x0;
      do {
        if (*plStack_470 != lVar16) {
          _objc_enumerationMutation(puVar11);
        }
        puVar9 = *(undefined8 **)(lStack_478 + (long)unaff_x24 * 8);
        ppuVar15 = ppuVar13;
        puVar10 = puVar6;
        func_0x00010c0bc580();
        if (((ulong)ppuVar15 & 1) != 0) {
          ppuVar15 = (undefined **)0x1;
          goto LAB_10495b204;
        }
        unaff_x24 = unaff_x24 + 1;
      } while (puVar12 != unaff_x24);
      puVar10 = auStack_438;
      puVar12 = puVar11;
      puVar9 = &uStack_480;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined *)0x0);
  }
  ppuVar15 = (undefined **)0x0;
LAB_10495b204:
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
    return ppuVar15;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  if (puVar9 == (undefined8 *)0x0) {
    ppuVar15 = (undefined **)0x0;
    goto LAB_10495b384;
  }
  puVar7 = (undefined1 *)puVar9;
  func_0x00010bf39c40();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf39ce0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0720c0();
  _objc_release(puVar12);
  if ((int)puVar8 == 0) goto LAB_10495b378;
  puVar12 = puVar10;
  func_0x00010bfec9e0();
  if (-1 < (int)puVar12) {
    puVar12 = PTR_PTR_1126ade58;
    func_0x00010bfc8820();
    _objc_retainAutoreleasedReturnValue();
    if (puVar12 == (undefined *)0x0) {
      puVar11 = puVar10;
      func_0x00010bfec9e0();
      if ((int)puVar11 != 0) goto LAB_10495b370;
    }
    else {
      puVar11 = PTR_PTR_1126ade58;
      func_0x00010bfc3960();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = puVar11;
      func_0x00010bfecde0();
      if ((unaff_x24 == (undefined *)0x7fffffffffffffff) ||
         (puVar6 = puVar10, func_0x00010bfec9e0(), unaff_x24 != (undefined *)(long)(int)puVar6)) {
        _objc_release(puVar11);
LAB_10495b370:
        _objc_release(puVar12);
        goto LAB_10495b378;
      }
      _objc_release(puVar11);
    }
    _objc_release(puVar12);
  }
  puVar12 = puVar10;
  func_0x00010c0bcb40();
  if (((uint)puVar12 >> 1 & 1) != 0) {
    puVar12 = PTR_PTR_1126ade58;
    func_0x00010bfcb180();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar12;
    func_0x00010c08fa60();
    if (puVar11 == (undefined *)0x0) {
      unaff_x24 = puVar10;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = unaff_x24;
      func_0x00010c08fa60();
      if (puVar6 == (undefined *)0x0) {
        _objc_release(unaff_x24);
        _objc_release(puVar12);
        goto LAB_10495b470;
      }
    }
    puVar6 = puVar10;
    func_0x00010c26b700(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010c0720c0();
    _objc_release(puVar6);
    if (puVar11 == (undefined *)0x0) {
      _objc_release(unaff_x24);
      _objc_release(puVar12);
      if (((ulong)puVar14 & 1) != 0) goto LAB_10495b470;
    }
    else {
      _objc_release(puVar12);
      if ((int)puVar14 != 0) goto LAB_10495b470;
    }
    goto LAB_10495b378;
  }
LAB_10495b470:
  puVar12 = puVar10;
  func_0x00010c0bcb40();
  if (((uint)puVar12 >> 2 & 1) != 0) {
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar8 = (undefined1 *)puVar9;
    func_0x00010c075f00();
    if ((int)puVar8 != 0) {
      puVar12 = puVar10;
      func_0x00010c268120();
      puVar8 = (undefined1 *)puVar9;
      func_0x00010c268120();
      if (puVar8 != (undefined1 *)(long)(int)puVar12) goto LAB_10495b378;
    }
  }
  puVar12 = puVar10;
  func_0x00010c0bcb40();
  if (((uint)puVar12 >> 4 & 1) == 0) {
LAB_10495b56c:
    ppuVar15 = (undefined **)0x1;
  }
  else {
    puVar12 = PTR_PTR_1126ade58;
    func_0x00010bfc6320();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar12;
    func_0x00010c08fa60();
    if (puVar11 == (undefined *)0x0) {
      unaff_x24 = puVar10;
      func_0x00010bfe36a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = unaff_x24;
      func_0x00010c08fa60();
      if (puVar6 == (undefined *)0x0) {
        _objc_release(unaff_x24);
        _objc_release(puVar12);
        goto LAB_10495b56c;
      }
    }
    puVar6 = puVar10;
    func_0x00010bfe36a0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010c0720c0();
    _objc_release(puVar6);
    if (puVar11 == (undefined *)0x0) {
      _objc_release(unaff_x24);
      _objc_release(puVar12);
      if (((ulong)puVar14 & 1) != 0) goto LAB_10495b56c;
    }
    else {
      _objc_release(puVar12);
      if ((int)puVar14 != 0) goto LAB_10495b56c;
    }
LAB_10495b378:
    ppuVar15 = (undefined **)0x0;
  }
  _objc_release(puVar7);
LAB_10495b384:
  _objc_release(puVar10);
  _objc_release(puVar9);
  return ppuVar15;
}



/* Entry: 10495adc4; end: 10495b117; -[FBSDKEventBinding trackEvent:] */

ulong FUN_10495adc4(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *unaff_x21;
  ulong uVar11;
  undefined *unaff_x24;
  long lVar12;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined auStack_228 [128];
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  ulong uStack_148;
  undefined *puStack_140;
  ulong uStack_138;
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
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar11 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  uStack_138 = param_3;
  if ((int)uVar11 == 0) {
    uStack_138 = 0;
  }
  uStack_148 = param_3;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar1,
                      &PTR____CFConstantStringClassReference_110db2d38,
                      &PTR____CFConstantStringClassReference_110da37b8);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puStack_140 = param_1;
  func_0x00010c0f3840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar12 = *plStack_120;
    do {
      unaff_x21 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x27 = *(undefined **)(lStack_128 + (long)unaff_x21 * 8);
        puVar3 = unaff_x27;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        if ((puVar3 == (undefined *)0x0) ||
           (puVar4 = puVar3, func_0x00010c08fa60(), puVar5 = puVar3, puVar4 == (undefined *)0x0)) {
          puVar5 = PTR_PTR_1126adeb8;
          puVar4 = unaff_x27;
          func_0x00010c0f5800(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = unaff_x27;
          func_0x00010c0f59e0(unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfaf460(puVar5,param_2,puVar4,puVar10,uStack_138);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(puVar10);
          _objc_release(puVar4);
          unaff_x28 = puVar5;
        }
        puVar3 = puVar5;
        func_0x00010c08fa60();
        if (puVar3 != (undefined *)0x0) {
          puVar3 = unaff_x27;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          puVar3 = PTR_PTR_1126add78;
          if ((int)puVar4 == 0) {
            unaff_x28 = unaff_x27;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf71e80(puVar3,param_2,puVar1,puVar5,unaff_x28);
          }
          else {
            puVar3 = puStack_140;
            func_0x00010bf39c40();
            func_0x00010c0df680();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = puVar3;
            func_0x00010c0f4320();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            puVar3 = PTR_PTR_1126add78;
            puVar4 = unaff_x27;
            func_0x00010c0d4f60(unaff_x27);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf71e80(puVar3,param_2,puVar1,unaff_x28,puVar4);
            _objc_release(puVar4);
          }
          _objc_release(unaff_x28);
        }
        _objc_release(puVar5);
        unaff_x21 = unaff_x21 + 1;
      } while (puVar2 != unaff_x21);
      puVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x24 = (undefined *)0x0;
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_1);
  puVar2 = puStack_140;
  puVar3 = puStack_140;
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = *(undefined **)(puVar2 + 8);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  puVar5 = puVar10;
  puVar4 = puVar2;
  func_0x00010c0a5a60(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(uStack_138);
  uVar11 = uStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar11;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_270;
  pcStack_158 = FUN_10495b118;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a0 = unaff_x28;
  puStack_198 = unaff_x27;
  puStack_190 = unaff_x24;
  puStack_188 = puVar2;
  puStack_180 = puVar1;
  puStack_178 = unaff_x21;
  puStack_170 = puVar10;
  puStack_168 = puVar3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain();
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  _objc_retain();
  puVar1 = auStack_228;
  puVar2 = puVar5;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar12 = *plStack_260;
    do {
      unaff_x24 = (undefined *)0x0;
      do {
        if (*plStack_260 != lVar12) {
          _objc_enumerationMutation(puVar5);
        }
        puVar9 = *(undefined8 **)(lStack_268 + (long)unaff_x24 * 8);
        uVar6 = uVar11;
        puVar1 = puVar4;
        func_0x00010c0bc580();
        if ((uVar6 & 1) != 0) {
          uVar11 = 1;
          goto LAB_10495b204;
        }
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar1 = auStack_228;
      puVar2 = puVar5;
      puVar9 = &uStack_270;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  uVar11 = 0;
LAB_10495b204:
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return uVar11;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  if (puVar9 == (undefined8 *)0x0) {
    uVar11 = 0;
    goto LAB_10495b384;
  }
  puVar7 = (undefined1 *)puVar9;
  func_0x00010bf39c40();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf39ce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0720c0(puVar7,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)puVar8 == 0) goto LAB_10495b378;
  puVar2 = puVar1;
  func_0x00010bfec9e0();
  if (-1 < (int)puVar2) {
    puVar2 = PTR_PTR_1126ade58;
    func_0x00010bfc8820(PTR_PTR_1126ade58,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = puVar1;
      func_0x00010bfec9e0();
      if ((int)puVar3 != 0) goto LAB_10495b370;
    }
    else {
      puVar3 = PTR_PTR_1126ade58;
      func_0x00010bfc3960(PTR_PTR_1126ade58,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = puVar3;
      func_0x00010bfecde0();
      if ((unaff_x24 == (undefined *)0x7fffffffffffffff) ||
         (puVar5 = puVar1, func_0x00010bfec9e0(), unaff_x24 != (undefined *)(long)(int)puVar5)) {
        _objc_release(puVar3);
LAB_10495b370:
        _objc_release(puVar2);
        goto LAB_10495b378;
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  puVar2 = puVar1;
  func_0x00010c0bcb40();
  if (((uint)puVar2 >> 1 & 1) != 0) {
    puVar2 = PTR_PTR_1126ade58;
    func_0x00010bfcb180(PTR_PTR_1126ade58,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      unaff_x24 = puVar1;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = unaff_x24;
      func_0x00010c08fa60();
      if (puVar5 == (undefined *)0x0) {
        _objc_release(unaff_x24);
        _objc_release(puVar2);
        goto LAB_10495b470;
      }
    }
    puVar5 = puVar1;
    func_0x00010c26b700(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0720c0(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    if (puVar3 == (undefined *)0x0) {
      _objc_release(unaff_x24);
      _objc_release(puVar2);
      if (((ulong)puVar4 & 1) != 0) goto LAB_10495b470;
    }
    else {
      _objc_release(puVar2);
      if ((int)puVar4 != 0) goto LAB_10495b470;
    }
    goto LAB_10495b378;
  }
LAB_10495b470:
  puVar2 = puVar1;
  func_0x00010c0bcb40();
  if (((uint)puVar2 >> 2 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar8 = (undefined1 *)puVar9;
    func_0x00010c075f00(puVar9,param_2,puVar2);
    if ((int)puVar8 != 0) {
      puVar2 = puVar1;
      func_0x00010c268120();
      puVar8 = (undefined1 *)puVar9;
      func_0x00010c268120();
      if (puVar8 != (undefined1 *)(long)(int)puVar2) goto LAB_10495b378;
    }
  }
  puVar2 = puVar1;
  func_0x00010c0bcb40();
  if (((uint)puVar2 >> 4 & 1) == 0) {
LAB_10495b56c:
    uVar11 = 1;
  }
  else {
    puVar2 = PTR_PTR_1126ade58;
    func_0x00010bfc6320(PTR_PTR_1126ade58,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      unaff_x24 = puVar1;
      func_0x00010bfe36a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = unaff_x24;
      func_0x00010c08fa60();
      if (puVar5 == (undefined *)0x0) {
        _objc_release(unaff_x24);
        _objc_release(puVar2);
        goto LAB_10495b56c;
      }
    }
    puVar5 = puVar1;
    func_0x00010bfe36a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0720c0(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    if (puVar3 == (undefined *)0x0) {
      _objc_release(unaff_x24);
      _objc_release(puVar2);
      if (((ulong)puVar4 & 1) != 0) goto LAB_10495b56c;
    }
    else {
      _objc_release(puVar2);
      if ((int)puVar4 != 0) goto LAB_10495b56c;
    }
LAB_10495b378:
    uVar11 = 0;
  }
  _objc_release(puVar7);
LAB_10495b384:
  _objc_release(puVar1);
  _objc_release(puVar9);
  return uVar11;
}



/* Entry: 10495b118; end: 10495b257; +[FBSDKEventBinding matchAnyView:pathComponent:] */

undefined8 FUN_10495b118(ulong param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *unaff_x24;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined auStack_d8 [128];
  long lStack_58;
  
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain();
  puVar3 = auStack_d8;
  puVar1 = param_3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar11 = *plStack_110;
    do {
      unaff_x24 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        puVar9 = *(undefined8 **)(lStack_118 + (long)unaff_x24 * 8);
        uVar2 = param_1;
        puVar3 = param_4;
        func_0x00010c0bc580();
        if ((uVar2 & 1) != 0) {
          uVar10 = 1;
          goto LAB_10495b204;
        }
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar3 = auStack_d8;
      puVar1 = param_3;
      puVar9 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
  uVar10 = 0;
LAB_10495b204:
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar10;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain();
  if (puVar9 == (undefined8 *)0x0) {
    uVar10 = 0;
    goto LAB_10495b384;
  }
  puVar4 = (undefined1 *)puVar9;
  func_0x00010bf39c40();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bf39ce0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0720c0(puVar4,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)puVar5 == 0) goto LAB_10495b378;
  puVar1 = puVar3;
  func_0x00010bfec9e0();
  if (-1 < (int)puVar1) {
    puVar1 = PTR_PTR_1126ade58;
    func_0x00010bfc8820(PTR_PTR_1126ade58,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar7 = puVar3;
      func_0x00010bfec9e0();
      if ((int)puVar7 != 0) goto LAB_10495b370;
    }
    else {
      puVar7 = PTR_PTR_1126ade58;
      func_0x00010bfc3960(PTR_PTR_1126ade58,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = puVar7;
      func_0x00010bfecde0();
      if ((unaff_x24 == (undefined *)0x7fffffffffffffff) ||
         (puVar6 = puVar3, func_0x00010bfec9e0(), unaff_x24 != (undefined *)(long)(int)puVar6)) {
        _objc_release(puVar7);
LAB_10495b370:
        _objc_release(puVar1);
        goto LAB_10495b378;
      }
      _objc_release(puVar7);
    }
    _objc_release(puVar1);
  }
  puVar1 = puVar3;
  func_0x00010c0bcb40();
  if (((uint)puVar1 >> 1 & 1) != 0) {
    puVar1 = PTR_PTR_1126ade58;
    func_0x00010bfcb180(PTR_PTR_1126ade58,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c08fa60();
    if (puVar7 == (undefined *)0x0) {
      unaff_x24 = puVar3;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = unaff_x24;
      func_0x00010c08fa60();
      if (puVar6 == (undefined *)0x0) {
        _objc_release(unaff_x24);
        _objc_release(puVar1);
        goto LAB_10495b470;
      }
    }
    puVar6 = puVar3;
    func_0x00010c26b700(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c0720c0(puVar1,param_2,puVar6);
    _objc_release(puVar6);
    if (puVar7 == (undefined *)0x0) {
      _objc_release(unaff_x24);
      _objc_release(puVar1);
      if (((ulong)puVar8 & 1) != 0) goto LAB_10495b470;
    }
    else {
      _objc_release(puVar1);
      if ((int)puVar8 != 0) goto LAB_10495b470;
    }
    goto LAB_10495b378;
  }
LAB_10495b470:
  puVar1 = puVar3;
  func_0x00010c0bcb40();
  if (((uint)puVar1 >> 2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar5 = (undefined1 *)puVar9;
    func_0x00010c075f00(puVar9,param_2,puVar1);
    if ((int)puVar5 != 0) {
      puVar1 = puVar3;
      func_0x00010c268120();
      puVar5 = (undefined1 *)puVar9;
      func_0x00010c268120();
      if (puVar5 != (undefined1 *)(long)(int)puVar1) goto LAB_10495b378;
    }
  }
  puVar1 = puVar3;
  func_0x00010c0bcb40();
  if (((uint)puVar1 >> 4 & 1) == 0) {
LAB_10495b56c:
    uVar10 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126ade58;
    func_0x00010bfc6320(PTR_PTR_1126ade58,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c08fa60();
    if (puVar7 == (undefined *)0x0) {
      unaff_x24 = puVar3;
      func_0x00010bfe36a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = unaff_x24;
      func_0x00010c08fa60();
      if (puVar6 == (undefined *)0x0) {
        _objc_release(unaff_x24);
        _objc_release(puVar1);
        goto LAB_10495b56c;
      }
    }
    puVar6 = puVar3;
    func_0x00010bfe36a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c0720c0(puVar1,param_2,puVar6);
    _objc_release(puVar6);
    if (puVar7 == (undefined *)0x0) {
      _objc_release(unaff_x24);
      _objc_release(puVar1);
      if (((ulong)puVar8 & 1) != 0) goto LAB_10495b56c;
    }
    else {
      _objc_release(puVar1);
      if ((int)puVar8 != 0) goto LAB_10495b56c;
    }
LAB_10495b378:
    uVar10 = 0;
  }
  _objc_release(puVar4);
LAB_10495b384:
  _objc_release(puVar3);
  _objc_release(puVar9);
  return uVar10;
}



/* Entry: 10495b258; end: 10495b573; +[FBSDKEventBinding match:pathComponent:] */

undefined8 FUN_10495b258(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *unaff_x24;
  
  _objc_retain();
  _objc_retain();
  if (param_3 == 0) {
    uVar7 = 0;
    goto LAB_10495b384;
  }
  lVar1 = param_3;
  func_0x00010bf39c40();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010bf39ce0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0720c0(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)lVar3 == 0) goto LAB_10495b378;
  puVar2 = param_4;
  func_0x00010bfec9e0();
  if (-1 < (int)puVar2) {
    puVar2 = PTR_PTR_1126ade58;
    func_0x00010bfc8820(PTR_PTR_1126ade58,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar5 = param_4;
      func_0x00010bfec9e0();
      if ((int)puVar5 != 0) goto LAB_10495b370;
    }
    else {
      puVar5 = PTR_PTR_1126ade58;
      func_0x00010bfc3960(PTR_PTR_1126ade58,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = puVar5;
      func_0x00010bfecde0();
      if ((unaff_x24 == (undefined *)0x7fffffffffffffff) ||
         (puVar4 = param_4, func_0x00010bfec9e0(), unaff_x24 != (undefined *)(long)(int)puVar4)) {
        _objc_release(puVar5);
LAB_10495b370:
        _objc_release(puVar2);
        goto LAB_10495b378;
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
  }
  puVar2 = param_4;
  func_0x00010c0bcb40();
  if (((uint)puVar2 >> 1 & 1) != 0) {
    puVar2 = PTR_PTR_1126ade58;
    func_0x00010bfcb180(PTR_PTR_1126ade58,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c08fa60();
    if (puVar5 == (undefined *)0x0) {
      unaff_x24 = param_4;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = unaff_x24;
      func_0x00010c08fa60();
      if (puVar4 == (undefined *)0x0) {
        _objc_release(unaff_x24);
        _objc_release(puVar2);
        goto LAB_10495b470;
      }
    }
    puVar4 = param_4;
    func_0x00010c26b700(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c0720c0(puVar2,param_2,puVar4);
    _objc_release(puVar4);
    if (puVar5 == (undefined *)0x0) {
      _objc_release(unaff_x24);
      _objc_release(puVar2);
      if (((ulong)puVar6 & 1) != 0) goto LAB_10495b470;
    }
    else {
      _objc_release(puVar2);
      if ((int)puVar6 != 0) goto LAB_10495b470;
    }
    goto LAB_10495b378;
  }
LAB_10495b470:
  puVar2 = param_4;
  func_0x00010c0bcb40();
  if (((uint)puVar2 >> 2 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
    lVar3 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar2);
    if ((int)lVar3 != 0) {
      puVar2 = param_4;
      func_0x00010c268120();
      lVar3 = param_3;
      func_0x00010c268120();
      if (lVar3 != (int)puVar2) goto LAB_10495b378;
    }
  }
  puVar2 = param_4;
  func_0x00010c0bcb40();
  if (((uint)puVar2 >> 4 & 1) == 0) {
LAB_10495b56c:
    uVar7 = 1;
  }
  else {
    puVar2 = PTR_PTR_1126ade58;
    func_0x00010bfc6320(PTR_PTR_1126ade58,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c08fa60();
    if (puVar5 == (undefined *)0x0) {
      unaff_x24 = param_4;
      func_0x00010bfe36a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = unaff_x24;
      func_0x00010c08fa60();
      if (puVar4 == (undefined *)0x0) {
        _objc_release(unaff_x24);
        _objc_release(puVar2);
        goto LAB_10495b56c;
      }
    }
    puVar4 = param_4;
    func_0x00010bfe36a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c0720c0(puVar2,param_2,puVar4);
    _objc_release(puVar4);
    if (puVar5 == (undefined *)0x0) {
      _objc_release(unaff_x24);
      _objc_release(puVar2);
      if (((ulong)puVar6 & 1) != 0) goto LAB_10495b56c;
    }
    else {
      _objc_release(puVar2);
      if ((int)puVar6 != 0) goto LAB_10495b56c;
    }
LAB_10495b378:
    uVar7 = 0;
  }
  _objc_release(lVar1);
LAB_10495b384:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 10495b574; end: 10495b977; +[FBSDKEventBinding isPath:matchViewPath:] */

undefined8 FUN_10495b574(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain();
  _objc_retain();
  uVar13 = param_3;
  func_0x00010bf529e0();
  if ((uVar13 == 0) || (uVar13 = param_4, func_0x00010bf529e0(), uVar13 == 0)) {
LAB_10495b940:
    uVar12 = 0;
  }
  else {
    uVar13 = param_3;
    func_0x00010bf529e0();
    uVar1 = param_4;
    func_0x00010bf529e0();
    if (uVar1 <= uVar13) {
      uVar13 = uVar1;
    }
    if (uVar13 != 0) {
      uVar13 = 0;
      lVar11 = -1;
      do {
        uVar1 = param_3;
        func_0x00010bf529e0(param_3);
        uVar2 = param_4;
        func_0x00010bf529e0(param_4);
        puVar3 = PTR_PTR_1126add78;
        func_0x00010bf09f40(PTR_PTR_1126add78,param_2,param_3,uVar1 + lVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126add78;
        func_0x00010bf09f40(PTR_PTR_1126add78,param_2,param_4,uVar2 + lVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf39ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bf39ce0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0720c0(puVar5,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar5);
        if ((int)puVar7 == 0) {
LAB_10495b930:
          _objc_release(puVar4);
          _objc_release(puVar3);
          goto LAB_10495b940;
        }
        puVar5 = puVar3;
        func_0x00010bfec9e0();
        if (-1 < (int)puVar5) {
          puVar5 = puVar3;
          func_0x00010bfec9e0();
          puVar6 = puVar4;
          func_0x00010bfec9e0();
          if ((int)puVar5 != (int)puVar6) goto LAB_10495b930;
        }
        puVar5 = puVar3;
        func_0x00010c0bcb40();
        if (((uint)puVar5 >> 1 & 1) != 0) {
          puVar5 = puVar4;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c08fa60();
          if (puVar6 == (undefined *)0x0) {
            uStack_78 = puVar3;
            func_0x00010c26b700();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = uStack_78;
            func_0x00010c08fa60();
            if (puVar7 != (undefined *)0x0) goto LAB_10495b704;
LAB_10495b734:
            _objc_release(uStack_78);
          }
          else {
LAB_10495b704:
            puVar7 = puVar3;
            func_0x00010c26b700(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar5;
            func_0x00010c0720c0(puVar5,param_2,puVar7);
            if (((ulong)puVar8 & 1) == 0) {
              puVar8 = PTR_PTR_1126add08;
              func_0x00010bdc25e0(PTR_PTR_1126add08,param_2,puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar3;
              func_0x00010c26b700(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar8;
              func_0x00010c0720c0(puVar8,param_2,puVar9);
              _objc_release(puVar9);
              _objc_release(puVar8);
              _objc_release(puVar7);
              if (puVar6 == (undefined *)0x0) {
                _objc_release(uStack_78);
              }
              _objc_release(puVar5);
              if (((ulong)puVar10 & 1) == 0) goto LAB_10495b930;
              goto LAB_10495b7c0;
            }
            _objc_release(puVar7);
            if (puVar6 == (undefined *)0x0) goto LAB_10495b734;
          }
          _objc_release(puVar5);
        }
LAB_10495b7c0:
        puVar5 = puVar3;
        func_0x00010c0bcb40();
        if (((uint)puVar5 >> 2 & 1) != 0) {
          puVar5 = puVar3;
          func_0x00010c268120();
          puVar6 = puVar4;
          func_0x00010c268120();
          if ((int)puVar5 != (int)puVar6) goto LAB_10495b930;
        }
        puVar5 = puVar3;
        func_0x00010c0bcb40();
        if (((uint)puVar5 >> 4 & 1) != 0) {
          puVar5 = puVar4;
          func_0x00010bfe36a0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c08fa60();
          if (puVar6 == (undefined *)0x0) {
            uStack_80 = puVar3;
            func_0x00010bfe36a0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = uStack_80;
            func_0x00010c08fa60();
            if (puVar7 != (undefined *)0x0) goto LAB_10495b830;
LAB_10495b860:
            _objc_release(uStack_80);
          }
          else {
LAB_10495b830:
            puVar7 = puVar3;
            func_0x00010bfe36a0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar5;
            func_0x00010c0720c0(puVar5,param_2,puVar7);
            if (((ulong)puVar8 & 1) == 0) {
              puVar8 = PTR_PTR_1126add08;
              func_0x00010bdc25e0(PTR_PTR_1126add08,param_2,puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar3;
              func_0x00010bfe36a0(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar8;
              func_0x00010c0720c0(puVar8,param_2,puVar9);
              _objc_release(puVar9);
              _objc_release(puVar8);
              _objc_release(puVar7);
              if (puVar6 == (undefined *)0x0) {
                _objc_release(uStack_80);
              }
              _objc_release(puVar5);
              if (((ulong)puVar10 & 1) == 0) goto LAB_10495b930;
              goto LAB_10495b8ec;
            }
            _objc_release(puVar7);
            if (puVar6 == (undefined *)0x0) goto LAB_10495b860;
          }
          _objc_release(puVar5);
        }
LAB_10495b8ec:
        _objc_release(puVar4);
        _objc_release(puVar3);
        uVar13 = uVar13 + 1;
        uVar1 = param_3;
        func_0x00010bf529e0();
        uVar2 = param_4;
        func_0x00010bf529e0();
        if (uVar2 <= uVar1) {
          uVar1 = uVar2;
        }
        lVar11 = lVar11 + -1;
      } while (uVar13 < uVar1);
    }
    uVar12 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar12;
}



/* Entry: 10495b978; end: 10495bd87; +[FBSDKEventBinding findViewByPath:parent:level:] */

undefined **
FUN_10495b978(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
             int param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_3;
  _objc_retain();
  _objc_retain();
  ppuVar13 = param_3;
  func_0x00010bf529e0();
  if ((undefined **)(long)param_5 < ppuVar13) {
    puVar1 = PTR_PTR_1126add78;
    func_0x00010bf09f40(PTR_PTR_1126add78,param_2,param_3,(long)param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf39ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c0720c0();
    _objc_release(puVar6);
    if ((int)puVar9 == 0) {
      puVar6 = puVar1;
      func_0x00010bf39ce0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = &PTR____CFConstantStringClassReference_110dad1f8;
      puVar9 = puVar6;
      func_0x00010c0720c0();
      _objc_release(puVar6);
      if ((int)puVar9 == 0) {
        if (param_4 == (undefined **)0x0) {
          puVar6 = PTR_PTR_1126add20;
          func_0x00010c22c4c0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar6;
          func_0x00010bfaf540();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          if (puVar9 == (undefined *)0x0) {
            ppuVar13 = (undefined **)0x0;
            goto LAB_10495bd30;
          }
          ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_78 = puVar9;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
        }
        else {
          ppuVar11 = (undefined **)PTR_PTR_1126ade58;
          func_0x00010bfc3960(PTR_PTR_1126ade58,param_2,param_4);
          _objc_retainAutoreleasedReturnValue();
        }
        ppuVar2 = param_3;
        func_0x00010bf529e0();
        ppuVar4 = ppuVar11;
        if ((long)ppuVar2 + -1 == (long)param_5) {
          puVar6 = puVar1;
          func_0x00010bfec9e0();
          if ((int)puVar6 < 0) {
            uStack_198 = 0;
            uStack_1a0 = 0;
            uStack_188 = 0;
            uStack_190 = 0;
            lStack_1b8 = 0;
            puStack_1c0 = (undefined *)0x0;
            uStack_1a8 = 0;
            plStack_1b0 = (long *)0x0;
            _objc_retain();
            ppuVar2 = &puStack_1c0;
            ppuVar5 = ppuVar4;
            func_0x00010bf52a60();
            if (ppuVar5 != (undefined **)0x0) {
              lVar12 = *plStack_1b0;
              do {
                ppuVar10 = (undefined **)0x0;
                do {
                  if (*plStack_1b0 != lVar12) {
                    _objc_enumerationMutation(ppuVar4);
                  }
                  ppuVar13 = *(undefined ***)(lStack_1b8 + (long)ppuVar10 * 8);
                  ppuVar3 = param_1;
                  ppuVar2 = ppuVar13;
                  func_0x00010c0bc580();
                  if (((ulong)ppuVar3 & 1) != 0) {
                    _objc_retain();
                    goto LAB_10495bd1c;
                  }
                  ppuVar10 = (undefined **)((long)ppuVar10 + 1);
                } while (ppuVar5 != ppuVar10);
                ppuVar2 = &puStack_1c0;
                ppuVar5 = ppuVar4;
                func_0x00010bf52a60();
              } while (ppuVar5 != (undefined **)0x0);
            }
          }
          else {
            ppuVar2 = ppuVar11;
            func_0x00010bf529e0();
            if ((undefined **)((ulong)puVar6 & 0xffffffff) < ppuVar2) {
              ppuVar4 = (undefined **)PTR_PTR_1126add78;
              func_0x00010bf09f40(PTR_PTR_1126add78,param_2,ppuVar11,(ulong)puVar6 & 0xffffffff);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              ppuVar4 = (undefined **)0x0;
            }
            ppuVar2 = ppuVar4;
            func_0x00010c0bc580();
            ppuVar13 = ppuVar4;
            if (((ulong)param_1 & 1) != 0) goto LAB_10495bd2c;
          }
LAB_10495bd08:
          ppuVar13 = (undefined **)0x0;
        }
        else {
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1f8 = 0;
          puStack_200 = (undefined *)0x0;
          uStack_1e8 = 0;
          plStack_1f0 = (long *)0x0;
          _objc_retain();
          ppuVar2 = &puStack_200;
          ppuVar5 = ppuVar4;
          func_0x00010bf52a60();
          if (ppuVar5 == (undefined **)0x0) goto LAB_10495bd08;
          lVar12 = *plStack_1f0;
          do {
            ppuVar10 = (undefined **)0x0;
            do {
              if (*plStack_1f0 != lVar12) {
                _objc_enumerationMutation(ppuVar4);
              }
              ppuVar13 = param_1;
              ppuVar2 = param_3;
              func_0x00010bfaf520();
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar13 != (undefined **)0x0) goto LAB_10495bd1c;
              ppuVar10 = (undefined **)((long)ppuVar10 + 1);
            } while (ppuVar5 != ppuVar10);
            ppuVar2 = &puStack_200;
            ppuVar5 = ppuVar4;
            func_0x00010bf52a60();
          } while (ppuVar5 != (undefined **)0x0);
          ppuVar13 = (undefined **)0x0;
        }
LAB_10495bd1c:
        _objc_release(ppuVar4);
        goto LAB_10495bd2c;
      }
      ppuVar13 = param_4;
      _objc_retain();
    }
    else {
      ppuVar11 = (undefined **)PTR_PTR_1126ade58;
      func_0x00010bfc8820(PTR_PTR_1126ade58,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = (undefined **)PTR_PTR_1126adeb8;
      ppuVar2 = param_3;
      func_0x00010bfaf520();
      _objc_retainAutoreleasedReturnValue();
LAB_10495bd2c:
      _objc_release(ppuVar11);
    }
LAB_10495bd30:
    _objc_release(puVar1);
  }
  else {
    ppuVar13 = (undefined **)0x0;
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar13);
    return ppuVar13;
  }
  ___stack_chk_fail();
  _objc_retain();
  ppuVar4 = (undefined **)param_3[4];
  func_0x00010bf529e0();
  ppuVar13 = ppuVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar13;
  func_0x00010bf529e0();
  if (ppuVar4 == ppuVar11) {
    ppuVar5 = (undefined **)param_3[6];
    func_0x00010bf529e0();
    ppuVar11 = ppuVar2;
    func_0x00010c0f3840();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar11;
    func_0x00010bf529e0();
    _objc_release(ppuVar11);
    _objc_release(ppuVar13);
    if (ppuVar5 != ppuVar4) {
      ppuVar11 = (undefined **)0x0;
      goto LAB_10495c0bc;
    }
    ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110efb4b8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar11 = ppuVar2;
    func_0x00010bf9a060();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf9a440();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar2;
    func_0x00010bf066e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar2;
    func_0x00010c0f59e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110efb4b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar11);
    ppuVar11 = ppuVar13;
    func_0x00010c0720c0(ppuVar13,param_2,puVar1);
    if ((int)ppuVar11 == 0) {
LAB_10495c0a8:
      ppuVar11 = (undefined **)0x0;
    }
    else {
      puVar6 = param_3[4];
      func_0x00010bf529e0();
      if (puVar6 != (undefined *)0x0) {
        puVar6 = (undefined *)0x0;
        do {
          puVar7 = PTR_PTR_1126add78;
          func_0x00010bf09f40(PTR_PTR_1126add78,param_2,param_3[4],puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126add78;
          ppuVar11 = ppuVar2;
          func_0x00010c0f5800(ppuVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf09f40(puVar9,param_2,ppuVar11,puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c071fc0(puVar7,param_2,puVar9);
          _objc_release(puVar9);
          _objc_release(ppuVar11);
          _objc_release(puVar7);
          if (((ulong)puVar8 & 1) == 0) goto LAB_10495c0a8;
          puVar6 = puVar6 + 1;
          puVar9 = param_3[4];
          func_0x00010bf529e0();
        } while (puVar6 < puVar9);
      }
      puVar6 = param_3[6];
      func_0x00010bf529e0();
      if (puVar6 == (undefined *)0x0) {
        ppuVar11 = (undefined **)0x1;
      }
      else {
        puVar6 = (undefined *)0x0;
        do {
          ppuVar4 = (undefined **)PTR_PTR_1126add78;
          func_0x00010bf09f40(PTR_PTR_1126add78,param_2,param_3[6],puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126add78;
          ppuVar5 = ppuVar2;
          func_0x00010c0f3840(ppuVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf09f40(puVar9,param_2,ppuVar5,puVar6);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuVar4;
          func_0x00010c071fa0(ppuVar4,param_2,puVar9);
          _objc_release(puVar9);
          _objc_release(ppuVar5);
          _objc_release(ppuVar4);
          if (((ulong)ppuVar11 & 1) == 0) break;
          puVar6 = puVar6 + 1;
          puVar9 = param_3[6];
          func_0x00010bf529e0();
        } while (puVar6 < puVar9);
      }
    }
    _objc_release(puVar1);
  }
  else {
    ppuVar11 = (undefined **)0x0;
  }
  _objc_release(ppuVar13);
LAB_10495c0bc:
  _objc_release(ppuVar2);
  return ppuVar11;
}



/* Entry: 10495bd88; end: 10495c0ef; -[FBSDKEventBinding isEqualToBinding:] */

undefined * FUN_10495bd88(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  
  _objc_retain();
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010bf529e0();
  puVar2 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010bf529e0();
  if (puVar1 == puVar9) {
    puVar3 = *(undefined **)(param_1 + 0x30);
    func_0x00010bf529e0();
    puVar9 = param_3;
    func_0x00010c0f3840();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x00010bf529e0();
    _objc_release(puVar9);
    _objc_release(puVar2);
    if (puVar3 != puVar1) {
      puVar9 = (undefined *)0x0;
      goto LAB_10495c0bc;
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110efb4b8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar9 = param_3;
    func_0x00010bf9a060();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bf9a440();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bf066e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010c0f59e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110efb4b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar9);
    puVar9 = puVar2;
    func_0x00010c0720c0(puVar2,param_2,puVar1);
    if ((int)puVar9 == 0) {
LAB_10495c0a8:
      puVar9 = (undefined *)0x0;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x20);
      func_0x00010bf529e0();
      if (lVar6 != 0) {
        uVar8 = 0;
        do {
          puVar3 = PTR_PTR_1126add78;
          func_0x00010bf09f40(PTR_PTR_1126add78,param_2,*(undefined8 *)(param_1 + 0x20),uVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126add78;
          puVar4 = param_3;
          func_0x00010c0f5800(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf09f40(puVar9,param_2,puVar4,uVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010c071fc0(puVar3,param_2,puVar9);
          _objc_release(puVar9);
          _objc_release(puVar4);
          _objc_release(puVar3);
          if (((ulong)puVar5 & 1) == 0) goto LAB_10495c0a8;
          uVar8 = uVar8 + 1;
          uVar7 = *(ulong *)(param_1 + 0x20);
          func_0x00010bf529e0();
        } while (uVar8 < uVar7);
      }
      lVar6 = *(long *)(param_1 + 0x30);
      func_0x00010bf529e0();
      if (lVar6 == 0) {
        puVar9 = (undefined *)0x1;
      }
      else {
        uVar8 = 0;
        do {
          puVar4 = PTR_PTR_1126add78;
          func_0x00010bf09f40(PTR_PTR_1126add78,param_2,*(undefined8 *)(param_1 + 0x30),uVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126add78;
          puVar5 = param_3;
          func_0x00010c0f3840(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf09f40(puVar3,param_2,puVar5,uVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar4;
          func_0x00010c071fa0(puVar4,param_2,puVar3);
          _objc_release(puVar3);
          _objc_release(puVar5);
          _objc_release(puVar4);
          if (((ulong)puVar9 & 1) == 0) break;
          uVar8 = uVar8 + 1;
          uVar7 = *(ulong *)(param_1 + 0x30);
          func_0x00010bf529e0();
        } while (uVar8 < uVar7);
      }
    }
    _objc_release(puVar1);
  }
  else {
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar2);
LAB_10495c0bc:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 10495c0f0; end: 10495c1ef; +[FBSDKEventBinding findParameterOfPath:pathType:sourceView:] */

void FUN_10495c0f0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain();
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar4 = param_5;
    _objc_retain(param_5);
    uVar2 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110da37d8);
    if ((uVar2 & 1) == 0) {
      _objc_release(uVar4);
      uVar4 = 0;
    }
    func_0x00010bfaf520(param_1,param_2,param_3,uVar4,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ade58;
    func_0x00010bfcb180(PTR_PTR_1126ade58,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10495c1f0; end: 10495c1f7; -[FBSDKEventBinding eventName] */

undefined8 FUN_10495c1f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10495c1f8; end: 10495c1ff; -[FBSDKEventBinding eventType] */

undefined8 FUN_10495c1f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10495c200; end: 10495c207; -[FBSDKEventBinding appVersion] */

undefined8 FUN_10495c200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10495c208; end: 10495c20f; -[FBSDKEventBinding path] */

undefined8 FUN_10495c208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10495c210; end: 10495c217; -[FBSDKEventBinding pathType] */

undefined8 FUN_10495c210(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10495c218; end: 10495c21f; -[FBSDKEventBinding parameters] */

undefined8 FUN_10495c218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10495c220; end: 10495c227; -[FBSDKEventBinding eventLogger] */

undefined8 FUN_10495c220(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10495c228; end: 10495c233; -[FBSDKEventBinding setEventLogger:] */

void FUN_10495c228(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10495c234; end: 10495c29f; -[FBSDKEventBinding .cxx_destruct] */

void FUN_10495c234(long param_1)

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



/* Entry: 10495c2a0; end: 10495c45f; -[FBSDKEventBindingManager initWithSwizzler:eventLogger:] */

undefined1 *
FUN_10495c2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_4;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3378;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar2 + 0x18),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar2 + 0x10),param_4);
    *(undefined2 *)((long)puVar2 + 8) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined **)((long)puVar2 + 0x20) = puVar3;
    _objc_release(uVar8);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIControl_1126c3e60);
    func_0x00010befa120(puVar3);
    func_0x00010bf39c40(PTR__OBJC_CLASS___UITableView_1126aed40);
    func_0x00010befa120(puVar3);
    func_0x00010bf39c40(PTR__OBJC_CLASS___UICollectionView_1126afd20);
    func_0x00010befa120(puVar3);
    pcVar4 = "RCTRootView";
    _objc_lookUpClass();
    if (pcVar4 != (char *)0x0) {
      *(undefined1 *)((long)puVar2 + 9) = 1;
      pcVar4 = "RCTView";
      _objc_lookUpClass();
      pcVar5 = "RCTTextView";
      _objc_lookUpClass();
      pcVar6 = "RCTImageView";
      _objc_lookUpClass();
      if (pcVar4 != (char *)0x0) {
        func_0x00010befa120(puVar3);
      }
      if (pcVar5 != (char *)0x0) {
        func_0x00010befa120(puVar3);
      }
      if (pcVar6 != (char *)0x0) {
        func_0x00010befa120(puVar3);
      }
    }
    puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined **)((long)puVar2 + 0x28) = puVar7;
    _objc_release(uVar8);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 10495c460; end: 10495c667; -[FBSDKEventBindingManager initWithJSON:swizzler:eventLogger:] */

undefined **
FUN_10495c460(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined **unaff_x24;
  undefined *unaff_x25;
  undefined **unaff_x26;
  long lVar12;
  long unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined *puStack_378;
  undefined **ppuStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined **ppuStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined **ppuStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined *puStack_300;
  undefined **ppuStack_2f8;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  ppuVar2 = param_1;
  ppuVar9 = param_4;
  func_0x00010c04fcc0();
  ppuVar3 = (undefined **)PTR_PTR_1126add78;
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x26 = &PTR_PTR_1126ad000;
    uStack_138 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da37f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0a0(ppuVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    param_1 = ppuVar3;
    _objc_retain();
    ppuVar9 = &puStack_130;
    ppuVar10 = param_1;
    func_0x00010bf52a60();
    if (ppuVar10 != (undefined **)0x0) {
      unaff_x27 = *plStack_120;
      unaff_x28 = &PTR_PTR_1126ad000;
      do {
        ppuVar9 = (undefined **)0x0;
        do {
          if (*plStack_120 != unaff_x27) {
            _objc_enumerationMutation(param_1);
          }
          unaff_x25 = PTR_PTR_1126adeb8;
          _objc_alloc();
          func_0x00010c0206a0();
          func_0x00010bf09f20(PTR_PTR_1126add78,param_2,param_4,unaff_x25);
          _objc_release(unaff_x25);
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
        } while (ppuVar10 != ppuVar9);
        ppuVar9 = &puStack_130;
        ppuVar10 = param_1;
        func_0x00010bf52a60();
        ppuVar3 = (undefined **)0x0;
      } while (ppuVar10 != (undefined **)0x0);
    }
    _objc_release(param_1);
    ppuVar10 = param_4;
    func_0x00010bf51e00();
    puVar8 = ppuVar2[6];
    ppuVar2[6] = (undefined *)ppuVar10;
    _objc_release(puVar8);
    _objc_release(param_4);
    _objc_release(param_1);
    param_3 = uStack_138;
    unaff_x24 = ppuVar3;
  }
  _objc_release(param_5);
  uVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10495c668;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  ppuStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  ppuStack_180 = unaff_x24;
  ppuStack_178 = param_1;
  ppuStack_170 = param_4;
  uStack_168 = param_5;
  ppuStack_160 = ppuVar2;
  uStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  _objc_retain();
  ppuVar2 = ppuVar9;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar12 = *plStack_260;
    do {
      ppuVar10 = (undefined **)0x0;
      do {
        if (*plStack_260 != lVar12) {
          _objc_enumerationMutation(ppuVar9);
        }
        uVar11 = *(undefined8 *)(lStack_268 + (long)ppuVar10 * 8);
        puVar8 = PTR_PTR_1126adeb8;
        _objc_alloc();
        uVar5 = uVar4;
        func_0x00010bf99fe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0206a0(puVar8,param_2,uVar11,uVar5);
        _objc_release(uVar5);
        func_0x00010bf09f20(PTR_PTR_1126add78,param_2,ppuVar3,puVar8);
        _objc_release(puVar8);
        ppuVar10 = (undefined **)((long)ppuVar10 + 1);
      } while (ppuVar2 != ppuVar10);
      ppuVar2 = ppuVar9;
      func_0x00010bf52a60(ppuVar9,param_2,&uStack_270,auStack_230,0x10);
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar9);
  ppuVar2 = ppuVar3;
  func_0x00010bf51e00();
  _objc_release(ppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_390;
  ppuVar3 = ppuVar9;
  func_0x00010c07f840();
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar3 = ppuVar9;
    func_0x00010bf99be0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar3;
    func_0x00010bf529e0();
    _objc_release(ppuVar3);
    if (ppuVar10 != (undefined **)0x0) {
      func_0x00010c1b4a80(ppuVar9,param_2,1);
      puVar8 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_318 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_310 = 0xc2000000;
      pcStack_308 = FUN_10495cad4;
      puStack_300 = &UNK_11088b6c8;
      ppuVar3 = &puStack_318;
      ppuStack_2f8 = ppuVar9;
      _objc_retainBlock(ppuVar3);
      ppuVar10 = ppuVar9;
      func_0x00010c265a00(ppuVar9);
      puVar1 = PTR_s_didMoveToWindow_112527020;
      puVar6 = PTR__OBJC_CLASS___UIControl_1126c3e60;
      func_0x00010bf39c40(PTR__OBJC_CLASS___UIControl_1126c3e60);
      func_0x00010c265920(ppuVar10,param_2,puVar1,puVar6,ppuVar3,
                          &PTR____CFConstantStringClassReference_110da3818);
      ppuVar10 = ppuVar9;
      func_0x00010bfdaf20();
      if ((int)ppuVar10 != 0) {
        _objc_lookUpClass("RCTView");
        _objc_lookUpClass("RCTTextView");
        _objc_lookUpClass("RCTImageView");
        _objc_lookUpClass("RCTTouchHandler");
        func_0x00010c265a00(ppuVar9);
        func_0x00010c265920();
        func_0x00010c265a00(ppuVar9);
        func_0x00010c265920();
        func_0x00010c265a00(ppuVar9);
        func_0x00010c265920();
        func_0x00010c265a00(ppuVar9);
        puStack_340 = puVar8;
        uStack_338 = 0xc2000000;
        uStack_330 = 0x10495cae4;
        puStack_328 = &UNK_1107b9848;
        ppuStack_320 = ppuVar9;
        func_0x00010c265920();
      }
      puStack_368 = puVar8;
      uStack_360 = 0xc2000000;
      uStack_358 = 0x10495cafc;
      puStack_350 = &UNK_1107b9878;
      ppuVar10 = &puStack_368;
      ppuStack_348 = ppuVar9;
      _objc_retainBlock(ppuVar10);
      ppuVar7 = ppuVar9;
      func_0x00010c265a00(ppuVar9);
      puVar1 = PTR_s_setDelegate__112640798;
      puVar6 = PTR__OBJC_CLASS___UITableView_1126aed40;
      func_0x00010bf39c40(PTR__OBJC_CLASS___UITableView_1126aed40);
      func_0x00010c265920(ppuVar7,param_2,puVar1,puVar6,ppuVar10,
                          &PTR____CFConstantStringClassReference_110da3878);
      puStack_390 = puVar8;
      uStack_388 = 0xc2000000;
      uStack_380 = 0x10495cb10;
      puStack_378 = &UNK_1107b98a8;
      ppuStack_370 = ppuVar9;
      _objc_retainBlock(&puStack_390);
      func_0x00010c265a00(ppuVar9);
      puVar8 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
      func_0x00010bf39c40(PTR__OBJC_CLASS___UICollectionView_1126afd20);
      func_0x00010c265920(ppuVar9,param_2,puVar1,puVar8,ppuVar2,
                          &PTR____CFConstantStringClassReference_110da3898);
      _objc_release(ppuVar2);
      _objc_release(ppuVar10);
      _objc_release(ppuVar3);
    }
  }
  return ppuVar3;
}



/* Entry: 10495c668; end: 10495c807; -[FBSDKEventBindingManager parseArray:] */

void FUN_10495c668(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  ulong uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  ulong uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  ulong uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  ulong uStack_1b8;
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
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  uVar2 = param_3;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      uVar9 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(undefined8 *)(lStack_128 + uVar9 * 8);
        puVar3 = PTR_PTR_1126adeb8;
        _objc_alloc();
        uVar4 = param_1;
        func_0x00010bf99fe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0206a0(puVar3,param_2,uVar10,uVar4);
        _objc_release(uVar4);
        func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar1,puVar3);
        _objc_release(puVar3);
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
      uVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (uVar2 != 0);
  }
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_250;
  uVar2 = param_3;
  func_0x00010c07f840();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bf99be0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (uVar9 != 0) {
      func_0x00010c1b4a80(param_3,param_2,1);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1d0 = 0xc2000000;
      pcStack_1c8 = FUN_10495cad4;
      puStack_1c0 = &UNK_11088b6c8;
      ppuVar5 = &puStack_1d8;
      uStack_1b8 = param_3;
      _objc_retainBlock(ppuVar5);
      uVar2 = param_3;
      func_0x00010c265a00(param_3);
      puVar3 = PTR_s_didMoveToWindow_112527020;
      puVar6 = PTR__OBJC_CLASS___UIControl_1126c3e60;
      func_0x00010bf39c40(PTR__OBJC_CLASS___UIControl_1126c3e60);
      func_0x00010c265920(uVar2,param_2,puVar3,puVar6,ppuVar5,
                          &PTR____CFConstantStringClassReference_110da3818);
      uVar2 = param_3;
      func_0x00010bfdaf20();
      if ((int)uVar2 != 0) {
        _objc_lookUpClass("RCTView");
        _objc_lookUpClass("RCTTextView");
        _objc_lookUpClass("RCTImageView");
        _objc_lookUpClass("RCTTouchHandler");
        func_0x00010c265a00(param_3);
        func_0x00010c265920();
        func_0x00010c265a00(param_3);
        func_0x00010c265920();
        func_0x00010c265a00(param_3);
        func_0x00010c265920();
        func_0x00010c265a00(param_3);
        puStack_200 = puVar1;
        uStack_1f8 = 0xc2000000;
        uStack_1f0 = 0x10495cae4;
        puStack_1e8 = &UNK_1107b9848;
        uStack_1e0 = param_3;
        func_0x00010c265920();
      }
      puStack_228 = puVar1;
      uStack_220 = 0xc2000000;
      uStack_218 = 0x10495cafc;
      puStack_210 = &UNK_1107b9878;
      ppuVar7 = &puStack_228;
      uStack_208 = param_3;
      _objc_retainBlock(ppuVar7);
      uVar2 = param_3;
      func_0x00010c265a00(param_3);
      puVar3 = PTR_s_setDelegate__112640798;
      puVar6 = PTR__OBJC_CLASS___UITableView_1126aed40;
      func_0x00010bf39c40(PTR__OBJC_CLASS___UITableView_1126aed40);
      func_0x00010c265920(uVar2,param_2,puVar3,puVar6,ppuVar7,
                          &PTR____CFConstantStringClassReference_110da3878);
      puStack_250 = puVar1;
      uStack_248 = 0xc2000000;
      uStack_240 = 0x10495cb10;
      puStack_238 = &UNK_1107b98a8;
      uStack_230 = param_3;
      _objc_retainBlock(&puStack_250);
      func_0x00010c265a00(param_3);
      puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
      func_0x00010bf39c40(PTR__OBJC_CLASS___UICollectionView_1126afd20);
      func_0x00010c265920(param_3,param_2,puVar3,puVar1,ppuVar8,
                          &PTR____CFConstantStringClassReference_110da3898);
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
      _objc_release(ppuVar5);
    }
  }
  return;
}



/* Entry: 10495c808; end: 10495cad3; -[FBSDKEventBindingManager start] */

void FUN_10495c808(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  
  ppuVar7 = &puStack_110;
  uVar2 = param_1;
  func_0x00010c07f840();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf99be0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (uVar3 != 0) {
      func_0x00010c1b4a80(param_1,param_2,1);
      puVar8 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10495cad4;
      puStack_80 = &UNK_11088b6c8;
      ppuVar4 = &puStack_98;
      uStack_78 = param_1;
      _objc_retainBlock(ppuVar4);
      uVar2 = param_1;
      func_0x00010c265a00(param_1);
      puVar1 = PTR_s_didMoveToWindow_112527020;
      puVar5 = PTR__OBJC_CLASS___UIControl_1126c3e60;
      func_0x00010bf39c40(PTR__OBJC_CLASS___UIControl_1126c3e60);
      func_0x00010c265920(uVar2,param_2,puVar1,puVar5,ppuVar4,
                          &PTR____CFConstantStringClassReference_110da3818);
      uVar2 = param_1;
      func_0x00010bfdaf20();
      if ((int)uVar2 != 0) {
        _objc_lookUpClass("RCTView");
        _objc_lookUpClass("RCTTextView");
        _objc_lookUpClass("RCTImageView");
        _objc_lookUpClass("RCTTouchHandler");
        func_0x00010c265a00(param_1);
        func_0x00010c265920();
        func_0x00010c265a00(param_1);
        func_0x00010c265920();
        func_0x00010c265a00(param_1);
        func_0x00010c265920();
        func_0x00010c265a00(param_1);
        puStack_c0 = puVar8;
        uStack_b8 = 0xc2000000;
        uStack_b0 = 0x10495cae4;
        puStack_a8 = &UNK_1107b9848;
        uStack_a0 = param_1;
        func_0x00010c265920();
      }
      puStack_e8 = puVar8;
      uStack_e0 = 0xc2000000;
      uStack_d8 = 0x10495cafc;
      puStack_d0 = &UNK_1107b9878;
      ppuVar6 = &puStack_e8;
      uStack_c8 = param_1;
      _objc_retainBlock(ppuVar6);
      uVar2 = param_1;
      func_0x00010c265a00(param_1);
      puVar1 = PTR_s_setDelegate__112640798;
      puVar5 = PTR__OBJC_CLASS___UITableView_1126aed40;
      func_0x00010bf39c40(PTR__OBJC_CLASS___UITableView_1126aed40);
      func_0x00010c265920(uVar2,param_2,puVar1,puVar5,ppuVar6,
                          &PTR____CFConstantStringClassReference_110da3878);
      puStack_110 = puVar8;
      uStack_108 = 0xc2000000;
      uStack_100 = 0x10495cb10;
      puStack_f8 = &UNK_1107b98a8;
      uStack_f0 = param_1;
      _objc_retainBlock(&puStack_110);
      func_0x00010c265a00(param_1);
      puVar8 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
      func_0x00010bf39c40(PTR__OBJC_CLASS___UICollectionView_1126afd20);
      func_0x00010c265920(param_1,param_2,puVar1,puVar8,ppuVar7,
                          &PTR____CFConstantStringClassReference_110da3898);
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
      _objc_release(ppuVar4);
    }
  }
  return;
}



/* Entry: 10495cad4; end: 10495cb23;  */

void FUN_10495cad4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c14d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_matchView_delegate__11260df48,param_2,0);
  return;
}



/* Entry: 10495cb24; end: 10495cc73; -[FBSDKEventBindingManager rematchBindings] */

void FUN_10495cb24(undefined *param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  code *pcStack_3a0;
  undefined *puStack_398;
  undefined8 *puStack_390;
  undefined *puStack_388;
  undefined1 *puStack_380;
  undefined8 *puStack_378;
  undefined1 auStack_370 [8];
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined1 uStack_350;
  undefined1 auStack_348 [8];
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined1 **ppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_200 [128];
  long lStack_180;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_1;
  func_0x00010bf99be0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010bf529e0();
  puVar2 = puVar7;
  _objc_release();
  puVar10 = (undefined *)0x0;
  if (puVar1 != (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010c2a7380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    puStack_100 = (undefined8 *)0x0;
    puVar7 = puVar10;
    _objc_retain();
    param_4 = auStack_c8;
    puVar1 = puVar7;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      unaff_x22 = (undefined *)*puStack_100;
      do {
        unaff_x23 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_100 != unaff_x22) {
            _objc_enumerationMutation(puVar7);
          }
          func_0x00010c0c0720(param_1);
          unaff_x23 = unaff_x23 + 1;
        } while (puVar1 != unaff_x23);
        param_4 = auStack_c8;
        puVar1 = puVar7;
        puVar4 = &uStack_110;
        func_0x00010bf52a60();
        puVar10 = (undefined *)0x0;
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(puVar7);
    puVar2 = puVar7;
    _objc_release();
    param_3 = (undefined *)puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_10495cc74;
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)0x0;
  puVar1 = puVar2;
  puStack_318 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  if (param_3 != (undefined *)0x0) {
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    plStack_2b0 = (long *)0x0;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = &uStack_2c0;
    param_4 = auStack_200;
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar8 = *plStack_2b0;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_2b0 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x22 = *(undefined **)(lStack_2b8 + (long)puVar10 * 8);
          uStack_2f8 = 0;
          uStack_300 = 0;
          uStack_2e8 = 0;
          plStack_2f0 = (long *)0x0;
          uStack_2d8 = 0;
          uStack_2e0 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          unaff_x23 = puVar2;
          func_0x00010c296660();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = unaff_x23;
          func_0x00010bf52a60();
          if (puVar3 != (undefined *)0x0) {
            lVar9 = *plStack_2f0;
            unaff_x24 = puVar3;
            do {
              puVar7 = (undefined *)0x0;
              do {
                if (*plStack_2f0 != lVar9) {
                  _objc_enumerationMutation(unaff_x23);
                }
                puVar3 = unaff_x22;
                func_0x00010c075f00();
                if (((ulong)puVar3 & 1) != 0) {
                  _objc_release(unaff_x23);
                  func_0x00010bf39c40(PTR__OBJC_CLASS___UITableView_1126aed40);
                  puVar3 = unaff_x22;
                  func_0x00010c075f00();
                  if ((int)puVar3 == 0) {
                    func_0x00010bf39c40(PTR__OBJC_CLASS___UICollectionView_1126afd20);
                    puVar3 = unaff_x22;
                    func_0x00010c075f00();
                    if ((int)puVar3 == 0) {
                      func_0x00010c0c14c0(puVar2);
                      goto LAB_10495ce44;
                    }
                  }
                  unaff_x23 = unaff_x22;
                  _objc_retain();
                  puVar3 = unaff_x23;
                  func_0x00010bf6b020();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  unaff_x24 = (undefined *)0x0;
                  if (puVar3 != (undefined *)0x0) {
                    unaff_x24 = unaff_x23;
                    func_0x00010bf6b020();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0c14c0(puVar2);
                    _objc_release(unaff_x24);
                  }
                  goto LAB_10495ce3c;
                }
                puVar7 = puVar7 + 1;
              } while (unaff_x24 != puVar7);
              unaff_x24 = unaff_x23;
              func_0x00010bf52a60();
            } while (unaff_x24 != (undefined *)0x0);
          }
LAB_10495ce3c:
          _objc_release(unaff_x23);
LAB_10495ce44:
          func_0x00010bf39c40(PTR__OBJC_CLASS___UIControl_1126c3e60);
          puVar3 = unaff_x22;
          func_0x00010c075f00();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010c0c0720(puVar2);
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar1);
        puVar4 = &uStack_2c0;
        param_4 = auStack_200;
        puVar1 = param_3;
        func_0x00010bf52a60();
        puVar10 = (undefined *)0x0;
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release();
    puVar1 = param_3;
    puStack_318 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_180) {
    ___stack_chk_fail();
    pcStack_308 = FUN_10495cef0;
    puStack_340 = unaff_x24;
    puStack_338 = unaff_x23;
    puStack_330 = unaff_x22;
    puStack_328 = puVar10;
    puStack_320 = puVar7;
    ppuStack_310 = &puStack_120;
    _objc_retain();
    _objc_retain();
    puVar7 = puVar1;
    func_0x00010bf99be0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010bf529e0();
    _objc_release(puVar7);
    if (puVar10 != (undefined *)0x0) {
      puVar7 = puVar1;
      func_0x00010c265a00(puVar1);
      _objc_initWeak(auStack_348,puVar7);
      uStack_368 = 0;
      uStack_358 = 0x2020000000;
      puVar7 = puVar1;
      puStack_360 = &uStack_368;
      func_0x00010bfdaf20();
      uStack_350 = SUB81(puVar7,0);
      puStack_3b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_3a8 = 0xc2000000;
      pcStack_3a0 = FUN_10495d068;
      puStack_398 = &UNK_110857da0;
      puVar5 = puVar4;
      _objc_retain();
      puVar6 = param_4;
      puStack_390 = puVar5;
      puStack_388 = puVar1;
      puStack_378 = &uStack_368;
      _objc_retain();
      puStack_380 = puVar6;
      _objc_copyWeak(auStack_370,auStack_348);
      func_0x000104938910(&puStack_3b0);
      _objc_destroyWeak(auStack_370);
      _objc_release(puStack_380);
      _objc_release(puStack_390);
      __Block_object_dispose(&uStack_368,8);
      _objc_destroyWeak(auStack_348);
    }
    _objc_release(param_4);
    _objc_release(puVar4);
    return;
  }
  return;
}



/* Entry: 10495cc74; end: 10495ceef; -[FBSDKEventBindingManager matchSubviewsIn:] */

void FUN_10495cc74(ulong param_1,undefined8 param_2,ulong param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  ulong uStack_278;
  undefined1 *puStack_270;
  undefined8 *puStack_268;
  undefined1 auStack_260 [8];
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined1 uStack_240;
  undefined1 auStack_238 [8];
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined8 *)0x0;
  uVar1 = param_1;
  uStack_208 = unaff_x19;
  if (param_3 != 0) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &uStack_1b0;
    param_4 = auStack_f0;
    uVar1 = param_3;
    func_0x00010bf52a60();
    if (uVar1 != 0) {
      lVar6 = *plStack_1a0;
      do {
        uVar8 = 0;
        do {
          if (*plStack_1a0 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x22 = *(ulong *)(lStack_1a8 + uVar8 * 8);
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          unaff_x23 = param_1;
          func_0x00010c296660();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = unaff_x23;
          func_0x00010bf52a60();
          if (uVar2 != 0) {
            lVar7 = *plStack_1e0;
            unaff_x24 = uVar2;
            do {
              unaff_x20 = 0;
              do {
                if (*plStack_1e0 != lVar7) {
                  _objc_enumerationMutation(unaff_x23);
                }
                uVar2 = unaff_x22;
                func_0x00010c075f00();
                if ((uVar2 & 1) != 0) {
                  _objc_release(unaff_x23);
                  func_0x00010bf39c40(PTR__OBJC_CLASS___UITableView_1126aed40);
                  uVar2 = unaff_x22;
                  func_0x00010c075f00();
                  if ((int)uVar2 == 0) {
                    func_0x00010bf39c40(PTR__OBJC_CLASS___UICollectionView_1126afd20);
                    uVar2 = unaff_x22;
                    func_0x00010c075f00();
                    if ((int)uVar2 == 0) {
                      func_0x00010c0c14c0(param_1);
                      goto LAB_10495ce44;
                    }
                  }
                  unaff_x23 = unaff_x22;
                  _objc_retain();
                  uVar2 = unaff_x23;
                  func_0x00010bf6b020();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  unaff_x24 = 0;
                  if (uVar2 != 0) {
                    unaff_x24 = unaff_x23;
                    func_0x00010bf6b020();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0c14c0(param_1);
                    _objc_release(unaff_x24);
                  }
                  goto LAB_10495ce3c;
                }
                unaff_x20 = unaff_x20 + 1;
              } while (unaff_x24 != unaff_x20);
              unaff_x24 = unaff_x23;
              func_0x00010bf52a60();
            } while (unaff_x24 != 0);
          }
LAB_10495ce3c:
          _objc_release(unaff_x23);
LAB_10495ce44:
          func_0x00010bf39c40(PTR__OBJC_CLASS___UIControl_1126c3e60);
          uVar2 = unaff_x22;
          func_0x00010c075f00();
          if ((uVar2 & 1) == 0) {
            func_0x00010c0c0720(param_1);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar1);
        puVar3 = &uStack_1b0;
        param_4 = auStack_f0;
        uVar1 = param_3;
        func_0x00010bf52a60();
        unaff_x21 = 0;
      } while (uVar1 != 0);
    }
    _objc_release();
    uVar1 = param_3;
    uStack_208 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_1f8 = FUN_10495cef0;
    uStack_230 = unaff_x24;
    uStack_228 = unaff_x23;
    uStack_220 = unaff_x22;
    uStack_218 = unaff_x21;
    uStack_210 = unaff_x20;
    puStack_200 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain();
    uVar8 = uVar1;
    func_0x00010bf99be0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bf529e0();
    _objc_release(uVar8);
    if (uVar2 != 0) {
      uVar8 = uVar1;
      func_0x00010c265a00(uVar1);
      _objc_initWeak(auStack_238,uVar8);
      uStack_258 = 0;
      uStack_248 = 0x2020000000;
      uVar8 = uVar1;
      puStack_250 = &uStack_258;
      func_0x00010bfdaf20();
      uStack_240 = (undefined1)uVar8;
      puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_298 = 0xc2000000;
      pcStack_290 = FUN_10495d068;
      puStack_288 = &UNK_110857da0;
      puVar4 = puVar3;
      _objc_retain();
      puVar5 = param_4;
      puStack_280 = puVar4;
      uStack_278 = uVar1;
      puStack_268 = &uStack_258;
      _objc_retain();
      puStack_270 = puVar5;
      _objc_copyWeak(auStack_260,auStack_238);
      func_0x000104938910(&puStack_2a0);
      _objc_destroyWeak(auStack_260);
      _objc_release(puStack_270);
      _objc_release(puStack_280);
      __Block_object_dispose(&uStack_258,8);
      _objc_destroyWeak(auStack_238);
    }
    _objc_release(param_4);
    _objc_release(puVar3);
    return;
  }
  return;
}



/* Entry: 10495cef0; end: 10495d067; -[FBSDKEventBindingManager matchView:delegate:] */

void FUN_10495cef0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain();
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf99be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c265a00(param_1);
    _objc_initWeak(auStack_48,lVar1);
    uStack_68 = 0;
    uStack_58 = 0x2020000000;
    lVar1 = param_1;
    puStack_60 = &uStack_68;
    func_0x00010bfdaf20();
    uStack_50 = (undefined1)lVar1;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10495d068;
    puStack_98 = &UNK_110857da0;
    uVar3 = param_3;
    _objc_retain();
    uVar4 = param_4;
    uStack_90 = uVar3;
    lStack_88 = param_1;
    puStack_78 = &uStack_68;
    _objc_retain();
    uStack_80 = uVar4;
    _objc_copyWeak(auStack_70,auStack_48);
    func_0x000104938910(&puStack_b0);
    _objc_destroyWeak(auStack_70);
    _objc_release(uStack_80);
    _objc_release(uStack_90);
    __Block_object_dispose(&uStack_68,8);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10495d068; end: 10495d193;  */

void FUN_10495d068(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ade58;
    func_0x00010bfc8920();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10495d194;
    puStack_68 = &UNK_1108bab48;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain();
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = uVar3;
    _objc_retain();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puStack_50 = puVar2;
    _objc_retain(uVar3);
    uStack_48 = uVar3;
    uStack_40 = uVar5;
    _objc_copyWeak(auStack_38,param_1 + 0x40);
    ppuVar4 = &puStack_80;
    _objc_retainBlock(ppuVar4);
    func_0x000104938968();
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_38);
    _objc_release(uStack_48);
    _objc_release(puStack_50);
    _objc_release(uStack_60);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 10495d194; end: 10495d657;  */

void FUN_10495d194(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined1 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined1 *puStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [8];
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar8 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIControl_1126c3e60);
  func_0x00010c075f00();
  if (iVar8 == 0) {
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) == '\x01') {
      iVar8 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c13b700();
      if (iVar8 != 0) {
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        lStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        plStack_220 = (long *)0x0;
        puVar1 = *(undefined1 **)(*(long *)(param_1 + 0x28) + 0x30);
        _objc_retain();
        puVar3 = puVar1;
        func_0x00010bf52a60();
        puVar5 = puVar1;
        if (puVar3 != (undefined1 *)0x0) {
          lVar10 = *plStack_220;
          do {
            puVar12 = (undefined1 *)0x0;
            do {
              if (*plStack_220 != lVar10) {
                _objc_enumerationMutation(puVar1);
              }
              puVar4 = PTR_PTR_1126adeb8;
              uVar9 = *(undefined8 *)(lStack_228 + (long)puVar12 * 8);
              uVar7 = uVar9;
              func_0x00010c0f5800(uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c079b40();
              _objc_release(uVar7);
              if ((int)puVar4 != 0) {
                puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_260 = 0xc2000000;
                pcStack_258 = FUN_10495d670;
                puStack_250 = &UNK_110848ba8;
                uVar7 = *(undefined8 *)(param_1 + 0x20);
                _objc_retain();
                uStack_240 = *(undefined8 *)(param_1 + 0x28);
                uStack_248 = uVar7;
                uStack_238 = uVar9;
                func_0x000104938910(&puStack_268);
                _objc_release(uStack_248);
                _objc_release();
                goto LAB_10495d5fc;
              }
              puVar12 = puVar12 + 1;
            } while (puVar3 != puVar12);
            puVar3 = puVar1;
            func_0x00010bf52a60();
          } while (puVar3 != (undefined1 *)0x0);
        }
        _objc_release();
        goto LAB_10495d5fc;
      }
    }
    iVar8 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf39c40(PTR__OBJC_CLASS___UITableView_1126aed40);
    func_0x00010c075f00();
    if (iVar8 != 0) {
      iVar8 = (int)*(undefined8 *)(param_1 + 0x38);
      func_0x00010bf481c0();
      if (iVar8 != 0) {
        puStack_2a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2a0 = 0xc2000000;
        pcStack_298 = FUN_10495d6d0;
        puStack_290 = &UNK_110850cf8;
        uStack_288 = *(undefined8 *)(param_1 + 0x28);
        puVar5 = *(undefined1 **)(param_1 + 0x30);
        _objc_retain();
        puVar1 = auStack_270;
        puStack_280 = puVar5;
        _objc_copyWeak(puVar1,param_1 + 0x48);
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        _objc_retain();
        ppuVar6 = &puStack_2a8;
        uStack_278 = uVar7;
        _objc_retainBlock(ppuVar6);
        func_0x000104938968();
        _objc_release(ppuVar6);
        _objc_release(uStack_278);
        _objc_destroyWeak(puVar1);
        puVar5 = puStack_280;
        _objc_release();
        goto LAB_10495d5fc;
      }
    }
    puVar1 = *(undefined1 **)(param_1 + 0x20);
    func_0x00010bf39c40(PTR__OBJC_CLASS___UICollectionView_1126afd20);
    puVar5 = puVar1;
    func_0x00010c075f00();
    if ((int)puVar5 != 0) {
      puVar5 = *(undefined1 **)(param_1 + 0x38);
      func_0x00010bf481c0();
      if ((int)puVar5 != 0) {
        puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2e0 = 0xc2000000;
        pcStack_2d8 = FUN_10495d97c;
        puStack_2d0 = &UNK_110850cf8;
        uStack_2c8 = *(undefined8 *)(param_1 + 0x28);
        puVar5 = *(undefined1 **)(param_1 + 0x30);
        _objc_retain();
        puVar1 = auStack_2b0;
        puStack_2c0 = puVar5;
        _objc_copyWeak(puVar1,param_1 + 0x48);
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        _objc_retain();
        ppuVar6 = &puStack_2e8;
        uStack_2b8 = uVar7;
        _objc_retainBlock(ppuVar6);
        func_0x000104938968();
        _objc_release(ppuVar6);
        _objc_release(uStack_2b8);
        _objc_destroyWeak(puVar1);
        puVar5 = puStack_2c0;
        _objc_release();
      }
    }
  }
  else {
    puVar1 = *(undefined1 **)(param_1 + 0x20);
    _objc_retain();
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x30);
    _objc_retain();
    lVar10 = lVar2;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar11 = *plStack_1b0;
      do {
        lVar13 = 0;
        do {
          if (*plStack_1b0 != lVar11) {
            _objc_enumerationMutation(lVar2);
          }
          puVar4 = PTR_PTR_1126adeb8;
          uVar9 = *(undefined8 *)(lStack_1b8 + lVar13 * 8);
          uVar7 = uVar9;
          func_0x00010c0f5800(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c079b40();
          _objc_release(uVar7);
          if ((int)puVar4 != 0) {
            puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1e8 = 0xc2000000;
            pcStack_1e0 = FUN_10495d658;
            puStack_1d8 = &UNK_110841f80;
            puVar5 = puVar1;
            _objc_retain();
            puStack_1d0 = puVar5;
            uStack_1c8 = uVar9;
            func_0x000104938910(&puStack_1f0);
            _objc_release(puStack_1d0);
            goto LAB_10495d4c8;
          }
          lVar13 = lVar13 + 1;
        } while (lVar10 != lVar13);
        lVar10 = lVar2;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
LAB_10495d4c8:
    _objc_release(lVar2);
    puVar5 = puVar1;
    _objc_release();
  }
LAB_10495d5fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_destroyWeak(puVar1);
    __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010befbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar5 + 0x20),PTR_s_addTarget_action_forControlEvent_11259c900,
               *(undefined8 *)(puVar5 + 0x28),PTR_s_trackEvent__11267b978,0x40);
    return;
  }
  return;
}



/* Entry: 10495d658; end: 10495d66f;  */

void FUN_10495d658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addTarget_action_forControlEvent_11259c900,
             *(undefined8 *)(param_1 + 0x28),PTR_s_trackEvent__11267b978,0x40);
  return;
}



/* Entry: 10495d670; end: 10495d6cf;  */

void FUN_10495d670(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar1 = PTR_PTR_1126ade58;
    func_0x00010bfcc220();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,
                          *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),
                          *(undefined8 *)(param_1 + 0x30),puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10495d6d0; end: 10495d95f;  */

void FUN_10495d6d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  _objc_retain();
  puVar9 = &uStack_130;
  puVar8 = auStack_f0;
  ppuVar10 = (undefined **)0x10;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar2);
        }
        uVar12 = *(ulong *)(lStack_128 + lVar11 * 8);
        uVar4 = uVar12;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf529e0();
        _objc_release(uVar4);
        if (1 < uVar5) {
          uVar4 = uVar12;
          func_0x00010c0f5800(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f5800(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          uVar5 = uVar4;
          func_0x00010c25e980(uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          _objc_release(uVar4);
          puVar6 = PTR_PTR_1126adeb8;
          func_0x00010c079b40();
          if ((int)puVar6 != 0) {
            func_0x00010befa120(puVar1);
          }
          _objc_release(uVar5);
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar9 = &uStack_130;
      puVar8 = auStack_f0;
      ppuVar10 = (undefined **)0x10;
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puVar6 = puVar1;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    puVar6 = puVar1;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_10495d960;
    puStack_148 = &UNK_1107b98d8;
    uStack_140 = *(undefined8 *)(param_1 + 0x20);
    puStack_138 = puVar6;
    _objc_retain();
    ppuVar7 = &puStack_160;
    _objc_retainBlock(ppuVar7);
    lVar3 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar3);
    puVar9 = (undefined8 *)PTR_s_tableView_didSelectRowAtIndexPat_1126779f8;
    puVar8 = *(undefined1 **)(param_1 + 0x30);
    func_0x00010bf39c40(puVar8);
    ppuVar10 = ppuVar7;
    func_0x00010c265920(lVar3);
    _objc_release(lVar3);
    _objc_release(ppuVar7);
    _objc_release(puStack_138);
    _objc_release(puVar6);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfd0e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + 0x20),PTR_s_handleDidSelectRowWithBindings_t_1125d1d38,
             *(undefined8 *)(puVar1 + 0x28),param_2,puVar9,puVar8,ppuVar10);
  return;
}



/* Entry: 10495d960; end: 10495d97b;  */

void FUN_10495d960(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleDidSelectRowWithBindings_t_1125d1d38,
             *(undefined8 *)(param_1 + 0x28),param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10495d97c; end: 10495dc0b;  */

void FUN_10495d97c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  _objc_retain();
  puVar9 = &uStack_130;
  puVar8 = auStack_f0;
  ppuVar10 = (undefined **)0x10;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar2);
        }
        uVar12 = *(ulong *)(lStack_128 + lVar11 * 8);
        uVar4 = uVar12;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf529e0();
        _objc_release(uVar4);
        if (1 < uVar5) {
          uVar4 = uVar12;
          func_0x00010c0f5800(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f5800(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          uVar5 = uVar4;
          func_0x00010c25e980(uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          _objc_release(uVar4);
          puVar6 = PTR_PTR_1126adeb8;
          func_0x00010c079b40();
          if ((int)puVar6 != 0) {
            func_0x00010befa120(puVar1);
          }
          _objc_release(uVar5);
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar9 = &uStack_130;
      puVar8 = auStack_f0;
      ppuVar10 = (undefined **)0x10;
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puVar6 = puVar1;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    puVar6 = puVar1;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_10495dc0c;
    puStack_148 = &UNK_1107b9908;
    uStack_140 = *(undefined8 *)(param_1 + 0x20);
    puStack_138 = puVar6;
    _objc_retain();
    ppuVar7 = &puStack_160;
    _objc_retainBlock(ppuVar7);
    lVar3 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar3);
    puVar9 = (undefined8 *)PTR_s_collectionView_didSelectItemAtIn_1125ada28;
    puVar8 = *(undefined1 **)(param_1 + 0x30);
    func_0x00010bf39c40(puVar8);
    ppuVar10 = ppuVar7;
    func_0x00010c265920(lVar3);
    _objc_release(lVar3);
    _objc_release(ppuVar7);
    _objc_release(puStack_138);
    _objc_release(puVar6);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfd0e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + 0x20),PTR_s_handleDidSelectItemWithBindings__1125d1d30,
             *(undefined8 *)(puVar1 + 0x28),param_2,puVar9,puVar8,ppuVar10);
  return;
}



/* Entry: 10495dc0c; end: 10495dc27;  */

void FUN_10495dc0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleDidSelectItemWithBindings__1125d1d30,
             *(undefined8 *)(param_1 + 0x28),param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10495dc28; end: 10495de33; -[FBSDKEventBindingManager updateBindings:] */

void FUN_10495dc28(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  _objc_retain();
  uVar7 = param_1;
  func_0x00010bf99be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
    _objc_release(uVar7);
  }
  else {
    uVar1 = param_1;
    func_0x00010bf99be0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    uVar3 = param_3;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    _objc_release(uVar7);
    if (uVar2 == uVar3) {
      uVar7 = param_1;
      func_0x00010bf99be0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar7;
      func_0x00010bf529e0();
      _objc_release(uVar7);
      if (uVar1 != 0) {
        uVar7 = 0;
        do {
          puVar4 = PTR_PTR_1126add78;
          uVar1 = param_1;
          func_0x00010bf99be0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf09f40(puVar4,param_2,uVar1,uVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR_PTR_1126add78;
          func_0x00010bf09f40(PTR_PTR_1126add78,param_2,param_3,uVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010c071ba0(puVar4,param_2,puVar5);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(uVar1);
          if (((ulong)puVar6 & 1) == 0) goto LAB_10495dd98;
          uVar7 = uVar7 + 1;
          uVar1 = param_1;
          func_0x00010bf99be0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010bf529e0();
          _objc_release(uVar1);
        } while (uVar7 < uVar2);
      }
      goto LAB_10495de10;
    }
  }
LAB_10495dd98:
  func_0x00010c1976c0(param_1,param_2,param_3);
  uVar7 = param_1;
  func_0x00010c1208a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar7);
  uVar7 = param_1;
  func_0x00010c07f840();
  if ((uVar7 & 1) == 0) {
    func_0x00010c24d960(param_1);
  }
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10495de34;
  puStack_60 = &UNK_110842e18;
  uStack_58 = param_1;
  func_0x000104938910(&puStack_78);
LAB_10495de10:
  _objc_release(param_3);
  return;
}



/* Entry: 10495de34; end: 10495de3b;  */

void FUN_10495de34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c129370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_rematchBindings_112627ef8);
  return;
}



/* Entry: 10495de3c; end: 10495e127; -[FBSDKEventBindingManager handleReactNativeTouchesWithHandler:command:touches:eventName:] */

void FUN_10495de3c(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_150;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSSet_1126ae870);
  lVar2 = param_5;
  func_0x00010c075f00();
  if ((int)lVar2 != 0) {
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar3 = param_6;
    func_0x00010c075f00();
    if ((int)uVar3 != 0) {
      uVar3 = param_6;
      _objc_retain();
      lVar2 = param_5;
      _objc_retain();
      uVar11 = uVar3;
      func_0x00010c0720c0();
      if ((int)uVar11 != 0) {
        lVar4 = lVar2;
        _objc_retain();
        lVar5 = lVar4;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar5 != 0) {
          lVar14 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar4);
            }
            uVar6 = *(ulong *)(lVar14 * 8);
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c262ca0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar6);
            if (uVar7 == 0) {
              puVar12 = (undefined *)0x0;
            }
            else {
              uVar6 = uVar7;
              puVar12 = (undefined *)0x0;
              do {
                puVar8 = PTR_PTR_1126ade58;
                func_0x00010bfcc220();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar12);
                uVar7 = uVar6;
                if ((puVar8 != (undefined *)0x0) &&
                   (uVar9 = uVar6, func_0x00010c082800(), (uVar9 & 1) != 0)) goto LAB_10495dffc;
                func_0x00010c262ca0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar6);
                uVar6 = uVar7;
                puVar12 = puVar8;
              } while (uVar7 != 0);
              puVar12 = (undefined *)0x0;
              if (puVar8 != (undefined *)0x0) {
LAB_10495dffc:
                lVar10 = *(long *)(param_1 + 0x20);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                puVar12 = puVar8;
                if (lVar10 != 0) {
                  uVar11 = *(undefined8 *)(param_1 + 0x20);
                  func_0x00010c0e00e0(uVar11);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c277d40();
                  _objc_release(uVar11);
                }
              }
            }
            _objc_release(puVar12);
            _objc_release(uVar7);
            lVar14 = lVar14 + 1;
          } while (lVar14 != lVar5);
          lVar5 = lVar4;
          func_0x00010bf52a60();
        }
        _objc_release(lVar4);
      }
      _objc_release(lVar2);
      _objc_release(uVar3);
      uStack_150 = param_6;
    }
  }
  while( true ) {
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) break;
    ___stack_chk_fail();
    while (param_2 != 1) {
      __Unwind_Resume();
    }
    _objc_begin_catch();
    _objc_end_catch();
    param_6 = uStack_150;
  }
  return;
}



/* Entry: 10495e128; end: 10495e20b; -[FBSDKEventBindingManager handleDidSelectRowWithBindings:target:command:tableView:indexPath:] */

void FUN_10495e128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10495e20c;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  uStack_40 = param_7;
  uStack_38 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x000104938910(&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 10495e20c; end: 10495e3bf;  */

void FUN_10495e20c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined1 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        uVar3 = uVar6;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = uVar3;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar3 = unaff_x22;
        func_0x00010c1554e0();
        if ((int)uVar3 == -1) {
LAB_10495e2f4:
          uVar3 = unaff_x22;
          func_0x00010c142240();
          if ((int)uVar3 != -1) {
            uVar3 = unaff_x22;
            func_0x00010c142240();
            lVar4 = *(long *)(param_1 + 0x28);
            func_0x00010c142240();
            if (lVar4 != (int)uVar3) goto LAB_10495e34c;
          }
          lVar4 = *(long *)(param_1 + 0x30);
          func_0x00010bf33b80(lVar4,param_2,*(undefined8 *)(param_1 + 0x28));
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 != 0) {
            func_0x00010c277d40(uVar6,param_2,lVar4);
          }
          _objc_release(lVar4);
        }
        else {
          uVar3 = unaff_x22;
          func_0x00010c1554e0();
          lVar4 = *(long *)(param_1 + 0x28);
          func_0x00010c1554e0();
          if (lVar4 == (int)uVar3) goto LAB_10495e2f4;
        }
LAB_10495e34c:
        _objc_release(unaff_x22);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10495e3c0;
  uStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  lStack_150 = lVar1;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_10495e4a4;
  puStack_180 = &UNK_110848ba8;
  puStack_178 = (undefined1 *)puVar5;
  uStack_170 = in_x6;
  uStack_168 = in_x5;
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(puVar5);
  func_0x000104938910(&puStack_198);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(puStack_178);
  _objc_release(in_x5);
  _objc_release(in_x6);
  _objc_release(puVar5);
  return;
}



/* Entry: 10495e3c0; end: 10495e4a3; -[FBSDKEventBindingManager handleDidSelectItemWithBindings:target:command:collectionView:indexPath:] */

void FUN_10495e3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10495e4a4;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  uStack_40 = param_7;
  uStack_38 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x000104938910(&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 10495e4a4; end: 10495e657;  */

void FUN_10495e4a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        uVar3 = uVar6;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar3 = uVar4;
        func_0x00010c1554e0();
        if ((int)uVar3 == -1) {
LAB_10495e58c:
          uVar3 = uVar4;
          func_0x00010c142240();
          if ((int)uVar3 != -1) {
            uVar3 = uVar4;
            func_0x00010c142240();
            lVar5 = *(long *)(param_1 + 0x28);
            func_0x00010c142240();
            if (lVar5 != (int)uVar3) goto LAB_10495e5e4;
          }
          lVar5 = *(long *)(param_1 + 0x30);
          func_0x00010bf33b60(lVar5,param_2,*(undefined8 *)(param_1 + 0x28));
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 != 0) {
            func_0x00010c277d40(uVar6,param_2,lVar5);
          }
          _objc_release(lVar5);
        }
        else {
          uVar3 = uVar4;
          func_0x00010c1554e0();
          lVar5 = *(long *)(param_1 + 0x28);
          func_0x00010c1554e0();
          if (lVar5 == (int)uVar3) goto LAB_10495e58c;
        }
LAB_10495e5e4:
        _objc_release(uVar4);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(lVar1 + 0x28));
  return;
}



/* Entry: 10495e658; end: 10495e65f; -[FBSDKEventBindingManager validClasses] */

void FUN_10495e658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10495e660; end: 10495e667; -[FBSDKEventBindingManager eventLogger] */

undefined8 FUN_10495e660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10495e668; end: 10495e673; -[FBSDKEventBindingManager setEventLogger:] */

void FUN_10495e668(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}


