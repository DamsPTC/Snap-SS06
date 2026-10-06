/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10438b090; end: 10438b0af; -[_TtC25SCMapDirectionsSheetScope33SCMapDirectionsSheetScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438b090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113072d40));
  return;
}



/* Entry: 10438b0b0; end: 10438b0bf; -[_TtC21SCMapFocusedDropScope21SCMapFocusedDropScope drop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438b0b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113072d70));
  return;
}



/* Entry: 10438b0c0; end: 10438b107; -[_TtC21SCMapFocusedDropScope21SCMapFocusedDropScope dropsLifecycleDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438b0c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113072d78;
  _swift_beginAccess(param_1 + _DAT_113072d78,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438b108; end: 10438b15f; -[_TtC21SCMapFocusedDropScope21SCMapFocusedDropScope setDropsLifecycleDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438b108(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113072d78;
  _swift_beginAccess(param_1 + _DAT_113072d78,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10438b160; end: 10438b16f; -[_TtC21SCMapFocusedDropScope21SCMapFocusedDropScope locationUpdateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438b160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113072d80));
  return;
}



/* Entry: 10438b170; end: 10438b17f; -[_TtC21SCMapFocusedDropScope21SCMapFocusedDropScope openSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10438b170(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113072d88);
}



/* Entry: 10438b180; end: 10438b267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10438b180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113072d78;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113072d78,0);
  *(undefined8 *)(unaff_x20 + _DAT_113072d70) = param_1;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_113072d80) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113072d88) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  puVar3 = auStack_78;
  _objc_msgSendSuper2(puVar3,puVar1);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_2);
  return puVar3;
}



/* Entry: 10438b268; end: 10438b33b; -[_TtC21SCMapFocusedDropScope21SCMapFocusedDropScope initWithDrop:dropsLifecycleDelegate:locationUpdateObservable:openSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438b268(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_113072d78;
  _swift_unknownObjectWeakInit(param_1 + _DAT_113072d78,0);
  *(undefined8 *)(param_1 + _DAT_113072d70) = param_3;
  _swift_beginAccess(param_1 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_4);
  *(undefined8 *)(param_1 + _DAT_113072d80) = param_5;
  *(undefined8 *)(param_1 + _DAT_113072d88) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_78,puVar1);
  return;
}



/* Entry: 10438b33c; end: 10438b39b; -[_TtC21SCMapFocusedDropScope21SCMapFocusedDropScope init] */

void FUN_10438b33c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapFocusedDropScope.SCMapFocusedDropScope",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438b368);
  (*pcVar1)();
}



/* Entry: 10438b39c; end: 10438b407; -[_TtC21SCMapFocusedDropScope21SCMapFocusedDropScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438b39c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113072d70));
  func_0x00010438b3e4(param_1 + _DAT_113072d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113072d80));
  return;
}



/* Entry: 10438b408; end: 10438b427;  */

void FUN_10438b408(void)

{
  _objc_opt_self(&PTR_PTR_1129a5640);
  return;
}



/* Entry: 10438b428; end: 10438b473;  */

void FUN_10438b428(undefined8 param_1)

{
  func_0x0001000285a8(0x113072db8,&UNK_10dcf2700);
  _swift_retain(param_1);
  func_0x0001000823a8(FUN_10438b4e0,param_1);
  return;
}



/* Entry: 10438b474; end: 10438b4df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438b474(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10438b784();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113072dc0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10438b4e0; end: 10438b4e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438b4e0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10438b784();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072dc0) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10438b4e8; end: 10438b533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438b4e8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072dc0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438b534; end: 10438b65f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10438b534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  lVar3 = 0;
  FUN_10438b408();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113072d78;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113072d78,0);
  *(undefined8 *)(lVar4 + _DAT_113072d70) = param_1;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_2);
  *(undefined8 *)(lVar4 + _DAT_113072d80) = param_3;
  *(undefined8 *)(lVar4 + _DAT_113072d88) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _objc_retain(param_1);
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



/* Entry: 10438b660; end: 10438b703; -[_TtC21SCMapFocusedDropScope29SCMapFocusedDropScopeServices buildWithDrop:dropsLifecycleDelegate:locationUpdateObservable:openSource:] */

