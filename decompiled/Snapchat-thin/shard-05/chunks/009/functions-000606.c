/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104338b10; end: 104338b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338b10(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003874b4();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306f6b8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104338b7c; end: 104338b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338b7c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003874b4();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f6b8) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 104338b84; end: 104338bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338b84(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f6b8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104338bd0; end: 104338cdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104338bd0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x000100386340();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306f6a8;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306f6a8,0);
  plVar5 = (long *)(lVar4 + _DAT_11306f698);
  *plVar5 = param_1;
  plVar5[1] = param_2;
  *(undefined8 *)(lVar4 + _DAT_11306f6a0) = param_3;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_bridgeObjectRetain(param_2);
  _objc_retain(param_3);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 104338ce0; end: 104338d7f; -[_TtC22MutualFriendsPageScope30MutualFriendsPageScopeServices buildWithCandidateUserId:uiContainer:delegate:] */

void FUN_104338ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  FUN_104338bd0(param_3,param_2,param_4,param_5);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104338d80; end: 104338dab; -[_TtC22MutualFriendsPageScope30MutualFriendsPageScopeServices init] */

void FUN_104338d80(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MutualFriendsPageScope.MutualFriendsPageScopeServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104338dac);
  (*pcVar1)();
}



/* Entry: 104338dac; end: 104338daf;  */

void FUN_104338dac(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104338db0; end: 104338de3;  */

void FUN_104338db0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104338de4; end: 104338e03; -[_TtC22MutualFriendsPageScope30MutualFriendsPageScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338de4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306f6b8));
  return;
}



/* Entry: 104338e04; end: 104338e27;  */

