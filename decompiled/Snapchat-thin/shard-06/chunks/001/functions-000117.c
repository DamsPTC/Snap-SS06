/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045152c4; end: 10451531f;  */

undefined1  [16] FUN_1045152c4(void)

{
  return ZEXT816(0x110783070);
}



/* Entry: 104515320; end: 1045153f7;  */

void FUN_104515320(void)

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



/* Entry: 1045153f8; end: 104515417;  */

void FUN_1045153f8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104515418; end: 104515457;  */

void FUN_104515418(void)

{
  undefined *puVar1;
  
  if (puRam00000001130830c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd13570;
  _swift_getWitnessTable(&UNK_10dd13570,&UNK_110783108);
  puRam00000001130830c0 = puVar1;
  return;
}



/* Entry: 104515458; end: 104515467;  */

undefined1  [16] FUN_104515458(void)

{
  return ZEXT816(0x110783108);
}



/* Entry: 104515468; end: 10451556f;  */

void FUN_104515468(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_104515570();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 104515570; end: 1045155a3;  */

undefined1  [16] FUN_104515570(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0x13) {
    uVar1 = param_1;
  }
  auVar2[8] = 0x12 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1045155a4; end: 1045155e3;  */

void FUN_1045155a4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130830c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd13630;
  _swift_getWitnessTable(&UNK_10dd13630,&UNK_110783180);
  puRam00000001130830c8 = puVar1;
  return;
}



/* Entry: 1045155e4; end: 1045155e7;  */

void FUN_1045155e4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130830d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd136d0;
  _swift_getWitnessTable(&UNK_10dd136d0,&UNK_1107831a0);
  puRam00000001130830d0 = puVar1;
  return;
}



/* Entry: 1045155e8; end: 104515627;  */

void FUN_1045155e8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130830d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd136d0;
  _swift_getWitnessTable(&UNK_10dd136d0,&UNK_1107831a0);
  puRam00000001130830d0 = puVar1;
  return;
}



/* Entry: 104515628; end: 10451562b;  */

void FUN_104515628(void)

{
  undefined *puVar1;
  
  if (puRam00000001130830d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd13770;
  _swift_getWitnessTable(&UNK_10dd13770,&UNK_1107831c0);
  puRam00000001130830d8 = puVar1;
  return;
}



/* Entry: 10451562c; end: 10451566b;  */

void FUN_10451562c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130830d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd13770;
  _swift_getWitnessTable(&UNK_10dd13770,&UNK_1107831c0);
  puRam00000001130830d8 = puVar1;
  return;
}



/* Entry: 10451566c; end: 1045156d7;  */

undefined1  [16] FUN_10451566c(void)

{
  return ZEXT816(0x110783180);
}



/* Entry: 1045156d8; end: 1045156e7; -[SCFullMapPageLaunchPayload destination] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045156d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130830e0));
  return;
}



/* Entry: 1045156e8; end: 1045156f7; -[SCFullMapPageLaunchPayload attribution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045156e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130830e8));
  return;
}



/* Entry: 1045156f8; end: 104515707; -[SCFullMapPageLaunchPayload options] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045156f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130830f0));
  return;
}



/* Entry: 104515708; end: 104515727; -[SCFullMapPageLaunchPayload uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104515708(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130830f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104515728; end: 104515733; -[SCFullMapPageLaunchPayload delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104515728(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083100;
  _swift_beginAccess(param_1 + _DAT_113083100,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104515734; end: 10451573f; -[SCFullMapPageLaunchPayload setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104515734(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083100;
  _swift_beginAccess(param_1 + _DAT_113083100,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104515740; end: 10451574b; -[SCFullMapPageLaunchPayload lifecycleDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104515740(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083108;
  _swift_beginAccess(param_1 + _DAT_113083108,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10451574c; end: 10451578f;  */

void FUN_10451574c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104515790; end: 10451579b; -[SCFullMapPageLaunchPayload setLifecycleDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104515790(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083108;
  _swift_beginAccess(param_1 + _DAT_113083108,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10451579c; end: 1045157ef;  */

void FUN_10451579c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1045157f0; end: 10451595f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045157f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113083100,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113083108,0);
  *(undefined8 *)(unaff_x20 + _DAT_1130830e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130830e8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130830f0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130830f8) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104515960; end: 104515a3b; -[SCFullMapPageLaunchPayload initWithDestination:attribution:options:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104515960(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113083100,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113083108,0);
  *(undefined8 *)(param_1 + _DAT_1130830e0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130830e8) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130830f0) = param_5;
  *(undefined8 *)(param_1 + _DAT_1130830f8) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 104515a3c; end: 104515a9b; -[SCFullMapPageLaunchPayload init] */

void FUN_104515a3c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCFullMapScope.FullMapPageLaunchPayload",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104515a68);
  (*pcVar1)();
}



/* Entry: 104515a9c; end: 104515b13; -[SCFullMapPageLaunchPayload .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000104515af8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104515afc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104515a9c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130830e0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130830e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130830f0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130830f8));
  param_1 = param_1 + _DAT_113083100;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 104515b14; end: 104515b33;  */

void FUN_104515b14(void)

{
  _objc_opt_self(&PTR_PTR_1129ca308);
  return;
}



/* Entry: 104515b34; end: 104515d33;  */

void FUN_104515b34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104515d34; end: 104515d43; -[SCMapAttribution openSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104515d34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113083138);
}



