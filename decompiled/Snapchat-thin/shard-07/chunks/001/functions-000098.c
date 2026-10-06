/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051e5758; end: 1051e58eb;  */

void FUN_1051e5758(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dcafd8;
    func_0x00010c08fa60();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    if ((ppuVar4 != (undefined **)0x0) && (param_2 != 0)) {
      _objc_retain(param_2);
      func_0x00010bdc3100(puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010c25cda0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar2);
      if (lVar1 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        _objc_release(param_2);
        ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
        if (puVar2 != (undefined *)0x0) {
          ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
        }
        goto LAB_1051e588c;
      }
    }
  }
  _objc_release(param_2);
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_1051e588c:
  _objc_release(param_2);
  _objc_release(param_2);
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051e58ec; end: 1051e598f; -[SCSnapTextEditorScope initWithUIContainer:entryPointType:delegate:] */

undefined1 *
FUN_1051e58ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6dc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051e5990; end: 1051e5997; -[SCSnapTextEditorScope uiContainer] */

undefined8 FUN_1051e5990(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1051e5998; end: 1051e599f; -[SCSnapTextEditorScope entryPointType] */

undefined8 FUN_1051e5998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1051e59a0; end: 1051e59b7; -[SCSnapTextEditorScope delegate] */

void FUN_1051e59a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051e59b8; end: 1051e59e3; -[SCSnapTextEditorScope .cxx_destruct] */

void FUN_1051e59b8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051e59e4; end: 1051e5aa7; -[SCSnapKitIdentityWebViewScope initWithUIContainer:snapKitIdentityWebViewConfig:delegate:] */

undefined1 *
FUN_1051e59e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6dc8;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051e5aa8; end: 1051e5aaf; -[SCSnapKitIdentityWebViewScope uiContainer] */

undefined8 FUN_1051e5aa8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1051e5ab0; end: 1051e5ab7; -[SCSnapKitIdentityWebViewScope snapKitIdentityWebViewConfig] */

undefined8 FUN_1051e5ab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1051e5ab8; end: 1051e5acf; -[SCSnapKitIdentityWebViewScope delegate] */

void FUN_1051e5ab8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051e5ad0; end: 1051e5b07; -[SCSnapKitIdentityWebViewScope .cxx_destruct] */

void FUN_1051e5ad0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051e5b08; end: 1051e5c9f; -[SCSnapKitIdentityWebViewConfig initWithClientId:attachmentURL:snapKitAppId:snapKitAppName:appIconURL:contextSessionId:privacyPolicyURL:] */

undefined1 *
FUN_1051e5b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e6dd0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
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
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051e5ca0; end: 1051e5cc3; -[SCSnapKitIdentityWebViewConfig copyWithZone:] */

undefined8 FUN_1051e5ca0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1051e5cc4; end: 1051e5d73; -[SCSnapKitIdentityWebViewConfig hash] */

undefined8 * FUN_1051e5cc4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1051e5e6c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1051e5e78;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_1051e5e78;
                  }
                  goto LAB_1051e5e6c;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1051e5e78:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1051e5d74; end: 1051e5e93; -[SCSnapKitIdentityWebViewConfig isEqual:] */

long FUN_1051e5d74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1051e5e6c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1051e5e78;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if (lVar3 != *(long *)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_1051e5e78;
                  }
                  goto LAB_1051e5e6c;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1051e5e78:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1051e5e94; end: 1051e5e9b; -[SCSnapKitIdentityWebViewConfig clientId] */

undefined8 FUN_1051e5e94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1051e5e9c; end: 1051e5ea3; -[SCSnapKitIdentityWebViewConfig attachmentURL] */

undefined8 FUN_1051e5e9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1051e5ea4; end: 1051e5eab; -[SCSnapKitIdentityWebViewConfig snapKitAppId] */

undefined8 FUN_1051e5ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1051e5eac; end: 1051e5eb3; -[SCSnapKitIdentityWebViewConfig snapKitAppName] */

undefined8 FUN_1051e5eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1051e5eb4; end: 1051e5ebb; -[SCSnapKitIdentityWebViewConfig appIconURL] */

undefined8 FUN_1051e5eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1051e5ebc; end: 1051e5ec3; -[SCSnapKitIdentityWebViewConfig contextSessionId] */

undefined8 FUN_1051e5ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1051e5ec4; end: 1051e5ecb; -[SCSnapKitIdentityWebViewConfig privacyPolicyURL] */

undefined8 FUN_1051e5ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1051e5ecc; end: 1051e5f37; -[SCSnapKitIdentityWebViewConfig .cxx_destruct] */

void FUN_1051e5ecc(long param_1)

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



/* Entry: 1051e5f38; end: 1051e602b; -[SCUseTemplateFlowScope initWithUIContainer:presentingViewController:delegate:templateReference:viewSourceType:] */

undefined1 *
FUN_1051e5f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
  puStack_48 = PTR_PTR_1126e6dd8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051e602c; end: 1051e6033; -[SCUseTemplateFlowScope uiContainer] */

undefined8 FUN_1051e602c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1051e6034; end: 1051e604b; -[SCUseTemplateFlowScope presentingViewController] */

