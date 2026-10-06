/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b7caec; end: 107b7cc1b; -[SCOperaLocalWebJavascriptBridge _addInlineVideoWithURL:parameters:] */

void FUN_107b7caec(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c085440(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 107b7cc1c; end: 107b7cc4b; -[SCOperaLocalWebJavascriptBridge .cxx_destruct] */

void FUN_107b7cc1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b7cc4c; end: 107b7cceb; -[SCOperaLocalWebJavascriptBridgeAdapter initWithListener:] */

undefined1 * FUN_107b7cc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa0b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d6c18;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    func_0x00010bef9320(*(undefined8 *)((long)puVar1 + 8));
    uVar3 = param_3;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b7ccec; end: 107b7cdd3; -[SCOperaLocalWebJavascriptBridgeAdapter userContentController:didReceiveScriptMessage:] */

void FUN_107b7ccec(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  func_0x00010bf1e9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar1 != (undefined *)0x0) && (lVar5 = *(long *)(param_1 + 8), lVar5 != 0)) {
      puVar3 = PTR_PTR_1126d6c20;
      func_0x00010bf21160(PTR_PTR_1126d6c20);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126d6c20;
      func_0x00010bf211a0(PTR_PTR_1126d6c20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21140(lVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b7cdd4; end: 107b7ceab; -[SCOperaLocalWebJavascriptBridgeAdapter install:] */

void FUN_107b7cdd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0646c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb0bb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___WKUserScript_1126d6bd0;
  _objc_alloc(PTR__OBJC_CLASS___WKUserScript_1126d6bd0);
  func_0x00010c04a760();
  func_0x00010befc7c0(param_3,param_2,puVar2);
  func_0x00010befb220(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110eb0b98);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107b7ceac; end: 107b7cebb; +[SCOperaLocalWebJavascriptBridgeAdapter uninstall:] */

void FUN_107b7ceac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_removeScriptMessageHandlerForNam_1126292b8,
             &PTR____CFConstantStringClassReference_110eb0b98);
  return;
}



/* Entry: 107b7cebc; end: 107b7ced3; -[SCOperaLocalWebJavascriptBridgeAdapter javascriptBridge:didAddInlineVideoWithURL:parameters:] */

void FUN_107b7cebc(long param_1)

{
  long lVar1;
  undefined8 in_x4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107b7cecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,in_x4);
    return;
  }
  return;
}



/* Entry: 107b7ced4; end: 107b7cf03; -[SCOperaLocalWebJavascriptBridgeAdapter .cxx_destruct] */

void FUN_107b7ced4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b7cf04; end: 107b7cf8b; +[SCOperaLocalWebProxy shared] */

void FUN_107b7cf04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_107b7cf8c;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137276f8 != -1) {
    func_0x00010002a2fc(0x1137276f8,&puStack_48);
  }
  uVar1 = uRam0000000113727700;
  _objc_retain(uRam0000000113727700);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b7cf8c; end: 107b7cfb3;  */

void FUN_107b7cf8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam0000000113727700;
  uRam0000000113727700 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b7cfb4; end: 107b7d03f; -[SCOperaLocalWebProxy init] */