void FUN_10438b660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_10438b534(param_3,param_4,param_5,param_6);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10438b704; end: 10438b763; -[_TtC21SCMapFocusedDropScope29SCMapFocusedDropScopeServices init] */

void FUN_10438b704(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapFocusedDropScope.SCMapFocusedDropScopeServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438b730);
  (*pcVar1)();
}



/* Entry: 10438b764; end: 10438b783; -[_TtC21SCMapFocusedDropScope29SCMapFocusedDropScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438b764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113072dc0));
  return;
}



/* Entry: 10438b784; end: 10438b7a3;  */

void FUN_10438b784(void)

{
  _objc_opt_self(&PTR_PTR_1129a5718);
  return;
}



/* Entry: 10438b7a4; end: 10438b9d7;  */

long FUN_10438b7a4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10438b9d8; end: 10438b9e7; -[_TtC21SCMapHomeProfileScope21SCMapHomeProfileScope homeUpdateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438b9d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113072df0));
  return;
}



/* Entry: 10438b9e8; end: 10438ba2f; -[_TtC21SCMapHomeProfileScope21SCMapHomeProfileScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438b9e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113072df8;
  _swift_beginAccess(param_1 + _DAT_113072df8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438ba30; end: 10438ba87; -[_TtC21SCMapHomeProfileScope21SCMapHomeProfileScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438ba30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113072df8;
  _swift_beginAccess(param_1 + _DAT_113072df8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10438ba88; end: 10438bb47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10438ba88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113072df8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113072df8,0);
  *(undefined8 *)(unaff_x20 + _DAT_113072df0) = param_1;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  puVar3 = auStack_68;
  _objc_msgSendSuper2(puVar3,puVar1);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_2);
  return puVar3;
}



/* Entry: 10438bb48; end: 10438bbeb; -[_TtC21SCMapHomeProfileScope21SCMapHomeProfileScope initWithHomeUpdateObservable:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438bb48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_113072df8;
  _swift_unknownObjectWeakInit(param_1 + _DAT_113072df8,0);
  *(undefined8 *)(param_1 + _DAT_113072df0) = param_3;
  _swift_beginAccess(param_1 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_68,puVar1);
  return;
}



/* Entry: 10438bbec; end: 10438bc4b; -[_TtC21SCMapHomeProfileScope21SCMapHomeProfileScope init] */

void FUN_10438bbec(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapHomeProfileScope.SCMapHomeProfileScope",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438bc18);
  (*pcVar1)();
}



/* Entry: 10438bc4c; end: 10438bca7; -[_TtC21SCMapHomeProfileScope21SCMapHomeProfileScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10438bc4c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113072df0));
  param_1 = param_1 + _DAT_113072df8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10438bca8; end: 10438bcc7;  */

void FUN_10438bca8(void)

{
  _objc_opt_self(&PTR_PTR_1129a57d8);
  return;
}



/* Entry: 10438bcc8; end: 10438bd13;  */

void FUN_10438bcc8(undefined8 param_1)

{
  func_0x0001000285a8(0x113072e28,&UNK_10dcf27c0);
  _swift_retain(param_1);
  func_0x0001000823a8(FUN_10438bd80,param_1);
  return;
}



/* Entry: 10438bd14; end: 10438bd7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438bd14(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10438bfbc();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113072e30) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10438bd80; end: 10438bd87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438bd80(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10438bfbc();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072e30) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10438bd88; end: 10438bdd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438bd88(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072e30) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438bdd4; end: 10438bec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10438bdd4(undefined8 param_1,undefined8 param_2)

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
  
  lVar3 = 0;
  FUN_10438bca8();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113072df8;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113072df8,0);
  *(undefined8 *)(lVar4 + _DAT_113072df0) = param_1;
  _swift_beginAccess(lVar4 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  _objc_retain(param_1);
  plVar5 = &lStack_68;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_80[0] = plVar5;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  _swift_release(uStack_70);
  _swift_unknownObjectRelease(aplStack_80[0]);
  return plVar5;
}



/* Entry: 10438bec8; end: 10438bf3b; -[_TtC21SCMapHomeProfileScope29SCMapHomeProfileScopeServices buildWithHomeUpdateObservable:delegate:] */

