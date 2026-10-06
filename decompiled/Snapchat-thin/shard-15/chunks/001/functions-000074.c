/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b801788; end: 10b801797; -[SIGDialog setTapBackgroundToDismissDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b801788(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112793f80) = param_3;
  return;
}



/* Entry: 10b801798; end: 10b801803; -[SIGDialog .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b801798(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112793f98);
  _objc_storeStrong(param_1 + _DAT_112793f90,0);
  _objc_storeStrong(param_1 + _DAT_112793f8c,0);
  _objc_storeStrong(param_1 + _DAT_112793f94,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112793f84,0);
  return;
}



/* Entry: 10b801804; end: 10b8018e7; -[SIGViewOrViewController view] */

void FUN_10b801804(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_80 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b8018e8;
  uStack_30 = 0x10b8018f8;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b801900;
  puStack_60 = &UNK_11085d360;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10b801938;
  puStack_88 = &UNK_110d61fc0;
  puStack_58 = puStack_80;
  puStack_48 = puStack_80;
  func_0x00010c0c1500(param_1,param_2,&puStack_78,&puStack_a0);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b8018e8; end: 10b8018ff;  */

void FUN_10b8018e8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b801900; end: 10b801977;  */

void FUN_10b801900(long param_1,undefined8 param_2)

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



/* Entry: 10b801978; end: 10b801a43; -[SIGViewOrViewController viewController] */

void FUN_10b801978(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10b8018e8;
  uStack_30 = 0x10b8018f8;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b801a48;
  puStack_60 = &UNK_110d61fc0;
  puStack_48 = puStack_58;
  func_0x00010c0c1500(param_1,param_2,&PTR___NSConcreteGlobalBlock_110d61ff0,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b801a44; end: 10b801a47;  */

void FUN_10b801a44(void)

{
  return;
}



/* Entry: 10b801a48; end: 10b801a7f;  */

void FUN_10b801a48(long param_1,undefined8 param_2)

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



/* Entry: 10b801a80; end: 10b801f1b; -[SIGIndexView initWithGroupImages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b801a80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  puStack_138 = PTR_PTR_11270b1b0;
  puVar1 = &uStack_140;
  uStack_140 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112793fa0) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112793fa4) = 0xffffffffffffffff;
    func_0x00010c219b60(puVar1);
    func_0x00010c198080(puVar1);
    func_0x00010c21e900(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar24 = (long)_DAT_112793fa8;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar24);
    *(undefined **)((long)puVar1 + lVar24) = puVar2;
    _objc_release(uVar21);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar24));
    _objc_release(puVar2);
    uVar21 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c08c0e0(uVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(uVar21);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar24));
    puVar3 = puVar1;
    func_0x00010befbb60();
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110f8a478;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfcf940();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110f8a458;
    puVar5 = puVar4;
    puStack_a0 = puVar4;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c122a00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110f8a438;
    puVar7 = puVar6;
    puStack_98 = puVar6;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfa1440();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110f8a498;
    puVar9 = puVar8;
    puStack_90 = puVar8;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c24d940();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110f8a4b8;
    puVar11 = puVar10;
    puStack_88 = puVar10;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c11e360();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110f8a4d8;
    puVar13 = puVar12;
    puStack_80 = puVar12;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf4a9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar14;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bef7f60(puVar15);
    uVar23 = *(undefined8 *)((long)puVar1 + (long)_DAT_112793fac);
    *(undefined **)((long)puVar1 + (long)_DAT_112793fac) = puVar15;
    _objc_retain(puVar15);
    _objc_release();
    ppuStack_130 = &PTR____CFConstantStringClassReference_110f8a478;
    func_0x00010b8850c8();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_128 = &PTR____CFConstantStringClassReference_110f8a458;
    uVar21 = uVar23;
    uStack_100 = uVar23;
    func_0x00010b8850b0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_120 = &PTR____CFConstantStringClassReference_110f8a438;
    uVar16 = uVar21;
    uStack_f8 = uVar21;
    func_0x00010b885098();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_118 = &PTR____CFConstantStringClassReference_110f8a498;
    uVar17 = uVar16;
    uStack_f0 = uVar16;
    func_0x00010b8850e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_110 = &PTR____CFConstantStringClassReference_110f8a4b8;
    uVar18 = uVar17;
    uStack_e8 = uVar17;
    func_0x00010b8850f8();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_108 = &PTR____CFConstantStringClassReference_110f8a4d8;
    uVar19 = uVar18;
    uStack_e0 = uVar18;
    func_0x00010b885110();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &uStack_100;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_d8 = uVar19;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)puVar1 + (long)_DAT_112793fb0);
    *(undefined **)((long)puVar1 + (long)_DAT_112793fb0) = puVar2;
    _objc_release(uVar22);
    _objc_release(puVar15);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar21);
    _objc_release(uVar23);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  uVar20 = *(ulong *)((long)param_3 + (long)_DAT_112793fb4);
  func_0x00010c071ae0();
  if ((uVar20 & 1) == 0) {
    func_0x00010be65600(param_3);
    func_0x00010bea8840(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return puVar3;
}



/* Entry: 10b801f1c; end: 10b801f73; -[SIGIndexView setTitles:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b801f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_112793fb4);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010be65600(param_1);
    func_0x00010bea8840(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b801f74; end: 10b802073; -[SIGIndexView _setTitles:withMaximumVisibleCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b801f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + _DAT_112793fa0) = 0xffffffffffffffff;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112793fb4);
  *(undefined8 *)(param_1 + _DAT_112793fb4) = uVar2;
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126e1578;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112793fac);
  func_0x00010bf002e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ce0();
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112793fb8);
  *(undefined **)(param_1 + _DAT_112793fb8) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be86b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__rebuildSubviews_11257f478);
  return;
}



/* Entry: 10b802074; end: 10b80208f; -[SIGIndexView setSelectedIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b802074(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + _DAT_112793fbc) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1fb190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setSelectedIndex_fromUserInterac_11265c688,param_3,0);
  return;
}



/* Entry: 10b802090; end: 10b8021ab; -[SIGIndexView setSelectedIndex:fromUserInteraction:] */

/* WARNING: Possible PIC construction at 0x00010b802170: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b802090(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((-2 < (long)param_3) && (lVar5 = (long)_DAT_112793fa0, param_3 != *(ulong *)(param_1 + lVar5))
     ) {
    uVar1 = *(ulong *)(param_1 + _DAT_112793fb4);
    func_0x00010bf529e0();
    if (param_3 < uVar1) {
      *(ulong *)(param_1 + lVar5) = param_3;
      if (param_4 != 0) {
        lVar5 = param_1;
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfed380();
        _objc_release(lVar5);
        puVar2 = PTR_PTR_1126affa8;
        func_0x00010c22bc20(PTR_PTR_1126affa8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f8760();
        _objc_release(puVar2);
      }
      lVar5 = *(long *)(param_1 + _DAT_112793fb8);
      func_0x00010c2a00e0();
      lVar3 = *(long *)(param_1 + _DAT_112793fa4);
      if (lVar5 != lVar3) {
        if (lVar3 < 0) {
          *(long *)(param_1 + _DAT_112793fa4) = lVar5;
          if (lVar5 == -1) {
            return;
          }
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
          lVar5 = lVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bea73b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__setSelectedStateOfIndex_to__112587690,lVar5,uVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10b8021ac; end: 10b802207; -[SIGIndexView layoutSubviews] */

void FUN_10b8021ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c271860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be06d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dynamicTypeLayoutSubviews_11255f4f0);
    return;
  }
  return;
}



/* Entry: 10b802208; end: 10b802263; -[SIGIndexView _dynamicTypeLayoutSubviews] */

void FUN_10b802208(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b802264;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  return;
}



