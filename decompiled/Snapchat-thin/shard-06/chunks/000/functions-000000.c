/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10437b570; end: 10437b5cf; -[_TtC26SCMapAddressSelectionScope34SCMapAddressSelectionScopeServices init] */

void FUN_10437b570(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapAddressSelectionScope.SCMapAddressSelectionScopeServices",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10437b59c);
  (*pcVar1)();
}



/* Entry: 10437b5d0; end: 10437b5ef; -[_TtC26SCMapAddressSelectionScope34SCMapAddressSelectionScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437b5d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113072160));
  return;
}



/* Entry: 10437b5f0; end: 10437b60f;  */

void FUN_10437b5f0(void)

{
  _objc_opt_self(&PTR_PTR_1129a4178);
  return;
}



/* Entry: 10437b610; end: 10437b657; -[_TtC21SCMapBitmojiTrayScope21SCMapBitmojiTrayScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437b610(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113072190;
  _swift_beginAccess(param_1 + _DAT_113072190,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10437b658; end: 10437b6af; -[_TtC21SCMapBitmojiTrayScope21SCMapBitmojiTrayScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437b658(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113072190;
  _swift_beginAccess(param_1 + _DAT_113072190,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10437b6b0; end: 10437b6bf; -[_TtC21SCMapBitmojiTrayScope21SCMapBitmojiTrayScope launchSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10437b6b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113072198);
}



/* Entry: 10437b6c0; end: 10437b6cf; -[_TtC21SCMapBitmojiTrayScope21SCMapBitmojiTrayScope sourceSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437b6c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130721a0));
  return;
}



/* Entry: 10437b6d0; end: 10437b723; -[_TtC21SCMapBitmojiTrayScope21SCMapBitmojiTrayScope reactionEmojis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437b6d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1130721a8);
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



/* Entry: 10437b724; end: 10437b77f; -[_TtC21SCMapBitmojiTrayScope21SCMapBitmojiTrayScope reactionImages] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437b724(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1130721b0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000100de1f70(0);
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



/* Entry: 10437b780; end: 10437b85f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10437b780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  _objc_allocWithZone();
  lVar1 = _DAT_113072190;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113072190,0);
  _swift_beginAccess(unaff_x20 + lVar1,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_113072198) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130721a0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130721a8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130721b0) = param_5;
  puVar2 = auStack_78;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  _swift_unknownObjectRelease(param_1);
  return puVar2;
}



/* Entry: 10437b860; end: 10437b96f; -[_TtC21SCMapBitmojiTrayScope21SCMapBitmojiTrayScope initWithDelegate:launchSource:sourceSessionId:reactionEmojis:reactionImages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437b860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_6 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_6,PTR___sSSN_11034da80);
  }
  if (param_7 != 0) {
    uVar4 = 0;
    func_0x000100de1f70(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_7,uVar4);
  }
  lVar2 = _DAT_113072190;
  _swift_unknownObjectWeakInit(param_1 + _DAT_113072190,0);
  _swift_beginAccess(param_1 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_3);
  *(undefined8 *)(param_1 + _DAT_113072198) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130721a0) = param_5;
  *(long *)(param_1 + _DAT_1130721a8) = param_6;
  *(long *)(param_1 + _DAT_1130721b0) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_78,puVar1);
  return;
}



/* Entry: 10437b970; end: 10437b9cf; -[_TtC21SCMapBitmojiTrayScope21SCMapBitmojiTrayScope init] */

void FUN_10437b970(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapBitmojiTrayScope.SCMapBitmojiTrayScope",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10437b99c);
  (*pcVar1)();
}



/* Entry: 10437b9d0; end: 10437ba4b; -[_TtC21SCMapBitmojiTrayScope21SCMapBitmojiTrayScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437b9d0(long param_1)

{
  func_0x00010437ba28(param_1 + _DAT_113072190);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130721a0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130721a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130721b0));
  return;
}



/* Entry: 10437ba4c; end: 10437ba6b;  */

void FUN_10437ba4c(void)

{
  _objc_opt_self(&PTR_PTR_1129a4238);
  return;
}



/* Entry: 10437ba6c; end: 10437bab7;  */

void FUN_10437ba6c(undefined8 param_1)

{
  func_0x0001000285a8(0x1130721e0,&UNK_10dcf13d0);
  _swift_retain(param_1);
  func_0x0001000823a8(FUN_10437bb24,param_1);
  return;
}



/* Entry: 10437bab8; end: 10437bb23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437bab8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10437be38();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_1130721e8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10437bb24; end: 10437bb2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437bb24(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10437be38();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130721e8) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10437bb2c; end: 10437bb77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437bb2c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130721e8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10437bb78; end: 10437bcc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10437bb78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  lVar3 = 0;
  FUN_10437ba4c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113072190;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113072190,0);
  _swift_beginAccess(lVar4 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_1);
  *(undefined8 *)(lVar4 + _DAT_113072198) = param_2;
  *(undefined8 *)(lVar4 + _DAT_1130721a0) = param_3;
  *(undefined8 *)(lVar4 + _DAT_1130721a8) = param_4;
  *(undefined8 *)(lVar4 + _DAT_1130721b0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _objc_retain(param_3);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  plVar5 = &lStack_88;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 10437bcc8; end: 10437bdb7; -[_TtC21SCMapBitmojiTrayScope29SCMapBitmojiTrayScopeServices buildWithDelegate:launchSource:sourceSessionId:reactionEmojis:reactionImages:] */

void FUN_10437bcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_6 == 0) {
    param_6 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_6,PTR___sSSN_11034da80);
  }
  if (param_7 != 0) {
    uVar1 = 0;
    func_0x000100de1f70(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_7,uVar1);
  }
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_1);
  uVar2 = param_3;
  FUN_10437bb78(param_3,param_4,param_5,param_6,param_7);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_7);
  _swift_bridgeObjectRelease(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10437bdb8; end: 10437be17; -[_TtC21SCMapBitmojiTrayScope29SCMapBitmojiTrayScopeServices init] */

void FUN_10437bdb8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapBitmojiTrayScope.SCMapBitmojiTrayScopeServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10437bde4);
  (*pcVar1)();
}



/* Entry: 10437be18; end: 10437be37; -[_TtC21SCMapBitmojiTrayScope29SCMapBitmojiTrayScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437be18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130721e8));
  return;
}



/* Entry: 10437be38; end: 10437be57;  */

void FUN_10437be38(void)

{
  _objc_opt_self(&PTR_PTR_1129a4318);
  return;
}



/* Entry: 10437be58; end: 10437c227;  */

void FUN_10437be58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10437c228; end: 10437c25f;  */

void FUN_10437c228(undefined8 param_1)

{
  if (lRam0000000113072280 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7ff6d8);
  return;
}



/* Entry: 10437c260; end: 10437c633;  */