void FUN_10438bec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10438bdd4(param_3,param_4);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10438bf3c; end: 10438bf9b; -[_TtC21SCMapHomeProfileScope29SCMapHomeProfileScopeServices init] */

void FUN_10438bf3c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapHomeProfileScope.SCMapHomeProfileScopeServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438bf68);
  (*pcVar1)();
}



/* Entry: 10438bf9c; end: 10438bfbb; -[_TtC21SCMapHomeProfileScope29SCMapHomeProfileScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438bf9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113072e30));
  return;
}



/* Entry: 10438bfbc; end: 10438bfdb;  */

void FUN_10438bfbc(void)

{
  _objc_opt_self(&PTR_PTR_1129a58a0);
  return;
}



/* Entry: 10438bfdc; end: 10438c027; -[SCMapHomeFeature homeOwnerID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438bfdc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113072e60);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113072e60))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10438c028; end: 10438c03b; -[SCMapHomeFeature homeLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10438c028(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_113072e68);
}



/* Entry: 10438c03c; end: 10438c04b; -[SCMapHomeFeature homeAngle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438c03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113072e70));
  return;
}



/* Entry: 10438c04c; end: 10438c05b; -[SCMapHomeFeature zoomLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438c04c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113072e78));
  return;
}



/* Entry: 10438c05c; end: 10438c1a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438c05c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072e60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072e68);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113072e70) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113072e78) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438c1a4; end: 10438c263; -[SCMapHomeFeature initWithHomeOwnerID:homeLocation:homeAngle:zoomLevel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438c1a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_3;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_3 + _DAT_113072e60);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_3 + _DAT_113072e68);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(param_3 + _DAT_113072e70) = param_6;
  *(undefined8 *)(param_3 + _DAT_113072e78) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_3;
  lStack_58 = lVar3;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 10438c264; end: 10438c2db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438c264(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072e60);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072e68);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  uVar2 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113072e70) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113072e78) = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438c2dc; end: 10438c2df; -[SCMapHomeFeature copyWithZone:] */

void FUN_10438c2dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10438c2e0; end: 10438c2fb; -[SCMapHomeFeature description] */

void FUN_10438c2e0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438c2fc; end: 10438c377; -[SCMapHomeFeature init] */

void FUN_10438c2fc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapHomeProfileScope/SCMapHomeFeatureWrapper.swift",0x33,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438c344);
  (*pcVar1)();
}



/* Entry: 10438c378; end: 10438c3c3; -[SCMapHomeFeature .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438c378(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072e60 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113072e70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113072e78));
  return;
}



/* Entry: 10438c3c4; end: 10438c3e3;  */

void FUN_10438c3c4(void)

{
  _objc_opt_self(&PTR_PTR_1129a5960);
  return;
}



/* Entry: 10438c3e4; end: 10438c8a7;  */

long FUN_10438c3e4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10438c8a8; end: 10438c8b7; -[_TtC22SCMapSnapshotViewScope22SCMapSnapshotViewScope viewModelObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438c8a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113072ea8));
  return;
}



/* Entry: 10438c8b8; end: 10438c8c3; -[_TtC22SCMapSnapshotViewScope22SCMapSnapshotViewScope viewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438c8b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113072eb0;
  _swift_beginAccess(param_1 + _DAT_113072eb0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438c8c4; end: 10438c8cf; -[_TtC22SCMapSnapshotViewScope22SCMapSnapshotViewScope setViewContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438c8c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113072eb0;
  _swift_beginAccess(param_1 + _DAT_113072eb0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10438c8d0; end: 10438c8df; -[_TtC22SCMapSnapshotViewScope22SCMapSnapshotViewScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10438c8d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113072eb8);
}



/* Entry: 10438c8e0; end: 10438c8eb; -[_TtC22SCMapSnapshotViewScope22SCMapSnapshotViewScope friendCompassDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438c8e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113072ec0;
  _swift_beginAccess(param_1 + _DAT_113072ec0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438c8ec; end: 10438c92f;  */

