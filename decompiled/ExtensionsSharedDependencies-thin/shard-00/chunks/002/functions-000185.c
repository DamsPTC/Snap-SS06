/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0044f494; end: 0044f49f; -[SCWindowUIContainer .cxx_destruct] */

void FUN_0044f494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0044f4a0; end: 0044f513; -[SCUIViewControllerContainerFactory initWithViewController:] */

undefined1 * FUN_0044f4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3c98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0044f514; end: 0044f54b; -[SCUIViewControllerContainerFactory modalWithAnimated:] */

void FUN_0044f514(void)

{
  _objc_alloc(PTR_PTR_00ac2e20);
  func_0x007864c0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0044f54c; end: 0044f593; -[SCUIViewControllerContainerFactory modalWithAnimated:style:] */

void FUN_0044f54c(void)

{
  _objc_alloc(PTR_PTR_00ac2e28);
  func_0x007864e0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0044f594; end: 0044f633; -[SCUIViewControllerContainerFactory navigationWithAnimated:] */

void FUN_0044f594(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00789860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_00ac2e30;
    _objc_alloc(PTR_PTR_00ac2e30);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00789860(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00785d20(puVar3,param_2,uVar2,param_3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0044f634; end: 0044f663; -[SCUIViewControllerContainerFactory subview] */

void FUN_0044f634(void)

{
  _objc_alloc(PTR_PTR_00ac2e38);
  func_0x007863e0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0044f664; end: 0044f693; -[SCUIViewControllerContainerFactory overlay] */

void FUN_0044f664(void)

{
  _objc_alloc(PTR_PTR_00ac2e40);
  func_0x007864a0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0044f694; end: 0044f69f; -[SCUIViewControllerContainerFactory .cxx_destruct] */

void FUN_0044f694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0044f6a0; end: 0044f6e7; -[SCViewControllerLifecycleChecker init] */

void FUN_0044f6a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_00ac3ca0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0;
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    *(undefined1 *)((long)puVar1 + 0x1c) = 1;
  }
  return;
}



/* Entry: 0044f6e8; end: 0044f6f3; -[SCViewControllerLifecycleChecker didInit:] */

void FUN_0044f6e8(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}



/* Entry: 0044f6f4; end: 0044f6ff; -[SCViewControllerLifecycleChecker willDealloc:] */

void FUN_0044f6f4(long param_1)

{
  *(undefined1 *)(param_1 + 0x1a) = 1;
  return;
}



/* Entry: 0044f700; end: 0044f703; -[SCViewControllerLifecycleChecker viewDidLoad:] */

void FUN_0044f700(void)

{
  return;
}



/* Entry: 0044f704; end: 0044f713; -[SCViewControllerLifecycleChecker viewWillAppear:animated:] */

void FUN_0044f704(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  return;
}



/* Entry: 0044f714; end: 0044f743; -[SCViewControllerLifecycleChecker viewDidAppear:animated:] */

void FUN_0044f714(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  return;
}



/* Entry: 0044f744; end: 0044f74f; -[SCViewControllerLifecycleChecker viewWillDisappear:animated:] */

void FUN_0044f744(long param_1)

{
  *(undefined1 *)(param_1 + 0x13) = 1;
  return;
}



/* Entry: 0044f750; end: 0044f76b; -[SCViewControllerLifecycleChecker viewDidDisappear:animated:] */

void FUN_0044f750(long param_1)

{
  if (0 < *(long *)(param_1 + 8)) {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
  }
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  return;
}



/* Entry: 0044f76c; end: 0044f77b; -[SCViewControllerLifecycleChecker beginAppearanceTransition:isAppearing:animated:] */

void FUN_0044f76c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x15) = param_4;
  return;
}



/* Entry: 0044f77c; end: 0044f783; -[SCViewControllerLifecycleChecker endAppearanceTransition:] */

void FUN_0044f77c(long param_1)

{
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}



/* Entry: 0044f784; end: 0044f78f; -[SCViewControllerLifecycleChecker willMoveToParentViewController:parent:] */

void FUN_0044f784(long param_1)

{
  *(undefined2 *)(param_1 + 0x17) = 1;
  return;
}



/* Entry: 0044f790; end: 0044f7a7; -[SCViewControllerLifecycleChecker didMoveToParentViewController:parent:] */

void FUN_0044f790(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  *(bool *)(param_1 + 0x16) = param_4 != 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 0044f7a8; end: 0044f7af; -[SCViewControllerLifecycleChecker hasCompletedInitialAppearance] */

undefined1 FUN_0044f7a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



/* Entry: 0044f7b0; end: 0044f81b; -[SCGrapheneModalUiContainerMetric2 init] */

undefined1 * FUN_0044f7b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3ca8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    FUN_0044fadc();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0044f81c; end: 0044fadb;  */

/* WARNING: Removing unreachable block (ram,0x0044faa4) */

undefined **
FUN_0044f81c(long param_1,undefined **param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  undefined **ppuVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x0077bcc0();
    }
    _objc_release(param_2);
    FUN_00425cb4(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x0077bcc0(param_3);
    }
    _objc_release(param_3);
    FUN_00425cb4(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x0077bcc0(param_4);
    }
    _objc_release(param_4);
    FUN_00425cb4(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    FUN_00444afc(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_009e4a30,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00427b38(&puStack_a8);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar2 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume(ppuVar2);
    return &PTR_PTR_00b04180;
  }
  return ppuVar2;
}



/* Entry: 0044fadc; end: 0044fb17;  */

undefined ** FUN_0044fadc(void)

{
  return &PTR_PTR_00b04180;
}



/* Entry: 0044fb18; end: 0044fb93;  */

undefined * FUN_0044fb18(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b60180 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a26060,&UNK_00800a2c,&UNK_00800a58,2,
                    FUN_0044fb94,0);
    do {
      if (puRam0000000000b60180 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b60180;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb60180,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b60180 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b60180;
}



/* Entry: 0044fb94; end: 0044fb9f;  */

bool FUN_0044fb94(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 0044fba0; end: 0044fc1b;  */

undefined * FUN_0044fba0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b60188 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a26080,&UNK_00800a60,&UNK_00800aa4,2,
                    FUN_0044fc1c,0);
    do {
      if (puRam0000000000b60188 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b60188;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb60188,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b60188 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b60188;
}



/* Entry: 0044fc1c; end: 0044fc27;  */

bool FUN_0044fc1c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 0044fc28; end: 0044fca3;  */

undefined * FUN_0044fc28(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b60190 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a260a0,&UNK_00800aac,&UNK_00800ae4,6,
                    FUN_0044fca4,0);
    do {
      if (puRam0000000000b60190 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b60190;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb60190,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b60190 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b60190;
}



/* Entry: 0044fca4; end: 0044fcaf;  */

bool FUN_0044fca4(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 0044fcb0; end: 0044fd2b;  */

undefined * FUN_0044fcb0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b60198 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a260c0,&UNK_00800afc,&UNK_00800bb8,10,
                    FUN_0044fd2c,0);
    do {
      if (puRam0000000000b60198 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b60198;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb60198,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b60198 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b60198;
}



/* Entry: 0044fd2c; end: 0044fd37;  */

bool FUN_0044fd2c(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 0044fd38; end: 0044fdb3;  */

undefined * FUN_0044fd38(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b601a0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a260e0,&UNK_00800be0,&UNK_00800c18,6,
                    FUN_0044fdb4,0);
    do {
      if (puRam0000000000b601a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b601a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb601a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b601a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b601a0;
}



/* Entry: 0044fdb4; end: 0044fdbf;  */

bool FUN_0044fdb4(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 0044fdc0; end: 0044fe3b;  */

undefined * FUN_0044fdc0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b601a8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a26100,&UNK_00800c30,&UNK_00800c54,2,
                    FUN_0044fe3c,0);
    do {
      if (puRam0000000000b601a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b601a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb601a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b601a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b601a8;
}



/* Entry: 0044fe3c; end: 0044fe47;  */

bool FUN_0044fe3c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 0044fe48; end: 0044feaf; +[SCJanusBootstrapData descriptor] */

void FUN_0044fe48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b601b0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad7f38,
                    &PTR____CFConstantStringClassReference_00a26120,
                    &PTR_s_snapchat_janus_api_00b04188,&PTR_s_userSession_00b04740,0xb,0x60,0x1c);
    puRam0000000000b601b0 = puVar1;
  }
  return;
}



/* Entry: 0044feb0; end: 0044ff17; +[SCJanusUserSession descriptor] */

void FUN_0044feb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b601b8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad7f88,
                    &PTR____CFConstantStringClassReference_00a26140,
                    &PTR_s_snapchat_janus_api_00b04188,&PTR_s_userId_00b04480,6,0x38,0x1c);
    puRam0000000000b601b8 = puVar1;
  }
  return;
}



/* Entry: 0044ff18; end: 0044ff7f; +[SCJanusUserState descriptor] */

void FUN_0044ff18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b601c0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad7fd8,
                    &PTR____CFConstantStringClassReference_00a26160,
                    &PTR_s_snapchat_janus_api_00b04188,&PTR_s_verificationStatus_00b042c0,3,0x20,
                    0x1c);
    puRam0000000000b601c0 = puVar1;
  }
  return;
}



/* Entry: 0044ff80; end: 0044fffb; +[SCJanusTOSAcceptance descriptor] */

undefined * FUN_0044ff80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b601c8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad8028,
                    &PTR____CFConstantStringClassReference_00a26180,
                    &PTR_s_snapchat_janus_api_00b04188,&PTR_s_tos9_00b04540,8,4,0x1c);
    func_0x00791440();
    puRam0000000000b601c8 = puVar1;
  }
  return puRam0000000000b601c8;
}