/* Entry: 104515d44; end: 104515d53; -[SCMapAttribution openSourcePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104515d44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113083140);
}



/* Entry: 104515d54; end: 104515d63; -[SCMapAttribution grapheneSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104515d54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113083148);
}



/* Entry: 104515d64; end: 104515d73; -[SCMapAttribution sourcePageContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104515d64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113083150);
}



/* Entry: 104515d74; end: 104515e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104515d74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113083138) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113083140) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113083148) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113083150) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104515e8c; end: 104515f17; -[SCMapAttribution initWithOpenSource:openSourcePage:grapheneSource:sourcePageContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104515e8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113083138) = param_3;
  *(undefined8 *)(param_1 + _DAT_113083140) = param_4;
  *(undefined8 *)(param_1 + _DAT_113083148) = param_5;
  *(undefined8 *)(param_1 + _DAT_113083150) = param_6;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104515f18; end: 104516303; -[SCMapAttribution init] */

void FUN_104515f18(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCFullMapScope.MapAttribution",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104515f44);
  (*pcVar1)();
}



/* Entry: 104516304; end: 10451635b; -[SCMapAttribution grapheneSourceString] */

void FUN_104516304(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104515f78();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10451635c; end: 104516aeb;  */

long FUN_10451635c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104516aec; end: 104516afb; -[_TtC14SCFullMapScope14SCFullMapScope attributionObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104516aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083180));
  return;
}



/* Entry: 104516afc; end: 104516b07; -[_TtC14SCFullMapScope14SCFullMapScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104516afc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083188;
  _swift_beginAccess(param_1 + _DAT_113083188,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104516b08; end: 104516b13; -[_TtC14SCFullMapScope14SCFullMapScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104516b08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083188;
  _swift_beginAccess(param_1 + _DAT_113083188,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104516b14; end: 104516b23; -[_TtC14SCFullMapScope14SCFullMapScope destinationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104516b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113083190));
  return;
}



/* Entry: 104516b24; end: 104516b2f; -[_TtC14SCFullMapScope14SCFullMapScope operaPresentingController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104516b24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113083198;
  _swift_beginAccess(param_1 + _DAT_113083198,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104516b30; end: 104516b73;  */

void FUN_104516b30(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104516b74; end: 104516b7f; -[_TtC14SCFullMapScope14SCFullMapScope setOperaPresentingController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104516b74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083198;
  _swift_beginAccess(param_1 + _DAT_113083198,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104516b80; end: 104516bd3;  */

void FUN_104516b80(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104516bd4; end: 104516bf3; -[_TtC14SCFullMapScope14SCFullMapScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104516bd4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130831a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104516bf4; end: 104516c13; -[_TtC14SCFullMapScope14SCFullMapScope deckPresentingContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104516bf4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130831a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104516c14; end: 104516c23; -[_TtC14SCFullMapScope14SCFullMapScope options] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104516c14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130831b0));
  return;
}



/* Entry: 104516c24; end: 104516c33; -[_TtC14SCFullMapScope14SCFullMapScope footerItemConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104516c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130831b8));
  return;
}



/* Entry: 104516c34; end: 104516c43; -[_TtC14SCFullMapScope14SCFullMapScope reattachOnLowMemory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104516c34(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130831c0);
}



/* Entry: 104516c44; end: 104516daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104516c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar4 = auStack_90;
  _objc_allocWithZone();
  lVar1 = _DAT_113083188;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113083188,0);
  lVar2 = _DAT_113083198;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113083198,0);
  _CACurrentMediaTime();
  *(undefined8 *)(unaff_x20 + _DAT_1130831c8) = param_1;
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_opt_self();
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + _DAT_113083180) = puVar3;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_113083190) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130831a0) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_1130831c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130831a8) = 0;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,0);
  *(undefined8 *)(unaff_x20 + _DAT_1130831b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130831b8) = 0;
  _objc_msgSendSuper2(auStack_90,PTR_s_init_1125d9248);
  _swift_unknownObjectRelease(param_2);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 104516db0; end: 104516e3f; -[_TtC14SCFullMapScope14SCFullMapScope initWithDelegate:attribution:destinationObservable:uiContainer:] */

undefined8
FUN_104516db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  uVar1 = param_3;
  FUN_1045177f8(param_3,param_4,param_5,param_6);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 104516e40; end: 104516fe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104516e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113083188;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113083188,0);
  lVar3 = _DAT_113083198;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113083198,0);
  _CACurrentMediaTime();
  *(undefined8 *)(unaff_x20 + _DAT_1130831c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113083180) = param_3;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_113083190) = param_4;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_5);
  *(undefined8 *)(unaff_x20 + _DAT_1130831a0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130831a8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_1130831b0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_1130831b8) = param_10;
  *(undefined1 *)(unaff_x20 + _DAT_1130831c0) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = auStack_a0;
  _objc_msgSendSuper2(puVar4,puVar1);
  _swift_unknownObjectRelease(param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  return puVar4;
}



