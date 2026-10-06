/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10656daf0; end: 10656db67; -[SCMessageTypeRenderingPluginManager _isQuotingSupportEnabledForPlugin:] */

long FUN_10656daf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a54e8);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = param_3;
    func_0x00010c11ee40(param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 10656db68; end: 10656dba7; -[SCMessageTypeRenderingPluginManager _getIsChatTextPluginEnabled] */

undefined8 FUN_10656db68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06e720();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10656dba8; end: 10656dd6f; -[SCMessageTypeRenderingPluginManager _isCurrentUserAddedToGroup:] */

bool FUN_10656dba8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c0f49e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c252ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
  if ((puVar3 == (undefined1 *)0x0) ||
     (puVar2 = puVar3, func_0x00010bf529e0(), puVar2 == (undefined1 *)0x0)) {
    puVar6 = (undefined8 *)puVar9;
    bVar1 = false;
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
    _objc_retain(puVar3);
    puVar2 = puVar3;
    func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_e8,0x10);
    if (puVar2 != (undefined1 *)0x0) {
      lVar8 = *plStack_120;
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(puVar3);
          }
          uVar7 = *(ulong *)(lStack_128 + (long)puVar9 * 8);
          uVar4 = uVar7;
          func_0x00010befe640();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          func_0x00010c252ea0();
          if ((int)uVar7 == 0) {
            puVar6 = *(undefined8 **)(param_1 + 0x38);
            uVar4 = uVar5;
            func_0x00010c0720c0(uVar5,param_2,puVar6);
            if ((uVar4 & 1) != 0) {
              _objc_release(uVar5);
              bVar1 = true;
              goto LAB_10656dd20;
            }
          }
          _objc_release(uVar5);
          puVar9 = puVar9 + 1;
        } while (puVar2 != puVar9);
        puVar2 = puVar3;
        puVar6 = &uStack_130;
        func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_e8,0x10);
      } while (puVar2 != (undefined1 *)0x0);
    }
    bVar1 = false;
LAB_10656dd20:
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return bVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  func_0x00010c101c20(puVar3,param_2,puVar6,0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined1 *)0x0) {
    bVar1 = false;
  }
  else {
    puVar2 = puVar3;
    func_0x00010c11ede0(puVar3,param_2,puVar6);
    bVar1 = puVar2 == (undefined1 *)0x1;
  }
  _objc_release(puVar3);
  _objc_release(puVar6);
  return bVar1;
}



/* Entry: 10656dd70; end: 10656ddef; -[SCMessageTypeRenderingPluginManager _isContextualReplyEnabledForMessage:] */

