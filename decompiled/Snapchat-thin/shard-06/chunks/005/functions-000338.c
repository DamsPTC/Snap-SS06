/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10498b294; end: 10498b29f; +[FBSDKURL appLinkTargetFactory] */

void FUN_10498b294(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d540);
  return;
}



/* Entry: 10498b2a0; end: 10498b2af; +[FBSDKURL setAppLinkTargetFactory:] */

void FUN_10498b2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d540,param_3);
  return;
}



/* Entry: 10498b2b0; end: 10498b2bb; +[FBSDKURL appLinkEventPoster] */

void FUN_10498b2b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d548);
  return;
}



/* Entry: 10498b2bc; end: 10498b2cb; +[FBSDKURL setAppLinkEventPoster:] */

void FUN_10498b2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d548,param_3);
  return;
}



/* Entry: 10498b2cc; end: 10498ba1b; -[FBSDKURL initWithURL:forOpenInboundURL:sourceApplication:forRenderBackToReferrerBar:] */

undefined8 *
FUN_10498b2cc(undefined8 param_1,undefined8 param_2,undefined **param_3,int param_4,long param_5)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_3;
  ppuVar19 = param_3;
  _objc_retain();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e3480;
  puVar2 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeStrong(puVar2 + 6,param_3);
    _objc_storeStrong(puVar2 + 1,param_3);
    ppuVar3 = (undefined **)PTR_PTR_1126adfc0;
    func_0x00010c11d6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(puVar2 + 7,ppuVar3);
    _objc_storeStrong(puVar2 + 2,ppuVar3);
    ppuVar19 = &PTR____CFConstantStringClassReference_110da20f8;
    ppuVar4 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = (undefined **)PTR_PTR_1126add78;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar5 = ppuVar4;
      func_0x00010bf64920(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar5;
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = 0;
      _objc_retain();
      _objc_release(ppuVar5);
      if (lVar7 == 0) {
        ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        ppuVar5 = ppuVar6;
        func_0x00010c075f00();
        if ((int)ppuVar5 != 0) {
          ppuVar19 = ppuVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = &PTR____CFConstantStringClassReference_110dc0598;
          if (ppuVar19 != (undefined **)0x0) {
            ppuVar5 = ppuVar19;
          }
          _objc_retain();
          _objc_release(ppuVar19);
          ppuVar8 = ppuVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
          ppuVar9 = ppuVar5;
          func_0x00010c075f00();
          if ((int)ppuVar9 != 0) {
            ppuVar19 = &PTR____CFConstantStringClassReference_110dc0598;
            ppuVar9 = ppuVar5;
            func_0x00010c071ae0();
            if ((int)ppuVar9 != 0) {
              _objc_storeStrong(puVar2 + 3,ppuVar6);
              ppuVar9 = ppuVar6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if (ppuVar9 != (undefined **)0x0) {
                func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                ppuVar19 = ppuVar9;
                func_0x00010c075f00();
                if ((int)ppuVar19 != 0) {
                  _objc_storeStrong(puVar2 + 4,ppuVar9);
                }
              }
              func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
              ppuVar19 = ppuVar8;
              func_0x00010c075f00();
              if ((int)ppuVar19 != 0) {
                puVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
                func_0x00010bdc3460();
                _objc_retainAutoreleasedReturnValue();
                if (puVar10 != (undefined *)0x0) {
                  _objc_storeStrong(puVar2 + 1,puVar10);
                }
                _objc_release(puVar10);
              }
              puVar10 = PTR_PTR_1126adfc0;
              func_0x00010c11d6c0();
              _objc_retainAutoreleasedReturnValue();
              uVar20 = puVar2[2];
              puVar2[2] = puVar10;
              _objc_release(uVar20);
              lVar11 = puVar2[3];
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar12 = lVar11;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar13 = lVar11;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if ((lVar12 != 0) && (lVar13 != 0)) {
                puVar14 = puVar2;
                func_0x00010bf39c40();
                func_0x00010bf05980();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
                func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
                _objc_retainAutoreleasedReturnValue();
                puVar15 = puVar14;
                func_0x00010bf548e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar10);
                _objc_release(puVar14);
                puVar14 = puVar2;
                func_0x00010bf39c40();
                func_0x00010bf05940();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
                func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
                _objc_retainAutoreleasedReturnValue();
                puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_70 = puVar15;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                _objc_retainAutoreleasedReturnValue();
                puVar17 = puVar14;
                func_0x00010bf54920();
                _objc_retainAutoreleasedReturnValue();
                uVar20 = puVar2[5];
                puVar2[5] = puVar17;
                _objc_release(uVar20);
                _objc_release(puVar16);
                _objc_release(puVar10);
                _objc_release(puVar14);
                _objc_release(puVar15);
              }
              puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
              func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
              func_0x00010bf71e80(PTR_PTR_1126add78);
              if (lVar12 != 0) {
                func_0x00010bf71e80(PTR_PTR_1126add78);
              }
              if (lVar13 != 0) {
                func_0x00010bf71e80(PTR_PTR_1126add78);
              }
              if (param_5 != 0) {
                func_0x00010bf71e80(PTR_PTR_1126add78);
              }
              lVar18 = puVar2[1];
              func_0x00010beec820();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              puVar16 = PTR_PTR_1126add78;
              if (lVar18 != 0) {
                uVar20 = puVar2[1];
                func_0x00010beec820(uVar20);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf71e80(puVar16);
                _objc_release(uVar20);
              }
              lVar18 = puVar2[6];
              func_0x00010beec820();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              puVar16 = PTR_PTR_1126add78;
              if (lVar18 != 0) {
                uVar20 = puVar2[6];
                func_0x00010beec820(uVar20);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf71e80(puVar16);
                _objc_release(uVar20);
              }
              lVar18 = puVar2[6];
              func_0x00010c1504a0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              puVar16 = PTR_PTR_1126add78;
              if (lVar18 != 0) {
                uVar20 = puVar2[6];
                func_0x00010c1504a0(uVar20);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf71e80(puVar16);
                _objc_release(uVar20);
              }
              func_0x00010bf71e80(PTR_PTR_1126add78);
              func_0x00010bf71e80(PTR_PTR_1126add78);
              puVar14 = puVar2;
              func_0x00010bf39c40(puVar2);
              func_0x00010bf05900();
              _objc_retainAutoreleasedReturnValue();
              ppuVar19 = &PTR____CFConstantStringClassReference_110da4f78;
              func_0x00010c104960();
              _objc_release(puVar14);
              if (param_4 != 0) {
                puVar14 = puVar2;
                func_0x00010bf39c40(puVar2);
                func_0x00010bf05900();
                _objc_retainAutoreleasedReturnValue();
                ppuVar19 = &PTR____CFConstantStringClassReference_110da4f18;
                func_0x00010c104960();
                _objc_release(puVar14);
              }
              _objc_release(puVar10);
              _objc_release(lVar13);
              _objc_release(lVar12);
              _objc_release(lVar11);
              _objc_release(ppuVar9);
            }
          }
          _objc_release(ppuVar8);
          _objc_release(ppuVar5);
        }
      }
      _objc_release(ppuVar6);
      _objc_release(lVar7);
    }
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  _objc_release(param_5);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = (undefined8 *)PTR_PTR_1126adfc0;
  _objc_retain(ppuVar19);
  _objc_alloc(puVar2);
  func_0x00010c057a40();
  _objc_release(ppuVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 10498ba1c; end: 10498ba73; +[FBSDKURL URLWithURL:] */

void FUN_10498ba1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126adfc0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c057a40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10498ba74; end: 10498baeb; +[FBSDKURL URLWithInboundURL:sourceApplication:] */

void FUN_10498ba74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126adfc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c057a40();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10498baec; end: 10498bb43; +[FBSDKURL URLForRenderBackToReferrerBarURL:] */

void FUN_10498baec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126adfc0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c057a40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10498bb44; end: 10498bcbb; -[FBSDKURL isAutoAppLink] */

undefined * FUN_10498bb44(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  uVar2 = param_1;
  func_0x00010c26a220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c26a220(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = PTR_PTR_1126adfc0;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110dcdd18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar8);
  func_0x00010bf058e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(param_1);
  if ((int)uVar7 != 0) {
    iVar1 = 0x10da64d8;
    func_0x00010c071ae0(&PTR____CFConstantStringClassReference_110da64d8,param_2,uVar3);
    if (iVar1 != 0) {
      puVar8 = puVar6;
      func_0x00010c071ae0(puVar6,param_2,uVar4);
      goto LAB_10498bc88;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_10498bc88:
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return puVar8;
}



/* Entry: 10498bcbc; end: 10498bf83; +[FBSDKURL queryParametersForURL:] */

undefined * FUN_10498bcbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  if ((int)lVar3 == 0) {
    lVar3 = lVar2;
    func_0x00010bf44740(lVar2,param_2,&PTR____CFConstantStringClassReference_110df6378);
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar5 = lVar3;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar3);
          }
          lVar13 = *(long *)(lStack_128 + lVar11 * 8);
          lVar6 = lVar13;
          func_0x00010c11f420(lVar13,param_2,&PTR____CFConstantStringClassReference_110db9ab8);
          puVar9 = PTR_PTR_1126add78;
          puVar4 = PTR_PTR_1126add58;
          if (lVar6 == 0x7fffffffffffffff) {
            puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR_PTR_1126add58;
            func_0x00010bdc2e00(PTR_PTR_1126add58,param_2,lVar13);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar8;
            puVar14 = puVar4;
          }
          else {
            lVar7 = lVar13;
            func_0x00010c260c20(lVar13,param_2,lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc2e00(puVar4,param_2,lVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
            puVar8 = PTR_PTR_1126add58;
            func_0x00010c260c00(lVar13,param_2,lVar6 + 1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc2e00(puVar8,param_2,lVar13);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar13);
            puVar9 = PTR_PTR_1126add78;
            puVar12 = puVar4;
            puVar14 = puVar8;
          }
          func_0x00010bf71e80(puVar9,param_2,puVar1,puVar8,puVar4);
          _objc_release(puVar14);
          _objc_release(puVar12);
          lVar11 = lVar11 + 1;
        } while (lVar5 != lVar11);
        lVar5 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar5 != 0);
    }
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    puVar4 = *(undefined **)PTR____NSDictionary0___11034ab50;
    _objc_retain(puVar4);
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_3 + 8);
}



/* Entry: 10498bf84; end: 10498bf8b; -[FBSDKURL targetURL] */

undefined8 FUN_10498bf84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10498bf8c; end: 10498bf93; -[FBSDKURL targetQueryParameters] */

undefined8 FUN_10498bf8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10498bf94; end: 10498bf9b; -[FBSDKURL appLinkData] */

undefined8 FUN_10498bf94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10498bf9c; end: 10498bfa3; -[FBSDKURL appLinkExtras] */

undefined8 FUN_10498bf9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10498bfa4; end: 10498bfab; -[FBSDKURL appLinkReferer] */

undefined8 FUN_10498bfa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10498bfac; end: 10498bfb3; -[FBSDKURL inputURL] */

undefined8 FUN_10498bfac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10498bfb4; end: 10498bfbb; -[FBSDKURL inputQueryParameters] */

undefined8 FUN_10498bfb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10498bfbc; end: 10498c027; -[FBSDKURL .cxx_destruct] */

void FUN_10498bfbc(long param_1)

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



/* Entry: 10498c028; end: 10498c097; -[FBSDKURLSessionProxyFactory createSessionProxyWithDelegate:queue:] */

void FUN_10498c028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126add80;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00a6a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10498c098; end: 10498c0e7; +[FBSDKUnarchiverProvider _unarchiverFor:] */

void FUN_10498c098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bfeea60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10498c0e8; end: 10498c143; +[FBSDKUnarchiverProvider createSecureUnarchiverFor:] */

