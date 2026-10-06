/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10648feb4; end: 106490087; -[SCContextV2Presenter contextLogger:didLogActionWithTypeString:cardType:cardId:filterLensId:actionType:contextMenuType:interactionContext:contextLabelType:] */

void FUN_10648feb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_106490088;
    puStack_c0 = &UNK_110924850;
    _objc_copyWeak(auStack_90,auStack_68);
    _objc_retain(param_4);
    uStack_b8 = param_4;
    _objc_retain(param_6);
    uStack_b0 = param_6;
    uStack_88 = param_8;
    _objc_retain(param_5);
    uStack_80 = param_9;
    uStack_78 = param_10;
    uStack_a8 = param_5;
    _objc_retain(uVar1);
    uStack_a0 = uVar1;
    _objc_retain(param_7);
    uStack_70 = param_11;
    uStack_98 = param_7;
    func_0x0001000d76cc("APPSTORE",&puStack_d8);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106490088; end: 106490413;  */

void FUN_106490088(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
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
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
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
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar23 = *(undefined8 *)(lVar1 + 0x88);
    puVar2 = PTR_PTR_1126c9830;
    func_0x00010beedca0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(lVar1 + 0x90);
    puVar3 = PTR_PTR_1126b5cb8;
    func_0x00010beedca0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    puVar4 = PTR_PTR_1126b5cb8;
    puStack_100 = puVar3;
    func_0x00010beee760();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = *(undefined **)(param_1 + 0x28);
    puVar5 = puVar25;
    puStack_f8 = puVar4;
    if (puVar25 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR_PTR_1126b5cb8;
    puStack_b0 = puVar5;
    func_0x00010bfc1d00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_f0 = puVar6;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x50)
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b5cb8;
    puStack_a8 = puVar7;
    func_0x00010bf32060();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    puStack_e8 = puVar8;
    func_0x00010c067fc0(uVar9);
    func_0x00010c0df780(puVar10,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126b5cb8;
    puStack_a0 = puVar10;
    func_0x00010bf4eb20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_e0 = puVar11;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x58)
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126b5cb8;
    puStack_98 = puVar12;
    func_0x00010c068440();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_d8 = puVar13;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x60)
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126b5cb8;
    puStack_90 = puVar14;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = *(undefined **)(param_1 + 0x38);
    puVar16 = puVar26;
    puStack_d0 = puVar15;
    if (puVar26 == (undefined *)0x0) {
      puVar16 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar17 = PTR_PTR_1126b5cb8;
    puStack_88 = puVar16;
    func_0x00010bfae080();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = *(undefined **)(param_1 + 0x40);
    puVar18 = puVar27;
    puStack_c8 = puVar17;
    if (puVar27 == (undefined *)0x0) {
      puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar19 = PTR_PTR_1126b5cb8;
    puStack_80 = puVar18;
    func_0x00010bf4e920();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_c0 = puVar19;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x68)
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar20;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_b8,&puStack_100,9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar23,param_2,puVar2,uVar24,puVar21);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    if (puVar27 == (undefined *)0x0) {
      _objc_release(puVar18);
    }
    _objc_release(puVar17);
    if (puVar26 == (undefined *)0x0) {
      _objc_release(puVar16);
    }
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    if (puVar25 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar22 = lVar1;
  func_0x00010be632a0(lVar1);
  func_0x00010c1d0640(puVar2,param_2,lVar22,&PTR____CFConstantStringClassReference_110eb83b8);
  _objc_release(lVar22);
  lVar22 = lVar1;
  func_0x00010be63280(lVar1);
  func_0x00010c1d0640(puVar2,param_2,lVar22,&PTR____CFConstantStringClassReference_110eb8398);
  _objc_release(lVar22);
  puVar3 = PTR_PTR_1126b16b0;
  _objc_alloc(PTR_PTR_1126b16b0);
  uVar23 = *(undefined8 *)(lVar1 + 0xb8);
  func_0x00010c244ae0(uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  func_0x00010becd5c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar4,param_2,lVar1,0);
  func_0x00010c049c40(puVar3,param_2,uVar23,puVar2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(uVar23);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106490414; end: 106490537; -[SCContextV2Presenter _createSnapchatterActionHandler] */

void FUN_106490414(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar2 = param_1;
  func_0x00010be632a0(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb83b8);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be63280(param_1);
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110eb8398);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b16b0;
  _objc_alloc(PTR_PTR_1126b16b0);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c244ae0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  func_0x00010becd5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar5,param_2,param_1,0);
  func_0x00010c049c40(puVar3,param_2,uVar4,puVar1,puVar5);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106490538; end: 1064905d7; -[SCContextV2Presenter _newOpenChatActionHandler] */

undefined * FUN_106490538(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c2898;
  _objc_alloc(PTR_PTR_1126c2898);
  uVar3 = *(undefined8 *)(param_1 + 0x160);
  puVar2 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  func_0x00010becd5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar2,param_2,param_1,0);
  func_0x00010c032fc0(puVar1,param_2,uVar3,0,0,puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 1064905d8; end: 106490643; -[SCContextV2Presenter _newOpenCameraActionHandler] */

undefined * FUN_1064905d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c2890;
  _objc_alloc(PTR_PTR_1126c2890);
  uVar2 = *(undefined8 *)(param_1 + 0x160);
  func_0x00010becd5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033040(puVar1,param_2,uVar2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 106490644; end: 1064906c3; -[SCContextV2Presenter _replyOptionsFromActionParams:] */

ulong FUN_106490644(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bf4eae0();
  if (param_3 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x148);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c23c7c0();
  }
  else {
    if (param_3 != 3) {
      return 0x20;
    }
    uVar1 = *(ulong *)(param_1 + 0x148);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c23c7a0();
  }
  _objc_release(uVar1);
  return uVar2 | 0x20;
}



/* Entry: 1064906c4; end: 106490793; -[SCContextV2Presenter _isReplyEnabledForActionParams:] */

bool FUN_1064906c4(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c131ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uVar2 = param_3;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07f4a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x30);
      func_0x00010c08fa60(lVar5);
      bVar1 = lVar5 != 0;
      goto LAB_106490760;
    }
  }
  bVar1 = true;