void FUN_10438c8ec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10438c930; end: 10438c93b; -[_TtC22SCMapSnapshotViewScope22SCMapSnapshotViewScope setFriendCompassDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438c930(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113072ec0;
  _swift_beginAccess(param_1 + _DAT_113072ec0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10438c93c; end: 10438c98f;  */

void FUN_10438c93c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10438c990; end: 10438c9ef; -[_TtC22SCMapSnapshotViewScope22SCMapSnapshotViewScope init] */

void FUN_10438c990(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapSnapshotViewScope.SCMapSnapshotViewScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438c9bc);
  (*pcVar1)();
}



/* Entry: 10438c9f0; end: 10438ca37; -[_TtC22SCMapSnapshotViewScope22SCMapSnapshotViewScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010438ca1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010438ca20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10438c9f0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113072ea8));
  param_1 = param_1 + _DAT_113072eb0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10438ca38; end: 10438caa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438ca38(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003417ec();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113072ef8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10438caa4; end: 10438caab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438caa4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003417ec();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072ef8) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10438caac; end: 10438caf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438caac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072ef8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438caf8; end: 10438cc4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10438caf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  lVar4 = 0;
  func_0x000100335c98();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_113072eb0;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113072eb0,0);
  lVar3 = _DAT_113072ec0;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113072ec0,0);
  *(undefined8 *)(lVar5 + _DAT_113072ea8) = param_2;
  _swift_beginAccess(lVar5 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_1);
  *(undefined8 *)(lVar5 + _DAT_113072eb8) = param_3;
  _swift_beginAccess(lVar5 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  _objc_retain(param_2);
  plVar6 = &lStack_a0;
  _objc_msgSendSuper2(plVar6,puVar1);
  aplStack_b8[0] = plVar6;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar6;
}



/* Entry: 10438cc4c; end: 10438ccef; -[_TtC22SCMapSnapshotViewScope30SCMapSnapshotViewScopeServices buildWithViewContainer:viewModelObservable:source:friendCompassDelegate:] */

void FUN_10438cc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10438caf8(param_3,param_4,param_5,param_6);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10438ccf0; end: 10438cd4f; -[_TtC22SCMapSnapshotViewScope30SCMapSnapshotViewScopeServices init] */

void FUN_10438ccf0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapSnapshotViewScope.SCMapSnapshotViewScopeServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438cd1c);
  (*pcVar1)();
}



/* Entry: 10438cd50; end: 10438cd6f; -[_TtC22SCMapSnapshotViewScope30SCMapSnapshotViewScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438cd50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113072ef8));
  return;
}



/* Entry: 10438cd70; end: 10438cd7f; -[SCMapFriendCompassViewModel isFriendNearby] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10438cd70(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113072f28);
}



/* Entry: 10438cd80; end: 10438cd8f; -[SCMapFriendCompassViewModel bearingToFriendDegrees] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10438cd80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113072f30);
}



/* Entry: 10438cd90; end: 10438cdeb; -[SCMapFriendCompassViewModel distanceText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438cd90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113072f38))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113072f38);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10438cdec; end: 10438cdef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438cdec(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113072f28) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113072f30) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072f38);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438cdf0; end: 10438cf0f; -[SCMapFriendCompassViewModel initWithIsFriendNearby:bearingToFriendDegrees:distanceText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438cdf0(undefined8 param_1,long param_2,long param_3,undefined1 param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  _swift_getObjectType();
  if (param_5 == 0) {
    param_5 = 0;
    param_3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined1 *)(param_2 + _DAT_113072f28) = param_4;
  *(undefined8 *)(param_2 + _DAT_113072f30) = param_1;
  plVar1 = (long *)(param_2 + _DAT_113072f38);
  *plVar1 = param_5;
  plVar1[1] = param_3;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438cf10; end: 10438cf13; -[SCMapFriendCompassViewModel copyWithZone:] */

