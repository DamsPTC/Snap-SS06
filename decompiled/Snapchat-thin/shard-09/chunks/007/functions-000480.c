/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070617ac; end: 10706189b; -[SCChatStackedComposerContextWrapper destroy] */

void FUN_1070617ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar4 = *(long *)(param_5 + 0x20);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_6,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010bf6ef60(*(undefined8 *)(lStack_108 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar4;
      puVar3 = &uStack_110;
      func_0x00010bf52a60(lVar4,param_6,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = SUB81(&uStack_220,0);
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar4 = *(long *)(lVar4 + 0x20);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_210;
    do {
      lVar6 = 0;
      do {
        if (*plStack_210 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c17bea0(*(undefined8 *)(lStack_218 + lVar6 * 8),param_6,puVar3);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar4;
      uVar2 = (char)&uStack_220;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  *(ulong *)(lVar4 + 0x30) =
       CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10,CONCAT12(
                                                  uVar9,CONCAT11(uVar8,uVar7)))))));
  *(undefined8 *)(lVar4 + 0x38) = param_2;
  *(undefined8 *)(lVar4 + 0x40) = param_3;
  *(undefined8 *)(lVar4 + 0x48) = param_4;
  *(undefined1 *)(lVar4 + 0x18) = uVar2;
  return;
}



/* Entry: 10706189c; end: 107061993; -[SCChatStackedComposerContextWrapper setChatViewVisible:] */

void FUN_10706189c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  
  uVar3 = 0xf0;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  lVar5 = *(long *)(param_5 + 0x20);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      func_0x00010c17bea0(*(undefined8 *)(lVar6 * 8),param_6,param_7);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    uVar3 = 0xf0;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  *(ulong *)(lVar5 + 0x30) =
       CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10,CONCAT12(
                                                  uVar9,CONCAT11(uVar8,uVar7)))))));
  *(undefined8 *)(lVar5 + 0x38) = param_2;
  *(undefined8 *)(lVar5 + 0x40) = param_3;
  *(undefined8 *)(lVar5 + 0x48) = param_4;
  *(undefined1 *)(lVar5 + 0x18) = uVar3;
  return;
}



/* Entry: 107061994; end: 1070619a3; -[SCChatStackedComposerContextWrapper setMargins:wrapWithBubble:] */

void FUN_107061994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined1 param_7)

{
  *(undefined8 *)(param_5 + 0x30) = param_1;
  *(undefined8 *)(param_5 + 0x38) = param_2;
  *(undefined8 *)(param_5 + 0x40) = param_3;
  *(undefined8 *)(param_5 + 0x48) = param_4;
  *(undefined1 *)(param_5 + 0x18) = param_7;
  return;
}



/* Entry: 1070619a4; end: 107061b13; -[SCChatStackedComposerContextWrapper isEqual:] */

ulong FUN_1070619a4(double param_1,double param_2,double param_3,double param_4,long param_5,
                   undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126cb4c8;
  _objc_opt_class(PTR_PTR_1126cb4c8);
  uVar6 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar2);
  uVar1 = param_7;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if ((uVar1 != 0) &&
     (uVar5 = *(ulong *)(param_5 + 0x28), uVar6 = param_7, func_0x00010bf137c0(), uVar5 == uVar6)) {
    lVar3 = param_5;
    func_0x00010c2bd700();
    uVar6 = param_7;
    func_0x00010c2bd700();
    if ((int)lVar3 == (int)uVar6) {
      func_0x00010c0bafa0(param_5);
      dVar7 = param_1;
      dVar8 = param_2;
      dVar9 = param_3;
      dVar10 = param_4;
      func_0x00010c0bafa0(param_7);
      uVar6 = 0;
      if ((((param_2 == dVar8) && (param_1 == dVar7)) && (param_4 == dVar10)) && (param_3 == dVar9))
      {
        uVar4 = *(ulong *)(param_5 + 0x20);
        uVar5 = param_7;
        func_0x00010bf4f6a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar4);
        _objc_retain(uVar5);
        if (uVar4 == uVar5) {
          uVar6 = 1;
        }
        else if (uVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar4;
          func_0x00010c071ae0(uVar4);
        }
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar5);
      }
      goto LAB_107061a30;
    }
  }
  uVar6 = 0;
LAB_107061a30:
  _objc_release(uVar1);
  _objc_release(param_7);
  return uVar6;
}



/* Entry: 107061b14; end: 107061b1f; -[SCChatStackedComposerContextWrapper margins] */

undefined8 FUN_107061b14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107061b20; end: 107061b27; -[SCChatStackedComposerContextWrapper wrapWithBubble] */

undefined1 FUN_107061b20(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 107061b28; end: 107061b2f; -[SCChatStackedComposerContextWrapper rendersOverMessage] */

undefined1 FUN_107061b28(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 107061b30; end: 107061b37; -[SCChatStackedComposerContextWrapper setRendersOverMessage:] */

void FUN_107061b30(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x19) = param_3;
  return;
}



/* Entry: 107061b38; end: 107061b3f; -[SCChatStackedComposerContextWrapper contextWrappers] */

undefined8 FUN_107061b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107061b40; end: 107061b47; -[SCChatStackedComposerContextWrapper axis] */

undefined8 FUN_107061b40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107061b48; end: 107061b53; -[SCChatStackedComposerContextWrapper .cxx_destruct] */

void FUN_107061b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 107061b54; end: 107061e07; -[SCMessageComposerContextCreator initWithRuntime:conversationEventObservable:conversationUpdatesPublisher:graphene:messagingExperimentService:nativeSessionManager:] */

undefined8 *
FUN_107061b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f86c0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 4) = 0;
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_7;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)(puVar1 + 7) = 1;
    _objc_retain(param_7);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107061e08; end: 107061f1f;  */

void FUN_107061e08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0cbf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107061f20; end: 10706204f;  */

void FUN_107061f20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107062050;
  puStack_60 = &UNK_110843540;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1070620b8;
  puStack_88 = &UNK_110843540;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0bd100(param_2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 107062050; end: 1070620b7;  */

void FUN_107062050(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bddfd00();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea1920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070620b8; end: 1070620e3;  */

void FUN_1070620b8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddfd00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070620e4; end: 10706213b;  */

void FUN_1070620e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea2a60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10706213c; end: 10706214f; -[SCMessageComposerContextCreator getOrCreateRenderableForMessageWithId:pluginIdentifier:contentType:contextParams:] */

void FUN_10706213c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be211d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getOrCreateRenderableForMessage_112565e10,param_3,param_3,param_4,
             param_5,param_6);
  return;
}



/* Entry: 107062150; end: 107062167; -[SCMessageComposerContextCreator getOrCreateRenderableWithCacheKey:pluginIdentifier:contentType:contextParams:] */

void FUN_107062150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010be211d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getOrCreateRenderableForMessage_112565e10,0,param_3,param_4,param_5,
             param_6);
  return;
}



/* Entry: 107062168; end: 10706225b; -[SCMessageComposerContextCreator _getOrCreateRenderableForMessageWithId:cacheKey:pluginIdentifier:contentType:contextParams:] */

void FUN_107062168(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010be8e680(param_1,param_2,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bdf2500(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10706225c; end: 1070622d3; -[SCMessageComposerContextCreator createRenderableForMessageWithId:contentType:contextParamsObservable:] */

void FUN_10706225c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be8e6a0(param_1,param_2,param_5,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd7cc0(param_1,param_2,uVar1,param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1070622d4; end: 107062417; -[SCMessageComposerContextCreator createRenderableForMessageWithId:contentType:contextParamsObservables:] */

void FUN_1070622d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107062418;
  puStack_78 = &UNK_1109899e0;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  uVar1 = param_5;
  uStack_70 = param_3;
  uStack_60 = param_4;
  func_0x000100504554(param_5,&puStack_90);
  puVar2 = PTR_PTR_1126cb4c8;
  _objc_alloc(PTR_PTR_1126cb4c8);
  func_0x00010c0047e0();
  func_0x00010bdd7cc0(param_1);
  _objc_release(uVar1);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107062418; end: 107062483;  */

void FUN_107062418(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be8e6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107062484; end: 10706254b; -[SCMessageComposerContextCreator renderableForCacheKey:contentType:] */

void FUN_107062484(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10706254c; end: 1070625af; -[SCMessageComposerContextCreator _wrapperClass] */

void FUN_10706254c(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR_PTR_1126d4370;
  if ((int)uVar3 == 0) {
    ppuVar1 = &PTR_PTR_1126cb4c0;
  }
  puVar4 = *ppuVar1;
  _objc_opt_class(puVar4);
  _objc_retain();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1070625b0; end: 10706273b; -[SCMessageComposerContextCreator _renderableFromParamsObservable:messageId:contentType:] */

void FUN_1070625b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_3;
  func_0x00010bf870c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  uVar3 = uVar1;
  func_0x00010c14f680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010beeb7e0(param_1);
  _objc_alloc();
  func_0x00010c0375e0();
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10706273c; end: 1070629bf;  */

ulong FUN_10706273c(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  _objc_retain(param_3);
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_retain(param_2);
  _objc_retain(uVar1);
  uVar2 = param_2;
  uVar3 = uVar1;
  if (param_2 == uVar1) {
    uVar12 = 1;
LAB_10706297c:
    _objc_release(uVar3);
  }
  else {
    if (uVar1 != 0) {
      uVar12 = param_2;
      func_0x00010c071ae0();
      _objc_release(uVar1);
      _objc_release(param_2);
      if ((uVar12 & 1) != 0) {
        uVar12 = 1;
        goto LAB_10706298c;
      }
      func_0x00010c101c60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c101c60(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar2;
      func_0x00010c0720c0();
      if ((int)uVar12 == 0) {
        uVar12 = 0;
      }
      else {
        uVar4 = param_2;
        func_0x00010c295240();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf44480();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar1;
        func_0x00010c295240(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf44480();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar5;
        func_0x00010c0720c0();
        if ((int)uVar12 == 0) {
          uVar12 = 0;
        }
        else {
          uVar8 = param_2;
          func_0x00010c295240();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c29d560();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar1;
          func_0x00010c295240();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010c29d560();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(uVar9);
          _objc_retain(uVar11);
          if (uVar9 == uVar11) {
            uVar12 = 1;
          }
          else if (uVar11 == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = uVar9;
            func_0x00010c071ae0(uVar9);
          }
          _objc_release(uVar11);
          _objc_release(uVar9);
          _objc_release(uVar11);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
        }
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
      goto LAB_10706297c;
    }
    uVar12 = 0;
  }
  _objc_release(uVar2);
LAB_10706298c:
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar12;
}



/* Entry: 1070629c0; end: 107062b1f;  */

void FUN_1070629c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107062b20;
  uStack_40 = 0x107062b30;
  uStack_38 = 0;
  _objc_copyWeak(auStack_68,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0bf0a0(param_3);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107062b20; end: 107062b37;  */

void FUN_107062b20(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107062b38; end: 107062c3f;  */

void FUN_107062b38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar2 = param_2;
  func_0x00010c295240(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c101c60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0ec5e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bdf1a60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(long *)(lVar7 + 0x28) = lVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  uVar2 = param_2;
  func_0x00010c130920(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1eabb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
             PTR_s_setRendersOverMessage__112658510,uVar2);
  return;
}



/* Entry: 107062c40; end: 1070632a7; -[SCMessageComposerContextCreator _renderableFromCacheWithCacheKey:pluginIdentifier:contentType:contextParams:] */

void FUN_107062c40(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
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
  double dVar21;
  ulong uStack_78;
  
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010c130420();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cb4c0;
  _objc_opt_class(PTR_PTR_1126cb4c0);
  uVar19 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar19 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  uVar19 = uVar1;
  func_0x00010c101c60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar19;
  func_0x00010c0720c0();
  _objc_release(param_5);
  if ((uVar3 & 1) == 0) {
LAB_107062f4c:
    _objc_release(uVar19);
  }
  else {
    uVar3 = uVar1;
    func_0x00010bf449a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_7;
    func_0x00010bf44480(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0();
    if ((uVar5 & 1) == 0) {
LAB_107062f3c:
      _objc_release(uVar4);
      _objc_release(uVar3);
      goto LAB_107062f4c;
    }
    uVar5 = uVar1;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == 0) goto LAB_107062f3c;
    uVar20 = uVar1;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar20;
    func_0x00010bf6f140();
    _objc_release(uVar20);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar19);
    if ((uVar6 & 1) == 0) {
      uVar3 = uVar1;
      func_0x00010c295200();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c29d560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_7;
      func_0x00010c29d560();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar4);
      _objc_retain(uVar5);
      puVar2 = PTR_PTR_1126d4368;
      _objc_opt_class(PTR_PTR_1126d4368);
      uVar20 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar2);
      uVar19 = uVar4;
      if ((uVar20 & 1) == 0) {
        uVar19 = 0;
      }
      _objc_retain(uVar19);
      puVar2 = PTR_PTR_1126d4368;
      if (uVar19 == 0) {
        _objc_retain(uVar4);
        _objc_retain(uVar5);
        if (uVar4 != uVar5) {
          if (uVar5 != 0) {
            uVar20 = uVar4;
            func_0x00010c071ae0();
            uVar6 = uVar5;
            uStack_78 = uVar4;
            goto LAB_107063214;
          }
          _objc_release(0);
          _objc_release(uVar4);
          _objc_release(0);
          _objc_release(0);
          _objc_release(uVar4);
          _objc_release(0);
          _objc_release(uVar4);
          _objc_release(uVar3);
          goto LAB_107063258;
        }
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(0);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar5);
LAB_107063288:
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      else {
        _objc_retain(uVar5);
        _objc_opt_class(puVar2);
        uVar6 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar2);
        uVar20 = uVar5;
        if ((uVar6 & 1) == 0) {
          uVar20 = 0;
        }
        _objc_retain(uVar20);
        _objc_release(uVar5);
        uVar6 = uVar4;
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        uStack_78 = uVar6;
        func_0x00010c101a80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        uVar7 = uVar20;
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010c101a80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        uVar7 = uVar4;
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar20;
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar20);
        uVar9 = uStack_78;
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar6;
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar9);
        _objc_retain(uVar10);
        if (uVar9 == uVar10) {
          _objc_release(uVar10);
          _objc_release(uVar9);
LAB_107062fd8:
          uVar11 = uStack_78;
          func_0x00010bf44480();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar6;
          func_0x00010bf44480();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar11;
          func_0x00010c0720c0();
          if ((int)uVar20 == 0) {
            uVar20 = 0;
          }
          else {
            uVar13 = uVar7;
            func_0x00010c15dba0();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar8;
            func_0x00010c15dba0();
            _objc_retainAutoreleasedReturnValue();
            uVar20 = uVar13;
            func_0x00010c0720c0();
            if ((int)uVar20 == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = uVar7;
              func_0x00010c07d080();
              uVar15 = uVar8;
              func_0x00010c07d080();
              if ((int)uVar20 == (int)uVar15) {
                func_0x00010c15db40(uVar7);
                dVar21 = param_1;
                func_0x00010c15db40(uVar8);
                if (param_1 == dVar21) {
                  uVar15 = uVar7;
                  func_0x00010bfd6e80();
                  _objc_retainAutoreleasedReturnValue();
                  uVar20 = uVar15;
                  func_0x00010bf1f3c0();
                  uVar16 = uVar8;
                  func_0x00010bfd6e80();
                  _objc_retainAutoreleasedReturnValue();
                  uVar17 = uVar16;
                  func_0x00010bf1f3c0();
                  if ((int)uVar20 == (int)uVar17) {
                    uVar17 = uVar7;
                    func_0x00010bf65440();
                    _objc_retainAutoreleasedReturnValue();
                    uVar18 = uVar8;
                    func_0x00010bf65440();
                    _objc_retainAutoreleasedReturnValue();
                    uVar20 = uVar17;
                    func_0x00010c0720c0();
                    _objc_release(uVar18);
                    _objc_release(uVar17);
                  }
                  else {
                    uVar20 = 0;
                  }
                  _objc_release(uVar16);
                  _objc_release(uVar15);
                  goto LAB_1070631d4;
                }
              }
              uVar20 = 0;
            }
LAB_1070631d4:
            _objc_release(uVar14);
            _objc_release(uVar13);
          }
          _objc_release(uVar12);
LAB_1070631f0:
          _objc_release(uVar11);
        }
        else {
          if (uVar10 == 0) {
            uVar20 = 0;
            uVar11 = uVar9;
            goto LAB_1070631f0;
          }
          uVar20 = uVar9;
          func_0x00010c071ae0();
          _objc_release(uVar10);
          _objc_release(uVar9);
          if ((int)uVar20 != 0) goto LAB_107062fd8;
        }
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
LAB_107063214:
        _objc_release(uVar6);
        _objc_release(uStack_78);
        _objc_release(uVar19);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        if ((uVar20 & 1) == 0) {
LAB_107063258:
          uVar3 = param_7;
          func_0x00010c29d560(param_7);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          func_0x00010c295200(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2226c0();
          goto LAB_107063288;
        }
      }
      _objc_retain(uVar1);
      uVar19 = uVar1;
      goto LAB_107062f58;
    }
  }
  uVar19 = 0;
LAB_107062f58:
  _objc_release(uVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar19);
  return;
}



/* Entry: 1070632a8; end: 10706337b; -[SCMessageComposerContextCreator _createRenderableForMessageWithId:cacheKey:pluginIdentifier:contentType:contextParams:] */

void FUN_1070632a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bdf1a60(param_1,param_2,param_3,param_7,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010beeb7e0(param_1);
    _objc_alloc();
    func_0x00010c0375c0();
    func_0x00010bdd7cc0(param_1,param_2,lVar2,param_4,param_6);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10706337c; end: 1070636df; -[SCMessageComposerContextCreator _createPluginComposerContextForMessageId:contextParams:pluginIdentifier:existingContext:] */

void FUN_10706337c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010bf44480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    puVar10 = (undefined *)0x0;
    goto LAB_107063668;
  }
  puVar2 = PTR_PTR_1126d4378;
  _objc_opt_new(PTR_PTR_1126d4378);
  uVar1 = param_4;
  func_0x00010bf44480(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180000(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c1ddf60(puVar2,param_2,param_5);
  uVar1 = param_4;
  if (param_6 == 0) {
LAB_10706356c:
    uVar3 = param_6;
    func_0x00010c295200(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6ef60();
    _objc_release(uVar3);
    lVar8 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar8 != 0) {
      uVar9 = *(ulong *)(param_1 + 8);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf44480(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c29d560(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010bf443a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar9;
      func_0x00010bf55720(uVar9,param_2,uVar1,uVar3,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
LAB_107063624:
      _objc_release(uVar3);
      _objc_release(uVar1);
LAB_107063630:
      _objc_release(uVar9);
      goto LAB_107063638;
    }
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar3 = param_6;
    func_0x00010c101c60(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0720c0(param_5,param_2,uVar3);
    if ((int)uVar4 == 0) {
LAB_107063564:
      _objc_release(uVar3);
      goto LAB_10706356c;
    }
    uVar5 = param_4;
    func_0x00010bf44480();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_6;
    func_0x00010bf449a0(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010c0720c0(uVar5,param_2,uVar6);
    if ((uVar9 & 1) == 0) {
      _objc_release(uVar6);
      _objc_release(uVar5);
      goto LAB_107063564;
    }
    uVar9 = param_6;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010bf6f140();
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    if ((uVar7 & 1) != 0) goto LAB_10706356c;
    uVar6 = param_6;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar3);
    _objc_retain(uVar1);
    if (uVar3 == uVar1) {
      _objc_release(uVar1);
      uVar9 = uVar3;
      goto LAB_107063624;
    }
    if (uVar1 == 0) {
      _objc_release();
      _objc_release(uVar3);
LAB_1070636bc:
      uVar9 = param_4;
      func_0x00010c29d560(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0(uVar6,param_2,uVar9);
      goto LAB_107063630;
    }
    uVar5 = uVar3;
    func_0x00010c071ae0(uVar3,param_2,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar3);
    if ((uVar5 & 1) == 0) goto LAB_1070636bc;
LAB_107063638:
    func_0x00010c21fea0(puVar2,param_2,uVar6);
    _objc_retain(puVar2);
    _objc_release(uVar6);
    puVar10 = puVar2;
  }
  _objc_release(puVar2);
LAB_107063668:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1070636e0; end: 107063967; -[SCMessageComposerContextCreator _setChatViewVisible:eventConversationId:] */

void FUN_1070636e0(long param_1,undefined8 param_2,undefined1 *param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *unaff_x24;
  long lVar11;
  undefined *puVar12;
  undefined1 auStack_270 [8];
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined1 *puStack_248;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  ulong uStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
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
  long lStack_68;
  
  puVar9 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf1f3c0();
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x20);
    if ((((param_4 == 0) || (puVar8 = *(undefined1 **)(param_1 + 0x30), puVar8 == (undefined1 *)0x0)
         ) || (uVar2 = param_4, func_0x00010c0720c0(), (uVar2 & 1) != 0)) &&
       ((uint)*(byte *)(param_1 + 0x38) != (uint)param_3)) {
      *(char *)(param_1 + 0x38) = (char)param_3;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      puVar3 = *(undefined **)(param_1 + 0x28);
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf52a60();
      if (puVar4 != (undefined *)0x0) {
        lVar11 = *plStack_1a0;
        do {
          puVar12 = (undefined *)0x0;
          do {
            if (*plStack_1a0 != lVar11) {
              _objc_enumerationMutation(puVar3);
            }
            uVar10 = *(undefined8 *)(lStack_1a8 + (long)puVar12 * 8);
            func_0x00010bf00d20(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar1);
            _objc_release(uVar10);
            puVar12 = puVar12 + 1;
          } while (puVar4 != puVar12);
          puVar4 = puVar3;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined *)0x0);
      }
      unaff_x24 = (undefined *)0x0;
      _objc_release(puVar3);
      _os_unfair_lock_unlock(param_1 + 0x20);
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      lStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      puStack_1e0 = (undefined8 *)0x0;
      _objc_retain(puVar1);
      puVar4 = puVar1;
      func_0x00010bf52a60();
      if (puVar4 != (undefined *)0x0) {
        puVar3 = (undefined *)*puStack_1e0;
        do {
          unaff_x24 = (undefined *)0x0;
          do {
            if ((undefined *)*puStack_1e0 != puVar3) {
              _objc_enumerationMutation(puVar1);
            }
            func_0x00010c17bea0(*(undefined8 *)(lStack_1e8 + (long)unaff_x24 * 8));
            unaff_x24 = unaff_x24 + 1;
          } while (puVar4 != unaff_x24);
          puVar4 = puVar1;
          puVar9 = &uStack_1f0;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined *)0x0);
      }
      param_1 = 0;
      _objc_release(puVar1);
    }
    else {
      puVar9 = (undefined8 *)puVar8;
      _os_unfair_lock_unlock(param_1 + 0x20);
    }
    _objc_release(puVar1);
    puVar8 = (undefined1 *)puVar9;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x20);
  uVar2 = param_4;
  __Unwind_Resume();
  pcStack_1f8 = FUN_107063968;
  puStack_230 = unaff_x24;
  puStack_228 = puVar3;
  lStack_220 = param_1;
  puStack_218 = puVar1;
  puStack_210 = param_3;
  uStack_208 = param_4;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _os_unfair_lock_lock(uVar2 + 0x20);
  puVar5 = puVar8;
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)(uVar2 + 0x30);
  *(undefined1 **)(uVar2 + 0x30) = puVar5;
  _objc_release(uVar10);
  *(undefined1 *)(uVar2 + 0x38) = 1;
  _os_unfair_lock_unlock(uVar2 + 0x20);
  func_0x00010bf86d80(*(undefined8 *)(uVar2 + 0x48));
  _objc_initWeak(auStack_238,uVar2);
  uVar6 = *(undefined8 *)(uVar2 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010c077ca0();
  _objc_release(uVar6);
  if ((int)uVar10 == 0) {
    uVar7 = *(undefined8 *)(uVar2 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c285a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_270,auStack_238);
    uVar6 = uVar10;
    func_0x00010c25ff60(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_270);
  }
  else {
    uVar7 = *(undefined8 *)(uVar2 + 0x68);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bfc7800();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x00010c2a7340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar7);
    puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_260 = 0xc2000000;
    pcStack_258 = FUN_107063bdc;
    puStack_250 = &UNK_110989a90;
    _objc_retain(puVar8);
    puStack_248 = puVar8;
    _objc_copyWeak(auStack_240,auStack_238);
    uVar10 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_240);
    _objc_release(puStack_248);
    _objc_release(uVar6);
  }
  _objc_destroyWeak(auStack_238);
  _objc_release(puVar8);
  return;
}



/* Entry: 107063968; end: 107063bdb; -[SCMessageComposerContextCreator _setActiveConversation:] */

void FUN_107063968(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0x38) = 1;
  _os_unfair_lock_unlock(param_1 + 0x20);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x48));
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c077ca0();
  _objc_release(uVar3);
  if ((int)uVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c285a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_48);
    uVar3 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfc7800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c2a7340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar2);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107063bdc;
    puStack_60 = &UNK_110989a90;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_copyWeak(auStack_50,auStack_48);
    uVar1 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_release(uStack_58);
    _objc_release(uVar3);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107063bdc; end: 107064227;  */

void FUN_107063bdc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar10;
  undefined8 *unaff_x25;
  long lVar11;
  undefined8 *unaff_x26;
  undefined8 *puVar12;
  long unaff_x27;
  undefined **unaff_x28;
  undefined8 *puVar13;
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
  undefined1 auStack_370 [256];
  long lStack_270;
  undefined **ppuStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 *puStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_1f8;
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
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined8 *)param_1[4];
  puVar2 = puVar1;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)puVar2 != 0) {
    puVar1 = param_2;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c28d4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if (puVar3 == (undefined8 *)0x0) {
      unaff_x23 = param_2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010c12f460();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = unaff_x24;
      func_0x00010bf529e0();
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (unaff_x25 == (undefined8 *)0x0) goto LAB_107063f1c;
    }
    else {
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_1f8 = param_1;
    _objc_opt_new();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    puStack_1a0 = (undefined8 *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    puVar9 = param_2;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010c28d4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = puVar2;
    func_0x00010bf52a60();
    if (puVar9 != (undefined8 *)0x0) {
      unaff_x25 = (undefined8 *)*puStack_1a0;
      do {
        param_1 = (undefined8 *)0x0;
        do {
          if ((undefined8 *)*puStack_1a0 != unaff_x25) {
            _objc_enumerationMutation(puVar2);
          }
          unaff_x24 = *(undefined8 **)(lStack_1a8 + (long)param_1 * 8);
          puVar3 = unaff_x24;
          func_0x00010c0721c0();
          if ((int)puVar3 != 0) {
            func_0x00010bf490e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            _objc_release(unaff_x24);
          }
          param_1 = (undefined8 *)((long)param_1 + 1);
        } while (puVar9 != param_1);
        puVar9 = puVar2;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined8 *)0x0);
    }
    _objc_release(puVar2);
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    unaff_x23 = param_2;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x23;
    func_0x00010c12f460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    puVar9 = &uStack_1f0;
    param_4 = auStack_170;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined8 *)0x0) {
      unaff_x27 = *plStack_1e0;
      unaff_x28 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      do {
        param_1 = (undefined8 *)0x0;
        do {
          if (*plStack_1e0 != unaff_x27) {
            _objc_enumerationMutation(puVar2);
          }
          unaff_x24 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
          unaff_x25 = *(undefined8 **)(lStack_1e8 + (long)param_1 * 8);
          func_0x00010bf6e760();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0cb5a0();
          func_0x00010c0df7c0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x24;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(unaff_x26);
          _objc_release(unaff_x24);
          _objc_release(unaff_x25);
          param_1 = (undefined8 *)((long)param_1 + 1);
        } while (puVar3 != param_1);
        puVar9 = &uStack_1f0;
        param_4 = auStack_170;
        puVar3 = puVar2;
        func_0x00010bf52a60();
        unaff_x23 = (undefined8 *)0x0;
      } while (puVar3 != (undefined8 *)0x0);
    }
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf529e0();
    if (puVar3 != (undefined8 *)0x0) {
      param_1 = puStack_1f8 + 5;
      _objc_loadWeakRetained();
      puVar9 = puVar1;
      func_0x00010bde0000();
      _objc_release(param_1);
    }
    _objc_release(puVar1);
  }
LAB_107063f1c:
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar13 = &uStack_3f0;
  uStack_208 = 0x107063f60;
  lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_260 = unaff_x28;
  lStack_258 = unaff_x27;
  puStack_250 = unaff_x26;
  puStack_248 = unaff_x25;
  puStack_240 = unaff_x24;
  puStack_238 = unaff_x23;
  puStack_230 = puVar2;
  puStack_228 = puVar1;
  puStack_220 = param_1;
  puStack_218 = param_2;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puVar1 = puVar6;
  func_0x00010c28d4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = puVar6;
    func_0x00010c12f460();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010bf529e0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar12 == (undefined8 *)0x0) goto LAB_1070641e4;
  }
  else {
    _objc_release(puVar1);
  }
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  plStack_3a0 = (long *)0x0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  puVar9 = puVar6;
  func_0x00010c28d4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010bf52a60();
  if (puVar2 != (undefined8 *)0x0) {
    lVar11 = *plStack_3a0;
    do {
      puVar12 = (undefined8 *)0x0;
      do {
        if (*plStack_3a0 != lVar11) {
          _objc_enumerationMutation(puVar9);
        }
        uVar10 = *(undefined8 *)(lStack_3a8 + (long)puVar12 * 8);
        uVar8 = uVar10;
        func_0x00010c0721c0();
        if ((int)uVar8 != 0) {
          func_0x00010bf490e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(uVar10);
        }
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar2 != puVar12);
      puVar2 = puVar9;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release(puVar9);
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  lStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  plStack_3e0 = (long *)0x0;
  puVar9 = puVar6;
  func_0x00010c12f460();
  _objc_retainAutoreleasedReturnValue();
  param_4 = auStack_370;
  puVar2 = puVar9;
  func_0x00010bf52a60();
  if (puVar2 != (undefined8 *)0x0) {
    lVar11 = *plStack_3e0;
    do {
      puVar13 = (undefined8 *)0x0;
      do {
        if (*plStack_3e0 != lVar11) {
          _objc_enumerationMutation(puVar9);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0cb5a0(*(undefined8 *)(lStack_3e8 + (long)puVar13 * 8));
        func_0x00010c0df7c0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar13 = (undefined8 *)((long)puVar13 + 1);
      } while (puVar2 != puVar13);
      param_4 = auStack_370;
      puVar2 = puVar9;
      puVar13 = &uStack_3f0;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release(puVar9);
  puVar2 = puVar1;
  func_0x00010bf529e0();
  puVar9 = puVar13;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar3 + 4;
    _objc_loadWeakRetained();
    puVar9 = puVar1;
    func_0x00010bde0000();
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
LAB_1070641e4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_270) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(param_4);
  _os_unfair_lock_lock(puVar6 + 4);
  lVar11 = puVar6[5];
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar11 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640(puVar6[5]);
    _objc_release(puVar4);
  }
  lVar7 = puVar6[5];
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar7);
  if (lVar11 != 0) {
    func_0x00010bf6ef60(lVar11);
  }
  uVar8 = puVar6[5];
  func_0x00010c0e00e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar8);
  _objc_release(puVar4);
  _objc_release(uVar8);
  if ((*(byte *)(puVar6 + 7) & 1) == 0) {
    func_0x00010c17bea0(puVar9);
  }
  _objc_release(lVar11);
  _os_unfair_lock_unlock(puVar6 + 4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 107064228; end: 1070643c7; -[SCMessageComposerContextCreator _cacheRenderable:cacheKey:contentType:] */

void FUN_107064228(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar2,param_4);
    _objc_release(puVar2);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0(lVar3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c0e00e0(lVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar3);
  if (lVar1 != 0) {
    func_0x00010bf6ef60(lVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e00e0(uVar4,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4,param_2,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar4);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    func_0x00010c17bea0(param_3,param_2,0);
  }
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070643c8; end: 1070645e3; -[SCMessageComposerContextCreator _clearCachedRenderablesForMessageIds:] */

void FUN_1070643c8(long param_1,undefined8 param_2,long param_3)

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
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_3);
      }
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
        lVar5 = lVar2;
        func_0x00010bf00d20();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar5;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar3 != 0) {
          lVar9 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar5);
            }
            func_0x00010bf6ef60(*(undefined8 *)(lVar9 * 8));
            lVar9 = lVar9 + 1;
          } while (lVar3 != lVar9);
          lVar3 = lVar5;
          func_0x00010bf52a60();
        }
        _objc_release(lVar5);
      }
      _objc_release(lVar2);
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar4);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x20);
  __Unwind_Resume();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_3 + 0x20);
  lVar4 = *(long *)(param_3 + 0x28);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    lVar8 = *(long *)(param_3 + 0x28);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar2 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar8);
        }
        lVar5 = *(long *)(lVar2 * 8);
        func_0x00010bf00d20();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar5;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (lVar3 != 0) {
          lVar9 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar5);
            }
            func_0x00010bf6ef60(*(undefined8 *)(lVar9 * 8));
            lVar9 = lVar9 + 1;
          } while (lVar3 != lVar9);
          lVar3 = lVar5;
          func_0x00010bf52a60();
        }
        _objc_release(lVar5);
        lVar2 = lVar2 + 1;
      } while (lVar2 != lVar4);
      lVar4 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    func_0x00010c12adc0(*(undefined8 *)(param_3 + 0x28));
  }
  lVar4 = param_3 + 0x20;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_3 + 0x20);
  __Unwind_Resume(lVar4);
  _objc_storeStrong(lVar4 + 0x68,0);
  _objc_storeStrong(lVar4 + 0x60,0);
  _objc_storeStrong(lVar4 + 0x58,0);
  _objc_storeStrong(lVar4 + 0x50,0);
  _objc_storeStrong(lVar4 + 0x48,0);
  _objc_storeStrong(lVar4 + 0x40,0);
  _objc_storeStrong(lVar4 + 0x30,0);
  _objc_storeStrong(lVar4 + 0x28,0);
  _objc_storeStrong(lVar4 + 0x18,0);
  _objc_storeStrong(lVar4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar4 + 8,0);
  return;
}