/* Entry: 0044fffc; end: 00450063; +[SCJanusSecurityData descriptor] */

void FUN_0044fffc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b601d0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad8078,
                    &PTR____CFConstantStringClassReference_00a261a0,
                    &PTR_s_snapchat_janus_api_00b04188,&PTR_s_deviceToken_00b04380,4,0x10,0x1c);
    puRam0000000000b601d0 = puVar1;
  }
  return;
}



/* Entry: 00450064; end: 004500cb; +[SCJanusDeviceTokenResponse descriptor] */

void FUN_00450064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b601d8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad80c8,
                    &PTR____CFConstantStringClassReference_00a261c0,
                    &PTR_s_snapchat_janus_api_00b04188,&PTR_s_id_p_00b04200,2,0x18,0x1c);
    puRam0000000000b601d8 = puVar1;
  }
  return;
}



/* Entry: 004500cc; end: 00450133; +[SCJanusVerificationStatus descriptor] */

void FUN_004500cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b601e0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad8118,
                    &PTR____CFConstantStringClassReference_00a261e0,
                    &PTR_s_snapchat_janus_api_00b04188,&PTR_s_registrationVerified_00b04400,4,0x18,
                    0x1c);
    puRam0000000000b601e0 = puVar1;
  }
  return;
}



