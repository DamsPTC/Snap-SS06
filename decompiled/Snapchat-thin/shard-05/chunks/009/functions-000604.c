/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104332db8; end: 104332f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104332db8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  FUN_1043330d0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306efa8) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306efb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306efb8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306efc0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306efc8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306efd0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306efd8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306efe0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306efe8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306eff0) = 0;
  *(long *)(lVar4 + _DAT_11306eff8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306f000) = param_2;
  *(undefined8 *)(lVar4 + _DAT_11306f008) = param_3;
  *(undefined8 *)(lVar4 + _DAT_11306f010) = param_4;
  *(undefined8 *)(lVar4 + _DAT_11306f018) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f020) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f028) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f030) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f038) = 0;
  *(undefined1 *)(lVar4 + _DAT_11306f040) = 2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 104332f38; end: 1043330cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104332f38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  FUN_1043330d0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11306efa8) = 3;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306efb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306efb8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306efc0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306efc8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306efd0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306efd8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306efe0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306efe8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_11306eff0) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306eff8) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f000) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f008) = 0;
  *(undefined8 *)(lVar4 + _DAT_11306f010) = 0;
  *(long *)(lVar4 + _DAT_11306f018) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306f020) = param_2;
  *(undefined8 *)(lVar4 + _DAT_11306f028) = param_3;
  *(undefined8 *)(lVar4 + _DAT_11306f030) = param_4;
  *(undefined8 *)(lVar4 + _DAT_11306f038) = param_5;
  *(undefined1 *)(lVar4 + _DAT_11306f040) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 1043330d0; end: 1043330ef;  */

void FUN_1043330d0(void)

{
  _objc_opt_self(&PTR_PTR_11299d448);
  return;
}



/* Entry: 1043330f0; end: 104333257;  */

int FUN_1043330f0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10433316c;
        goto LAB_104333150;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104333150:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10433316c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104333258; end: 104333297;  */

void FUN_104333258(void)

{
  undefined *puVar1;
  
  if (puRam000000011306f070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dceb800;
  _swift_getWitnessTable(&UNK_10dceb800,&UNK_11075a878);
  puRam000000011306f070 = puVar1;
  return;
}



/* Entry: 104333298; end: 10433329f;  */

void FUN_104333298(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1043332a0; end: 1043332c7;  */

void FUN_1043332a0(void)

{
  FUN_1043325c8();
  return;
}



/* Entry: 1043332c8; end: 10433330b;  */

void FUN_1043332c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001043332e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))
            (*(long *)(unaff_x20 + 0x10),param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10433330c; end: 10433347b;  */

void FUN_10433330c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10433347c; end: 10433349b; -[SpotlightWidgetScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433347c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306f078));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10433349c; end: 1043334bb; -[SpotlightWidgetScope previewDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433349c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306f080));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043334bc; end: 1043334cb; -[SpotlightWidgetScope postingStatusObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043334bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306f090));
  return;
}



/* Entry: 1043334cc; end: 104333513; -[SpotlightWidgetScope dismissListener] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043334cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306f098;
  _swift_beginAccess(param_1 + _DAT_11306f098,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104333514; end: 10433356b; -[SpotlightWidgetScope setDismissListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104333514(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306f098;
  _swift_beginAccess(param_1 + _DAT_11306f098,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10433356c; end: 104333597; -[SpotlightWidgetScope init] */

void FUN_10433356c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SpotlightWidgetScope.SpotlightWidgetScope",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104333598);
  (*pcVar1)();
}



/* Entry: 104333598; end: 10433366f; -[SpotlightWidgetScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104333598(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f078));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f080));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f088));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f090));
  param_1 = param_1 + _DAT_11306f098;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104333670; end: 1043337b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104333670(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100337b24();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_11306f098;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11306f098,0);
  *(long *)(lVar5 + _DAT_11306f078) = param_1;
  *(undefined8 *)(lVar5 + _DAT_11306f080) = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306f088);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(lVar5 + _DAT_11306f090) = param_5;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_6);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_5);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 1043337b8; end: 1043337e3; -[_TtC20SpotlightWidgetScope28SpotlightWidgetScopeServices init] */

void FUN_1043337b8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SpotlightWidgetScope.SpotlightWidgetScopeServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043337e4);
  (*pcVar1)();
}



/* Entry: 1043337e4; end: 1043337e7;  */