/* Entry: 1070645e4; end: 1070647d3; -[SCMessageComposerContextCreator _clearAllCachedRenderables] */

void FUN_1070645e4(long param_1)

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
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        lVar5 = *(long *)(lVar8 * 8);
        func_0x00010bf00d20();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar6 != 0) {
          lVar9 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar5);
            }
            func_0x00010bf6ef60(*(undefined8 *)(lVar9 * 8));
            lVar9 = lVar9 + 1;
          } while (lVar6 != lVar9);
          lVar6 = lVar5;
          func_0x00010bf52a60();
        }
        _objc_release(lVar5);
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar3);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
  }
  lVar3 = param_1 + 0x20;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x20);
  __Unwind_Resume(lVar3);
  _objc_storeStrong(lVar3 + 0x68,0);
  _objc_storeStrong(lVar3 + 0x60,0);
  _objc_storeStrong(lVar3 + 0x58,0);
  _objc_storeStrong(lVar3 + 0x50,0);
  _objc_storeStrong(lVar3 + 0x48,0);
  _objc_storeStrong(lVar3 + 0x40,0);
  _objc_storeStrong(lVar3 + 0x30,0);
  _objc_storeStrong(lVar3 + 0x28,0);
  _objc_storeStrong(lVar3 + 0x18,0);
  _objc_storeStrong(lVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 1070647d4; end: 10706486f; -[SCMessageComposerContextCreator .cxx_destruct] */

void FUN_1070647d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107064870; end: 107064923;  */

void FUN_107064870(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c0812c0();
  if ((int)puVar1 == 0) {
    puVar1 = param_1;
    func_0x00010c083de0();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar1 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb5960(puVar2,param_2,param_1,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = puVar2;
    }
    else {
      func_0x00010b0afe3c();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010b0aeb4c();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107064924; end: 107064933;  */

void FUN_107064924(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4023000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 107064934; end: 107064b37;  */

void FUN_107064934(double param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_107064870();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c28eda0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4023000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  puVar5 = puVar4;
  func_0x00010708cc80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0e340(0x3ff0000000000000,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  bVar1 = (param_3 & 1) == 0;
  uVar9 = 0x4020000000000000;
  if (bVar1) {
    uVar9 = 0x4008000000000000;
  }
  uVar10 = 0x4020000000000000;
  puVar5 = &UNK_10de1e9c8;
  if (bVar1) {
    uVar10 = 0;
    puVar5 = PTR__UIEdgeInsetsZero_110345bb0;
  }
  dVar7 = ((param_1 - *(double *)(puVar5 + 0x18)) - *(double *)(puVar5 + 8)) + -8.0;
  dVar8 = dVar7 + -8.0;
  func_0x00010c099280(puVar4);
  func_0x00010c23d600(dVar8,(long)dVar7,PTR_PTR_1126af270);
  puVar5 = PTR_PTR_1126d4380;
  _objc_alloc(PTR_PTR_1126d4380);
  puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4023000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013aa0(dVar8,(long)dVar7,uVar9,0x4020000000000000,uVar10,0x4020000000000000,puVar5);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107064b38; end: 107064bcb;  */

bool FUN_107064b38(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010901df78();
  if (((int)uVar2 == 0) || (uVar2 = param_1, func_0x000100bf119c(), (uVar2 & 1) != 0)) {
    bVar1 = false;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf5b820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c116cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    bVar1 = uVar4 != 0;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107064bcc; end: 107064c9f;  */

undefined8
FUN_107064bcc(ulong param_1,ulong param_2,ulong param_3,ulong param_4,int param_5,int param_6)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x000100bec434();
  uVar4 = param_1;
  FUN_107064b38();
  uVar5 = param_1;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  iVar2 = (int)param_1;
  if (((((param_2 & 1) == 0) && ((param_4 & 1) == 0)) && ((param_3 & 1) == 0)) &&
     (((uVar5 != 0 && ((uVar3 & 1) == 0)) &&
      (((uVar4 & 1) == 0 && (func_0x000100478f84(), iVar2 != 0)))))) {
    _objc_release(uVar5);
    uVar1 = 1;
    if (param_6 != 0) {
      uVar1 = 2;
    }
    uVar6 = 0;
    if (param_5 == 0) {
      uVar6 = uVar1;
    }
  }
  else {
    _objc_release(uVar5);
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 107064ca0; end: 10706740b; +[SCChatHeaderViewModelGenerator uberAvatarViewModelForDisplayName:conversationParticipants:conversationSubtype:storiesSummaryInfo:didPlayStory:metadata:isNonFriendConversation:isLockedConversation:friendLocationSubtext:friendLocationTimestampInSeconds:friendLocationTimezoneInfo:locationSubtextUserIds:communityName:featureSettingsService:isSubscribedToMerlinBio:notificationsMuted:streakRestoreCount:notificationOSSettingsRetriever:messagingExperimentService:unviewedFriendshipFlashbacksId:chatTooltipsService:conversationId:chatHeadline:campaignAdResponse:locationUpsellBannerEligible:arrivalNotifUpsellBannerEligible:actionmojiSelfieId:circumstanceEngine:friendSaturnUserId:friendSaturnStatus:streakMilestoneInfo:conversationSubtypeMetadata:isPreservedForLegalHold:isMyAIPoweredTeamSnapchatEnabled:isMyAIModelSelectionEnabled:isPlusSubscribed:] */

void FUN_107064ca0(double param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,undefined8 param_6,undefined *param_7,uint param_8,
                  undefined8 param_9,uint param_10,undefined4 param_11,long param_12,long param_13,
                  undefined **param_14,long param_15,undefined **param_16,char param_17,
                  undefined4 param_18,long param_19,undefined8 param_20,undefined8 param_21,
                  long param_22,undefined8 param_23,undefined8 param_24,undefined **param_25,
                  undefined **param_26,undefined4 param_27,undefined4 param_28,undefined8 param_29,
                  undefined8 param_30,undefined **param_31,undefined *param_32,long param_33,
                  undefined *param_34,undefined4 param_35,undefined4 param_36,undefined **param_37,
                  undefined8 param_38,undefined8 param_39)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  int iStack_2b0;
  uint uStack_2a8;
  uint uStack_244;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined *puStack_230;
  undefined **ppuStack_228;
  undefined *puStack_208;
  undefined *puStack_1f8;
  undefined *puStack_1e0;
  undefined *puStack_1c0;
  uint uStack_18c;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined *puStack_170;
  undefined *puStack_158;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uVar13;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  puVar3 = &UNK_10f3f990a;
  func_0x0001000ba800();
  ppuVar4 = param_5;
  func_0x000108ef55a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_5;
  func_0x000108ef5474();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar4;
  func_0x00010c149b60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar25 = ppuVar6;
  func_0x00010c149b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar25;
  func_0x00010c08fa60();
  if (ppuVar7 == (undefined **)0x0) {
    _objc_retain(param_31);
    ppuStack_238 = param_31;
  }
  else {
    ppuVar7 = ppuVar4;
    func_0x00010c149b60();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_238 = ppuVar7;
    func_0x00010c149b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
  }
  _objc_release(ppuVar25);
  _objc_release(ppuVar6);
  puVar22 = param_34;
  func_0x00010bf2c1e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar22 == (undefined *)0x0) {
    uStack_244 = 0;
  }
  else {
    puVar24 = puVar22;
    func_0x00010c078c20();
    uStack_244 = (uint)puVar24 ^ 1;
  }
  _objc_release(puVar22);
  if (ppuVar5 == (undefined **)0x0) {
    bVar1 = true;
  }
  else {
    ppuVar6 = ppuVar5;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar25 = ppuVar6;
    func_0x000108ef3c74();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = ppuVar25 == (undefined **)0x0;
    _objc_release();
    _objc_release(ppuVar6);
  }
  ppuVar6 = ppuVar4;
  func_0x000107cfad30();
  puStack_170 = param_7;
  if (ppuVar4 == (undefined **)0x0) {
LAB_107065108:
    uStack_2a8 = 0;
    if (param_7 != (undefined *)0x0) {
      uStack_2a8 = param_8 ^ 1;
    }
    FUN_107067448();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar4);
    _objc_retain(ppuVar5);
    _objc_retain(param_9);
    _objc_retain(puStack_170);
    _objc_retain(param_29);
    if (ppuVar5 == (undefined **)0x0) {
      if (ppuVar4 == (undefined **)0x0) {
        puStack_f8 = &uStack_100;
        uStack_100 = 0;
        uStack_f0 = 0x3032000000;
        pcStack_e8 = FUN_107067e70;
        uStack_e0 = 0x107067e80;
        uStack_d8 = 0;
        func_0x00010c0be1a0(param_9);
        puVar22 = PTR_PTR_1126ce410;
        func_0x00010c0fdb40(PTR_PTR_1126ce410);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        puVar24 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR_PTR_1126d0e68;
        func_0x00010c246860(0,PTR_PTR_1126d0e68);
        _objc_retainAutoreleasedReturnValue();
        puVar23 = PTR_PTR_1126cee00;
        _objc_alloc(PTR_PTR_1126cee00);
        func_0x00010c050980();
        puStack_158 = PTR_PTR_1126c56e8;
        func_0x00010bf1aea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar23);
        _objc_release(puVar19);
        _objc_release(puVar24);
        _objc_release(puVar22);
        __Block_object_dispose(&uStack_100,8);
        _objc_release(uStack_d8);
      }
      else {
        if ((((ulong)ppuVar6 & 1) == 0) && (ppuVar25 = ppuVar4, FUN_107064b38(), (int)ppuVar25 == 0)
           ) {
          uVar9 = param_29;
          func_0x0001070674b0(param_29);
          ppuVar25 = ppuVar4;
          FUN_107064bcc(ppuVar4,0,uStack_2a8,uStack_244,0,uVar9);
          puVar24 = PTR_PTR_1126ce410;
          func_0x00010c244820(PTR_PTR_1126ce410);
          _objc_retainAutoreleasedReturnValue();
          puVar22 = PTR_PTR_1126d4398;
          if (ppuVar25 == (undefined **)0x2) {
            ppuVar25 = ppuVar4;
            func_0x00010901d430(ppuVar4);
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar25;
            func_0x00010901ccf8();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar25);
            puVar19 = PTR_PTR_1126ce410;
            ppuVar25 = ppuVar4;
            func_0x00010c2923e0(ppuVar4);
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar4;
            func_0x00010bf1bae0(ppuVar4);
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar10;
            func_0x00010bf1acc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c244500(puVar19);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar24);
            _objc_release(ppuVar11);
            _objc_release(ppuVar10);
            _objc_release(ppuVar25);
            puVar22 = PTR_PTR_1126d4398;
            func_0x00010bf62900(PTR_PTR_1126d4398);
            _objc_retainAutoreleasedReturnValue();
            ppuVar25 = (undefined **)0x0;
          }
          else {
            puVar19 = puVar24;
            if (ppuVar25 == (undefined **)0x1) {
              ppuVar7 = (undefined **)PTR_PTR_1126d43a0;
              func_0x00010bf5c900(0x3fe6db6dc0000000,0x3fe8f5c280000000,PTR_PTR_1126d43a0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf19c40(puVar22);
              _objc_retainAutoreleasedReturnValue();
              ppuVar25 = (undefined **)0x0;
            }
            else {
              func_0x000100bec434();
              ppuVar7 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
              func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
              _objc_retainAutoreleasedReturnValue();
              ppuVar25 = (undefined **)PTR_PTR_1126d0e68;
              func_0x00010c246860(0,PTR_PTR_1126d0e68);
              _objc_retainAutoreleasedReturnValue();
              puVar22 = (undefined *)0x0;
            }
          }
          _objc_release(ppuVar7);
          puVar24 = PTR_PTR_1126cee00;
          _objc_alloc(PTR_PTR_1126cee00);
          func_0x00010c050980();
          puStack_158 = PTR_PTR_1126c56e8;
          func_0x00010bf1aea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar24);
          _objc_release(puVar19);
          _objc_release(puVar22);
        }
        else {
          puStack_158 = PTR_PTR_1126c56e8;
          ppuVar25 = ppuVar4;
          func_0x00010bf5b820(ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar25;
          func_0x00010c116cc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf61740();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar7);
        }
        _objc_release(ppuVar25);
      }
    }
    else {
      puStack_f8 = &uStack_100;
      uStack_100 = 0;
      uStack_f0 = 0x3032000000;
      pcStack_e8 = FUN_107067e70;
      uStack_e0 = 0x107067e80;
      uStack_d8 = 0;
      ppuVar25 = ppuVar5;
      func_0x00010c261460(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bcca0();
      _objc_release(ppuVar25);
      lVar8 = puStack_f8[5];
      func_0x00010c08fa60();
      if (lVar8 == 0) {
        puVar22 = PTR_PTR_1126c93b0;
        func_0x00010bfcf5e0(PTR_PTR_1126c93b0);
        _objc_retainAutoreleasedReturnValue();
        puVar24 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR_PTR_1126c96b8;
        func_0x00010c246860(0,PTR_PTR_1126c96b8);
        _objc_retainAutoreleasedReturnValue();
        puVar23 = PTR_PTR_1126c93a8;
        _objc_alloc(PTR_PTR_1126c93a8);
        func_0x00010c0509a0();
        puStack_158 = PTR_PTR_1126c56e8;
        func_0x00010bfce640();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar23);
        _objc_release(puVar19);
        _objc_release(puVar24);
        _objc_release(puVar22);
      }
      else {
        puStack_158 = PTR_PTR_1126c56e8;
        func_0x00010bf61740();
        _objc_retainAutoreleasedReturnValue();
      }
      __Block_object_dispose(&uStack_100,8);
      _objc_release(uStack_d8);
    }
    _objc_release(param_29);
    _objc_release(puStack_170);
    _objc_release(param_9);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
  }
  else {
    ppuVar25 = ppuVar4;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar25;
    func_0x00010c07fc80();
    _objc_retain(param_7);
    puVar22 = param_7;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar24 = param_7;
    func_0x00010bfddf20();
    _objc_release(param_7);
    if (puVar22 == (undefined *)0x0) {
      _objc_release(ppuVar25);
      goto LAB_107065108;
    }
    _objc_release(ppuVar25);
    if ((((param_10 & 0x100) != 0) || ((param_10 & 1) != 0)) ||
       ((((uint)ppuVar7 | (param_8 | (uint)puVar24) ^ 1) & 1) != 0)) goto LAB_107065108;
    puVar22 = param_7;
    FUN_10706740c(param_7);
    _objc_retainAutoreleasedReturnValue();
    FUN_107067448();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = PTR_PTR_1126c56e8;
    puVar24 = param_7;
    func_0x00010c26d760(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25bc00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    _objc_release(puVar22);
    uStack_2a8 = 1;
  }
  ppuVar25 = ppuVar4;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar8 = param_12;
  func_0x00010c08fa60();
  lVar12 = param_22;
  func_0x00010c08fa60();
  if (lVar12 == 0) {
    iVar2 = 0;
  }
  else {
    uVar9 = param_23;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar9;
    func_0x00010c22f740();
    iVar2 = (int)uVar13;
    _objc_release(uVar9);
  }
  puVar22 = param_32;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010c08fa60();
  _objc_release(puVar22);
  ppuVar7 = ppuVar5;
  func_0x00010c06ecc0();
  if ((int)ppuVar7 == 0) {
    iStack_2b0 = 0;
  }
  else {
    uVar9 = param_21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar9;
    func_0x00010bf8fac0();
    iStack_2b0 = (int)uVar13;
    _objc_release(uVar9);
  }
  puVar22 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  if (uStack_244 == 0) {
    ppuVar7 = ppuVar4;
    func_0x00010901c54c();
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)ppuVar7 != 0) {
      ppuVar25 = &PTR____CFConstantStringClassReference_110e99a18;
      _objc_retain(&PTR____CFConstantStringClassReference_110e99a18);
      uVar9 = param_39;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar9;
      func_0x00010bf1f3c0();
      if ((int)uVar13 == 0) {
        uVar13 = param_38;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar13;
        func_0x00010bf1f3c0();
        _objc_release(uVar13);
        _objc_release(uVar9);
        if ((int)uVar15 != 0) {
          ppuVar25 = &PTR____CFConstantStringClassReference_110e99a38;
          _objc_retain(&PTR____CFConstantStringClassReference_110e99a38);
          _objc_release(&PTR____CFConstantStringClassReference_110e99a18);
          puVar19 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
          _objc_alloc();
          puVar23 = puVar19;
          func_0x000107080e7c();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04e820();
          _objc_release(puVar23);
          puStack_188 = PTR_PTR_1126cb858;
          func_0x00010c08bb20();
          _objc_retainAutoreleasedReturnValue();
          puStack_1e0 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80();
          _objc_retainAutoreleasedReturnValue();
          puStack_1c0 = (undefined *)0x0;
          puStack_1f8 = (undefined *)0x0;
          ppuStack_180 = ppuVar7;
          goto LAB_107066334;
        }
      }
      else {
        _objc_release(uVar9);
      }
      ppuVar7 = param_16;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar7;
      func_0x00010c0caea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(ppuVar10);
      _objc_release(ppuVar7);
      ppuVar10 = param_16;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar10;
      func_0x00010c0caea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      ppuVar7 = ppuVar11;
      func_0x00010c08fa60();
      if ((param_17 == '\0') || (ppuVar7 == (undefined **)0x0)) {
        func_0x000107080e34();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(ppuVar11);
        ppuVar7 = ppuVar11;
      }
      _objc_release(ppuVar11);
      _objc_release(ppuVar11);
      _objc_release(ppuVar10);
      if (ppuVar7 == (undefined **)0x0) {
        puVar19 = (undefined *)0x0;
      }
      else {
        puVar19 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
        _objc_alloc();
        func_0x00010c04e820();
      }
      puStack_188 = PTR_PTR_1126cb858;
      func_0x00010c08ba60();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220();
      _objc_retainAutoreleasedReturnValue();
      puStack_1c0 = puVar23;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar23);
      puStack_1e0 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_180 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      goto LAB_107065e08;
    }
    if ((char)param_10 == '\0') {
      if ((param_10 & 0x100) == 0) {
        if (iStack_2b0 == 0) {
          if (param_19 == 0) {
            ppuVar7 = param_2;
            _objc_opt_class();
            func_0x00010be64300();
            if (((ulong)ppuVar7 & 1) == 0) {
              puStack_1f8 = PTR_PTR_1126d4388;
              if (param_27._1_1_ == '\0') {
                _objc_alloc();
                func_0x00010bdf49a0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0515e0();
                _objc_release();
              }
              else {
                _objc_alloc();
                func_0x00010bdf4960();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0515e0();
                _objc_release();
              }
              goto LAB_1070660b4;
            }
            if (((char)param_27 != '\0') && (ppuVar4 != (undefined **)0x0)) {
              ppuVar7 = ppuVar4;
              func_0x00010901d778();
              ppuVar25 = (undefined **)PTR_PTR_1126b2c18;
              if ((int)ppuVar7 == 0) {
                ppuVar25 = ppuVar4;
                func_0x00010c294420();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                ppuVar7 = ppuVar4;
                func_0x00010bf85d80(ppuVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfb1120();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar7);
              }
              puStack_1f8 = PTR_PTR_1126d4388;
              _objc_alloc();
              puVar19 = PTR__OBJC_CLASS___UIFont_1126aec38;
              func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdf4980(param_2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0515e0();
              _objc_release(param_2);
              _objc_release(puVar19);
              _objc_release();
              param_2 = ppuVar25;
              goto LAB_1070660b4;
            }
            puStack_1f8 = (undefined *)0x0;
            if (lVar8 == 0) goto LAB_107066f78;
LAB_1070660b8:
            puStack_230 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
            _objc_alloc();
            func_0x00010c04e820();
            puStack_208 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar19 = PTR__OBJC_CLASS___NSDate_1126ae770;
            _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
            func_0x00010c0523a0(-param_1);
            func_0x00010bfb5aa0(0x404e000000000000);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar19);
            if (ppuVar5 == (undefined **)0x0) {
              if (ppuVar4 != (undefined **)0x0) {
                ppuVar25 = ppuVar4;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                puStack_188 = PTR_PTR_1126cb858;
                if (ppuVar25 != (undefined **)0x0) {
                  ppuVar25 = ppuVar4;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  ppuStack_c8 = ppuVar25;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c08b9e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar19);
                  goto LAB_107066cfc;
                }
              }
              puStack_188 = (undefined *)0x0;
            }
            else {
              ppuVar25 = param_14;
              func_0x00010bf529e0();
              puStack_188 = PTR_PTR_1126cb858;
              if (ppuVar25 == (undefined **)0x0) {
                ppuVar25 = ppuVar5;
                func_0x00010bfceb20(ppuVar5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c08b900();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                ppuVar25 = param_14;
                func_0x00010bf51e00(param_14);
                func_0x00010c08b9e0();
                _objc_retainAutoreleasedReturnValue();
              }
LAB_107066cfc:
              _objc_release(ppuVar25);
            }
            ppuStack_228 = &PTR____CFConstantStringClassReference_110dad538;
            _objc_retain();
            func_0x00010c08fa60();
            puVar19 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
            if (iVar2 == 0) {
              if (puVar24 != (undefined *)0x0) {
                _objc_alloc();
                puVar24 = param_32;
                func_0x00010c2711a0(param_32);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c04e820();
                _objc_release(puVar24);
                puVar20 = param_32;
                func_0x00010c26f000(param_32);
                _objc_retainAutoreleasedReturnValue();
                ppuStack_240 = &PTR____CFConstantStringClassReference_110e99af8;
                _objc_retain();
                ppuVar25 = ppuStack_238;
                func_0x00010c08fa60();
                if (ppuVar25 == (undefined **)0x0) {
                  puVar24 = (undefined *)0x0;
                }
                else {
                  puVar24 = PTR_PTR_1126cb858;
                  func_0x00010c08bca0();
                  _objc_retainAutoreleasedReturnValue();
                }
                uStack_18c = 0;
                puVar21 = (undefined *)0x0;
                puVar23 = (undefined *)0x0;
                ppuStack_180 = (undefined **)0x0;
                puStack_1e0 = (undefined *)0x0;
                puStack_1c0 = (undefined *)0x0;
                goto LAB_107066844;
              }
              if (param_13 == 0) {
LAB_1070670b0:
                ppuStack_240 = (undefined **)0x0;
                puVar24 = (undefined *)0x0;
                puVar21 = (undefined *)0x0;
                puVar23 = (undefined *)0x0;
                puVar19 = (undefined *)0x0;
              }
              else {
                ppuVar25 = ppuVar4;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (ppuVar25 == (undefined **)0x0) goto LAB_1070670b0;
                func_0x00010c294ce0(param_13);
                puVar24 = PTR_PTR_1126cd660;
                func_0x00010c26f960();
                _objc_retainAutoreleasedReturnValue();
                puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                if (puVar24 == (undefined *)0x0) {
                  puVar19 = (undefined *)0x0;
                  puVar21 = (undefined *)0x0;
                }
                else {
                  puVar19 = puVar24;
                  func_0x000107080e94();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c14de00();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar19);
                  _objc_release(puVar24);
                  if (puVar21 == (undefined *)0x0) {
                    puVar19 = (undefined *)0x0;
                  }
                  else {
                    puVar19 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
                    _objc_alloc();
                    func_0x00010c04e820();
                  }
                }
                puVar24 = PTR__OBJC_CLASS___UIImage_1126aea68;
                func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
                _objc_retainAutoreleasedReturnValue();
                puVar23 = puVar24;
                func_0x00010bfe9720();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar24);
                ppuStack_240 = &PTR____CFConstantStringClassReference_110e99a98;
                _objc_retain();
                ppuVar25 = ppuVar4;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                puVar24 = PTR_PTR_1126cb858;
                if (ppuVar25 == (undefined **)0x0) {
                  puVar24 = (undefined *)0x0;
                }
                else {
                  ppuVar25 = ppuVar4;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
                  ppuStack_d0 = ppuVar25;
                  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c08b9e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar20);
                  _objc_release(ppuVar25);
                }
                _objc_release(puVar21);
                puVar21 = (undefined *)0x0;
              }
            }
            else {
              _objc_alloc();
              puVar24 = puVar19;
              func_0x000107080f6c();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c04e820();
              _objc_release(puVar24);
              puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
              func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
              _objc_retainAutoreleasedReturnValue();
              puVar24 = PTR_PTR_1126cb858;
              if (ppuVar5 == (undefined **)0x0) {
                if (ppuVar4 != (undefined **)0x0) {
                  ppuVar25 = ppuVar4;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c08b8a0();
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_107066f38;
                }
                puVar24 = (undefined *)0x0;
              }
              else {
                ppuVar25 = ppuVar5;
                func_0x00010bfceb20();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c08b900();
                _objc_retainAutoreleasedReturnValue();
LAB_107066f38:
                _objc_release(ppuVar25);
              }
              ppuStack_240 = &PTR____CFConstantStringClassReference_110e52f98;
              _objc_retain();
              puVar23 = (undefined *)0x0;
            }
            puStack_1e0 = (undefined *)0x0;
          }
          else {
            func_0x000107080bc4();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar19);
            _objc_release(ppuVar7);
            uStack_c0 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
            uStack_b8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
            puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
            puStack_b0 = puVar22;
            func_0x00010c23ba80();
            _objc_retainAutoreleasedReturnValue();
            puVar23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_a8 = puVar19;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar19);
            puVar19 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
            _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
            func_0x00010c04e840();
            puStack_1f8 = PTR_PTR_1126d4388;
            _objc_alloc();
            func_0x00010c0515e0();
            _objc_release(puVar19);
            _objc_release(puVar23);
            _objc_release();
            param_2 = ppuVar10;
LAB_1070660b4:
            ppuVar7 = param_2;
            if (lVar8 != 0) goto LAB_1070660b8;
LAB_107066f78:
            if (iVar2 == 0) {
              ppuVar25 = (undefined **)0x0;
              puVar19 = (undefined *)0x0;
              goto LAB_107066330;
            }
            puStack_230 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
            _objc_alloc();
            puVar24 = puStack_230;
            func_0x000107080f6c();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c04e820();
            _objc_release(puVar24);
            puStack_1e0 = PTR__OBJC_CLASS___UIColor_1126aea70;
            func_0x00010c23ba80();
            _objc_retainAutoreleasedReturnValue();
            puStack_188 = PTR_PTR_1126cb858;
            if (ppuVar5 == (undefined **)0x0) {
              if (ppuVar4 != (undefined **)0x0) {
                ppuVar25 = ppuVar4;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c08b8a0();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_107067110;
              }
              puStack_188 = (undefined *)0x0;
            }
            else {
              ppuVar25 = ppuVar5;
              func_0x00010bfceb20();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c08b900();
              _objc_retainAutoreleasedReturnValue();
LAB_107067110:
              _objc_release(ppuVar25);
            }
            ppuStack_228 = &PTR____CFConstantStringClassReference_110e52f98;
            _objc_retain();
            ppuStack_240 = (undefined **)0x0;
            puVar24 = (undefined *)0x0;
            puVar21 = (undefined *)0x0;
            puVar23 = (undefined *)0x0;
            puVar19 = (undefined *)0x0;
            puStack_208 = (undefined *)0x0;
          }
          ppuStack_180 = (undefined **)0x0;
          uStack_18c = 0;
          puStack_1c0 = (undefined *)0x0;
          puVar20 = (undefined *)0x0;
          goto LAB_107066844;
        }
        lVar8 = param_15;
        func_0x00010c08fa60();
        ppuVar7 = (undefined **)0x0;
        if (lVar8 == 0) goto LAB_107065b34;
        puVar23 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220();
        _objc_retainAutoreleasedReturnValue();
        puStack_1c0 = puVar23;
        func_0x00010bfe9720();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar23);
        ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107080ec4();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuVar25 = ppuVar5;
        func_0x00010c0ecc20(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar19);
        _objc_release(ppuVar25);
        _objc_release(puVar23);
        func_0x000107080eac();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar23;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_15;
        func_0x00010c25ce40(param_15);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar19);
        _objc_release(puVar23);
        puVar19 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
        _objc_alloc();
        func_0x00010c04e820();
        ppuVar25 = &PTR____CFConstantStringClassReference_110e99a78;
        _objc_retain(&PTR____CFConstantStringClassReference_110e99a78);
        _objc_release(lVar8);
        _objc_release();
        puStack_188 = (undefined *)0x0;
        ppuStack_180 = (undefined **)0x0;
        puStack_1e0 = (undefined *)0x0;
      }
      else {
LAB_107065b34:
        ppuVar25 = (undefined **)0x0;
        puStack_188 = (undefined *)0x0;
        ppuStack_180 = (undefined **)0x0;
        puStack_1e0 = (undefined *)0x0;
        puStack_1c0 = (undefined *)0x0;
        puVar19 = (undefined *)0x0;
      }