/* Entry: 00450134; end: 004501af; +[SCJanusVerificationStatus_PhoneVerifyOptions descriptor] */

undefined * FUN_00450134(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b601e8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad8168,
                    &PTR____CFConstantStringClassReference_00a26200,
                    &PTR_s_snapchat_janus_api_00b04188,&PTR_s_optionsArray_00b041a0,1,0x10,0x1c);
    func_0x00791420();
    puRam0000000000b601e8 = puVar1;
  }
  return puRam0000000000b601e8;
}



/* Entry: 004501b0; end: 00450217; +[SCJanusSilentVerificationConfiguration descriptor] */

void FUN_004501b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b601f0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad81b8,
                    &PTR____CFConstantStringClassReference_00a26220,
                    &PTR_s_snapchat_janus_api_00b04188,&PTR_s_providersArray_00b041c0,1,0x10,0x1c);
    puRam0000000000b601f0 = puVar1;
  }
  return;
}



/* Entry: 00450218; end: 0045027f; +[SCJanusFideliusIdentity descriptor] */

void FUN_00450218(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b601f8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad8208,
                    &PTR____CFConstantStringClassReference_00a26240,
                    &PTR_s_snapchat_janus_api_00b04188,&PTR_s_iwek_00b04240,2,0x18,0x1c);
    puRam0000000000b601f8 = puVar1;
  }
  return;
}



