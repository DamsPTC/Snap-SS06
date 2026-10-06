/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049f0c44; end: 1049f0c6b; -[_FBSDKAccessTokenExpirer timerDidFire] */

void FUN_1049f0c44(undefined8 param_1)

{
  _objc_retain();
  FUN_1049f0a68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049f0c6c; end: 1049f0cb7;  */

void FUN_1049f0c6c(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049f0cb8; end: 1049f0ce3; -[_FBSDKAccessTokenExpirer init] */

void FUN_1049f0cb8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FBSDKCoreKit._AccessTokenExpirer",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1049f0ce4);
  (*pcVar1)();
}



/* Entry: 1049f0ce4; end: 1049f0d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1049f0ce4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_50;
  long lStack_48;
  
  _objc_allocWithZone();
  plVar3 = &lStack_50;
  lVar2 = param_2;
  _swift_getObjectType(param_2,param_2,param_3);
  *(undefined8 *)(param_2 + _DAT_1130a3f38) = 0;
  *(undefined8 *)(param_2 + _DAT_1130a3f30) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _swift_unknownObjectRetain(param_1);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  puVar1 = PTR_s_checkAccessTokenExpirationDate_112525390;
  _objc_retain();
  _objc_msgSend(param_1,PTR_s_fb_addObserver_selector_name_obj_112525328,plVar3,puVar1,
                &PTR____CFConstantStringClassReference_110da0a78,0);
  _objc_retain(plVar3);
  _objc_msgSend(param_1,PTR_s_fb_addObserver_selector_name_obj_112525328,plVar3,puVar1,
                &PTR____CFConstantStringClassReference_110da2478,0);
  _objc_release(plVar3);
  _swift_unknownObjectRelease(param_1);
  FUN_1049f078c();
  _objc_release(plVar3);
  return (undefined1 *)plVar3;
}



/* Entry: 1049f0d18; end: 1049f0e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1049f0d18(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_50;
  long lStack_48;
  
  plVar3 = &lStack_50;
  lVar2 = param_2;
  _swift_getObjectType();
  *(undefined8 *)(param_2 + _DAT_1130a3f38) = 0;
  *(undefined8 *)(param_2 + _DAT_1130a3f30) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _swift_unknownObjectRetain(param_1);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  puVar1 = PTR_s_checkAccessTokenExpirationDate_112525390;
  _objc_retain();
  _objc_msgSend(param_1,PTR_s_fb_addObserver_selector_name_obj_112525328,plVar3,puVar1,
                &PTR____CFConstantStringClassReference_110da0a78,0);
  _objc_retain(plVar3);
  _objc_msgSend(param_1,PTR_s_fb_addObserver_selector_name_obj_112525328,plVar3,puVar1,
                &PTR____CFConstantStringClassReference_110da2478,0);
  _objc_release(plVar3);
  _swift_unknownObjectRelease(param_1);
  FUN_1049f078c();
  _objc_release(plVar3);
  return (undefined1 *)plVar3;
}



/* Entry: 1049f0e24; end: 1049f0e4f;  */

void FUN_1049f0e24(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e8d80);
  return;
}



/* Entry: 1049f0e50; end: 1049f0e57;  */

void FUN_1049f0e50(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049f0e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x60))();
  return;
}



/* Entry: 1049f0e58; end: 1049f0f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f0e58(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_1130a3f80));
  return;
}



/* Entry: 1049f0f18; end: 1049f0fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f0f18(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(*param_2 + _DAT_1130a3fb0);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  if (lVar2 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1107bd798;
    _swift_allocObject(&UNK_1107bd798,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(long *)(puVar4 + 0x18) = lVar3;
    uVar5 = 0x1049f80c4;
  }
  *param_1 = uVar5;
  param_1[1] = puVar4;
  func_0x000100dc4454(lVar2,lVar3);
  return;
}



/* Entry: 1049f0fac; end: 1049f1063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f0fac(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  if (lVar2 == 0) {
    pcVar7 = (code *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &UNK_1107bd770;
    _swift_allocObject(&UNK_1107bd770,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    *(long *)(puVar6 + 0x18) = lVar4;
    pcVar7 = FUN_1049f8094;
  }
  puVar1 = (undefined8 *)(*param_2 + _DAT_1130a3fb0);
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = pcVar7;
  puVar1[1] = puVar6;
  func_0x000100dc4454(lVar2,lVar4);
  func_0x000100dc4464(uVar3,uVar5);
  return;
}



/* Entry: 1049f1064; end: 1049f12f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049f1064(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_1130a3fb0);
  _swift_beginAccess(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  FUN_1049f81c4(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1049f12f4; end: 1049f1387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f12f4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(*param_2 + _DAT_1130a3fd0);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  if (lVar2 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1107bd748;
    _swift_allocObject(&UNK_1107bd748,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(long *)(puVar4 + 0x18) = lVar3;
    uVar5 = 0x1049f81bc;
  }
  *param_1 = uVar5;
  param_1[1] = puVar4;
  func_0x000100dc4454(lVar2,lVar3);
  return;
}



/* Entry: 1049f1388; end: 1049f143f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f1388(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  if (lVar2 == 0) {
    uVar7 = 0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &UNK_1107bd720;
    _swift_allocObject(&UNK_1107bd720,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    *(long *)(puVar6 + 0x18) = lVar4;
    uVar7 = 0x1049f822c;
  }
  puVar1 = (undefined8 *)(*param_2 + _DAT_1130a3fd0);
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = uVar7;
  puVar1[1] = puVar6;
  func_0x000100dc4454(lVar2,lVar4);
  func_0x000100dc4464(uVar3,uVar5);
  return;
}



/* Entry: 1049f1440; end: 1049f1973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049f1440(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_1130a3fd0);
  _swift_beginAccess(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  FUN_1049f81c4(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1049f1974; end: 1049f1c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f1974(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined **ppuVar11;
  long lStack_98;
  long lStack_90;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  ppuVar11 = &PTR____CFConstantStringClassReference_110da4eb8;
  puVar3 = PTR_PTR_1126add38;
  _objc_allocWithZone();
  _objc_retain(&PTR____CFConstantStringClassReference_110da4eb8);
  _objc_msgSend(puVar3,PTR_s_initWithLoggingBehavior__1125e77d8,ppuVar11);
  _objc_release(ppuVar11);
  if (lRam000000011309fed8 != -1) {
    _swift_once(0x11309fed8,FUN_1049b0fe4);
  }
  uVar2 = uRam00000001130a3238;
  uVar4 = 0;
  FUN_1049fbfc8();
  uVar5 = uVar4;
  _objc_allocWithZone();
  _swift_unknownObjectRetain(uVar2);
  _objc_msgSend(uVar5,PTR_s_init_1125d9248);
  puVar6 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  _objc_retain();
  _objc_msgSend(puVar6,PTR_s_sharedUtility_112668b58);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  FUN_1049fe1e8();
  _objc_allocWithZone();
  _objc_msgSend();
  lVar8 = lVar7;
  FUN_1049f6a74();
  lVar9 = lVar8;
  _objc_allocWithZone();
  ppuStack_68 = &PTR_DAT_1107bd978;
  *(undefined8 *)(lVar9 + _DAT_1130a3fa8) = 0;
  puVar1 = (undefined8 *)(lVar9 + _DAT_1130a3fb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar9 + _DAT_1130a3fb8) = 0;
  puVar1 = (undefined8 *)(lVar9 + _DAT_1130a3fc0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1 = (undefined8 *)(lVar9 + _DAT_1130a3fd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar9 + _DAT_1130a3fd8) = 0;
  *(undefined1 *)(lVar9 + _DAT_1130a3fe0) = 0;
  *(undefined8 *)(lVar9 + _DAT_1130a3fe8) = 0;
  *(undefined1 *)(lVar9 + _DAT_1130a3ff0) = 0;
  *(undefined1 *)(lVar9 + _DAT_1130a3ff8) = 0;
  *(undefined **)(lVar9 + _DAT_1130a3f80) = puVar3;
  *(undefined8 *)(lVar9 + _DAT_1130a3f88) = uVar2;
  auStack_88[0] = uVar5;
  uStack_70 = uVar4;
  func_0x0001049f60b8(auStack_88,lVar9 + _DAT_1130a3f90);
  *(undefined **)(lVar9 + _DAT_1130a3f98) = puVar6;
  *(long *)(lVar9 + _DAT_1130a3fa0) = lVar7;
  plVar10 = &lStack_98;
  lStack_98 = lVar9;
  lStack_90 = lVar8;
  _objc_msgSendSuper2(plVar10,PTR_s_init_1125d9248);
  FUN_1049f6144(auStack_88);
  _objc_release(uVar5);
  plRam00000001130a3f78 = plVar10;
  return;
}



/* Entry: 1049f1c7c; end: 1049f1cbb;  */

void FUN_1049f1c7c(void)

{
  if (lRam000000011309ff90 != -1) {
    _swift_once(0x11309ff90,FUN_1049f1974);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uRam00000001130a3f78);
  return;
}



/* Entry: 1049f1cbc; end: 1049f1d9b;  */

undefined8
FUN_1049f1cbc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 auStack_70 [2];
  
  lVar1 = *(long *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  lVar4 = param_3;
  func_0x0001000c6518(param_3,lVar1);
  lVar3 = -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(&stack0xffffffffffffffa0 + lVar3,lVar4,lVar1);
  uVar5 = param_4;
  _swift_getObjectType();
  _swift_getObjectType(param_5);
  *(undefined8 *)((long)auStack_70 + lVar3) = uVar5;
  *(undefined8 *)((long)auStack_70 + lVar3 + 8) = uVar2;
  FUN_1049f5e1c(param_1,param_2,&stack0xffffffffffffffa0 + lVar3,param_4,param_5);
  FUN_1049f6144(param_3);
  return param_1;
}



/* Entry: 1049f1d9c; end: 1049f1e17;  */

undefined1  [16] FUN_1049f1d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_1107bd1e8;
  _swift_allocObject(&UNK_1107bd1e8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  _objc_retain();
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_3);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_1049f605c;
  return auVar2;
}



/* Entry: 1049f1e18; end: 1049f1f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f1e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  puVar2 = PTR__OBJC_CLASS___SFSafariViewController_1126d6d00;
  _objc_allocWithZone();
  puVar3 = puVar2;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  _objc_msgSend(puVar2,PTR_s_initWithURL__1125f3820,puVar3);
  _objc_release(puVar3);
  lVar1 = _DAT_1130a3fe8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fe8,auStack_58,1,0);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar4);
  _objc_msgSend(puVar2,PTR_s_setModalPresentationStyle__11264fd08,5);
  _objc_msgSend(puVar2,PTR_s_setDelegate__112640798);
  _objc_msgSend(param_2,PTR_s_displayChildController__112525558,puVar2);
  _objc_msgSend(param_3,PTR_s_presentViewController_animated_c_112621588,param_2,1,0);
  _objc_release(puVar2);
  return;
}



/* Entry: 1049f1f28; end: 1049f2347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f1f28(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  long lStack_100;
  undefined1 *puStack_f8;
  undefined1 auStack_f0 [24];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined1 auStack_80 [32];
  
  lVar1 = unaff_x20 + _DAT_1130a3fc0;
  _swift_beginAccess(lVar1,auStack_80,0,0);
  FUN_1049f814c(lVar1,auStack_a8,0x1130a3fc8);
  if (lStack_90 == 0) {
    func_0x0001049f6a34(auStack_a8,0x1130a3fc8);
  }
  else {
    FUN_1049f6120(auStack_a8,&puStack_d8);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_1130a3f80);
    uVar5 = 0xd00000000000007b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000007b,0x800000010f228c80);
    _objc_msgSend(uVar12,PTR_s_logEntry__112607048,uVar5);
    _objc_release(uVar5);
    FUN_1049f61bc(&puStack_d8,puStack_c0);
    (**(code **)((long)ppuStack_b8 + 0x18))(puStack_c0,ppuStack_b8);
    FUN_1049f6144(&puStack_d8);
  }
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar6 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  lStack_100 = lVar6;
  puStack_f8 = auStack_110;
  (**(code **)(lVar13 + 0x10))(auStack_110 + -(lVar11 + 0xfU & 0xfffffffffffffff0),param_1);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_1130a3f98);
  puVar10 = PTR_s_appURLScheme_11259f308;
  _objc_msgSend(uVar12,PTR_s_appURLScheme_11259f308);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar12;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uStack_108 = uVar5;
  _objc_release(uVar12);
  plVar2 = (long *)(unaff_x20 + _DAT_1130a3fd0);
  _swift_beginAccess(plVar2,auStack_a8,0,0);
  lVar6 = *plVar2;
  lVar3 = plVar2[1];
  if (lVar6 == 0) {
    puVar7 = &UNK_1107bd210;
    _swift_allocObject(&UNK_1107bd210,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    pcVar14 = (code *)0x1049f6068;
  }
  else {
    puVar7 = &UNK_1107bd288;
    _swift_allocObject(&UNK_1107bd288,0x20,7);
    *(long *)(puVar7 + 0x10) = lVar6;
    *(long *)(puVar7 + 0x18) = lVar3;
    pcVar14 = FUN_1049f60fc;
  }
  puVar8 = &UNK_1107bd238;
  _swift_allocObject(&UNK_1107bd238,0x20,7);
  *(code **)(puVar8 + 0x10) = pcVar14;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  puVar7 = PTR__OBJC_CLASS___ASWebAuthenticationSession_1126b1c78;
  _objc_allocWithZone();
  func_0x000100dc4454(lVar6,lVar3);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  uVar5 = uStack_108;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_108,puVar10);
  _swift_bridgeObjectRelease(puVar10);
  ppuStack_b8 = (undefined **)FUN_1049f6070;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_100de9b20;
  puStack_c0 = &UNK_1107bd250;
  ppuVar9 = &puStack_d8;
  puStack_b0 = puVar8;
  __Block_copy(ppuVar9);
  _objc_msgSend(puVar7,PTR_s_initWithURL_callbackURLScheme_co_1125f3860,lVar6,uVar5,ppuVar9);
  __Block_release(ppuVar9);
  _objc_release(lVar6);
  _objc_release(uVar5);
  (**(code **)(lVar13 + 8))(auStack_110 + -(lVar11 + 0xfU & 0xfffffffffffffff0),lStack_100);
  _swift_release(puStack_b0);
  uVar5 = 0;
  FUN_1049f69f4(0,0x1130a4000,&PTR__OBJC_CLASS___ASWebAuthenticationSession_1126b1c78);
  ppuStack_b8 = &PTR_DAT_1107ba920;
  puStack_d8 = puVar7;
  puStack_c0 = (undefined *)uVar5;
  _swift_beginAccess(lVar1,auStack_f0,0x21,0);
  func_0x0001049f126c(&puStack_d8,lVar1);
  _swift_endAccess(auStack_f0);
  iVar4 = 2;
  func_0x000100029b9c(2,0xd,0,0);
  if (iVar4 != 0) {
    _swift_beginAccess(lVar1,&puStack_d8,0x21,0);
    if (*(long *)(lVar1 + 0x18) != 0) {
      lVar6 = *(long *)(lVar1 + 0x20);
      func_0x0001000c6518(lVar1,*(long *)(lVar1 + 0x18));
      pcVar14 = *(code **)(lVar6 + 0x28);
      _swift_unknownObjectRetain();
      (*pcVar14)();
    }
    _swift_endAccess(&puStack_d8);
  }
  lVar6 = _DAT_1130a3fd8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fd8,auStack_f0,1,0);
  *(undefined1 *)(unaff_x20 + lVar6) = 1;
  if (*(long *)(lVar1 + 0x18) != 0) {
    func_0x0001049f60b8(lVar1,&puStack_d8);
    ppuVar9 = ppuStack_b8;
    puVar10 = puStack_c0;
    FUN_1049f61bc(&puStack_d8,puStack_c0);
    (*(code *)ppuVar9[2])(puVar10,ppuVar9);
    FUN_1049f6144(&puStack_d8);
  }
  return;
}



/* Entry: 1049f2348; end: 1049f241f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f2348(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar4 = _DAT_1130a3fc0;
  if (param_3 != 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    _swift_beginAccess(param_3 + _DAT_1130a3fc0,auStack_78,0x21,0);
    func_0x0001049f126c(&uStack_60,param_3 + lVar4);
    _swift_endAccess(auStack_78);
    puVar1 = (undefined8 *)(param_3 + _DAT_1130a3fd0);
    _swift_beginAccess(puVar1,&uStack_60,1,0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000100dc4464(uVar2,uVar3);
    lVar4 = _DAT_1130a3fd8;
    _swift_beginAccess(param_3 + _DAT_1130a3fd8,auStack_78,1,0);
    *(undefined1 *)(param_3 + lVar4) = 0;
    _objc_release(param_3);
  }
  return;
}



/* Entry: 1049f2420; end: 1049f2597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f2420(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar4 = _DAT_1130a3fc0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fc0,auStack_68,0x21,0);
  func_0x0001049f126c(&uStack_50,unaff_x20 + lVar4);
  _swift_endAccess(auStack_68);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3fd0);
  _swift_beginAccess(puVar1,&uStack_50,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000100dc4464(uVar2,uVar3);
  lVar4 = _DAT_1130a3fd8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fd8,auStack_68,1,0);
  *(undefined1 *)(unaff_x20 + lVar4) = 0;
  return;
}



/* Entry: 1049f2598; end: 1049f326f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f2598(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = 0x11309c5e0;
  func_0x0001048db364();
  puVar10 = auStack_d0 + -(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar4 + -8);
  lVar9 = (long)puVar10 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    uVar5 = param_1;
    (**(code **)(lVar11 + 0x30))(param_1,1,lVar4);
    bVar3 = (int)uVar5 != 1;
  }
  else {
    bVar3 = false;
  }
  (*param_3)(bVar3,param_2);
  FUN_1049f814c(param_1,puVar10,0x11309c5e0);
  puVar6 = puVar10;
  (**(code **)(lVar11 + 0x30))(puVar10,1,lVar4);
  if ((int)puVar6 == 1) {
    func_0x0001049f6a34(puVar10,0x11309c5e0);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar9,puVar10,lVar4);
    if (bVar3 != false) {
      _swift_beginAccess(param_5 + 0x10,auStack_d0,0,0);
      lVar7 = param_5 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar7 != 0) {
        puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIApplication_1126ae590);
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        func_0x0001049f2824();
        _objc_release(lVar7);
        _objc_release(puVar8);
        func_0x0001049f6a34(&uStack_a0,0x11309c428);
      }
    }
    (**(code **)(lVar11 + 8))(lVar9,lVar4);
  }
  _swift_beginAccess(param_5 + 0x10,auStack_78,0,0);
  param_5 = param_5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar4 = _DAT_1130a3fc0;
  if (param_5 != 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    _swift_beginAccess(param_5 + _DAT_1130a3fc0,auStack_b8,0x21,0);
    func_0x0001049f126c(&uStack_a0,param_5 + lVar4);
    _swift_endAccess(auStack_b8);
    puVar1 = (undefined8 *)(param_5 + _DAT_1130a3fd0);
    _swift_beginAccess(puVar1,&uStack_a0,1,0);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000100dc4464(uVar5,uVar2);
    lVar4 = _DAT_1130a3fd8;
    _swift_beginAccess(param_5 + _DAT_1130a3fd8,auStack_b8,1,0);
    *(undefined1 *)(param_5 + lVar4) = 0;
    _objc_release(param_5);
  }
  return;
}



/* Entry: 1049f3270; end: 1049f3317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f3270(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3fe8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fe8,auStack_48,0,0);
  lVar1 = *(long *)(unaff_x20 + lVar1);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_1130a3f80);
    _objc_retain();
    uVar2 = 0xd0000000000000e6;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000e6,0x800000010f228d40);
    _objc_msgSend(uVar3,PTR_s_logEntry__112607048,uVar2);
    _objc_release(uVar2);
    FUN_1049f63d0();
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 1049f3318; end: 1049f331b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f3318(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3fb8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fb8,auStack_48,1,0);
  lVar3 = *(long *)(unaff_x20 + lVar1);
  if (lVar3 != 0) {
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    _objc_msgSend(lVar3,PTR_s_application_openURL_sourceApplic_11259f738,0,0,0,0);
    _swift_unknownObjectRelease(lVar3);
  }
  FUN_1049f3730();
  lVar1 = _DAT_1130a3fe8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fe8,auStack_60,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _objc_release(uVar2);
  return;
}



/* Entry: 1049f331c; end: 1049f33df; -[_TtC12FBSDKCoreKit10_BridgeAPI viewControllerDidDisappear:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f331c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3fe8;
  _swift_beginAccess(param_1 + _DAT_1130a3fe8,auStack_48,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1130a3f80);
    _objc_retain();
    _objc_retain(param_1);
    uVar2 = 0xd0000000000000e6;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000e6,0x800000010f228d40);
    _objc_msgSend(uVar3,PTR_s_logEntry__112607048,uVar2);
    _objc_release(uVar2);
    FUN_1049f63d0();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1049f33e0; end: 1049f372f;  */