void FUN_1043337e4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043337e8; end: 10433381b;  */

void FUN_1043337e8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10433381c; end: 10433382b;  */

undefined1  [16] FUN_10433381c(void)

{
  return ZEXT816(0x11075aa10);
}



/* Entry: 10433382c; end: 10433383f; -[_TtC20SpotlightWidgetScope28SpotlightWidgetScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433382c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306f0a8));
  return;
}



/* Entry: 104333840; end: 10433384f; -[_TtC26SCCustomStorySettingsScope26SCCustomStorySettingsScope customStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104333840(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306f100));
  return;
}



/* Entry: 104333850; end: 10433386f; -[_TtC26SCCustomStorySettingsScope26SCCustomStorySettingsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104333850(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306f108));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104333870; end: 1043338fb; -[_TtC26SCCustomStorySettingsScope26SCCustomStorySettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104333870(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306f110;
  _swift_beginAccess(param_1 + _DAT_11306f110,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043338fc; end: 104333a9f; -[_TtC26SCCustomStorySettingsScope26SCCustomStorySettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043338fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306f110;
  _swift_beginAccess(param_1 + _DAT_11306f110,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104333aa0; end: 104333b1b; -[_TtC26SCCustomStorySettingsScope26SCCustomStorySettingsScope init] */

void FUN_104333aa0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCustomStorySettingsScope.SCCustomStorySettingsScope",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104333acc);
  (*pcVar1)();
}



/* Entry: 104333b1c; end: 104333bd3; -[_TtC26SCCustomStorySettingsScope26SCCustomStorySettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104333b1c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f100));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f108));
  param_1 = param_1 + _DAT_11306f110;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104333bd4; end: 104333c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104333bd4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104333eb0();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306f120) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104333c40; end: 104333c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104333c40(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104333eb0();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f120) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 104333c48; end: 104333c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104333c48(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f120) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104333c94; end: 104333d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104333c94(long param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x000104333afc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306f110;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306f110,0);
  *(long *)(lVar4 + _DAT_11306f100) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306f108) = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_2);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 104333d9c; end: 104333e2f; -[_TtC26SCCustomStorySettingsScope34SCCustomStorySettingsScopeServices buildWithCustomStory:uiContainer:delegate:] */

void FUN_104333d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104333c94(param_3,param_4,param_5);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104333e30; end: 104333e8f; -[_TtC26SCCustomStorySettingsScope34SCCustomStorySettingsScopeServices init] */

void FUN_104333e30(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCustomStorySettingsScope.SCCustomStorySettingsScopeServices",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104333e5c);
  (*pcVar1)();
}



/* Entry: 104333e90; end: 104333eaf; -[_TtC26SCCustomStorySettingsScope34SCCustomStorySettingsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104333e90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306f120));
  return;
}



/* Entry: 104333eb0; end: 104333ecf;  */

void FUN_104333eb0(void)

{
  _objc_opt_self(&PTR_PTR_11299d828);
  return;
}



/* Entry: 104333ed0; end: 104333f27;  */

void FUN_104333ed0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11075ab68;
  if (lRam000000011306f178 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam000000011306f178 = param_1;
  }
  return;
}



/* Entry: 104333f28; end: 104333f47; -[_TtC22SCCustomStoryMenuScope22SCCustomStoryMenuScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104333f28(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306f180));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104333f48; end: 104333f5f; -[_TtC22SCCustomStoryMenuScope22SCCustomStoryMenuScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104333f48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306f188;
  _swift_beginAccess(param_1 + _DAT_11306f188,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104333f60; end: 104333f6b; -[_TtC22SCCustomStoryMenuScope22SCCustomStoryMenuScope setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104333f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306f188;
  _swift_beginAccess(param_1 + _DAT_11306f188,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104333f6c; end: 1043340b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104333f6c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306f188;
  _swift_beginAccess(unaff_x20 + _DAT_11306f188,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 1043340b8; end: 104334103; -[_TtC22SCCustomStoryMenuScope22SCCustomStoryMenuScope publicationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043340b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306f190);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306f190))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104334104; end: 104334113; -[_TtC22SCCustomStoryMenuScope22SCCustomStoryMenuScope options] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104334104(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306f198);
}



/* Entry: 104334114; end: 104334123; -[_TtC22SCCustomStoryMenuScope22SCCustomStoryMenuScope sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104334114(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306f1a0);
}



/* Entry: 104334124; end: 10433412f; -[_TtC22SCCustomStoryMenuScope22SCCustomStoryMenuScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104334124(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306f1a8;
  _swift_beginAccess(param_1 + _DAT_11306f1a8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104334130; end: 104334173;  */