/* Entry: 10b802264; end: 10b8024f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b802264(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
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
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x20));
  dVar9 = -12.0;
  param_4 = param_4 + -12.0;
  uVar1 = *(ulong *)(*(long *)(param_5 + 0x20) + (long)_DAT_112793fb4);
  func_0x00010bf529e0();
  func_0x00010be65600(*(undefined8 *)(param_5 + 0x20));
  dVar10 = (double)uVar1;
  if (dVar9 <= (double)uVar1) {
    dVar10 = dVar9;
  }
  lVar6 = (long)dVar10;
  lVar4 = *(long *)(param_5 + 0x20);
  lVar2 = (long)_DAT_112793fc4;
  if (((long)*(double *)(lVar4 + _DAT_112793fc0) != (long)param_4) ||
     (*(long *)(lVar4 + lVar2) != lVar6)) {
    *(double *)(lVar4 + _DAT_112793fc0) = param_4;
    *(long *)(*(long *)(param_5 + 0x20) + lVar2) = lVar6;
    lVar8 = (long)_DAT_112793fb8;
    lVar4 = *(long *)(*(long *)(param_5 + 0x20) + lVar8);
    func_0x00010c2a0100();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar2 != lVar6) {
      uVar5 = *(undefined8 *)(param_5 + 0x20);
      uVar7 = uVar5;
      func_0x00010c271860(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea8840((double)lVar6,uVar5,param_6,uVar7);
      _objc_release(uVar7);
    }
    lVar4 = *(long *)(*(long *)(param_5 + 0x20) + lVar8);
    func_0x00010c2a0100();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    param_4 = param_4 + (double)lVar2 * -18.0;
    func_0x00010c181140(param_4 * 0.5,
                        *(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_112793fc8));
    func_0x00010c181140(-(param_4 * 0.5),
                        *(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_112793fcc));
    lVar4 = *(long *)(param_5 + 0x20);
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar4 = *(long *)(lVar4 + _DAT_112793fd0);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60(lVar4,param_6,&uStack_140,auStack_f8,0x10);
  if (lVar2 != 0) {
    uVar1 = 0;
    lVar6 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        uVar7 = *(undefined8 *)(lStack_138 + lVar8 * 8);
        func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
        func_0x00010c19f0e0(0,(double)uVar1 * 18.0 + 6.0,param_3,0x4032000000000000,uVar7);
        uVar1 = uVar1 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar4;
      func_0x00010bf52a60(lVar4,param_6,&uStack_140,auStack_f8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar4 + _DAT_112793fbc) = 1;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x2c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(lVar4 + _DAT_112793fa8),param_6,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b8024f8; end: 10b80255f; -[SIGIndexView _startInteracting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8024f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + _DAT_112793fbc) = 1;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112793fa8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b802560; end: 10b8025e7; -[SIGIndexView _finishInteracting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b802560(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + _DAT_112793fbc) = 0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112793fa8),param_2,puVar1);
  _objc_release(puVar1);
  param_1 = param_1 + _DAT_112793fd4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfed380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b8025e8; end: 10b80269b; -[SIGIndexView touchesBegan:withEvent:] */

void FUN_10b8025e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_touchesBegan_withEvent__11267b780;
  puStack_48 = PTR_PTR_11270b1b0;
  uStack_50 = param_3;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&uStack_50,puVar1,param_5,param_6);
  func_0x00010bec0240(param_3);
  uVar2 = param_5;
  func_0x00010bf04a20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c09ef00(uVar2);
  _objc_release(uVar2);
  func_0x00010be82700(param_2,param_3);
  return;
}



/* Entry: 10b80269c; end: 10b80274f; -[SIGIndexView touchesMoved:withEvent:] */

void FUN_10b80269c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bf04a20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00();
  _objc_release(uVar1);
  func_0x00010be82700(param_2,param_3);
  puStack_48 = PTR_PTR_11270b1b0;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_touchesMoved_withEvent__11252ca58,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10b802750; end: 10b80280b; -[SIGIndexView touchesEnded:withEvent:] */

void FUN_10b802750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bf04a20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00();
  _objc_release(uVar1);
  func_0x00010be82700(param_2,param_3);
  puStack_48 = PTR_PTR_11270b1b0;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_touchesEnded_withEvent__11267b788,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010be16f00(param_3);
  return;
}



/* Entry: 10b80280c; end: 10b802853; -[SIGIndexView touchesCancelled:withEvent:] */

void FUN_10b80280c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b1b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_touchesCancelled_withEvent__112526c90);
  func_0x00010be16f00(param_1);
  return;
}



/* Entry: 10b802854; end: 10b802893; -[SIGIndexView willMoveToSuperview:] */

void FUN_10b802854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010bf495c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65be0(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b802894; end: 10b802c6b; -[SIGIndexView didMoveToSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b802894(undefined8 param_1,double param_2,double param_3,double param_4,
                  undefined *param_5,undefined8 param_6)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = param_5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_112793fd8;
    puVar2 = param_5 + lVar13;
    _objc_loadWeakRetained(puVar2);
    puVar4 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493c0(0,puVar3,param_6,puVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_112793fdc;
    uVar10 = *(undefined8 *)(param_5 + lVar12);
    *(undefined **)(param_5 + lVar12) = puVar5;
    _objc_release(uVar10);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar3 = param_5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_5 + lVar13;
    _objc_loadWeakRetained(puVar2);
    puVar4 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493c0(0,puVar3,param_6,puVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = (long)_DAT_112793fe0;
    uVar10 = *(undefined8 *)(param_5 + lVar14);
    *(undefined **)(param_5 + lVar14) = puVar5;
    _objc_release(uVar10);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    uStack_88 = *(undefined8 *)(param_5 + lVar12);
    uStack_80 = *(undefined8 *)(param_5 + lVar14);
    puVar4 = param_5;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_5;
    puStack_78 = puVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_5 + lVar13;
    _objc_loadWeakRetained(puVar2);
    puVar7 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493c0(0xc020000000000000,puVar6,param_6,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010bff4000();
    lVar12 = (long)_DAT_112793fa8;
    uVar9 = *(undefined8 *)(param_5 + lVar12);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_5;
    func_0x00010c274200(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf493c0(0,uVar9,param_6,puVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_112793fc8;
    uVar11 = *(undefined8 *)(param_5 + lVar13);
    *(undefined8 *)(param_5 + lVar13) = uVar10;
    _objc_release(uVar11);
    _objc_release(puVar4);
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_5 + lVar12);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_5;
    func_0x00010bf1ff80(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf493c0(0,uVar9,param_6,puVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = (long)_DAT_112793fcc;
    uVar11 = *(undefined8 *)(param_5 + lVar14);
    *(undefined8 *)(param_5 + lVar14) = uVar10;
    _objc_release(uVar11);
    _objc_release(puVar4);
    _objc_release(uVar9);
    uVar9 = *(undefined8 *)(param_5 + lVar12);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0x4034000000000000;
    uVar10 = uVar9;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uStack_a0 = *(undefined8 *)(param_5 + lVar13);
    uStack_98 = *(undefined8 *)(param_5 + lVar14);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_a0,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2,param_6,puVar4);
    _objc_release(puVar4);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_6,puVar2);
    func_0x00010c1cbe20(param_5);
    _objc_release(uVar10);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    dVar17 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
    dVar18 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    dVar19 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    dVar20 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    puVar2 = puVar3;
    dVar16 = param_2;
    func_0x00010bf8d060();
    dVar15 = -8.0;
    dVar1 = -8.0;
    if (puVar2 != (undefined *)0x1) {
      dVar20 = -8.0;
      dVar1 = dVar18;
    }
    func_0x00010bf20c00(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)
              (dVar1 + dVar15,dVar17 + dVar16,param_3 - (dVar1 + dVar20),param_4 - (dVar17 + dVar19)
               ,param_1,param_2);
    return;
  }
  return;
}



/* Entry: 10b802c6c; end: 10b802cf3; -[SIGIndexView pointInside:withEvent:] */

void FUN_10b802c6c(undefined8 param_1,double param_2,double param_3,double param_4,long param_5)

{
  double dVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  dVar6 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  dVar7 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  dVar8 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  lVar2 = param_5;
  dVar4 = param_2;
  func_0x00010bf8d060();
  dVar3 = -8.0;
  dVar1 = -8.0;
  if (lVar2 != 1) {
    dVar8 = -8.0;
    dVar1 = dVar6;
  }
  func_0x00010bf20c00(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)
            (dVar1 + dVar3,dVar5 + dVar4,param_3 - (dVar1 + dVar8),param_4 - (dVar5 + dVar7),param_1
             ,param_2);
  return;
}



/* Entry: 10b802cf4; end: 10b802d7f; -[SIGIndexView _numberOfItemsToDisplay] */

double FUN_10b802cf4(undefined8 param_1)

{
  ulong uVar1;
  double dVar2;
  double in_d3;
  
  func_0x00010bfb68e0();
  if (in_d3 <= 0.0) {
    func_0x00010c262ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(param_1);
  }
  else {
    func_0x00010bfb68e0();
  }
  if (in_d3 == 0.0) {
    dVar2 = 0.0;
  }
  else {
    uVar1 = (ulong)((in_d3 + -12.0) / 18.0);
    dVar2 = (double)(uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU));
  }
  return dVar2;
}



/* Entry: 10b802d80; end: 10b802e43; -[SIGIndexView _optionWithImage:accessibilityLabel:] */

void FUN_10b802d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  func_0x00010bfe9720(param_3,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  func_0x00010c182220();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c161020(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1af000(puVar1,param_2,1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b802e44; end: 10b802eff; -[SIGIndexView _optionWithText:] */

void FUN_10b802e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c165e00();
  func_0x00010c21ad00(puVar1,param_2,0x17);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c212f20(puVar1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b802f00; end: 10b803127; -[SIGIndexView _rebuildSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b802f00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112793fd0;
  func_0x00010c0b7520(*(undefined8 *)(param_1 + lVar13),param_2,PTR_s_removeFromSuperview_112628c78)
  ;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + _DAT_112793fb8);
  func_0x00010c2a0100();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = &uStack_130;
  lVar15 = lVar2;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar17 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar17) {
          _objc_enumerationMutation(lVar2);
        }
        lVar16 = (long)_DAT_112793fac;
        lVar3 = *(long *)(param_1 + lVar16);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar6 = param_1;
        if (lVar3 == 0) {
          func_0x00010be6e1a0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar4 = *(undefined8 *)(param_1 + lVar16);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + _DAT_112793fb0);
          func_0x00010c0e00e0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be6e180();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          _objc_release(uVar4);
        }
        func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112793fa8));
        func_0x00010befa120(puVar1);
        _objc_release(lVar6);
        lVar14 = lVar14 + 1;
      } while (lVar15 != lVar14);
      puVar12 = &uStack_130;
      lVar15 = lVar2;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar4);
  func_0x00010c1cbe20();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = (long)_DAT_112793fd0;
  puVar7 = *(undefined8 **)(param_1 + lVar15);
  func_0x00010bf529e0();
  if (puVar7 <= puVar12) {
    return;
  }
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = *(undefined **)(param_1 + lVar15);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_class(PTR_PTR_1126aea58);
  puVar10 = puVar9;
  _objc_opt_isKindOfClass(puVar9,puVar1);
  puVar1 = PTR_PTR_1126aea58;
  if (((ulong)puVar10 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_class(PTR__OBJC_CLASS___UIImageView_1126aec28);
    puVar10 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar1);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    if (((ulong)puVar10 & 1) == 0) goto LAB_10b8032a8;
    _objc_retain(puVar9);
    _objc_opt_class(puVar1);
    puVar10 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar1);
    puVar1 = puVar9;
    if (((ulong)puVar10 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar9);
    puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar1);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(puVar9);
    _objc_opt_class(puVar1);
    puVar11 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar1);
    puVar10 = puVar9;
    if (((ulong)puVar11 & 1) == 0) {
      puVar10 = (undefined *)0x0;
    }
    _objc_retain(puVar10);
    _objc_release(puVar9);
    func_0x00010c213180(puVar10);
  }
  _objc_release(puVar10);
