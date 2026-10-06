/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10439c818; end: 10439c8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439c818(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113073e30);
  uVar8 = *(undefined8 *)(param_2 + _DAT_113073e40);
  puVar2 = (undefined8 *)(param_2 + _DAT_113073e38);
  uVar6 = *(undefined1 *)(param_2 + _DAT_113073e48);
  puVar3 = (undefined8 *)(param_2 + _DAT_113073e50);
  puVar4 = (undefined8 *)(param_2 + _DAT_113073e58);
  puVar5 = (undefined8 *)(param_2 + _DAT_113073e60);
  uVar7 = puVar1[1];
  uVar10 = *puVar1;
  uVar9 = puVar2[1];
  uVar12 = puVar2[1];
  uVar11 = *puVar2;
  param_1[1] = puVar1[1];
  *param_1 = uVar10;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  param_1[4] = uVar8;
  *(undefined1 *)(param_1 + 5) = uVar6;
  uVar10 = puVar3[1];
  uVar12 = *puVar3;
  uVar11 = puVar4[1];
  uVar14 = puVar4[1];
  uVar13 = *puVar4;
  param_1[7] = puVar3[1];
  param_1[6] = uVar12;
  param_1[9] = uVar14;
  param_1[8] = uVar13;
  uVar12 = puVar5[1];
  uVar13 = *puVar5;
  param_1[0xb] = puVar5[1];
  param_1[10] = uVar13;
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar9);
  _objc_retain(uVar8);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar12);
  return;
}



/* Entry: 10439c8f8; end: 10439c917;  */

void FUN_10439c8f8(void)

{
  _objc_opt_self(&PTR_PTR_1129a8728);
  return;
}



/* Entry: 10439c918; end: 10439c95f;  */

undefined8 FUN_10439c918(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10439c960; end: 10439c9a7; -[_TtC15SCSettingsScope15SCSettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439c960(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073e90;
  _swift_beginAccess(param_1 + _DAT_113073e90,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10439c9a8; end: 10439c9ff; -[_TtC15SCSettingsScope15SCSettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439c9a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073e90;
  _swift_beginAccess(param_1 + _DAT_113073e90,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10439ca00; end: 10439ca0f; -[_TtC15SCSettingsScope15SCSettingsScope initialAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439ca00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073e98));
  return;
}



/* Entry: 10439ca10; end: 10439ca2f; -[_TtC15SCSettingsScope15SCSettingsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439ca10(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113073ea0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10439ca30; end: 10439cae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10439ca30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar1 = _DAT_113073e90;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113073e90,0);
  _swift_beginAccess(unaff_x20 + lVar1,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_113073e98) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113073ea0) = param_3;
  puVar2 = auStack_68;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  _swift_unknownObjectRelease(param_1);
  return puVar2;
}



/* Entry: 10439cae8; end: 10439cba3; -[_TtC15SCSettingsScope15SCSettingsScope initWithDelegate:initialAction:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439cae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_113073e90;
  _swift_unknownObjectWeakInit(param_1 + _DAT_113073e90,0);
  _swift_beginAccess(param_1 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_3);
  *(undefined8 *)(param_1 + _DAT_113073e98) = param_4;
  *(undefined8 *)(param_1 + _DAT_113073ea0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_msgSendSuper2(&lStack_68,puVar1);
  return;
}



/* Entry: 10439cba4; end: 10439cc37; -[_TtC15SCSettingsScope15SCSettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439cba4(long param_1)

{
  func_0x0001021e94f8(param_1 + _DAT_113073e90);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073e98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113073ea0));
  return;
}



/* Entry: 10439cc38; end: 10439cd3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10439cc38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x00010036a9d8();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113073e90;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113073e90,0);
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_1);
  *(undefined8 *)(lVar4 + _DAT_113073e98) = param_2;
  *(undefined8 *)(lVar4 + _DAT_113073ea0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 10439cd40; end: 10439cddb; -[_TtC15SCSettingsScope23SCSettingsScopeServices buildWithDelegate:initialAction:uiContainer:] */

void FUN_10439cd40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_10439cc38(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10439cddc; end: 10439cddf;  */

void FUN_10439cddc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10439cde0; end: 10439ce13;  */

void FUN_10439cde0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10439ce14; end: 10439ce37; -[_TtC15SCSettingsScope23SCSettingsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439ce14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073ea8));
  return;
}



/* Entry: 10439ce38; end: 10439ce57; -[SCContactSupportScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439ce38(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113073f00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10439ce58; end: 10439ce9f; -[SCContactSupportScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439ce58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073f08;
  _swift_beginAccess(param_1 + _DAT_113073f08,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10439cea0; end: 10439cef7; -[SCContactSupportScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439cea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073f08;
  _swift_beginAccess(param_1 + _DAT_113073f08,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10439cef8; end: 10439cfb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10439cef8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113073f08;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113073f08,0);
  *(undefined8 *)(unaff_x20 + _DAT_113073f00) = param_1;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  puVar3 = auStack_68;
  _objc_msgSendSuper2(puVar3,puVar1);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_2);
  return puVar3;
}



/* Entry: 10439cfb4; end: 10439d057; -[SCContactSupportScope initWithUiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439cfb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_113073f08;
  _swift_unknownObjectWeakInit(param_1 + _DAT_113073f08,0);
  *(undefined8 *)(param_1 + _DAT_113073f00) = param_3;
  _swift_beginAccess(param_1 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_68,puVar1);
  return;
}



/* Entry: 10439d058; end: 10439d083; -[SCContactSupportScope init] */

void FUN_10439d058(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContactSupportScope.SCContactSupportScope",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10439d084);
  (*pcVar1)();
}



/* Entry: 10439d084; end: 10439d12b; -[SCContactSupportScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10439d084(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113073f00));
  param_1 = param_1 + _DAT_113073f08;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10439d12c; end: 10439d213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10439d12c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000100334d68();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113073f08;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113073f08,0);
  *(long *)(lVar4 + _DAT_113073f00) = param_1;
  _swift_beginAccess(lVar4 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  _swift_unknownObjectRetain(param_1);
  plVar5 = &lStack_68;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_80[0] = plVar5;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  _swift_release(uStack_70);
  _swift_unknownObjectRelease(aplStack_80[0]);
  return plVar5;
}



/* Entry: 10439d214; end: 10439d287; -[_TtC21SCContactSupportScope29SCContactSupportScopeServices buildWithUiContainer:delegate:] */

void FUN_10439d214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10439d12c(param_3,param_4);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10439d288; end: 10439d2b3; -[_TtC21SCContactSupportScope29SCContactSupportScopeServices init] */

void FUN_10439d288(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContactSupportScope.SCContactSupportScopeServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10439d2b4);
  (*pcVar1)();
}



/* Entry: 10439d2b4; end: 10439d2b7;  */

void FUN_10439d2b4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10439d2b8; end: 10439d2eb;  */

void FUN_10439d2b8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10439d2ec; end: 10439d30f; -[_TtC21SCContactSupportScope29SCContactSupportScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439d2ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073f18));
  return;
}



