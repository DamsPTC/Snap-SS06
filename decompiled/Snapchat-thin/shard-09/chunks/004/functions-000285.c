/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d15a8c; end: 106d15ac3;  */

void FUN_106d15a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be159b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fileQualityLabelForGallerySnap__112563008,
             param_2,param_3,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 106d15ac4; end: 106d15be3; -[SCGalleryOperaActionHandlerSession _fileQualityLabelForGallerySnap:entryInfo:isGoodMatch:] */

void FUN_106d15ac4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_4;
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar3 = param_4;
  if (lVar2 == 0) {
    func_0x00010bf97200(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf9e140(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x1f0);
  lVar1 = param_4;
  func_0x00010c2711a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf190e0(uVar5,param_2,param_5,lVar3,lVar1,uVar4,0,param_1);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d15be4; end: 106d15ca7; -[SCGalleryOperaActionHandlerSession _handleReportFlowWithPage:] */

void FUN_106d15be4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bdcff80(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d15ca8; end: 106d15cef;  */

void FUN_106d15ca8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d15cf0; end: 106d15d6f; -[SCGalleryOperaActionHandlerSession _openReportFlowWithSnap:] */

void FUN_106d15cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106d15d70;
  puStack_20 = &UNK_110975ee8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106d15d88;
  puStack_48 = &UNK_110975ee8;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bfe60(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110975ff8,
                      &PTR___NSConcreteGlobalBlock_110976018,&puStack_60);
  return;
}



/* Entry: 106d15d70; end: 106d15d97;  */

void FUN_106d15d70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__openGenAIReportFlowWithSnap_ent_112578e10,
             param_2,param_3);
  return;
}



/* Entry: 106d15d98; end: 106d15f37; -[SCGalleryOperaActionHandlerSession _openGenAIReportFlowWithSnap:entryInfo:] */

void FUN_106d15d98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = param_4;
  func_0x00010bf977c0();
  lVar1 = (long)(int)uVar2;
  func_0x00010b5fc95c();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108ec16c0(*(undefined8 *)(param_1 + 0x38));
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    lStack_60 = lVar1;
    func_0x00010c134d00(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d15f38; end: 106d16103;  */

void FUN_106d15f38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b25c0;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c23ff80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360();
    _objc_release(uVar3);
    if (puVar2 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126d2388;
      _objc_alloc(PTR_PTR_1126d2388);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c241220(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf9e140(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010b5f5f9c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c047a20(puVar4);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(uVar3);
      puVar6 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      lVar7 = lVar1 + 0x20;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c038f40(puVar6);
      _objc_release(lVar7);
      puVar8 = PTR_PTR_1126bd648;
      _objc_alloc(PTR_PTR_1126bd648);
      func_0x00010c02a6c0();
      lVar7 = lVar1 + 0x1a0;
      _objc_loadWeakRetained(lVar7);
      func_0x00010bf9d620();
      _objc_release(lVar7);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d16104; end: 106d162ff; -[SCGalleryOperaActionHandlerSession _openDreamsFeedbackFlowWithSnap:entryInfo:] */

void FUN_106d16104(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c038f40();
  _objc_release(lVar3);
  uVar4 = param_4;
  func_0x00010bf977c0();
  uVar5 = 9;
  if ((int)uVar4 != 0x4e) {
    uVar5 = 5;
  }
  uVar1 = 10;
  if ((int)uVar4 != 0x4d) {
    uVar1 = uVar5;
  }
  uVar5 = param_3;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x000108020568();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x218);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  uStack_60 = uVar1;
  _objc_retain(uVar4);
  func_0x00010c135a80(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d16300; end: 106d1652b;  */

void FUN_106d16300(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010b5f7abc();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar1 + 0x178);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c4ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf8a7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf8a400();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c292720();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bfe6080();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,param_1 + 0x38);
    func_0x00010bf24160(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar9 = lVar1 + 0x170;
    _objc_loadWeakRetained(lVar9);
    func_0x00010bf9d620();
    _objc_release(lVar9);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1652c; end: 106d165ab;  */

void FUN_106d1652c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x170;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1 + 0x170;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c12e1c0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d165ac; end: 106d165b3; -[SCGalleryOperaActionHandlerSession sendViewPresenter] */

void FUN_106d165ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xc0),PTR_s_target_112678178);
  return;
}



/* Entry: 106d165b4; end: 106d16627; -[SCGalleryOperaActionHandlerSession previewController] */

void FUN_106d165b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x200);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf22420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x200) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x200);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106d16628; end: 106d16a8f; -[SCGalleryOperaActionHandlerSession _registeredEventsForOperaSession] */

void FUN_106d16628(undefined8 param_1,undefined8 param_2)

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
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf8c140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  puStack_178 = puVar1;
  func_0x00010bf6b1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2d30;
  puStack_170 = puVar2;
  func_0x00010c1100e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2d30;
  puStack_168 = puVar3;
  func_0x00010c15c9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2d30;
  puStack_160 = puVar4;
  func_0x00010bf52060();
  puVar6 = PTR_PTR_1126b2d30;
  puStack_158 = puVar5;
  func_0x00010bf14c20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2d30;
  puStack_150 = puVar6;
  func_0x00010c13f3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2d30;
  puStack_148 = puVar7;
  func_0x00010c272a20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b5b28;
  puStack_140 = puVar8;
  func_0x00010c15b3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b5b28;
  puStack_138 = puVar9;
  func_0x00010bf8c140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b5b28;
  puStack_130 = puVar10;
  func_0x00010bf52060();
  puVar12 = PTR_PTR_1126b5b28;
  puStack_128 = puVar11;
  func_0x00010c1052e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b5b28;
  puStack_120 = puVar12;
  func_0x00010c105200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b5b28;
  puStack_118 = puVar13;
  func_0x00010bfa0ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126b5b28;
  puStack_110 = puVar14;
  func_0x00010c27fa80();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b2d30;
  puStack_108 = puVar15;
  func_0x00010bf1f540();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126b2d30;
  puStack_100 = puVar16;
  func_0x00010bfa1100();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126b2d30;
  puStack_f8 = puVar17;
  func_0x00010c129540();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126b2d30;
  puStack_f0 = puVar18;
  func_0x00010befee40();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126b2d30;
  puStack_e8 = puVar19;
  func_0x00010bef9700();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126b2d30;
  puStack_e0 = puVar20;
  func_0x00010bf8a5e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110e87978;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110e878d8;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110e87998;
  puVar22 = PTR_PTR_1126b2d30;
  puStack_d8 = puVar21;
  func_0x00010c133ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126b2330;
  puStack_b8 = puVar22;
  func_0x00010bf3df20();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126b2330;
  puStack_b0 = puVar23;
  func_0x00010bfafaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126b2330;
  puStack_a8 = puVar24;
  func_0x00010bfaf7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR_PTR_1126b6160;
  puStack_a0 = puVar25;
  func_0x00010bf3d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR_PTR_1126b2d30;
  puStack_98 = puVar26;
  func_0x00010c117f20();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR_PTR_1126b2d30;
  puStack_90 = puVar27;
  func_0x00010bfa33c0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126b2d30;
  puStack_88 = puVar28;
  func_0x00010bfa3380();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR_PTR_1126b2d30;
  puStack_80 = puVar29;
  func_0x00010c065620();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar30;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_178,0x21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
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
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar31);
    return;
  }
  ___stack_chk_fail();
  uVar32 = *(undefined8 *)(puVar1 + 0xe8);
  func_0x00010c269d40(uVar32);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af6c0();
  _objc_release(uVar32);
  puVar1 = puVar1 + 0x240;
  _objc_loadWeakRetained(puVar1);
  func_0x00010beee6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d16a90; end: 106d16aeb; -[SCGalleryOperaActionHandlerSession _handleActionMenuBackupNow] */