void FUN_10498c0e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126addf0;
  func_0x00010bed0e80(PTR_PTR_1126addf0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ec620();
  puVar2 = PTR_PTR_1126adfc8;
  _objc_alloc(PTR_PTR_1126adfc8);
  func_0x00010bfefa40();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10498c144; end: 10498c19f; +[FBSDKUnarchiverProvider createInsecureUnarchiverFor:] */

void FUN_10498c144(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126addf0;
  func_0x00010bed0e80(PTR_PTR_1126addf0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ec620();
  puVar2 = PTR_PTR_1126adfc8;
  _objc_alloc(PTR_PTR_1126adfc8);
  func_0x00010bfefa40();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10498c1a0; end: 10498c243; -[FBSDKUserAgeRange initMin:max:] */

undefined1 *
FUN_10498c1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar3 = &uStack_50;
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3488;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar3 + 8),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x10),param_4);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (undefined1 *)puVar3;
}



/* Entry: 10498c244; end: 10498c3a3; +[FBSDKUserAgeRange ageRangeFromDictionary:] */

void FUN_10498c244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar5 = PTR_PTR_1126add78;
  func_0x00010bf71fc0(PTR_PTR_1126add78,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126add78;
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    goto LAB_10498c388;
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da6538);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df6c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126add78;
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f22718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df6c0(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if ((puVar2 == (undefined *)0x0 && puVar3 == (undefined *)0x0) ||
     ((puVar2 != (undefined *)0x0 && (puVar5 = puVar2, func_0x00010c0b4fe0(), (long)puVar5 < 0)))) {
LAB_10498c30c:
    puVar5 = (undefined *)0x0;
  }
  else {
    if (puVar3 != (undefined *)0x0) {
      puVar5 = puVar3;
      func_0x00010c0b4fe0();
      if ((long)puVar5 < 0) goto LAB_10498c30c;
      if (puVar2 != (undefined *)0x0) {
        puVar5 = puVar2;
        func_0x00010c0b4fe0();
        puVar4 = puVar3;
        func_0x00010c0b4fe0();
        if ((long)puVar4 <= (long)puVar5) goto LAB_10498c30c;
      }
    }
    puVar5 = PTR_PTR_1126add68;
    _objc_alloc(PTR_PTR_1126add68);
    func_0x00010bfeef40();
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_10498c388:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10498c3a4; end: 10498c41f; -[FBSDKUserAgeRange hash] */

undefined8 * FUN_10498c3a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  puVar6 = (undefined8 *)PTR_PTR_1126addb0;
  uStack_30 = uVar2;
  func_0x00010bfdeb20();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain();
  if (puVar6 == puVar3) {
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar4 = PTR_PTR_1126add68;
    func_0x00010bf39c40(PTR_PTR_1126add68);
    puVar5 = puVar3;
    func_0x00010c075f00(puVar3,param_2,puVar4);
    if ((int)puVar5 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      func_0x00010c072140(puVar6,param_2,puVar3);
    }
  }
  _objc_release(puVar3);
  return puVar6;
}



/* Entry: 10498c420; end: 10498c497; -[FBSDKUserAgeRange isEqual:] */

long FUN_10498c420(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain();
  if (param_1 == param_3) {
    param_1 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126add68;
    func_0x00010bf39c40(PTR_PTR_1126add68);
    lVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)lVar2 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c072140(param_1,param_2,param_3);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10498c498; end: 10498c51f; -[FBSDKUserAgeRange isEqualToUserAgeRange:] */

bool FUN_10498c498(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = param_3;
  func_0x00010c0c1ce0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == lVar2) {
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = param_3;
    func_0x00010c0cd4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 == lVar4;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10498c520; end: 10498c523; -[FBSDKUserAgeRange copyWithZone:] */

void FUN_10498c520(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10498c524; end: 10498c52b; +[FBSDKUserAgeRange supportsSecureCoding] */

undefined8 FUN_10498c524(void)

{
  return 1;
}



/* Entry: 10498c52c; end: 10498c587; -[FBSDKUserAgeRange encodeWithCoder:] */

void FUN_10498c52c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110da6518);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10498c588; end: 10498c63f; -[FBSDKUserAgeRange initWithCoder:] */

undefined8 FUN_10498c588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010bf39c40(puVar1);
  uVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da64f8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da6518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfeef40(param_1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 10498c640; end: 10498c647; -[FBSDKUserAgeRange min] */

undefined8 FUN_10498c640(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10498c648; end: 10498c64f; -[FBSDKUserAgeRange max] */

undefined8 FUN_10498c648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10498c650; end: 10498c67f; -[FBSDKUserAgeRange .cxx_destruct] */

void FUN_10498c650(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10498c680; end: 10498c733; +[FBSDKUserDataStore initialize] */

void FUN_10498c680(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  
  pcVar2 = "com.facebook.appevents.UserDataStore";
  _dispatch_queue_create("com.facebook.appevents.UserDataStore",0);
  uVar1 = pcRam000000011369d550;
  pcRam000000011369d550 = pcVar2;
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126adfd0;
  func_0x00010c064b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011369d558;
  puRam000000011369d558 = puVar3;
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126adfd0;
  func_0x00010c064b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011369d560;
  puRam000000011369d560 = puVar3;
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c0d8420();
  uVar1 = puRam000000011369d568;
  puRam000000011369d568 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10498c734; end: 10498ccbf; -[FBSDKUserDataStore setUserEmail:firstName:lastName:phone:dateOfBirth:gender:city:state:zip:country:externalId:] */

void FUN_10498c734(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420();
  puVar1 = PTR_PTR_1126add78;
  if (param_3 != 0) {
    uVar3 = param_1;
    func_0x00010bf93880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1);
    _objc_release(uVar3);
  }
  puVar1 = PTR_PTR_1126add78;
  if (param_4 != 0) {
    uVar3 = param_1;
    func_0x00010bf93880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1);
    _objc_release(uVar3);
  }
  puVar1 = PTR_PTR_1126add78;
  if (param_5 != 0) {
    uVar3 = param_1;
    func_0x00010bf93880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1);
    _objc_release(uVar3);
  }
  puVar1 = PTR_PTR_1126add78;
  if (param_6 != 0) {
    uVar3 = param_1;
    func_0x00010bf93880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1);
    _objc_release(uVar3);
  }
  puVar1 = PTR_PTR_1126add78;
  if (param_7 != 0) {
    uVar3 = param_1;
    func_0x00010bf93880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1);
    _objc_release(uVar3);
  }
  puVar1 = PTR_PTR_1126add78;
  if (param_8 != 0) {
    uVar3 = param_1;
    func_0x00010bf93880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1);
    _objc_release(uVar3);
  }
  puVar1 = PTR_PTR_1126add78;
  if (param_9 != 0) {
    uVar3 = param_1;
    func_0x00010bf93880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1);
    _objc_release(uVar3);
  }
  puVar1 = PTR_PTR_1126add78;
  if (param_10 != 0) {
    uVar3 = param_1;
    func_0x00010bf93880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1);
    _objc_release(uVar3);
  }
  puVar1 = PTR_PTR_1126add78;
  if (param_11 != 0) {
    uVar3 = param_1;
    func_0x00010bf93880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1);
    _objc_release(uVar3);
  }
  puVar1 = PTR_PTR_1126add78;
  if (param_12 != 0) {
    uVar3 = param_1;
    func_0x00010bf93880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1);
    _objc_release(uVar3);
  }
  puVar1 = PTR_PTR_1126add78;
  if (param_13 != 0) {
    uVar3 = param_1;
    func_0x00010bf93880(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1);
    _objc_release(uVar3);
  }
  uVar3 = uRam000000011369d550;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10498ccc0;
  puStack_80 = &UNK_110841f80;
  puStack_78 = puVar2;
  uStack_70 = param_1;
  _objc_retain(puVar2);
  func_0x00010007380c(uVar3,&puStack_98);
  _objc_release(puStack_78);
  _objc_release(puVar2);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10498ccc0; end: 10498cd4f;  */

void FUN_10498ccc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d3c80();
  uVar3 = uRam000000011369d558;
  uRam000000011369d558 = uVar1;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25cee0(uVar3,param_2,uRam000000011369d558);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar2,param_2,uVar3,&PTR____CFConstantStringClassReference_110da6558);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10498cd50; end: 10498cdbb; -[FBSDKUserDataStore setUserData:forType:] */

void FUN_10498cd50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf93880(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7460(param_1,param_2,uVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10498cdbc; end: 10498cf0b; -[FBSDKUserDataStore setHashData:forType:] */

void FUN_10498cdbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = uRam000000011369d550;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10498ce68;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain();
  _objc_retain(param_4);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10498cf0c; end: 10498d04b; -[FBSDKUserDataStore setInternalHashData:forType:] */

void FUN_10498cf0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = uRam000000011369d550;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10498cfb8;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain();
  _objc_retain(param_4);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10498d04c; end: 10498d08b; -[FBSDKUserDataStore setEnabledRules:] */

void FUN_10498d04c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010befa160(uRam000000011369d568,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10498d08c; end: 10498d097; -[FBSDKUserDataStore clearUserDataForType:] */

void FUN_10498d08c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setUserData_forType__112665290,0,param_3);
  return;
}



/* Entry: 10498d098; end: 10498d09b; -[FBSDKUserDataStore getUserData] */

void FUN_10498d098(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc6290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getHashedData_1125cf248);
  return;
}



/* Entry: 10498d09c; end: 10498d153; -[FBSDKUserDataStore getHashedData] */

void FUN_10498d09c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
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
  pcStack_38 = FUN_10498d154;
  uStack_30 = 0x10498d164;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10498d16c;
  puStack_68 = &UNK_11084b9d0;
  uStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010006eaa4(uRam000000011369d550,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10498d154; end: 10498d16b;  */

void FUN_10498d154(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10498d16c; end: 10498d30f;  */

void FUN_10498d16c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010bef7f60();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar5 = lRam000000011369d568;
  _objc_retain();
  lVar2 = lVar5;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        lVar3 = lRam000000011369d560;
        func_0x00010c0e00e0(lRam000000011369d560,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          lVar3 = lRam000000011369d560;
          func_0x00010c0e00e0(lRam000000011369d560,param_2,uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1,param_2,lVar3,uVar6);
          _objc_release(lVar3);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25cee0(uVar6,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  _objc_release(uVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c21e3c0();
  return;
}



/* Entry: 10498d310; end: 10498d34f; -[FBSDKUserDataStore clearUserData] */

void FUN_10498d310(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c21e3c0(param_1,param_2,0,0,0,0,0,0,0,0,0,0,0);
  return;
}



/* Entry: 10498d350; end: 10498d41b; -[FBSDKUserDataStore getInternalHashedDataForType:] */

void FUN_10498d350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = uRam000000011369d550;
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10498d154;
  uStack_30 = 0x10498d164;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10498d41c;
  puStack_68 = &UNK_11084b9d0;
  uStack_60 = param_3;
  puStack_48 = puStack_58;
  _objc_retain(param_3);
  func_0x00010006eaa4(uVar1,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10498d41c; end: 10498d48f;  */

void FUN_10498d41c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = uRam000000011369d560;
  puVar2 = PTR_PTR_1126add78;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x00010bf71e60(puVar2,param_2,uVar3,uVar5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10498d490; end: 10498d567; +[FBSDKUserDataStore initializeUserData:] */

void FUN_10498d490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _objc_retain(param_3);
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126add78;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010bf64920(puVar2,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1900(puVar1,param_2,puVar3,1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar1 != (undefined *)0x0) goto LAB_10498d54c;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
LAB_10498d54c:
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10498d568; end: 10498d5e3; -[FBSDKUserDataStore stringByHashedData:] */

void FUN_10498d568(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR_PTR_1126add78;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10498d5e4; end: 10498d6af; -[FBSDKUserDataStore encryptData:type:] */

void FUN_10498d5e4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c08fa60();
  if ((puVar1 == (undefined *)0x0) ||
     (uVar2 = param_1, func_0x00010c0c3a40(param_1,param_2,param_3), puVar1 = PTR_PTR_1126add58,
     (int)uVar2 != 0)) {
    puVar1 = param_3;
    _objc_retain(param_3);
  }
  else {
    func_0x00010c0db400(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc25e0(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10498d6b0; end: 10498d98b; -[FBSDKUserDataStore normalizeData:type:] */

undefined **
FUN_10498d6b0(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dc03f8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110da1518;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110da1538;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e50898;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110ecc398;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110dae898;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_78,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf4b900(puVar2,param_2,param_4);
  if ((int)puVar1 == 0) {
    uVar3 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110da1558);
    if ((int)uVar3 == 0) {
      uVar3 = param_4;
      func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110da1598);
      if ((int)uVar3 == 0) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110fbe438;
        uVar3 = param_4;
        func_0x00010c0720c0();
        if ((int)uVar3 == 0) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
        }
        else {
          ppuVar6 = param_3;
          _objc_retain();
        }
        goto LAB_10498d8fc;
      }
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c2a4be0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_3;
      ppuVar7 = ppuVar6;
      func_0x00010c25d0a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      ppuVar5 = ppuVar4;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      ppuVar6 = ppuVar5;
      func_0x00010c08fa60();
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        ppuVar7 = (undefined **)0x1;
        ppuVar6 = ppuVar5;
        func_0x00010c260c20();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      uStack_80 = 0;
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
      func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                          &PTR____CFConstantStringClassReference_110e40518,1,&uStack_80);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(param_3);
      ppuVar6 = ppuVar5;
      ppuVar7 = param_3;
      func_0x00010c25cfa0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4be0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    ppuVar7 = ppuVar6;
    func_0x00010c25d0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    ppuVar6 = ppuVar5;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar5);
LAB_10498d8fc:
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
    return ppuVar6;
  }
  ___stack_chk_fail();
  _objc_retain();
  ppuVar6 = ppuVar7;
  func_0x00010c11f440();
  ppuVar5 = ppuVar7;
  func_0x00010c08fa60();
  _objc_release(ppuVar7);
  return (undefined **)
         (ulong)(ppuVar5 == (undefined **)0x40 && ppuVar6 != (undefined **)0x7fffffffffffffff);
}



/* Entry: 10498d98c; end: 10498d9ef; -[FBSDKUserDataStore maybeSHA256Hashed:] */

bool FUN_10498d98c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c11f440();
  lVar2 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  return lVar2 == 0x40 && lVar1 != 0x7fffffffffffffff;
}



/* Entry: 10498d9f0; end: 10498d9fb; +[FBSDKUtility dictionaryWithQueryString:] */

void FUN_10498d9f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126add58,PTR_s_dictionaryWithQueryString__1125ba1d8);
  return;
}



/* Entry: 10498d9fc; end: 10498da0b; +[FBSDKUtility queryStringWithDictionary:error:] */

void FUN_10498d9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126add58,PTR_s_queryStringWithDictionary_error__112625098,param_3,param_4,0);
  return;
}



/* Entry: 10498da0c; end: 10498da17; +[FBSDKUtility URLDecode:] */

void FUN_10498da0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc2e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126add58,PTR_s_URLDecode__11254e520);
  return;
}