LAB_106490760:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106490794; end: 106490dcb; -[SCContextV2Presenter _configureRepliesSubscribeUpsellDataManagerWithParams:source:inputItemDeeplink:parentViewController:completion:] */

void FUN_106490794(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_98;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_1 + 0x198);
  if (lVar2 == 0) {
    uVar3 = param_3;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar7);
    uVar3 = uVar6;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain();
    _objc_release(uVar6);
    uVar4 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar6);
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar8 == 0) {
      uVar8 = uVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar6);
      _objc_release(uVar4);
      if (uVar8 != 0) {
        uVar4 = param_3;
        func_0x00010c0ea8e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1064909b0;
      }
      uStack_98 = 0;
    }
    else {
LAB_1064909b0:
      uStack_98 = uVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar4);
    }
    uVar4 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar7 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    uVar6 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar7);
    uVar4 = uVar8;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar8);
    puVar7 = PTR_PTR_1126cade8;
    _objc_alloc();
    uVar9 = *(undefined8 *)(param_1 + 0x170);
    func_0x00010c11a760();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar10;
    func_0x00010bf1ade0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 8);
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07a880();
    func_0x00010c04efe0();
    _objc_release(uVar3);
    uVar12 = *(undefined8 *)(param_1 + 0x198);
    *(undefined **)(param_1 + 0x198) = puVar7;
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar4);
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(uStack_98);
    _objc_release(uVar5);
    lVar2 = *(long *)(param_1 + 0x198);
  }
  iVar1 = (int)lVar2;
  func_0x00010c2347c0();
  if (iVar1 == 0) {
    func_0x00010be7aa60(param_1);
    goto LAB_106490d54;
  }
  _objc_retain(param_4);
  uVar9 = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = param_4;
  _objc_release(uVar9);
  if (*(long *)(param_1 + 400) == 0) {
    puVar7 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    if (param_6 == 0) {
      lVar2 = param_1;
      func_0x00010bf16340(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038f40(puVar7);
      _objc_release(lVar2);
    }
    else {
      func_0x00010c038f40(puVar7);
    }
    uVar3 = param_3;
    func_0x00010c0ea8e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + 0x188);
    if (lVar2 != 0) {
      func_0x00010bf241a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 400);
      *(long *)(param_1 + 400) = lVar2;
      _objc_release(uVar9);
      _objc_release(puVar7);
      goto LAB_106490cf0;
    }
    func_0x00010be7aa60(param_1);
  }
  else {
LAB_106490cf0:
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x180));
    func_0x00010c0dd5c0(param_1);
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7);
    }
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    puVar7 = PTR_PTR_1126b5c68;
    func_0x00010c131880(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0480(uVar9);
  }
  _objc_release(puVar7);
LAB_106490d54:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106490dcc; end: 106490e3b; -[SCContextV2Presenter _logPresentChatWithSource:] */

void FUN_106490dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5c68;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c131980(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0480(uVar2,param_2,puVar1,0,0,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106490e3c; end: 106490ef7; -[SCContextV2Presenter dismissRepliesSubscribeUpsellScopeWithDidSubscribe:] */

void FUN_106490e3c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010be65140(param_1,param_2,0);
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x1b8);
    uVar1 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7aa60(param_1,param_2,uVar3,0,uVar1,0,1,0);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = PTR_PTR_1126b5c68;
    func_0x00010c25fd00(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0480(uVar1,param_2,puVar2,0,0,*(undefined8 *)(param_1 + 0x1b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106490ef8; end: 106490f7f; -[SCContextV2Presenter dealloc] */

void FUN_106490ef8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0xa8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0xa8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(long *)(param_1 + 400) != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x180));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puStack_28 = PTR_PTR_1126f1560;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106490f80; end: 106490f97; -[SCContextV2Presenter delegate] */

void FUN_106490f80(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106490f98; end: 106490fa3; -[SCContextV2Presenter setDelegate:] */

void FUN_106490f98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1c0,param_3);
  return;
}



/* Entry: 106490fa4; end: 106490fab; -[SCContextV2Presenter pairedMusicDataProvider] */

undefined8 FUN_106490fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 106490fac; end: 106490fdb; -[SCContextV2Presenter setPairedMusicDataProvider:] */

void FUN_106490fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106490fdc; end: 106490fe3; -[SCContextV2Presenter swipeUpHandler] */

undefined8 FUN_106490fdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}



/* Entry: 106490fe4; end: 106490feb; -[SCContextV2Presenter contextActionSource] */

undefined8 FUN_106490fe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d8);
}



/* Entry: 106490fec; end: 10649101b; -[SCContextV2Presenter setContextActionSource:] */

void FUN_106490fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10649101c; end: 106491033; -[SCContextV2Presenter baseViewController] */

void FUN_10649101c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106491034; end: 10649103b; -[SCContextV2Presenter placeholderCards] */

undefined8 FUN_106491034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



/* Entry: 10649103c; end: 106491303; -[SCContextV2Presenter .cxx_destruct] */

