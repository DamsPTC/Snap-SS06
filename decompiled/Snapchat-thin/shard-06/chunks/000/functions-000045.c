/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10442a580; end: 10442a5b7;  */

void FUN_10442a580(undefined8 param_1)

{
  if (lRam0000000113078a88 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e805bf8);
  return;
}



/* Entry: 10442a5b8; end: 10442a65b;  */

void FUN_10442a5b8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_60 = &UNK_10dcfd2c0;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = &UNK_10dcfd2d8;
    puStack_40 = &UNK_10dcfd2f0;
    puStack_38 = &UNK_10dcfd308;
    puStack_30 = &UNK_10dcfd320;
    puStack_28 = &UNK_10dcfd320;
    lStack_50 = lStack_58;
    _swift_updateClassMetadata2(param_1,0x100,8,&puStack_60,param_1 + 0x50);
  }
  return;
}



/* Entry: 10442a65c; end: 10442a7c3;  */

int FUN_10442a65c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10442a6d8;
        goto LAB_10442a6bc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10442a6bc:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10442a6d8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10442a7c4; end: 10442a803;  */

void FUN_10442a7c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfd360;
  _swift_getWitnessTable(&UNK_10dcfd360,&UNK_11076d588);
  puRam0000000113078a98 = puVar1;
  return;
}



/* Entry: 10442a804; end: 10442a813;  */

void FUN_10442a804(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000104429e40(param_1,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar1);
  puVar5 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar6 + 8))(puVar4,lVar1);
    puVar5 = puVar2;
  }
  (**(code **)(lVar3 + 0x10))(lVar3,puVar5);
  _objc_release(puVar5);
  return;
}



/* Entry: 10442a814; end: 10442a85f; -[_TtC18OperaPageViewScope20OperaPageViewContext pageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442a814(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113078aa0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113078aa0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10442a860; end: 10442a86f; -[_TtC18OperaPageViewScope20OperaPageViewContext isAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10442a860(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113078aa8);
}



/* Entry: 10442a870; end: 10442a947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442a870(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113078aa0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113078aa8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10442a948; end: 10442a9bb; -[_TtC18OperaPageViewScope20OperaPageViewContext initWithPageId:isAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442a948(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113078aa0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_113078aa8) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10442a9bc; end: 10442aa1b; -[_TtC18OperaPageViewScope20OperaPageViewContext init] */

void FUN_10442a9bc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("OperaPageViewScope.OperaPageViewContext",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10442a9e8);
  (*pcVar1)();
}



/* Entry: 10442aa1c; end: 10442aa2f; -[_TtC18OperaPageViewScope20OperaPageViewContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442aa1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113078aa0 + 8))
  ;
  return;
}



/* Entry: 10442aa30; end: 10442aa4f;  */

void FUN_10442aa30(void)

{
  _objc_opt_self(&PTR_PTR_1129b22d8);
  return;
}



/* Entry: 10442aa50; end: 10442aa5f; -[OperaPageViewScope context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442aa50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078ad8));
  return;
}



/* Entry: 10442aa60; end: 10442aaa7; -[OperaPageViewScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442aa60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113078ae0;
  _swift_beginAccess(param_1 + _DAT_113078ae0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442aaa8; end: 10442aaff; -[OperaPageViewScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442aaa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113078ae0;
  _swift_beginAccess(param_1 + _DAT_113078ae0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10442ab00; end: 10442abbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10442ab00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113078ae0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078ae0,0);
  *(undefined8 *)(unaff_x20 + _DAT_113078ad8) = param_1;
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



/* Entry: 10442abc0; end: 10442ac63; -[OperaPageViewScope initWithContext:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442abc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_113078ae0;
  _swift_unknownObjectWeakInit(param_1 + _DAT_113078ae0,0);
  *(undefined8 *)(param_1 + _DAT_113078ad8) = param_3;
  _swift_beginAccess(param_1 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_68,puVar1);
  return;
}



/* Entry: 10442ac64; end: 10442ac8f; -[OperaPageViewScope init] */

void FUN_10442ac64(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("OperaPageViewScope.OperaPageViewScope",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10442ac90);
  (*pcVar1)();
}



/* Entry: 10442ac90; end: 10442ad37; -[OperaPageViewScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10442ac90(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078ad8));
  param_1 = param_1 + _DAT_113078ae0;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10442ad38; end: 10442ada3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442ad38(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10442aff8();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113078af0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10442ada4; end: 10442adab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442ada4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10442aff8();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078af0) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10442adac; end: 10442adf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442adac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078af0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10442adf8; end: 10442aedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10442adf8(long param_1,undefined8 param_2)

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
  FUN_10442af54();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113078ae0;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113078ae0,0);
  *(long *)(lVar4 + _DAT_113078ad8) = param_1;
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



/* Entry: 10442aee0; end: 10442af53; -[_TtC18OperaPageViewScope26OperaPageViewScopeServices buildWithContext:delegate:] */