void FUN_10438cf10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10438cf14; end: 10438cf2f; -[SCMapFriendCompassViewModel description] */

void FUN_10438cf14(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438cf30; end: 10438cfab; -[SCMapFriendCompassViewModel init] */

void FUN_10438cf30(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapSnapshotViewScope/SCMapFriendCompassViewModelWrapper.swift",0x3f,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438cf78);
  (*pcVar1)();
}



/* Entry: 10438cfac; end: 10438cfbf; -[SCMapFriendCompassViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438cfac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113072f38 + 8))
  ;
  return;
}



/* Entry: 10438cfc0; end: 10438cfdf;  */

void FUN_10438cfc0(void)

{
  _objc_opt_self(&PTR_PTR_1129a5bd8);
  return;
}



/* Entry: 10438cfe0; end: 10438cfe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438cfe0(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113072f28) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113072f30) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072f38);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438cfe4; end: 10438cff7; -[SCMapSnapshotViewModel mapSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10438cfe4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_113072f68);
}



/* Entry: 10438cff8; end: 10438d043; -[SCMapSnapshotViewModel userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438cff8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113072f70);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113072f70))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10438d044; end: 10438d053; -[SCMapSnapshotViewModel requiresLocationPermission] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10438d044(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113072f78);
}



/* Entry: 10438d054; end: 10438d063; -[SCMapSnapshotViewModel friendCompassViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438d054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113072f80));
  return;
}



/* Entry: 10438d064; end: 10438d073; -[SCMapSnapshotViewModel hideErrorViewTappableContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10438d064(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113072f88);
}



/* Entry: 10438d074; end: 10438d0cf; -[SCMapSnapshotViewModel profileSessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438d074(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113072f90))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113072f90);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10438d0d0; end: 10438d0df; -[SCMapSnapshotViewModel showInferredLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10438d0d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113072f98);
}



/* Entry: 10438d0e0; end: 10438d0ef; -[SCMapSnapshotViewModel showLastSeenAndDistance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10438d0e0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113072fa0);
}



/* Entry: 10438d0f0; end: 10438d0ff; -[SCMapSnapshotViewModel hideCallout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10438d0f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113072fa8);
}



/* Entry: 10438d100; end: 10438d10f; -[SCMapSnapshotViewModel zoomLevelOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438d100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113072fb0));
  return;
}



/* Entry: 10438d110; end: 10438d35f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438d110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072f68);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072f70);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113072f78) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113072f80) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113072f88) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072f90);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_113072f98) = param_10;
  *(undefined1 *)(unaff_x20 + _DAT_113072fa0) = (undefined1)param_11;
  *(undefined1 *)(unaff_x20 + _DAT_113072fa8) = param_11._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_113072fb0) = param_13;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438d360; end: 10438d443; -[SCMapSnapshotViewModel initWithMapSize:userId:requiresLocationPermission:friendCompassViewModel:hideErrorViewTappableContent:profileSessionID:showInferredLocation:showLastSeenAndDistance:hideCallout:zoomLevelOverride:] */

void FUN_10438d360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  long param_9,undefined4 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  if (param_9 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_4;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_9);
  }
  _objc_retain(param_7);
  _objc_retain(param_13);
  func_0x00010438d238(param_1,param_2,param_5,param_4,param_6,param_7,param_8,param_9,uVar1,param_10
                      ,param_11);
  return;
}



/* Entry: 10438d444; end: 10438d483;  */

undefined8 FUN_10438d444(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10438d598(param_1);
  FUN_10438d6f4(param_1);
  return uVar1;
}



/* Entry: 10438d484; end: 10438d487; -[SCMapSnapshotViewModel copyWithZone:] */