/* Entry: 10498da18; end: 10498da23; +[FBSDKUtility URLEncode:] */

void FUN_10498da18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc2e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126add58,PTR_s_URLEncode__11254e528);
  return;
}



/* Entry: 10498da24; end: 10498dabf; +[FBSDKUtility startGCDTimerWithInterval:block:] */

void FUN_10498da24(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create
            (PTR___dispatch_source_type_timer_11034be38,0,0,PTR___dispatch_main_q_11034be20);
  uVar2 = 0;
  _dispatch_time(0,(long)(param_1 * 1000000000.0));
  _dispatch_source_set_timer(puVar1,uVar2,(long)(param_1 * 1000000000.0),0);
  _dispatch_source_set_event_handler(puVar1,param_4);
  _objc_release(param_4);
  _dispatch_resume(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10498dac0; end: 10498dacf; +[FBSDKUtility stopGCDTimer:] */

void FUN_10498dac0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_source_cancel_11034c160)(param_3);
    return;
  }
  return;
}



/* Entry: 10498dad0; end: 10498dadb; +[FBSDKUtility SHA256Hash:] */

void FUN_10498dad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc25f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126add58,PTR_s_SHA256Hash__11254e318);
  return;
}



/* Entry: 10498dadc; end: 10498db27; +[FBSDKUtility getGraphDomainFromToken] */

void FUN_10498dadc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126a5d98;
  func_0x00010bf5e0e0(PTR_PTR_1126a5d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfcdd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10498db28; end: 10498dbdf; +[FBSDKUtility unversionedFacebookURLWithHostPrefix:path:queryParameters:error:] */

void FUN_10498db28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126add20;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22c4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c282cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10498dbe0; end: 10498e50b; +[FBSDKViewHierarchy getChildren:] */

void FUN_10498dbe0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
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
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar9 = (undefined8 *)PTR__OBJC_CLASS___UIControl_1126c3e60;
  func_0x00010bf39c40();
  puVar2 = param_3;
  func_0x00010c075f00();
  if (((ulong)puVar2 & 1) == 0) {
    puVar14 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIWindow_1126c3e70);
    puVar9 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar3);
    puVar2 = param_3;
    puVar6 = param_3;
    if ((int)puVar9 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar9 = param_3;
      func_0x00010c075f00(param_3,param_2,puVar3);
      if ((int)puVar9 == 0) {
        puVar3 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
        func_0x00010bf39c40(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
        puVar9 = param_3;
        func_0x00010c075f00(param_3,param_2,puVar3);
        if ((int)puVar9 == 0) {
          puVar3 = PTR__OBJC_CLASS___UITabBarController_1126d5098;
          func_0x00010bf39c40(PTR__OBJC_CLASS___UITabBarController_1126d5098);
          puVar9 = param_3;
          func_0x00010c075f00(param_3,param_2,puVar3);
          if ((int)puVar9 == 0) {
            puVar9 = (undefined8 *)PTR__OBJC_CLASS___UIViewController_1126af898;
            func_0x00010bf39c40();
            func_0x00010c075f00();
            if ((int)puVar2 == 0) goto LAB_10498e1a4;
            _objc_retain();
            puVar9 = puVar6;
            func_0x00010c0834c0();
            puVar3 = PTR_PTR_1126ade58;
            if ((int)puVar9 != 0) {
              puVar9 = puVar6;
              func_0x00010c29bf00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfc3960(puVar3,param_2,puVar9);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar9);
              puVar11 = puVar3;
              func_0x00010bf529e0();
              if (puVar11 != (undefined *)0x0) {
                func_0x00010befa160(puVar14,param_2,puVar3);
              }
              _objc_release(puVar3);
            }
            uStack_408 = 0;
            uStack_410 = 0;
            uStack_3f8 = 0;
            uStack_400 = 0;
            lStack_428 = 0;
            uStack_430 = 0;
            uStack_418 = 0;
            plStack_420 = (long *)0x0;
            puVar2 = puVar6;
            func_0x00010bf38f00();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = &uStack_430;
            puVar7 = puVar2;
            func_0x00010bf52a60();
            if (puVar7 != (undefined8 *)0x0) {
              lVar8 = *plStack_420;
              do {
                puVar9 = (undefined8 *)0x0;
                do {
                  if (*plStack_420 != lVar8) {
                    _objc_enumerationMutation(puVar2);
                  }
                  func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar14,
                                      *(undefined8 *)(lStack_428 + (long)puVar9 * 8));
                  puVar9 = (undefined8 *)((long)puVar9 + 1);
                } while (puVar7 != puVar9);
                puVar9 = &uStack_430;
                puVar7 = puVar2;
                func_0x00010bf52a60();
              } while (puVar7 != (undefined8 *)0x0);
            }
            _objc_release(puVar2);
            puVar2 = puVar6;
            func_0x00010c10f940();
            _objc_retainAutoreleasedReturnValue();
            if (puVar2 != (undefined8 *)0x0) {
              puVar9 = puVar14;
              func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar14,puVar2);
            }
          }
          else {
            func_0x00010c15a480();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = (undefined8 *)PTR_PTR_1126ade58;
            puVar9 = param_3;
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfc3960(puVar2,param_2,puVar9);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            uStack_3c8 = 0;
            uStack_3d0 = 0;
            uStack_3b8 = 0;
            uStack_3c0 = 0;
            lStack_3e8 = 0;
            uStack_3f0 = 0;
            uStack_3d8 = 0;
            plStack_3e0 = (long *)0x0;
            _objc_retain();
            puVar9 = &uStack_3f0;
            puVar7 = puVar2;
            func_0x00010bf52a60();
            if (puVar7 != (undefined8 *)0x0) {
              lVar8 = *plStack_3e0;
              do {
                puVar9 = (undefined8 *)0x0;
                do {
                  if (*plStack_3e0 != lVar8) {
                    _objc_enumerationMutation(puVar2);
                  }
                  puVar13 = *(undefined8 **)(lStack_3e8 + (long)puVar9 * 8);
                  if (puVar6 != (undefined8 *)0x0) {
                    puVar10 = puVar6;
                    func_0x00010c29bf00(puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    uVar5 = param_1;
                    func_0x00010c083440(param_1,param_2,puVar13,puVar10);
                    _objc_release(puVar10);
                    if ((int)uVar5 == 0) {
                      puVar10 = puVar6;
                      func_0x00010c29bf00();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      if (puVar13 != puVar10) goto LAB_10498e33c;
                    }
                    puVar13 = puVar6;
                  }
LAB_10498e33c:
                  func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar14,puVar13);
                  puVar9 = (undefined8 *)((long)puVar9 + 1);
                } while (puVar7 != puVar9);
                puVar9 = &uStack_3f0;
                puVar7 = puVar2;
                func_0x00010bf52a60();
              } while (puVar7 != (undefined8 *)0x0);
            }
            _objc_release(puVar2);
            if ((puVar6 != (undefined8 *)0x0) &&
               (puVar7 = puVar14, puVar9 = puVar6, func_0x00010bf4b900(), ((ulong)puVar7 & 1) == 0))
            {
              puVar9 = puVar14;
              func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar14,puVar6);
            }
          }
        }
        else {
          func_0x00010c2a0180();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c275140();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126ade58;
          puVar9 = param_3;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfc3960(puVar3,param_2,puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          uStack_388 = 0;
          uStack_390 = 0;
          uStack_378 = 0;
          uStack_380 = 0;
          lStack_3a8 = 0;
          uStack_3b0 = 0;
          uStack_398 = 0;
          plStack_3a0 = (long *)0x0;
          _objc_retain();
          puVar9 = &uStack_3b0;
          puVar11 = puVar3;
          func_0x00010bf52a60();
          if (puVar11 != (undefined *)0x0) {
            lVar8 = *plStack_3a0;
            do {
              puVar12 = (undefined *)0x0;
              do {
                if (*plStack_3a0 != lVar8) {
                  _objc_enumerationMutation(puVar3);
                }
                puVar9 = *(undefined8 **)(lStack_3a8 + (long)puVar12 * 8);
                if (puVar2 == (undefined8 *)0x0) {
LAB_10498e034:
                  if (puVar6 != (undefined8 *)0x0) {
                    puVar7 = puVar6;
                    func_0x00010c29bf00(puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    uVar5 = param_1;
                    func_0x00010c083440(param_1,param_2,puVar9,puVar7);
                    _objc_release(puVar7);
                    puVar7 = puVar6;
                    if ((int)uVar5 != 0) goto LAB_10498e128;
                  }
                  puVar7 = puVar6;
                  func_0x00010c29bf00();
                  _objc_retainAutoreleasedReturnValue();
                  if (puVar9 == puVar7) {
                    _objc_release(puVar7);
                  }
                  else {
                    puVar13 = puVar2;
                    func_0x00010c29bf00();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    _objc_release(puVar7);
                    puVar7 = puVar9;
                    if (puVar9 != puVar13) goto LAB_10498e128;
                  }
                  if (puVar6 != (undefined8 *)0x0) {
                    puVar13 = puVar6;
                    func_0x00010c29bf00();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    puVar7 = puVar6;
                    if (puVar9 == puVar13) goto LAB_10498e128;
                  }
                  if (puVar2 != (undefined8 *)0x0) {
                    puVar13 = puVar2;
                    func_0x00010c29bf00();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    puVar7 = puVar2;
                    if (puVar9 == puVar13) goto LAB_10498e128;
                  }
                }
                else {
                  puVar7 = puVar2;
                  func_0x00010c29bf00(puVar2);
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = param_1;
                  func_0x00010c083440(param_1,param_2,puVar9,puVar7);
                  _objc_release(puVar7);
                  puVar7 = puVar2;
                  if ((int)uVar5 == 0) goto LAB_10498e034;
LAB_10498e128:
                  func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar14,puVar7);
                }
                puVar12 = puVar12 + 1;
              } while (puVar11 != puVar12);
              puVar9 = &uStack_3b0;
              puVar11 = puVar3;
              func_0x00010bf52a60();
            } while (puVar11 != (undefined *)0x0);
          }
          _objc_release(puVar3);
          if ((puVar6 != (undefined8 *)0x0) &&
             (puVar7 = puVar14, puVar9 = puVar6, func_0x00010bf4b900(), ((ulong)puVar7 & 1) == 0)) {
            puVar9 = puVar14;
            func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar14,puVar6);
          }
          _objc_release(puVar3);
        }
      }
      else {
        puVar9 = param_3;
        func_0x00010c261580();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar9;
        func_0x00010bf51e00();
        _objc_release(puVar9);
        uStack_348 = 0;
        uStack_350 = 0;
        uStack_338 = 0;
        uStack_340 = 0;
        lStack_368 = 0;
        uStack_370 = 0;
        uStack_358 = 0;
        plStack_360 = (long *)0x0;
        _objc_retain();
        puVar9 = &uStack_370;
        puVar7 = puVar6;
        func_0x00010bf52a60();
        puVar2 = puVar6;
        if (puVar7 != (undefined8 *)0x0) {
          lVar8 = *plStack_360;
          do {
            puVar9 = (undefined8 *)0x0;
            do {
              if (*plStack_360 != lVar8) {
                _objc_enumerationMutation(puVar6);
              }
              puVar11 = *(undefined **)(lStack_368 + (long)puVar9 * 8);
              puVar3 = PTR_PTR_1126ade58;
              func_0x00010bfc8880(PTR_PTR_1126ade58,param_2,puVar11);
              _objc_retainAutoreleasedReturnValue();
              if (puVar3 != (undefined *)0x0) {
                puVar12 = puVar3;
                func_0x00010c29bf00();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (puVar12 == puVar11) {
                  puVar11 = puVar3;
                }
              }
              func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar14,puVar11);
              _objc_release(puVar3);
              puVar9 = (undefined8 *)((long)puVar9 + 1);
            } while (puVar7 != puVar9);
            puVar9 = &uStack_370;
            puVar7 = puVar6;
            func_0x00010bf52a60();
          } while (puVar7 != (undefined8 *)0x0);
        }
      }
    }
    else {
      func_0x00010c1417c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      lStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      plStack_320 = (long *)0x0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      puVar9 = &uStack_330;
      puVar7 = puVar2;
      func_0x00010bf52a60();
      if (puVar7 != (undefined8 *)0x0) {
        lVar8 = *plStack_320;
        do {
          puVar9 = (undefined8 *)0x0;
          do {
            if (*plStack_320 != lVar8) {
              _objc_enumerationMutation(puVar2);
            }
            puVar10 = *(undefined8 **)(lStack_328 + (long)puVar9 * 8);
            puVar13 = puVar6;
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar10 == puVar13) {
              if (puVar6 != (undefined8 *)0x0) {
                func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar14,puVar6);
              }
            }
            else {
              puVar13 = (undefined8 *)PTR_PTR_1126ade58;
              func_0x00010bfc8880(PTR_PTR_1126ade58,param_2,puVar10);
              _objc_retainAutoreleasedReturnValue();
              if (puVar13 != (undefined8 *)0x0) {
                puVar4 = puVar13;
                func_0x00010c29bf00();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (puVar4 == puVar10) {
                  puVar10 = puVar13;
                }
              }
              func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar14,puVar10);
              _objc_release(puVar13);
            }
            puVar9 = (undefined8 *)((long)puVar9 + 1);
          } while (puVar7 != puVar9);
          puVar9 = &uStack_330;
          puVar7 = puVar2;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined8 *)0x0);
      }
    }
    _objc_release(puVar2);
    _objc_release(puVar6);
  }
  else {
    puVar14 = (undefined8 *)0x0;
  }