/* Entry: 104516fe4; end: 1045170ef; -[_TtC14SCFullMapScope14SCFullMapScope initWithDelegate:attributionObservable:destinationObservable:operaPresentingViewController:uiContainer:deckPresentingContainer:options:reattachOnLowMemory:footerItemConfig:] */

undefined8
FUN_104516fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  uVar2 = param_6;
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  uVar3 = param_3;
  FUN_104517948(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_12);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 1045170f0; end: 10451711b; -[_TtC14SCFullMapScope14SCFullMapScope init] */

void FUN_1045170f0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCFullMapScope.SCFullMapScope",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10451711c);
  (*pcVar1)();
}



/* Entry: 10451711c; end: 1045171ff; -[_TtC14SCFullMapScope14SCFullMapScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451711c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083180));
  func_0x000100dba410(param_1 + _DAT_113083188);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083190));
  func_0x000100dba410(param_1 + _DAT_113083198);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130831a0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130831a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130831b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130831b8));
  return;
}



/* Entry: 104517200; end: 1045173af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104517200(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = param_2;
  func_0x000100388c1c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar1 = _DAT_113083188;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113083188,0);
  lVar2 = _DAT_113083198;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113083198,0);
  _CACurrentMediaTime();
  *(undefined8 *)(lVar4 + _DAT_1130831c8) = param_1;
  puVar5 = PTR_PTR_1126ae6b8;
  _objc_opt_self();
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar4 + _DAT_113083180) = puVar5;
  _swift_beginAccess(lVar4 + lVar1,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar1,param_2);
  *(undefined8 *)(lVar4 + _DAT_113083190) = param_4;
  *(undefined8 *)(lVar4 + _DAT_1130831a0) = param_5;
  *(undefined1 *)(lVar4 + _DAT_1130831c0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130831a8) = 0;
  _swift_beginAccess(lVar4 + lVar2,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,0);
  *(undefined8 *)(lVar4 + _DAT_1130831b0) = 0;
  *(undefined8 *)(lVar4 + _DAT_1130831b8) = 0;
  puVar5 = PTR_s_init_1125d9248;
  lStack_a0 = lVar4;
  lStack_98 = lVar3;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  plVar6 = &lStack_a0;
  _objc_msgSendSuper2(plVar6,puVar5);
  aplStack_b8[0] = plVar6;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar6;
}



/* Entry: 1045173b0; end: 104517467; -[_TtC14SCFullMapScope22SCFullMapScopeServices buildWithDelegate:attribution:destinationObservable:uiContainer:] */

void FUN_1045173b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_104517200(param_3,param_4,param_5,param_6);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104517468; end: 10451763b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104517468(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined1 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = param_2;
  func_0x000100388c1c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_113083188;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113083188,0);
  lVar3 = _DAT_113083198;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113083198,0);
  _CACurrentMediaTime();
  *(undefined8 *)(lVar5 + _DAT_1130831c8) = param_1;
  *(undefined8 *)(lVar5 + _DAT_113083180) = param_3;
  _swift_beginAccess(lVar5 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_2);
  *(undefined8 *)(lVar5 + _DAT_113083190) = param_4;
  _swift_beginAccess(lVar5 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_5);
  *(undefined8 *)(lVar5 + _DAT_1130831a0) = param_6;
  *(undefined8 *)(lVar5 + _DAT_1130831a8) = param_7;
  *(undefined8 *)(lVar5 + _DAT_1130831b0) = param_8;
  *(undefined8 *)(lVar5 + _DAT_1130831b8) = param_10;
  *(undefined1 *)(lVar5 + _DAT_1130831c0) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  plVar6 = &lStack_a0;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_b8[0] = plVar6;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar6;
}



/* Entry: 10451763c; end: 104517783; -[_TtC14SCFullMapScope22SCFullMapScopeServices buildFullWithDelegate:attributionObservable:destinationObservable:operaPresentingViewController:uiContainer:deckPresentingContainer:options:reattachOnLowMemory:footerItemConfig:] */