/* Entry: 10439d310; end: 10439d31f; -[_TtC17SCUberAvatarScope17SCUberAvatarScope configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439d310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073f70));
  return;
}



/* Entry: 10439d320; end: 10439d32f; -[_TtC17SCUberAvatarScope17SCUberAvatarScope viewOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439d320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073f78));
  return;
}



/* Entry: 10439d330; end: 10439d33f; -[_TtC17SCUberAvatarScope17SCUberAvatarScope downloadInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439d330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073f80));
  return;
}



/* Entry: 10439d340; end: 10439d34f; -[_TtC17SCUberAvatarScope17SCUberAvatarScope optimizations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439d340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073f88));
  return;
}



/* Entry: 10439d350; end: 10439d397; -[_TtC17SCUberAvatarScope17SCUberAvatarScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439d350(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073f90;
  _swift_beginAccess(param_1 + _DAT_113073f90,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10439d398; end: 10439d3ef; -[_TtC17SCUberAvatarScope17SCUberAvatarScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439d398(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073f90;
  _swift_beginAccess(param_1 + _DAT_113073f90,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10439d3f0; end: 10439d40f; -[_TtC17SCUberAvatarScope17SCUberAvatarScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439d3f0(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113073f98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10439d410; end: 10439d42f; -[_TtC17SCUberAvatarScope17SCUberAvatarScope viewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439d410(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113073fa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10439d430; end: 10439d43f; -[_TtC17SCUberAvatarScope17SCUberAvatarScope avatarViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439d430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073fa8));
  return;
}



/* Entry: 10439d440; end: 10439d483; -[_TtC17SCUberAvatarScope17SCUberAvatarScope avatarViewAnimationScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10439d440(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073fb0;
  _swift_beginAccess(param_1 + _DAT_113073fb0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 10439d484; end: 10439d4d3; -[_TtC17SCUberAvatarScope17SCUberAvatarScope setAvatarViewAnimationScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439d484(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073fb0;
  _swift_beginAccess(param_2 + _DAT_113073fb0,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 10439d4d4; end: 10439d58f; -[_TtC17SCUberAvatarScope17SCUberAvatarScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439d4d4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073f70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073f78));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073f80));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073f88));
  func_0x00010439d56c(param_1 + _DAT_113073f90);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113073f98));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113073fa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113073fa8));
  return;
}



/* Entry: 10439d590; end: 10439d5f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439d590(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002c86e8();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113073fc0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10439d5f8; end: 10439d643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439d5f8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073fc0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439d644; end: 10439d7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10439d644(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = param_1;
  func_0x0001002c70a4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113073f90;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113073f90,0);
  *(undefined8 *)(lVar4 + _DAT_113073fb0) = 0;
  *(long *)(lVar4 + _DAT_113073f70) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113073f78) = param_2;
  *(undefined8 *)(lVar4 + _DAT_113073f80) = param_3;
  *(undefined8 *)(lVar4 + _DAT_113073f88) = param_4;
  *(undefined8 *)(lVar4 + _DAT_113073f98) = param_5;
  *(undefined8 *)(lVar4 + _DAT_113073fa0) = 0;
  *(undefined8 *)(lVar4 + _DAT_113073fa8) = 0;
  _swift_beginAccess(lVar4 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_6);
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  plVar5 = &lStack_88;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 10439d7c0; end: 10439d7e7; -[_TtC17SCUberAvatarScope25SCUberAvatarScopeServices buildWithConfiguration:viewOptions:downloadInfo:optimizations:uiContainer:delegate:] */

void FUN_10439d7c0(void)

{
  FUN_10439d98c();
  return;
}



/* Entry: 10439d7e8; end: 10439d963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10439d7e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = param_1;
  func_0x0001002c70a4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113073f90;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113073f90,0);
  *(undefined8 *)(lVar4 + _DAT_113073fb0) = 0;
  *(long *)(lVar4 + _DAT_113073f70) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113073f78) = param_2;
  *(undefined8 *)(lVar4 + _DAT_113073f80) = param_3;
  *(undefined8 *)(lVar4 + _DAT_113073f88) = param_4;
  *(undefined8 *)(lVar4 + _DAT_113073f98) = 0;
  *(undefined8 *)(lVar4 + _DAT_113073fa0) = param_5;
  *(undefined8 *)(lVar4 + _DAT_113073fa8) = 0;
  _swift_beginAccess(lVar4 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_6);
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  plVar5 = &lStack_88;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 10439d964; end: 10439d98b; -[_TtC17SCUberAvatarScope25SCUberAvatarScopeServices buildWithConfiguration:viewOptions:downloadInfo:optimizations:viewContainer:delegate:] */

void FUN_10439d964(void)

{
  FUN_10439d98c();
  return;
}



/* Entry: 10439d98c; end: 10439dbfb;  */

void FUN_10439d98c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  code *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_6;
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_8);
  _objc_retain(param_1);
  uVar3 = param_3;
  (*param_9)(param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(uVar2);
  _swift_unknownObjectRelease(param_7);
  _swift_unknownObjectRelease(param_8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10439dbfc; end: 10439dc07; -[_TtC17SCUberAvatarScope25SCUberAvatarScopeServices buildWithAvatarViewModel:viewOptions:optimizations:uiContainer:delegate:] */

void FUN_10439dbfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  uVar3 = param_3;
  (*(code *)0x10439da8c)(param_3,param_4,param_5,param_6,param_7);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10439dc08; end: 10439dd77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10439dc08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = param_1;
  func_0x0001002c70a4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113073f90;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113073f90,0);
  *(undefined8 *)(lVar4 + _DAT_113073fb0) = 0;
  *(undefined8 *)(lVar4 + _DAT_113073f70) = 0;
  *(undefined8 *)(lVar4 + _DAT_113073f78) = param_2;
  *(undefined8 *)(lVar4 + _DAT_113073f80) = 0;
  *(undefined8 *)(lVar4 + _DAT_113073f88) = param_3;
  *(undefined8 *)(lVar4 + _DAT_113073f98) = 0;
  *(undefined8 *)(lVar4 + _DAT_113073fa0) = param_4;
  *(long *)(lVar4 + _DAT_113073fa8) = param_1;
  _swift_beginAccess(lVar4 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_5);
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  plVar5 = &lStack_88;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 10439dd78; end: 10439dd83; -[_TtC17SCUberAvatarScope25SCUberAvatarScopeServices buildWithAvatarViewModel:viewOptions:optimizations:viewContainer:delegate:] */

void FUN_10439dd78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  uVar3 = param_3;
  FUN_10439dc08(param_3,param_4,param_5,param_6,param_7);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10439dd84; end: 10439de67;  */

void FUN_10439dd84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  uVar3 = param_3;
  (*param_8)(param_3,param_4,param_5,param_6,param_7);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10439de68; end: 10439de6b;  */

void FUN_10439de68(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10439de6c; end: 10439de9f;  */

void FUN_10439de6c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10439dea0; end: 10439dec3; -[_TtC17SCUberAvatarScope25SCUberAvatarScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439dea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073fc0));
  return;
}



/* Entry: 10439dec4; end: 10439defb;  */

void FUN_10439dec4(undefined8 param_1)

{
  if (lRam0000000113074070 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e801748);
  return;
}



/* Entry: 10439defc; end: 10439e0df;  */

