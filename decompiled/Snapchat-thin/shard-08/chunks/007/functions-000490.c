/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10653a824; end: 10653a97b; -[SCChatViewControllerV3 viewDidPopFromStack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653a824(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + _DAT_11274a30c) != 0) {
    func_0x00010c1677c0(0);
  }
  func_0x00010c1a7700(0x3ff0000000000000,param_1);
  lVar2 = param_1;
  func_0x00010c267ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b8c0(lVar2,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c282660(param_1);
  func_0x00010bddfb80(param_1);
  func_0x00010bf83a20(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a098);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e53918,0,0);
  if ((int)uVar1 != 0) {
    lVar3 = (long)_DAT_11274a1e8;
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0a4);
    func_0x00010bfe6360(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf841e0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274a210);
    func_0x00010bfe6360(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf841e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10653a97c; end: 10653a9cf; -[SCChatViewControllerV3 resumeConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653a97c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
  func_0x00010c069240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10653a9d0; end: 10653aa2f; -[SCChatViewControllerV3 _resumeConversationIfNecessary] */

void FUN_10653a9d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0f3c00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0741e0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c13d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resumeConversation_11262cf18);
    return;
  }
  return;
}



/* Entry: 10653aa30; end: 10653aa83; -[SCChatViewControllerV3 suspendConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653aa30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
  func_0x00010c069240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10653aa84; end: 10653aa93; -[SCChatViewControllerV3 activeConversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653aa84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf50290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a1ec),PTR_s_conversationId_1125b1a48);
  return;
}



/* Entry: 10653aa94; end: 10653aaab; -[SCChatViewControllerV3 canBeShown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10653aa94(long param_1)

{
  return *(long *)(param_1 + _DAT_11274a328) != 0;
}



/* Entry: 10653aaac; end: 10653aabb; -[SCChatViewControllerV3 allowMessageReleasing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653aaac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf01290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a2f8),PTR_s_allowMessageReleasing_11259de48);
  return;
}



/* Entry: 10653aabc; end: 10653aacb; -[SCChatViewControllerV3 blockMessageReleasing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653aabc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1d410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a2f8),PTR_s_blockMessageReleasing_1125a4ea8);
  return;
}



/* Entry: 10653aacc; end: 10653ab13; -[SCChatViewControllerV3 chatInputController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653aacc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a308;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 == 0) {
    func_0x00010be39e40();
    lVar1 = *(long *)(param_1 + lVar2);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10653ab14; end: 10653ab2b; -[SCChatViewControllerV3 _conversationSubtypeMetadataObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653ab14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a1b8),PTR_s_map__11260bb98,
             &PTR___NSConcreteGlobalBlock_11092a1a0);
  return;
}



/* Entry: 10653ab2c; end: 10653ac27;  */

void FUN_10653ab2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10653ac28;
  uStack_30 = 0x10653ac38;
  uStack_28 = 0;
  func_0x00010c0bf0a0(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10653ac28; end: 10653ac3f;  */

void FUN_10653ac28(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10653ac40; end: 10653acfb;  */

void FUN_10653ac40(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10653acfc; end: 10653ae1f; -[SCChatViewControllerV3 _messagePluginActiveConversationInformation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653acfc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  
  puVar5 = PTR_PTR_1126ae6b8;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  func_0x00010bde8d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12a600();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    puStack_110 = &uStack_118;
    uStack_118 = 0;
    uStack_108 = 0x3032000000;
    pcStack_100 = FUN_10653ac28;
    uStack_f8 = 0x10653ac38;
    uStack_f0 = 0;
    puStack_140 = &uStack_148;
    uStack_148 = 0;
    uStack_138 = 0x3032000000;
    pcStack_130 = FUN_10653ac28;
    uStack_128 = 0x10653ac38;
    uStack_120 = 0;
    puStack_170 = &uStack_178;
    uStack_178 = 0;
    uStack_168 = 0x3032000000;
    pcStack_160 = FUN_10653ac28;
    uStack_158 = 0x10653ac38;
    uStack_150 = 0;
    uVar6 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae750;
    _objc_opt_class(PTR_PTR_1126ae750);
    uVar11 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar5);
    uVar1 = uVar6;
    if ((uVar11 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    func_0x00010c0bf0a0(uVar1);
    uVar6 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bf0a0(uVar6);
    uVar11 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar11 != 0) {
      uVar7 = param_2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ae750;
      _objc_opt_class(PTR_PTR_1126ae750);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar5);
      uVar11 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar11 = 0;
      }
      _objc_retain(uVar11);
      _objc_release(uVar7);
      func_0x00010c0bf0a0(uVar11);
      _objc_release(uVar11);
    }
    uVar11 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar11 == 0) {
      uVar11 = 0;
    }
    else {
      uVar7 = param_2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b6100;
      _objc_opt_class(PTR_PTR_1126b6100);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar5);
      uVar11 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar11 = 0;
      }
      _objc_retain(uVar11);
      _objc_release(uVar7);
    }
    lVar10 = puStack_110[5];
    func_0x00010c08fa60();
    puVar5 = PTR_PTR_1126ae750;
    if (lVar10 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar9 = PTR_PTR_1126cb6d0;
      _objc_alloc(PTR_PTR_1126cb6d0);
      puVar4 = PTR_PTR_1126b6100;
      _objc_retain(uVar11);
      _objc_alloc(puVar4);
      func_0x00010c0df180(uVar11);
      func_0x00010c0df160(uVar11);
      _objc_release(uVar11);
      func_0x00010c030580(puVar4);
      func_0x00010c0050a0(puVar9);
      func_0x00010c0ec800(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar4);
    }
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_release(uVar11);
    __Block_object_dispose(&uStack_178,8);
    _objc_release(uStack_150);
    __Block_object_dispose(&uStack_148,8);
    _objc_release(uStack_120);
    __Block_object_dispose(&uStack_118,8);
    _objc_release(uStack_f0);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10653ae20; end: 10653b227;  */