/* WARNING: Removing unreachable block (ram,0x0001049f35b4) */
/* WARNING: Removing unreachable block (ram,0x0001049f3604) */
/* WARNING: Removing unreachable block (ram,0x0001049f362c) */
/* WARNING: Removing unreachable block (ram,0x0001049f36a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049f33e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long unaff_x20;
  undefined auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar9 = _DAT_1130a3fa8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fa8,auStack_78,1,0);
  lVar12 = *(long *)(unaff_x20 + lVar9);
  puVar7 = (undefined8 *)(unaff_x20 + _DAT_1130a3fb0);
  puVar10 = auStack_90;
  puVar5 = puVar7;
  _swift_beginAccess(puVar7,puVar10,1,0);
  pcVar1 = (code *)*puVar7;
  uVar3 = puVar7[1];
  *(undefined8 *)(unaff_x20 + lVar9) = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  __s10Foundation3URLV6schemeSSSgvg();
  puVar6 = *(undefined8 **)(unaff_x20 + _DAT_1130a3f98);
  puVar8 = PTR_s_appURLScheme_11259f308;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar11 = puVar8;
  _objc_release(puVar6);
  if (puVar10 == (undefined *)0x0) {
    func_0x000100dc4464(pcVar1,uVar3);
    _swift_bridgeObjectRelease(puVar8);
    goto LAB_1049f3660;
  }
  if (puVar5 == puVar7 && puVar10 == puVar8) {
    _swift_bridgeObjectRelease(puVar10);
    _swift_bridgeObjectRelease();
    __s10Foundation3URLV4hostSSSgvg();
joined_r0x0001049f34e0:
    if (puVar11 != (undefined *)0x0) {
      if ((puVar8 == (undefined *)0x656764697262) && (puVar11 == (undefined *)0xe600000000000000)) {
        _swift_bridgeObjectRelease(0xe600000000000000);
LAB_1049f3564:
        if (lVar12 == 0) {
          func_0x000100dc4464(pcVar1,uVar3);
          return 0;
        }
        if (pcVar1 == (code *)0x0) {
          _swift_unknownObjectRelease(lVar12);
        }
        else {
          lVar9 = unaff_x20 + _DAT_1130a3f90;
          uVar2 = *(undefined8 *)(lVar9 + 0x18);
          lVar4 = *(long *)(lVar9 + 0x20);
          FUN_1049f61bc(lVar9,uVar2);
          lVar9 = lVar12;
          (**(code **)(lVar4 + 0x10))(lVar12,param_1,param_2,param_3,uVar2,lVar4);
          (*pcVar1)();
          _swift_unknownObjectRelease(lVar12);
          _objc_release(lVar9);
          func_0x000100dc4464(pcVar1,uVar3);
        }
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(puVar11);
      if (((ulong)puVar8 & 1) != 0) goto LAB_1049f3564;
    }
  }
  else {
    puVar11 = puVar10;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (puVar5,puVar10,puVar7,puVar8,0);
    _swift_bridgeObjectRelease(puVar10);
    _swift_bridgeObjectRelease();
    if (((ulong)puVar5 & 1) != 0) {
      __s10Foundation3URLV4hostSSSgvg();
      goto joined_r0x0001049f34e0;
    }
  }
  func_0x000100dc4464(pcVar1,uVar3);
LAB_1049f3660:
  _swift_unknownObjectRelease(lVar12);
  return 0;
}



/* Entry: 1049f3730; end: 1049f3853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f3730(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = _DAT_1130a3fa8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fa8,auStack_68,1,0);
  lVar6 = *(long *)(unaff_x20 + lVar3);
  if (lVar6 != 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3fb0);
    _swift_beginAccess(puVar1,auStack_98,0,0);
    pcVar7 = (code *)*puVar1;
    if (pcVar7 != (code *)0x0) {
      uVar5 = puVar1[1];
      puVar4 = PTR_PTR_1126ae0c8;
      _swift_getInitializedObjCClass(PTR_PTR_1126ae0c8);
      _swift_unknownObjectRetain(lVar6);
      func_0x000100dc4454(pcVar7,uVar5);
      _objc_msgSend(puVar4,PTR_s_bridgeAPIResponseCancelledWithRe_112525540,lVar6);
      _objc_retainAutoreleasedReturnValue();
      (*pcVar7)();
      _swift_unknownObjectRelease(lVar6);
      func_0x000100dc4464(pcVar7,uVar5);
      _objc_release(puVar4);
    }
  }
  uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  _swift_unknownObjectRelease(uVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3fb0);
  _swift_beginAccess(puVar1,auStack_80,1,0);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000100dc4464(uVar5,uVar2);
  return;
}



/* Entry: 1049f3854; end: 1049f389f;  */

void FUN_1049f3854(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049f38a0; end: 1049f38ff; -[_TtC12FBSDKCoreKit10_BridgeAPI init] */

void FUN_1049f38a0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("FBSDKCoreKit._BridgeAPI",0x17,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1049f38cc);
  (*pcVar1)();
}



/* Entry: 1049f3900; end: 1049f39d7; -[_TtC12FBSDKCoreKit10_BridgeAPI .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f3900(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a3f80));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3f88));
  FUN_1049f6144(param_1 + _DAT_1130a3f90);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3f98));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3fa0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3fa8));
  func_0x000100dc4464(*(undefined8 *)(param_1 + _DAT_1130a3fb0),
                      ((undefined8 *)(param_1 + _DAT_1130a3fb0))[1]);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3fb8));
  func_0x0001049f6a34(param_1 + _DAT_1130a3fc0,0x1130a3fc8);
  func_0x000100dc4464(*(undefined8 *)(param_1 + _DAT_1130a3fd0),
                      ((undefined8 *)(param_1 + _DAT_1130a3fd0))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130a3fe8));
  return;
}



/* Entry: 1049f39d8; end: 1049f39db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f39d8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [24];
  long lStack_58;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3fc0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fc0,auStack_48,0,0);
  FUN_1049f814c(unaff_x20 + lVar1,auStack_70,0x1130a3fc8);
  func_0x0001049f6a34(auStack_70,0x1130a3fc8);
  lVar1 = _DAT_1130a3fd8;
  if (lStack_58 != 0) {
    _swift_beginAccess(unaff_x20 + _DAT_1130a3fd8,auStack_70,1,0);
    if (*(char *)(unaff_x20 + lVar1) == '\x01') {
      *(undefined1 *)(unaff_x20 + lVar1) = 2;
    }
  }
  return;
}



/* Entry: 1049f39dc; end: 1049f3a27; -[_TtC12FBSDKCoreKit10_BridgeAPI applicationWillResignActive:] */

void FUN_1049f39dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x0001049f6474();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049f3a28; end: 1049f3e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f3a28(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined1 *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  char *pcVar15;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar8 = 0x11309c5e0;
  func_0x0001048db364();
  puVar10 = auStack_130 + -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = unaff_x20 + _DAT_1130a3fc0;
  _swift_beginAccess(lVar8,auStack_78,0,0);
  FUN_1049f814c(lVar8,&uStack_a0,0x1130a3fc8);
  lVar5 = lStack_88;
  func_0x0001049f6a34(&uStack_a0,0x1130a3fc8);
  lVar14 = _DAT_1130a3fd8;
  if (lVar5 == 0) {
    bVar6 = false;
  }
  else {
    _swift_beginAccess(unaff_x20 + _DAT_1130a3fd8,auStack_118,1,0);
    bVar6 = false;
    bVar3 = *(byte *)(unaff_x20 + lVar14);
    if (bVar3 < 3) {
      if (1 < bVar3) {
        bVar6 = false;
        *(undefined1 *)(unaff_x20 + lVar14) = 3;
      }
    }
    else if (bVar3 != 3) {
      if (*(long *)(lVar8 + 0x18) != 0) {
        func_0x0001049f60b8(lVar8,&uStack_a0);
        FUN_1049f61bc(&uStack_a0,lStack_88);
        (**(code **)(lStack_80 + 0x18))(lStack_88,lStack_80);
        FUN_1049f6144(&uStack_a0);
      }
      lStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
      _swift_beginAccess(lVar8,auStack_b8,0x21,0);
      func_0x0001049f126c(&uStack_a0,lVar8);
      _swift_endAccess(auStack_b8);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_1130a3fa0);
      uVar7 = 0xd000000000000039;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000039,0x800000010f218500);
      _objc_msgSend(uVar11,PTR_s_errorWithDomain_code_userInfo_me_112525100,uVar7,1,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a3fd0);
      _swift_beginAccess(puVar1,auStack_130,0,0);
      pcVar12 = (code *)*puVar1;
      if (pcVar12 != (code *)0x0) {
        uVar13 = puVar1[1];
        lVar8 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar8 + -8) + 0x38))(puVar10,1,1,lVar8);
        func_0x000100dc4454(pcVar12,uVar13);
        uVar7 = uVar11;
        _objc_retain(uVar11);
        (*pcVar12)(puVar10,uVar11);
        _objc_release(uVar7);
        func_0x000100dc4464(pcVar12,uVar13);
        func_0x0001049f6a34(puVar10,0x11309c5e0);
      }
      lVar8 = 0x1130a4008;
      func_0x0001048db364();
      _swift_initStaticObject();
      cVar4 = *(char *)(unaff_x20 + lVar14);
      lVar14 = *(long *)(lVar8 + 0x10);
      _swift_retain();
      pcVar15 = (char *)(lVar8 + 0x20);
      do {
        bVar6 = lVar14 == 0;
        if (lVar14 == 0) break;
        cVar2 = *pcVar15;
        lVar14 = lVar14 + -1;
        pcVar15 = pcVar15 + 1;
      } while (cVar2 != cVar4);
      _swift_release();
      _objc_release(uVar11);
    }
  }
  lVar8 = _DAT_1130a3fe0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fe0,&uStack_a0,0,0);
  lVar14 = _DAT_1130a3fe8;
  if ((((*(byte *)(unaff_x20 + lVar8) & 1) == 0) &&
      (_swift_beginAccess(unaff_x20 + _DAT_1130a3fe8,auStack_b8,0,0), lVar8 = _DAT_1130a3ff0,
      *(long *)(unaff_x20 + lVar14) == 0)) &&
     (_swift_beginAccess(unaff_x20 + _DAT_1130a3ff0,auStack_d0,0,0), lVar14 = _DAT_1130a3ff8,
     !bVar6 && (*(byte *)(unaff_x20 + lVar8) & 1) == 0)) {
    _swift_beginAccess(unaff_x20 + _DAT_1130a3ff8,auStack_e8,1,0);
    *(undefined1 *)(unaff_x20 + lVar14) = 1;
    lVar8 = _DAT_1130a3fb8;
    if (param_1 != 0) {
      _swift_beginAccess(unaff_x20 + _DAT_1130a3fb8,auStack_100,0,0);
      if (*(long *)(unaff_x20 + lVar8) != 0) {
        _objc_msgSend(*(long *)(unaff_x20 + lVar8),PTR_s_applicationDidBecomeActive__11259f788,
                      param_1);
      }
    }
    FUN_1049f3730();
    puVar9 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_msgSend();
    _objc_release(puVar9);
  }
  return;
}



/* Entry: 1049f3e1c; end: 1049f3e6f; -[_TtC12FBSDKCoreKit10_BridgeAPI applicationDidBecomeActive:] */

void FUN_1049f3e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1049f3a28(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049f3e70; end: 1049f3e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f3e70(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  long lStack_88;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3ff8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3ff8,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = 0;
  lVar1 = _DAT_1130a3fe0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fe0,auStack_60,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = 0;
  lVar1 = _DAT_1130a3fc0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fc0,auStack_78,0,0);
  FUN_1049f814c(unaff_x20 + lVar1,auStack_a0,0x1130a3fc8);
  func_0x0001049f6a34(auStack_a0,0x1130a3fc8);
  lVar1 = _DAT_1130a3fd8;
  if (lStack_88 != 0) {
    _swift_beginAccess(unaff_x20 + _DAT_1130a3fd8,auStack_a0,1,0);
    if (*(char *)(unaff_x20 + lVar1) == '\x02') {
      *(undefined1 *)(unaff_x20 + lVar1) = 4;
    }
  }
  return;
}