void FUN_10442aee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10442adf8(param_3,param_4);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10442af54; end: 10442af73;  */

void FUN_10442af54(void)

{
  _objc_opt_self(&PTR_PTR_1129b23a0);
  return;
}



/* Entry: 10442af74; end: 10442af9f; -[_TtC18OperaPageViewScope26OperaPageViewScopeServices init] */

void FUN_10442af74(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("OperaPageViewScope.OperaPageViewScopeServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10442afa0);
  (*pcVar1)();
}



/* Entry: 10442afa0; end: 10442afa3;  */

void FUN_10442afa0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10442afa4; end: 10442afd7;  */

void FUN_10442afa4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10442afd8; end: 10442aff7; -[_TtC18OperaPageViewScope26OperaPageViewScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442afd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113078af0));
  return;
}



/* Entry: 10442aff8; end: 10442b017;  */

void FUN_10442aff8(void)

{
  _objc_opt_self(&PTR_PTR_1129b2468);
  return;
}



/* Entry: 10442b018; end: 10442b01b;  */

void FUN_10442b018(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10442b01c; end: 10442b067; -[ActiveOperaSessionScope operaSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442b01c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113078b48);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113078b48))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10442b068; end: 10442b087; -[ActiveOperaSessionScope operaController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442b068(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113078b50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442b088; end: 10442b0a7; -[ActiveOperaSessionScope playlistItemController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442b088(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113078b58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442b0a8; end: 10442b0c7; -[ActiveOperaSessionScope eventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442b0a8(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113078b60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442b0c8; end: 10442b10f; -[ActiveOperaSessionScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442b0c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113078b68;
  _swift_beginAccess(param_1 + _DAT_113078b68,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442b110; end: 10442b167; -[ActiveOperaSessionScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442b110(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113078b68;
  _swift_beginAccess(param_1 + _DAT_113078b68,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10442b168; end: 10442b28f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10442b168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar3 = _DAT_113078b68;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078b68,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113078b48);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113078b50) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113078b58) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113078b60) = param_5;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_6);
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  puVar4 = auStack_88;
  _objc_msgSendSuper2(puVar4,puVar2);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  return puVar4;
}



/* Entry: 10442b290; end: 10442b347; -[ActiveOperaSessionScope initWithOperaSessionId:operaController:playlistItemController:eventAnnouncer:delegate:] */

undefined8
FUN_10442b290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  FUN_10442b6b0(param_3,param_2,param_4,param_5,param_6,param_7);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  return param_3;
}



/* Entry: 10442b348; end: 10442b44b; -[ActiveOperaSessionScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10442b348(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113078b48 + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113078b50));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113078b58));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113078b60));
  param_1 = param_1 + _DAT_113078b68;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10442b44c; end: 10442b593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10442b44c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10442b814();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113078b68;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113078b68,0);
  plVar5 = (long *)(lVar4 + _DAT_113078b48);
  *plVar5 = param_1;
  plVar5[1] = param_2;
  *(undefined8 *)(lVar4 + _DAT_113078b50) = param_3;
  *(undefined8 *)(lVar4 + _DAT_113078b58) = param_4;
  *(undefined8 *)(lVar4 + _DAT_113078b60) = param_5;
  _swift_beginAccess(lVar4 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_6);
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _swift_bridgeObjectRetain(param_2);
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
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



/* Entry: 10442b594; end: 10442b667; -[_TtC23ActiveOperaSessionScope31ActiveOperaSessionScopeServices buildWithOperaSessionId:operaController:playlistItemController:eventAnnouncer:delegate:] */

void FUN_10442b594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_1);
  FUN_10442b44c(param_3,param_2,param_4,param_5,param_6,param_7);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10442b668; end: 10442b66b;  */

void FUN_10442b668(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10442b66c; end: 10442b69f;  */

void FUN_10442b66c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10442b6a0; end: 10442b6af; -[_TtC23ActiveOperaSessionScope31ActiveOperaSessionScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442b6a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113078b78));
  return;
}



/* Entry: 10442b6b0; end: 10442b7ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442b6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar3 = _DAT_113078b68;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078b68,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113078b48);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113078b50) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113078b58) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113078b60) = param_5;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_6);
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_msgSendSuper2(&stack0xffffffffffffff78,puVar2);
  return;
}



/* Entry: 10442b7ac; end: 10442b813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442b7ac(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10442b844();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113078b78) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10442b814; end: 10442b833;  */

void FUN_10442b814(void)

{
  _objc_opt_self(&PTR_PTR_1129b2528);
  return;
}



/* Entry: 10442b834; end: 10442b843;  */

undefined1  [16] FUN_10442b834(void)

{
  return ZEXT816(0x11076d788);
}



/* Entry: 10442b844; end: 10442b863;  */

void FUN_10442b844(void)

{
  _objc_opt_self(&PTR_PTR_1129b2608);
  return;
}



/* Entry: 10442b864; end: 10442b867;  */

void FUN_10442b864(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10442b868; end: 10442b8bf; -[SCOperaLaunchingCandidates dataModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442b868(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113078bd0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
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



/* Entry: 10442b8c0; end: 10442b8cf; -[SCOperaLaunchingCandidates firstDisplayGroupDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442b8c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078bd8));
  return;
}



/* Entry: 10442b8d0; end: 10442b8ef; -[SCOperaLaunchingCandidates playlistFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442b8d0(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113078be0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442b8f0; end: 10442b95f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442b8f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078bd0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113078bd8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113078be0) = 0;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10442b960; end: 10442b9f3; -[SCOperaLaunchingCandidates initWithDataModels:firstDisplayGroupDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442b960(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sypN_11034f1a8 + 8);
  *(undefined8 *)(param_1 + _DAT_113078bd0) = param_3;
  *(undefined8 *)(param_1 + _DAT_113078bd8) = param_4;
  *(undefined8 *)(param_1 + _DAT_113078be0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10442b9f4; end: 10442babb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442b9f4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078bd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113078bd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113078be0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10442babc; end: 10442bb2b; -[SCOperaLaunchingCandidates initWithPlaylistFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442babc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113078bd0) = 0;
  *(undefined8 *)(param_1 + _DAT_113078bd8) = 0;
  *(undefined8 *)(param_1 + _DAT_113078be0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10442bb2c; end: 10442bb8b; -[SCOperaLaunchingCandidates init] */

void FUN_10442bb2c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCOperaSessionScope.OperaLaunchingCandidates",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10442bb58);
  (*pcVar1)();
}



/* Entry: 10442bb8c; end: 10442bbd3; -[SCOperaLaunchingCandidates .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442bb8c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113078bd0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078bd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113078be0));
  return;
}



/* Entry: 10442bbd4; end: 10442bbf3;  */

void FUN_10442bbd4(void)

{
  _objc_opt_self(&PTR_PTR_1129b26c8);
  return;
}



/* Entry: 10442bbf4; end: 10442bc1b;  */

void FUN_10442bbf4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11076d858;
  if (lRam0000000113078c10 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000113078c10 = param_1;
  }
  return;
}



/* Entry: 10442bc1c; end: 10442bc5f;  */

void FUN_10442bc1c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10442bc60; end: 10442bcfb;  */

long * FUN_10442bc60(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar3 = *param_2;
    lVar6 = param_2[3];
    lVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar3;
    param_1[3] = lVar6;
    param_1[2] = lVar5;
    lVar3 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar3;
    iVar2 = *(int *)(param_3 + 0x28);
    lVar3 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))
              ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10442bcfc; end: 10442bd33;  */

void FUN_10442bcfc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_2 + 0x28);
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00010442bd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 10442bd34; end: 10442bf13;  */

undefined8 * FUN_10442bd34(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  iVar1 = *(int *)(param_3 + 0x28);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  return param_1;
}



/* Entry: 10442bf14; end: 10442bf2b;  */

void FUN_10442bf14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10442bf2c; end: 10442bf3b; -[_TtC19SCOperaSessionScope19SCOperaSessionScope sessionContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442bf2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078cc8));
  return;
}