void FUN_10653ae20(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  
  _objc_retain(param_2);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10653ac28;
  uStack_88 = 0x10653ac38;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_10653ac28;
  uStack_b8 = 0x10653ac38;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_10653ac28;
  uStack_e8 = 0x10653ac38;
  uStack_e0 = 0;
  uVar2 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae750;
  _objc_opt_class(PTR_PTR_1126ae750);
  uVar9 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar9 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c0bf0a0(uVar1);
  uVar2 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf0a0(uVar2);
  uVar9 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar9 != 0) {
    uVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae750;
    _objc_opt_class(PTR_PTR_1126ae750);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar9 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar9 = 0;
    }
    _objc_retain(uVar9);
    _objc_release(uVar4);
    func_0x00010c0bf0a0(uVar9);
    _objc_release(uVar9);
  }
  uVar9 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar9 == 0) {
    uVar9 = 0;
  }
  else {
    uVar4 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b6100;
    _objc_opt_class(PTR_PTR_1126b6100);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar9 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar9 = 0;
    }
    _objc_retain(uVar9);
    _objc_release(uVar4);
  }
  lVar6 = puStack_a0[5];
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126ae750;
  if (lVar6 == 0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = PTR_PTR_1126cb6d0;
    _objc_alloc(PTR_PTR_1126cb6d0);
    puVar8 = PTR_PTR_1126b6100;
    _objc_retain(uVar9);
    _objc_alloc(puVar8);
    func_0x00010c0df180(uVar9);
    func_0x00010c0df160(uVar9);
    _objc_release(uVar9);
    func_0x00010c030580(puVar8);
    func_0x00010c0050a0(puVar7);
    func_0x00010c0ec800(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar8);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar9);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10653b228; end: 10653b3af;  */