LAB_10498e1a4:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = puVar9;
  func_0x00010c075f00(puVar9,param_2,puVar3);
  if ((int)puVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIViewController_1126af898);
    puVar2 = puVar9;
    func_0x00010c075f00(puVar9,param_2,puVar3);
    if ((int)puVar2 != 0) {
      puVar2 = puVar9;
      _objc_retain();
      puVar6 = puVar2;
      func_0x00010c0f3ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar2;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010c267560();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      if (((puVar13 == (undefined8 *)0x0) && (puVar14 = puVar10, puVar10 == (undefined8 *)0x0)) &&
         (puVar14 = puVar6, puVar6 == (undefined8 *)0x0)) {
        if (puVar7 != (undefined8 *)0x0) {
          puVar4 = puVar7;
          func_0x00010c10f940();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar14 = puVar7;
          if (puVar4 == puVar2) goto LAB_10498e678;
        }
        puVar14 = (undefined8 *)PTR_PTR_1126ade58;
        puVar4 = puVar2;
        func_0x00010c29bf00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfc8820(puVar14,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        bVar1 = puVar14 == (undefined8 *)0x0;
        if (puVar14 != (undefined8 *)0x0) {
          _objc_retain(puVar14);
        }
        _objc_release(puVar14);
      }
      else {
LAB_10498e678:
        _objc_retain(puVar14);
        bVar1 = false;
      }
      _objc_release(puVar10);
      _objc_release(puVar13);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar2);
      if (!bVar1) goto LAB_10498e6b4;
    }
LAB_10498e6b0:
    puVar14 = (undefined8 *)0x0;
  }
  else {
    puVar2 = puVar9;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined8 *)PTR_PTR_1126ade58;
    func_0x00010bfc8880(PTR_PTR_1126ade58,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined8 *)0x0) {
LAB_10498e5a4:
      if ((puVar2 == (undefined8 *)0x0) || (puVar14 = puVar2, puVar2 == puVar9)) {
        _objc_release(puVar6);
        _objc_release(puVar2);
        goto LAB_10498e6b0;
      }
    }
    else {
      puVar7 = puVar6;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar14 = puVar6;
      if (puVar7 != puVar2) goto LAB_10498e5a4;
    }
    _objc_retain(puVar14);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
LAB_10498e6b4:
  _objc_release(puVar9);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10498e50c; end: 10498e75f; +[FBSDKViewHierarchy getParent:] */