undefined8 FUN_104338e04(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104338e28; end: 104338e2b;  */

void FUN_104338e28(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104338e2c; end: 104338e4b; -[_TtC29SCManageContactsSettingsScope29SCManageContactsSettingsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338e2c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306f710));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104338e4c; end: 104338e93; -[_TtC29SCManageContactsSettingsScope29SCManageContactsSettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338e4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306f718;
  _swift_beginAccess(param_1 + _DAT_11306f718,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104338e94; end: 104338eeb; -[_TtC29SCManageContactsSettingsScope29SCManageContactsSettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306f718;
  _swift_beginAccess(param_1 + _DAT_11306f718,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104338eec; end: 104338f93; -[_TtC29SCManageContactsSettingsScope29SCManageContactsSettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104338eec(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f710));
  param_1 = param_1 + _DAT_11306f718;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104338f94; end: 104338ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338f94(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10433921c();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306f728) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104338ffc; end: 104339047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104338ffc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f728) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104339048; end: 10433912f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104339048(long param_1,undefined8 param_2)

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
  FUN_1043391a4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306f718;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306f718,0);
  *(long *)(lVar4 + _DAT_11306f710) = param_1;
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



/* Entry: 104339130; end: 1043391a3; -[_TtC29SCManageContactsSettingsScope37SCManageContactsSettingsScopeServices buildWithUIContainer:delegate:] */

void FUN_104339130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104339048(param_3,param_4);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043391a4; end: 1043391c3;  */

void FUN_1043391a4(void)

{
  _objc_opt_self(&PTR_PTR_11299ea50);
  return;
}



/* Entry: 1043391c4; end: 1043391c7;  */

void FUN_1043391c4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043391c8; end: 1043391fb;  */

void FUN_1043391c8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043391fc; end: 10433921b; -[_TtC29SCManageContactsSettingsScope37SCManageContactsSettingsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043391fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306f728));
  return;
}



/* Entry: 10433921c; end: 10433923b;  */

void FUN_10433921c(void)

{
  _objc_opt_self(&PTR_PTR_11299eb18);
  return;
}



/* Entry: 10433923c; end: 10433923f;  */

void FUN_10433923c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104339240; end: 10433925f; -[_TtC19SCAppsFromSnapScope19SCAppsFromSnapScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104339240(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306f780));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104339260; end: 1043392a7; -[_TtC19SCAppsFromSnapScope19SCAppsFromSnapScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104339260(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306f788;
  _swift_beginAccess(param_1 + _DAT_11306f788,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043392a8; end: 1043392ff; -[_TtC19SCAppsFromSnapScope19SCAppsFromSnapScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043392a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306f788;
  _swift_beginAccess(param_1 + _DAT_11306f788,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104339300; end: 1043393a7; -[_TtC19SCAppsFromSnapScope19SCAppsFromSnapScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104339300(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f780));
  param_1 = param_1 + _DAT_11306f788;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043393a8; end: 10433940f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043393a8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104339630();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306f798) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104339410; end: 10433945b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104339410(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f798) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10433945c; end: 104339543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10433945c(long param_1,undefined8 param_2)

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
  FUN_1043395b8();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306f788;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306f788,0);
  *(long *)(lVar4 + _DAT_11306f780) = param_1;
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



/* Entry: 104339544; end: 1043395b7; -[_TtC19SCAppsFromSnapScope27SCAppsFromSnapScopeServices buildWithUIContainer:delegate:] */

void FUN_104339544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10433945c(param_3,param_4);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043395b8; end: 1043395d7;  */

void FUN_1043395b8(void)

{
  _objc_opt_self(&PTR_PTR_11299ebd8);
  return;
}



/* Entry: 1043395d8; end: 1043395db;  */

void FUN_1043395d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043395dc; end: 10433960f;  */

void FUN_1043395dc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104339610; end: 10433962f; -[_TtC19SCAppsFromSnapScope27SCAppsFromSnapScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104339610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306f798));
  return;
}



/* Entry: 104339630; end: 10433964f;  */

void FUN_104339630(void)

{
  _objc_opt_self(&PTR_PTR_11299eca0);
  return;
}



/* Entry: 104339650; end: 104339653;  */

void FUN_104339650(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104339654; end: 10433969b;  */

uint FUN_104339654(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_1043396ac(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10433969c; end: 1043396ab;  */

void FUN_10433969c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1043396ac; end: 1043397db;  */

undefined8 FUN_1043396ac(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)) &&
     ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)))) {
    uVar1 = param_1[4];
    if (((uVar1 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) {
      uVar1 = param_2[7];
      if (param_1[7] == 0) {
        if (uVar1 == 0) {
          return 1;
        }
      }
      else if ((uVar1 != 0) &&
              (((uVar2 = param_1[6], uVar2 == param_2[6] && (param_1[7] == uVar1)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar2 & 1) != 0)))) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 1043397dc; end: 1043398eb;  */

undefined8 * FUN_1043397dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 1043398ec; end: 10433994f;  */

undefined8 * FUN_1043398ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 104339950; end: 1043399f7;  */

int FUN_104339950(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1043399f8; end: 104339a5b;  */

uint FUN_1043399f8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_104339c28(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 104339a5c; end: 104339c27;  */

undefined1  [16] FUN_104339a5c(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  __ss11_StringGutsV4growyySiF(0xb5);
  __sSS6appendyySSF(0xd00000000000002c,0x800000010f1f6c80);
  __sSS6appendyySSF(*unaff_x20,unaff_x20[1]);
  __sSS6appendyySSF(0x74706d6f7270202c,0xec000000203a6449);
  __sSS6appendyySSF(unaff_x20[2],unaff_x20[3]);
  __sSS6appendyySSF(0xd000000000000013,0x800000010f1623c0);
  lVar1 = unaff_x20[7];
  if (lVar1 == 0) {
    uVar2 = 0x6c696e;
    lVar1 = -0x1d00000000000000;
  }
  else {
    uVar2 = unaff_x20[6];
  }
  _swift_bridgeObjectRetain();
  __sSS6appendyySSF(uVar2,lVar1);
  _swift_bridgeObjectRelease(lVar1);
  __sSS6appendyySSF(0xd000000000000018,0x800000010f1f6cb0);
  __sSS6appendyySSF(unaff_x20[8],unaff_x20[9]);
  __sSS6appendyySSF(0xd000000000000013,0x800000010f1f6cd0);
  __sSS6appendyySSF(unaff_x20[10],unaff_x20[0xb]);
  __sSS6appendyySSF(0xd000000000000032,0x800000010f1f6cf0);
  lVar1 = unaff_x20[0xd];
  if (lVar1 == 0) {
    uVar2 = 0x6c696e;
    lVar1 = -0x1d00000000000000;
  }
  else {
    uVar2 = unaff_x20[0xc];
  }
  _swift_bridgeObjectRetain();
  __sSS6appendyySSF(uVar2,lVar1);
  _swift_bridgeObjectRelease(lVar1);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 104339c28; end: 104339ddf;  */

undefined8 FUN_104339c28(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)) &&
     ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)))) {
    uVar1 = param_1[4];
    func_0x000100e25fcc(uVar1,param_1[5],param_2[4],param_2[5]);
    if ((uVar1 & 1) != 0) {
      uVar1 = param_2[7];
      if (param_1[7] == 0) {
        if (uVar1 != 0) {
          return 0;
        }
      }
      else {
        if (uVar1 == 0) {
          return 0;
        }
        uVar2 = param_1[6];
        if (((uVar2 != param_2[6]) || (param_1[7] != uVar1)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) == 0)) {
          return 0;
        }
      }
      uVar1 = param_1[8];
      if (((uVar1 == param_2[8]) && (param_1[9] == param_2[9])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar1 & 1) != 0)) {
        uVar1 = param_1[10];
        if (((uVar1 == param_2[10]) && (param_1[0xb] == param_2[0xb])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar1 & 1) != 0)) {
          uVar1 = param_2[0xd];
          if (param_1[0xd] == 0) {
            if (uVar1 == 0) {
              return 1;
            }
          }
          else if ((uVar1 != 0) &&
                  (((uVar2 = param_1[0xc], uVar2 == param_2[0xc] && (param_1[0xd] == uVar1)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar2 & 1) != 0)))) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 104339de0; end: 104339e7f;  */

undefined8 * FUN_104339de0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  uVar3 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 104339e80; end: 104339f87;  */

undefined8 * FUN_104339e80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[4];
  uVar2 = param_2[5];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[4];
  uVar3 = param_1[5];
  param_1[4] = uVar4;
  param_1[5] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  param_1[6] = param_2[6];
  uVar4 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[8] = param_2[8];
  uVar4 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[10] = param_2[10];
  uVar4 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[0xc] = param_2[0xc];
  uVar4 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Entry: 104339f88; end: 10433a01b;  */

undefined8 * FUN_104339f88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10433a01c; end: 10433a12f;  */

int FUN_10433a01c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10433a130; end: 10433a16f;  */

void FUN_10433a130(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f7f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcec7e8;
  _swift_getWitnessTable(&UNK_10dcec7e8,&UNK_11075b978);
  puRam000000011306f7f0 = puVar1;
  return;
}



/* Entry: 10433a170; end: 10433a173;  */

void FUN_10433a170(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcec820;
  _swift_getWitnessTable(&UNK_10dcec820,&UNK_11075b978);
  puRam000000011306f7f8 = puVar1;
  return;
}



/* Entry: 10433a174; end: 10433a1b3;  */

void FUN_10433a174(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcec820;
  _swift_getWitnessTable(&UNK_10dcec820,&UNK_11075b978);
  puRam000000011306f7f8 = puVar1;
  return;
}



/* Entry: 10433a1b4; end: 10433a1df;  */

void FUN_10433a1b4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 10433a1e0; end: 10433a21f;  */

void FUN_10433a1e0(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcec8e8;
  _swift_getWitnessTable(&UNK_10dcec8e8,&UNK_11075b978);
  puRam000000011306f800 = puVar1;
  return;
}



/* Entry: 10433a220; end: 10433a223;  */

void FUN_10433a220(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcec910;
  _swift_getWitnessTable(&UNK_10dcec910,&UNK_11075b978);
  puRam000000011306f808 = puVar1;
  return;
}



/* Entry: 10433a224; end: 10433a263;  */

void FUN_10433a224(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcec910;
  _swift_getWitnessTable(&UNK_10dcec910,&UNK_11075b978);
  puRam000000011306f808 = puVar1;
  return;
}



/* Entry: 10433a264; end: 10433a3e3;  */

void FUN_10433a264(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10433a3e4; end: 10433a48b;  */

void FUN_10433a3e4(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_10433a478;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_10433a478:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 10433a48c; end: 10433a4bf;  */

undefined1  [16] FUN_10433a48c(void)

{
  return ZEXT816(0x11075b978);
}



/* Entry: 10433a4c0; end: 10433a5fb;  */

void FUN_10433a4c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,ulong param_6,ulong param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_5 == 0) {
    param_4 = 0;
  }
  else {
    uVar1 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar1 = param_5 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(param_5);
      param_4 = 0;
      param_5 = 0;
    }
  }
  if (param_7 != 0) {
    uVar1 = param_6 & 0xffffffffffff;
    if ((param_7 & 0x2000000000000000) != 0) {
      uVar1 = param_7 >> 0x38 & 0xf;
    }
    uVar2 = param_4;
    if (uVar1 != 0) goto LAB_10433a5b8;
    _swift_bridgeObjectRelease(param_7,param_3,param_4);
  }
  param_6 = 0;
  param_7 = 0;
  uVar2 = 0;
  if (param_5 != 0) {
    uVar2 = param_4;
  }
  if (param_5 < 2) {
    param_5 = 1;
  }
LAB_10433a5b8:
  FUN_10433b360(&uStack_b0,param_2,param_3,uVar2,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11);
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[9] = uStack_68;
  param_1[8] = uStack_70;
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  return;
}