/* Entry: 1049f3e74; end: 1049f3ebf; -[_TtC12FBSDKCoreKit10_BridgeAPI applicationDidEnterBackground:] */

void FUN_1049f3e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x0001049f6514();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049f3ec0; end: 1049f404b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f3ec0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = _DAT_1130a3fb8;
  _swift_beginAccess(param_1 + _DAT_1130a3fb8,auStack_78,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _swift_unknownObjectRelease(uVar1);
  if (param_2 != 0) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    uVar2 = 0;
    if (param_6 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
      uVar2 = param_5;
    }
    FUN_1049f814c(param_7,auStack_98,0x11309c428);
    if (lStack_80 == 0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3 = auStack_98;
      FUN_1049f61bc(puVar3,lStack_80);
      lVar5 = *(long *)(lStack_80 + -8);
      puVar4 = auStack_a0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar5 + 0x10))(puVar4,puVar3,lStack_80);
      puVar3 = puVar4;
      __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar4,lStack_80);
      (**(code **)(lVar5 + 8))(puVar4,lStack_80);
      FUN_1049f6144(auStack_98);
    }
    _objc_msgSend(param_2,PTR_s_application_openURL_sourceApplic_11259f738,param_3,uVar1,uVar2,
                  puVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _swift_unknownObjectRelease(puVar3);
  }
  lVar5 = _DAT_1130a3ff0;
  _swift_beginAccess(param_1 + _DAT_1130a3ff0,auStack_98,1,0);
  *(undefined1 *)(param_1 + lVar5) = 0;
  return;
}



/* Entry: 1049f404c; end: 1049f418b; -[_TtC12FBSDKCoreKit10_BridgeAPI application:openURL:sourceApplication:annotation:] */

uint FUN_1049f404c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar3 = (long)&uStack_70 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar3,param_4);
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  if (param_6 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    _objc_retain(param_3);
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_3);
    _swift_unknownObjectRetain(param_6);
    _objc_retain(param_1);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,param_6);
    _swift_unknownObjectRelease(param_6);
  }
  uVar2 = param_3;
  func_0x0001049f2824(param_3,lVar3,param_5,param_2,&uStack_70);
  _objc_release(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x0001049f6a34(&uStack_70,0x11309c428);
  (**(code **)(lVar4 + 8))(lVar3,lVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 1049f418c; end: 1049f418f;  */

ulong FUN_1049f418c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  
  lVar2 = 0x11309c5e0;
  uVar5 = param_2;
  func_0x0001048db364();
  puVar10 = auStack_a0 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar2 + -8);
  lVar11 = (long)puVar10 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    lVar9 = *(long *)PTR__UIApplicationLaunchOptionsURLKey_110345a60;
    _swift_bridgeObjectRetain(param_2);
    func_0x0001028ee5d4(lVar9);
    if ((uVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar9 * 0x20,auStack_80);
      _swift_bridgeObjectRelease(param_2);
      puVar1 = PTR___sypN_11034f1a8;
      puVar3 = puVar10;
      _swift_dynamicCast(puVar10,auStack_80,PTR___sypN_11034f1a8 + 8,lVar2,6);
      (**(code **)(lVar12 + 0x38))(puVar10,(uint)puVar3 ^ 1,1,lVar2);
      puVar3 = puVar10;
      (**(code **)(lVar12 + 0x30))(puVar10,1,lVar2);
      if ((int)puVar3 != 1) {
        (**(code **)(lVar12 + 0x20))(lVar11,puVar10,lVar2);
        if (*(long *)(param_2 + 0x10) != 0) {
          lVar9 = *(long *)PTR__UIApplicationLaunchOptionsSourceApplicationKey_110345a58;
          _swift_bridgeObjectRetain(param_2);
          func_0x0001028ee5d4(lVar9);
          uVar5 = param_2;
          if (((ulong)puVar10 & 1) != 0) {
            func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar9 * 0x20,auStack_80);
            _swift_bridgeObjectRelease(param_2);
            puVar4 = &uStack_90;
            _swift_dynamicCast(puVar4,auStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
            if (((ulong)puVar4 & 1) == 0) goto LAB_1049f690c;
            uVar5 = 0xd000000000000011;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd000000000000011,0x800000010f21b4f0);
            uVar6 = uVar5;
            _NSClassFromString();
            _objc_release(uVar5);
            uVar5 = uStack_88;
            if (uVar6 != 0) {
              _swift_getObjCClassMetadata();
              puStack_98 = PTR_DAT_1126a4ac0;
              _swift_dynamicCastTypeToObjCProtocolConditional();
              if (uVar6 != 0) {
                _swift_getObjCClassFromMetadata();
                uVar7 = uVar6;
                _objc_msgSend();
                if ((uVar7 & 1) != 0) {
                  _objc_msgSend(uVar6,PTR_s_makeOpener_112525560);
                  _objc_retainAutoreleasedReturnValue();
                  if (uVar6 != 0) {
                    uVar5 = uVar6;
                    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
                    uVar8 = uStack_90;
                    uVar7 = uStack_88;
                    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90);
                    _swift_bridgeObjectRelease(uStack_88);
                    if (*(long *)(param_2 + 0x10) != 0) {
                      lVar9 = *(long *)PTR__UIApplicationLaunchOptionsAnnotationKey_110345a28;
                      _swift_bridgeObjectRetain(param_2);
                      func_0x0001028ee5d4(lVar9);
                      if ((uVar7 & 1) != 0) {
                        func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar9 * 0x20,auStack_80);
                        _swift_bridgeObjectRelease(param_2);
                        puVar10 = auStack_80;
                        FUN_1049f61bc(puVar10,uStack_68);
                        __ss27_bridgeAnythingToObjectiveCyyXlxlF();
                        FUN_1049f6144(auStack_80);
                        goto LAB_1049f692c;
                      }
                      _swift_bridgeObjectRelease(param_2);
                    }
                    puVar10 = (undefined1 *)0x0;
LAB_1049f692c:
                    uVar7 = uVar6;
                    _objc_msgSend(uVar6,PTR_s_application_openURL_sourceApplic_11259f738,param_1,
                                  uVar5,uVar8,puVar10);
                    _swift_unknownObjectRelease(uVar6);
                    _objc_release(uVar5);
                    _objc_release(uVar8);
                    _swift_unknownObjectRelease(puVar10);
                    (**(code **)(lVar12 + 8))(lVar11,lVar2);
                    return uVar7;
                  }
                }
              }
            }
          }
          _swift_bridgeObjectRelease(uVar5);
        }
LAB_1049f690c:
        (**(code **)(lVar12 + 8))(lVar11,lVar2);
        return 0;
      }
      goto LAB_1049f68c8;
    }
    _swift_bridgeObjectRelease(param_2);
  }
  (**(code **)(lVar12 + 0x38))(puVar10,1,1,lVar2);
LAB_1049f68c8:
  func_0x0001049f6a34(puVar10,0x11309c5e0);
  return 0;
}



/* Entry: 1049f4190; end: 1049f424b; -[_TtC12FBSDKCoreKit10_BridgeAPI application:didFinishLaunchingWithOptions:] */

uint FUN_1049f4190(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    uVar1 = 0;
    func_0x000100a149e4(0);
    uVar2 = 0x112d7f1d8;
    FUN_1049f80e8(0x112d7f1d8,&SUB_100a149e4,&UNK_10d93d430);
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_4,uVar1,PTR___sypN_11034f1a8 + 8,uVar2);
  }
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_1049f65f4(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_4);
  return (uint)uVar2 & 1;
}



/* Entry: 1049f424c; end: 1049f457b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f424c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar1 = 0;
  uStack_100 = param_1;
  uStack_f8 = param_3;
  uStack_f0 = param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_d0 = *(long *)(lVar1 + -8);
  lVar13 = (long)&uStack_100 - (*(long *)(lStack_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_e8 = lVar1;
  __s8Dispatch0A3QoSVMa();
  lStack_e0 = *(long *)(lVar2 + -8);
  lVar14 = lVar13 - (*(long *)(lStack_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_d8 = lVar2;
  __s10Foundation3URLVMa();
  lVar1 = _DAT_1130a3fe0;
  lVar17 = *(long *)(lVar3 + -8);
  lVar16 = *(long *)(lVar17 + 0x40);
  lVar2 = lVar14 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fe0,auStack_80,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = 1;
  lVar1 = _DAT_1130a3fb8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fb8,auStack_98,1,0);
  uVar15 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_2;
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRelease(uVar15);
  puVar4 = &UNK_1107bd328;
  _swift_allocObject(&UNK_1107bd328,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,*(undefined8 *)(unaff_x20 + _DAT_1130a3f88));
  _swift_unknownObjectWeakInit(&puStack_c8,*(undefined8 *)(unaff_x20 + _DAT_1130a3fa0));
  FUN_1049f6988();
  (**(code **)(lVar17 + 0x10))(lVar2,uStack_100,lVar3);
  uVar10 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar11 = uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff);
  uVar12 = lVar16 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar5 = &UNK_1107bd350;
  _swift_allocObject(&UNK_1107bd350,uVar12 + 0x10,uVar10 | 7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  (**(code **)(lVar17 + 0x20))(puVar5 + uVar11,lVar2,lVar3);
  uVar6 = uStack_f0;
  *(undefined8 *)(puVar5 + uVar12) = uStack_f8;
  *(undefined8 *)((long)(puVar5 + uVar12) + 8) = uStack_f0;
  FUN_1049f69f4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  _swift_retain(uVar6);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  pcStack_a8 = FUN_1049f69ac;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_1000f6b44;
  puStack_b0 = &UNK_1107bd368;
  ppuVar7 = &puStack_c8;
  puStack_a0 = puVar5;
  __Block_copy(ppuVar7);
  puVar4 = puStack_a0;
  _swift_retain(puVar5);
  _swift_release(puVar4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar14);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar15 = 0x112d4af88;
  FUN_1049f80e8(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  _swift_retain(puVar4);
  uVar8 = 0x11309c6f0;
  func_0x0001048db364(0x11309c6f0);
  uVar9 = 0x112d4af98;
  FUN_1049f80e8(0x112d4af98,0x1048e76ec,PTR___sSayxGSTsMc_11034dd08);
  lVar1 = lStack_e8;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar13,&puStack_c8,uVar8,uVar9,lStack_e8,uVar15);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar14,lVar13,ppuVar7);
  __Block_release(ppuVar7);
  _swift_release(puVar5);
  _objc_release(uVar6);
  (**(code **)(lStack_d0 + 8))(lVar13,lVar1);
  (**(code **)(lStack_e0 + 8))(lVar14,lStack_d8);
  return;
}



/* Entry: 1049f457c; end: 1049f4703;  */

void FUN_1049f457c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar1 = param_1;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000100dfa5c8();
    _swift_release(puVar6);
    uVar3 = 0;
    func_0x000100dfa6ec(0);
    uVar4 = 0x112d377a8;
    FUN_1049f80e8(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
    puVar5 = puVar2;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar2,uVar3,PTR___sypN_11034f1a8 + 8,uVar4);
    _swift_bridgeObjectRelease(puVar2);
    puVar6 = &UNK_1107bd7c0;
    _swift_allocObject(&UNK_1107bd7c0,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = param_3;
    *(undefined8 *)(puVar6 + 0x18) = param_4;
    pcStack_68 = FUN_1049f8128;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_100ab47f8;
    puStack_70 = &UNK_1107bd7d8;
    ppuVar7 = &puStack_88;
    puStack_60 = puVar6;
    __Block_copy(ppuVar7);
    puVar6 = puStack_60;
    _swift_retain(param_4);
    _swift_release(puVar6);
    _objc_msgSend(param_1,PTR_s_openURL_options_completionHandle_1126180f8,lVar1,puVar5,ppuVar7);
    __Block_release(ppuVar7);
    _swift_unknownObjectRelease(param_1);
    _objc_release(lVar1);
    _objc_release(puVar5);
  }
  return;
}



/* Entry: 1049f4704; end: 1049f47f7; -[_TtC12FBSDKCoreKit10_BridgeAPI openURL:sender:handler:] */