void FUN_1051e6034(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051e604c; end: 1051e6063; -[SCUseTemplateFlowScope delegate] */

void FUN_1051e604c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051e6064; end: 1051e606b; -[SCUseTemplateFlowScope templateReference] */

undefined8 FUN_1051e6064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1051e606c; end: 1051e6073; -[SCUseTemplateFlowScope viewSourceType] */

undefined4 FUN_1051e606c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1051e6074; end: 1051e60b3; -[SCUseTemplateFlowScope .cxx_destruct] */

void FUN_1051e6074(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1051e60b4; end: 1051e611f; +[SCTemplateReference templateIdWithTemplateId:] */

void FUN_1051e60b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b6050;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051e6120; end: 1051e6183; +[SCTemplateReference templateWithTemplate:] */

void FUN_1051e6120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b6050;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051e6184; end: 1051e61a7; -[SCTemplateReference copyWithZone:] */

undefined8 FUN_1051e6184(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1051e61a8; end: 1051e621f; -[SCTemplateReference hash] */

void FUN_1051e61a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126e6de0;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051e6220; end: 1051e6263; -[SCTemplateReference internalInit] */

void FUN_1051e6220(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e6de0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051e6264; end: 1051e631b; -[SCTemplateReference isEqual:] */

long FUN_1051e6264(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1051e62f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1051e6300;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1051e6300;
        }
        goto LAB_1051e62f4;
      }
    }
    lVar3 = 0;
  }
LAB_1051e6300:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1051e631c; end: 1051e639f; -[SCTemplateReference matchTemplate:templateId:] */

void FUN_1051e631c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_1051e6384;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_1051e6384;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_1051e6384:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051e63a0; end: 1051e63cf; -[SCTemplateReference .cxx_destruct] */

void FUN_1051e63a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1051e63d0; end: 1051e664b; -[SCContextMentionPreviewPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051e63d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = param_1 + _DAT_11271f220;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271f224;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271f228;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar10 = (long)_DAT_11271f22c;
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c240640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar10 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar6 = lVar10;
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  lVar1 = param_1 + _DAT_11271f230;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271f234;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271f238;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010bf4e6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1051e664c;
  puStack_a8 = &UNK_11086f718;
  puVar9 = PTR_PTR_1126ae720;
  lStack_a0 = lVar2;
  lStack_98 = lVar3;
  lStack_90 = lVar4;
  lStack_88 = lVar5;
  lStack_80 = lVar6;
  lStack_78 = lVar10;
  lStack_70 = lVar7;
  lStack_68 = lVar8;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_c0);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271f23c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar10);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 1051e664c; end: 1051e6693;  */

void FUN_1051e664c(void)