/* Entry: 10442bf3c; end: 10442bf47; -[_TtC19SCOperaSessionScope19SCOperaSessionScope parentViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442bf3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113078cd0;
  _swift_beginAccess(param_1 + _DAT_113078cd0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442bf48; end: 10442bf53; -[_TtC19SCOperaSessionScope19SCOperaSessionScope setParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442bf48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113078cd0;
  _swift_beginAccess(param_1 + _DAT_113078cd0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10442bf54; end: 10442bf5f; -[_TtC19SCOperaSessionScope19SCOperaSessionScope deckContainerFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442bf54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113078cd8;
  _swift_beginAccess(param_1 + _DAT_113078cd8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442bf60; end: 10442bf6b; -[_TtC19SCOperaSessionScope19SCOperaSessionScope setDeckContainerFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442bf60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113078cd8;
  _swift_beginAccess(param_1 + _DAT_113078cd8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10442bf6c; end: 10442bf77; -[_TtC19SCOperaSessionScope19SCOperaSessionScope baseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442bf6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113078ce0;
  _swift_beginAccess(param_1 + _DAT_113078ce0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442bf78; end: 10442bf83; -[_TtC19SCOperaSessionScope19SCOperaSessionScope setBaseView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442bf78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113078ce0;
  _swift_beginAccess(param_1 + _DAT_113078ce0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10442bf84; end: 10442bf93; -[_TtC19SCOperaSessionScope19SCOperaSessionScope candidates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442bf84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078ce8));
  return;
}



/* Entry: 10442bf94; end: 10442bfa3; -[_TtC19SCOperaSessionScope19SCOperaSessionScope presentingConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442bf94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078cf0));
  return;
}



/* Entry: 10442bfa4; end: 10442bfaf; -[_TtC19SCOperaSessionScope19SCOperaSessionScope operaPresenterDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442bfa4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113078cf8;
  _swift_beginAccess(param_1 + _DAT_113078cf8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442bfb0; end: 10442bff3;  */

