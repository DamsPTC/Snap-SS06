/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f1638c; end: 105f164eb; -[SCGrapheneRegistry locationGraphene] */

void FUN_105f1638c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105f16414;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c2438 != -1) {
    func_0x00010002a2fc(0x1136c2438,&puStack_48);
  }
  uVar1 = uRam00000001136c2430;
  _objc_retain(uRam00000001136c2430);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f164ec; end: 105f16563;  */

void FUN_105f164ec(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f8730,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f16564; end: 105f165db;  */

void FUN_105f16564(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f8780,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f165dc; end: 105f1680b;  */

void FUN_105f165dc(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f34eb3c;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f34eb3c;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1108f87d0;
    puVar2 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108f87d0,puVar2,param_5);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_105f165dc(puVar3,puVar1,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f1680c; end: 105f1689f;  */

void FUN_105f1680c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_105f165dc(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f168a0; end: 105f16917;  */

void FUN_105f168a0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f8820,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f16918; end: 105f1698f;  */

void FUN_105f16918(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f8870,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f16990; end: 105f16aa7;  */

undefined1 ** FUN_105f16990(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 ***pppuVar4;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f34ebc9;
    if (param_2 == 0) {
      puVar1 = &UNK_10f34ebce;
    }
    func_0x00010002b838(appuStack_50,puVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108f88c0,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pppuVar4 = &ppuStack_a0;
  pcStack_78 = FUN_105f16aa8;
  puStack_98 = PTR_PTR_1126edfe0;
  ppuStack_a0 = ppuVar3;
  plStack_90 = unaff_x20;
  ppuStack_88 = ppuVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&ppuStack_a0,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined1 ***)0x0) {
    ppuVar2 = (undefined1 **)pppuVar4;
    (*(code *)PTR_DAT_113403208)();
    pppuVar4[1] = ppuVar2;
  }
  return (undefined1 **)pppuVar4;
}



/* Entry: 105f16aa8; end: 105f16b1b; -[SCGrapheneSimplifiedSharingMetric2 init] */

undefined1 * FUN_105f16aa8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126edfe0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105f16b1c; end: 105f16c8f;  */

void FUN_105f16b1c(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f34ebf4;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108f8950;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108f8950,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_105f16c90;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_1108f89a0,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 105f16c90; end: 105f16d07;  */

void FUN_105f16c90(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f89a0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f16d08; end: 105f16e1f;  */

undefined1 ** FUN_105f16d08(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined8 *unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f34ec37;
    if (param_2 == 0) {
      puVar1 = &UNK_10f34ec3c;
    }
    func_0x00010002b838(appuStack_50,puVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108f89f0,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc(ppuVar2);
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv(appuStack_50[0]);
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume(ppuVar2);
  return &PTR____CFConstantStringClassReference_110e316b8;
}



/* Entry: 105f16e20; end: 105f16e2b; +[SCCLocationShareChoiceTrayComponent componentPath] */

undefined ** FUN_105f16e20(void)

{
  return &PTR____CFConstantStringClassReference_110e316b8;
}



/* Entry: 105f16e2c; end: 105f16e4f; -[SCCLocationShareChoiceTrayComponent initWithViewModel:componentContext:runtime:] */

void FUN_105f16e2c(void)

{
  FUN_105f16f70(PTR_PTR_1126edfe8);
  return;
}



/* Entry: 105f16e50; end: 105f16e87; -[SCCLocationShareChoiceTrayComponent setViewModel:] */

void FUN_105f16e50(void)

{
  func_0x000105f16f8c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f16f9c();
  func_0x000105f16f84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f16e88; end: 105f16ec7; -[SCCLocationShareChoiceTrayComponent viewModel] */

void FUN_105f16e88(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f16f84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f16ec8; end: 105f16ed3; +[SCCLocationShareTrayComponent componentPath] */

undefined ** FUN_105f16ec8(void)

{
  return &PTR____CFConstantStringClassReference_110e316d8;
}



/* Entry: 105f16ed4; end: 105f16ef7; -[SCCLocationShareTrayComponent initWithViewModel:componentContext:runtime:] */

void FUN_105f16ed4(void)

{
  FUN_105f16f70(PTR_PTR_1126edff0);
  return;
}



/* Entry: 105f16ef8; end: 105f16f2f; -[SCCLocationShareTrayComponent setViewModel:] */

void FUN_105f16ef8(void)

{
  func_0x000105f16f8c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f16f9c();
  func_0x000105f16f84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f16f30; end: 105f16f6f; -[SCCLocationShareTrayComponent viewModel] */

void FUN_105f16f30(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f16f84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f16f70; end: 105f16fa7;  */

void FUN_105f16f70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 105f16fa8; end: 105f16faf; -[SCCLocationShareTrayType__Enum init] */

void FUN_105f16fa8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0xc);
  return;
}



/* Entry: 105f16fb0; end: 105f16fb7; -[SCCShareLocationChoice__Enum init] */

void FUN_105f16fb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 105f16fb8; end: 105f17097; -[SCCLocationShareChoiceTrayContext initWithOnAccept:onCancel:onSettingsTap:onLearnMoreTap:] */

undefined8 *
FUN_105f16fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  _objc_retainBlock();
  func_0x000105f1729c();
  _objc_retainBlock();
  _objc_release(param_5);
  uVar1 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  puStack_48 = PTR_PTR_1126edff8;
  uStack_50 = param_1;
  func_0x000105f172ac();
  puVar2 = &uStack_50;
  func_0x000105f17294(puVar2);
  _objc_release(uVar1);
  func_0x000105f1729c();
  func_0x000105f172a4();
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105f17098; end: 105f170ab; +[SCCLocationShareChoiceTrayContext valdiMarshallableObjectDescriptor] */

void FUN_105f17098(undefined8 *param_1)

{
  *param_1 = &PTR_s_onAccept_1108f8a60;
  param_1[1] = &PTR_DAT_1108f8ad8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f170ac; end: 105f170ef; -[SCCLocationShareChoiceTrayViewModel initWithFriendName:trayType:choices:allfriendsNumber:friendsInWhitelistNumber:friendsInBlacklistNumber:] */

void FUN_105f170ac(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee000;
  uStack_20 = param_1;
  func_0x000105f172ac();
  func_0x000105f17294(&uStack_20);
  return;
}



/* Entry: 105f170f0; end: 105f17103; +[SCCLocationShareChoiceTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f170f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f8ae8;
  param_1[1] = &PTR_DAT_1108f8ba8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f17104; end: 105f17217; -[SCCLocationShareTrayContext initWithOnAccept:onAcceptAllFriends:onCancel:onSettingsTap:onLearnMoreTap:] */

undefined8 *
FUN_105f17104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  _objc_retainBlock();
  func_0x000105f172a4();
  _objc_retainBlock();
  _objc_release(param_6);
  _objc_retainBlock();
  func_0x000105f1729c();
  puStack_58 = PTR_PTR_1126ee008;
  uStack_60 = param_1;
  func_0x000105f172ac();
  puVar2 = &uStack_60;
  func_0x000105f17294(puVar2);
  _objc_release(param_7);
  func_0x000105f172a4();
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105f17218; end: 105f1722f; +[SCCLocationShareTrayContext valdiMarshallableObjectDescriptor] */

void FUN_105f17218(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onAccept_1108f8bc0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f17230; end: 105f1726f; -[SCCLocationShareTrayViewModel initWithFriendName:allfriendsNumber:friendsInWhitelistNumber:friendsInBlacklistNumber:trayType:] */

void FUN_105f17230(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee010;
  uStack_20 = param_1;
  func_0x000105f172ac();
  func_0x000105f17294(&uStack_20);
  return;
}



/* Entry: 105f17270; end: 105f172b7; +[SCCLocationShareTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f17270(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108f8c50;
  param_1[1] = &PTR_DAT_1108f8cf8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f172b8; end: 105f174cf; -[SCMapBitmojiLayerInfoProvider initWithViewportLogger:viewportChangeObservable:viewportChangeThrottleDuration:asyncQueueProvider:] */

undefined8 *
FUN_105f172b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126ee018;
  puVar1 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c11e0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar5);
    uVar2 = param_6;
    func_0x00010c11e0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar5);
    func_0x00010be3d500(puVar1);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_5;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c26d5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[5];
    puVar1[5] = uVar4;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105f174d0; end: 105f175c3;  */

undefined1 FUN_105f174d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bec60(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105f175c4; end: 105f175f3;  */

void FUN_105f175c4(void)

{
  return;
}



/* Entry: 105f175f4; end: 105f1761f;  */

void FUN_105f175f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f17620; end: 105f176bf; -[SCMapBitmojiLayerInfoProvider _onViewportDidChange] */

void FUN_105f17620(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e316f8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc2e20(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_1);
  puVar2 = PTR_PTR_1126bc330;
  func_0x00010c277860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17a60();
  _objc_initWeak(auStack_78,puVar1);
  uVar3 = *(undefined8 *)(puVar1 + 8);
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_1);
  _objc_retain(puVar2);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 105f176c0; end: 105f177d7; -[SCMapBitmojiLayerInfoProvider onBasemapFeaturesCaptured:] */

void FUN_105f176c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc330;
  func_0x00010c277860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17a60();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105f177d8; end: 105f17843;  */

void FUN_105f177d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e31738);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be806a0();
  _objc_release(lVar2);
  func_0x00010bf940a0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f17844; end: 105f17d17; -[SCMapBitmojiLayerInfoProvider _processBasemapFeatures:] */

void FUN_105f17844(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c5ec0;
  func_0x00010bf3e720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init();
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  lVar14 = param_1;
  func_0x00010bfb8d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226ce0(puVar7,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  lVar14 = param_1;
  func_0x00010bfb8d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226ce0(puVar8,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(puVar1);
  puVar9 = puVar1;
  func_0x00010bf52a60(puVar1,param_2,&uStack_1b0,auStack_f0,0x10);
  if (puVar9 != (undefined *)0x0) {
    lVar14 = *plStack_1a0;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar14) {
          _objc_enumerationMutation(puVar1);
        }
        lVar15 = *(long *)(lStack_1a8 + (long)puVar13 * 8);
        lVar10 = lVar15;
        func_0x00010c2923a0(lVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar6,param_2,lVar10);
        _objc_release(lVar10);
        lVar10 = lVar15;
        func_0x00010c075fa0();
        if ((int)lVar10 != 0) {
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          lVar10 = lVar15;
          func_0x00010c2923a0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010bf52a60();
          if (lVar11 != 0) {
            lVar16 = *plStack_1e0;
            do {
              lVar17 = 0;
              do {
                if (*plStack_1e0 != lVar16) {
                  _objc_enumerationMutation(lVar10);
                }
                func_0x00010befa120(puVar2,param_2,*(undefined8 *)(lStack_1e8 + lVar17 * 8));
                lVar17 = lVar17 + 1;
              } while (lVar11 != lVar17);
              lVar11 = lVar10;
              func_0x00010bf52a60(lVar10,param_2,&uStack_1f0,auStack_170,0x10);
            } while (lVar11 != 0);
          }
          _objc_release(lVar10);
          lVar10 = lVar15;
          func_0x00010c2923a0();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010bf529e0();
          _objc_release(lVar10);
          lVar10 = lVar15;
          if (lVar11 == 1) {
            func_0x00010bf3e6c0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar3;
          }
          else {
            lVar11 = lVar15;
            func_0x00010c0732a0();
            func_0x00010bf3e6c0(lVar15);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar5;
            if ((int)lVar11 != 0) {
              puVar12 = puVar4;
            }
          }
          func_0x00010befa120(puVar12,param_2,lVar10);
          _objc_release(lVar10);
        }
        lVar10 = lVar15;
        func_0x00010c259280();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010c08fa60();
        _objc_release(lVar10);
        if (lVar11 != 0) {
          lVar10 = lVar15;
          func_0x00010c2923a0(lVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar7,param_2,lVar10);
          _objc_release(lVar10);
          func_0x00010c259280(lVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar8,param_2,lVar15);
          _objc_release(lVar15);
        }
        puVar13 = puVar13 + 1;
      } while (puVar13 != puVar9);
      puVar9 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (puVar9 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  puVar9 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c21f960(param_1,param_2,puVar9);
  _objc_release(puVar9);
  puVar9 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c202b60(param_1,param_2,puVar9);
  _objc_release(puVar9);
  puVar9 = puVar4;
  func_0x00010bf51e00(puVar4);
  func_0x00010c1c9a80(param_1,param_2,puVar9);
  _objc_release(puVar9);
  puVar9 = puVar5;
  func_0x00010bf51e00(puVar5);
  func_0x00010c1c9aa0(param_1,param_2,puVar9);
  _objc_release(puVar9);
  puVar9 = puVar7;
  func_0x00010bf51e00(puVar7);
  func_0x00010c1a0180(param_1,param_2,puVar9);
  _objc_release(puVar9);
  puVar9 = puVar8;
  func_0x00010bf51e00();
  func_0x00010c1a01a0(param_1,param_2,puVar9);
  _objc_release(puVar9);
  puVar9 = puVar1;
  func_0x00010bf529e0(puVar1);
  func_0x00010c1b79e0(param_1,param_2,puVar9);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30),param_2,puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_alloc_init(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x00010c21f960(puVar1,param_2,puVar7);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_alloc_init(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x00010c202b60(puVar1,param_2,puVar7);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_alloc_init(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x00010c1c9a80(puVar1,param_2,puVar7);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_alloc_init(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x00010c1c9aa0(puVar1,param_2,puVar7);
    _objc_release(puVar7);
    func_0x00010c1b79e0(puVar1,param_2,0);
    func_0x00010c1a01c0(puVar1,param_2,0);
    puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_alloc_init(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x00010c1a0180(puVar1,param_2,puVar7);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_alloc_init(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x00010c1a01a0(puVar1,param_2,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar7);
    return;
  }
  return;
}



/* Entry: 105f17d18; end: 105f17e13; -[SCMapBitmojiLayerInfoProvider _internalResetMetrics] */

void FUN_105f17d18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc_init(PTR__OBJC_CLASS___NSSet_1126ae870);
  func_0x00010c21f960(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc_init(PTR__OBJC_CLASS___NSSet_1126ae870);
  func_0x00010c202b60(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc_init(PTR__OBJC_CLASS___NSSet_1126ae870);
  func_0x00010c1c9a80(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc_init(PTR__OBJC_CLASS___NSSet_1126ae870);
  func_0x00010c1c9aa0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1b79e0(param_1,param_2,0);
  func_0x00010c1a01c0(param_1,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc_init(PTR__OBJC_CLASS___NSSet_1126ae870);
  func_0x00010c1a0180(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc_init(PTR__OBJC_CLASS___NSSet_1126ae870);
  func_0x00010c1a01a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f17e14; end: 105f17e77; -[SCMapBitmojiLayerInfoProvider isUserIdHighlighted:] */

undefined8 FUN_105f17e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c294920(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105f17e78; end: 105f17f47; -[SCMapBitmojiLayerInfoProvider isClusterIDHighlighted:] */

ulong FUN_105f17e78(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c23cc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0d26e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d2700(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = uVar2, func_0x00010bf4b900(uVar2,param_2,param_3), (uVar3 & 1) == 0)) {
    uVar3 = param_1;
    func_0x00010bf4b900(param_1,param_2,param_3);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105f17f48; end: 105f17f8b; -[SCMapBitmojiLayerInfoProvider highlightedFriendUserIds] */

void FUN_105f17f48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c23cc60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f17f8c; end: 105f17fcf; -[SCMapBitmojiLayerInfoProvider highlightedClusterIds] */

void FUN_105f17f8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0d2700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f17fd0; end: 105f17fd3; -[SCMapBitmojiLayerInfoProvider clustersInHighlightZoneCount] */

void FUN_105f17fd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0886b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_lastClusterCount_1125ffbb8);
  return;
}



/* Entry: 105f17fd4; end: 105f18077; -[SCMapBitmojiLayerInfoProvider clustersHighlightedCount] */

long FUN_105f17fd4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010c23cc60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0d2700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d26e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0(lVar1);
  lVar4 = lVar2;
  func_0x00010bf529e0(lVar2);
  lVar5 = param_1;
  func_0x00010bf529e0(param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar4 + lVar3 + lVar5;
}



/* Entry: 105f18078; end: 105f1809f; -[SCMapBitmojiLayerInfoProvider incrementFriendStoryTapCount] */

void FUN_105f18078(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfb8d80();
                    /* WARNING: Could not recover jumptable at 0x00010c1a01d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setFriendStoriesTapCount__112645a90,lVar1 + 1);
  return;
}



/* Entry: 105f180a0; end: 105f180a3; -[SCMapBitmojiLayerInfoProvider totalFriendStoryTapCount] */

void FUN_105f180a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb8d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_friendStoriesTapCount_1125cbd08);
  return;
}



/* Entry: 105f180a4; end: 105f180df; -[SCMapBitmojiLayerInfoProvider totalFriendStoryUniqueUserIdCount] */

undefined8 FUN_105f180a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfb8d20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105f180e0; end: 105f1811b; -[SCMapBitmojiLayerInfoProvider totalFriendStoryUniqueThumbnailCount] */

undefined8 FUN_105f180e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfb8d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105f1811c; end: 105f181c3; -[SCMapBitmojiLayerInfoProvider resetMetrics] */

void FUN_105f1811c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105f181c4; end: 105f181ef;  */

void FUN_105f181c4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3d500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f181f0; end: 105f18217; -[SCMapBitmojiLayerInfoProvider visibleBitmojisObservable] */

void FUN_105f181f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f18218; end: 105f1821f; -[SCMapBitmojiLayerInfoProvider friendStoriesTapCount] */

undefined8 FUN_105f18218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105f18220; end: 105f18227; -[SCMapBitmojiLayerInfoProvider setFriendStoriesTapCount:] */

void FUN_105f18220(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 105f18228; end: 105f18233; -[SCMapBitmojiLayerInfoProvider friendStoriesShownByFriendID] */

void FUN_105f18228(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 105f18234; end: 105f1823b; -[SCMapBitmojiLayerInfoProvider setFriendStoriesShownByFriendID:] */

void FUN_105f18234(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105f1823c; end: 105f18247; -[SCMapBitmojiLayerInfoProvider friendStoriesShownByThumbnail] */

void FUN_105f1823c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x48,1);
  return;
}



/* Entry: 105f18248; end: 105f1824f; -[SCMapBitmojiLayerInfoProvider setFriendStoriesShownByThumbnail:] */

void FUN_105f18248(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105f18250; end: 105f18257; -[SCMapBitmojiLayerInfoProvider lastClusterCount] */

undefined8 FUN_105f18250(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105f18258; end: 105f1825f; -[SCMapBitmojiLayerInfoProvider setLastClusterCount:] */

void FUN_105f18258(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 105f18260; end: 105f1826b; -[SCMapBitmojiLayerInfoProvider usersWithLabel] */

void FUN_105f18260(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x58,1);
  return;
}



/* Entry: 105f1826c; end: 105f18273; -[SCMapBitmojiLayerInfoProvider setUsersWithLabel:] */

void FUN_105f1826c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105f18274; end: 105f1827f; -[SCMapBitmojiLayerInfoProvider singlePersonClustersWithLabel] */

void FUN_105f18274(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 105f18280; end: 105f18287; -[SCMapBitmojiLayerInfoProvider setSinglePersonClustersWithLabel:] */

void FUN_105f18280(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105f18288; end: 105f18293; -[SCMapBitmojiLayerInfoProvider multiUserFlowerClustersWithLabel] */

void FUN_105f18288(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x68,1);
  return;
}



/* Entry: 105f18294; end: 105f1829b; -[SCMapBitmojiLayerInfoProvider setMultiUserFlowerClustersWithLabel:] */

void FUN_105f18294(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105f1829c; end: 105f182a7; -[SCMapBitmojiLayerInfoProvider multiUserNotFlowerClustersWithLabel] */

void FUN_105f1829c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x70,1);
  return;
}



/* Entry: 105f182a8; end: 105f182af; -[SCMapBitmojiLayerInfoProvider setMultiUserNotFlowerClustersWithLabel:] */

void FUN_105f182a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105f182b0; end: 105f18357; -[SCMapBitmojiLayerInfoProvider .cxx_destruct] */

void FUN_105f182b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 105f18358; end: 105f188fb; +[SCMapSDKBitmojiFeatureInfoParser clusterInfoFromSDKFeatures:] */

/* WARNING: Possible PIC construction at 0x000105f1856c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105f185d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105f1866c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105f185dc) */
/* WARNING: Removing unreachable block (ram,0x000105f18614) */
/* WARNING: Removing unreachable block (ram,0x000105f18570) */
/* WARNING: Removing unreachable block (ram,0x000105f18670) */
/* WARNING: Removing unreachable block (ram,0x000105f186a8) */

void FUN_105f18358(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar14 = *(long *)(lVar13 * 8);
        lVar11 = lVar14;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar11;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
        puVar6 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == (undefined *)0x0) {
          puVar6 = PTR_PTR_1126c5ec8;
          _objc_alloc_init();
          func_0x00010c2aa820();
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
        }
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar14;
        func_0x00010c118b60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        lVar11 = lVar7;
        func_0x00010bf52a60();
        lVar14 = lRam0000000000000000;
        while (lVar11 != 0) {
          lVar16 = 0;
          do {
            if (lRam0000000000000000 != lVar14) {
              _objc_enumerationMutation(lVar7);
            }
            uVar15 = *(ulong *)(lVar16 * 8);
            uVar8 = uVar15;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c0720c0();
            _objc_release(uVar8);
            if ((int)uVar9 != 0) {
              func_0x00010c27e100(uVar15);
              _objc_retainAutoreleasedReturnValue();
              goto code_r0x00010c25d700;
            }
            uVar8 = uVar15;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c0720c0();
            if ((uVar9 & 1) != 0) {
              func_0x00010c27e100(uVar15);
              _objc_retainAutoreleasedReturnValue();
              goto code_r0x00010c25d700;
            }
            _objc_release(uVar8);
            uVar8 = uVar15;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c0720c0();
            if ((uVar9 & 1) != 0) {
              func_0x00010c27e100(uVar15);
              _objc_retainAutoreleasedReturnValue();
              goto code_r0x00010c25d700;
            }
            _objc_release(uVar8);
            uVar8 = uVar15;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c0720c0();
            _objc_release(uVar8);
            if ((int)uVar9 != 0) {
              func_0x00010c27e100(uVar15);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar15;
              func_0x00010c09a320();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar8;
              func_0x00010c297380();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar9;
              func_0x00010bf43280();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2bc340(puVar6);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(uVar10);
              _objc_release(uVar9);
              _objc_release(uVar8);
              _objc_release(uVar15);
              func_0x00010befa120(puVar4);
            }
            lVar16 = lVar16 + 1;
          } while (lVar11 != lVar16);
          lVar11 = lVar7;
          func_0x00010bf52a60();
        }
        _objc_release(lVar7);
        _objc_release(puVar6);
        _objc_release(lVar5);
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar2);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(puVar3);
    func_0x00010bffc4a0();
    _objc_retain();
    _objc_retain(puVar4);
    func_0x00010bf97ce0(puVar3);
    _objc_retain(puVar6);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
code_r0x00010c25d700:
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105f188fc; end: 105f18903;  */

void FUN_105f188fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 105f18904; end: 105f189ff;  */

undefined1 *
FUN_105f18904(long param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf4b900();
  if ((uVar1 & 1) == 0) {
    param_4 = 1;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = param_2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc340(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = param_3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar6);
  _objc_release(uVar5);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_80;
  pcStack_48 = FUN_105f18a00;
  uStack_70 = uVar5;
  uStack_68 = uVar6;
  uStack_60 = param_3;
  puStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126ee020;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    puVar2 = PTR_PTR_1126c5ed0;
    _objc_alloc();
    func_0x00010c062400(0x3ff0000000000000);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined **)((long)ppuVar4 + 0x10) = puVar2;
    _objc_release(uVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105f18a00; end: 105f18abf; -[SCMapBitmojiLayerManager initWithGestureManager:viewportLogger:viewportChangeObservable:asyncQueueProvider:] */

undefined1 *
FUN_105f18a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_38 = PTR_PTR_1126ee020;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c5ed0;
    _objc_alloc();
    func_0x00010c062400(0x3ff0000000000000);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105f18ac0; end: 105f18ac7; -[SCMapBitmojiLayerManager visibleBitmojisObservable] */

void FUN_105f18ac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_visibleBitmojisObservable_112685938);
  return;
}



/* Entry: 105f18ac8; end: 105f18acf; -[SCMapBitmojiLayerManager incrementFriendStoryTapCount] */

void FUN_105f18ac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfec5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_incrementFriendStoryTapCount_1125d8b30);
  return;
}



/* Entry: 105f18ad0; end: 105f18ad7; -[SCMapBitmojiLayerManager infoProvider] */

undefined8 FUN_105f18ad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f18ad8; end: 105f18b07; -[SCMapBitmojiLayerManager .cxx_destruct] */

void FUN_105f18ad8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f18b08; end: 105f18b53; -[SCMapBitmojiLayerServiceProvider provide] */

void FUN_105f18b08(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010bdefcc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c5ed8;
  _objc_alloc(PTR_PTR_1126c5ed8);
  func_0x00010bff81a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f18b54; end: 105f18d77; -[SCMapBitmojiLayerServiceProvider _createManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f18b54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar1 = PTR_PTR_1126c5ee0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_11273a5d8;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar16;
  func_0x00010bfc1a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_105f18d78();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfcc2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  FUN_105f18d78(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c29f500();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11273a5dc;
    _objc_loadWeakRetained(param_1);
  }
  lVar14 = param_1;
  func_0x00010bf0c120(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0179e0(puVar1,param_2,lVar3,lVar8,lVar13,lVar15);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f18d78; end: 105f18d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f18d78(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11273a5d4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f18d9c; end: 105f18deb; -[SCMapBitmojiLayerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f18d9c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273a5dc);
  _objc_destroyWeak(param_1 + _DAT_11273a5d8);
  _objc_destroyWeak(param_1 + _DAT_11273a5d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273a5d0);
  return;
}



/* Entry: 105f18dec; end: 105f18edb; -[SCMapClusterInfo initWithClusterID:userIDs:isLabelVisible:isFlower:storyCalloutThumbnail:] */

undefined1 *
FUN_105f18dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ee028;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f18edc; end: 105f18eff; -[SCMapClusterInfo copyWithZone:] */

undefined8 FUN_105f18edc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105f18f00; end: 105f18f8b; -[SCMapClusterInfo hash] */

undefined8 * FUN_105f18f00(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105f19044:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105f19050;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_105f19050;
          }
          goto LAB_105f19044;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105f19050:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105f18f8c; end: 105f1906b; -[SCMapClusterInfo isEqual:] */

long FUN_105f18f8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105f19044:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105f19050;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_105f19050;
          }
          goto LAB_105f19044;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105f19050:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105f1906c; end: 105f19073; -[SCMapClusterInfo clusterID] */

undefined8 FUN_105f1906c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f19074; end: 105f1907b; -[SCMapClusterInfo userIDs] */

undefined8 FUN_105f19074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f1907c; end: 105f19083; -[SCMapClusterInfo isLabelVisible] */

undefined1 FUN_105f1907c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105f19084; end: 105f1908b; -[SCMapClusterInfo isFlower] */

undefined1 FUN_105f19084(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105f1908c; end: 105f19093; -[SCMapClusterInfo storyCalloutThumbnail] */

undefined8 FUN_105f1908c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f19094; end: 105f190cf; -[SCMapClusterInfo .cxx_destruct] */

void FUN_105f19094(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105f190d0; end: 105f190eb; +[SCMapClusterInfoBuilder mapClusterInfo] */

void FUN_105f190d0(void)

{
  _objc_alloc_init(PTR_PTR_1126c5ec8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f190ec; end: 105f1925b; +[SCMapClusterInfoBuilder mapClusterInfoFromExistingMapClusterInfo:] */

void FUN_105f190ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126c5ec8;
  _objc_retain(param_3);
  func_0x00010c0b8ce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf3e6c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2aa820(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2923a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2bc340(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c075fa0(param_3);
  puVar7 = puVar5;
  func_0x00010c2b0c80(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0732a0(param_3);
  puVar8 = puVar7;
  func_0x00010c2b07e0(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c259280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar9 = puVar8;
  func_0x00010c2ba3a0(puVar8,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105f1925c; end: 105f19297; -[SCMapClusterInfoBuilder build] */

void FUN_105f1925c(void)

{
  _objc_alloc(PTR_PTR_1126c5ee8);
  func_0x00010bfff3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f19298; end: 105f192cf; -[SCMapClusterInfoBuilder withClusterID:] */

long FUN_105f19298(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105f192d0; end: 105f19307; -[SCMapClusterInfoBuilder withUserIDs:] */

long FUN_105f192d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105f19308; end: 105f1930f; -[SCMapClusterInfoBuilder withIsLabelVisible:] */

void FUN_105f19308(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 105f19310; end: 105f19317; -[SCMapClusterInfoBuilder withIsFlower:] */

void FUN_105f19310(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x19) = param_3;
  return;
}



/* Entry: 105f19318; end: 105f1934f; -[SCMapClusterInfoBuilder withStoryCalloutThumbnail:] */

long FUN_105f19318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}