long * FUN_10437c260(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar7 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar7;
    lVar7 = param_2[2];
    lVar16 = param_2[3];
    param_1[2] = lVar7;
    param_1[3] = lVar16;
    lVar16 = param_2[4];
    lVar13 = param_2[5];
    param_1[4] = lVar16;
    param_1[5] = lVar13;
    lVar13 = param_2[6];
    lVar6 = param_2[7];
    param_1[6] = lVar13;
    param_1[7] = lVar6;
    lVar12 = param_2[8];
    param_1[8] = lVar12;
    lVar11 = (long)*(int *)(param_3 + 0x24);
    lVar6 = 0;
    __s10Foundation4DateVMa();
    lVar14 = *(long *)(lVar6 + -8);
    pcVar15 = *(code **)(lVar14 + 0x30);
    _swift_bridgeObjectRetain(lVar7);
    _swift_bridgeObjectRetain(lVar16);
    _swift_bridgeObjectRetain(lVar13);
    _swift_bridgeObjectRetain(lVar12);
    lVar7 = (long)param_2 + lVar11;
    (*pcVar15)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar14 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar6);
      (**(code **)(lVar14 + 0x38))((long)param_1 + lVar11,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((long)param_1 + lVar11,(long)param_2 + lVar11,
              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x2c);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
    iVar4 = *(int *)(param_3 + 0x34);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    *(undefined8 *)((long)param_1 + (long)iVar4) = *(undefined8 *)((long)param_2 + (long)iVar4);
    iVar4 = *(int *)(param_3 + 0x3c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar17 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar17;
    iVar4 = *(int *)(param_3 + 0x44);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    lVar7 = 0;
    FUN_10437f914();
    lVar16 = *(long *)(lVar7 + -8);
    pcVar15 = *(code **)(lVar16 + 0x30);
    _swift_bridgeObjectRetain(uVar17);
    puVar8 = puVar2;
    (*pcVar15)(puVar2,1,lVar7);
    if ((int)puVar8 == 0) {
      uVar17 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar17;
      uVar17 = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar17;
      uVar17 = puVar2[4];
      uVar18 = puVar2[5];
      puVar1[4] = uVar17;
      puVar1[5] = uVar18;
      lVar13 = puVar2[7];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar18);
      if (lVar13 == 0) {
        uVar17 = puVar2[10];
        uVar19 = puVar2[0xd];
        uVar18 = puVar2[0xc];
        puVar1[0xb] = puVar2[0xb];
        puVar1[10] = uVar17;
        puVar1[0xd] = uVar19;
        puVar1[0xc] = uVar18;
        uVar17 = *(undefined8 *)((long)puVar2 + 0x69);
        *(undefined8 *)((long)puVar1 + 0x71) = *(undefined8 *)((long)puVar2 + 0x71);
        *(undefined8 *)((long)puVar1 + 0x69) = uVar17;
        uVar19 = puVar2[6];
        uVar18 = puVar2[9];
        uVar17 = puVar2[8];
        puVar1[7] = puVar2[7];
        puVar1[6] = uVar19;
        puVar1[9] = uVar18;
        puVar1[8] = uVar17;
      }
      else {
        puVar1[6] = puVar2[6];
        puVar1[7] = lVar13;
        uVar18 = puVar2[9];
        puVar1[8] = puVar2[8];
        puVar1[9] = uVar18;
        uVar19 = puVar2[0xb];
        puVar1[10] = puVar2[10];
        puVar1[0xb] = uVar19;
        *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
        uVar17 = puVar2[0xd];
        uVar3 = puVar2[0xe];
        puVar1[0xd] = uVar17;
        puVar1[0xe] = uVar3;
        *(undefined1 *)(puVar1 + 0xf) = *(undefined1 *)(puVar2 + 0xf);
        _swift_bridgeObjectRetain(lVar13);
        _swift_bridgeObjectRetain(uVar18);
        _swift_bridgeObjectRetain(uVar19);
        _swift_bridgeObjectRetain(uVar17);
      }
      uVar17 = puVar2[0x11];
      puVar1[0x10] = puVar2[0x10];
      puVar1[0x11] = uVar17;
      uVar17 = puVar2[0x12];
      puVar1[0x13] = puVar2[0x13];
      puVar1[0x12] = uVar17;
      lVar13 = puVar2[0x14];
      _swift_bridgeObjectRetain();
      if (lVar13 != 1) {
        _swift_bridgeObjectRetain(lVar13);
      }
      uVar17 = puVar2[0x15];
      uVar18 = puVar2[0x16];
      puVar1[0x14] = lVar13;
      puVar1[0x15] = uVar17;
      puVar1[0x16] = uVar18;
      *(undefined1 *)(puVar1 + 0x17) = *(undefined1 *)(puVar2 + 0x17);
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x3c));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x3c));
      lVar13 = 0;
      FUN_1043806e4();
      lVar11 = *(long *)(lVar13 + -8);
      pcVar15 = *(code **)(lVar11 + 0x30);
      _swift_bridgeObjectRetain(uVar18);
      puVar9 = puVar2;
      (*pcVar15)(puVar2,1,lVar13);
      if ((int)puVar9 == 0) {
        uVar17 = puVar2[1];
        *puVar8 = *puVar2;
        puVar8[1] = uVar17;
        iVar4 = *(int *)(lVar13 + 0x18);
        pcVar15 = *(code **)(lVar14 + 0x10);
        _objc_retain();
        (*pcVar15)((long)puVar8 + (long)iVar4,(long)puVar2 + (long)iVar4,lVar6);
        (**(code **)(lVar11 + 0x38))(puVar8,0,1,lVar13);
      }
      else {
        lVar13 = 0x113072220;
        func_0x0001000285a8(0x113072220,&UNK_10dcf2010);
        _memcpy(puVar8,puVar2,*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
      }
      (**(code **)(lVar16 + 0x38))(puVar1,0,1,lVar7);
    }
    else {
      lVar7 = 0x113072218;
      func_0x0001000285a8(0x113072218,&UNK_10dcf1478);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
    uVar17 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar17;
    _swift_bridgeObjectRetain();
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar10 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar7 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10437c634; end: 10437c7b3;  */

void FUN_10437c634(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  iVar2 = *(int *)(param_2 + 0x24);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar3 + -8);
  lVar6 = param_1 + iVar2;
  (**(code **)(lVar8 + 0x30))(lVar6,1,lVar3);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 8))(param_1 + iVar2,lVar3);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x3c) + 8));
  lVar6 = param_1 + *(int *)(param_2 + 0x44);
  lVar4 = 0;
  FUN_10437f914();
  lVar5 = lVar6;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar6,1,lVar4);
  if ((int)lVar5 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x20));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x28));
    if (*(long *)(lVar6 + 0x38) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x48));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x58));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x68));
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x88));
    if (*(long *)(lVar6 + 0xa0) != 1) {
      _swift_bridgeObjectRelease();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0xb0));
    puVar1 = (undefined8 *)(lVar6 + *(int *)(lVar4 + 0x3c));
    lVar6 = 0;
    FUN_1043806e4();
    puVar7 = puVar1;
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(puVar1,1,lVar6);
    if ((int)puVar7 == 0) {
      _objc_release(*puVar1);
      (**(code **)(lVar8 + 8))((long)puVar1 + (long)*(int *)(lVar6 + 0x18),lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x48) + 8));
  return;
}