void FUN_10498e50c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar8);
  if ((int)puVar2 == 0) {
    puVar8 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIViewController_1126af898);
    puVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar8);
    if ((int)puVar2 != 0) {
      puVar2 = param_3;
      _objc_retain();
      puVar3 = puVar2;
      func_0x00010c0f3ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c267560();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      if (((puVar5 == (undefined *)0x0) && (puVar8 = puVar6, puVar6 == (undefined *)0x0)) &&
         (puVar8 = puVar3, puVar3 == (undefined *)0x0)) {
        if (puVar4 != (undefined *)0x0) {
          puVar7 = puVar4;
          func_0x00010c10f940();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar8 = puVar4;
          if (puVar7 == puVar2) goto LAB_10498e678;
        }
        puVar8 = PTR_PTR_1126ade58;
        puVar7 = puVar2;
        func_0x00010c29bf00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfc8820(puVar8,param_2,puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        bVar1 = puVar8 == (undefined *)0x0;
        if (puVar8 != (undefined *)0x0) {
          _objc_retain(puVar8);
        }
        _objc_release(puVar8);
      }
      else {
LAB_10498e678:
        _objc_retain(puVar8);
        bVar1 = false;
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (!bVar1) goto LAB_10498e6b4;
    }
LAB_10498e6b0:
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar2 = param_3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ade58;
    func_0x00010bfc8880(PTR_PTR_1126ade58,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
LAB_10498e5a4:
      if ((puVar2 == (undefined *)0x0) || (puVar8 = puVar2, puVar2 == param_3)) {
        _objc_release(puVar3);
        _objc_release(puVar2);
        goto LAB_10498e6b0;
      }
    }
    else {
      puVar4 = puVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar8 = puVar3;
      if (puVar4 != puVar2) goto LAB_10498e5a4;
    }
    _objc_retain(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
LAB_10498e6b4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10498e760; end: 10498e76f; +[FBSDKViewHierarchy getPath:] */

void FUN_10498e760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc8950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ade58,PTR_s_getPath_limit__1125cfbf8,param_3,0x23);
  return;
}



/* Entry: 10498e770; end: 10498e8c3; +[FBSDKViewHierarchy getPath:limit:] */

void FUN_10498e770(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ade58;
  puVar5 = (undefined *)0x0;
  if ((param_3 != 0) && (0 < param_4)) {
    _objc_retain(param_3);
    func_0x00010bfc8820(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = PTR_PTR_1126ade58;
      func_0x00010bfc8940(PTR_PTR_1126ade58,param_2,puVar1,param_4 + -1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    puVar3 = PTR_PTR_1126ade58;
    func_0x00010bfc2960(PTR_PTR_1126ade58,param_2,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar4 = PTR_PTR_1126ade60;
    _objc_alloc(PTR_PTR_1126ade60);
    func_0x00010c020680();
    func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar2,puVar4);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10498e8c4; end: 10498ec2b; +[FBSDKViewHierarchy getAttributesOf:parent:] */

void FUN_10498e8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126add78;
  uVar2 = param_3;
  func_0x00010bf39c40(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar3,param_2,puVar1,uVar2,&PTR____CFConstantStringClassReference_110feb118);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ade58;
  func_0x00010c082760(PTR_PTR_1126ade58,param_2,param_3);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR_PTR_1126ade58;
    func_0x00010bfcb180(PTR_PTR_1126ade58,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0) {
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar1,puVar3,
                          &PTR____CFConstantStringClassReference_110dbf1d8);
    }
  }
  else {
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar1,
                        &PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110dbf1d8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110da65b8);
  }
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ade58;
  func_0x00010bfc6320(PTR_PTR_1126ade58,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if (puVar4 != (undefined *)0x0) {
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar1,puVar3,
                        &PTR____CFConstantStringClassReference_110e41778);
  }
  puVar5 = PTR_PTR_1126ade58;
  func_0x00010bfc6580(PTR_PTR_1126ade58,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR_PTR_1126add78;
  if (puVar5 != (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x00010c1554e0(puVar5);
    func_0x00010c0df780(puVar7,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar4,param_2,puVar1,puVar7,
                        &PTR____CFConstantStringClassReference_110e4c458);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar4 = PTR_PTR_1126add78;
    puVar6 = puVar5;
    func_0x00010c142240(puVar5);
    func_0x00010c0df780(puVar7,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar4,param_2,puVar1,puVar7,
                        &PTR____CFConstantStringClassReference_110da28d8);
    _objc_release(puVar7);
  }
  puVar4 = PTR_PTR_1126add78;
  if (param_4 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar4,param_2,puVar1,puVar7,
                        &PTR____CFConstantStringClassReference_110de1e58);
  }
  else {
    puVar7 = PTR_PTR_1126ade58;
    func_0x00010bfc3960(PTR_PTR_1126ade58,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bfecde0();
    puVar4 = PTR_PTR_1126add78;
    if (puVar6 != (undefined *)0x7fffffffffffffff) {
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar4,param_2,puVar1,puVar8,
                          &PTR____CFConstantStringClassReference_110de1e58);
      _objc_release(puVar8);
    }
  }
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR_PTR_1126add78;
  puVar6 = PTR_PTR_1126ade58;
  func_0x00010bfcb020(PTR_PTR_1126ade58,param_2,param_3);
  func_0x00010c0df780(puVar7,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar1,puVar7,&PTR____CFConstantStringClassReference_110e186d8)
  ;
  _objc_release(puVar7);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10498ec2c; end: 10498ec33; +[FBSDKViewHierarchy getDetailAttributesOf:] */

void FUN_10498ec2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc4b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_getDetailAttributesOf_withHash__1125cec80,param_3,1);
  return;
}



/* Entry: 10498ec34; end: 10498f09f; +[FBSDKViewHierarchy getDetailAttributesOf:withHash:] */

void FUN_10498ec34(undefined8 param_1,undefined8 param_2,undefined *param_3,int param_4)

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
  puVar5 = param_3;
  _objc_retain();
  if (param_3 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ade58;
    func_0x00010bfc8820(PTR_PTR_1126ade58,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ade58;
    func_0x00010bfc2960(PTR_PTR_1126ade58,param_2,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bf39c40();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar10,puVar3,
                        &PTR____CFConstantStringClassReference_110da3bb8);
    func_0x00010bfc39c0(PTR_PTR_1126ade58,param_2,param_3);
    puVar5 = PTR_PTR_1126add78;
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110daea58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar5,param_2,puVar10,puVar4,
                        &PTR____CFConstantStringClassReference_110da3cb8);
    _objc_release(puVar4);
    puVar5 = PTR__OBJC_CLASS___UIControl_1126c3e60;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIControl_1126c3e60);
    puVar4 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar5);
    if ((int)puVar4 != 0) {
      puVar5 = param_3;
      _objc_retain();
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf00ba0();
      _objc_retainAutoreleasedReturnValue();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      puVar7 = puVar6;
      func_0x00010bf52a60();
      if (puVar7 != (undefined *)0x0) {
        lVar12 = *plStack_120;
        do {
          puVar11 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar12) {
              _objc_enumerationMutation(puVar6);
            }
            puVar8 = puVar5;
            func_0x00010beef4e0(puVar5,param_2,*(undefined8 *)(lStack_128 + (long)puVar11 * 8),0);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010bf529e0();
            if (puVar9 != (undefined *)0x0) {
              func_0x00010befa160(puVar4,param_2,puVar8);
            }
            _objc_release(puVar8);
            puVar11 = puVar11 + 1;
          } while (puVar7 != puVar11);
          puVar7 = puVar6;
          func_0x00010bf52a60(puVar6,param_2,&uStack_130,auStack_f0,0x10);
        } while (puVar7 != (undefined *)0x0);
      }
      puVar11 = puVar6;
      func_0x00010bf529e0();
      puVar7 = PTR_PTR_1126add78;
      if (puVar11 != (undefined *)0x0) {
        puVar11 = puVar4;
        func_0x00010bf00560(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(puVar7,param_2,puVar10,puVar11,
                            &PTR____CFConstantStringClassReference_110ff0ab8);
        _objc_release(puVar11);
      }
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
    puVar5 = PTR_PTR_1126add78;
    puVar4 = PTR_PTR_1126ade58;
    func_0x00010bfc4e00(PTR_PTR_1126ade58,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar5,param_2,puVar10,puVar4,
                        &PTR____CFConstantStringClassReference_110da65d8);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126ade58;
    puVar5 = param_3;
    func_0x00010bfcb1e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar10;
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar10,puVar4,
                          &PTR____CFConstantStringClassReference_110da65f8);
    }
    puVar7 = PTR_PTR_1126add78;
    puVar6 = PTR_PTR_1126add08;
    if (param_4 != 0) {
      puVar5 = puVar10;
      func_0x00010c0e00e0(puVar10,param_2,&PTR____CFConstantStringClassReference_110dbf1d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc25e0(puVar6,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar7,param_2,puVar10,puVar6,
                          &PTR____CFConstantStringClassReference_110dbf1d8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar7 = PTR_PTR_1126add78;
      puVar6 = PTR_PTR_1126add08;
      puVar11 = puVar10;
      func_0x00010c0e00e0(puVar10,param_2,&PTR____CFConstantStringClassReference_110e41778);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc25e0(puVar6,param_2,puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar10;
      func_0x00010bf71e80(puVar7,param_2,puVar10,puVar6,
                          &PTR____CFConstantStringClassReference_110e41778);
      _objc_release(puVar6);
      _objc_release(puVar11);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  puVar10 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
  puVar1 = puVar5;
  func_0x00010c075f00(puVar5,param_2,puVar10);
  if ((int)puVar1 == 0) {
    puVar10 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    puVar1 = puVar5;
    func_0x00010c075f00(puVar5,param_2,puVar10);
    if ((int)puVar1 != 0) {
      puVar1 = PTR_PTR_1126ade58;
      func_0x00010bfc8840(PTR_PTR_1126ade58,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10498f128;
    }
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ade58;
    func_0x00010bfc8860(PTR_PTR_1126ade58,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
LAB_10498f128:
    puVar10 = puVar1;
    func_0x00010bfecfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(puVar5);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10498f0a0; end: 10498f237; +[FBSDKViewHierarchy getIndexPath:] */

void FUN_10498f0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
  uVar1 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar3);
  if ((int)uVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    uVar1 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar3);
    if ((int)uVar1 == 0) {
      puVar3 = (undefined *)0x0;
      goto LAB_10498f150;
    }
    puVar2 = PTR_PTR_1126ade58;
    func_0x00010bfc8840(PTR_PTR_1126ade58,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ade58;
    func_0x00010bfc8860(PTR_PTR_1126ade58,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = puVar2;
  func_0x00010bfecfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
LAB_10498f150:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10498f238; end: 10498f673; +[FBSDKViewHierarchy getText:] */

undefined ** FUN_10498f238(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  
  _objc_retain();
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIButton_1126aec48);
  ppuVar1 = param_3;
  func_0x00010c075f00();
  ppuVar6 = param_3;
  if ((int)ppuVar1 != 0) {
    func_0x00010bf60620();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_10498f304;
  }
  func_0x00010bf39c40(PTR__OBJC_CLASS___UITextView_1126afb88);
  ppuVar1 = param_3;
  func_0x00010c075f00();
  if (((ulong)ppuVar1 & 1) == 0) {
    func_0x00010bf39c40(PTR__OBJC_CLASS___UITextField_1126af060);
    ppuVar1 = param_3;
    func_0x00010c075f00();
    if (((ulong)ppuVar1 & 1) == 0) {
      func_0x00010bf39c40(PTR__OBJC_CLASS___UILabel_1126aec30);
      ppuVar1 = param_3;
      func_0x00010c075f00();
      if ((int)ppuVar1 == 0) {
        func_0x00010bf39c40(PTR__OBJC_CLASS___UIPickerView_1126af780);
        ppuVar1 = param_3;
        func_0x00010c075f00();
        if ((int)ppuVar1 == 0) {
          func_0x00010bf39c40(PTR__OBJC_CLASS___UIDatePicker_1126af760);
          func_0x00010c075f00();
          ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDateFormatter_1126af778;
          if ((int)ppuVar6 != 0) {
            ppuVar6 = param_3;
            _objc_retain(param_3);
            func_0x00010c0d8420();
            func_0x00010c189b60();
            ppuVar4 = ppuVar6;
            func_0x00010bf64de0(ppuVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar6);
            ppuVar6 = ppuVar1;
            func_0x00010c25d400();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10498f5d4;
          }
          _objc_lookUpClass("RCTTextView");
          ppuVar1 = param_3;
          func_0x00010c075f00();
          ppuVar6 = param_3;
          if ((int)ppuVar1 == 0) {
            _objc_lookUpClass("RCTBaseTextInputView");
            ppuVar1 = param_3;
            func_0x00010c075f00();
            if ((int)ppuVar1 == 0) {
              ppuVar6 = (undefined **)0x0;
              goto LAB_10498f304;
            }
            func_0x00010498f16c(param_3,&PTR____CFConstantStringClassReference_110da6638);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          }
          else {
            func_0x00010498f16c(param_3,&PTR____CFConstantStringClassReference_110da6618);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSTextStorage_1126b51e0;
          }
          func_0x00010bf39c40(puVar5);
          ppuVar1 = ppuVar6;
          FUN_104984150(ppuVar6,puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar6);
          if (ppuVar1 == (undefined **)0x0) {
            ppuVar6 = (undefined **)0x0;
          }
          else {
            ppuVar6 = ppuVar1;
            func_0x00010c25cd40();
            _objc_retainAutoreleasedReturnValue();
          }
        }
        else {
          ppuVar1 = param_3;
          _objc_retain();
          ppuVar6 = ppuVar1;
          func_0x00010c0debc0();
          ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          if (0 < (long)ppuVar6) {
            ppuVar7 = (undefined **)0x0;
            do {
              ppuVar2 = ppuVar1;
              func_0x00010c0df280();
              if (0 < (long)ppuVar2) {
                func_0x00010c159ec0(ppuVar1);
                ppuVar2 = ppuVar1;
                func_0x00010bf6b020();
                _objc_retainAutoreleasedReturnValue();
                ppuVar3 = ppuVar2;
                func_0x00010c13b700();
                _objc_release(ppuVar2);
                ppuVar2 = ppuVar1;
                func_0x00010bf6b020();
                _objc_retainAutoreleasedReturnValue();
                if ((int)ppuVar3 == 0) {
                  ppuVar3 = ppuVar2;
                  func_0x00010c13b700();
                  _objc_release(ppuVar2);
                  if ((int)ppuVar3 != 0) {
                    ppuVar2 = ppuVar1;
                    func_0x00010bf6b020();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar3 = ppuVar2;
                    func_0x00010c0fbbe0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar8 = ppuVar3;
                    func_0x00010c25cd40();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar3);
                    goto LAB_10498f494;
                  }
                  ppuVar8 = (undefined **)0x0;
                }
                else {
                  ppuVar8 = ppuVar2;
                  func_0x00010c0fbc20();
                  _objc_retainAutoreleasedReturnValue();
LAB_10498f494:
                  _objc_release(ppuVar2);
                }
                func_0x00010bf09f20(PTR_PTR_1126add78);
                _objc_release(ppuVar8);
              }
              ppuVar7 = (undefined **)((long)ppuVar7 + 1);
            } while (ppuVar6 != ppuVar7);
          }
          ppuVar6 = ppuVar4;
          func_0x00010bf529e0();
          if (ppuVar6 == (undefined **)0x0) {
            ppuVar6 = (undefined **)0x0;
          }
          else {
            ppuVar6 = (undefined **)PTR_PTR_1126add58;
            func_0x00010bdc19c0();
            _objc_retainAutoreleasedReturnValue();
          }
LAB_10498f5d4:
          _objc_release(ppuVar4);
        }
        _objc_release(ppuVar1);
        goto LAB_10498f304;
      }
    }
  }
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
LAB_10498f304:
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar1 = ppuVar6;
  }
  _objc_retainAutoreleaseReturnValue(ppuVar1);
  _objc_release(ppuVar6);
  _objc_release(param_3);
  return ppuVar1;
}



/* Entry: 10498f674; end: 10498f8a7; +[FBSDKViewHierarchy getTextStyle:] */

undefined **
FUN_10498f674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf39c40();
  ppuVar7 = param_4;
  func_0x00010c075f00();
  if ((int)ppuVar7 == 0) {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___UILabel_1126aec30;
    func_0x00010bf39c40();
    ppuVar7 = param_4;
    func_0x00010c075f00();
    if ((int)ppuVar7 == 0) {
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___UITextField_1126af060;
      func_0x00010bf39c40();
      ppuVar7 = param_4;
      func_0x00010c075f00();
      if ((int)ppuVar7 == 0) {
        ppuVar1 = (undefined **)PTR__OBJC_CLASS___UITextView_1126afb88;
        func_0x00010bf39c40();
        ppuVar7 = param_4;
        func_0x00010c075f00();
        if ((int)ppuVar7 == 0) goto LAB_10498f860;
      }
    }
    ppuVar7 = param_4;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar7 == (undefined **)0x0) goto LAB_10498f860;
LAB_10498f768:
    ppuVar1 = ppuVar7;
    func_0x00010bfb3ce0(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar1;
    func_0x00010c265a80();
    _objc_release(ppuVar1);
    func_0x00010c102de0(ppuVar7);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(uint)ppuVar6 >> 1 & 1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_70 = puVar2;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(uint)ppuVar6 & 1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_68 = puVar3;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &puStack_70;
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar7);
  }
  else {
    ppuVar6 = param_4;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    if (ppuVar7 != (undefined **)0x0) goto LAB_10498f768;
LAB_10498f860:
    ppuVar6 = (undefined **)0x0;
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
    return ppuVar6;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___UITextField_1126af060;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UITextField_1126af060);
  ppuVar7 = ppuVar1;
  func_0x00010c075f00(ppuVar1,param_3,puVar2);
  if ((int)ppuVar7 == 0) {
    puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    ppuVar7 = ppuVar1;
    func_0x00010c075f00(ppuVar1,param_3,puVar2);
    if ((int)ppuVar7 == 0) {
      ppuVar7 = (undefined **)0x0;
      goto LAB_10498f9cc;
    }
    param_4 = ppuVar1;
    func_0x00010c275140();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == (undefined **)0x0) {
      ppuVar7 = (undefined **)0x0;
    }
    else {
      ppuVar7 = param_4;
      func_0x00010bf39c40();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    ppuVar7 = ppuVar1;
    _objc_retain();
    ppuVar5 = ppuVar7;
    func_0x00010c0fd720();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar6 = ppuVar5;
    }
    _objc_retain();
    _objc_release(ppuVar5);
    func_0x00010c124720(param_4,param_3,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    ppuVar7 = ppuVar6;
    func_0x00010c25ce40(ppuVar6,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
  }
  _objc_release(param_4);
LAB_10498f9cc:
  ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar6 = ppuVar7;
  }
  _objc_retainAutoreleaseReturnValue(ppuVar6);
  _objc_release(ppuVar7);
  _objc_release(ppuVar1);
  return ppuVar6;
}



/* Entry: 10498f8a8; end: 10498fa03; +[FBSDKViewHierarchy getHint:] */

undefined ** FUN_10498f8a8(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UITextField_1126af060);
  ppuVar4 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  if ((int)ppuVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    ppuVar4 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)ppuVar4 == 0) {
      ppuVar4 = (undefined **)0x0;
      goto LAB_10498f9cc;
    }
    param_1 = param_3;
    func_0x00010c275140();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined **)0x0) {
      ppuVar4 = (undefined **)0x0;
    }
    else {
      ppuVar4 = param_1;
      func_0x00010bf39c40();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    ppuVar4 = param_3;
    _objc_retain();
    ppuVar2 = ppuVar4;
    func_0x00010c0fd720();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
    }
    _objc_retain();
    _objc_release(ppuVar2);
    func_0x00010c124720(param_1,param_2,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar3;
    func_0x00010c25ce40(ppuVar3,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
  }
  _objc_release(param_1);
LAB_10498f9cc:
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar3 = ppuVar4;
  }
  _objc_retainAutoreleaseReturnValue(ppuVar3);
  _objc_release(ppuVar4);
  _objc_release(param_3);
  return ppuVar3;
}