void FUN_10451763c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain();
  uVar2 = param_6;
  _objc_retain();
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_8);
  uVar3 = param_9;
  _objc_retain();
  uVar4 = param_12;
  _objc_retain(param_12);
  _objc_retain(param_1);
  uVar5 = param_3;
  FUN_104517468(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_12);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _swift_unknownObjectRelease(param_7);
  _swift_unknownObjectRelease(param_8);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104517784; end: 1045177af; -[_TtC14SCFullMapScope22SCFullMapScopeServices init] */

void FUN_104517784(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCFullMapScope.SCFullMapScopeServices",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1045177b0);
  (*pcVar1)();
}



/* Entry: 1045177b0; end: 1045177b3;  */

void FUN_1045177b0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1045177b4; end: 1045177e7;  */

void FUN_1045177b4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1045177e8; end: 1045177f7; -[_TtC14SCFullMapScope22SCFullMapScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045177e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130831d8));
  return;
}



/* Entry: 1045177f8; end: 104517947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045177f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_getObjectType();
  lVar1 = _DAT_113083188;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113083188,0);
  lVar2 = _DAT_113083198;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113083198,0);
  _CACurrentMediaTime();
  *(undefined8 *)(unaff_x20 + _DAT_1130831c8) = param_1;
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_opt_self();
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(unaff_x20 + _DAT_113083180) = puVar3;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_113083190) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130831a0) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_1130831c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130831a8) = 0;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,0);
  *(undefined8 *)(unaff_x20 + _DAT_1130831b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130831b8) = 0;
  _objc_msgSendSuper2(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104517948; end: 104517ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104517948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar2 = _DAT_113083188;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113083188,0);
  lVar3 = _DAT_113083198;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113083198,0);
  _CACurrentMediaTime();
  *(undefined8 *)(unaff_x20 + _DAT_1130831c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113083180) = param_3;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_113083190) = param_4;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_5);
  *(undefined8 *)(unaff_x20 + _DAT_1130831a0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130831a8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_1130831b0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_1130831b8) = param_10;
  *(undefined1 *)(unaff_x20 + _DAT_1130831c0) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&stack0xffffffffffffff60,puVar1);
  return;
}



/* Entry: 104517ab8; end: 104517acb;  */

undefined1  [16] FUN_104517ab8(void)

{
  return ZEXT816(0x110783368);
}



/* Entry: 104517acc; end: 104517b9f;  */

void FUN_104517acc(void)

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



/* Entry: 104517ba0; end: 104517bbf;  */

void FUN_104517ba0(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104517bc0; end: 1045197ab;  */

void FUN_104517bc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined1 uStack_70;
  
  uStack_98 = param_1[0xd];
  uStack_a0 = param_1[0xc];
  uStack_88 = param_1[0xf];
  uStack_90 = param_1[0xe];
  uStack_78 = param_1[0x11];
  uStack_80 = param_1[0x10];
  uStack_70 = *(undefined1 *)(param_1 + 0x12);
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_a8 = param_1[0xb];
  uStack_b0 = param_1[10];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  puVar1 = &uStack_100;
  func_0x00010262a02c();
                    /* WARNING: Could not recover jumptable at 0x000104517c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10dd13960 + ((ulong)puVar1 & 0xffffffff) * 2) * 4 + 0x104517c38
            ))();
  return;
}



/* Entry: 1045197ac; end: 1045197e3; -[SCMapDestination description] */

void FUN_1045197ac(void)

{
  undefined1 auStack_a8 [152];
  
  _objc_retain();
  FUN_10451a97c(auStack_a8);
  func_0x00010267c6c4(auStack_a8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1045197e4; end: 10451984f;  */

void FUN_1045197e4(undefined8 *param_1)

{
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
  undefined1 uStack_28;
  
  FUN_10451a97c(&uStack_b8);
  param_1[0xd] = uStack_50;
  param_1[0xc] = uStack_58;
  param_1[0xf] = uStack_40;
  param_1[0xe] = uStack_48;
  param_1[0x11] = uStack_30;
  param_1[0x10] = uStack_38;
  *(undefined1 *)(param_1 + 0x12) = uStack_28;
  param_1[5] = uStack_90;
  param_1[4] = uStack_98;
  param_1[7] = uStack_80;
  param_1[6] = uStack_88;
  param_1[9] = uStack_70;
  param_1[8] = uStack_78;
  param_1[0xb] = uStack_60;
  param_1[10] = uStack_68;
  param_1[1] = uStack_b0;
  *param_1 = uStack_b8;
  param_1[3] = uStack_a0;
  param_1[2] = uStack_a8;
  return;
}



/* Entry: 104519850; end: 104519897; -[SCMapDestination init] */

void FUN_104519850(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCFullMapScope/SCMapDestinationWrapper.swift"
             ,0x2c,2,0xdf,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104519898);
  (*pcVar1)();
}



/* Entry: 104519898; end: 10451989b; -[SCMapDestination copyWithZone:] */

void FUN_104519898(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10451989c; end: 1045198b3;  */

void FUN_10451989c(void)

{
  FUN_10451c5b4(0);
  return;
}



/* Entry: 1045198b4; end: 1045198cb; +[SCMapDestination defaultViewport] */

void FUN_1045198b4(void)

{
  FUN_10451c5b4(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1045198cc; end: 1045198cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045198cc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  FUN_10451c820();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113083230) = 1;
  plVar1 = (long *)(lVar5 + _DAT_113083238);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  *(undefined8 *)(lVar5 + _DAT_113083240) = param_3;
  *(undefined8 *)(lVar5 + _DAT_113083248) = param_4;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083250);
  *puVar2 = param_5;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined8 *)(lVar5 + _DAT_113083258) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083260);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083268);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083270);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083278);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083280);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083288);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083290);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083298);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832a0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832a8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832b0);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_1130832b8) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832c0);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832c8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832d0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832d8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_1130832e0) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832e8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832f0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_1130832f8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083300);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_113083308) = 0;
  *(undefined8 *)(lVar5 + _DAT_113083310) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083318);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083320);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083328);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083330);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_113083338);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 1045198d0; end: 10451997f; +[SCMapDestination friendWithUserId:reactionEmojis:reactions:viewSource:] */