LAB_10b8032a8:
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10b803128; end: 10b8032c7; -[SIGIndexView _setSelectedStateOfIndex:to:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b803128(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112793fd0;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010bf529e0();
  if (uVar1 <= param_3) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = *(undefined **)(param_1 + lVar7);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aea58;
  _objc_opt_class(PTR_PTR_1126aea58);
  puVar5 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar4);
  puVar4 = PTR_PTR_1126aea58;
  if (((ulong)puVar5 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_class(PTR__OBJC_CLASS___UIImageView_1126aec28);
    puVar5 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar4);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    if (((ulong)puVar5 & 1) == 0) goto LAB_10b8032a8;
    _objc_retain(puVar3);
    _objc_opt_class(puVar4);
    puVar5 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar4);
    puVar4 = puVar3;
    if (((ulong)puVar5 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar4);
    _objc_release(puVar4);
  }
  else {
    _objc_retain(puVar3);
    _objc_opt_class(puVar4);
    puVar6 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar4);
    puVar5 = puVar3;
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar3);
    func_0x00010c213180(puVar5);
  }
  _objc_release(puVar5);
LAB_10b8032a8:
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b8032c8; end: 10b803397; -[SIGIndexView _processTouchAtY:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8032c8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf49220(*(undefined8 *)(param_2 + _DAT_112793fc8));
  lVar2 = (long)_DAT_112793fd0;
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMinY();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMaxY();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112793fb8);
  func_0x00010bfecee0(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1fb190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setSelectedIndex_fromUserInterac_11265c688,uVar1,1);
  return;
}



/* Entry: 10b803398; end: 10b8033b7; -[SIGIndexView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b803398(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112793fd4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8033b8; end: 10b8033cb; -[SIGIndexView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8033b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112793fd4,param_3);
  return;
}



/* Entry: 10b8033cc; end: 10b8033eb; -[SIGIndexView relativeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8033cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112793fd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8033ec; end: 10b8033ff; -[SIGIndexView setRelativeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8033ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112793fd8,param_3);
  return;
}



/* Entry: 10b803400; end: 10b80340f; -[SIGIndexView titles] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b803400(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112793fb4);
}



/* Entry: 10b803410; end: 10b8034e7; -[SIGIndexView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b803410(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112793fb4,0);
  _objc_destroyWeak(param_1 + _DAT_112793fd8);
  _objc_destroyWeak(param_1 + _DAT_112793fd4);
  _objc_storeStrong(param_1 + _DAT_112793fe0,0);
  _objc_storeStrong(param_1 + _DAT_112793fdc,0);
  _objc_storeStrong(param_1 + _DAT_112793fb8,0);
  _objc_storeStrong(param_1 + _DAT_112793fb0,0);
  _objc_storeStrong(param_1 + _DAT_112793fac,0);
  _objc_storeStrong(param_1 + _DAT_112793fd0,0);
  _objc_storeStrong(param_1 + _DAT_112793fcc,0);
  _objc_storeStrong(param_1 + _DAT_112793fc8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112793fa8,0);
  return;
}



/* Entry: 10b8034e8; end: 10b803c3b; -[SIGIndexViewLogic initWithTitles:possibleSpecialTitles:maximumVisibleTitles:] */