/* Entry: 10437c7b4; end: 10437d3c3;  */

undefined8 * FUN_10437c7b4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar14 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar14;
  uVar14 = param_2[2];
  uVar15 = param_2[3];
  param_1[2] = uVar14;
  param_1[3] = uVar15;
  uVar15 = param_2[4];
  uVar16 = param_2[5];
  param_1[4] = uVar15;
  param_1[5] = uVar16;
  uVar16 = param_2[6];
  uVar9 = param_2[7];
  param_1[6] = uVar16;
  param_1[7] = uVar9;
  uVar9 = param_2[8];
  param_1[8] = uVar9;
  lVar8 = (long)*(int *)(param_3 + 0x24);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar4 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar9);
  lVar5 = (long)param_2 + lVar8;
  (*pcVar12)(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar11 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar4);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar8,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar8,(long)param_2 + lVar8,
            *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x2c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x34);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x3c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar14 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar14;
  iVar3 = *(int *)(param_3 + 0x44);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  lVar5 = 0;
  FUN_10437f914();
  lVar8 = *(long *)(lVar5 + -8);
  pcVar12 = *(code **)(lVar8 + 0x30);
  _swift_bridgeObjectRetain(uVar14);
  puVar6 = puVar2;
  (*pcVar12)(puVar2,1,lVar5);
  if ((int)puVar6 == 0) {
    uVar14 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar14;
    uVar14 = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[2] = uVar14;
    uVar14 = puVar2[4];
    uVar15 = puVar2[5];
    puVar1[4] = uVar14;
    puVar1[5] = uVar15;
    lVar10 = puVar2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar15);
    if (lVar10 == 0) {
      uVar14 = puVar2[10];
      uVar16 = puVar2[0xd];
      uVar15 = puVar2[0xc];
      puVar1[0xb] = puVar2[0xb];
      puVar1[10] = uVar14;
      puVar1[0xd] = uVar16;
      puVar1[0xc] = uVar15;
      uVar14 = *(undefined8 *)((long)puVar2 + 0x69);
      *(undefined8 *)((long)puVar1 + 0x71) = *(undefined8 *)((long)puVar2 + 0x71);
      *(undefined8 *)((long)puVar1 + 0x69) = uVar14;
      uVar16 = puVar2[6];
      uVar15 = puVar2[9];
      uVar14 = puVar2[8];
      puVar1[7] = puVar2[7];
      puVar1[6] = uVar16;
      puVar1[9] = uVar15;
      puVar1[8] = uVar14;
    }
    else {
      puVar1[6] = puVar2[6];
      puVar1[7] = lVar10;
      uVar15 = puVar2[9];
      puVar1[8] = puVar2[8];
      puVar1[9] = uVar15;
      uVar16 = puVar2[0xb];
      puVar1[10] = puVar2[10];
      puVar1[0xb] = uVar16;
      *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(puVar2 + 0xc);
      uVar14 = puVar2[0xd];
      uVar9 = puVar2[0xe];
      puVar1[0xd] = uVar14;
      puVar1[0xe] = uVar9;
      *(undefined1 *)(puVar1 + 0xf) = *(undefined1 *)(puVar2 + 0xf);
      _swift_bridgeObjectRetain(lVar10);
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar14);
    }
    uVar14 = puVar2[0x11];
    puVar1[0x10] = puVar2[0x10];
    puVar1[0x11] = uVar14;
    uVar14 = puVar2[0x12];
    puVar1[0x13] = puVar2[0x13];
    puVar1[0x12] = uVar14;
    lVar10 = puVar2[0x14];
    _swift_bridgeObjectRetain();
    if (lVar10 != 1) {
      _swift_bridgeObjectRetain(lVar10);
    }
    uVar14 = puVar2[0x15];
    uVar15 = puVar2[0x16];
    puVar1[0x14] = lVar10;
    puVar1[0x15] = uVar14;
    puVar1[0x16] = uVar15;
    *(undefined1 *)(puVar1 + 0x17) = *(undefined1 *)(puVar2 + 0x17);
    puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x3c));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x3c));
    lVar10 = 0;
    FUN_1043806e4();
    lVar13 = *(long *)(lVar10 + -8);
    pcVar12 = *(code **)(lVar13 + 0x30);
    _swift_bridgeObjectRetain(uVar15);
    puVar7 = puVar2;
    (*pcVar12)(puVar2,1,lVar10);
    if ((int)puVar7 == 0) {
      uVar14 = puVar2[1];
      *puVar6 = *puVar2;
      puVar6[1] = uVar14;
      iVar3 = *(int *)(lVar10 + 0x18);
      pcVar12 = *(code **)(lVar11 + 0x10);
      _objc_retain();
      (*pcVar12)((long)puVar6 + (long)iVar3,(long)puVar2 + (long)iVar3,lVar4);
      (**(code **)(lVar13 + 0x38))(puVar6,0,1,lVar10);
    }
    else {
      lVar4 = 0x113072220;
      func_0x0001000285a8(0x113072220,&UNK_10dcf2010);
      _memcpy(puVar6,puVar2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
    (**(code **)(lVar8 + 0x38))(puVar1,0,1,lVar5);
  }
  else {
    lVar5 = 0x113072218;
    func_0x0001000285a8(0x113072218,&UNK_10dcf1478);
    _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  uVar14 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar14;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10437d3c4; end: 10437d467;  */

undefined8 FUN_10437d3c4(undefined8 param_1)

{
  (*(code *)(undefined *)0x10437bf98)();
  return param_1;
}



/* Entry: 10437d468; end: 10437dccb;  */

undefined8 * FUN_10437d468(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  uVar12 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar12;
  uVar12 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar12;
  uVar12 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar12;
  uVar12 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar12;
  lVar9 = (long)*(int *)(param_3 + 0x24);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar4 + -8);
  lVar5 = (long)param_2 + lVar9;
  (**(code **)(lVar10 + 0x30))(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x2c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x34);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x3c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar12 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar12;
  iVar1 = *(int *)(param_3 + 0x44);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3 = (undefined8 *)((long)param_2 + (long)iVar1);
  lVar5 = 0;
  FUN_10437f914();
  lVar9 = *(long *)(lVar5 + -8);
  puVar6 = puVar3;
  (**(code **)(lVar9 + 0x30))(puVar3,1,lVar5);
  if ((int)puVar6 == 0) {
    uVar12 = *puVar3;
    puVar2[1] = puVar3[1];
    *puVar2 = uVar12;
    puVar2[2] = puVar3[2];
    uVar12 = puVar3[3];
    puVar2[4] = puVar3[4];
    puVar2[3] = uVar12;
    puVar2[5] = puVar3[5];
    uVar12 = puVar3[10];
    uVar14 = puVar3[0xd];
    uVar13 = puVar3[0xc];
    puVar2[0xb] = puVar3[0xb];
    puVar2[10] = uVar12;
    puVar2[0xd] = uVar14;
    puVar2[0xc] = uVar13;
    uVar12 = *(undefined8 *)((long)puVar3 + 0x69);
    *(undefined8 *)((long)puVar2 + 0x71) = *(undefined8 *)((long)puVar3 + 0x71);
    *(undefined8 *)((long)puVar2 + 0x69) = uVar12;
    uVar14 = puVar3[6];
    uVar13 = puVar3[9];
    uVar12 = puVar3[8];
    puVar2[7] = puVar3[7];
    puVar2[6] = uVar14;
    puVar2[9] = uVar13;
    puVar2[8] = uVar12;
    uVar12 = puVar3[0x10];
    uVar14 = puVar3[0x13];
    uVar13 = puVar3[0x12];
    puVar2[0x11] = puVar3[0x11];
    puVar2[0x10] = uVar12;
    puVar2[0x13] = uVar14;
    puVar2[0x12] = uVar13;
    puVar2[0x14] = puVar3[0x14];
    uVar12 = puVar3[0x15];
    puVar2[0x16] = puVar3[0x16];
    puVar2[0x15] = uVar12;
    *(undefined1 *)(puVar2 + 0x17) = *(undefined1 *)(puVar3 + 0x17);
    puVar6 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar5 + 0x3c));
    puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar5 + 0x3c));
    lVar7 = 0;
    FUN_1043806e4();
    lVar11 = *(long *)(lVar7 + -8);
    puVar8 = puVar3;
    (**(code **)(lVar11 + 0x30))(puVar3,1,lVar7);
    if ((int)puVar8 == 0) {
      uVar12 = puVar3[1];
      *puVar6 = *puVar3;
      puVar6[1] = uVar12;
      (**(code **)(lVar10 + 0x20))
                ((long)puVar6 + (long)*(int *)(lVar7 + 0x18),
                 (long)puVar3 + (long)*(int *)(lVar7 + 0x18),lVar4);
      (**(code **)(lVar11 + 0x38))(puVar6,0,1,lVar7);
    }
    else {
      lVar4 = 0x113072220;
      func_0x0001000285a8(0x113072220,&UNK_10dcf2010);
      _memcpy(puVar6,puVar3,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
    (**(code **)(lVar9 + 0x38))(puVar2,0,1,lVar5);
  }
  else {
    lVar5 = 0x113072218;
    func_0x0001000285a8(0x113072218,&UNK_10dcf1478);
    _memcpy(puVar2,puVar3,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  uVar12 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x48));
  puVar2[1] = param_2[1];
  *puVar2 = uVar12;
  return param_1;
}