void FUN_1049f4704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  puVar3 = &stack0xffffffffffffffb0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __Block_copy();
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
  puVar2 = &UNK_1107bd6f8;
  _swift_allocObject(&UNK_1107bd6f8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  FUN_1049f424c(puVar3,param_4,0x1049f81c0,puVar2);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
  _swift_release(puVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 1049f47f8; end: 1049f5b2b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f47f8(code *******param_1,ulong param_2,code *******param_3,code *******param_4,
                  code *******param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  code *******pppppppcVar5;
  long lVar6;
  code *******pppppppcVar7;
  undefined8 uVar8;
  code *******pppppppcVar9;
  code *******pppppppcVar10;
  code *******pppppppcVar11;
  code *******pppppppcVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  code *******pppppppcVar16;
  code *******pppppppcVar17;
  long lVar18;
  code *******pppppppcVar19;
  code ******ppppppcVar20;
  code ******ppppppcVar21;
  code ****ppppcVar22;
  ulong uVar23;
  undefined8 uVar24;
  code *******unaff_x20;
  code ******ppppppcVar25;
  code *pcVar26;
  code *******pppppppcVar27;
  long lVar28;
  code ******ppppppcVar29;
  ulong uVar30;
  code *******pppppppcVar31;
  code *****pppppcVar32;
  code ******ppppppcVar33;
  ulong uVar34;
  long lVar35;
  code *******unaff_x26;
  long lVar36;
  code *****pppppcVar37;
  code ******ppppppcVar38;
  code *****pppppcStack_2b0;
  code ******appppppcStack_2a8 [5];
  code ******appppppcStack_280 [20];
  code ******appppppcStack_1e0 [12];
  code *******apppppppcStack_180 [2];
  code ******ppppppcStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  code *******pppppppcStack_150;
  code *******pppppppcStack_148;
  code ******ppppppcStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  code *******pppppppcStack_120;
  code *******pppppppcStack_118;
  code *******pppppppcStack_110;
  code *******pppppppcStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar5 = (code *******)0x0;
  pppppppcVar31 = param_5;
  pppppppcStack_148 = param_3;
  __s10Foundation13URLComponentsVMa();
  ppppppcStack_140 = pppppppcVar5[-1];
  lVar6 = (long)apppppppcStack_180 - ((long)ppppppcStack_140[8] + 0xfU & 0xfffffffffffffff0);
  lVar15 = 0x11309c5e0;
  lStack_160 = lVar6;
  func_0x0001048db364();
  pppppppcVar17 =
       (code *******)
       (lVar6 - (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0;
  pppppppcStack_150 = pppppppcVar17;
  __s10Foundation12URLQueryItemVMa();
  lStack_138 = *(long *)(lVar6 + -8);
  lVar18 = (long)pppppppcVar17 - (*(long *)(lStack_138 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = 0x1130a3dc0;
  lStack_130 = lVar6;
  lStack_128 = lVar18;
  func_0x0001048db364();
  pppppppcVar19 =
       (code *******)
       (lVar18 - (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  pppppppcVar17 = (code *******)0x0;
  pppppppcStack_120 = pppppppcVar19;
  __s10Foundation3URLVMa();
  pppppppcStack_110 = (code *******)pppppppcVar17[-1];
  pppppppcStack_108 = (code *******)0x0;
  ppppppcStack_170 = pppppppcStack_110[8];
  uVar23 = (long)ppppppcStack_170 + 0xfU & 0xfffffffffffffff0;
  lStack_168 = (long)pppppppcVar19 - uVar23;
  lStack_158 = lStack_168 - uVar23;
  pppppppcVar27 = (code *******)(lStack_158 - uVar23);
  pppppppcVar7 = param_1;
  _objc_msgSend(param_1,PTR_s_requestURL__112525548,&pppppppcStack_108);
  _objc_retainAutoreleasedReturnValue();
  pppppppcVar19 = pppppppcStack_108;
  if (pppppppcVar7 == (code *******)0x0) {
    pppppppcVar7 = pppppppcStack_108;
    _objc_retain(pppppppcStack_108);
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(pppppppcVar7);
    _swift_willThrow();
    pcVar2 = (code *)((long)unaff_x20 + _DAT_1130a3f90);
    pcVar26 = *(code **)(pcVar2 + 0x18);
    pppppppcVar7 = *(code ********)(pcVar2 + 0x20);
    FUN_1049f61bc(pcVar2,pcVar26);
    pppppppcVar9 = param_1;
    pppppppcVar12 = pppppppcVar19;
    pppppppcVar16 = pppppppcVar7;
    (*(code *)pppppppcVar7[1])();
    (*(code *)param_4)();
    _objc_release(pppppppcVar9);
    pppppppcVar10 = pppppppcVar19;
    _swift_errorRelease();
    unaff_x20 = param_5;
  }
  else {
    pppppppcStack_118 = pppppppcVar17;
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(pppppppcVar27);
    _objc_retain(pppppppcVar19);
    _objc_release(pppppppcVar7);
    lVar15 = _DAT_1130a3fa8;
    _swift_beginAccess((code *)((long)unaff_x20 + _DAT_1130a3fa8),auStack_88,1,0);
    uVar8 = *(undefined8 *)((long)unaff_x20 + lVar15);
    *(code ********)((long)unaff_x20 + lVar15) = param_1;
    _swift_unknownObjectRelease(uVar8);
    pcVar26 = (code *)((long)unaff_x20 + _DAT_1130a3fb0);
    _swift_beginAccess(pcVar26,auStack_a0,1,0);
    uVar8 = *(undefined8 *)pcVar26;
    uVar24 = *(undefined8 *)(pcVar26 + 8);
    *(code ********)pcVar26 = param_4;
    *(code ********)(pcVar26 + 8) = param_5;
    _swift_unknownObjectRetain(param_1);
    func_0x000100dc4464(uVar8,uVar24);
    pppppppcVar7 = (code *******)&UNK_1107bd3a0;
    _swift_allocObject(&UNK_1107bd3a0,0x30,7);
    pppppppcVar7[2] = (code ******)unaff_x20;
    pppppppcVar7[3] = (code ******)param_1;
    pppppppcVar7[4] = (code ******)param_4;
    pppppppcVar7[5] = (code ******)param_5;
    pppppppcVar19 = pppppppcVar27;
    pppppppcVar10 = pppppppcVar27;
    if ((param_2 & 1) == 0) {
      _swift_retain_n(param_5,3);
      _swift_unknownObjectRetain_n(param_1,2);
      _objc_retain();
      _objc_retain();
      pcVar26 = FUN_1049f81ac;
      pppppppcVar16 = pppppppcVar7;
      FUN_1049f424c(pppppppcVar27,0);
      _swift_unknownObjectRelease(param_1);
      _objc_release(unaff_x20);
      pppppppcVar9 = pppppppcVar7;
      unaff_x26 = pppppppcStack_118;
      pppppppcVar17 = pppppppcStack_110;
LAB_1049f4c64:
      _swift_release(pppppppcVar9);
      pppppppcVar12 = param_5;
LAB_1049f4c70:
      _swift_release(pppppppcVar12);
      ppppppcVar20 = pppppppcVar17[1];
      pppppppcVar12 = unaff_x26;
    }
    else {
      pppppppcVar9 = (code *******)&UNK_1107bd3c8;
      _swift_allocObject(&UNK_1107bd3c8,0x30,7);
      pppppppcVar9[2] = (code ******)unaff_x20;
      pppppppcVar9[3] = (code ******)param_1;
      pppppppcVar9[4] = (code ******)param_4;
      pppppppcVar9[5] = (code ******)param_5;
      _objc_retain();
      _swift_unknownObjectRetain_n(param_1,3);
      lVar15 = 4;
      _swift_retain_n(param_5);
      _objc_retain();
      _objc_retain();
      __s10Foundation3URLV6schemeSSSgvg();
      if (lVar15 == 0) {
LAB_1049f4c24:
        pcVar26 = FUN_1049f81ac;
        pppppppcVar16 = pppppppcVar9;
        FUN_1049f424c(pppppppcVar27,0);
        _swift_unknownObjectRelease(param_1);
        _objc_release(unaff_x20);
        _swift_release(pppppppcVar7);
        unaff_x26 = pppppppcStack_118;
        pppppppcVar17 = pppppppcStack_110;
        param_4 = unaff_x20;
        goto LAB_1049f4c64;
      }
      uVar23 = 0;
      lVar6 = lVar15;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      __sSS9hasPrefixySbSSF();
      _swift_bridgeObjectRelease(lVar15);
      _swift_bridgeObjectRelease(lVar6);
      lVar15 = _DAT_1130a3fe0;
      if ((uVar23 & 1) == 0) goto LAB_1049f4c24;
      _swift_beginAccess((code *)((long)unaff_x20 + _DAT_1130a3fe0),auStack_b8,1,0);
      *(code *)((long)unaff_x20 + lVar15) = (code)0x0;
      lVar15 = _DAT_1130a3fb8;
      pppppppcVar16 = (code *******)0x0;
      _swift_beginAccess((code *)((long)unaff_x20 + _DAT_1130a3fb8),auStack_d0,1);
      uVar8 = *(undefined8 *)((long)unaff_x20 + lVar15);
      *(undefined8 *)((long)unaff_x20 + lVar15) = 0;
      apppppppcStack_180[1] = unaff_x20;
      _swift_unknownObjectRelease(uVar8);
      pppppppcVar17 = pppppppcStack_148;
      if (pppppppcStack_148 != (code *******)0x0) {
        apppppppcStack_180[0] = pppppppcStack_148;
        pppppppcVar12 = apppppppcStack_180[0];
LAB_1049f4d1c:
        apppppppcStack_180[0] = pppppppcVar12;
        param_4 = pppppppcStack_120;
        _objc_retain(pppppppcVar17);
        __s10Foundation13URLComponentsV3url23resolvingAgainstBaseURLACSgAA0G0Vh_SbtcfC
                  (param_4,pppppppcVar27,0);
        pppppppcVar16 = (code *******)0xe100000000000000;
        __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
                  (lStack_128,0x63766673,0xe400000000000000,0x31);
        pppppcVar37 = ppppppcStack_140[6];
        pppppppcVar17 = param_4;
        (*(code *)pppppcVar37)(param_4,1,pppppppcVar5);
        if (((int)pppppppcVar17 != 0) ||
           (__s10Foundation13URLComponentsV10queryItemsSayAA12URLQueryItemVGSgvg(),
           pppppppcVar17 == (code *******)0x0)) {
          pppppppcVar17 = (code *******)PTR___swiftEmptyArrayStorage_11034f1c8;
          _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
          _swift_bridgeObjectRelease(0);
        }
        pppppppcVar12 = param_4;
        (*(code *)pppppcVar37)(param_4,1,pppppppcVar5);
        if ((int)pppppppcVar12 == 0) {
          lVar15 = 0x1130a2a08;
          func_0x0001048db364();
          lVar6 = lStack_138;
          pppppppcStack_148 =
               (code *******)
               ((ulong)*(byte *)(lStack_138 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lStack_138 + 0x50) ^ 0xffffffffffffffff));
          _swift_allocObject();
          param_4 = pppppppcStack_120;
          *(undefined8 *)(lVar15 + 0x18) = 2;
          *(undefined8 *)(lVar15 + 0x10) = 1;
          (**(code **)(lVar6 + 0x10))
                    ((code *)((long)pppppppcStack_148 + lVar15),lStack_128,lStack_130);
          pppppppcStack_108 = pppppppcVar17;
          func_0x0001016fc344(lVar15);
          __s10Foundation13URLComponentsV10queryItemsSayAA12URLQueryItemVGSgvs(pppppppcStack_108);
        }
        else {
          _swift_bridgeObjectRelease(pppppppcVar17);
        }
        pppppppcVar11 = param_4;
        (*(code *)pppppcVar37)(param_4,1,pppppppcVar5);
        pppppppcVar17 = pppppppcStack_110;
        unaff_x26 = pppppppcStack_118;
        ppppppcVar20 = ppppppcStack_140;
        pppppppcVar12 = pppppppcStack_150;
        lVar15 = lStack_160;
        if ((int)pppppppcVar11 == 0) {
          (*(code *)ppppppcStack_140[2])(lStack_160,param_4,pppppppcVar5);
          pppppppcVar12 = pppppppcStack_150;
          __s10Foundation13URLComponentsV3urlAA3URLVSgvg(pppppppcStack_150);
          (*(code *)ppppppcVar20[1])(lVar15,pppppppcVar5);
          pppppppcVar17 = pppppppcStack_110;
          unaff_x26 = pppppppcStack_118;
          pppppppcVar5 = pppppppcVar12;
          (*(code *)pppppppcStack_110[6])(pppppppcVar12,1,pppppppcStack_118);
          lVar15 = lStack_158;
          if ((int)pppppppcVar5 != 1) {
            pppppppcStack_148 = (code *******)pppppppcVar17[4];
            (*(code *)pppppppcStack_148)(lStack_158,pppppppcVar12,unaff_x26);
            ppppppcVar20 = (code ******)PTR_PTR_1126ae0d0;
            _objc_allocWithZone();
            _objc_msgSend();
            unaff_x20 = apppppppcStack_180[1];
            ppppppcStack_140 = ppppppcVar20;
            _objc_msgSend();
            pppppppcVar5 = apppppppcStack_180[0];
            _objc_msgSend(apppppppcStack_180[0],PTR_s_transitionCoordinator_11267c408);
            _objc_retainAutoreleasedReturnValue();
            if (pppppppcVar5 != (code *******)0x0) {
              pppppppcStack_150 = pppppppcVar5;
              (*(code *)pppppppcVar17[2])(lStack_168,lVar15,unaff_x26);
              uVar23 = (ulong)(byte)*(code *)(pppppppcVar17 + 10);
              uVar34 = uVar23 + 0x18 & (uVar23 ^ 0xffffffffffffffff);
              uVar30 = (long)ppppppcStack_170 + uVar34 + 7 & 0xfffffffffffffff8;
              puVar13 = &UNK_1107bd3f0;
              _swift_allocObject(&UNK_1107bd3f0,uVar30 + 0x10,uVar23 | 7);
              *(code ********)(puVar13 + 0x10) = apppppppcStack_180[1];
              (*(code *)pppppppcStack_148)(puVar13 + uVar34,lStack_168,unaff_x26);
              ppppppcVar20 = ppppppcStack_140;
              param_4 = apppppppcStack_180[0];
              *(code *******)(puVar13 + uVar30) = ppppppcStack_140;
              *(code ********)(puVar13 + uVar30 + 8) = apppppppcStack_180[0];
              pcStack_e8 = FUN_1049f6a70;
              pppppppcStack_108 = (code *******)PTR___NSConcreteStackBlock_11034bd00;
              uStack_100 = 0x42000000;
              puStack_f8 = &UNK_1013c1f34;
              puStack_f0 = &UNK_1107bd408;
              pppppppcVar17 = (code *******)&pppppppcStack_108;
              puStack_e0 = puVar13;
              __Block_copy();
              puVar13 = puStack_e0;
              _objc_retain();
              pppppppcStack_148 = apppppppcStack_180[1];
              _objc_retain(ppppppcVar20);
              unaff_x26 = param_4;
              _objc_retain();
              _swift_release(puVar13);
              pppppppcVar5 = pppppppcStack_150;
              pcVar26 = (code *)0x0;
              pppppppcVar16 = pppppppcVar17;
              _objc_msgSend(pppppppcStack_150,PTR_s_animateAlongsideTransition_compl_11259e4b0);
              __Block_release(pppppppcVar17);
              _objc_release(ppppppcVar20);
              _objc_release(unaff_x26);
              _swift_unknownObjectRelease(pppppppcVar5);
              pppppppcVar5 = pppppppcStack_118;
              unaff_x20 = (code *******)pppppppcStack_110[1];
              (*(code *)unaff_x20)(lStack_158,pppppppcStack_118);
              (**(code **)(lStack_138 + 8))(lStack_128,lStack_130);
              func_0x0001049f6a34(pppppppcStack_120,0x1130a3dc0);
              _swift_release(param_5);
              _swift_unknownObjectRelease(param_1);
              _objc_release(pppppppcStack_148);
              _swift_release(pppppppcVar7);
              _swift_release(pppppppcVar9);
              pppppppcVar12 = pppppppcVar5;
              (*(code *)unaff_x20)();
              goto LAB_1049f4c84;
            }
            pcVar26 = (code *)apppppppcStack_180[0];
            FUN_1049f1e18(lVar15,ppppppcStack_140);
            _objc_release(ppppppcStack_140);
            _objc_release(apppppppcStack_180[0]);
            (*(code *)pppppppcVar17[1])(lStack_158,unaff_x26);
            (**(code **)(lStack_138 + 8))(lStack_128,lStack_130);
            func_0x0001049f6a34(param_4,0x1130a3dc0);
            _swift_unknownObjectRelease(param_1);
            _objc_release(unaff_x20);
            _swift_release(pppppppcVar7);
            pppppppcVar5 = unaff_x20;
            goto LAB_1049f4c64;
          }
        }
        else {
          pppppppcVar16 = pppppppcStack_118;
          (*(code *)pppppppcStack_110[7])(pppppppcStack_150,1,1);
        }
        func_0x0001049f6a34(pppppppcVar12,0x11309c5e0);
        unaff_x20 = *(code ********)((long)apppppppcStack_180[1] + _DAT_1130a3f80);
        pppppppcVar5 = (code *******)0xd00000000000002b;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f228ea0)
        ;
        pcVar26 = (code *)pppppppcVar5;
        _objc_msgSend(unaff_x20,PTR_s_logEntry__112607048);
        _objc_release(apppppppcStack_180[0]);
        _objc_release(pppppppcVar5);
        (**(code **)(lStack_138 + 8))(lStack_128,lStack_130);
        func_0x0001049f6a34(pppppppcStack_120,0x1130a3dc0);
        _swift_release(param_5);
        _swift_unknownObjectRelease(param_1);
        _objc_release(apppppppcStack_180[1]);
        _swift_release(pppppppcVar7);
        pppppppcVar12 = pppppppcVar9;
        param_4 = apppppppcStack_180[1];
        goto LAB_1049f4c70;
      }
      pppppppcVar11 = (code *******)PTR_PTR_1126add20;
      _swift_getInitializedObjCClass();
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      pppppppcVar12 = pppppppcVar11;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppppppcVar11);
      param_4 = pppppppcStack_120;
      if (pppppppcVar12 != (code *******)0x0) goto LAB_1049f4d1c;
      unaff_x20 = *(code ********)((long)apppppppcStack_180[1] + _DAT_1130a3f80);
      pppppppcVar5 = (code *******)0xd000000000000046;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000046,0x800000010f228e50);
      pcVar26 = (code *)pppppppcVar5;
      _objc_msgSend(unaff_x20,PTR_s_logEntry__112607048);
      _swift_release(param_5);
      _swift_unknownObjectRelease(param_1);
      _objc_release(apppppppcStack_180[1]);
      _swift_release(pppppppcVar7);
      _swift_release(pppppppcVar9);
      _objc_release(pppppppcVar5);
      ppppppcVar20 = pppppppcStack_110[1];
      pppppppcVar17 = (code *******)0x0;
      pppppppcVar12 = pppppppcStack_118;
      unaff_x26 = apppppppcStack_180[1];
    }
    (*(code *)ppppppcVar20)();
  }
LAB_1049f4c84:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pppppppcVar27[-0xc] = (code ******)param_4;
  pppppppcVar27[-0xb] = (code ******)pppppppcVar17;
  pppppppcVar27[-10] = (code ******)unaff_x26;
  pppppppcVar27[-9] = (code ******)pppppppcVar5;
  pppppppcVar27[-8] = (code ******)pppppppcVar7;
  pppppppcVar27[-7] = (code ******)pppppppcVar19;
  pppppppcVar27[-6] = (code ******)param_1;
  pppppppcVar27[-5] = (code ******)pppppppcVar9;
  pppppppcVar27[-4] = (code ******)unaff_x20;
  pppppppcVar27[-3] = (code ******)param_5;
  pppppppcVar27[-2] = (code ******)&stack0xfffffffffffffff0;
  pppppppcVar27[-1] = (code ******)0x1049f5360;
  pppppppcVar27[-0x1a] = (code ******)pppppppcVar16;
  lVar6 = 0;
  pppppppcVar5 = pppppppcVar12;
  __s10Foundation13URLComponentsVMa();
  ppppppcVar20 = *(code *******)(lVar6 + -8);
  pppppppcVar27[-0x1e] = ppppppcVar20;
  ppppppcVar20 = (code ******)
                 ((long)pppppppcVar27 +
                 (-0x130 - ((long)ppppppcVar20[8] + 0xfU & 0xfffffffffffffff0)));
  pppppppcVar27[-0x22] = ppppppcVar20;
  lVar15 = 0x11309c5e0;
  func_0x0001048db364();
  lVar18 = (long)ppppppcVar20 -
           (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  ppppppcVar20 = (code ******)0x0;
  __s10Foundation3URLVMa();
  ppppppcVar21 = (code ******)ppppppcVar20[-1];
  pppppppcVar27[-0x20] = ppppppcVar21;
  pppppppcVar27[-0x1f] = ppppppcVar20;
  ppppppcVar20 = (code ******)ppppppcVar21[8];
  pppppppcVar27[-0x25] = ppppppcVar20;
  uVar23 = (long)ppppppcVar20 + 0xfU & 0xfffffffffffffff0;
  ppppppcVar21 = (code ******)(lVar18 - uVar23);
  pppppppcVar27[-0x24] = ppppppcVar21;
  ppppppcVar21 = (code ******)((long)ppppppcVar21 - uVar23);
  pppppppcVar27[-0x23] = ppppppcVar21;
  ppppppcVar20 = (code ******)0x0;
  __s10Foundation12URLQueryItemVMa();
  pppppppcVar27[-0x1d] = ppppppcVar20;
  pppppcVar37 = ppppppcVar20[-1];
  ppppppcVar21 = (code ******)
                 ((long)ppppppcVar21 - ((long)pppppcVar37[8] + 0xfU & 0xfffffffffffffff0));
  pppppppcVar27[-0x21] = ppppppcVar21;
  lVar15 = 0x1130a3dc0;
  func_0x0001048db364();
  pppppppcVar27[-0x1c] =
       (code ******)
       ((long)ppppppcVar21 - (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  __s10Foundation3URLV6schemeSSSgvg();
  if (pppppppcVar5 == (code *******)0x0) {
code_r0x0001049f424c:
    ppppppcVar20 = pppppppcVar27[-4];
    pppppppcVar27[-0xc] = pppppppcVar27[-0xc];
    pppppppcVar27[-0xb] = pppppppcVar27[-0xb];
    pppppppcVar27[-10] = pppppppcVar27[-10];
    pppppppcVar27[-9] = pppppppcVar27[-9];
    pppppppcVar27[-8] = pppppppcVar27[-8];
    pppppppcVar27[-7] = pppppppcVar27[-7];
    pppppppcVar27[-6] = pppppppcVar27[-6];
    pppppppcVar27[-5] = pppppppcVar27[-5];
    pppppppcVar27[-4] = ppppppcVar20;
    pppppppcVar27[-3] = pppppppcVar27[-3];
    pppppppcVar27[-2] = pppppppcVar27[-2];
    pppppppcVar27[-1] = pppppppcVar27[-1];
    pppppppcVar27[-0x1f] = pppppppcVar27[-0x1a];
    pppppppcVar27[-0x1e] = (code ******)pppppppcVar31;
    pppppppcVar27[-0x20] = (code ******)pppppppcVar10;
    ppppppcVar21 = (code ******)0x0;
    __s8Dispatch0A13WorkItemFlagsVMa();
    pppppppcVar27[-0x1d] = ppppppcVar21;
    ppppppcVar21 = (code ******)ppppppcVar21[-1];
    pppppppcVar27[-0x1a] = ppppppcVar21;
    pcVar26 = (code *)((long)pppppppcVar27 +
                      (-0x100 - ((long)ppppppcVar21[8] + 0xfU & 0xfffffffffffffff0)));
    ppppppcVar21 = (code ******)0x0;
    __s8Dispatch0A3QoSVMa();
    ppppppcVar29 = (code ******)ppppppcVar21[-1];
    pppppppcVar27[-0x1c] = ppppppcVar29;
    pppppppcVar27[-0x1b] = ppppppcVar21;
    lVar18 = (long)pcVar26 - ((long)ppppppcVar29[8] + 0xfU & 0xfffffffffffffff0);
    lVar6 = 0;
    __s10Foundation3URLVMa();
    lVar15 = _DAT_1130a3fe0;
    lVar36 = *(long *)(lVar6 + -8);
    lVar35 = *(long *)(lVar36 + 0x40);
    lVar28 = lVar18 - (lVar35 + 0xfU & 0xfffffffffffffff0);
    _swift_beginAccess((long)ppppppcVar20 + _DAT_1130a3fe0,pppppppcVar27 + -0x10,1,0);
    *(undefined1 *)((long)ppppppcVar20 + lVar15) = 1;
    lVar15 = _DAT_1130a3fb8;
    _swift_beginAccess((long)ppppppcVar20 + _DAT_1130a3fb8,pppppppcVar27 + -0x13,1,0);
    uVar8 = *(undefined8 *)((long)ppppppcVar20 + lVar15);
    *(code ********)((long)ppppppcVar20 + lVar15) = pppppppcVar12;
    _swift_unknownObjectRetain(pppppppcVar12);
    _swift_unknownObjectRelease(uVar8);
    pppppcVar37 = (code *****)&UNK_1107bd328;
    _swift_allocObject(&UNK_1107bd328,0x18,7);
    _swift_unknownObjectWeakInit
              (pppppcVar37 + 2,*(undefined8 *)((long)ppppppcVar20 + _DAT_1130a3f88));
    _swift_unknownObjectWeakInit
              (pppppppcVar27 + -0x19,*(undefined8 *)((long)ppppppcVar20 + _DAT_1130a3fa0));
    FUN_1049f6988();
    (**(code **)(lVar36 + 0x10))(lVar28,pppppppcVar27[-0x20],lVar6);
    uVar23 = (ulong)*(byte *)(lVar36 + 0x50);
    uVar30 = uVar23 + 0x18 & (uVar23 ^ 0xffffffffffffffff);
    uVar34 = lVar35 + uVar30 + 7 & 0xfffffffffffffff8;
    ppppppcVar20 = (code ******)&UNK_1107bd350;
    _swift_allocObject(&UNK_1107bd350,uVar34 + 0x10,uVar23 | 7);
    ppppppcVar20[2] = pppppcVar37;
    (**(code **)(lVar36 + 0x20))((undefined *)((long)ppppppcVar20 + uVar30),lVar28,lVar6);
    puVar1 = (undefined8 *)((long)ppppppcVar20 + uVar34);
    ppppppcVar21 = pppppppcVar27[-0x1e];
    *puVar1 = pppppppcVar27[-0x1f];
    puVar1[1] = ppppppcVar21;
    func_0x0001049f69f4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    _swift_retain(ppppppcVar21);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    pppppppcVar27[-0x15] = (code ******)FUN_1049f69ac;
    pppppppcVar27[-0x14] = ppppppcVar20;
    pppppppcVar27[-0x19] = (code ******)PTR___NSConcreteStackBlock_11034bd00;
    pppppppcVar27[-0x18] = (code ******)0x42000000;
    pppppppcVar27[-0x17] = (code ******)&UNK_1000f6b44;
    pppppppcVar27[-0x16] = (code ******)&UNK_1107bd368;
    pppppppcVar5 = pppppppcVar27 + -0x19;
    __Block_copy(pppppppcVar5);
    ppppppcVar29 = pppppppcVar27[-0x14];
    _swift_retain(ppppppcVar20);
    _swift_release(ppppppcVar29);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar18);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    pppppppcVar27[-0x19] = (code ******)PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar8 = 0x112d4af88;
    FUN_1049f80e8(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    _swift_retain(puVar13);
    uVar24 = 0x11309c6f0;
    func_0x0001048db364(0x11309c6f0);
    uVar4 = 0x112d4af98;
    FUN_1049f80e8(0x112d4af98,0x1048e76ec,PTR___sSayxGSTsMc_11034dd08);
    ppppppcVar29 = pppppppcVar27[-0x1d];
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (pcVar26,pppppppcVar27 + -0x19,uVar24,uVar4,ppppppcVar29,uVar8);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar18,pcVar26,pppppppcVar5);
    __Block_release(pppppppcVar5);
    _swift_release(ppppppcVar20);
    _objc_release(ppppppcVar21);
    (*(code *)pppppppcVar27[-0x1a][1])(pcVar26,ppppppcVar29);
    (*(code *)pppppppcVar27[-0x1c][1])(lVar18,pppppppcVar27[-0x1b]);
    return;
  }
  uVar23 = 0;
  pppppppcVar17 = pppppppcVar5;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  pppppppcVar27[-0x1b] = (code ******)pppppppcVar31;
  __sSS9hasPrefixySbSSF();
  _swift_bridgeObjectRelease(pppppppcVar5);
  pppppppcVar31 = (code *******)pppppppcVar27[-0x1b];
  _swift_bridgeObjectRelease(pppppppcVar17);
  lVar15 = _DAT_1130a3fe0;
  if ((uVar23 & 1) == 0) goto code_r0x0001049f424c;
  _swift_beginAccess((code *)((long)unaff_x20 + _DAT_1130a3fe0),pppppppcVar27 + -0x10,1,0);
  *(code *)((long)unaff_x20 + lVar15) = (code)0x0;
  lVar15 = _DAT_1130a3fb8;
  _swift_beginAccess((code *)((long)unaff_x20 + _DAT_1130a3fb8),pppppppcVar27 + -0x13,1,0);
  uVar8 = *(undefined8 *)((long)unaff_x20 + lVar15);
  *(code ********)((long)unaff_x20 + lVar15) = pppppppcVar12;
  _swift_unknownObjectRetain(pppppppcVar12);
  _swift_unknownObjectRelease(uVar8);
  if (pppppppcVar12 != (code *******)0x0) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    _objc_msgSend(pppppppcVar12,PTR_s_isAuthenticationURL__112525550,uVar8);
    _objc_release(uVar8);
    if ((int)pppppppcVar12 != 0) {
      puVar13 = &UNK_1107bd210;
      _swift_allocObject(&UNK_1107bd210,0x18,7);
      _swift_unknownObjectWeakInit(puVar13 + 0x10,unaff_x20);
      puVar14 = &UNK_1107bd490;
      _swift_allocObject(&UNK_1107bd490,0x28,7);
      ppppppcVar20 = pppppppcVar27[-0x1b];
      *(code *******)(puVar14 + 0x10) = pppppppcVar27[-0x1a];
      *(code *******)(puVar14 + 0x18) = ppppppcVar20;
      *(undefined **)(puVar14 + 0x20) = puVar13;
      pcVar26 = (code *)((long)unaff_x20 + _DAT_1130a3fd0);
      _swift_beginAccess(pcVar26,pppppppcVar27 + -0x19,1,0);
      uVar8 = *(undefined8 *)pcVar26;
      uVar24 = *(undefined8 *)(pcVar26 + 8);
      *(code **)pcVar26 = FUN_1049f81d4;
      *(undefined **)(pcVar26 + 8) = puVar14;
      _swift_retain(ppppppcVar20);
      _swift_retain(puVar13);
      func_0x000100dc4464(uVar8,uVar24);
      _swift_release(puVar13);
      FUN_1049f1f28(pppppppcVar10);
      return;
    }
  }
  pppppppcVar5 = (code *******)pcVar26;
  if ((code *******)pcVar26 == (code *******)0x0) {
    pppppppcVar17 = (code *******)PTR_PTR_1126add20;
    _swift_getInitializedObjCClass();
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    pppppppcVar5 = pppppppcVar17;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppppppcVar17);
    if (pppppppcVar5 == (code *******)0x0) {
      uVar24 = *(undefined8 *)((long)unaff_x20 + _DAT_1130a3f80);
      uVar8 = 0xd000000000000046;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000046,0x800000010f228e50);
      _objc_msgSend(uVar24,PTR_s_logEntry__112607048,uVar8);
      _objc_release(uVar8);
      return;
    }
  }
  _objc_retain(pcVar26);
  ppppppcVar29 = pppppppcVar27[-0x1c];
  __s10Foundation13URLComponentsV3url23resolvingAgainstBaseURLACSgAA0G0Vh_SbtcfC
            (ppppppcVar29,pppppppcVar10,0);
  ppppppcVar21 = pppppppcVar27[-0x21];
  __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
            (ppppppcVar21,0x63766673,0xe400000000000000,0x31,0xe100000000000000);
  pppppcVar32 = pppppppcVar27[-0x1e][6];
  ppppppcVar20 = ppppppcVar29;
  (*(code *)pppppcVar32)(ppppppcVar29,1,lVar6);
  if (((int)ppppppcVar20 != 0) ||
     (__s10Foundation13URLComponentsV10queryItemsSayAA12URLQueryItemVGSgvg(),
     ppppppcVar20 == (code ******)0x0)) {
    ppppppcVar20 = (code ******)PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    _swift_bridgeObjectRelease(0);
  }
  ppppppcVar38 = pppppppcVar27[-0x1d];
  ppppppcVar33 = ppppppcVar29;
  (*(code *)pppppcVar32)(ppppppcVar29,1,lVar6);
  if ((int)ppppppcVar33 == 0) {
    lVar15 = 0x1130a2a08;
    func_0x0001048db364();
    bVar3 = *(byte *)(pppppcVar37 + 10);
    _swift_allocObject();
    *(undefined8 *)(lVar15 + 0x18) = 2;
    *(undefined8 *)(lVar15 + 0x10) = 1;
    ppppppcVar38 = pppppppcVar27[-0x1d];
    (*(code *)pppppcVar37[2])
              (lVar15 + ((ulong)bVar3 + 0x20 & ((ulong)bVar3 ^ 0xffffffffffffffff)),ppppppcVar21,
               ppppppcVar38);
    pppppppcVar27[-0x19] = ppppppcVar20;
    ppppppcVar29 = pppppppcVar27[-0x1c];
    func_0x0001016fc344(lVar15);
    __s10Foundation13URLComponentsV10queryItemsSayAA12URLQueryItemVGSgvs(pppppppcVar27[-0x19]);
  }
  else {
    _swift_bridgeObjectRelease(ppppppcVar20);
  }
  ppppppcVar20 = ppppppcVar29;
  (*(code *)pppppcVar32)(ppppppcVar29,1,lVar6);
  if ((int)ppppppcVar20 == 0) {
    ppppppcVar33 = pppppppcVar27[-0x1e];
    ppppppcVar20 = pppppppcVar27[-0x22];
    (*(code *)ppppppcVar33[2])(ppppppcVar20,ppppppcVar29,lVar6);
    __s10Foundation13URLComponentsV3urlAA3URLVSgvg(lVar18);
    (*(code *)ppppppcVar33[1])(ppppppcVar20,lVar6);
    ppppppcVar20 = pppppppcVar27[-0x20];
    ppppppcVar33 = pppppppcVar27[-0x1f];
    lVar15 = lVar18;
    (*(code *)ppppppcVar20[6])(lVar18,1,ppppppcVar33);
    if ((int)lVar15 != 1) {
      ppppppcVar21 = (code ******)ppppppcVar20[4];
      ppppppcVar25 = pppppppcVar27[-0x23];
      pppppppcVar27[-0x1e] = ppppppcVar21;
      (*(code *)ppppppcVar21)(ppppppcVar25,lVar18,ppppppcVar33);
      puVar13 = PTR_PTR_1126ae0d0;
      _objc_allocWithZone();
      _objc_msgSend();
      _objc_msgSend();
      pppppppcVar17 = pppppppcVar5;
      _objc_msgSend(pppppppcVar5,PTR_s_transitionCoordinator_11267c408);
      _objc_retainAutoreleasedReturnValue();
      if (pppppppcVar17 == (code *******)0x0) {
        FUN_1049f1e18(ppppppcVar25,puVar13,pppppppcVar5);
      }
      else {
        pppppcVar32 = ppppppcVar20[2];
        ppppppcVar21 = pppppppcVar27[-0x24];
        pppppppcVar27[-0x22] = (code ******)pppppppcVar17;
        (*(code *)pppppcVar32)(ppppppcVar21,ppppppcVar25,ppppppcVar33);
        uVar23 = (ulong)*(byte *)(pppppppcVar27[-0x20] + 10);
        uVar30 = uVar23 + 0x18 & (uVar23 ^ 0xffffffffffffffff);
        uVar34 = (long)pppppppcVar27[-0x25] + uVar30 + 7 & 0xfffffffffffffff8;
        ppppppcVar20 = (code ******)&UNK_1107bd440;
        _swift_allocObject(&UNK_1107bd440,uVar34 + 0x10,uVar23 | 7);
        ppppppcVar20[2] = (code *****)unaff_x20;
        ppppppcVar29 = pppppppcVar27[-0x1c];
        (*(code *)pppppppcVar27[-0x1e])
                  ((undefined *)((long)ppppppcVar20 + uVar30),ppppppcVar21,pppppppcVar27[-0x1f]);
        *(undefined **)((long)ppppppcVar20 + uVar34) = puVar13;
        ppppppcVar33 = pppppppcVar27[-0x1f];
        *(code ********)((long)ppppppcVar20 + uVar34 + 8) = pppppppcVar5;
        pppppppcVar27[-0x15] = (code ******)FUN_1049f8220;
        pppppppcVar27[-0x14] = ppppppcVar20;
        pppppppcVar27[-0x19] = (code ******)PTR___NSConcreteStackBlock_11034bd00;
        pppppppcVar27[-0x18] = (code ******)0x42000000;
        pppppppcVar27[-0x17] = (code ******)&UNK_1013c1f34;
        pppppppcVar27[-0x16] = (code ******)&UNK_1107bd458;
        pppppppcVar17 = pppppppcVar27 + -0x19;
        __Block_copy(pppppppcVar17);
        ppppppcVar21 = pppppppcVar27[-0x14];
        _objc_retain(unaff_x20);
        _objc_retain(puVar13);
        _objc_retain(pppppppcVar5);
        ppppppcVar20 = pppppppcVar27[-0x20];
        _swift_release(ppppppcVar21);
        ppppppcVar21 = pppppppcVar27[-0x22];
        _objc_msgSend(ppppppcVar21,PTR_s_animateAlongsideTransition_compl_11259e4b0,0,pppppppcVar17)
        ;
        __Block_release(pppppppcVar17);
        _swift_unknownObjectRelease(ppppppcVar21);
        ppppppcVar25 = pppppppcVar27[-0x23];
      }
      (*(code *)pppppppcVar27[-0x1a])(1,0);
      _objc_release(puVar13);
      _objc_release(pppppppcVar5);
      (*(code *)ppppppcVar20[1])(ppppppcVar25,ppppppcVar33);
      ppppcVar22 = pppppcVar37[1];
      ppppppcVar21 = pppppppcVar27[-0x21];
      goto LAB_1049f58ac;
    }
  }
  else {
    (*(code *)pppppppcVar27[-0x20][7])(lVar18,1,1,pppppppcVar27[-0x1f]);
  }
  func_0x0001049f6a34(lVar18,0x11309c5e0);
  uVar24 = *(undefined8 *)((long)unaff_x20 + _DAT_1130a3f80);
  uVar8 = 0xd00000000000002b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f228ea0);
  _objc_msgSend(uVar24,PTR_s_logEntry__112607048,uVar8);
  _objc_release(pppppppcVar5);
  _objc_release(uVar8);
  ppppcVar22 = pppppcVar37[1];
LAB_1049f58ac:
  (*(code *)ppppcVar22)(ppppppcVar21,ppppppcVar38);
  func_0x0001049f6a34(ppppppcVar29,0x1130a3dc0);
  return;
}



/* Entry: 1049f5b2c; end: 1049f5bcf; -[_TtC12FBSDKCoreKit10_BridgeAPI openBridgeAPIRequest:useSafariViewController:fromViewController:completionBlock:] */

void FUN_1049f5b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  __Block_copy(param_6);
  __Block_copy();
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_1);
  func_0x0001049f73ec(param_3,param_4,param_5,param_1,param_6);
  __Block_release(param_6);
  __Block_release(param_6);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049f5bd0; end: 1049f5ccf; -[_TtC12FBSDKCoreKit10_BridgeAPI openURLWithSafariViewController:sender:fromViewController:handler:] */

void FUN_1049f5bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  puVar3 = &stack0xffffffffffffffb0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __Block_copy(param_6);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
  __Block_copy(param_6);
  _swift_unknownObjectRetain(param_4);
  uVar2 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_1);
  func_0x0001049f771c(puVar3,param_4,param_5,param_1,param_6);
  __Block_release(param_6);
  __Block_release(param_6);
  _swift_unknownObjectRelease(param_4);
  _objc_release(uVar2);
  _objc_release(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 1049f5cd0; end: 1049f5d1b; -[_TtC12FBSDKCoreKit10_BridgeAPI safariViewControllerDidFinish:] */

void FUN_1049f5cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1049f63d0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049f5d1c; end: 1049f5d9f;  */

undefined * FUN_1049f5d1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    return puVar2;
  }
  puVar1 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIWindow_1126c3e70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return puVar1;
}