void FUN_10442bfb0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10442bff4; end: 10442bfff; -[_TtC19SCOperaSessionScope19SCOperaSessionScope setOperaPresenterDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442bff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113078cf8;
  _swift_beginAccess(param_1 + _DAT_113078cf8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10442c000; end: 10442c053;  */

void FUN_10442c000(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10442c054; end: 10442c0af; -[_TtC19SCOperaSessionScope19SCOperaSessionScope operaPlugins] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442c054(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_113078d00);
  _swift_bridgeObjectRetain(uVar3);
  uVar1 = 0x112e9e980;
  func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
  uVar2 = uVar3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,uVar1);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10442c0b0; end: 10442c0cf; -[_TtC19SCOperaSessionScope19SCOperaSessionScope transitionAnimator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442c0b0(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113078d08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10442c0d0; end: 10442c0df; -[_TtC19SCOperaSessionScope19SCOperaSessionScope composerOperaEventProviders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442c0d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113078d10));
  return;
}



/* Entry: 10442c0e0; end: 10442c0ef; -[_TtC19SCOperaSessionScope19SCOperaSessionScope intentToOpenOperaTs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10442c0e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113078d18);
}



/* Entry: 10442c0f0; end: 10442c4df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10442c0f0(double param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined *param_8,undefined8 param_9,
             undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long unaff_x20;
  long lVar12;
  undefined1 auStack_140 [8];
  long *plStack_138;
  undefined8 uStack_130;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _objc_allocWithZone();
  lVar2 = _DAT_113078cd0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078cd0,0);
  lVar3 = _DAT_113078cd8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078cd8,0);
  lVar4 = _DAT_113078ce0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078ce0,0);
  lVar5 = _DAT_113078cf8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078cf8,0);
  plVar10 = param_2;
  if (param_2 == (long *)0x0) {
    __s10Foundation4DateVACycfC(puVar11);
    lVar8 = 0;
    FUN_10442e758();
    lVar9 = lVar8;
    plStack_138 = param_2;
    _objc_allocWithZone();
    *(undefined8 *)(lVar9 + _DAT_113078d80) = 0xffffffffffffffff;
    *(undefined8 *)(lVar9 + _DAT_113078d88) = 0;
    *(undefined8 *)(lVar9 + _DAT_113078d90) = 0;
    *(undefined8 *)(lVar9 + _DAT_113078d98) = 0xffffffffffffffff;
    *(undefined8 *)(lVar9 + _DAT_113078da0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar9 + _DAT_113078da8) = 0xffffffffffffffff;
    uStack_130 = param_6;
    (**(code **)(lVar12 + 0x10))(lVar9 + _DAT_1138135f0,puVar11,lVar7);
    param_6 = uStack_130;
    *(undefined8 *)(lVar9 + _DAT_1138135f8) = 0;
    plVar10 = &lStack_78;
    lStack_78 = lVar9;
    lStack_70 = lVar8;
    _objc_msgSendSuper2(plVar10,PTR_s_init_1125d9248);
    param_2 = plStack_138;
    (**(code **)(lVar12 + 8))(puVar11,lVar7);
  }
  *(long **)(unaff_x20 + _DAT_113078cc8) = plVar10;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,0);
  _swift_beginAccess(unaff_x20 + lVar4,auStack_c0,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_113078ce8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113078cf0) = param_6;
  _swift_beginAccess(unaff_x20 + lVar5,auStack_d8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar5,param_7);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_8 != (undefined *)0x0) {
    puVar1 = param_8;
  }
  *(undefined **)(unaff_x20 + _DAT_113078d00) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113078d08) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113078d10) = param_10;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_9);
  func_0x00010bd55f40();
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10442c4d8);
    (*pcVar6)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10442c4dc);
    (*pcVar6)();
  }
  if (param_1 < 1.8446744073709552e+19) {
    *(long *)(unaff_x20 + _DAT_113078d18) = (long)param_1;
    puVar11 = auStack_e8;
    _objc_msgSendSuper2(puVar11,PTR_s_init_1125d9248);
    _objc_release(param_2);
    _objc_release(param_5);
    _objc_release(param_6);
    _swift_unknownObjectRelease(param_7);
    _swift_unknownObjectRelease(param_9);
    _objc_release(param_10);
    _objc_release(param_3);
    _objc_release(param_4);
    return puVar11;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10442c4e0);
  (*pcVar6)();
}



/* Entry: 10442c4e0; end: 10442c63f; -[_TtC19SCOperaSessionScope19SCOperaSessionScope initWithSessionContext:parentViewController:baseView:candidates:presentingConfig:operaPresenterDelegate:operaPlugins:transitionAnimator:composerOperaEventProviders:] */

undefined8
FUN_10442c4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_9 == 0) {
    param_9 = 0;
  }
  else {
    uVar1 = 0x112e9e980;
    func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_9,uVar1);
  }
  uVar1 = param_3;
  _objc_retain();
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _swift_unknownObjectRetain(param_8);
  _swift_unknownObjectRetain(param_10);
  uVar3 = param_11;
  _objc_retain(param_11);
  FUN_10442d8b0(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_7);
  _swift_unknownObjectRelease(param_8);
  _swift_unknownObjectRelease(param_10);
  _objc_release(uVar3);
  return param_3;
}