void FUN_106d16a90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af6c0();
  _objc_release(uVar1);
  param_1 = param_1 + 0x240;
  _objc_loadWeakRetained(param_1);
  func_0x00010beee6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d16aec; end: 106d16baf; -[SCGalleryOperaActionHandlerSession _handleActionMenuRetryBackupForPage:] */

void FUN_106d16aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bdcffa0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d16bb0; end: 106d16bf7;  */

void FUN_106d16bb0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be252a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d16bf8; end: 106d16cfb; -[SCGalleryOperaActionHandlerSession _handleActionMenuRetryBackupForSnap:] */

void FUN_106d16bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2220;
  _objc_alloc(PTR_PTR_1126b2220);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a560(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec3478,
                      &PTR____CFConstantStringClassReference_110e844d8,puVar2,0,0,0,0);
  func_0x00010c13f6a0(uVar3,param_2,param_3,puVar1,0);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar3);
  param_1 = param_1 + 0x240;
  _objc_loadWeakRetained(param_1);
  func_0x00010beee6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d16cfc; end: 106d16dd3; -[SCGalleryOperaActionHandlerSession _handleActionMenuFavoriteForPage:] */

void FUN_106d16cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bdcff80(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d16dd4; end: 106d16e27;  */

void FUN_106d16dd4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcfe20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d16e28; end: 106d16f9f; -[SCGalleryOperaActionHandlerSession _asyncHandleActionMenuFavoriteForPage:operaSnap:] */

void FUN_106d16e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106d16fa0;
  puStack_80 = &UNK_1109760f8;
  uStack_78 = param_1;
  _objc_retain(param_3);
  uVar1 = (undefined1)uVar5;
  puStack_d0 = puVar2;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106d16fb8;
  puStack_b8 = &UNK_110976128;
  uStack_b0 = param_1;
  uStack_70 = param_3;
  uStack_68 = uVar1;
  _objc_retain(param_3);
  puStack_108 = puVar2;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x106d17080;
  puStack_f0 = &UNK_1109760f8;
  uStack_e8 = param_1;
  uStack_e0 = param_3;
  uStack_d8 = uVar1;
  uStack_a8 = param_3;
  uStack_a0 = uVar1;
  _objc_retain(param_3);
  func_0x00010c0bfe60(param_4,param_2,&puStack_98,&puStack_d0,&PTR___NSConcreteGlobalBlock_110976158
                      ,&puStack_108);
  _objc_release(param_4);
  _objc_release(uStack_e0);
  _objc_release(uStack_a8);
  _objc_release(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d16fa0; end: 106d16fb7;  */

void FUN_106d16fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010beccc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__toggleFavoriteStateForSnap_entr_112590ca8,
             param_2,param_3,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 106d16fb8; end: 106d17067;  */

void FUN_106d16fb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x218);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 106d17068; end: 106d17097;  */

void FUN_106d17068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beccbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__toggleFavoriteStateForAsset_pag_112590c98,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined1 *)(param_1 + 0x38));
  return;
}



/* Entry: 106d17098; end: 106d171e3; -[SCGalleryOperaActionHandlerSession _toggleFavoriteStateForAsset:page:isFavorited:] */

void FUN_106d17098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106d171e4;
  puStack_68 = &UNK_110845ce0;
  _objc_retain(param_3);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106d17230;
  puStack_a8 = &UNK_110976178;
  uStack_a0 = param_1;
  uStack_98 = param_4;
  uStack_90 = param_3;
  uStack_88 = param_5;
  uStack_60 = param_3;
  uStack_58 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f84e0(puVar2,param_2,&puStack_80,&puStack_c0);
  _objc_release(puVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 106d171e4; end: 106d1722f;  */

void FUN_106d171e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948;
  func_0x00010bf35020(PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948,param_2,
                      *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d17230; end: 106d1737b;  */

void FUN_106d17230(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_2 != 0) {
    uVar1 = *(long *)(param_1 + 0x20) + 0x18;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x20) + 0x18;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c264500();
      _objc_release(lVar3);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c118b40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c99e0;
      func_0x00010bf249a0(PTR_PTR_1126c99e0);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c0e00e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 4;
      func_0x00010bafa2a4(4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1b60(uVar4);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 106d1737c; end: 106d174d3; -[SCGalleryOperaActionHandlerSession _toggleFavoriteStateForSnap:entryInfo:page:isFavorited:] */

void FUN_106d1737c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b5b28;
  func_0x00010bfa0ee0(PTR_PTR_1126b5b28);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  uStack_60 = param_6;
  _objc_retain(param_5);
  func_0x00010bdcfd40(param_1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d174d4; end: 106d177bf;  */

void FUN_106d174d4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  puVar1 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    if (param_2 == 0) {
      puVar4 = puVar1;
      func_0x000108dfd89c();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107e85a64();
    }
    else {
      puVar4 = PTR_PTR_1126b2220;
      _objc_alloc(PTR_PTR_1126b2220);
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 4;
      func_0x00010bafa2a4(4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a560(puVar4);
      _objc_release(uVar3);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
      _objc_release(puVar2);
      uVar3 = *(undefined8 *)(puVar1 + 0x98);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar5);
      func_0x00010c2728e0(uVar3);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(param_4);
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 106d177c0; end: 106d177c7;  */

void FUN_106d177c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 106d177c8; end: 106d178e7; -[SCGalleryOperaActionHandlerSession _handleLivePhotoButtonTapped:params:] */

void FUN_106d177c8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c99e0;
  _objc_retain(param_4);
  func_0x00010c09a9e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    uVar4 = uVar3;
    func_0x00010c2827c0(uVar3);
    FUN_106d4af5c();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c6040();
    _objc_release(uVar5);
    _objc_release(uVar4);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2827c0(uVar3);
    func_0x00010c288980(param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d178e8; end: 106d17aa7; -[SCGalleryOperaActionHandlerSession _asyncFetchEntryBasedOnSnap:forEvent:completionHandler:] */

void FUN_106d178e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_106d14d5c;
  uStack_88 = 0x106d14d6c;
  _objc_retain(param_3);
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_106d14d5c;
  uStack_b8 = 0x106d14d6c;
  uStack_b0 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x218);
  uStack_80 = param_3;
  _objc_copyWeak(auStack_e0,auStack_78);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d17aa8; end: 106d17dbf;  */

undefined ** FUN_106d17aa8(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)(param_1 + 0x40);
  _objc_loadWeakRetained();
  if (ppuVar1 == (undefined **)0x0) goto LAB_106d17d80;
  puVar2 = ppuVar1[0x15];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bfa7040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar6 = PTR_PTR_1126af4d0;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar5 == (undefined *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = ppuVar1[0x1e];
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar8 = *(undefined8 *)(lVar9 + 0x28);
    *(undefined **)(lVar9 + 0x28) = puVar6;
    _objc_release(uVar8);
    _objc_release(puVar5);
    _objc_release(uVar7);
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar6 = ppuVar1[0x15];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bfa7040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (puVar5 != (undefined *)0x0) goto LAB_106d17b28;
    }
  }
  else {
LAB_106d17b28:
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010c0d21e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar9 != 0) {
      puVar4 = ppuVar1[0x15];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bfa7340();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar7 = *(undefined8 *)(lVar9 + 0x28);
      *(undefined **)(lVar9 + 0x28) = puVar6;
      _objc_release(uVar7);
      _objc_release(puVar4);
      uStack_68 = *(undefined8 *)(param_1 + 0x30);
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      puStack_88 = puVar2;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_106d17dc0;
      puStack_70 = &UNK_110976228;
      func_0x00010c14cca0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar8 = *(undefined8 *)(lVar9 + 0x28);
      *(undefined8 *)(lVar9 + 0x28) = uVar7;
      _objc_release(uVar8);
    }
  }
  lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  func_0x00010bf529e0();
  if ((lVar9 == 0) &&
     (lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28), lVar9 != 0)) {
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = lVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar7 = *(undefined8 *)(lVar9 + 0x28);
    *(undefined **)(lVar9 + 0x28) = puVar6;
    _objc_release(uVar7);
  }
  puStack_c8 = puVar2;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106d17e38;
  puStack_b0 = &UNK_11090f5b8;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar7);
  uStack_90 = *(undefined8 *)(param_1 + 0x38);
  uStack_98 = *(undefined8 *)(param_1 + 0x30);
  puStack_a8 = puVar5;
  uStack_a0 = uVar7;
  _objc_retain(puVar5);
  param_2 = &puStack_c8;
  func_0x000100162d98("APPSTORE",param_2);
  _objc_release(puStack_a8);
  _objc_release(uStack_a0);
  _objc_release(puVar5);
LAB_106d17d80:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010c0d21e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(*(long *)(ppuVar1[4] + 8) + 0x28);
    func_0x00010c0d21e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_2;
    func_0x00010c0720c0(param_2);
    _objc_release(uVar7);
    _objc_release(param_2);
    return ppuVar1;
  }
  return ppuVar1;
}