LAB_107065e08:
      puStack_1f8 = (undefined *)0x0;
    }
    else {
      puStack_1f8 = (undefined *)0x0;
      if ((ppuVar4 != (undefined **)0x0) && (ppuVar25 == (undefined **)0x0)) {
        ppuVar7 = ppuVar4;
        func_0x00010901d778();
        ppuVar25 = (undefined **)PTR_PTR_1126b2c18;
        ppuVar10 = ppuVar4;
        if ((int)ppuVar7 == 0) {
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          ppuVar25 = ppuVar10;
        }
        else {
          func_0x00010bf85d80(ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb1120();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar10);
        }
        puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107080b94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar19);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
        uStack_a0 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
        uStack_98 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
        puVar23 = PTR__OBJC_CLASS___UIColor_1126aea70;
        puStack_90 = puVar22;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_88 = puVar23;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar23);
        puVar23 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        func_0x00010c04e840();
        puStack_1f8 = PTR_PTR_1126d4388;
        _objc_alloc();
        func_0x00010c0515e0();
        _objc_release(puVar23);
        _objc_release(puVar21);
        _objc_release(puVar19);
        _objc_release(ppuVar25);
      }
      ppuVar25 = ppuVar4;
      func_0x00010bf4a3a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar25;
      _objc_release();
      if (ppuVar25 == (undefined **)0x0) {
        ppuVar25 = (undefined **)0x0;
        puVar19 = (undefined *)0x0;
      }
      else {
        puVar19 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc();
        puVar23 = puVar19;
        func_0x000107080bac();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e820();
        _objc_release(puVar23);
        ppuVar25 = &PTR____CFConstantStringClassReference_110e99a58;
        ppuVar7 = ppuVar25;
        _objc_retain();
      }
LAB_107066330:
      ppuStack_180 = (undefined **)0x0;
      puStack_188 = (undefined *)0x0;
      puStack_1c0 = (undefined *)0x0;
      puStack_1e0 = (undefined *)0x0;
    }