long * FUN_10439defc(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) == 0) {
    lVar10 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar10;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    lVar4 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar4;
    lVar16 = param_2[6];
    param_1[6] = lVar16;
    lVar18 = (long)*(int *)(param_3 + 0x20);
    lVar9 = 0;
    __s10Foundation4DateVMa();
    lVar19 = *(long *)(lVar9 + -8);
    pcVar11 = *(code **)(lVar19 + 0x30);
    _swift_bridgeObjectRetain(lVar10);
    _swift_bridgeObjectRetain(lVar3);
    _swift_bridgeObjectRetain(lVar4);
    _objc_retain(lVar16);
    lVar10 = (long)param_2 + lVar18;
    (*pcVar11)(lVar10,1,lVar9);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar19 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,lVar9);
      (**(code **)(lVar19 + 0x38))((long)param_1 + lVar18,0,1,lVar9);
    }
    else {
      lVar10 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)param_1 + lVar18,(long)param_2 + lVar18,
              *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    iVar7 = *(int *)(param_3 + 0x28);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    uVar13 = *(undefined8 *)((long)param_2 + (long)iVar7);
    *(undefined8 *)((long)param_1 + (long)iVar7) = uVar13;
    iVar7 = *(int *)(param_3 + 0x30);
    uVar14 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) = uVar14;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar7);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar7);
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    iVar7 = *(int *)(param_3 + 0x38);
    uVar15 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) = uVar15;
    uVar17 = *(undefined8 *)((long)param_2 + (long)iVar7);
    *(undefined8 *)((long)param_1 + (long)iVar7) = uVar17;
    iVar7 = *(int *)(param_3 + 0x40);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    *(undefined1 *)((long)param_1 + (long)iVar7) = *(undefined1 *)((long)param_2 + (long)iVar7);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar13);
    _objc_retain(uVar14);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar6);
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar12 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar10 + (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10439e0e0; end: 10439e1c7;  */

void FUN_10439e0e0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  iVar1 = *(int *)(param_2 + 0x20);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28)));
  _objc_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x34)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x3c) + 8));
  return;
}



/* Entry: 10439e1c8; end: 10439e37f;  */

undefined8 * FUN_10439e1c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar9 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar9;
  uVar11 = param_2[6];
  param_1[6] = uVar11;
  lVar13 = (long)*(int *)(param_3 + 0x20);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  lVar14 = *(long *)(lVar6 + -8);
  pcVar8 = *(code **)(lVar14 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar9);
  _objc_retain(uVar11);
  lVar7 = (long)param_2 + lVar13;
  (*pcVar8)(lVar7,1,lVar6);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar14 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,lVar6);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar13,0,1,lVar6);
  }
  else {
    lVar7 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar13,(long)param_2 + lVar13,
            *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  iVar5 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  uVar9 = *(undefined8 *)((long)param_2 + (long)iVar5);
  *(undefined8 *)((long)param_1 + (long)iVar5) = uVar9;
  iVar5 = *(int *)(param_3 + 0x30);
  uVar11 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) = uVar11;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  iVar5 = *(int *)(param_3 + 0x38);
  uVar10 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) = uVar10;
  uVar12 = *(undefined8 *)((long)param_2 + (long)iVar5);
  *(undefined8 *)((long)param_1 + (long)iVar5) = uVar12;
  iVar5 = *(int *)(param_3 + 0x40);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar9);
  _objc_retain(uVar11);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Entry: 10439e380; end: 10439e5ff;  */

undefined8 * FUN_10439e380(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  param_1[2] = param_2[2];
  uVar6 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  param_1[4] = param_2[4];
  uVar6 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = param_1[6];
  param_1[6] = param_2[6];
  _objc_retain();
  _objc_release(uVar6);
  lVar7 = (long)*(int *)(param_3 + 0x20);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar3 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar5 = (long)param_1 + lVar7;
  (*pcVar9)(lVar5,1,lVar3);
  lVar4 = (long)param_2 + lVar7;
  (*pcVar9)(lVar4,1,lVar3);
  if ((int)lVar5 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 0x18))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
      goto LAB_10439e4cc;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar3);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar3);
    goto LAB_10439e4cc;
  }
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar7,(long)param_2 + lVar7,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40))
  ;
LAB_10439e4cc:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  lVar5 = (long)*(int *)(param_3 + 0x28);
  uVar6 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  lVar5 = (long)*(int *)(param_3 + 0x2c);
  uVar6 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _objc_retain();
  _objc_release(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  lVar5 = (long)*(int *)(param_3 + 0x34);
  uVar6 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  lVar5 = (long)*(int *)(param_3 + 0x38);
  uVar6 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  return param_1;
}



/* Entry: 10439e600; end: 10439e723;  */

undefined8 * FUN_10439e600(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  uVar8 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar8;
  param_1[6] = param_2[6];
  lVar6 = (long)*(int *)(param_3 + 0x20);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar4 + -8);
  lVar5 = (long)param_2 + lVar6;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
            *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x28);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x30);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  iVar1 = *(int *)(param_3 + 0x38);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x40);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Entry: 10439e724; end: 10439e91b;  */

undefined8 * FUN_10439e724(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar4 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[3];
  uVar3 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[5];
  uVar3 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  _objc_release(uVar4);
  lVar8 = (long)*(int *)(param_3 + 0x20);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar5 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar7 = (long)param_1 + lVar8;
  (*pcVar10)(lVar7,1,lVar5);
  lVar6 = (long)param_2 + lVar8;
  (*pcVar10)(lVar6,1,lVar5);
  if ((int)lVar7 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
      goto LAB_10439e838;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar8,lVar5);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar5);
    goto LAB_10439e838;
  }
  lVar7 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy((long)param_1 + lVar8,(long)param_2 + lVar8,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40))
  ;
LAB_10439e838:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar4 = puVar2[1];
  uVar3 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  lVar7 = (long)*(int *)(param_3 + 0x28);
  uVar4 = *(undefined8 *)((long)param_1 + lVar7);
  *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
  _swift_bridgeObjectRelease(uVar4);
  lVar7 = (long)*(int *)(param_3 + 0x2c);
  uVar4 = *(undefined8 *)((long)param_1 + lVar7);
  *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
  _objc_release(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar4 = puVar2[1];
  uVar3 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  lVar7 = (long)*(int *)(param_3 + 0x34);
  uVar4 = *(undefined8 *)((long)param_1 + lVar7);
  *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
  _swift_bridgeObjectRelease(uVar4);
  lVar7 = (long)*(int *)(param_3 + 0x38);
  uVar4 = *(undefined8 *)((long)param_1 + lVar7);
  *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
  _swift_bridgeObjectRelease(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar4 = puVar2[1];
  uVar3 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  return param_1;
}



/* Entry: 10439e91c; end: 10439e933;  */

void FUN_10439e91c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10439e934; end: 10439e9d3;  */

void FUN_10439e934(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_98 = &UNK_10dcf40d8;
  puStack_90 = &UNK_10dcf40d8;
  puStack_88 = &UNK_10dcf40d8;
  puStack_80 = &UNK_10dcf40f0;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_78 = *(long *)(lVar1 + -8) + 0x40;
    puStack_70 = &UNK_10dcf40d8;
    puStack_68 = &UNK_10dcf40f0;
    puStack_60 = &UNK_10dcf40f0;
    puStack_58 = &UNK_10dcf40d8;
    puStack_50 = &UNK_10dcf40f0;
    puStack_48 = &UNK_10dcf40f0;
    puStack_40 = &UNK_10dcf40d8;
    puStack_38 = &UNK_10dcf4108;
    _swift_initStructMetadata(param_1,0x100,0xd,&puStack_98,param_1 + 0x10);
  }
  return;
}