bool FUN_10656dd70(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c101c20(param_1,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c11ede0(param_1,param_2,param_3);
    bVar1 = lVar2 == 1;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10656ddf0; end: 10656de47; -[SCMessageTypeRenderingPluginManager _isTextPluginEnabledForMessage:] */

undefined8 FUN_10656ddf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c06e660();
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010be3f320(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10656de48; end: 10656de8f; -[SCMessageTypeRenderingPluginManager _getIsSponsoredWelcomeStatusMessagePluginEnabled] */

undefined8 FUN_10656de48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10656de90; end: 10656df1f; -[SCMessageTypeRenderingPluginManager pluginViewDidChangeVisibility:messageId:visible:] */

void FUN_10656de90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cb868;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c29fba0(puVar1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be085e0(param_1,param_2,param_3,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10656df20; end: 10656dfaf; -[SCMessageTypeRenderingPluginManager pluginViewDidChangeFocus:messageId:focused:] */

void FUN_10656df20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cb868;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfb3780(puVar1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be085e0(param_1,param_2,param_3,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10656dfb0; end: 10656dfb7; -[SCMessageTypeRenderingPluginManager setVisibleMessageIds:] */

void FUN_10656dfb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_next__112614028);
  return;
}



/* Entry: 10656dfb8; end: 10656dfc7; -[SCMessageTypeRenderingPluginManager messageListDidScroll] */

void FUN_10656dfb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_next__112614028,PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 10656dfc8; end: 10656e10b; -[SCMessageTypeRenderingPluginManager setMessageVisibilityFractionProvider:] */

void FUN_10656dfc8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_3 != lVar1) {
    _objc_storeWeak(param_1 + 0x50,param_3);
    func_0x00010c101e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010bf97ce0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10656e10c; end: 10656e20f; -[SCMessageTypeRenderingPluginManager _emitViewEventForPlugin:messageId:information:] */

void FUN_10656e10c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010c101ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010010fab4();
  _objc_release(lVar1);
  if ((lVar1 != 0) && ((int)lVar2 != 0)) {
    func_0x00010c0cba80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cb870;
    _objc_alloc(PTR_PTR_1126cb870);
    func_0x00010c02b720();
    func_0x00010c0d9840(lVar1);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10656e210; end: 10656e28b; -[SCMessageTypeRenderingPluginManager quotedRenderingStyleForMessage:] */

long FUN_10656e210(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010c101c20(param_1,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c11ede0(param_1,param_2,param_3);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10656e28c; end: 10656e297; -[SCMessageTypeRenderingPluginManager plugins] */

void FUN_10656e28c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x90,1);
  return;
}



/* Entry: 10656e298; end: 10656e29f; -[SCMessageTypeRenderingPluginManager setPlugins:] */

void FUN_10656e298(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10656e2a0; end: 10656e2ab; -[SCMessageTypeRenderingPluginManager messageViewEventSubjects] */

void FUN_10656e2a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x98,1);
  return;
}



/* Entry: 10656e2ac; end: 10656e2b3; -[SCMessageTypeRenderingPluginManager setMessageViewEventSubjects:] */

void FUN_10656e2ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10656e2b4; end: 10656e3ab; -[SCMessageTypeRenderingPluginManager .cxx_destruct] */

void FUN_10656e2b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 10656e3ac; end: 10656e5a7; +[SCChatInputViewControllerFactory createInputViewControllerWithCircumstanceEngine:messagingExperimentService:chatDisplayReadyLogger:pageName:inputPlugins:inputObservers:enforceKeyWindowCheck:blizzardLogger:displaySnapchatPlusBorder:nglStudySettings:featureSettingsService:activeConversationInformation:preferences:backgroundPerformer:messageActionHandler:] */

void FUN_10656e3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb878;
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0331c0();
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  FUN_106587acc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dcb60(puVar1,param_2,param_3);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126cb880;
  _objc_alloc(PTR_PTR_1126cb880);
  func_0x00010c05f0c0();
  _objc_release(param_11);
  func_0x00010c1c0520(puVar1,param_2,puVar2);
  func_0x00010c126e40(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c126c60(puVar1,param_2,param_8);
  _objc_release(param_8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10656e5a8; end: 10656e637;  */

void FUN_10656e5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uVar1 = param_2;
  func_0x00010c08fa60();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10656e638;
  puStack_48 = &UNK_11092afe8;
  uStack_40 = param_2;
  uStack_38 = param_1;
  func_0x00010bf97b00(param_2,param_3,uVar2,0,uVar1,0,&puStack_60);
  return;
}



/* Entry: 10656e638; end: 10656e70b;  */

void FUN_10656e638(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  dVar3 = *(double *)(param_1 + 0x28);
  lVar1 = param_2;
  func_0x00010bfb41c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c102de0(param_2);
    if ((int)dVar3 != (int)*(double *)(param_1 + 0x28)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      lVar1 = param_2;
      func_0x00010bfb41c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6f20(uVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10656e70c; end: 10656e78b;  */

void FUN_10656e70c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 2) {
LAB_10656e774:
    uVar1 = 0xd4;
  }
  else if (param_1 == 1) {
    if (lRam00000001138466f0 < 3) goto LAB_10656e774;
LAB_10656e764:
    uVar1 = 0x2d;
  }
  else {
    if (param_1 != 0) goto LAB_10656e784;
    if (2 < lRam00000001138466f0) goto LAB_10656e764;
    uVar1 = 0xd5;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_10656e784:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10656e78c; end: 10656e97f; -[SCChatInputBar initWithSizeEventPublisher:interactiveDrawerEventPublisher:submenuView:circumstanceEngine:displaySnapchatPlusBorder:messagingExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10656e78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f1bc8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11274a848;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11274a84c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11274a850;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274a854) = param_7;
    lVar5 = (long)_DAT_11274a858;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_alloc();
    func_0x00010c00ea00(0x3fc3333333333333);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274a85c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274a85c) = puVar3;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be630a0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274a860);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11274a860) = puVar4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11274a864;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    func_0x00010be3bda0(puVar1);
    func_0x00010bdec4a0(puVar1);
    puVar3 = PTR_PTR_1126cb888;
    _objc_opt_new();
    lVar5 = (long)_DAT_11274a868;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c189a00(*(undefined8 *)((long)puVar1 + lVar5));
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10656e980; end: 10656e9bb; -[SCChatInputBar _createConstraints] */

void FUN_10656e980(undefined8 param_1)

{
  func_0x00010bdef2e0();
  func_0x00010bdf4a40(param_1);
  func_0x00010bdf2a00(param_1);
  func_0x00010bdf3140(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdeec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createInputBarHintConstraints_1125594b0);
  return;
}



/* Entry: 10656e9bc; end: 10656e9f7; -[SCChatInputBar _initializeViews] */

void FUN_10656e9bc(undefined8 param_1)

{
  func_0x00010be3b6c0();
  func_0x00010be3bd00(param_1);
  func_0x00010be3ba20(param_1);
  func_0x00010be3bb00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be3b650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__initializeInputBarHint_11256c730);
  return;
}



/* Entry: 10656e9f8; end: 10656ea4b; -[SCChatInputBar _initializeLeftStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656e9f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cb890;
  _objc_opt_new();
  lVar3 = (long)_DAT_11274a86c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10656ea4c; end: 10656ead3; -[SCChatInputBar _initializeTextViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656ea4c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cb898;
  _objc_alloc();
  func_0x00010bffe600();
  lVar3 = (long)_DAT_11274a870;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1c3c00(0x4014000000000000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1ad200(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10656ead4; end: 10656eb27; -[SCChatInputBar _initializeRightStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656ead4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cb890;
  _objc_opt_new();
  lVar3 = (long)_DAT_11274a874;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10656eb28; end: 10656ebb3; -[SCChatInputBar _initializeSeparator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656eb28(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar3 = (long)_DAT_11274a878;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10656ebb4; end: 10656ec6f; -[SCChatInputBar _initializeInputBarHint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656ebb4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar3 = (long)_DAT_11274a87c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10656ec70; end: 10656edff; -[SCChatInputBar _createLeftStackViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656ec70(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_11274a86c;
  uVar1 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c08de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010c08de00(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10657122c();
  uVar2 = uVar1;
  func_0x00010bf493c0(uVar1,param_3,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(uVar1);
  FUN_10657122c();
  param_1 = -param_1;
  uVar1 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c2793a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11274a870;
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c08de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf493c0(param_1,uVar1,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c0ce400(*(undefined8 *)(param_2 + lVar5));
  uVar1 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010bf348e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010bf1ff80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf493c0(-(double)(float)(int)(param_1 * 0.5),uVar1,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10656ee00; end: 10656efef; -[SCChatInputBar _createRightStackViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656ee00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  lVar4 = (long)_DAT_11274a874;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11274a870;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c2793a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = 0.0;
  uVar3 = uVar1;
  func_0x00010bf493c0(0,uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c0ce400(*(undefined8 *)(param_1 + lVar5));
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf348e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf1ff80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(-(double)(float)(int)(dVar6 * 0.5),uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf1ff80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf1ff80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = -3.0;
  uVar3 = uVar1;
  func_0x00010bf493c0(0xc008000000000000,uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c2793a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10657122c();
  uVar3 = uVar1;
  func_0x00010bf493c0(-dVar6,uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10656eff0; end: 10656f0e3; -[SCChatInputBar _createTextViewContainerConstraints] */

/* WARNING: Possible PIC construction at 0x00010656f064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010656f068) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656eff0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bed43c0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a870);
  func_0x00010c274200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80(*(undefined8 *)(param_1 + _DAT_11274a87c));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4008000000000000,uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10656f0e4; end: 10656f273; -[SCChatInputBar _createSeparatorConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656f0e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274a878;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c2793a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c274200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfe0660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf49420(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10656f274; end: 10656f41b; -[SCChatInputBar _createInputBarHintConstraints] */

/* WARNING: Possible PIC construction at 0x00010656f2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010656f33c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010656f3a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010656f340) */
/* WARNING: Removing unreachable block (ram,0x00010656f2e0) */
/* WARNING: Removing unreachable block (ram,0x00010656f3a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656f274(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a87c);
  func_0x00010c08de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10656f41c; end: 10656f46b; -[SCChatInputBar setTextViewPasteDelegate:] */

void FUN_10656f41c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c066020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213960();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10656f46c; end: 10656f4af; -[SCChatInputBar textViewPasteDelegate] */

void FUN_10656f46c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c066020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26cc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10656f4b0; end: 10656f4bf; -[SCChatInputBar inputTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656f4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26ca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a870),PTR_s_textView_112678cc8);
  return;
}



/* Entry: 10656f4c0; end: 10656f4cf; -[SCChatInputBar internalStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656f4c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a870),PTR_s_stackView_112670ec0);
  return;
}



/* Entry: 10656f4d0; end: 10656f5f7; -[SCChatInputBar inputItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656f4d0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  long lVar9;
  
  uVar8 = 0xa0;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a86c);
  func_0x00010c065be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0695c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c065be0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274a874);
  func_0x00010c065be0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  puVar7 = puVar6;
  func_0x00010bfb27a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  iVar1 = 2;
  func_0x000100029b9c(2,0xf,4,0);
  if (iVar1 != 0) {
    return;
  }
  puVar6[_DAT_11274a888] = uVar8;
  func_0x00010bed43c0(puVar6);
  func_0x00010c1cbf40(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010c284850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar6,PTR_s_updateConstraintsIfNeeded_11267ec38);
  return;
}



/* Entry: 10656f5f8; end: 10656f65b; -[SCChatInputBar setIgnoresSafeAreaLayoutGuides:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656f5f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0xf,4,0);
  if (iVar1 != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11274a888) = param_3;
  func_0x00010bed43c0(param_1);
  func_0x00010c1cbf40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c284850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateConstraintsIfNeeded_11267ec38);
  return;
}



/* Entry: 10656f65c; end: 10656fa8f; -[SCChatInputBar inputBarStateManager:didUpdateInputBarState:allowedInputModalities:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656f65c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c08df60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c065be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0695c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c065be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf09f80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  if (param_4 == 1) {
    lVar1 = param_1;
    func_0x00010c2794e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c065be0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c124d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar6 = (long)_DAT_11274a860;
  func_0x00010c2559c0(*(undefined8 *)(param_1 + lVar6));
  lVar1 = param_1;
  func_0x00010be630a0();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(long *)(param_1 + lVar6) = lVar1;
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  func_0x00010c1cbe20(param_1);
  lVar1 = param_1;
  func_0x00010c2794e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c065be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed9fe0(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bed9fe0(param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274a850);
  func_0x00010c065be0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed9fe0(param_1);
  _objc_release(uVar5);
  func_0x00010beda000(param_1);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11274a86c));
  lVar1 = param_1;
  func_0x00010c0695c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c066020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c066020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200120();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0660c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e480();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c066020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(lVar1);
  _objc_initWeak(auStack_78,param_1);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10656fa90;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bef6cc0(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  _objc_copyWeak(auStack_a8,auStack_78);
  _objc_retain(puVar4);
  func_0x00010bef78c0(uVar5);
  func_0x00010c24dc40(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10656fa90; end: 10656fb27;  */

void FUN_10656fa90(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10656fb28; end: 10656fb2b; -[SCChatInputBar stateManagerTextView] */

void FUN_10656fb28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_inputTextView_1125f7218);
  return;
}



/* Entry: 10656fb2c; end: 10656fb37; -[SCChatInputBar activeInputModes] */

void FUN_10656fb2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef0970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UITextInputMode_1126cb8a0,PTR_s_activeInputModes_112599c00);
  return;
}