undefined8 *
FUN_10b8034e8(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  long lVar21;
  float fVar22;
  double dVar23;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
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
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  uVar18 = param_3;
  func_0x00010bf52a60();
  if (uVar18 == 0) {
    lVar21 = 0;
  }
  else {
    lVar16 = *plStack_1a0;
    lVar21 = 0;
    do {
      uVar17 = 0;
      lVar1 = uVar18 + lVar21;
      do {
        if (*plStack_1a0 != lVar16) {
          _objc_enumerationMutation(param_3);
        }
        uVar13 = param_4;
        func_0x00010bf4b900();
        if ((int)uVar13 == 0) goto LAB_10b803644;
        puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(puVar6);
        lVar21 = lVar21 + 1;
        uVar17 = uVar17 + 1;
      } while (uVar18 != uVar17);
      uVar18 = param_3;
      func_0x00010bf52a60();
      lVar21 = lVar1;
    } while (uVar18 != 0);
  }
LAB_10b803644:
  _objc_release(param_3);
  uVar18 = param_3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar18;
  func_0x00010c071ae0();
  _objc_release(uVar18);
  uVar14 = param_3;
  func_0x00010bf529e0();
  lVar21 = lVar21 + (uVar7 & 0xffffffff);
  uVar14 = uVar14 - lVar21;
  uVar11 = param_5 - lVar21;
  uVar18 = uVar11 - 2;
  bVar3 = 1 < uVar14 && (1 < uVar11 && uVar18 != 0);
  uVar17 = uVar14 - 2;
  if (1 >= uVar14 || (1 >= uVar11 || uVar18 == 0)) {
    uVar18 = uVar11;
    uVar17 = uVar14;
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (uVar18 < uVar17) {
    fVar22 = (float)(int)(((float)uVar18 + -1.0) * 0.5);
    if (fVar22 <= 1.0) {
      fVar22 = 1.0;
    }
    uVar14 = 1;
    do {
      uVar14 = uVar14 + 1;
      if (uVar14 < 2) {
        uVar11 = 0xffffffffffffffff;
      }
      else {
        uVar11 = (ulong)(((float)uVar17 - (float)uVar18) / ((float)uVar14 + -1.0));
      }
    } while ((ulong)(long)fVar22 <= uVar11 - 1);
  }
  else {
    uVar14 = 0;
    uVar11 = 0;
  }
  uVar12 = (uVar17 - uVar11 * uVar14) + uVar11;
  uVar20 = uVar12;
  if (uVar12 + 1 <= uVar18) {
    uVar20 = uVar12 + 1;
    if (uVar12 < 2 || uVar17 != uVar11 * uVar14) {
      uVar20 = uVar12;
    }
    if ((double)(long)((float)uVar20 * 0.5) < (double)uVar11) {
      uVar20 = uVar20 + 1;
    }
  }
  if (bVar3) {
    puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6);
    _objc_release(puVar8);
  }
  uStack_208 = 0;
  lVar21 = 0;
  uVar18 = 0;
  if (uVar20 < 2) {
    uVar20 = 1;
  }
  uVar12 = 0;
  if (uVar20 != 0) {
    uVar12 = uVar11 / uVar20;
  }
  uVar12 = (ulong)(double)uVar12;
  if (uVar12 < 3) {
    uVar12 = 2;
  }
  do {
    if ((uStack_208 < uVar11) && ((uVar18 == 0 || (lVar21 == 0)))) {
      uVar2 = uVar17;
      if (uVar14 <= uVar17 - 1) {
        uVar2 = uVar14;
      }
      puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6);
      _objc_release(puVar8);
      uVar17 = uVar17 - uVar2;
      uStack_208 = uStack_208 + 1;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6);
      _objc_release(puVar8);
      uVar17 = uVar17 - 1;
    }
    if (uVar17 == 0) goto LAB_10b8039bc;
    lVar16 = 0;
    if (lVar21 + 1U != uVar12) {
      lVar16 = lVar21 + 1;
    }
    uVar18 = uVar18 + 1;
    lVar21 = lVar16;
  } while (uVar20 != uVar18);
  puVar8 = puVar6;
  func_0x00010c089820(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f4c0();
  uVar18 = param_2;
  _objc_release(puVar8);
  bVar4 = 1 < param_2;
  param_2 = uVar18;
  if (bVar4) {
    puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6);
    _objc_release(puVar8);
    uVar17 = uVar17 - 1;
    param_2 = uVar18;
  }
  if ((uVar17 != 0) && (uStack_208 < uVar11)) {
    puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6);
    _objc_release(puVar8);
  }
LAB_10b8039bc:
  if (bVar3) {
    puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6);
    _objc_release(puVar8);
  }
  func_0x00010befa160(puVar5);
  puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if ((int)uVar7 != 0) {
    func_0x00010bf529e0(param_3);
    func_0x00010c297300(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(puVar8);
  }
  _objc_release(puVar6);
  _objc_release(param_3);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar23 = 0.0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(puVar5);
  puVar15 = &uStack_1f0;
  puVar10 = auStack_170;
  puVar8 = puVar5;
  func_0x00010bf52a60();
  if (puVar8 != (undefined *)0x0) {
    lVar21 = *plStack_1e0;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar21) {
          _objc_enumerationMutation(puVar5);
        }
        uVar18 = *(ulong *)(lStack_1e8 + (long)puVar19 * 8);
        func_0x00010c11f4c0();
        if (param_2 < 2) {
          uVar17 = param_3;
          func_0x00010bf529e0();
          if (uVar18 < uVar17) {
            uVar18 = param_3;
            func_0x00010c0dfd40(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar6);
            _objc_release(uVar18);
          }
        }
        else {
          func_0x00010befa120(puVar6);
        }
        puVar19 = puVar19 + 1;
      } while (puVar8 != puVar19);
      puVar15 = &uStack_1f0;
      puVar10 = auStack_170;
      puVar8 = puVar5;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  puStack_1f8 = PTR_PTR_11270b1b8;
  puVar9 = &uStack_200;
  puVar8 = PTR_s_init_1125d9248;
  uStack_200 = param_1;
  _objc_msgSendSuper2();
  if (puVar9 != (undefined8 *)0x0) {
    uVar18 = param_3;
    func_0x00010bf51e00();
    uVar13 = puVar9[2];
    puVar9[2] = uVar18;
    _objc_release(uVar13);
    _objc_retain(puVar5);
    uVar13 = puVar9[1];
    puVar9[1] = puVar5;
    _objc_release(uVar13);
    _objc_retain(puVar6);
    uVar13 = puVar9[3];
    puVar9[3] = puVar6;
    _objc_release(uVar13);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    dVar23 = dVar23 - (double)puVar15;
    if (0.0 <= dVar23) {
      uVar18 = *(ulong *)(param_3 + 8);
      func_0x00010bf529e0();
      if ((double)puVar10 <= dVar23) {
        puVar15 = (undefined8 *)(uVar18 - 1);
      }
      else {
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = (ulong)puVar10 / uVar18;
        }
        puVar9 = *(undefined8 **)(param_3 + 8);
        func_0x00010c0dfd40(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar9;
        func_0x00010c11f4c0();
        _objc_release(puVar9);
        if (puVar8 != (undefined *)0x1) {
          puVar15 = (undefined8 *)
                    (long)((double)(long)((dVar23 / (double)uVar17 -
                                          (double)(long)(dVar23 / (double)uVar17)) * (double)puVar8)
                          + (double)puVar15);
        }
      }
    }
    else {
      puVar15 = (undefined8 *)0x0;
    }
    return puVar15;
  }
  return puVar9;
}



/* Entry: 10b803c3c; end: 10b803d07; -[SIGIndexViewLogic indexOfTitleAtPosition:inRange:] */