/* Entry: 10439e9d4; end: 1043a0937;  */

long * FUN_10439e9d4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) == 0) {
    plVar10 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar10 == 2) {
      lVar11 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar11;
      _swift_bridgeObjectRetain();
      uVar15 = 2;
    }
    else if ((int)plVar10 == 1) {
      lVar11 = 0;
      FUN_1043a86b0();
      lVar18 = *(long *)(lVar11 + -8);
      plVar10 = param_2;
      (**(code **)(lVar18 + 0x30))(param_2,1,lVar11);
      if ((int)plVar10 == 0) {
        *(char *)param_1 = (char)*param_2;
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x14));
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x14));
        uVar15 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar15;
        uVar15 = puVar2[2];
        uVar22 = puVar2[3];
        puVar1[2] = uVar15;
        puVar1[3] = uVar22;
        uVar22 = puVar2[4];
        puVar1[4] = uVar22;
        lVar12 = 0;
        FUN_1043aa0ac();
        lVar17 = (long)*(int *)(lVar12 + 0x1c);
        lVar13 = 0;
        __s10Foundation3URLVMa();
        lVar16 = *(long *)(lVar13 + -8);
        pcVar19 = *(code **)(lVar16 + 0x30);
        _swift_bridgeObjectRetain(uVar15);
        _swift_bridgeObjectRetain(uVar22);
        lVar23 = (long)puVar2 + lVar17;
        (*pcVar19)(lVar23,1,lVar13);
        if ((int)lVar23 == 0) {
          (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar17,(long)puVar2 + lVar17,lVar13);
          (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar17,0,1,lVar13);
        }
        else {
          lVar23 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          _memcpy((long)puVar1 + lVar17,(long)puVar2 + lVar17,
                  *(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
        }
        puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x20));
        puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x20));
        uVar21 = puVar3[1];
        if (uVar21 >> 0x3c < 0xf) {
          uVar15 = *puVar3;
          func_0x00010006c00c(uVar15,uVar21);
          *puVar14 = uVar15;
          puVar14[1] = uVar21;
        }
        else {
          uVar15 = *puVar3;
          puVar14[1] = puVar3[1];
          *puVar14 = uVar15;
        }
        puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x24));
        puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x24));
        uVar21 = puVar3[1];
        if (uVar21 >> 0x3c < 0xf) {
          uVar15 = *puVar3;
          func_0x00010006c00c(uVar15,uVar21);
          *puVar14 = uVar15;
          puVar14[1] = uVar21;
        }
        else {
          uVar15 = *puVar3;
          puVar14[1] = puVar3[1];
          *puVar14 = uVar15;
        }
        *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x28)) =
             *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x28));
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x18));
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x18));
        lVar23 = *(long *)(lVar12 + -8);
        puVar14 = puVar2;
        (**(code **)(lVar23 + 0x30))(puVar2,1,lVar12);
        if ((int)puVar14 == 0) {
          uVar15 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar15;
          uVar15 = puVar2[3];
          puVar1[2] = puVar2[2];
          puVar1[3] = uVar15;
          uVar15 = puVar2[4];
          puVar1[4] = uVar15;
          lVar20 = (long)*(int *)(lVar12 + 0x1c);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar15);
          lVar17 = (long)puVar2 + lVar20;
          (*pcVar19)(lVar17,1,lVar13);
          if ((int)lVar17 == 0) {
            (**(code **)(lVar16 + 0x10))((long)puVar1 + lVar20,(long)puVar2 + lVar20,lVar13);
            (**(code **)(lVar16 + 0x38))((long)puVar1 + lVar20,0,1,lVar13);
          }
          else {
            lVar13 = 0x112d36580;
            func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
            _memcpy((long)puVar1 + lVar20,(long)puVar2 + lVar20,
                    *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
          }
          puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x20));
          puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x20));
          uVar21 = puVar3[1];
          if (uVar21 >> 0x3c < 0xf) {
            uVar15 = *puVar3;
            func_0x00010006c00c(uVar15,uVar21);
            *puVar14 = uVar15;
            puVar14[1] = uVar21;
          }
          else {
            uVar15 = *puVar3;
            puVar14[1] = puVar3[1];
            *puVar14 = uVar15;
          }
          puVar14 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x24));
          puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x24));
          uVar21 = puVar3[1];
          if (uVar21 >> 0x3c < 0xf) {
            uVar15 = *puVar3;
            func_0x00010006c00c(uVar15,uVar21);
            *puVar14 = uVar15;
            puVar14[1] = uVar21;
          }
          else {
            uVar15 = *puVar3;
            puVar14[1] = puVar3[1];
            *puVar14 = uVar15;
          }
          *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x28)) =
               *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x28));
          (**(code **)(lVar23 + 0x38))(puVar1,0,1,lVar12);
        }
        else {
          lVar23 = 0x112f8ae50;
          func_0x0001000285a8(0x112f8ae50,&UNK_10dc00160);
          _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
        }
        (**(code **)(lVar18 + 0x38))(param_1,0,1,lVar11);
      }
      else {
        lVar11 = 0x1130740e0;
        func_0x0001000285a8(0x1130740e0,&UNK_10dcf4128);
        _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
      }
      uVar15 = 1;
    }
    else {
      lVar11 = 0;
      FUN_1043a7bd4();
      lVar18 = *(long *)(lVar11 + -8);
      plVar10 = param_2;
      (**(code **)(lVar18 + 0x30))(param_2,1,lVar11);
      if ((int)plVar10 == 0) {
        lVar23 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar23;
        lVar12 = param_2[3];
        param_1[2] = param_2[2];
        param_1[3] = lVar12;
        iVar9 = *(int *)(lVar11 + 0x18);
        lVar13 = 0;
        __s10Foundation3URLVMa();
        pcVar19 = *(code **)(*(long *)(lVar13 + -8) + 0x10);
        _swift_bridgeObjectRetain(lVar23);
        _swift_bridgeObjectRetain(lVar12);
        (*pcVar19)((long)param_1 + (long)iVar9,(long)param_2 + (long)iVar9,lVar13);
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x1c));
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x1c));
        uVar15 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar15;
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x20));
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x20));
        uVar15 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar15;
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x24));
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x24));
        uVar22 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar22;
        *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x28)) =
             *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x28));
        *(undefined1 *)((long)param_1 + (long)*(int *)(lVar11 + 0x2c)) =
             *(undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x2c));
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x30));
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x30));
        uVar4 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar4;
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x34));
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x34));
        uVar5 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar5;
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x38));
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x38));
        uVar6 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar6;
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar11 + 0x3c));
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar11 + 0x3c));
        uVar7 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar7;
        pcVar19 = *(code **)(lVar18 + 0x38);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar15);
        _swift_bridgeObjectRetain(uVar22);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar7);
        (*pcVar19)(param_1,0,1,lVar11);
      }
      else {
        lVar11 = 0x1130740d8;
        func_0x0001000285a8(0x1130740d8,&UNK_10dcf4120);
        _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
      }
      uVar15 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar15);
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar21 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar11 + (uVar21 + 0x10 & (uVar21 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1043a0938; end: 1043a096f;  */

void FUN_1043a0938(undefined8 param_1)

{
  if (lRam0000000113074200 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e8017b4);
  return;
}



/* Entry: 1043a0970; end: 1043a09bf;  */

undefined8 FUN_1043a0970(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1130741a0;
  func_0x0001000285a8(0x1130741a0,&UNK_10dcf41a0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1043a09c0; end: 1043a1083;  */

long * FUN_1043a09c0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  long lVar26;
  code *pcVar27;
  long lVar28;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar9 >> 0x11 & 1) != 0) {
    lVar12 = *param_2;
    *param_1 = lVar12;
    uVar25 = (ulong)uVar9 & 0xff;
    _swift_retain();
    return (long *)(lVar12 + (uVar25 + 0x10 & (uVar25 ^ 0xffffffffffffffff)));
  }
  lVar12 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar12;
  lVar20 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar20;
  lVar19 = param_2[4];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  param_1[4] = lVar19;
  lVar11 = 0;
  func_0x00010439fe28();
  lVar21 = *(long *)(lVar11 + -8);
  pcVar27 = *(code **)(lVar21 + 0x30);
  _swift_bridgeObjectRetain(lVar12);
  _swift_bridgeObjectRetain(lVar20);
  _swift_bridgeObjectRetain(lVar19);
  puVar23 = puVar2;
  (*pcVar27)(puVar2,1,lVar11);
  if ((int)puVar23 != 0) {
    lVar12 = 0x1130741a0;
    func_0x0001000285a8(0x1130741a0,&UNK_10dcf41a0);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    goto LAB_1043a1050;
  }
  puVar23 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,lVar11);
  if ((int)puVar23 == 2) {
    uVar22 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar22;
    _swift_bridgeObjectRetain();
  }
  else {
    lVar12 = 0;
    if ((int)puVar23 == 1) {
      FUN_1043a86b0();
      lVar20 = *(long *)(lVar12 + -8);
      puVar13 = puVar2;
      (**(code **)(lVar20 + 0x30))(puVar2,1,lVar12);
      if ((int)puVar13 == 0) {
        *(undefined1 *)puVar1 = *(undefined1 *)puVar2;
        puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x14));
        puVar16 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x14));
        uVar22 = *puVar16;
        puVar13[1] = puVar16[1];
        *puVar13 = uVar22;
        uVar22 = puVar16[2];
        uVar24 = puVar16[3];
        puVar13[2] = uVar22;
        puVar13[3] = uVar24;
        uVar24 = puVar16[4];
        puVar13[4] = uVar24;
        lVar14 = 0;
        FUN_1043aa0ac();
        lVar18 = (long)*(int *)(lVar14 + 0x1c);
        lVar15 = 0;
        __s10Foundation3URLVMa();
        lVar28 = *(long *)(lVar15 + -8);
        pcVar27 = *(code **)(lVar28 + 0x30);
        _swift_bridgeObjectRetain(uVar22);
        _swift_bridgeObjectRetain(uVar24);
        lVar19 = (long)puVar16 + lVar18;
        (*pcVar27)(lVar19,1,lVar15);
        if ((int)lVar19 == 0) {
          (**(code **)(lVar28 + 0x10))((long)puVar13 + lVar18,(long)puVar16 + lVar18,lVar15);
          (**(code **)(lVar28 + 0x38))((long)puVar13 + lVar18,0,1,lVar15);
        }
        else {
          lVar19 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          _memcpy((long)puVar13 + lVar18,(long)puVar16 + lVar18,
                  *(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
        }
        puVar3 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar14 + 0x20));
        puVar4 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x20));
        uVar25 = puVar4[1];
        if (uVar25 >> 0x3c < 0xf) {
          uVar22 = *puVar4;
          func_0x00010006c00c(uVar22,uVar25);
          *puVar3 = uVar22;
          puVar3[1] = uVar25;
        }
        else {
          uVar22 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar22;
        }
        puVar3 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar14 + 0x24));
        puVar4 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x24));
        uVar25 = puVar4[1];
        if (uVar25 >> 0x3c < 0xf) {
          uVar22 = *puVar4;
          func_0x00010006c00c(uVar22,uVar25);
          *puVar3 = uVar22;
          puVar3[1] = uVar25;
        }
        else {
          uVar22 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar22;
        }
        *(undefined4 *)((long)puVar13 + (long)*(int *)(lVar14 + 0x28)) =
             *(undefined4 *)((long)puVar16 + (long)*(int *)(lVar14 + 0x28));
        puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x18));
        puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x18));
        lVar19 = *(long *)(lVar14 + -8);
        puVar16 = puVar2;
        (**(code **)(lVar19 + 0x30))(puVar2,1);
        if ((int)puVar16 == 0) {
          uVar22 = *puVar2;
          puVar13[1] = puVar2[1];
          *puVar13 = uVar22;
          uVar22 = puVar2[3];
          puVar13[2] = puVar2[2];
          puVar13[3] = uVar22;
          uVar22 = puVar2[4];
          puVar13[4] = uVar22;
          lVar26 = (long)*(int *)(lVar14 + 0x1c);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar22);
          lVar18 = (long)puVar2 + lVar26;
          (*pcVar27)(lVar18,1,lVar15);
          if ((int)lVar18 == 0) {
            (**(code **)(lVar28 + 0x10))((long)puVar13 + lVar26,(long)puVar2 + lVar26,lVar15);
            (**(code **)(lVar28 + 0x38))((long)puVar13 + lVar26,0,1,lVar15);
          }
          else {
            lVar15 = 0x112d36580;
            func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
            _memcpy((long)puVar13 + lVar26,(long)puVar2 + lVar26,
                    *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
          }
          puVar16 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar14 + 0x20));
          puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x20));
          uVar25 = puVar3[1];
          if (uVar25 >> 0x3c < 0xf) {
            uVar22 = *puVar3;
            func_0x00010006c00c(uVar22,uVar25);
            *puVar16 = uVar22;
            puVar16[1] = uVar25;
          }
          else {
            uVar22 = *puVar3;
            puVar16[1] = puVar3[1];
            *puVar16 = uVar22;
          }
          puVar16 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar14 + 0x24));
          puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x24));
          uVar25 = puVar3[1];
          if (uVar25 >> 0x3c < 0xf) {
            uVar22 = *puVar3;
            func_0x00010006c00c(uVar22,uVar25);
            *puVar16 = uVar22;
            puVar16[1] = uVar25;
          }
          else {
            uVar22 = *puVar3;
            puVar16[1] = puVar3[1];
            *puVar16 = uVar22;
          }
          *(undefined4 *)((long)puVar13 + (long)*(int *)(lVar14 + 0x28)) =
               *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x28));
          (**(code **)(lVar19 + 0x38))(puVar13,0,1);
        }
        else {
          lVar19 = 0x112f8ae50;
          func_0x0001000285a8(0x112f8ae50,&UNK_10dc00160);
          _memcpy(puVar13,puVar2,*(undefined8 *)(*(long *)(lVar19 + -8) + 0x40));
        }
        puVar23 = (undefined8 *)((ulong)puVar23 & 0xffffffff);
        (**(code **)(lVar20 + 0x38))(puVar1,0,1,lVar12);
      }
      else {
        lVar12 = 0x1130740e0;
        puVar17 = &UNK_10dcf4128;
LAB_1043a0b58:
        func_0x0001000285a8(lVar12,puVar17);
        _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
      }
    }
    else {
      FUN_1043a7bd4();
      lVar20 = *(long *)(lVar12 + -8);
      puVar13 = puVar2;
      (**(code **)(lVar20 + 0x30))(puVar2,1,lVar12);
      if ((int)puVar13 != 0) {
        lVar12 = 0x1130740d8;
        puVar17 = &UNK_10dcf4120;
        goto LAB_1043a0b58;
      }
      uVar22 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar22;
      uVar24 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar24;
      iVar10 = *(int *)(lVar12 + 0x18);
      lVar19 = 0;
      __s10Foundation3URLVMa();
      pcVar27 = *(code **)(*(long *)(lVar19 + -8) + 0x10);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar24);
      (*pcVar27)((long)puVar1 + (long)iVar10,(long)puVar2 + (long)iVar10,lVar19);
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x1c));
      puVar16 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x1c));
      uVar22 = puVar16[1];
      *puVar13 = *puVar16;
      puVar13[1] = uVar22;
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x20));
      puVar16 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x20));
      uVar22 = puVar16[1];
      *puVar13 = *puVar16;
      puVar13[1] = uVar22;
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x24));
      puVar16 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x24));
      uVar24 = puVar16[1];
      *puVar13 = *puVar16;
      puVar13[1] = uVar24;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x28)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x28));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x2c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x2c));
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x30));
      puVar16 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x30));
      uVar5 = puVar16[1];
      *puVar13 = *puVar16;
      puVar13[1] = uVar5;
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x34));
      puVar16 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x34));
      uVar6 = puVar16[1];
      *puVar13 = *puVar16;
      puVar13[1] = uVar6;
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x38));
      puVar16 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x38));
      uVar7 = puVar16[1];
      *puVar13 = *puVar16;
      puVar13[1] = uVar7;
      puVar13 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x3c));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x3c));
      uVar8 = puVar2[1];
      *puVar13 = *puVar2;
      puVar13[1] = uVar8;
      pcVar27 = *(code **)(lVar20 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar24);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar8);
      (*pcVar27)(puVar1,0,1,lVar12);
    }
  }
  _swift_storeEnumTagMultiPayload(puVar1,lVar11,puVar23);
  (**(code **)(lVar21 + 0x38))(puVar1,0,1,lVar11);