void FUN_1045198d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (param_4 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_4,PTR___sSSN_11034da80);
  }
  if (param_5 != 0) {
    uVar1 = 0;
    func_0x000100de1f70(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,uVar1);
  }
  FUN_10451afc8(param_3,param_2,param_4,param_5,param_6);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104519980; end: 104519983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104519980(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  FUN_10451c820();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113083230) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083238);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_113083240) = 0;
  *(undefined8 *)(lVar4 + _DAT_113083248) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083250);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar4 + _DAT_113083258) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083260);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083268);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083270);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083278);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083280);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083288);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083290);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083298);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_1130832b8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_1130832e0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130832f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083300);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_113083308) = 0;
  *(undefined8 *)(lVar4 + _DAT_113083310) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083318);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083320);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083328);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083330);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113083338);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 104519984; end: 1045199fb; +[SCMapDestination customGroupWithUserIds:name:source:] */

void FUN_104519984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR___sSSN_11034da80;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  uVar1 = param_3;
  func_0x00010451b270(param_3,param_4,puVar2,param_5);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1045199fc; end: 1045199ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1045199fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  FUN_10451c820();
  lVar2 = param_4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113083230) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083238);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_113083240) = 0;
  *(undefined8 *)(lVar2 + _DAT_113083248) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083250);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_113083258) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083260);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083268);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083270);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083278);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083280);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083288);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083290);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083298);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832a0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_1130832b8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_1130832e0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130832f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083300);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_113083308) = 0;
  *(undefined8 *)(lVar2 + _DAT_113083310) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083318);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083320);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083328);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083330);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113083338);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_50 = lVar2;
  lStack_48 = param_4;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104519a00; end: 104519a13; +[SCMapDestination coordinateWithCenter:zoomLevel:] */

void FUN_104519a00(void)

{
  FUN_10451b510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104519a14; end: 104519a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104519a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_90;
  long lStack_88;
  
  lVar4 = param_5;
  FUN_10451c820();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_113083230) = 4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083238);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_113083240) = 0;
  *(undefined8 *)(lVar5 + _DAT_113083248) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083250);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar5 + _DAT_113083258) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083260);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083268);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083270);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083278);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083280);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083288);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(puVar1 + 2) = 0;
  plVar2 = (long *)(lVar5 + _DAT_113083290);
  *plVar2 = param_5;
  *(undefined1 *)(plVar2 + 1) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083298);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832a0);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832a8);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832b0);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  *(undefined8 *)(lVar5 + _DAT_1130832b8) = param_14;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_1130832e0) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130832f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083300);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_113083308) = 0;
  *(undefined8 *)(lVar5 + _DAT_113083310) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083318);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083320);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083328);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083330);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113083338);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_90 = lVar5;
  lStack_88 = lVar4;
  _swift_bridgeObjectRetain(param_7);
  _swift_bridgeObjectRetain(param_9);
  _swift_bridgeObjectRetain(param_11);
  _swift_bridgeObjectRetain(param_13);
  _objc_retain(param_14);
  _objc_msgSendSuper2(&lStack_90,puVar3);
  return;
}



/* Entry: 104519a18; end: 104519b57; +[SCMapDestination placeWithBoundingNE:boundingSW:placeType:placeId:openSource:sourceType:sourceSessionId:placeLinkButtonData:] */

void FUN_104519a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,long param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
  uVar3 = param_6;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_9);
  uVar4 = uVar3;
  if (param_10 == 0) {
    param_10 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_10);
    uVar1 = uVar4;
  }
  if (param_11 == 0) {
    param_11 = 0;
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_11);
  }
  uVar2 = param_12;
  _objc_retain(param_12);
  FUN_10451b798(param_1,param_2,param_3,param_4,param_7,param_8,param_6,param_9,uVar3,param_10,uVar1
                ,param_11,uVar4,param_12);
  _objc_release(uVar2);
  _swift_bridgeObjectRelease(param_6);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_7);
  return;
}