{
  _objc_alloc(PTR_PTR_1126b60c8);
  func_0x00010bffc520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051e6694; end: 1051e6713; -[SCContextMentionPreviewPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051e6694(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271f238);
  _objc_destroyWeak(param_1 + _DAT_11271f234);
  _objc_destroyWeak(param_1 + _DAT_11271f230);
  _objc_destroyWeak(param_1 + _DAT_11271f228);
  _objc_destroyWeak(param_1 + _DAT_11271f220);
  _objc_destroyWeak(param_1 + _DAT_11271f224);
  _objc_destroyWeak(param_1 + _DAT_11271f22c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f23c);
  return;
}



/* Entry: 1051e6714; end: 1051e687f; -[SCContextMentionUserTaggingSnapEditorListener initWithCaption:stickerContainer:snapchattersDataFetcher:snapEditor:legacySnapEditor:featureSettingsService:onDemandResourceDownloader:contextExperimentService:] */

undefined8 *
FUN_1051e6714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e6de8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = puVar1[1];
    puVar1[1] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[2];
    puVar1[2] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b60d0;
    _objc_alloc();
    func_0x00010c0479a0();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 1051e6880; end: 1051e6967; -[SCContextMentionUserTaggingSnapEditorListener sendActionGuard] */

void FUN_1051e6880(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar3);
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1051e6968;
  puStack_70 = &UNK_11086f7c8;
  ppuVar1 = &puStack_88;
  lStack_68 = param_1;
  uStack_60 = uVar3;
  puStack_48 = puStack_58;
  _objc_retainBlock(ppuVar1);
  puVar2 = PTR_PTR_1126afee8;
  func_0x00010c113ca0(PTR_PTR_1126afee8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051e6968; end: 1051e6a83;  */

void FUN_1051e6968(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0bfc40(param_2);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) & 1) == 0) {
    (**(code **)(param_3 + 0x10))(param_3,1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_3);
    func_0x00010c10be40(uVar1);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1051e6a84; end: 1051e6a87;  */

void FUN_1051e6a84(void)

{
  return;
}



/* Entry: 1051e6a88; end: 1051e6ab7;  */

void FUN_1051e6a88(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be444c0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 1051e6ab8; end: 1051e6b1f;  */

void FUN_1051e6ab8(long param_1,ulong param_2,undefined8 param_3,long param_4,long param_5)

{
  bool bVar1;
  
  _objc_retain(param_5);
  if ((param_2 & 1) == 0) {
    func_0x00010bf529e0();
    bVar1 = param_5 != 0 || param_4 != 0;
  }
  else {
    bVar1 = true;
  }
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = bVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1051e6b20; end: 1051e6b33;  */

void FUN_1051e6b20(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001051e6b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 != 2);
  return;
}



/* Entry: 1051e6b34; end: 1051e6bc3; -[SCContextMentionUserTaggingSnapEditorListener _isStorySend] */

ulong FUN_1051e6b34(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c077e60();
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar1;
    func_0x00010befc200(uVar1);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 1051e6bc4; end: 1051e6bff; -[SCContextMentionUserTaggingSnapEditorListener .cxx_destruct] */

void FUN_1051e6bc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051e6c00; end: 1051e7abf; -[SCContextMessagingController initWithDelegate:sessionParams:userSession:circumstanceEngine:parentViewController:snapchatterServices:logger:animator:conversationIdResolver:notificationManager:storiesSnapReadReceiptCoordinator:groupsDataCreator:groupsDataFetcher:storyShareSender:inputPlugins:userInfoServices:snapProPreferencesManager:blizzardLogger:storiesGrapheneMetricsEmitter:friendmojiFilteredContainer:recipientUserId:plusFeatureGating:plusUpsellManaging:plusUpsellNotificationScopeServices:contextActionParams:contextExperimentService:messagingExperimentService:featureSettingsService:conversationDataFetcher:swipeDirection:replyOptions:nglStudySettingServices:creatorSubscriptionsInfoProvider:preferences:backgroundPerformer:messageActionHandler:] */

undefined8 *
FUN_1051e6c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,long param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             ulong param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
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
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  puStack_80 = PTR_PTR_1126e6df0;
  puVar3 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar3 + 0x33,param_3);
    _objc_retain(param_4);
    uVar4 = puVar3[1];
    puVar3[1] = param_4;
    _objc_release(uVar4);
    _objc_retain(param_27);
    uVar4 = puVar3[0x23];
    puVar3[0x23] = param_27;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = puVar3[2];
    puVar3[2] = param_5;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = puVar3[4];
    puVar3[4] = param_8;
    _objc_release(uVar4);
    _objc_storeWeak(puVar3 + 0xb,param_7);
    _objc_retain(param_9);
    uVar4 = puVar3[8];
    puVar3[8] = param_9;
    _objc_release(uVar4);
    _objc_retain(param_21);
    uVar4 = puVar3[0x1c];
    puVar3[0x1c] = param_21;
    _objc_release(uVar4);
    _objc_retain(param_22);
    uVar4 = puVar3[0x21];
    puVar3[0x21] = param_22;
    _objc_release(uVar4);
    _objc_retain(param_24);
    uVar4 = puVar3[0x1f];
    puVar3[0x1f] = param_24;
    _objc_release(uVar4);
    _objc_retain(param_25);
    uVar4 = puVar3[0x20];
    puVar3[0x20] = param_25;
    _objc_release(uVar4);
    puVar7 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = puVar3[0x22];
    puVar3[0x22] = puVar7;
    _objc_release(uVar4);
    _objc_retain(param_31);
    uVar4 = puVar3[0x2a];
    puVar3[0x2a] = param_31;
    _objc_release(uVar4);
    _objc_retain(param_34);
    uVar4 = puVar3[0x2b];
    puVar3[0x2b] = param_34;
    _objc_release(uVar4);
    _objc_retain(param_35);
    uVar4 = puVar3[0x2c];
    puVar3[0x2c] = param_35;
    _objc_release(uVar4);
    _objc_retain(param_36);
    uVar4 = puVar3[0x2d];
    puVar3[0x2d] = param_36;
    _objc_release(uVar4);
    _objc_retain(param_37);
    uVar4 = puVar3[0x2e];
    puVar3[0x2e] = param_37;
    _objc_release(uVar4);
    _objc_retain(param_38);
    uVar4 = puVar3[0x2f];
    puVar3[0x2f] = param_38;
    _objc_release(uVar4);
    uVar4 = param_4;
    func_0x0001065ed63c(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = param_4;
    func_0x0001084362d8(param_4,uVar4,param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = puVar3[0x32];
    puVar3[0x32] = uVar18;
    _objc_release(uVar17);
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = puVar3[0x14];
    puVar3[0x14] = param_6;
    _objc_release(uVar4);
    _objc_retain(param_12);
    uVar4 = puVar3[0x16];
    puVar3[0x16] = param_12;
    _objc_release(uVar4);
    _objc_retain(param_13);
    uVar4 = puVar3[0x17];
    puVar3[0x17] = param_13;
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar4 = puVar3[0x12];
    puVar3[0x12] = param_11;
    _objc_release(uVar4);
    _objc_retain(param_15);
    uVar4 = puVar3[0x18];
    puVar3[0x18] = param_15;
    _objc_release(uVar4);
    _objc_retain(param_18);
    uVar4 = puVar3[0x15];
    puVar3[0x15] = param_18;
    _objc_release(uVar4);
    puVar7 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = puVar3[0x19];
    puVar3[0x19] = puVar7;
    _objc_release(uVar4);
    puVar7 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = puVar3[0x1a];
    puVar3[0x1a] = puVar7;
    _objc_release(uVar4);
    puVar5 = puVar3;
    func_0x00010bde8c60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar3[0x1e];
    puVar3[0x1e] = puVar5;
    _objc_release(uVar4);
    _objc_retain(param_19);
    uVar4 = puVar3[0x1b];
    puVar3[0x1b] = param_19;
    _objc_release(uVar4);
    puVar7 = PTR_PTR_1126ae720;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1051e7ac0;
    puStack_a0 = &UNK_11086f7f8;
    _objc_retain(param_4);
    uStack_98 = param_4;
    _objc_retain(param_28);
    uStack_90 = param_28;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar3[0x24];
    puVar3[0x24] = puVar7;
    _objc_release(uVar4);
    _objc_retain(param_26);
    uVar4 = puVar3[0x26];
    puVar3[0x26] = param_26;
    _objc_release(uVar4);
    uVar17 = puVar3[0x23];
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar17;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar4;
    func_0x00010c07f4a0();
    _objc_release(uVar4);
    _objc_release(uVar17);
    if ((int)uVar18 == 0) {
      puVar7 = (undefined *)puVar3[1];
      func_0x000108436154(puVar7,puVar3[0x14]);
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined *)0x0) {
        puVar7 = PTR_PTR_1126b5ba0;
        _objc_alloc();
        func_0x00010c0044c0();
      }
    }
    else {
      puVar6 = (undefined *)puVar3[0x23];
      func_0x00010c242420();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c131ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
    }
    puVar6 = puVar7;
    func_0x00010c0748c0();
    if ((int)puVar6 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar7;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = puVar3[0x30];
    puVar3[0x30] = puVar6;
    _objc_release(uVar4);
    puVar3[0xd] = (ulong)(puVar3[0x30] != 0);
    func_0x00010bed2800(puVar3);
    uVar4 = puVar3[4];
    func_0x00010c244d60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x0001065ec40c(puVar7,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = puVar3[0x31];
    puVar3[0x31] = puVar6;
    _objc_release(uVar18);
    _objc_release(uVar4);
    uVar18 = puVar3[0x31];
    _objc_retain(uVar18);
    uVar4 = uVar18;
    if (puVar3[0xd] == 1) {
      puVar6 = puVar7;
      func_0x0001065ec8e8(puVar7,puVar3[0x18],puVar3[2],puVar3[0x15]);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = puVar3[0xe];
      puVar3[0xe] = puVar6;
      _objc_release(uVar4);
      uVar4 = puVar3[0xe];
      _objc_retain(uVar4);
      _objc_release(uVar18);
      if ((puVar3[0x31] != 0) && (puVar3[0xe] != 0)) {
        func_0x00010c0720c0();
      }
    }
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar8 = &PTR____CFConstantStringClassReference_110dcb018;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcb018,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = puVar3[0xf];
    puVar3[0xf] = puVar6;
    _objc_release(uVar18);
    _objc_release(ppuVar8);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar8 = &PTR____CFConstantStringClassReference_110dcb038;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcb038,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = puVar3[0x10];
    puVar3[0x10] = puVar6;
    _objc_release(uVar18);
    _objc_release(ppuVar8);
    puVar3[0x13] = param_32;
    puVar6 = PTR_PTR_1126b60d8;
    _objc_alloc();
    uVar18 = param_4;
    func_0x00010c25a6e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23a020();
    uVar17 = param_4;
    func_0x00010c25a6e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c239780();
    func_0x00010c00d480();
    uVar19 = puVar3[10];
    puVar3[10] = puVar6;
    _objc_release(uVar19);
    _objc_release(uVar17);
    _objc_release(uVar18);
    func_0x00010c18b5e0(puVar3[10]);
    puVar5 = puVar3 + 0x33;
    _objc_loadWeakRetained(puVar5);
    func_0x00010c0cbc60();
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010bdc51e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1051e7c68;
    puStack_c8 = &UNK_11086f858;
    uVar18 = param_17;
    puStack_c0 = puVar5;
    func_0x00010c0b8600(param_17);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar6;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x1051e7d60;
    puStack_f0 = &UNK_11086f858;
    uVar17 = param_17;
    puStack_e8 = puVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_24;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c113de0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c252440();
    if (lVar12 == 3) {
      uVar13 = puVar3[1];
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar13;
      func_0x00010c23a020();
      iVar1 = (int)uVar19;
      _objc_release(uVar13);
    }
    else {
      iVar1 = 0;
    }
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    uVar2 = (uint)puVar3[0x14];
    func_0x000108f48498();
    if ((((uVar2 ^ 1) & 1) == 0) && (iVar1 != 0)) {
      uVar19 = puVar3[1];
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07a880();
      _objc_release(uVar19);
    }
    puVar6 = PTR_PTR_1126b60e0;
    puVar14 = puVar3;
    func_0x00010bdc51e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf56980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar15 = puVar6;
    func_0x00010c065f00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec7a80(puVar3);
    _objc_release(puVar15);
    puVar15 = puVar6;
    func_0x00010c065ea0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec7a60(puVar3);
    _objc_release(puVar15);
    puVar15 = puVar6;
    func_0x00010c255100(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec85c0(puVar3);
    _objc_release(puVar15);
    func_0x00010c18b5e0(puVar6);
    puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1881e0(puVar6);
    _objc_release(puVar15);
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release();
    if ((((param_33 & 1) != 0) && (lRam00000001138466f0 != 2)) && (lRam00000001138466f0 == 0)) {
      func_0x00010099c714();
    }
    func_0x00010c20eaa0(puVar6);
    _objc_retain(puVar6);
    uVar19 = puVar3[3];
    puVar3[3] = puVar6;
    _objc_release(uVar19);
    _objc_initWeak(auStack_110,puVar3);
    puVar15 = puVar6;
    func_0x00010c068ce0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_118,auStack_110);
    puVar16 = puVar15;
    func_0x00010c25ff60(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar16);
    _objc_release(puVar15);
    func_0x00010c1ad2a0(puVar3[10]);
    puVar14 = puVar3 + 0xb;
    _objc_loadWeakRetained(puVar14);
    func_0x00010c1dad80(puVar3[3]);
    _objc_release(puVar14);
    func_0x00010c09c7a0(puVar3[10]);
    func_0x00010bed5300(puVar3);
    _objc_retain(param_30);
    uVar19 = puVar3[0x28];
    puVar3[0x28] = param_30;
    _objc_release(uVar19);
    puVar15 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = puVar3[0x29];
    puVar3[0x29] = puVar15;
    _objc_release(uVar19);
    _objc_destroyWeak(auStack_118);
    _objc_destroyWeak(auStack_110);
    _objc_release(puVar6);
    _objc_release(uVar17);
    _objc_release(uVar18);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar7);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
  }
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
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
  return puVar3;
}



/* Entry: 1051e7ac0; end: 1051e7c67;  */

void FUN_1051e7ac0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  _objc_retain(uVar2);
  lVar3 = lVar1;
  func_0x00010c08bda0();
  if ((((lVar3 == 0xf) || (lVar3 = lVar1, func_0x00010c08bda0(), lVar3 == 0x14)) ||
      (lVar3 = lVar1, func_0x00010c08bda0(), lVar3 == 0x10)) ||
     ((lVar3 = lVar1, func_0x00010c08bda0(), lVar3 == 0x18 ||
      (lVar3 = lVar1, func_0x00010c29d360(), lVar3 == 0x65)))) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1051e8714;
    uStack_40 = 0x1051e8724;
    uStack_38 = 0;
    lVar3 = lVar1;
    func_0x00010bfa29a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bed40();
    _objc_release(lVar3);
    uVar4 = puStack_58[5];
    _objc_retain(uVar4);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1051e7c68; end: 1051e7e9f;  */

void FUN_1051e7c68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1051e7cf8;
  puStack_30 = &UNK_11086f828;
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



/* Entry: 1051e7ea0; end: 1051e7ebb;  */

void FUN_1051e7ea0(void)

{
  _objc_opt_new(PTR_PTR_1126b60e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051e7ebc; end: 1051e8063; -[SCContextMessagingController _sourceInformation] */

void FUN_1051e7ebc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  uVar4 = *(undefined8 *)(param_1 + 0x150);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bddcfc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  uStack_50 = (undefined1)uVar3;
  uStack_58 = uVar5;
  _objc_copyWeak(auStack_60,auStack_48);
  func_0x00010bfb2660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c247d40();
  uVar1 = *(undefined8 *)(param_1 + 200);
  func_0x00010bf41860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1051e8064; end: 1051e82eb;  */

void FUN_1051e8064(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(long *)(param_1 + 0x30) == 0)) {
    puVar1 = (undefined *)(param_1 + 0x28);
    _objc_loadWeakRetained();
    puVar2 = puVar1;
    func_0x00010be6cba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae6b8;
joined_r0x0001051e815c:
    PTR_PTR_1126ae6b8 = puVar1;
    if (puVar2 != (undefined *)0x0) {
      _objc_retain(puVar2);
      func_0x00010bf54280(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      goto LAB_1051e8198;
    }
  }
  else {
    puVar2 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = param_2;
      func_0x00010bfb50e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126ae6b8;
      goto joined_r0x0001051e815c;
    }
  }
  puVar1 = PTR_PTR_1126ae6b8;
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_1051e8198:
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051e82ec; end: 1051e84bf;  */

void FUN_1051e82ec(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_3;
      func_0x00010bfb50e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06e040();
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126b60f0;
      _objc_alloc(PTR_PTR_1126b60f0);
      lVar1 = param_3;
      func_0x00010bfb50e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf50460();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010bfb50e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf50920();
      lVar5 = param_2;
      func_0x00010bfb50e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c004dc0(puVar3);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar7 = PTR_PTR_1126ae750;
      func_0x00010c2468a0(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      goto LAB_1051e848c;
    }
  }
  puVar7 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
LAB_1051e848c:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1051e84c0; end: 1051e85a7; -[SCContextMessagingController _recipientSnapchattersForSourceAndStoryMetadata:] */

void FUN_1051e84c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_11086f9c8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf870a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1051e8768;
  puStack_40 = &UNK_110862e08;
  uVar1 = uVar2;
  uStack_38 = uVar3;
  func_0x00010bfb26a0(uVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1051e85a8; end: 1051e8713;  */

void FUN_1051e85a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1051e8714;
  uStack_40 = 0x1051e8724;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010bfb0d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf36840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c11e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar4 = puStack_58[5];
  func_0x00010c08fa60();
  puVar5 = PTR_PTR_1126ae750;
  if (lVar4 == 0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0ec800();
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051e8714; end: 1051e872b;  */

void FUN_1051e8714(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1051e872c; end: 1051e8763;  */

void FUN_1051e872c(long param_1,undefined8 param_2)

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



/* Entry: 1051e8764; end: 1051e8767;  */

void FUN_1051e8764(void)

{
  return;
}



/* Entry: 1051e8768; end: 1051e88c3;  */

void FUN_1051e8768(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_2;
    func_0x00010bfb50e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c09dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    uVar6 = *(undefined8 *)(param_2 + 8);
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 8);
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23a020();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_2 + 8);
    func_0x00010c120c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c231e20();
    _objc_release(uVar7);
    uVar8 = *(undefined8 *)(param_2 + 8);
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c07a880();
    if ((int)uVar7 != 0) {
      func_0x000108f48498();
    }
    _objc_release(uVar8);
    uVar10 = *(undefined8 *)(param_2 + 0x120);
    _objc_retain(uVar10);
    uVar8 = *(undefined8 *)(param_2 + 0x118);
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07f4a0();
    _objc_release(uVar7);
    _objc_release(uVar8);
    uVar7 = *(undefined8 *)(param_2 + 8);
    func_0x00010c0ca140();
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = &uStack_e8;
    uStack_e8 = 0;
    uStack_d8 = 0x2020000000;
    uStack_d0 = 0;
    uVar8 = *(undefined8 *)(param_2 + 8);
    func_0x00010bfa29a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bed40();
    _objc_release(uVar8);
    puVar1 = param_2;
    func_0x00010bebe640(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + 0xd0);
    func_0x00010bf870a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf41860(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(puVar1);
    func_0x00010be870e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar6);
    _objc_retain(uVar7);
    puVar3 = puVar4;
    func_0x00010bf41860(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(param_2);
    _objc_release(puVar4);
    __Block_object_dispose(&uStack_e8,8);
    _objc_release(uVar7);
    _objc_release(uVar10);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051e88c4; end: 1051e8bf3; -[SCContextMessagingController _activeConversationInformation] */

void FUN_1051e88c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23a020();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c120c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c231e20();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c07a880();
  if ((int)uVar2 != 0) {
    func_0x000108f48498();
  }
  _objc_release(uVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x120);
  _objc_retain(uVar7);
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c131ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07f4a0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0ca140();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa29a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar3);
  lVar4 = param_1;
  func_0x00010bebe640(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf870a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf41860(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010be870e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  lVar4 = lVar6;
  func_0x00010bf41860(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(lVar6);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1051e8bf4; end: 1051e8c1b;  */

void FUN_1051e8bf4(long param_1)

{
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_stack_00000008;
  return;
}



/* Entry: 1051e8c1c; end: 1051e8f97;  */

void FUN_1051e8c1c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    puVar11 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = lVar1;
    func_0x00010bfb50e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b6100;
    _objc_alloc();
    func_0x00010c030580();
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 0;
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x2020000000;
    uStack_90 = 0;
    lVar6 = lVar4;
    func_0x00010bf36840(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar3);
    func_0x00010c0c11e0(lVar6);
    _objc_release(lVar6);
    puVar7 = PTR_PTR_1126b6108;
    _objc_alloc();
    lVar6 = lVar4;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf50920();
    func_0x00010bf37160();
    lVar8 = lVar4;
    func_0x00010bf36840();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010c0ec5e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06e040();
    func_0x00010c004da0(puVar7);
    _objc_release(lVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(lVar6);
    puVar11 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_a8,8);
    __Block_object_dispose(&uStack_88,8);
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1051e8f98; end: 1051e904b;  */

void FUN_1051e8f98(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    _objc_retain(uVar3);
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x000100bec1f0(uVar3,param_2);
    *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar2;
    uVar2 = uVar3;
    func_0x000100bf0c60(uVar3,param_2);
    *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051e904c; end: 1051e904f;  */

void FUN_1051e904c(void)

{
  return;
}



/* Entry: 1051e9050; end: 1051e910b; -[SCContextMessagingController _conversationIdObservable] */

void FUN_1051e9050(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uVar4 = *(undefined8 *)(param_1 + 200);
  _objc_retain(uVar3);
  func_0x00010bf870a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bfb26a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1051e910c; end: 1051e920f;  */

void FUN_1051e910c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x20);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bfb50e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf50400(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051e9210; end: 1051e9233; -[SCContextMessagingController _updateActiveConversationInformation] */

void FUN_1051e9210(undefined8 param_1)

{
  func_0x00010bee06a0();
                    /* WARNING: Could not recover jumptable at 0x00010bee0fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStoryMetadata_112595d98);
  return;
}



/* Entry: 1051e9234; end: 1051e9303; -[SCContextMessagingController _updateSourceInformation] */

void FUN_1051e9234(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010c247d40(*(undefined8 *)(param_1 + 0x40));
  lVar1 = param_1;
  func_0x00010bddce20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 200);
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,puVar3);
  }
  else {
    puVar3 = PTR_PTR_1126b6110;
    _objc_alloc(PTR_PTR_1126b6110);
    func_0x00010bffdd40();
    uVar4 = *(undefined8 *)(param_1 + 200);
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051e9304; end: 1051e938b; -[SCContextMessagingController _updateStoryMetadata] */

void FUN_1051e9304(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126ae750;
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25a6e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25b160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051e938c; end: 1051e93b3; -[SCContextMessagingController fullscreenViewController] */

void FUN_1051e938c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1051e93b4; end: 1051e93bb; -[SCContextMessagingController setActionMenuViewController:] */

void FUN_1051e93b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c161c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_setActionMenuViewController__112636120);
  return;
}



/* Entry: 1051e93bc; end: 1051e93c3; -[SCContextMessagingController actionMenuViewController] */

void FUN_1051e93bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_actionMenuViewController_1125994b0);
  return;
}



/* Entry: 1051e93c4; end: 1051e9413; -[SCContextMessagingController isFullscreen] */

bool FUN_1051e93c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 1051e9414; end: 1051e944b; -[SCContextMessagingController isFullscreenOrWillBecomeFullscreen] */

bool FUN_1051e9414(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c10fd00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 1051e944c; end: 1051e94af; -[SCContextMessagingController isCurrentlyVisibleInsideInputBarContainer] */

bool FUN_1051e944c(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = param_1;
  func_0x00010c074120();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010c29bf00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 != 0;
    _objc_release();
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1051e94b0; end: 1051e952f; -[SCContextMessagingController inputBarView] */

void FUN_1051e94b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    lVar3 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar3);
    func_0x00010be7a900(param_1,param_2,uVar2,lVar3);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + 0x60);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1051e9530; end: 1051e953b; -[SCContextMessagingController inputBarViewHeight] */

undefined8 FUN_1051e9530(void)

{
  return 0x4059000000000000;
}



/* Entry: 1051e953c; end: 1051e96c7; -[SCContextMessagingController presentInFullscreenAnimated:inputItemDeeplink:withKeyboardFocused:completion:] */

void FUN_1051e953c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c28ba40(param_1);
  lVar1 = param_1;
  func_0x00010c074140();
  if ((int)lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      func_0x00010c0720c0();
    }
    func_0x00010c202fe0(*(undefined8 *)(param_1 + 0x50));
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(param_6);
    func_0x00010c10eda0(param_1);
    _objc_release(param_1);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1051e96c8; end: 1051e972b;  */

void FUN_1051e96c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      func_0x00010c158ba0(*(undefined8 *)(lVar1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x20),0);
    }
    func_0x00010be7f260(lVar1);
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051e972c; end: 1051e97b7; -[SCContextMessagingController _endFullscreenModeWithCompletion:] */

void FUN_1051e972c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c074140();
  if ((uVar1 & 1) == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    func_0x00010bdcc200(0,0x3fd0000000000000,param_1);
    if (*(long *)(param_1 + 0x98) == 1) {
      func_0x00010c27a900(*(undefined8 *)(param_1 + 0x18),param_2,0,0,0);
    }
    func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x50),param_2,1,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051e97b8; end: 1051e99ab; -[SCContextMessagingController _presentUpsell] */

void FUN_1051e97b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c23a020();
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_1051e8714;
    uStack_50 = 0x1051e8724;
    ppuStack_48 = &PTR____CFConstantStringClassReference_110daafd8;
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c290fa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1051e99ac;
    puStack_80 = &UNK_110842b58;
    puStack_78 = &uStack_70;
    func_0x00010c0c12a0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar2 = puStack_68[5];
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      func_0x00010be7d640(param_1);
    }
    else {
      _objc_initWeak(auStack_a0,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x160);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_a8,auStack_a0);
      func_0x00010c0716e0(uVar3);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_a0);
    }
    __Block_object_dispose(&uStack_70,8);
    _objc_release(ppuStack_48);
  }
  return;
}