LAB_1043a1050:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Entry: 1043a1084; end: 1043a137f;  */

/* WARNING: Possible PIC construction at 0x0001043a1290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001043a132c: Changing call to branch */

void FUN_1043a1084(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long unaff_x19;
  long unaff_x20;
  long lVar12;
  code *pcVar13;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + *(int *)(param_2 + 0x1c);
  lVar4 = 0;
  func_0x00010439fe28();
  lVar5 = param_1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(param_1,1,lVar4);
  if ((int)lVar5 == 0) {
    lVar5 = param_1;
    _swift_getEnumCaseMultiPayload(param_1,lVar4);
    iVar3 = (int)lVar5;
    if (iVar3 == 2) {
      uVar6 = *(undefined8 *)(param_1 + 8);
LAB_1043a1368:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
      return;
    }
    if (iVar3 == 1) {
      lVar4 = 0;
      FUN_1043a86b0();
      lVar5 = param_1;
      (**(code **)(*(long *)(lVar4 + -8) + 0x30))(param_1,1,lVar4);
      if ((int)lVar5 == 0) {
        lVar5 = param_1 + *(int *)(lVar4 + 0x14);
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x10));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x20));
        lVar7 = 0;
        FUN_1043aa0ac();
        iVar3 = *(int *)(lVar7 + 0x1c);
        lVar8 = 0;
        __s10Foundation3URLVMa();
        lVar12 = *(long *)(lVar8 + -8);
        pcVar13 = *(code **)(lVar12 + 0x30);
        lVar9 = lVar5 + iVar3;
        (*pcVar13)(lVar9,1,lVar8);
        if ((int)lVar9 == 0) {
          (**(code **)(lVar12 + 8))(lVar5 + iVar3,lVar8);
        }
        puVar2 = (undefined8 *)(lVar5 + *(int *)(lVar7 + 0x20));
        uVar10 = puVar2[1];
        if (uVar10 >> 0x3c < 0xf) {
          uVar6 = *puVar2;
          unaff_x30 = 0x1043a1294;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
          unaff_x19 = param_1;
          unaff_x20 = lVar7;
          unaff_x29 = puVar1;
        }
        else {
          puVar2 = (undefined8 *)(lVar5 + *(int *)(lVar7 + 0x24));
          if ((ulong)puVar2[1] >> 0x3c < 0xf) {
            func_0x00010006c090(*puVar2);
          }
          param_1 = param_1 + *(int *)(lVar4 + 0x18);
          lVar5 = param_1;
          (**(code **)(*(long *)(lVar7 + -8) + 0x30))(param_1,1,lVar7);
          if ((int)lVar5 != 0) {
            return;
          }
          _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
          _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
          iVar3 = *(int *)(lVar7 + 0x1c);
          lVar5 = param_1 + iVar3;
          (*pcVar13)(lVar5,1,lVar8);
          if ((int)lVar5 == 0) {
            (**(code **)(lVar12 + 8))(param_1 + iVar3,lVar8);
          }
          puVar2 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x20));
          uVar10 = puVar2[1];
          if (uVar10 >> 0x3c < 0xf) {
            uVar6 = *puVar2;
            unaff_x30 = 0x1043a1330;
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
            unaff_x19 = param_1;
            unaff_x20 = lVar7;
            unaff_x29 = puVar1;
          }
          else {
            puVar2 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
            uVar10 = puVar2[1];
            if (0xe < uVar10 >> 0x3c) {
              return;
            }
            uVar6 = *puVar2;
          }
        }
        uVar11 = (uint)(uVar10 >> 0x3e);
        if (uVar11 != 1) {
          if (uVar11 != 2) {
            return;
          }
          *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          func_0x000107c61574(uVar6);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar10 & 0x3fffffffffffffff);
        return;
      }
    }
    else if (iVar3 == 0) {
      lVar4 = 0;
      FUN_1043a7bd4();
      lVar5 = param_1;
      (**(code **)(*(long *)(lVar4 + -8) + 0x30))(param_1,1,lVar4);
      if ((int)lVar5 == 0) {
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
        iVar3 = *(int *)(lVar4 + 0x18);
        lVar5 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar5 + -8) + 8))(param_1 + iVar3,lVar5);
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x1c) + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x20) + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x24) + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x30) + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x34) + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x38) + 8));
        uVar6 = *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x3c) + 8);
        goto LAB_1043a1368;
      }
    }
  }
  return;
}