ulong FUN_10b803c3c(double param_1,long param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  param_1 = param_1 - (double)param_4;
  if (0.0 <= param_1) {
    uVar3 = *(ulong *)(param_2 + 8);
    func_0x00010bf529e0();
    if ((double)param_5 <= param_1) {
      uVar3 = uVar3 - 1;
    }
    else {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = param_5 / uVar3;
      }
      uVar2 = *(ulong *)(param_2 + 8);
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c11f4c0();
      _objc_release(uVar2);
      if (param_3 != 1) {
        uVar3 = (ulong)((double)(long)((param_1 / (double)uVar1 -
                                       (double)(long)(param_1 / (double)uVar1)) * (double)param_3) +
                       (double)uVar3);
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10b803d08; end: 10b803d83; -[SIGIndexViewLogic visibleTitleIndexForTitleIndex:] */

undefined8 FUN_10b803d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297300(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf529e0(uVar2);
  func_0x00010bfece00(uVar3,param_2,puVar1,0,uVar2,0x100,&PTR___NSConcreteGlobalBlock_110d62040);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 10b803d84; end: 10b803e23;  */

undefined8 FUN_10b803d84(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  _objc_retain(param_3);
  func_0x00010c11f4c0();
  uVar2 = param_3;
  uVar5 = uVar4;
  func_0x00010c11f4c0();
  _objc_release(param_3);
  if ((param_2 == uVar2) && (uVar4 == uVar5)) {
    uVar3 = 0;
  }
  else {
    _NSIntersectionRange(param_2,uVar4,uVar2,uVar5);
    uVar1 = 1;
    if (param_2 < uVar2) {
      uVar1 = 0xffffffffffffffff;
    }
    uVar3 = 0;
    if (uVar4 == 0) {
      uVar3 = uVar1;
    }
  }
  return uVar3;
}



/* Entry: 10b803e24; end: 10b803e2b; -[SIGIndexViewLogic titles] */

undefined8 FUN_10b803e24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b803e2c; end: 10b803e33; -[SIGIndexViewLogic visibleTitles] */

undefined8 FUN_10b803e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b803e34; end: 10b803e6f; -[SIGIndexViewLogic .cxx_destruct] */

void FUN_10b803e34(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b803e70; end: 10b803f37; -[SIGTaggedString initWithString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b803e70(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_40;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e1580;
  _objc_opt_class(PTR_PTR_1126e1580);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar5 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    puStack_38 = PTR_PTR_11270b1c0;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
    puVar5 = (undefined1 *)ppuVar3;
    if (ppuVar3 == (undefined1 **)0x0) {
      param_1 = (undefined1 *)0x0;
    }
    else {
      puVar2 = param_3;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112793ff0);
      *(undefined1 **)((long)ppuVar3 + (long)_DAT_112793ff0) = puVar2;
      _objc_release(uVar4);
      param_1 = (undefined1 *)ppuVar3;
    }
  }
  _objc_retain(puVar5);
  _objc_release(param_3);
  _objc_release(param_1);
  return puVar5;
}



/* Entry: 10b803f38; end: 10b803f47; -[SIGTaggedString length] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b803f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08fa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793ff0),PTR_s_length_1126018a8);
  return;
}



/* Entry: 10b803f48; end: 10b803f57; -[SIGTaggedString characterAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b803f48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf35930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112793ff0),PTR_s_characterAtIndex__1125aaff0);
  return;
}



/* Entry: 10b803f58; end: 10b803f7b; -[SIGTaggedString copyWithZone:] */

undefined8 FUN_10b803f58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b803f7c; end: 10b803fd7; -[SIGTaggedString script] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b803f7c(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + _DAT_112793ff4) != '\x01') {
    *(undefined1 *)(param_1 + _DAT_112793ff4) = 1;
    lVar1 = param_1;
    FUN_10b803fd8();
    *(long *)(param_1 + _DAT_112793ff8) = lVar1;
  }
  return;
}



/* Entry: 10b803fd8; end: 10b80421f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b803fd8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar7 = *(undefined8 *)PTR__NSLinguisticTagSchemeScript_110345558;
  _objc_retain(uVar7);
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSLinguisticTagger_1126e1588;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_50 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0504c0();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c26d3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  func_0x00010c08fa60(param_1);
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 1;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10b804500;
  puStack_80 = &UNK_110d62060;
  ppuVar4 = &puStack_98;
  puStack_68 = puStack_78;
  _objc_retainBlock(ppuVar4);
  func_0x00010c20e7c0(puVar3);
  func_0x00010bf98060(puVar3);
  lVar9 = puStack_68[3];
  _objc_release(ppuVar4);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar9;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_70,8);
  lVar5 = param_1;
  __Unwind_Resume();
  pcStack_a8 = FUN_10b804220;
  lVar10 = (long)_DAT_112793ffc;
  lVar8 = *(long *)(lVar5 + lVar10);
  lStack_d0 = lVar9;
  puStack_c8 = puVar3;
  uStack_c0 = uVar7;
  lStack_b8 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (lVar8 == 0) {
    lVar9 = lVar5;
    func_0x00010c246b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puStack_f8 = &uStack_100;
    uStack_100 = 0;
    uStack_f0 = 0x3032000000;
    pcStack_e8 = FUN_10b804704;
    uStack_e0 = 0x10b804714;
    uStack_d8 = 0;
    func_0x00010c08fa60(lVar9);
    func_0x00010bf98040(lVar9);
    uVar7 = puStack_f8[5];
    func_0x00010c09e940();
    _objc_retainAutoreleasedReturnValue();
    __Block_object_dispose(&uStack_100,8);
    _objc_release(uStack_d8);
    _objc_release(lVar9);
    uVar6 = *(undefined8 *)(lVar5 + lVar10);
    *(undefined8 *)(lVar5 + lVar10) = uVar7;
    _objc_release(uVar6);
    _objc_release(lVar9);
    lVar8 = *(long *)(lVar5 + lVar10);
  }
  _objc_retain(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return lVar8;
}



/* Entry: 10b804220; end: 10b80435b; -[SIGTaggedString groupString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b804220(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = (long)_DAT_112793ffc;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010c246b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_10b804704;
    uStack_40 = 0x10b804714;
    uStack_38 = 0;
    func_0x00010c08fa60(lVar3);
    func_0x00010bf98040(lVar3);
    uVar1 = puStack_58[5];
    func_0x00010c09e940();
    _objc_retainAutoreleasedReturnValue();
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b80435c; end: 10b8044af; -[SIGTaggedString sortString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b80435c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112794000;
  lVar6 = *(long *)(param_1 + lVar7);
  if (lVar6 != 0) goto LAB_10b804490;
  puVar1 = param_1;
  func_0x00010c151c00();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_1);
  func_0x00010bf01c80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c25d0a0(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((long)puVar1 < 4) {
    if ((long)puVar1 < 2) {
      if ((puVar1 == (undefined *)0x0) || (puVar1 == (undefined *)0x1)) {
LAB_10b804440:
        puVar2 = puVar4;
        FUN_10b8045d8();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      if (puVar1 == (undefined *)0x2) goto LAB_10b804440;
      if (puVar1 == (undefined *)0x3) goto LAB_10b804464;
    }
  }
  else if ((long)puVar1 < 6) {
    if ((puVar1 == (undefined *)0x4) || (puVar1 == (undefined *)0x5)) {
LAB_10b804464:
      puVar2 = puVar4;
      func_0x00010b804684();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if ((puVar1 == (undefined *)0x6) || (puVar1 == (undefined *)0x7)) goto LAB_10b804464;
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar5);
  lVar6 = *(long *)(param_1 + lVar7);
LAB_10b804490:
  _objc_retain(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10b8044b0; end: 10b8044ff; -[SIGTaggedString .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8044b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794000,0);
  _objc_storeStrong(param_1 + _DAT_112793ffc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112793ff0,0);
  return;
}



/* Entry: 10b804500; end: 10b8045d7;  */

void FUN_10b804500(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  if (lRam00000001137fbb00 != -1) {
    func_0x000107c27d9c(0x1137fbb00,&PTR___NSConcreteGlobalBlock_110d62090);
  }
  lVar1 = lRam00000001137fbaf8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c2827c0();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar2;
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) != 0) {
    *param_5 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b8045d8; end: 10b804703;  */

void FUN_10b8045d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c106180();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25ce60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c25ce60(uVar1,param_2,*(undefined8 *)PTR__NSStringTransformStripDiacritics_11034aac8,0
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c25ce60(uVar2,param_2,
                      *(undefined8 *)PTR__NSStringTransformStripCombiningMarks_11034aac0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b804704; end: 10b80471b;  */

void FUN_10b804704(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b80471c; end: 10b8047e7;  */

void FUN_10b80471c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *in_x6;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_2);
  func_0x00010bf01c80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar5 = lVar3;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    *in_x6 = 1;
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(lVar3);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(long *)(lVar5 + 0x28) = lVar3;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10b8047e8; end: 10b80484f;  */

undefined * FUN_10b8047e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSLinguisticTagger_1126e1588;
  func_0x00010bf51e00();
  func_0x00010bf87fe0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf35940(PTR__OBJC_CLASS___NSLocale_1126af788,param_2,puVar1);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10b804850; end: 10b804867;  */

void FUN_10b804850(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001137fbaf8;
  ppuRam00000001137fbaf8 = &PTR__OBJC_CLASS___NSConstantDictionary_111175670;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b804868; end: 10b8048db; -[SIGSortedIndex initWithUnsortedEntities:] */

undefined8 FUN_10b804868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  _objc_retain(param_3);
  func_0x00010c0ecd20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059580(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10b8048dc; end: 10b8048e7; -[SIGSortedIndex initWithUnsortedEntities:orderedPredefinedGroups:] */

void FUN_10b8048dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0595b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUnsortedEntities_ordered_1125f3f78,param_3,param_4,
             &PTR___NSConcreteGlobalBlock_110d620d8);
  return;
}



/* Entry: 10b8048e8; end: 10b804963;  */

void FUN_10b8048e8(undefined8 param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_sig_predefinedGroupType_11266c958);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c23bcc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
  }
  *param_3 = uVar1;
  uVar1 = param_2;
  func_0x00010c23bce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b804964; end: 10b8059cb; -[SIGSortedIndex initWithUnsortedEntities:orderedPredefinedGroups:keyLookup:] */

/* WARNING: Possible PIC construction at 0x00010b8051c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8052ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8051c4) */
/* WARNING: Removing unreachable block (ram,0x00010b8052b0) */

undefined8 *
FUN_10b804964(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
             undefined *param_6,undefined *param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  long lVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  undefined *puVar26;
  long lStack_528;
  undefined8 uStack_510;
  undefined *puStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  long *plStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined **ppuStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 auStack_370 [16];
  undefined8 auStack_2f0 [80];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  plStack_3e0 = (long *)0x0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  _objc_retain(param_3);
  lStack_528 = param_3;
  func_0x00010bf52a60();
  if (lStack_528 != 0) {
    lVar17 = *plStack_3e0;
    do {
      lVar20 = 0;
      do {
        if (*plStack_3e0 != lVar17) {
          _objc_enumerationMutation(param_3);
        }
        uVar21 = *(undefined8 *)(lStack_3e8 + lVar20 * 8);
        ppuVar5 = (undefined **)PTR_PTR_1126e1580;
        _objc_alloc();
        ppuStack_3f8 = (undefined **)0x0;
        lVar23 = param_5;
        (**(code **)(param_5 + 0x10))(param_5,uVar21,&ppuStack_3f8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = ppuStack_3f8;
        _objc_retain(ppuStack_3f8);
        func_0x00010c04e820();
        _objc_release(lVar23);
        if (ppuVar1 == (undefined **)0x0) {
          ppuVar6 = ppuVar5;
          func_0x00010bfcf3e0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(ppuVar1);
          ppuVar6 = ppuVar1;
        }
        puVar7 = PTR_PTR_1126e1590;
        _objc_alloc(PTR_PTR_1126e1590);
        func_0x00010c010000();
        if (ppuVar1 == (undefined **)0x0) {
          ppuVar22 = &PTR____CFConstantStringClassReference_110dbf518;
          if (ppuVar6 != (undefined **)0x0) {
            ppuVar22 = ppuVar6;
          }
          puVar8 = puVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar8 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
          }
          func_0x00010befa120(puVar8);
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c151c00(ppuVar5);
          func_0x00010c0df840(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar2;
          func_0x00010bf4b900();
          _objc_release(puVar9);
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (((ulong)puVar10 & 1) == 0) {
            func_0x00010c151c00(ppuVar5);
            func_0x00010c0df840(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            _objc_release(puVar9);
          }
        }
        else {
          puVar8 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar8 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
          }
          func_0x00010befa120(puVar8);
          ppuVar22 = ppuVar6;
        }
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(ppuVar22);
        _objc_release(ppuVar5);
        _objc_release(ppuVar1);
        lVar20 = lVar20 + 1;
      } while (lStack_528 != lVar20);
      lStack_528 = param_3;
      func_0x00010bf52a60();
    } while (lStack_528 != 0);
  }
  _objc_release(param_3);
  _objc_retain(puVar2);
  if (lRam00000001137fbb48 != -1) {
    func_0x000107c27d9c(0x1137fbb48,&PTR___NSConcreteGlobalBlock_110d62138);
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010bf4b900();
  if ((int)puVar9 != 0) {
    func_0x00010befa160(puVar7);
  }
  puVar9 = puVar2;
  func_0x00010bf4b900();
  if ((int)puVar9 != 0) {
    func_0x00010befa160(puVar7);
  }
  puVar9 = puVar2;
  func_0x00010bf4b900();
  if ((int)puVar9 != 0) {
    func_0x00010befa160(puVar7);
  }
  puVar9 = puVar2;
  func_0x00010bf4b900();
  if ((int)puVar9 != 0) {
    func_0x00010befa160(puVar7);
  }
  puVar9 = puVar2;
  func_0x00010bf4b900();
  if ((int)puVar9 != 0) {
    func_0x00010befa160(puVar7);
  }
  puVar9 = puVar2;
  func_0x00010bf4b900();
  if ((int)puVar9 != 0) {
    func_0x00010befa160(puVar7);
  }
  puVar9 = puVar2;
  func_0x00010bf4b900();
  if ((int)puVar9 != 0) {
    func_0x00010befa160(puVar7);
  }
  puVar9 = puVar2;
  func_0x00010bf4b900();
  if ((int)puVar9 != 0) {
    func_0x00010befa160(puVar7);
  }
  puVar10 = puVar7;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar9 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010bf529e0(puVar10);
  func_0x00010c0ecd60(puVar9);
  _objc_retainAutoreleasedReturnValue();
  lStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  plStack_3a0 = (long *)0x0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  _objc_retain(puVar10);
  puVar11 = puVar10;
  func_0x00010bf52a60();
  if (puVar11 != (undefined *)0x0) {
    lVar17 = *plStack_3a0;
    do {
      puVar26 = (undefined *)0x0;
      do {
        if (*plStack_3a0 != lVar17) {
          _objc_enumerationMutation(puVar10);
        }
        uVar12 = *(undefined8 *)(lStack_3a8 + (long)puVar26 * 8);
        func_0x00010c25ce60(uVar12);
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar12;
        func_0x00010c25ce60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        func_0x00010befa120(puVar9);
        _objc_release(uVar21);
        puVar26 = puVar26 + 1;
      } while (puVar11 != puVar26);
      puVar11 = puVar10;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined *)0x0);
  }
  _objc_release(puVar10);
  puVar11 = puVar9;
  func_0x00010bf09f00(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar11;
  func_0x00010c0d3c80();
  puVar24 = puVar26;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar26);
  _objc_release(puVar11);
  puVar11 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  func_0x00010c0ecd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar24);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar8 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar25 = puVar3;
  func_0x00010bf002e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  puVar19 = puVar4;
  func_0x00010bf002e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar25);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar25 = puVar3;
  func_0x00010bf002e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  puVar19 = puVar4;
  func_0x00010bf002e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar25);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar25 = puVar3;
  func_0x00010bf002e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  puVar19 = puVar4;
  func_0x00010bf002e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar25);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar25 = puVar3;
  func_0x00010bf002e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar25);
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  _objc_retain(param_4);
  lVar17 = param_4;
  func_0x00010bf52a60();
  if (lVar17 != 0) {
    lVar20 = *plStack_430;
    do {
      lVar23 = 0;
      do {
        if (*plStack_430 != lVar20) {
          _objc_enumerationMutation(param_4);
        }
        puVar19 = *(undefined8 **)(lStack_438 + lVar23 * 8);
        puVar25 = puVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar25 != (undefined8 *)0x0) goto SUB_10b805764;
        _objc_release(0);
        lVar23 = lVar23 + 1;
      } while (lVar17 != lVar23);
      lVar17 = param_4;
      func_0x00010bf52a60();
    } while (lVar17 != 0);
  }
  _objc_release(param_4);
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  lStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  plStack_470 = (long *)0x0;
  _objc_retain(puVar11);
  puVar26 = puVar11;
  func_0x00010bf52a60();
  if (puVar26 != (undefined *)0x0) {
    lVar17 = *plStack_470;
    do {
      puVar24 = (undefined *)0x0;
      do {
        if (*plStack_470 != lVar17) {
          _objc_enumerationMutation(puVar11);
        }
        puVar19 = *(undefined8 **)(lStack_478 + (long)puVar24 * 8);
        puVar25 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar25 != (undefined8 *)0x0) goto SUB_10b805764;
        func_0x00010c1d04c0(puVar9);
        _objc_release(0);
        puVar24 = puVar24 + 1;
      } while (puVar26 != puVar24);
      puVar26 = puVar11;
      func_0x00010bf52a60();
    } while (puVar26 != (undefined *)0x0);
  }
  _objc_release(puVar11);
  puVar26 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar4;
  func_0x00010bf002e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar26);
  _objc_release(puVar25);
  puVar24 = puVar11;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar26);
  _objc_release(puVar24);
  puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  plStack_4b0 = (long *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  puVar19 = puVar3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = &uStack_4c0;
  puVar13 = auStack_2f0;
  puVar16 = (undefined *)0x10;
  puVar18 = puVar19;
  func_0x00010bf52a60();
  if (puVar18 != (undefined8 *)0x0) {
    lVar17 = *plStack_4b0;
    do {
      puVar25 = (undefined8 *)0x0;
      do {
        if (*plStack_4b0 != lVar17) {
          _objc_enumerationMutation(puVar19);
        }
        puVar16 = puVar26;
        func_0x00010bf4b900();
        if (((ulong)puVar16 & 1) == 0) {
          puVar13 = puVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar24);
          _objc_release(puVar13);
        }
        puVar25 = (undefined8 *)((long)puVar25 + 1);
      } while (puVar18 != puVar25);
      puVar25 = &uStack_4c0;
      puVar13 = auStack_2f0;
      puVar16 = (undefined *)0x10;
      puVar18 = puVar19;
      func_0x00010bf52a60();
    } while (puVar18 != (undefined8 *)0x0);
  }
  _objc_release(puVar19);
  puVar14 = puVar24;
  func_0x00010bf529e0();
  if (puVar14 != (undefined *)0x0) {
    func_0x00010c246c00(puVar24);
    puVar19 = (undefined8 *)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    lStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4e8 = 0;
    plStack_4f0 = (long *)0x0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    _objc_retain(puVar24);
    puVar13 = auStack_370;
    puVar16 = (undefined *)0x10;
    puVar14 = puVar24;
    func_0x00010bf52a60();
    if (puVar14 != (undefined *)0x0) {
      lVar17 = *plStack_4f0;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_4f0 != lVar17) {
            _objc_enumerationMutation(puVar24);
          }
          uVar21 = *(undefined8 *)(lStack_4f8 + (long)puVar16 * 8);
          func_0x00010bf96da0(uVar21);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar19);
          _objc_release(uVar21);
          puVar16 = puVar16 + 1;
        } while (puVar14 != puVar16);
        puVar13 = auStack_370;
        puVar16 = (undefined *)0x10;
        puVar14 = puVar24;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release(puVar24);
    puVar15 = puVar26;
    func_0x00010c0d3c80();
    func_0x00010befa120();
    func_0x00010befa120(puVar8);
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(puVar15);
    func_0x00010c0df840(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(puVar8);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar9);
    _objc_release(puVar14);
    puVar25 = puVar19;
    func_0x00010befa120(puVar10);
    _objc_release(puVar26);
    _objc_release(puVar19);
    puVar26 = puVar15;
  }
  puStack_508 = PTR_PTR_11270b1c8;
  puVar18 = &uStack_510;
  puVar19 = (undefined8 *)PTR_s_init_1125d9248;
  uStack_510 = param_1;
  _objc_msgSendSuper2();
  if (puVar18 != (undefined8 *)0x0) {
    _objc_retain(puVar26);
    uVar21 = puVar18[4];
    puVar18[4] = puVar26;
    _objc_release(uVar21);
    _objc_retain(puVar10);
    uVar21 = puVar18[3];
    puVar18[3] = puVar10;
    _objc_release(uVar21);
    _objc_retain(puVar7);
    uVar21 = puVar18[1];
    puVar18[1] = puVar7;
    _objc_release(uVar21);
    _objc_retain(puVar9);
    uVar21 = puVar18[2];
    puVar18[2] = puVar9;
    _objc_release(uVar21);
    puVar14 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    puVar25 = puVar8;
    func_0x00010c0ecd40();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = puVar18[5];
    puVar18[5] = puVar14;
    _objc_release(uVar21);
  }
  _objc_release(puVar24);
  _objc_release(puVar26);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar18;
  }
  ___stack_chk_fail();
  puVar8 = puVar13;
  puVar10 = puVar16;
  puVar7 = param_6;
  puVar9 = param_7;