LAB_107066334:
    uStack_18c = 0;
    puStack_208 = (undefined *)0x0;
  }
  else {
    ppuVar10 = param_26;
    func_0x00010c0745c0();
    uStack_18c = (uint)ppuVar10;
    ppuVar25 = ppuVar4;
    func_0x000100bf119c();
    if (((ulong)ppuVar25 & 1) == 0) {
      func_0x00010c06d560();
    }
    _objc_retain(param_26);
    _objc_retain(param_25);
    ppuVar25 = param_25;
    func_0x00010c08fa60();
    if (ppuVar25 == (undefined **)0x0) {
      ppuVar25 = param_26;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar25;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar7;
      func_0x00010bf20ee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      _objc_release(ppuVar25);
    }
    else {
      _objc_retain(param_25);
      ppuVar11 = param_25;
    }
    ppuVar25 = ppuVar11;
    func_0x00010c08fa60();
    if (ppuVar25 == (undefined **)0x0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar19 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc();
      func_0x00010c04e820();
    }
    _objc_release(ppuVar11);
    _objc_release(param_25);
    _objc_release(param_26);
    puStack_208 = param_34;
    func_0x00010bf2c1e0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puStack_208;
    func_0x00010c13b940();
    _objc_release();
    if (puVar23 == (undefined *)0x5) {
      puStack_208 = (undefined *)0x0;
    }
    else {
      func_0x000107080f54();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar25 = &PTR____CFConstantStringClassReference_110e999f8;
    _objc_retain(&PTR____CFConstantStringClassReference_110e999f8);
    ppuVar7 = param_26;
    func_0x00010c116d40();
    _objc_retainAutoreleasedReturnValue();
    if (((ulong)ppuVar10 & 1) == 0) {
      if (param_7 != (undefined *)0x0) {
        puVar21 = param_7;
        FUN_10706740c();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = param_7;
        FUN_107067448();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_170);
        puVar23 = PTR_PTR_1126c56e8;
        puVar14 = param_7;
        func_0x00010c26d760(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25bc00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_158);
        _objc_release(puVar14);
        uStack_2a8 = 1;
        puStack_158 = puVar21;
        puStack_170 = puVar20;
        goto LAB_107065b0c;
      }
      ppuVar10 = ppuVar7;
      func_0x00010c08fa60();
      if (ppuVar10 != (undefined **)0x0) {
        puVar23 = PTR_PTR_1126c56e8;
        func_0x00010bf61740();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107065b0c;
      }
    }
    else {
      puVar23 = (undefined *)0x0;
LAB_107065b0c:
      _objc_release(puStack_158);
      puStack_158 = puVar23;
    }
    _objc_release();
    puStack_188 = (undefined *)0x0;
    ppuStack_180 = (undefined **)0x0;
    puStack_1e0 = (undefined *)0x0;
    puStack_1c0 = (undefined *)0x0;
    puStack_1f8 = (undefined *)0x0;
  }
  if (puVar24 != (undefined *)0x0) {
    puStack_230 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    puVar24 = param_32;
    func_0x00010c2711a0(param_32);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820();
    _objc_release(puVar19);
    _objc_release(puVar24);
    puVar24 = param_32;
    func_0x00010c26f000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_208);
    ppuStack_228 = &PTR____CFConstantStringClassReference_110e99af8;
    _objc_retain();
    _objc_release(ppuVar25);
    ppuVar25 = ppuStack_238;
    func_0x00010c08fa60();
    puStack_208 = puVar24;
    if (ppuVar25 == (undefined **)0x0) {
      ppuStack_240 = (undefined **)0x0;
      puVar20 = (undefined *)0x0;
      puVar24 = (undefined *)0x0;
      puVar21 = (undefined *)0x0;
      puVar23 = (undefined *)0x0;
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR_PTR_1126cb858;
      func_0x00010c08bca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_188);
      ppuStack_240 = (undefined **)0x0;
      puVar20 = (undefined *)0x0;
      puVar24 = (undefined *)0x0;
      puVar21 = (undefined *)0x0;
      puVar23 = (undefined *)0x0;
      puVar19 = (undefined *)0x0;
      puStack_188 = puVar14;
    }
    goto LAB_107066844;
  }
  if (puVar19 != (undefined *)0x0) {
    bVar1 = true;
  }
  if (bVar1) {
    ppuVar7 = ppuVar4;
    func_0x000100bec434();
    if (((int)ppuVar7 != 0) && (puVar19 == (undefined *)0x0)) {
      ppuVar7 = param_37;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar7;
      func_0x00010bf1f3c0();
      _objc_release();
      if ((int)ppuVar10 != 0) {
        func_0x000107080e64();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar7;
        func_0x00010c08fa60();
        if (ppuVar10 == (undefined **)0x0) {
          puStack_230 = (undefined *)0x0;
        }
        else {
          puStack_230 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc();
          func_0x00010c04e820();
          _objc_retain(&PTR____CFConstantStringClassReference_110e99ad8);
          _objc_release(ppuVar25);
          ppuVar25 = &PTR____CFConstantStringClassReference_110e99ad8;
        }
        _objc_release(ppuVar7);
        ppuStack_228 = ppuVar25;
        goto LAB_107066840;
      }
    }
    puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_230 = puVar19;
    ppuStack_228 = ppuVar25;
    if (param_33 != 0) {
      func_0x000107080bdc();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf529e0(param_33);
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar24);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar23);
      _objc_release(ppuVar7);
      puStack_230 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc();
      func_0x00010c04e820();
      _objc_release(puVar19);
      ppuStack_228 = &PTR____CFConstantStringClassReference_110e53978;
      _objc_retain();
      _objc_release(ppuVar25);
      _objc_release(puStack_1c0);
      lVar8 = param_33;
      func_0x00010c1041c0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar8;
      func_0x00010c08fa60();
      if (lVar12 == 0) {
LAB_107066788:
        _objc_release(lVar8);
      }
      else {
        lVar12 = param_33;
        func_0x00010c0d4520();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar12;
        func_0x00010c08fa60();
        if (lVar16 == 0) {
LAB_107066780:
          _objc_release(lVar12);
          goto LAB_107066788;
        }
        lVar16 = param_33;
        func_0x00010bfb7be0();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar16;
        func_0x00010c08fa60();
        _objc_release(lVar16);
        _objc_release(lVar12);
        _objc_release(lVar8);
        puVar19 = PTR_PTR_1126cb858;
        if (lVar17 != 0) {
          lVar8 = param_33;
          func_0x00010c1041c0(param_33);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = param_33;
          func_0x00010c0d4520(param_33);
          _objc_retainAutoreleasedReturnValue();
          lVar16 = param_33;
          func_0x00010bfb7be0(param_33);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08be60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puStack_188);
          _objc_release(lVar16);
          puStack_188 = puVar19;
          goto LAB_107066780;
        }
      }
      _objc_release(puVar24);
      puStack_1c0 = (undefined *)0x0;
    }
  }
  else {
    func_0x000107080e4c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar7;
    func_0x00010c08fa60();
    if (ppuVar10 == (undefined **)0x0) {
      puStack_230 = (undefined *)0x0;
    }
    else {
      puStack_230 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc();
      func_0x00010c04e820();
      _objc_retain(&PTR____CFConstantStringClassReference_110e99ab8);
      _objc_release(ppuVar25);
      puVar24 = PTR_PTR_1126b0c40;
      puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe7aa0(0x402c000000000000,0x402c000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_1c0);
      _objc_release(puVar19);
      ppuVar10 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuStack_180);
      puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_1e0);
      ppuVar25 = &PTR____CFConstantStringClassReference_110e99ab8;
      puStack_1e0 = puVar19;
      puStack_1c0 = puVar24;
      ppuStack_180 = ppuVar10;
    }
    _objc_release(ppuVar7);
    ppuStack_228 = ppuVar25;
  }
LAB_107066840:
  ppuStack_240 = (undefined **)0x0;
  puVar24 = (undefined *)0x0;
  puVar23 = (undefined *)0x0;
  puVar21 = (undefined *)0x0;
  puVar20 = (undefined *)0x0;
  puVar19 = (undefined *)0x0;
