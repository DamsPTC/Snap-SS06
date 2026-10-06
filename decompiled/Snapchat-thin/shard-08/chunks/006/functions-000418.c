/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10638d97c; end: 10638dabb; -[SCAdTrackOperaAdaptor _handleDeepLinkEvent:] */

void FUN_10638d97c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10638dac0;
  puStack_58 = &UNK_110847310;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10638db18;
  puStack_88 = &UNK_110848bd8;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10638db28;
  puStack_b8 = &UNK_110841f80;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x10638db3c;
  puStack_e8 = &UNK_110848bd8;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x10638db50;
  puStack_118 = &UNK_110841f80;
  uStack_110 = param_1;
  uStack_108 = uVar1;
  uStack_e0 = param_1;
  uStack_d8 = uVar1;
  uStack_b0 = param_1;
  uStack_a8 = uVar1;
  uStack_80 = param_1;
  uStack_78 = uVar1;
  uStack_50 = param_1;
  uStack_48 = uVar1;
  func_0x00010c0bc960(uVar2,param_2,&PTR___NSConcreteGlobalBlock_11091fa50,&puStack_70,&puStack_a0,
                      &puStack_d0,&puStack_100,&puStack_130);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10638dabc; end: 10638dabf;  */

void FUN_10638dabc(void)

{
  return;
}



/* Entry: 10638dac0; end: 10638db17;  */

void FUN_10638dac0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  func_0x00010bdfc3c0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10638db18; end: 10638db63;  */

void FUN_10638db18(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didOpenDeepLinkWithTrackCommon__11255d420,
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 10638db64; end: 10638dbff; -[SCAdTrackOperaAdaptor _handleDeepLinkEventV2:] */

void FUN_10638db64(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_release();
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x18);
    _objc_release();
    if (lVar1 == 2) {
      *(undefined1 *)(param_1 + 200) = 0;
      goto LAB_10638dbe4;
    }
  }
  lVar1 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_release();
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x18);
    _objc_release();
    if (lVar1 == 9) {
      func_0x00010be85fa0(param_1,param_2,param_3);
    }
  }
LAB_10638dbe4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10638dc00; end: 10638df3b; -[SCAdTrackOperaAdaptor _rePresentTopSnapAfterDeepLinkAttachmentDismissed:] */

void FUN_10638dc00(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    _objc_release();
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x70);
    _objc_release();
    if (lVar8 == 0x16) goto LAB_10638dee0;
  }
  uVar1 = *(ulong *)(param_1 + 0x48);
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(lVar8 + 0x28);
  }
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    _objc_release(lVar9);
    _objc_release(lVar8);
LAB_10638de40:
    uVar4 = *(ulong *)(param_1 + 0x50);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar8 + 0x20);
    }
    _objc_retain(uVar10);
    puVar7 = PTR_PTR_1126b3e90;
    func_0x00010befdec0(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ada0(uVar4);
    _objc_release(puVar7);
    _objc_release(uVar10);
LAB_10638dec8:
    _objc_release(lVar8);
    _objc_release(uVar4);
  }
  else {
    uVar4 = uVar1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar2 + 0x28);
    }
    _objc_retain(uVar10);
    uVar3 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar10);
    _objc_release(lVar2);
    _objc_release(uVar4);
    _objc_release(lVar9);
    _objc_release(lVar8);
    if ((uVar3 & 1) == 0) goto LAB_10638de40;
    uVar4 = uVar1;
    FUN_10638bb44();
    if (((uVar4 & 1) == 0) && ((*(byte *)(param_1 + 0xcb) & 1) == 0)) {
      lVar8 = param_1;
      func_0x00010be09220();
      if ((int)lVar8 != 0) {
        uVar4 = *(ulong *)(param_1 + 0x48);
        func_0x00010bf60c60();
        if ((uVar4 & 1) != 0) goto LAB_10638ded8;
      }
      uVar4 = *(ulong *)(param_1 + 0x48);
      func_0x00010bf5f8c0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126ca1a8;
      func_0x00010c089020(PTR_PTR_1126ca1a8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar7);
      uVar3 = uVar5;
      if ((uVar6 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar5);
      lVar9 = param_3;
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar9 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(lVar9 + 0x28);
      }
      _objc_retain(uVar10);
      lVar8 = param_1;
      func_0x00010bef5c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar10);
      _objc_release(lVar9);
      if (lVar8 == 0) {
        func_0x00010be4ff20(param_1);
      }
      else {
        func_0x00010be08540(param_1);
      }
      goto LAB_10638dec8;
    }
  }
LAB_10638ded8:
  _objc_release(uVar1);
LAB_10638dee0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10638df3c; end: 10638dfd3; -[SCAdTrackOperaAdaptor _nextAppInstallEvent:] */