SUB_10b805764:
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar19;
  _objc_retain(puVar19);
  _objc_retain(puVar25);
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  _objc_retain(puVar7);
  _objc_retain(puVar9);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(puVar8);
  func_0x00010c0df840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0(puVar9);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar7);
  _objc_release(puVar2);
  func_0x00010befa120(puVar8);
  puVar13 = puVar25;
  func_0x00010c0d3c80();
  func_0x00010c246c00();
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar13);
  puVar3 = puVar13;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (puVar3 != (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(puVar13);
      }
      uVar21 = *(undefined8 *)((long)puVar18 * 8);
      func_0x00010bf96da0(uVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar21);
      puVar18 = (undefined8 *)((long)puVar18 + 1);
    } while (puVar3 != puVar18);
    puVar3 = puVar13;
    func_0x00010bf52a60();
  }
  _objc_release(puVar13);
  puVar11 = puVar2;
  func_0x00010befa120(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar13);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar25);
  _objc_release(puVar19);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return puVar19;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  func_0x00010c25cd40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c246b80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar11;
  func_0x00010c25cd40(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar7 = puVar2;
  func_0x00010c246b80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010c09e740(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar4);
  return puVar8;
}



/* Entry: 10b8059cc; end: 10b805a8b;  */