/* Entry: 106d17dc0; end: 106d17e37;  */

undefined8 FUN_106d17dc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0d21e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010c0d21e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106d17e38; end: 106d17e5b;  */

void FUN_106d17e38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d17e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  return;
}



/* Entry: 106d17e5c; end: 106d17f33; -[SCGalleryOperaActionHandlerSession _handleActionMenuExportForPage:] */

void FUN_106d17e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bdcff80(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d17f34; end: 106d17f87;  */

void FUN_106d17f34(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcfe00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d17f88; end: 106d180c3; -[SCGalleryOperaActionHandlerSession _asyncHandleActionMenuExportForOperaSnap:page:] */

void FUN_106d17f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106d180c4;
  puStack_68 = &UNK_1109762b8;
  uStack_60 = param_1;
  _objc_retain(param_4);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106d18294;
  puStack_98 = &UNK_1109762e8;
  uStack_90 = param_1;
  uStack_58 = param_4;
  _objc_retain(param_4);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106d182b0;
  puStack_c8 = &UNK_110976318;
  uStack_c0 = param_1;
  uStack_88 = param_4;
  _objc_retain(param_4);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_106d184f8;
  puStack_f8 = &UNK_1109762b8;
  uStack_f0 = param_1;
  uStack_e8 = param_4;
  uStack_b8 = param_4;
  _objc_retain(param_4);
  func_0x00010c0bfe60(param_3,param_2,&puStack_80,&puStack_b0,&puStack_e0,&puStack_110);
  _objc_release(uStack_e8);
  _objc_release(uStack_b8);
  _objc_release(uStack_88);
  _objc_release(uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d180c4; end: 106d181eb;  */

void FUN_106d180c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c1100e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010bdcfd40(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d181ec; end: 106d18293;  */

void FUN_106d181ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010b5fa088(param_3);
    func_0x00010be25220(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d18294; end: 106d182af;  */

void FUN_106d18294(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be25230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleActionMenuExportForItem_s_112566e28,
             param_2,0,0,0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106d182b0; end: 106d1840f;  */

void FUN_106d182b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010c1100e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010bdcfd40(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d18410; end: 106d184f7;  */

void FUN_106d18410(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  lVar3 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010be25220(param_1);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar2);
  _objc_retain(lVar3);
  _objc_initWeak(auStack_98,*(undefined8 *)(param_2 + 0x20));
  func_0x00010be877c0(*(undefined8 *)(param_2 + 0x20));
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c1100e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,auStack_98);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar5);
  func_0x00010bdcfd40(uVar6);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 106d184f8; end: 106d1862f;  */

void FUN_106d184f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  func_0x00010be877c0(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c1100e0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010bdcfd40(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d18630; end: 106d18717;  */

void FUN_106d18630(long param_1,undefined **param_2,undefined **param_3,undefined **param_4,
                  undefined *param_5,int param_6,undefined **param_7)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined1 auStack_1c8 [8];
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  long lStack_c0;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar6 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar6 != 0) {
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_50 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_7 = *(undefined ***)(param_1 + 0x20);
    param_6 = 0;
    ppuVar8 = param_2;
    param_4 = param_3;
    param_5 = puVar10;
    func_0x00010be25220(lVar6);
    _objc_release(puVar10);
  }
  _objc_release(lVar6);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_106d18718;
  lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar8);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuStack_140 = param_7;
  _objc_retain(param_7);
  if (param_6 != 0) {
    ppuVar2 = param_2 + 6;
    _objc_loadWeakRetained(ppuVar2);
    ppuVar7 = param_2;
    _objc_opt_class(param_2);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6200(ppuVar2);
    _objc_release(ppuVar7);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_2;
  if (param_4 != (undefined **)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_c8 = param_4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    func_0x000109023ef8();
    _objc_release(puVar10);
    if ((int)puVar3 != 0) {
      ppuVar9 = (undefined **)PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      ppuVar7 = param_2 + 4;
      _objc_loadWeakRetained(ppuVar7);
      func_0x00010c038f40(ppuVar9);
      _objc_release(ppuVar7);
      puVar10 = param_2[0x2b];
      ppuVar7 = param_2 + 4;
      _objc_loadWeakRetained();
      func_0x00010bdf32e0(param_2);
      func_0x00010bf23d80(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      func_0x00010bf9d620(param_2[0x2a]);
      _objc_release(puVar10);
      goto LAB_106d18cc4;
    }
  }
  ppuVar9 = (undefined **)param_2[0x27];
  _objc_retain(ppuVar9);
  _objc_initWeak(auStack_e8,param_2[0x27]);
  puVar4 = param_2[0x23];
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar10;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar3;
  _objc_release(puVar10);
  _objc_release(puVar4);
  puVar10 = PTR_PTR_1126aead8;
  _objc_alloc();
  ppuVar7 = param_2 + 4;
  _objc_loadWeakRetained(ppuVar7);
  func_0x00010c038f40();
  puStack_150 = puVar10;
  _objc_release(ppuVar7);
  ppuVar5 = (undefined **)param_2[0xe];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar5;
  func_0x00010c0c7580();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_158 = ppuVar7;
  _objc_release(ppuVar5);
  if (ppuVar8 == (undefined **)0x0) {
    lVar6 = 0;
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_d0 = ppuVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000107da0334();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (puVar10 == (undefined *)0x0) {
      lVar6 = 0;
    }
    else {
      puVar3 = puVar10;
      func_0x00010bf977c0();
      lVar6 = (long)(int)puVar3;
      func_0x00010b5f5864(lVar6,puVar10);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  ppuVar7 = (undefined **)param_2[0xe];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar7;
  func_0x00010bf5f400();
  ppuStack_160 = ppuVar5;
  _objc_release(ppuVar7);
  puVar3 = param_5;
  func_0x00010bf529e0();
  if ((puVar3 == (undefined *)0x0) ||
     (puVar3 = param_5, func_0x00010b5f9920(), ((ulong)puVar3 & 1) != 0)) {
    if (ppuVar8 == (undefined **)0x0) {
LAB_106d18a80:
      func_0x00010be7ee80(param_2);
    }
    else {
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_d8 = ppuVar8;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar7;
      func_0x000107da05cc();
      if (((ulong)ppuVar5 & 1) == 0) {
        _objc_release(ppuVar7);
      }
      else {
        iVar1 = (int)param_2[7];
        func_0x000108faa47c();
        _objc_release(ppuVar7);
        if (iVar1 == 0) goto LAB_106d18a80;
      }
      ppuVar2 = ppuStack_140;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c99e0;
      func_0x00010bf249a0(PTR_PTR_1126c99e0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar2;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_168 = ppuVar7;
      _objc_release(puVar3);
      _objc_release(ppuVar2);
      ppuVar2 = (undefined **)PTR_PTR_1126c38c0;
      _objc_alloc(PTR_PTR_1126c38c0);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_e0 = ppuVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf32e0(param_2);
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_106d18e80;
      puStack_120 = &UNK_110871898;
      _objc_copyWeak(auStack_118,auStack_e8);
      ppuStack_180 = ppuStack_168;
      ppuStack_190 = ppuStack_158;
      lStack_188 = lVar6;
      ppuStack_178 = &puStack_138;
      func_0x00010c016ec0(ppuVar2);
      _objc_release(puVar3);
      ppuVar7 = ppuVar9;
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar7 != (undefined **)0x0) {
        func_0x00010c12e1c0(ppuVar9);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      func_0x00010bf9d620(ppuVar9);
      _objc_release(ppuVar2);
      _objc_destroyWeak(auStack_118);
      _objc_release(ppuStack_168);
    }
  }
  else {
    ppuVar7 = (undefined **)PTR_PTR_1126c38c0;
    _objc_alloc();
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_106d18da4;
    puStack_f8 = &UNK_110871898;
    ppuVar2 = &puStack_110;
    _objc_copyWeak(auStack_f0,auStack_e8);
    ppuStack_190 = ppuStack_160;
    lStack_188 = lVar6;
    ppuStack_180 = ppuVar2;
    func_0x00010c017320();
    func_0x00010bf9d620(ppuVar9);
    _objc_release(ppuVar7);
    _objc_destroyWeak(auStack_f0);
  }
  _objc_release(lVar6);
  _objc_release(puVar10);
  _objc_release(ppuStack_158);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_destroyWeak(auStack_e8);
LAB_106d18cc4:
  _objc_release(ppuVar9);
  _objc_release(ppuStack_140);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar2 + 4);
  _objc_destroyWeak(auStack_e8);
  ppuVar2 = ppuVar8;
  __Unwind_Resume(ppuVar8);
  pcStack_198 = FUN_106d18da4;
  ppuVar9 = ppuVar2;
  ppuStack_1c0 = ppuVar7;
  puStack_1b8 = param_5;
  ppuStack_1b0 = param_4;
  ppuStack_1a8 = ppuVar8;
  ppuStack_1a0 = &puStack_60;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1c8,ppuVar2 + 4);
  func_0x00010c0f7fc0(ppuVar9);
  _objc_release(ppuVar9);
  _objc_destroyWeak(auStack_1c8);
  return;
}



/* Entry: 106d18718; end: 106d18da3; -[SCGalleryOperaActionHandlerSession _handleActionMenuExportForItem:snap:snaps:shouldPauseVideo:page:] */

void FUN_106d18718(undefined **param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  int param_6,undefined **param_7)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined1 auStack_178 [8];
  undefined **ppuStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuStack_f0 = param_7;
  _objc_retain(param_7);
  if (param_6 != 0) {
    ppuVar2 = param_1 + 6;
    _objc_loadWeakRetained(ppuVar2);
    ppuVar7 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6200(ppuVar2);
    _objc_release(ppuVar7);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_1;
  if (param_4 != 0) {
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = param_4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    func_0x000109023ef8();
    _objc_release(puVar11);
    if ((int)puVar3 != 0) {
      ppuVar10 = (undefined **)PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      ppuVar7 = param_1 + 4;
      _objc_loadWeakRetained(ppuVar7);
      func_0x00010c038f40(ppuVar10);
      _objc_release(ppuVar7);
      puVar11 = param_1[0x2b];
      ppuVar7 = param_1 + 4;
      _objc_loadWeakRetained();
      func_0x00010bdf32e0(param_1);
      func_0x00010bf23d80(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      func_0x00010bf9d620(param_1[0x2a]);
      _objc_release(puVar11);
      goto LAB_106d18cc4;
    }
  }
  ppuVar10 = (undefined **)param_1[0x27];
  _objc_retain(ppuVar10);
  _objc_initWeak(auStack_98,param_1[0x27]);
  puVar4 = param_1[0x23];
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar11;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar3;
  _objc_release(puVar11);
  _objc_release(puVar4);
  puVar11 = PTR_PTR_1126aead8;
  _objc_alloc();
  ppuVar7 = param_1 + 4;
  _objc_loadWeakRetained(ppuVar7);
  func_0x00010c038f40();
  puStack_100 = puVar11;
  _objc_release(ppuVar7);
  ppuVar5 = (undefined **)param_1[0xe];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar5;
  func_0x00010c0c7580();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = ppuVar7;
  _objc_release(ppuVar5);
  if (param_3 == 0) {
    lVar6 = 0;
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_80 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000107da0334();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (puVar11 == (undefined *)0x0) {
      lVar6 = 0;
    }
    else {
      puVar3 = puVar11;
      func_0x00010bf977c0();
      lVar6 = (long)(int)puVar3;
      func_0x00010b5f5864(lVar6,puVar11);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  ppuVar7 = (undefined **)param_1[0xe];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar7;
  func_0x00010bf5f400();
  ppuStack_110 = ppuVar5;
  _objc_release(ppuVar7);
  uVar8 = param_5;
  func_0x00010bf529e0();
  if ((uVar8 == 0) || (uVar8 = param_5, func_0x00010b5f9920(), (uVar8 & 1) != 0)) {
    if (param_3 == 0) {
LAB_106d18a80:
      func_0x00010be7ee80(param_1);
    }
    else {
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_88 = param_3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar7;
      func_0x000107da05cc();
      if (((ulong)ppuVar5 & 1) == 0) {
        _objc_release(ppuVar7);
      }
      else {
        iVar1 = (int)param_1[7];
        func_0x000108faa47c();
        _objc_release(ppuVar7);
        if (iVar1 == 0) goto LAB_106d18a80;
      }
      ppuVar2 = ppuStack_f0;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c99e0;
      func_0x00010bf249a0(PTR_PTR_1126c99e0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar2;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_118 = ppuVar7;
      _objc_release(puVar3);
      _objc_release(ppuVar2);
      ppuVar2 = (undefined **)PTR_PTR_1126c38c0;
      _objc_alloc(PTR_PTR_1126c38c0);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_90 = param_3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf32e0(param_1);
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_106d18e80;
      puStack_d0 = &UNK_110871898;
      _objc_copyWeak(auStack_c8,auStack_98);
      ppuStack_130 = ppuStack_118;
      ppuStack_140 = ppuStack_108;
      lStack_138 = lVar6;
      ppuStack_128 = &puStack_e8;
      func_0x00010c016ec0(ppuVar2);
      _objc_release(puVar3);
      ppuVar7 = ppuVar10;
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar7 != (undefined **)0x0) {
        func_0x00010c12e1c0(ppuVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      func_0x00010bf9d620(ppuVar10);
      _objc_release(ppuVar2);
      _objc_destroyWeak(auStack_c8);
      _objc_release(ppuStack_118);
    }
  }
  else {
    ppuVar7 = (undefined **)PTR_PTR_1126c38c0;
    _objc_alloc();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_106d18da4;
    puStack_a8 = &UNK_110871898;
    ppuVar2 = &puStack_c0;
    _objc_copyWeak(auStack_a0,auStack_98);
    ppuStack_140 = ppuStack_110;
    lStack_138 = lVar6;
    ppuStack_130 = ppuVar2;
    func_0x00010c017320();
    func_0x00010bf9d620(ppuVar10);
    _objc_release(ppuVar7);
    _objc_destroyWeak(auStack_a0);
  }
  _objc_release(lVar6);
  _objc_release(puVar11);
  _objc_release(ppuStack_108);
  _objc_release(puStack_100);
  _objc_release(puStack_f8);
  _objc_destroyWeak(auStack_98);
LAB_106d18cc4:
  _objc_release(ppuVar10);
  _objc_release(ppuStack_f0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar2 + 4);
  _objc_destroyWeak(auStack_98);
  lVar6 = param_3;
  __Unwind_Resume(param_3);
  pcStack_148 = FUN_106d18da4;
  lVar9 = lVar6;
  ppuStack_170 = ppuVar7;
  uStack_168 = param_5;
  lStack_160 = param_4;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_178,lVar6 + 0x20);
  func_0x00010c0f7fc0(lVar9);
  _objc_release(lVar9);
  _objc_destroyWeak(auStack_178);
  return;
}



/* Entry: 106d18da4; end: 106d18e4b;  */

void FUN_106d18da4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106d18e4c; end: 106d18e7f;  */

void FUN_106d18e4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d18e80; end: 106d18f27;  */

void FUN_106d18e80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106d18f28; end: 106d18f5b;  */

void FUN_106d18f28(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d18f5c; end: 106d19057; -[SCGalleryOperaActionHandlerSession _handleIntegratedActionMenuPostToStoryForPage:fromActionMenu:params:] */

void FUN_106d18f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_4;
  _objc_retain(param_3);
  func_0x00010bdcff80(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106d19058; end: 106d190af;  */

void FUN_106d19058(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcfe40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d190b0; end: 106d1918f; -[SCGalleryOperaActionHandlerSession _handleActionMenuPostToStoryForPage:fromActionMenu:] */

void FUN_106d190b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_4;
  _objc_retain(param_3);
  func_0x00010bdcff80(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d19190; end: 106d191e7;  */

void FUN_106d19190(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcfe40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d191e8; end: 106d19403; -[SCGalleryOperaActionHandlerSession _asyncHandleActionMenuPostToStoryFromActionMenu:operaSnap:page:] */

void FUN_106d191e8(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  byte bStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  byte bStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  byte bStack_78;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b5b28;
  puVar1 = PTR_PTR_1126b2d30;
  if ((param_3 & 1) == 0) {
    _objc_retain(param_4);
    func_0x00010c1052e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    func_0x00010c11e700();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
  }
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106d19404;
  puStack_a0 = &UNK_1109763a8;
  uStack_98 = param_1;
  _objc_retain();
  puStack_90 = puVar3;
  _objc_retain(puVar2);
  uStack_80 = 2;
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_106d195ec;
  puStack_d8 = &UNK_1109763d8;
  uStack_d0 = param_1;
  puStack_88 = puVar2;
  bStack_78 = param_3;
  _objc_retain(puVar3);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_106d19764;
  puStack_120 = &UNK_110976438;
  uStack_118 = param_1;
  puStack_c8 = puVar3;
  uStack_c0 = param_5;
  _objc_retain(puVar3);
  puStack_110 = puVar3;
  _objc_retain(puVar2);
  uStack_100 = 2;
  puStack_180 = puVar1;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_106d19b00;
  puStack_168 = &UNK_1109763a8;
  uStack_148 = 2;
  uStack_160 = param_1;
  puStack_158 = puVar3;
  puStack_150 = puVar2;
  bStack_140 = param_3;
  puStack_108 = puVar2;
  bStack_f8 = param_3;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  _objc_retain(param_5);
  func_0x00010c0bfe60(param_4,param_2,&puStack_b8,&puStack_f0,&puStack_138,&puStack_180);
  _objc_release(param_4);
  _objc_release(puStack_150);
  _objc_release(puStack_158);
  _objc_release(puStack_108);
  _objc_release(puStack_110);
  _objc_release(uStack_c0);
  _objc_release(puStack_c8);
  _objc_release(puStack_88);
  _objc_release(puStack_90);
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106d19404; end: 106d1954f;  */

void FUN_106d19404(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7380();
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_60 = *(undefined1 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bdcfd40(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d19550; end: 106d195eb;  */

void FUN_106d19550(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be28be0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d195ec; end: 106d19763;  */

void FUN_106d195ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7320();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x000107f6ff64(param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  if ((int)uVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    FUN_106d4ac3c();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c110a60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x20) + 0x20;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bdf32e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c10dc40(uVar1);
    _objc_release(lVar3);
    _objc_release(uVar1);
  }
  else {
    func_0x000109127d28();
    func_0x000107f6fef4(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
    lVar2 = *(long *)(param_1 + 0x20) + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x000108df9e90();
  }
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20) + 0x240;
  _objc_loadWeakRetained(lVar2);
  func_0x00010beee6a0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d19764; end: 106d19a2b;  */

void FUN_106d19764(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [136];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar3 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar3);
  _objc_initWeak(auStack_f8,*(undefined8 *)(param_1 + 0x20));
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_130;
    do {
      lVar7 = 0;
      do {
        if (*plStack_130 != lVar5) {
          _objc_enumerationMutation(param_2);
        }
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a7380();
        _objc_release(uVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_2;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_f8;
  _objc_copyWeak(auStack_158,puVar4);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  uStack_148 = *(undefined1 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar6);
  uStack_150 = *(undefined8 *)(param_1 + 0x38);
  lVar5 = lVar2;
  func_0x00010bdcfd40(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_f8);
  __Unwind_Resume();
  _objc_retain(puVar4);
  _objc_retain(lVar5);
  lVar2 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf97200(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bf51e00(uVar6);
    func_0x00010be28be0(lVar2);
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106d19a2c; end: 106d19aff;  */

void FUN_106d19a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf97200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar3);
    func_0x00010be28be0(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d19b00; end: 106d19c53;  */

void FUN_106d19b00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7380();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_60 = *(undefined1 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bdcfd40(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d19c54; end: 106d19cef;  */

void FUN_106d19c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be28be0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d19cf0; end: 106d19e1f; -[SCGalleryOperaActionHandlerSession _handleIntegratedActionMenuPostToSpotlightForPage:fromActionMenu:params:] */

void FUN_106d19cf0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bdcff80(param_1);
  param_1 = param_1 + 0x240;
  _objc_loadWeakRetained(param_1);
  func_0x00010beee6a0();
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106d19e20; end: 106d19eb7;  */

void FUN_106d19e20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b5b28;
  func_0x00010c105200(PTR_PTR_1126b5b28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcfe60(param_1);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d19eb8; end: 106d19f7b; -[SCGalleryOperaActionHandlerSession _handleActionMenuDreamsFeedbackForPage:] */

void FUN_106d19eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bdcff80(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d19f7c; end: 106d1a077;  */

void FUN_106d19f7c(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106d1a078;
  puStack_60 = &UNK_110976498;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bfe60(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1a078; end: 106d1a0e7;  */

void FUN_106d1a078(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be6d120(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d1a0e8; end: 106d1a0ef;  */

void FUN_106d1a0e8(void)

{
  return;
}



/* Entry: 106d1a0f0; end: 106d1a15f;  */

void FUN_106d1a0f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be6d120(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d1a160; end: 106d1a1b7; -[SCGalleryOperaActionHandlerSession _lazilyCreateMashupEditRouter] */

void FUN_106d1a160(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x1f8);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126d2390;
    _objc_alloc();
    func_0x00010c03c8e0();
    uVar2 = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined **)(param_1 + 0x1f8) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x1f8);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106d1a1b8; end: 106d1a2b7; -[SCGalleryOperaActionHandlerSession _asyncFetchMashupEditRedirectInputsForSnap:completionHandler:] */

void FUN_106d1a1b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x218);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1a2b8; end: 106d1a453;  */

void FUN_106d1a2b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000108020568();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = *(undefined **)(param_1 + 0x20);
    func_0x00010bf5a5a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR____NSArray0__struct_11034ab48;
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (puVar5 != (undefined *)0x0) {
      puVar1 = puVar5;
    }
    _objc_retain(puVar1);
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bf529e0();
    if (puVar5 != (undefined *)0x0) {
      puVar6 = *(undefined **)(lVar2 + 0xa8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bfa7560();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) {
        puVar7 = puVar5;
      }
      _objc_retain(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar6);
    }
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106d1a454;
    puStack_70 = &UNK_11084a9e8;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uStack_68 = uVar4;
    puStack_60 = puVar7;
    uStack_58 = uVar3;
    _objc_retain(puVar7);
    _objc_retain(uVar4);
    func_0x000100162d98("APPSTORE",&puStack_88);
    _objc_release(puStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_58);
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(puVar1);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106d1a454; end: 106d1a467;  */

void FUN_106d1a454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d1a464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106d1a468; end: 106d1a647; -[SCGalleryOperaActionHandlerSession _attemptMashupEditRedirectForSnap:page:orLaunchEditor:] */

void FUN_106d1a468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x130);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf8c4e0();
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    (**(code **)(param_5 + 0x10))(param_5);
  }
  else {
    uVar3 = param_1 + 0x18;
    _objc_loadWeakRetained();
    uVar1 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar1 = param_1 + 0x18;
      _objc_loadWeakRetained();
      uVar3 = uVar1;
      func_0x00010bf5f660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
    }
    puVar2 = PTR_PTR_1126cdc40;
    _objc_opt_class(PTR_PTR_1126cdc40);
    uVar1 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      _objc_retain(param_5);
      func_0x00010bdcfd60(param_1);
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1a648; end: 106d1a743;  */

void FUN_106d1a648(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_106d1a714;
  lVar2 = lVar1;
  func_0x00010be49a60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 == 0) || (lVar3 == 0)) {
LAB_106d1a6f8:
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  else {
    lVar4 = lVar2;
    func_0x00010bfd0f00();
    if ((int)lVar4 == 0) goto LAB_106d1a6f8;
    lVar4 = lVar1 + 0x240;
    _objc_loadWeakRetained(lVar4);
    func_0x00010beee6a0();
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_106d1a714:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1a744; end: 106d1a843; -[SCGalleryOperaActionHandlerSession _handleActionMenuEditForPage:event:] */

void FUN_106d1a744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bdcff80(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1a844; end: 106d1a897;  */

void FUN_106d1a844(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcfde0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d1a898; end: 106d1a91b; -[SCGalleryOperaActionHandlerSession _asyncHandleActionMenuEditFromOperaSnap:page:event:] */

void FUN_106d1a898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be40a60(param_1,param_2,param_5);
  func_0x00010bdcfea0(param_1,param_2,uVar1,param_3,param_5,0,param_4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d1a91c; end: 106d1aadf; -[SCGalleryOperaActionHandlerSession _asyncHandleEditFromActionMenu:operaSnap:event:preselectedPreviewTool:page:] */

void FUN_106d1a91c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106d1aae0;
  puStack_a8 = &UNK_110976598;
  uStack_a0 = param_1;
  _objc_retain(param_5);
  uStack_80 = 2;
  uStack_98 = param_5;
  uStack_88 = param_6;
  uStack_78 = param_3;
  _objc_retain(param_7);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_106d1ad70;
  puStack_f8 = &UNK_1109765c8;
  uStack_90 = param_7;
  _objc_retain(param_7);
  uStack_f0 = param_7;
  _objc_retain(param_5);
  uStack_d8 = 2;
  puStack_158 = puVar1;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_106d1ae74;
  puStack_140 = &UNK_110976628;
  uStack_138 = param_1;
  uStack_e8 = param_5;
  uStack_e0 = param_1;
  uStack_d0 = param_6;
  uStack_c8 = param_3;
  _objc_retain(param_5);
  uStack_120 = 2;
  puStack_1a8 = puVar1;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_106d1b10c;
  puStack_190 = &UNK_110976598;
  uStack_168 = 2;
  uStack_188 = param_1;
  uStack_180 = param_5;
  uStack_178 = param_7;
  uStack_170 = param_6;
  uStack_160 = param_3;
  uStack_130 = param_5;
  uStack_128 = param_6;
  uStack_118 = param_3;
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010c0bfe60(param_4,param_2,&puStack_c0,&puStack_110,&puStack_158,&puStack_1a8);
  _objc_release(uStack_178);
  _objc_release(uStack_180);
  _objc_release(uStack_130);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106d1aae0; end: 106d1ac0f;  */

void FUN_106d1aae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_78,auStack_58);
  uStack_60 = *(undefined1 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uStack_68 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010bdcfd40(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1ac10; end: 106d1ad2b;  */

void FUN_106d1ac10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106d1ad2c;
    puStack_80 = &UNK_1108e7718;
    lStack_78 = lVar1;
    _objc_retain(param_2);
    uStack_70 = param_2;
    _objc_retain(param_3);
    uStack_48 = *(undefined1 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_68 = param_3;
    _objc_retain(uVar3);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    ppuVar2 = &puStack_98;
    uStack_60 = uVar3;
    _objc_retainBlock(ppuVar2);
    func_0x00010bdd0c60(lVar1);
    _objc_release(ppuVar2);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1ad2c; end: 106d1ad6f;  */

void FUN_106d1ad2c(long param_1,undefined8 param_2)

{
  func_0x00010be28be0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),0,0,*(undefined1 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x38),0);
  return;
}



/* Entry: 106d1ad70; end: 106d1ae73;  */

void FUN_106d1ad70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  FUN_106d4ac3c();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x28) == 0) {
    func_0x00010bdf32e0(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    func_0x00010be5f400();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c110a60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x30) + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c10dc40(uVar1);
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x30) + 0x240;
  _objc_loadWeakRetained(lVar2);
  func_0x00010beee6a0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106d1ae74; end: 106d1b03b;  */

void FUN_106d1ae74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_68);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  uStack_70 = *(undefined1 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uStack_78 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bdcfd40(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1b03c; end: 106d1b10b;  */

void FUN_106d1b03c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf97200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar3);
    func_0x00010be28be0(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d1b10c; end: 106d1b23b;  */

void FUN_106d1b10c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_78,auStack_58);
  uStack_60 = *(undefined1 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uStack_68 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010bdcfd40(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1b23c; end: 106d1b357;  */

void FUN_106d1b23c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106d1b358;
    puStack_80 = &UNK_1108e7718;
    lStack_78 = lVar1;
    _objc_retain(param_2);
    uStack_70 = param_2;
    _objc_retain(param_3);
    uStack_48 = *(undefined1 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_68 = param_3;
    _objc_retain(uVar3);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    ppuVar2 = &puStack_98;
    uStack_60 = uVar3;
    _objc_retainBlock(ppuVar2);
    func_0x00010bdd0c60(lVar1);
    _objc_release(ppuVar2);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d1b358; end: 106d1b39b;  */

void FUN_106d1b358(long param_1,undefined8 param_2)

{
  func_0x00010be28be0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),0,0,*(undefined1 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x38),0);
  return;
}



/* Entry: 106d1b39c; end: 106d1b3cf; -[SCGalleryOperaActionHandlerSession _handleEditForGalleryEntry:snap:snapDocEntryId:entryAssetsMap:fromActionMenu:shouldShowPostStorySelection:preselectedPreviewTool:animation:musicSelection:] */

void FUN_106d1b39c(void)

{
  func_0x00010be28be0();
  return;
}



/* Entry: 106d1b3d0; end: 106d1b663; -[SCGalleryOperaActionHandlerSession _handleEditForGalleryEntry:snap:snapDocEntryId:entryAssetsMap:fromActionMenu:event:shouldShowPostStorySelection:preselectedPreviewTool:animation:musicSelection:] */

void FUN_106d1b3d0(undefined8 param_1,undefined1 *param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long lVar1;
  undefined **unaff_x27;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_13);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = param_3;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    if (lVar1 == 4) {
      _objc_initWeak(auStack_80,param_1);
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_106d1b664;
      puStack_d8 = &UNK_110976658;
      unaff_x27 = &puStack_f0;
      param_2 = auStack_80;
      _objc_copyWeak(auStack_a0,param_2);
      _objc_retain(param_4);
      lStack_d0 = param_4;
      _objc_retain(param_3);
      lStack_c8 = param_3;
      _objc_retain(param_5);
      uStack_c0 = param_5;
      _objc_retain(param_6);
      uStack_b8 = param_6;
      uStack_88 = param_7;
      _objc_retain(param_8);
      uStack_87 = param_9;
      uStack_98 = param_11;
      uStack_90 = param_12;
      uStack_b0 = param_8;
      _objc_retain(param_13);
      uStack_a8 = param_13;
      func_0x00010bdcfd80(param_1);
      _objc_release(uStack_a8);
      _objc_release(uStack_b0);
      _objc_release(uStack_b8);
      _objc_release(uStack_c0);
      _objc_release(lStack_c8);
      _objc_release(lStack_d0);
      _objc_destroyWeak(auStack_a0);
      _objc_destroyWeak(auStack_80);
    }
    else {
      unaff_x27 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_78 = param_4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be77e00(param_1);
      _objc_release(unaff_x27);
    }
  }
  _objc_release(param_13);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 10);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x50;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    func_0x00010be77e00(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d1b664; end: 106d1b6eb;  */

void FUN_106d1b664(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be77e00(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d1b6ec; end: 106d1b7c3; -[SCGalleryOperaActionHandlerSession _prefetchUcoFilterIdsIfNeededForSnap:] */

void FUN_106d1b6ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x218);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1b7c4; end: 106d1b92b;  */

void FUN_106d1b7c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126bc7b8;
  if (lVar1 != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0xf0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7160(puVar3,param_2,uVar8,0,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    uVar2 = *(undefined8 *)(lVar1 + 0xd8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(puVar4,param_2,uVar2);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126d2398;
    _objc_alloc(PTR_PTR_1126d2398);
    puVar6 = puVar4;
    func_0x00010bfbc3e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057f80(puVar5,param_2,puVar6,0,0);
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c0ef4a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c2423c0(puVar5,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c108040(puVar5,param_2,puVar7,*(undefined8 *)(lVar1 + 0x218));
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d1b92c; end: 106d1bc3b; -[SCGalleryOperaActionHandlerSession _prepareAndPresentPreviewControllerWithGallerySnaps:primarySnap:entry:snapDocEntryId:entryAssetsMap:fromActionMenu:event:shouldShowPostStorySelection:preselectedPreviewTool:animation:musicSelection:] */

void FUN_106d1b92c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined1 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_15);
  uVar1 = param_5;
  func_0x00010b697ae8(param_5,3);
  if ((int)uVar1 != 0) {
    func_0x00010be777e0(param_2);
  }
  uVar1 = param_5;
  func_0x00010b5fa088();
  func_0x000106e1d104();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (param_7 != 0) {
    func_0x00010befa120(puVar2);
  }
  puVar3 = PTR_PTR_1126b24c8;
  _objc_alloc(PTR_PTR_1126b24c8);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  lVar5 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c0172a0(puVar3);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_80,param_2);
  _objc_copyWeak(auStack_a8,auStack_80);
  uStack_a0 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_10);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uStack_87 = param_11;
  uStack_98 = param_14;
  uStack_90 = param_13;
  uStack_88 = param_9;
  _objc_retain(param_15);
  func_0x00010c142c20(puVar3);
  _objc_release(param_15);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_15);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106d1bc3c; end: 106d1c32f;  */

ulong FUN_106d1bc3c(double param_1,long param_2,undefined1 *param_3,ulong param_4,long param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined1 *param_9)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined1 auStack_158 [8];
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
  puVar12 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_2 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    dVar22 = *(double *)(param_2 + 0x50);
    puVar2 = *(undefined1 **)(lVar1 + 0x70);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    func_0x000107d9fdf0((param_1 - dVar22) * 1000.0,2,puVar3,*(undefined8 *)(lVar1 + 0xe0));
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (((ulong)param_3 & 1) == 0) {
      if ((param_9 == (undefined1 *)0x0) ||
         (puVar12 = param_9, func_0x00010bf3ec40(), puVar12 == (undefined1 *)0xda)) {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        lStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        plStack_140 = (long *)0x0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        lVar13 = *(long *)(param_2 + 0x30);
        _objc_retain(lVar13);
        lVar9 = lVar13;
        func_0x00010bf52a60();
        if (lVar9 != 0) {
          lVar21 = *plStack_140;
          do {
            lVar20 = 0;
            do {
              if (*plStack_140 != lVar21) {
                _objc_enumerationMutation(lVar13);
              }
              uVar14 = *(undefined8 *)(lStack_148 + lVar20 * 8);
              uVar8 = uVar14;
              func_0x00010c241220(uVar14);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = param_4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(uVar8);
              if (uVar6 != 0) {
                uVar8 = uVar14;
                func_0x00010c241220(uVar14);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = param_4;
                func_0x00010c0e00e0(param_4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar4);
                _objc_release(uVar6);
                _objc_release(uVar8);
              }
              uVar8 = uVar14;
              func_0x00010c241220(uVar14);
              _objc_retainAutoreleasedReturnValue();
              lVar7 = param_5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(uVar8);
              if (lVar7 != 0) {
                uVar8 = uVar14;
                func_0x00010c241220(uVar14);
                _objc_retainAutoreleasedReturnValue();
                lVar7 = param_5;
                func_0x00010c0e00e0(param_5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c241220(uVar14);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar5);
                _objc_release(uVar14);
                _objc_release(lVar7);
                _objc_release(uVar8);
              }
              lVar20 = lVar20 + 1;
            } while (lVar9 != lVar20);
            lVar9 = lVar13;
            func_0x00010bf52a60();
          } while (lVar9 != 0);
        }
        _objc_release(lVar13);
        uVar8 = *(undefined8 *)(param_2 + 0x30);
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = *(undefined8 *)(param_2 + 0x20);
        puVar12 = *(undefined1 **)(param_2 + 0x38);
        func_0x00010b5f9bfc(uVar14,puVar12,param_7,param_8);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar1;
        func_0x00010be627a0();
        if ((int)lVar9 == 0) {
          if (*(long *)(param_2 + 0x28) == 0) {
            func_0x00010bdf32e0();
          }
          else {
            func_0x00010be5f400();
          }
          lVar13 = lVar1;
          func_0x00010c110a60(lVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar5;
          func_0x00010bf51e00(puVar5);
          uVar11 = param_6;
          func_0x00010bf51e00(param_6);
          lVar9 = lVar1 + 0x20;
          _objc_loadWeakRetained();
          func_0x00010c10dc00(lVar13);
          _objc_release(lVar9);
          _objc_release(uVar11);
          _objc_release(puVar10);
          _objc_release(lVar13);
          puVar10 = (undefined *)(lVar1 + 0x240);
          _objc_loadWeakRetained(puVar10);
          func_0x00010beee6a0();
        }
        else {
          puVar10 = puVar5;
          func_0x00010bf51e00();
          uVar11 = param_6;
          func_0x00010bf51e00();
          _objc_initWeak(auStack_158,lVar1);
          func_0x00010be4c7c0(lVar1);
          puVar12 = auStack_158;
          _objc_copyWeak(auStack_178,puVar12);
          uVar15 = *(undefined8 *)(param_2 + 0x28);
          _objc_retain(uVar15);
          uStack_160 = *(undefined1 *)(param_2 + 0x68);
          uVar16 = *(undefined8 *)(param_2 + 0x38);
          _objc_retain(uVar16);
          uVar17 = *(undefined8 *)(param_2 + 0x30);
          _objc_retain(uVar17);
          uVar18 = *(undefined8 *)(param_2 + 0x20);
          _objc_retain(uVar18);
          _objc_retain(puVar4);
          _objc_retain(puVar10);
          _objc_retain(uVar11);
          uStack_15f = *(undefined1 *)(param_2 + 0x69);
          uStack_168 = *(undefined8 *)(param_2 + 0x60);
          uStack_170 = *(undefined8 *)(param_2 + 0x58);
          uVar19 = *(undefined8 *)(param_2 + 0x40);
          _objc_retain(uVar19);
          func_0x00010bece800(lVar1);
          _objc_release(uVar19);
          _objc_release(uVar11);
          _objc_release(puVar10);
          _objc_release(puVar4);
          _objc_release(uVar18);
          _objc_release(uVar17);
          _objc_release(uVar16);
          _objc_release(uVar15);
          _objc_destroyWeak(auStack_178);
          _objc_destroyWeak(auStack_158);
          _objc_release(uVar11);
        }
        _objc_release(puVar10);
        _objc_release(uVar14);
        _objc_release(uVar8);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      else {
        lVar9 = lVar1 + 0x20;
        _objc_loadWeakRetained(lVar9);
        puVar12 = param_9;
        func_0x000107dffcbc();
        _objc_release(lVar9);
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_4;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_158);
  __Unwind_Resume(param_4);
  func_0x00010c23ff80(puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (ulong)(puVar12 == (undefined1 *)0x0);
}



/* Entry: 106d1c330; end: 106d1c367;  */

bool FUN_106d1c330(undefined8 param_1,long param_2)

{
  func_0x00010c23ff80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 == 0;
}



/* Entry: 106d1c368; end: 106d1c4bf;  */

void FUN_106d1c368(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010bdf32e0();
    }
    else {
      func_0x00010be5f400();
    }
    lVar2 = lVar1;
    func_0x00010c110a60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    func_0x00010c10dc00(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar3 = lVar1 + 0x240;
    _objc_loadWeakRetained(lVar3);
    func_0x00010beee6a0();
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d1c4c0; end: 106d1c5bf; -[SCGalleryOperaActionHandlerSession _asyncFetchSnapsWithEntry:completionHandler:] */

void FUN_106d1c4c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x218);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d1c5c0; end: 106d1c69f;  */

void FUN_106d1c5c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa7340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106d1c6a0;
    puStack_48 = &UNK_11084aaa8;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_40 = uVar3;
    uStack_38 = uVar2;
    _objc_retain(uVar3);
    func_0x000100162d98("APPSTORE",&puStack_60);
    _objc_release(uStack_40);
    _objc_release(uStack_38);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106d1c6a0; end: 106d1c6af;  */

void FUN_106d1c6a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d1c6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}