/* Entry: 10433a5fc; end: 10433a647;  */

void FUN_10433a5fc(undefined8 *param_1)

{
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
  
  FUN_10433b360(&uStack_70);
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  param_1[9] = uStack_28;
  param_1[8] = uStack_30;
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  return;
}



/* Entry: 10433a648; end: 10433b0bf;  */

void FUN_10433a648(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_108 [80];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = param_2;
  uVar3 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar5 = uVar3;
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  if (lVar4 == 0) {
LAB_10433a6ec:
    lVar4 = 0;
    uVar5 = 0;
  }
  else {
    lVar6 = lVar4;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    uVar7 = uVar5;
    if (lVar6 == 0) goto LAB_10433a6ec;
    lVar4 = lVar6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar6);
    uVar7 = uVar5;
    _objc_release(lVar6);
  }
  lVar6 = param_2;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar2 = lVar6;
    func_0x00010c11fa40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if (lVar2 != 0) {
      lVar6 = lVar2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar2);
      _objc_release(lVar2);
      goto LAB_10433a74c;
    }
  }
  lVar6 = 0;
  uVar7 = 0;
LAB_10433a74c:
  lVar2 = param_2;
  func_0x00010c27dd80(param_2);
  FUN_10433b360(&uStack_b8,lVar1,uVar3,lVar4,uVar5,lVar6,uVar7,lVar2,0,param_3,param_4);
  func_0x000102e17b28(&uStack_b8,auStack_108);
  _objc_release(param_2);
  if (lStack_b0 != 0) {
    FUN_10433b740(&uStack_b8,0x112e55fd0,&UNK_10da58ae0);
  }
  param_1[5] = uStack_90;
  param_1[4] = uStack_98;
  param_1[7] = uStack_80;
  param_1[6] = uStack_88;
  param_1[9] = uStack_70;
  param_1[8] = uStack_78;
  param_1[1] = lStack_b0;
  *param_1 = uStack_b8;
  param_1[3] = uStack_a0;
  param_1[2] = uStack_a8;
  return;
}