undefined8 FUN_10b8059cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010c25cd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c246b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c25cd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c246b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c09e740(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 10b805a8c; end: 10b805aaf; -[SIGSortedIndex copyWithZone:] */

undefined8 FUN_10b805a8c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b805ab0; end: 10b805adb; -[SIGSortedIndex sortedEntitiesInGroup:] */

void FUN_10b805ab0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfecde0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c246dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_sortedEntitiesInGroupAtSparseInd_11266f598,uVar1);
  return;
}



/* Entry: 10b805adc; end: 10b805ae3; -[SIGSortedIndex sortedEntitiesInGroupAtSparseIndex:] */

void FUN_10b805adc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_objectAtIndexedSubscript__112615968);
  return;
}



/* Entry: 10b805ae4; end: 10b805b23; -[SIGSortedIndex indexOfContiguousGroupForSparseGroupAtIndex:] */

undefined8 FUN_10b805ae4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2827c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10b805b24; end: 10b805b4f; -[SIGSortedIndex indexOfNearestSparseGroupForContiguousGroup:] */

void FUN_10b805b24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfecde0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bfecdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_indexOfNearestSparseGroupForCont_1125d8d38,uVar1);
  return;
}



/* Entry: 10b805b50; end: 10b805b73; -[SIGSortedIndex indexPathOfNearestSparseGroupForContiguousGroupAtIndex:] */

void FUN_10b805b50(undefined8 param_1)

{
  func_0x00010bfecdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bfed070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSIndexPath_1126b0990,PTR_s_indexPathForRow_inSection__1125d8de0,0,
             param_1);
  return;
}



/* Entry: 10b805b74; end: 10b805cf3; -[SIGSortedIndex indexOfNearestSparseGroupForContiguousGroupAtIndex:] */