/* Entry: 104519b58; end: 104519d63; +[SCMapDestination placeDiscoveryWithPlaceLocation:placeId:userId:pivotName:placePivotType:attributeId:pivotEmojiUnicode:localizedResultsHeader:source:sourceSessionId:] */

void FUN_104519b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  long param_10,long param_11,undefined8 param_12,undefined8 param_13)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (param_5 == 0) {
    uStack_90 = 0;
    uStack_80 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_90 = param_5;
    uStack_80 = param_4;
  }
  if (param_6 == 0) {
    uStack_a0 = 0;
    uStack_88 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a0 = param_6;
    uStack_88 = param_4;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_9 == 0) {
    uStack_b0 = 0;
    uStack_98 = 0;
    uVar5 = param_4;
  }
  else {
    uStack_98 = param_4;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar5 = uStack_98;
    uStack_b0 = param_9;
  }
  _objc_retain(param_8);
  lVar2 = param_10;
  _objc_retain();
  lVar3 = param_11;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (lVar2 == 0) {
    param_10 = 0;
    uVar1 = 0;
    uVar4 = uVar5;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar4 = uVar5;
    _objc_release(lVar2);
    uVar1 = uVar5;
  }
  if (lVar3 == 0) {
    param_11 = 0;
    uVar6 = 0;
    uVar5 = uVar4;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar5 = uVar4;
    _objc_release(lVar3);
    uVar6 = uVar4;
  }
  uVar4 = param_12;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_12);
  FUN_10451ba98(param_1,param_2,uStack_90,uStack_80,uStack_a0,uStack_88,param_7,param_4,param_8,
                uStack_b0,uStack_98,param_10,uVar1,param_11,uVar6,uVar4,uVar5,param_13);
  _objc_release(param_8);
  _objc_release(param_13);
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uStack_98);
  _swift_bridgeObjectRelease(uStack_88);
  _swift_bridgeObjectRelease(uStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_90);
  return;
}



/* Entry: 104519d64; end: 104519da3; +[SCMapDestination dropWithDrop:openSource:] */

void FUN_104519d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10451bdec();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104519da4; end: 104519daf; +[SCMapDestination addressWithAddress:senderID:] */