/* Entry: 10437dccc; end: 10437dce3;  */

void FUN_10437dccc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10437dce4; end: 10437ddc3;  */

void FUN_10437dce4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_a0 = &UNK_10dcf1490;
  puStack_98 = &UNK_10dcf1490;
  puStack_90 = &UNK_10dcf1490;
  puStack_88 = &UNK_10dcf1490;
  uVar3 = 0x112d48c40;
  lVar2 = 0x13f;
  puStack_a8 = puVar1;
  FUN_10437ddc4(0x13f,0x112d48c40,PTR___s10Foundation4DateVMa_110350bb8);
  if (uVar3 < 0x40) {
    lStack_80 = *(long *)(lVar2 + -8) + 0x40;
    puStack_78 = &UNK_10dcf14a8;
    puStack_70 = &UNK_10dcf14a8;
    puStack_50 = &UNK_10dcf1490;
    uVar3 = 0x113072290;
    lVar2 = 0x13f;
    puStack_68 = puVar1;
    puStack_60 = puVar1;
    puStack_58 = puVar1;
    puStack_48 = puVar1;
    FUN_10437ddc4(0x13f,0x113072290,FUN_10437f914);
    if (uVar3 < 0x40) {
      lStack_40 = *(long *)(lVar2 + -8) + 0x40;
      puStack_38 = &UNK_10dcf1490;
      _swift_initStructMetadata(param_1,0x100,0xf,&puStack_a8,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 10437ddc4; end: 10437deeb;  */

void FUN_10437ddc4(long param_1,long *param_2,code *param_3)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0xff;
    (*param_3)();
    __sSqMa();
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 10437deec; end: 10437df2b;  */

void FUN_10437deec(ulong *param_1,ulong *param_2)

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



/* Entry: 10437df2c; end: 10437df6b;  */

void FUN_10437df2c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130722f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf14c0;
  _swift_getWitnessTable(&UNK_10dcf14c0,&UNK_110760f10);
  puRam00000001130722f8 = puVar1;
  return;
}



/* Entry: 10437df6c; end: 10437df6f;  */

void FUN_10437df6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf1560;
  _swift_getWitnessTable(&UNK_10dcf1560,&UNK_110760f30);
  puRam0000000113072300 = puVar1;
  return;
}



/* Entry: 10437df70; end: 10437dfaf;  */

void FUN_10437df70(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf1560;
  _swift_getWitnessTable(&UNK_10dcf1560,&UNK_110760f30);
  puRam0000000113072300 = puVar1;
  return;
}



/* Entry: 10437dfb0; end: 10437dfb3;  */

void FUN_10437dfb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf1600;
  _swift_getWitnessTable(&UNK_10dcf1600,&UNK_110760f50);
  puRam0000000113072308 = puVar1;
  return;
}



/* Entry: 10437dfb4; end: 10437dff3;  */

void FUN_10437dfb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf1600;
  _swift_getWitnessTable(&UNK_10dcf1600,&UNK_110760f50);
  puRam0000000113072308 = puVar1;
  return;
}



/* Entry: 10437dff4; end: 10437dff7;  */

void FUN_10437dff4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf16a0;
  _swift_getWitnessTable(&UNK_10dcf16a0,&UNK_110760f70);
  puRam0000000113072310 = puVar1;
  return;
}



/* Entry: 10437dff8; end: 10437e037;  */

void FUN_10437dff8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf16a0;
  _swift_getWitnessTable(&UNK_10dcf16a0,&UNK_110760f70);
  puRam0000000113072310 = puVar1;
  return;
}



/* Entry: 10437e038; end: 10437e03b;  */

void FUN_10437e038(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf1740;
  _swift_getWitnessTable(&UNK_10dcf1740,&UNK_110760f90);
  puRam0000000113072318 = puVar1;
  return;
}



/* Entry: 10437e03c; end: 10437e07b;  */

void FUN_10437e03c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf1740;
  _swift_getWitnessTable(&UNK_10dcf1740,&UNK_110760f90);
  puRam0000000113072318 = puVar1;
  return;
}



/* Entry: 10437e07c; end: 10437e137;  */

undefined1  [16] FUN_10437e07c(void)

{
  return ZEXT816(0x110760f10);
}



/* Entry: 10437e138; end: 10437e26b;  */