LAB_107066844:
  if ((ppuVar5 != (undefined **)0x0) && (param_10._1_1_ == '\0')) {
    ppuVar25 = ppuVar5;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(ppuVar25);
  }
  puVar14 = PTR_PTR_1126d4390;
  _objc_alloc(PTR_PTR_1126d4390);
  func_0x00010c04f260();
  if (puVar19 == (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar18 = PTR_PTR_1126d4390;
    _objc_alloc(PTR_PTR_1126d4390);
    func_0x00010c04f260();
  }
  uVar9 = param_29;
  func_0x0001070674b0(param_29);
  if ((uStack_18c & 1) == 0) {
    FUN_107064bcc(ppuVar4,ppuVar5 != (undefined **)0x0,uStack_2a8,uStack_244,(int)ppuVar6,uVar9);
  }
  _objc_alloc(PTR_PTR_1126cee08);
  func_0x00010c00d520();
  _objc_release(puVar18);
  _objc_release(puVar14);
  _objc_release(puVar22);
  _objc_release(puVar20);
  _objc_release(ppuStack_240);
  _objc_release(puVar24);
  _objc_release(puVar21);
  _objc_release(puVar23);
  _objc_release(puVar19);
  _objc_release(ppuStack_228);
  _objc_release(puStack_188);
  _objc_release(ppuStack_180);
  _objc_release(puStack_1e0);
  _objc_release(puStack_1c0);
  _objc_release(puStack_208);
  _objc_release(puStack_1f8);
  _objc_release(puStack_230);
  _objc_release(ppuStack_238);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(puStack_170);
  _objc_release(puStack_158);
  func_0x0001000e2a84(puVar3);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    func_0x0001000e2a84(puVar3);
    __Unwind_Resume();
    func_0x00010bfddf20();
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10706740c; end: 107067447;  */

void FUN_10706740c(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfddf20();
  uVar1 = 0x88;
  if (param_1 == 0) {
    uVar1 = 0x81;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107067448; end: 107067503;  */

void FUN_107067448(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c259580();
  puVar2 = PTR_PTR_1126cc4c0;
  if (((uint)uVar1 >> 2 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bfddf20(param_1);
    func_0x00010c141240(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107067504; end: 107067767; +[SCChatHeaderViewModelGenerator _createTextForNotificationPermissionBanner:font:] */

void FUN_107067504(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar1 = param_4;
  _objc_retain(param_4);
  func_0x000107080bf4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c08fa60();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 != 0) {
    func_0x000107080c0c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(lVar2);
    puVar1 = puVar3;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  func_0x00010c04e820();
  uVar7 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c08fa60(puVar3);
  func_0x00010bef6f20(puVar3,param_2,uVar7,puVar4,0,puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  puVar5 = puVar4;
  func_0x000107080c24();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c08fa60(puVar4);
  func_0x00010bef6f20(puVar4,param_2,uVar7,puVar5,0,puVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  func_0x00010bff4f40();
  puVar6 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  func_0x00010c04e820();
  func_0x00010bf069e0(puVar5,param_2,puVar6);
  _objc_release(puVar6);
  func_0x00010bf069e0(puVar5,param_2,puVar4);
  uVar7 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar6 = puVar5;
  func_0x00010c08fa60(puVar5);
  func_0x00010bef6f20(puVar5,param_2,uVar7,param_4,0,puVar6);
  func_0x00010becb3a0(param_1,param_2,puVar5,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107067768; end: 1070679af; +[SCChatHeaderViewModelGenerator _textByPrependingBellIconToText:font:] */

void FUN_107067768(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010bff4f40();
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_4,
                      &PTR____CFConstantStringClassReference_110e99798);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
    _objc_alloc_init(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
    func_0x00010c1a9f00();
    func_0x00010bf2f960(param_6);
    puVar4 = puVar3;
    func_0x00010bfe6ac0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    param_1 = param_1 - param_2;
    uVar7 = 0x3fe0000000000000;
    dVar8 = param_1 * 0.5;
    puVar5 = puVar3;
    func_0x00010bfe6ac0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    puVar6 = puVar3;
    func_0x00010bfe6ac0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    func_0x00010c1739e0(0,dVar8,param_1,uVar7,puVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068,param_4,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bcbeb30();
    if ((int)puVar5 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e820();
      func_0x00010c066640(puVar1,param_4,puVar5,0);
      _objc_release(puVar5);
      func_0x00010c066640(puVar1,param_4,puVar4,0);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
      func_0x00010c04e820();
      func_0x00010bf069e0();
      puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e820();
      func_0x00010bf069e0(puVar5,param_4,puVar6);
      _objc_release(puVar6);
      func_0x00010c066640(puVar1,param_4,puVar5,0);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1070679b0; end: 107067c13; +[SCChatHeaderViewModelGenerator _createTextForLocationUpsellBannerWithDisplayName:font:] */

void FUN_1070679b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  uVar2 = param_3;
  _objc_retain(param_3);
  func_0x000107080f9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x000107080fb4();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  func_0x00010c04e820();
  uVar9 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c08fa60(puVar4);
  func_0x00010bef6f20(puVar4,param_2,uVar9,puVar5,0,puVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  func_0x00010c04e820();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c08fa60(puVar5);
  func_0x00010bef6f20(puVar5,param_2,uVar9,puVar6,0,puVar7);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  func_0x00010bff4f40();
  puVar7 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  func_0x00010c04e820();
  func_0x00010bf069e0(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010bf069e0(puVar6,param_2,puVar5);
  uVar9 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar7 = puVar6;
  func_0x00010c08fa60(puVar6);
  func_0x00010bef6f20(puVar6,param_2,uVar9,param_4,0,puVar7);
  _objc_release();
  iVar1 = (int)param_4;
  func_0x00010bcbeb30();
  if (iVar1 != 0) {
    puVar7 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
    func_0x00010c16f520();
    func_0x00010c166c00(puVar7,param_2,1);
    uVar9 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    puVar8 = puVar6;
    func_0x00010c08fa60(puVar6);
    func_0x00010bef6f20(puVar6,param_2,uVar9,puVar7,0,puVar8);
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107067c14; end: 107067d8f; +[SCChatHeaderViewModelGenerator _createTextForArrivalNotificationBannerWithDisplayName:font:] */

void FUN_107067c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b2c18;
  _objc_retain(param_4);
  func_0x00010bfb1120(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = puVar1;
  func_0x000107080c3c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  func_0x00010c04e820();
  uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c08fa60(puVar2);
  func_0x00010bef6f20(puVar2,param_2,uVar6,puVar4,0,puVar5);
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar4 = puVar2;
  func_0x00010c08fa60(puVar2);
  func_0x00010bef6f20(puVar2,param_2,uVar6,param_4,0,puVar4);
  func_0x00010becb3a0(param_1,param_2,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107067d90; end: 107067e6f; +[SCChatHeaderViewModelGenerator _notificationDisplayEnabled:] */

uint FUN_107067d90(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfc6520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0754e0(param_3);
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x00010beff6a0();
  if (lVar3 == 2) {
    uVar5 = 1;
  }
  else {
    lVar3 = lVar1;
    func_0x00010beff6a0(lVar1);
    uVar5 = (uint)(lVar3 == 0);
  }
  lVar3 = lVar1;
  func_0x00010bf86160();
  if (lVar3 == 2) {
    uVar6 = 1;
  }
  else {
    lVar3 = lVar1;
    func_0x00010bf86160(lVar1);
    uVar6 = (uint)(lVar3 == 0);
  }
  lVar3 = lVar1;
  func_0x00010bf85860();
  if (lVar3 == 2) {
    uVar4 = 1;
  }
  else {
    lVar3 = lVar1;
    func_0x00010bf85860(lVar1);
    uVar4 = (uint)(lVar3 == 0);
  }
  _objc_release(lVar1);
  return (uint)lVar2 & (uVar5 | uVar6 | uVar4);
}



/* Entry: 107067e70; end: 107067e87;  */

void FUN_107067e70(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107067e88; end: 107067ef7;  */

void FUN_107067e88(long param_1,undefined8 param_2)

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



/* Entry: 107067ef8; end: 10706814b; -[SCChatReactableViewModelGenerator viewModelForMessage:width:group:currentUserSnapchatter:snapchattersData:reactionMetadata:isLastMessage:valdiRuntimeProvider:] */

void FUN_107067ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_8);
  func_0x00010bd869d0(param_7,&PTR___NSConcreteGlobalBlock_11098cf80,
                      &PTR___NSConcreteGlobalBlock_11098cfc0);
  lVar1 = param_4;
  FUN_1070b072c(param_4,param_6,param_7,param_5,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  lVar2 = param_4;
  func_0x00010c07bba0();
  if (((int)lVar2 == 0) ||
     ((lVar2 = lVar1, func_0x00010bf529e0(), (param_9 & 1) == 0 && (lVar2 == 0)))) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x00010c06ecc0();
    uVar3 = param_5;
    func_0x00010bf508e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126d4320;
    uVar3 = param_6;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0cb8c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc62c0(param_1,puVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126d43a8;
    _objc_alloc(PTR_PTR_1126d43a8);
    func_0x00010c03cfe0(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10706814c; end: 107068233;  */

void FUN_10706814c(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x2a;
  if (param_1 == 0) {
    uVar1 = 0x6b;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  return;
}



/* Entry: 107068234; end: 1070682af;  */

undefined8 FUN_107068234(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 1) {
    uVar2 = param_2;
    func_0x00010bf80aa0();
    iVar1 = (int)uVar2;
    uVar2 = 0x7fefffffffffffff;
  }
  else {
    uVar2 = param_2;
    func_0x00010bf80a80();
    iVar1 = (int)uVar2;
    uVar2 = 0x4046800000000000;
  }
  uVar3 = 0xffefffffffffffff;
  if (iVar1 == 0) {
    uVar3 = uVar2;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1070682b0; end: 107068433;  */

undefined *
FUN_1070682b0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
             int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar5 = 0x4000000000000000;
  if (param_4 == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x4010000000000000;
  if (param_3 == 0) {
    uVar6 = uVar5;
  }
  uVar5 = uVar6;
  if (param_6 == 0) {
    uVar5 = 0x4000000000000000;
  }
  _objc_retain(param_8);
  _objc_retain(param_1);
  func_0x00010c23ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x00010c04e820();
  puVar3 = PTR_PTR_1126d43b0;
  _objc_alloc(PTR_PTR_1126d43b0);
  func_0x00010bff3000();
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126d43b8;
  _objc_alloc(PTR_PTR_1126d43b8);
  FUN_107068234(param_2,param_8);
  _objc_release(param_8);
  func_0x00010c0415e0(uVar5,uVar6,puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 107068434; end: 1070686b7;  */

void FUN_107068434(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((param_6 == 0) && (param_4 < 2)) {
    puVar1 = param_1;
    func_0x000108ef44cc(param_1,param_3,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c4c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070686b8; end: 1070688af;  */

void FUN_1070686b8(undefined **param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined **param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar5 = param_1;
  func_0x00010c071ae0();
  bVar3 = (1L << (param_4 & 0x3f) & 0xc2U) == 0;
  uVar1 = 1;
  if (bVar3) {
    uVar1 = 2;
  }
  uVar2 = 2;
  if (param_4 < 8) {
    uVar2 = uVar1;
  }
  bVar4 = (int)ppuVar5 != 0;
  uVar1 = 0;
  if (bVar4) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (param_4 != 2) {
    uVar2 = uVar1;
  }
  ppuVar6 = param_1;
  FUN_107068434(param_1,param_3,param_2,uVar2,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  ppuVar5 = param_5;
  _objc_retain(param_5);
  if ((int)param_7 == 0) {
    if (param_4 != 2 && (bVar4 && (7 < param_4 || bVar3))) {
      func_0x000107080e1c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar7 = param_5;
      func_0x00010bd869d0(param_5,&PTR___NSConcreteGlobalBlock_11098cf80,
                          &PTR___NSConcreteGlobalBlock_11098cfc0);
      ppuVar5 = param_1;
      func_0x0001070684f8(param_1,param_2,param_3,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
    }
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e998b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e998b8,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  ppuVar7 = ppuVar5;
  func_0x000107068600(ppuVar5,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 1070688b0; end: 10706893b;  */

long FUN_1070688b0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf4f7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c22f500(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 10706893c; end: 107069377; +[SCChatSenderLineAndHeaderViewModelGenerator senderHeaderViewModelWithMessage:currentUserId:currentUserSnapchatter:conversationParticipants:conversationSubtype:isShowingDateHeader:maxWidth:snapchattersData:renderAsBubble:pluginManager:belowTheFold:isUnknown:groupChatAddButtonViewModelProvider:groupsCustomColorsFetcher:] */

void FUN_10706893c(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,uint param_9,long param_10,
                  char param_11,undefined4 param_12,undefined8 param_13,undefined4 param_14,
                  undefined4 param_15,long param_16,undefined8 param_17)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined *puVar19;
  uint uVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uStack_b0;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_17);
  uVar2 = param_4;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c15cca0();
  uVar18 = uVar2;
  func_0x00010c071ae0();
  uStack_b0 = 0;
  if ((uVar3 != 2) && ((int)uVar18 != 0)) {
    if (uVar3 - 1 < 7) {
      uStack_b0 = *(undefined8 *)(&UNK_10de1e8d0 + (uVar3 - 1) * 8);
    }
    else {
      uStack_b0 = 2;
    }
  }
  uVar18 = uVar2;
  FUN_1070686b8(uVar2,param_5,param_7,uVar3,param_10,param_17,param_14._1_1_);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  uVar5 = uVar18;
  if (((int)uVar3 != 0) && (uVar3 = param_4, FUN_1070688b0(param_4,param_13), (uVar3 & 1) == 0)) {
    uVar3 = param_4;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf7b4a0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      func_0x00010c0d3c80(uVar18);
      uVar3 = uVar2;
      FUN_107068434(uVar2,param_7,param_5,uStack_b0,param_17,param_14._1_1_);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      puVar17 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0e340(0,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      func_0x00010bf069e0(uVar5);
      _objc_release(uVar18);
      _objc_release(puVar6);
      _objc_release(uVar3);
    }
  }
  uVar12 = param_7;
  func_0x000108ef57c8();
  uVar3 = param_4;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar3;
  func_0x00010c071240();
  _objc_release();
  if ((int)uVar18 == 0) {
    uVar18 = 0;
  }
  else {
    func_0x000107080ef4();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar3;
    func_0x000107068600(uVar3,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(uVar3);
  }
  param_1 = param_1 + -16.0;
  puVar6 = PTR_PTR_1126cb7f0;
  func_0x00010c15dde0();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 0.0;
  if (puVar6 != (undefined *)0x0) {
    dVar29 = 16.0;
  }
  dVar26 = (param_1 - dVar29) + -4.0;
  dVar28 = dVar26;
  func_0x00010c23d600(dVar26,0x4026000000000000,PTR_PTR_1126af270);
  if (dVar26 <= dVar28) {
    dVar28 = dVar26;
  }
  dVar28 = dVar29 + dVar28;
  uVar3 = uVar18;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    bVar1 = false;
    dVar30 = *(double *)PTR__CGSizeZero_110347620;
    dVar22 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    dVar30 = dVar26;
    func_0x00010c23d600(dVar26,0x4026000000000000,PTR_PTR_1126af270);
    if (dVar26 <= dVar30) {
      dVar30 = dVar26;
    }
    dVar22 = 12.0;
    puVar17 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    _objc_release(puVar17);
    if (dVar22 <= 11.0) {
      dVar22 = 11.0;
    }
    dVar22 = (double)(long)dVar22;
    dVar23 = dVar28 + dVar30 + 4.0;
    bVar1 = param_1 < dVar23;
    if (dVar23 <= param_1) {
      dVar28 = dVar23;
    }
  }
  dVar23 = 12.0;
  puVar17 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(puVar17);
  if (dVar23 <= 11.0) {
    dVar23 = 11.0;
  }
  if (param_14._1_1_ != '\0') {
    lVar21 = 0;
    puVar17 = (undefined *)0x0;
    if (param_11 == '\0') {
      dVar28 = param_1;
    }
    if (!bVar1) {
      dVar22 = -0.0;
    }
    uVar20 = 1;
    dVar22 = dVar22 + dVar23;
    goto LAB_107068fa0;
  }
  puVar17 = PTR_PTR_1126cb7f0;
  dVar24 = param_1;
  func_0x00010bf4f7c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar17 == (undefined *)0x0) {
    dVar24 = 0.0;
    if (param_16 != 0) {
      lVar7 = param_10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 != 0) {
        uVar3 = param_4;
        func_0x00010bf490e0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_10;
        func_0x00010c0e00e0(param_10,uVar3,uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar3);
        _objc_retain(lVar8);
        _objc_retain(uVar2);
        _objc_retain(param_5);
        _objc_retain(param_16);
        uVar4 = uVar3;
        func_0x00010c08fa60();
        lVar21 = 0;
        if ((lVar8 != 0) && (uVar4 != 0)) {
          uVar4 = uVar2;
          func_0x00010c08fa60();
          if ((uVar4 == 0) || (uVar4 = param_5, func_0x00010c08fa60(), uVar4 == 0)) {
            lVar21 = 0;
          }
          else {
            uVar4 = param_5;
            func_0x00010c0720c0();
            lVar21 = 0;
            if ((param_8 != 6) && ((uVar4 & 1) == 0)) {
              lVar9 = param_16;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar8;
              func_0x00010c244280();
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar8;
              func_0x00010bfb8b20();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c067fc0();
              lVar21 = lVar9;
              func_0x00010c29dae0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar11);
              _objc_release(lVar10);
              _objc_release(lVar9);
            }
          }
        }
        _objc_release(param_16);
        _objc_release(param_5);
        _objc_release(uVar2);
        _objc_release(lVar8);
        _objc_release(uVar3);
        _objc_release(lVar8);
        _objc_release(uVar3);
        _objc_release(lVar7);
        if (lVar21 != 0) {
          uVar3 = uVar5;
          func_0x00010c0d3c80(uVar5);
          uVar4 = uVar2;
          FUN_107068434(uVar2,param_7,param_5,uStack_b0,param_17,0);
          _objc_retainAutoreleasedReturnValue();
          dVar24 = dVar26;
          func_0x00010c23d600(dVar26,0x4026000000000000,PTR_PTR_1126af270);
          dVar28 = dVar24 + 12.0;
          if (dVar26 <= dVar24 + 12.0) {
            dVar28 = dVar26;
          }
          dVar28 = dVar29 + dVar28;
          if (!bVar1) {
            uVar13 = uVar18;
            func_0x00010c08fa60();
            if (uVar13 != 0) {
              dVar28 = dVar30 + 4.0 + dVar28;
            }
          }
          dVar29 = 12.0;
          puVar19 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010bf6d680(0x4028000000000000);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf2f960();
          puVar14 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
          _objc_alloc_init(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
          uVar27 = 0x4028000000000000;
          uVar25 = 0x4028000000000000;
          puVar15 = PTR_PTR_1126b0c40;
          func_0x00010bfe7aa0(0x4028000000000000,0x4028000000000000,PTR_PTR_1126b0c40);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a9f00(puVar14);
          _objc_release(puVar15);
          puVar15 = puVar14;
          func_0x00010bfe6ac0(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23d0a0();
          puVar16 = puVar14;
          func_0x00010bfe6ac0(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23d0a0();
          func_0x00010c1739e0(0,(dVar29 + -12.0) * 0.5,uVar27,uVar25,puVar14);
          _objc_release(puVar16);
          _objc_release(puVar15);
          puVar15 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
          func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf069e0(uVar3);
          _objc_release(puVar15);
          _objc_release(uVar5);
          dVar24 = param_1;
          func_0x00010c23d6e0(param_1,dVar23,PTR_PTR_1126d4348);
          _objc_release(puVar14);
          _objc_release(puVar19);
          _objc_release(uVar4);
          uVar5 = uVar3;
        }
        goto LAB_107068f30;
      }
    }
    lVar21 = 0;
  }
  else {
    func_0x00010c23d0a0();
    lVar21 = 0;
    if (param_1 <= dVar24) {
      dVar24 = param_1;
    }
  }
LAB_107068f30:
  if (param_1 <= dVar24) {
    dVar24 = param_1;
  }
  dVar29 = dVar24 + dVar28 + 4.0;
  if (dVar24 <= dVar28) {
    dVar24 = dVar28;
  }
  dVar28 = dVar24;
  dVar26 = dVar23 + dVar23;
  if (dVar29 <= param_1) {
    dVar28 = dVar29;
    dVar26 = dVar23;
  }
  if (!bVar1) {
    dVar22 = -0.0;
  }
  dVar26 = dVar22 + dVar26;
  if (lVar21 == 0) {
    uVar20 = 1;
    dVar22 = dVar26;
  }
  else {
    func_0x00010c0fbdc0(PTR_PTR_1126d4348);
    uVar20 = 0;
    if (dVar22 <= dVar26) {
      dVar22 = dVar26;
    }
  }
LAB_107068fa0:
  _objc_retain(uVar2);
  uVar3 = param_5;
  func_0x00010c0720c0();
  puVar19 = (undefined *)0x0;
  if (((uVar3 & 1) == 0) && ((((uint)uVar12 ^ 1) & 1) == 0)) {
    uVar12 = 0;
    func_0x000107d53844(0,uVar2,1,0x2e879d01,0x2f,0x2b);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    _objc_release(uVar12);
  }
  uVar12 = 0;
  if (param_11 == '\0' && (param_9 & uVar20) == 0) {
    uVar12 = 0x4020000000000000;
  }
  uVar27 = 0x4010000000000000;
  if (param_11 == '\0') {
    uVar27 = 0x4000000000000000;
  }
  _objc_release(uVar2);
  puVar14 = PTR_PTR_1126d43c0;
  _objc_alloc(PTR_PTR_1126d43c0);
  func_0x00010c0446a0(dVar28,(long)dVar22,uVar12,0x4020000000000000,uVar27,0x4020000000000000);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(lVar21);
  _objc_release(puVar6);
  _objc_release(uVar18);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 107069378; end: 107069593; +[SCChatSenderLineAndHeaderViewModelGenerator senderLineViewModelWithSenderUserId:currentUserId:conversationParticipants:isSaved:isSavedByCurrentUser:cornerMask:status:groupsCustomColorsFetcher:renderAsBubble:] */

void FUN_107069378(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7,undefined8 param_8,ulong param_9,
                  undefined8 param_10,char param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c071ae0();
  if (param_9 == 2 || (int)puVar1 == 0) {
    uVar4 = 0;
  }
  else {
    if (7 < param_9 || (1L << (param_9 & 0x3f) & 0xc2U) == 0) {
      _objc_retain(param_3);
      _objc_retain(param_5);
      _objc_retain(param_4);
      puVar1 = PTR_PTR_1126ba2c0;
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c14c4c0(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfad6a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      uVar4 = 2;
      goto LAB_10706944c;
    }
    uVar4 = 1;
  }
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x000108ef47bc(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
LAB_10706944c:
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  puVar3 = param_3;
  FUN_107068434(param_3,param_5,param_4,uVar4,param_10,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  uVar4 = 0x4000000000000000;
  if (param_6 == 0) {
    uVar4 = 0;
  }
  uVar6 = 0x4014000000000000;
  if (param_7 == 0) {
    uVar6 = 0x4000000000000000;
  }
  uVar5 = 0x4010000000000000;
  if (param_7 == 0) {
    uVar5 = uVar4;
  }
  if (param_11 == '\0') {
    uVar5 = uVar6;
  }
  puVar2 = PTR_PTR_1126d43c8;
  _objc_alloc(PTR_PTR_1126d43c8);
  func_0x00010c004aa0(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107069594; end: 1070696db; +[SCChatSenderLineAndHeaderViewModelGenerator senderIconForSenderUserId:conversationParticipants:] */

void FUN_107069594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c0bf240(param_4);
    if ((*(byte *)(puStack_48 + 3) & 1) == 0) {
      puVar2 = PTR_PTR_1126aebd8;
      func_0x00010c14e3a0(PTR_PTR_1126aebd8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = (undefined *)0x0;
    }
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1070696dc; end: 10706977b;  */

void FUN_1070696dc(long param_1,undefined8 param_2)

{
  func_0x00010c071ae0(param_2,param_2,&PTR____CFConstantStringClassReference_110e12b58);
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)param_2;
  return;
}



/* Entry: 10706977c; end: 107069d23; +[SCChatSenderLineAndHeaderViewModelGenerator contextualHeaderForMessage:currentUserId:currentUserSnapchatter:conversationParticipants:maxWidth:pluginManager:sendingDisplayType:] */

void FUN_10706977c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined *param_9,long param_10)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
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
  
  dVar7 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_10 == 2) {
    puVar4 = PTR_PTR_1126d43d0;
    func_0x00010c23b800(PTR_PTR_1126d43d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d3e0(PTR_PTR_1126d4340);
    puVar6 = PTR_PTR_1126d43d8;
    _objc_alloc(PTR_PTR_1126d43d8);
    func_0x00010c0514c0(dVar7,param_2);
  }
  else {
    puVar6 = param_5;
    FUN_1070688b0(param_5,param_9);
    if ((int)puVar6 == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_107069c90;
    }
    puStack_b0 = &uStack_b8;
    uStack_b8 = 0;
    dVar7 = 1.02270250269256e-312;
    uStack_a8 = 0x3032000000;
    pcStack_a0 = FUN_107069d24;
    uStack_98 = 0x107069d34;
    uStack_90 = 0;
    puStack_e0 = &uStack_e8;
    uStack_e8 = 0;
    uStack_d8 = 0x3032000000;
    pcStack_d0 = FUN_107069d24;
    uStack_c8 = 0x107069d34;
    uStack_c0 = 0;
    puVar4 = param_5;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf676a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c15b9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010c15cb80();
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release();
    if ((int)puVar1 == 1) {
      func_0x000107080f84();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126aebd8;
      func_0x00010c14e3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined *)puStack_b0[5];
      puStack_b0[5] = puVar6;
LAB_107069a74:
      _objc_release(puVar5);
      if ((puStack_e0[5] == 0) && (puStack_b0[5] != 0)) {
        puVar6 = PTR_PTR_1126d43d0;
        func_0x00010c0e3600();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puStack_e0[5];
        puStack_e0[5] = puVar6;
        _objc_release(uVar3);
      }
      func_0x00010c23d3e0(PTR_PTR_1126d4340);
      dVar8 = dVar7;
      uVar3 = param_2;
      if (param_1 < dVar7) {
        lVar2 = 0;
        func_0x00010c08fa60();
        if (lVar2 != 0) {
          _objc_release(puVar4);
          func_0x00010c23d3e0(PTR_PTR_1126d4340);
          puVar4 = (undefined *)0x0;
          dVar7 = dVar8;
          param_2 = uVar3;
        }
      }
      puVar6 = param_5;
      func_0x00010c0cb8c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010c0720c0();
      if (((ulong)puVar5 & 1) == 0) {
LAB_107069c30:
        _objc_release(puVar6);
      }
      else {
        puVar5 = param_5;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar5;
        func_0x00010bf7b4a0();
        if (((ulong)puVar1 & 1) == 0) {
          _objc_release(puVar5);
          goto LAB_107069c30;
        }
        puVar1 = puVar4;
        func_0x00010c08fa60();
        _objc_release(puVar5);
        _objc_release(puVar6);
        if (puVar1 != (undefined *)0x0) {
          puVar6 = puVar4;
          func_0x00010c25ce40(puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          func_0x00010c23d3e0(PTR_PTR_1126d4340);
          puVar4 = puVar6;
          dVar7 = dVar8;
          param_2 = uVar3;
        }
      }
      puVar6 = PTR_PTR_1126d43d8;
      _objc_alloc(PTR_PTR_1126d43d8);
      func_0x00010c0514c0(dVar7,param_2);
    }
    else {
      puVar6 = param_9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bf4f7e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (puVar5 == (undefined *)0x0) {
        puVar4 = (undefined *)0x0;
        puVar6 = (undefined *)0x0;
      }
      else {
        uVar3 = param_8;
        FUN_1070b2918(param_8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf4f7a0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 != (undefined *)0x0) {
          puVar4 = puVar6;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar6;
          func_0x00010bfe5400(puVar6);
          _objc_retainAutoreleasedReturnValue();
          dVar7 = 1.60807493534087e-314;
          func_0x00010c0bf940();
          _objc_release(puVar1);
          _objc_release(puVar6);
          _objc_release(uVar3);
          goto LAB_107069a74;
        }
        _objc_retain(puVar5);
        func_0x00010010fab4(puVar5,PTR_DAT_1126a54e0);
        _objc_release(puVar5);
        _objc_release(uVar3);
        _objc_release(puVar5);
        puVar4 = (undefined *)0x0;
        puVar6 = (undefined *)0x0;
      }
    }
    __Block_object_dispose(&uStack_e8,8);
    _objc_release(uStack_c0);
    __Block_object_dispose(&uStack_b8,8);
    _objc_release(uStack_90);
  }
  _objc_release(puVar4);
LAB_107069c90:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107069d24; end: 107069d3b;  */

void FUN_107069d24(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107069d3c; end: 107069e13;  */

void FUN_107069d3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0(PTR_PTR_1126aebd8,param_2,&PTR____CFConstantStringClassReference_110e99858,
                      &PTR____CFConstantStringClassReference_110e99878);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107069e14; end: 107069e33;  */

void FUN_107069e14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4022000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_mediumAvenirNextFontOfSize__11260f6e8);
  return;
}



/* Entry: 107069e34; end: 107069fa7;  */

void FUN_107069e34(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc_init();
  func_0x00010c166c00();
  puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4022000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf51e00();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar2 = param_1;
  func_0x00010c04e840();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar6 = puVar1;
    func_0x00010c08fa60();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c127e40(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc();
      puVar2 = puVar1;
      func_0x00010c04e840();
      _objc_release(puVar3);
    }
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_retain(puVar2);
      _objc_retain(param_2);
      func_0x00010c26f200(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126d43e0;
      _objc_alloc(PTR_PTR_1126d43e0);
      puVar3 = puVar1;
      FUN_107069e34(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      FUN_107069fa8(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(param_2);
      func_0x00010bffd280(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107069fa8; end: 10706a0db;  */

void FUN_107069fa8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c127e40(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    param_3 = param_1;
    func_0x00010c04e840();
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_retain(param_3);
    _objc_retain(param_2);
    func_0x00010c26f200(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d43e0;
    _objc_alloc(PTR_PTR_1126d43e0);
    puVar3 = puVar2;
    FUN_107069e34(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    FUN_107069fa8(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_2);
    func_0x00010bffd280(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10706a0dc; end: 10706a28b;  */

void FUN_10706a0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c26f200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d43e0;
  _objc_alloc(PTR_PTR_1126d43e0);
  puVar3 = puVar1;
  FUN_107069e34(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  FUN_107069fa8(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010bffd280(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10706a28c; end: 10706a32b;  */

void FUN_10706a28c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d43e8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c005460();
  _objc_release(param_2);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10706a32c; end: 10706a54f;  */

void FUN_10706a32c(double param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  dVar3 = param_1;
  FUN_107064934(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c23d0a0(puVar2);
  func_0x00010c0bafa0(puVar2);
  param_2 = param_2 + dVar3;
  func_0x00010c0bafa0(puVar2);
  param_2 = param_2 + param_3;
  func_0x00010bf21b40(puVar2);
  func_0x00010bf21b40(puVar2);
  puVar1 = PTR_PTR_1126c6d00;
  _objc_alloc(PTR_PTR_1126c6d00);
  func_0x00010c0414c0(param_1,param_1,param_2 + dVar3 + param_3,param_1,param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10706a550; end: 10706a8ab;  */

void FUN_10706a550(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  
  dVar9 = 0.0;
  if (param_7 - 1U < 5) {
    dVar9 = *(double *)(&UNK_10de1e908 + (param_7 - 1U) * 8);
  }
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar1 = param_4;
  FUN_10706a28c(param_4,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  FUN_10706a28c(param_4,param_6,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar3 = PTR_PTR_1126d43f0;
  _objc_alloc();
  func_0x00010c026660();
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  dVar8 = dVar9;
  FUN_107064934();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c23d0a0(puVar5);
  func_0x00010c0bafa0(puVar5);
  param_2 = param_2 + dVar8;
  func_0x00010c0bafa0(puVar5);
  param_2 = param_2 + param_3;
  func_0x00010bf21b40(puVar5);
  param_2 = param_2 + dVar8;
  func_0x00010bf21b40(puVar5);
  param_2 = param_2 + param_3;
  func_0x00010bf4c660(puVar3);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (dVar8 == 0.0) {
    param_2 = 0.0;
  }
  func_0x00010bf4c660(puVar3);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126c6d00;
  _objc_alloc(PTR_PTR_1126c6d00);
  puVar7 = puVar3;
  func_0x00010c13fda0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0414c0(dVar9,dVar9,param_2,dVar9,dVar9,puVar6);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10706a8ac; end: 10706a977;  */

double FUN_10706a8ac(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    double param_5,ulong param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  _objc_retain();
  dVar4 = *(double *)PTR__CGSizeZero_110347620;
  if ((param_6 != 0) &&
     (uVar2 = param_6, func_0x00010bfe1300(), puVar1 = PTR_DAT_1126a5470, (uVar2 & 1) == 0)) {
    _objc_retain(param_6);
    uVar3 = param_6;
    func_0x00010010fab4(param_6,puVar1);
    uVar2 = param_6;
    if ((int)uVar3 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_6);
    uVar3 = uVar2;
    func_0x00010c130920();
    if ((uVar3 & 1) == 0) {
      dVar4 = 200.0;
      func_0x00010bf4d660(0x4069000000000000,param_6);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  return ((param_1 - param_3) - param_5) - dVar4;
}



/* Entry: 10706a978; end: 10706aa27;  */

bool FUN_10706a978(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  uVar3 = param_2;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010c149e00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf03aa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf03f40();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  return uVar4 == param_1;
}



/* Entry: 10706aa28; end: 10706ab5b;  */

undefined8 FUN_10706aa28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain();
  uStack_b0 = 0;
  uStack_a0 = 0x4010000000;
  pcStack_98 = "";
  uStack_88 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uStack_90 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uStack_78 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  uStack_80 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  puStack_a8 = &uStack_b0;
  func_0x00010c0bf2e0(param_1);
  uVar1 = puStack_a8[4];
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10706ab5c; end: 10706abc7;  */

void FUN_10706ab5c(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar4 = *(double *)(param_5 + 0x48);
  dVar5 = *(double *)(param_5 + 0x50);
  dVar2 = param_4;
  if (dVar4 != dVar5) {
    dVar2 = param_3;
  }
  dVar6 = *(double *)(param_5 + 0x58);
  dVar7 = *(double *)(param_5 + 0x30);
  dVar3 = param_4 + (dVar6 - dVar4);
  if (param_2 * dVar6 <= dVar4) {
    dVar3 = (1.0 - param_2) * dVar6;
  }
  param_1 = param_1 * *(double *)(param_5 + 0x60);
  dVar2 = dVar5 - dVar2;
  if (param_1 <= dVar5) {
    dVar2 = param_1;
  }
  lVar1 = *(long *)(*(long *)(param_5 + 0x20) + 8);
  *(long *)(lVar1 + 0x20) = (long)(-6.0 - dVar2);
  *(long *)(lVar1 + 0x28) = (long)(dVar3 - dVar7);
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  return;
}



/* Entry: 10706abc8; end: 10706b1d3;  */

void FUN_10706abc8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                  undefined *param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_3;
  func_0x00010c121240();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar12;
  func_0x00010c1c84e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar12 = puVar3;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar4 = puVar12;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(puVar12);
  if ((param_8 != 0) && (puVar12 = puVar3, func_0x00010bf529e0(), puVar12 != (undefined *)0x0)) {
    func_0x000107080da4();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    goto joined_r0x00010706b0a4;
  }
  if (param_4 == (undefined *)0x0) {
    _objc_retain(param_3);
    _objc_retain(puVar4);
    puVar12 = puVar4;
    func_0x00010bf529e0();
    if (puVar12 != (undefined *)0x0) {
      puVar7 = param_3;
      func_0x00010c07ea80();
      _objc_retain(puVar4);
      puVar8 = puVar4;
      func_0x00010bf529e0();
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar5 = puVar4;
      if ((int)puVar7 == 0) {
        if (puVar8 == (undefined *)0x0) goto LAB_10706afb8;
        func_0x000107080d8c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (puVar8 == (undefined *)0x0) {
LAB_10706afb8:
          puVar12 = (undefined *)0x0;
          goto LAB_10706b090;
        }
        func_0x000107080d5c();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar7 = puVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar8);
      goto LAB_10706b090;
    }
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar7 = param_3;
    func_0x00010c121240(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_retain(param_4);
    func_0x00010c2268e0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c1c84e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_4;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar6 = puVar5;
    func_0x00010c0ba200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar6;
    func_0x00010c1c84e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010c072060();
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar12);
    _objc_release(puVar7);
    _objc_retain(param_3);
    _objc_retain(puVar4);
    _objc_retain(param_9);
    puVar12 = puVar4;
    func_0x00010bf529e0();
    puVar5 = param_9;
    if (puVar12 == (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar7 = param_3;
      func_0x00010c07ea80();
      _objc_retain(puVar4);
      _objc_retain(param_9);
      puVar12 = puVar4;
      func_0x00010bf529e0();
      puVar8 = puVar4;
      if ((int)puVar7 == 0) {
        if (puVar12 == (undefined *)0x0) goto LAB_10706af48;
        if ((int)puVar6 == 0) {
          puVar10 = param_9;
          func_0x000108ef62d0(param_1,param_2,puVar4,param_9,1,1);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puVar7 = puVar8;
          func_0x000107080d8c();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10706b040;
        }
        func_0x000107080d74();
        _objc_retainAutoreleasedReturnValue();
      }
      else if (puVar12 == (undefined *)0x0) {
LAB_10706af48:
        puVar12 = (undefined *)0x0;
      }
      else if ((int)puVar6 == 0) {
        puVar10 = param_9;
        func_0x000108ef62d0(param_1,param_2,puVar4,param_9,1,1);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puVar7 = puVar8;
        func_0x000107080d5c();
        _objc_retainAutoreleasedReturnValue();
LAB_10706b040:
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar8);
      }
      else {
        func_0x000107080d44();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(param_9);
      _objc_release(puVar4);
    }
LAB_10706b090:
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(param_3);
  puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
joined_r0x00010706b0a4:
  PTR__OBJC_CLASS___NSAttributedString_1126af068 = puVar7;
  if (puVar12 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    _objc_alloc(puVar7);
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar7);
    _objc_release(puVar8);
  }
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    uVar9 = *(undefined8 *)(param_3 + 0x28);
    _objc_retain(puVar10);
    func_0x00010bd869d0(uVar9,&PTR___NSConcreteGlobalBlock_11098cf80,
                        &PTR___NSConcreteGlobalBlock_11098cfc0);
    puVar7 = puVar10;
    func_0x000108ef37e4(puVar10,uVar1,uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10706b1d4; end: 10706b24f;  */

void FUN_10706b1d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bd869d0(uVar2,&PTR___NSConcreteGlobalBlock_11098cf80,
                      &PTR___NSConcreteGlobalBlock_11098cfc0);
  uVar3 = param_2;
  func_0x000108ef37e4(param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10706b250; end: 10706b257;  */

void FUN_10706b250(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10706b258; end: 10706b4e3;  */

bool FUN_10706b258(ulong param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    bVar1 = true;
    goto LAB_10706b328;
  }
  _objc_retain(param_1);
  _objc_retain(param_2);
  uVar2 = param_1;
  func_0x00010c07d8a0();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_2;
    func_0x00010c089d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) goto LAB_10706b30c;
    uVar2 = param_1;
    func_0x00010c0cb9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c089d60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf433a0();
    _objc_release(lVar3);
    _objc_release(uVar2);
    if (uVar4 == 1) goto LAB_10706b30c;
    uVar2 = param_1;
    func_0x00010c0cb9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c089d60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf433a0();
    _objc_release(lVar3);
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (uVar4 == 0) {
      uVar2 = param_1;
      func_0x00010bf490e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c0df7c0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar3 = param_2;
      func_0x00010c089d40(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf433a0(puVar5);
      bVar1 = puVar6 == (undefined *)0x1;
      _objc_release(lVar3);
      _objc_release(puVar5);
    }
    else {
      bVar1 = false;
    }
  }
  else {
LAB_10706b30c:
    bVar1 = true;
  }
  _objc_release(param_2);
  _objc_release(param_1);
LAB_10706b328:
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10706b4e4; end: 10706b69b;  */

void FUN_10706b4e4(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c07d080();
  uVar4 = param_4;
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_4);
  }
  else {
    uVar1 = param_1;
    func_0x00010bf490e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf490e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    _objc_release(uVar3);
    if (param_2 != 0) {
      uVar3 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      _objc_release(uVar3);
    }
    func_0x00010c07d080();
    func_0x00010c0d3c80(param_4);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(puVar5);
    if (param_2 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(puVar5);
    }
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10706b69c; end: 10706b853;  */

uint FUN_10706b69c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c131d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_10706b7a8:
    lVar1 = param_1;
    func_0x00010c0cb8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c0cb8c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c071ae0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      lVar1 = param_1;
      func_0x00010c06d4a0(param_1);
      lVar2 = param_2;
      func_0x00010c06d4a0(param_2);
      uVar6 = (uint)lVar1 ^ (uint)lVar2 ^ 1;
      goto LAB_10706b828;
    }
  }
  else {
    lVar2 = param_2;
    func_0x00010c131d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) goto LAB_10706b7a8;
    lVar1 = param_1;
    func_0x00010c131d80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c131d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c086560(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0720c0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((int)lVar5 == 0) {
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    else {
      lVar3 = param_1;
      func_0x00010c07d080();
      lVar4 = param_2;
      func_0x00010c07d080();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar3 == (int)lVar4) goto LAB_10706b7a8;
    }
  }
  uVar6 = 0;
LAB_10706b828:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 10706b854; end: 10706c3cf; +[SCChatUIMessageParser batchMessageParsingDataForMessage:snapshot:conversationParticipants:conversationSubtype:is24HourRetentionEnabled:currentUserId:postSnapActionsResults:pluginManager:renderMessagesAsBubbles:messagingExperimentService:syntheticBubbleStackBreakAfterMessageIds:] */

void FUN_10706b854(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,long param_6,undefined8 param_7,long param_8,long param_9,
                  undefined8 param_10,undefined4 param_11,undefined4 param_12,undefined8 param_13,
                  undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined *puStack_568;
  int iStack_550;
  undefined8 uStack_430;
  undefined8 *puStack_428;
  undefined8 uStack_420;
  code *pcStack_418;
  undefined8 uStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined8 *puStack_3f8;
  undefined8 uStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 uStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puVar3 = &UNK_10f3f9b96;
  func_0x0001000ba800();
  uVar4 = param_5;
  func_0x000108ef57c8();
  uVar5 = param_5;
  func_0x000108ef56b4();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x000108ef55a0();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar6;
    func_0x00010706a1b8(uVar6,uVar5,param_13);
    iStack_550 = (int)uVar4;
  }
  else {
    iStack_550 = 0;
  }
  uVar18 = param_13;
  func_0x00010c269d40(param_13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02940();
  _objc_release(uVar18);
  puVar19 = PTR_PTR_1126cb3c0;
  func_0x00010c071660();
  if ((int)puVar19 == 0) {
    puStack_568 = (undefined *)0x0;
  }
  else {
    puVar19 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puStack_568 = puVar19;
    func_0x00010bf64e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar19);
  }
  puStack_1f8 = &uStack_200;
  uStack_200 = 0;
  uStack_1f0 = 0x3032000000;
  pcStack_1e8 = FUN_10706c3d0;
  uStack_1e0 = 0x10706c3e0;
  puVar19 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new();
  puStack_228 = &uStack_230;
  uStack_230 = 0;
  uStack_220 = 0x3032000000;
  pcStack_218 = FUN_10706c3d0;
  uStack_210 = 0x10706c3e0;
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_1d8 = puVar19;
  _objc_opt_new();
  puStack_258 = &uStack_260;
  uStack_260 = 0;
  uStack_250 = 0x3032000000;
  pcStack_248 = FUN_10706c3d0;
  uStack_240 = 0x10706c3e0;
  puVar19 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puStack_208 = puVar7;
  _objc_opt_new();
  puStack_288 = &uStack_290;
  uStack_290 = 0;
  uStack_280 = 0x3032000000;
  pcStack_278 = FUN_10706c3d0;
  uStack_270 = 0x10706c3e0;
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_238 = puVar19;
  _objc_opt_new();
  puStack_2b8 = &uStack_2c0;
  uStack_2c0 = 0;
  uStack_2b0 = 0x3032000000;
  pcStack_2a8 = FUN_10706c3d0;
  uStack_2a0 = 0x10706c3e0;
  puVar19 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_268 = puVar7;
  _objc_opt_new();
  puStack_2e8 = &uStack_2f0;
  uStack_2f0 = 0;
  uStack_2e0 = 0x3032000000;
  pcStack_2d8 = FUN_10706c3d0;
  uStack_2d0 = 0x10706c3e0;
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puStack_298 = puVar19;
  _objc_opt_new();
  puStack_318 = &uStack_320;
  uStack_320 = 0;
  uStack_310 = 0x3032000000;
  pcStack_308 = FUN_10706c3d0;
  uStack_300 = 0x10706c3e0;
  puVar19 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_2c8 = puVar7;
  _objc_opt_new();
  puStack_348 = &uStack_350;
  uStack_350 = 0;
  uStack_340 = 0x3032000000;
  pcStack_338 = FUN_10706c3d0;
  uStack_330 = 0x10706c3e0;
  uStack_328 = 0;
  puStack_378 = &uStack_380;
  uStack_380 = 0;
  uStack_370 = 0x3032000000;
  pcStack_368 = FUN_10706c3d0;
  uStack_360 = 0x10706c3e0;
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_2f8 = puVar19;
  _objc_opt_new();
  puVar19 = (undefined *)0x0;
  puStack_3a8 = &uStack_3b0;
  uStack_3b0 = 0;
  puStack_3c8 = &uStack_3d0;
  uStack_3d0 = 0;
  puStack_3f8 = &uStack_400;
  uStack_400 = 0;
  puStack_428 = &uStack_430;
  uStack_430 = 0;
  uStack_3a0 = 0x3032000000;
  pcStack_398 = FUN_10706c3d0;
  uStack_390 = 0x10706c3e0;
  uStack_388 = 0;
  uStack_3c0 = 0x2020000000;
  uStack_3b8 = 0;
  uStack_3f0 = 0x3032000000;
  pcStack_3e8 = FUN_10706c3d0;
  uStack_3e0 = 0x10706c3e0;
  uStack_3d8 = 0;
  uStack_420 = 0x3032000000;
  pcStack_418 = FUN_10706c3d0;
  uStack_410 = 0x10706c3e0;
  puStack_358 = puVar7;
  if (iStack_550 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_8);
    puVar19 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    lVar17 = param_3;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar17;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar20 = *plStack_1c0;
      do {
        lVar22 = 0;
        do {
          if (*plStack_1c0 != lVar20) {
            _objc_enumerationMutation(lVar17);
          }
          uVar21 = *(ulong *)(lStack_1c8 + lVar22 * 8);
          uVar4 = uVar21;
          func_0x00010c06d7e0();
          if ((uVar4 & 1) != 0) {
LAB_10706bcf0:
            func_0x00010bf490e0(uVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar19);
            _objc_release(uVar21);
            goto LAB_10706bd18;
          }
          uVar4 = uVar21;
          func_0x00010c07f920();
          if ((uVar4 & 1) == 0) {
            uVar4 = uVar21;
            func_0x00010c0cb8c0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar4;
            func_0x00010c0720c0();
            _objc_release(uVar4);
            if ((uVar9 & 1) != 0) goto LAB_10706bcf0;
            func_0x00010bf490e0(uVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar19);
            _objc_release(uVar21);
          }
          lVar22 = lVar22 + 1;
        } while (lVar8 != lVar22);
        lVar8 = lVar17;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
LAB_10706bd18:
    _objc_release(lVar17);
    _objc_release(param_8);
    _objc_release(param_3);
  }
  puStack_408 = puVar19;
  if (param_9 != 0) {
    uVar18 = param_13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar18;
    func_0x00010c0e9060();
    _objc_release(uVar18);
    lVar8 = param_3;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar8;
    func_0x00010bf52a60();
    lVar17 = lRam0000000000000000;
    if (lVar20 != 0) {
      uVar1 = ((uint)(8 < param_6 - 1U) | 0x1e7U >> (ulong)((uint)(param_6 - 1U) & 0x1f) ^ 1) &
              (uint)uVar11;
      do {
        lVar22 = 0;
        do {
          if (lRam0000000000000000 != lVar17) {
            _objc_enumerationMutation(lVar8);
          }
          uVar21 = *(ulong *)(lVar22 * 8);
          uVar4 = uVar21;
          func_0x00010bf490e0(uVar21);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = param_9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar4);
          if (lVar10 != 0) {
            if (param_8 != 0) {
              uVar4 = uVar21;
              func_0x00010c07d940();
              uVar2 = uVar1;
              if ((uVar4 & 1) == 0) {
                uVar4 = uVar21;
                func_0x00010c07bc00();
                uVar2 = uVar1 & (uint)uVar4;
              }
              if ((uVar2 & 1) != 0) goto LAB_10706be54;
            }
            func_0x00010bf490e0();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = puStack_3f8[5];
            puStack_3f8[5] = uVar21;
            _objc_release(uVar18);
            goto LAB_10706bea4;
          }
LAB_10706be54:
          lVar22 = lVar22 + 1;
        } while (lVar20 != lVar22);
        lVar20 = lVar8;
        func_0x00010bf52a60();
      } while (lVar20 != 0);
    }
LAB_10706bea4:
    _objc_release(lVar8);
  }
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(puStack_568);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_14);
  func_0x00010bf97e80(param_3);
  uVar18 = puStack_378[5];
  func_0x00010c0ba440();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126d4400;
  _objc_alloc(PTR_PTR_1126d4400);
  uVar11 = puStack_1f8[5];
  func_0x00010bf51e00(uVar11);
  uVar12 = puStack_228[5];
  func_0x00010bf51e00(uVar12);
  uVar13 = puStack_258[5];
  func_0x00010bf51e00(uVar13);
  uVar14 = puStack_2e8[5];
  func_0x00010bf51e00(uVar14);
  uVar15 = puStack_288[5];
  func_0x00010bf51e00(uVar15);
  uVar16 = puStack_318[5];
  func_0x00010bf51e00(uVar16);
  func_0x00010c02b7c0(puVar19);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar18);
  _objc_release(param_14);
  _objc_release(param_9);
  _objc_release(param_10);
  _objc_release(puStack_568);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_430,8);
  _objc_release(puStack_408);
  __Block_object_dispose(&uStack_400,8);
  _objc_release(uStack_3d8);
  __Block_object_dispose(&uStack_3d0,8);
  __Block_object_dispose(&uStack_3b0,8);
  _objc_release(uStack_388);
  __Block_object_dispose(&uStack_380,8);
  _objc_release(puStack_358);
  __Block_object_dispose(&uStack_350,8);
  _objc_release(uStack_328);
  __Block_object_dispose(&uStack_320,8);
  _objc_release(puStack_2f8);
  __Block_object_dispose(&uStack_2f0,8);
  _objc_release(puStack_2c8);
  __Block_object_dispose(&uStack_2c0,8);
  _objc_release(puStack_298);
  __Block_object_dispose(&uStack_290,8);
  _objc_release(puStack_268);
  __Block_object_dispose(&uStack_260,8);
  _objc_release(puStack_238);
  __Block_object_dispose(&uStack_230,8);
  _objc_release(puStack_208);
  __Block_object_dispose(&uStack_200,8);
  _objc_release(puStack_1d8);
  _objc_release(puStack_568);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x0001000e2a84(puVar3);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_400,8);
    __Block_object_dispose(&uStack_3d0,8);
    __Block_object_dispose(&uStack_3b0,8);
    __Block_object_dispose(&uStack_380,8);
    __Block_object_dispose(&uStack_350,8);
    __Block_object_dispose(&uStack_320,8);
    __Block_object_dispose(&uStack_2f0,8);
    __Block_object_dispose(&uStack_2c0,8);
    __Block_object_dispose(&uStack_290,8);
    __Block_object_dispose(&uStack_260,8);
    __Block_object_dispose(&uStack_230,8);
    lVar17 = 8;
    __Block_object_dispose(&uStack_200);
    func_0x0001000e2a84(puVar3);
    __Unwind_Resume();
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar17 + 0x28);
    *(undefined8 *)(lVar17 + 0x28) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 10706c3d0; end: 10706c3e7;  */

void FUN_10706c3d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10706c3e8; end: 10706db3b;  */

void FUN_10706c3e8(double param_1,long param_2,undefined *param_3,long param_4)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  long lVar23;
  undefined *puVar24;
  undefined8 uVar25;
  uint uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  uint uVar30;
  double dVar31;
  int iStack_a8;
  
  _objc_retain(param_3);
  puVar8 = param_3;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c0720c0();
  if ((int)puVar9 == 0) {
    _objc_release(puVar8);
  }
  else {
    puVar9 = param_3;
    func_0x00010c078120();
    if ((int)puVar9 == 0) {
      _objc_release(puVar8);
    }
    else {
      puVar9 = param_3;
      func_0x00010c07d080();
      _objc_release(puVar8);
      if (((ulong)puVar9 & 1) != 0) goto LAB_10706c494;
    }
    *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x60) + 8) + 0x18) = 1;
  }
LAB_10706c494:
  lVar10 = *(long *)(param_2 + 0x20);
  func_0x00010bf529e0();
  cVar1 = *(char *)(param_2 + 0xc0);
  cVar2 = *(char *)(param_2 + 0xc1);
  bVar3 = *(byte *)(*(long *)(*(long *)(param_2 + 0x60) + 8) + 0x18);
  uVar12 = *(undefined8 *)(param_2 + 0x28);
  uVar25 = *(undefined8 *)(param_2 + 0x30);
  lVar23 = *(long *)(param_2 + 0x38);
  _objc_retain(param_3);
  _objc_retain(uVar12);
  _objc_retain(uVar25);
  _objc_retain(lVar23);
  if (cVar2 == '\0' && cVar1 == '\0') {
    puVar8 = param_3;
    func_0x00010c0cb9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0812c0();
    _objc_release(puVar8);
    if (((ulong)puVar9 & 1) == 0) goto LAB_10706c50c;
LAB_10706c558:
    uVar26 = 1;
  }
  else {
LAB_10706c50c:
    if (lVar23 == 0) {
      if ((bVar3 & 1) != 0) goto LAB_10706c558;
      _objc_retain(param_3);
      _objc_retain(uVar25);
      puVar8 = param_3;
      func_0x00010c07ea80();
      if (((((int)puVar8 == 0) ||
           (puVar8 = param_3, func_0x00010c07d940(), ((ulong)puVar8 & 1) != 0)) ||
          (puVar8 = param_3, func_0x00010c07c1e0(), (int)puVar8 == 0)) ||
         (puVar8 = param_3, func_0x00010c0791e0(), (int)puVar8 != 0)) {
        _objc_release(uVar25);
        _objc_release(param_3);
      }
      else {
        puVar8 = param_3;
        func_0x00010bfdbd60();
        _objc_release(uVar25);
        _objc_release(param_3);
        if ((int)puVar8 == 0) goto LAB_10706c558;
      }
      if (param_4 == lVar10 + -1) {
        uVar11 = uVar12;
        func_0x00010c08b1a0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_3;
        func_0x00010bfddde0();
        _objc_release(uVar11);
        if (((ulong)puVar8 & 1) != 0) goto LAB_10706c558;
      }
      puVar8 = param_3;
      FUN_10706b258(param_3,uVar12);
      uVar26 = (uint)puVar8;
    }
    else {
      _objc_retain(lVar23);
      puVar8 = param_3;
      func_0x00010c0cb9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf433a0();
      _objc_release(lVar23);
      _objc_release(puVar8);
      uVar26 = (uint)(puVar9 != (undefined *)0xffffffffffffffff);
    }
  }
  _objc_release(lVar23);
  _objc_release(uVar25);
  _objc_release(uVar12);
  _objc_release(param_3);
  puVar8 = param_3;
  if (*(char *)(param_2 + 0xc2) == '\x01') {
    lVar23 = *(long *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + 0x28);
    func_0x00010bf529e0();
    if (lVar23 == 0) goto LAB_10706c6a0;
    uVar22 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x68) + 8) + 0x28);
    puVar9 = param_3;
    func_0x00010bf490e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(puVar9);
    func_0x00010bf490e0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar22 & 1) != 0) goto LAB_10706c6b8;
LAB_10706c698:
    uVar26 = 0;
  }
  else {
LAB_10706c6a0:
    func_0x00010bf490e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar26 == 0) goto LAB_10706c698;
LAB_10706c6b8:
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x70) + 8) + 0x28));
    puVar9 = param_3;
    func_0x00010bf4df40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    func_0x000107d60b58();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    lVar23 = *(long *)(*(long *)(*(long *)(param_2 + 0x78) + 8) + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar23 == 0) {
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x78) + 8) + 0x28));
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x78) + 8) + 0x28);
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c0df780(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x78) + 8) + 0x28));
      _objc_release(puVar9);
      _objc_release(uVar12);
    }
    _objc_release(puVar13);
    uVar26 = 1;
  }
  uVar12 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_3;
  FUN_10706dddc(param_3,uVar12);
  uVar4 = (uint)puVar9;
  _objc_release(uVar12);
  if (param_4 == 0) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x80) + 8) + 0x28));
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x88) + 8) + 0x28));
    if (((ulong)puVar9 & 1) == 0) {
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x90) + 8) + 0x28));
      puVar9 = param_3;
      func_0x00010c07d080();
      if ((int)puVar9 != 0) {
        puVar9 = param_3;
        FUN_10706b4e4(param_3,0,0,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x90) + 8) + 0x28));
        _objc_retainAutoreleasedReturnValue();
        lVar23 = *(long *)(*(long *)(param_2 + 0x90) + 8);
        uVar12 = *(undefined8 *)(lVar23 + 0x28);
        *(undefined **)(lVar23 + 0x28) = puVar9;
        _objc_release(uVar12);
      }
      lVar23 = *(long *)(*(long *)(param_2 + 0x98) + 8);
      _objc_retain(puVar8);
      uVar12 = *(undefined8 *)(lVar23 + 0x28);
      *(undefined **)(lVar23 + 0x28) = puVar8;
      _objc_release(uVar12);
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0xa0) + 8) + 0x28));
    }
    lVar23 = *(long *)(*(long *)(param_2 + 0xa8) + 8);
    _objc_retain(puVar8);
    uVar12 = *(undefined8 *)(lVar23 + 0x28);
    *(undefined **)(lVar23 + 0x28) = puVar8;
    _objc_release(uVar12);
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c0309a0();
    uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0xb0) + 8) + 0x28);
    puVar15 = param_3;
    func_0x00010bf490e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar12);
    goto LAB_10706d6d8;
  }
  puVar13 = *(undefined **)(param_2 + 0x20);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(puVar13);
  puVar14 = param_3;
  func_0x00010c0cb9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar13;
  func_0x00010c0cb9a0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  func_0x00010c070300();
  _objc_release(puVar28);
  _objc_release(puVar14);
  if (((ulong)puVar27 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x80) + 8) + 0x28));
  }
  uVar5 = (uint)*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x70) + 8) + 0x28);
  func_0x00010bf4b900();
  uVar12 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  FUN_10706dddc(puVar13,uVar12);
  _objc_release(uVar12);
  if (*(long *)(param_2 + 0x38) == 0) {
    iVar6 = 0;
LAB_10706ca44:
    iVar7 = 0;
  }
  else {
    puVar28 = param_3;
    FUN_10706b258(param_3,*(undefined8 *)(param_2 + 0x28));
    iVar6 = (int)puVar28;
    if (*(long *)(param_2 + 0x38) == 0) goto LAB_10706ca44;
    puVar28 = puVar13;
    FUN_10706b258(puVar13,*(undefined8 *)(param_2 + 0x28));
    iVar7 = (int)puVar28;
  }
  puVar28 = *(undefined **)(param_2 + 0x48);
  _objc_retain(param_3);
  _objc_retain(puVar13);
  _objc_retain(puVar28);
  if (uVar4 == (uint)puVar14) {
    puVar21 = puVar13;
    FUN_1070b5e80();
    puVar29 = param_3;
    if ((int)puVar21 == 0) {
LAB_10706cb68:
      puVar21 = param_3;
      func_0x00010bf9fe80();
      if ((((uint)puVar21 | (uint)puVar27 ^ 1) & 1) == 0) {
        puVar27 = param_3;
        func_0x00010c0cb8c0();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar13;
        func_0x00010c0cb8c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar27);
        _objc_retain(puVar21);
        if (puVar27 == puVar21) {
          iStack_a8 = 1;
        }
        else if (puVar21 == (undefined *)0x0) {
          iStack_a8 = 0;
        }
        else {
          puVar24 = puVar27;
          func_0x00010c071ae0();
          iStack_a8 = (int)puVar24;
        }
        _objc_release(puVar21);
        _objc_release(puVar27);
        _objc_release(puVar21);
        _objc_release(puVar27);
        uVar30 = 0;
        if (((iVar6 != iVar7) || (((uVar26 ^ uVar5) & 1) != 0)) || (uVar4 == 0 && iStack_a8 == 0))
        goto LAB_10706cb9c;
        func_0x00010c11ebc0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar29 != (undefined *)0x0) {
          uVar30 = 0;
          goto LAB_10706cb94;
        }
        puVar27 = puVar13;
        func_0x00010c11ebc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar27 == (undefined *)0x0) {
          _objc_retain(puVar13);
          _objc_retain(puVar28);
          puVar29 = puVar13;
          if (puVar28 == (undefined *)0x0) {
            uVar30 = 1;
            puVar27 = (undefined *)0x0;
          }
          else {
            puVar21 = puVar13;
            func_0x00010bf490e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar27 = puVar28;
            if (puVar21 == (undefined *)0x0) {
              uVar30 = 1;
            }
            else {
              puVar21 = puVar13;
              func_0x00010bf490e0(puVar13);
              _objc_retainAutoreleasedReturnValue();
              puVar24 = puVar28;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar21);
              uVar30 = (uint)(puVar24 == (undefined *)0x0);
              _objc_release(puVar24);
            }
          }
          goto LAB_10706cb90;
        }
      }
      goto LAB_10706cb7c;
    }
    _objc_retain(param_3);
    _objc_retain(puVar13);
    puVar21 = param_3;
    func_0x00010c078120();
    if (((int)puVar21 != 0) && (puVar21 = puVar13, func_0x00010c078120(), (int)puVar21 != 0)) {
      puVar21 = param_3;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar21;
      func_0x00010bf24ae0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar24;
      func_0x00010bf24a40();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar13;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar17;
      func_0x00010bf24ae0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar18;
      func_0x00010bf24a40();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar16;
      func_0x00010c071ae0();
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar24);
      _objc_release(puVar21);
      _objc_release(puVar13);
      _objc_release(param_3);
      if ((int)puVar20 == 0) goto LAB_10706cb7c;
      goto LAB_10706cb68;
    }
    uVar30 = 0;
    puVar27 = puVar13;