/* Entry: 1049f5da0; end: 1049f5e1b; -[_TtC12FBSDKCoreKit10_BridgeAPI presentationAnchorForWebAuthenticationSession:] */

void FUN_1049f5da0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    _objc_allocWithZone(PTR__OBJC_CLASS___UIWindow_1126c3e70);
    _objc_msgSend();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049f5e1c; end: 1049f605b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1049f5e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long param_6,long param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 in_stack_00000008;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined8 uStack_68;
  
  lVar2 = param_6;
  _swift_getObjectType();
  uStack_68 = in_stack_00000008;
  lStack_70 = param_7;
  func_0x0001000c5db4(auStack_88);
  (**(code **)(*(long *)(param_7 + -8) + 0x20))();
  *(undefined8 *)(param_6 + _DAT_1130a3fa8) = 0;
  puVar1 = (undefined8 *)(param_6 + _DAT_1130a3fb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_6 + _DAT_1130a3fb8) = 0;
  puVar1 = (undefined8 *)(param_6 + _DAT_1130a3fc0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1 = (undefined8 *)(param_6 + _DAT_1130a3fd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(param_6 + _DAT_1130a3fd8) = 0;
  *(undefined1 *)(param_6 + _DAT_1130a3fe0) = 0;
  *(undefined8 *)(param_6 + _DAT_1130a3fe8) = 0;
  *(undefined1 *)(param_6 + _DAT_1130a3ff0) = 0;
  *(undefined1 *)(param_6 + _DAT_1130a3ff8) = 0;
  *(undefined8 *)(param_6 + _DAT_1130a3f80) = param_1;
  *(undefined8 *)(param_6 + _DAT_1130a3f88) = param_2;
  func_0x0001049f60b8(auStack_88,param_6 + _DAT_1130a3f90);
  *(undefined8 *)(param_6 + _DAT_1130a3f98) = param_4;
  *(undefined8 *)(param_6 + _DAT_1130a3fa0) = param_5;
  plVar3 = &lStack_98;
  lStack_98 = param_6;
  lStack_90 = lVar2;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  FUN_1049f6144(auStack_88);
  return plVar3;
}



/* Entry: 1049f605c; end: 1049f606f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f605c(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long unaff_x20;
  code *pcVar14;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar6 = _DAT_1130a3fa8;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar5 = *(code **)(unaff_x20 + 0x20);
  if ((param_1 & 1) == 0) {
    _swift_beginAccess(lVar4 + _DAT_1130a3fa8,auStack_68,1,0,*(undefined8 *)(unaff_x20 + 0x28));
    uVar8 = *(undefined8 *)(lVar4 + lVar6);
    *(undefined8 *)(lVar4 + lVar6) = 0;
    _swift_unknownObjectRelease(uVar8);
    puVar1 = (undefined8 *)(lVar4 + _DAT_1130a3fb0);
    _swift_beginAccess(puVar1,auStack_80,1,0);
    uVar8 = *puVar1;
    uVar10 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000100dc4464(uVar8,uVar10);
    uVar8 = uVar11;
    puVar12 = PTR_s_scheme_112631b48;
    _objc_msgSend(uVar11,PTR_s_scheme_112631b48);
    _objc_retainAutoreleasedReturnValue();
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar13 = puVar12;
    _objc_release(uVar8);
    uVar9 = 0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    __sSS9hasPrefixySbSSF();
    _swift_bridgeObjectRelease(puVar12);
    _swift_bridgeObjectRelease(puVar13);
    uVar8 = *(undefined8 *)(lVar4 + _DAT_1130a3fa0);
    bVar7 = (uVar9 & 1) == 0;
    pcVar3 = "p is out of date";
    if (bVar7) {
      pcVar3 = "@?36";
    }
    uVar10 = 0xd000000000000038;
    if (bVar7) {
      uVar10 = 0xd000000000000040;
    }
    uVar2 = 0xb;
    if (!bVar7) {
      uVar2 = 0xc;
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,(ulong)pcVar3 | 0x8000000000000000)
    ;
    _objc_msgSend(uVar8,PTR_s_errorWithCode_userInfo_message_u_1125c3e28,uVar2,0,uVar10,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    lVar4 = lVar4 + _DAT_1130a3f90;
    uVar10 = *(undefined8 *)(lVar4 + 0x18);
    lVar6 = *(long *)(lVar4 + 0x20);
    FUN_1049f61bc(lVar4,uVar10);
    pcVar14 = *(code **)(lVar6 + 8);
    _swift_errorRetain(uVar8);
    (*pcVar14)(uVar11,uVar8,uVar10,lVar6);
    _swift_errorRelease(uVar8);
    (*pcVar5)(uVar11);
    _swift_errorRelease(uVar8);
    _objc_release(uVar11);
  }
  return;
}



/* Entry: 1049f6070; end: 1049f609f;  */

void FUN_1049f6070(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  (**(code **)(unaff_x20 + 0x10))(param_1,&uStack_28);
  return;
}



/* Entry: 1049f60a0; end: 1049f60fb;  */

void FUN_1049f60a0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1049f60fc; end: 1049f611f;  */

void FUN_1049f60fc(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1,*param_2);
  return;
}