void FUN_104519da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  FUN_10451c074(param_3,param_2,param_4,uVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104519db0; end: 104519dbb; +[SCMapDestination systemSettingsWithNotificationID:notificationType:] */

void FUN_104519db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  (*(code *)0x10451c314)(param_3,param_2,param_4,uVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104519dbc; end: 104519e2b;  */

void FUN_104519dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  (*param_5)(param_3,param_2,param_4,uVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104519e2c; end: 104519e43; +[SCMapDestination arrivalNotifications] */

void FUN_104519e2c(void)

{
  FUN_10451c5b4(9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104519e44; end: 104519e5b; +[SCMapDestination externalMusic] */

void FUN_104519e44(void)

{
  FUN_10451c5b4(10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104519e5c; end: 10451a283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104519e5c(undefined8 param_1,undefined8 param_2,code *param_3,undefined1 *param_4,
                  code *param_5,undefined1 *param_6,code *param_7,code **param_8,code *param_9,
                  undefined8 param_10,code *param_11,long param_12,code *param_13,
                  undefined8 *param_14,code *param_15,undefined8 *param_16,code *param_17,
                  undefined8 *param_18,code *param_19,undefined8 *param_20,code *param_21,
                  undefined4 param_22,undefined4 param_23,code *param_24)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 in_ZR;
  long lVar4;
  long lVar5;
  long unaff_x20;
  code *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  code *pcStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_x20 + _DAT_113083230)) {
  default:
    (*param_3)();
    break;
  case 1:
    param_14 = _DAT_113083238;
  case 0xe:
    lVar4 = ((undefined8 *)(unaff_x20 + (long)param_14))[1];
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a244);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113083250) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a264);
      (*pcVar3)();
    }
    (*param_5)(param_6,*(undefined8 *)(unaff_x20 + (long)param_14),lVar4,
               *(undefined8 *)(unaff_x20 + _DAT_113083240),
               *(undefined8 *)(unaff_x20 + _DAT_113083248),
               *(undefined8 *)(unaff_x20 + _DAT_113083250));
    break;
  case 2:
    if (*(long *)(unaff_x20 + _DAT_113083258) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a238);
      (*pcVar3)();
    }
    lVar4 = ((undefined8 *)(unaff_x20 + _DAT_113083260))[1];
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a258);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113083268) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a278);
      (*pcVar3)();
    }
    (*param_7)(*(long *)(unaff_x20 + _DAT_113083258),*(undefined8 *)(unaff_x20 + _DAT_113083260),
               lVar4,*(undefined8 *)(unaff_x20 + _DAT_113083268));
    break;
  case 3:
    param_14 = (undefined8 *)&DAT_113083000;
  case 0x14:
    param_14 = (undefined8 *)(unaff_x20 + param_14[0x4e]);
    in_ZR = *(char *)(param_14 + 2) == '\x01';
  case 0xd:
    if ((bool)in_ZR) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a23c);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113083278) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a25c);
      (*pcVar3)();
    }
    (*param_9)(*param_14,param_14[1],*(undefined8 *)(unaff_x20 + _DAT_113083278));
    break;
  case 4:
    param_14 = (undefined8 *)&DAT_113083000;
  case 0xf:
    puVar2 = (undefined8 *)(unaff_x20 + param_14[0x50]);
    if (*(char *)(puVar2 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a234);
      (*pcVar3)();
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_113083288);
    if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a254);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113083290) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a274);
      (*pcVar3)();
    }
    lVar4 = ((undefined8 *)(unaff_x20 + _DAT_113083298))[1];
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a280);
      (*pcVar3)();
    }
    lVar5 = ((undefined8 *)(unaff_x20 + _DAT_1130832a0))[1];
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a284);
      (*pcVar3)();
    }
    pcStack_a0 = (code *)((undefined8 *)(unaff_x20 + _DAT_1130832b0))[1];
    puStack_98 = *(undefined8 **)(unaff_x20 + _DAT_1130832b8);
    (*param_11)(*puVar2,puVar2[1],*puVar1,puVar1[1],*(undefined8 *)(unaff_x20 + _DAT_113083290),
                *(undefined8 *)(unaff_x20 + _DAT_113083298),lVar4,
                *(undefined8 *)(unaff_x20 + _DAT_1130832a0),lVar5,
                *(undefined8 *)(unaff_x20 + _DAT_1130832a8),
                ((undefined8 *)(unaff_x20 + _DAT_1130832a8))[1],
                *(undefined8 *)(unaff_x20 + _DAT_1130832b0));
    break;
  case 5:
  case 0x12:
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_1130832c0);
    if (*(char *)(puVar2 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a248);
      (*pcVar3)();
    }
    param_20 = (undefined8 *)(unaff_x20 + _DAT_1130832d8);
    param_8 = (code **)param_20[1];
    if (param_8 == (code **)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a268);
      (*pcVar3)();
    }
    param_18 = (undefined8 *)(unaff_x20 + _DAT_113083300);
    param_12 = param_18[1];
    if (param_12 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a27c);
      (*pcVar3)();
    }
    param_1 = *puVar2;
    param_2 = puVar2[1];
    param_3 = *(code **)(unaff_x20 + _DAT_1130832c8);
    param_4 = (undefined1 *)((undefined8 *)(unaff_x20 + _DAT_1130832c8))[1];
    param_16 = (undefined8 *)(unaff_x20 + _DAT_1130832d0);
  case 0xc:
    lStack_78 = *param_18;
    puStack_88 = *(undefined8 **)(unaff_x20 + _DAT_1130832f8);
    pcStack_80 = (code *)((undefined8 *)(unaff_x20 + _DAT_1130832f8))[1];
    puStack_98 = *(undefined8 **)(unaff_x20 + _DAT_1130832f0);
    uStack_90 = ((undefined8 *)(unaff_x20 + _DAT_1130832f0))[1];
    pcStack_a0 = (code *)((undefined8 *)(unaff_x20 + _DAT_1130832e8))[1];
    puStack_68 = *(undefined8 **)(unaff_x20 + _DAT_113083308);
    puStack_70 = (undefined8 *)param_12;
    (*param_13)(param_1,param_2,param_3,param_4,*param_16,param_16[1],*param_20,param_8,
                *(undefined8 *)(unaff_x20 + _DAT_1130832e0),
                *(undefined8 *)(unaff_x20 + _DAT_1130832e8));
    break;
  case 6:
    param_3 = *(code **)(unaff_x20 + _DAT_113083310);
    param_14 = _DAT_113083318;
    if (param_3 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a24c);
      (*pcVar3)();
    }
  case 0x10:
    if (*(char *)((undefined8 *)(unaff_x20 + (long)param_14) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a26c);
      (*pcVar3)();
    }
    (*param_15)(param_3,*(undefined8 *)(unaff_x20 + (long)param_14));
    break;
  case 7:
    lVar4 = ((undefined8 *)(unaff_x20 + _DAT_113083320))[1];
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a240);
      (*pcVar3)();
    }
    if (((undefined8 *)(unaff_x20 + _DAT_113083328))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a260);
      (*pcVar3)();
    }
    (*param_17)(*(undefined8 *)(unaff_x20 + _DAT_113083320),lVar4,
                *(undefined8 *)(unaff_x20 + _DAT_113083328));
    break;
  case 8:
    lVar4 = ((undefined8 *)(unaff_x20 + _DAT_113083330))[1];
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a250);
      (*pcVar3)();
    }
    if (((undefined8 *)(unaff_x20 + _DAT_113083338))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10451a270);
      (*pcVar3)();
    }
    (*param_19)(*(undefined8 *)(unaff_x20 + _DAT_113083330),lVar4,
                *(undefined8 *)(unaff_x20 + _DAT_113083338));
    break;
  case 9:
    (*param_21)();
    break;
  case 10:
    (*param_24)();
    break;
  case 0x11:
    puStack_70 = param_16;
    puStack_68 = param_14;
    param_4 = &stack0xffffffffffffffc0;
    param_6 = &stack0xffffffffffffffa0;
    pcStack_80 = FUN_10451ca78;
    lStack_78 = param_12;
    uStack_90 = 0x10451ca3c;
    puStack_88 = param_20;
    param_3 = FUN_10451c9e8;
    param_5 = (code *)0x10451c9f4;
    pcStack_a0 = FUN_10451ca10;
    puStack_98 = param_18;
    param_8 = &pcStack_80;
    param_7 = (code *)0x10451c9fc;
    param_9 = (code *)0x10451ca04;
  case 0x15:
    FUN_104519e5c(param_3,param_4,param_5,param_6,param_7,param_8,param_9,&pcStack_a0);
    _objc_release();
    return;
  case 0x13:
    return;
  }
  return;
}