void FUN_10653b228(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(ulong *)(lVar5 + 0x28) = uVar1;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10653b3b0; end: 10653b737; -[SCChatViewControllerV3 _initInputController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653b3b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  lVar9 = (long)_DAT_11274a308;
  if (*(long *)(param_1 + lVar9) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274a1c8);
    func_0x00010bef0720();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + _DAT_11274a260);
    _objc_retain(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    lVar12 = (long)_DAT_11274a140;
    uVar11 = *(undefined8 *)(param_1 + lVar12);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10653b738;
    puStack_98 = &UNK_11092a240;
    uStack_90 = uVar1;
    _objc_retain(uVar10);
    uStack_88 = uVar10;
    _objc_retain(puVar2);
    puStack_80 = puVar2;
    func_0x00010c0b8600(uVar11,param_2,&puStack_b0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar12);
    puStack_d8 = puVar5;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_10653b900;
    puStack_c0 = &UNK_11086f858;
    uStack_b8 = uVar1;
    func_0x00010c0b8600(uVar3,param_2,&puStack_d8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b60e0;
    uVar8 = *(undefined8 *)(param_1 + _DAT_11274a098);
    uVar7 = *(undefined8 *)(param_1 + _DAT_11274a0b0);
    uVar13 = *(undefined8 *)(param_1 + _DAT_11274a120);
    lVar12 = param_1;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11274a0e4);
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf56980(puVar5,param_2,uVar8,uVar7,uVar13,0x27,uVar11,uVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(lVar12);
    func_0x00010c189400(puVar5,param_2,1);
    func_0x00010c18b5e0(puVar5,param_2,param_1);
    puVar6 = puVar5;
    func_0x00010c065f00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec7a80(param_1,param_2,puVar6);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010c086be0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec7b00(param_1,param_2,puVar6);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010c065ea0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec7a60(param_1,param_2,puVar6);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010c066120(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec7ac0(param_1,param_2,puVar6);
    _objc_release(puVar6);
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar5;
    _objc_retain(puVar5);
    _objc_release(uVar4);
    lVar9 = param_1;
    func_0x00010c279540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar9;
    func_0x00010c292b20();
    _objc_release(lVar9);
    func_0x00010c20eaa0(puVar5,param_2,lVar12 == 2);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11274a35c);
    *(undefined **)(param_1 + _DAT_11274a35c) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar4);
    _objc_release(puVar5);
    _objc_release(uVar3);
    _objc_release(uVar11);
    _objc_release(puStack_80);
    _objc_release(uStack_88);
    _objc_release(puVar2);
    _objc_release(uVar10);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 10653b738; end: 10653b7fb;  */

void FUN_10653b738(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10653b7fc;
  puStack_40 = &UNK_11092a210;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar3;
  uStack_30 = uVar4;
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x000100504554(param_2,&puStack_58);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10653b7fc; end: 10653b8ff;  */

void FUN_10653b7fc(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010c119c20();
  if (lVar5 == 1) {
    lVar5 = param_2;
    func_0x00010bf57b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010010fab4();
    lVar1 = lVar5;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    func_0x00010c17bd60(lVar1);
    puVar2 = PTR_DAT_1126a5460;
    _objc_retain(lVar5);
    lVar4 = lVar5;
    func_0x00010010fab4(lVar5,puVar2);
    lVar3 = lVar5;
    if ((int)lVar4 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(lVar5);
    if (lVar3 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
    }
    _objc_retain(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar5);
  }
  else {
    lVar5 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10653b900; end: 10653b9f7;  */

void FUN_10653b900(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10653b990;
  puStack_30 = &UNK_11086f888;
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100504554(param_2,&puStack_48);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10653b9f8; end: 10653bc1b; -[SCChatViewControllerV3 _initInsetUpdaterWithSizeEvents:accessorySizeEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653b9f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  lVar6 = (long)_DAT_11274a190;
  if (*(long *)(param_3 + lVar6) == 0) {
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cb6d8;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e360();
    lVar6 = (long)_DAT_11274a360;
    uVar5 = *(undefined8 *)(param_3 + lVar6);
    *(undefined **)(param_3 + lVar6) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    uVar7 = *(undefined8 *)(param_3 + _DAT_11274a2e8);
    uVar5 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010c267fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2601e0(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar1);
  }
  else {
    puVar2 = PTR_PTR_1126cb6d8;
    _objc_alloc();
    uVar1 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e360();
    lVar6 = (long)_DAT_11274a360;
    uVar5 = *(undefined8 *)(param_3 + lVar6);
    *(undefined **)(param_3 + lVar6) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_3 + _DAT_11274a2e8);
    param_5 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010c267fc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2601e0(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0d9080(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,puVar2,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 10653bc1c; end: 10653bc7b;  */

void FUN_10653bc1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0d9080(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,puVar1,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 10653bc7c; end: 10653bd7f; -[SCChatViewControllerV3 longPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653bc7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 == 1) {
    lVar1 = *(long *)(param_3 + _DAT_11274a300);
    if ((lVar1 != 0) && (func_0x00010c252440(), lVar1 == 0)) {
      func_0x00010bf50280(*(undefined8 *)(param_3 + _DAT_11274a1ec));
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar1 = param_3;
      func_0x00010c267f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_5,param_4,lVar1);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c267f00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfed080(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar2 != 0) {
        func_0x00010c142240(lVar2);
      }
      _objc_release(lVar2);
    }
    func_0x00010be7a820(param_3,param_4,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10653bd80; end: 10653be37; -[SCChatViewControllerV3 onTapOnWhitespaceAroundStackedCell:] */

void FUN_10653bd80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,uVar1);
  _objc_release(param_5);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfed080(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be72b40(param_3,param_4,uVar2,0x7fffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10653be38; end: 10653bff3; -[SCChatViewControllerV3 cellHandleTap:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653be38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_6);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfecfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126cb310;
  _objc_retain(param_5);
  _objc_opt_class(puVar4);
  uVar5 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar4);
  uVar1 = param_5;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_5);
  if (uVar1 != 0) {
    lVar2 = param_3;
    func_0x00010be5ffa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cb6a0(param_1,param_2,param_3);
    _objc_release(lVar2);
  }
  lVar2 = lVar3;
  func_0x00010c142240();
  lVar6 = *(long *)(param_3 + _DAT_11274a1ec);
  func_0x00010c0cbaa0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf529e0();
  _objc_release(lVar6);
  if (lVar2 < lVar7) {
    func_0x00010be682e0(param_1,param_2,param_3);
  }
  _objc_release(uVar1);
  _objc_release(lVar3);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10653bff4; end: 10653c04f; -[SCChatViewControllerV3 updateScrollEnabled:reason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653bff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274a2f4;
  func_0x00010c07d3e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bf50280(*(undefined8 *)(param_1 + _DAT_11274a1ec));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setScrollEnabled__11265b8f0,param_3);
  return;
}



/* Entry: 10653c050; end: 10653c0c3; -[SCChatViewControllerV3 _chatTableViewIsScrolling] */

ulong FUN_10653c050(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c070ea0();
  if ((uVar2 & 1) == 0) {
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c070400();
    _objc_release(param_1);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10653c0c4; end: 10653c72f; -[SCChatViewControllerV3 onDoubleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653c0c4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puStack_d8;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_5);
  lVar14 = (long)_DAT_11274a1ec;
  ppuVar2 = *(undefined ***)(param_3 + lVar14);
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e53938;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  func_0x00010bddd120(param_3);
  uVar3 = *(ulong *)(param_3 + lVar14);
  func_0x00010c076ee0();
  if ((uVar3 & 1) != 0) goto LAB_10653c6c8;
  lVar4 = *(long *)(param_3 + lVar14);
  func_0x00010bf50940();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar4;
  func_0x00010bf2be20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar14 != 0) goto LAB_10653c6c8;
  puVar5 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(puVar5);
  puVar5 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfed080(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = param_3;
  func_0x00010be5ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c07fd40();
  if (((ulong)puVar8 & 1) == 0) {
    puVar8 = param_3;
    func_0x00010c267f00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf33b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar10 = puVar9;
    func_0x00010010fab4(puVar9,PTR_DAT_1126a5468);
    puVar8 = puVar9;
    if ((int)puVar10 == 0) {
      puVar8 = (undefined *)0x0;
    }
    _objc_retain(puVar8);
    _objc_release(puVar9);
    puVar10 = param_3;
    if (puVar8 == (undefined *)0x0) {
      func_0x00010c131ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eb2c0();
      func_0x00010c1b0840(puVar10);
      puVar9 = puVar10;
      func_0x00010c271d80(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be476e0(param_3);
      _objc_release(puVar9);
    }
    else {
      func_0x00010be5ffa0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_3;
      func_0x00010bee54e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x2020000000;
      uStack_78 = 0;
      if (puVar10 == (undefined *)0x0) {
        if (puVar11 != (undefined *)0x0) {
          puVar16 = PTR_PTR_1126cb6e0;
          func_0x00010c0cb660(param_1,param_2);
          puVar17 = puVar11;
          func_0x00010c0cbb20();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar17;
          func_0x00010bf529e0();
          _objc_release(puVar17);
          if (puVar16 < puVar15) {
            puVar16 = puVar11;
            func_0x00010c0cbb20();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar16;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar16);
          }
          else {
            puVar17 = (undefined *)0x0;
          }
          puVar16 = puVar17;
          func_0x00010bf490e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar16 == (undefined *)0x0) {
            puVar15 = puVar11;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
            puVar13 = puVar15;
            _objc_opt_isKindOfClass(puVar15,puVar12);
            puStack_d8 = puVar15;
            if (((ulong)puVar13 & 1) == 0) {
              puStack_d8 = (undefined *)0x0;
            }
            _objc_retain();
            _objc_release(puVar15);
          }
          else {
            _objc_retain(puVar16);
            puStack_d8 = puVar16;
          }
          _objc_release(puVar16);
          puVar16 = puVar11;
          func_0x00010bf9e080(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bff80();
          _objc_release(puVar16);
          puVar16 = PTR_PTR_1126c6b60;
          func_0x00010bfed400(PTR_PTR_1126c6b60);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4dd60(puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar16);
          puVar16 = puVar11;
          func_0x00010704ab7c(puVar11,puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          goto LAB_10653c59c;
        }
        puStack_d8 = (undefined *)0x0;
        puVar16 = (undefined *)0x0;
      }
      else {
        puStack_d8 = puVar10;
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar10;
        func_0x00010bf2d880();
        *(char *)(puStack_88 + 3) = (char)puVar16;
        func_0x00010c0cb680(PTR_PTR_1126cb6e0);
        puVar16 = PTR_PTR_1126c6b60;
        func_0x00010bfed400(PTR_PTR_1126c6b60);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4dd60(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        puVar16 = puVar10;
        func_0x00010704b110(puVar10,puVar9,*(undefined8 *)(param_3 + _DAT_11274a0b0));
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar9;
LAB_10653c59c:
        _objc_release(puVar17);
      }
      puVar9 = param_3;
      func_0x00010c131ea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eb2c0();
      func_0x00010c1b0840(puVar9);
      if (puVar16 != (undefined *)0x0) {
        func_0x00010c1e6d00(puVar9);
      }
      if (*(char *)(puStack_88 + 3) == '\x01') {
        puVar17 = puVar9;
        func_0x00010c11ecc0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60();
        _objc_release(puVar17);
      }
      puVar17 = puVar9;
      func_0x00010c271d80(puVar9);
      _objc_retainAutoreleasedReturnValue();
      if (puVar16 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar15 = PTR_PTR_1126b5b40;
        func_0x00010bf69940(PTR_PTR_1126b5b40);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010be476e0(param_3);
      if (puVar16 != (undefined *)0x0) {
        _objc_release(puVar15);
      }
      _objc_release(puVar17);
      _objc_release(puVar9);
      __Block_object_dispose(&uStack_90,8);
      _objc_release(puStack_d8);
      _objc_release(puVar16);
      _objc_release(puVar11);
    }
    _objc_release(puVar10);
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar6);
LAB_10653c6c8:
  _objc_release(ppuVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 10653c730; end: 10653c743;  */

void FUN_10653c730(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10653c744; end: 10653c773; -[SCChatViewControllerV3 longPressGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653c744(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a2fc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10653c774; end: 10653c7cb; -[SCChatViewControllerV3 dismissCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653c774(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a240;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10653c7cc; end: 10653c8e7; -[SCChatViewControllerV3 _launchChatCameraScopeWithConfiguration:quickStickerImage:cameraViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653c7cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274a240);
  func_0x00010c071800();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10653c8e8;
    puStack_60 = &UNK_1108502a8;
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    uStack_58 = param_3;
    uStack_40 = param_5;
    _objc_retain(param_4);
    uStack_50 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10653c8e8; end: 10653c983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653c8e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010beeb120(lVar1);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11274a244);
    func_0x00010bf23680(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + 0x20),lVar1,
                        *(undefined8 *)(param_1 + 0x38),0,*(undefined8 *)(param_1 + 0x28),0,lVar1,0)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + _DAT_11274a240),param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10653c984; end: 10653ca7b; -[SCChatViewControllerV3 _hasSendingMessageInBlockForPath:] */

undefined8 FUN_10653c984(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be5ffa0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bfdf5a0();
  lVar5 = param_3;
  func_0x00010c142240();
  if ((int)uVar6 < lVar5) {
    lVar5 = (long)(int)uVar6;
    do {
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar5,0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010be5ffa0(param_1,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c07d880();
      _objc_release(uVar3);
      _objc_release(puVar2);
      if ((int)uVar6 != 0) break;
      lVar5 = lVar5 + 1;
      lVar4 = param_3;
      func_0x00010c142240();
    } while (lVar5 < lVar4);
  }
  else {
    uVar6 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 10653ca7c; end: 10653cb13; -[SCChatViewControllerV3 gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_10653ca7c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
      goto LAB_10653caf8;
    }
  }
  uVar3 = 0;
LAB_10653caf8:
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 10653cb14; end: 10653cb7f; -[SCChatViewControllerV3 gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10653cb14(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  if (param_3 == *(long *)(param_1 + _DAT_11274a300)) {
    _objc_retain(param_4);
    _objc_opt_class(puVar1);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    uVar3 = (uint)uVar2;
    _objc_release(param_4);
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 10653cb80; end: 10653ce0f; -[SCChatViewControllerV3 gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_10653cb80(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == *(long *)((long)param_3 + (long)_DAT_11274a304)) {
    uVar4 = *(ulong *)((long)param_3 + (long)_DAT_11274a308);
    func_0x00010c0815c0();
    if ((uVar4 & 1) == 0) {
      func_0x00010c209fc0(param_5);
      ppuVar8 = (undefined **)0x1;
    }
    else {
      ppuVar8 = (undefined **)0x0;
    }
    goto LAB_10653cdd4;
  }
  ppuVar8 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_6);
  _objc_release(ppuVar8);
  ppuVar8 = param_3;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar8;
  func_0x00010bfed080(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  ppuVar8 = param_3;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar8;
  func_0x00010bf33b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  if (param_5 == *(long *)((long)param_3 + (long)_DAT_11274a300)) {
    ppuVar8 = *(undefined ***)((long)param_3 + (long)_DAT_11274a1ec);
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110e53938;
    ppuVar1 = ppuVar5;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar1 = ppuVar8;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar8);
    func_0x00010bddd120(param_3);
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar5 = ppuVar3;
      _objc_opt_class(ppuVar3);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
    }
    if (ppuVar2 != (undefined **)0x0) {
      func_0x00010c142240(ppuVar2);
    }
    puVar6 = PTR_PTR_1126cb4f0;
    _objc_retain(ppuVar3);
    _objc_opt_class(puVar6);
    ppuVar7 = ppuVar3;
    _objc_opt_isKindOfClass(ppuVar3,puVar6);
    ppuVar8 = ppuVar3;
    if (((ulong)ppuVar7 & 1) == 0) {
      ppuVar8 = (undefined **)0x0;
    }
    _objc_retain(ppuVar8);
    _objc_release(ppuVar3);
    puVar6 = PTR_PTR_1126cb4b0;
    if (ppuVar8 == (undefined **)0x0) {
      _objc_retain(ppuVar3);
      _objc_opt_class(puVar6);
      ppuVar7 = ppuVar3;
      _objc_opt_isKindOfClass(ppuVar3,puVar6);
      ppuVar8 = ppuVar3;
      if (((ulong)ppuVar7 & 1) == 0) {
        ppuVar8 = (undefined **)0x0;
      }
      _objc_retain(ppuVar8);
      _objc_release(ppuVar3);
      if (ppuVar8 != (undefined **)0x0) goto LAB_10653cd88;
      ppuVar7 = (undefined **)0x0;
      ppuVar8 = (undefined **)0x1;
    }
    else {
LAB_10653cd88:
      ppuVar8 = ppuVar3;
      func_0x00010c230a40(ppuVar3);
      ppuVar7 = ppuVar3;
    }
    _objc_release(ppuVar7);
    _objc_release(ppuVar5);
    _objc_release(ppuVar1);
  }
  else {
    ppuVar8 = (undefined **)0x1;
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
LAB_10653cdd4:
  _objc_release(param_6);
  _objc_release(param_5);
  return ppuVar8;
}



/* Entry: 10653ce10; end: 10653cf23; -[SCChatViewControllerV3 messageIndexForTouchPoint:viewModel:includeWhitespace:] */

ulong FUN_10653ce10(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  uVar1 = param_3;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfed080(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf33b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126cb310;
  _objc_retain(uVar3);
  _objc_opt_class(puVar4);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010be5fe60(param_1,param_2,param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return param_3;
}



/* Entry: 10653cf24; end: 10653cff3; -[SCChatViewControllerV3 _messageIndexForTouchPoint:stackedCell:includeWhitespace:] */

long FUN_10653cf24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  if (param_5 == 0) {
    lVar2 = 0x7fffffffffffffff;
  }
  else {
    _objc_retain(param_5);
    func_0x00010c267f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf512a0(param_1,param_2);
    _objc_release(param_3);
    lVar1 = param_5;
    func_0x00010bfed120(param_1,param_2,param_5,param_4,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    if (lVar1 == 0) {
      lVar2 = 0x7fffffffffffffff;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c142240(lVar1);
    }
    _objc_release(lVar1);
  }
  return lVar2;
}



/* Entry: 10653cff4; end: 10653d033; -[SCChatViewControllerV3 _modalDidOpen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653cff4(long param_1,undefined8 param_2)

{
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + _DAT_11274a2f4),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1c8bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a2e8),PTR_s_setModalShown__11264fd20,1);
  return;
}



/* Entry: 10653d034; end: 10653d07b; -[SCChatViewControllerV3 _modalDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653d034(long param_1,undefined8 param_2)

{
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + _DAT_11274a2f4),param_2,1);
  func_0x00010c1c8be0(*(undefined8 *)(param_1 + _DAT_11274a2e8));
                    /* WARNING: Could not recover jumptable at 0x00010be08d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableKeyboardIfNecessary_11255fce8);
  return;
}



/* Entry: 10653d07c; end: 10653d0f7; -[SCChatViewControllerV3 saveMessageId:conversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653d07c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c069180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a9c0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10653d0f8; end: 10653d173; -[SCChatViewControllerV3 unsaveMessageId:conversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653d0f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c069180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2824a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10653d174; end: 10653d253; -[SCChatViewControllerV3 captureWorkflowDidDismissWithDidSendSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653d174(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010be08d60();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10653d20c;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  func_0x00010c29c7e0(*(undefined8 *)(param_1 + _DAT_11274a17c));
  lVar1 = *(long *)(param_1 + _DAT_11274a0a8);
  func_0x00010bf07b60();
  if (lVar1 == 0) {
    func_0x00010be83e40(param_1);
  }
  return;
}



/* Entry: 10653d254; end: 10653d2f3; -[SCChatViewControllerV3 dismissFullScreenView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653d254(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274a250;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274a364);
  puVar2 = PTR_PTR_1126c2c50;
  func_0x00010bf83ac0(PTR_PTR_1126c2c50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar2);
  func_0x00010bf82fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf84370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissReactionsDetailScope_1125bea80);
  return;
}



/* Entry: 10653d2f4; end: 10653d337; -[SCChatViewControllerV3 shouldDisableFullScreen] */

uint FUN_10653d2f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f3c00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0741e0();
  _objc_release(param_1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10653d338; end: 10653d33f; -[SCChatViewControllerV3 _playChatSentSoundMaybe] */

void FUN_10653d338(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be745d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__playChatSoundMaybe__11257ab10,6);
  return;
}



/* Entry: 10653d340; end: 10653d413; -[SCChatViewControllerV3 _playChatSoundMaybe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653d340(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar2 = param_1;
  func_0x00010c0f3c00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0799e0();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c07b6a0();
    if ((int)puVar5 == 0) {
      iVar1 = 0;
    }
    else {
      puVar5 = puVar4;
      func_0x00010c119d40();
      iVar1 = (int)puVar5;
    }
    lVar2 = param_1;
    func_0x00010be42ba0();
    if (((int)lVar2 == 0) || (iVar1 != 0)) {
      uVar6 = *(undefined8 *)(param_1 + _DAT_11274a114);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fe860();
      _objc_release(uVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10653d414; end: 10653d45b; -[SCChatViewControllerV3 _isPlayingMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10653d414(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a290);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07a400();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10653d45c; end: 10653d763; -[SCChatViewControllerV3 updateTableContainerViewBottomConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653d45c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 auStack_138 [8];
  undefined1 uStack_130;
  undefined1 auStack_128 [8];
  ulong uStack_120;
  ulong uStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c267cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar1);
  puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar1 = param_1;
  func_0x00010c267cc0();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = uVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_a0 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_b0 = uVar1;
  uStack_88 = uVar1;
  func_0x00010c267cc0();
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  uStack_c8 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = uVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  uStack_e0 = uVar2;
  uStack_80 = uVar2;
  func_0x00010c267cc0();
  _objc_retainAutoreleasedReturnValue();
  uStack_e8 = uVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  uStack_78 = uVar4;
  func_0x00010c267cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d8);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(uStack_d0);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  _objc_release(uStack_a8);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  uVar3 = uStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_10653d764;
  if (*(char *)(uVar3 + (long)_DAT_11274a34c) == '\x01') {
    uVar4 = uVar3;
    uStack_120 = uVar2;
    uStack_118 = uVar1;
    puStack_110 = puVar9;
    uStack_108 = uVar8;
    puStack_100 = &stack0xfffffffffffffff0;
    func_0x00010beb4a80();
    uVar1 = uVar3;
    func_0x00010beb3080();
    if ((int)uVar1 == 0) {
      _objc_initWeak(auStack_128,uVar3);
      _objc_copyWeak(auStack_138,auStack_128);
      uStack_130 = (undefined1)uVar4;
      func_0x00010be08ca0(uVar3);
      _objc_destroyWeak(auStack_138);
      _objc_destroyWeak(auStack_128);
    }
    else if ((uVar4 & 1) == 0) {
      func_0x00010c1522c0(*(undefined8 *)(uVar3 + (long)_DAT_11274a2f4));
                    /* WARNING: Could not recover jumptable at 0x00010be90790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s__republishVisibleCellsAfterEntry_112581b80)
      ;
      return;
    }
  }
  return;
}



/* Entry: 10653d764; end: 10653d867; -[SCChatViewControllerV3 _enableKeyboardConditionallyOnChatEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653d764(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + (long)_DAT_11274a34c) == '\x01') {
    uVar1 = param_1;
    func_0x00010beb4a80();
    uVar2 = param_1;
    func_0x00010beb3080();
    if ((int)uVar2 == 0) {
      _objc_initWeak(auStack_38,param_1);
      _objc_copyWeak(auStack_48,auStack_38);
      uStack_40 = (undefined1)uVar1;
      func_0x00010be08ca0(param_1);
      _objc_destroyWeak(auStack_48);
      _objc_destroyWeak(auStack_38);
    }
    else if ((uVar1 & 1) == 0) {
      func_0x00010c1522c0(*(undefined8 *)(param_1 + (long)_DAT_11274a2f4));
                    /* WARNING: Could not recover jumptable at 0x00010be90790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__republishVisibleCellsAfterEntry_112581b80);
      return;
    }
  }
  return;
}



/* Entry: 10653d868; end: 10653d8b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653d868(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x28) & 1) == 0)) {
    func_0x00010c1522c0(*(undefined8 *)(lVar1 + _DAT_11274a2f4));
    func_0x00010be90780(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10653d8b8; end: 10653d93b; -[SCChatViewControllerV3 _republishVisibleCellsAfterEntryScroll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653d8b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a274);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = (long)_DAT_11274a2f4;
    func_0x00010c08cdc0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bf85c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11274a2e4),
               PTR_s_displayMediaForVisibleCells__1125bf0b8,*(undefined8 *)(param_1 + lVar3));
    return;
  }
  return;
}



/* Entry: 10653d93c; end: 10653d987; -[SCChatViewControllerV3 _enableKeyboardIfNecessary] */

void FUN_10653d93c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c234d40();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010bf368c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf90980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10653d988; end: 10653d98f; -[SCChatViewControllerV3 _enableKeyboardAsynchronously] */

void FUN_10653d988(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be08cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableKeyboardAsynchronously__11255fcc8,0);
  return;
}



/* Entry: 10653d990; end: 10653d9ff; -[SCChatViewControllerV3 _enableKeyboardAsynchronously:] */

void FUN_10653d990(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c234d40();
  if ((int)uVar1 == 0) {
    func_0x00010bf368c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf90940();
    _objc_release(param_1);
  }
  else if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10653da00; end: 10653da4b; -[SCChatViewControllerV3 _enableKeyboardAsynchronouslyForLegacyOS] */

void FUN_10653da00(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c234d40();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010bf368c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf90960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10653da4c; end: 10653da97; -[SCChatViewControllerV3 _enableKeyboardIfNecessaryAsynchronouslyForLegacyOS] */

void FUN_10653da4c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c234d40();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010bf368c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf909a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10653da98; end: 10653db7b; -[SCChatViewControllerV3 _subscribeToInputStateEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653da98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10653db7c; end: 10653dc67;  */

void FUN_10653db7c(long param_1,undefined8 param_2)

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
  pcStack_68 = FUN_10653dc68;
  puStack_60 = &UNK_110859c88;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0c1a00(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10653dc68; end: 10653dcef;  */

void FUN_10653dc68(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3c140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10653dcf0; end: 10653ddd3; -[SCChatViewControllerV3 _subscribeToKeyboardDidHideEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653dcf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10653ddd4; end: 10653ddff;  */

void FUN_10653ddd4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be46820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10653de00; end: 10653de5b; -[SCChatViewControllerV3 _keyboardDidFullyHide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653de00(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + _DAT_11274a34c) == '\x01') {
    lVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf37a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11274a2e8),
               PTR_s_chatViewDidFinishInputTransition_1125ab828);
    return;
  }
  return;
}



/* Entry: 10653de5c; end: 10653de9f; -[SCChatViewControllerV3 _inputContextWillTransitionFromState:toState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653de5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf37a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a2e8),
             PTR_s_chatViewWillBeginInputTransition_1125ab840);
  return;
}



/* Entry: 10653dea0; end: 10653df7f; -[SCChatViewControllerV3 _inputContextDidTransitionFromState:toState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653dea0(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11274a2e8;
  func_0x00010bf379e0(*(undefined8 *)(param_1 + lVar3));
  if (param_3 == 0) {
    func_0x00010c21cae0(*(undefined8 *)(param_1 + (long)_DAT_11274a360));
  }
  if (*(char *)(param_1 + (long)_DAT_11274a34c) == '\x01') {
    if (param_4 != 0) {
      func_0x00010bf37a00(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010be90790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__republishVisibleCellsAfterEntry_112581b80);
      return;
    }
    uVar1 = param_1;
    func_0x00010bf368c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c073040();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c123350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar3),PTR_s_recomputeOpenToFirstUnreadReadWa_1126266f0);
      return;
    }
  }
  return;
}



/* Entry: 10653df80; end: 10653e063; -[SCChatViewControllerV3 _subscribeToInputSizeEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653df80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10653e064; end: 10653e0cb;  */

void FUN_10653e064(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010c0d9080(param_4);
  _objc_release(param_4);
  func_0x00010be3c120(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10653e0cc; end: 10653e1a3; -[SCChatViewControllerV3 _inputContextSizeDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653e0cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274a2f4;
  func_0x00010c2744e0(*(undefined8 *)(param_3 + lVar3));
  func_0x00010c1f7ba0(param_1,0,param_2,0,*(undefined8 *)(param_3 + lVar3));
  lVar3 = param_3;
  func_0x00010c0799c0();
  if (((int)lVar3 != 0) && ((*(byte *)(param_3 + _DAT_11274a368) & 1) == 0)) {
    uVar1 = *(undefined8 *)(param_3 + _DAT_11274a270);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar2 == 0) {
      func_0x00010c08cdc0();
    }
    else {
      func_0x00010c1cbe20();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10653e1a4; end: 10653e287; -[SCChatViewControllerV3 _subscribeToInputTypingEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653e1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10653e288; end: 10653e3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653e288(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + _DAT_11274a1ec) != 0)) {
    func_0x00010c0be600(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10653e3a4; end: 10653e44b;  */

void FUN_10653e3a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed5370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateChatTypingStateWithState__112592e80,
             &PTR____CFConstantStringClassReference_110dcdf78,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6358);
  return;
}



/* Entry: 10653e44c; end: 10653e453; -[SCChatViewControllerV3 inputContext:textViewShouldBeginEditing:] */

undefined8 FUN_10653e44c(void)

{
  return 1;
}



/* Entry: 10653e454; end: 10653e4bf; -[SCChatViewControllerV3 inputContext:willActivateItem:] */

void FUN_10653e454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bf68640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed88d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFriendmojiOnStickerAccess_112593bd8)
    ;
    return;
  }
  return;
}



/* Entry: 10653e4c0; end: 10653e503; -[SCChatViewControllerV3 isPartiallyVisible] */

undefined8 FUN_10653e4c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f3c00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0799e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10653e504; end: 10653e507; -[SCChatViewControllerV3 pluginDidAttemptToEditMessage:] */

void FUN_10653e504(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be749b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__playSoundAndDidAttemptSendMessa_11257ac08);
  return;
}



/* Entry: 10653e508; end: 10653e5c3; -[SCChatViewControllerV3 pluginDidAttemptToSendMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653e508(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010be749a0();
  lVar1 = param_1;
  func_0x00010be41ea0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a0b0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf35fa0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      lVar1 = param_1;
      func_0x00010bf368c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf801c0();
      _objc_release(lVar1);
      func_0x00010bf368c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27a900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10653e5c4; end: 10653e63f; -[SCChatViewControllerV3 _playSoundAndDidAttemptSendMessage:] */

void FUN_10653e5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6120;
  _objc_retain(param_3);
  func_0x00010c26c4a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be745a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf726b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didAttemptToSendMessage_1125ba350);
  return;
}



/* Entry: 10653e640; end: 10653e6c3; -[SCChatViewControllerV3 didAttemptToSendMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653e640(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a1c0);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  func_0x00010be08ce0(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a0a8);
  func_0x00010c106ec0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c14dc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s_sc_setStatusBarStyle_DEPRECATED__112631140,param_1,1);
  return;
}



/* Entry: 10653e6c4; end: 10653e6c7; -[SCChatViewControllerV3 pluginWillPresentFullscreen:] */

void FUN_10653e6c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeb130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__willPresentFullScreenView_1125985f0);
  return;
}



/* Entry: 10653e6c8; end: 10653e723; -[SCChatViewControllerV3 pluginDidDismissFullscreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653e6c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11274a0a8);
  func_0x00010bf07b60();
  if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c236310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showBlurOverlay_11266b2e8);
    return;
  }
  func_0x00010c29c7e0(*(undefined8 *)(param_1 + _DAT_11274a17c));
                    /* WARNING: Could not recover jumptable at 0x00010be83e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__publishConversationViewVisibili_11257e930,1)
  ;
  return;
}



/* Entry: 10653e724; end: 10653e727; -[SCChatViewControllerV3 plugin:didEditMessage:] */

void FUN_10653e724(void)

{
  return;
}



/* Entry: 10653e728; end: 10653e72b; -[SCChatViewControllerV3 plugin:didSendMessage:] */

void FUN_10653e728(void)

{
  return;
}



/* Entry: 10653e72c; end: 10653e75f; -[SCChatViewControllerV3 pluginDidAttachToAccessoryContainer] */

void FUN_10653e72c(undefined8 param_1)

{
  func_0x00010c10ac60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10653e760; end: 10653e793; -[SCChatViewControllerV3 pluginDidDetachFromAccessoryContainer] */

void FUN_10653e760(undefined8 param_1)

{
  func_0x00010c10ac60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10653e794; end: 10653e797; -[SCChatViewControllerV3 pluginDidSelectInputItem:] */

void FUN_10653e794(void)

{
  return;
}



/* Entry: 10653e798; end: 10653e827; -[SCChatViewControllerV3 _updateChatTypingStateWithState:activityType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653e798(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a204);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b6a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10653e828; end: 10653e87b; -[SCChatViewControllerV3 recipient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653e828(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a1ec;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c074920();
  if (iVar1 == 0) {
    func_0x00010c122e80(*(undefined8 *)(param_1 + lVar2));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10653e87c; end: 10653e88b; -[SCChatViewControllerV3 recipientUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653e87c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c122e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a1ec),PTR_s_recipientUserId_1126265a0);
  return;
}



/* Entry: 10653e88c; end: 10653eac7; -[SCChatViewControllerV3 replyParametersWithNavigationType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653e88c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  puVar2 = PTR_PTR_1126b1010;
  _objc_alloc(PTR_PTR_1126b1010);
  func_0x00010c02ec80();
  lVar11 = (long)_DAT_11274a1ec;
  func_0x00010c074920(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c1b2900(puVar2);
  uVar3 = *(ulong *)(param_1 + lVar11);
  func_0x00010c074920();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  if ((uVar3 & 1) == 0) {
    func_0x00010c122e80(uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf85d80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  if ((int)puVar6 == 0) {
    uVar7 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bf85d80(uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar4);
    uVar7 = uVar4;
  }
  _objc_release(uVar5);
  uVar3 = *(ulong *)(param_1 + lVar11);
  func_0x00010c074920();
  if ((uVar3 & 1) == 0) {
    lVar10 = *(long *)(param_1 + lVar11);
    func_0x00010c122e00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar10 = 0;
  }
  func_0x00010c1eb300(puVar2);
  func_0x00010c1eb080(puVar2);
  if (lVar10 != 0) {
    func_0x00010c1eb2e0(puVar2);
  }
  func_0x00010c1eb220(puVar2);
  func_0x00010c1d86a0(puVar2);
  func_0x00010c1b3e00(puVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar11);
  func_0x00010c074920();
  if (iVar1 == 0) {
    uVar8 = *(undefined8 *)(param_1 + _DAT_11274a0d4);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c122e00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c0ee920(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010901cdb0(uVar5,puVar6);
    func_0x00010c1af8a0(puVar2);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar8);
  }
  else {
    func_0x00010c1af8a0(puVar2);
  }
  _objc_release(lVar10);
  _objc_release(uVar7);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10653eac8; end: 10653ebaf; -[SCChatViewControllerV3 isGroupConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10653eac8(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11274a1ec);
  if (uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c074930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_isGroupConversation_1125fac58);
    return uVar2;
  }
  puStack_70 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10653ebb0;
  puStack_50 = &UNK_110842b58;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x10653ebc0;
  puStack_78 = &UNK_110842b58;
  puStack_48 = puStack_70;
  puStack_38 = puStack_70;
  func_0x00010c0c11e0(*(undefined8 *)(param_1 + _DAT_11274a328),param_2,&puStack_68,&puStack_90);
  bVar1 = *(byte *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return (ulong)bVar1;
}



/* Entry: 10653ebb0; end: 10653ebd3;  */

void FUN_10653ebb0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 10653ebd4; end: 10653ec2b; -[SCChatViewControllerV3 resolveConversationId:] */

void FUN_10653ebd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010bf50280(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10653ec2c; end: 10653ecb3; -[SCChatViewControllerV3 stackedTableViewCell:didSelectIndex:viewModel:] */

void FUN_10653ec2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfecfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010be72b40(param_1,param_2,uVar2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10653ecb4; end: 10653ecb7; -[SCChatViewControllerV3 didLongPressOnMessageViewModel:cell:] */

void FUN_10653ecb4(void)

{
  return;
}



/* Entry: 10653ecb8; end: 10653ed23; -[SCChatViewControllerV3 isValidInternalDeepLinkURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10653ecb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a228);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c082da0();
  _objc_release(param_3);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 10653ed24; end: 10653eea7; -[SCChatViewControllerV3 didTapDeepLinkWithUrl:additionalInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653ed24(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    func_0x00010bef7f60(puVar1,param_2,param_4);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a228);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c10fce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,lVar6,&PTR____CFConstantStringClassReference_110ebb2b8);
  _objc_release(lVar6);
  func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,
                      &PTR____CFConstantStringClassReference_110f83ab8);
  lVar6 = (long)_DAT_11274a1ec;
  uVar3 = *(ulong *)(param_1 + lVar6);
  func_0x00010c074920();
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c122e00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      func_0x00010bdc8960(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      param_3 = param_1;
    }
  }
  func_0x00010bfd1bc0(uVar2,param_2,param_3,puVar1,0,&PTR___NSConcreteGlobalBlock_11092a300);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10653eea8; end: 10653eeab;  */

void FUN_10653eea8(void)

{
  return;
}



/* Entry: 10653eeac; end: 10653efbf; -[SCChatViewControllerV3 _addTeamSnapchatQueryParamToURL:] */

void FUN_10653eeac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar2 = puVar1;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  puVar4 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010c25d700(PTR____kCFBooleanTrue_11034ab68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11d4c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f83ad8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  func_0x00010c1e6460(puVar1,param_2,puVar3);
  puVar2 = puVar1;
  func_0x00010bdc2b80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10653efc0; end: 10653f3ff; -[SCChatViewControllerV3 _onCellWhitespaceTap:cell:point:selectedIndex:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10653efc0(double param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 uVar15;
  double dVar16;
  uint uStack_94;
  
  dVar16 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar14 = (long)_DAT_11274a1ec;
  if (*(long *)((long)param_2 + lVar14) == 0) goto LAB_10653f3c8;
  puVar3 = PTR_PTR_1126cb6e8;
  _objc_opt_class(PTR_PTR_1126cb6e8);
  uVar4 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar3);
  uVar1 = param_5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uStack_94 = 1;
  }
  else {
    func_0x00010c0c3280(param_5);
    uStack_94 = (uint)(param_1 <= dVar16);
  }
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_retain(param_7);
  _objc_opt_class(puVar3);
  uVar5 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar3);
  uVar4 = param_7;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(param_7);
  if (uVar4 != 0) {
    func_0x00010c0df4e0(param_7);
  }
  func_0x00010bddd120(param_2);
  ppuVar6 = *(undefined ***)((long)param_2 + lVar14);
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e53938;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar2 = ppuVar6;
  }
  _objc_retain();
  _objc_release(ppuVar6);
  ppuVar6 = param_2;
  func_0x00010be5ffa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_2;
  func_0x00010bee54e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar6;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar8 == (undefined **)0x0) {
    ppuVar9 = ppuVar7;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppuVar10 = ppuVar9;
    _objc_opt_isKindOfClass(ppuVar9,puVar3);
    ppuVar13 = ppuVar9;
    if (((ulong)ppuVar10 & 1) == 0) {
      ppuVar13 = (undefined **)0x0;
    }
    _objc_retain(ppuVar13);
    _objc_release(ppuVar9);
    ppuVar9 = &PTR____CFConstantStringClassReference_110e53938;
    if (ppuVar13 != (undefined **)0x0) {
      ppuVar9 = ppuVar13;
    }
    _objc_retain(ppuVar9);
    _objc_release(ppuVar13);
  }
  else {
    _objc_retain(ppuVar8);
    ppuVar9 = ppuVar8;
  }
  _objc_release(ppuVar8);
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar13 = ppuVar6;
    func_0x00010c0728e0();
    puVar3 = PTR_PTR_1126cb6f0;
    ppuVar8 = ppuVar6;
    if ((int)ppuVar13 == 0) {
      _objc_retain(ppuVar6);
      _objc_opt_class(puVar3);
      ppuVar13 = ppuVar6;
      _objc_opt_isKindOfClass(ppuVar6,puVar3);
      if (((ulong)ppuVar13 & 1) == 0) {
        ppuVar8 = (undefined **)0x0;
      }
      _objc_retain(ppuVar8);
      _objc_release(ppuVar6);
      ppuVar13 = ppuVar8;
      func_0x00010c22fd40();
      if ((int)ppuVar13 == 0) {
        ppuVar13 = param_2;
        func_0x00010be726a0();
        if ((((ulong)ppuVar13 & 1) == 0) && (uStack_94 == 1)) {
          func_0x00010be993c0(param_2);
        }
      }
      else {
        func_0x00010beca820(param_2);
      }
    }
    else {
      func_0x00010c0cb5a0(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar6;
      func_0x00010bf50280(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be96ea0(param_2);
      _objc_release(ppuVar13);
    }
LAB_10653f390:
    _objc_release(ppuVar8);
  }
  else {
    ppuVar8 = ppuVar7;
    func_0x00010bf9e680();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar8;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar13;
    func_0x00010c0720c0();
    if ((int)ppuVar10 == 0) {
      ppuVar10 = ppuVar7;
      func_0x00010bf9e680();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar10;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010c0720c0();
      uStack_94 = uStack_94 | (uint)ppuVar12 ^ 0xffffffff;
      _objc_release(ppuVar11);
      _objc_release(ppuVar10);
    }
    _objc_release(ppuVar13);
    _objc_release(ppuVar8);
    if ((uStack_94 & 1) != 0) {
      uVar15 = *(undefined8 *)((long)param_2 + (long)_DAT_11274a200);
      ppuVar8 = ppuVar7;
      func_0x00010bf9e680(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140(uVar15);
      goto LAB_10653f390;
    }
  }
  _objc_release(ppuVar9);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
LAB_10653f3c8:
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}