/* Entry: 1049f6120; end: 1049f6137;  */

undefined8 * FUN_1049f6120(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1049f6138; end: 1049f6143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f6138(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  lVar5 = 0x11309c5e0;
  func_0x0001048db364();
  puVar12 = auStack_d0 + -(*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar5 + -8);
  lVar11 = (long)puVar12 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    uVar6 = param_1;
    (**(code **)(lVar13 + 0x30))(param_1,1,lVar5);
    bVar4 = (int)uVar6 != 1;
  }
  else {
    bVar4 = false;
  }
  (*pcVar2)(bVar4,param_2);
  FUN_1049f814c(param_1,puVar12,0x11309c5e0);
  puVar7 = puVar12;
  (**(code **)(lVar13 + 0x30))(puVar12,1,lVar5);
  if ((int)puVar7 == 1) {
    func_0x0001049f6a34(puVar12,0x11309c5e0);
  }
  else {
    (**(code **)(lVar13 + 0x20))(lVar11,puVar12,lVar5);
    if (bVar4 != false) {
      _swift_beginAccess(lVar10 + 0x10,auStack_d0,0,0);
      lVar8 = lVar10 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar8 != 0) {
        puVar9 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIApplication_1126ae590);
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        func_0x0001049f2824();
        _objc_release(lVar8);
        _objc_release(puVar9);
        func_0x0001049f6a34(&uStack_a0,0x11309c428);
      }
    }
    (**(code **)(lVar13 + 8))(lVar11,lVar5);
  }
  _swift_beginAccess(lVar10 + 0x10,auStack_78,0,0);
  lVar10 = lVar10 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar5 = _DAT_1130a3fc0;
  if (lVar10 != 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    _swift_beginAccess(lVar10 + _DAT_1130a3fc0,auStack_b8,0x21,0);
    func_0x0001049f126c(&uStack_a0,lVar10 + lVar5);
    _swift_endAccess(auStack_b8);
    puVar1 = (undefined8 *)(lVar10 + _DAT_1130a3fd0);
    _swift_beginAccess(puVar1,&uStack_a0,1,0);
    uVar6 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000100dc4464(uVar6,uVar3);
    lVar5 = _DAT_1130a3fd8;
    _swift_beginAccess(lVar10 + _DAT_1130a3fd8,auStack_b8,1,0);
    *(undefined1 *)(lVar10 + lVar5) = 0;
    _objc_release(lVar10);
  }
  return;
}



/* Entry: 1049f6144; end: 1049f6163;  */

void FUN_1049f6144(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001049f6158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1049f6164; end: 1049f61bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f6164(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar3 = _DAT_1130a3fb8;
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar8 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + (uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff)) +
          7 & 0xfffffffffffffff8;
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar8);
  uVar5 = *puVar1;
  lVar12 = puVar1[1];
  _swift_beginAccess(lVar6 + _DAT_1130a3fb8,auStack_78,1,0);
  uVar4 = *(undefined8 *)(lVar6 + lVar3);
  *(undefined8 *)(lVar6 + lVar3) = 0;
  _swift_unknownObjectRelease(uVar4);
  if (lVar2 != 0) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    uVar9 = 0;
    if (lVar12 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,lVar12);
      uVar9 = uVar5;
    }
    FUN_1049f814c(unaff_x20 + uVar8 + 0x10,auStack_98,0x11309c428);
    if (lStack_80 == 0) {
      puVar10 = (undefined1 *)0x0;
    }
    else {
      puVar10 = auStack_98;
      FUN_1049f61bc(puVar10,lStack_80);
      lVar12 = *(long *)(lStack_80 + -8);
      puVar11 = auStack_a0 + -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar12 + 0x10))(puVar11,puVar10,lStack_80);
      puVar10 = puVar11;
      __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar11,lStack_80);
      (**(code **)(lVar12 + 8))(puVar11,lStack_80);
      FUN_1049f6144(auStack_98);
    }
    _objc_msgSend(lVar2,PTR_s_application_openURL_sourceApplic_11259f738,uVar7,uVar4,uVar9,puVar10);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _swift_unknownObjectRelease(puVar10);
  }
  lVar2 = _DAT_1130a3ff0;
  _swift_beginAccess(lVar6 + _DAT_1130a3ff0,auStack_98,1,0);
  *(undefined1 *)(lVar6 + lVar2) = 0;
  return;
}



/* Entry: 1049f61bc; end: 1049f61df;  */