/* Entry: 10498fa04; end: 10498fbcf; +[FBSDKViewHierarchy getClassBitmask:] */

ulong FUN_10498fa04(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar4 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar2);
  if ((int)uVar4 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar4 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar2);
    uVar3 = 0x20000;
    if ((int)uVar4 == 0) {
      uVar3 = 0;
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIControl_1126c3e60;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIControl_1126c3e60);
    uVar4 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar2);
    if ((int)uVar4 == 0) {
      puVar2 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
      func_0x00010bf39c40(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
      uVar4 = param_3;
      func_0x00010c075f00(param_3,param_2,puVar2);
      if ((uVar4 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
        func_0x00010bf39c40(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
        uVar4 = param_3;
        func_0x00010c075f00(param_3,param_2,puVar2);
        if ((uVar4 & 1) == 0) {
          puVar2 = PTR__OBJC_CLASS___UIPickerView_1126af780;
          func_0x00010bf39c40(PTR__OBJC_CLASS___UIPickerView_1126af780);
          uVar4 = param_3;
          func_0x00010c075f00(param_3,param_2,puVar2);
          if ((uVar4 & 1) == 0) {
            puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
            func_0x00010bf39c40(PTR__OBJC_CLASS___UILabel_1126aec30);
            uVar3 = param_3;
            func_0x00010c075f00(param_3,param_2,puVar2);
            uVar4 = 0x400;
            if ((int)uVar3 == 0) {
              uVar4 = 0;
            }
          }
          else {
            uVar4 = 0x1000;
          }
        }
        else {
          uVar4 = 0x100;
        }
      }
      else {
        uVar4 = 0x80;
      }
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
      func_0x00010bf39c40(PTR__OBJC_CLASS___UIButton_1126aec48);
      uVar4 = param_3;
      func_0x00010c075f00(param_3,param_2,puVar2);
      if ((uVar4 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___UISwitch_1126b0680;
        func_0x00010bf39c40(PTR__OBJC_CLASS___UISwitch_1126b0680);
        uVar4 = param_3;
        func_0x00010c075f00(param_3,param_2,puVar2);
        if ((uVar4 & 1) == 0) {
          puVar2 = PTR__OBJC_CLASS___UIDatePicker_1126af760;
          func_0x00010bf39c40(PTR__OBJC_CLASS___UIDatePicker_1126af760);
          uVar3 = param_3;
          func_0x00010c075f00(param_3,param_2,puVar2);
          uVar4 = 0x1008;
          if ((int)uVar3 == 0) {
            uVar4 = 8;
          }
        }
        else {
          uVar4 = 0x2008;
        }
      }
      else {
        uVar4 = 0x18;
      }
    }
    puVar2 = PTR_PTR_1126ade58;
    func_0x00010c07baa0(PTR_PTR_1126ade58,param_2,param_3);
    uVar1 = uVar4 | 0x40;
    if ((int)puVar2 == 0) {
      uVar1 = uVar4;
    }
    uVar4 = param_3;
    func_0x00010c13b700(param_3,param_2,PTR_s_textInRange__112678a58);
    uVar3 = uVar1 | 0x800;
    if ((int)uVar4 == 0) {
      uVar3 = uVar1;
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10498fbd0; end: 10498fcef; +[FBSDKViewHierarchy isUserInputView:] */

undefined * FUN_10498fbd0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  if ((param_3 == (undefined *)0x0) ||
     (puVar1 = param_3, func_0x00010bf481c0(param_3,param_2,PTR_DAT_1126a4b10), (int)puVar1 == 0)) {
LAB_10498fc74:
    puVar1 = PTR_PTR_1126ade58;
    func_0x00010bfcb180(PTR_PTR_1126ade58,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126ade48;
      func_0x00010c22b6a0(PTR_PTR_1126ade48);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c07d900();
      _objc_release(puVar2);
    }
  }
  else {
    puVar1 = param_3;
    _objc_retain();
    puVar3 = puVar1;
    func_0x00010c13b700();
    if (((int)puVar3 == 0) || (puVar3 = puVar1, func_0x00010c07d600(), ((ulong)puVar3 & 1) == 0)) {
      puVar3 = puVar1;
      func_0x00010c13b700(puVar1,param_2,PTR_s_keyboardType_1125ff528);
      if ((int)puVar3 == 0) {
        _objc_release(puVar1);
      }
      else {
        puVar3 = puVar1;
        func_0x00010c086c60();
        _objc_release(puVar1);
        if (((ulong)(puVar3 + -5) & 0xfffffffffffffffd) == 0) {
          puVar3 = (undefined *)0x1;
          goto LAB_10498fcd4;
        }
      }
      goto LAB_10498fc74;
    }
    puVar3 = (undefined *)0x1;
  }
  _objc_release(puVar1);
LAB_10498fcd4:
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10498fcf0; end: 10498ffab; +[FBSDKViewHierarchy recursiveCaptureTreeWithCurrentNode:targetNode:objAddressSet:hash:] */

char * FUN_10498fcf0(undefined *param_1,undefined8 param_2,char *param_3,char *param_4,ulong param_5
                    ,undefined8 param_6)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *unaff_x19;
  char *pcVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined *unaff_x24;
  ulong uVar12;
  undefined *unaff_x26;
  undefined8 unaff_x27;
  long lVar13;
  undefined *unaff_x28;
  char *pcVar14;
  char acStack_270 [8];
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  char *pcStack_178;
  char *pcStack_170;
  ulong uStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  char acStack_130 [8];
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (param_3 == (char *)0x0) {
LAB_10498fd6c:
    pcVar11 = (char *)0x0;
  }
  else {
    if (param_5 != 0) {
      uVar12 = param_5;
      pcVar1 = param_3;
      func_0x00010bf4b900();
      if ((uVar12 & 1) != 0) goto LAB_10498fd6c;
      func_0x00010befa120(param_5,param_2,param_3);
    }
    pcVar1 = PTR_PTR_1126ade58;
    func_0x00010bfc4b60(PTR_PTR_1126ade58,param_2,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = PTR_PTR_1126ade58;
    pcStack_140 = pcVar1;
    pcStack_138 = param_3;
    func_0x00010bfc3960(PTR_PTR_1126ade58,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    acStack_130[0] = '\0';
    acStack_130[1] = '\0';
    acStack_130[2] = '\0';
    acStack_130[3] = '\0';
    acStack_130[4] = '\0';
    acStack_130[5] = '\0';
    acStack_130[6] = '\0';
    acStack_130[7] = '\0';
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain();
    pcVar1 = acStack_130;
    puVar2 = unaff_x26;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar13 = *plStack_120;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(unaff_x26);
          }
          unaff_x28 = param_1;
          func_0x00010c124700(param_1,param_2,*(undefined8 *)(lStack_128 + (long)puVar10 * 8),
                              param_4,param_5,param_6);
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x28 != (undefined *)0x0) {
            func_0x00010bf09f20(PTR_PTR_1126add78,param_2,unaff_x24,unaff_x28);
          }
          _objc_release(unaff_x28);
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        pcVar1 = acStack_130;
        puVar2 = unaff_x26;
        func_0x00010bf52a60();
        unaff_x27 = 0;
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(unaff_x26);
    puVar10 = unaff_x24;
    func_0x00010bf529e0();
    unaff_x19 = pcStack_140;
    puVar2 = PTR_PTR_1126add78;
    if (puVar10 != (undefined *)0x0) {
      param_1 = unaff_x24;
      func_0x00010bf51e00();
      pcVar1 = unaff_x19;
      func_0x00010bf71e80(puVar2,param_2,unaff_x19,param_1,
                          &PTR____CFConstantStringClassReference_110da3af8);
      _objc_release(param_1);
    }
    param_3 = pcStack_138;
    puVar2 = PTR_PTR_1126add78;
    if (pcStack_138 == param_4) {
      param_1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = unaff_x19;
      func_0x00010bf71e80(puVar2,param_2,unaff_x19,param_1,
                          &PTR____CFConstantStringClassReference_110da3ad8);
      _objc_release(param_1);
    }
    pcVar11 = unaff_x19;
    func_0x00010bf51e00();
    _objc_release(unaff_x24);
    _objc_release(unaff_x26);
    _objc_release(unaff_x19);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcVar8 = acStack_270;
  pcStack_148 = FUN_10498ffac;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  puStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  puStack_188 = param_1;
  puStack_180 = unaff_x24;
  pcStack_178 = pcVar11;
  pcStack_170 = param_3;
  uStack_168 = param_5;
  pcStack_160 = param_4;
  pcStack_158 = unaff_x19;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain();
  if (pcVar1 == (char *)0x0) {
LAB_104990180:
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar11 = "RCTView";
    _objc_lookUpClass();
    pcVar9 = (char *)0x0;
    if (pcVar11 != (char *)0x0) {
      pcVar9 = pcVar1;
      pcVar3 = pcVar11;
      func_0x00010c075f00();
      puVar2 = PTR_s_reactTagAtPoint__112525258;
      if (((((int)pcVar9 == 0) ||
           (pcVar9 = pcVar1, pcVar3 = PTR_s_reactTagAtPoint__112525258, func_0x00010c13b700(),
           (int)pcVar9 == 0)) ||
          (pcVar9 = pcVar1, pcVar3 = PTR_s_reactTag_112525238, func_0x00010c13b700(),
          (int)pcVar9 == 0)) || (pcVar9 = pcVar1, func_0x00010c082800(), (int)pcVar9 == 0))
      goto LAB_104990180;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      lStack_268 = 0;
      acStack_270[0] = '\0';
      acStack_270[1] = '\0';
      acStack_270[2] = '\0';
      acStack_270[3] = '\0';
      acStack_270[4] = '\0';
      acStack_270[5] = '\0';
      acStack_270[6] = '\0';
      acStack_270[7] = '\0';
      uStack_258 = 0;
      plStack_260 = (long *)0x0;
      pcVar3 = pcVar1;
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar3;
      func_0x00010bf52a60();
      if (pcVar9 != (char *)0x0) {
        lVar13 = *plStack_260;
        do {
          pcVar14 = (char *)0x0;
          do {
            if (*plStack_260 != lVar13) {
              _objc_enumerationMutation(pcVar3);
            }
            uVar12 = *(ulong *)(lStack_268 + (long)pcVar14 * 8);
            if ((uVar12 != 0) &&
               (uVar4 = uVar12, func_0x00010c075f00(uVar12,param_2,pcVar11),
               puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8, (uVar4 & 1) == 0)) {
              func_0x00010bfb68e0(uVar12);
              func_0x00010c297180(puVar10);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = pcVar1;
              func_0x00010c0f8f20(pcVar1,param_2,puVar2,puVar10);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar10);
              pcVar6 = PTR_PTR_1126ade58;
              func_0x00010bfcc220(PTR_PTR_1126ade58,param_2,uVar12);
              _objc_retainAutoreleasedReturnValue();
              if ((pcVar5 != (char *)0x0 && pcVar6 != (char *)0x0) &&
                 (pcVar7 = pcVar5, pcVar8 = pcVar6, func_0x00010c071f40(), ((ulong)pcVar7 & 1) != 0)
                 ) {
                _objc_release(pcVar6);
                _objc_release(pcVar5);
                pcVar9 = (char *)0x1;
                goto LAB_1049901dc;
              }
              _objc_release(pcVar6);
              _objc_release(pcVar5);
            }
            pcVar14 = pcVar14 + 1;
          } while (pcVar9 != pcVar14);
          pcVar9 = pcVar3;
          pcVar8 = acStack_270;
          func_0x00010bf52a60();
        } while (pcVar9 != (char *)0x0);
      }
      pcVar9 = (char *)0x0;
LAB_1049901dc:
      _objc_release(pcVar3);
      pcVar3 = pcVar8;
    }
  }
  _objc_release(pcVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return pcVar9;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar2 = PTR_s_reactTag_112525238;
  if ((pcVar3 == (char *)0x0) ||
     (pcVar1 = pcVar3, func_0x00010c13b700(pcVar3,param_2,PTR_s_reactTag_112525238),
     (int)pcVar1 == 0)) {
LAB_104990260:
    pcVar11 = (char *)0x0;
  }
  else {
    pcVar11 = pcVar3;
    func_0x00010c0f8ec0(pcVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (pcVar11 == (char *)0x0) {
LAB_104990258:
      _objc_release(pcVar11);
      goto LAB_104990260;
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
    pcVar1 = pcVar11;
    func_0x00010c075f00(pcVar11,param_2,puVar2);
    if (((ulong)pcVar1 & 1) == 0) goto LAB_104990258;
  }
  _objc_release(pcVar3);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar11);
  return pcVar11;
}



/* Entry: 10498ffac; end: 1049901eb; +[FBSDKViewHierarchy isRCTButton:] */

char * FUN_10498ffac(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  char acStack_130 [8];
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  pcVar10 = acStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  _objc_retain();
  if (param_3 == (char *)0x0) {
LAB_104990180:
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar1 = "RCTView";
    _objc_lookUpClass();
    pcVar9 = (char *)0x0;
    if (pcVar1 != (char *)0x0) {
      pcVar9 = param_3;
      pcVar2 = pcVar1;
      func_0x00010c075f00();
      puVar8 = PTR_s_reactTagAtPoint__112525258;
      if (((((int)pcVar9 == 0) ||
           (pcVar9 = param_3, pcVar2 = PTR_s_reactTagAtPoint__112525258, func_0x00010c13b700(),
           (int)pcVar9 == 0)) ||
          (pcVar9 = param_3, pcVar2 = PTR_s_reactTag_112525238, func_0x00010c13b700(),
          (int)pcVar9 == 0)) || (pcVar9 = param_3, func_0x00010c082800(), (int)pcVar9 == 0))
      goto LAB_104990180;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      acStack_130[0] = '\0';
      acStack_130[1] = '\0';
      acStack_130[2] = '\0';
      acStack_130[3] = '\0';
      acStack_130[4] = '\0';
      acStack_130[5] = '\0';
      acStack_130[6] = '\0';
      acStack_130[7] = '\0';
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      pcVar2 = param_3;
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar2;
      func_0x00010bf52a60();
      if (pcVar9 != (char *)0x0) {
        lVar12 = *plStack_120;
        do {
          pcVar13 = (char *)0x0;
          do {
            if (*plStack_120 != lVar12) {
              _objc_enumerationMutation(pcVar2);
            }
            uVar11 = *(ulong *)(lStack_128 + (long)pcVar13 * 8);
            if ((uVar11 != 0) &&
               (uVar3 = uVar11, func_0x00010c075f00(uVar11,param_2,pcVar1),
               puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8, (uVar3 & 1) == 0)) {
              func_0x00010bfb68e0(uVar11);
              func_0x00010c297180(puVar4);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = param_3;
              func_0x00010c0f8f20(param_3,param_2,puVar8,puVar4);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar4);
              pcVar6 = PTR_PTR_1126ade58;
              func_0x00010bfcc220(PTR_PTR_1126ade58,param_2,uVar11);
              _objc_retainAutoreleasedReturnValue();
              if ((pcVar5 != (char *)0x0 && pcVar6 != (char *)0x0) &&
                 (pcVar7 = pcVar5, pcVar10 = pcVar6, func_0x00010c071f40(), ((ulong)pcVar7 & 1) != 0
                 )) {
                _objc_release(pcVar6);
                _objc_release(pcVar5);
                pcVar9 = (char *)0x1;
                goto LAB_1049901dc;
              }
              _objc_release(pcVar6);
              _objc_release(pcVar5);
            }
            pcVar13 = pcVar13 + 1;
          } while (pcVar9 != pcVar13);
          pcVar9 = pcVar2;
          pcVar10 = acStack_130;
          func_0x00010bf52a60();
        } while (pcVar9 != (char *)0x0);
      }
      pcVar9 = (char *)0x0;
LAB_1049901dc:
      _objc_release(pcVar2);
      pcVar2 = pcVar10;
    }
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pcVar9;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar8 = PTR_s_reactTag_112525238;
  if ((pcVar2 != (char *)0x0) &&
     (pcVar10 = pcVar2, func_0x00010c13b700(pcVar2,param_2,PTR_s_reactTag_112525238),
     (int)pcVar10 != 0)) {
    pcVar10 = pcVar2;
    func_0x00010c0f8ec0(pcVar2,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    if (pcVar10 != (char *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
      pcVar1 = pcVar10;
      func_0x00010c075f00(pcVar10,param_2,puVar8);
      if (((ulong)pcVar1 & 1) != 0) goto LAB_104990264;
    }
    _objc_release(pcVar10);
  }
  pcVar10 = (char *)0x0;
LAB_104990264:
  _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar10);
  return pcVar10;
}



/* Entry: 1049901ec; end: 10499027b; +[FBSDKViewHierarchy getViewReactTag:] */

void FUN_1049901ec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  puVar1 = PTR_s_reactTag_112525238;
  if (param_3 != 0) {
    uVar3 = param_3;
    func_0x00010c13b700(param_3,param_2,PTR_s_reactTag_112525238);
    if ((int)uVar3 != 0) {
      uVar3 = param_3;
      func_0x00010c0f8ec0(param_3,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 != 0) {
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar2 = uVar3;
        func_0x00010c075f00(uVar3,param_2,puVar1);
        if ((uVar2 & 1) != 0) goto LAB_104990264;
      }
      _objc_release(uVar3);
    }
  }
  uVar3 = 0;
LAB_104990264:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10499027c; end: 104990373; +[FBSDKViewHierarchy isView:superViewOfView:] */

bool FUN_10499027c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
  lVar3 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar2);
  if ((int)lVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
    lVar3 = param_4;
    func_0x00010c075f00(param_4,param_2,puVar2);
    if ((int)lVar3 != 0) {
      lVar3 = param_3;
      _objc_retain();
      lVar4 = param_4;
      _objc_retain();
      do {
        bVar1 = lVar4 != 0;
        if (lVar4 == 0) {
          lVar5 = 0;
          break;
        }
        lVar5 = lVar4;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        lVar4 = lVar5;
      } while (lVar5 != lVar3);
      _objc_release(lVar5);
      _objc_release(lVar3);
      goto LAB_10499034c;
    }
  }
  bVar1 = false;
LAB_10499034c:
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 104990374; end: 1049903fb; +[FBSDKViewHierarchy getParentViewController:] */

void FUN_104990374(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain();
  lVar4 = param_3;
  do {
    if (lVar4 == 0) {
      lVar3 = 0;
      break;
    }
    lVar3 = lVar4;
    func_0x00010c0d9e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIViewController_1126af898);
    lVar2 = lVar3;
    func_0x00010c075f00(lVar3,param_2,puVar1);
    lVar4 = lVar3;
  } while ((int)lVar2 == 0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1049903fc; end: 104990477; +[FBSDKViewHierarchy getParentTableView:] */

void FUN_1049903fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  while (PTR__OBJC_CLASS___UITableView_1126aed40 = puVar1, param_3 != 0) {
    func_0x00010bf39c40(puVar1);
    uVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((uVar2 & 1) != 0) break;
    uVar2 = param_3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_3 = uVar2;
    puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104990478; end: 1049904f3; +[FBSDKViewHierarchy getParentCollectionView:] */

void FUN_104990478(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  while (PTR__OBJC_CLASS___UICollectionView_1126afd20 = puVar1, param_3 != 0) {
    func_0x00010bf39c40(puVar1);
    uVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((uVar2 & 1) != 0) break;
    uVar2 = param_3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_3 = uVar2;
    puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1049904f4; end: 1049905c3; +[FBSDKViewHierarchy getTag:] */

undefined8 FUN_1049904f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar2 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_3;
      _objc_retain();
      uVar4 = uVar2;
      func_0x00010c0834c0();
      if ((int)uVar4 != 0) {
        uVar3 = uVar2;
        func_0x00010c29bf00(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c268120();
        _objc_release(uVar3);
        _objc_release(uVar2);
        goto LAB_1049905a8;
      }
      _objc_release(uVar2);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = param_3;
    func_0x00010c268120(param_3);
  }
LAB_1049905a8:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1049905c4; end: 1049908a7; +[FBSDKViewHierarchy getDimensionOf:] */

void FUN_1049905c4(double param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  double dVar20;
  double dVar21;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar3 = param_6;
  func_0x00010c075f00(param_6,param_5,puVar2);
  uVar16 = param_6;
  if ((int)uVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar3 = param_6;
    func_0x00010c075f00(param_6,param_5,puVar2);
    if ((int)uVar3 == 0) {
      uVar16 = 0;
    }
    else {
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain();
  }
  func_0x00010bfb68e0(uVar16);
  dVar1 = (double)CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0)))))));
  puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  dVar20 = param_1;
  func_0x00010bf39c40(PTR__OBJC_CLASS___UIScrollView_1126af098);
  uVar3 = uVar16;
  func_0x00010c075f00(uVar16,param_5,puVar2);
  if ((int)uVar3 == 0) {
    dVar21 = *(double *)PTR__CGPointZero_110347540;
    dVar20 = *(double *)(PTR__CGPointZero_110347540 + 8);
  }
  else {
    func_0x00010bf4cdc0(uVar16);
    dVar21 = (double)CONCAT17(in_register_00005007,
                              CONCAT16(in_register_00005006,
                                       CONCAT15(in_register_00005005,
                                                CONCAT14(in_register_00005004,
                                                         CONCAT13(in_register_00005003,
                                                                  CONCAT12(in_register_00005002,
                                                                           CONCAT11(
                                                  in_register_00005001,in_b0)))))));
  }
  ppuStack_110 = &PTR____CFConstantStringClassReference_110dfeaf8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_5,(int)param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110e8f298;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_d8 = puVar2;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_5,(int)dVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110db1238;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_d0 = puVar4;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_5,(int)param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110db1258;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_c8 = puVar5;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_5,(int)param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110da2858;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_c0 = puVar6;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_5,(int)dVar21);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110da2878;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b8 = puVar7;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_5,(int)dVar20);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110da2898;
  uVar3 = uVar16;
  puStack_b0 = puVar8;
  func_0x00010c074c20();
  uVar17 = 4;
  if ((int)uVar3 == 0) {
    uVar17 = 0;
  }
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_5,uVar17);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_d8;
  ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_a8 = puVar9;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar16);
  uVar3 = param_6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    pcStack_118 = FUN_1049908a8;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_170 = puVar9;
    puStack_168 = puVar8;
    puStack_160 = puVar7;
    ppuStack_158 = ppuVar10;
    puStack_150 = puVar6;
    puStack_148 = puVar5;
    puStack_140 = puVar4;
    puStack_138 = puVar2;
    uStack_130 = uVar16;
    uStack_128 = param_6;
    puStack_120 = &stack0xfffffffffffffff0;
    _objc_retain();
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    ppuVar10 = ppuVar11;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = auStack_1f8;
    uVar16 = 0x10;
    ppuVar12 = ppuVar10;
    func_0x00010bf52a60();
    if (ppuVar12 == (undefined **)0x0) {
      ppuVar13 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      lVar18 = *plStack_230;
      ppuVar13 = &PTR____CFConstantStringClassReference_110daafd8;
      do {
        ppuVar19 = (undefined **)0x0;
        ppuVar14 = ppuVar13;
        do {
          if (*plStack_230 != lVar18) {
            _objc_enumerationMutation(ppuVar10);
          }
          uVar16 = uVar3;
          func_0x00010c124720(uVar3,param_5,*(undefined8 *)(lStack_238 + (long)ppuVar19 * 8));
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar14;
          func_0x00010c25ce40(ppuVar14,param_5,uVar16);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar14);
          _objc_release(uVar16);
          ppuVar19 = (undefined **)((long)ppuVar19 + 1);
          ppuVar14 = ppuVar13;
        } while (ppuVar12 != ppuVar19);
        puVar15 = auStack_1f8;
        uVar16 = 0x10;
        ppuVar12 = ppuVar10;
        func_0x00010bf52a60(ppuVar10,param_5,&uStack_240);
      } while (ppuVar12 != (undefined **)0x0);
    }
    _objc_release(ppuVar10);
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___UILabel_1126aec30;
    func_0x00010bf39c40();
    ppuVar19 = ppuVar11;
    func_0x00010c075f00();
    ppuVar10 = ppuVar13;
    if ((int)ppuVar19 != 0) {
      ppuVar19 = ppuVar11;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar19;
      func_0x00010c08fa60();
      _objc_release(ppuVar19);
      if (ppuVar14 != (undefined **)0x0) {
        ppuVar19 = ppuVar11;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = &PTR____CFConstantStringClassReference_110e46278;
        func_0x00010c25cde0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar13);
        _objc_release(ppuVar19);
      }
    }
    _objc_release(ppuVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      _objc_retain();
      _objc_retain();
      _objc_retain();
      uVar3 = ppuRam000000011369d570;
      ppuRam000000011369d570 = ppuVar12;
      _objc_retain(ppuVar12);
      _objc_release(uVar3);
      uVar3 = puRam000000011369d578;
      puRam000000011369d578 = puVar15;
      _objc_retain(puVar15);
      _objc_release(uVar3);
      uVar3 = uRam000000011369d580;
      uRam000000011369d580 = uVar16;
      _objc_release(uVar3);
      _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar12);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return;
}