/* Entry: 10656fb38; end: 10656fb47; -[SCChatInputBar updateVisibleItemsForState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656fb38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a868),PTR_s_setState__112660218);
  return;
}



/* Entry: 10656fb48; end: 10656fb57; -[SCChatInputBar updateAllowedModalities:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656fb48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1673f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a868),PTR_s_setAllowedInputModalities__112637718);
  return;
}



/* Entry: 10656fb58; end: 10656fb73; -[SCChatInputBar updateVisibleItemsWithCurrentState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656fb58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28cc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a868),
             PTR_s_updateWithReplacementText_range__112680d38,0,0,0);
  return;
}



/* Entry: 10656fb74; end: 10656fce7; -[SCChatInputBar setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656fb74(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  *(ulong *)(param_1 + _DAT_11274a88c) = param_3;
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + _DAT_11274a870));
  func_0x00010bee1e40(param_1);
  lVar1 = param_1;
  func_0x00010c065be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(lVar1);
  uVar2 = param_3;
  FUN_10656e70c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,uVar2);
  _objc_release(uVar2);
  if (param_3 < 3) {
    uVar4 = *(undefined8 *)(&UNK_10dddcb58 + param_3 * 8);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10dddcb40 + param_3 * 8));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11274a87c),param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11274a878),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10656fce8; end: 10656fcf3;  */