long * FUN_1049f61bc(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 1049f61e0; end: 1049f63cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f61e0(ulong param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar4 = _DAT_1130a3fa8;
  if ((param_1 & 1) == 0) {
    _swift_beginAccess(param_2 + _DAT_1130a3fa8,auStack_68,1,0);
    uVar6 = *(undefined8 *)(param_2 + lVar4);
    *(undefined8 *)(param_2 + lVar4) = 0;
    _swift_unknownObjectRelease(uVar6);
    puVar1 = (undefined8 *)(param_2 + _DAT_1130a3fb0);
    _swift_beginAccess(puVar1,auStack_80,1,0);
    uVar6 = *puVar1;
    uVar8 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000100dc4464(uVar6,uVar8);
    uVar6 = param_3;
    puVar9 = PTR_s_scheme_112631b48;
    _objc_msgSend(param_3,PTR_s_scheme_112631b48);
    _objc_retainAutoreleasedReturnValue();
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar10 = puVar9;
    _objc_release(uVar6);
    uVar7 = 0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    __sSS9hasPrefixySbSSF();
    _swift_bridgeObjectRelease(puVar9);
    _swift_bridgeObjectRelease(puVar10);
    uVar6 = *(undefined8 *)(param_2 + _DAT_1130a3fa0);
    bVar5 = (uVar7 & 1) == 0;
    pcVar3 = "p is out of date";
    if (bVar5) {
      pcVar3 = "@?36";
    }
    uVar8 = 0xd000000000000038;
    if (bVar5) {
      uVar8 = 0xd000000000000040;
    }
    uVar2 = 0xb;
    if (!bVar5) {
      uVar2 = 0xc;
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,(ulong)pcVar3 | 0x8000000000000000);
    _objc_msgSend(uVar6,PTR_s_errorWithCode_userInfo_message_u_1125c3e28,uVar2,0,uVar8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    param_2 = param_2 + _DAT_1130a3f90;
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    lVar4 = *(long *)(param_2 + 0x20);
    FUN_1049f61bc(param_2,uVar8);
    pcVar11 = *(code **)(lVar4 + 8);
    _swift_errorRetain(uVar6);
    (*pcVar11)(param_3,uVar6,uVar8,lVar4);
    _swift_errorRelease(uVar6);
    (*param_4)(param_3);
    _swift_errorRelease(uVar6);
    _objc_release(param_3);
  }
  return;
}



/* Entry: 1049f63d0; end: 1049f65f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f63d0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a3fb8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fb8,auStack_48,1,0);
  lVar3 = *(long *)(unaff_x20 + lVar1);
  if (lVar3 != 0) {
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    _objc_msgSend(lVar3,PTR_s_application_openURL_sourceApplic_11259f738,0,0,0,0);
    _swift_unknownObjectRelease(lVar3);
  }
  FUN_1049f3730();
  lVar1 = _DAT_1130a3fe8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3fe8,auStack_60,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _objc_release(uVar2);
  return;
}



/* Entry: 1049f65f4; end: 1049f6987;  */

ulong FUN_1049f65f4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  
  lVar2 = 0x11309c5e0;
  uVar5 = param_2;
  func_0x0001048db364();
  puVar10 = auStack_a0 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar2 + -8);
  lVar11 = (long)puVar10 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    lVar9 = *(long *)PTR__UIApplicationLaunchOptionsURLKey_110345a60;
    _swift_bridgeObjectRetain(param_2);
    func_0x0001028ee5d4(lVar9);
    if ((uVar5 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar9 * 0x20,auStack_80);
      _swift_bridgeObjectRelease(param_2);
      puVar1 = PTR___sypN_11034f1a8;
      puVar3 = puVar10;
      _swift_dynamicCast(puVar10,auStack_80,PTR___sypN_11034f1a8 + 8,lVar2,6);
      (**(code **)(lVar12 + 0x38))(puVar10,(uint)puVar3 ^ 1,1,lVar2);
      puVar3 = puVar10;
      (**(code **)(lVar12 + 0x30))(puVar10,1,lVar2);
      if ((int)puVar3 != 1) {
        (**(code **)(lVar12 + 0x20))(lVar11,puVar10,lVar2);
        if (*(long *)(param_2 + 0x10) != 0) {
          lVar9 = *(long *)PTR__UIApplicationLaunchOptionsSourceApplicationKey_110345a58;
          _swift_bridgeObjectRetain(param_2);
          func_0x0001028ee5d4(lVar9);
          uVar5 = param_2;
          if (((ulong)puVar10 & 1) != 0) {
            func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar9 * 0x20,auStack_80);
            _swift_bridgeObjectRelease(param_2);
            puVar4 = &uStack_90;
            _swift_dynamicCast(puVar4,auStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
            if (((ulong)puVar4 & 1) == 0) goto LAB_1049f690c;
            uVar5 = 0xd000000000000011;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd000000000000011,0x800000010f21b4f0);
            uVar6 = uVar5;
            _NSClassFromString();
            _objc_release(uVar5);
            uVar5 = uStack_88;
            if (uVar6 != 0) {
              _swift_getObjCClassMetadata();
              puStack_98 = PTR_DAT_1126a4ac0;
              _swift_dynamicCastTypeToObjCProtocolConditional();
              if (uVar6 != 0) {
                _swift_getObjCClassFromMetadata();
                uVar7 = uVar6;
                _objc_msgSend();
                if ((uVar7 & 1) != 0) {
                  _objc_msgSend(uVar6,PTR_s_makeOpener_112525560);
                  _objc_retainAutoreleasedReturnValue();
                  if (uVar6 != 0) {
                    uVar5 = uVar6;
                    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
                    uVar8 = uStack_90;
                    uVar7 = uStack_88;
                    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90);
                    _swift_bridgeObjectRelease(uStack_88);
                    if (*(long *)(param_2 + 0x10) != 0) {
                      lVar9 = *(long *)PTR__UIApplicationLaunchOptionsAnnotationKey_110345a28;
                      _swift_bridgeObjectRetain(param_2);
                      func_0x0001028ee5d4(lVar9);
                      if ((uVar7 & 1) != 0) {
                        func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar9 * 0x20,auStack_80);
                        _swift_bridgeObjectRelease(param_2);
                        puVar10 = auStack_80;
                        FUN_1049f61bc(puVar10,uStack_68);
                        __ss27_bridgeAnythingToObjectiveCyyXlxlF();
                        FUN_1049f6144(auStack_80);
                        goto LAB_1049f692c;
                      }
                      _swift_bridgeObjectRelease(param_2);
                    }
                    puVar10 = (undefined1 *)0x0;
LAB_1049f692c:
                    uVar7 = uVar6;
                    _objc_msgSend(uVar6,PTR_s_application_openURL_sourceApplic_11259f738,param_1,
                                  uVar5,uVar8,puVar10);
                    _swift_unknownObjectRelease(uVar6);
                    _objc_release(uVar5);
                    _objc_release(uVar8);
                    _swift_unknownObjectRelease(puVar10);
                    (**(code **)(lVar12 + 8))(lVar11,lVar2);
                    return uVar7;
                  }
                }
              }
            }
          }
          _swift_bridgeObjectRelease(uVar5);
        }
LAB_1049f690c:
        (**(code **)(lVar12 + 8))(lVar11,lVar2);
        return 0;
      }
      goto LAB_1049f68c8;
    }
    _swift_bridgeObjectRelease(param_2);
  }
  (**(code **)(lVar12 + 0x38))(puVar10,1,1,lVar2);
LAB_1049f68c8:
  func_0x0001049f6a34(puVar10,0x11309c5e0);
  return 0;
}



/* Entry: 1049f6988; end: 1049f69ab;  */

undefined8 FUN_1049f6988(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1049f69ac; end: 1049f69f3;  */

void FUN_1049f69ac(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar10 = 0;
  __s10Foundation3URLVMa();
  uVar12 = (ulong)*(byte *)(*(long *)(lVar10 + -8) + 0x50);
  lVar11 = *(long *)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)
           (unaff_x20 +
           (*(long *)(*(long *)(lVar10 + -8) + 0x40) +
            (uVar12 + 0x18 & (uVar12 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  _swift_beginAccess(lVar11 + 0x10,auStack_58,0,0);
  lVar11 = lVar11 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar11 != 0) {
    lVar10 = lVar11;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000100dfa5c8();
    _swift_release(puVar8);
    uVar5 = 0;
    func_0x000100dfa6ec(0);
    uVar6 = 0x112d377a8;
    FUN_1049f80e8(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
    puVar7 = puVar4;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar4,uVar5,PTR___sypN_11034f1a8 + 8,uVar6);
    _swift_bridgeObjectRelease(puVar4);
    puVar8 = &UNK_1107bd7c0;
    _swift_allocObject(&UNK_1107bd7c0,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar2;
    *(undefined8 *)(puVar8 + 0x18) = uVar3;
    pcStack_68 = FUN_1049f8128;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_100ab47f8;
    puStack_70 = &UNK_1107bd7d8;
    ppuVar9 = &puStack_88;
    puStack_60 = puVar8;
    __Block_copy(ppuVar9);
    puVar8 = puStack_60;
    _swift_retain(uVar3);
    _swift_release(puVar8);
    _objc_msgSend(lVar11,PTR_s_openURL_options_completionHandle_1126180f8,lVar10,puVar7,ppuVar9);
    __Block_release(ppuVar9);
    _swift_unknownObjectRelease(lVar11);
    _objc_release(lVar10);
    _objc_release(puVar7);
  }
  return;
}



/* Entry: 1049f69f4; end: 1049f6a6f;  */

void FUN_1049f69f4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _swift_getInitializedObjCClass();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 1049f6a70; end: 1049f6a73;  */

void FUN_1049f6a70(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar2 = uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar2 + 7 & 0xfffffffffffffff8;
  FUN_1049f1e18(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar2,
                *(undefined8 *)(unaff_x20 + uVar3),
                *(undefined8 *)(unaff_x20 + (uVar3 + 0xf & 0xfffffffffffff8)));
  return;
}



/* Entry: 1049f6a74; end: 1049f6a9f;  */

void FUN_1049f6a74(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e8e48);
  return;
}



/* Entry: 1049f6aa0; end: 1049f6aa7;  */

void FUN_1049f6aa0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049f6aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 200))();
  return;
}



/* Entry: 1049f6aa8; end: 1049f7f23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f6aa8(undefined8 param_1,long param_2,undefined *param_3,long param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  code *pcStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  puStack_e8 = param_3;
  __s10Foundation13URLComponentsVMa();
  puStack_100 = *(undefined **)(lVar2 + -8);
  lVar4 = (long)&puStack_140 - (*(long *)(puStack_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x11309c5e0;
  lStack_120 = lVar4;
  func_0x0001048db364();
  pcVar11 = (code *)(lVar4 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  pcStack_118 = pcVar11;
  __s10Foundation3URLVMa();
  lStack_110 = *(long *)(lVar3 + -8);
  lStack_138 = *(long *)(lStack_110 + 0x40);
  uVar13 = lStack_138 + 0xfU & 0xfffffffffffffff0;
  lStack_130 = (long)pcVar11 - uVar13;
  lVar12 = lStack_130 - uVar13;
  lVar4 = 0;
  lStack_128 = lVar12;
  lStack_108 = lVar3;
  __s10Foundation12URLQueryItemVMa();
  lStack_f8 = *(long *)(lVar4 + -8);
  lVar12 = lVar12 - (*(long *)(lStack_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x1130a3dc0;
  lStack_f0 = lVar4;
  lStack_d0 = lVar12;
  func_0x0001048db364();
  puStack_e0 = (undefined *)
               (lVar12 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  puVar5 = &UNK_1107bd630;
  _swift_allocObject(&UNK_1107bd630,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_7;
  puVar6 = &UNK_1107bd658;
  lVar3 = 0x30;
  _swift_allocObject(&UNK_1107bd658,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = param_5;
  *(undefined **)(puVar6 + 0x18) = param_6;
  *(undefined8 *)(puVar6 + 0x20) = 0x1049f8230;
  *(undefined **)(puVar6 + 0x28) = puVar5;
  __Block_copy(param_7);
  _objc_retain();
  _swift_unknownObjectRetain(param_6);
  _swift_retain(puVar5);
  __s10Foundation3URLV6schemeSSSgvg();
  if (lVar3 == 0) {
LAB_1049f6df8:
    FUN_1049f424c(param_1,param_2,0x1049f81b8,puVar6);
    _swift_release(puVar5);
    _swift_unknownObjectRelease(param_6);
    _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar6);
    return;
  }
  uVar13 = 0;
  lVar4 = lVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uStack_d8 = param_5;
  __sSS9hasPrefixySbSSF();
  _swift_bridgeObjectRelease(lVar3);
  param_5 = uStack_d8;
  _swift_bridgeObjectRelease(lVar4);
  lVar3 = _DAT_1130a3fe0;
  if ((uVar13 & 1) == 0) goto LAB_1049f6df8;
  _swift_beginAccess(param_4 + _DAT_1130a3fe0,auStack_80,1,0);
  *(undefined1 *)(param_4 + lVar3) = 0;
  lVar3 = _DAT_1130a3fb8;
  _swift_beginAccess(param_4 + _DAT_1130a3fb8,auStack_98,1,0);
  uVar15 = *(undefined8 *)(param_4 + lVar3);
  *(long *)(param_4 + lVar3) = param_2;
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRelease(uVar15);
  if (param_2 == 0) {
LAB_1049f6e50:
    if (puStack_e8 == (undefined *)0x0) {
      puVar7 = PTR_PTR_1126add20;
      _swift_getInitializedObjCClass();
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puStack_140 = puVar8;
      if (puVar8 == (undefined *)0x0) {
        uVar14 = *(undefined8 *)(param_4 + _DAT_1130a3f80);
        uVar15 = 0xd000000000000046;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000046,0x800000010f228e50)
        ;
        _objc_msgSend(uVar14,PTR_s_logEntry__112607048,uVar15);
        _swift_release(puVar5);
        _swift_unknownObjectRelease(param_6);
        _objc_release(param_5);
        _swift_release(puVar6);
        _objc_release(uVar15);
        return;
      }
    }
    else {
      puStack_140 = puStack_e8;
    }
    puVar8 = puStack_e0;
    _objc_retain(puStack_e8);
    __s10Foundation13URLComponentsV3url23resolvingAgainstBaseURLACSgAA0G0Vh_SbtcfC(puVar8,param_1,0)
    ;
    __s10Foundation12URLQueryItemV4name5valueACSSh_SSSghtcfC
              (lStack_d0,0x63766673,0xe400000000000000,0x31,0xe100000000000000);
    pcVar11 = *(code **)(puStack_100 + 0x30);
    puVar7 = puVar8;
    (*pcVar11)(puVar8,1,lVar2);
    if (((int)puVar7 != 0) ||
       (__s10Foundation13URLComponentsV10queryItemsSayAA12URLQueryItemVGSgvg(),
       puVar7 == (undefined *)0x0)) {
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
      _swift_bridgeObjectRelease(0);
    }
    puVar9 = puVar8;
    (*pcVar11)(puVar8,1,lVar2);
    if ((int)puVar9 == 0) {
      lVar3 = 0x1130a2a08;
      func_0x0001048db364();
      lVar4 = lStack_f8;
      puStack_e8 = (undefined *)
                   ((ulong)*(byte *)(lStack_f8 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(lStack_f8 + 0x50) ^ 0xffffffffffffffff));
      _swift_allocObject();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      (**(code **)(lVar4 + 0x10))(puStack_e8 + lVar3,lStack_d0,lStack_f0);
      puVar8 = puStack_e0;
      puStack_c8 = puVar7;
      func_0x0001016fc344(lVar3);
      __s10Foundation13URLComponentsV10queryItemsSayAA12URLQueryItemVGSgvs(puStack_c8);
    }
    else {
      _swift_bridgeObjectRelease(puVar7);
    }
    puVar9 = puVar8;
    (*pcVar11)(puVar8,1,lVar2);
    puVar7 = puStack_100;
    pcVar11 = pcStack_118;
    lVar3 = lStack_120;
    if ((int)puVar9 == 0) {
      (**(code **)(puStack_100 + 0x10))(lStack_120,puVar8,lVar2);
      __s10Foundation13URLComponentsV3urlAA3URLVSgvg(pcVar11);
      (**(code **)(puVar7 + 8))(lVar3,lVar2);
      lVar4 = lStack_108;
      lVar2 = lStack_110;
      pcVar16 = pcVar11;
      (**(code **)(lStack_110 + 0x30))(pcVar11,1,lStack_108);
      lVar3 = lStack_128;
      if ((int)pcVar16 != 1) {
        pcVar16 = *(code **)(lVar2 + 0x20);
        (*pcVar16)(lStack_128,pcVar11,lVar4);
        puVar8 = PTR_PTR_1126ae0d0;
        _objc_allocWithZone();
        _objc_msgSend();
        _objc_msgSend();
        puVar7 = puStack_140;
        puVar9 = puStack_140;
        _objc_msgSend(puStack_140,PTR_s_transitionCoordinator_11267c408);
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lStack_130;
        if (puVar9 == (undefined *)0x0) {
          FUN_1049f1e18(lVar3,puVar8,puVar7);
          _objc_release(puVar8);
          _objc_release(puVar7);
          (**(code **)(lVar2 + 8))(lVar3,lVar4);
          (**(code **)(lStack_f8 + 8))(lStack_d0,lStack_f0);
          func_0x0001049f6a34(puStack_e0,0x1130a3dc0);
          _swift_release(puVar5);
        }
        else {
          pcStack_118 = pcVar16;
          puStack_100 = puVar9;
          (**(code **)(lVar2 + 0x10))(lStack_130,lVar3,lVar4);
          uVar13 = (ulong)*(byte *)(lVar2 + 0x50);
          uVar17 = uVar13 + 0x18 & (uVar13 ^ 0xffffffffffffffff);
          uVar18 = lStack_138 + uVar17 + 7 & 0xfffffffffffffff8;
          puVar9 = &UNK_1107bd680;
          puStack_e8 = param_6;
          _swift_allocObject(&UNK_1107bd680,uVar18 + 0x10,uVar13 | 7);
          lVar3 = lStack_108;
          *(long *)(puVar9 + 0x10) = param_4;
          (*pcStack_118)(puVar9 + uVar17,lVar12,lStack_108);
          *(undefined **)(puVar9 + uVar18) = puVar8;
          *(undefined **)(puVar9 + uVar18 + 8) = puVar7;
          uStack_a8 = 0x1049f8228;
          puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c0 = 0x42000000;
          puStack_b8 = &UNK_1013c1f34;
          puStack_b0 = &UNK_1107bd698;
          ppuVar10 = &puStack_c8;
          puStack_a0 = puVar9;
          __Block_copy(ppuVar10);
          puVar9 = puStack_a0;
          _objc_retain(param_4);
          _objc_retain(puVar8);
          _objc_retain(puVar7);
          _swift_release(puVar9);
          puVar9 = puStack_100;
          _objc_msgSend(puStack_100,PTR_s_animateAlongsideTransition_compl_11259e4b0,0,ppuVar10);
          __Block_release(ppuVar10);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _swift_unknownObjectRelease(puVar9);
          (**(code **)(lStack_110 + 8))(lStack_128,lVar3);
          (**(code **)(lStack_f8 + 8))(lStack_d0,lStack_f0);
          func_0x0001049f6a34(puStack_e0,0x1130a3dc0);
          _swift_release(puVar5);
          param_6 = puStack_e8;
        }
        goto LAB_1049f6dec;
      }
    }
    else {
      (**(code **)(lStack_110 + 0x38))(pcStack_118,1,1,lStack_108);
    }
    func_0x0001049f6a34(pcVar11,0x11309c5e0);
    uVar14 = *(undefined8 *)(param_4 + _DAT_1130a3f80);
    uVar15 = 0xd00000000000002b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f228ea0);
    _objc_msgSend(uVar14,PTR_s_logEntry__112607048,uVar15);
    _objc_release(puStack_140);
    _objc_release(uVar15);
    (**(code **)(lStack_f8 + 8))(lStack_d0,lStack_f0);
    func_0x0001049f6a34(puVar8,0x1130a3dc0);
    _swift_release(puVar5);
    _swift_unknownObjectRelease(param_6);
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    _objc_msgSend(param_2,PTR_s_isAuthenticationURL__112525550,uVar15);
    _objc_release(uVar15);
    if ((int)param_2 == 0) goto LAB_1049f6e50;
    puVar7 = &UNK_1107bd210;
    _swift_allocObject(&UNK_1107bd210,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10,param_4);
    puVar8 = &UNK_1107bd6d0;
    _swift_allocObject(&UNK_1107bd6d0,0x28,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x1049f81b8;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    *(undefined **)(puVar8 + 0x20) = puVar7;
    puVar1 = (undefined8 *)(param_4 + _DAT_1130a3fd0);
    _swift_beginAccess(puVar1,&puStack_c8,1,0);
    uVar15 = *puVar1;
    uVar14 = puVar1[1];
    *puVar1 = 0x1049f81dc;
    puVar1[1] = puVar8;
    _swift_retain(puVar6);
    _swift_retain(puVar7);
    func_0x000100dc4464(uVar15,uVar14);
    _swift_release(puVar7);
    FUN_1049f1f28(param_1);
    _swift_release(puVar5);
LAB_1049f6dec:
    _swift_unknownObjectRelease(param_6);
    param_5 = uStack_d8;
  }
  _objc_release(param_5);
  _swift_release(puVar6);
  return;
}



/* Entry: 1049f7f24; end: 1049f7f3b;  */