void FUN_10649103c(long param_1)

{
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_destroyWeak(param_1 + 0x1e0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_destroyWeak(param_1 + 0x1c0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106491304; end: 10649134b;  */

void FUN_106491304(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e50cb8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e50cb8,
                      &PTR____CFConstantStringClassReference_110e50c98,0);
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



/* Entry: 10649134c; end: 10649145f; -[SCContextActionMenuAction initWithTitle:identifier:attributes:imageProvider:handler:] */

undefined1 *
FUN_10649134c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f1568;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106491460; end: 106491483; -[SCContextActionMenuAction copyWithZone:] */

undefined8 FUN_106491460(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106491484; end: 10649151b; -[SCContextActionMenuAction hash] */

undefined8 * FUN_106491484(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong unaff_x22;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  lStack_40 = -lVar4;
  if (-1 < lVar4) {
    lStack_40 = lVar4;
  }
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106491638:
    puVar9 = (undefined1 *)0x1;
    goto LAB_10649163c;
  }
  puVar9 = (undefined1 *)0x0;
  if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10649163c;
  puVar9 = (undefined1 *)puVar3;
  _objc_opt_class(puVar3);
  puVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar9);
  if ((((((ulong)puVar6 & 1) == 0) || (*(long *)((long)puVar3 + 0x18) != *(long *)(param_3 + 0x18)))
      || ((lVar4 = *(long *)((long)puVar3 + 8), lVar4 != *(long *)(param_3 + 8) &&
          (func_0x00010c071ae0(), (int)lVar4 == 0)))) ||
     ((lVar4 = *(long *)((long)puVar3 + 0x10), lVar4 != *(long *)(param_3 + 0x10) &&
      (func_0x00010c071ae0(), (int)lVar4 == 0)))) {
    puVar9 = (undefined1 *)0x0;
    goto LAB_10649163c;
  }
  uVar7 = *(ulong *)((long)puVar3 + 0x20);
  uVar8 = *(ulong *)(param_3 + 0x20);
  if (uVar7 == uVar8) {
    puVar9 = *(undefined1 **)((long)puVar3 + 0x28);
    puVar6 = *(undefined1 **)(param_3 + 0x28);
    if (puVar9 == puVar6) goto LAB_106491638;
LAB_10649160c:
    _objc_retainBlock();
    func_0x00010c071ae0(puVar9);
    _objc_release(puVar6);
    if (uVar7 == uVar8) goto LAB_10649163c;
  }
  else {
    unaff_x22 = uVar8;
    _objc_retainBlock(uVar8);
    uVar5 = uVar7;
    func_0x00010c071ae0();
    if ((uVar5 & 1) == 0) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      puVar9 = *(undefined1 **)((long)puVar3 + 0x28);
      puVar6 = *(undefined1 **)(param_3 + 0x28);
      if (puVar9 != puVar6) goto LAB_10649160c;
      puVar9 = (undefined1 *)0x1;
    }
  }
  _objc_release(unaff_x22);
LAB_10649163c:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 10649151c; end: 10649166f; -[SCContextActionMenuAction isEqual:] */

long FUN_10649151c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong unaff_x22;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106491638:
    lVar5 = 1;
    goto LAB_10649163c;
  }
  lVar5 = 0;
  if ((param_1 == 0) || (param_3 == 0)) goto LAB_10649163c;
  uVar3 = param_1;
  _objc_opt_class(param_1);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar3);
  if (((((uVar4 & 1) == 0) || (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
      ((lVar5 = *(long *)(param_1 + 8), lVar5 != *(long *)(param_3 + 8) &&
       (func_0x00010c071ae0(), (int)lVar5 == 0)))) ||
     ((lVar5 = *(long *)(param_1 + 0x10), lVar5 != *(long *)(param_3 + 0x10) &&
      (func_0x00010c071ae0(), (int)lVar5 == 0)))) {
    lVar5 = 0;
    goto LAB_10649163c;
  }
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(ulong *)(param_3 + 0x20);
  if (uVar3 == uVar4) {
    lVar5 = *(long *)(param_1 + 0x28);
    lVar2 = *(long *)(param_3 + 0x28);
    if (lVar5 == lVar2) goto LAB_106491638;
LAB_10649160c:
    _objc_retainBlock();
    func_0x00010c071ae0(lVar5);
    _objc_release(lVar2);
    if (uVar3 == uVar4) goto LAB_10649163c;
  }
  else {
    unaff_x22 = uVar4;
    _objc_retainBlock(uVar4);
    uVar1 = uVar3;
    func_0x00010c071ae0();
    if ((uVar1 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x28);
      lVar2 = *(long *)(param_3 + 0x28);
      if (lVar5 != lVar2) goto LAB_10649160c;
      lVar5 = 1;
    }
  }
  _objc_release(unaff_x22);
LAB_10649163c:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 106491670; end: 106491677; -[SCContextActionMenuAction title] */

undefined8 FUN_106491670(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106491678; end: 10649167f; -[SCContextActionMenuAction identifier] */

undefined8 FUN_106491678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106491680; end: 106491687; -[SCContextActionMenuAction attributes] */

undefined8 FUN_106491680(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106491688; end: 10649168f; -[SCContextActionMenuAction imageProvider] */

undefined8 FUN_106491688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106491690; end: 106491697; -[SCContextActionMenuAction handler] */

undefined8 FUN_106491690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106491698; end: 1064916df; -[SCContextActionMenuAction .cxx_destruct] */

void FUN_106491698(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064916e0; end: 106491753; -[SCContextSocialUnlockLensOptions initWithActivationSource:shouldPreselect:lensType:enableARBar:isGameLens:] */

void FUN_1064916e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f1570;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
  }
  return;
}



/* Entry: 106491754; end: 106491777; -[SCContextSocialUnlockLensOptions copyWithZone:] */

undefined8 FUN_106491754(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106491778; end: 1064917eb; -[SCContextSocialUnlockLensOptions hash] */

undefined8 * FUN_106491778(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar1;
  if (-1 < lVar1) {
    lStack_30 = lVar1;
  }
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uStack_20 = (ulong)*(byte *)(param_1 + 10);
  func_0x000100505190(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar3 & 1) == 0) ||
          (((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(char *)((long)puVar2 + 8) != param_3[8])) ||
           (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) ||
         (*(char *)((long)puVar2 + 9) != param_3[9])) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(ulong)(*(char *)((long)puVar2 + 10) == param_3[10]);
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 1064917ec; end: 1064918b3; -[SCContextSocialUnlockLensOptions isEqual:] */

bool FUN_1064917ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((((uVar3 & 1) == 0) ||
          (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
         (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 10) == *(char *)(param_3 + 10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1064918b4; end: 1064918bb; -[SCContextSocialUnlockLensOptions activationSource] */

undefined8 FUN_1064918b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1064918bc; end: 1064918c3; -[SCContextSocialUnlockLensOptions shouldPreselect] */

undefined1 FUN_1064918bc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1064918c4; end: 1064918cb; -[SCContextSocialUnlockLensOptions lensType] */

undefined8 FUN_1064918c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1064918cc; end: 1064918d3; -[SCContextSocialUnlockLensOptions enableARBar] */

undefined1 FUN_1064918cc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1064918d4; end: 1064918db; -[SCContextSocialUnlockLensOptions isGameLens] */

undefined1 FUN_1064918d4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1064918dc; end: 10649194f; -[SCGrapheneContextMessagingMetric2 init] */

undefined1 * FUN_1064918dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1578;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106491950; end: 106491ea7; -[SCContextAISongPillView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106491950(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
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
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  undefined8 uStack_c0;
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
  puStack_b8 = PTR_PTR_1126f1580;
  puVar22 = &uStack_c0;
  uStack_c0 = param_1;
  _objc_msgSendSuper2(puVar22,PTR_s_initWithFrame__1125e2948);
  puVar1 = (undefined *)0x0;
  if (puVar22 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fe3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar22);
    _objc_release(puVar1);
    func_0x00010c160fc0(puVar22);
    func_0x00010c1af000(puVar22);
    puVar2 = puVar22;
    func_0x00010c161080(puVar22);
    func_0x0001064b1d90();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(puVar22);
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar4 = PTR_PTR_1126b0c40;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4030000000000000,0x4030000000000000,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c182220(puVar1);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    puVar4 = puVar3;
    func_0x0001064b1d90();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1eda0(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar3);
    _objc_release(puVar4);
    puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar1;
    puStack_78 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    _objc_release(puVar4);
    func_0x00010c16e060(puVar5);
    func_0x00010c166c00(puVar5);
    func_0x00010c207380(0x4018000000000000,puVar5);
    func_0x00010c21e900(puVar5);
    func_0x00010c219b60(puVar5);
    func_0x00010befbb60(puVar22);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    puStack_b0 = puVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    puStack_a8 = puVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar22;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    puStack_a0 = puVar11;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf493c0(0xc02c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar5;
    puStack_98 = puVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar22;
    func_0x00010c274200(puVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar5;
    puStack_90 = puVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar22;
    func_0x00010bf1ff80(puVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar18;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
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
    _objc_release(puVar2);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010c18b5e0();
    func_0x00010bef9040(puVar22);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar22;
  }
  ___stack_chk_fail();
  puVar22 = *(undefined8 **)(puVar1 + _DAT_11274867c);
  if (puVar22 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000106491ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar22[2])();
    return puVar22;
  }
  return (undefined8 *)0x0;
}



/* Entry: 106491ea8; end: 106491ec3; -[SCContextAISongPillView _handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106491ea8(long param_1)

{
  if (*(long *)(param_1 + _DAT_11274867c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106491ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_11274867c) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106491ec4; end: 106491ecb; -[SCContextAISongPillView gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_106491ec4(void)

{
  return 1;
}



/* Entry: 106491ecc; end: 106491f4b; -[SCContextAISongPillView layoutSubviews] */

void FUN_106491ecc(double param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1580;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1 * 0.5);
  _objc_release(param_2);
  return;
}



/* Entry: 106491f4c; end: 106491f5b; -[SCContextAISongPillView onTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106491f4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274867c);
}



/* Entry: 106491f5c; end: 106491f67; -[SCContextAISongPillView setOnTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106491f5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106491f68; end: 106491f7b; -[SCContextAISongPillView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106491f68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274867c,0);
  return;
}



/* Entry: 106491f7c; end: 106491fe3; -[SCContextAISongPillViewController initWithBottomClearance:leadingMargin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106491f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1588;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112748684) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112748688) = param_2;
  }
  return;
}



/* Entry: 106491fe4; end: 10649201f; -[SCContextAISongPillViewController loadView] */

void FUN_106491fe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c95d8;
  _objc_alloc_init(PTR_PTR_1126c95d8);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106492020; end: 1064922f7; -[SCContextAISongPillViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106492020(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126f1588;
  lStack_88 = param_1;
  _objc_msgSendSuper2(&lStack_88,PTR_s_viewDidLoad_112684cd8);
  _objc_initWeak(auStack_90,param_1);
  puVar2 = PTR_PTR_1126cadf0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010c1d3960(puVar2);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c08de00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493c0(*(undefined8 *)(param_1 + _DAT_112748688));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  puStack_78 = puVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010bf1ff80(lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf493c0(-*(double *)(param_1 + _DAT_112748684));
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar2);
  puVar11 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  puVar12 = puVar11 + 0x20;
  _objc_loadWeakRetained();
  puVar13 = puVar12;
  func_0x00010c0e6ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar12);
  if (puVar13 != (undefined1 *)0x0) {
    puVar11 = puVar11 + 0x20;
    _objc_loadWeakRetained();
    puVar12 = puVar11;
    func_0x00010c0e6ee0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(puVar12 + 0x10))();
    _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar11);
    return;
  }
  return;
}



/* Entry: 1064922f8; end: 106492387;  */

void FUN_1064922f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0e6ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    func_0x00010c0e6ee0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106492388; end: 106492397; -[SCContextAISongPillViewController onTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106492388(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748680);
}



/* Entry: 106492398; end: 1064923a3; -[SCContextAISongPillViewController setOnTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106492398(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1064923a4; end: 1064923b7; -[SCContextAISongPillViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064923a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112748680,0);
  return;
}



/* Entry: 1064923b8; end: 106492757; -[SCContextRepostedStoryCenterTapHandler contextCenterTapOverlayPresenterDidTapPill] */

void FUN_1064923b8(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (uVar2 == 0)) goto LAB_106492728;
  uVar3 = uVar2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  if (uVar3 != 0) {
    func_0x0001084365e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c1344a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = uVar7;
    func_0x00010c08fa60();
    if (uVar6 != 0) {
      puVar5 = PTR_PTR_1126cadf8;
      _objc_opt_new(PTR_PTR_1126cadf8);
      func_0x00010c204680();
      func_0x00010c174ae0(puVar5);
      puVar8 = PTR_PTR_1126b5b00;
      _objc_opt_new();
      func_0x00010c2249e0();
      puVar9 = PTR_PTR_1126b6038;
      _objc_alloc();
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010beeed40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4eae0();
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010beeed40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4eb00();
      func_0x00010bff0a60();
      _objc_release(uVar11);
      _objc_release(uVar10);
      uVar11 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar11;
      func_0x00010c2a27c0();
      _objc_release(uVar11);
      if ((int)uVar10 == 0) {
LAB_106492618:
        lVar15 = *(long *)(param_1 + 0x38);
        if (lVar15 == 0) {
          uVar10 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bf544e0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 *)(param_1 + 0x38) = uVar10;
          _objc_release(uVar11);
          lVar12 = param_1 + 0x28;
          _objc_loadWeakRetained(lVar12);
          func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38));
          _objc_release(lVar12);
          lVar15 = *(long *)(param_1 + 0x38);
        }
        _objc_retain(lVar15);
      }
      else {
        lVar12 = *(long *)(param_1 + 0x20);
        func_0x00010beeed80();
        _objc_retainAutoreleasedReturnValue();
        if (lVar12 == 0) goto LAB_106492618;
        lVar13 = *(long *)(param_1 + 0x20);
        func_0x00010beee700();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar13;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar14;
        func_0x00010bf54560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        _objc_release(lVar13);
        lVar14 = param_1 + 0x28;
        _objc_loadWeakRetained(lVar14);
        func_0x00010c18b5e0(lVar15);
        _objc_release(lVar14);
        _objc_release(lVar12);
      }
      _objc_retain(lVar15);
      func_0x00010bfd0040(lVar15);
      _objc_unsafeClaimAutoreleasedReturnValue();
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010bfe1560();
      _objc_release(param_1);
      _objc_release(lVar15);
      _objc_release(lVar15);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar5);
    }
    _objc_release(uVar7);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
LAB_106492728:
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 106492758; end: 10649275b;  */

void FUN_106492758(void)

{
  return;
}



/* Entry: 10649275c; end: 1064928a7; -[SCContextRepostedStoryCenterTapHandler initWithPresenter:v3InteropProvider:actionHandlerDelegate:actionHandler:appStartExperimentReader:contextExperimentService:shouldRenameSpotlightToReals:] */

undefined1 *
FUN_10649275c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f1590;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x50) = param_9;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_5);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064928a8; end: 10649294b; -[SCContextRepostedStoryCenterTapHandler shouldHandleCenterTapAtLocation:page:layerViewController:] */

ulong FUN_1064928a8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010723c744(uVar4);
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 10649294c; end: 106492a4f; -[SCContextRepostedStoryCenterTapHandler handleCenterTapAtLocation:page:layerViewController:] */

void FUN_10649294c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  _objc_storeWeak(param_3 + 0x10,param_6);
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c083820();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    if ((*(byte *)(param_3 + 0x50) & 1) == 0) {
      func_0x0001064b1d60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001064b1d78();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar2 = param_3 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c235e80(param_1,param_2);
    _objc_release(lVar2);
    lVar2 = param_3 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c18b5e0();
    _objc_release(lVar2);
    _objc_storeWeak(param_3 + 0x18,param_5);
  }
  else {
    lVar1 = param_3 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfe1560();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106492a50; end: 106492ac3; -[SCContextRepostedStoryCenterTapHandler .cxx_destruct] */

void FUN_106492a50(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106492ac4; end: 106492b43; -[SCContextCenterTapCoordinator init] */

undefined1 * FUN_106492ac4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1598;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106492b44; end: 106492bdf; -[SCContextCenterTapCoordinator setHandlers:] */

void FUN_106492b44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1;
  _objc_release(uVar3);
  lVar1 = param_3;
  func_0x00010c0d3c80();
  _objc_release(param_3);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
  }
  else {
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar1;
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106492be0; end: 106492c43; -[SCContextCenterTapCoordinator registerHandler:] */

void FUN_106492be0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010bf4b900(uVar1,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_3);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106492c44; end: 106492c83; -[SCContextCenterTapCoordinator unregisterHandler:] */

void FUN_106492c44(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 8));
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106492c84; end: 106492d67; -[SCContextCenterTapCoordinator isWithinCenterRegion:layerViewController:] */

bool FUN_106492c84(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = param_1;
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar4 = dVar3;
  _objc_release(uVar1);
  if (dVar3 <= 0.0) {
    bVar2 = false;
  }
  else {
    uVar1 = param_4;
    func_0x00010bf46560(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2690e0();
    dVar5 = dVar3 * (1.0 - dVar4);
    dVar6 = dVar3 * dVar4;
    if (dVar3 * dVar4 <= dVar3 * 0.2) {
      dVar6 = dVar3 * 0.2;
    }
    dVar4 = dVar3 * 0.8;
    if (dVar5 <= dVar3 * 0.8) {
      dVar4 = dVar5;
    }
    bVar2 = param_1 <= dVar4 && dVar6 <= param_1;
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 106492d68; end: 106492f1f; -[SCContextCenterTapCoordinator processTapAtLocation:page:layerViewController:] */

undefined8
FUN_106492d68(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_3;
  func_0x00010c083ca0(param_1,param_2,param_3,param_4,param_6);
  if ((int)puVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x00010bfd3360();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (param_3 != (undefined *)0x0) {
      puVar1 = param_3;
    }
    _objc_retain(puVar1);
    _objc_release(param_3);
    puVar2 = puVar1;
    func_0x00010bf52a60(puVar1,param_4,&uStack_130,auStack_e8,0x10);
    uVar4 = 0;
    if (puVar2 != (undefined *)0x0) {
      lVar6 = *plStack_120;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(puVar1);
          }
          uVar5 = *(ulong *)(lStack_128 + (long)puVar7 * 8);
          uVar3 = uVar5;
          func_0x00010c230a20(param_1,param_2,uVar5,param_4,param_5,param_6);
          if ((uVar3 & 1) != 0) {
            func_0x00010bfd07e0(param_1,param_2,uVar5,param_4,param_5,param_6);
            uVar4 = 1;
            goto LAB_106492ec8;
          }
          puVar7 = puVar7 + 1;
        } while (puVar2 != puVar7);
        puVar2 = puVar1;
        func_0x00010bf52a60(puVar1,param_4,&uStack_130,auStack_e8,0x10);
      } while (puVar2 != (undefined *)0x0);
      uVar4 = 0;
    }
LAB_106492ec8:
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar4;
  }
  ___stack_chk_fail();
  return *(undefined8 *)(param_5 + 0x10);
}



/* Entry: 106492f20; end: 106492f27; -[SCContextCenterTapCoordinator handlers] */

undefined8 FUN_106492f20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106492f28; end: 106492f57; -[SCContextCenterTapCoordinator .cxx_destruct] */

void FUN_106492f28(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106492f58; end: 106492f5f; -[SCContextCenterTapOverlayPresenter initWithLayerViewController:] */

void FUN_106492f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c021c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLayerViewController_shou_1125e60e8,param_3,0);
  return;
}



/* Entry: 106492f60; end: 106492fdb; -[SCContextCenterTapOverlayPresenter initWithLayerViewController:shouldRenameSpotlightToReals:] */

undefined1 *
FUN_106492f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f15a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106492fdc; end: 1064930c3; -[SCContextCenterTapOverlayPresenter showAtLocation:title:] */

void FUN_106492fdc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  func_0x00010bfe1560(param_3);
  puVar1 = PTR_PTR_1126cae00;
  _objc_alloc();
  func_0x00010c052bc0();
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  *(undefined **)(param_3 + 0x10) = puVar1;
  _objc_release(uVar4);
  func_0x00010c1af000(*(undefined8 *)(param_3 + 0x10),param_4,1);
  func_0x00010c161020(*(undefined8 *)(param_3 + 0x10),param_4,param_5);
  _objc_release(param_5);
  func_0x00010c161080(*(undefined8 *)(param_3 + 0x10),param_4,
                      *(undefined8 *)PTR__UIAccessibilityTraitButton_110345920);
  func_0x00010c18b5e0(*(undefined8 *)(param_3 + 0x10),param_4,param_3);
  lVar2 = param_3 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c235e60(param_1,param_2,*(undefined8 *)(param_3 + 0x10),param_4,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1064930c4; end: 10649312f; -[SCContextCenterTapOverlayPresenter showAtLocation:] */

void FUN_1064930c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_3;
  if ((*(byte *)(param_3 + 0x18) & 1) == 0) {
    func_0x0001064b1d60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001064b1d78();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c235e80(param_1,param_2,param_3,param_4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106493130; end: 10649316b; -[SCContextCenterTapOverlayPresenter hide] */

void FUN_106493130(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010bfe1560();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10649316c; end: 10649317b; -[SCContextCenterTapOverlayPresenter isVisible] */

bool FUN_10649316c(long param_1)

{
  return *(long *)(param_1 + 0x10) != 0;
}



/* Entry: 10649317c; end: 1064931ab; -[SCContextCenterTapOverlayPresenter centerTapPillViewDidTap:] */

void FUN_10649317c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064931ac; end: 1064931c3; -[SCContextCenterTapOverlayPresenter delegate] */

void FUN_1064931ac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064931c4; end: 1064931cf; -[SCContextCenterTapOverlayPresenter setDelegate:] */

void FUN_1064931c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1064931d0; end: 106493203; -[SCContextCenterTapOverlayPresenter .cxx_destruct] */

void FUN_1064931d0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106493204; end: 10649323b; -[SCContextMenuChevronInterstitialController setContainerView:] */

void FUN_106493204(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beb14f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupViews_112589ee0);
  return;
}



/* Entry: 10649323c; end: 1064932b3; -[SCContextMenuChevronInterstitialController animationRatio:] */

void FUN_10649323c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  double dStack_20;
  double dStack_18;
  
  uStack_40 = 0xc2000000;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  dStack_18 = (1.0 - param_1) * 26.0;
  pcStack_38 = FUN_1064932b4;
  puStack_30 = &UNK_110858dc0;
  uStack_28 = param_2;
  dStack_20 = param_1;
  func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_3,&puStack_48);
  return;
}



/* Entry: 1064932b4; end: 106493317;  */

void FUN_1064932b4(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c1677c0(*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  _CGAffineTransformMakeTranslation(&uStack_50,0,*(undefined8 *)(param_1 + 0x30));
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,&uStack_80);
  return;
}



/* Entry: 106493318; end: 10649391f; -[SCContextMenuChevronInterstitialController _setupViews] */

void FUN_106493318(double param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  undefined1 auStack_100 [48];
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c12c960(*(undefined8 *)(param_3 + 0x10));
  if (*(long *)(param_3 + 0x10) == 0) {
    puVar1 = PTR_PTR_1126b1198;
    _objc_alloc_init();
    uVar17 = *(undefined8 *)(param_3 + 0x10);
    *(undefined **)(param_3 + 0x10) = puVar1;
    _objc_release(uVar17);
    func_0x00010c21e900(*(undefined8 *)(param_3 + 0x10));
    uVar17 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010bfcd9c0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bff00();
    _objc_release(uVar17);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_90 = puVar3;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = 0x3fd999999999999a;
    puVar3 = puVar4;
    func_0x00010bf414e0(0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010bfcd9c0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60();
    _objc_release(uVar17);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8260(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c23d0a0(puVar2);
    func_0x00010c23d0a0(puVar2);
    param_1 = 0.0;
    func_0x00010c013de0(0,0,uVar18,param_2);
    uVar17 = *(undefined8 *)(param_3 + 0x18);
    *(undefined **)(param_3 + 0x18) = puVar1;
    _objc_release(uVar17);
    func_0x00010c182220(*(undefined8 *)(param_3 + 0x18));
    func_0x00010c1a9f00(*(undefined8 *)(param_3 + 0x18));
    func_0x00010c219b60(*(undefined8 *)(param_3 + 0x18));
    func_0x00010befbb60(*(undefined8 *)(param_3 + 0x10));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + 0x18);
    uStack_b0 = uVar17;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010bf348e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_3 + 0x18);
    uStack_a8 = uVar18;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0(puVar2);
    uVar12 = uVar11;
    func_0x00010bf49420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_3 + 0x18);
    uStack_a0 = uVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0(puVar2);
    uVar16 = uVar13;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar3);
    _objc_release(uVar16);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar18);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar17);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar2);
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + 8));
  _CGRectGetMaxY();
  dVar19 = param_1 + -50.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + 8));
  _CGRectGetWidth();
  func_0x00010c19f0e0(0,dVar19,param_1,0x4049000000000000,*(undefined8 *)(param_3 + 0x10));
  _CGAffineTransformMakeTranslation(auStack_100,0,0x403a000000000000);
  func_0x00010c219960(*(undefined8 *)(param_3 + 0x18));
  func_0x00010befbb60(*(undefined8 *)(param_3 + 8));
  func_0x00010c1677c0(0,*(undefined8 *)(param_3 + 0x10));
  func_0x00010c219b60(*(undefined8 *)(param_3 + 0x10));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar14 = *(long *)(param_3 + 0x10);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf49420(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_3 + 0x10);
  lStack_d0 = lVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + 8);
  func_0x00010c08de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  uStack_c8 = uVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + 8);
  func_0x00010c2793a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_3 + 0x10);
  uStack_c0 = uVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar18);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar17);
  _objc_release(uVar7);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar14 + 0x18,0);
  _objc_storeStrong(lVar14 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar14 + 8,0);
  return;
}