/* Entry: 1043a1380; end: 1043a360f;  */

undefined8 * FUN_1043a1380(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  long lVar26;
  code *pcVar27;
  
  uVar22 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar22;
  uVar17 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar17;
  uVar24 = param_2[4];
  param_1[4] = uVar24;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar9 = 0;
  func_0x00010439fe28();
  lVar19 = *(long *)(lVar9 + -8);
  pcVar27 = *(code **)(lVar19 + 0x30);
  _swift_bridgeObjectRetain(uVar22);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar24);
  puVar10 = puVar2;
  (*pcVar27)(puVar2,1,lVar9);
  if ((int)puVar10 != 0) {
    lVar9 = 0x1130741a0;
    func_0x0001000285a8(0x1130741a0,&UNK_10dcf41a0);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    goto LAB_1043a19dc;
  }
  puVar10 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,lVar9);
  if ((int)puVar10 == 2) {
    uVar22 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar22;
    _swift_bridgeObjectRetain();
  }
  else if ((int)puVar10 == 1) {
    lVar11 = 0;
    FUN_1043a86b0();
    lVar21 = *(long *)(lVar11 + -8);
    puVar12 = puVar2;
    (**(code **)(lVar21 + 0x30))(puVar2,1,lVar11);
    if ((int)puVar12 == 0) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar2;
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x14));
      puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x14));
      uVar22 = *puVar15;
      puVar12[1] = puVar15[1];
      *puVar12 = uVar22;
      uVar22 = puVar15[2];
      uVar17 = puVar15[3];
      puVar12[2] = uVar22;
      puVar12[3] = uVar17;
      uVar17 = puVar15[4];
      puVar12[4] = uVar17;
      lVar13 = 0;
      FUN_1043aa0ac();
      lVar18 = (long)*(int *)(lVar13 + 0x1c);
      lVar14 = 0;
      __s10Foundation3URLVMa();
      lVar20 = *(long *)(lVar14 + -8);
      pcVar27 = *(code **)(lVar20 + 0x30);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar17);
      lVar23 = (long)puVar15 + lVar18;
      (*pcVar27)(lVar23,1,lVar14);
      if ((int)lVar23 == 0) {
        (**(code **)(lVar20 + 0x10))((long)puVar12 + lVar18,(long)puVar15 + lVar18,lVar14);
        (**(code **)(lVar20 + 0x38))((long)puVar12 + lVar18,0,1,lVar14);
      }
      else {
        lVar23 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy((long)puVar12 + lVar18,(long)puVar15 + lVar18,
                *(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
      }
      puVar3 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar13 + 0x20));
      puVar4 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar13 + 0x20));
      uVar25 = puVar4[1];
      if (uVar25 >> 0x3c < 0xf) {
        uVar22 = *puVar4;
        func_0x00010006c00c(uVar22,uVar25);
        *puVar3 = uVar22;
        puVar3[1] = uVar25;
      }
      else {
        uVar22 = *puVar4;
        puVar3[1] = puVar4[1];
        *puVar3 = uVar22;
      }
      puVar3 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar13 + 0x24));
      puVar4 = (undefined8 *)((long)puVar15 + (long)*(int *)(lVar13 + 0x24));
      uVar25 = puVar4[1];
      if (uVar25 >> 0x3c < 0xf) {
        uVar22 = *puVar4;
        func_0x00010006c00c(uVar22,uVar25);
        *puVar3 = uVar22;
        puVar3[1] = uVar25;
      }
      else {
        uVar22 = *puVar4;
        puVar3[1] = puVar4[1];
        *puVar3 = uVar22;
      }
      *(undefined4 *)((long)puVar12 + (long)*(int *)(lVar13 + 0x28)) =
           *(undefined4 *)((long)puVar15 + (long)*(int *)(lVar13 + 0x28));
      puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x18));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x18));
      lVar23 = *(long *)(lVar13 + -8);
      puVar15 = puVar2;
      (**(code **)(lVar23 + 0x30))(puVar2,1);
      if ((int)puVar15 == 0) {
        uVar22 = *puVar2;
        puVar12[1] = puVar2[1];
        *puVar12 = uVar22;
        uVar22 = puVar2[3];
        puVar12[2] = puVar2[2];
        puVar12[3] = uVar22;
        uVar22 = puVar2[4];
        puVar12[4] = uVar22;
        lVar26 = (long)*(int *)(lVar13 + 0x1c);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar22);
        lVar18 = (long)puVar2 + lVar26;
        (*pcVar27)(lVar18,1,lVar14);
        if ((int)lVar18 == 0) {
          (**(code **)(lVar20 + 0x10))((long)puVar12 + lVar26,(long)puVar2 + lVar26,lVar14);
          (**(code **)(lVar20 + 0x38))((long)puVar12 + lVar26,0,1,lVar14);
        }
        else {
          lVar14 = 0x112d36580;
          func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
          _memcpy((long)puVar12 + lVar26,(long)puVar2 + lVar26,
                  *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
        }
        puVar15 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar13 + 0x20));
        puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x20));
        uVar25 = puVar3[1];
        if (uVar25 >> 0x3c < 0xf) {
          uVar22 = *puVar3;
          func_0x00010006c00c(uVar22,uVar25);
          *puVar15 = uVar22;
          puVar15[1] = uVar25;
        }
        else {
          uVar22 = *puVar3;
          puVar15[1] = puVar3[1];
          *puVar15 = uVar22;
        }
        puVar15 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar13 + 0x24));
        puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x24));
        uVar25 = puVar3[1];
        if (uVar25 >> 0x3c < 0xf) {
          uVar22 = *puVar3;
          func_0x00010006c00c(uVar22,uVar25);
          *puVar15 = uVar22;
          puVar15[1] = uVar25;
        }
        else {
          uVar22 = *puVar3;
          puVar15[1] = puVar3[1];
          *puVar15 = uVar22;
        }
        *(undefined4 *)((long)puVar12 + (long)*(int *)(lVar13 + 0x28)) =
             *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar13 + 0x28));
        (**(code **)(lVar23 + 0x38))(puVar12,0,1);
      }
      else {
        lVar23 = 0x112f8ae50;
        func_0x0001000285a8(0x112f8ae50,&UNK_10dc00160);
        _memcpy(puVar12,puVar2,*(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
      }
      (**(code **)(lVar21 + 0x38))(puVar1,0,1,lVar11);
    }
    else {
      lVar11 = 0x1130740e0;
      puVar16 = &UNK_10dcf4128;
LAB_1043a14e8:
      func_0x0001000285a8(lVar11,puVar16);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
    }
  }
  else {
    lVar11 = 0;
    FUN_1043a7bd4();
    lVar21 = *(long *)(lVar11 + -8);
    puVar12 = puVar2;
    (**(code **)(lVar21 + 0x30))(puVar2,1,lVar11);
    if ((int)puVar12 != 0) {
      lVar11 = 0x1130740d8;
      puVar16 = &UNK_10dcf4120;
      goto LAB_1043a14e8;
    }
    uVar22 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar22;
    uVar17 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar17;
    iVar8 = *(int *)(lVar11 + 0x18);
    lVar23 = 0;
    __s10Foundation3URLVMa();
    pcVar27 = *(code **)(*(long *)(lVar23 + -8) + 0x10);
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar17);
    (*pcVar27)((long)puVar1 + (long)iVar8,(long)puVar2 + (long)iVar8,lVar23);
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x1c));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x1c));
    uVar22 = puVar15[1];
    *puVar12 = *puVar15;
    puVar12[1] = uVar22;
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x20));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x20));
    uVar22 = puVar15[1];
    *puVar12 = *puVar15;
    puVar12[1] = uVar22;
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x24));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x24));
    uVar17 = puVar15[1];
    *puVar12 = *puVar15;
    puVar12[1] = uVar17;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x28)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x28));
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x2c)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x2c));
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x30));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x30));
    uVar24 = puVar15[1];
    *puVar12 = *puVar15;
    puVar12[1] = uVar24;
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x34));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x34));
    uVar5 = puVar15[1];
    *puVar12 = *puVar15;
    puVar12[1] = uVar5;
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x38));
    puVar15 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x38));
    uVar6 = puVar15[1];
    *puVar12 = *puVar15;
    puVar12[1] = uVar6;
    puVar12 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x3c));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x3c));
    uVar7 = puVar2[1];
    *puVar12 = *puVar2;
    puVar12[1] = uVar7;
    pcVar27 = *(code **)(lVar21 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar17);
    _swift_bridgeObjectRetain(uVar24);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    (*pcVar27)(puVar1,0,1,lVar11);
  }
  _swift_storeEnumTagMultiPayload(puVar1,lVar9,(ulong)puVar10 & 0xffffffff);
  (**(code **)(lVar19 + 0x38))(puVar1,0,1,lVar9);