/* Entry: 10433b0c0; end: 10433b117;  */

uint FUN_10433b0c0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_10433b118(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10433b118; end: 10433b287;  */

undefined8 FUN_10433b118(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *param_1;
  if ((uVar4 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar4 & 1) != 0)) {
    uVar4 = param_1[3];
    uVar7 = param_2[3];
    if (uVar4 == 1) {
      if (uVar7 != 1) {
        return 0;
      }
    }
    else {
      if (uVar7 == 1) {
        return 0;
      }
      uVar6 = param_1[4];
      uVar2 = param_1[5];
      uVar1 = param_2[4];
      uVar3 = param_2[5];
      if (uVar4 == 0) {
        if (uVar7 != 0) {
          return 0;
        }
      }
      else {
        if (uVar7 == 0) {
          return 0;
        }
        uVar5 = param_1[2];
        if (((uVar5 != param_2[2]) || (uVar4 != uVar7)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar5 & 1) == 0)) {
          return 0;
        }
      }
      if (uVar2 == 0) {
        if (uVar3 != 0) {
          return 0;
        }
      }
      else {
        if (uVar3 == 0) {
          return 0;
        }
        if (((uVar6 != uVar1) || (uVar2 != uVar3)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar6,uVar2,uVar1,uVar3,0), (uVar6 & 1) == 0)) {
          return 0;
        }
      }
    }
    if ((char)param_1[7] == '\x01') {
      if ((char)param_2[7] != '\x01') {
        return 0;
      }
    }
    else {
      if ((char)param_2[7] == '\x01') {
        return 0;
      }
      if (param_1[6] != param_2[6]) {
        return 0;
      }
    }
    uVar4 = param_2[9];
    if (param_1[9] == 0) {
      if (uVar4 == 0) {
        return 1;
      }
    }
    else if ((uVar4 != 0) &&
            (((uVar7 = param_1[8], uVar7 == param_2[8] && (param_1[9] == uVar4)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar7 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10433b288; end: 10433b35f;  */

undefined8
FUN_10433b288(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
             ulong param_7,long param_8)

{
  if (param_2 == 1) {
    if (param_6 == 1) {
      return 1;
    }
  }
  else if (param_6 != 1) {
    if (param_2 == 0) {
      if (param_6 != 0) {
        return 0;
      }
    }
    else {
      if (param_6 == 0) {
        return 0;
      }
      if (((param_1 != param_5) || (param_2 != param_6)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
        return 0;
      }
    }
    if (param_4 == 0) {
      if (param_8 == 0) {
        return 1;
      }
    }
    else if ((param_8 != 0) &&
            (((param_3 == param_7 && (param_4 == param_8)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (param_3,param_4,param_7,param_8,0), (param_3 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10433b360; end: 10433b53b;  */

void FUN_10433b360(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,ulong param_6,ulong param_7,long param_8,byte param_9,ulong param_10
                  ,ulong param_11)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_11 == 0) {
    param_10 = 0;
  }
  else {
    uVar3 = param_10 & 0xffffffffffff;
    if ((param_11 & 0x2000000000000000) != 0) {
      uVar3 = param_11 >> 0x38 & 0xf;
    }
    if (uVar3 == 0) {
      _swift_bridgeObjectRelease(param_11);
      param_10 = 0;
      param_11 = 0;
    }
  }
  uVar3 = 0;
  uVar2 = param_5;
  if (param_5 == 0) {
joined_r0x00010433b4d4:
    if (param_7 == 0) {
      func_0x000102e17db8(param_4,param_5,param_6,0);
      param_6 = 0;
    }
    else {
      _swift_bridgeObjectRetain(param_7);
      func_0x000102e17db8(param_4,param_5,param_6,param_7);
      uVar1 = param_6 & 0xffffffffffff;
      if ((param_7 & 0x2000000000000000) != 0) {
        uVar1 = param_7 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        _swift_bridgeObjectRelease(param_7);
        param_6 = 0;
        param_7 = 0;
      }
    }
  }
  else {
    if (param_5 != 1) {
      uVar3 = param_4 & 0xffffffffffff;
      if ((param_5 & 0x2000000000000000) != 0) {
        uVar3 = param_5 >> 0x38 & 0xf;
      }
      if (uVar3 == 0) {
        uVar3 = 0;
        uVar2 = 0;
      }
      else {
        _swift_bridgeObjectRetain(param_5);
        uVar3 = param_4;
      }
      goto joined_r0x00010433b4d4;
    }
    if (param_11 == 0 && (param_9 == 1 || param_8 == 0)) {
      _swift_bridgeObjectRelease(param_3);
      param_3 = 0;
      param_2 = 0;
      uVar3 = 0;
      uVar2 = 0;
      param_6 = 0;
      param_7 = 0;
      param_8 = 0;
      uVar1 = 0;
      param_10 = 0;
      goto LAB_10433b508;
    }
    uVar3 = 0;
    param_6 = 0;
    param_7 = 0;
    uVar2 = 1;
  }
  uVar1 = (ulong)param_9;
  if (param_9 == 1 || param_8 == 0) {
    uVar1 = 1;
  }
LAB_10433b508:
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  param_1[7] = uVar1;
  param_1[8] = param_10;
  param_1[9] = param_11;
  return;
}



/* Entry: 10433b53c; end: 10433b57b;  */

void FUN_10433b53c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x18) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 10433b57c; end: 10433b73f;  */

undefined8 * FUN_10433b57c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  lVar1 = param_2[3];
  _swift_bridgeObjectRetain();
  if (lVar1 == 1) {
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    uVar2 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar2;
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(uVar2);
  }
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10433b740; end: 10433b82b;  */

undefined8 FUN_10433b740(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10433b82c; end: 10433b8d7;  */

int FUN_10433b82c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10433b8d8; end: 10433b983;  */

void FUN_10433b8d8(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    return;
  }
  _swift_bridgeObjectRelease();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10433b984; end: 10433ba8f;  */

undefined8 * FUN_10433b984(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = param_1[1];
  uVar1 = uVar5;
  if (0xfffffffe < uVar5) {
    uVar1 = 0xffffffff;
  }
  uVar4 = param_2[1];
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  iVar2 = (int)uVar4 + -1;
  if ((int)uVar1 + -1 < 0) {
    if (iVar2 < 0) {
      *param_1 = *param_2;
      uVar3 = param_2[1];
      param_1[1] = uVar3;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRelease(uVar5);
      param_1[2] = param_2[2];
      uVar3 = param_1[3];
      param_1[3] = param_2[3];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar3);
    }
    else {
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(param_1[3]);
      uVar3 = *param_2;
      uVar7 = param_2[3];
      uVar6 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      param_1[3] = uVar7;
      param_1[2] = uVar6;
    }
  }
  else if (iVar2 < 0) {
    *param_1 = *param_2;
    uVar3 = param_2[1];
    param_1[1] = uVar3;
    param_1[2] = param_2[2];
    uVar6 = param_2[3];
    param_1[3] = uVar6;
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar6);
  }
  else {
    uVar3 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
  }
  return param_1;
}



/* Entry: 10433ba90; end: 10433bb33;  */

undefined8 * FUN_10433ba90(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = param_1[1];
  uVar1 = uVar3;
  if (0xfffffffe < uVar3) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar1 + -1 < 0) {
    uVar4 = param_2[1];
    uVar1 = uVar4;
    if (0xfffffffe < uVar4) {
      uVar1 = 0xffffffff;
    }
    if ((int)uVar1 + -1 < 0) {
      *param_1 = *param_2;
      param_1[1] = uVar4;
      _swift_bridgeObjectRelease(uVar3);
      uVar5 = param_2[3];
      uVar2 = param_1[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar5;
      _swift_bridgeObjectRelease(uVar2);
    }
    else {
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(param_1[3]);
      uVar5 = *param_2;
      uVar6 = param_2[3];
      uVar2 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar5;
      param_1[3] = uVar6;
      param_1[2] = uVar2;
    }
  }
  else {
    uVar5 = *param_2;
    uVar6 = param_2[3];
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_1[3] = uVar6;
    param_1[2] = uVar2;
  }
  return param_1;
}



/* Entry: 10433bb34; end: 10433bc5f;  */

uint FUN_10433bb34(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar3 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 10433bc60; end: 10433bcd3;  */

void FUN_10433bc60(void)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 10433bcd4; end: 10433bceb;  */

bool FUN_10433bcd4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10433bcec; end: 10433bd2b;  */

void FUN_10433bcec(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f8b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceca50;
  _swift_getWitnessTable(&UNK_10dceca50,&UNK_11075bbe0);
  puRam000000011306f8b8 = puVar1;
  return;
}



/* Entry: 10433bd2c; end: 10433bdd7;  */

void FUN_10433bd2c(void)

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



/* Entry: 10433bdd8; end: 10433be0f;  */

void FUN_10433bdd8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10433be10; end: 10433be93;  */

void FUN_10433be10(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10433be94; end: 10433bf33;  */

void FUN_10433be94(void)

{
  func_0x0001000b44c0(0,0xf000000000000000);
  func_0x000100de78a0(0,0xf000000000000000);
  _swift_bridgeObjectRelease(0);
  func_0x0001000b44c0(0,0xf000000000000000);
  uRam00000001138133d8 = 0;
  uRam00000001138133e0 = 0;
  uRam00000001138133e8 = 0;
  uRam00000001138133f8 = 0xf000000000000000;
  uRam00000001138133f0 = 0;
  uRam0000000113813400 = 0;
  return;
}



/* Entry: 10433bf34; end: 10433bf37;  */

void FUN_10433bf34(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f8c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcecb50;
  _swift_getWitnessTable(&UNK_10dcecb50,&UNK_11075bd58);
  puRam000000011306f8c8 = puVar1;
  return;
}



/* Entry: 10433bf38; end: 10433bf77;  */

void FUN_10433bf38(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f8c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcecb50;
  _swift_getWitnessTable(&UNK_10dcecb50,&UNK_11075bd58);
  puRam000000011306f8c8 = puVar1;
  return;
}



/* Entry: 10433bf78; end: 10433bf7b;  */

void FUN_10433bf78(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f8d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcecbb8;
  _swift_getWitnessTable(&UNK_10dcecbb8,&UNK_11075bde8);
  puRam000000011306f8d0 = puVar1;
  return;
}



/* Entry: 10433bf7c; end: 10433bfbb;  */

void FUN_10433bf7c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f8d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcecbb8;
  _swift_getWitnessTable(&UNK_10dcecbb8,&UNK_11075bde8);
  puRam000000011306f8d0 = puVar1;
  return;
}



/* Entry: 10433bfbc; end: 10433bfbf;  */

void FUN_10433bfbc(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f8d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcecc20;
  _swift_getWitnessTable(&UNK_10dcecc20,&UNK_11075be78);
  puRam000000011306f8d8 = puVar1;
  return;
}



/* Entry: 10433bfc0; end: 10433bfff;  */

void FUN_10433bfc0(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f8d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcecc20;
  _swift_getWitnessTable(&UNK_10dcecc20,&UNK_11075be78);
  puRam000000011306f8d8 = puVar1;
  return;
}



/* Entry: 10433c000; end: 10433c06f;  */

long FUN_10433c000(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10433c070; end: 10433c1c7;  */

undefined2 * FUN_10433c070(undefined2 *param_1,undefined2 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = *(ulong *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    func_0x00010006c00c(uVar2,uVar1);
    *(undefined8 *)(param_1 + 0xc) = uVar2;
    *(ulong *)(param_1 + 0x10) = uVar1;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xc) = uVar2;
  }
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  return param_1;
}



/* Entry: 10433c1c8; end: 10433c257;  */

undefined2 * FUN_10433c1c8(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  if (*(ulong *)(param_1 + 0x10) >> 0x3c < 0xf) {
    uVar2 = *(ulong *)(param_2 + 0x10);
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      *(ulong *)(param_1 + 0x10) = uVar2;
      func_0x00010006c090(uVar1);
      goto LAB_10433c240;
    }
    func_0x0001006e5814(param_1 + 0xc);
  }
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
LAB_10433c240:
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  return param_1;
}



/* Entry: 10433c258; end: 10433c637;  */

int FUN_10433c258(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10433c638; end: 10433c683; -[_TtC17PlayGamesServices26PlayGamesLensInfoCardRelay init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433c638(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_1 + _DAT_11306f8e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10433c684; end: 10433c733; -[_TtC17PlayGamesServices26PlayGamesLensInfoCardRelay onPresent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433c684(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_11306f8e0);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    pcStack_68 = FUN_10433c744;
    puStack_60 = &UNK_11075bee8;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10433c734; end: 10433c743;  */

void FUN_10433c734(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10433c744; end: 10433c7bb;  */

void FUN_10433c744(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  _objc_retain(param_2);
  _objc_retain(param_3);
  (*pcVar1)(param_2,param_3);
  _swift_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10433c7bc; end: 10433c877; -[_TtC17PlayGamesServices26PlayGamesLensInfoCardRelay setOnPresent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433c7bc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  __Block_copy();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_11075bed0;
    _swift_allocObject(&UNK_11075bed0,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_10433c9bc;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11306f8e0);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  _objc_retain(param_1);
  FUN_10433c878(uVar2,uVar3);
  _objc_release(param_1);
  return;
}



/* Entry: 10433c878; end: 10433c887;  */

void FUN_10433c878(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}