/* Entry: 1049908a8; end: 104990aa3; +[FBSDKViewHierarchy recursiveGetLabelsFromView:] */

void FUN_1049908a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_e8;
  uVar8 = 0x10;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lVar9 = *plStack_120;
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    do {
      lVar10 = 0;
      ppuVar5 = ppuVar4;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = param_1;
        func_0x00010c124720(param_1,param_2,*(undefined8 *)(lStack_128 + lVar10 * 8));
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar5;
        func_0x00010c25ce40(ppuVar5,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar5);
        _objc_release(uVar8);
        lVar10 = lVar10 + 1;
        ppuVar5 = ppuVar4;
      } while (lVar3 != lVar10);
      puVar7 = auStack_e8;
      uVar8 = 0x10;
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x00010bf39c40();
  lVar2 = param_3;
  func_0x00010c075f00();
  ppuVar6 = ppuVar4;
  if ((int)lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = param_3;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110e46278;
      func_0x00010c25cde0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain();
    _objc_retain();
    uVar1 = ppuRam000000011369d570;
    ppuRam000000011369d570 = ppuVar5;
    _objc_retain(ppuVar5);
    _objc_release(uVar1);
    uVar1 = puRam000000011369d578;
    puRam000000011369d578 = puVar7;
    _objc_retain(puVar7);
    _objc_release(uVar1);
    uVar1 = uRam000000011369d580;
    uRam000000011369d580 = uVar8;
    _objc_release(uVar1);
    _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 104990aa4; end: 104990b4b; +[FBSDKWebDialogView configureWithWebViewProvider:urlOpener:errorFactory:] */

void FUN_104990aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar1 = uRam000000011369d570;
  uRam000000011369d570 = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = uRam000000011369d578;
  uRam000000011369d578 = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = uRam000000011369d580;
  uRam000000011369d580 = param_5;
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104990b4c; end: 104990b57; +[FBSDKWebDialogView webViewProvider] */

void FUN_104990b4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d570);
  return;
}