/* Entry: 10451a284; end: 10451a38f; -[SCMapDestination matchDefaultViewport:friend:customGroup:coordinate:place:placeDiscovery:drop:address:systemSettings:arrivalNotifications:externalMusic:] */

void FUN_10451a284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_170 = param_13;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_104519e5c(FUN_10451c9e8,auStack_40,0x10451c9f4,auStack_60,0x10451c9fc,auStack_80,0x10451ca04,
                auStack_a0,FUN_10451ca10,auStack_c0,0x10451ca3c,auStack_e0,FUN_10451ca78,auStack_100
                ,0x10451ca8c,auStack_120,0x10451cb80,auStack_140,0x10451cb84,auStack_160,0x10451cb88
                ,auStack_180);
  _objc_release(param_1);
  return;
}



/* Entry: 10451a390; end: 10451a4af;  */

void FUN_10451a390(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  if (param_3 != 0) {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_3,PTR___sSSN_11034da80);
  }
  if (param_4 != 0) {
    uVar1 = 0;
    func_0x000100de1f70(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_4,uVar1);
  }
  (**(code **)(param_6 + 0x10))(param_6,param_1,param_3,param_4,param_5);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10451a4b0; end: 10451a5c7;  */

void FUN_10451a4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
                  long param_13,undefined8 param_14,long param_15)

{
  undefined8 uVar1;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_6,param_7);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_8,param_9);
  uVar1 = 0;
  if (param_11 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_10,param_11);
    uVar1 = param_10;
  }
  if (param_13 == 0) {
    param_12 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_12,param_13);
  }
  (**(code **)(param_15 + 0x10))
            (param_1,param_2,param_3,param_4,param_15,param_5,param_6,param_8,uVar1,param_12,
             param_14);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_12);
  return;
}



/* Entry: 10451a5c8; end: 10451a75b;  */

void FUN_10451a5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
                  long param_13,undefined8 param_14,long param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,long param_19)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  }
  uVar2 = 0;
  if (param_6 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    uVar2 = param_5;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_7,param_8);
  if (param_11 == 0) {
    param_10 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_10,param_11);
  }
  uVar1 = 0;
  if (param_13 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_12,param_13);
    uVar1 = param_12;
  }
  if (param_15 == 0) {
    param_14 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_14,param_15);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_16,param_17);
  (**(code **)(param_19 + 0x10))
            (param_1,param_2,param_19,param_3,uVar2,param_7,param_9,param_10,uVar1,param_14,param_16
             ,param_18);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_10);
  _objc_release(uVar1);
  _objc_release(param_14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_16);
  return;
}



/* Entry: 10451a75c; end: 10451a78f;  */

void FUN_10451a75c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10451a790; end: 10451a96b; -[SCMapDestination .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10451a790(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083238 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083240));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083248));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083258));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083260 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083298 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130832a0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130832a8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130832b0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130832b8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130832c8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130832d0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130832d8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130832e0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130832e8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130832f0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130832f8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083300 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083308));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113083310));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083320 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083328 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113083330 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113083338 + 8))
  ;
  return;
}



/* Entry: 10451a96c; end: 10451a97b;  */

ulong FUN_10451a96c(ulong param_1)

{
  if (10 < param_1) {
    param_1 = 0xb;
  }
  return param_1;
}