/* Entry: 106493920; end: 10649395b; -[SCContextMenuChevronInterstitialController .cxx_destruct] */

void FUN_106493920(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10649395c; end: 106493a33; -[SCContextOperaDataPublisher initWithActionBarDataFetcher:spotlightDataFetcher:] */

undefined1 *
FUN_10649395c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f15a8;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106493a34; end: 106493e47; -[SCContextOperaDataPublisher publishActionBarDataForPageObservable:toPropertyUpdateModerator:navigationStyle:verticalNavigationCanSwipeLeft:logger:viewLogger:presenter:viewDidLoadSignal:] */

void FUN_106493a34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_80,param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_initWeak(auStack_90,*(undefined8 *)(param_1 + 8));
  _objc_initWeak(auStack_98,*(undefined8 *)(param_1 + 0x18));
  _objc_initWeak(auStack_a0,param_7);
  _objc_initWeak(auStack_a8,param_8);
  _objc_initWeak(auStack_b0,param_9);
  uVar1 = param_7;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_106493e48;
  puStack_e0 = &UNK_110924880;
  uVar2 = param_3;
  puStack_c8 = puStack_d8;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = puVar5;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_106493f9c;
  puStack_140 = &UNK_1109248b0;
  _objc_copyWeak(auStack_120,auStack_90);
  puStack_128 = &uStack_d0;
  uStack_138 = uVar1;
  uStack_108 = param_5;
  _objc_copyWeak(auStack_118,auStack_98);
  _objc_copyWeak(auStack_110,auStack_a8);
  uStack_100 = param_6;
  _objc_retain(param_10);
  uStack_130 = param_10;
  uVar4 = uVar3;
  func_0x00010c2656e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e0e60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_178,auStack_88);
  _objc_copyWeak(auStack_170,auStack_b0);
  _objc_copyWeak(auStack_168,auStack_a0);
  _objc_copyWeak(auStack_160,auStack_a8);
  uVar7 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_178);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uStack_130);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_120);
  _objc_release(uVar3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106493e48; end: 106493f9b;  */

void FUN_106493e48(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c93d0;
  func_0x00010c0ea900(PTR_PTR_1126c93d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar4;
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae750;
  if (uVar1 == 0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2468a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106493f9c; end: 1064940e7;  */

void FUN_106493f9c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined *)(param_1 + 0x38);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae6b8;
  if ((param_2 == 0) || (puVar2 == (undefined *)0x0)) {
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = (undefined *)(param_1 + 0x40);
    _objc_loadWeakRetained(puVar3);
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    puVar1 = puVar2;
    func_0x00010c0e0980(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064940e8; end: 106494193;  */

void FUN_1064940e8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  _objc_copyWeak(param_1 + 0x38,param_2 + 0x38);
  _objc_copyWeak(param_1 + 0x40,param_2 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x48,param_2 + 0x48);
  return;
}



/* Entry: 106494194; end: 10649429b;  */

void FUN_106494194(long param_1,undefined8 param_2)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_50,param_1 + 0x28);
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  _objc_copyWeak(auStack_40,param_1 + 0x38);
  _objc_copyWeak(auStack_38,param_1 + 0x40);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 10649429c; end: 1064944b3;  */

void FUN_10649429c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar5 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar5);
    puVar1 = PTR_PTR_1126b2d20;
    func_0x00010beee000();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940(lVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lVar5);
    lVar5 = param_2;
    func_0x00010bfda4c0();
    if ((int)lVar5 != 0) {
      lVar5 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar5);
      lVar3 = param_2;
      func_0x00010c0fd7a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dca20(lVar5);
      _objc_release(lVar3);
      _objc_release(lVar5);
    }
    lVar5 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar5);
    lVar3 = param_2;
    func_0x00010bf4e060(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bf12640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf12660(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar5);
    lVar5 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bf5d2a0();
    _objc_release(lVar5);
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60();
    if (lVar5 != 0) {
      lVar5 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar5);
      lVar3 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4e560();
      _objc_release(lVar3);
      _objc_release(lVar5);
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      lVar5 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4e5c0();
      _objc_release(lVar5);
      _objc_release(param_1);
    }
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(*(undefined8 *)(lVar6 + 0x20));
  _objc_copyWeak(param_2 + 0x28,lVar6 + 0x28);
  _objc_copyWeak(param_2 + 0x30,lVar6 + 0x30);
  _objc_copyWeak(param_2 + 0x38,lVar6 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_2 + 0x40,lVar6 + 0x40);
  return;
}