void FUN_104334130(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104334174; end: 10433417f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104334174(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306f1a8;
  _swift_beginAccess(unaff_x20 + _DAT_11306f1a8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Entry: 104334180; end: 1043341bf;  */

void FUN_104334180(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Entry: 1043341c0; end: 1043341cb; -[_TtC22SCCustomStoryMenuScope22SCCustomStoryMenuScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043341c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306f1a8;
  _swift_beginAccess(param_1 + _DAT_11306f1a8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043341cc; end: 10433436b;  */

void FUN_1043341cc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10433436c; end: 1043343c7; -[_TtC22SCCustomStoryMenuScope22SCCustomStoryMenuScope init] */

void FUN_10433436c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCustomStoryMenuScope.SCCustomStoryMenuScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104334398);
  (*pcVar1)();
}



/* Entry: 1043343c8; end: 104334447; -[_TtC22SCCustomStoryMenuScope22SCCustomStoryMenuScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043343c8(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f180));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11306f188);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306f190 + 8));
  param_1 = param_1 + _DAT_11306f1a8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104334448; end: 1043344b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104334448(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100365a80();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306f1e0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043344b4; end: 1043344bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043344b4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100365a80();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f1e0) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1043344bc; end: 104334507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043344bc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f1e0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104334508; end: 104334697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104334508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  func_0x000100364b04();
  lVar6 = lVar5;
  _objc_allocWithZone();
  lVar3 = _DAT_11306f188;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_11306f188,0);
  lVar4 = _DAT_11306f1a8;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_11306f1a8,0);
  *(undefined8 *)(lVar6 + _DAT_11306f180) = param_1;
  _swift_beginAccess(lVar6 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar3,param_2);
  puVar1 = (undefined8 *)(lVar6 + _DAT_11306f190);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(lVar6 + _DAT_11306f198) = param_5;
  *(undefined8 *)(lVar6 + _DAT_11306f1a0) = param_6;
  _swift_beginAccess(lVar6 + lVar4,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar4,param_7);
  puVar2 = PTR_s_init_1125d9248;
  lStack_a0 = lVar6;
  lStack_98 = lVar5;
  _swift_unknownObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_4);
  plVar7 = &lStack_a0;
  _objc_msgSendSuper2(plVar7,puVar2);
  aplStack_b8[0] = plVar7;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar7;
}



/* Entry: 104334698; end: 104334773; -[_TtC22SCCustomStoryMenuScope30SCCustomStoryMenuScopeServices buildWithUiContainer:presentingViewController:publicationId:options:sourcePageType:delegate:] */

void FUN_104334698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_8);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_104334508(param_3,param_4,param_5,param_2,param_6,param_7,param_8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_8);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104334774; end: 1043347d3; -[_TtC22SCCustomStoryMenuScope30SCCustomStoryMenuScopeServices init] */

void FUN_104334774(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCustomStoryMenuScope.SCCustomStoryMenuScopeServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043347a0);
  (*pcVar1)();
}



/* Entry: 1043347d4; end: 104334803; -[_TtC22SCCustomStoryMenuScope30SCCustomStoryMenuScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043347d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306f1e0));
  return;
}



/* Entry: 104334804; end: 104334833;  */

void FUN_104334804(void)

{
  func_0x0001003515e4();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104334834; end: 10433489f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104334834(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010035c088();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306f258) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043348a0; end: 1043348a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043348a0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010035c088();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f258) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1043348a8; end: 1043348f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043348a8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f258) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043348f4; end: 104334a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043348f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  func_0x0001003515e4();
  _objc_allocWithZone();
  lVar3 = _DAT_11306f188;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11306f188,0);
  lVar4 = _DAT_11306f1a8;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11306f1a8,0);
  *(undefined8 *)(lVar5 + _DAT_11306f180) = param_1;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_2);
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306f190);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(lVar5 + _DAT_11306f198) = param_5;
  *(undefined8 *)(lVar5 + _DAT_11306f1a0) = param_6;
  _swift_beginAccess(lVar5 + lVar4,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar4,param_7);
  uVar6 = 0;
  func_0x000100364b04();
  puVar2 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  uStack_98 = uVar6;
  _swift_unknownObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_4);
  plVar7 = &lStack_a0;
  _objc_msgSendSuper2(plVar7,puVar2);
  aplStack_b8[0] = plVar7;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar7;
}