void FUN_10638df3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf9a440();
  if (lVar1 == 1) {
    uVar3 = 1;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf9a440();
    if (lVar1 != 2) goto LAB_10638df8c;
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0xc9) = uVar3;
LAB_10638df8c:
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  puVar2 = PTR_PTR_1126b8e50;
  func_0x00010bf05760(PTR_PTR_1126b8e50,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10638dfd4; end: 10638e017; -[SCAdTrackOperaAdaptor _nextAdToMessageEvent:] */

void FUN_10638dfd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = PTR_PTR_1126b8e50;
  func_0x00010bef5a80(PTR_PTR_1126b8e50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10638e018; end: 10638e10f; -[SCAdTrackOperaAdaptor _didAttemptDeepLinkWithTrackCommon:] */

void FUN_10638e018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8e58;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8e40;
  func_0x00010bf68a40(PTR_PTR_1126b8e40,param_2,1,0,*(undefined8 *)(param_1 + 0xd0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000140(puVar1,param_2,param_3,puVar2);
  func_0x00010be639a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126b8e88;
  _objc_alloc(PTR_PTR_1126b8e88);
  puVar2 = PTR_PTR_1126b8e80;
  func_0x00010bf68540(PTR_PTR_1126b8e80,param_2,*(undefined8 *)(param_1 + 0xd0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000140(puVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
  func_0x00010be63800(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10638e110; end: 10638e217; -[SCAdTrackOperaAdaptor _didOpenDeepLinkWithTrackCommon:isInternal:] */

void FUN_10638e110(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined1 *)(param_1 + 200) = 0;
  puVar1 = PTR_PTR_1126b8e58;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8e40;
  func_0x00010bf68a40(PTR_PTR_1126b8e40,param_2,2,0,*(undefined8 *)(param_1 + 0xd0));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000140(puVar1,param_2,param_3,puVar2);
  func_0x00010be639a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126b8e88;
  _objc_alloc(PTR_PTR_1126b8e88);
  puVar2 = PTR_PTR_1126b8e80;
  func_0x00010bf68680(PTR_PTR_1126b8e80,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000140(puVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
  func_0x00010be63800(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10638e218; end: 10638e4c7; -[SCAdTrackOperaAdaptor _didFallbackWithFallbackType:trackCommon:enableCustomProductPageId:] */

void FUN_10638e218(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  if (param_3 < 2) {
    if (param_3 != 0) {
      if (param_3 != 1) goto LAB_10638e4b0;
      puVar3 = PTR_PTR_1126b8e58;
      _objc_alloc(PTR_PTR_1126b8e58);
      puVar1 = PTR_PTR_1126b8e40;
      func_0x00010bf68a40(PTR_PTR_1126b8e40,param_2,3,param_5,*(undefined8 *)(param_1 + 0xd0));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000140(puVar3,param_2,param_4,puVar1);
      func_0x00010be639a0(param_1,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar1);
      puVar3 = PTR_PTR_1126b8e88;
      _objc_alloc(PTR_PTR_1126b8e88);
      puVar1 = PTR_PTR_1126b8e80;
      func_0x00010bfa4820(PTR_PTR_1126b8e80);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10638e47c;
    }
    puVar1 = *(undefined **)(param_1 + 0x50);
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_4;
    func_0x00010bef2c20(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90,param_2,0x10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(puVar1,param_2,puVar3,puVar2,
                        &PTR____CFConstantStringClassReference_110e4cc78,
                        &PTR____CFConstantStringClassReference_110e4cc98);
    _objc_release(puVar2);
  }
  else {
    if (param_3 == 3) {
      puVar3 = PTR_PTR_1126b8e58;
      _objc_alloc(PTR_PTR_1126b8e58);
      puVar1 = PTR_PTR_1126b8e40;
      func_0x00010bf68a40(PTR_PTR_1126b8e40,param_2,4,param_5,*(undefined8 *)(param_1 + 0xd0));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000140(puVar3,param_2,param_4,puVar1);
      func_0x00010be639a0(param_1,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar1);
      puVar3 = PTR_PTR_1126b8e88;
      _objc_alloc(PTR_PTR_1126b8e88);
      puVar1 = PTR_PTR_1126b8e80;
      func_0x00010bfa4800(PTR_PTR_1126b8e80);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_3 != 2) goto LAB_10638e4b0;
      puVar3 = PTR_PTR_1126b8e58;
      _objc_alloc(PTR_PTR_1126b8e58);
      puVar1 = PTR_PTR_1126b8e40;
      func_0x00010bf68a40(PTR_PTR_1126b8e40,param_2,5,param_5,*(undefined8 *)(param_1 + 0xd0));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000140(puVar3,param_2,param_4,puVar1);
      func_0x00010be639a0(param_1,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar1);
      puVar3 = PTR_PTR_1126b8e88;
      _objc_alloc(PTR_PTR_1126b8e88);
      puVar1 = PTR_PTR_1126b8e80;
      func_0x00010bfa47e0(PTR_PTR_1126b8e80,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_10638e47c:
    func_0x00010c000140(puVar3,param_2,param_4,puVar1);
    func_0x00010be63800(param_1,param_2,puVar3);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
LAB_10638e4b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10638e4c8; end: 10638e59b; -[SCAdTrackOperaAdaptor trackCommonV2FromPageId:eventType:interactionType:collectionItemIndex:] */

void FUN_10638e4c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010be4c7e0(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bebdba0(param_1,param_2,param_3,param_4,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10638e59c; end: 10638ea77; -[SCAdTrackOperaAdaptor _liveTrackCommonV2FromPageId:eventType:interactionType:collectionItemIndex:] */

void FUN_10638e59c(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_4 == 0) {
    lVar10 = 0;
  }
  else {
    lVar7 = param_2 + 0x100;
    _objc_loadWeakRetained();
    lVar10 = lVar7;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
  }
  lVar7 = lVar10;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    puVar11 = (undefined *)0x0;
    goto LAB_10638ea30;
  }
  if (lVar10 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = param_2 + 0x100;
    _objc_loadWeakRetained();
    uVar1 = uVar12;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    puVar11 = PTR_PTR_1126ca218;
    _objc_opt_class(PTR_PTR_1126ca218);
    uVar9 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar11);
    uVar12 = uVar1;
    if ((uVar9 & 1) == 0) {
      uVar12 = 0;
    }
    _objc_retain(uVar12);
    _objc_release(uVar1);
  }
  uVar9 = *(ulong *)(param_2 + 8);
  lVar7 = lVar10;
  func_0x00010be36bc0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  uVar1 = uVar9;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar2 = uVar12;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar1);
    uVar2 = uVar1;
  }
  _objc_release(uVar1);
  uVar3 = uVar9;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef53c0();
  uVar1 = uVar12;
  if (uVar9 != 0) {
    uVar1 = uVar9;
  }
  func_0x00010bef60a0();
  func_0x00010bef4240();
  if (uVar12 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x30));
    uVar5 = uVar2;
    func_0x00010c08fa60();
    if (uVar5 != 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c278840();
      _objc_release(uVar6);
    }
    uVar5 = uVar2;
    func_0x00010c08fa60();
    if (uVar5 != 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29e180();
      _objc_release(uVar6);
    }
    if (uVar9 != 0) {
      func_0x0001084c6f7c(uVar9,uVar12);
    }
    uVar5 = uVar2;
    func_0x00010c08fa60();
    if (uVar5 != 0) {
      lVar7 = *(long *)(param_2 + 0x28);
      func_0x00010bef6380();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 != 0) {
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108498554(lVar7,uVar6);
        _objc_release(uVar6);
        _objc_release(lVar7);
      }
    }
    if ((uVar1 == 10) ||
       ((uVar1 = uVar9, func_0x00010bef60a0(), uVar1 == 0x16 &&
        (uVar1 = uVar12, func_0x00010bef60a0(), uVar1 == 10)))) {
      lVar7 = param_7;
      if (param_7 != 0) goto LAB_10638e938;
      lVar8 = *(long *)(param_2 + 0x48);
      func_0x00010c0886c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar8;
      if (lVar8 == 0) {
        lVar7 = *(long *)(param_2 + 0xc0);
      }
      _objc_retain(lVar7);
      _objc_release(lVar8);
    }
    else {
      lVar7 = 0;
LAB_10638e938:
      _objc_retain(lVar7);
    }
    lVar8 = param_2;
    func_0x00010be412a0(param_2);
    uVar1 = uVar2;
    FUN_10638ea78(param_1 * 1000.0,uVar2,param_5,param_6,lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becdda0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126b9150;
    _objc_alloc(PTR_PTR_1126b9150);
    func_0x00010b88f85c(param_1 * 1000.0);
    _objc_release(param_2);
    _objc_release(uVar1);
    _objc_release(lVar7);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar12);
LAB_10638ea30:
  _objc_release(lVar10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10638ea78; end: 10638ec2f;  */

void FUN_10638ea78(undefined8 param_1,undefined **param_2,undefined8 param_3,long param_4,
                  int param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_4);
  ppuVar1 = param_2;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    _objc_release(param_2);
    param_2 = &PTR____CFConstantStringClassReference_110e4ccb8;
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_5 == 0) {
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_4 != 0) {
      func_0x00010c067ec0(param_4);
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      goto LAB_10638ebf0;
    }
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
LAB_10638ebf0:
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10638ec30; end: 10638efd7; -[SCAdTrackOperaAdaptor _snapshotTrackCommonV2FromPageId:eventType:interactionType:collectionItemIndex:] */

void FUN_10638ec30(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined **param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_4 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    ppuVar2 = *(undefined ***)(param_2 + 0xe0);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if ((ppuVar2 != (undefined **)0x0) && (lVar4 = param_2, func_0x00010be43e20(), (int)lVar4 != 0))
    {
      ppuVar5 = ppuVar2;
      func_0x00010bef2c60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar1 = ppuVar5;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar5);
      func_0x00010beec800(*(undefined8 *)(param_2 + 0x30));
      ppuVar5 = ppuVar1;
      func_0x00010c08fa60();
      if (ppuVar5 == (undefined **)0x0) {
        uStack_78 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uStack_78 = uVar3;
        func_0x00010c278840();
        _objc_release(uVar3);
      }
      ppuVar5 = ppuVar1;
      func_0x00010c08fa60();
      if (ppuVar5 == (undefined **)0x0) {
        uStack_80 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uStack_80 = uVar3;
        func_0x00010c29e180();
        _objc_release(uVar3);
      }
      ppuVar5 = ppuVar1;
      func_0x00010c08fa60();
      if (ppuVar5 == (undefined **)0x0) {
LAB_10638ee1c:
        lStack_88 = 0;
      }
      else {
        lVar4 = *(long *)(param_2 + 0x28);
        func_0x00010bef6380();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) goto LAB_10638ee1c;
        uVar3 = *(undefined8 *)(param_2 + 0x10);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        lStack_88 = lVar4;
        func_0x000108498554(lVar4,uVar3);
        _objc_release(uVar3);
        _objc_release(lVar4);
      }
      ppuVar5 = ppuVar2;
      func_0x00010bef60a0();
      if ((ppuVar5 == (undefined **)0xa) ||
         ((ppuVar5 = ppuVar2, func_0x00010bef60a0(), ppuVar5 == (undefined **)0x16 &&
          (ppuVar5 = ppuVar2, func_0x00010c06eba0(), (int)ppuVar5 != 0)))) {
        ppuStack_90 = param_7;
        if (param_7 != (undefined **)0x0) goto LAB_10638ee84;
        ppuVar5 = *(undefined ***)(param_2 + 0x48);
        func_0x00010c0886c0();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar5 == (undefined **)0x0) {
          ppuStack_90 = ppuVar2;
          func_0x00010bf3fd80();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(ppuVar5);
          ppuStack_90 = ppuVar5;
        }
        _objc_release(ppuVar5);
      }
      else {
        ppuStack_90 = (undefined **)0x0;
LAB_10638ee84:
        _objc_retain(ppuStack_90);
      }
      ppuVar5 = ppuVar2;
      func_0x00010c075ac0(ppuVar2);
      ppuVar6 = ppuVar1;
      FUN_10638ea78(param_1 * 1000.0,ppuVar1,param_5,param_6,ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075ac0(ppuVar2);
      func_0x00010becdda0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126b9150;
      _objc_alloc();
      ppuVar5 = ppuVar2;
      func_0x00010bef4d20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar2;
      func_0x00010bef2c20(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar2;
      func_0x00010c2415a0();
      ppuVar9 = ppuVar2;
      func_0x00010bef60a0();
      ppuVar10 = ppuVar2;
      func_0x00010c106900();
      ppuVar11 = ppuVar2;
      func_0x00010bef4240();
      func_0x00010b88f85c(param_1 * 1000.0,puVar12,ppuVar6,ppuVar1,ppuVar5,ppuVar7,param_4,uStack_78
                          ,uStack_80,0,ppuStack_90,ppuVar8,ppuVar9,ppuVar10,lStack_88,ppuVar11,
                          param_2);
      _objc_release(ppuVar7);
      _objc_release(ppuVar5);
      _objc_release(param_2);
      _objc_release(ppuVar6);
      _objc_release(ppuStack_90);
      _objc_release(ppuVar1);
      goto LAB_10638ed2c;
    }
  }
  puVar12 = (undefined *)0x0;
LAB_10638ed2c:
  _objc_release(ppuVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10638efd8; end: 10638f07b; -[SCAdTrackOperaAdaptor adTrackCommonFromPageId:collectionItemIndex:] */

void FUN_10638efd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be4c780(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bebdae0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10638f07c; end: 10638f507; -[SCAdTrackOperaAdaptor _liveAdTrackCommonFromPageId:collectionItemIndex:] */

void FUN_10638f07c(double param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar9 = 0;
  }
  else {
    lVar6 = param_2 + 0x100;
    _objc_loadWeakRetained();
    lVar9 = lVar6;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
  }
  lVar6 = lVar9;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) {
    puVar11 = (undefined *)0x0;
    goto LAB_10638f4a8;
  }
  if (lVar9 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = param_2 + 0x100;
    _objc_loadWeakRetained();
    uVar2 = uVar10;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    puVar11 = PTR_PTR_1126ca218;
    _objc_opt_class(PTR_PTR_1126ca218);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar11);
    uVar10 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar10 = 0;
    }
    _objc_retain(uVar10);
    _objc_release(uVar2);
  }
  uVar8 = *(ulong *)(param_2 + 8);
  lVar6 = lVar9;
  func_0x00010be36bc0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  uVar2 = uVar8;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef53c0(*(undefined8 *)(param_2 + 8));
  func_0x00010bef60a0();
  func_0x00010bef4240();
  if (uVar10 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x30));
    if (uVar2 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c278840();
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29e180();
      _objc_release(uVar5);
    }
    if (uVar8 != 0) {
      func_0x0001084c6f7c(uVar8,uVar10);
    }
    if (uVar2 != 0) {
      lVar6 = *(long *)(param_2 + 0x28);
      func_0x00010bef6380();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        uVar5 = *(undefined8 *)(param_2 + 0x10);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108498554(lVar6,uVar5);
        _objc_release(uVar5);
        _objc_release(lVar6);
      }
    }
    lVar6 = param_2;
    func_0x00010be412a0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110ddf398;
    if ((int)lVar6 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e4c918;
    }
    _objc_retain();
    uVar12 = uVar2;
    if (uVar2 == 0) {
      uVar12 = uVar10;
      func_0x00010bfe5ec0(uVar10);
      _objc_retainAutoreleasedReturnValue();
    }
    if (uVar8 == 0) {
      func_0x00010bef60a0(uVar10);
    }
    func_0x00010be412a0();
    func_0x00010bddb7e0(param_2);
    if (uVar2 == 0) {
      _objc_release(uVar12);
    }
    uVar12 = uVar10;
    func_0x00010bef60a0();
    if (uVar12 == 10) {
      uVar12 = param_5;
      if (param_5 != 0) goto LAB_10638f414;
      uVar7 = *(ulong *)(param_2 + 0x48);
      func_0x00010c0886c0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar7 == 0) {
        uVar12 = uVar10;
        func_0x00010bf3fd80(uVar10);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(uVar7);
        uVar12 = uVar7;
      }
      _objc_release(uVar7);
    }
    else {
      uVar12 = 0;
LAB_10638f414:
      _objc_retain(uVar12);
    }
    puVar11 = PTR_PTR_1126b8e38;
    _objc_alloc(PTR_PTR_1126b8e38);
    func_0x00010bff1840(param_1 * 1000.0);
    _objc_release(uVar12);
    _objc_release(ppuVar1);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar10);
LAB_10638f4a8:
  _objc_release(lVar9);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10638f508; end: 10638f7f3; -[SCAdTrackOperaAdaptor _snapshotAdTrackCommonFromPageId:collectionItemIndex:] */

void FUN_10638f508(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0xe0);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 != 0) && (lVar2 = param_2, func_0x00010be43e20(), (int)lVar2 != 0)) {
      lVar2 = lVar1;
      func_0x00010bef2c60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beec800(*(undefined8 *)(param_2 + 0x30));
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c278840();
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29e180();
        _objc_release(uVar3);
        lVar4 = *(long *)(param_2 + 0x28);
        func_0x00010bef6380();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          uVar3 = *(undefined8 *)(param_2 + 0x10);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108498554(lVar4,uVar3);
          _objc_release(uVar3);
          _objc_release(lVar4);
        }
      }
      lVar4 = lVar1;
      func_0x00010c06eba0();
      if ((int)lVar4 == 0) {
        lVar4 = 0;
LAB_10638f6e4:
        _objc_retain(lVar4);
      }
      else {
        lVar4 = param_5;
        if (param_5 != 0) goto LAB_10638f6e4;
        lVar5 = *(long *)(param_2 + 0x48);
        func_0x00010c0886c0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
          lVar4 = lVar1;
          func_0x00010bf3fd80(lVar1);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(lVar5);
          lVar4 = lVar5;
        }
        _objc_release(lVar5);
      }
      puVar7 = PTR_PTR_1126b8e38;
      _objc_alloc();
      func_0x00010c2415a0(lVar1);
      lVar5 = lVar1;
      func_0x00010bef4d20(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010bef2c20(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef60a0();
      func_0x00010bef4240();
      func_0x00010c106900();
      func_0x00010c075ac0();
      func_0x00010bff1840(param_1 * 1000.0,puVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      goto LAB_10638f64c;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_10638f64c:
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10638f7f4; end: 10638f9ab; -[SCAdTrackOperaAdaptor _captureSnapshotForPageId:adIdentifier:adServeItemId:adId:snapIndex:adType:adProductType:preferredAttachmentType:adSnap:isInstantPageAd:] */

void FUN_10638f7f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  if ((param_3 != 0) && (lVar1 = param_1, func_0x00010be43e20(), (int)lVar1 != 0)) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0xe8),param_2,param_3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0xe8),param_2,param_3);
    uVar2 = *(ulong *)(param_1 + 0xe8);
    func_0x00010bf529e0();
    puVar4 = PTR_PTR_1126ca268;
    while (PTR_PTR_1126ca268 = puVar4, 4 < uVar2) {
      uVar3 = *(undefined8 *)(param_1 + 0xe8);
      func_0x00010bfb1920(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0xe8),param_2,0);
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xe0),param_2,uVar3);
      _objc_release(uVar3);
      uVar2 = *(ulong *)(param_1 + 0xe8);
      func_0x00010bf529e0();
      puVar4 = PTR_PTR_1126ca268;
    }
    _objc_alloc(puVar4);
    uVar3 = param_11;
    func_0x00010bf3fd80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef60a0();
    func_0x00010bff1800(puVar4,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                        uVar3,param_12);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xe0),param_2,puVar4,param_3);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10638f9ac; end: 10638f9f3; -[SCAdTrackOperaAdaptor _isSnapshotFallbackEnabled] */