void FUN_10437e138(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 10437e26c; end: 10437e2a3;  */

void FUN_10437e26c(undefined8 param_1)

{
  if (lRam0000000113072378 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7ff7a8);
  return;
}



/* Entry: 10437e2a4; end: 10437e3b3;  */

long * FUN_10437e2a4(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar4;
    lVar6 = (long)*(int *)(param_3 + 0x18);
    lVar3 = 0;
    __s10Foundation3URLVMa();
    lVar7 = *(long *)(lVar3 + -8);
    lVar4 = (long)param_2 + lVar6;
    (**(code **)(lVar7 + 0x30))(lVar4,1,lVar3);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
    }
    else {
      lVar4 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
              *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
    iVar1 = *(int *)(param_3 + 0x20);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10437e3b4; end: 10437e41f;  */

void FUN_10437e3b4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010437e41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 10437e420; end: 10437e503;  */

undefined8 * FUN_10437e420(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  lVar4 = (long)*(int *)(param_3 + 0x18);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,
            *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  return param_1;
}



/* Entry: 10437e504; end: 10437e63f;  */

undefined8 * FUN_10437e504(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar4 = (long)*(int *)(param_3 + 0x18);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar2 = (long)param_1 + lVar4;
  (*pcVar6)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar4;
  (*pcVar6)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x18))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
      goto LAB_10437e5e8;
    }
    (**(code **)(lVar5 + 8))((long)param_1 + lVar4,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar1);
    goto LAB_10437e5e8;
  }
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40))
  ;
LAB_10437e5e8:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  return param_1;
}



/* Entry: 10437e640; end: 10437e723;  */

undefined8 * FUN_10437e640(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  lVar4 = (long)*(int *)(param_3 + 0x18);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,
            *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  return param_1;
}



/* Entry: 10437e724; end: 10437e853;  */

undefined8 * FUN_10437e724(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  lVar5 = (long)*(int *)(param_3 + 0x18);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar3 = (long)param_1 + lVar5;
  (*pcVar7)(lVar3,1,lVar2);
  lVar4 = (long)param_2 + lVar5;
  (*pcVar7)(lVar4,1,lVar2);
  if ((int)lVar3 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar6 + 0x28))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
      goto LAB_10437e800;
    }
    (**(code **)(lVar6 + 8))((long)param_1 + lVar5,lVar2);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar2);
    goto LAB_10437e800;
  }
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40))
  ;
LAB_10437e800:
  iVar1 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  return param_1;
}



/* Entry: 10437e854; end: 10437e86b;  */

void FUN_10437e854(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10437e86c; end: 10437e8ef;  */

void FUN_10437e86c(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar2 = 0x13f;
  puStack_50 = puVar1;
  puStack_48 = puVar1;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar2 + -8) + 0x40;
    puStack_38 = &UNK_10dcf18a8;
    puStack_30 = &UNK_10dcf18a8;
    puStack_28 = puVar1;
    _swift_initStructMetadata(param_1,0x100,6,&puStack_50,param_1 + 0x10);
  }
  return;
}



/* Entry: 10437e8f0; end: 10437ee6f;  */

long FUN_10437e8f0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10437ee70; end: 10437eebf;  */

undefined8 FUN_10437ee70(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1130723c0;
  func_0x0001000285a8(0x1130723c0,&UNK_10dcf18e0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10437eec0; end: 10437eef7;  */

void FUN_10437eec0(undefined8 param_1)

{
  if (lRam0000000113072420 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7ff808);
  return;
}



/* Entry: 10437eef8; end: 10437f02b;  */

long * FUN_10437eef8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar8;
    lVar8 = param_2[3];
    _swift_bridgeObjectRetain();
    if (lVar8 == 0) {
      lVar8 = param_2[6];
      lVar11 = param_2[9];
      lVar10 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = lVar8;
      param_1[9] = lVar11;
      param_1[8] = lVar10;
      uVar9 = *(undefined8 *)((long)param_2 + 0x49);
      *(undefined8 *)((long)param_1 + 0x51) = *(undefined8 *)((long)param_2 + 0x51);
      *(undefined8 *)((long)param_1 + 0x49) = uVar9;
      lVar11 = param_2[2];
      lVar10 = param_2[5];
      lVar8 = param_2[4];
      param_1[3] = param_2[3];
      param_1[2] = lVar11;
      param_1[5] = lVar10;
      param_1[4] = lVar8;
    }
    else {
      param_1[2] = param_2[2];
      param_1[3] = lVar8;
      lVar11 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = lVar11;
      lVar3 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = lVar3;
      *(char *)(param_1 + 8) = (char)param_2[8];
      lVar10 = param_2[9];
      lVar4 = param_2[10];
      param_1[9] = lVar10;
      param_1[10] = lVar4;
      *(char *)(param_1 + 0xb) = (char)param_2[0xb];
      _swift_bridgeObjectRetain(lVar8);
      _swift_bridgeObjectRetain(lVar11);
      _swift_bridgeObjectRetain(lVar3);
      _swift_bridgeObjectRetain(lVar10);
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar9 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar9;
    puVar1[2] = puVar2[2];
    lVar8 = 0;
    FUN_10437f5e8();
    iVar6 = *(int *)(lVar8 + 0x18);
    lVar8 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar8 + -8) + 0x10))
              ((long)puVar1 + (long)iVar6,(long)puVar2 + (long)iVar6,lVar8);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar7 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar8 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10437f02c; end: 10437f0a3;  */

void FUN_10437f02c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x18) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  }
  iVar1 = *(int *)(param_2 + 0x18);
  lVar3 = 0;
  FUN_10437f5e8();
  iVar2 = *(int *)(lVar3 + 0x18);
  lVar3 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00010437f0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1 + iVar1 + (long)iVar2,lVar3);
  return;
}



/* Entry: 10437f0a4; end: 10437f1ab;  */

undefined8 * FUN_10437f0a4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  lVar4 = param_2[3];
  _swift_bridgeObjectRetain();
  if (lVar4 == 0) {
    uVar5 = param_2[6];
    uVar7 = param_2[9];
    uVar6 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar5;
    param_1[9] = uVar7;
    param_1[8] = uVar6;
    uVar5 = *(undefined8 *)((long)param_2 + 0x49);
    *(undefined8 *)((long)param_1 + 0x51) = *(undefined8 *)((long)param_2 + 0x51);
    *(undefined8 *)((long)param_1 + 0x49) = uVar5;
    uVar7 = param_2[2];
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar7;
    param_1[5] = uVar6;
    param_1[4] = uVar5;
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar4;
    uVar6 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar6;
    uVar7 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar7;
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    uVar5 = param_2[9];
    uVar2 = param_2[10];
    param_1[9] = uVar5;
    param_1[10] = uVar2;
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar5);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar5 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar5;
  puVar1[2] = param_2[2];
  lVar4 = 0;
  FUN_10437f5e8();
  iVar3 = *(int *)(lVar4 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))
            ((long)puVar1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  return param_1;
}



/* Entry: 10437f1ac; end: 10437f3b3;  */