/* Entry: 10442c640; end: 10442c687; -[_TtC19SCOperaSessionScope19SCOperaSessionScope dealloc] */

void FUN_10442c640(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  _swift_getObjectType();
  puVar1 = PTR_s_dealloc_112525b20;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&uStack_30,puVar1);
  return;
}



/* Entry: 10442c688; end: 10442c73f; -[_TtC19SCOperaSessionScope19SCOperaSessionScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442c688(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078cc8));
  func_0x000100db8654(param_1 + _DAT_113078cd0);
  func_0x000100db8654(param_1 + _DAT_113078cd8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113078ce0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078ce8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113078cf0));
  func_0x000100db8654(param_1 + _DAT_113078cf8);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113078d00));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113078d08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113078d10));
  return;
}



/* Entry: 10442c740; end: 10442cb43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10442c740(double param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined *param_9,
             undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long *plStack_140;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lVar13 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)&plStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _objc_allocWithZone();
  lVar2 = _DAT_113078cd0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078cd0,0);
  lVar3 = _DAT_113078cd8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078cd8,0);
  lVar4 = _DAT_113078ce0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078ce0,0);
  lVar5 = _DAT_113078cf8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078cf8,0);
  plVar10 = param_2;
  if (param_2 == (long *)0x0) {
    __s10Foundation4DateVACycfC(lVar12);
    lVar8 = 0;
    FUN_10442e758();
    lVar9 = lVar8;
    plStack_140 = param_2;
    _objc_allocWithZone();
    *(undefined8 *)(lVar9 + _DAT_113078d80) = 0xffffffffffffffff;
    *(undefined8 *)(lVar9 + _DAT_113078d88) = 0;
    *(undefined8 *)(lVar9 + _DAT_113078d90) = 0;
    *(undefined8 *)(lVar9 + _DAT_113078d98) = 0xffffffffffffffff;
    *(undefined8 *)(lVar9 + _DAT_113078da0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar9 + _DAT_113078da8) = 0xffffffffffffffff;
    (**(code **)(lVar13 + 0x10))(lVar9 + _DAT_1138135f0,lVar12,lVar7);
    *(undefined8 *)(lVar9 + _DAT_1138135f8) = 0;
    plVar10 = &lStack_78;
    lStack_78 = lVar9;
    lStack_70 = lVar8;
    _objc_msgSendSuper2(plVar10,PTR_s_init_1125d9248);
    param_2 = plStack_140;
    (**(code **)(lVar13 + 8))(lVar12,lVar7);
  }
  *(long **)(unaff_x20 + _DAT_113078cc8) = plVar10;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_4);
  _swift_beginAccess(unaff_x20 + lVar4,auStack_c0,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_5);
  *(undefined8 *)(unaff_x20 + _DAT_113078ce8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113078cf0) = param_7;
  _swift_beginAccess(unaff_x20 + lVar5,auStack_d8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar5,param_8);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_9 != (undefined *)0x0) {
    puVar1 = param_9;
  }
  *(undefined **)(unaff_x20 + _DAT_113078d00) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113078d08) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_113078d10) = param_11;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _swift_unknownObjectRetain(param_10);
  func_0x00010bd55f40();
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10442cb3c);
    (*pcVar6)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10442cb40);
    (*pcVar6)();
  }
  if (param_1 < 1.8446744073709552e+19) {
    *(long *)(unaff_x20 + _DAT_113078d18) = (long)param_1;
    puVar11 = auStack_e8;
    _objc_msgSendSuper2(puVar11,PTR_s_init_1125d9248);
    _objc_release(param_2);
    _swift_unknownObjectRelease(param_4);
    _objc_release(param_6);
    _objc_release(param_7);
    _swift_unknownObjectRelease(param_8);
    _swift_unknownObjectRelease(param_10);
    _objc_release(param_11);
    _objc_release(param_3);
    _objc_release(param_5);
    return puVar11;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10442cb44);
  (*pcVar6)();
}



/* Entry: 10442cb44; end: 10442ccaf; -[_TtC19SCOperaSessionScope19SCOperaSessionScope initWithSessionContext:parentViewController:deckContainerFactory:baseView:candidates:presentingConfig:operaPresenterDelegate:operaPlugins:transitionAnimator:composerOperaEventProviders:] */