/* Entry: 104334a8c; end: 104334b67; -[_TtC22SCCustomStoryMenuScope30SCSharedStoryMenuScopeServices buildWithUiContainer:presentingViewController:publicationId:options:sourcePageType:delegate:] */

void FUN_104334a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_8);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_1043348f4(param_3,param_4,param_5,param_2,param_6,param_7,param_8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_8);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104334b68; end: 104334bc7; -[_TtC22SCCustomStoryMenuScope30SCSharedStoryMenuScopeServices init] */

void FUN_104334b68(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCustomStoryMenuScope.SCSharedStoryMenuScopeServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104334b94);
  (*pcVar1)();
}



/* Entry: 104334bc8; end: 104334bf7; -[_TtC22SCCustomStoryMenuScope30SCSharedStoryMenuScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104334bc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306f258));
  return;
}



/* Entry: 104334bf8; end: 104334c07; -[_TtC23SCLeaveCustomStoryScope23SCLeaveCustomStoryScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104334bf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306f2a0));
  return;
}



/* Entry: 104334c08; end: 104334c17; -[_TtC23SCLeaveCustomStoryScope23SCLeaveCustomStoryScope customStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104334c08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306f2a8));
  return;
}



/* Entry: 104334c18; end: 104334ca3; -[_TtC23SCLeaveCustomStoryScope23SCLeaveCustomStoryScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104334c18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306f2b0;
  _swift_beginAccess(param_1 + _DAT_11306f2b0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104334ca4; end: 104334e47; -[_TtC23SCLeaveCustomStoryScope23SCLeaveCustomStoryScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104334ca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306f2b0;
  _swift_beginAccess(param_1 + _DAT_11306f2b0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104334e48; end: 104334f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104334e48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_11306f2b0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11306f2b0,0);
  *(undefined8 *)(unaff_x20 + _DAT_11306f2a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306f2a8) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_retain(param_2);
  puVar3 = auStack_68;
  _objc_msgSendSuper2(puVar3,puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  return puVar3;
}



/* Entry: 104334f2c; end: 104334fe3; -[_TtC23SCLeaveCustomStoryScope23SCLeaveCustomStoryScope initWithPresentingViewController:customStory:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104334f2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_11306f2b0;
  _swift_unknownObjectWeakInit(param_1 + _DAT_11306f2b0,0);
  *(undefined8 *)(param_1 + _DAT_11306f2a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306f2a8) = param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_58,1,0);
  lVar2 = param_1 + lVar2;
  _swift_unknownObjectWeakAssign(lVar2,param_5);
  func_0x0001002c5050();
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_68,puVar1);
  return;
}



/* Entry: 104334fe4; end: 10433503f; -[_TtC23SCLeaveCustomStoryScope23SCLeaveCustomStoryScope init] */

void FUN_104334fe4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLeaveCustomStoryScope.SCLeaveCustomStoryScope",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104335010);
  (*pcVar1)();
}



/* Entry: 104335040; end: 1043350ab; -[_TtC23SCLeaveCustomStoryScope23SCLeaveCustomStoryScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104335040(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f2a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f2a8));
  param_1 = param_1 + _DAT_11306f2b0;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1043350ac; end: 104335117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043350ac(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002c6388();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306f2c0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104335118; end: 10433511f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104335118(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002c6388();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f2c0) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 104335120; end: 10433516b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104335120(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f2c0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10433516c; end: 104335273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10433516c(long param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x0001002c5050();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306f2b0;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306f2b0,0);
  *(long *)(lVar4 + _DAT_11306f2a0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_11306f2a8) = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 104335274; end: 10433530b; -[_TtC23SCLeaveCustomStoryScope31SCLeaveCustomStoryScopeServices buildWithPresentingViewController:customStory:delegate:] */

void FUN_104335274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10433516c(param_3,param_4,param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10433530c; end: 10433536b; -[_TtC23SCLeaveCustomStoryScope31SCLeaveCustomStoryScopeServices init] */

void FUN_10433530c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLeaveCustomStoryScope.SCLeaveCustomStoryScopeServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104335338);
  (*pcVar1)();
}