void FUN_1049f7f24(uint param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1 & 1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1049f7f3c; end: 1049f7f6f;  */

void FUN_1049f7f3c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1049f7f70; end: 1049f8007;  */

void FUN_1049f7f70(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  _objc_release(*(undefined8 *)(unaff_x20 + uVar4));
  _objc_release(*(undefined8 *)(unaff_x20 + uVar4 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1049f8008; end: 1049f8067;  */

void FUN_1049f8008(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar2 = uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar2 + 7 & 0xfffffffffffffff8;
  FUN_1049f1e18(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar2,
                *(undefined8 *)(unaff_x20 + uVar3),
                *(undefined8 *)(unaff_x20 + (uVar3 + 0xf & 0xfffffffffffff8)));
  return;
}



/* Entry: 1049f8068; end: 1049f8093;  */

void FUN_1049f8068(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1049f8094; end: 1049f80e7;  */

void FUN_1049f8094(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_28);
  return;
}



/* Entry: 1049f80e8; end: 1049f8127;  */

void FUN_1049f80e8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1049f8128; end: 1049f814b;  */

void FUN_1049f8128(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1,0);
  return;
}



/* Entry: 1049f814c; end: 1049f81ab;  */

undefined8 FUN_1049f814c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1049f81ac; end: 1049f81c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f81ac(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long unaff_x20;
  code *pcVar14;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar6 = _DAT_1130a3fa8;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar5 = *(code **)(unaff_x20 + 0x20);
  if ((param_1 & 1) == 0) {
    _swift_beginAccess(lVar4 + _DAT_1130a3fa8,auStack_68,1,0,*(undefined8 *)(unaff_x20 + 0x28));
    uVar8 = *(undefined8 *)(lVar4 + lVar6);
    *(undefined8 *)(lVar4 + lVar6) = 0;
    _swift_unknownObjectRelease(uVar8);
    puVar1 = (undefined8 *)(lVar4 + _DAT_1130a3fb0);
    _swift_beginAccess(puVar1,auStack_80,1,0);
    uVar8 = *puVar1;
    uVar10 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000100dc4464(uVar8,uVar10);
    uVar8 = uVar11;
    puVar12 = PTR_s_scheme_112631b48;
    _objc_msgSend(uVar11,PTR_s_scheme_112631b48);
    _objc_retainAutoreleasedReturnValue();
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar13 = puVar12;
    _objc_release(uVar8);
    uVar9 = 0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    __sSS9hasPrefixySbSSF();
    _swift_bridgeObjectRelease(puVar12);
    _swift_bridgeObjectRelease(puVar13);
    uVar8 = *(undefined8 *)(lVar4 + _DAT_1130a3fa0);
    bVar7 = (uVar9 & 1) == 0;
    pcVar3 = "p is out of date";
    if (bVar7) {
      pcVar3 = "@?36";
    }
    uVar10 = 0xd000000000000038;
    if (bVar7) {
      uVar10 = 0xd000000000000040;
    }
    uVar2 = 0xb;
    if (!bVar7) {
      uVar2 = 0xc;
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,(ulong)pcVar3 | 0x8000000000000000)
    ;
    _objc_msgSend(uVar8,PTR_s_errorWithCode_userInfo_message_u_1125c3e28,uVar2,0,uVar10,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    lVar4 = lVar4 + _DAT_1130a3f90;
    uVar10 = *(undefined8 *)(lVar4 + 0x18);
    lVar6 = *(long *)(lVar4 + 0x20);
    FUN_1049f61bc(lVar4,uVar10);
    pcVar14 = *(code **)(lVar6 + 8);
    _swift_errorRetain(uVar8);
    (*pcVar14)(uVar11,uVar8,uVar10,lVar6);
    _swift_errorRelease(uVar8);
    (*pcVar5)(uVar11);
    _swift_errorRelease(uVar8);
    _objc_release(uVar11);
  }
  return;
}



/* Entry: 1049f81c4; end: 1049f81d3;  */

void FUN_1049f81c4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1049f81d4; end: 1049f81df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f81d4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  lVar5 = 0x11309c5e0;
  func_0x0001048db364();
  puVar12 = auStack_d0 + -(*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar5 + -8);
  lVar11 = (long)puVar12 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    uVar6 = param_1;
    (**(code **)(lVar13 + 0x30))(param_1,1,lVar5);
    bVar4 = (int)uVar6 != 1;
  }
  else {
    bVar4 = false;
  }
  (*pcVar2)(bVar4,param_2);
  FUN_1049f814c(param_1,puVar12,0x11309c5e0);
  puVar7 = puVar12;
  (**(code **)(lVar13 + 0x30))(puVar12,1,lVar5);
  if ((int)puVar7 == 1) {
    func_0x0001049f6a34(puVar12,0x11309c5e0);
  }
  else {
    (**(code **)(lVar13 + 0x20))(lVar11,puVar12,lVar5);
    if (bVar4 != false) {
      _swift_beginAccess(lVar10 + 0x10,auStack_d0,0,0);
      lVar8 = lVar10 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar8 != 0) {
        puVar9 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIApplication_1126ae590);
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        func_0x0001049f2824();
        _objc_release(lVar8);
        _objc_release(puVar9);
        func_0x0001049f6a34(&uStack_a0,0x11309c428);
      }
    }
    (**(code **)(lVar13 + 8))(lVar11,lVar5);
  }
  _swift_beginAccess(lVar10 + 0x10,auStack_78,0,0);
  lVar10 = lVar10 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar5 = _DAT_1130a3fc0;
  if (lVar10 != 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    _swift_beginAccess(lVar10 + _DAT_1130a3fc0,auStack_b8,0x21,0);
    func_0x0001049f126c(&uStack_a0,lVar10 + lVar5);
    _swift_endAccess(auStack_b8);
    puVar1 = (undefined8 *)(lVar10 + _DAT_1130a3fd0);
    _swift_beginAccess(puVar1,&uStack_a0,1,0);
    uVar6 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000100dc4464(uVar6,uVar3);
    lVar5 = _DAT_1130a3fd8;
    _swift_beginAccess(lVar10 + _DAT_1130a3fd8,auStack_b8,1,0);
    *(undefined1 *)(lVar10 + lVar5) = 0;
    _objc_release(lVar10);
  }
  return;
}



/* Entry: 1049f81e0; end: 1049f821f;  */

void FUN_1049f81e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1049f8220; end: 1049f8233;  */

void FUN_1049f8220(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar2 = uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar2 + 7 & 0xfffffffffffffff8;
  FUN_1049f1e18(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar2,
                *(undefined8 *)(unaff_x20 + uVar3),
                *(undefined8 *)(unaff_x20 + (uVar3 + 0xf & 0xfffffffffffff8)));
  return;
}



/* Entry: 1049f8234; end: 1049f828f; -[FBSDKBridgeAPIProtocolNativeV1 appScheme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f8234(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130a4038))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130a4038);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049f8290; end: 1049f82c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049f8290(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a4038);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a4038) + 8))
  ;
  return auVar1;
}



/* Entry: 1049f82c8; end: 1049f82d7; -[FBSDKBridgeAPIProtocolNativeV1 dataLengthThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049f82c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130a4040);
}



/* Entry: 1049f82d8; end: 1049f82e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049f82d8(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _DAT_1130a4040);
}



/* Entry: 1049f82e8; end: 1049f82f7; -[FBSDKBridgeAPIProtocolNativeV1 shouldIncludeAppIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049f82e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130a4048);
}



/* Entry: 1049f82f8; end: 1049f8307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049f82f8(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _DAT_1130a4048);
}



/* Entry: 1049f8308; end: 1049f8327; -[FBSDKBridgeAPIProtocolNativeV1 pasteboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f8308(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130a4050));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049f8328; end: 1049f834b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f8328(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + _DAT_1130a4050));
  return;
}



/* Entry: 1049f834c; end: 1049f8353; +[FBSDKBridgeAPIProtocolNativeV1 defaultMaxBase64DataLengthThreshold] */

undefined8 FUN_1049f834c(void)

{
  return 0x4000;
}



/* Entry: 1049f8354; end: 1049f8387; -[FBSDKBridgeAPIProtocolNativeV1 appIcon] */

void FUN_1049f8354(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1049f8388();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1049f8388; end: 1049f8693;  */

/* WARNING: Removing unreachable block (ram,0x0001049f83e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1049f8388(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  if (*(char *)(unaff_x20 + _DAT_1130a4048) != '\x01') {
    return (undefined *)0x0;
  }
  FUN_1049b1a14(&lStack_60,lVar2,&PTR_DAT_1130a4060);
  _swift_unknownObjectRelease(lStack_60);
  lVar2 = lStack_58;
  _swift_unknownObjectRelease(uStack_50);
  _swift_unknownObjectRelease(lStack_48);
  uVar3 = 0x656c646e75424643;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c646e75424643,0xed0000736e6f6349);
  _objc_msgSend(lStack_58,PTR_s_fb_objectForInfoDictionaryKey__1125c5f58,uVar3);
  lVar5 = lStack_58;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar5 == 0) {
    uStack_88 = 0;
    lStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_90,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  lStack_58 = uStack_88;
  lStack_60 = lStack_90;
  lStack_48 = lStack_78;
  uStack_50 = uStack_80;
  if (lStack_78 == 0) {
LAB_1049f8664:
    _swift_unknownObjectRelease(lVar2);
    func_0x0001049fb6fc(&lStack_60,0x11309c428);
  }
  else {
    uVar3 = 0x11309d898;
    func_0x0001048db364(0x11309d898);
    puVar7 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_98;
    _swift_dynamicCast(plVar4,&lStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      if (*(long *)(lStack_98 + 0x10) == 0) {
        _swift_unknownObjectRelease(lVar2);
        _swift_bridgeObjectRelease(lStack_98);
        return (undefined *)0x0;
      }
      _swift_bridgeObjectRetain(lStack_98);
      lVar5 = -0x2fffffffffffffed;
      uVar8 = 0;
      func_0x000100029284();
      if ((uVar8 & 1) == 0) {
        _swift_unknownObjectRelease(lVar2);
        _swift_bridgeObjectRelease_n(lStack_98,2);
        return (undefined *)0x0;
      }
      lVar5 = *(long *)(*(long *)(lStack_98 + 0x38) + lVar5 * 8);
      _swift_bridgeObjectRetain(lVar5);
      _swift_bridgeObjectRelease_n(lStack_98,2);
      if (*(long *)(lVar5 + 0x10) == 0) {
LAB_1049f85ac:
        lStack_58 = 0;
        lStack_60 = 0;
        lStack_48 = 0;
        uStack_50 = 0;
      }
      else {
        _swift_bridgeObjectRetain(lVar5);
        uVar8 = 0;
        lVar6 = -0x2fffffffffffffef;
        func_0x000100029284(0xd000000000000011);
        if ((uVar8 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar5);
          goto LAB_1049f85ac;
        }
        func_0x0001000bb420(*(long *)(lVar5 + 0x38) + lVar6 * 0x20,&lStack_60);
        _swift_bridgeObjectRelease(lVar5);
      }
      _swift_bridgeObjectRelease(lVar5);
      if (lStack_48 == 0) goto LAB_1049f8664;
      uVar3 = 0x11309c618;
      func_0x0001048db364(0x11309c618);
      plVar4 = &lStack_90;
      _swift_dynamicCast(plVar4,&lStack_60,puVar7 + 8,uVar3,6);
      lVar5 = lStack_90;
      if (((ulong)plVar4 & 1) != 0) {
        if (*(long *)(lStack_90 + 0x10) != 0) {
          uVar3 = *(undefined8 *)(lStack_90 + 0x20);
          uVar1 = *(undefined8 *)(lStack_90 + 0x28);
          _swift_bridgeObjectRetain(uVar1);
          _swift_bridgeObjectRelease(lVar5);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar1);
          _swift_bridgeObjectRelease(uVar1);
          puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
          _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIImage_1126aea68);
          _objc_msgSend();
          _objc_retainAutoreleasedReturnValue();
          _swift_unknownObjectRelease(lVar2);
          _objc_release(uVar3);
          return puVar7;
        }
        _swift_bridgeObjectRelease(lStack_90);
      }
    }
    _swift_unknownObjectRelease(lVar2);
  }
  return (undefined *)0x0;
}



/* Entry: 1049f8694; end: 1049f87e7;  */

undefined8 FUN_1049f8694(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(unaff_x20,PTR_s_initWithAppScheme_pasteboard_dat_1125da748,param_1,puVar1,0x4000,1);
  _objc_release(param_1);
  _objc_release(puVar1);
  return unaff_x20;
}



/* Entry: 1049f87e8; end: 1049f888f; -[FBSDKBridgeAPIProtocolNativeV1 initWithAppScheme:] */

undefined8 FUN_1049f87e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(param_2);
  }
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_1,PTR_s_initWithAppScheme_pasteboard_dat_1125da748,param_3,puVar1,0x4000,1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1049f8890; end: 1049f89df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f8890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a4058);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a4038);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130a4050) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130a4040) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_1130a4048) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049f89e0; end: 1049f8bab; -[FBSDKBridgeAPIProtocolNativeV1 initWithAppScheme:pasteboard:dataLengthThreshold:includeAppIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049f89e0(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined1 param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a4058);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  plVar2 = (long *)(param_1 + _DAT_1130a4038);
  *plVar2 = param_3;
  plVar2[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_1130a4050) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130a4040) = param_5;
  *(undefined1 *)(param_1 + _DAT_1130a4048) = param_6;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar4;
  _swift_unknownObjectRetain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 1049f8bac; end: 1049f8bcf; -[FBSDKBridgeAPIProtocolNativeV1 dealloc] */

void FUN_1049f8bac(void)

{
  _objc_retain();
  func_0x0001049f8aac();
  return;
}