undefined8
FUN_10442cb44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_70;
  
  if (param_10 == 0) {
    lStack_70 = 0;
  }
  else {
    uVar1 = 0x112e9e980;
    func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_10,uVar1);
    lStack_70 = param_10;
  }
  uVar1 = param_3;
  _objc_retain();
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar2 = param_6;
  _objc_retain();
  _objc_retain(param_7);
  _objc_retain(param_8);
  _swift_unknownObjectRetain(param_9);
  _swift_unknownObjectRetain(param_11);
  uVar3 = param_12;
  _objc_retain();
  func_0x00010442dc30(param_3,param_4,param_5,param_6,param_7,param_8,param_9,lStack_70,param_11,
                      param_12);
  _objc_release(uVar1);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_8);
  _swift_unknownObjectRelease(param_9);
  _swift_unknownObjectRelease(param_11);
  _objc_release(uVar3);
  return param_3;
}



/* Entry: 10442ccb0; end: 10442ccdb; -[_TtC19SCOperaSessionScope19SCOperaSessionScope init] */

void FUN_10442ccb0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCOperaSessionScope.SCOperaSessionScope",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10442ccdc);
  (*pcVar1)();
}



/* Entry: 10442ccdc; end: 10442cd27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442ccdc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078d28) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10442cd28; end: 10442d123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10442cd28(double param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined *param_8,
                    undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long extraout_x8;
  long lVar13;
  undefined1 *puVar14;
  undefined1 auStack_160 [8];
  long *plStack_158;
  long lStack_150;
  long *aplStack_100 [2];
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lVar13 = *(long *)(lVar7 + -8);
  lVar8 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar14 = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x00010036def4();
  lVar9 = lVar8;
  _objc_allocWithZone();
  lVar2 = _DAT_113078cd0;
  _swift_unknownObjectWeakInit(lVar9 + _DAT_113078cd0,0);
  lVar3 = _DAT_113078cd8;
  _swift_unknownObjectWeakInit(lVar9 + _DAT_113078cd8,0);
  lVar4 = _DAT_113078ce0;
  _swift_unknownObjectWeakInit(lVar9 + _DAT_113078ce0,0);
  lVar5 = _DAT_113078cf8;
  _swift_unknownObjectWeakInit(lVar9 + _DAT_113078cf8,0);
  plVar12 = param_2;
  if (param_2 == (long *)0x0) {
    __s10Foundation4DateVACycfC(puVar14);
    lVar10 = 0;
    FUN_10442e758();
    lVar11 = lVar10;
    plStack_158 = param_2;
    _objc_allocWithZone();
    *(undefined8 *)(lVar11 + _DAT_113078d80) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + _DAT_113078d88) = 0;
    *(undefined8 *)(lVar11 + _DAT_113078d90) = 0;
    *(undefined8 *)(lVar11 + _DAT_113078d98) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + _DAT_113078da0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + _DAT_113078da8) = 0xffffffffffffffff;
    lStack_150 = lVar8;
    (**(code **)(lVar13 + 0x10))(lVar11 + _DAT_1138135f0,puVar14,lVar7);
    lVar8 = lStack_150;
    *(undefined8 *)(lVar11 + _DAT_1138135f8) = 0;
    plVar12 = &lStack_78;
    lStack_78 = lVar11;
    lStack_70 = lVar10;
    _objc_msgSendSuper2(plVar12,PTR_s_init_1125d9248);
    param_2 = plStack_158;
    (**(code **)(lVar13 + 8))(puVar14,lVar7);
  }
  *(long **)(lVar9 + _DAT_113078cc8) = plVar12;
  _swift_beginAccess(lVar9 + lVar2,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar9 + lVar2,param_3);
  _swift_beginAccess(lVar9 + lVar3,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(lVar9 + lVar3,0);
  _swift_beginAccess(lVar9 + lVar4,auStack_c0,1,0);
  _swift_unknownObjectWeakAssign(lVar9 + lVar4,param_4);
  *(undefined8 *)(lVar9 + _DAT_113078ce8) = param_5;
  *(undefined8 *)(lVar9 + _DAT_113078cf0) = param_6;
  _swift_beginAccess(lVar9 + lVar5,auStack_d8,1,0);
  _swift_unknownObjectWeakAssign(lVar9 + lVar5,param_7);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_8 != (undefined *)0x0) {
    puVar1 = param_8;
  }
  *(undefined **)(lVar9 + _DAT_113078d00) = puVar1;
  *(undefined8 *)(lVar9 + _DAT_113078d08) = param_9;
  *(undefined8 *)(lVar9 + _DAT_113078d10) = param_10;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _swift_bridgeObjectRetain(param_8);
  _swift_unknownObjectRetain(param_9);
  func_0x00010bd55f40();
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10442d11c);
    (*pcVar6)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10442d120);
    (*pcVar6)();
  }
  if (param_1 < 1.8446744073709552e+19) {
    *(long *)(lVar9 + _DAT_113078d18) = (long)param_1;
    plVar12 = &lStack_e8;
    lStack_e8 = lVar9;
    lStack_e0 = lVar8;
    _objc_msgSendSuper2(plVar12,PTR_s_init_1125d9248);
    aplStack_100[0] = plVar12;
    func_0x00010008a7c8(&uStack_f0,aplStack_100);
    func_0x000100083b20(aplStack_100);
    _swift_release(uStack_f0);
    _swift_unknownObjectRelease(aplStack_100[0]);
    return plVar12;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10442d124);
  (*pcVar6)();
}



/* Entry: 10442d124; end: 10442d6af; -[_TtC19SCOperaSessionScope27SCOperaSessionScopeServices buildWithSessionContext:parentViewController:baseView:candidates:presentingConfig:operaPresenterDelegate:operaPlugins:transitionAnimator:composerOperaEventProviders:] */