undefined8 FUN_10638f9ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10638f9f4; end: 10638fae3; -[SCAdTrackOperaAdaptor _isIntantPageAd:] */

undefined8 FUN_10638f9f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1 + 0x100;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = lVar2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar1 = lVar2;
    func_0x00010be36bc0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar4 = uVar3;
    func_0x00010c067c20(uVar3);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10638fae4; end: 10638fb17; -[SCAdTrackOperaAdaptor _trackCommonSource:isInstantPageAd:] */

undefined ** FUN_10638fae4(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined **ppuVar1;
  
  if (param_4 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ddf358;
    if (*(char *)(param_1 + 0xd8) != '\0' || param_3 != 3) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ddf398;
    }
    return ppuVar1;
  }
  return &PTR____CFConstantStringClassReference_110e4c918;
}



/* Entry: 10638fb18; end: 10638fbf3; -[SCAdTrackOperaAdaptor _attachmentTriggerType:page:params:isInstantPageAd:] */

ulong FUN_10638fb18(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,int param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  FUN_106442134(param_3,param_5);
  if ((uVar4 & 0xfffffffffffffffb) == 0) {
    puVar1 = PTR_PTR_1126c9460;
    func_0x00010c0f25a0(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)uVar2 != 0) {
      if ((param_6 == 0) || (*(char *)(param_1 + 0xd8) != '\0')) {
        lVar3 = *(long *)(param_1 + 0xb8);
        func_0x00010bf9a440();
        if (lVar3 != 9) {
          lVar3 = *(long *)(param_1 + 0xb8);
          func_0x00010bf9a440();
          if ((lVar3 != 7) || (*(long *)(param_1 + 0x38) != 1)) {
            uVar4 = 2;
            goto LAB_10638fbb0;
          }
        }
      }
      uVar4 = 1;
    }
  }
LAB_10638fbb0:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10638fbf4; end: 10638fc5f; -[SCAdTrackOperaAdaptor _nextLifecycleEvent:] */