/* Entry: 10433536c; end: 10433538b; -[_TtC23SCLeaveCustomStoryScope31SCLeaveCustomStoryScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433536c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306f2c0));
  return;
}



/* Entry: 10433538c; end: 10433539b; -[_TtC41SharedStoryProfileSectionSaberPluginScope41SharedStoryProfileSectionSaberPluginScope customStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433538c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306f318));
  return;
}



/* Entry: 10433539c; end: 104335433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10433539c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f318) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104335434; end: 104335467;  */

void FUN_104335434(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104335468; end: 104335477; -[_TtC41SharedStoryProfileSectionSaberPluginScope41SharedStoryProfileSectionSaberPluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104335468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306f318));
  return;
}



/* Entry: 104335478; end: 104335983;  */

long FUN_104335478(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104335984; end: 104335993; -[_TtC42SCDiscoverFeedUpNextV2PlaybackSessionScope42SCDiscoverFeedUpNextV2PlaybackSessionScope upNextOperaEventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104335984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306f358));
  return;
}



/* Entry: 104335994; end: 1043359ef; -[_TtC42SCDiscoverFeedUpNextV2PlaybackSessionScope42SCDiscoverFeedUpNextV2PlaybackSessionScope currentDiscoverFeedPageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104335994(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306f360))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306f360);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043359f0; end: 104335a5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043359f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f358) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306f360);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104335a5c; end: 104335aeb; -[_TtC42SCDiscoverFeedUpNextV2PlaybackSessionScope42SCDiscoverFeedUpNextV2PlaybackSessionScope initWithUpNextOperaEventAnnouncer:currentDiscoverFeedPageSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104335a5c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_11306f358) = param_3;
  plVar1 = (long *)(param_1 + _DAT_11306f360);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 104335aec; end: 104335b17; -[_TtC42SCDiscoverFeedUpNextV2PlaybackSessionScope42SCDiscoverFeedUpNextV2PlaybackSessionScope init] */

void FUN_104335aec(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDiscoverFeedUpNextV2PlaybackSessionScope.SCDiscoverFeedUpNextV2PlaybackSessionScope"
             ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104335b18);
  (*pcVar1)();
}



/* Entry: 104335b18; end: 104335b53; -[_TtC42SCDiscoverFeedUpNextV2PlaybackSessionScope42SCDiscoverFeedUpNextV2PlaybackSessionScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104335b18(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306f358));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306f360 + 8))
  ;
  return;
}



/* Entry: 104335b54; end: 104335bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104335b54(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100369aa8();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306f370) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104335bc0; end: 104335bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104335bc0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100369aa8();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f370) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 104335bc8; end: 104335c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104335bc8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306f370) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104335c14; end: 104335cdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104335c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_68 [2];
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x0001003690d0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(long *)(lVar4 + _DAT_11306f358) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11306f360);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_retain(param_1);
  _swift_bridgeObjectRetain(param_3);
  plVar5 = &lStack_50;
  _objc_msgSendSuper2(plVar5,puVar2);
  aplStack_68[0] = plVar5;
  func_0x00010008a7c8(&uStack_58,aplStack_68);
  func_0x000100083b20(aplStack_68);
  _swift_release(uStack_58);
  _swift_unknownObjectRelease(aplStack_68[0]);
  return plVar5;
}



/* Entry: 104335ce0; end: 104335d6f; -[_TtC42SCDiscoverFeedUpNextV2PlaybackSessionScope50SCDiscoverFeedUpNextV2PlaybackSessionScopeServices buildWithUpNextOperaEventAnnouncer:currentDiscoverFeedPageSessionId:] */

void FUN_104335ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104335c14(param_3,param_4,param_2);
  _objc_release(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104335d70; end: 104335d9b; -[_TtC42SCDiscoverFeedUpNextV2PlaybackSessionScope50SCDiscoverFeedUpNextV2PlaybackSessionScopeServices init] */

void FUN_104335d70(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDiscoverFeedUpNextV2PlaybackSessionScope.SCDiscoverFeedUpNextV2PlaybackSessionScopeServices"
             ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104335d9c);
  (*pcVar1)();
}



/* Entry: 104335d9c; end: 104335d9f;  */

void FUN_104335d9c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