/* Entry: 1064944b4; end: 106494547;  */

void FUN_1064944b4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_copyWeak(param_1 + 0x28,param_2 + 0x28);
  _objc_copyWeak(param_1 + 0x30,param_2 + 0x30);
  _objc_copyWeak(param_1 + 0x38,param_2 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 106494548; end: 10649454b;  */

void FUN_106494548(void)

{
  return;
}



/* Entry: 10649454c; end: 1064947ff; -[SCContextOperaDataPublisher publishSpotlightDataForPageObservable:toPropertyUpdateModerator:logger:viewLogger:] */

void FUN_10649454c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_80,param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_initWeak(auStack_90,*(undefined8 *)(param_1 + 0x10));
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_106494800;
  uStack_a0 = 0x106494810;
  uStack_98 = 0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106494818;
  puStack_d0 = &UNK_110924880;
  uVar1 = param_3;
  puStack_b8 = puStack_c8;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = puVar4;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_106494998;
  puStack_100 = &UNK_110924960;
  _objc_copyWeak(auStack_f0,auStack_90);
  puStack_f8 = &uStack_c0;
  uVar3 = uVar2;
  func_0x00010c2656e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0e60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_120,auStack_88);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_120);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_f0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106494800; end: 106494817;  */

void FUN_106494800(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106494818; end: 106494997;  */

void FUN_106494818(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d20;
  func_0x00010c24afc0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_opt_class(PTR_PTR_1126ae720);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(ulong *)(lVar6 + 0x28) = uVar1;
  _objc_release(uVar5);
  uVar1 = param_2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae750;
  if (uVar1 == 0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2468a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106494998; end: 106494a9b;  */

void FUN_106494998(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae6b8;
  if ((param_2 == 0) || (puVar2 == (undefined *)0x0)) {
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar1 = puVar2;
      func_0x00010bfaa640(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      puVar1 = puVar3;
    }
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106494a9c; end: 106494b47;  */

void FUN_106494a9c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106494b48; end: 106494c27;  */

void FUN_106494b48(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    puVar1 = PTR_PTR_1126b2d20;
    func_0x00010c24c0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010bf7e940(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  return;
}