void FUN_10638fbf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = PTR_PTR_1126b8e50;
  func_0x00010c098ea0(PTR_PTR_1126b8e50,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10638fc60; end: 1063901ab; -[SCAdTrackOperaAdaptor _nextLifecycleEventV2:params:page:eventType:operaViewInteraction:] */

void FUN_10638fc60(long param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5,
                  long param_6,long param_7)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  byte bVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  byte bVar18;
  uint uStack_9c;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar2 = param_4;
  FUN_106387b20(param_4,*(undefined8 *)(param_1 + 0xc0));
  _objc_retainAutoreleasedReturnValue();
  if (param_7 == 0) {
    lVar3 = param_3;
    FUN_1063901cc();
  }
  else {
    lVar3 = param_7;
    func_0x00010c27dd80();
    FUN_1063901ac();
  }
  uVar4 = param_5;
  func_0x00010be36bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c277bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  if (param_6 == 8) {
    func_0x00010c138dc0(*(undefined8 *)(param_1 + 0x48));
  }
  if (lVar6 == 0) goto LAB_10639014c;
  lVar7 = *(long *)(param_1 + 0x48);
  func_0x00010c0890e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    uStack_9c = 0;
  }
  else {
    lVar15 = lVar7;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar15 == 0) {
      _objc_release();
      uStack_9c = 1;
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x28);
      _objc_release();
      uVar4 = lVar15 + 1;
      uStack_9c = 1;
      if (uVar4 < 0xc) {
        uStack_9c = 0xa6 >> (ulong)((uint)uVar4 & 0x1f);
      }
    }
  }
  uVar4 = param_5;
  FUN_10638baf8();
  if ((uVar4 & 1) == 0) {
    bVar18 = *(byte *)(param_1 + 0xca);
  }
  else {
    bVar18 = 1;
  }
  puVar5 = PTR_PTR_1126b6168;
  func_0x00010bfbad60(PTR_PTR_1126b6168);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar5);
  uVar4 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar8);
  uVar8 = uVar4;
  func_0x00010bf1f3c0();
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010be36bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be412a0(param_1);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126ca228;
  func_0x00010bf5efc0(PTR_PTR_1126ca228);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar10 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar5);
  uVar4 = uVar9;
  if ((uVar10 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain();
  _objc_release(uVar9);
  func_0x00010bdd0b20();
  uVar9 = param_5;
  if (lVar3 == 0x18) {
    lVar15 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar15);
    func_0x00010be36bc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c234f00(lVar15);
LAB_10638ff8c:
    _objc_release(uVar9);
    _objc_release(lVar15);
  }
  else {
    if (lVar3 == 0x11) {
      lVar15 = param_1 + 0xa8;
      _objc_loadWeakRetained(lVar15);
      func_0x00010be36bc0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c234f20(lVar15);
      goto LAB_10638ff8c;
    }
    lVar16 = 0;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x38);
  lVar11 = *(long *)(param_1 + 0x48);
  func_0x00010c089320();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar11;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar15 == 0) {
    bVar14 = 0;
  }
  else {
    bVar14 = *(byte *)(lVar15 + 8);
  }
  lVar12 = lVar3;
  FUN_106390324(lVar3,uVar17,bVar14 & 1,lVar16);
  _objc_release(lVar15);
  _objc_release(lVar11);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4c8f8;
  if (param_6 != 5) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  lVar15 = param_1;
  func_0x00010be67d20(param_1);
  puVar5 = PTR_PTR_1126b8fa8;
  _objc_alloc(PTR_PTR_1126b8fa8);
  uVar17 = *(undefined8 *)(lVar6 + 8);
  _objc_retain(uVar17);
  func_0x00010b88fe98(puVar5,uVar17,param_6,lVar3,lVar12,lVar15,uVar8 & 0xffffffff,uStack_9c & 1,
                      bVar18 & 1);
  _objc_release(ppuVar1);
  _objc_release(uVar4);
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(lVar6 + 8);
  _objc_retain(uVar17);
  lVar3 = param_1;
  func_0x00010be23740(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  puVar13 = PTR_PTR_1126b8fb8;
  _objc_alloc(PTR_PTR_1126b8fb8);
  func_0x00010c000080();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x60));
  _objc_release(puVar13);
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_release(lVar7);
LAB_10639014c:
  _objc_release(lVar6);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063901ac; end: 1063901cb;  */

undefined8 FUN_1063901ac(ulong param_1)

{
  if (param_1 < 0x15) {
    return *(undefined8 *)(&UNK_10dddbb90 + param_1 * 8);
  }
  return 1;
}



/* Entry: 1063901cc; end: 106390323;  */