LAB_10706cb90:
    _objc_release(puVar27);
LAB_10706cb94:
    _objc_release(puVar29);
  }
  else {
LAB_10706cb7c:
    uVar30 = 0;
  }
LAB_10706cb9c:
  _objc_release(puVar28);
  _objc_release(puVar13);
  _objc_release(param_3);
  if (*(char *)(param_2 + 0xc3) == '\x01') {
    lVar23 = *(long *)(param_2 + 0x50);
    func_0x00010bf529e0();
    if ((((uint)(lVar23 == 0) | uVar30 ^ 0xffffffff | uVar4 | (uint)puVar14) & 1) == 0) {
      uVar26 = (uint)*(undefined8 *)(param_2 + 0x50);
      func_0x00010bf4b900();
      uVar26 = uVar26 ^ 1;
    }
    else {
      uVar26 = 1;
    }
  }
  else {
    uVar26 = 1;
  }
  uVar30 = uVar30 & uVar26;
  if (uVar30 == 1 && ((ulong)puVar9 & 1) == 0) {
    puVar9 = param_3;
    func_0x00010c0cb9a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar13;
    func_0x00010c0cb9a0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar9);
    _objc_release(puVar27);
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0xb8) + 8) + 0x28));
    _objc_release(puVar9);
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0xa0) + 8) + 0x28));
  }
  puVar28 = *(undefined **)(*(long *)(*(long *)(param_2 + 0xb0) + 8) + 0x28);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar28;
  func_0x00010bf529e0();
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  puVar21 = *(undefined **)(param_2 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(puVar13);
  _objc_retain(uVar12);
  _objc_retain(puVar21);
  puVar27 = param_3;
  FUN_1070b5f60(param_3,uVar12);
  puVar14 = puVar13;
  FUN_1070b5f60(puVar13,uVar12);
  if (uVar30 == 0) {
LAB_10706cf14:
    uVar26 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_retain(puVar13);
    puVar29 = param_3;
    func_0x00010c27dd80();
    if (((puVar29 == (undefined *)0x3) &&
        (puVar29 = param_3, func_0x00010c075ee0(), ((ulong)puVar29 & 1) == 0)) &&
       (puVar29 = puVar13, func_0x00010c075ee0(), ((ulong)puVar29 & 1) == 0)) {
      puVar29 = param_3;
      func_0x00010c07d380();
      puVar24 = puVar13;
      func_0x00010c07d380();
      if ((int)puVar29 != (int)puVar24) {
LAB_10706cf90:
        uVar26 = 0;
        puVar24 = puVar13;
        puVar29 = param_3;
        goto LAB_10706d378;
      }
      puVar29 = param_3;
      func_0x00010c151020();
      puVar24 = puVar13;
      func_0x00010c151020();
      _objc_release(puVar13);
      _objc_release(param_3);
      if (puVar29 == puVar24) goto LAB_10706cd90;
      uVar26 = 0;
    }
    else {
      _objc_release(puVar13);
      _objc_release(param_3);
LAB_10706cd90:
      _objc_retain(param_3);
      _objc_retain(puVar13);
      puVar29 = param_3;
      func_0x00010c27dd80();
      if (puVar29 == (undefined *)0x16) {
        puVar29 = puVar13;
        func_0x00010c27dd80();
        if (puVar29 != (undefined *)0x16) goto LAB_10706cf90;
        puVar29 = param_3;
        func_0x00010bf4df40();
        _objc_retainAutoreleasedReturnValue();
        puVar24 = puVar29;
        func_0x00010c253320();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar24;
        func_0x00010c0cb4a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar24);
        _objc_release(puVar29);
        puVar29 = puVar13;
        func_0x00010bf4df40();
        _objc_retainAutoreleasedReturnValue();
        puVar24 = puVar29;
        func_0x00010c253320();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar24;
        func_0x00010c0cb4a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar24);
        _objc_release(puVar29);
        puVar29 = puVar16;
        func_0x00010c0cba00();
        puVar24 = puVar17;
        func_0x00010c0cba00();
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar13);
        _objc_release(param_3);
        if ((int)puVar29 != (int)puVar24) goto LAB_10706cf14;
      }
      else {
        _objc_release(puVar13);
        _objc_release(param_3);
      }
      puVar29 = param_3;
      func_0x00010c27dd80();
      puVar24 = puVar13;
      func_0x00010c27dd80();
      if (puVar29 != puVar24) goto LAB_10706cf14;
      _objc_retain(puVar21);
      _objc_retain(puVar13);
      puVar24 = puVar21;
      func_0x00010c101bc0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar24 == (undefined *)0x0) {
        puVar29 = (undefined *)0x0;
      }
      else {
        puVar16 = puVar21;
        func_0x00010c101bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar29 = PTR_DAT_1126a53f0;
        if (puVar24 == puVar16) {
          _objc_retain(puVar24);
          puVar17 = puVar24;
          func_0x00010010fab4(puVar24,puVar29);
          puVar29 = puVar24;
          if ((int)puVar17 == 0) {
            puVar29 = (undefined *)0x0;
          }
          _objc_retain(puVar29);
          _objc_release(puVar24);
        }
        else {
          puVar29 = (undefined *)0x0;
        }
        _objc_release(puVar16);
      }
      _objc_release(puVar24);
      _objc_release(puVar13);
      _objc_release(puVar21);
      if (puVar29 == (undefined *)0x0) {
        _objc_retain(puVar21);
        _objc_retain(puVar13);
        puVar29 = puVar21;
        func_0x00010c101bc0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar29 == (undefined *)0x0) {
          puVar24 = (undefined *)0x0;
        }
        else {
          puVar16 = puVar21;
          func_0x00010c101bc0();
          _objc_retainAutoreleasedReturnValue();
          puVar24 = PTR_DAT_1126a53e8;
          if (puVar29 == puVar16) {
            _objc_retain(puVar29);
            puVar17 = puVar29;
            func_0x00010010fab4(puVar29,puVar24);
            puVar24 = puVar29;
            if ((int)puVar17 == 0) {
              puVar24 = (undefined *)0x0;
            }
            _objc_retain(puVar24);
            _objc_release(puVar29);
          }
          else {
            puVar24 = (undefined *)0x0;
          }
          _objc_release(puVar16);
        }
        _objc_release(puVar29);
        _objc_release(puVar13);
        _objc_release(puVar21);
        if (puVar24 == (undefined *)0x0) {
          if (((puVar27 == puVar14) && (puVar27 + -1 < (undefined *)0x4)) &&
             (puVar9 < *(undefined **)(&UNK_10de1e938 + (long)(puVar27 + -1) * 8))) {
            puVar9 = param_3;
            if ((long)puVar27 < 3) {
              if (puVar27 != (undefined *)0x1) {
                uVar26 = 1;
                puVar24 = (undefined *)0x0;
                puVar29 = (undefined *)0x0;
                goto LAB_10706d378;
              }
              func_0x00010beeedc0();
              _objc_retainAutoreleasedReturnValue();
              puVar27 = puVar13;
              func_0x00010beeedc0(puVar13);
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar9;
              func_0x00010c071ae0();
              uVar26 = (uint)puVar14;
              _objc_release(puVar27);
LAB_10706db30:
              _objc_release(puVar9);
            }
            else {
              if (puVar27 != (undefined *)0x3) {
                func_0x00010c0c6560();
                _objc_retainAutoreleasedReturnValue();
                puVar27 = puVar9;
                func_0x00010c14ba20();
                _objc_retainAutoreleasedReturnValue();
                puVar14 = puVar13;
                func_0x00010c0c6560(puVar13);
                _objc_retainAutoreleasedReturnValue();
                puVar29 = puVar14;
                func_0x00010c14ba20();
                _objc_retainAutoreleasedReturnValue();
                puVar24 = puVar27;
                func_0x00010c0720c0();
                uVar26 = (uint)puVar24;
                _objc_release(puVar29);
                _objc_release(puVar14);
                _objc_release(puVar27);
                goto LAB_10706db30;
              }
              FUN_10706b69c(param_3,puVar13);
              uVar26 = (uint)puVar9;
            }
            puVar24 = (undefined *)0x0;
            goto LAB_10706d2e0;
          }
          uVar26 = 0;
          puVar24 = (undefined *)0x0;
          puVar29 = (undefined *)0x0;
        }
        else {
          puVar9 = puVar24;
          func_0x00010bf2ce60();
          uVar26 = (uint)puVar9;
LAB_10706d2e0:
          puVar29 = (undefined *)0x0;
        }
      }
      else {
        _objc_retain(param_3);
        _objc_retain(puVar13);
        _objc_retain(puVar29);
        puVar27 = puVar29;
        func_0x00010c0c2ee0();
        if (puVar9 < puVar27) {
          puVar9 = param_3;
          func_0x00010c120dc0();
          _objc_retainAutoreleasedReturnValue();
          puVar27 = puVar9;
          func_0x00010bf529e0();
          if (puVar27 != (undefined *)0x0) {
            _objc_release(puVar9);
            goto LAB_10706d058;
          }
          puVar27 = puVar13;
          func_0x00010c120dc0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar27;
          func_0x00010bf529e0();
          _objc_release(puVar27);
          _objc_release(puVar9);
          if (puVar14 == (undefined *)0x0) {
            puVar9 = param_3;
            func_0x00010c131d80();
            _objc_retainAutoreleasedReturnValue();
            if (puVar9 != (undefined *)0x0) {
              _objc_release();
LAB_10706d8a8:
              puVar9 = param_3;
              func_0x00010c131d80();
              _objc_retainAutoreleasedReturnValue();
              puVar27 = puVar9;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar13;
              func_0x00010c131d80();
              _objc_retainAutoreleasedReturnValue();
              puVar24 = puVar14;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(puVar27);
              _objc_retain(puVar24);
              if (puVar27 == puVar24) {
                _objc_release(puVar24);
                _objc_release(puVar27);
                _objc_release(puVar24);
                _objc_release(puVar14);
                _objc_release(puVar27);
                _objc_release(puVar9);
                goto LAB_10706d998;
              }
              if (puVar24 != (undefined *)0x0) {
                puVar16 = puVar27;
                func_0x00010c071ae0();
                _objc_release(puVar24);
                _objc_release(puVar27);
                _objc_release(puVar24);
                _objc_release(puVar14);
                _objc_release(puVar27);
                _objc_release(puVar9);
                if (((ulong)puVar16 & 1) == 0) goto LAB_10706d244;
                goto LAB_10706d998;
              }
              _objc_release();
              _objc_release(puVar14);
              _objc_release(puVar27);
LAB_10706daa8:
              _objc_release(puVar9);
              goto LAB_10706d244;
            }
            puVar9 = puVar13;
            func_0x00010c131d80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar9 != (undefined *)0x0) goto LAB_10706d8a8;
LAB_10706d998:
            puVar9 = param_3;
            func_0x00010c06e660();
            if ((((ulong)puVar9 & 1) != 0) ||
               (puVar9 = puVar13, func_0x00010c06e660(), (int)puVar9 != 0)) {
              puVar9 = param_3;
              func_0x00010bf37480();
              _objc_retainAutoreleasedReturnValue();
              puVar27 = puVar13;
              func_0x00010bf37480();
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(puVar9);
              _objc_retain(puVar27);
              if (puVar9 == puVar27) {
                _objc_release(puVar27);
                _objc_release(puVar9);
                _objc_release(puVar27);
                _objc_release(puVar9);
              }
              else {
                if (puVar27 == (undefined *)0x0) {
                  _objc_release();
                  goto LAB_10706daa8;
                }
                puVar14 = puVar9;
                func_0x00010c071ae0();
                _objc_release(puVar27);
                _objc_release(puVar9);
                _objc_release(puVar27);
                _objc_release(puVar9);
                if (((ulong)puVar14 & 1) == 0) goto LAB_10706d244;
              }
            }
            puVar9 = puVar29;
            func_0x00010bf2d8c0();
            uVar26 = (uint)puVar9;
          }
          else {
LAB_10706d244:
            uVar26 = 0;
          }
        }
        else {
LAB_10706d058:
          uVar26 = 0;
        }
        _objc_release(puVar29);
        _objc_release(puVar13);
        puVar24 = param_3;
      }