undefined8 * FUN_10437f1ac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  lVar4 = param_1[3];
  if (lVar4 == 0) {
    if (param_2[3] == 0) {
      uVar3 = param_2[2];
      param_1[3] = param_2[3];
      param_1[2] = uVar3;
      uVar5 = param_2[5];
      uVar3 = param_2[4];
      uVar7 = param_2[7];
      uVar6 = param_2[6];
      uVar9 = param_2[9];
      uVar8 = param_2[8];
      uVar10 = *(undefined8 *)((long)param_2 + 0x49);
      *(undefined8 *)((long)param_1 + 0x51) = *(undefined8 *)((long)param_2 + 0x51);
      *(undefined8 *)((long)param_1 + 0x49) = uVar10;
      param_1[7] = uVar7;
      param_1[6] = uVar6;
      param_1[9] = uVar9;
      param_1[8] = uVar8;
      param_1[5] = uVar5;
      param_1[4] = uVar3;
    }
    else {
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      param_1[4] = param_2[4];
      uVar3 = param_2[5];
      param_1[5] = uVar3;
      param_1[6] = param_2[6];
      uVar5 = param_2[7];
      param_1[7] = uVar5;
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      uVar6 = param_2[9];
      param_1[9] = uVar6;
      param_1[10] = param_2[10];
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
    }
  }
  else if (param_2[3] == 0) {
    FUN_10437d3c4(param_1 + 2);
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    uVar8 = param_2[7];
    uVar7 = param_2[6];
    uVar5 = param_2[9];
    uVar3 = param_2[8];
    uVar6 = *(undefined8 *)((long)param_2 + 0x49);
    uVar10 = param_2[5];
    uVar9 = param_2[4];
    *(undefined8 *)((long)param_1 + 0x51) = *(undefined8 *)((long)param_2 + 0x51);
    *(undefined8 *)((long)param_1 + 0x49) = uVar6;
    param_1[7] = uVar8;
    param_1[6] = uVar7;
    param_1[9] = uVar5;
    param_1[8] = uVar3;
    param_1[5] = uVar10;
    param_1[4] = uVar9;
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar4);
    param_1[4] = param_2[4];
    uVar3 = param_1[5];
    param_1[5] = param_2[5];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    param_1[6] = param_2[6];
    uVar3 = param_1[7];
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    uVar3 = param_1[9];
    param_1[9] = param_2[9];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    param_1[10] = param_2[10];
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  lVar4 = 0;
  FUN_10437f5e8();
  iVar2 = *(int *)(lVar4 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x18))
            ((long)puVar1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar4);
  return param_1;
}



/* Entry: 10437f3b4; end: 10437f553;  */

undefined8 * FUN_10437f3b4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  uVar4 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  uVar4 = *(undefined8 *)((long)param_2 + 0x49);
  *(undefined8 *)((long)param_1 + 0x51) = *(undefined8 *)((long)param_2 + 0x51);
  *(undefined8 *)((long)param_1 + 0x49) = uVar4;
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar4 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar4;
  puVar1[2] = param_2[2];
  lVar3 = 0;
  FUN_10437f5e8();
  iVar2 = *(int *)(lVar3 + 0x18);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))
            ((long)puVar1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  return param_1;
}



/* Entry: 10437f554; end: 10437f56b;  */

void FUN_10437f554(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10437f56c; end: 10437f5e7;  */

void FUN_10437f56c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = &UNK_10dcf1908;
  puStack_30 = &UNK_10dcf1920;
  lVar1 = 0x13f;
  FUN_10437f5e8();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 10437f5e8; end: 10437f61f;  */

void FUN_10437f5e8(undefined8 param_1)

{
  if (lRam00000001130724b8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7ff830);
  return;
}



/* Entry: 10437f620; end: 10437f6ab;  */

long * FUN_10437f620(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar3;
    param_1[2] = param_2[2];
    iVar2 = *(int *)(param_3 + 0x18);
    lVar3 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))
              ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
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



/* Entry: 10437f6ac; end: 10437f6e3;  */

void FUN_10437f6ac(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00010437f6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 10437f6e4; end: 10437f86b;  */

undefined8 * FUN_10437f6e4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = param_2[2];
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 10437f86c; end: 10437f883;  */

void FUN_10437f86c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10437f884; end: 10437f903;  */

void FUN_10437f884(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_38 = &UNK_10dcf1960;
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 10437f904; end: 10437f913;  */

void FUN_10437f904(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 10437f914; end: 10437f94b;  */

void FUN_10437f914(undefined8 param_1)

{
  if (lRam0000000113072550 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7ff858);
  return;
}



/* Entry: 10437f94c; end: 10437fb53;  */

long * FUN_10437f94c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar11 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar11;
    lVar11 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = lVar11;
    lVar11 = param_2[4];
    lVar13 = param_2[5];
    param_1[4] = lVar11;
    param_1[5] = lVar13;
    lVar10 = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar11);
    _swift_bridgeObjectRetain(lVar13);
    if (lVar10 == 0) {
      lVar11 = param_2[10];
      lVar10 = param_2[0xd];
      lVar13 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = lVar11;
      param_1[0xd] = lVar10;
      param_1[0xc] = lVar13;
      uVar14 = *(undefined8 *)((long)param_2 + 0x69);
      *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
      *(undefined8 *)((long)param_1 + 0x69) = uVar14;
      lVar10 = param_2[6];
      lVar13 = param_2[9];
      lVar11 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = lVar10;
      param_1[9] = lVar13;
      param_1[8] = lVar11;
    }
    else {
      param_1[6] = param_2[6];
      param_1[7] = lVar10;
      lVar13 = param_2[9];
      param_1[8] = param_2[8];
      param_1[9] = lVar13;
      lVar3 = param_2[0xb];
      param_1[10] = param_2[10];
      param_1[0xb] = lVar3;
      *(char *)(param_1 + 0xc) = (char)param_2[0xc];
      lVar11 = param_2[0xd];
      lVar4 = param_2[0xe];
      param_1[0xd] = lVar11;
      param_1[0xe] = lVar4;
      *(char *)(param_1 + 0xf) = (char)param_2[0xf];
      _swift_bridgeObjectRetain(lVar10);
      _swift_bridgeObjectRetain(lVar13);
      _swift_bridgeObjectRetain(lVar3);
      _swift_bridgeObjectRetain(lVar11);
    }
    lVar11 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = lVar11;
    lVar11 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = lVar11;
    lVar11 = param_2[0x14];
    _swift_bridgeObjectRetain();
    if (lVar11 != 1) {
      _swift_bridgeObjectRetain(lVar11);
    }
    lVar13 = param_2[0x15];
    lVar10 = param_2[0x16];
    param_1[0x14] = lVar11;
    param_1[0x15] = lVar13;
    param_1[0x16] = lVar10;
    *(char *)(param_1 + 0x17) = (char)param_2[0x17];
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
    lVar11 = 0;
    FUN_1043806e4();
    lVar13 = *(long *)(lVar11 + -8);
    pcVar12 = *(code **)(lVar13 + 0x30);
    _swift_bridgeObjectRetain(lVar10);
    puVar8 = puVar2;
    (*pcVar12)(puVar2,1,lVar11);
    if ((int)puVar8 == 0) {
      uVar14 = *puVar2;
      uVar5 = puVar2[1];
      *puVar1 = uVar14;
      puVar1[1] = uVar5;
      iVar7 = *(int *)(lVar11 + 0x18);
      lVar10 = 0;
      __s10Foundation4DateVMa();
      pcVar12 = *(code **)(*(long *)(lVar10 + -8) + 0x10);
      _objc_retain(uVar14);
      (*pcVar12)((long)puVar1 + (long)iVar7,(long)puVar2 + (long)iVar7,lVar10);
      (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar11);
    }
    else {
      lVar11 = 0x113072220;
      func_0x0001000285a8(0x113072220,&UNK_10dcf2010);
      _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
    }
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar9 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar11 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10437fb54; end: 10437fc2f;  */

void FUN_10437fb54(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x38) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(param_1 + 0xa0) != 1) {
    _swift_bridgeObjectRelease();
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xb0));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x3c));
  lVar3 = 0;
  FUN_1043806e4();
  puVar4 = puVar1;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar1,1,lVar3);
  if ((int)puVar4 != 0) {
    return;
  }
  _objc_release(*puVar1);
  iVar2 = *(int *)(lVar3 + 0x18);
  lVar3 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00010437fc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 8))((long)puVar1 + (long)iVar2,lVar3);
  return;
}