void FUN_10438d484(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10438d488; end: 10438d4bb; -[SCMapSnapshotViewModel description] */

void FUN_10438d488(void)

{
  undefined1 auStack_68 [88];
  
  FUN_10438d728(auStack_68);
  FUN_10438d6f4(auStack_68);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438d4bc; end: 10438d537; -[SCMapSnapshotViewModel init] */

void FUN_10438d4bc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapSnapshotViewScope/SCMapSnapshotViewModelWrapper.swift",0x3a,2,0x52,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438d504);
  (*pcVar1)();
}



/* Entry: 10438d538; end: 10438d597; -[SCMapSnapshotViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438d538(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072f70 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113072f80));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072f90 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113072fb0));
  return;
}



/* Entry: 10438d598; end: 10438d6f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438d598(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uVar2 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072f68);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072f70);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  *(undefined1 *)(unaff_x20 + _DAT_113072f78) = *(undefined1 *)(param_1 + 4);
  uStack_48 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113072f80) = uStack_48;
  *(undefined1 *)(unaff_x20 + _DAT_113072f88) = *(undefined1 *)(param_1 + 6);
  uVar2 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072f90);
  puVar1[1] = param_1[8];
  *puVar1 = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_113072f98) = *(undefined1 *)(param_1 + 9);
  uStack_58 = param_1[8];
  uStack_60 = param_1[7];
  *(undefined1 *)(unaff_x20 + _DAT_113072fa0) = *(undefined1 *)((long)param_1 + 0x49);
  *(undefined1 *)(unaff_x20 + _DAT_113072fa8) = *(undefined1 *)((long)param_1 + 0x4a);
  uStack_68 = param_1[10];
  *(undefined8 *)(unaff_x20 + _DAT_113072fb0) = uStack_68;
  func_0x000100402194(&uStack_40,auStack_78);
  FUN_10438d830(&uStack_48,auStack_78,0x113072fe0,&UNK_10dcf2970);
  FUN_10438d830(&uStack_60,auStack_78,0x112d35ff8,&UNK_10d900cd0);
  FUN_10438d830(&uStack_68,auStack_78,0x112dc3de0,&UNK_10d9813c0);
  _objc_msgSendSuper2(&stack0xffffffffffffff78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438d6f4; end: 10438d727;  */

undefined8 FUN_10438d6f4(undefined8 param_1)

{
  (*(code *)(undefined *)0x10438c5d0)();
  return param_1;
}



/* Entry: 10438d728; end: 10438d80f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438d728(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = *(undefined8 *)(param_2 + _DAT_113072f70);
  uVar2 = ((undefined8 *)(param_2 + _DAT_113072f70))[1];
  uVar3 = *(undefined1 *)(param_2 + _DAT_113072f78);
  uVar8 = *(undefined8 *)(param_2 + _DAT_113072f80);
  uVar4 = *(undefined1 *)(param_2 + _DAT_113072f88);
  uVar5 = *(undefined1 *)(param_2 + _DAT_113072f98);
  uVar6 = *(undefined1 *)(param_2 + _DAT_113072fa0);
  puVar1 = (undefined8 *)(param_2 + _DAT_113072f90);
  uVar7 = *(undefined1 *)(param_2 + _DAT_113072fa8);
  uVar9 = *(undefined8 *)(param_2 + _DAT_113072fb0);
  uVar11 = *(undefined8 *)(param_2 + _DAT_113072f68);
  param_1[1] = ((undefined8 *)(param_2 + _DAT_113072f68))[1];
  *param_1 = uVar11;
  param_1[2] = uVar10;
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = uVar3;
  param_1[5] = uVar8;
  *(undefined1 *)(param_1 + 6) = uVar4;
  uVar10 = puVar1[1];
  uVar11 = *puVar1;
  param_1[8] = puVar1[1];
  param_1[7] = uVar11;
  *(undefined1 *)(param_1 + 9) = uVar5;
  *(undefined1 *)((long)param_1 + 0x49) = uVar6;
  *(undefined1 *)((long)param_1 + 0x4a) = uVar7;
  param_1[10] = uVar9;
  _swift_bridgeObjectRetain(uVar2);
  _objc_retain(uVar8);
  _swift_bridgeObjectRetain(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar9);
  return;
}



/* Entry: 10438d810; end: 10438d82f;  */

void FUN_10438d810(void)

{
  _objc_opt_self(&PTR_PTR_1129a5cb0);
  return;
}