/* Entry: 1051e99ac; end: 1051e99e3;  */

void FUN_1051e99ac(long param_1,undefined8 param_2)

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



/* Entry: 1051e99e4; end: 1051e99e7;  */

void FUN_1051e99e4(void)

{
  return;
}



/* Entry: 1051e99e8; end: 1051e9a7f;  */

void FUN_1051e99e8(long param_1,undefined8 param_2)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1051e9a80;
  puStack_40 = &UNK_11086fae8;
  uStack_28 = param_2;
  _objc_copyWeak(auStack_30,param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_30);
  return;
}



/* Entry: 1051e9a80; end: 1051e9adb;  */

void FUN_1051e9a80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  if (lVar2 == 0) {
    func_0x00010be7ad40(lVar1,param_2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  }
  else {
    func_0x00010be7d640(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051e9adc; end: 1051e9b9f; -[SCContextMessagingController _presentPlusNotification] */

void FUN_1051e9adc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25ac80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e56a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar4;
  func_0x00010c083820();
  if ((int)uVar2 != 0) {
    puVar5 = PTR_PTR_1126b6118;
    func_0x00010c102620(PTR_PTR_1126b6118);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0d100(param_1,param_2,puVar5);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1051e9ba0; end: 1051e9d17; -[SCContextMessagingController _presentCreatorSubscriptionNotification:] */

void FUN_1051e9ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e56a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar4;
  func_0x00010c083820();
  if ((int)uVar2 != 0) {
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar7 = *(long *)(param_1 + 8);
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    if (lVar8 != 0) {
      lVar5 = lVar8;
    }
    _objc_retain(lVar5);
    _objc_release(lVar8);
    _objc_release(lVar7);
    lVar8 = lVar5;
    func_0x00010c08fa60();
    if (lVar8 != 0) {
      puVar9 = PTR_PTR_1126b6118;
      func_0x00010bf5b8e0(PTR_PTR_1126b6118,param_2,param_3,lVar5,lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0d100(param_1,param_2,puVar9);
      _objc_release(puVar9);
    }
    _objc_release(lVar5);
    _objc_release(lVar6);
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051e9d18; end: 1051e9eb7; -[SCContextMessagingController _exposePlusUpsellNotification:] */

void FUN_1051e9d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x128) == 0) {
    if (*(long *)(param_1 + 0x138) == 0) {
      _objc_initWeak(auStack_58,param_1);
      puVar1 = PTR_PTR_1126aeaf8;
      _objc_alloc();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_1051e9eb8;
      puStack_68 = &UNK_110849680;
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_copyWeak(auStack_88,auStack_58);
      func_0x00010c0311a0();
      uVar2 = *(undefined8 *)(param_1 + 0x138);
      *(undefined **)(param_1 + 0x138) = puVar1;
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010c247d40(*(undefined8 *)(param_1 + 0x40));
    func_0x00010bf22c60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = uVar2;
    _objc_retain();
    _objc_release(uVar3);
    func_0x00010c08b400(uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1051e9eb8; end: 1051e9f67;  */

void FUN_1051e9eb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(param_2);
    func_0x00010bf84b00(uVar1);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1051e9f68; end: 1051e9fa7;  */

void FUN_1051e9f68(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10eda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051e9fa8; end: 1051ea03b;  */

void FUN_1051e9fa8(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    if ((lVar1 == 0) || (func_0x00010c06d1e0(), (int)lVar1 != 0)) {
      if (param_2 != 0) {
        (**(code **)(param_2 + 0x10))(param_2);
      }
    }
    else {
      lVar1 = param_1 + 0x58;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c10eda0();
      _objc_release(lVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051ea03c; end: 1051ea0bb; -[SCContextMessagingController messagingViewControllerWillPresentFullscreen:] */

void FUN_1051ea03c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cbce0();
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cbc60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051ea0bc; end: 1051ea2f7; -[SCContextMessagingController messagingViewControllerWasDismissedFromFullscreen:animated:] */

void FUN_1051ea0bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010c27a900(*(undefined8 *)(param_1 + 0x18),param_2,0,0,0);
  func_0x00010c13a0e0(*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar6);
    uVar1 = uVar6;
    func_0x00010c0f3ca0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b760();
    _objc_release(uVar1);
    lVar2 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bef76e0();
    _objc_release(lVar2);
    uVar1 = uVar6;
    func_0x00010c29bf00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c08de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0(uVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = uVar6;
    func_0x00010c29bf00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c2793a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0(uVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = uVar6;
    func_0x00010c29bf00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bf1ff80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0(uVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010c1ad800(*(undefined8 *)(param_1 + 0x18),param_2,1);
    _objc_release(uVar6);
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cbca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051ea2f8; end: 1051ea34f; -[SCContextMessagingController swapReplyRecipient] */

void FUN_1051ea2f8(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = *(long *)(param_1 + 0x68) != 1;
  lVar1 = 0x70;
  if (!bVar2) {
    lVar1 = 0x188;
  }
  *(ulong *)(param_1 + 0x68) = (ulong)bVar2;
  func_0x00010c286460(*(undefined8 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + lVar1));
  func_0x00010bed5300(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateActiveConversationInforma_1125923a8);
  return;
}



/* Entry: 1051ea350; end: 1051ea37f; -[SCContextMessagingController _updateChatPlaceholderTextForRecipientType:animated:] */

void FUN_1051ea350(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    lVar1 = 0x78;
  }
  else {
    if (*(long *)(param_1 + 0x68) != 1) {
      return;
    }
    lVar1 = 0x80;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1dcb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setPlaceholderText_animated__112654d08,
             *(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1051ea380; end: 1051ea40b; -[SCContextMessagingController _chatIdentifier] */

void FUN_1051ea380(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    func_0x00010bddcfc0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b01c0;
    func_0x00010c294260(PTR_PTR_1126b01c0,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else if (*(long *)(param_1 + 0x68) == 1) {
    puVar1 = PTR_PTR_1126b01c0;
    func_0x00010bfcf680(PTR_PTR_1126b01c0,param_2,*(undefined8 *)(param_1 + 0x180));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