/* Entry: 104990b58; end: 104990b67; +[FBSDKWebDialogView setWebViewProvider:] */

void FUN_104990b58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d570,param_3);
  return;
}



/* Entry: 104990b68; end: 104990b73; +[FBSDKWebDialogView urlOpener] */

void FUN_104990b68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d578);
  return;
}



/* Entry: 104990b74; end: 104990b83; +[FBSDKWebDialogView setUrlOpener:] */

void FUN_104990b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d578,param_3);
  return;
}



/* Entry: 104990b84; end: 104990b8f; +[FBSDKWebDialogView errorFactory] */

void FUN_104990b84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d580);
  return;
}



/* Entry: 104990b90; end: 104990b9f; +[FBSDKWebDialogView setErrorFactory:] */

void FUN_104990b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369d580,param_3);
  return;
}



/* Entry: 104990ba0; end: 104990e8f; -[FBSDKWebDialogView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104990ba0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126e3490;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c1d4c20(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf39c40();
    func_0x00010c2a43c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf5a180(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11270f144;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined1 **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar3);
    func_0x00010c1cb840(*(undefined8 *)((long)puVar1 + lVar7));
    lVar7 = *(long *)((long)puVar1 + lVar7);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010bf39c40(PTR__OBJC_CLASS___UIView_1126aec20);
    FUN_104984150(lVar7,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      func_0x00010befbb60(puVar1);
      puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
      func_0x00010bf25cc0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)_DAT_11270f148;
      uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
      *(undefined **)((long)puVar1 + lVar8) = puVar2;
      _objc_release(uVar6);
      puVar2 = PTR_PTR_1126adfd8;
      func_0x00010c0d8420(PTR_PTR_1126adfd8);
      puVar5 = puVar2;
      func_0x00010bfe9760(0x403d000000000000,0x403d000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x00010c1a9fc0(*(undefined8 *)((long)puVar1 + lVar8));
      uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41620(0x3fe4f4f4f4f4f4f5,0x3fe7171717171717,0x3feb1b1b1b1b1b1b,
                          0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216380(uVar6);
      _objc_release(puVar2);
      uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216380(uVar6);
      _objc_release(puVar2);
      func_0x00010c2026c0(*(undefined8 *)((long)puVar1 + lVar8));
      func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar8));
      func_0x00010befbb60(puVar1);
      func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar8));
      func_0x000100029b9c(2,0xd,0,0);
      puVar2 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
      _objc_alloc();
      func_0x00010bff0f20();
      lVar8 = (long)_DAT_11270f14c;
      uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
      *(undefined **)((long)puVar1 + lVar8) = puVar2;
      _objc_release(uVar6);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bfce0e0(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17e800(*(undefined8 *)((long)puVar1 + lVar8));
      _objc_release(puVar2);
      func_0x00010c1a8560(*(undefined8 *)((long)puVar1 + lVar8));
      func_0x00010befbb60(lVar7);
      _objc_release(puVar5);
      _objc_release(lVar7);
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104990e90; end: 104990eef; -[FBSDKWebDialogView dealloc] */

void FUN_104990e90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb840();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e3490;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104990ef0; end: 104990f97; -[FBSDKWebDialogView loadURL:] */

void FUN_104990ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c09d4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
  _objc_release(uVar1);
  func_0x00010c2a3bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c09c060(param_1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104990f98; end: 104990feb; -[FBSDKWebDialogView stopLoading] */

void FUN_104990f98(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256160();
  _objc_release(uVar1);
  func_0x00010c09d4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104990fec; end: 104991123; -[FBSDKWebDialogView drawRect:] */

void FUN_104990fec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar1 = param_5;
  dVar4 = param_1;
  _UIGraphicsGetCurrentContext();
  _CGContextSaveGState();
  uVar2 = param_5;
  func_0x00010bf13d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(uVar2);
  func_0x00010bf20c00(param_5);
  _CGContextFillRect(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8c0();
  _objc_release(puVar3);
  uVar2 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e040();
  _CGContextSetLineWidth(1.0 / dVar4,uVar1);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c2a3bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGContextStrokeRect(uVar1);
  _objc_release(uVar2);
  _CGContextRestoreGState(uVar1);
  puStack_58 = PTR_PTR_1126e3490;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,PTR_s_drawRect__1125271c8);
  return;
}



/* Entry: 104991124; end: 1049913e3; -[FBSDKWebDialogView layoutSubviews] */

void FUN_104991124(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126e3490;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ac0();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x1) {
    dVar7 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar7 = dVar7 * 0.2;
    dVar4 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar4 = dVar4 * 0.2;
    param_1 = param_1 + dVar7;
    param_2 = param_2 + dVar4;
    param_3 = param_3 - (dVar7 + dVar7);
    param_4 = param_4 - (dVar4 + dVar4);
  }
  dVar5 = param_1 + 10.0;
  dVar6 = param_2 + 10.0;
  param_3 = param_3 + -20.0;
  param_4 = param_4 + -20.0;
  _CGRectIntegral(dVar5,dVar6,param_3,param_4);
  uVar3 = param_5;
  func_0x00010c2a3bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar5,dVar6,param_3,param_4);
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010c2a3bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar3);
  dVar7 = dVar5;
  _CGRectGetMidX(dVar5,dVar6,param_3,param_4);
  dVar4 = dVar5;
  _CGRectGetMidY(dVar5,dVar6,param_3,param_4);
  uVar3 = param_5;
  func_0x00010c09d4e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar7,dVar4);
  _objc_release(uVar3);
  _CGRectGetHeight(dVar5,dVar6,param_3,param_4);
  if (dVar5 == 0.0) {
    func_0x00010bf3db20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
  }
  else {
    uVar3 = param_5;
    func_0x00010bf3db20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010bf3db20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(uVar3);
    _CGRectIntegral(param_1,param_2,param_3,param_4);
    func_0x00010bf3db20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 1049913e4; end: 10499141b; -[FBSDKWebDialogView _close:] */

void FUN_1049913e4(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a37e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