LAB_1043a19dc:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Entry: 1043a3610; end: 1043a3627;  */

void FUN_1043a3610(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1043a3628; end: 1043a3707;  */

void FUN_1043a3628(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_48 = &UNK_10dcf41d0;
  puStack_40 = &UNK_10dcf41d0;
  puStack_38 = &UNK_10dcf41e8;
  lVar1 = 0x13f;
  func_0x0001043a36b4();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_initStructMetadata(param_1,0x100,5,&puStack_48,param_1 + 0x10);
  }
  return;
}



/* Entry: 1043a3708; end: 1043a3a27;  */

long FUN_1043a3708(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043a3a28; end: 1043a3a37; -[_TtC26SCSpotlightNetworkServices26SCSpotlightNetworkServices topicPageRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a3a28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074250));
  return;
}



/* Entry: 1043a3a38; end: 1043a3a47; -[_TtC26SCSpotlightNetworkServices26SCSpotlightNetworkServices singleSnapStoryFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a3a38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074258));
  return;
}



/* Entry: 1043a3a48; end: 1043a3aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a3a48(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113074250) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113074258) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043a3aac; end: 1043a3b23; -[_TtC26SCSpotlightNetworkServices26SCSpotlightNetworkServices initWithTopicPageRequester:singleSnapStoryFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a3aac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113074250) = param_3;
  *(undefined8 *)(param_1 + _DAT_113074258) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1043a3b24; end: 1043a3b83; -[_TtC26SCSpotlightNetworkServices26SCSpotlightNetworkServices init] */