undefined8 FUN_1063901cc(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ca1d0;
  func_0x00010bf72920(PTR_PTR_1126ca1d0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0720c0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126ca1d0;
    func_0x00010bf73ca0(PTR_PTR_1126ca1d0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0720c0(param_1,param_2,puVar1);
    _objc_release(puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126ca1d0;
      func_0x00010bf761a0(PTR_PTR_1126ca1d0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c0720c0(param_1,param_2,puVar1);
      _objc_release(puVar1);
      if ((uVar2 & 1) == 0) {
        puVar1 = PTR_PTR_1126ca1d0;
        func_0x00010bf72660(PTR_PTR_1126ca1d0);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010c0720c0(param_1,param_2,puVar1);
        if ((int)uVar2 == 0) {
          puVar3 = PTR_PTR_1126ca1d8;
          func_0x00010bf726c0(PTR_PTR_1126ca1d8);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_1;
          func_0x00010c0720c0(param_1,param_2,puVar3);
          _objc_release(puVar3);
          _objc_release(puVar1);
          if ((int)uVar2 == 0) {
            uVar4 = 0xffffffffffffffff;
            goto LAB_106390308;
          }
        }
        else {
          _objc_release(puVar1);
        }
        uVar4 = 0x16;
      }
      else {
        uVar4 = 0x15;
      }
    }
    else {
      uVar4 = 0x14;
    }
  }
  else {
    uVar4 = 0x13;
  }
LAB_106390308:
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 106390324; end: 106390403;  */

undefined8 FUN_106390324(undefined8 param_1,long param_2,uint param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  switch(param_1) {
  default:
    return 1;
  case 2:
  case 0xe:
    return 4;
  case 3:
  case 0xf:
  case 0x12:
  case 0x17:
    return 7;
  case 4:
  case 5:
    return 6;
  case 6:
    uVar2 = 5;
    if (param_3 == 0) {
      uVar2 = 6;
    }
    return uVar2;
  case 7:
    uVar2 = 2;
    if (param_2 != 1) {
      uVar2 = 6;
    }
    break;
  case 8:
    uVar2 = 5;
    if (param_2 != 1) {
      uVar2 = 6;
    }
    break;
  case 9:
    uVar2 = 6;
    if (param_2 != 1) {
      uVar2 = 2;
    }
    return uVar2;
  case 10:
  case 0xc:
    return 3;
  case 0xb:
  case 0xd:
  case 0x10:
    return 5;
  case 0x11:
  case 0x18:
    uVar2 = 3;
    if (param_4 == 0) {
      uVar2 = 7;
    }
    return uVar2;
  case 0x13:
    return 8;
  case 0x14:
    return 9;
  case 0x15:
  case 0x16:
    return 10;
  case 0xffffffffffffffff:
  case 0:
    return param_1;
  }
  uVar1 = 5;
  if ((param_3 & 1) == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 106390404; end: 1063904ef; -[SCAdTrackOperaAdaptor _nextAttachmentDidTriggerLifecycleEvent:collectionItemIndex:] */

void FUN_106390404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0xb8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf9a440();
  if (lVar3 != 9) {
    lVar3 = *(long *)(param_1 + 0xb8);
    func_0x00010bf9a440();
    if ((lVar3 != 7) || (*(long *)(param_1 + 0x38) != 1)) {
      uVar4 = 2;
      goto LAB_106390470;
    }
  }
  uVar4 = 1;
LAB_106390470:
  puVar1 = PTR_PTR_1126b8e58;
  _objc_alloc(PTR_PTR_1126b8e58);
  puVar2 = PTR_PTR_1126b8e40;
  func_0x00010bf0cd20(PTR_PTR_1126b8e40,param_2,uVar4,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c000140(puVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
  func_0x00010be639a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1063904f0; end: 10639057b; -[SCAdTrackOperaAdaptor _nextInteractionEvent:] */

void FUN_1063904f0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = PTR_PTR_1126b8e50;
  func_0x00010c068980(PTR_PTR_1126b8e50,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_3;
  func_0x00010c068280();
  if (lVar2 != 10) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    *(long *)(param_1 + 0xb8) = param_3;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10639057c; end: 1063905bf; -[SCAdTrackOperaAdaptor _nextDeeplinkEvent:] */

void FUN_10639057c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = PTR_PTR_1126b8e50;
  func_0x00010bf689c0(PTR_PTR_1126b8e50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063905c0; end: 106390603; -[SCAdTrackOperaAdaptor _nextSubscribeEvent:] */

void FUN_1063905c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = PTR_PTR_1126b8e50;
  func_0x00010c260460(PTR_PTR_1126b8e50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106390604; end: 106390713; -[SCAdTrackOperaAdaptor _nextSubscribeEventV2:pageId:params:] */

void FUN_106390604(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain(param_4);
  FUN_106387b20(param_5,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c277bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b9020;
  _objc_alloc(PTR_PTR_1126b9020);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar4);
  func_0x00010b890ec4(puVar2,uVar4,param_3);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b9028;
  _objc_alloc(PTR_PTR_1126b9028);
  func_0x00010c000060();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x80));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106390714; end: 106390757; -[SCAdTrackOperaAdaptor _nextAdReportEvent:] */

void FUN_106390714(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = PTR_PTR_1126b8e50;
  func_0x00010bef4740(PTR_PTR_1126b8e50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106390758; end: 10639095b; -[SCAdTrackOperaAdaptor _nextAdReportEventV2:page:params:] */

void FUN_106390758(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_5;
  FUN_106387b20(param_5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bfe00;
  func_0x00010bef4720(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0e00e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126c5430;
  func_0x00010c086560(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar2);
  uVar7 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar4 = param_1;
  func_0x00010c277bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126b9000;
  _objc_alloc(PTR_PTR_1126b9000);
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar4 + 8);
  }
  _objc_retain(uVar7);
  func_0x00010b890a50(puVar2,uVar7,param_3,0,0,0,uVar6,uVar3,0);
  _objc_release(uVar7);
  puVar5 = PTR_PTR_1126b9008;
  _objc_alloc(PTR_PTR_1126b9008);
  func_0x00010c000060();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x78));
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10639095c; end: 106390cc3; -[SCAdTrackOperaAdaptor _handleDidSetAdStickerPositionEventWithTrackCommon:collectionItemIndex:params:] */

void FUN_10639095c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_4;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar13 = 0;
  }
  else {
    lVar3 = param_2 + 0x100;
    _objc_loadWeakRetained();
    lVar13 = lVar3;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  func_0x00010bef53c0();
  puVar4 = PTR_PTR_1126ca1a0;
  func_0x00010c255340(PTR_PTR_1126ca1a0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar1 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126ca1a0;
  func_0x00010c254080(PTR_PTR_1126ca1a0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar4);
  uVar6 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  puVar4 = PTR_PTR_1126ca1a0;
  func_0x00010bf202c0(PTR_PTR_1126ca1a0);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar10 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar4);
  uVar8 = uVar9;
  if ((uVar10 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar9);
  puVar4 = PTR_PTR_1126ca1a0;
  func_0x00010bf20300(PTR_PTR_1126ca1a0);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar12 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar4);
  uVar10 = uVar11;
  if ((uVar12 & 1) == 0) {
    uVar10 = 0;
  }
  _objc_retain(uVar10);
  _objc_release(uVar11);
  if ((((uVar1 != 0) && (uVar6 != 0)) && (uVar8 != 0)) && (uVar10 != 0)) {
    func_0x00010bf885a0(uVar5);
    uVar14 = param_1;
    func_0x00010bf885a0(uVar7);
    uVar15 = uVar14;
    func_0x00010bf885a0(uVar9);
    uVar16 = uVar15;
    func_0x00010bf885a0(uVar11);
    puVar4 = PTR_PTR_1126ca270;
    _objc_alloc(PTR_PTR_1126ca270);
    func_0x00010c04c980(param_1,uVar14,*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar15,uVar16,
                        *(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
    func_0x00010be63be0(param_2);
    func_0x00010be63bc0(param_2);
    _objc_release(puVar4);
  }
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(lVar13);
  _objc_release(lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106390cc4; end: 106390da7; -[SCAdTrackOperaAdaptor _nextStickerEventWithAdTrackCommon:collectionItemIndex:snapIndex:position:] */

void FUN_106390cc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010bdc58e0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca278;
  func_0x00010c254c80(PTR_PTR_1126ca278,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar3 = PTR_PTR_1126ca280;
  _objc_alloc(PTR_PTR_1126ca280);
  func_0x00010c000140();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  puVar4 = PTR_PTR_1126b8e50;
  func_0x00010c255500(PTR_PTR_1126b8e50,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106390da8; end: 106390f5f; -[SCAdTrackOperaAdaptor _nextStickerEventV2WithAdTrackCommon:collectionItemIndex:snapIndex:position:eventType:] */

void FUN_106390da8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_8);
  func_0x00010c0f12c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c277bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126b9010;
  _objc_alloc(PTR_PTR_1126b9010);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar4);
  func_0x00010c254f20(param_8);
  uVar5 = param_1;
  func_0x00010c254f20(param_8);
  uVar8 = param_2;
  func_0x00010c254ce0(param_8);
  uVar6 = uVar5;
  func_0x00010c254ce0(param_8);
  uVar9 = uVar8;
  func_0x00010bf20240(param_8);
  uVar7 = uVar6;
  func_0x00010bf20240(param_8);
  uVar10 = uVar9;
  func_0x00010bf20280(param_8);
  func_0x00010bf20280(param_8);
  _objc_release(param_8);
  func_0x00010b8910a0(param_1,param_2,uVar5,uVar8,uVar6,uVar9,uVar7,uVar10,puVar2,uVar4,param_9,
                      param_7);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b9018;
  _objc_alloc(PTR_PTR_1126b9018);
  func_0x00010c000060();
  func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x70));
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106390f60; end: 1063914b3; -[SCAdTrackOperaAdaptor _handleDidSetAdStickerPositionV2EventWithTrackCommon:collectionItemIndex:params:] */

void FUN_106390f60(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_4;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = param_2 + 0x100;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  func_0x00010bef53c0();
  puVar5 = PTR_PTR_1126ca1a0;
  func_0x00010c255340(PTR_PTR_1126ca1a0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar5);
  uVar1 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain();
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126ca1a0;
  func_0x00010c254080(PTR_PTR_1126ca1a0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar5);
  uVar7 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain();
  _objc_release(uVar8);
  puVar5 = PTR_PTR_1126ca1a0;
  func_0x00010c255360(PTR_PTR_1126ca1a0);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar11 = uVar10;
  _objc_opt_isKindOfClass(uVar10,puVar5);
  uVar9 = uVar10;
  if ((uVar11 & 1) == 0) {
    uVar9 = 0;
  }
  _objc_retain();
  _objc_release(uVar10);
  puVar5 = PTR_PTR_1126ca1a0;
  func_0x00010c2540a0(PTR_PTR_1126ca1a0);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar13 = uVar12;
  _objc_opt_isKindOfClass(uVar12,puVar5);
  uVar11 = uVar12;
  if ((uVar13 & 1) == 0) {
    uVar11 = 0;
  }
  _objc_retain();
  _objc_release(uVar12);
  puVar5 = PTR_PTR_1126ca1a0;
  func_0x00010bf202c0(PTR_PTR_1126ca1a0);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar15 = uVar14;
  _objc_opt_isKindOfClass(uVar14,puVar5);
  uVar13 = uVar14;
  if ((uVar15 & 1) == 0) {
    uVar13 = 0;
  }
  _objc_retain();
  _objc_release(uVar14);
  puVar5 = PTR_PTR_1126ca1a0;
  func_0x00010bf20300(PTR_PTR_1126ca1a0);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar17 = uVar16;
  _objc_opt_isKindOfClass(uVar16,puVar5);
  uVar15 = uVar16;
  if ((uVar17 & 1) == 0) {
    uVar15 = 0;
  }
  _objc_retain(uVar15);
  _objc_release(uVar16);
  puVar5 = PTR_PTR_1126ca1a0;
  func_0x00010bf202e0(PTR_PTR_1126ca1a0);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar19 = uVar18;
  _objc_opt_isKindOfClass(uVar18,puVar5);
  uVar17 = uVar18;
  if ((uVar19 & 1) == 0) {
    uVar17 = 0;
  }
  _objc_retain(uVar17);
  _objc_release(uVar18);
  puVar5 = PTR_PTR_1126ca1a0;
  func_0x00010bf20320(PTR_PTR_1126ca1a0);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar21 = uVar20;
  _objc_opt_isKindOfClass(uVar20,puVar5);
  uVar19 = uVar20;
  if ((uVar21 & 1) == 0) {
    uVar19 = 0;
  }
  _objc_retain(uVar19);
  _objc_release(uVar20);
  if (((((uVar1 != 0) && (uVar7 != 0)) && (uVar9 != 0)) && ((uVar11 != 0 && (uVar13 != 0)))) &&
     ((uVar15 != 0 && ((uVar17 != 0 && (uVar19 != 0)))))) {
    func_0x00010bf885a0(uVar6);
    uVar22 = param_1;
    func_0x00010bf885a0(uVar8);
    uVar23 = uVar22;
    func_0x00010bf885a0(uVar10);
    uVar24 = uVar23;
    func_0x00010bf885a0(uVar12);
    uVar25 = uVar24;
    func_0x00010bf885a0(uVar14);
    uVar26 = uVar25;
    func_0x00010bf885a0(uVar16);
    uVar27 = uVar26;
    func_0x00010bf885a0(uVar18);
    uVar28 = uVar27;
    func_0x00010bf885a0(uVar20);
    puVar5 = PTR_PTR_1126ca270;
    _objc_alloc(PTR_PTR_1126ca270);
    func_0x00010c04c980(param_1,uVar22,uVar23,uVar24,uVar25,uVar26,uVar27,uVar28);
    func_0x00010be63bc0(param_2);
    _objc_release(puVar5);
  }
  _objc_release(uVar19);
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063914b4; end: 1063914f7; -[SCAdTrackOperaAdaptor _nextReminderEvent:] */

void FUN_1063914b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = PTR_PTR_1126b8e50;
  func_0x00010c129500(PTR_PTR_1126b8e50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1063914f8; end: 1063915cb; -[SCAdTrackOperaAdaptor _nextReminderEventV2:pageId:] */

void FUN_1063914f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010c277bc0(param_1,param_2,param_4,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9128;
  _objc_alloc(PTR_PTR_1126b9128);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 8);
  }
  _objc_retain(uVar4);
  func_0x00010b89163c(puVar2,uVar4,param_3);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126ca288;
  _objc_alloc(PTR_PTR_1126ca288);
  func_0x00010c000080();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x68));
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063915cc; end: 10639171b; -[SCAdTrackOperaAdaptor _nextReminderEventV2CountdownStickerClickForPageId:operaEvent:params:page:attachmentTriggerType:] */

void FUN_1063915cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010c277bc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 8);
    _objc_retain(uVar5);
    lVar2 = param_1;
    func_0x00010be23740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126b9128;
      _objc_alloc(PTR_PTR_1126b9128);
      uVar5 = *(undefined8 *)(lVar1 + 8);
      _objc_retain(uVar5);
      func_0x00010b89163c(puVar3,uVar5,1);
      _objc_release(uVar5);
      puVar4 = PTR_PTR_1126ca288;
      _objc_alloc(PTR_PTR_1126ca288);
      func_0x00010c000080();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x68));
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10639171c; end: 1063918cb; -[SCAdTrackOperaAdaptor _handleWakeUpTapEventForPageId:params:] */

void FUN_10639171c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar2 = param_1 + 0x100;
    _objc_loadWeakRetained();
    lVar8 = lVar2;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  lVar2 = lVar8;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126ca290;
    func_0x00010c2a1760(PTR_PTR_1126ca290);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    func_0x00010c067fc0(uVar1);
    _objc_release(uVar1);
    uVar9 = *(undefined8 *)(param_1 + 8);
    lVar2 = lVar8;
    func_0x00010be36bc0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010bef53c0(*(undefined8 *)(param_1 + 8));
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = uVar9;
    func_0x00010bfe5ec0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e7a00(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar9);
  }
  _objc_release(lVar8);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063918cc; end: 1063919e3; -[SCAdTrackOperaAdaptor _handleAdSurveyShownForPageId:] */

void FUN_1063918cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1 + 0x100;
    _objc_loadWeakRetained();
    lVar4 = lVar1;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = lVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    lVar1 = lVar4;
    func_0x00010be36bc0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20(uVar6,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bef53c0(uVar2,param_2,lVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = uVar6;
    func_0x00010bfe5ec0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e2620(uVar5,param_2,uVar3,uVar2,1);
    _objc_release(uVar3);
    _objc_release(uVar6);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063919e4; end: 106391b93; -[SCAdTrackOperaAdaptor _handleAdSurveyResponseChangedForPageId:params:] */

void FUN_1063919e4(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar2 = param_1 + 0x100;
    _objc_loadWeakRetained();
    lVar8 = lVar2;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  lVar2 = lVar8;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126ca298;
    func_0x00010bef5780(PTR_PTR_1126ca298);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    func_0x00010c067fc0(uVar1);
    _objc_release(uVar1);
    uVar9 = *(undefined8 *)(param_1 + 8);
    lVar2 = lVar8;
    func_0x00010be36bc0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010bef53c0(*(undefined8 *)(param_1 + 8));
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = uVar9;
    func_0x00010bfe5ec0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e2620(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar9);
  }
  _objc_release(lVar8);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106391b94; end: 106391d37; -[SCAdTrackOperaAdaptor _handlePollStickerOptionTappedEventForPageId:params:] */

void FUN_106391b94(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    lVar2 = param_1 + 0x100;
    _objc_loadWeakRetained();
    lVar7 = lVar2;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  lVar2 = lVar7;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126ca2a0;
    func_0x00010c103580(PTR_PTR_1126ca2a0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar9 = *(undefined8 *)(param_1 + 8);
    lVar2 = lVar7;
    func_0x00010be36bc0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010bef53c0(*(undefined8 *)(param_1 + 8));
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = uVar9;
    func_0x00010bfe5ec0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e5a40(uVar8);
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_release(uVar9);
  }
  _objc_release(lVar7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106391d38; end: 106391e6b; -[SCAdTrackOperaAdaptor _handleLiveReviewShownEventForPageId:params:] */

void FUN_106391d38(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar2 = param_1 + 0x100;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  lVar2 = lVar6;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126ca2a8;
    func_0x00010c140360(PTR_PTR_1126ca2a8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (uVar1 != 0) {
      func_0x00010be07e60(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(lVar6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106391e6c; end: 106391f9f; -[SCAdTrackOperaAdaptor _handleLiveReviewTappedEventForPageId:params:] */

void FUN_106391e6c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar2 = param_1 + 0x100;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  lVar2 = lVar6;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126ca2a8;
    func_0x00010c140380(PTR_PTR_1126ca2a8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (uVar1 != 0) {
      func_0x00010be07e60(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(lVar6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106391fa0; end: 1063920a7; -[SCAdTrackOperaAdaptor _emitLiveReviewEventV2ForPageId:eventType:reviewId:tappedReviewIndex:] */

void FUN_106391fa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010c277bc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b90c8;
    _objc_alloc(PTR_PTR_1126b90c8);
    uVar4 = *(undefined8 *)(lVar1 + 8);
    _objc_retain(uVar4);
    func_0x00010b896a24(puVar2,uVar4,param_4,param_5,param_6);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b90d0;
    _objc_alloc(PTR_PTR_1126b90d0);
    func_0x00010c000060();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x90));
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1063920a8; end: 10639261b; -[SCAdTrackOperaAdaptor _handleOnCaptionCtaRenderedEventForPageId:params:] */

void FUN_1063920a8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puStack_d8;
  undefined *puStack_d0;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar3 = PTR_PTR_1126ca1a0;
  func_0x00010bf2fe20(PTR_PTR_1126ca1a0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    func_0x00010bdc1080(uVar4);
    dVar20 = param_1;
    _CGRectGetWidth();
    if ((0.0 < dVar20) &&
       (dVar20 = param_1, uVar21 = param_2, uVar22 = param_3, uVar23 = param_4,
       _CGRectGetHeight(param_1,param_2,param_3,param_4), 0.0 < dVar20)) {
      lVar6 = param_5;
      func_0x00010c277bc0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        puVar3 = PTR_PTR_1126ca1a0;
        func_0x00010bf2fda0(PTR_PTR_1126ca1a0);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
        uVar7 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar3);
        uVar4 = uVar5;
        if ((uVar7 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain();
        _objc_release(uVar5);
        puVar3 = PTR_PTR_1126ca1a0;
        func_0x00010bf2fd80(PTR_PTR_1126ca1a0);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
        uVar9 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar3);
        uVar7 = uVar8;
        if ((uVar9 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar8);
        if (uVar7 == 0) {
          dVar20 = *(double *)PTR__CGRectNull_1103475e8;
          uVar21 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 8);
          uVar22 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x10);
          uVar23 = *(undefined8 *)(PTR__CGRectNull_1103475e8 + 0x18);
        }
        else {
          func_0x00010bdc1080(uVar8);
        }
        puVar3 = PTR_PTR_1126b9108;
        _objc_alloc();
        uVar10 = *(undefined8 *)(lVar6 + 8);
        _objc_retain();
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _CGRectGetMidX(param_1,param_2,param_3,param_4);
        func_0x00010c0df720();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _CGRectGetMidY(param_1,param_2,param_3,param_4);
        func_0x00010c0df720();
        _objc_retainAutoreleasedReturnValue();
        puStack_d0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (uVar4 == 0) {
          puStack_d0 = (undefined *)0x0;
          puVar18 = (undefined *)0x0;
          puVar17 = puVar12;
        }
        else {
          func_0x00010bdc1060(uVar5);
          func_0x00010c0df720();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010bdc1060(uVar5);
          func_0x00010c0df720(param_2);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar18;
        }
        _CGRectIsNull(dVar20,uVar21,uVar22,uVar23);
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (((ulong)puVar17 & 1) == 0) {
          _CGRectGetMinX(dVar20,uVar21,uVar22,uVar23);
          func_0x00010c0df720();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar13;
        }
        else {
          puVar13 = puVar17;
          puVar19 = (undefined *)0x0;
        }
        _CGRectIsNull(dVar20,uVar21,uVar22,uVar23);
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (((ulong)puVar13 & 1) == 0) {
          _CGRectGetMinY(dVar20,uVar21,uVar22,uVar23);
          func_0x00010c0df720();
          _objc_retainAutoreleasedReturnValue();
          puStack_d8 = puVar14;
        }
        else {
          puStack_d8 = (undefined *)0x0;
          puVar14 = puVar13;
        }
        _CGRectIsNull(dVar20,uVar21,uVar22,uVar23);
        puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (((ulong)puVar14 & 1) == 0) {
          _CGRectGetWidth(dVar20,uVar21,uVar22,uVar23);
          func_0x00010c0df720();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar15;
        }
        else {
          puVar15 = puVar14;
          puVar16 = (undefined *)0x0;
        }
        iVar2 = (int)puVar15;
        _CGRectIsNull(dVar20,uVar21,uVar22,uVar23);
        puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (iVar2 == 0) {
          _CGRectGetHeight(dVar20,uVar21,uVar22,uVar23);
          func_0x00010c0df720();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010b891818(puVar3,uVar10,puVar11,puVar12,puStack_d0,puVar18,puVar19,puStack_d8,
                              puVar16,puVar15);
          puVar17 = (undefined *)((ulong)puVar17 & 0xffffffff);
          _objc_release(puVar15);
        }
        else {
          func_0x00010b891818(puVar3,uVar10,puVar11,puVar12,puStack_d0,puVar18,puVar19,puStack_d8,
                              puVar16,0);
        }
        if (((ulong)puVar14 & 1) == 0) {
          _objc_release(puVar16);
        }
        if (((ulong)puVar13 & 1) == 0) {
          _objc_release(puStack_d8);
        }
        if (((ulong)puVar17 & 1) == 0) {
          _objc_release(puVar19);
        }
        if (uVar4 != 0) {
          _objc_release(puVar18);
          _objc_release(puStack_d0);
        }
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(uVar10);
        puVar11 = PTR_PTR_1126b9110;
        _objc_alloc(PTR_PTR_1126b9110);
        func_0x00010c000060();
        func_0x00010c0d9840(*(undefined8 *)(param_5 + 0x88));
        _objc_release(puVar11);
        _objc_release(puVar3);
        _objc_release(uVar7);
        _objc_release(uVar4);
      }
      _objc_release(lVar6);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10639261c; end: 106392863; -[SCAdTrackOperaAdaptor _onOperaViewInteraction:page:isAd:] */

void FUN_10639261c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,int param_7)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = param_6;
  func_0x00010be36bc0(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bef5c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar1 == 0) {
    if (param_7 != 0) {
      uVar2 = param_5;
      func_0x00010c27dd80();
      if (uVar2 < 0x15) {
        ppuVar6 = (undefined **)(&PTR_PTR_11091fa70)[uVar2];
      }
      else {
        ppuVar6 = &PTR____CFConstantStringClassReference_110db8b78;
      }
      _objc_retain(ppuVar6);
      func_0x00010be4ff20(param_3);
      _objc_release(ppuVar6);
    }
    goto LAB_106392830;
  }
  uVar2 = param_5;
  func_0x00010c27dd80();
  FUN_1063901ac();
  uVar4 = param_6;
  if (uVar2 == 0x18) {
    lVar3 = param_3 + 0xa8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010be36bc0(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010c234f00(lVar3);
LAB_106392738:
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
  else {
    if (uVar2 == 0x11) {
      lVar3 = param_3 + 0xa8;
      _objc_loadWeakRetained(lVar3);
      func_0x00010be36bc0(param_6);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar3;
      func_0x00010c234f20(lVar3);
      goto LAB_106392738;
    }
    lVar8 = 0;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x38);
  uVar4 = *(undefined8 *)(param_3 + 0xb0);
  func_0x00010c079060(uVar4);
  FUN_106390324(uVar2,uVar7,uVar4,lVar8);
  puVar5 = PTR_PTR_1126b8e60;
  _objc_alloc(PTR_PTR_1126b8e60);
  func_0x00010c24f200(param_5);
  uVar4 = param_1;
  func_0x00010c24f260(param_5);
  uVar7 = uVar4;
  func_0x00010c24f280(param_5);
  func_0x00010c0000e0(param_1,param_2,uVar4,uVar7,puVar5);
  func_0x00010be63960(param_3);
  _objc_release(puVar5);
  func_0x00010be639c0(param_3);
LAB_106392830:
  _objc_release(lVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106392864; end: 106392be7; -[SCAdTrackOperaAdaptor _onAttachmentInteractionWithEvent:page:trackCommon:params:] */

void FUN_106392864(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = param_5;
  FUN_1063901cc();
  if (lVar2 != 0) {
    if (lVar2 == 0x11) {
      lVar3 = param_3 + 0xa8;
      _objc_loadWeakRetained(lVar3);
      uVar4 = param_6;
      func_0x00010be36bc0(param_6);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar3;
      func_0x00010c234f20(lVar3);
      _objc_release(uVar4);
      _objc_release(lVar3);
    }
    else {
      lVar11 = 0;
    }
    uVar12 = *(undefined8 *)(param_3 + 0x38);
    uVar4 = *(undefined8 *)(param_3 + 0xb0);
    func_0x00010c079060(uVar4);
    FUN_106390324(lVar2,uVar12,uVar4,lVar11);
    puVar5 = PTR_PTR_1126c9a28;
    func_0x00010c29d180(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
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
    puVar5 = PTR_PTR_1126c9a28;
    func_0x00010c29d1a0(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar8 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar5);
    uVar6 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar7);
    puVar5 = PTR_PTR_1126c9a28;
    func_0x00010c29d1c0(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar5);
    uVar7 = uVar8;
    if ((uVar9 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar8);
    puVar5 = PTR_PTR_1126ca240;
    func_0x00010c2648c0(PTR_PTR_1126ca240);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar10 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar5);
    uVar8 = uVar9;
    if ((uVar10 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar9);
    func_0x00010c067ec0(uVar8);
    _objc_release(uVar8);
    puVar5 = PTR_PTR_1126b8e60;
    _objc_alloc(PTR_PTR_1126b8e60);
    func_0x00010bdc1060(uVar1);
    uVar4 = param_1;
    _objc_release(uVar1);
    func_0x00010bf885a0(uVar6);
    uVar12 = uVar4;
    _objc_release(uVar6);
    func_0x00010bf885a0(uVar7);
    _objc_release(uVar7);
    func_0x00010c0000e0(param_1,param_2,uVar4,uVar12,puVar5);
    func_0x00010be63960(param_3);
    _objc_release(puVar5);
    func_0x00010be639c0(param_3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106392be8; end: 106392c2f; -[SCAdTrackOperaAdaptor _isSwipeProfileTopSnapPresentFixEnabled] */

undefined8 FUN_106392be8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ec0c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106392c30; end: 106392d5b; -[SCAdTrackOperaAdaptor _emitTopSnapPresentWithEvent:params:page:trackCommon:] */

void FUN_106392c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be38a80(param_1,param_2,param_6);
  func_0x00010be38aa0(param_1,param_2,param_6);
  uVar1 = param_1;
  func_0x00010becddc0(param_1,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126b8e58;
  _objc_alloc(PTR_PTR_1126b8e58);
  puVar3 = PTR_PTR_1126b8e40;
  func_0x00010c274d60(PTR_PTR_1126b8e40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000140(puVar2,param_2,uVar1,puVar3);
  func_0x00010be639a0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar3);
  func_0x00010be639c0(param_1,param_2,param_3,param_4,param_5,1,0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106392d5c; end: 106392e5f; -[SCAdTrackOperaAdaptor _incrementViewSeqNumIfNecessary:] */

void FUN_106392d5c(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bef4240();
  if ((lVar1 != 0x16) &&
     (uVar2 = param_1, func_0x00010be09220(param_1,param_2,*(undefined8 *)(param_1 + 0x18)),
     (uVar2 & 1) == 0)) {
    lVar1 = param_3;
    func_0x00010bef2c60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if ((lVar3 != 0) && ((*(byte *)(param_1 + 200) & 1) == 0)) {
      *(undefined1 *)(param_1 + 200) = 1;
      lVar1 = param_3;
      func_0x00010bef2c60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)(param_1 + 0xf8);
      *(long *)(param_1 + 0xf8) = lVar3;
      _objc_release(uVar4);
      _objc_release(lVar1);
      *(undefined1 *)(param_1 + 0xd8) = 0;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bef2c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec9c0(uVar4,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106392e60; end: 106392f67; -[SCAdTrackOperaAdaptor _incrementViewSeqNumIfNecessaryV2:] */

void FUN_106392e60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bef4240();
  if ((lVar1 != 0x16) &&
     (lVar1 = param_1, func_0x00010be09220(param_1,param_2,*(undefined8 *)(param_1 + 0x18)),
     (int)lVar1 != 0)) {
    lVar1 = param_3;
    func_0x00010bef2c60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x48);
      func_0x00010bf60c60();
      if ((uVar3 & 1) == 0) {
        func_0x00010c188060(*(undefined8 *)(param_1 + 0x48),param_2,1);
        lVar1 = param_3;
        func_0x00010bef2c60();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf51e00();
        uVar4 = *(undefined8 *)(param_1 + 0xf8);
        *(long *)(param_1 + 0xf8) = lVar2;
        _objc_release(uVar4);
        _objc_release(lVar1);
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_3;
        func_0x00010bef2c60(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec9c0(uVar4,param_2,lVar1);
        _objc_release(lVar1);
        _objc_release(uVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106392f68; end: 106392fc7; -[SCAdTrackOperaAdaptor _isViewSessionActiveForAdIdentifier:] */

undefined8 FUN_106392f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 200) & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
    func_0x00010bf60c60();
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_106392fb0;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010c0720c0(uVar2,param_2,param_3);
LAB_106392fb0:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106392fc8; end: 10639309b; -[SCAdTrackOperaAdaptor _trackCommonWithUpdatedViewSeqNum:] */

void FUN_106392fc8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  lVar1 = param_3;
  if (lVar2 == 0) {
    _objc_retain(param_3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bef2c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c29e180(uVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(uVar3);
    func_0x00010c2bc920(param_3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10639309c; end: 10639314f; -[SCAdTrackOperaAdaptor _logAdTrackCommonFailedToGenerateForEvent:] */

void FUN_10639309c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4cd58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b3e90;
  func_0x00010befdec0(PTR_PTR_1126b3e90,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ada0(uVar2,param_2,0,puVar3,puVar1,&PTR____CFConstantStringClassReference_110e4cd78
                      ,0);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106393150; end: 106393197; -[SCAdTrackOperaAdaptor _enableViewSeqNumV2:] */

undefined8 FUN_106393150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf1f480();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106393198; end: 1063931df; -[SCAdTrackOperaAdaptor _enableInstantPageClickLossFix:] */

undefined8 FUN_106393198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf1f480();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1063931e0; end: 1063931f7; -[SCAdTrackOperaAdaptor playlistItemController] */

void FUN_1063931e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063931f8; end: 106393203; -[SCAdTrackOperaAdaptor setPlaylistItemController:] */

void FUN_1063931f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x100,param_3);
  return;
}



/* Entry: 106393204; end: 10639321b; -[SCAdTrackOperaAdaptor operaControlling] */

void FUN_106393204(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10639321c; end: 106393223; -[SCAdTrackOperaAdaptor adAppInstallEventObservable] */

undefined8 FUN_10639321c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 106393224; end: 10639322b; -[SCAdTrackOperaAdaptor adAdToMessageEventObservable] */

undefined8 FUN_106393224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 10639322c; end: 106393233; -[SCAdTrackOperaAdaptor adDeepLinkEventObservable] */

undefined8 FUN_10639322c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 106393234; end: 10639323b; -[SCAdTrackOperaAdaptor adDeepLinkEventObservableV2] */

undefined8 FUN_106393234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 10639323c; end: 1063933eb; -[SCAdTrackOperaAdaptor .cxx_destruct] */

void FUN_10639323c(long param_1)

{
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_destroyWeak(param_1 + 0x108);
  _objc_destroyWeak(param_1 + 0x100);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1063933ec; end: 1063934cb; -[SCAdChromeInteractionSession initWithAdDataSource:adTrackerHelper:isNavigationStyleVertical:] */

undefined8
FUN_1063933ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afea0;
  _objc_opt_class(PTR_PTR_1126afea0);
  uVar3 = uVar1;
  func_0x00010beecc40(uVar1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_11091fb18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bfe63a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff15c0(param_1,param_2,param_3,param_4,param_5,uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return param_1;
}



/* Entry: 1063934cc; end: 1063934d3;  */

void FUN_1063934cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf25210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_businessProfilesScopeLauncher_1125a6e28);
  return;
}



/* Entry: 1063934d4; end: 1063935af; -[SCAdChromeInteractionSession initWithAdDataSource:adTrackerHelper:isNavigationStyleVertical:businessProfilesScopeLauncher:] */

undefined1 *
FUN_1063934d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f10c8;
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
    *(undefined1 *)((long)puVar1 + 0x19) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063935b0; end: 1063935b7; -[SCAdChromeInteractionSession isPresentingProfile] */

undefined1 FUN_1063935b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 1063935b8; end: 1063935bf; -[SCAdChromeInteractionSession shouldTriggerAttachmentOnTapChromeWithPageId:] */

undefined8 FUN_1063935b8(void)

{
  return 0;
}



/* Entry: 1063935c0; end: 1063935c7; -[SCAdChromeInteractionSession shouldTriggerAttachmentOnTapChromeProfileIconWithPageId:] */

undefined8 FUN_1063935c0(void)

{
  return 0;
}



/* Entry: 1063935c8; end: 1063935cf; -[SCAdChromeInteractionSession adsDrivenSwipeLeftToShowAttachmentWithPageId:] */

undefined8 FUN_1063935c8(void)

{
  return 0;
}



/* Entry: 1063935d0; end: 1063936ab; -[SCAdChromeInteractionSession registeredEventsForOperaSession] */

void FUN_1063935d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar7 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6160;
  func_0x00010c277180();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6160;
  puStack_50 = puVar1;
  func_0x00010bf3d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6160;
  puStack_48 = puVar2;
  func_0x00010c261120();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 3;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  _objc_retain(uVar8);
  uVar5 = uVar8;
  func_0x00010c06b7e0();
  if ((int)uVar5 != 0) {
    puVar2 = PTR_PTR_1126b6160;
    func_0x00010c277180(PTR_PTR_1126b6160);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)ppuVar7;
    func_0x00010c0720c0(ppuVar7,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)puVar6 == 0) {
      puVar2 = PTR_PTR_1126b6160;
      func_0x00010bf3d9e0(PTR_PTR_1126b6160);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined1 *)ppuVar7;
      func_0x00010c0720c0(ppuVar7,param_2,puVar2);
      _objc_release(puVar2);
      if ((int)puVar6 == 0) {
        puVar2 = PTR_PTR_1126b6160;
        func_0x00010c261120(PTR_PTR_1126b6160);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = (undefined1 *)ppuVar7;
        func_0x00010c0720c0(ppuVar7,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)puVar6 != 0) {
          func_0x00010be27280(puVar1,param_2,uVar8);
        }
      }
      else {
        func_0x00010be27260(puVar1,param_2,uVar8);
      }
    }
    else {
      func_0x00010be272a0(puVar1,param_2,uVar8);
    }
  }
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 1063936ac; end: 1063937c7; -[SCAdChromeInteractionSession operaViewDidSendEvent:page:params:] */

void FUN_1063936ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c06b7e0();
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126b6160;
    func_0x00010c277180(PTR_PTR_1126b6160);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)uVar1 == 0) {
      puVar2 = PTR_PTR_1126b6160;
      func_0x00010bf3d9e0(PTR_PTR_1126b6160);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar2);
      _objc_release(puVar2);
      if ((int)uVar1 == 0) {
        puVar2 = PTR_PTR_1126b6160;
        func_0x00010c261120(PTR_PTR_1126b6160);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)uVar1 != 0) {
          func_0x00010be27280(param_1,param_2,param_4);
        }
      }
      else {
        func_0x00010be27260(param_1,param_2,param_4);
      }
    }
    else {
      func_0x00010be272a0(param_1,param_2,param_4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063937c8; end: 10639395b; -[SCAdChromeInteractionSession _handleChromeTouched:] */

void FUN_1063937c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar9 = *(long *)(param_1 + 8);
    lVar3 = lVar4;
    func_0x00010be36bc0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20(lVar9,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar9;
    func_0x00010c116c00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bef4800(uVar6,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e2b40(uVar1,param_2,uVar6,lVar5);
      _objc_release(uVar6);
      lVar7 = lVar3;
      func_0x00010c116a20(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar9;
      func_0x00010bef4240(lVar9);
      func_0x00010beba7a0(param_1,param_2,lVar7,param_3,lVar8);
      _objc_release(lVar7);
    }
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar9);
  }
  _objc_release(lVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10639395c; end: 106393acb; -[SCAdChromeInteractionSession _handleChromeSubtitleTouched:] */

void FUN_10639395c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar7 = *(long *)(param_1 + 8);
    lVar3 = lVar4;
    func_0x00010be36bc0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20(lVar7,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar7;
    func_0x00010c1172e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bef4800(uVar6,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e6ec0(uVar1,param_2,uVar6,lVar5);
      _objc_release(uVar6);
      lVar3 = lVar7;
      func_0x00010bef4240(lVar7);
      func_0x00010beba7a0(param_1,param_2,lVar5,param_3,lVar3);
    }
    _objc_release(lVar5);
    _objc_release(lVar7);
  }
  _objc_release(lVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106393acc; end: 106393b43; -[SCAdChromeInteractionSession _handleChromeClosed:] */

void FUN_106393acc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c98a0;
  func_0x00010c0689a0(PTR_PTR_1126c98a0,param_2,0xd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84d40(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106393b44; end: 106393c93; -[SCAdChromeInteractionSession _showPublisherProfileWithProfileId:page:adProductType:] */

void FUN_106393b44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b4158;
  uVar6 = 0x5c;
  if (param_5 != 6) {
    uVar6 = 0x13;
  }
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0f1880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bc9107c(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 6;
  func_0x00010bb0584c(6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03bd00(puVar1,param_2,uVar2,param_1,lVar5,uVar6,uVar7,*(undefined1 *)(param_1 + 0x19)
                      ,0);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x20),param_2,puVar1,param_1);
  *(undefined1 *)(param_1 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106393c94; end: 106393cbb; -[SCAdChromeInteractionSession businessProfilesPresenterScopeWillDismiss:] */

void FUN_106393c94(long param_1)

{
  func_0x00010bf94c80(*(undefined8 *)(param_1 + 0x20));
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 106393cbc; end: 106393cd3; -[SCAdChromeInteractionSession operaControlling] */

void FUN_106393cbc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106393cd4; end: 106393cdf; -[SCAdChromeInteractionSession setOperaControlling:] */

void FUN_106393cd4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 106393ce0; end: 106393cf7; -[SCAdChromeInteractionSession playlistItemController] */

void FUN_106393ce0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106393cf8; end: 106393d03; -[SCAdChromeInteractionSession setPlaylistItemController:] */

void FUN_106393cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 106393d04; end: 106393d4f; -[SCAdChromeInteractionSession .cxx_destruct] */

void FUN_106393d04(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106393d50; end: 106393dc3; -[SCAdPlaybackChromeInteractingLegacyAdaptor initWithChromeInteractionSession:] */

undefined1 * FUN_106393d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f10d0;
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



/* Entry: 106393dc4; end: 106393dcb; -[SCAdPlaybackChromeInteractingLegacyAdaptor isPresentingProfile] */

void FUN_106393dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07acb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isPresentingProfile_1125fc538);
  return;
}



/* Entry: 106393dcc; end: 106393dcf; -[SCAdPlaybackChromeInteractingLegacyAdaptor operaViewDidSendEvent:page:params:] */

void FUN_106393dcc(void)

{
  return;
}



/* Entry: 106393dd0; end: 106393ddb; -[SCAdPlaybackChromeInteractingLegacyAdaptor registeredEventsForOperaSession] */

undefined * FUN_106393dd0(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106393ddc; end: 106393de3; -[SCAdPlaybackChromeInteractingLegacyAdaptor shouldTriggerAttachmentOnTapChromeWithPageId:] */

void FUN_106393ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c234f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_shouldTriggerAttachmentOnTapChro_11266adf0);
  return;
}



/* Entry: 106393de4; end: 106393deb; -[SCAdPlaybackChromeInteractingLegacyAdaptor shouldTriggerAttachmentOnTapChromeProfileIconWithPageId:] */

void FUN_106393de4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c234f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_shouldTriggerAttachmentOnTapChro_11266ade8);
  return;
}



/* Entry: 106393dec; end: 106393df3; -[SCAdPlaybackChromeInteractingLegacyAdaptor adsDrivenSwipeLeftToShowAttachmentWithPageId:] */

void FUN_106393dec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befdf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_adsDrivenSwipeLeftToShowAttachme_11259d180);
  return;
}



/* Entry: 106393df4; end: 106393e0b; -[SCAdPlaybackChromeInteractingLegacyAdaptor operaControlling] */

void FUN_106393df4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106393e0c; end: 106393e17; -[SCAdPlaybackChromeInteractingLegacyAdaptor setOperaControlling:] */

void FUN_106393e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106393e18; end: 106393e2f; -[SCAdPlaybackChromeInteractingLegacyAdaptor playlistItemController] */

void FUN_106393e18(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106393e30; end: 106393e3b; -[SCAdPlaybackChromeInteractingLegacyAdaptor setPlaylistItemController:] */

void FUN_106393e30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106393e3c; end: 106393e6f; -[SCAdPlaybackChromeInteractingLegacyAdaptor .cxx_destruct] */

void FUN_106393e3c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