/* Entry: 00450280; end: 004502e7; +[SCJanusFriendData descriptor] */

void FUN_00450280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60200 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad8258,
                    &PTR____CFConstantStringClassReference_00a26260,
                    &PTR_s_snapchat_janus_api_00b04188,&PTR_s_friendLinksArray_00b04280,2,0x18,0x1c)
    ;
    puRam0000000000b60200 = puVar1;
  }
  return;
}



/* Entry: 004502e8; end: 0045034f; +[SCJanusFriendLink descriptor] */

void FUN_004502e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60208 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad82a8,
                    &PTR____CFConstantStringClassReference_00a26280,
                    &PTR_s_snapchat_janus_api_00b04188,&PTR_s_mutableUsername_00b04640,8,0x38,0x1c);
    puRam0000000000b60208 = puVar1;
  }
  return;
}



/* Entry: 00450350; end: 004503b7; +[SCJanusCofSyncMechanism descriptor] */

void FUN_00450350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60210 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad82f8,
                    &PTR____CFConstantStringClassReference_00a262a0,
                    &PTR_s_snapchat_janus_api_00b04188,&PTR_s_triggerType_00b041e0,1,8,0x1c);
    puRam0000000000b60210 = puVar1;
  }
  return;
}



/* Entry: 004503b8; end: 0045049b; +[SCJanusTosContent descriptor] */

void FUN_004503b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60218 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad8348,
                    &PTR____CFConstantStringClassReference_00a262c0,
                    &PTR_s_snapchat_janus_api_00b04188,&PTR_s_localizedTosHtml_00b04320,3,0x20,0x1c)
    ;
    puRam0000000000b60218 = puVar1;
  }
  return;
}



/* Entry: 0045049c; end: 004504a7;  */

bool FUN_0045049c(uint param_1)

{
  return param_1 < 0x11;
}



/* Entry: 004504a8; end: 00450523;  */

undefined * FUN_004504a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b60228 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a26300,&UNK_00800d80,&UNK_00800e1c,8,
                    FUN_00450524,0);
    do {
      if (puRam0000000000b60228 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b60228;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb60228,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b60228 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b60228;
}



/* Entry: 00450524; end: 0045052f;  */

bool FUN_00450524(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 00450530; end: 004505ab;  */

undefined * FUN_00450530(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b60230 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a26320,&UNK_00800e3c,&UNK_00800e80,4,
                    FUN_004505ac,0);
    do {
      if (puRam0000000000b60230 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b60230;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb60230,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b60230 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b60230;
}



/* Entry: 004505ac; end: 004505b7;  */

bool FUN_004505ac(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 004505b8; end: 00450633; +[SCPBSnaptokenSnapAccessToken descriptor] */

undefined * FUN_004505b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60238 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad83e8,
                    &PTR____CFConstantStringClassReference_00a26340,
                    &PTR_s_com_snapchat_proto_snaptoken_00b048a0,&PTR_s_accessToken_00b04938,3,0x20,
                    0x1c);
    func_0x00791440();
    puRam0000000000b60238 = puVar1;
  }
  return puRam0000000000b60238;
}



/* Entry: 00450634; end: 0045069b; +[SCPBSnaptokenSnapAccessTokenPrefetchHint descriptor] */

void FUN_00450634(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60240 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad8438,
                    &PTR____CFConstantStringClassReference_00a26360,
                    &PTR_s_com_snapchat_proto_snaptoken_00b048a0,&PTR_s_earlyInvalidSecs_00b048b8,2,
                    0x18,0x1c);
    puRam0000000000b60240 = puVar1;
  }
  return;
}