/* Entry: 10437fc30; end: 1043801eb;  */

undefined8 * FUN_10437fc30(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar9;
  uVar9 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar9;
  uVar9 = param_2[4];
  uVar10 = param_2[5];
  param_1[4] = uVar9;
  param_1[5] = uVar10;
  lVar6 = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  if (lVar6 == 0) {
    uVar9 = param_2[10];
    uVar11 = param_2[0xd];
    uVar10 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar9;
    param_1[0xd] = uVar11;
    param_1[0xc] = uVar10;
    uVar9 = *(undefined8 *)((long)param_2 + 0x69);
    *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
    *(undefined8 *)((long)param_1 + 0x69) = uVar9;
    uVar11 = param_2[6];
    uVar10 = param_2[9];
    uVar9 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar11;
    param_1[9] = uVar10;
    param_1[8] = uVar9;
  }
  else {
    param_1[6] = param_2[6];
    param_1[7] = lVar6;
    uVar10 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar10;
    uVar11 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar11;
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    uVar9 = param_2[0xd];
    uVar2 = param_2[0xe];
    param_1[0xd] = uVar9;
    param_1[0xe] = uVar2;
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar9);
  }
  uVar9 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar9;
  uVar9 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar9;
  lVar6 = param_2[0x14];
  _swift_bridgeObjectRetain();
  if (lVar6 != 1) {
    _swift_bridgeObjectRetain(lVar6);
  }
  uVar9 = param_2[0x15];
  uVar10 = param_2[0x16];
  param_1[0x14] = lVar6;
  param_1[0x15] = uVar9;
  param_1[0x16] = uVar10;
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  lVar6 = 0;
  FUN_1043806e4();
  lVar8 = *(long *)(lVar6 + -8);
  pcVar7 = *(code **)(lVar8 + 0x30);
  _swift_bridgeObjectRetain(uVar10);
  puVar4 = param_2;
  (*pcVar7)(param_2,1,lVar6);
  if ((int)puVar4 == 0) {
    uVar9 = *param_2;
    uVar10 = param_2[1];
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    iVar3 = *(int *)(lVar6 + 0x18);
    lVar5 = 0;
    __s10Foundation4DateVMa();
    pcVar7 = *(code **)(*(long *)(lVar5 + -8) + 0x10);
    _objc_retain(uVar9);
    (*pcVar7)((long)puVar1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar5);
    (**(code **)(lVar8 + 0x38))(puVar1,0,1,lVar6);
  }
  else {
    lVar6 = 0x113072220;
    func_0x0001000285a8(0x113072220,&UNK_10dcf2010);
    _memcpy(puVar1,param_2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1043801ec; end: 104380227;  */

undefined8 FUN_1043801ec(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1043806e4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104380228; end: 104380353;  */

undefined8 * FUN_104380228(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[2] = param_2[2];
  uVar8 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar8;
  param_1[5] = param_2[5];
  uVar8 = param_2[10];
  uVar10 = param_2[0xd];
  uVar9 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar8;
  param_1[0xd] = uVar10;
  param_1[0xc] = uVar9;
  uVar8 = *(undefined8 *)((long)param_2 + 0x69);
  *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
  *(undefined8 *)((long)param_1 + 0x69) = uVar8;
  uVar10 = param_2[6];
  uVar9 = param_2[9];
  uVar8 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar10;
  param_1[9] = uVar9;
  param_1[8] = uVar8;
  uVar8 = param_2[0x10];
  uVar10 = param_2[0x13];
  uVar9 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar8;
  param_1[0x13] = uVar10;
  param_1[0x12] = uVar9;
  param_1[0x14] = param_2[0x14];
  uVar8 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar8;
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  lVar4 = 0;
  FUN_1043806e4();
  lVar7 = *(long *)(lVar4 + -8);
  puVar5 = puVar1;
  (**(code **)(lVar7 + 0x30))(puVar1,1,lVar4);
  if ((int)puVar5 == 0) {
    uVar8 = puVar1[1];
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    iVar3 = *(int *)(lVar4 + 0x18);
    lVar6 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x20))
              ((long)puVar2 + (long)iVar3,(long)puVar1 + (long)iVar3,lVar6);
    (**(code **)(lVar7 + 0x38))(puVar2,0,1,lVar4);
  }
  else {
    lVar4 = 0x113072220;
    func_0x0001000285a8(0x113072220,&UNK_10dcf2010);
    _memcpy(puVar2,puVar1,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 104380354; end: 1043805c3;  */

undefined8 * FUN_104380354(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  uVar4 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  param_1[2] = param_2[2];
  uVar4 = param_2[4];
  uVar3 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(uVar4);
  if (param_1[7] == 0) {
LAB_104380420:
    uVar4 = param_2[10];
    uVar12 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    param_1[0xd] = uVar12;
    param_1[0xc] = uVar3;
    uVar4 = *(undefined8 *)((long)param_2 + 0x69);
    *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)((long)param_2 + 0x71);
    *(undefined8 *)((long)param_1 + 0x69) = uVar4;
    uVar12 = param_2[6];
    uVar3 = param_2[9];
    uVar4 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar12;
    param_1[9] = uVar3;
    param_1[8] = uVar4;
  }
  else {
    lVar8 = param_2[7];
    if (lVar8 == 0) {
      func_0x00010437d3c4(param_1 + 6);
      goto LAB_104380420;
    }
    param_1[6] = param_2[6];
    param_1[7] = lVar8;
    _swift_bridgeObjectRelease();
    uVar4 = param_2[9];
    uVar3 = param_1[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar4;
    _swift_bridgeObjectRelease(uVar3);
    uVar4 = param_2[0xb];
    uVar3 = param_1[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar4;
    _swift_bridgeObjectRelease(uVar3);
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    uVar4 = param_1[0xd];
    param_1[0xd] = param_2[0xd];
    _swift_bridgeObjectRelease(uVar4);
    param_1[0xe] = param_2[0xe];
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  }
  uVar4 = param_2[0x11];
  uVar3 = param_1[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[0x12];
  plVar9 = param_1 + 0x14;
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar4;
  lVar8 = param_2[0x14];
  if (*plVar9 != 1) {
    if (lVar8 != 1) {
      *plVar9 = lVar8;
      _swift_bridgeObjectRelease();
      goto LAB_104380488;
    }
    func_0x00010437d3f8(plVar9);
    lVar8 = 1;
  }
  *plVar9 = lVar8;
LAB_104380488:
  uVar4 = param_2[0x16];
  uVar3 = param_1[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  lVar8 = 0;
  FUN_1043806e4();
  lVar10 = *(long *)(lVar8 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  puVar5 = puVar1;
  (*pcVar11)(puVar1,1,lVar8);
  puVar6 = param_2;
  (*pcVar11)(param_2,1,lVar8);
  if ((int)puVar5 == 0) {
    if ((int)puVar6 == 0) {
      uVar4 = *puVar1;
      *puVar1 = *param_2;
      _objc_release(uVar4);
      puVar1[1] = param_2[1];
      iVar2 = *(int *)(lVar8 + 0x18);
      lVar8 = 0;
      __s10Foundation4DateVMa();
      (**(code **)(*(long *)(lVar8 + -8) + 0x28))
                ((long)puVar1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar8);
      return param_1;
    }
    FUN_1043801ec(puVar1);
  }
  else if ((int)puVar6 == 0) {
    uVar4 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar4;
    iVar2 = *(int *)(lVar8 + 0x18);
    lVar7 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar7 + -8) + 0x20))
              ((long)puVar1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar7);
    (**(code **)(lVar10 + 0x38))(puVar1,0,1,lVar8);
    return param_1;
  }
  lVar8 = 0x113072220;
  func_0x0001000285a8(0x113072220,&UNK_10dcf2010);
  _memcpy(puVar1,param_2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  return param_1;
}



/* Entry: 1043805c4; end: 1043805db;  */

void FUN_1043805c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1043805dc; end: 1043806e3;  */

void FUN_1043805dc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_70 = &UNK_10dcf1990;
  puStack_68 = &UNK_10dcf19a8;
  puStack_78 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_80 = &UNK_10dcf1990;
  puStack_60 = &UNK_10dcf19c0;
  puStack_58 = &UNK_10dcf1990;
  puStack_40 = &UNK_10dcf19d8;
  puStack_38 = &UNK_10dcf1990;
  puStack_30 = &UNK_10dcf19f0;
  lVar1 = 0x13f;
  puStack_50 = puStack_78;
  puStack_48 = puStack_78;
  func_0x000104380690();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,0xc,&puStack_80,param_1 + 0x10);
  }
  return;
}



/* Entry: 1043806e4; end: 10438071b;  */

void FUN_1043806e4(undefined8 param_1)

{
  if (lRam0000000113072610 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7ff880);
  return;
}



/* Entry: 10438071c; end: 1043807b7;  */

long * FUN_10438071c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar5 = *param_2;
  *param_1 = lVar5;
  if ((uVar1 >> 0x11 & 1) == 0) {
    param_1[1] = param_2[1];
    iVar2 = *(int *)(param_3 + 0x18);
    lVar3 = 0;
    __s10Foundation4DateVMa();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    _objc_retain(lVar5);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  }
  else {
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain(lVar5);
  }
  return param_1;
}



/* Entry: 1043807b8; end: 1043807fb;  */

void FUN_1043807b8(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  _objc_release(*param_1);
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x0001043807f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)param_1 + (long)iVar1,lVar2);
  return;
}