undefined1 * FUN_107b7cfb4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa0b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSURLProtocol_1126d6c28;
    _objc_opt_class(PTR_PTR_1126d6c20);
    func_0x00010c125fc0(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b7d040; end: 107b7d0ab; -[SCOperaLocalWebProxy setBaseURL:forProxyBaseURL:] */

void FUN_107b7d040(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    if (param_3 == 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,param_4);
    }
    else {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b7d0ac; end: 107b7d2a7; -[SCOperaLocalWebProxy urlForProxy:] */

void FUN_107b7d0ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf51e00();
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  puVar7 = (undefined *)0x0;
  if (lVar3 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        uVar9 = *(undefined8 *)(lVar10 * 8);
        func_0x00010beec820(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar9;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        lVar5 = lVar1;
        func_0x00010c11f420();
        if (lVar5 == 0) {
          lVar6 = lVar2;
          func_0x00010c0e00e0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
          lVar3 = lVar1;
          func_0x00010c260c00(lVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc34c0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          _objc_release(lVar6);
          _objc_release(uVar4);
          goto LAB_107b7d250;
        }
        _objc_release(uVar4);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    puVar7 = (undefined *)0x0;
  }
LAB_107b7d250:
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar1 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107b7d2a8; end: 107b7d2b3; -[SCOperaLocalWebProxy .cxx_destruct] */

void FUN_107b7d2a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b7d2b4; end: 107b7d317; +[SCOperaLocalWebURLProtocol bridgeFunctionName:] */

void FUN_107b7d2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c128120(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0899c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b7d318; end: 107b7d597; +[SCOperaLocalWebURLProtocol bridgeParameters:] */

void FUN_107b7d318(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  undefined *puVar10;
  undefined8 unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
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
  _objc_retain(param_3);
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_140 = param_3;
  puStack_138 = puVar10;
  func_0x00010c11d080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar1);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      unaff_x20 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        unaff_x24 = *(long *)(lStack_128 + unaff_x20 * 8);
        func_0x00010bf44740(unaff_x24,param_2,&PTR____CFConstantStringClassReference_110db9ab8);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = unaff_x24;
        func_0x00010bf529e0();
        if (lVar3 == 2) {
          unaff_x25 = unaff_x24;
          func_0x00010c0dfd40(unaff_x24,param_2,0);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = unaff_x25;
          func_0x00010c08fa60();
          if (lVar3 != 0) {
            unaff_x26 = unaff_x24;
            func_0x00010c0dfd40(unaff_x24,param_2,1);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = unaff_x26;
            func_0x00010c08fa60();
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
            if (lVar3 == 0) goto LAB_107b7d4f8;
            unaff_x25 = unaff_x24;
            func_0x00010c0dfd40(unaff_x24,param_2,1);
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010c25cf40();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = unaff_x24;
            func_0x00010c0dfd40(unaff_x24,param_2,0);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010c0b5ac0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puStack_138,param_2,unaff_x26,lVar4);
            _objc_release(lVar4);
            _objc_release(lVar3);
            _objc_release(unaff_x26);
          }
          _objc_release(unaff_x25);
        }
LAB_107b7d4f8:
        _objc_release(unaff_x24);
        unaff_x20 = unaff_x20 + 1;
      } while (lVar2 != unaff_x20);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x23 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  puVar10 = puStack_138;
  puVar5 = puStack_138;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  _objc_release(puVar10);
  lVar2 = lStack_140;
  _objc_release(lStack_140);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  puStack_158 = puVar10;
  pcStack_148 = FUN_107b7d598;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = PTR_PTR_1126d6c30;
  lStack_190 = unaff_x26;
  lStack_188 = unaff_x25;
  lStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  puStack_170 = puVar5;
  lStack_168 = lVar1;
  lStack_160 = unaff_x20;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c134680(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar10;
  func_0x00010c28f520(puVar10,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(puVar10);
  puVar10 = puVar5;
  func_0x00010c128120();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar10;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = puVar6;
  func_0x00010bfda7c0(puVar6,param_2,&PTR____CFConstantStringClassReference_110eb0bf8);
  if ((int)puVar10 == 0) {
    puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar10 = puVar6;
    func_0x00010c0899c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c11d080(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3dd20(lVar2,param_2,puVar10,puVar7,puVar5);
    _objc_release(puVar7);
    _objc_release(puVar10);
    puVar10 = (undefined *)0x0;
  }
  puVar7 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
  _objc_alloc(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
  lVar1 = lVar2;
  func_0x00010c134680(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110eb0c18;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110eb0c38;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_1a0,&ppuStack_1a8,1
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057ca0(puVar7,param_2,lVar9,200,&PTR____CFConstantStringClassReference_110e3f918,
                      puVar8);
  _objc_release(puVar8);
  _objc_release(lVar9);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf3ca40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc30c0();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf3ca40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc30a0();
  _objc_release(lVar1);
  func_0x00010bf3ca40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc30e0();
  _objc_release(lVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar10);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107b7d598; end: 107b7d857; -[SCOperaLocalWebURLProtocol startLoading] */

void FUN_107b7d598(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR_PTR_1126d6c30;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c134680(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010c28f520(puVar7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar7);
  puVar7 = puVar3;
  func_0x00010c128120();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar7;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar4;
  func_0x00010bfda7c0(puVar4,param_2,&PTR____CFConstantStringClassReference_110eb0bf8);
  if ((int)puVar7 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = puVar4;
    func_0x00010c0899c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c11d080(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3dd20(param_1,param_2,puVar7,puVar5,puVar3);
    _objc_release(puVar5);
    _objc_release(puVar7);
    puVar7 = (undefined *)0x0;
  }
  puVar5 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
  _objc_alloc(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
  uVar1 = param_1;
  func_0x00010c134680(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110eb0c18;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110eb0c38;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057ca0(puVar5,param_2,uVar2,200,&PTR____CFConstantStringClassReference_110e3f918,
                      puVar6);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf3ca40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc30c0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf3ca40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc30a0();
  _objc_release(uVar1);
  func_0x00010bf3ca40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc30e0();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107b7d858; end: 107b7d85b; -[SCOperaLocalWebURLProtocol stopLoading] */

void FUN_107b7d858(void)

{
  return;
}



/* Entry: 107b7d85c; end: 107b7d883; +[SCOperaLocalWebURLProtocol canonicalRequestForRequest:] */

void FUN_107b7d85c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107b7d884; end: 107b7d887; +[SCOperaLocalWebURLProtocol canInitWithRequest:] */

void FUN_107b7d884(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be435d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isSCOperaLocalWebRequest__11256e710);
  return;
}



/* Entry: 107b7d888; end: 107b7d9b3; +[SCOperaLocalWebURLProtocol _isSCOperaLocalWebRequest:] */

bool FUN_107b7d888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110dbf1f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbf1f8,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (ppuVar4 == (undefined **)0x0) {
    bVar1 = false;
  }
  else {
    uVar2 = param_3;
    func_0x00010bdc2b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110eb0bd8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eb0bd8,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (ppuVar4 == (undefined **)0x0) {
      bVar1 = true;
    }
    else {
      uVar2 = param_3;
      func_0x00010c0b6940(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c1504a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110eb0bd8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eb0bd8,param_2,uVar3);
      bVar1 = ppuVar4 == (undefined **)0x0;
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107b7d9b4; end: 107b7da53; -[SCOperaLocalWebURLProtocol _invokeJavascriptBridgeWithFunction:query:URL:] */

void FUN_107b7d9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d6c18;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d6c20;
  func_0x00010bf211a0(PTR_PTR_1126d6c20,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21140(puVar1,param_2,param_3,param_5,puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b7da54; end: 107b7da5f; -[SCOperaWebView initWithFrame:] */

void FUN_107b7da54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c014150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFrame_configurationDict__1125e2a20,
             PTR____NSDictionary0__struct_11034ab58);
  return;
}



/* Entry: 107b7da60; end: 107b7db03; -[SCOperaWebView initWithFrame:configurationDict:] */

undefined1 *
FUN_107b7da60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fa0c0;
  uStack_50 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c228700(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107b7db04; end: 107b7e047; -[SCOperaWebView setupConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7db04(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b44c8;
  _objc_alloc();
  func_0x00010c030dc0();
  uVar13 = *(undefined8 *)(param_1 + _DAT_11276b244);
  *(undefined **)(param_1 + _DAT_11276b244) = puVar1;
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + _DAT_11276b248);
  *(undefined8 *)(param_1 + _DAT_11276b248) = 0;
  _objc_release(uVar13);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0a38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0c58);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0a58);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0c78);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0c98);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0558);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf1f3c0();
  *(char *)(param_1 + _DAT_11276b24c) = (char)uVar8;
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0a78);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf1f3c0();
  *(char *)(param_1 + _DAT_11276b250) = (char)uVar8;
  _objc_release(uVar6);
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  _objc_alloc_init();
  if (uVar2 != 0) {
    uVar6 = uVar2;
    func_0x00010bf1f3c0(uVar2);
    func_0x00010c167600(puVar1,param_2,uVar6);
  }
  if (uVar3 != 0) {
    uVar6 = uVar3;
    func_0x00010bf1f3c0(uVar3);
    func_0x00010c167460(puVar1,param_2,uVar6);
  }
  if (uVar4 != 0) {
    uVar6 = uVar4;
    func_0x00010bf1f3c0(uVar4);
    func_0x00010c1c5500(puVar1,param_2,-(uVar6 & 1));
  }
  if (uVar5 != 0) {
    uVar6 = uVar5;
    func_0x00010bf1f3c0(uVar5);
    func_0x00010c210260(puVar1,param_2,uVar6);
  }
  if ((int)uVar7 != 0) {
    puVar9 = PTR__OBJC_CLASS___WKWebsiteDataStore_1126d6c38;
    func_0x00010c0daea0(PTR__OBJC_CLASS___WKWebsiteDataStore_1126d6c38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225200(puVar1,param_2,puVar9);
    _objc_release(puVar9);
  }
  puVar9 = PTR__OBJC_CLASS___WKPreferences_1126bde50;
  _objc_opt_new(PTR__OBJC_CLASS___WKPreferences_1126bde50);
  func_0x00010c1b6580();
  puVar10 = PTR__OBJC_CLASS___WKWebpagePreferences_1126d6c40;
  _objc_opt_new(PTR__OBJC_CLASS___WKWebpagePreferences_1126d6c40);
  uVar6 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0cb8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  func_0x00010c167500(puVar10,param_2,(uint)uVar7 ^ 1);
  _objc_release(uVar6);
  func_0x00010c18b380(puVar1,param_2,puVar10);
  func_0x00010c1dfdc0(puVar1,param_2,puVar9);
  uVar6 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb04b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar6 != 0) {
    uVar6 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb04b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e100(puVar1,param_2,uVar6);
    _objc_release(uVar6);
  }
  puVar11 = puVar1;
  func_0x00010c291760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar11 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___WKUserContentController_1126d44b8;
    _objc_alloc_init(PTR__OBJC_CLASS___WKUserContentController_1126d44b8);
    func_0x00010c21e100(puVar1,param_2,puVar11);
    _objc_release(puVar11);
  }
  uVar6 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb04f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar6 != 0) {
    puVar11 = puVar1;
    func_0x00010c291760(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb04f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc7c0(puVar11,param_2,uVar6);
    _objc_release(uVar6);
    _objc_release(puVar11);
  }
  uVar6 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0a98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar6 != 0) {
    uVar6 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0a98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169940(puVar1,param_2,uVar6);
    _objc_release(uVar6);
  }
  uVar6 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0ab8);
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 != 0) {
    puVar11 = PTR_PTR_1126d6c48;
    _objc_alloc(PTR_PTR_1126d6c48);
    func_0x00010c026400();
    puVar12 = puVar1;
    func_0x00010c291760(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0677e0(puVar11,param_2,puVar12);
    _objc_release(puVar12);
    _objc_release(puVar11);
  }
  uVar7 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0cd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar7 != 0) {
    uVar7 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0cd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225200(puVar1,param_2,uVar7);
    _objc_release(uVar7);
  }
  func_0x00010c229a40(param_1,param_2,puVar1,param_3);
  _objc_release(uVar6);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b7e048; end: 107b7e253; -[SCOperaWebView setupWebView:configDict:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e048(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c160fc0(param_1);
  lVar4 = (long)_DAT_11276b254;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010c1cb840();
    func_0x00010c21aea0(*(undefined8 *)(param_1 + lVar4));
  }
  puVar2 = PTR_PTR_1126b4f58;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010bdc3620();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
  func_0x00010c1cb840(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c21aea0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010befbb60(param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107b7e254;
  puStack_60 = &UNK_1108471b0;
  lStack_58 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be090a0(param_1);
  _objc_initWeak(auStack_80,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b244);
  func_0x00010c2bd360(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c0e0780(uVar3);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b7e254; end: 107b7e2bb;  */

void FUN_107b7e254(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b7e2bc; end: 107b7e2ef;  */

void FUN_107b7e2bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beddfe0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b7e2f0; end: 107b7e417; -[SCOperaWebView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e2f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c281b20(*(undefined8 *)(param_1 + _DAT_11276b244));
  lVar4 = (long)_DAT_11276b254;
  func_0x00010c21aea0(*(undefined8 *)(param_1 + lVar4));
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf46560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c291760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e260();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1cb840(*(undefined8 *)(param_1 + lVar4));
  lVar3 = *(long *)(param_1 + lVar4);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf46560(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c291760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c12b160(uVar2);
    func_0x00010c2803e0(PTR_PTR_1126d6c48);
    func_0x00010c12b060(uVar2);
    _objc_release(uVar2);
  }
  puStack_38 = PTR_PTR_1126fa0c0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107b7e418; end: 107b7e50b; -[SCOperaWebView loadRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e418(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
  if ((*(char *)(param_1 + _DAT_11276b24c) == '\x01') &&
     (*(char *)(param_1 + _DAT_11276b250) == '\x01')) {
    uVar1 = param_3;
    func_0x00010bdc2b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137160(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010befc820(puVar2,param_2,&PTR____CFConstantStringClassReference_110de3df8,
                        &PTR____CFConstantStringClassReference_110eb0cf8);
    func_0x00010c09c060(*(undefined8 *)(param_1 + _DAT_11276b254),param_2,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    func_0x00010c09c060(*(undefined8 *)(param_1 + _DAT_11276b254),param_2,param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b7e50c; end: 107b7e51b; -[SCOperaWebView canGoBack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e50c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2cad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b254),PTR_s_canGoBack_1125a8c58);
  return;
}



/* Entry: 107b7e51c; end: 107b7e52b; -[SCOperaWebView canGoForward] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e51c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2caf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b254),PTR_s_canGoForward_1125a8c60);
  return;
}



/* Entry: 107b7e52c; end: 107b7e553; -[SCOperaWebView goBack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e52c(long param_1)

{
  func_0x00010bfcd2c0(*(undefined8 *)(param_1 + _DAT_11276b254));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107b7e554; end: 107b7e57b; -[SCOperaWebView goForward] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e554(long param_1)

{
  func_0x00010bfcd320(*(undefined8 *)(param_1 + _DAT_11276b254));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107b7e57c; end: 107b7e58b; -[SCOperaWebView estimatedProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e57c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf997f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b254),PTR_s_estimatedProgress_1125c3fa0);
  return;
}



/* Entry: 107b7e58c; end: 107b7e59b; -[SCOperaWebView isLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e58c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c076bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b254),PTR_s_isLoading_1125fb508);
  return;
}



/* Entry: 107b7e59c; end: 107b7e5ab; -[SCOperaWebView stopLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e59c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b254),PTR_s_stopLoading_112673280);
  return;
}



/* Entry: 107b7e5ac; end: 107b7e627; -[SCOperaWebView reload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e5ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b254;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    if (*(long *)(param_1 + _DAT_11276b248) != 0) {
      func_0x00010c09c060(*(undefined8 *)(param_1 + lVar2));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c1288e0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107b7e628; end: 107b7e637; -[SCOperaWebView URL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc2b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b254),PTR_s_URL_11254e480);
  return;
}



/* Entry: 107b7e638; end: 107b7e667; -[SCOperaWebView request] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e638(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b248);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b7e668; end: 107b7e677; -[SCOperaWebView pageTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b254),PTR_s_title_112679e90);
  return;
}



/* Entry: 107b7e678; end: 107b7e687; -[SCOperaWebView scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b254),PTR_s_scrollView_112632480);
  return;
}



/* Entry: 107b7e688; end: 107b7e697; -[SCOperaWebView viewPrintFormatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29e050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b254),PTR_s_viewPrintFormatter_112685238);
  return;
}



/* Entry: 107b7e698; end: 107b7e717; -[SCOperaWebView setFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fa0c0;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_setFrame__112645658);
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + _DAT_11276b254));
  return;
}



/* Entry: 107b7e718; end: 107b7e727; -[SCOperaWebView evaluateJavaScript:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf999d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b254),
             PTR_s_evaluateJavaScript_completionHan_1125c4018);
  return;
}



/* Entry: 107b7e728; end: 107b7e803; -[SCOperaWebView webView:decidePolicyForNavigationResponse:decisionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e728(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_5);
  func_0x00010c13b720(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11276b258;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_1 + lVar4;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) != 0) {
      param_1 = param_1 + lVar4;
      _objc_loadWeakRetained(param_1);
      func_0x00010c2a3c80();
      _objc_release(param_1);
    }
  }
  (**(code **)(param_5 + 0x10))(param_5,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107b7e804; end: 107b7ea87; -[SCOperaWebView webView:decidePolicyForNavigationAction:decisionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7e804(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar7 = (long)_DAT_11276b258;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_1 + lVar7;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) != 0) {
      lVar7 = param_1 + lVar7;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c2a3c00();
      _objc_release(lVar7);
      uVar4 = param_4;
      func_0x00010c269f20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c077440();
      _objc_release(uVar4);
      if ((int)uVar5 != 0) {
        uVar4 = param_4;
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + _DAT_11276b248);
        *(undefined8 *)(param_1 + _DAT_11276b248) = uVar4;
        _objc_release(uVar5);
      }
      goto LAB_107b7ea64;
    }
  }
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
LAB_107b7e9f4:
    uVar4 = param_4;
    func_0x00010c269f20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c077440();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      uVar4 = param_4;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + _DAT_11276b248);
      *(undefined8 *)(param_1 + _DAT_11276b248) = uVar4;
      _objc_release(uVar5);
    }
    pcVar6 = *(code **)(param_5 + 0x10);
    uVar4 = 1;
  }
  else {
    uVar2 = param_1 + lVar7;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) goto LAB_107b7e9f4;
    func_0x00010c0d6ca0(param_4);
    func_0x00010bf50fc0(param_1);
    lVar7 = param_1 + lVar7;
    _objc_loadWeakRetained();
    uVar4 = param_4;
    func_0x00010c134680(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar7;
    func_0x00010c2a3ce0();
    _objc_release(uVar4);
    _objc_release(lVar7);
    if ((int)lVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_4;
      func_0x00010c269f20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c077440();
      _objc_release(uVar4);
      if ((int)uVar5 != 0) {
        uVar4 = param_4;
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + _DAT_11276b248);
        *(undefined8 *)(param_1 + _DAT_11276b248) = uVar4;
        _objc_release(uVar5);
      }
      uVar4 = 1;
    }
    pcVar6 = *(code **)(param_5 + 0x10);
  }
  (*pcVar6)(param_5,uVar4);
LAB_107b7ea64:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b7ea88; end: 107b7ea8b; -[SCOperaWebView webViewWebContentProcessDidTerminate:] */

void FUN_107b7ea88(void)

{
  return;
}



/* Entry: 107b7ea8c; end: 107b7eb53; -[SCOperaWebView webView:didStartProvisionalNavigation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7ea8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276b25c);
  *(undefined8 *)(param_1 + _DAT_11276b25c) = param_3;
  _objc_release(uVar4);
  lVar5 = (long)_DAT_11276b258;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_1 + lVar5;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) != 0) {
      param_1 = param_1 + lVar5;
      _objc_loadWeakRetained(param_1);
      func_0x00010c2a3f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 107b7eb54; end: 107b7ec23; -[SCOperaWebView webView:didReceiveServerRedirectForProvisionalNavigation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7eb54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar4 = (long)_DAT_11276b258;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c2a3ca0();
    _objc_release(lVar3);
  }
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a3f20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b7ec24; end: 107b7ecaf; -[SCOperaWebView webView:didCommitNavigation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7ec24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11276b258;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a3c20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b7ecb0; end: 107b7ed4f; -[SCOperaWebView webView:didFinishNavigation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7ecb0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276b258;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_1 + lVar4;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) != 0) {
      param_1 = param_1 + lVar4;
      _objc_loadWeakRetained(param_1);
      func_0x00010c2a3e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 107b7ed50; end: 107b7ee4b; -[SCOperaWebView webView:didFailNavigation:withError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7ed50(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 in_x4;
  long lVar4;
  
  _objc_retain(in_x4);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3cc0(0x3f800000);
    _objc_release(uVar1);
  }
  lVar4 = (long)_DAT_11276b258;
  lVar3 = param_1 + lVar4;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar1 = param_1 + lVar4;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    _objc_release(lVar3);
    if ((uVar2 & 1) != 0) {
      lVar4 = param_1 + lVar4;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c2a3c60();
      _objc_release(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 107b7ee4c; end: 107b7ef47; -[SCOperaWebView webView:didFailProvisionalNavigation:withError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7ee4c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 in_x4;
  long lVar4;
  
  _objc_retain(in_x4);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3cc0(0x3f800000);
    _objc_release(uVar1);
  }
  lVar4 = (long)_DAT_11276b258;
  lVar3 = param_1 + lVar4;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar1 = param_1 + lVar4;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    _objc_release(lVar3);
    if ((uVar2 & 1) != 0) {
      lVar4 = param_1 + lVar4;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c2a3c60();
      _objc_release(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 107b7ef48; end: 107b7efc3; -[SCOperaWebView addPassesViewControllerDidFinish:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7ef48(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276b258;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a3f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107b7efc4; end: 107b7f067; -[SCOperaWebView webView:createWebViewWithConfiguration:forNavigationAction:windowFeatures:] */

undefined8
FUN_107b7efc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c269f20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c077440();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_5;
    func_0x00010c134680(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c060(param_3,param_2,uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return 0;
}



/* Entry: 107b7f068; end: 107b7f0af; -[SCOperaWebView userContentController:didReceiveScriptMessage:] */

void FUN_107b7f068(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  
  func_0x00010bf1e9c0(in_x3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_opt_isKindOfClass(in_x3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 107b7f0b0; end: 107b7f0bb; -[SCOperaWebView convertFromWKNavigationType:] */

ulong FUN_107b7f0b0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (4 < param_3) {
    param_3 = 0xffffffffffffffff;
  }
  return param_3;
}



/* Entry: 107b7f0bc; end: 107b7f18b; -[SCOperaWebView performPrerender] */

void FUN_107b7f0bc(void)

{
  _dispatch_time(0,100000000);
  func_0x00010058c530();
  return;
}



/* Entry: 107b7f18c; end: 107b7f18f;  */

void FUN_107b7f18c(void)

{
  return;
}



/* Entry: 107b7f190; end: 107b7f223; -[SCOperaWebView _updateProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7f190(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  uVar4 = (undefined4)param_1;
  lVar3 = (long)_DAT_11276b258;
  uVar1 = param_2 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_2 + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf997e0(*(undefined8 *)(param_2 + _DAT_11276b254));
    func_0x00010c2a3cc0((float)(double)CONCAT44(uVar5,uVar4),lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 107b7f224; end: 107b7f29b; -[SCOperaWebView _enableSwipeNavigationIfAllowed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7f224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb0ad8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c167490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11276b254),
               PTR_s_setAllowsBackForwardNavigationGe_112637740,1);
    return;
  }
  return;
}



/* Entry: 107b7f29c; end: 107b7f2bb; -[SCOperaWebView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7f29c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b258);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b7f2bc; end: 107b7f2cf; -[SCOperaWebView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7f2bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b258,param_3);
  return;
}



/* Entry: 107b7f2d0; end: 107b7f2df; -[SCOperaWebView wkWebView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b7f2d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b254);
}



/* Entry: 107b7f2e0; end: 107b7f31f; -[SCOperaWebView setWkWebView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7f2e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b254;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b7f320; end: 107b7f32f; -[SCOperaWebView wkRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b7f320(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b248);
}



/* Entry: 107b7f330; end: 107b7f36f; -[SCOperaWebView setWkRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7f330(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b248;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b7f370; end: 107b7f37f; -[SCOperaWebView favicon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b7f370(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b260);
}



/* Entry: 107b7f380; end: 107b7f3bf; -[SCOperaWebView setFavicon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7f380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b260;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b7f3c0; end: 107b7f48f; -[SCOperaWebView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7f3c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276b260,0);
  _objc_storeStrong(param_1 + _DAT_11276b248,0);
  _objc_storeStrong(param_1 + _DAT_11276b254,0);
  _objc_destroyWeak(param_1 + _DAT_11276b258);
  _objc_storeStrong(param_1 + _DAT_11276b25c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276b244,0);
  return;
}



/* Entry: 107b7f490; end: 107b7f51b;  */

void FUN_107b7f490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c25d780(param_1,param_2,&PTR____CFConstantStringClassReference_110eb0d78,
                      &PTR____CFConstantStringClassReference_110eb0d58,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d6c58;
  _objc_opt_new(PTR_PTR_1126d6c58);
  func_0x00010c2b3b40();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b7f51c; end: 107b7f577;  */

void FUN_107b7f51c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _objc_alloc_init();
  uVar1 = puRam0000000113727708;
  puRam0000000113727708 = puVar2;
  _objc_release(uVar1);
  func_0x00010c1cafa0(puRam0000000113727708);
  func_0x00010c1e62c0(puRam0000000113727708);
                    /* WARNING: Could not recover jumptable at 0x00010c1c3090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puRam0000000113727708,PTR_s_setMaxConcurrentOperationCount__11264e648,1);
  return;
}



/* Entry: 107b7f578; end: 107b7faa3;  */

void FUN_107b7f578(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar2 = PTR_PTR_1126b23c0;
  func_0x00010c0ea180();
  _objc_retainAutoreleasedReturnValue();
  FUN_107b7faa4();
  func_0x00010c2a9880(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  dVar6 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar10 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar11 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar12 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(dVar6,uVar10,uVar11,uVar12,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad8e0(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c2b4560(puVar2,param_2,param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_1 < 2) {
    uVar10 = 0;
  }
  else {
    func_0x000109128f20();
    if (puVar3 == (undefined *)0x2) {
      uVar10 = 2;
    }
    else if (puVar3 == (undefined *)0x0) {
      FUN_107b7faa4();
      dVar7 = dVar6;
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      dVar8 = dVar7;
      func_0x000100594f4c();
      dVar9 = dVar6;
      _CGRectGetWidth(dVar6,uVar10,uVar11,uVar12);
      _CGRectGetHeight(dVar6,uVar10,uVar11,uVar12);
      uVar10 = 2;
      if (dVar9 / ((dVar6 - dVar8) - dVar7) < 0.5625) {
        uVar10 = 1;
      }
    }
    else {
      uVar10 = 1;
    }
  }
  func_0x00010c2b48a0(puVar2,param_2,uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5380(0,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5460(0,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9060(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5f60(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release();
  iVar1 = (int)puVar3;
  func_0x0001008522a8();
  uVar10 = 0x4030000000000000;
  if (iVar1 == 0) {
    uVar10 = 0;
  }
  func_0x00010c2ac1c0(uVar10,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac560(puVar2,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b6c80(puVar2,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3300(0x3fd0000000000000,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bd1e0(puVar2,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ae960(puVar2,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb8d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac5c0(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c2bac60(0x3fc999999999999a,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a7540(0x3fd3333333333333,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a7560(0x3fb999999999999a,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a7580(0x3fa999999999999a,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a75a0(puVar2,param_2,0x10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b9e80(0x3feb333333333333,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8100(puVar2,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afd20(puVar2,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9b90;
  func_0x00010c0d9c20(PTR_PTR_1126c9b90);
  func_0x00010c2bc6c0(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126caf60;
  _objc_opt_new(PTR_PTR_1126caf60);
  func_0x00010c2b25c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c292ac0();
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0x1) {
    func_0x00010c2b3720(0,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3660(0,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b25c0(puVar3,param_2,2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7380(puVar2,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c9bb8;
  func_0x00010c113be0(PTR_PTR_1126c9bb8);
  func_0x00010c2b45c0(puVar2,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac940(puVar2,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac980(0x3ff0000000000000,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac960(0x3fc3333333333333,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aadc0(puVar2,param_2,0xffffffffffffffff);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac4a0(puVar2,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107b7faa4; end: 107b7fb5f;  */

undefined8 FUN_107b7faa4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c82f8;
  func_0x00010bef09e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010bf20c00();
    _CGRectIsEmpty();
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010bf20c00(puVar1);
      goto LAB_107b7fb34;
    }
  }
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar2);
LAB_107b7fb34:
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 107b7fb60; end: 107b7fbd3;  */

undefined8 FUN_107b7fb60(undefined8 param_1,uint param_2,ulong param_3,ulong param_4)

{
  if ((param_3 < 5) && ((1L << (param_3 & 0x3f) & 0x19U) == 0)) {
    if ((param_2 & 1) == 0) {
      param_1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    }
    else {
      param_1 = 0x4044000000000000;
    }
  }
  if ((param_4 & 1) != 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107b7fbd4; end: 107b7ffd3; -[SCOperaRemoteVideoController initWithVideoID:videoURL:configuration:operaDependencies:eventAnnouncer:operaPage:notificationCenter:kvoController:isInline:playerQueueManager:delegate:videoViewModel:remoteVideoProxy:bandwidthEstimator:] */

undefined8 *
FUN_107b7fbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126fa0c8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 10,param_14);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d6c60;
    _objc_alloc();
    uVar2 = param_6;
    func_0x00010c12a680(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00abc0();
    uVar4 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0xcf) = param_11;
    _objc_retain(param_16);
    uVar2 = puVar1[1];
    puVar1[1] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_17;
    _objc_release(uVar2);
    func_0x00010bef9980(param_16);
    func_0x00010be65de0(puVar1);
    func_0x00010be668c0(puVar1);
    func_0x00010be665c0(puVar1);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107b7ffd4; end: 107b8002f; -[SCOperaRemoteVideoController dealloc] */

void FUN_107b7ffd4(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12d560(*(undefined8 *)(param_1 + 0x40),param_2,param_1);
  func_0x00010c281b20(*(undefined8 *)(param_1 + 0x68));
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0xe8));
  puStack_28 = PTR_PTR_1126fa0c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107b80030; end: 107b8003b; -[SCOperaRemoteVideoController didReceiveMemoryWarning] */

void FUN_107b80030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28c3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_updateWithAction__112680b20,0xe);
  return;
}



/* Entry: 107b8003c; end: 107b80047; -[SCOperaRemoteVideoController setupPlaybackAnalyticsTracker:] */

void FUN_107b8003c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 107b80048; end: 107b8017b; -[SCOperaRemoteVideoController _observePlaybackEventLifecycle] */

void FUN_107b80048(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0ff6a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107b8017c; end: 107b802b3;  */

void FUN_107b8017c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0bd460(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b802b4; end: 107b8030b;  */

void FUN_107b802b4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfc450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didBecomeReady__11255cab0,param_2);
  return;
}



/* Entry: 107b8030c; end: 107b80413; -[SCOperaRemoteVideoController _observeChangeOfCurrentItem] */

void FUN_107b8030c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c100720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0e0780(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107b80414; end: 107b8051f;  */

void FUN_107b80414(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c071ae0(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00010bed1b60(param_1,param_2,uVar1);
    }
    uVar3 = param_4;
    func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      func_0x00010bdc6320(param_1,param_2,uVar3);
      func_0x00010bdc8f60(param_1,param_2,uVar3);
      func_0x00010be66880(param_1,param_2,uVar3);
    }
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b80520; end: 107b806d3; -[SCOperaRemoteVideoController _observePlaybackBufferForPlayerItem:] */

void FUN_107b80520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107b806d4;
  puStack_78 = &UNK_11086ffc8;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0e0780(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  _objc_retain(param_3);
  func_0x00010c0e0780(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 107b806d4; end: 107b807a7;  */

void FUN_107b806d4(float param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010c100720(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11fdc0();
    _objc_release(uVar1);
    if (param_1 != 0.0) {
      func_0x00010c28c3e0(*(undefined8 *)(param_2 + 0x98),param_3,10);
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      puVar2 = PTR_PTR_1126c7d68;
      func_0x00010bf21e00(PTR_PTR_1126c7d68);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + 0x48);
      lVar3 = param_2;
      func_0x00010c29a860(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(uVar1,param_3,puVar2,uVar4,lVar3);
      _objc_release(lVar3);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b807a8; end: 107b807ef;  */

void FUN_107b807a8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c07a360();
    if (iVar1 != 0) {
      func_0x00010c28c3e0(*(undefined8 *)(lVar2 + 0x98),param_2,0xb);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107b807f0; end: 107b808e7; -[SCOperaRemoteVideoController _observeMediaServicesWereLostNotification] */

void FUN_107b807f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010befa280(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107b808e8; end: 107b809b7;  */

void FUN_107b808e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c100720(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar3 = PTR_PTR_1126ba158;
    func_0x00010bf87dc0(PTR_PTR_1126ba158);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar4,param_2,puVar3,100,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfda80(param_1,param_2,uVar2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b809b8; end: 107b80a83; -[SCOperaRemoteVideoController _unobservePlayerItem:] */

void FUN_107b809b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_3);
  func_0x00010c25da80(puVar1,param_2,"playbackBufferEmpty");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281ae0(uVar2,param_2,param_3,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"playbackLikelyToKeepUp");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281ae0(uVar2,param_2,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010be8dee0(param_1,param_2,param_3);
  func_0x00010be8ba20(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b80a84; end: 107b80d0f; -[SCOperaRemoteVideoController _didBecomeReady:] */

void FUN_107b80a84(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  *(double *)(param_2 + 0xb8) = param_1 - *(double *)(param_2 + 0xb0);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_2 + 0xce) = 1;
  dVar10 = 1.60807493534087e-314;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107b80d10;
  puStack_70 = &UNK_110841f20;
  ppuVar1 = &puStack_88;
  lStack_68 = param_2;
  _objc_retainBlock();
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x00010bfecde0();
  _objc_release(param_4);
  uVar3 = *(ulong *)(param_2 + 0x20);
  func_0x00010bf529e0();
  if (lVar2 + 1U < uVar3) {
    lVar2 = *(long *)(param_2 + 0x78);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if ((lVar2 != 0) && (func_0x00010bf885a0(lVar2), 0.0 < dVar10)) {
      func_0x00010befe2e0(*(undefined8 *)(param_2 + 0x58));
      goto LAB_107b80ce0;
    }
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_2 + 0x78);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lVar2 == 0) {
    dVar11 = 0.0;
  }
  else {
    func_0x00010bf885a0(lVar2);
    dVar11 = dVar10;
  }
  fVar9 = SUB84(dVar10,0);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c118b40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar6);
  _objc_release(uVar5);
  if (fVar9 <= 0.0) {
    lVar7 = *(long *)(param_2 + 0x98);
    func_0x00010c252820();
    if ((6 < lVar7) || (dVar11 <= 0.0)) {
      *(undefined1 *)(param_2 + 0xcd) = 0;
      (*(code *)ppuVar1[2])(ppuVar1,1);
      goto LAB_107b80ce0;
    }
    puVar8 = (undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
    if (*(char *)(param_2 + 0xcf) == '\x01') {
      puVar8 = (undefined8 *)PTR__kCMTimeZero_110348670;
    }
    uStack_98 = puVar8[1];
    uStack_a0 = *puVar8;
    uStack_90 = puVar8[2];
  }
  else {
    dVar11 = (double)fVar9;
    _CMTimeMakeWithSeconds(&uStack_a0,0x3fb999999999999a,600);
  }
  func_0x00010be9d360(dVar11,param_2);
LAB_107b80ce0:
  _objc_release(lVar2);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 107b80d10; end: 107b80e33;  */

void FUN_107b80d10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010c28c3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98),param_2,2);
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar3 + 200) == '\x01') {
    func_0x00010c28c3e0(*(undefined8 *)(lVar3 + 0x98));
    lVar3 = *(long *)(param_1 + 0x20);
  }
  uVar1 = *(undefined8 *)(lVar3 + 0x58);
  func_0x00010c100720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc8f60(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lVar3 + 0x58);
  func_0x00010c100720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc6320(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107b80e34;
  puStack_40 = &UNK_110842e18;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_58);
  return;
}



/* Entry: 107b80e34; end: 107b80faf;  */

void FUN_107b80e34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  func_0x00010c101040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d6c68;
  _objc_alloc(PTR_PTR_1126d6c68);
  uVar4 = uVar1;
  func_0x00010beece80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010beecf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefd60(puVar2,param_2,uVar4,uVar5,0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126d6c70;
  _objc_alloc();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  func_0x00010bfe1ee0(uVar4);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  func_0x00010c235a40(uVar5);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  func_0x00010bf0dfa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  func_0x00010c299ba0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a6c0(puVar3,param_2,uVar4,uVar5,uVar6,uVar7,puVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x90) = puVar3;
  _objc_retain(puVar3);
  _objc_release(uVar4);
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b80fb0; end: 107b8113f; -[SCOperaRemoteVideoController _didSetToPlay:] */

void FUN_107b80fb0(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x00010be9f700();
  puVar1 = PTR_PTR_1126d6c68;
  _objc_alloc(PTR_PTR_1126d6c68);
  ppuVar2 = &PTR____CFConstantStringClassReference_110eb0db8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb0db8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c101040(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074c20();
  func_0x00010bfefd60(puVar1);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126d6c70;
  _objc_alloc();
  func_0x00010bfe1ee0(*(undefined8 *)(param_1 + 0x90));
  func_0x00010c235a40(*(undefined8 *)(param_1 + 0x90));
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bf0dfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c299ba0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a6c0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar4;
  _objc_retain(puVar4);
  _objc_release(uVar3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xe0));
  _objc_release(puVar4);
  *(undefined1 *)(param_1 + 200) = 1;
  if (((*(byte *)(param_1 + 0xca) & 1) == 0) && (*(char *)(param_1 + 0xcc) == '\x01')) {
    func_0x00010becca80(param_1);
    *(undefined1 *)(param_1 + 0xca) = 1;
  }
  func_0x00010be75040(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b81140; end: 107b81207; -[SCOperaRemoteVideoController _didProgress:progress:] */

void FUN_107b81140(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  if (((param_1 & 0x7fffffffffffffff) != 0x7ff0000000000000) &&
     ((*(byte *)(param_2 + 0xcd) & 1) == 0)) {
    lVar1 = *(long *)(param_2 + 0x98);
    func_0x00010c252820();
    if (lVar1 == 9) {
      func_0x00010c28c3e0(*(undefined8 *)(param_2 + 0x98),param_3,0xb);
    }
    lVar2 = *(long *)(param_2 + 0x58);
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010bfecde0(uVar3,param_3,param_4);
      func_0x00010c1e46e0(param_1,param_2,param_3,uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b81208; end: 107b8135b; -[SCOperaRemoteVideoController _didPause:] */

void FUN_107b81208(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d6c68;
  _objc_alloc(PTR_PTR_1126d6c68);
  ppuVar2 = &PTR____CFConstantStringClassReference_110eb0dd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb0dd8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c101040(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074c20();
  func_0x00010bfefd60(puVar1);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126d6c70;
  _objc_alloc();
  func_0x00010bfe1ee0(*(undefined8 *)(param_1 + 0x90));
  func_0x00010c235a40(*(undefined8 *)(param_1 + 0x90));
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bf0dfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c299ba0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a6c0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar4;
  _objc_retain(puVar4);
  _objc_release(uVar3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xe0));
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b8135c; end: 107b813eb; -[SCOperaRemoteVideoController _didStall:] */

void FUN_107b8135c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x58);
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c121f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,
                      *(undefined8 *)PTR__AVPlayerWaitingToMinimizeStallsReason_1103480d8);
  if (((uVar1 & 1) != 0) ||
     (uVar1 = uVar2,
     func_0x00010c0720c0(uVar2,param_2,
                         *(undefined8 *)
                          PTR__AVPlayerWaitingWhileEvaluatingBufferingRateReason_1103480e0),
     (int)uVar1 != 0)) {
    func_0x00010c28c3e0(*(undefined8 *)(param_1 + 0x98),param_2,10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b813ec; end: 107b81597; -[SCOperaRemoteVideoController _didEnd:] */

void FUN_107b813ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79300(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a460(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010bf78e40(*(undefined8 *)(param_1 + 0xa8));
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bfecde0();
  _objc_release(param_3);
  func_0x00010c1e46e0(0,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar4 = PTR_PTR_1126c7d68;
  func_0x00010c0ff000(PTR_PTR_1126c7d68);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29a860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar2);
  _objc_release(lVar1);
  _objc_release(puVar4);
  if ((*(byte *)(param_1 + 0xcf) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c100720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5b20();
    _objc_release(uVar2);
    func_0x00010c28c3e0(*(undefined8 *)(param_1 + 0x98));
  }
  func_0x00010be9d320(0,param_1);
  uVar5 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar3 + 1U < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010befe2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_advance_11259d260);
    return;
  }
  return;
}



/* Entry: 107b81598; end: 107b81823; -[SCOperaRemoteVideoController _didFail:error:] */

void FUN_107b81598(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c28c3e0(*(undefined8 *)(param_1 + 0x98),param_2,3);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf3ec40();
  lVar3 = param_4;
  if (lVar2 != 100) {
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c252d60();
    _objc_release(lVar1);
    if (lVar2 == 2) {
      lVar2 = *(long *)(param_1 + 0x58);
      func_0x00010c100720(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(lVar2);
    }
    else {
      func_0x00010c252d60(param_3);
    }
  }
  lVar2 = param_1;
  func_0x00010c29a860(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0d3c80();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010c120300(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar1,param_2,param_4,puVar4);
  _objc_release(puVar4);
  uVar7 = param_3;
  func_0x00010bf98d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bdc2b40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2348;
  func_0x00010c28f280(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar1,param_2,uVar6,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  puVar4 = PTR_PTR_1126c7d68;
  func_0x00010c0ff260(PTR_PTR_1126c7d68);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  lVar2 = lVar1;
  func_0x00010bf51e00(lVar1);
  func_0x00010c0eb7c0(uVar7,param_2,puVar4,uVar8,lVar2);
  _objc_release(lVar2);
  _objc_release(puVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  puVar4 = PTR_PTR_1126b2338;
  func_0x00010c0c4dc0(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  lVar2 = lVar1;
  func_0x00010bf51e00(lVar1);
  func_0x00010c0eb7c0(uVar8,param_2,puVar4,uVar7,lVar2);
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