/* Entry: 0045069c; end: 00450703; +[SCPBSnaptokenSnapAccessTokenRequest descriptor] */

void FUN_0045069c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60248 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad8488,
                    &PTR____CFConstantStringClassReference_00a26380,
                    &PTR_s_com_snapchat_proto_snaptoken_00b048a0,&PTR_s_refreshToken_00b048f8,2,0x18
                    ,0x1c);
    puRam0000000000b60248 = puVar1;
  }
  return;
}



/* Entry: 00450704; end: 0045077f; +[SCPBSnaptokenSnapAccessTokensRequest descriptor] */

undefined * FUN_00450704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60250 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad84d8,
                    &PTR____CFConstantStringClassReference_00a263a0,
                    &PTR_s_com_snapchat_proto_snaptoken_00b048a0,&PTR_s_refreshToken_00b04b18,10,
                    0x48,0x1c);
    func_0x00791440();
    puRam0000000000b60250 = puVar1;
  }
  return puRam0000000000b60250;
}



/* Entry: 00450780; end: 004507fb; +[SCPBSnaptokenSnapAccessTokensResponse descriptor] */

undefined * FUN_00450780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60258 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad8528,
                    &PTR____CFConstantStringClassReference_00a263c0,
                    &PTR_s_com_snapchat_proto_snaptoken_00b048a0,
                    &PTR_s_snapAccessTokensArray_00b049f8,4,0x20,0x1c);
    func_0x00791440();
    puRam0000000000b60258 = puVar1;
  }
  return puRam0000000000b60258;
}



/* Entry: 004507fc; end: 00450863; +[SCPBSnaptokenSnapSessionRequest descriptor] */

void FUN_004507fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60260 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad8578,
                    &PTR____CFConstantStringClassReference_00a263e0,
                    &PTR_s_com_snapchat_proto_snaptoken_00b048a0,&PTR_s_scopesArray_00b04998,3,0x20,
                    0x1c);
    puRam0000000000b60260 = puVar1;
  }
  return;
}



/* Entry: 00450864; end: 004508df; +[SCPBSnaptokenSnapSessionResponse descriptor] */

undefined * FUN_00450864(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b60268 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ad85c8,
                    &PTR____CFConstantStringClassReference_00a26400,
                    &PTR_s_com_snapchat_proto_snaptoken_00b048a0,&PTR_s_refreshToken_00b04a78,5,0x28
                    ,0x1c);
    func_0x00791440();
    puRam0000000000b60268 = puVar1;
  }
  return puRam0000000000b60268;
}



/* Entry: 004508e0; end: 0045092f; +[SCServiceCompoundNotifier andNotifierWithSubnotifiers:] */

void FUN_004508e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac2d88;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x007869a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00450930; end: 0045097f; +[SCServiceCompoundNotifier orNotifierWithSubnotifiers:] */

void FUN_00450930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac2d88;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x007869a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00450980; end: 00450a07; -[SCServiceCompoundNotifier initWithSubnotifiers:compoundType:] */

undefined1 *
FUN_00450980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3cb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00789700();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00450a08; end: 00450c2b; -[SCServiceCompoundNotifier waitUntil:] */

/* WARNING: Removing unreachable block (ram,0x00450aa8) */
/* WARNING: Removing unreachable block (ram,0x00450b60) */