void FUN_10656fce8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setStyle__1126614d0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10656fcf4; end: 10656fd5b; -[SCChatInputBar addInputItem:atPosition:animationStyle:] */

void FUN_10656fcf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bebf280(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef93c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10656fd5c; end: 10656fdc3; -[SCChatInputBar prependInputItem:position:animationStyle:] */

void FUN_10656fd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bebf280(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10a620();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10656fdc4; end: 10656fe2b; -[SCChatInputBar insertPrioritizedInputItem:position:animationStyle:] */

void FUN_10656fdc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bebf280(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066d00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10656fe2c; end: 10656fecb; -[SCChatInputBar collapseInputItemsInContainingStackView:withCollapseAnimation:excludingInputItemWithIdentifier:] */

void FUN_10656fe2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010be76340(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c067ec0(lVar1);
    func_0x00010bebf280(param_1,param_2,(long)(int)lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3fa40();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10656fecc; end: 10656ffef; -[SCChatInputBar scaleFont:isEdit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656fecc(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = (long)_DAT_11274a870;
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c26ca80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e1e0();
  _objc_release(uVar1);
  func_0x00010c26cbc0(*(undefined8 *)(param_2 + lVar3));
  lVar3 = (long)_DAT_11274a880;
  dVar4 = param_1;
  func_0x00010bf49220(*(undefined8 *)(param_2 + lVar3));
  func_0x00010c181140(param_1,*(undefined8 *)(param_2 + lVar3));
  puVar2 = PTR_PTR_1126cb8a8;
  if (param_1 - dVar4 != 0.0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_11274a84c);
    lVar3 = param_2 + _DAT_11274a890;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf89dc0();
    func_0x00010c065740(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(puVar2);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdcc510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1 - dVar4,param_2,PTR_s__announceSizeUpdateWithHeightCha_112550ae0);
    return;
  }
  return;
}



/* Entry: 10656fff0; end: 1065700b7; -[SCChatInputBar showInputBarHintWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10656fff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar2 = (long)_DAT_11274a87c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c1a7f60(uVar1,param_2,0);
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
  _objc_release(param_3);
  func_0x00010c181140(0x403c000000000000,*(undefined8 *)(param_1 + _DAT_11274a884));
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1065700b8;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
  return;
}



/* Entry: 1065700b8; end: 1065700cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065700b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274a87c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1065700d0; end: 106570127; -[SCChatInputBar hideInputBarHint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065700d0(long param_1)

{
  long lVar1;
  
  func_0x00010c181140(0,*(undefined8 *)(param_1 + _DAT_11274a884));
  lVar1 = (long)_DAT_11274a87c;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 106570128; end: 106570193; -[SCChatInputBar inputViewController:textViewDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106570128(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c08fa60();
  _objc_release(param_4);
  if (lVar1 == 0) {
    func_0x00010c28cc40(*(undefined8 *)(param_1 + _DAT_11274a868));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bee1e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTextViewHeightConstraint_112596138);
  return;
}



/* Entry: 106570194; end: 1065701cf; -[SCChatInputBar inputViewController:textViewWillBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106570194(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274a868;
  func_0x00010c138d60(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c28cc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_updateWithReplacementText_range__112680d38,0,0,0
            );
  return;
}



/* Entry: 1065701d0; end: 1065701d7; -[SCChatInputBar inputViewController:textViewWillEndEditing:] */

void FUN_1065701d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28c270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateVisibleItemsForState__112680ac0,0);
  return;
}



/* Entry: 1065701d8; end: 1065701f3; -[SCChatInputBar inputViewController:textView:willChangeTextInRange:replacementText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065701d8(long param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  
                    /* WARNING: Could not recover jumptable at 0x00010c28cc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a868),
             PTR_s_updateWithReplacementText_range__112680d38,in_x6,in_x4,in_x5);
  return;
}



/* Entry: 1065701f4; end: 106570257; -[SCChatInputBar _newItemAnimator] */

undefined * FUN_1065701f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230;
  _objc_alloc(PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230);
  func_0x00010c0081e0(0x3fea3d70a3d70a3d,0x3fc3333333333333);
  puVar2 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc(PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0);
  func_0x00010c00eb20(0);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 106570258; end: 106570333; -[SCChatInputBar _updateItems:withStateVisibility:updatedInputItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106570258(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a868);
  func_0x00010bf01840();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a860);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106570334;
  puStack_68 = &UNK_110844fe0;
  uStack_60 = param_3;
  uStack_58 = param_5;
  uStack_50 = param_4;
  uStack_48 = uVar1;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bef6cc0(uVar2,param_2,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106570334; end: 106570567;  */

/* WARNING: Possible PIC construction at 0x000106570688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001065707e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010657068c) */
/* WARNING: Removing unreachable block (ram,0x000106570740) */
/* WARNING: Removing unreachable block (ram,0x00010657076c) */
/* WARNING: Removing unreachable block (ram,0x000106570758) */
/* WARNING: Removing unreachable block (ram,0x000106570794) */
/* WARNING: Removing unreachable block (ram,0x0001065706a4) */
/* WARNING: Removing unreachable block (ram,0x0001065707e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106570334(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  puVar8 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar14 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar9 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar9);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar12 = *plStack_130;
    do {
      lVar13 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(lVar9);
        }
        uVar10 = *(ulong *)(lStack_138 + lVar13 * 8);
        uVar2 = uVar10;
        func_0x00010c06eb60();
        uVar6 = *(ulong *)(param_1 + 0x30);
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        _objc_retain(uVar10);
        uVar3 = uVar10;
        func_0x00010c074c20();
        if ((((uVar3 & 1) == 0) && (func_0x00010bf01b40(uVar10), dVar14 == 1.0)) ||
           (uVar3 = uVar10, func_0x00010c2a0080(), (uVar3 & uVar6) == 0)) {
          _objc_release(uVar10);
LAB_10657045c:
          uVar6 = *(ulong *)(param_1 + 0x30);
          uVar3 = *(ulong *)(param_1 + 0x38);
          _objc_retain(uVar10);
          uVar5 = uVar10;
          func_0x00010c074c20();
          if ((int)uVar5 == 0) {
            uVar5 = uVar10;
            func_0x00010c2a0080();
            if ((uVar5 & uVar6) == 0) {
              _objc_release(uVar10);
            }
            else {
              FUN_1065712e4(uVar3,uVar10);
              _objc_release(uVar10);
              if ((uVar3 & 1) != 0) goto LAB_1065704dc;
            }
            uVar6 = uVar10;
            func_0x00010bfe69a0();
            if ((uVar6 & 1) != 0) goto LAB_1065704f8;
            dVar14 = 0.0;
            func_0x00010c1677c0(uVar10);
LAB_1065704d8:
            func_0x00010c17e480(uVar10);
          }
          else {
            _objc_release(uVar10);
          }
LAB_1065704dc:
          func_0x00010c06eb60();
          if ((int)uVar2 != (int)uVar10) {
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
          }
        }
        else {
          FUN_1065712e4(uVar4,uVar10);
          _objc_release(uVar10);
          if ((int)uVar4 == 0) goto LAB_10657045c;
          uVar6 = uVar10;
          func_0x00010bfe69a0();
          if ((uVar6 & 1) == 0) {
            dVar14 = 1.0;
            func_0x00010c1677c0(uVar10);
            goto LAB_1065704d8;
          }
        }
LAB_1065704f8:
        lVar13 = lVar13 + 1;
      } while (lVar1 != lVar13);
      lVar1 = lVar9;
      puVar8 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  puVar7 = (undefined1 *)puVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar7 != (undefined1 *)0x0) {
    puVar11 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar8);
      }
      func_0x00010c21e900(*(undefined8 *)((long)puVar11 * 8));
      puVar11 = puVar11 + 1;
    } while (puVar7 != puVar11);
    puVar7 = (undefined1 *)puVar8;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)((long)puVar8 + (long)_DAT_11274a894),PTR_s_setActive__112636340,0);
  return;
}



/* Entry: 106570568; end: 10657065f; -[SCChatInputBar _updateItemsInteractionState:userInteractionEnabled:] */

/* WARNING: Possible PIC construction at 0x000106570688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001065707e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010657068c) */
/* WARNING: Removing unreachable block (ram,0x000106570740) */
/* WARNING: Removing unreachable block (ram,0x00010657076c) */
/* WARNING: Removing unreachable block (ram,0x000106570758) */
/* WARNING: Removing unreachable block (ram,0x000106570794) */
/* WARNING: Removing unreachable block (ram,0x0001065706a4) */
/* WARNING: Removing unreachable block (ram,0x0001065707e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106570568(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010c21e900(*(undefined8 *)(lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_11274a894),PTR_s_setActive__112636340,0);
  return;
}



/* Entry: 106570660; end: 1065707ff; -[SCChatInputBar _updateBottomConstraint] */

/* WARNING: Possible PIC construction at 0x000106570688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001065707e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010657068c) */
/* WARNING: Removing unreachable block (ram,0x000106570740) */
/* WARNING: Removing unreachable block (ram,0x00010657076c) */
/* WARNING: Removing unreachable block (ram,0x000106570758) */
/* WARNING: Removing unreachable block (ram,0x000106570794) */
/* WARNING: Removing unreachable block (ram,0x0001065706a4) */
/* WARNING: Removing unreachable block (ram,0x0001065707e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106570660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a894),PTR_s_setActive__112636340,0);
  return;
}



/* Entry: 106570800; end: 106570993; -[SCChatInputBar _updateTextViewHeightConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106570800(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined1 auStack_68 [8];
  double dStack_60;
  undefined1 auStack_58 [8];
  
  func_0x00010c26cbc0(*(undefined8 *)(param_2 + _DAT_11274a870));
  puVar1 = PTR_PTR_1126cb8a8;
  uVar2 = *(undefined8 *)(param_2 + _DAT_11274a84c);
  lVar3 = param_2 + _DAT_11274a890;
  dVar5 = param_1;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf89dc0();
  func_0x00010c065740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  _objc_release(lVar3);
  lVar3 = (long)_DAT_11274a880;
  func_0x00010bf49220(*(undefined8 *)(param_2 + lVar3));
  if (param_1 != dVar5) {
    func_0x00010bf49220(*(undefined8 *)(param_2 + lVar3));
    func_0x00010c181140(param_1,*(undefined8 *)(param_2 + lVar3));
    func_0x00010c1cbe20(param_2);
    lVar4 = (long)_DAT_11274a85c;
    lVar3 = *(long *)(param_2 + lVar4);
    func_0x00010c252440();
    if (lVar3 != 0) {
      func_0x00010c2559c0(*(undefined8 *)(param_2 + lVar4));
    }
    _objc_initWeak(auStack_58,param_2);
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    _objc_copyWeak(auStack_68,auStack_58);
    dStack_60 = param_1 - dVar5;
    func_0x00010bef6cc0(uVar2);
    func_0x00010c24dc40(*(undefined8 *)(param_2 + lVar4));
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 106570994; end: 1065709c7;  */

void FUN_106570994(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdcc500(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065709c8; end: 106570af7; -[SCChatInputBar _announceInputItemCollapseStates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065709c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  dVar7 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        uVar3 = uVar4;
        func_0x00010c06eb60();
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        if ((int)uVar3 == 0) {
          func_0x00010bf7de40();
        }
        else {
          func_0x00010bf73c00();
        }
        _objc_release(uVar4);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = (long)_DAT_11274a890;
  lVar1 = param_3 + lVar5;
  dVar8 = dVar7;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar9 = dVar8;
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar1 = param_3 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010beed160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar10 = dVar9;
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar5 = param_3 + lVar5;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(lVar1);
  _objc_release(lVar5);
  uVar3 = *(undefined8 *)(param_3 + _DAT_11274a848);
  puVar2 = PTR_PTR_1126cb8b0;
  _objc_alloc(PTR_PTR_1126cb8b0);
  func_0x00010c02f920(dVar10,dVar7 + (dVar8 - dVar9));
  func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106570af8; end: 106570c27; -[SCChatInputBar _announceSizeUpdateWithHeightChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106570af8(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar5 = (long)_DAT_11274a890;
  lVar1 = param_2 + lVar5;
  dVar6 = param_1;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar7 = dVar6;
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010beed160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar8 = dVar7;
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar5 = param_2 + lVar5;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  _objc_release(lVar1);
  _objc_release(lVar5);
  uVar4 = *(undefined8 *)(param_2 + _DAT_11274a848);
  puVar3 = PTR_PTR_1126cb8b0;
  _objc_alloc(PTR_PTR_1126cb8b0);
  func_0x00010c02f920(dVar8,param_1 + (dVar6 - dVar7));
  func_0x00010c0d9840(uVar4,param_3,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106570c28; end: 106570ca7; -[SCChatInputBar _stackViewAtPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106570c28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x19;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      lVar1 = (long)_DAT_11274a874;
    }
    else {
      if (param_3 != 1) goto LAB_106570c98;
      lVar1 = (long)_DAT_11274a86c;
    }
  }
  else {
    if (param_3 == 2) {
      func_0x00010c0695c0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x19 = param_1;
      goto LAB_106570c98;
    }
    if (param_3 != 3) goto LAB_106570c98;
    lVar1 = (long)_DAT_11274a850;
  }
  unaff_x19 = *(long *)(param_1 + lVar1);
  _objc_retain(unaff_x19);
LAB_106570c98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 106570ca8; end: 106570fb7; -[SCChatInputBar _positionForStackViewContainingInputItemIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_106570ca8(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar1 = *(long *)(param_1 + _DAT_11274a86c);
  func_0x00010c065be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_220;
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c63d0;
    do {
      lVar7 = 0;
      do {
        if (*plStack_220 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(undefined8 *)(lStack_228 + lVar7 * 8);
        func_0x00010bfa2fc0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = param_3;
        func_0x00010c0720c0(param_3,param_2,uVar3);
        _objc_release(uVar3);
        if (((ulong)ppuVar4 & 1) != 0) goto LAB_106570f68;
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_230,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  lVar1 = *(long *)(param_1 + _DAT_11274a874);
  func_0x00010c065be0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_260;
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c63e8;
    do {
      lVar7 = 0;
      do {
        if (*plStack_260 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(undefined8 *)(lStack_268 + lVar7 * 8);
        func_0x00010bfa2fc0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = param_3;
        func_0x00010c0720c0(param_3,param_2,uVar3);
        _objc_release(uVar3);
        if (((ulong)ppuVar4 & 1) != 0) goto LAB_106570f68;
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_270,auStack_168,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  func_0x00010c0695c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c065be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_2b0,auStack_1e8,0x10);
  if (lVar2 != 0) {
    lVar6 = *plStack_2a0;
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6400;
    do {
      lVar7 = 0;
      do {
        if (*plStack_2a0 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(undefined8 *)(lStack_2a8 + lVar7 * 8);
        func_0x00010bfa2fc0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = param_3;
        func_0x00010c0720c0(param_3,param_2,uVar3);
        _objc_release(uVar3);
        if (((ulong)ppuVar4 & 1) != 0) goto LAB_106570f68;
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_2b0,auStack_1e8,0x10);
    } while (lVar2 != 0);
  }
  ppuVar5 = (undefined **)0x0;
LAB_106570f68:
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  func_0x00010c066020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = param_3;
  func_0x00010bf179a0();
  _objc_release(param_3);
  return ppuVar5;
}



/* Entry: 106570fb8; end: 106570ff3; -[SCChatInputBar becomeFirstResponder] */

undefined8 FUN_106570fb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c066020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf179a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106570ff4; end: 10657102f; -[SCChatInputBar resignFirstResponder] */

undefined8 FUN_106570ff4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c066020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c13a0e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106571030; end: 10657106b; -[SCChatInputBar isFirstResponder] */

undefined8 FUN_106571030(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c066020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c073040();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10657106c; end: 10657107b; -[SCChatInputBar style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10657106c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a88c);
}



/* Entry: 10657107c; end: 10657109b; -[SCChatInputBar inputController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657107c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a890);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10657109c; end: 1065710af; -[SCChatInputBar setInputController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10657109c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274a890,param_3);
  return;
}



/* Entry: 1065710b0; end: 1065710bf; -[SCChatInputBar inputTextViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065710b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a870);
}



/* Entry: 1065710c0; end: 1065710cf; -[SCChatInputBar leadingStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065710c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a86c);
}



/* Entry: 1065710d0; end: 1065710df; -[SCChatInputBar trailingStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065710d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a874);
}



/* Entry: 1065710e0; end: 1065710ef; -[SCChatInputBar submenuView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065710e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a850);
}



/* Entry: 1065710f0; end: 1065710ff; -[SCChatInputBar ignoresSafeAreaLayoutGuides] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1065710f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274a888);
}



/* Entry: 106571100; end: 10657122b; -[SCChatInputBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106571100(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a850,0);
  _objc_storeStrong(param_1 + _DAT_11274a874,0);
  _objc_storeStrong(param_1 + _DAT_11274a86c,0);
  _objc_storeStrong(param_1 + _DAT_11274a870,0);
  _objc_destroyWeak(param_1 + _DAT_11274a890);
  _objc_storeStrong(param_1 + _DAT_11274a858,0);
  _objc_storeStrong(param_1 + _DAT_11274a864,0);
  _objc_storeStrong(param_1 + _DAT_11274a84c,0);
  _objc_storeStrong(param_1 + _DAT_11274a848,0);
  _objc_storeStrong(param_1 + _DAT_11274a868,0);
  _objc_storeStrong(param_1 + _DAT_11274a894,0);
  _objc_storeStrong(param_1 + _DAT_11274a860,0);
  _objc_storeStrong(param_1 + _DAT_11274a85c,0);
  _objc_storeStrong(param_1 + _DAT_11274a880,0);
  _objc_storeStrong(param_1 + _DAT_11274a884,0);
  _objc_storeStrong(param_1 + _DAT_11274a87c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a878,0);
  return;
}



/* Entry: 10657122c; end: 106571283;  */

undefined8 FUN_10657122c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14d460();
  uVar3 = 0x4008000000000000;
  if ((int)puVar2 == 0) {
    uVar3 = 0x4010000000000000;
  }
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 106571284; end: 1065712e3;  */

void FUN_106571284(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  func_0x00010bfe69a0(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_2;
  func_0x00010c067fc0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_numberWithUnsignedInteger__112615828,lVar2 + (ulong)((uint)param_3 ^ 1));
  return;
}



/* Entry: 1065712e4; end: 10657133b;  */

bool FUN_1065712e4(ulong param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c065cc0();
  if (uVar2 == 0) {
    bVar1 = true;
  }
  else {
    uVar2 = param_2;
    func_0x00010c065cc0(param_2);
    bVar1 = (uVar2 & param_1) != 0;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10657133c; end: 1065713c7; -[SCChatInputBarStateManager init] */

undefined8 * FUN_10657133c(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1bd0;
  puVar1 = &uStack_30;
  uStack_30 = param_4;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar2);
    puVar1[6] = param_3 * 0.25;
    puVar1[5] = param_3 * 0.28;
    func_0x00010be89aa0(puVar1);
  }
  return puVar1;
}



/* Entry: 1065713c8; end: 106571423; -[SCChatInputBarStateManager setState:] */

void FUN_1065713c8(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x18) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x18) = param_3;
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c065760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106571424; end: 10657146f; -[SCChatInputBarStateManager setAllowedInputModalities:] */

void FUN_106571424(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x20) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x20) = param_3;
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c065760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106571470; end: 1065714f3; -[SCChatInputBarStateManager setCachedInputMode:] */

void FUN_106571470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c112f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e540b8);
  _objc_release(uVar2);
  *(char *)(param_1 + 0x10) = (char)uVar1;
  return;
}



/* Entry: 1065714f4; end: 10657151b; -[SCChatInputBarStateManager updateWithReplacementText:range:] */

void FUN_1065714f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bec2580();
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,uVar1);
  return;
}



/* Entry: 10657151c; end: 10657152b; -[SCChatInputBarStateManager resetInputMode] */

void FUN_10657151c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10657152c; end: 10657163f; -[SCChatInputBarStateManager isCurrentInputModeEmoji] */

undefined1 FUN_10657152c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bef0960();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x0001065715ac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175400(param_1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106571640; end: 106571893; -[SCChatInputBarStateManager _stateForReplacementText:range:] */

long FUN_106571640(ulong param_1,undefined8 param_2,undefined **param_3,long param_4,long param_5)

{
  undefined **ppuVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_3);
  ppuVar3 = (undefined **)(param_1 + 0x40);
  _objc_loadWeakRetained();
  ppuVar4 = ppuVar3;
  func_0x00010c2526c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuVar3 = param_3;
  }
  _objc_retain(ppuVar3);
  _objc_release(param_3);
  ppuVar5 = ppuVar4;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar1 = ppuVar5;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar5);
  if (param_5 == 0 && param_4 == 0) {
    ppuVar5 = ppuVar3;
    func_0x00010c08fa60();
    bVar2 = ppuVar5 == (undefined **)0x0;
  }
  else {
    bVar2 = false;
  }
  ppuVar5 = ppuVar1;
  func_0x00010c08fa60();
  ppuVar6 = ppuVar1;
  if ((bVar2) || (ppuVar5 < (undefined **)(param_4 + param_5))) {
    _objc_retain(ppuVar1);
  }
  else {
    func_0x00010c25cf80();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar5 = ppuVar6;
  func_0x00010c08fa60();
  dVar10 = *(double *)(param_1 + 8);
  dVar9 = (double)ppuVar5;
  *(double *)(param_1 + 8) = dVar9;
  if ((ppuVar5 != (undefined **)0x0) && (uVar7 = param_1, func_0x00010c06fbc0(), (uVar7 & 1) != 0))
  {
    lVar8 = 2;
    goto LAB_106571854;
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 < 2) {
    if (lVar8 == 0) {
LAB_1065717b8:
      if (ppuVar5 == (undefined **)0x0) {
        lVar8 = 0;
        dVar9 = 0.0;
      }
      else {
        ppuVar5 = ppuVar4;
        func_0x00010bfb3a80(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        FUN_106571894(ppuVar6,ppuVar5);
        _objc_release(ppuVar5);
        lVar8 = 3;
      }
      if (*(double *)(param_1 + 0x28) <= dVar9) {
        lVar8 = 1;
      }
      goto LAB_106571854;
    }
    if (lVar8 != 1) goto LAB_106571854;
    if ((undefined **)(long)dVar10 < ppuVar5) {
      lVar8 = 1;
      goto LAB_106571854;
    }
  }
  else if (lVar8 != 2) {
    if (lVar8 != 3) goto LAB_106571854;
    goto LAB_1065717b8;
  }
  if (ppuVar5 == (undefined **)0x0) {
    lVar8 = 0;
    dVar9 = 0.0;
  }
  else {
    ppuVar5 = ppuVar4;
    func_0x00010bfb3a80(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_106571894(ppuVar6,ppuVar5);
    _objc_release(ppuVar5);
    lVar8 = 3;
  }
  if (*(double *)(param_1 + 0x30) < dVar9) {
    lVar8 = 1;
  }
LAB_106571854:
  _objc_release(ppuVar6);
  _objc_release(ppuVar1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  return lVar8;
}



/* Entry: 106571894; end: 10657190f;  */

undefined8 FUN_106571894(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    _objc_retain(param_3);
    _objc_retain(param_2);
    func_0x00010c099280(param_3);
    uVar1 = 0x7fefffffffffffff;
    func_0x00010c14dd00(0x7fefffffffffffff,param_1,param_2);
    _objc_release(param_3);
    _objc_release(param_2);
  }
  return uVar1;
}



/* Entry: 106571910; end: 106571967; -[SCChatInputBarStateManager _registerNotifications] */

void FUN_106571910(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106571968; end: 1065719bf; -[SCChatInputBarStateManager _currentInputModeDidChange:] */

void FUN_106571968(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1065719c0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1065719c0; end: 106571a93;  */

void FUN_1065719c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bef0960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x0001065715ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175400(*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20) + 0x40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2526c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c073040();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c28cc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_updateWithReplacementText_range__112680d38,0,0,
               0);
    return;
  }
  return;
}