long FUN_10b805b74(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c2827c0();
  _objc_release(lVar3);
  if (lVar7 == -1) {
    uVar6 = param_3;
    if ((long)param_3 < 1) {
      bVar2 = true;
    }
    else {
      do {
        lVar3 = *(long *)(param_1 + 0x10);
        func_0x00010c0dfd40(lVar3,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar3;
        func_0x00010c2827c0();
        _objc_release(lVar3);
        bVar2 = lVar7 == -1;
        if (!bVar2) goto LAB_10b805c20;
        uVar4 = uVar6 - 1;
        bVar1 = 0 < (long)uVar6;
        uVar6 = uVar4;
      } while (uVar4 != 0 && bVar1);
      uVar6 = 0;
    }
LAB_10b805c20:
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (param_3 < uVar4) {
      uVar8 = 0;
      uVar4 = param_3;
      do {
        lVar3 = *(long *)(param_1 + 0x10);
        func_0x00010c0dfd40(lVar3,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar3;
        func_0x00010c2827c0();
        _objc_release(lVar3);
        if (lVar7 != -1) {
          if (bVar2) {
            lVar3 = *(long *)(param_1 + 0x10);
            goto LAB_10b805cb8;
          }
          lVar3 = *(long *)(param_1 + 0x10);
          if (uVar8 < param_3 - uVar6) goto LAB_10b805cb8;
          goto LAB_10b805c90;
        }
        uVar4 = uVar4 + 1;
        uVar5 = *(ulong *)(param_1 + 0x20);
        func_0x00010bf529e0();
        uVar8 = uVar8 + 1;
      } while (uVar4 < uVar5);
    }
    if (bVar2) {
      lVar7 = -1;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x10);
LAB_10b805c90:
      uVar4 = uVar6;
LAB_10b805cb8:
      func_0x00010c0dfd40(lVar3,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010c2827c0();
      _objc_release(lVar3);
    }
  }
  return lVar7;
}



/* Entry: 10b805cf4; end: 10b805cfb; -[SIGSortedIndex contiguousGroups] */

undefined8 FUN_10b805cf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b805cfc; end: 10b805d03; -[SIGSortedIndex sparseGroups] */

undefined8 FUN_10b805cfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b805d04; end: 10b805d57; -[SIGSortedIndex .cxx_destruct] */

void FUN_10b805d04(long param_1)

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



/* Entry: 10b805d58; end: 10b805d5b;  */

void FUN_10b805d58(void)

{
  return;
}



/* Entry: 10b805d5c; end: 10b805e03; -[SIGSortedIndexEntityTuple initWithEntity:taggedString:] */

undefined1 *
FUN_10b805d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_11270b1d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b805e04; end: 10b805e0b; -[SIGSortedIndexEntityTuple entity] */

undefined8 FUN_10b805e04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b805e0c; end: 10b805e13; -[SIGSortedIndexEntityTuple string] */

undefined8 FUN_10b805e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b805e14; end: 10b805ee7; -[SIGSortedIndexEntityTuple .cxx_destruct] */

void FUN_10b805e14(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b805ee8; end: 10b805eef;  */

void FUN_10b805ee8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09e750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_localizedStandardCompare__1126053e0);
  return;
}



/* Entry: 10b805ef0; end: 10b805faf;  */

undefined8 FUN_10b805ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010c25cd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c246b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c25cd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c246b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c09e740(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 10b805fb0; end: 10b806027; -[SIGNotificationCancelablePresenter initWithPresenter:] */

undefined1 * FUN_10b805fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270b1d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b806028; end: 10b806033; -[SIGNotificationCancelablePresenter cancel] */

void FUN_10b806028(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 10b806034; end: 10b8060b3; -[SIGNotificationCancelablePresenter presentNotificationOverView:completion:] */

void FUN_10b806034(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 8) == '\x01') {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    func_0x00010c10d3a0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b8060b4; end: 10b8060bb; -[SIGNotificationCancelablePresenter containerView] */

void FUN_10b8060b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_containerView_1125b0650);
  return;
}



/* Entry: 10b8060bc; end: 10b8060c3; -[SIGNotificationCancelablePresenter debugInfo] */

void FUN_10b8060bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf66210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_debugInfo_1125b7228);
  return;
}



/* Entry: 10b8060c4; end: 10b8060cf; -[SIGNotificationCancelablePresenter .cxx_destruct] */

void FUN_10b8060c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b8060d0; end: 10b806123; +[SIGNotificationDismissablePresenter createAffirmativePresenterWithText:accessibilityIdentifier:maxPresentationDurationSecs:presentationDismissalObservable:] */

void FUN_10b8060d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e1598;
  func_0x00010bf54780(PTR_PTR_1126e1598);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ce6b0;
  _objc_alloc(PTR_PTR_1126ce6b0);
  func_0x00010c03a360();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b806124; end: 10b806197; -[SIGNotificationDismissablePresenter initWithPrivatePresenter:] */

undefined1 * FUN_10b806124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270b1e0;
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



/* Entry: 10b806198; end: 10b80619f; -[SIGNotificationDismissablePresenter containerView] */

void FUN_10b806198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_containerView_1125b0650)
  ;
  return;
}



/* Entry: 10b8061a0; end: 10b8061a7; -[SIGNotificationDismissablePresenter presentNotificationOverView:completion:] */

void FUN_10b8061a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10d3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_presentNotificationOverView_comp_112620f08);
  return;
}



/* Entry: 10b8061a8; end: 10b8061af; -[SIGNotificationDismissablePresenter debugInfo] */

void FUN_10b8061a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf66210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_debugInfo_1125b7228);
  return;
}



/* Entry: 10b8061b0; end: 10b8061bb; -[SIGNotificationDismissablePresenter .cxx_destruct] */

void FUN_10b8061b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b8061bc; end: 10b8061ff; -[SIGNotificationDismissablePresenterPrivateStates init] */

void FUN_10b8061bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_11270b1e8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10b806200; end: 10b806233; -[SIGNotificationDismissablePresenterPrivateStates presentationState] */

undefined8 FUN_10b806200(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _os_unfair_lock_unlock(param_1 + 8);
  return uVar1;
}



/* Entry: 10b806234; end: 10b806263; -[SIGNotificationDismissablePresenterPrivateStates setPresentationState:] */

void FUN_10b806234(long param_1,undefined8 param_2,undefined8 param_3)

{
  _os_unfair_lock_lock(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 10b806264; end: 10b806297; -[SIGNotificationDismissablePresenterPrivateStates dismissalRequested] */

undefined1 FUN_10b806264(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  _os_unfair_lock_unlock(param_1 + 8);
  return uVar1;
}



/* Entry: 10b806298; end: 10b8062c7; -[SIGNotificationDismissablePresenterPrivateStates setDismissalRequested:] */

void FUN_10b806298(long param_1,undefined8 param_2,undefined1 param_3)

{
  _os_unfair_lock_lock(param_1 + 8);
  *(undefined1 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 10b8062c8; end: 10b80635f; +[SIGNotificationDismissablePresenterPrivate createAffirmativePresenterWithText:accessibilityIdentifier:maxPresentationDurationSecs:presentationDismissalObservable:] */

void FUN_10b8062c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1598;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c0561a0(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b806360; end: 10b8065cb; -[SIGNotificationDismissablePresenterPrivate initWithType:text:accessibilityIdentifier:maxPresentationDurationSecs:presentationDismissalObservable:] */

undefined8 *
FUN_10b806360(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_11270b1f0;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_4;
    uVar8 = param_5;
    func_0x00010bf51e00();
    uVar7 = puVar1[2];
    puVar1[2] = uVar8;
    _objc_release(uVar7);
    uVar8 = param_6;
    func_0x00010bf51e00();
    uVar7 = puVar1[3];
    puVar1[3] = uVar8;
    _objc_release(uVar7);
    if (param_1 <= 0.0) {
      param_1 = 3.0;
    }
    puVar1[5] = param_1;
    puVar2 = PTR_PTR_1126e15a0;
    _objc_opt_new();
    uVar8 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    _objc_release(uVar8);
    if (param_7 != 0) {
      puVar2 = PTR_PTR_1126ae810;
      _objc_opt_new();
      uVar8 = puVar1[10];
      puVar1[10] = puVar2;
      _objc_release(uVar8);
      puVar3 = auStack_88;
      _objc_initWeak(puVar3,puVar1);
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_7;
      func_0x00010c0e0ea0(param_7);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_90,auStack_88);
      lVar5 = lVar4;
      func_0x00010c25ff60(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_88);
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    _objc_release(uVar8);
    _objc_release(puVar6);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}