void FUN_10442d124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_68;
  
  if (param_9 == 0) {
    lStack_68 = 0;
  }
  else {
    uVar1 = 0x112e9e980;
    func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_9,uVar1);
    lStack_68 = param_9;
  }
  uVar1 = param_3;
  _objc_retain();
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _swift_unknownObjectRetain(param_8);
  _swift_unknownObjectRetain(param_10);
  uVar3 = param_11;
  _objc_retain(param_11);
  _objc_retain(param_1);
  FUN_10442cd28(param_3,param_4,param_5,param_6,param_7,param_8,lStack_68,param_10,param_11);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_7);
  _swift_unknownObjectRelease(param_8);
  _swift_unknownObjectRelease(param_10);
  _objc_release(uVar3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(lStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10442d6b0; end: 10442d83b; -[_TtC19SCOperaSessionScope27SCOperaSessionScopeServices buildWithSessionContext:parentViewController:deckContainerFactory:baseView:candidates:presentingConfig:operaPresenterDelegate:operaPlugins:transitionAnimator:composerOperaEventProviders:] */

void FUN_10442d6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_68;
  
  if (param_10 == 0) {
    lStack_68 = 0;
  }
  else {
    uVar1 = 0x112e9e980;
    func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_10,uVar1);
    lStack_68 = param_10;
  }
  uVar1 = param_3;
  _objc_retain();
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  uVar2 = param_6;
  _objc_retain();
  _objc_retain(param_7);
  _objc_retain(param_8);
  _swift_unknownObjectRetain(param_9);
  _swift_unknownObjectRetain(param_11);
  uVar3 = param_12;
  _objc_retain();
  _objc_retain(param_1);
  func_0x00010442d2a0(param_3,param_4,param_5,param_6,param_7,param_8,param_9,lStack_68,param_11,
                      param_12);
  _objc_release(uVar1);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_8);
  _swift_unknownObjectRelease(param_9);
  _swift_unknownObjectRelease(param_11);
  _objc_release(uVar3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(lStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10442d83c; end: 10442d867; -[_TtC19SCOperaSessionScope27SCOperaSessionScopeServices init] */

void FUN_10442d83c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCOperaSessionScope.SCOperaSessionScopeServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10442d868);
  (*pcVar1)();
}