/* Entry: 1043807fc; end: 104380867;  */

undefined8 * FUN_1043807fc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  iVar3 = *(int *)(param_3 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  pcVar5 = *(code **)(*(long *)(lVar4 + -8) + 0x10);
  _objc_retain(uVar1);
  (*pcVar5)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  return param_1;
}



/* Entry: 104380868; end: 10438099f;  */

undefined8 * FUN_104380868(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar3);
  param_1[1] = param_2[1];
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 1043809a0; end: 1043809b7;  */

void FUN_1043809a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1043809b8; end: 104380aeb;  */

void FUN_1043809b8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = PTR___sBOWV_11034d658 + 0x40;
  puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 104380aec; end: 104380aff;  */

undefined1  [16] FUN_104380aec(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0x10) {
    uVar1 = param_1;
  }
  auVar2[8] = 0xf < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 104380b00; end: 104380b3f;  */

void FUN_104380b00(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf1a30;
  _swift_getWitnessTable(&UNK_10dcf1a30,&UNK_1107611a8);
  puRam0000000113072650 = puVar1;
  return;
}



/* Entry: 104380b40; end: 104380b43;  */

void FUN_104380b40(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf1ad0;
  _swift_getWitnessTable(&UNK_10dcf1ad0,&UNK_1107611c8);
  puRam0000000113072658 = puVar1;
  return;
}



/* Entry: 104380b44; end: 104380b83;  */

void FUN_104380b44(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf1ad0;
  _swift_getWitnessTable(&UNK_10dcf1ad0,&UNK_1107611c8);
  puRam0000000113072658 = puVar1;
  return;
}



/* Entry: 104380b84; end: 104380b87;  */

void FUN_104380b84(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf1b70;
  _swift_getWitnessTable(&UNK_10dcf1b70,&UNK_1107611e8);
  puRam0000000113072660 = puVar1;
  return;
}



/* Entry: 104380b88; end: 104380bc7;  */

void FUN_104380b88(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf1b70;
  _swift_getWitnessTable(&UNK_10dcf1b70,&UNK_1107611e8);
  puRam0000000113072660 = puVar1;
  return;
}



/* Entry: 104380bc8; end: 104380c3b;  */

undefined1  [16] FUN_104380bc8(void)

{
  return ZEXT816(0x1107611a8);
}



/* Entry: 104380c3c; end: 10438178b;  */

long FUN_104380c3c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10438178c; end: 10438179b; -[_TtC19SCMapStatusServices19SCMapStatusServices mapStatusService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438178c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113072718));
  return;
}



/* Entry: 10438179c; end: 1043817e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438179c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072718) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043817e8; end: 104381847; -[_TtC19SCMapStatusServices19SCMapStatusServices init] */

void FUN_1043817e8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapStatusServices.SCMapStatusServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104381814);
  (*pcVar1)();
}



/* Entry: 104381848; end: 104381857; -[_TtC19SCMapStatusServices19SCMapStatusServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104381848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113072718));
  return;
}



/* Entry: 104381858; end: 1043818b3; -[SCMapPersonStatus statusId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104381858(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113072748))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113072748);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