double FUN_00450a08(double param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double unaff_d9;
  double dVar8;
  
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(long *)(param_2 + 8) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f120(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    _objc_retainAutoreleasedReturnValue();
    dVar7 = 0.0;
    lVar4 = *(long *)(param_2 + 0x10);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00780ea0();
    if (lVar2 == 0) {
      unaff_d9 = 0.0;
    }
    else {
      unaff_d9 = 0.0;
      do {
        lVar6 = 0;
        dVar8 = unaff_d9;
        do {
          dVar7 = param_1;
          func_0x00793a00(*(undefined8 *)(lVar6 * 8));
          unaff_d9 = dVar7;
          if (dVar7 <= dVar8) {
            unaff_d9 = dVar8;
          }
          if (dVar7 <= 0.0) {
            func_0x0077e720(puVar1);
          }
          lVar6 = lVar6 + 1;
          dVar8 = unaff_d9;
        } while (lVar2 != lVar6);
        lVar2 = lVar4;
        func_0x00780ea0();
      } while (lVar2 != 0);
    }
    _objc_release(lVar4);
    func_0x0078b4c0(*(undefined8 *)(param_2 + 0x10));
    param_2 = puVar1;
  }
  else {
    dVar7 = param_1;
    if (*(long *)(param_2 + 8) != 1) goto LAB_00450bec;
    dVar7 = 0.0;
    param_2 = *(undefined **)(param_2 + 0x10);
    _objc_retain(param_2);
    puVar1 = param_2;
    func_0x00780ea0();
    if (puVar1 == (undefined *)0x0) {
      unaff_d9 = 315360000.0;
    }
    else {
      unaff_d9 = 315360000.0;
      do {
        puVar5 = (undefined *)0x0;
        do {
          dVar7 = param_1;
          func_0x00793a00(*(undefined8 *)((long)puVar5 * 8));
          if (dVar7 <= unaff_d9) {
            unaff_d9 = dVar7;
          }
          puVar5 = puVar5 + 1;
        } while (puVar1 != puVar5);
        puVar1 = param_2;
        func_0x00780ea0();
      } while (puVar1 != (undefined *)0x0);
    }
  }
  _objc_release(param_2);
LAB_00450bec:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar3) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_0099adf0)(param_2 + 0x10,0);
    return dVar7;
  }
  return unaff_d9;
}



/* Entry: 00450c2c; end: 00450c37; -[SCServiceCompoundNotifier .cxx_destruct] */

void FUN_00450c2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00450c38; end: 00450c8b; +[SCServiceImmediateNotifier defaultNotifier] */

void FUN_00450c38(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b60278 != -1) {
    _dispatch_once(0xb60278,&PTR___NSConcreteGlobalBlock_009e4b28);
  }
  uVar1 = uRam0000000000b60270;
  _objc_retain(uRam0000000000b60270);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00450c8c; end: 00450cbf;  */

void FUN_00450c8c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac2e48;
  _objc_alloc();
  func_0x00787020(0);
  uVar1 = puRam0000000000b60270;
  puRam0000000000b60270 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00450cc0; end: 00450d13; +[SCServiceImmediateNotifier neverNotifier] */

void FUN_00450cc0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b60288 != -1) {
    _dispatch_once(0xb60288,&PTR___NSConcreteGlobalBlock_009e4b48);
  }
  uVar1 = uRam0000000000b60280;
  _objc_retain(uRam0000000000b60280);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00450d14; end: 00450d4b;  */

void FUN_00450d14(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac2e48;
  _objc_alloc();
  func_0x00787020(0x41b2cc0300000000);
  uVar1 = puRam0000000000b60280;
  puRam0000000000b60280 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00450d4c; end: 00450d93; -[SCServiceImmediateNotifier initWithWaitTime:] */

void FUN_00450d4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3cb8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 00450d94; end: 00450d9b; -[SCServiceImmediateNotifier waitUntil:] */

undefined8 FUN_00450d94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00450d9c; end: 00450e3f; -[SCServiceTerm initWithService:serviceLoop:] */

undefined1 *
FUN_00450d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3cc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00450e40; end: 00450e4f; -[SCServiceTerm endThisTermAndContinueServiceWhenNotified:] */

void FUN_00450e40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007828b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_endCurrentTermAndContinueService_00abb720,
             *(undefined8 *)(param_1 + 8),param_3);
  return;
}



/* Entry: 00450e50; end: 00450e7f; -[SCServiceTerm .cxx_destruct] */