/* Entry: 10442d868; end: 10442d86b;  */

void FUN_10442d868(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10442d86c; end: 10442d89f;  */

void FUN_10442d86c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10442d8a0; end: 10442d8af; -[_TtC19SCOperaSessionScope27SCOperaSessionScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442d8a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113078d28));
  return;
}



/* Entry: 10442d8b0; end: 10442dfc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442d8b0(double param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined *param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  long lVar13;
  long unaff_x20;
  long *plVar14;
  undefined1 *puVar15;
  undefined1 auStack_140 [8];
  long *plStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  uStack_108 = param_10;
  uStack_128 = param_3;
  uStack_120 = param_4;
  uStack_118 = param_7;
  puStack_110 = param_8;
  uStack_100 = param_5;
  uStack_f8 = param_6;
  uStack_f0 = param_9;
  _swift_getObjectType();
  lVar10 = 0;
  __s10Foundation4DateVMa();
  lVar13 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar2 = _DAT_113078cd0;
  puVar15 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078cd0,0);
  lVar3 = _DAT_113078cd8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078cd8,0);
  lVar4 = _DAT_113078ce0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078ce0,0);
  lVar5 = _DAT_113078cf8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113078cf8,0);
  plVar14 = param_2;
  if (param_2 == (long *)0x0) {
    __s10Foundation4DateVACycfC(puVar15);
    lVar11 = 0;
    FUN_10442e758();
    lVar12 = lVar11;
    plStack_138 = param_2;
    _objc_allocWithZone();
    *(undefined8 *)(lVar12 + _DAT_113078d80) = 0xffffffffffffffff;
    *(undefined8 *)(lVar12 + _DAT_113078d88) = 0;
    *(undefined8 *)(lVar12 + _DAT_113078d90) = 0;
    *(undefined8 *)(lVar12 + _DAT_113078d98) = 0xffffffffffffffff;
    *(undefined8 *)(lVar12 + _DAT_113078da0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar12 + _DAT_113078da8) = 0xffffffffffffffff;
    (**(code **)(lVar13 + 0x10))(lVar12 + _DAT_1138135f0,puVar15,lVar10);
    *(undefined8 *)(lVar12 + _DAT_1138135f8) = 0;
    param_2 = &lStack_78;
    lStack_78 = lVar12;
    lStack_70 = lVar11;
    _objc_msgSendSuper2(param_2,PTR_s_init_1125d9248);
    plVar14 = plStack_138;
    (**(code **)(lVar13 + 8))(puVar15,lVar10);
  }
  *(long **)(unaff_x20 + _DAT_113078cc8) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,uStack_128);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,0);
  _swift_beginAccess(unaff_x20 + lVar4,auStack_c0,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,uStack_120);
  uVar7 = uStack_f8;
  uVar6 = uStack_100;
  *(undefined8 *)(unaff_x20 + _DAT_113078ce8) = uStack_100;
  *(undefined8 *)(unaff_x20 + _DAT_113078cf0) = uStack_f8;
  _swift_beginAccess(unaff_x20 + lVar5,auStack_d8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar5,uStack_118);
  uVar8 = uStack_f0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_110 != (undefined *)0x0) {
    puVar1 = puStack_110;
  }
  *(undefined **)(unaff_x20 + _DAT_113078d00) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113078d08) = uStack_f0;
  *(undefined8 *)(unaff_x20 + _DAT_113078d10) = uStack_108;
  _objc_retain();
  _objc_retain(plVar14);
  _objc_retain(uVar6);
  _objc_retain(uVar7);
  _swift_unknownObjectRetain(uVar8);
  func_0x00010bd55f40();
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10442dc28);
    (*pcVar9)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10442dc2c);
    (*pcVar9)();
  }
  if (param_1 < 1.8446744073709552e+19) {
    *(long *)(unaff_x20 + _DAT_113078d18) = (long)param_1;
    _objc_msgSendSuper2(&stack0xffffffffffffff18,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10442dc30);
  (*pcVar9)();
}