void FUN_1043a3b24(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSpotlightNetworkServices.SCSpotlightNetworkServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043a3b50);
  (*pcVar1)();
}



/* Entry: 1043a3b84; end: 1043a3bbb; -[_TtC26SCSpotlightNetworkServices26SCSpotlightNetworkServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a3b84(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113074250));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113074258));
  return;
}



/* Entry: 1043a3bbc; end: 1043a3bd3;  */

bool FUN_1043a3bbc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1043a3bd4; end: 1043a3c13;  */

void FUN_1043a3bd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113074288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf4240;
  _swift_getWitnessTable(&UNK_10dcf4240,&UNK_110763ce8);
  puRam0000000113074288 = puVar1;
  return;
}



/* Entry: 1043a3c14; end: 1043a3cbf;  */

void FUN_1043a3c14(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1043a3cc0; end: 1043a3d13;  */

void FUN_1043a3cc0(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = *param_2 - 3U < 0xfffffffffffffffe;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = *param_2;
  }
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}



/* Entry: 1043a3d14; end: 1043a3d53;  */

void FUN_1043a3d14(void)

{
  undefined *puVar1;
  
  if (puRam0000000113074290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf4310;
  _swift_getWitnessTable(&UNK_10dcf4310,&UNK_110763d60);
  puRam0000000113074290 = puVar1;
  return;
}



/* Entry: 1043a3d54; end: 1043a3dff;  */

void FUN_1043a3d54(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1043a3e00; end: 1043a3e4b;  */

void FUN_1043a3e00(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1043a3e4c; end: 1043a3f23;  */

void FUN_1043a3e4c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1043a3f24; end: 1043a3f67;  */

void FUN_1043a3f24(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1043a3f68; end: 1043a3fa7;  */

void FUN_1043a3f68(void)

{
  undefined *puVar1;
  
  if (puRam0000000113074298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf43d0;
  _swift_getWitnessTable(&UNK_10dcf43d0,&UNK_110763dd8);
  puRam0000000113074298 = puVar1;
  return;
}



/* Entry: 1043a3fa8; end: 1043a3fb7;  */

undefined1  [16] FUN_1043a3fa8(void)

{
  return ZEXT816(0x110763dd8);
}



/* Entry: 1043a3fb8; end: 1043a3fc3; -[SCSpotlightShareStory compositeStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a3fb8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130742a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130742a0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043a3fc4; end: 1043a3fcf; -[SCSpotlightShareStory displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a3fc4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130742a8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130742a8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043a3fd0; end: 1043a3fdb; -[SCSpotlightShareStory operaDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a3fd0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130742b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130742b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043a3fdc; end: 1043a3feb; -[SCSpotlightShareStory thumbnailMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a3fdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130742b8));
  return;
}



/* Entry: 1043a3fec; end: 1043a40b3; -[SCSpotlightShareStory creationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a3fec(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x0001009f0578(param_1 + _DAT_1138134d0,puVar4);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1043a40b4; end: 1043a40bf; -[SCSpotlightShareStory sharedSubmissionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a40b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138134d8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138134d8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043a40c0; end: 1043a40db; -[SCSpotlightShareStory snaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a40c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1138134e0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1043a4fb4(0,0x112d56e50,&PTR_PTR_1126cc4e0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043a40dc; end: 1043a40eb; -[SCSpotlightShareStory discoverMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a40dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138134e8));
  return;
}



/* Entry: 1043a40ec; end: 1043a40f7; -[SCSpotlightShareStory businessProfileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a40ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138134f0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138134f0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043a40f8; end: 1043a4113; -[SCSpotlightShareStory discoverFeedStorySnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043a40f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1138134f8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1043a4fb4(0,0x112e0fd78,&PTR_PTR_1126cbc90);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043a4114; end: 1043a4173;  */

void FUN_1043a4114(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1043a4fb4(0,param_4,param_5);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}