LAB_10706d378:
      _objc_release(puVar24);
      _objc_release(puVar29);
    }
  }
  _objc_release(puVar21);
  _objc_release(uVar12);
  _objc_release(puVar13);
  _objc_release(param_3);
  _objc_release(puVar21);
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0xb8) + 8) + 0x28);
  func_0x00010c0e00e0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_2 + 0x40);
  _objc_retain(param_3);
  _objc_retain(puVar13);
  _objc_retain(uVar12);
  _objc_retain(uVar25);
  puVar9 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar9;
  FUN_1070b32c8();
  _objc_release(puVar9);
  if (((uVar4 | (uint)puVar27) & 1) == 0) {
    puVar9 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar9;
    func_0x00010bf7b4a0();
    _objc_release(puVar9);
    if (((ulong)puVar27 & 1) == 0 && uVar30 == 1) {
      puVar9 = puVar13;
      func_0x00010c120dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar27 = puVar9;
      func_0x00010bf529e0();
      _objc_release(puVar9);
      if (puVar27 == (undefined *)0x0) {
        puVar9 = param_3;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar27 = puVar9;
        func_0x00010c071240();
        _objc_release(puVar9);
        if ((((ulong)puVar27 & 1) == 0) &&
           (((uVar26 & 1) != 0 ||
            (puVar9 = param_3, FUN_1070688b0(param_3,uVar25), ((ulong)puVar9 & 1) == 0)))) {
          puVar9 = param_3;
          func_0x00010c0cb9a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar27 = puVar13;
          func_0x00010c0cb9a0(puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f380(puVar9);
          _objc_release(puVar27);
          _objc_release(puVar9);
          dVar31 = 60.0;
          if (60.0 < param_1) {
            func_0x00010bf885a0(uVar12);
            puVar27 = (undefined *)(ulong)(420.0 < dVar31);
            goto LAB_10706d42c;
          }
          _objc_release(uVar25);
          _objc_release(uVar12);
          _objc_release(puVar13);
          _objc_release(param_3);
          _objc_release(uVar12);
          goto joined_r0x00010706d85c;
        }
      }
    }
    _objc_release(uVar25);
    _objc_release(uVar12);
    _objc_release(puVar13);
    _objc_release(param_3);
    _objc_release(uVar12);
LAB_10706d528:
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x88) + 8) + 0x28));
    puVar9 = puVar8;
    func_0x00010706b420(puVar8,1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x90) + 8) + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar23 = *(long *)(*(long *)(param_2 + 0x90) + 8);
    uVar12 = *(undefined8 *)(lVar23 + 0x28);
    *(undefined **)(lVar23 + 0x28) = puVar9;
    _objc_release(uVar12);
    puVar9 = puVar15;
    func_0x00010706b420(puVar15,4,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x90) + 8) + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar23 = *(long *)(*(long *)(param_2 + 0x90) + 8);
    uVar12 = *(undefined8 *)(lVar23 + 0x28);
    *(undefined **)(lVar23 + 0x28) = puVar9;
    _objc_release(uVar12);
    lVar23 = *(long *)(*(long *)(param_2 + 0x98) + 8);
    _objc_retain(puVar8);
    uVar12 = *(undefined8 *)(lVar23 + 0x28);
    *(undefined **)(lVar23 + 0x28) = puVar8;
    _objc_release(uVar12);
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0xa0) + 8) + 0x28));
    if (uVar4 == 0) goto LAB_10706d460;
LAB_10706d5e4:
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x88) + 8) + 0x28));
    puVar9 = puVar15;
    func_0x00010706b420(puVar15,4,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x90) + 8) + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar23 = *(long *)(*(long *)(param_2 + 0x90) + 8);
    uVar12 = *(undefined8 *)(lVar23 + 0x28);
    *(undefined **)(lVar23 + 0x28) = puVar9;
    _objc_release(uVar12);
    if (uVar26 != 0) goto LAB_10706d464;
LAB_10706d634:
    lVar23 = *(long *)(*(long *)(param_2 + 0xa8) + 8);
    _objc_retain(puVar8);
    uVar12 = *(undefined8 *)(lVar23 + 0x28);
    *(undefined **)(lVar23 + 0x28) = puVar8;
    _objc_release(uVar12);
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c0309a0();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0xb0) + 8) + 0x28));
    _objc_release(puVar9);
  }
  else {
LAB_10706d42c:
    _objc_release(uVar25);
    _objc_release(uVar12);
    _objc_release(puVar13);
    _objc_release(param_3);
    _objc_release(uVar12);
    if (((ulong)puVar27 & 1) != 0) goto LAB_10706d528;
joined_r0x00010706d85c:
    if (uVar4 != 0) goto LAB_10706d5e4;
LAB_10706d460:
    if (uVar26 == 0) goto LAB_10706d634;
LAB_10706d464:
    func_0x00010befa120(puVar28);
  }
  puVar9 = param_3;
  FUN_10706b4e4(param_3,puVar13,uVar30,
                *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x90) + 8) + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar23 = *(long *)(*(long *)(param_2 + 0x90) + 8);
  uVar12 = *(undefined8 *)(lVar23 + 0x28);
  *(undefined **)(lVar23 + 0x28) = puVar9;
  _objc_release(uVar12);
  _objc_release(puVar28);
LAB_10706d6d8:
  _objc_release(puVar15);
  _objc_release(puVar13);
  if (param_4 == lVar10 + -1) {
    puVar9 = puVar8;
    func_0x00010706b420(puVar8,4,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x90) + 8) + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(*(long *)(param_2 + 0x90) + 8);
    uVar12 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined **)(lVar10 + 0x28) = puVar9;
    _objc_release(uVar12);
  }
  if ((uVar4 != 0) && (*(char *)(param_2 + 0xc3) == '\x01')) {
    puVar9 = puVar8;
    func_0x00010706b420(puVar8,0xffffffffffffffff,
                        *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x90) + 8) + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(*(long *)(param_2 + 0x90) + 8);
    uVar12 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined **)(lVar10 + 0x28) = puVar9;
    _objc_release(uVar12);
  }
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10706db3c; end: 10706dd4b;  */

void FUN_10706db3c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  __Block_object_assign(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
  __Block_object_assign(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),8);
  __Block_object_assign(param_1 + 0x90,*(undefined8 *)(param_2 + 0x90),8);
  __Block_object_assign(param_1 + 0x98,*(undefined8 *)(param_2 + 0x98),8);
  __Block_object_assign(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa0),8);
  __Block_object_assign(param_1 + 0xa8,*(undefined8 *)(param_2 + 0xa8),8);
  __Block_object_assign(param_1 + 0xb0,*(undefined8 *)(param_2 + 0xb0),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0xb8,*(undefined8 *)(param_2 + 0xb8),8);
  return;
}



/* Entry: 10706dd4c; end: 10706ddbb;  */

void FUN_10706dd4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d43f8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010c018960(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10706ddbc; end: 10706dddb;  */

void FUN_10706ddbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x2c);
  return;
}



/* Entry: 10706dddc; end: 10706df9b;  */