void FUN_00450e50(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00450e80; end: 00450f27; -[SCServiceItem initWithService:UUID:] */

undefined1 *
FUN_00450e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3cc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00450f28; end: 00450f2f; -[SCServiceItem service] */

undefined8 FUN_00450f28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00450f30; end: 00450f37; -[SCServiceItem UUID] */

undefined8 FUN_00450f30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00450f38; end: 00450f3f; -[SCServiceItem notifier] */

undefined8 FUN_00450f38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00450f40; end: 00450f6f; -[SCServiceItem setNotifier:] */

void FUN_00450f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00450f70; end: 00450fab; -[SCServiceItem .cxx_destruct] */

void FUN_00450f70(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00450fac; end: 004510b3; -[SCServiceObserveContext initWithServiceLoop:UUID:queue:changeHandler:] */

undefined1 *
FUN_00450fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_00ac3cd0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004510b4; end: 004510fb; -[SCServiceObserveContext dealloc] */

void FUN_004510b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00793060(param_1,param_2,1);
  puStack_28 = PTR_PTR_00ac3cd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 004510fc; end: 00451103; -[SCServiceObserveContext unobserve] */

void FUN_004510fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00793070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_unobserveFromDealloc__00abf928,0);
  return;
}



/* Entry: 00451104; end: 00451113; -[SCServiceObserveContext unobserveFromDealloc:] */

void FUN_00451104(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00793090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_unobserveServiceForObserveContex_00abf930,param_1
             ,param_3);
  return;
}



/* Entry: 00451114; end: 00451147; -[SCServiceObserveContext invalidate] */

void FUN_00451114(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00451148; end: 00451223; -[SCServiceObserveContext performWithStatus:service:] */

void FUN_00451148(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (((lVar1 != 0) && (*(long *)(param_1 + 0x28) != 0)) && (*(long *)(param_1 + 8) != param_3)) {
    *(long *)(param_1 + 8) = param_3;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puStack_68 = PTR___NSConcreteStackBlock_00999f30;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_00451224;
    puStack_50 = &UNK_009e3640;
    lStack_40 = lVar1;
    _objc_retain(param_4);
    uStack_48 = param_4;
    lStack_38 = param_3;
    _objc_retain(lVar1);
    _dispatch_async(uVar2,&puStack_68);
    _objc_release(uStack_48);
    _objc_release(lStack_40);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 00451224; end: 00451237;  */

void FUN_00451224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00451234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 00451238; end: 0045123f; -[SCServiceObserveContext UUID] */

undefined8 FUN_00451238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00451240; end: 00451247; -[SCServiceObserveContext changeHandler] */

undefined8 FUN_00451240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00451248; end: 0045124f; -[SCServiceObserveContext queue] */

undefined8 FUN_00451248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00451250; end: 00451297; -[SCServiceObserveContext .cxx_destruct] */

void FUN_00451250(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00451298; end: 004512eb; +[SCServiceLoop sharedInstance] */

void FUN_00451298(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b60298 != -1) {
    _dispatch_once(0xb60298,&PTR___NSConcreteGlobalBlock_009e4b68);
  }
  uVar1 = uRam0000000000b60290;
  _objc_retain(uRam0000000000b60290);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004512ec; end: 00451317;  */

void FUN_004512ec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac2d58;
  _objc_alloc_init();
  uVar1 = puRam0000000000b60290;
  puRam0000000000b60290 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00451318; end: 0045146f; -[SCServiceLoop init] */

undefined1 * FUN_00451318(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac3cd8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x00781fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x00781fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x00781fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
    func_0x0078c940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x00781fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    func_0x00785a40();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00451470; end: 004516eb; -[SCServiceLoop resumeService:whenNotified:] */

void FUN_00451470(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x451528;
  puStack_50 = &UNK_009e43d0;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0078a560(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 004516ec; end: 0045177b; -[SCServiceLoop invalidateService:] */

void FUN_004516ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_0045177c;
  puStack_48 = &UNK_009e36d0;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x0078a560(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 0045177c; end: 004517cb;  */

void FUN_0045177c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00451668(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e720(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),param_2,uVar1);
  func_0x0077dd00(*(undefined8 *)(param_1 + 0x28),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004517cc; end: 0045185b; -[SCServiceLoop suspendService:] */

void FUN_004517cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_0045185c;
  puStack_48 = &UNK_009e36d0;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x0078a560(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}