ulong FUN_10706dddc(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain();
  func_0x00010c101bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010010fab4();
  lVar1 = param_2;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 == 0) {
    uVar3 = param_1;
    func_0x00010c07f920(param_1);
  }
  else {
    lVar2 = param_2;
    func_0x00010c101d20(param_2);
    uVar3 = (ulong)(lVar2 == 1);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10706df9c; end: 10706e06f;  */

void FUN_10706df9c(int param_1,int param_2,int param_3,int param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d4330;
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else if (param_4 == 0) {
    uVar3 = 0x4010000000000000;
    if (param_3 == 0) {
      uVar3 = 0x4020000000000000;
    }
    uVar4 = 0x4000000000000000;
    if (param_2 == 0) {
      uVar4 = uVar3;
    }
    uVar3 = 0;
    if ((param_5 & 1) != 0) {
      uVar3 = uVar4;
    }
    uVar5 = 0;
    if ((param_5 & 4) != 0) {
      uVar5 = uVar4;
    }
    puVar1 = PTR_PTR_1126d4328;
    _objc_alloc(PTR_PTR_1126d4328);
    func_0x00010c054260(uVar3,0x4020000000000000,uVar5,0x4020000000000000);
    func_0x00010bfb23a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    func_0x00010c1283a0(0x3fe0000000000000,0x4030000000000000,PTR_PTR_1126d4330);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10706e070; end: 10706e367;  */

void FUN_10706e070(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf490e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c130420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    lVar1 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf5d060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar1 = param_3;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf490e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bf583e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(lVar1);
      func_0x00010c1c2b40(0,0x4020000000000000,0,0x4020000000000000,lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10706e368; end: 10706f9e7; +[SCChatUIViewModelFactory viewModelForMessages:conversation:conversationSubtypeMetadata:conversationParticipants:currentUserId:shouldShowBelowTheFold:shouldShowDateHeader:shouldShowTimestamp:showsFoldIndicator:isUnseenMessage:senderHeaderCellIdentifier:cornerMask:animationData:snapchattersData:postSnapActionsParams:currentUserSnapchatter:reactionMetadata:pluginManager:accessoryPluginManager:circumstanceEngine:graphene:valdiRuntimeProvider:snapCountDownManager:connectivityMonitor:friendmojiPresenter:valdiContextCreator:reactableViewModelGenerator:quotedMessageViewModelFactory:messagingExperimentService:chatEligibilityProvider:urlSpamProvider:normalizedSpamCheckURLFinder:enableUpdateForUnknownReleasePolicy:plusFeatureGating:groupChatAddButtonViewModelProvider:groupsCustomColorsFetcher:polaroidViewTransitionResolver:] */

/* WARNING: Removing unreachable block (ram,0x00010706f35c) */

void FUN_10706e368(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,ulong param_16,
                  undefined8 param_17,undefined8 param_18,undefined **param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  long param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,ulong param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  ulong uVar31;
  ulong uVar32;
  undefined *puVar33;
  uint uVar34;
  undefined *puVar35;
  ulong uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dStack_348;
  double dStack_338;
  undefined *puStack_2c0;
  undefined *puStack_2b0;
  undefined **ppuStack_288;
  undefined *puStack_270;
  undefined **ppuStack_260;
  undefined *puStack_210;
  uint uStack_208;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  puVar3 = param_5;
  func_0x00010bf37ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_5;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_19;
  func_0x00010c269d40(param_19);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  FUN_10706dddc(puVar4,ppuVar7);
  _objc_release(ppuVar7);
  puVar9 = puVar4;
  FUN_10706e070(puVar4,param_20,param_27);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar10);
  dVar52 = param_1 + -18.0;
  func_0x00010c080dc0(puVar4);
  uVar34 = (uint)puVar8;
  dVar45 = 12.0;
  if (uVar34 == 0) {
    dVar45 = 8.0;
  }
  if (puVar3 == (undefined *)0x0) {
    dVar45 = 9.0;
  }
  dVar48 = 8.0;
  if (puVar3 == (undefined *)0x0) {
    dVar48 = 0.0;
  }
  dVar37 = dVar52;
  dVar46 = dVar48;
  dVar49 = dVar48;
  FUN_10706a8ac(puVar9);
  puVar10 = puVar4;
  func_0x00010706de7c(puVar4,param_19);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_7;
  func_0x000108ef5474();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_4;
  func_0x00010bf04920();
  puVar13 = param_4;
  func_0x00010bf529e0();
  if (puVar13 == (undefined *)0x0) {
    puStack_210 = (undefined *)0x0;
  }
  else {
    puVar13 = param_4;
    func_0x00010bf04920();
    puStack_210 = (undefined *)((ulong)puVar13 & 0xffffffff ^ 1);
  }
  puVar13 = puVar4;
  func_0x00010c083520();
  puVar35 = puVar4;
  func_0x00010bfddc80();
  if ((int)puVar35 == 0) {
LAB_10706e7a4:
    puVar35 = param_4;
    FUN_10706fa0c(param_4,param_7,param_19,param_27,param_22,puVar3 != (undefined *)0x0,0);
    _objc_retainAutoreleasedReturnValue();
    uStack_208 = 0;
  }
  else {
    uVar36 = param_34;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar36;
    func_0x00010bf1f3c0();
    _objc_release(uVar36);
    if ((uVar14 & 1) == 0) goto LAB_10706e7a4;
    puVar35 = (undefined *)0x0;
    uStack_208 = 1;
  }
  ppuVar7 = param_19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar7;
  func_0x00010c101bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  puVar20 = PTR_DAT_1126a5280;
  if (puVar35 == (undefined *)0x0) {
    _objc_retain(ppuVar15);
    ppuVar16 = ppuVar15;
    func_0x00010010fab4(ppuVar15,puVar20);
    ppuVar7 = ppuVar15;
    if ((int)ppuVar16 == 0) {
      ppuVar7 = (undefined **)0x0;
    }
    _objc_retain(ppuVar7);
    _objc_release(ppuVar15);
    if (ppuVar7 == (undefined **)0x0) {
      ppuStack_288 = (undefined **)0x0;
      ppuStack_260 = (undefined **)0x0;
    }
    else {
      puVar35 = param_4;
      func_0x00010bfb1920(param_4);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_288 = ppuVar15;
      func_0x00010c108320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar35);
      ppuStack_260 = ppuVar15;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar17 = param_35;
    func_0x00010c269d40(param_35);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c131420();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252440();
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    uVar17 = param_17;
    func_0x00010c2923e0(param_17);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    puVar35 = puVar4;
    func_0x00010c07ea80(puVar4);
    puVar20 = puVar4;
    FUN_10704aacc(puVar4,puVar35);
    if ((int)puVar20 == 0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar35 = puVar4;
      func_0x00010c27dd80();
      puVar33 = puVar4;
      func_0x00010bf4df40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar20 = (undefined *)0x0;
      if ((long)puVar35 < 0x10) {
        puVar21 = PTR_PTR_1126d4408;
        if (((puVar35 == (undefined *)0x1) ||
            (puVar21 = PTR_PTR_1126d4418, puVar35 == (undefined *)0x3)) ||
           (puVar21 = PTR_PTR_1126d4420, puVar35 == (undefined *)0xf)) goto LAB_10706e99c;
      }
      else if (puVar35 < (undefined *)0x2b) {
        puVar21 = PTR_PTR_1126d4418;
        if ((1L << ((ulong)puVar35 & 0x3f) & 0x60381c00000U) == 0) {
          if (puVar35 == (undefined *)0x10) {
            puVar20 = PTR_PTR_1126d4410;
            _objc_alloc();
            func_0x00010c01a7e0();
          }
          else {
            puVar21 = PTR_PTR_1126d4428;
            if (puVar35 == (undefined *)0x15) goto LAB_10706e99c;
          }
        }
        else {
LAB_10706e99c:
          _objc_opt_new();
          puVar20 = puVar21;
        }
      }
      _objc_release(puVar33);
      _objc_release(puVar33);
    }
    _objc_release(puVar4);
    _objc_release(uVar17);
    puVar33 = PTR_PTR_1126d4438;
    _objc_alloc(PTR_PTR_1126d4438);
    dVar46 = dVar37;
    func_0x00010c02b900(dVar52);
    puVar35 = puVar20;
    func_0x00010bf4c620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar33);
    _objc_release(puVar20);
    _objc_release(ppuVar7);
    _objc_release(ppuStack_288);
  }
  else {
    ppuStack_260 = (undefined **)0x0;
  }
  if (puVar35 == (undefined *)0x0) {
    uStack_208 = 1;
  }
  puVar20 = puVar35;
  if (uStack_208 == 1) {
    puVar20 = param_4;
    FUN_10706fa0c(param_4,param_7,param_19,param_27,param_22,puVar3 != (undefined *)0x0,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar35);
  }
  uVar17 = param_15;
  func_0x00010bd869d0(param_15,&PTR___NSConcreteGlobalBlock_11098cf80,
                      &PTR___NSConcreteGlobalBlock_11098cfc0);
  lVar22 = param_29;
  dVar38 = dVar37;
  func_0x00010c11ece0(dVar37);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  if (lVar22 == 0) {
    puStack_2b0 = (undefined *)0x0;
  }
  else {
    puStack_2b0 = PTR_PTR_1126cb7e8;
    _objc_alloc();
    puVar35 = puVar4;
    func_0x00010bf37480(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c9e0();
    _objc_release(puVar35);
  }
  lVar23 = param_6;
  func_0x00010bf2be20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  cVar1 = '\0';
  if (lVar23 == 0) {
    cVar1 = (char)param_10;
  }
  dVar50 = 0.0;
  if (param_10._1_1_ == '\0') {
LAB_10706ec74:
    puStack_270 = (undefined *)0x0;
  }
  else {
    puVar35 = puVar4;
    func_0x00010c0cb9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar4;
    func_0x00010bf026e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_270 = puVar35;
    FUN_10706a0dc(puVar35,puVar6,puVar33);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar33);
    _objc_release(puVar35);
    if (puStack_270 == (undefined *)0x0) goto LAB_10706ec74;
    func_0x00010c26f460(PTR_PTR_1126cb4d0);
    dVar50 = dVar38;
  }
  if (cVar1 == '\0') {
    puVar35 = (undefined *)0x0;
  }
  else {
    puVar33 = puVar4;
    func_0x00010c0cb9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = puVar33;
    FUN_107064934(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar33);
  }
  uStack_208 = (uint)param_13 & (uVar34 ^ 1) | uStack_208;
  puVar21 = puVar4;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = param_5;
  func_0x00010c0cbb80();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar33;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar33);
  puVar33 = param_5;
  func_0x00010c0cbb80(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar33;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar5;
  func_0x00010c0720c0();
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar33);
  puVar33 = param_4;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar33;
  func_0x00010c0cb9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c0812c0();
  _objc_release(puVar25);
  _objc_release(puVar33);
  puVar33 = PTR_PTR_1126cb7f0;
  if (uStack_208 == 1) {
    func_0x00010c261400(param_5);
    func_0x00010c15dd60(dVar52 - dVar50);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar33 = (undefined *)0x0;
  }
  uVar17 = param_28;
  func_0x00010c29d7a0(dVar52);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_107070184;
  puStack_b8 = &UNK_110903fa0;
  _objc_retain(param_8);
  puVar25 = param_4;
  uStack_b0 = param_8;
  func_0x00010bf04920();
  dVar38 = 2.0;
  if (uVar34 == 0) {
    dVar38 = 0.0;
  }
  dVar39 = 0.0;
  if (puVar4 != puVar24 && puVar3 == (undefined *)0x0) {
    dVar39 = dVar38;
  }
  dVar38 = 6.0;
  dVar53 = 6.0;
  if (((uint)puVar27 & (uint)puVar26) == 0) {
    dVar53 = 0.0;
  }
  _objc_retain(puVar33);
  _objc_retain(puVar35);
  func_0x00010c23d0a0(puVar35);
  dVar42 = dVar46;
  func_0x00010c0bafa0(puVar35);
  dVar40 = dVar38;
  func_0x00010c0bafa0(puVar35);
  dVar47 = dVar45;
  func_0x00010bf21b40(puVar35);
  func_0x00010bf21b40(puVar35);
  dVar43 = dVar47;
  _objc_release(puVar35);
  dVar41 = 0.0;
  if (uStack_208 != 0) {
    func_0x00010c0877a0(puVar33);
    func_0x00010c0bafa0(puVar33);
    func_0x00010c0bafa0(puVar33);
    dVar41 = dVar42 + dVar41 + dVar43;
  }
  dVar42 = 45.0;
  if (puVar3 == (undefined *)0x0) {
    dVar42 = 16.0;
  }
  if (param_10._2_1_ == '\0') {
    dVar42 = 0.0;
  }
  _objc_release(puVar33);
  if (puVar3 == (undefined *)0x0) {
    dStack_338 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
    dStack_348 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    dVar43 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  }
  else {
    uVar2 = uVar34;
    if (puVar33 != (undefined *)0x0) {
      uVar2 = 1;
    }
    dStack_338 = 8.0;
    if (uVar2 == 0) {
      dStack_338 = -0.5;
    }
    if (puVar35 != (undefined *)0x0) {
      dStack_338 = 0.0;
    }
    dVar43 = 0.0;
    dStack_348 = 0.0;
  }
  func_0x00010c120ec0(uVar17);
  puVar24 = puVar20;
  dVar44 = dVar43;
  func_0x00010c13fda0();
  _objc_retainAutoreleasedReturnValue();
  puStack_2c0 = PTR_PTR_1126cb7f0;
  if (((ulong)puVar8 & 1) == 0) {
    func_0x00010c15cca0();
    func_0x00010c15dec0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_2c0 = (undefined *)0x0;
  }
  puVar8 = puVar4;
  func_0x00010c27dd80(puVar4);
  uVar18 = param_14;
  func_0x00010c149f00(param_14);
  puVar26 = puVar5;
  FUN_1070682b0(puVar5,puVar8,puVar25,puStack_210,param_13,puVar3 != (undefined *)0x0,uVar18,
                param_30);
  puVar8 = puVar4;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar8;
  func_0x00010c071ae0();
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar4;
  func_0x00010c07ea80();
  if ((int)puVar28 == 0) {
    uVar2 = 0;
  }
  else {
    uVar18 = param_38;
    func_0x00010c06e5a0(param_38);
    uVar2 = (uint)uVar18;
  }
  puVar28 = puVar4;
  func_0x00010bf2c580();
  if ((int)puVar28 == 0) {
    uVar2 = 0;
  }
  else {
    puVar28 = puVar4;
    func_0x00010c07ea80(puVar4);
    uVar2 = (uint)puVar28 ^ 1 | uVar2 | (uint)puVar13;
  }
  puVar13 = puVar4;
  func_0x00010bf50280(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar4;
  func_0x00010c15cca0(puVar4);
  puVar29 = puVar4;
  func_0x00010c07d0e0(puVar4);
  puVar30 = puVar5;
  FUN_10708ce14(puVar5,puVar13,puVar28,puVar29,uVar2 & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  lVar23 = param_6;
  func_0x00010bf2be20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar13 = param_5;
  func_0x00010c076ee0();
  puStack_210 = (undefined *)0x0;
  if ((((ulong)puVar13 & 1) == 0) && (lVar23 == 0)) {
    puVar13 = puVar4;
    func_0x00010bf2d880();
    if ((int)puVar13 == 0) {
LAB_10706f2c8:
      puStack_210 = (undefined *)0x0;
    }
    else {
      puVar13 = puVar4;
      func_0x00010c07ea80();
      if ((int)puVar13 != 0) {
        uVar18 = param_17;
        func_0x00010c2923e0(param_17);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar4;
        func_0x000107d644bc(puVar4,uVar18,puVar27);
        _objc_release(uVar18);
        if ((int)puVar13 == 0) goto LAB_10706f2c8;
      }
      puStack_210 = PTR_PTR_1126d4440;
      func_0x00010c242c40();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  puVar13 = param_5;
  func_0x00010c076ee0();
  if ((((ulong)puVar13 & 1) == 0) &&
     (puVar13 = puVar4, FUN_10707034c(puVar4,param_19), ((ulong)puVar13 & 1) == 0)) {
    ppuVar7 = ppuVar15;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (ppuVar7 != &PTR____CFConstantStringClassReference_110eeb978) {
      func_0x00010c071ae0();
    }
    _objc_release(ppuVar7);
    _objc_release(ppuVar7);
  }
  dVar51 = dVar37;
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c0877a0(puVar33);
    func_0x00010c0bafa0(puVar33);
    dVar51 = dVar50 + dVar44 + dVar49;
  }
  uVar31 = (ulong)(puVar3 != (undefined *)0x0);
  FUN_10706df9c(uVar31,(int)puVar12,(ulong)puVar25 & 0xffffffff,uVar34,param_13);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010706e1ec(puVar4,param_20,param_27);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar4;
  func_0x00010c07ea80();
  uVar36 = param_16;
  uVar14 = param_16;
  if (((int)puVar12 != 0) && (puVar12 = puVar4, func_0x00010c07d080(), ((ulong)puVar12 & 1) == 0)) {
    puVar12 = puVar4;
    func_0x00010c0791c0();
    uVar36 = 0;
    if (param_16 == 0) goto LAB_10706f4c0;
    uVar14 = (ulong)puVar12 & 1;
  }
  if (uVar14 != 0) {
    _objc_retain(param_16);
    uVar36 = param_16;
    func_0x00010c105080();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar36;
    func_0x00010bf04920();
    _objc_release(uVar36);
    uVar36 = param_16;
    func_0x00010c105080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_16);
    uVar32 = uVar36;
    func_0x00010bf529e0();
    _objc_release(uVar36);
    if ((long)(uVar32 - (uVar14 & 0xffffffff)) < 1) {
      uVar36 = 0;
    }
    else {
      _objc_retain(param_16);
      uVar36 = param_16;
    }
  }
LAB_10706f4c0:
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  uStack_e8 = 0x107070190;
  uStack_e0 = 0x1070701a0;
  uStack_d8 = 0;
  func_0x00010c0bf240(param_7);
  puVar12 = PTR_PTR_1126c6d00;
  _objc_alloc(PTR_PTR_1126c6d00);
  puVar13 = puVar4;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar4;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x000107d60b58();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar25);
  puVar25 = puVar4;
  func_0x00010bf026e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0414c0(param_1,dVar52,
                      dVar48 + dVar48 + dVar53 + dVar42 + dVar39 + dVar46 + dVar38 + dVar45 + dVar40
                                                                   + dVar47 + dVar41 + dStack_338 +
                      dStack_348 + dVar43,dVar51,dVar37,puVar12);
  _objc_release(puVar25);
  _objc_release(puVar27);
  _objc_release(puVar13);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  _objc_release(uVar36);
  _objc_release(puVar3);
  _objc_release(uVar31);
  _objc_release(puStack_210);
  _objc_release(puVar30);
  _objc_release(puVar8);
  _objc_release(puVar26);
  _objc_release(puStack_2c0);
  _objc_release(puVar24);
  _objc_release(uStack_b0);
  _objc_release(uVar17);
  _objc_release(puVar33);
  _objc_release(puVar21);
  _objc_release(puVar35);
  _objc_release(puStack_270);
  _objc_release(lVar22);
  _objc_release(puStack_2b0);
  _objc_release(ppuVar15);
  _objc_release(ppuStack_260);
  _objc_release(puVar20);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10706f9e8; end: 10706f9ef;  */

void FUN_10706f9e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isSaved_1125fce30);
  return;
}



/* Entry: 10706f9f0; end: 10706fa0b;  */

uint FUN_10706f9f0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c07d080(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 10706fa0c; end: 107070183;  */

void FUN_10706fa0c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,int param_6,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puStack_b8;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar15 = param_1;
  func_0x00010bf529e0();
  if (puVar15 == (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    goto LAB_107070128;
  }
  puVar15 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar15;
  if (param_7 == 0) {
    puVar2 = param_1;
    func_0x00010bfb1920(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    func_0x00010c101ba0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar15);
  puVar15 = PTR_DAT_1126a5280;
  if (puVar3 == (undefined *)0x0) {
LAB_10706fb38:
    puVar15 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar3);
    puVar2 = puVar3;
    func_0x00010010fab4(puVar3,puVar15);
    _objc_release(puVar3);
    if (((ulong)puVar2 & 1) != 0) goto LAB_10706fb38;
    uVar4 = param_2;
    FUN_1070b2918();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126b2950;
    func_0x00010c101da0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bfe5ec0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar15;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar2);
    _CACurrentMediaTime();
    puVar15 = PTR_DAT_1126a53f0;
    _objc_retain(puVar3);
    puVar6 = puVar3;
    func_0x00010010fab4(puVar3,puVar15);
    puVar2 = puVar3;
    if ((int)puVar6 == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar3);
    puVar15 = PTR_DAT_1126a5410;
    _objc_retain(puVar3);
    puVar7 = puVar3;
    func_0x00010010fab4(puVar3,puVar15);
    puVar6 = puVar3;
    if ((uint)puVar7 == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain();
    _objc_release(puVar3);
    puVar15 = PTR_DAT_1126a53e8;
    _objc_retain(puVar3);
    puVar8 = puVar3;
    func_0x00010010fab4(puVar3,puVar15);
    puVar1 = puVar3;
    if ((uint)puVar8 == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain();
    _objc_release(puVar3);
    puVar15 = PTR_DAT_1126a5930;
    _objc_retain(puVar3);
    puVar9 = puVar3;
    func_0x00010010fab4(puVar3,puVar15);
    _objc_release(puVar3);
    if (((ulong)puVar9 & 1) == 0) {
      uVar17 = 0;
      uVar16 = 0;
      uVar18 = 0;
      if (param_6 == 0) {
        uVar18 = 0x4020000000000000;
      }
      uVar21 = 0;
      uVar20 = 0;
      uVar19 = uVar18;
      if (puVar2 != (undefined *)0x0) goto LAB_10706fca0;
LAB_10706ff0c:
      if ((((uint)puVar7 | (uint)puVar8) & 1) != 0) {
        puVar9 = param_1;
        func_0x00010bfb1920(param_1);
        _objc_retainAutoreleasedReturnValue();
        if (((ulong)puVar8 & 1) == 0) {
          puStack_b8 = puVar6;
          func_0x00010c295260();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puStack_b8 = puVar3;
          func_0x00010c295280();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar7 = (undefined *)0x0;
        if (puStack_b8 != (undefined *)0x0) {
          puVar7 = param_4;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar9;
          func_0x00010bf490e0(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar3;
          func_0x00010bfe5ec0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar7;
          func_0x00010bfc8480();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar14);
          _objc_release(puVar8);
          _objc_release(puVar7);
          puVar7 = param_3;
          func_0x00010c269d40(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c235800();
          _objc_release(puVar7);
          func_0x00010c1c2b40(uVar18,uVar16,uVar19,uVar20,puVar15);
          goto LAB_107070058;
        }
LAB_1070700d8:
        _objc_release(puVar7);
        puVar15 = (undefined *)0x0;
        goto LAB_1070700e4;
      }
      puVar15 = (undefined *)0x0;
    }
    else {
      uVar18 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
      uVar16 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
      uVar20 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
      uVar17 = uVar16;
      uVar19 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
      uVar21 = uVar20;
      if (puVar2 == (undefined *)0x0) goto LAB_10706ff0c;
LAB_10706fca0:
      puVar9 = puVar3;
      func_0x00010c2952e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(param_1);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_1;
      func_0x00010bf529e0();
      if (puVar15 != (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        uVar20 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
        uVar22 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
        uVar23 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
        uVar16 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
        do {
          puVar8 = puVar9;
          func_0x00010bf529e0();
          if (puVar8 <= puVar15) break;
          puVar8 = param_1;
          func_0x00010c0dfd40(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar9;
          func_0x00010c0dfd40(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = param_4;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar8;
          func_0x00010bf490e0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar3;
          func_0x00010bfe5ec0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar10;
          func_0x00010bfc8480();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar10);
          if (puVar13 != (undefined *)0x0) {
            func_0x00010c1c2b40(uVar20,uVar22,uVar23,uVar16,puVar13);
            func_0x00010befa120(puVar7);
          }
          _objc_release(puVar13);
          _objc_release(puVar14);
          _objc_release(puVar8);
          puVar15 = puVar15 + 1;
          puVar8 = param_1;
          func_0x00010bf529e0();
        } while (puVar15 < puVar8);
      }
      puVar15 = puVar7;
      func_0x00010bf529e0();
      if (puVar15 == (undefined *)0x0) goto LAB_1070700d8;
      puVar15 = PTR_PTR_1126cb4c8;
      _objc_alloc();
      func_0x00010c0047e0();
      puVar8 = param_3;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = param_1;
      func_0x00010bfb1920(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c235800(puVar8);
      _objc_release(puVar14);
      _objc_release(puVar8);
      func_0x00010c1c2b40(uVar18,uVar17,uVar19,uVar21,puVar15);
      puStack_b8 = puVar7;
LAB_107070058:
      _objc_release(puStack_b8);
      _objc_release(puVar9);
      if (puVar15 != (undefined *)0x0) {
        puVar7 = param_5;
        func_0x00010c269d40(param_5);
        _objc_retainAutoreleasedReturnValue();
        _CACurrentMediaTime();
        func_0x00010befbfe0(puVar7);
        _objc_release(puVar7);
        puVar9 = param_5;
        func_0x00010c269d40(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0();
LAB_1070700e4:
        _objc_release(puVar9);
      }
    }
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  _objc_release(puVar3);
LAB_107070128:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 107070184; end: 1070701a7;  */

void FUN_107070184(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_isSavedByParticipant__1125fce48,*(undefined8 *)(param_1 + 0x20));
  return;
}


