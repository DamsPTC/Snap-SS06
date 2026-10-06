/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048e0940; end: 1048e098f;  */

void FUN_1048e0940(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1048e0990; end: 1048e0c57;  */

void FUN_1048e0990(void)

{
  undefined *puVar1;
  
  if (puRam000000011309c5a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd47260;
  _swift_getWitnessTable(&UNK_10dd47260,&UNK_1107b66a0);
  puRam000000011309c5a0 = puVar1;
  return;
}



/* Entry: 1048e0c58; end: 1048e0dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e0c58(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  lVar1 = _DAT_11309c5f0;
  _swift_beginAccess(unaff_x20 + _DAT_11309c5f0,auStack_100,0,0);
  func_0x0001048e6d08(unaff_x20 + lVar1,&uStack_e8,0x11309c520);
  lVar1 = _DAT_11309c5f8;
  if (lStack_d0 == 0) {
    _swift_beginAccess(unaff_x20 + _DAT_11309c5f8,auStack_118,0,0);
    func_0x0001048e6d08(unaff_x20 + lVar1,&uStack_a0,0x11309c520);
    if (lStack_d0 != 0) {
      func_0x0001048e6ccc(&uStack_e8,0x11309c520);
    }
  }
  else {
    lStack_88 = lStack_d0;
    uStack_90 = uStack_d8;
    uStack_78 = uStack_c0;
    uStack_80 = uStack_c8;
    uStack_68 = uStack_b0;
    uStack_70 = uStack_b8;
    uStack_60 = uStack_a8;
    uStack_98 = uStack_e0;
    uStack_a0 = uStack_e8;
  }
  if (lStack_88 == 0) {
    func_0x0001048e6ccc(&uStack_a0,0x11309c520);
    plVar3 = (long *)0x11309c6a0;
    func_0x0001048db364();
    plVar4 = plVar3;
    FUN_1048e6e9c();
    _swift_allocError(plVar3,plVar4,0,0);
    *plVar4 = lVar2;
    _swift_willThrow();
  }
  else {
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    param_1[8] = uStack_60;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = lStack_88;
    param_1[2] = uStack_90;
  }
  return;
}



/* Entry: 1048e0dc8; end: 1048e0ddb;  */

void FUN_1048e0dc8(void)

{
  puRam000000011309c5c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1048e0ddc; end: 1048e0e23; -[FBSDKDeviceLoginManager delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e0ddc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c5c8;
  _swift_beginAccess(param_1 + _DAT_11309c5c8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048e0e24; end: 1048e0e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e0e24(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c5c8;
  _swift_beginAccess(unaff_x20 + _DAT_11309c5c8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Entry: 1048e0e68; end: 1048e0ebf; -[FBSDKDeviceLoginManager setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e0e68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c5c8;
  _swift_beginAccess(param_1 + _DAT_11309c5c8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1048e0ec0; end: 1048e100b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e0ec0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c5c8;
  _swift_beginAccess(unaff_x20 + _DAT_11309c5c8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 1048e100c; end: 1048e1053; -[FBSDKDeviceLoginManager permissions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e100c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11309c5d0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1048e1054; end: 1048e1063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e1054(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + _DAT_11309c5d0));
  return;
}



/* Entry: 1048e1064; end: 1048e1137; -[FBSDKDeviceLoginManager redirectURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e1064(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  lVar5 = _DAT_11309c5d8;
  puVar4 = auStack_50 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + _DAT_11309c5d8,auStack_48,0,0);
  func_0x0001048e6d08(param_1 + lVar5,puVar4,0x11309c5e0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1048e1138; end: 1048e1193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e1138(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c5d8;
  _swift_beginAccess(unaff_x20 + _DAT_11309c5d8,auStack_48,0,0);
  func_0x0001048e6d08(unaff_x20 + lVar1,param_1,0x11309c5e0);
  return;
}



/* Entry: 1048e1194; end: 1048e127f; -[FBSDKDeviceLoginManager setRedirectURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e1194(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  puVar3 = auStack_50 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  lVar1 = _DAT_11309c5d8;
  _swift_beginAccess(param_1 + _DAT_11309c5d8,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  func_0x0001048e14cc(puVar3,param_1 + lVar1,0x11309c5e0);
  _swift_endAccess(auStack_48);
  _objc_release(lVar2);
  return;
}



/* Entry: 1048e1280; end: 1048e1327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e1280(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c5d8;
  _swift_beginAccess(unaff_x20 + _DAT_11309c5d8,auStack_48,0x21,0);
  func_0x0001048e14cc(param_1,unaff_x20 + lVar1,0x11309c5e0);
  _swift_endAccess(auStack_48);
  return;
}



/* Entry: 1048e1328; end: 1048e136f; -[FBSDKDeviceLoginManager codeInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e1328(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c5e8;
  _swift_beginAccess(param_1 + _DAT_11309c5e8,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1048e1370; end: 1048e13bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048e1370(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c5e8;
  _swift_beginAccess(unaff_x20 + _DAT_11309c5e8,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  _objc_retain(uVar2);
  return uVar2;
}



/* Entry: 1048e13bc; end: 1048e141f; -[FBSDKDeviceLoginManager setCodeInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e13bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c5e8;
  _swift_beginAccess(param_1 + _DAT_11309c5e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1048e1420; end: 1048e16c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e1420(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c5e8;
  _swift_beginAccess(unaff_x20 + _DAT_11309c5e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 1048e16c4; end: 1048e1703;  */

void FUN_1048e16c4(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_1048e1704(param_1,param_2);
  return;
}



/* Entry: 1048e1704; end: 1048e1897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e1704(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11309c5c8,0);
  lVar2 = _DAT_11309c5d8;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar3);
  *(undefined8 *)(unaff_x20 + _DAT_11309c5e8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11309c600) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c5f0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  lVar2 = unaff_x20 + _DAT_11309c5f8;
  puStack_70 = &UNK_1107b69c8;
  ppuStack_68 = &PTR_DAT_1107b69a8;
  uVar4 = 0;
  FUN_1049fe1e8();
  _objc_allocWithZone();
  _objc_msgSend();
  puVar5 = PTR_PTR_1126add18;
  _objc_allocWithZone();
  _objc_msgSend();
  puVar6 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  func_0x0001049eab50();
  FUN_1049e48e0();
  func_0x0001048e159c(auStack_88,lVar2);
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  *(undefined **)(lVar2 + 0x30) = puVar5;
  *(undefined **)(lVar2 + 0x38) = puVar6;
  *(undefined8 *)(lVar2 + 0x40) = uVar7;
  *(undefined8 *)(unaff_x20 + _DAT_11309c5d0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11309c608) = param_2;
  _objc_msgSendSuper2(&stack0xffffffffffffff68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048e1898; end: 1048e18cf; -[FBSDKDeviceLoginManager initWithPermissions:enableSmartLogin:] */

void FUN_1048e1898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  FUN_1048e1704();
  return;
}



/* Entry: 1048e18d0; end: 1048e1dfb;  */

/* WARNING: Removing unreachable block (ram,0x0001048e1930) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e18d0(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined1 auStack_1d0 [208];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar16 = *(long *)(lVar2 + -8);
  lVar7 = (long)&puStack_210 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1048e0c58(&uStack_100);
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  lStack_78 = lStack_c8;
  uStack_80 = uStack_d0;
  uStack_70 = uStack_c0;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  lStack_208 = lStack_c8;
  _objc_msgSend(lStack_c8,PTR_s_validateAppID_112683428);
  if (lRam000000011309c1a8 != -1) {
    _swift_once(0x11309c1a8,FUN_1048e0dc8);
  }
  _swift_beginAccess(0x11309c5c0,&uStack_100,0x21,0);
  FUN_1048e5eac();
  uVar14 = uRam000000011309c5c0 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar14 + 0x10);
  uVar11 = uRam000000011309c5c0;
  if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
    uVar11 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
    FUN_1048decb4(uVar11,uVar1 + 1,1);
    uVar14 = uVar11 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
  *(long *)(uVar14 + uVar1 * 8 + 0x20) = unaff_x20;
  uRam000000011309c5c0 = uVar11;
  _swift_endAccess(&uStack_100);
  lVar3 = 0x11309c610;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar3 + 0x18) = 6;
  *(undefined8 *)(lVar3 + 0x10) = 3;
  puStack_210 = (undefined8 *)(lVar3 + 0x20);
  *puStack_210 = 0x65706f6373;
  *(undefined8 *)(lVar3 + 0x28) = 0xe500000000000000;
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_11309c5d0);
  uStack_100 = uVar17;
  _objc_retain();
  _swift_bridgeObjectRetain(uVar17);
  uVar4 = 0x11309c618;
  func_0x0001048db364(0x11309c618);
  uVar8 = 0x112d38278;
  func_0x0001048e6d4c(0x112d38278,FUN_1048e5f1c,PTR___sSayxGSKsMc_11034dcf0);
  uVar5 = 0x2c;
  uVar12 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,uVar4,uVar8);
  _swift_bridgeObjectRelease(uVar17);
  puVar9 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar3 + 0x30) = uVar5;
  *(undefined8 *)(lVar3 + 0x38) = uVar12;
  *(undefined **)(lVar3 + 0x48) = puVar9;
  *(undefined8 *)(lVar3 + 0x50) = 0x7463657269646572;
  *(undefined8 *)(lVar3 + 0x58) = 0xec0000006972755f;
  lVar15 = _DAT_11309c5d8;
  _swift_beginAccess(unaff_x20 + _DAT_11309c5d8,auStack_1d0,0,0);
  lVar6 = unaff_x20 + lVar15;
  lVar13 = 1;
  (**(code **)(lVar16 + 0x30))(lVar6,1,lVar2);
  if ((int)lVar6 == 0) {
    lVar15 = unaff_x20 + lVar15;
    lVar6 = lVar7;
    (**(code **)(lVar16 + 0x10))(lVar7,lVar15,lVar2);
    __s10Foundation3URLV14absoluteStringSSvg();
    (**(code **)(lVar16 + 8))();
    *(undefined **)(lVar3 + 0x78) = puVar9;
    if (lVar15 != 0) {
      *(long *)(lVar3 + 0x60) = lVar6;
      goto LAB_1048e1b70;
    }
  }
  else {
    *(undefined **)(lVar3 + 0x78) = puVar9;
    lVar7 = lVar6;
    lVar2 = lVar13;
  }
  *(undefined8 *)(lVar3 + 0x60) = 0;
  lVar15 = -0x2000000000000000;
LAB_1048e1b70:
  *(long *)(lVar3 + 0x68) = lVar15;
  *(undefined8 *)(lVar3 + 0x80) = 0x695f656369766564;
  *(undefined8 *)(lVar3 + 0x88) = 0xeb000000006f666e;
  FUN_1048e7ec0();
  *(undefined **)(lVar3 + 0xa8) = puVar9;
  *(long *)(lVar3 + 0x90) = lVar7;
  *(long *)(lVar3 + 0x98) = lVar2;
  lVar7 = lVar3;
  func_0x000100214a84(lVar3);
  _swift_setDeallocating(lVar3);
  uVar4 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  _swift_arrayDestroy(puStack_210,3,uVar4);
  uVar4 = uStack_80;
  uVar8 = 0x6c2f656369766564;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6c2f656369766564,0xec0000006e69676f);
  lVar2 = lVar7;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar7,puVar9,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar7);
  lVar7 = lStack_208;
  puVar9 = PTR_s_validateRequiredClientAccessToke_1125250e0;
  _objc_msgSend(lStack_208,PTR_s_validateRequiredClientAccessToke_1125250e0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar9);
  }
  _objc_msgSend(uVar4,PTR_s_createGraphRequestWithGraphPath__1125250e8,uVar8,lVar2,lVar7,
                &PTR____CFConstantStringClassReference_110dada18,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_msgSend(uVar4,PTR_s_setGraphErrorRecoveryDisabled__1125250f0,1);
  func_0x0001048df510(&uStack_b0,&uStack_100);
  puVar9 = &UNK_1107b6798;
  _swift_allocObject(&UNK_1107b6798,0x60,7);
  *(undefined8 *)(puVar9 + 0x30) = uStack_e8;
  *(undefined8 *)(puVar9 + 0x28) = uStack_f0;
  *(undefined8 *)(puVar9 + 0x40) = uStack_d8;
  *(undefined8 *)(puVar9 + 0x38) = uStack_e0;
  *(long *)(puVar9 + 0x50) = lStack_c8;
  *(undefined8 *)(puVar9 + 0x48) = uStack_d0;
  *(long *)(puVar9 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar9 + 0x58) = uStack_c0;
  *(undefined8 *)(puVar9 + 0x20) = uStack_f8;
  *(undefined8 *)(puVar9 + 0x18) = uStack_100;
  pcStack_1e0 = FUN_1048e6198;
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0x42000000;
  pcStack_1f0 = FUN_1048e305c;
  puStack_1e8 = &UNK_1107b67b0;
  ppuVar10 = &puStack_200;
  puStack_1d8 = puVar9;
  __Block_copy(ppuVar10);
  puVar9 = puStack_1d8;
  _objc_retain(unaff_x20);
  _swift_release(puVar9);
  uVar8 = uVar4;
  _objc_msgSend(uVar4,PTR_s_startWithCompletion__1126720c8,ppuVar10);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar10);
  _swift_unknownObjectRelease(uVar4);
  _swift_unknownObjectRelease(uVar8);
  func_0x0001048e61bc(&uStack_b0);
  return;
}



/* Entry: 1048e1dfc; end: 1048e29eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e1dfc(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  bool bVar16;
  code *pcVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  long lStack_f0;
  undefined1 auStack_e0 [24];
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lVar2 = 0;
  puStack_f8 = param_5;
  lStack_f0 = param_2;
  __s10Foundation4DateVMa();
  puVar15 = *(undefined8 **)(lVar2 + -8);
  uVar9 = puVar15[8] + 0xf & 0xfffffffffffffff0;
  lVar19 = (long)&puStack_140 - uVar9;
  lVar20 = lVar19 - uVar9;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  puVar11 = *(undefined8 **)(lVar3 + -8);
  uVar9 = puVar11[8] + 0xf & 0xfffffffffffffff0;
  lVar22 = lVar20 - uVar9;
  lVar14 = lVar22 - uVar9;
  lVar10 = 0x11309c5e0;
  func_0x0001048db364();
  uVar9 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puStack_110 = (undefined8 *)(lVar14 - uVar9);
  lVar10 = (long)puStack_110 - uVar9;
  if (param_3 != 0) {
    _swift_errorRetain(param_3);
    FUN_1048e29ec(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_3);
    return;
  }
  lStack_138 = lVar22;
  lStack_130 = lVar20;
  lStack_128 = lVar19;
  puStack_120 = puVar15;
  lStack_118 = lVar14;
  puStack_108 = puVar11;
  lStack_100 = lVar3;
  func_0x0001048e6d08(lStack_f0,&uStack_a0,0x11309c428);
  if (lStack_88 == 0) {
    func_0x0001048e6ccc(&uStack_a0,0x11309c428);
LAB_1048e2014:
    puVar21 = (undefined8 *)0x0;
LAB_1048e2018:
    bVar16 = true;
LAB_1048e201c:
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
    puVar11 = puStack_110;
    lVar3 = lStack_100;
    puVar15 = puStack_108;
LAB_1048e2024:
    func_0x0001048e6ccc(&uStack_a0,0x11309c428);
LAB_1048e2034:
    (*(code *)puVar15[7])(lVar10,1,1,lVar3);
  }
  else {
    uVar18 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar7 = PTR___sypN_11034f1a8;
    ppuVar4 = &puStack_c8;
    _swift_dynamicCast(ppuVar4,&uStack_a0,PTR___sypN_11034f1a8 + 8,uVar18,6);
    puVar21 = puStack_c8;
    lVar3 = lStack_100;
    puVar15 = puStack_108;
    puVar11 = puStack_110;
    if (((ulong)ppuVar4 & 1) == 0) goto LAB_1048e2014;
    if (puStack_c8 == (undefined8 *)0x0) goto LAB_1048e2018;
    if (puStack_c8[2] == 0) {
      bVar16 = false;
      goto LAB_1048e201c;
    }
    lStack_f0 = param_4;
    _swift_bridgeObjectRetain(puStack_c8);
    uVar9 = 0;
    lVar14 = -0x2ffffffffffffff0;
    func_0x000100029284(0xd000000000000010);
    if ((uVar9 & 1) == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x0001000bb420(puVar21[7] + lVar14 * 0x20,&uStack_a0);
    }
    _swift_bridgeObjectRelease(puVar21);
    param_4 = lStack_f0;
    if (lStack_88 == 0) {
      bVar16 = false;
      goto LAB_1048e2024;
    }
    ppuVar4 = &puStack_c8;
    _swift_dynamicCast(ppuVar4,&uStack_a0,puVar7 + 8,PTR___sSSN_11034da80,6);
    puVar1 = puStack_c0;
    puVar5 = puStack_c8;
    if (((ulong)ppuVar4 & 1) == 0) {
      bVar16 = false;
      goto LAB_1048e2034;
    }
    _swift_bridgeObjectRetain(puStack_c0);
    __s10Foundation3URLV6stringACSgSSh_tcfC(lVar10,puVar5,puVar1);
    _swift_bridgeObjectRelease_n(puVar1,2);
    bVar16 = false;
  }
  func_0x0001048e6d08(lVar10,puVar11,0x11309c5e0);
  puVar5 = puVar11;
  (*(code *)puVar15[6])(puVar11,1,lVar3);
  lVar14 = lStack_118;
  if ((int)puVar5 == 1) {
    _swift_bridgeObjectRelease(puVar21);
    uVar18 = 0x11309c5e0;
LAB_1048e21e8:
    func_0x0001048e6ccc(puVar11,uVar18);
  }
  else {
    (*(code *)puVar15[4])(lStack_118,puVar11,lVar3);
    if (bVar16) {
      (*(code *)puVar15[1])(lVar14,lVar3);
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
LAB_1048e21dc:
      uVar18 = 0x11309c428;
      puVar11 = &uStack_a0;
      goto LAB_1048e21e8;
    }
    if (puVar21[2] == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
LAB_1048e21c0:
      (*(code *)puVar15[1])(lStack_118,lVar3);
LAB_1048e21d8:
      _swift_bridgeObjectRelease(puVar21);
      goto LAB_1048e21dc;
    }
    _swift_bridgeObjectRetain(puVar21);
    lVar14 = 0x65646f63;
    uVar9 = 0;
    func_0x000100029284(0x65646f63);
    if ((uVar9 & 1) == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x0001000bb420(puVar21[7] + lVar14 * 0x20,&uStack_a0);
    }
    puVar11 = puStack_120;
    _swift_bridgeObjectRelease(puVar21);
    puVar7 = PTR___sypN_11034f1a8;
    if (lStack_88 == 0) goto LAB_1048e21c0;
    ppuVar4 = &puStack_c8;
    _swift_dynamicCast(ppuVar4,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)ppuVar4 & 1) != 0) {
      puStack_108 = puStack_c0;
      if (puVar21[2] == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        puStack_110 = puStack_c8;
        lStack_f0 = param_4;
        _swift_bridgeObjectRetain(puVar21);
        lVar14 = 0x646f635f72657375;
        uVar9 = 0xe900000000000065;
        func_0x000100029284(0x646f635f72657375);
        if ((uVar9 & 1) == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          func_0x0001000bb420(puVar21[7] + lVar14 * 0x20,&uStack_a0);
        }
        lVar14 = lStack_128;
        _swift_bridgeObjectRelease(puVar21);
        if (lStack_88 != 0) {
          ppuVar4 = &puStack_c8;
          _swift_dynamicCast(ppuVar4,&uStack_a0,puVar7 + 8,PTR___sSSN_11034da80,6);
          if (((ulong)ppuVar4 & 1) == 0) {
            (*(code *)puVar15[1])(lStack_118,lVar3);
            _swift_bridgeObjectRelease(puVar21);
            puVar21 = puStack_108;
            goto LAB_1048e2318;
          }
          puStack_f8 = puStack_c8;
          puStack_140 = puStack_c0;
          if (puVar21[2] == 0) {
            uStack_98 = 0;
            uStack_a0 = 0;
            lStack_88 = 0;
            uStack_90 = 0;
LAB_1048e24b4:
            func_0x0001048e6ccc(&uStack_a0,0x11309c428);
LAB_1048e24c4:
            uVar18 = 0;
            if (puVar21[2] == 0) goto LAB_1048e2558;
LAB_1048e24d8:
            lVar19 = lStack_130;
            _swift_bridgeObjectRetain(puVar21);
            lVar14 = 0x6c61767265746e69;
            uVar9 = 0;
            func_0x000100029284(0x6c61767265746e69);
            if ((uVar9 & 1) == 0) {
              _swift_bridgeObjectRelease(puVar21);
              uStack_98 = 0;
              uStack_a0 = 0;
              lStack_88 = 0;
              uStack_90 = 0;
              lVar14 = lStack_128;
            }
            else {
              func_0x0001000bb420(puVar21[7] + lVar14 * 0x20,&uStack_a0);
              _swift_bridgeObjectRelease(puVar21);
              lVar14 = lStack_128;
            }
          }
          else {
            _swift_bridgeObjectRetain(puVar21);
            lVar14 = 0x5f73657269707865;
            uVar9 = 0xea00000000006e69;
            func_0x000100029284(0x5f73657269707865);
            if ((uVar9 & 1) == 0) {
              uStack_98 = 0;
              uStack_a0 = 0;
              lStack_88 = 0;
              uStack_90 = 0;
            }
            else {
              func_0x0001000bb420(puVar21[7] + lVar14 * 0x20,&uStack_a0);
            }
            lVar14 = lStack_128;
            _swift_bridgeObjectRelease(puVar21);
            if (lStack_88 == 0) goto LAB_1048e24b4;
            ppuVar4 = &puStack_c8;
            _swift_dynamicCast(ppuVar4,&uStack_a0,puVar7 + 8,PTR___sSSN_11034da80,6);
            puVar1 = puStack_c0;
            puVar5 = puStack_c8;
            if (((ulong)ppuVar4 & 1) == 0) goto LAB_1048e24c4;
            uStack_a0 = 0;
            _swift_bridgeObjectRetain(puStack_c0);
            FUN_1048e60ac(puVar5,puVar1,&uStack_a0);
            _swift_bridgeObjectRelease_n(puVar1,2);
            uVar18 = uStack_a0;
            if (((ulong)puVar5 & 1) == 0) {
              uVar18 = 0;
            }
            puVar11 = puStack_120;
            if (puVar21[2] != 0) goto LAB_1048e24d8;
LAB_1048e2558:
            uStack_98 = 0;
            uStack_a0 = 0;
            lStack_88 = 0;
            uStack_90 = 0;
            lVar19 = lStack_130;
          }
          _swift_bridgeObjectRelease(puVar21);
          if (lStack_88 == 0) {
            func_0x0001048e6ccc(&uStack_a0,0x11309c428);
LAB_1048e25f4:
            puStack_120 = (undefined8 *)0x0;
          }
          else {
            uVar12 = 0;
            FUN_1048e6de4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            ppuVar4 = &puStack_c8;
            _swift_dynamicCast(ppuVar4,&uStack_a0,puVar7 + 8,uVar12,6);
            puVar21 = puStack_c8;
            if (((ulong)ppuVar4 & 1) == 0) goto LAB_1048e25f4;
            puVar5 = puStack_c8;
            _objc_msgSend(puStack_c8,PTR_s_unsignedIntegerValue_11267e418);
            lVar14 = lStack_128;
            puStack_120 = puVar5;
            _objc_release(puVar21);
          }
          lVar20 = lStack_138;
          pcVar13 = (code *)puVar15[2];
          (*pcVar13)(lStack_138,lStack_118,lVar3);
          __s10Foundation4DateVACycfC(lVar14);
          __s10Foundation4DateV18addingTimeIntervalyACSdF(lVar19,uVar18);
          pcVar17 = (code *)puVar11[1];
          (*pcVar17)(lVar14,lVar2);
          lVar22 = 0;
          FUN_1048e03b4();
          lVar14 = lVar22;
          _objc_allocWithZone();
          puVar21 = (undefined8 *)(lVar14 + _DAT_11309c540);
          *puVar21 = puStack_110;
          puVar21[1] = puStack_108;
          puVar21 = (undefined8 *)(lVar14 + _DAT_11309c548);
          *puVar21 = puStack_f8;
          puVar21[1] = puStack_140;
          (*pcVar13)(lVar14 + _DAT_11309c550,lVar20,lStack_100);
          lVar3 = lStack_100;
          (*(code *)puVar11[2])(lVar14 + _DAT_11309c558,lVar19,lVar2);
          puVar11 = puStack_120;
          if (puStack_120 < (undefined8 *)0x6) {
            puVar11 = (undefined8 *)0x5;
          }
          *(undefined8 **)(lVar14 + _DAT_11309c560) = puVar11;
          plVar6 = &lStack_b0;
          lStack_b0 = lVar14;
          lStack_a8 = lVar22;
          _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
          (*pcVar17)(lVar19,lVar2);
          pcVar13 = (code *)puVar15[1];
          (*pcVar13)(lVar20,lVar3);
          lVar2 = lStack_f0;
          lVar14 = _DAT_11309c5e8;
          _swift_beginAccess(lStack_f0 + _DAT_11309c5e8,&uStack_a0,1,0);
          uVar18 = *(undefined8 *)(lVar2 + lVar14);
          *(long **)(lVar2 + lVar14) = plVar6;
          _objc_retain();
          _objc_release(uVar18);
          lVar14 = lRam000000011309c1b8;
          if (*(char *)(lVar2 + _DAT_11309c608) == '\x01') {
            uVar18 = *(undefined8 *)((long)plVar6 + _DAT_11309c548);
            uVar12 = ((undefined8 *)((long)plVar6 + _DAT_11309c548))[1];
            puStack_c8 = (undefined8 *)0x6f695f6b64736266;
            puStack_c0 = (undefined8 *)0xea00000000002d73;
            _swift_bridgeObjectRetain(uVar12);
            if (lVar14 != -1) {
              _swift_once(0x11309c1b8,FUN_1048e79b4);
            }
            __sSS6appendyySSF(uRam000000011309c700,uRam000000011309c708);
            __sSS6appendyySSF(0x5f,0xe100000000000000);
            __sSS6appendyySSF(uVar18,uVar12);
            puVar15 = puStack_c0;
            puVar11 = puStack_c8;
            puVar21 = puStack_c8;
            __sSS5countSivg(puStack_c8,puStack_c0);
            if ((long)puVar21 < 0x3d) {
              puVar7 = PTR__OBJC_CLASS___NSNetService_1126add28;
              _objc_allocWithZone(PTR__OBJC_CLASS___NSNetService_1126add28);
              uVar18 = 0x2e6c61636f6c;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0x2e6c61636f6c,0xe600000000000000);
              uVar8 = 0x7063745f2e62665f;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0x7063745f2e62665f,0xe90000000000002e);
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar11,puVar15);
              _swift_bridgeObjectRelease(puVar15);
              _objc_msgSend(puVar7,PTR_s_initWithDomain_type_name_port__112525118,uVar18,uVar8,
                            puVar11,0);
              _objc_release(uVar18);
              _objc_release(uVar8);
              _objc_release(puVar11);
              lVar2 = lStack_f0;
              _objc_msgSend(puVar7,PTR_s_setDelegate__112640798,lStack_f0);
              _objc_msgSend(puVar7,PTR_s_publishWithOptions__112525120,3);
              if (lRam000000011309c1b0 != -1) {
                _swift_once(0x11309c1b0,FUN_1048e77e8);
              }
              _swift_beginAccess(0x113815548,auStack_e0,0,0);
              uVar18 = uRam0000000113815548;
              _objc_retain(uRam0000000113815548);
              _objc_msgSend();
              _swift_bridgeObjectRelease(uVar12);
              _objc_release(uVar18);
              _objc_release(puVar7);
            }
            else {
              _swift_bridgeObjectRelease(uVar12);
              _swift_bridgeObjectRelease(puVar15);
              lVar2 = lStack_f0;
            }
          }
          lVar14 = _DAT_11309c5c8;
          _swift_beginAccess(lVar2 + _DAT_11309c5c8,&puStack_c8,0,0);
          lVar2 = lVar2 + lVar14;
          _swift_unknownObjectWeakLoadStrong();
          if (lVar2 != 0) {
            _objc_msgSend();
            _swift_unknownObjectRelease(lVar2);
          }
          FUN_1048e2f34(*(undefined8 *)((long)plVar6 + _DAT_11309c560));
          _objc_release(plVar6);
          (*pcVar13)(lStack_118,lVar3);
          goto LAB_1048e2258;
        }
      }
      (*(code *)puVar15[1])(lStack_118,lVar3);
      _swift_bridgeObjectRelease(puVar21);
      puVar21 = puStack_108;
      goto LAB_1048e21d8;
    }
    (*(code *)puVar15[1])(lStack_118,lVar3);
LAB_1048e2318:
    _swift_bridgeObjectRelease(puVar21);
  }
  uVar12 = puStack_f8[5];
  uVar18 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f21a1e0);
  _objc_msgSend(uVar12,PTR_s_errorWithCode_userInfo_message_u_1125c3e28,3,0,uVar18,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar18);
  FUN_1048e2d04(uVar12);
  _objc_release(uVar12);
LAB_1048e2258:
  func_0x0001048e6ccc(lVar10,0x11309c5e0);
  return;
}



/* Entry: 1048e29ec; end: 1048e2d03;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e29ec(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_90 [8];
  long alStack_88 [5];
  
  lVar3 = 0x11309c628;
  func_0x0001048db364();
  uVar10 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar12 = auStack_90 + -uVar10;
  lVar13 = (long)puVar12 - uVar10;
  lVar3 = param_1;
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  lVar6 = lVar3;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___sypN_11034f1a8;
  lVar11 = lVar6;
  puVar7 = PTR___sSSN_11034da80;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
  _objc_release(lVar6);
  ppuVar4 = &PTR____CFConstantStringClassReference_110da29f8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_110da29f8);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_1048e2bb4:
    alStack_88[2] = 0;
    alStack_88[1] = 0;
    alStack_88[4] = 0;
    alStack_88[3] = 0;
    _swift_bridgeObjectRelease(puVar7);
    _swift_bridgeObjectRelease(lVar11);
LAB_1048e2bcc:
    func_0x0001048e6ccc(alStack_88 + 1,0x11309c428);
LAB_1048e2bdc:
    _swift_beginAccess(unaff_x20 + _DAT_11309c5e8,alStack_88 + 1,0,0);
  }
  else {
    _swift_bridgeObjectRetain(lVar11);
    puVar8 = puVar7;
    func_0x000100029284(ppuVar4);
    if (((ulong)puVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar11);
      goto LAB_1048e2bb4;
    }
    func_0x0001000bb420(*(long *)(lVar11 + 0x38) + (long)ppuVar4 * 0x20,alStack_88 + 1);
    _swift_bridgeObjectRelease(puVar7);
    _swift_bridgeObjectRelease_n(lVar11,2);
    if (alStack_88[4] == 0) goto LAB_1048e2bcc;
    plVar5 = alStack_88;
    plVar9 = alStack_88 + 1;
    _swift_dynamicCast(plVar5,plVar9,puVar1 + 8,PTR___sSiN_11034deb0,6);
    if (((ulong)plVar5 & 1) == 0) goto LAB_1048e2bdc;
    lVar11 = alStack_88[0];
    func_0x0001048e0960();
    lVar6 = _DAT_11309c5e8;
    _swift_beginAccess(unaff_x20 + _DAT_11309c5e8,alStack_88 + 1,0,0);
    if (((ulong)plVar9 & 1) == 0) {
      lVar6 = *(long *)(unaff_x20 + lVar6);
      if (lVar11 < 0x149635) {
        if (lVar11 == 0x149620) {
LAB_1048e2c84:
          lVar6 = 0;
          __s10Foundation4DateVMa();
          pcVar2 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
          (*pcVar2)(lVar13,1,1,lVar6);
          (*pcVar2)(puVar12,1,1,lVar6);
          FUN_1048e3434(0,0,lVar13,puVar12);
          _objc_release(lVar3);
          func_0x0001048e6ccc(puVar12,0x11309c628);
          func_0x0001048e6ccc(lVar13,0x11309c628);
          return;
        }
        if ((lVar11 == 0x149634) && (lVar6 != 0)) {
          if (*(long *)(lVar6 + _DAT_11309c560) < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1048e2d04);
            (*pcVar2)();
          }
          lVar11 = *(long *)(lVar6 + _DAT_11309c560) << 1;
LAB_1048e2c5c:
          _objc_retain();
          _objc_retain();
          FUN_1048e2f34(lVar11);
          _objc_release(lVar6);
          _objc_release(lVar6);
          goto LAB_1048e2c00;
        }
      }
      else {
        if (lVar11 == 0x149635) goto LAB_1048e2c84;
        if ((lVar11 == 0x149636) && (lVar6 != 0)) {
          lVar11 = *(long *)(lVar6 + _DAT_11309c560);
          goto LAB_1048e2c5c;
        }
      }
    }
  }
  FUN_1048e2d04(param_1);
LAB_1048e2c00:
  _objc_release(lVar3);
  return;
}



/* Entry: 1048e2d04; end: 1048e2f33;  */

/* WARNING: Removing unreachable block (ram,0x0001048e2f28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e2d04(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if (lRam000000011309c1b0 != -1) {
    _swift_once(0x11309c1b0,FUN_1048e77e8);
  }
  _swift_beginAccess(0x113815548,auStack_58,0,0);
  lVar2 = lRam0000000113815548;
  _objc_msgSend(lRam0000000113815548,PTR_s_objectForKey__1126159e0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNetService_1126add28;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNetService_1126add28);
    lVar4 = lVar2;
    _swift_dynamicCastObjCClass(lVar2,puVar3);
    if (lVar4 != 0) {
      _objc_msgSend();
      _objc_msgSend(lVar4,PTR_s_stop_112673008);
      _objc_msgSend(lRam0000000113815548,PTR_s_removeObjectForKey__112628f18);
    }
    _swift_unknownObjectRelease(lVar2);
  }
  lVar2 = _DAT_11309c5c8;
  _swift_beginAccess(unaff_x20 + _DAT_11309c5c8,auStack_70,0,0);
  lVar2 = unaff_x20 + lVar2;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_1);
    _objc_msgSend(lVar2,PTR_s_deviceLoginManager_completedWith_1125250f8);
    _objc_release(param_1);
    _swift_unknownObjectRelease(lVar2);
  }
  if (lRam000000011309c1a8 != -1) {
    _swift_once(0x11309c1a8,FUN_1048e0dc8);
  }
  lVar2 = 0x11309c5c0;
  _swift_beginAccess(0x11309c5c0,auStack_88,0x21,0);
  _objc_retain();
  FUN_1048e6508(0x11309c5c0,unaff_x20);
  _objc_release(unaff_x20);
  if (uRam000000011309c5c0 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uRam000000011309c5c0 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uRam000000011309c5c0 & 0xffffffffffffff8;
    if ((long)uRam000000011309c5c0 < 0) {
      uVar5 = uRam000000011309c5c0;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (lVar2 <= (long)uVar5) {
    FUN_1048e62f0(lVar2);
    _swift_endAccess(auStack_88);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048e2f28);
  (*pcVar1)();
}



/* Entry: 1048e2f34; end: 1048e305b;  */

/* WARNING: Removing unreachable block (ram,0x0001048e2f64) */

void FUN_1048e2f34(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  code *pcVar4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  FUN_1048e0c58(&uStack_f0);
  lVar2 = lStack_d0;
  uVar1 = uStack_d8;
  uStack_78 = uStack_c8;
  lStack_80 = lStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_60 = uStack_b0;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  func_0x0001000a8868(&uStack_a0,uStack_d8);
  func_0x0001048df510(&uStack_a0,&uStack_f0);
  puVar3 = &UNK_1107b67e8;
  _swift_allocObject(&UNK_1107b67e8,0x60,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x30) = uStack_d8;
  *(undefined8 *)(puVar3 + 0x28) = uStack_e0;
  *(undefined8 *)(puVar3 + 0x40) = uStack_c8;
  *(long *)(puVar3 + 0x38) = lStack_d0;
  *(undefined8 *)(puVar3 + 0x50) = uStack_b8;
  *(undefined8 *)(puVar3 + 0x48) = uStack_c0;
  *(undefined8 *)(puVar3 + 0x58) = uStack_b0;
  *(undefined8 *)(puVar3 + 0x20) = uStack_e8;
  *(undefined8 *)(puVar3 + 0x18) = uStack_f0;
  pcVar4 = *(code **)(lVar2 + 8);
  _objc_retain();
  (*pcVar4)(param_1,FUN_1048e61e8,puVar3,uVar1,lVar2);
  _swift_release(puVar3);
  func_0x0001048e61bc(&uStack_a0);
  return;
}



/* Entry: 1048e305c; end: 1048e3123;  */

void FUN_1048e305c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long alStack_80 [3];
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    lVar3 = param_3;
    _swift_getObjectType();
    alStack_80[0] = param_3;
    lStack_68 = lVar3;
    func_0x000100102924(alStack_80,&uStack_60);
  }
  _swift_retain(uVar2);
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRetain(param_3);
  uVar4 = param_4;
  _objc_retain(param_4);
  (*pcVar1)(param_2,&uStack_60,param_4);
  _swift_unknownObjectRelease(param_2);
  _swift_release(uVar2);
  _objc_release(uVar4);
  func_0x0001048e6ccc(&uStack_60,0x11309c428);
  return;
}



/* Entry: 1048e3124; end: 1048e314b; -[FBSDKDeviceLoginManager start] */

void FUN_1048e3124(undefined8 param_1)

{
  _objc_retain();
  FUN_1048e18d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048e314c; end: 1048e331b;  */

/* WARNING: Removing unreachable block (ram,0x0001048e3310) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e314c(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (lRam000000011309c1b0 != -1) {
    _swift_once(0x11309c1b0,FUN_1048e77e8);
  }
  _swift_beginAccess(0x113815548,auStack_48,0,0);
  lVar2 = lRam0000000113815548;
  _objc_msgSend(lRam0000000113815548,PTR_s_objectForKey__1126159e0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNetService_1126add28;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNetService_1126add28);
    lVar4 = lVar2;
    _swift_dynamicCastObjCClass(lVar2,puVar3);
    if (lVar4 != 0) {
      _objc_msgSend();
      _objc_msgSend(lVar4,PTR_s_stop_112673008);
      _objc_msgSend(lRam0000000113815548,PTR_s_removeObjectForKey__112628f18);
    }
    _swift_unknownObjectRelease(lVar2);
  }
  *(undefined1 *)(unaff_x20 + _DAT_11309c600) = 1;
  if (lRam000000011309c1a8 != -1) {
    _swift_once(0x11309c1a8,FUN_1048e0dc8);
  }
  lVar2 = 0x11309c5c0;
  _swift_beginAccess(0x11309c5c0,auStack_60,0x21,0);
  _objc_retain();
  FUN_1048e6508(0x11309c5c0,unaff_x20);
  _objc_release(unaff_x20);
  if (uRam000000011309c5c0 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uRam000000011309c5c0 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uRam000000011309c5c0 & 0xffffffffffffff8;
    if ((long)uRam000000011309c5c0 < 0) {
      uVar5 = uRam000000011309c5c0;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (lVar2 <= (long)uVar5) {
    FUN_1048e62f0(lVar2);
    _swift_endAccess(auStack_60);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048e3310);
  (*pcVar1)();
}



/* Entry: 1048e331c; end: 1048e3433; -[FBSDKDeviceLoginManager cancel] */

/* WARNING: Removing unreachable block (ram,0x0001048e3428) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e331c(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  _objc_retain();
  FUN_1048e5fbc();
  *(undefined1 *)(param_1 + _DAT_11309c600) = 1;
  if (lRam000000011309c1a8 != -1) {
    _swift_once(0x11309c1a8,FUN_1048e0dc8);
  }
  lVar2 = 0x11309c5c0;
  _swift_beginAccess(0x11309c5c0,auStack_48,0x21,0);
  _objc_retain(param_1);
  FUN_1048e6508(0x11309c5c0,param_1);
  _objc_release(param_1);
  if (uRam000000011309c5c0 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uRam000000011309c5c0 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uRam000000011309c5c0 & 0xffffffffffffff8;
    if ((long)uRam000000011309c5c0 < 0) {
      uVar3 = uRam000000011309c5c0;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (lVar2 <= (long)uVar3) {
    FUN_1048e62f0(lVar2);
    _swift_endAccess(auStack_48);
    _objc_release(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048e3428);
  (*pcVar1)();
}



/* Entry: 1048e3434; end: 1048e4667;  */

/* WARNING: Removing unreachable block (ram,0x0001048e35a0) */
/* WARNING: Removing unreachable block (ram,0x0001048e3a8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e3434(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_1f0 [8];
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar3 = unaff_x20;
  uStack_1c8 = param_3;
  uStack_1c0 = param_4;
  _swift_getObjectType();
  lVar14 = 0x11309c628;
  func_0x0001048db364();
  lStack_1d0 = *(long *)(lVar14 + -8);
  lVar14 = *(long *)(lStack_1d0 + 0x40);
  uVar13 = lVar14 + 0xfU & 0xfffffffffffffff0;
  puStack_1b8 = auStack_1f0 + -uVar13;
  lVar16 = (long)puStack_1b8 - uVar13;
  if (lRam000000011309c1b0 != -1) {
    _swift_once(0x11309c1b0,FUN_1048e77e8);
  }
  _swift_beginAccess(0x113815548,auStack_80,0,0);
  lVar4 = lRam0000000113815548;
  _objc_msgSend(lRam0000000113815548,PTR_s_objectForKey__1126159e0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSNetService_1126add28;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNetService_1126add28);
    lVar6 = lVar4;
    _swift_dynamicCastObjCClass(lVar4,puVar5);
    if (lVar6 != 0) {
      _objc_msgSend();
      _objc_msgSend(lVar6,PTR_s_stop_112673008);
      _objc_msgSend(lRam0000000113815548,PTR_s_removeObjectForKey__112628f18);
    }
    _swift_unknownObjectRelease(lVar4);
  }
  puVar5 = &UNK_1107b6810;
  _swift_allocObject(&UNK_1107b6810,0x20,7);
  *(long *)(puVar5 + 0x10) = unaff_x20;
  *(long *)(puVar5 + 0x18) = lVar3;
  if (param_2 == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_11309c600) = 1;
    lVar16 = 0;
    func_0x0001048e739c();
    lVar3 = lVar16;
    _objc_allocWithZone();
    lVar14 = _DAT_11309c6b8;
    *(undefined8 *)(lVar3 + _DAT_11309c6b8) = 0;
    _swift_beginAccess(lVar3 + lVar14,&uStack_e0,1,0);
    *(undefined8 *)(lVar3 + lVar14) = 0;
    *(undefined1 *)(lVar3 + _DAT_11309c6c0) = 1;
    puVar11 = PTR_s_init_1125d9248;
    lStack_90 = lVar3;
    lStack_88 = lVar16;
    _objc_retain();
    plVar7 = &lStack_90;
    _objc_msgSendSuper2(plVar7,puVar11);
    lVar14 = _DAT_11309c5c8;
    _swift_beginAccess(unaff_x20 + _DAT_11309c5c8,&uStack_130,0,0);
    lVar14 = unaff_x20 + lVar14;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar14 != 0) {
      _objc_msgSend();
      _swift_unknownObjectRelease(lVar14);
    }
    if (lRam000000011309c1a8 != -1) {
      _swift_once(0x11309c1a8,FUN_1048e0dc8);
    }
    lVar14 = 0x11309c5c0;
    _swift_beginAccess(0x11309c5c0,&puStack_1b0,0x21,0);
    _objc_retain(unaff_x20);
    FUN_1048e6508(0x11309c5c0,unaff_x20);
    _objc_release(unaff_x20);
    if (uRam000000011309c5c0 >> 0x3e == 0) {
      uVar13 = *(ulong *)((uRam000000011309c5c0 & 0xfffffffffffff8) + 0x10);
    }
    else {
      uVar13 = uRam000000011309c5c0 & 0xffffffffffffff8;
      if ((long)uRam000000011309c5c0 < 0) {
        uVar13 = uRam000000011309c5c0;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if ((long)uVar13 < lVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1048e3a8c);
      (*pcVar2)();
    }
    FUN_1048e62f0(lVar14);
    _swift_endAccess(&puStack_1b0);
    _swift_release(puVar5);
    _objc_release(plVar7);
  }
  else {
    _objc_retain();
    _swift_bridgeObjectRetain(param_2);
    FUN_1048e0c58(&uStack_130);
    uStack_b8 = uStack_108;
    uStack_c0 = uStack_110;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
    uStack_a0 = uStack_f0;
    uStack_d8 = uStack_128;
    uStack_e0 = uStack_130;
    uStack_c8 = uStack_118;
    uStack_d0 = uStack_120;
    uStack_1d8 = uStack_100;
    uVar8 = 0x656d;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656d,0xe200000000000000);
    lVar3 = 0x11309c610;
    uStack_1e8 = uVar8;
    func_0x0001048db364();
    _swift_initStackObject();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined8 *)(lVar3 + 0x20) = 0x73646c656966;
    puVar11 = PTR___sSSN_11034da80;
    *(undefined **)(lVar3 + 0x48) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar3 + 0x28) = 0xe600000000000000;
    *(undefined8 *)(lVar3 + 0x30) = 0x696d7265702c6469;
    *(undefined8 *)(lVar3 + 0x38) = 0xee00736e6f697373;
    lVar4 = lVar3;
    func_0x000100214a84();
    lStack_1e0 = unaff_x20;
    _swift_setDeallocating(lVar3);
    func_0x0001048e6ccc((undefined8 *)(lVar3 + 0x20),0x11309c418);
    lVar3 = lVar4;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar4,puVar11,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(lVar4);
    uVar9 = param_1;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    uVar8 = uStack_1e8;
    uVar10 = uStack_1d8;
    _objc_msgSend(uStack_1d8,PTR_s_createGraphRequestWithGraphPath__1125250e8,uStack_1e8,lVar3,uVar9
                  ,&PTR____CFConstantStringClassReference_110deec98,8);
    _objc_retainAutoreleasedReturnValue();
    uStack_1d8 = uVar10;
    _objc_release(uVar8);
    _objc_release(lVar3);
    _objc_release(uVar9);
    func_0x0001048df510(&uStack_e0,&uStack_130);
    func_0x0001048e6d08(uStack_1c8,lVar16,0x11309c628);
    puVar1 = puStack_1b8;
    func_0x0001048e6d08(uStack_1c0,puStack_1b8,0x11309c628);
    uVar13 = (ulong)*(byte *)(lStack_1d0 + 0x50);
    uVar17 = uVar13 + 0x70 & (uVar13 ^ 0xffffffffffffffff);
    uVar18 = lVar14 + uVar13 + uVar17 & (uVar13 ^ 0xffffffffffffffff);
    uVar15 = lVar14 + uVar18 + 7 & 0xfffffffffffffff8;
    puVar11 = &UNK_1107b6838;
    _swift_allocObject(&UNK_1107b6838,uVar15 + 0x10,uVar13 | 7);
    *(long *)(puVar11 + 0x10) = lStack_1e0;
    *(undefined8 *)(puVar11 + 0x30) = uStack_118;
    *(undefined8 *)(puVar11 + 0x28) = uStack_120;
    *(undefined8 *)(puVar11 + 0x40) = uStack_108;
    *(undefined8 *)(puVar11 + 0x38) = uStack_110;
    *(undefined8 *)(puVar11 + 0x50) = uStack_f8;
    *(undefined8 *)(puVar11 + 0x48) = uStack_100;
    *(undefined8 *)(puVar11 + 0x20) = uStack_128;
    *(undefined8 *)(puVar11 + 0x18) = uStack_130;
    *(undefined8 *)(puVar11 + 0x58) = uStack_f0;
    *(undefined8 *)(puVar11 + 0x60) = param_1;
    *(long *)(puVar11 + 0x68) = param_2;
    func_0x0001003a4c00(lVar16,puVar11 + uVar17);
    func_0x0001003a4c00(puVar1,puVar11 + uVar18);
    *(code **)(puVar11 + uVar15) = FUN_1048e682c;
    *(undefined **)((long)(puVar11 + uVar15) + 8) = puVar5;
    pcStack_190 = FUN_1048e6834;
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0x42000000;
    pcStack_1a0 = FUN_1048e305c;
    puStack_198 = &UNK_1107b6850;
    ppuVar12 = &puStack_1b0;
    puStack_188 = puVar11;
    __Block_copy(ppuVar12);
    puVar11 = puStack_188;
    _objc_retain(lStack_1e0);
    _swift_retain(puVar5);
    _swift_release(puVar11);
    uVar8 = uStack_1d8;
    uVar9 = uStack_1d8;
    _objc_msgSend(uStack_1d8,PTR_s_startWithCompletion__1126720c8,ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    _swift_release(puVar5);
    __Block_release(ppuVar12);
    _swift_unknownObjectRelease(uVar8);
    _swift_unknownObjectRelease(uVar9);
    func_0x0001048e61bc(&uStack_e0);
  }
  return;
}



/* Entry: 1048e4668; end: 1048e47f7; -[FBSDKDeviceLoginManager notifyDelegateWithToken:expirationDate:dataAccessExpirationDate:] */

void FUN_1048e4668(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  
  lVar4 = 0x11309c628;
  func_0x0001048db364();
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar3 = &stack0xffffffffffffffb0 + -uVar2;
  lVar4 = (long)puVar3 - uVar2;
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  if (param_4 == 0) {
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar4,param_4);
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar4,param_4 == 0,1);
  if (param_5 == 0) {
    lVar1 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,1,1,lVar1);
    _objc_retain(param_1);
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar3,param_5);
    lVar1 = 0;
    __s10Foundation4DateVMa();
    pcVar5 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
    _objc_retain(param_1);
    (*pcVar5)(puVar3,0,1,lVar1);
  }
  FUN_1048e3434(param_3,param_2,lVar4,puVar3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x0001048e6ccc(puVar3,0x11309c628);
  func_0x0001048e6ccc(lVar4,0x11309c628);
  return;
}



/* Entry: 1048e47f8; end: 1048e4847; -[FBSDKDeviceLoginManager processError:] */

void FUN_1048e47f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1048e29ec(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1048e4848; end: 1048e4b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e4848(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [104];
  
  if ((*(byte *)(param_1 + _DAT_11309c600) & 1) == 0) {
    ppuVar6 = &puStack_130;
    lVar2 = 0x11309c610;
    func_0x0001048db364();
    _swift_initStackObject();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = 0x65646f63;
    *(undefined8 *)(lVar2 + 0x28) = 0xe400000000000000;
    lVar5 = _DAT_11309c5e8;
    _swift_beginAccess(param_1 + _DAT_11309c5e8,auStack_b8,0,0);
    if (*(long *)(param_1 + lVar5) == 0) {
      uStack_f8 = 0;
      uStack_100 = 0;
      puStack_e8 = (undefined *)0x0;
      uStack_f0 = 0;
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      _objc_allocWithZone();
      _objc_msgSend();
      uVar4 = 0;
      FUN_1048e6de4(0,0x112d4b600,&PTR__OBJC_CLASS___NSNull_1126aef28);
      *(undefined8 *)(lVar2 + 0x48) = uVar4;
      *(undefined **)(lVar2 + 0x30) = puVar3;
      if (puStack_e8 != (undefined *)0x0) {
        func_0x0001048e6ccc(&uStack_100,0x11309c428);
      }
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_1 + lVar5) + _DAT_11309c540);
      uStack_100 = *puVar1;
      uVar4 = puVar1[1];
      puStack_e8 = PTR___sSSN_11034da80;
      uStack_f8 = uVar4;
      func_0x000100102924(&uStack_100,lVar2 + 0x30);
      _swift_bridgeObjectRetain(uVar4);
    }
    lVar5 = lVar2;
    func_0x000100214a84(lVar2);
    _swift_setDeallocating(lVar2);
    func_0x0001048e6ccc((undefined8 *)(lVar2 + 0x20),0x11309c418);
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    uVar4 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f21a160);
    lVar2 = lVar5;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(lVar5);
    lVar5 = *(long *)(param_2 + 0x38);
    puVar3 = PTR_s_validateRequiredClientAccessToke_1125250e0;
    _objc_msgSend(lVar5,PTR_s_validateRequiredClientAccessToke_1125250e0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar3);
    }
    _objc_msgSend(uVar7,PTR_s_createGraphRequestWithGraphPath__1125250e8,uVar4,lVar2,lVar5,
                  &PTR____CFConstantStringClassReference_110dada18,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_msgSend(uVar7,PTR_s_setGraphErrorRecoveryDisabled__1125250f0,1);
    func_0x0001048df510(param_2,&uStack_100);
    puVar3 = &UNK_1107b6950;
    _swift_allocObject(&UNK_1107b6950,0x60,7);
    *(undefined **)(puVar3 + 0x30) = puStack_e8;
    *(undefined8 *)(puVar3 + 0x28) = uStack_f0;
    *(undefined8 *)(puVar3 + 0x40) = uStack_d8;
    *(undefined8 *)(puVar3 + 0x38) = uStack_e0;
    *(undefined8 *)(puVar3 + 0x50) = uStack_c8;
    *(undefined8 *)(puVar3 + 0x48) = uStack_d0;
    *(long *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x58) = uStack_c0;
    *(undefined8 *)(puVar3 + 0x20) = uStack_f8;
    *(undefined8 *)(puVar3 + 0x18) = uStack_100;
    pcStack_110 = FUN_1048e6dd8;
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0x42000000;
    pcStack_120 = FUN_1048e305c;
    puStack_118 = &UNK_1107b6968;
    puStack_108 = puVar3;
    __Block_copy(&puStack_130);
    puVar3 = puStack_108;
    _objc_retain(param_1);
    _swift_release(puVar3);
    uVar4 = uVar7;
    _objc_msgSend(uVar7,PTR_s_startWithCompletion__1126720c8,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    __Block_release(ppuVar6);
    _swift_unknownObjectRelease(uVar7);
    _swift_unknownObjectRelease(uVar4);
  }
  return;
}



/* Entry: 1048e4b78; end: 1048e57bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e4b78(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte **ppbVar15;
  long lVar16;
  byte *pbVar17;
  code *pcVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined1 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  bool bVar26;
  code *pcVar27;
  undefined1 auStack_c0 [8];
  byte *pbStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  char cStack_90;
  uint7 uStack_8f;
  ulong uStack_88;
  byte *pbStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar4 = 0x11309c628;
  func_0x0001048db364();
  uVar11 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar22 = auStack_c0 + -uVar11;
  lVar23 = (long)puVar22 - uVar11;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar25 = *(long *)(lVar4 + -8);
  uVar11 = *(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar20 = lVar23 - uVar11;
  lVar24 = lVar20 - uVar11;
  lVar21 = lVar24 - uVar11;
  if ((*(byte *)(param_4 + _DAT_11309c600) & 1) != 0) {
    return;
  }
  if (param_3 != 0) {
    _swift_errorRetain(param_3);
    FUN_1048e29ec(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_3);
    return;
  }
  lStack_98 = lVar4;
  func_0x0001048e6d08(param_2,&pbStack_80,0x11309c428);
  lStack_b0 = param_5;
  if (lStack_68 == 0) {
    func_0x0001048e6ccc(&pbStack_80,0x11309c428);
LAB_1048e4d38:
    lVar4 = 0;
LAB_1048e4d3c:
    bVar26 = true;
LAB_1048e4d40:
    uStack_78 = 0;
    pbStack_80 = (byte *)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_1048e4d48:
    func_0x0001048e6ccc(&pbStack_80,0x11309c428);
    __s10Foundation4DateV13distantFutureACvgZ(lVar21);
    uVar11 = 0;
    if (bVar26) {
      bVar26 = true;
      uStack_a8 = 0;
      goto LAB_1048e4f10;
    }
    uStack_a8 = 0;
    if (*(long *)(lVar4 + 0x10) == 0) goto LAB_1048e4f0c;
LAB_1048e4d80:
    uStack_a0 = uVar11;
    _swift_bridgeObjectRetain(lVar4);
    lVar6 = 0x5f73657269707865;
    uVar11 = 0xea00000000006e69;
    func_0x000100029284(0x5f73657269707865);
    if ((uVar11 & 1) == 0) {
      uStack_78 = 0;
      pbStack_80 = (byte *)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar6 * 0x20,&pbStack_80);
    }
    _swift_bridgeObjectRelease(lVar4);
    if (lStack_68 == 0) {
      bVar26 = false;
      goto LAB_1048e4f1c;
    }
    pcVar5 = &cStack_90;
    _swift_dynamicCast(pcVar5,&pbStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar11 = uStack_88;
    if (((ulong)pcVar5 & 1) == 0) {
LAB_1048e56d0:
      bVar26 = false;
    }
    else {
      pbVar12 = (byte *)CONCAT71(uStack_8f,cStack_90);
      uVar13 = uStack_88 >> 0x38 & 0xf;
      uVar14 = (ulong)pbVar12 & 0xffffffffffff;
      uVar10 = uVar14;
      if ((uStack_88 & 0x2000000000000000) != 0) {
        uVar10 = uVar13;
      }
      if (uVar10 == 0) {
        _swift_bridgeObjectRelease(uStack_88);
        bVar26 = false;
      }
      else if ((uStack_88 >> 0x3c & 1) == 0) {
        if ((uStack_88 >> 0x3d & 1) == 0) {
          if ((uStack_8f & 0x10000000000000) == 0) {
            uVar14 = uStack_88;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
          }
          else {
            pbVar12 = (byte *)((uStack_88 & 0xfffffffffffffff) + 0x20);
          }
          if (*pbVar12 == 0x2b) {
            if ((long)uVar14 < 1) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57bc);
              (*pcVar18)();
            }
            lVar6 = uVar14 - 1;
            if (lVar6 == 0) goto LAB_1048e566c;
            if (pbVar12 == (byte *)0x0) goto LAB_1048e5610;
            pbStack_b8 = (byte *)0x0;
            do {
              pbVar12 = pbVar12 + 1;
              if (((9 < *pbVar12 - 0x30) ||
                  (lVar16 = (long)pbStack_b8 * 10,
                  SUB168(SEXT816((long)pbStack_b8) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                 (uVar10 = (ulong)(byte)(*pbVar12 - 0x30), pbStack_b8 = (byte *)(lVar16 + uVar10),
                 SCARRY8(lVar16,uVar10))) goto LAB_1048e566c;
              bVar2 = false;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          else if (*pbVar12 == 0x2d) {
            if ((long)uVar14 < 1) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57b4);
              (*pcVar18)();
            }
            lVar6 = uVar14 - 1;
            if (lVar6 == 0) {
LAB_1048e566c:
              pbStack_b8 = (byte *)0x0;
              bVar2 = true;
            }
            else if (pbVar12 == (byte *)0x0) {
LAB_1048e5610:
              pbStack_b8 = (byte *)0x0;
              bVar2 = false;
            }
            else {
              pbStack_b8 = (byte *)0x0;
              do {
                pbVar12 = pbVar12 + 1;
                if (((9 < *pbVar12 - 0x30) ||
                    (lVar16 = (long)pbStack_b8 * 10,
                    SUB168(SEXT816((long)pbStack_b8) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                   (uVar10 = (ulong)(byte)(*pbVar12 - 0x30), pbStack_b8 = (byte *)(lVar16 - uVar10),
                   SBORROW8(lVar16,uVar10))) goto LAB_1048e566c;
                bVar2 = false;
                lVar6 = lVar6 + -1;
              } while (lVar6 != 0);
            }
          }
          else {
            if (uVar14 == 0) goto LAB_1048e566c;
            if (pbVar12 == (byte *)0x0) goto LAB_1048e5610;
            pbStack_b8 = (byte *)0x0;
            do {
              if (((9 < *pbVar12 - 0x30) ||
                  (lVar6 = (long)pbStack_b8 * 10,
                  SUB168(SEXT816((long)pbStack_b8) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
                 (uVar10 = (ulong)(byte)(*pbVar12 - 0x30), pbStack_b8 = (byte *)(lVar6 + uVar10),
                 SCARRY8(lVar6,uVar10))) goto LAB_1048e566c;
              bVar2 = false;
              pbVar12 = pbVar12 + 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
        }
        else {
          uStack_78 = uStack_88 & 0xffffffffffffff;
          uVar1 = (uint)pbVar12 & 0xff;
          pbStack_80 = pbVar12;
          if (uVar1 == 0x2b) {
            if (uVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57c0);
              (*pcVar18)();
            }
            lVar6 = uVar13 - 1;
            if (lVar6 == 0) goto LAB_1048e566c;
            pbStack_b8 = (byte *)0x0;
            pbVar12 = (byte *)((ulong)&pbStack_80 | 1);
            do {
              if (((9 < *pbVar12 - 0x30) ||
                  (lVar16 = (long)pbStack_b8 * 10,
                  SUB168(SEXT816((long)pbStack_b8) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                 (uVar10 = (ulong)(byte)(*pbVar12 - 0x30), pbStack_b8 = (byte *)(lVar16 + uVar10),
                 SCARRY8(lVar16,uVar10))) goto LAB_1048e566c;
              bVar2 = false;
              pbVar12 = pbVar12 + 1;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          else if (uVar1 == 0x2d) {
            if (uVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57b8);
              (*pcVar18)();
            }
            lVar6 = uVar13 - 1;
            if (lVar6 == 0) goto LAB_1048e566c;
            pbStack_b8 = (byte *)0x0;
            pbVar12 = (byte *)((ulong)&pbStack_80 | 1);
            do {
              if (((9 < *pbVar12 - 0x30) ||
                  (lVar16 = (long)pbStack_b8 * 10,
                  SUB168(SEXT816((long)pbStack_b8) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                 (uVar10 = (ulong)(byte)(*pbVar12 - 0x30), pbStack_b8 = (byte *)(lVar16 - uVar10),
                 SBORROW8(lVar16,uVar10))) goto LAB_1048e566c;
              bVar2 = false;
              pbVar12 = pbVar12 + 1;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          else {
            if (uVar13 == 0) goto LAB_1048e566c;
            pbStack_b8 = (byte *)0x0;
            ppbVar15 = &pbStack_80;
            do {
              if (((9 < *(byte *)ppbVar15 - 0x30) ||
                  (lVar6 = (long)pbStack_b8 * 10,
                  SUB168(SEXT816((long)pbStack_b8) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
                 (uVar10 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30),
                 pbStack_b8 = (byte *)(lVar6 + uVar10), SCARRY8(lVar6,uVar10))) goto LAB_1048e566c;
              bVar2 = false;
              ppbVar15 = (byte **)((long)ppbVar15 + 1);
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
        }
        cStack_90 = bVar2;
        _swift_bridgeObjectRelease(uVar11);
        bVar26 = false;
        if (!bVar2) {
LAB_1048e5690:
          bVar26 = false;
          if (0 < (long)pbStack_b8) {
            __s10Foundation4DateV20timeIntervalSinceNowACSd_tcfC(lVar24,(double)pbStack_b8);
            lVar6 = lStack_98;
            (**(code **)(lVar25 + 8))(lVar21,lStack_98);
            (**(code **)(lVar25 + 0x20))(lVar21,lVar24,lVar6);
            goto LAB_1048e56d0;
          }
        }
      }
      else {
        _swift_bridgeObjectRetain(uStack_88);
        uVar10 = uVar11;
        func_0x000100edba6c(pbVar12,uVar11,10);
        pbStack_b8 = pbVar12;
        _swift_bridgeObjectRelease_n(uVar11,2);
        bVar26 = false;
        if ((uVar10 & 1) == 0) goto LAB_1048e5690;
      }
    }
  }
  else {
    uVar19 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar7 = PTR___sypN_11034f1a8;
    pcVar5 = &cStack_90;
    _swift_dynamicCast(pcVar5,&pbStack_80,PTR___sypN_11034f1a8 + 8,uVar19,6);
    if (((ulong)pcVar5 & 1) == 0) goto LAB_1048e4d38;
    lVar4 = CONCAT71(uStack_8f,cStack_90);
    if (lVar4 == 0) goto LAB_1048e4d3c;
    if (*(long *)(lVar4 + 0x10) == 0) {
      bVar26 = false;
      goto LAB_1048e4d40;
    }
    _swift_bridgeObjectRetain(lVar4);
    lVar6 = 0x745f737365636361;
    uVar11 = 0xec0000006e656b6f;
    func_0x000100029284(0x745f737365636361);
    if ((uVar11 & 1) == 0) {
      uStack_78 = 0;
      pbStack_80 = (byte *)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar6 * 0x20,&pbStack_80);
    }
    _swift_bridgeObjectRelease(lVar4);
    if (lStack_68 == 0) {
      bVar26 = false;
      goto LAB_1048e4d48;
    }
    pcVar5 = &cStack_90;
    _swift_dynamicCast(pcVar5,&pbStack_80,puVar7 + 8,PTR___sSSN_11034da80,6);
    uStack_a8 = CONCAT71(uStack_8f,cStack_90);
    uVar11 = uStack_88;
    if ((int)pcVar5 == 0) {
      uStack_a8 = 0;
      uVar11 = 0;
    }
    __s10Foundation4DateV13distantFutureACvgZ(lVar21);
    if (*(long *)(lVar4 + 0x10) != 0) goto LAB_1048e4d80;
LAB_1048e4f0c:
    bVar26 = false;
LAB_1048e4f10:
    uStack_78 = 0;
    pbStack_80 = (byte *)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
    uStack_a0 = uVar11;
LAB_1048e4f1c:
    func_0x0001048e6ccc(&pbStack_80,0x11309c428);
  }
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar20);
  _objc_release(puVar7);
  if (bVar26) {
    uStack_78 = 0;
    pbStack_80 = (byte *)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    if (*(long *)(lVar4 + 0x10) == 0) {
LAB_1048e4fc4:
      uStack_78 = 0;
      pbStack_80 = (byte *)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar4);
      uVar11 = 0;
      lVar6 = -0x2fffffffffffffe5;
      func_0x000100029284(0xd00000000000001b);
      if ((uVar11 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar4);
        goto LAB_1048e4fc4;
      }
      func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar6 * 0x20,&pbStack_80);
      _swift_bridgeObjectRelease(lVar4);
    }
    _swift_bridgeObjectRelease(lVar4);
    if (lStack_68 != 0) {
      pcVar5 = &cStack_90;
      _swift_dynamicCast(pcVar5,&pbStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)pcVar5 & 1) == 0) goto LAB_1048e50b4;
      pbVar12 = (byte *)CONCAT71(uStack_8f,cStack_90);
      uVar14 = uStack_88 >> 0x38 & 0xf;
      uVar10 = (ulong)pbVar12 & 0xffffffffffff;
      uVar11 = uVar10;
      if ((uStack_88 & 0x2000000000000000) != 0) {
        uVar11 = uVar14;
      }
      if (uVar11 == 0) {
        _swift_bridgeObjectRelease();
        goto LAB_1048e50b4;
      }
      if ((uStack_88 >> 0x3c & 1) == 0) {
        if ((uStack_88 >> 0x3d & 1) == 0) {
          if ((uStack_8f & 0x10000000000000) == 0) {
            uVar10 = uStack_88;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
          }
          else {
            pbVar12 = (byte *)((uStack_88 & 0xfffffffffffffff) + 0x20);
          }
          if (*pbVar12 == 0x2b) {
            if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57ac);
              (*pcVar18)();
            }
            lVar4 = uVar10 - 1;
            if (lVar4 == 0) goto LAB_1048e543c;
            if (pbVar12 == (byte *)0x0) goto LAB_1048e544c;
            pbVar17 = (byte *)0x0;
            do {
              pbVar12 = pbVar12 + 1;
              if (((9 < *pbVar12 - 0x30) ||
                  (lVar6 = (long)pbVar17 * 10,
                  SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
                 (uVar11 = (ulong)(byte)(*pbVar12 - 0x30), pbVar17 = (byte *)(lVar6 + uVar11),
                 SCARRY8(lVar6,uVar11))) goto LAB_1048e543c;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
          else if (*pbVar12 == 0x2d) {
            if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57a4);
              (*pcVar18)();
            }
            lVar4 = uVar10 - 1;
            if (lVar4 == 0) {
LAB_1048e543c:
              pbVar17 = (byte *)0x0;
              cStack_90 = '\x01';
              goto LAB_1048e54b8;
            }
            if (pbVar12 == (byte *)0x0) {
LAB_1048e544c:
              pbVar17 = (byte *)0x0;
            }
            else {
              pbVar17 = (byte *)0x0;
              do {
                pbVar12 = pbVar12 + 1;
                if (((9 < *pbVar12 - 0x30) ||
                    (lVar6 = (long)pbVar17 * 10,
                    SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
                   (uVar11 = (ulong)(byte)(*pbVar12 - 0x30), pbVar17 = (byte *)(lVar6 - uVar11),
                   SBORROW8(lVar6,uVar11))) goto LAB_1048e543c;
                lVar4 = lVar4 + -1;
              } while (lVar4 != 0);
            }
          }
          else {
            if (uVar10 == 0) goto LAB_1048e543c;
            if (pbVar12 == (byte *)0x0) goto LAB_1048e544c;
            pbVar17 = (byte *)0x0;
            do {
              if (((9 < *pbVar12 - 0x30) ||
                  (lVar4 = (long)pbVar17 * 10,
                  SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
                 (uVar11 = (ulong)(byte)(*pbVar12 - 0x30), pbVar17 = (byte *)(lVar4 + uVar11),
                 SCARRY8(lVar4,uVar11))) goto LAB_1048e543c;
              pbVar12 = pbVar12 + 1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          cStack_90 = '\0';
        }
        else {
          pbStack_80 = pbVar12;
          uStack_78 = uStack_88 & 0xffffffffffffff;
          uVar1 = (uint)pbVar12 & 0xff;
          if (uVar1 == 0x2b) {
            if (uVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57b0);
              (*pcVar18)();
            }
            lVar4 = uVar14 - 1;
            if (lVar4 == 0) goto LAB_1048e54ac;
            pbVar17 = (byte *)0x0;
            pbVar12 = (byte *)((ulong)&pbStack_80 | 1);
            do {
              if (((9 < *pbVar12 - 0x30) ||
                  (lVar6 = (long)pbVar17 * 10,
                  SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
                 (uVar11 = (ulong)(byte)(*pbVar12 - 0x30), pbVar17 = (byte *)(lVar6 + uVar11),
                 SCARRY8(lVar6,uVar11))) goto LAB_1048e54ac;
              cStack_90 = '\0';
              pbVar12 = pbVar12 + 1;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
          else if (uVar1 == 0x2d) {
            if (uVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57a8);
              (*pcVar18)();
            }
            lVar4 = uVar14 - 1;
            if (lVar4 == 0) {
LAB_1048e54ac:
              pbVar17 = (byte *)0x0;
              cStack_90 = '\x01';
            }
            else {
              pbVar17 = (byte *)0x0;
              pbVar12 = (byte *)((ulong)&pbStack_80 | 1);
              do {
                if (((9 < *pbVar12 - 0x30) ||
                    (lVar6 = (long)pbVar17 * 10,
                    SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
                   (uVar11 = (ulong)(byte)(*pbVar12 - 0x30), pbVar17 = (byte *)(lVar6 - uVar11),
                   SBORROW8(lVar6,uVar11))) goto LAB_1048e54ac;
                cStack_90 = '\0';
                pbVar12 = pbVar12 + 1;
                lVar4 = lVar4 + -1;
              } while (lVar4 != 0);
            }
          }
          else {
            if (uVar14 == 0) goto LAB_1048e54ac;
            pbVar17 = (byte *)0x0;
            ppbVar15 = &pbStack_80;
            do {
              if (((9 < *(byte *)ppbVar15 - 0x30) ||
                  (lVar4 = (long)pbVar17 * 10,
                  SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
                 (uVar11 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30),
                 pbVar17 = (byte *)(lVar4 + uVar11), SCARRY8(lVar4,uVar11))) goto LAB_1048e54ac;
              cStack_90 = '\0';
              ppbVar15 = (byte **)((long)ppbVar15 + 1);
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
        }
LAB_1048e54b8:
        cVar3 = cStack_90;
        _swift_bridgeObjectRelease(uStack_88);
        pbVar12 = pbVar17;
        if (cVar3 != '\0') goto LAB_1048e50b4;
      }
      else {
        _swift_bridgeObjectRetain();
        uVar11 = uStack_88;
        func_0x000100edba6c(pbVar12,uStack_88,10);
        _swift_bridgeObjectRelease_n(uStack_88,2);
        if ((uVar11 & 1) != 0) goto LAB_1048e50b4;
      }
      if (0 < (long)pbVar12) {
        __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC(lVar24,(double)pbVar12);
        lVar4 = lStack_98;
        (**(code **)(lVar25 + 8))(lVar20,lStack_98);
        (**(code **)(lVar25 + 0x20))(lVar20,lVar24,lVar4);
      }
      goto LAB_1048e50b4;
    }
  }
  func_0x0001048e6ccc(&pbStack_80,0x11309c428);
LAB_1048e50b4:
  lVar4 = lStack_98;
  uVar11 = uStack_a0;
  if (uStack_a0 == 0) {
    uVar19 = *(undefined8 *)(lStack_b0 + 0x28);
    if (lRam000000011309c208 != -1) {
      _swift_once(0x11309c208,FUN_1048f88f0);
    }
    uVar8 = uRam000000011309ca80;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uRam000000011309ca80,uRam000000011309ca88)
    ;
    uVar9 = 0xd000000000000036;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000036,0x800000010f21a180);
    _objc_msgSend(uVar19,PTR_s_errorWithDomain_code_userInfo_me_112525100,uVar8,3,0,uVar9,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar9);
    FUN_1048e2d04(uVar19);
    _objc_release(uVar19);
    lVar4 = lStack_98;
    pcVar18 = *(code **)(lVar25 + 8);
    (*pcVar18)(lVar20,lStack_98);
    (*pcVar18)(lVar21,lVar4);
  }
  else {
    pcVar18 = *(code **)(lVar25 + 0x10);
    (*pcVar18)(lVar23,lVar21,lStack_98);
    pcVar27 = *(code **)(lVar25 + 0x38);
    (*pcVar27)(lVar23,0,1,lVar4);
    (*pcVar18)(puVar22,lVar20,lVar4);
    (*pcVar27)(puVar22,0,1,lVar4);
    FUN_1048e3434(uStack_a8,uVar11,lVar23,puVar22);
    _swift_bridgeObjectRelease(uVar11);
    func_0x0001048e6ccc(puVar22,0x11309c628);
    func_0x0001048e6ccc(lVar23,0x11309c628);
    pcVar18 = *(code **)(lVar25 + 8);
    (*pcVar18)(lVar20,lVar4);
    (*pcVar18)(lVar21,lVar4);
  }
  return;
}



/* Entry: 1048e57c0; end: 1048e57ef; -[FBSDKDeviceLoginManager schedulePollWithInterval:] */

void FUN_1048e57c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1048e2f34(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048e57f0; end: 1048e583b;  */

void FUN_1048e57f0(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1048e583c; end: 1048e589b; -[FBSDKDeviceLoginManager init] */

void FUN_1048e583c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FBSDKLoginKit.DeviceLoginManager",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048e5868);
  (*pcVar1)();
}



/* Entry: 1048e589c; end: 1048e592f; -[FBSDKDeviceLoginManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e589c(long param_1)

{
  func_0x0001048e6ca8(param_1 + _DAT_11309c5c8);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309c5d0));
  func_0x0001048e6ccc(param_1 + _DAT_11309c5d8,0x11309c5e0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11309c5e8));
  func_0x0001048e6ccc(param_1 + _DAT_11309c5f0,0x11309c520);
  func_0x0001048e6ccc(param_1 + _DAT_11309c5f8,0x11309c520);
  return;
}



/* Entry: 1048e5930; end: 1048e5a7b;  */

void FUN_1048e5930(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_68 [24];
  
  if (lRam000000011309c1b0 != -1) {
    _swift_once(0x11309c1b0,FUN_1048e77e8);
  }
  _swift_beginAccess(0x113815548,auStack_68,0,0);
  lVar1 = lRam0000000113815548;
  _objc_msgSend(lRam0000000113815548,PTR_s_objectForKey__1126159e0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNetService_1126add28;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNetService_1126add28);
    lVar3 = lVar1;
    _swift_dynamicCastObjCClass(lVar1,puVar2);
    _swift_unknownObjectRelease(lVar1);
    if (lVar3 != 0 && lVar3 == param_1) {
      lVar1 = lRam0000000113815548;
      _objc_msgSend(lRam0000000113815548,PTR_s_objectForKey__1126159e0);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSNetService_1126add28;
        _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNetService_1126add28);
        lVar3 = lVar1;
        _swift_dynamicCastObjCClass(lVar1,puVar2);
        if (lVar3 != 0) {
          _objc_msgSend();
          _objc_msgSend(lVar3,PTR_s_stop_112673008);
          _objc_msgSend(lRam0000000113815548,PTR_s_removeObjectForKey__112628f18);
        }
        _swift_unknownObjectRelease(lVar1);
      }
    }
  }
  return;
}



/* Entry: 1048e5a7c; end: 1048e5b8b; -[FBSDKDeviceLoginManager netService:didNotPublish:] */

void FUN_1048e5a7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = lRam000000011309c1b0;
  _objc_retain();
  _objc_retain(param_1);
  if (lVar1 != -1) {
    _swift_once(0x11309c1b0,FUN_1048e77e8);
  }
  _swift_beginAccess(0x113815548,auStack_48,0,0);
  lVar1 = lRam0000000113815548;
  _objc_msgSend(lRam0000000113815548,PTR_s_objectForKey__1126159e0,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNetService_1126add28;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNetService_1126add28);
    lVar3 = lVar1;
    _swift_dynamicCastObjCClass(lVar1,puVar2);
    if (lVar3 == 0) {
      _objc_release(param_3);
      _objc_release(param_1);
      _swift_unknownObjectRelease(lVar1);
      return;
    }
    _swift_unknownObjectRelease(lVar1);
    if (lVar3 == param_3) {
      FUN_1048e5fbc(param_1);
    }
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 1048e5b8c; end: 1048e5ce7;  */

long FUN_1048e5b8c(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1);
  return param_1;
}



/* Entry: 1048e5ce8; end: 1048e5cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e5ce8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c5f0;
  _swift_beginAccess(unaff_x20 + _DAT_11309c5f0,auStack_48,0,0);
  func_0x0001048e6d08(unaff_x20 + lVar1,param_1,0x11309c520);
  return;
}



/* Entry: 1048e5cf4; end: 1048e5d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e5cf4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c5f0;
  _swift_beginAccess(unaff_x20 + _DAT_11309c5f0,auStack_48,0x21,0);
  func_0x0001048e14cc(param_1,unaff_x20 + lVar1,0x11309c520);
  _swift_endAccess(auStack_48);
  return;
}



/* Entry: 1048e5d58; end: 1048e5d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048e5d58(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11309c5f0;
  _swift_beginAccess(unaff_x20 + _DAT_11309c5f0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1048e6f64;
  return auVar2;
}



/* Entry: 1048e5d98; end: 1048e5da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e5d98(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c5f8;
  _swift_beginAccess(unaff_x20 + _DAT_11309c5f8,auStack_48,0,0);
  func_0x0001048e6d08(unaff_x20 + lVar1,param_1,0x11309c520);
  return;
}



/* Entry: 1048e5da4; end: 1048e5dfb;  */

void FUN_1048e5da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_48,0,0);
  func_0x0001048e6d08(unaff_x20 + lVar1,param_1,0x11309c520);
  return;
}



/* Entry: 1048e5dfc; end: 1048e5eab;  */

void FUN_1048e5dfc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xfffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  FUN_1048decb4();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1048e5eac; end: 1048e5f1b;  */

void FUN_1048e5eac(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xfffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if ((long)uVar3 < 0) {
        uVar1 = uVar3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg(uVar1);
    }
    uVar2 = 0;
    FUN_1048decb4(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1048e5f1c; end: 1048e5f6b;  */

void FUN_1048e5f1c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam000000011309c620 != 0) {
    return;
  }
  puVar1 = PTR___sSSN_11034da80;
  __sSaMa();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam000000011309c620 = param_1;
  return;
}



/* Entry: 1048e5f6c; end: 1048e5fbb;  */

/* WARNING: Removing unreachable block (ram,0x0001048dece8) */
/* WARNING: Removing unreachable block (ram,0x0001048ded0c) */
/* WARNING: Removing unreachable block (ram,0x0001048decf0) */
/* WARNING: Removing unreachable block (ram,0x0001048dede0) */
/* WARNING: Removing unreachable block (ram,0x0001048decfc) */
/* WARNING: Removing unreachable block (ram,0x0001048ded04) */
/* WARNING: Removing unreachable block (ram,0x0001048ded4c) */
/* WARNING: Removing unreachable block (ram,0x0001048ded60) */
/* WARNING: Removing unreachable block (ram,0x0001048ded6c) */
/* WARNING: Removing unreachable block (ram,0x0001048ded74) */

ulong FUN_1048e5f6c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar3 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xfffffffffffff8) + 0x10);
  }
  else {
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar4,uVar3);
  }
  uVar2 = uVar4;
  func_0x0001049010b0(uVar4,uVar3);
  if (-1 < (long)uVar4) {
    func_0x0001048dede4(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048dede0);
  (*pcVar1)();
}



/* Entry: 1048e5fbc; end: 1048e60ab;  */

void FUN_1048e5fbc(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  if (lRam000000011309c1b0 != -1) {
    _swift_once(0x11309c1b0,FUN_1048e77e8);
  }
  _swift_beginAccess(0x113815548,auStack_48,0,0);
  lVar1 = lRam0000000113815548;
  _objc_msgSend(lRam0000000113815548,PTR_s_objectForKey__1126159e0,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNetService_1126add28;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNetService_1126add28);
    lVar3 = lVar1;
    _swift_dynamicCastObjCClass(lVar1,puVar2);
    if (lVar3 != 0) {
      _objc_msgSend();
      _objc_msgSend(lVar3,PTR_s_stop_112673008);
      _objc_msgSend(lRam0000000113815548,PTR_s_removeObjectForKey__112628f18,param_1);
    }
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1048e60ac; end: 1048e6197;  */

uint FUN_1048e60ac(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong *puVar1;
  uint uVar2;
  uint extraout_w8;
  long unaff_x21;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  ulong uStack_30;
  ulong uStack_28;
  byte bStack_11;
  
  uStack_40 = param_3;
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if ((param_1 >> 0x3c & 1) == 0) goto LAB_1048e6164;
      puVar1 = (ulong *)(param_2 + 0x20);
      if (((ulong)*(byte *)puVar1 < 0x21) &&
         ((0x100003e01U >> ((ulong)*(byte *)puVar1 & 0x3f) & 1) != 0)) goto LAB_1048e611c;
    }
    else {
      uStack_28 = param_2 & 0xffffffffffffff;
      if ((((uint)param_1 & 0xff) < 0x21) && ((0x100003e01U >> (param_1 & 0x3f) & 1) != 0)) {
LAB_1048e611c:
        uVar2 = 0;
        goto LAB_1048e6150;
      }
      puVar1 = &uStack_30;
      uStack_30 = param_1;
    }
    __swift_stdlib_strtod_clocale(puVar1,param_3);
    if (puVar1 == (ulong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)((byte)*puVar1 == 0);
    }
  }
  else {
LAB_1048e6164:
    __ss11_StringGutsV16_slowWithCStringyxxSPys4Int8VGKXEKlF
              (&bStack_11,FUN_1048e6e24,auStack_50,param_1,param_2,PTR___sSbN_11034dd40);
    uVar2 = extraout_w8;
    if (unaff_x21 == 0) {
      uVar2 = (uint)bStack_11;
    }
  }
LAB_1048e6150:
  return uVar2 & 1;
}



/* Entry: 1048e6198; end: 1048e61a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e6198(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  code *pcVar14;
  long unaff_x20;
  long lVar15;
  undefined8 *puVar16;
  bool bVar17;
  code *pcVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  long lStack_f0;
  undefined1 auStack_e0 [24];
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  puStack_f8 = (undefined8 *)(unaff_x20 + 0x18);
  lVar2 = 0;
  lStack_f0 = param_2;
  __s10Foundation4DateVMa();
  puVar16 = *(undefined8 **)(lVar2 + -8);
  uVar10 = puVar16[8] + 0xf & 0xfffffffffffffff0;
  lVar20 = (long)&puStack_140 - uVar10;
  lVar21 = lVar20 - uVar10;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  puVar12 = *(undefined8 **)(lVar3 + -8);
  uVar10 = puVar12[8] + 0xf & 0xfffffffffffffff0;
  lVar23 = lVar21 - uVar10;
  lVar15 = lVar23 - uVar10;
  lVar11 = 0x11309c5e0;
  func_0x0001048db364();
  uVar10 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puStack_110 = (undefined8 *)(lVar15 - uVar10);
  lVar11 = (long)puStack_110 - uVar10;
  if (param_3 != 0) {
    _swift_errorRetain(param_3);
    FUN_1048e29ec(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_3);
    return;
  }
  lStack_138 = lVar23;
  lStack_130 = lVar21;
  lStack_128 = lVar20;
  puStack_120 = puVar16;
  lStack_118 = lVar15;
  puStack_108 = puVar12;
  lStack_100 = lVar3;
  func_0x0001048e6d08(lStack_f0,&uStack_a0,0x11309c428);
  if (lStack_88 == 0) {
    func_0x0001048e6ccc(&uStack_a0,0x11309c428);
LAB_1048e2014:
    puVar22 = (undefined8 *)0x0;
LAB_1048e2018:
    bVar17 = true;
LAB_1048e201c:
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
    puVar12 = puStack_110;
    lVar3 = lStack_100;
    puVar16 = puStack_108;
LAB_1048e2024:
    func_0x0001048e6ccc(&uStack_a0,0x11309c428);
LAB_1048e2034:
    (*(code *)puVar16[7])(lVar11,1,1,lVar3);
  }
  else {
    uVar19 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar7 = PTR___sypN_11034f1a8;
    ppuVar4 = &puStack_c8;
    _swift_dynamicCast(ppuVar4,&uStack_a0,PTR___sypN_11034f1a8 + 8,uVar19,6);
    puVar22 = puStack_c8;
    lVar3 = lStack_100;
    puVar16 = puStack_108;
    puVar12 = puStack_110;
    if (((ulong)ppuVar4 & 1) == 0) goto LAB_1048e2014;
    if (puStack_c8 == (undefined8 *)0x0) goto LAB_1048e2018;
    if (puStack_c8[2] == 0) {
      bVar17 = false;
      goto LAB_1048e201c;
    }
    lStack_f0 = lVar9;
    _swift_bridgeObjectRetain(puStack_c8);
    uVar10 = 0;
    lVar9 = -0x2ffffffffffffff0;
    func_0x000100029284(0xd000000000000010);
    if ((uVar10 & 1) == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x0001000bb420(puVar22[7] + lVar9 * 0x20,&uStack_a0);
    }
    _swift_bridgeObjectRelease(puVar22);
    lVar9 = lStack_f0;
    if (lStack_88 == 0) {
      bVar17 = false;
      goto LAB_1048e2024;
    }
    ppuVar4 = &puStack_c8;
    _swift_dynamicCast(ppuVar4,&uStack_a0,puVar7 + 8,PTR___sSSN_11034da80,6);
    puVar1 = puStack_c0;
    puVar5 = puStack_c8;
    if (((ulong)ppuVar4 & 1) == 0) {
      bVar17 = false;
      goto LAB_1048e2034;
    }
    _swift_bridgeObjectRetain(puStack_c0);
    __s10Foundation3URLV6stringACSgSSh_tcfC(lVar11,puVar5,puVar1);
    _swift_bridgeObjectRelease_n(puVar1,2);
    bVar17 = false;
  }
  func_0x0001048e6d08(lVar11,puVar12,0x11309c5e0);
  puVar5 = puVar12;
  (*(code *)puVar16[6])(puVar12,1,lVar3);
  lVar15 = lStack_118;
  if ((int)puVar5 == 1) {
    _swift_bridgeObjectRelease(puVar22);
    uVar19 = 0x11309c5e0;
LAB_1048e21e8:
    func_0x0001048e6ccc(puVar12,uVar19);
  }
  else {
    (*(code *)puVar16[4])(lStack_118,puVar12,lVar3);
    if (bVar17) {
      (*(code *)puVar16[1])(lVar15,lVar3);
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
LAB_1048e21dc:
      uVar19 = 0x11309c428;
      puVar12 = &uStack_a0;
      goto LAB_1048e21e8;
    }
    if (puVar22[2] == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
LAB_1048e21c0:
      (*(code *)puVar16[1])(lStack_118,lVar3);
LAB_1048e21d8:
      _swift_bridgeObjectRelease(puVar22);
      goto LAB_1048e21dc;
    }
    _swift_bridgeObjectRetain(puVar22);
    lVar15 = 0x65646f63;
    uVar10 = 0;
    func_0x000100029284(0x65646f63);
    if ((uVar10 & 1) == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x0001000bb420(puVar22[7] + lVar15 * 0x20,&uStack_a0);
    }
    puVar12 = puStack_120;
    _swift_bridgeObjectRelease(puVar22);
    puVar7 = PTR___sypN_11034f1a8;
    if (lStack_88 == 0) goto LAB_1048e21c0;
    ppuVar4 = &puStack_c8;
    _swift_dynamicCast(ppuVar4,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)ppuVar4 & 1) != 0) {
      puStack_108 = puStack_c0;
      if (puVar22[2] == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        puStack_110 = puStack_c8;
        lStack_f0 = lVar9;
        _swift_bridgeObjectRetain(puVar22);
        lVar9 = 0x646f635f72657375;
        uVar10 = 0xe900000000000065;
        func_0x000100029284(0x646f635f72657375);
        if ((uVar10 & 1) == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          func_0x0001000bb420(puVar22[7] + lVar9 * 0x20,&uStack_a0);
        }
        lVar9 = lStack_128;
        _swift_bridgeObjectRelease(puVar22);
        if (lStack_88 != 0) {
          ppuVar4 = &puStack_c8;
          _swift_dynamicCast(ppuVar4,&uStack_a0,puVar7 + 8,PTR___sSSN_11034da80,6);
          if (((ulong)ppuVar4 & 1) == 0) {
            (*(code *)puVar16[1])(lStack_118,lVar3);
            _swift_bridgeObjectRelease(puVar22);
            puVar22 = puStack_108;
            goto LAB_1048e2318;
          }
          puStack_f8 = puStack_c8;
          puStack_140 = puStack_c0;
          if (puVar22[2] == 0) {
            uStack_98 = 0;
            uStack_a0 = 0;
            lStack_88 = 0;
            uStack_90 = 0;
LAB_1048e24b4:
            func_0x0001048e6ccc(&uStack_a0,0x11309c428);
LAB_1048e24c4:
            uVar19 = 0;
            if (puVar22[2] == 0) goto LAB_1048e2558;
LAB_1048e24d8:
            lVar15 = lStack_130;
            _swift_bridgeObjectRetain(puVar22);
            lVar9 = 0x6c61767265746e69;
            uVar10 = 0;
            func_0x000100029284(0x6c61767265746e69);
            if ((uVar10 & 1) == 0) {
              _swift_bridgeObjectRelease(puVar22);
              uStack_98 = 0;
              uStack_a0 = 0;
              lStack_88 = 0;
              uStack_90 = 0;
              lVar9 = lStack_128;
            }
            else {
              func_0x0001000bb420(puVar22[7] + lVar9 * 0x20,&uStack_a0);
              _swift_bridgeObjectRelease(puVar22);
              lVar9 = lStack_128;
            }
          }
          else {
            _swift_bridgeObjectRetain(puVar22);
            lVar9 = 0x5f73657269707865;
            uVar10 = 0xea00000000006e69;
            func_0x000100029284(0x5f73657269707865);
            if ((uVar10 & 1) == 0) {
              uStack_98 = 0;
              uStack_a0 = 0;
              lStack_88 = 0;
              uStack_90 = 0;
            }
            else {
              func_0x0001000bb420(puVar22[7] + lVar9 * 0x20,&uStack_a0);
            }
            lVar9 = lStack_128;
            _swift_bridgeObjectRelease(puVar22);
            if (lStack_88 == 0) goto LAB_1048e24b4;
            ppuVar4 = &puStack_c8;
            _swift_dynamicCast(ppuVar4,&uStack_a0,puVar7 + 8,PTR___sSSN_11034da80,6);
            puVar1 = puStack_c0;
            puVar5 = puStack_c8;
            if (((ulong)ppuVar4 & 1) == 0) goto LAB_1048e24c4;
            uStack_a0 = 0;
            _swift_bridgeObjectRetain(puStack_c0);
            FUN_1048e60ac(puVar5,puVar1,&uStack_a0);
            _swift_bridgeObjectRelease_n(puVar1,2);
            uVar19 = uStack_a0;
            if (((ulong)puVar5 & 1) == 0) {
              uVar19 = 0;
            }
            puVar12 = puStack_120;
            if (puVar22[2] != 0) goto LAB_1048e24d8;
LAB_1048e2558:
            uStack_98 = 0;
            uStack_a0 = 0;
            lStack_88 = 0;
            uStack_90 = 0;
            lVar15 = lStack_130;
          }
          _swift_bridgeObjectRelease(puVar22);
          if (lStack_88 == 0) {
            func_0x0001048e6ccc(&uStack_a0,0x11309c428);
LAB_1048e25f4:
            puStack_120 = (undefined8 *)0x0;
          }
          else {
            uVar13 = 0;
            FUN_1048e6de4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            ppuVar4 = &puStack_c8;
            _swift_dynamicCast(ppuVar4,&uStack_a0,puVar7 + 8,uVar13,6);
            puVar22 = puStack_c8;
            if (((ulong)ppuVar4 & 1) == 0) goto LAB_1048e25f4;
            puVar5 = puStack_c8;
            _objc_msgSend(puStack_c8,PTR_s_unsignedIntegerValue_11267e418);
            lVar9 = lStack_128;
            puStack_120 = puVar5;
            _objc_release(puVar22);
          }
          lVar20 = lStack_138;
          pcVar14 = (code *)puVar16[2];
          (*pcVar14)(lStack_138,lStack_118,lVar3);
          __s10Foundation4DateVACycfC(lVar9);
          __s10Foundation4DateV18addingTimeIntervalyACSdF(lVar15,uVar19);
          pcVar18 = (code *)puVar12[1];
          (*pcVar18)(lVar9,lVar2);
          lVar21 = 0;
          FUN_1048e03b4();
          lVar3 = lVar21;
          _objc_allocWithZone();
          puVar22 = (undefined8 *)(lVar3 + _DAT_11309c540);
          *puVar22 = puStack_110;
          puVar22[1] = puStack_108;
          puVar22 = (undefined8 *)(lVar3 + _DAT_11309c548);
          *puVar22 = puStack_f8;
          puVar22[1] = puStack_140;
          (*pcVar14)(lVar3 + _DAT_11309c550,lVar20,lStack_100);
          lVar9 = lStack_100;
          (*(code *)puVar12[2])(lVar3 + _DAT_11309c558,lVar15,lVar2);
          puVar12 = puStack_120;
          if (puStack_120 < (undefined8 *)0x6) {
            puVar12 = (undefined8 *)0x5;
          }
          *(undefined8 **)(lVar3 + _DAT_11309c560) = puVar12;
          plVar6 = &lStack_b0;
          lStack_b0 = lVar3;
          lStack_a8 = lVar21;
          _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
          (*pcVar18)(lVar15,lVar2);
          pcVar14 = (code *)puVar16[1];
          (*pcVar14)(lVar20,lVar9);
          lVar2 = lStack_f0;
          lVar3 = _DAT_11309c5e8;
          _swift_beginAccess(lStack_f0 + _DAT_11309c5e8,&uStack_a0,1,0);
          uVar19 = *(undefined8 *)(lVar2 + lVar3);
          *(long **)(lVar2 + lVar3) = plVar6;
          _objc_retain();
          _objc_release(uVar19);
          lVar3 = lRam000000011309c1b8;
          if (*(char *)(lVar2 + _DAT_11309c608) == '\x01') {
            uVar19 = *(undefined8 *)((long)plVar6 + _DAT_11309c548);
            uVar13 = ((undefined8 *)((long)plVar6 + _DAT_11309c548))[1];
            puStack_c8 = (undefined8 *)0x6f695f6b64736266;
            puStack_c0 = (undefined8 *)0xea00000000002d73;
            _swift_bridgeObjectRetain(uVar13);
            if (lVar3 != -1) {
              _swift_once(0x11309c1b8,FUN_1048e79b4);
            }
            __sSS6appendyySSF(uRam000000011309c700,uRam000000011309c708);
            __sSS6appendyySSF(0x5f,0xe100000000000000);
            __sSS6appendyySSF(uVar19,uVar13);
            puVar16 = puStack_c0;
            puVar12 = puStack_c8;
            puVar22 = puStack_c8;
            __sSS5countSivg(puStack_c8,puStack_c0);
            if ((long)puVar22 < 0x3d) {
              puVar7 = PTR__OBJC_CLASS___NSNetService_1126add28;
              _objc_allocWithZone(PTR__OBJC_CLASS___NSNetService_1126add28);
              uVar19 = 0x2e6c61636f6c;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0x2e6c61636f6c,0xe600000000000000);
              uVar8 = 0x7063745f2e62665f;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0x7063745f2e62665f,0xe90000000000002e);
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar12,puVar16);
              _swift_bridgeObjectRelease(puVar16);
              _objc_msgSend(puVar7,PTR_s_initWithDomain_type_name_port__112525118,uVar19,uVar8,
                            puVar12,0);
              _objc_release(uVar19);
              _objc_release(uVar8);
              _objc_release(puVar12);
              lVar2 = lStack_f0;
              _objc_msgSend(puVar7,PTR_s_setDelegate__112640798,lStack_f0);
              _objc_msgSend(puVar7,PTR_s_publishWithOptions__112525120,3);
              if (lRam000000011309c1b0 != -1) {
                _swift_once(0x11309c1b0,FUN_1048e77e8);
              }
              _swift_beginAccess(0x113815548,auStack_e0,0,0);
              uVar19 = uRam0000000113815548;
              _objc_retain(uRam0000000113815548);
              _objc_msgSend();
              _swift_bridgeObjectRelease(uVar13);
              _objc_release(uVar19);
              _objc_release(puVar7);
            }
            else {
              _swift_bridgeObjectRelease(uVar13);
              _swift_bridgeObjectRelease(puVar16);
              lVar2 = lStack_f0;
            }
          }
          lVar3 = _DAT_11309c5c8;
          _swift_beginAccess(lVar2 + _DAT_11309c5c8,&puStack_c8,0,0);
          lVar2 = lVar2 + lVar3;
          _swift_unknownObjectWeakLoadStrong();
          if (lVar2 != 0) {
            _objc_msgSend();
            _swift_unknownObjectRelease(lVar2);
          }
          FUN_1048e2f34(*(undefined8 *)((long)plVar6 + _DAT_11309c560));
          _objc_release(plVar6);
          (*pcVar14)(lStack_118,lVar9);
          goto LAB_1048e2258;
        }
      }
      (*(code *)puVar16[1])(lStack_118,lVar3);
      _swift_bridgeObjectRelease(puVar22);
      puVar22 = puStack_108;
      goto LAB_1048e21d8;
    }
    (*(code *)puVar16[1])(lStack_118,lVar3);
LAB_1048e2318:
    _swift_bridgeObjectRelease(puVar22);
  }
  uVar13 = puStack_f8[5];
  uVar19 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f21a1e0);
  _objc_msgSend(uVar13,PTR_s_errorWithCode_userInfo_message_u_1125c3e28,3,0,uVar19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  FUN_1048e2d04(uVar13);
  _objc_release(uVar13);
LAB_1048e2258:
  func_0x0001048e6ccc(lVar11,0x11309c5e0);
  return;
}



/* Entry: 1048e61a4; end: 1048e61e7;  */

void FUN_1048e61a4(long param_1,long param_2)

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



/* Entry: 1048e61e8; end: 1048e61f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e61e8(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [104];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  if ((*(byte *)(lVar7 + _DAT_11309c600) & 1) == 0) {
    ppuVar6 = &puStack_130;
    lVar2 = 0x11309c610;
    func_0x0001048db364();
    _swift_initStackObject();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = 0x65646f63;
    *(undefined8 *)(lVar2 + 0x28) = 0xe400000000000000;
    lVar5 = _DAT_11309c5e8;
    _swift_beginAccess(lVar7 + _DAT_11309c5e8,auStack_b8,0,0);
    if (*(long *)(lVar7 + lVar5) == 0) {
      uStack_f8 = 0;
      uStack_100 = 0;
      puStack_e8 = (undefined *)0x0;
      uStack_f0 = 0;
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      _objc_allocWithZone();
      _objc_msgSend();
      uVar4 = 0;
      FUN_1048e6de4(0,0x112d4b600,&PTR__OBJC_CLASS___NSNull_1126aef28);
      *(undefined8 *)(lVar2 + 0x48) = uVar4;
      *(undefined **)(lVar2 + 0x30) = puVar3;
      if (puStack_e8 != (undefined *)0x0) {
        func_0x0001048e6ccc(&uStack_100,0x11309c428);
      }
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar7 + lVar5) + _DAT_11309c540);
      uStack_100 = *puVar1;
      uVar4 = puVar1[1];
      puStack_e8 = PTR___sSSN_11034da80;
      uStack_f8 = uVar4;
      func_0x000100102924(&uStack_100,lVar2 + 0x30);
      _swift_bridgeObjectRetain(uVar4);
    }
    lVar5 = lVar2;
    func_0x000100214a84(lVar2);
    _swift_setDeallocating(lVar2);
    func_0x0001048e6ccc((undefined8 *)(lVar2 + 0x20),0x11309c418);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar4 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f21a160);
    lVar2 = lVar5;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(lVar5);
    lVar5 = *(long *)(unaff_x20 + 0x50);
    puVar3 = PTR_s_validateRequiredClientAccessToke_1125250e0;
    _objc_msgSend(lVar5,PTR_s_validateRequiredClientAccessToke_1125250e0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar3);
    }
    _objc_msgSend(uVar8,PTR_s_createGraphRequestWithGraphPath__1125250e8,uVar4,lVar2,lVar5,
                  &PTR____CFConstantStringClassReference_110dada18,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_msgSend(uVar8,PTR_s_setGraphErrorRecoveryDisabled__1125250f0,1);
    func_0x0001048df510(unaff_x20 + 0x18,&uStack_100);
    puVar3 = &UNK_1107b6950;
    _swift_allocObject(&UNK_1107b6950,0x60,7);
    *(undefined **)(puVar3 + 0x30) = puStack_e8;
    *(undefined8 *)(puVar3 + 0x28) = uStack_f0;
    *(undefined8 *)(puVar3 + 0x40) = uStack_d8;
    *(undefined8 *)(puVar3 + 0x38) = uStack_e0;
    *(undefined8 *)(puVar3 + 0x50) = uStack_c8;
    *(undefined8 *)(puVar3 + 0x48) = uStack_d0;
    *(long *)(puVar3 + 0x10) = lVar7;
    *(undefined8 *)(puVar3 + 0x58) = uStack_c0;
    *(undefined8 *)(puVar3 + 0x20) = uStack_f8;
    *(undefined8 *)(puVar3 + 0x18) = uStack_100;
    pcStack_110 = FUN_1048e6dd8;
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0x42000000;
    pcStack_120 = FUN_1048e305c;
    puStack_118 = &UNK_1107b6968;
    puStack_108 = puVar3;
    __Block_copy(&puStack_130);
    puVar3 = puStack_108;
    _objc_retain(lVar7);
    _swift_release(puVar3);
    uVar4 = uVar8;
    _objc_msgSend(uVar8,PTR_s_startWithCompletion__1126720c8,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    __Block_release(ppuVar6);
    _swift_unknownObjectRelease(uVar8);
    _swift_unknownObjectRelease(uVar4);
  }
  return;
}



/* Entry: 1048e61f4; end: 1048e62ef;  */

void FUN_1048e61f4(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1048e62cc);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0;
  FUN_1048e6920(0);
  _swift_arrayDestroy(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1048e62d0);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
      lVar3 = uVar7 - param_2;
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar3 = uVar7 - param_2;
    }
    if (SBORROW8(uVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1048e62e8);
      (*pcVar5)();
    }
    uVar7 = lVar1 + param_3 * 8;
    uVar2 = uVar8 + 0x20 + param_2 * 8;
    if (uVar7 != uVar2 || uVar2 + lVar3 * 8 <= uVar7) {
      _memmove(uVar7,uVar2,lVar3 << 3);
    }
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1048e62ec);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1048e62f0);
    (*pcVar5)();
  }
  return;
}



/* Entry: 1048e62f0; end: 1048e63b7;  */

/* WARNING: Removing unreachable block (ram,0x0001048e62ec) */

void FUN_1048e62f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1048e6390);
    (*pcVar3)();
  }
  uVar7 = *unaff_x20;
  if (uVar7 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar7 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar7 & 0xffffffffffffff8;
    if ((uVar7 & 0x8000000000000000) != 0) {
      uVar6 = uVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if ((long)uVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1048e63ac);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1048e63b0);
    (*pcVar3)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (uVar7 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar7 & 0xffffffffffffff8;
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar6 = uVar7;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar6,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1048e63b8);
      (*pcVar3)();
    }
    FUN_1048e5dfc(uVar6 + lVar1,1);
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1048e62cc);
      (*pcVar3)();
    }
    uVar8 = *unaff_x20;
    uVar6 = uVar8 & 0xffffffffffffff8;
    uVar7 = uVar6 + 0x20 + param_1 * 8;
    uVar4 = 0;
    FUN_1048e6920(0);
    _swift_arrayDestroy(uVar7,lVar1,uVar4);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1048e62d0);
      (*pcVar3)();
    }
    if (lVar2 != 0) {
      if (uVar8 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar6 + 0x10);
        lVar1 = uVar5 - param_2;
      }
      else {
        uVar5 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar5 = uVar8;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        lVar1 = uVar5 - param_2;
      }
      if (SBORROW8(uVar5,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1048e62e8);
        (*pcVar3)();
      }
      uVar5 = uVar6 + 0x20 + param_2 * 8;
      if (uVar7 != uVar5 || uVar5 + lVar1 * 8 <= uVar7) {
        _memmove(uVar7,uVar5,lVar1 << 3);
      }
      if (uVar8 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar6 + 0x10);
      }
      else {
        uVar7 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar7 = uVar8;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (SCARRY8(uVar7,lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1048e62ec);
        (*pcVar3)();
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + lVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1048e63b4);
  (*pcVar3)();
}



/* Entry: 1048e63b8; end: 1048e6507;  */

/* WARNING: Removing unreachable block (ram,0x0001048e64fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e63b8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11309c5c8;
  _swift_beginAccess(param_2 + _DAT_11309c5c8,auStack_48,0,0);
  lVar2 = param_2 + lVar2;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    _objc_msgSend();
    _swift_unknownObjectRelease(lVar2);
  }
  if (lRam000000011309c1a8 != -1) {
    _swift_once(0x11309c1a8,FUN_1048e0dc8);
  }
  lVar2 = 0x11309c5c0;
  _swift_beginAccess(0x11309c5c0,auStack_60,0x21,0);
  _objc_retain(param_2);
  FUN_1048e6508(0x11309c5c0,param_2);
  _objc_release(param_2);
  if (uRam000000011309c5c0 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uRam000000011309c5c0 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uRam000000011309c5c0 & 0xffffffffffffff8;
    if ((long)uRam000000011309c5c0 < 0) {
      uVar3 = uRam000000011309c5c0;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (lVar2 <= (long)uVar3) {
    FUN_1048e62f0(lVar2);
    _swift_endAccess(auStack_60);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048e64fc);
  (*pcVar1)();
}



/* Entry: 1048e6508; end: 1048e672b;  */

void FUN_1048e6508(ulong *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long unaff_x21;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar8 = *param_1;
  uVar4 = uVar8;
  uVar9 = param_2;
  FUN_1048e672c();
  if (unaff_x21 == 0) {
    if ((uVar9 & 1) == 0) {
      uVar9 = uVar4;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1048e6568);
        (*pcVar2)();
      }
      while( true ) {
        uVar9 = uVar9 + 1;
        if (uVar8 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar8 & 0xfffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar8 & 0xffffffffffffff8;
          if ((long)uVar8 < 0) {
            uVar5 = uVar8;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if (uVar9 == uVar5) break;
        if ((uVar8 & 0xc000000000000001) == 0) {
          if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1048e66f8);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)((uVar8 & 0xfffffffffffff8) + 0x10);
          if (uVar5 <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1048e66fc);
            (*pcVar2)();
          }
          uVar10 = *(ulong *)(uVar8 + 0x20 + uVar9 * 8);
          if (uVar10 != param_2) {
            if (uVar4 != uVar9) {
              if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1048e6708);
                (*pcVar2)();
              }
              if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1048e670c);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)(uVar8 + 0x20 + uVar4 * 8);
              _objc_retain();
              _objc_retain();
LAB_1048e65f8:
              uVar11 = uVar8;
              _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
              if ((((int)uVar11 == 0) || ((long)uVar8 < 0)) || ((uVar8 >> 0x3e & 1) != 0)) {
                FUN_1048e5f6c();
                uVar7 = (uint)(uVar8 >> 0x3e) & 1;
              }
              else {
                uVar7 = 0;
              }
              uVar11 = uVar8 & 0xffffffffffffff8;
              lVar1 = uVar11 + uVar4 * 8;
              uVar6 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar10;
              _objc_release(uVar6);
              if (((long)uVar8 < 0) || (uVar7 != 0)) {
                FUN_1048e5f6c();
                uVar11 = uVar8 & 0xffffffffffffff8;
              }
              if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1048e66d0);
                (*pcVar2)();
              }
              if (*(ulong *)(uVar11 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1048e6710);
                (*pcVar2)();
              }
              lVar1 = uVar11 + uVar9 * 8;
              uVar6 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar5;
              _objc_release(uVar6);
              *param_1 = uVar8;
            }
LAB_1048e657c:
            bVar3 = SCARRY8(uVar4,1);
            uVar4 = uVar4 + 1;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1048e6704);
              (*pcVar2)();
            }
          }
        }
        else {
          uVar5 = uVar9;
          func_0x000104900d70(uVar9,uVar8);
          _swift_unknownObjectRelease();
          if (uVar5 != param_2) {
            if (uVar4 != uVar9) {
              uVar5 = uVar4;
              func_0x000104900d70(uVar4,uVar8);
              uVar10 = uVar9;
              func_0x000104900d70(uVar9,uVar8);
              goto LAB_1048e65f8;
            }
            goto LAB_1048e657c;
          }
        }
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1048e6700);
          (*pcVar2)();
        }
      }
    }
    else if (uVar8 >> 0x3e != 0) {
      uVar4 = uVar8 & 0xffffffffffffff8;
      if ((long)uVar8 < 0) {
        uVar4 = uVar8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg(uVar4);
    }
  }
  return;
}



/* Entry: 1048e672c; end: 1048e682b;  */

undefined1  [16] FUN_1048e672c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  uVar7 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    uVar5 = uVar7;
    if ((long)param_1 < 0) {
      uVar5 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar6 = 0;
  while (uVar5 != uVar6) {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1048e67f8);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
    }
    else {
      uVar4 = uVar6;
      func_0x000104900d70(uVar6,param_1);
      _swift_unknownObjectRelease();
    }
    uVar3 = uVar6;
    if (uVar4 == param_2) goto LAB_1048e67d4;
    bVar2 = SCARRY8(uVar6,1);
    uVar6 = uVar6 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048e67fc);
      (*pcVar1)();
    }
  }
  uVar3 = 0;
LAB_1048e67d4:
  auVar8[8] = uVar5 == uVar6;
  auVar8._0_8_ = uVar3;
  auVar8._9_7_ = 0;
  return auVar8;
}



/* Entry: 1048e682c; end: 1048e6833;  */

/* WARNING: Removing unreachable block (ram,0x0001048e64fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e682c(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11309c5c8;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar4 + _DAT_11309c5c8,auStack_48,0,0);
  lVar2 = lVar4 + lVar2;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    _objc_msgSend();
    _swift_unknownObjectRelease(lVar2);
  }
  if (lRam000000011309c1a8 != -1) {
    _swift_once(0x11309c1a8,FUN_1048e0dc8);
  }
  lVar2 = 0x11309c5c0;
  _swift_beginAccess(0x11309c5c0,auStack_60,0x21,0);
  _objc_retain(lVar4);
  FUN_1048e6508(0x11309c5c0,lVar4);
  _objc_release(lVar4);
  if (uRam000000011309c5c0 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uRam000000011309c5c0 & 0xfffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uRam000000011309c5c0 & 0xffffffffffffff8;
    if ((long)uRam000000011309c5c0 < 0) {
      uVar3 = uRam000000011309c5c0;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (lVar2 <= (long)uVar3) {
    FUN_1048e62f0(lVar2);
    _swift_endAccess(auStack_60);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048e64fc);
  (*pcVar1)();
}



/* Entry: 1048e6834; end: 1048e68d3;  */

void FUN_1048e6834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar2 = 0x11309c628;
  func_0x0001048db364();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x70 & (uVar3 ^ 0xffffffffffffffff);
  lVar2 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  uVar3 = lVar2 + uVar3 + uVar4 & (uVar3 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)(unaff_x20 + (lVar2 + uVar3 + 7 & 0xfffffffffffffff8));
  func_0x0001048e3a98(param_1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      unaff_x20 + uVar4,unaff_x20 + uVar3,*puVar1,puVar1[1]);
  return;
}



/* Entry: 1048e68d4; end: 1048e6917;  */

long FUN_1048e68d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1048e6918; end: 1048e691f;  */

void FUN_1048e6918(void)

{
  if (lRam000000011309c690 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e8252a4);
  return;
}



/* Entry: 1048e6920; end: 1048e6a1f;  */

void FUN_1048e6920(undefined8 param_1)

{
  if (lRam000000011309c690 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e8252a4);
  return;
}



/* Entry: 1048e6a20; end: 1048e6a27;  */

void FUN_1048e6a20(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001048e6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x90))();
  return;
}



/* Entry: 1048e6a28; end: 1048e6dd7;  */

long FUN_1048e6a28(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1048e6dd8; end: 1048e6de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e6dd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte **ppbVar15;
  long lVar16;
  byte *pbVar17;
  code *pcVar18;
  undefined8 uVar19;
  long unaff_x20;
  long lVar20;
  long lVar21;
  undefined1 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  bool bVar26;
  code *pcVar27;
  undefined1 auStack_c0 [8];
  byte *pbStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  char cStack_90;
  uint7 uStack_8f;
  ulong uStack_88;
  byte *pbStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  lVar4 = 0x11309c628;
  func_0x0001048db364();
  uVar11 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar22 = auStack_c0 + -uVar11;
  lVar23 = (long)puVar22 - uVar11;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar25 = *(long *)(lVar4 + -8);
  uVar11 = *(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar20 = lVar23 - uVar11;
  lVar24 = lVar20 - uVar11;
  lVar21 = lVar24 - uVar11;
  if ((*(byte *)(lVar10 + _DAT_11309c600) & 1) != 0) {
    return;
  }
  if (param_3 != 0) {
    _swift_errorRetain(param_3);
    FUN_1048e29ec(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_3);
    return;
  }
  lStack_98 = lVar4;
  func_0x0001048e6d08(param_2,&pbStack_80,0x11309c428);
  lStack_b0 = unaff_x20 + 0x18;
  if (lStack_68 == 0) {
    func_0x0001048e6ccc(&pbStack_80,0x11309c428);
LAB_1048e4d38:
    lVar4 = 0;
LAB_1048e4d3c:
    bVar26 = true;
LAB_1048e4d40:
    uStack_78 = 0;
    pbStack_80 = (byte *)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_1048e4d48:
    func_0x0001048e6ccc(&pbStack_80,0x11309c428);
    __s10Foundation4DateV13distantFutureACvgZ(lVar21);
    uVar11 = 0;
    if (bVar26) {
      bVar26 = true;
      uStack_a8 = 0;
      goto LAB_1048e4f10;
    }
    uStack_a8 = 0;
    if (*(long *)(lVar4 + 0x10) == 0) goto LAB_1048e4f0c;
LAB_1048e4d80:
    uStack_a0 = uVar11;
    _swift_bridgeObjectRetain(lVar4);
    lVar10 = 0x5f73657269707865;
    uVar11 = 0xea00000000006e69;
    func_0x000100029284(0x5f73657269707865);
    if ((uVar11 & 1) == 0) {
      uStack_78 = 0;
      pbStack_80 = (byte *)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar10 * 0x20,&pbStack_80);
    }
    _swift_bridgeObjectRelease(lVar4);
    if (lStack_68 == 0) {
      bVar26 = false;
      goto LAB_1048e4f1c;
    }
    pcVar5 = &cStack_90;
    _swift_dynamicCast(pcVar5,&pbStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar11 = uStack_88;
    if (((ulong)pcVar5 & 1) == 0) {
LAB_1048e56d0:
      bVar26 = false;
    }
    else {
      pbVar12 = (byte *)CONCAT71(uStack_8f,cStack_90);
      uVar13 = uStack_88 >> 0x38 & 0xf;
      uVar14 = (ulong)pbVar12 & 0xffffffffffff;
      uVar9 = uVar14;
      if ((uStack_88 & 0x2000000000000000) != 0) {
        uVar9 = uVar13;
      }
      if (uVar9 == 0) {
        _swift_bridgeObjectRelease(uStack_88);
        bVar26 = false;
      }
      else if ((uStack_88 >> 0x3c & 1) == 0) {
        if ((uStack_88 >> 0x3d & 1) == 0) {
          if ((uStack_8f & 0x10000000000000) == 0) {
            uVar14 = uStack_88;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
          }
          else {
            pbVar12 = (byte *)((uStack_88 & 0xfffffffffffffff) + 0x20);
          }
          if (*pbVar12 == 0x2b) {
            if ((long)uVar14 < 1) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57bc);
              (*pcVar18)();
            }
            lVar10 = uVar14 - 1;
            if (lVar10 == 0) goto LAB_1048e566c;
            if (pbVar12 == (byte *)0x0) goto LAB_1048e5610;
            pbStack_b8 = (byte *)0x0;
            do {
              pbVar12 = pbVar12 + 1;
              if (((9 < *pbVar12 - 0x30) ||
                  (lVar16 = (long)pbStack_b8 * 10,
                  SUB168(SEXT816((long)pbStack_b8) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                 (uVar9 = (ulong)(byte)(*pbVar12 - 0x30), pbStack_b8 = (byte *)(lVar16 + uVar9),
                 SCARRY8(lVar16,uVar9))) goto LAB_1048e566c;
              bVar2 = false;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          else if (*pbVar12 == 0x2d) {
            if ((long)uVar14 < 1) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57b4);
              (*pcVar18)();
            }
            lVar10 = uVar14 - 1;
            if (lVar10 == 0) {
LAB_1048e566c:
              pbStack_b8 = (byte *)0x0;
              bVar2 = true;
            }
            else if (pbVar12 == (byte *)0x0) {
LAB_1048e5610:
              pbStack_b8 = (byte *)0x0;
              bVar2 = false;
            }
            else {
              pbStack_b8 = (byte *)0x0;
              do {
                pbVar12 = pbVar12 + 1;
                if (((9 < *pbVar12 - 0x30) ||
                    (lVar16 = (long)pbStack_b8 * 10,
                    SUB168(SEXT816((long)pbStack_b8) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                   (uVar9 = (ulong)(byte)(*pbVar12 - 0x30), pbStack_b8 = (byte *)(lVar16 - uVar9),
                   SBORROW8(lVar16,uVar9))) goto LAB_1048e566c;
                bVar2 = false;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
            }
          }
          else {
            if (uVar14 == 0) goto LAB_1048e566c;
            if (pbVar12 == (byte *)0x0) goto LAB_1048e5610;
            pbStack_b8 = (byte *)0x0;
            do {
              if (((9 < *pbVar12 - 0x30) ||
                  (lVar10 = (long)pbStack_b8 * 10,
                  SUB168(SEXT816((long)pbStack_b8) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                 (uVar9 = (ulong)(byte)(*pbVar12 - 0x30), pbStack_b8 = (byte *)(lVar10 + uVar9),
                 SCARRY8(lVar10,uVar9))) goto LAB_1048e566c;
              bVar2 = false;
              pbVar12 = pbVar12 + 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
        }
        else {
          uStack_78 = uStack_88 & 0xffffffffffffff;
          uVar1 = (uint)pbVar12 & 0xff;
          pbStack_80 = pbVar12;
          if (uVar1 == 0x2b) {
            if (uVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57c0);
              (*pcVar18)();
            }
            lVar10 = uVar13 - 1;
            if (lVar10 == 0) goto LAB_1048e566c;
            pbStack_b8 = (byte *)0x0;
            pbVar12 = (byte *)((ulong)&pbStack_80 | 1);
            do {
              if (((9 < *pbVar12 - 0x30) ||
                  (lVar16 = (long)pbStack_b8 * 10,
                  SUB168(SEXT816((long)pbStack_b8) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                 (uVar9 = (ulong)(byte)(*pbVar12 - 0x30), pbStack_b8 = (byte *)(lVar16 + uVar9),
                 SCARRY8(lVar16,uVar9))) goto LAB_1048e566c;
              bVar2 = false;
              pbVar12 = pbVar12 + 1;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          else if (uVar1 == 0x2d) {
            if (uVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57b8);
              (*pcVar18)();
            }
            lVar10 = uVar13 - 1;
            if (lVar10 == 0) goto LAB_1048e566c;
            pbStack_b8 = (byte *)0x0;
            pbVar12 = (byte *)((ulong)&pbStack_80 | 1);
            do {
              if (((9 < *pbVar12 - 0x30) ||
                  (lVar16 = (long)pbStack_b8 * 10,
                  SUB168(SEXT816((long)pbStack_b8) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                 (uVar9 = (ulong)(byte)(*pbVar12 - 0x30), pbStack_b8 = (byte *)(lVar16 - uVar9),
                 SBORROW8(lVar16,uVar9))) goto LAB_1048e566c;
              bVar2 = false;
              pbVar12 = pbVar12 + 1;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          else {
            if (uVar13 == 0) goto LAB_1048e566c;
            pbStack_b8 = (byte *)0x0;
            ppbVar15 = &pbStack_80;
            do {
              if (((9 < *(byte *)ppbVar15 - 0x30) ||
                  (lVar10 = (long)pbStack_b8 * 10,
                  SUB168(SEXT816((long)pbStack_b8) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                 (uVar9 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30),
                 pbStack_b8 = (byte *)(lVar10 + uVar9), SCARRY8(lVar10,uVar9))) goto LAB_1048e566c;
              bVar2 = false;
              ppbVar15 = (byte **)((long)ppbVar15 + 1);
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
        }
        cStack_90 = bVar2;
        _swift_bridgeObjectRelease(uVar11);
        bVar26 = false;
        if (!bVar2) {
LAB_1048e5690:
          bVar26 = false;
          if (0 < (long)pbStack_b8) {
            __s10Foundation4DateV20timeIntervalSinceNowACSd_tcfC(lVar24,(double)pbStack_b8);
            lVar10 = lStack_98;
            (**(code **)(lVar25 + 8))(lVar21,lStack_98);
            (**(code **)(lVar25 + 0x20))(lVar21,lVar24,lVar10);
            goto LAB_1048e56d0;
          }
        }
      }
      else {
        _swift_bridgeObjectRetain(uStack_88);
        uVar9 = uVar11;
        func_0x000100edba6c(pbVar12,uVar11,10);
        pbStack_b8 = pbVar12;
        _swift_bridgeObjectRelease_n(uVar11,2);
        bVar26 = false;
        if ((uVar9 & 1) == 0) goto LAB_1048e5690;
      }
    }
  }
  else {
    uVar19 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar6 = PTR___sypN_11034f1a8;
    pcVar5 = &cStack_90;
    _swift_dynamicCast(pcVar5,&pbStack_80,PTR___sypN_11034f1a8 + 8,uVar19,6);
    if (((ulong)pcVar5 & 1) == 0) goto LAB_1048e4d38;
    lVar4 = CONCAT71(uStack_8f,cStack_90);
    if (lVar4 == 0) goto LAB_1048e4d3c;
    if (*(long *)(lVar4 + 0x10) == 0) {
      bVar26 = false;
      goto LAB_1048e4d40;
    }
    _swift_bridgeObjectRetain(lVar4);
    lVar10 = 0x745f737365636361;
    uVar11 = 0xec0000006e656b6f;
    func_0x000100029284(0x745f737365636361);
    if ((uVar11 & 1) == 0) {
      uStack_78 = 0;
      pbStack_80 = (byte *)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar10 * 0x20,&pbStack_80);
    }
    _swift_bridgeObjectRelease(lVar4);
    if (lStack_68 == 0) {
      bVar26 = false;
      goto LAB_1048e4d48;
    }
    pcVar5 = &cStack_90;
    _swift_dynamicCast(pcVar5,&pbStack_80,puVar6 + 8,PTR___sSSN_11034da80,6);
    uStack_a8 = CONCAT71(uStack_8f,cStack_90);
    uVar11 = uStack_88;
    if ((int)pcVar5 == 0) {
      uStack_a8 = 0;
      uVar11 = 0;
    }
    __s10Foundation4DateV13distantFutureACvgZ(lVar21);
    if (*(long *)(lVar4 + 0x10) != 0) goto LAB_1048e4d80;
LAB_1048e4f0c:
    bVar26 = false;
LAB_1048e4f10:
    uStack_78 = 0;
    pbStack_80 = (byte *)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
    uStack_a0 = uVar11;
LAB_1048e4f1c:
    func_0x0001048e6ccc(&pbStack_80,0x11309c428);
  }
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar20);
  _objc_release(puVar6);
  if (bVar26) {
    uStack_78 = 0;
    pbStack_80 = (byte *)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    if (*(long *)(lVar4 + 0x10) == 0) {
LAB_1048e4fc4:
      uStack_78 = 0;
      pbStack_80 = (byte *)0x0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar4);
      uVar11 = 0;
      lVar10 = -0x2fffffffffffffe5;
      func_0x000100029284(0xd00000000000001b);
      if ((uVar11 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar4);
        goto LAB_1048e4fc4;
      }
      func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar10 * 0x20,&pbStack_80);
      _swift_bridgeObjectRelease(lVar4);
    }
    _swift_bridgeObjectRelease(lVar4);
    if (lStack_68 != 0) {
      pcVar5 = &cStack_90;
      _swift_dynamicCast(pcVar5,&pbStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)pcVar5 & 1) == 0) goto LAB_1048e50b4;
      pbVar12 = (byte *)CONCAT71(uStack_8f,cStack_90);
      uVar14 = uStack_88 >> 0x38 & 0xf;
      uVar9 = (ulong)pbVar12 & 0xffffffffffff;
      uVar11 = uVar9;
      if ((uStack_88 & 0x2000000000000000) != 0) {
        uVar11 = uVar14;
      }
      if (uVar11 == 0) {
        _swift_bridgeObjectRelease();
        goto LAB_1048e50b4;
      }
      if ((uStack_88 >> 0x3c & 1) == 0) {
        if ((uStack_88 >> 0x3d & 1) == 0) {
          if ((uStack_8f & 0x10000000000000) == 0) {
            uVar9 = uStack_88;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
          }
          else {
            pbVar12 = (byte *)((uStack_88 & 0xfffffffffffffff) + 0x20);
          }
          if (*pbVar12 == 0x2b) {
            if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57ac);
              (*pcVar18)();
            }
            lVar4 = uVar9 - 1;
            if (lVar4 == 0) goto LAB_1048e543c;
            if (pbVar12 == (byte *)0x0) goto LAB_1048e544c;
            pbVar17 = (byte *)0x0;
            do {
              pbVar12 = pbVar12 + 1;
              if (((9 < *pbVar12 - 0x30) ||
                  (lVar10 = (long)pbVar17 * 10,
                  SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                 (uVar11 = (ulong)(byte)(*pbVar12 - 0x30), pbVar17 = (byte *)(lVar10 + uVar11),
                 SCARRY8(lVar10,uVar11))) goto LAB_1048e543c;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
          else if (*pbVar12 == 0x2d) {
            if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57a4);
              (*pcVar18)();
            }
            lVar4 = uVar9 - 1;
            if (lVar4 == 0) {
LAB_1048e543c:
              pbVar17 = (byte *)0x0;
              cStack_90 = '\x01';
              goto LAB_1048e54b8;
            }
            if (pbVar12 == (byte *)0x0) {
LAB_1048e544c:
              pbVar17 = (byte *)0x0;
            }
            else {
              pbVar17 = (byte *)0x0;
              do {
                pbVar12 = pbVar12 + 1;
                if (((9 < *pbVar12 - 0x30) ||
                    (lVar10 = (long)pbVar17 * 10,
                    SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar11 = (ulong)(byte)(*pbVar12 - 0x30), pbVar17 = (byte *)(lVar10 - uVar11),
                   SBORROW8(lVar10,uVar11))) goto LAB_1048e543c;
                lVar4 = lVar4 + -1;
              } while (lVar4 != 0);
            }
          }
          else {
            if (uVar9 == 0) goto LAB_1048e543c;
            if (pbVar12 == (byte *)0x0) goto LAB_1048e544c;
            pbVar17 = (byte *)0x0;
            do {
              if (((9 < *pbVar12 - 0x30) ||
                  (lVar4 = (long)pbVar17 * 10,
                  SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
                 (uVar11 = (ulong)(byte)(*pbVar12 - 0x30), pbVar17 = (byte *)(lVar4 + uVar11),
                 SCARRY8(lVar4,uVar11))) goto LAB_1048e543c;
              pbVar12 = pbVar12 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          cStack_90 = '\0';
        }
        else {
          pbStack_80 = pbVar12;
          uStack_78 = uStack_88 & 0xffffffffffffff;
          uVar1 = (uint)pbVar12 & 0xff;
          if (uVar1 == 0x2b) {
            if (uVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57b0);
              (*pcVar18)();
            }
            lVar4 = uVar14 - 1;
            if (lVar4 == 0) goto LAB_1048e54ac;
            pbVar17 = (byte *)0x0;
            pbVar12 = (byte *)((ulong)&pbStack_80 | 1);
            do {
              if (((9 < *pbVar12 - 0x30) ||
                  (lVar10 = (long)pbVar17 * 10,
                  SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                 (uVar11 = (ulong)(byte)(*pbVar12 - 0x30), pbVar17 = (byte *)(lVar10 + uVar11),
                 SCARRY8(lVar10,uVar11))) goto LAB_1048e54ac;
              cStack_90 = '\0';
              pbVar12 = pbVar12 + 1;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
          else if (uVar1 == 0x2d) {
            if (uVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1048e57a8);
              (*pcVar18)();
            }
            lVar4 = uVar14 - 1;
            if (lVar4 == 0) {
LAB_1048e54ac:
              pbVar17 = (byte *)0x0;
              cStack_90 = '\x01';
            }
            else {
              pbVar17 = (byte *)0x0;
              pbVar12 = (byte *)((ulong)&pbStack_80 | 1);
              do {
                if (((9 < *pbVar12 - 0x30) ||
                    (lVar10 = (long)pbVar17 * 10,
                    SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar11 = (ulong)(byte)(*pbVar12 - 0x30), pbVar17 = (byte *)(lVar10 - uVar11),
                   SBORROW8(lVar10,uVar11))) goto LAB_1048e54ac;
                cStack_90 = '\0';
                pbVar12 = pbVar12 + 1;
                lVar4 = lVar4 + -1;
              } while (lVar4 != 0);
            }
          }
          else {
            if (uVar14 == 0) goto LAB_1048e54ac;
            pbVar17 = (byte *)0x0;
            ppbVar15 = &pbStack_80;
            do {
              if (((9 < *(byte *)ppbVar15 - 0x30) ||
                  (lVar4 = (long)pbVar17 * 10,
                  SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
                 (uVar11 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30),
                 pbVar17 = (byte *)(lVar4 + uVar11), SCARRY8(lVar4,uVar11))) goto LAB_1048e54ac;
              cStack_90 = '\0';
              ppbVar15 = (byte **)((long)ppbVar15 + 1);
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
        }
LAB_1048e54b8:
        cVar3 = cStack_90;
        _swift_bridgeObjectRelease(uStack_88);
        pbVar12 = pbVar17;
        if (cVar3 != '\0') goto LAB_1048e50b4;
      }
      else {
        _swift_bridgeObjectRetain();
        uVar11 = uStack_88;
        func_0x000100edba6c(pbVar12,uStack_88,10);
        _swift_bridgeObjectRelease_n(uStack_88,2);
        if ((uVar11 & 1) != 0) goto LAB_1048e50b4;
      }
      if (0 < (long)pbVar12) {
        __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC(lVar24,(double)pbVar12);
        lVar4 = lStack_98;
        (**(code **)(lVar25 + 8))(lVar20,lStack_98);
        (**(code **)(lVar25 + 0x20))(lVar20,lVar24,lVar4);
      }
      goto LAB_1048e50b4;
    }
  }
  func_0x0001048e6ccc(&pbStack_80,0x11309c428);
LAB_1048e50b4:
  lVar4 = lStack_98;
  uVar11 = uStack_a0;
  if (uStack_a0 == 0) {
    uVar19 = *(undefined8 *)(lStack_b0 + 0x28);
    if (lRam000000011309c208 != -1) {
      _swift_once(0x11309c208,FUN_1048f88f0);
    }
    uVar7 = uRam000000011309ca80;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uRam000000011309ca80,uRam000000011309ca88)
    ;
    uVar8 = 0xd000000000000036;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000036,0x800000010f21a180);
    _objc_msgSend(uVar19,PTR_s_errorWithDomain_code_userInfo_me_112525100,uVar7,3,0,uVar8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar8);
    FUN_1048e2d04(uVar19);
    _objc_release(uVar19);
    lVar4 = lStack_98;
    pcVar18 = *(code **)(lVar25 + 8);
    (*pcVar18)(lVar20,lStack_98);
    (*pcVar18)(lVar21,lVar4);
  }
  else {
    pcVar18 = *(code **)(lVar25 + 0x10);
    (*pcVar18)(lVar23,lVar21,lStack_98);
    pcVar27 = *(code **)(lVar25 + 0x38);
    (*pcVar27)(lVar23,0,1,lVar4);
    (*pcVar18)(puVar22,lVar20,lVar4);
    (*pcVar27)(puVar22,0,1,lVar4);
    FUN_1048e3434(uStack_a8,uVar11,lVar23,puVar22);
    _swift_bridgeObjectRelease(uVar11);
    func_0x0001048e6ccc(puVar22,0x11309c628);
    func_0x0001048e6ccc(lVar23,0x11309c628);
    pcVar18 = *(code **)(lVar25 + 8);
    (*pcVar18)(lVar20,lVar4);
    (*pcVar18)(lVar21,lVar4);
  }
  return;
}



/* Entry: 1048e6de4; end: 1048e6e23;  */

void FUN_1048e6de4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1048e6e24; end: 1048e6e9b;  */

void FUN_1048e6e24(undefined1 *param_1,byte *param_2)

{
  bool bVar1;
  long unaff_x20;
  
  if (*param_2 < 0x21 && (1L << ((ulong)*param_2 & 0x3f) & 0x100003e01U) != 0) {
    *param_1 = 0;
    return;
  }
  __swift_stdlib_strtod_clocale(param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 == (byte *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == 0;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 1048e6e9c; end: 1048e6f6f;  */

void FUN_1048e6e9c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011309c6a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001048e6ef8(0xff,0x11309c6b0,FUN_1048e6920,0x104911a20);
  puVar2 = &UNK_10dd480f0;
  _swift_getWitnessTable(&UNK_10dd480f0,uVar1);
  puRam000000011309c6a8 = puVar2;
  return;
}



/* Entry: 1048e6f70; end: 1048e6ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e6f70(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar1 = _DAT_11309c6b8;
  *(undefined8 *)(unaff_x20 + _DAT_11309c6b8) = 0;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_58,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11309c6c0) = param_2;
  _objc_msgSendSuper2(auStack_68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048e6ff8; end: 1048e703f; -[FBSDKDeviceLoginManagerResult accessToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e6ff8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c6b8;
  _swift_beginAccess(param_1 + _DAT_11309c6b8,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1048e7040; end: 1048e708b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048e7040(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c6b8;
  _swift_beginAccess(unaff_x20 + _DAT_11309c6b8,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  _objc_retain(uVar2);
  return uVar2;
}



/* Entry: 1048e708c; end: 1048e70ef; -[FBSDKDeviceLoginManagerResult setAccessToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e708c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c6b8;
  _swift_beginAccess(param_1 + _DAT_11309c6b8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1048e70f0; end: 1048e7133; -[FBSDKDeviceLoginManagerResult isCancelled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1048e70f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c6c0;
  _swift_beginAccess(param_1 + _DAT_11309c6c0,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1048e7134; end: 1048e7173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1048e7134(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c6c0;
  _swift_beginAccess(unaff_x20 + _DAT_11309c6c0,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1048e7174; end: 1048e71c3; -[FBSDKDeviceLoginManagerResult setIsCancelled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e7174(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c6c0;
  _swift_beginAccess(param_1 + _DAT_11309c6c0,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1048e71c4; end: 1048e724b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e71c4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_getObjectType();
  lVar1 = _DAT_11309c6b8;
  *(undefined8 *)(unaff_x20 + _DAT_11309c6b8) = 0;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_58,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11309c6c0) = param_2;
  _objc_msgSendSuper2(&stack0xffffffffffffff98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048e724c; end: 1048e72df; -[FBSDKDeviceLoginManagerResult initWithToken:isCancelled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e724c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_11309c6b8;
  *(undefined8 *)(param_1 + _DAT_11309c6b8) = 0;
  _swift_beginAccess(param_1 + lVar2,auStack_58,1,0);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  *(undefined1 *)(param_1 + _DAT_11309c6c0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_68,puVar1);
  return;
}



/* Entry: 1048e72e0; end: 1048e732b;  */

void FUN_1048e72e0(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1048e732c; end: 1048e738b; -[FBSDKDeviceLoginManagerResult init] */

void FUN_1048e732c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FBSDKLoginKit.DeviceLoginManagerResult",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048e7358);
  (*pcVar1)();
}



/* Entry: 1048e738c; end: 1048e73c7; -[FBSDKDeviceLoginManagerResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e738c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11309c6b8));
  return;
}



/* Entry: 1048e73c8; end: 1048e73cf;  */

void FUN_1048e73c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001048e73cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x60))();
  return;
}



/* Entry: 1048e73d0; end: 1048e73d3;  */

void FUN_1048e73d0(void)

{
  return;
}



/* Entry: 1048e73d4; end: 1048e73db;  */

void FUN_1048e73d4(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long alStack_c0 [4];
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  alStack_c0[0] = param_2;
  alStack_c0[1] = param_3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_98 = *(long *)(lVar2 + -8);
  lVar10 = (long)alStack_c0 - (*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  alStack_c0[2] = lVar2;
  __s8Dispatch0A3QoSVMa();
  alStack_c0[3] = *(long *)(lVar3 + -8);
  lVar12 = lVar10 - (*(long *)(alStack_c0[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_a0 = lVar3;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar15 = *(long *)(lVar2 + -8);
  plVar11 = (long *)(lVar12 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar13 = *(long *)(lVar3 + -8);
  uVar9 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar17 = (long)plVar11 - uVar9;
  lVar14 = lVar17 - uVar9;
  __s8Dispatch0A4TimeV3nowACyFZ(lVar17);
  if (-1 < param_1) {
    *plVar11 = param_1;
    (**(code **)(lVar15 + 0x68))
              (plVar11,*(undefined4 *)
                        PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_11034f788,lVar2);
    __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF(lVar14,lVar17,plVar11);
    (**(code **)(lVar15 + 8))(plVar11,lVar2);
    pcVar16 = *(code **)(lVar13 + 8);
    (*pcVar16)(lVar17,lVar3);
    uVar4 = 0;
    func_0x0001000295c4(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    lVar2 = alStack_c0[1];
    lStack_70 = alStack_c0[0];
    uStack_68 = alStack_c0[1];
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1107b69d8;
    ppuVar5 = &puStack_90;
    __Block_copy(ppuVar5);
    uVar6 = uStack_68;
    _swift_retain(lVar2);
    _swift_release(uVar6);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar6 = 0x112d4af88;
    func_0x0001048e76ac(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    _swift_retain(puVar1);
    uVar7 = 0x11309c6f0;
    func_0x0001048db364(0x11309c6f0);
    uVar8 = 0x112d4af98;
    func_0x0001048e76ac(0x112d4af98,0x1048e76ec,PTR___sSayxGSTsMc_11034dd08);
    lVar2 = alStack_c0[2];
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar10,&puStack_90,uVar7,uVar8,alStack_c0[2],uVar6);
    __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (lVar14,lVar12,lVar10,ppuVar5);
    __Block_release(ppuVar5);
    _objc_release(uVar4);
    (**(code **)(lStack_98 + 8))(lVar10,lVar2);
    (**(code **)(alStack_c0[3] + 8))(lVar12,lStack_a0);
    (*pcVar16)(lVar14,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x1048e7684);
  (*pcVar16)();
}



/* Entry: 1048e73dc; end: 1048e7683;  */

void FUN_1048e73dc(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long alStack_c0 [4];
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  alStack_c0[0] = param_2;
  alStack_c0[1] = param_3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_98 = *(long *)(lVar2 + -8);
  lVar10 = (long)alStack_c0 - (*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  alStack_c0[2] = lVar2;
  __s8Dispatch0A3QoSVMa();
  alStack_c0[3] = *(long *)(lVar3 + -8);
  lVar12 = lVar10 - (*(long *)(alStack_c0[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_a0 = lVar3;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar15 = *(long *)(lVar2 + -8);
  plVar11 = (long *)(lVar12 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar13 = *(long *)(lVar3 + -8);
  uVar9 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar17 = (long)plVar11 - uVar9;
  lVar14 = lVar17 - uVar9;
  __s8Dispatch0A4TimeV3nowACyFZ(lVar17);
  if (-1 < param_1) {
    *plVar11 = param_1;
    (**(code **)(lVar15 + 0x68))
              (plVar11,*(undefined4 *)
                        PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_11034f788,lVar2);
    __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF(lVar14,lVar17,plVar11);
    (**(code **)(lVar15 + 8))(plVar11,lVar2);
    pcVar16 = *(code **)(lVar13 + 8);
    (*pcVar16)(lVar17,lVar3);
    uVar4 = 0;
    func_0x0001000295c4(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    lVar2 = alStack_c0[1];
    lStack_70 = alStack_c0[0];
    uStack_68 = alStack_c0[1];
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1107b69d8;
    ppuVar5 = &puStack_90;
    __Block_copy(ppuVar5);
    uVar6 = uStack_68;
    _swift_retain(lVar2);
    _swift_release(uVar6);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar6 = 0x112d4af88;
    func_0x0001048e76ac(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    _swift_retain(puVar1);
    uVar7 = 0x11309c6f0;
    func_0x0001048db364(0x11309c6f0);
    uVar8 = 0x112d4af98;
    func_0x0001048e76ac(0x112d4af98,0x1048e76ec,PTR___sSayxGSTsMc_11034dd08);
    lVar2 = alStack_c0[2];
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar10,&puStack_90,uVar7,uVar8,alStack_c0[2],uVar6);
    __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (lVar14,lVar12,lVar10,ppuVar5);
    __Block_release(ppuVar5);
    _objc_release(uVar4);
    (**(code **)(lStack_98 + 8))(lVar10,lVar2);
    (**(code **)(alStack_c0[3] + 8))(lVar12,lStack_a0);
    (*pcVar16)(lVar14,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x1048e7684);
  (*pcVar16)();
}



/* Entry: 1048e7684; end: 1048e773f;  */

undefined1  [16] FUN_1048e7684(void)

{
  return ZEXT816(0x1107b69c8);
}



/* Entry: 1048e7740; end: 1048e774b;  */

void FUN_1048e7740(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001048e7744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 8))();
  return;
}



/* Entry: 1048e774c; end: 1048e778f;  */

bool FUN_1048e774c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_68;
  undefined8 uStack_60;
  
  uVar1 = param_3;
  _swift_getObjectType(param_3);
  lStack_68 = 0x6f695f6b64736266;
  uStack_60 = 0xea00000000002d73;
  if (lRam000000011309c1b8 != -1) {
    _swift_once(0x11309c1b8,FUN_1048e79b4,param_3,uVar1);
  }
  __sSS6appendyySSF(uRam000000011309c700,uRam000000011309c708);
  __sSS6appendyySSF(0x5f,0xe100000000000000);
  __sSS6appendyySSF(param_1,param_2);
  uVar1 = uStack_60;
  lVar6 = lStack_68;
  lVar2 = lStack_68;
  __sSS5countSivg(lStack_68,uStack_60);
  if (lVar2 < 0x3d) {
    puVar3 = PTR__OBJC_CLASS___NSNetService_1126add28;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSNetService_1126add28);
    uVar4 = 0x2e6c61636f6c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x2e6c61636f6c,0xe600000000000000);
    uVar5 = 0x7063745f2e62665f;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7063745f2e62665f,0xe90000000000002e);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar6,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    _objc_msgSend(puVar3,PTR_s_initWithDomain_type_name_port__112525118,uVar4,uVar5,lVar6,0);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(lVar6);
    _objc_msgSend(puVar3,PTR_s_setDelegate__112640798,param_3);
    _objc_msgSend(puVar3,PTR_s_publishWithOptions__112525120,3);
    if (lRam000000011309c1b0 != -1) {
      _swift_once(0x11309c1b0,FUN_1048e77e8);
    }
    _swift_beginAccess(0x113815548,&lStack_68,0,0);
    uVar1 = uRam0000000113815548;
    _objc_retain(uRam0000000113815548);
    _objc_msgSend();
    _objc_release(uVar1);
    _objc_release(puVar3);
  }
  else {
    _swift_bridgeObjectRelease(uVar1);
  }
  return lVar2 < 0x3d;
}



/* Entry: 1048e7790; end: 1048e77e7;  */

void FUN_1048e7790(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  _swift_getObjectType();
  if (lRam000000011309c1b0 != -1) {
    _swift_once(0x11309c1b0,FUN_1048e77e8);
  }
  _swift_beginAccess(0x113815548,auStack_48,0,0);
  lVar1 = lRam0000000113815548;
  _objc_msgSend(lRam0000000113815548,PTR_s_objectForKey__1126159e0,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNetService_1126add28;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNetService_1126add28);
    lVar3 = lVar1;
    _swift_dynamicCastObjCClass(lVar1,puVar2);
    if (lVar3 != 0) {
      _objc_msgSend();
      _objc_msgSend(lVar3,PTR_s_stop_112673008);
      _objc_msgSend(lRam0000000113815548,PTR_s_removeObjectForKey__112628f18,param_1);
    }
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1048e77e8; end: 1048e781f;  */

void FUN_1048e77e8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puRam0000000113815548 = puVar1;
  return;
}



/* Entry: 1048e7820; end: 1048e78c7;  */

undefined8 FUN_1048e7820(void)

{
  if (lRam000000011309c1b0 != -1) {
    _swift_once(0x11309c1b0,FUN_1048e77e8);
  }
  return 0x113815548;
}



/* Entry: 1048e78c8; end: 1048e79b3;  */

void FUN_1048e78c8(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309c1b0 != -1) {
    _swift_once(0x11309c1b0,FUN_1048e77e8);
  }
  _swift_beginAccess(0x113815548,auStack_38,0,0);
  *param_1 = uRam0000000113815548;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048e79b4; end: 1048e7bd3;  */

void FUN_1048e79b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  func_0x0001049eab50();
  FUN_1049e48e0();
  uVar2 = uVar1;
  FUN_1049e4984();
  _objc_release();
  uStack_50 = 0x2e;
  uStack_48 = 0xe100000000000000;
  uStack_60 = 0x7c;
  uStack_58 = 0xe100000000000000;
  uStack_40 = uVar2;
  uStack_38 = param_2;
  func_0x000100e8b654();
  puVar3 = &uStack_50;
  puVar6 = &uStack_60;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar3,puVar6,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
             uVar1,uVar1,uVar1);
  _swift_bridgeObjectRelease(param_2);
  puVar4 = puVar3;
  __sSS5countSivg(puVar3,puVar6);
  if ((10 < (long)puVar4) &&
     (puVar4 = puVar3, puVar7 = puVar6, func_0x000100ed7ed4(), puVar7 != (undefined8 *)0x0)) {
    puVar5 = puVar4;
    __sSJ10asciiValues5UInt8VSgvg();
    if (((uint)puVar5 >> 8 & 1) == 0) {
      __sSJ8isNumberSbvg(puVar4,puVar7);
      _swift_bridgeObjectRelease(puVar7);
      if (((ulong)puVar4 & 1) != 0) {
        puRam000000011309c700 = puVar3;
        puRam000000011309c708 = puVar6;
        return;
      }
    }
    else {
      _swift_bridgeObjectRelease(puVar7);
    }
  }
  _swift_bridgeObjectRelease(puVar6);
  puRam000000011309c700 = (undefined8 *)0x766564;
  puRam000000011309c708 = (undefined8 *)0xe300000000000000;
  return;
}



/* Entry: 1048e7bd4; end: 1048e7df7;  */

bool FUN_1048e7bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_68;
  undefined8 uStack_60;
  
  lStack_68 = 0x6f695f6b64736266;
  uStack_60 = 0xea00000000002d73;
  if (lRam000000011309c1b8 != -1) {
    _swift_once(0x11309c1b8,FUN_1048e79b4);
  }
  __sSS6appendyySSF(uRam000000011309c700,uRam000000011309c708);
  __sSS6appendyySSF(0x5f,0xe100000000000000);
  __sSS6appendyySSF(param_1,param_2);
  uVar6 = uStack_60;
  lVar5 = lStack_68;
  lVar1 = lStack_68;
  __sSS5countSivg(lStack_68,uStack_60);
  if (lVar1 < 0x3d) {
    puVar2 = PTR__OBJC_CLASS___NSNetService_1126add28;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSNetService_1126add28);
    uVar3 = 0x2e6c61636f6c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x2e6c61636f6c,0xe600000000000000);
    uVar4 = 0x7063745f2e62665f;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7063745f2e62665f,0xe90000000000002e);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar5,uVar6);
    _swift_bridgeObjectRelease(uVar6);
    _objc_msgSend(puVar2,PTR_s_initWithDomain_type_name_port__112525118,uVar3,uVar4,lVar5,0);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(lVar5);
    _objc_msgSend(puVar2,PTR_s_setDelegate__112640798,param_3);
    _objc_msgSend(puVar2,PTR_s_publishWithOptions__112525120,3);
    if (lRam000000011309c1b0 != -1) {
      _swift_once(0x11309c1b0,FUN_1048e77e8);
    }
    _swift_beginAccess(0x113815548,&lStack_68,0,0);
    uVar6 = uRam0000000113815548;
    _objc_retain(uRam0000000113815548);
    _objc_msgSend();
    _objc_release(uVar6);
    _objc_release(puVar2);
  }
  else {
    _swift_bridgeObjectRelease(uVar6);
  }
  return lVar1 < 0x3d;
}



/* Entry: 1048e7df8; end: 1048e7ebf;  */

void FUN_1048e7df8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_48 [24];
  
  if (lRam000000011309c1b0 != -1) {
    _swift_once(0x11309c1b0,FUN_1048e77e8);
  }
  _swift_beginAccess(0x113815548,auStack_48,0,0);
  lVar1 = lRam0000000113815548;
  _objc_msgSend(lRam0000000113815548,PTR_s_objectForKey__1126159e0,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNetService_1126add28;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNetService_1126add28);
    _swift_dynamicCastObjCClass(lVar1,puVar2);
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1048e7ec0; end: 1048e8147;  */

undefined1  [16] FUN_1048e7ec0(void)

{
  long lVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 ***pppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 ****ppppuVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_580 [1024];
  undefined8 *apuStack_180 [32];
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar13 = *(long *)(lVar1 + -8);
  puVar12 = auStack_580 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar2 = (long)puVar12 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _bzero(auStack_580,0x500);
  _uname(auStack_580);
  pppuVar8 = (undefined8 ***)apuStack_180;
  ppppuVar11 = &pppuStack_80;
  func_0x000100e37074();
  pppuVar3 = pppuVar8;
  pppuStack_80 = pppuVar8;
  pppuStack_78 = ppppuVar11;
  __sSS10FoundationE8EncodingV5asciiACvgZ(lVar2);
  func_0x000102f1c1d8();
  ppppuVar4 = &pppuStack_80;
  __sSS10FoundationE5bytes8encodingSSSgxh_SSAAE8EncodingVtcSTRzs5UInt8V7ElementRtzlufC
            (ppppuVar4,lVar2,PTR___s10Foundation4DataVN_110350ae0,pppuVar3);
  if (lVar2 == 0) {
    func_0x00010006c090(pppuVar8,ppppuVar11);
    pppuVar8 = (undefined8 ***)0x0;
    ppppuVar11 = (undefined8 ****)0xe000000000000000;
  }
  else {
    pppuStack_80 = ppppuVar4;
    pppuStack_78 = (undefined8 ***)lVar2;
    __s10Foundation12CharacterSetV17controlCharactersACvgZ(puVar12);
    func_0x000100e8b654();
    puVar5 = puVar12;
    puVar9 = PTR___sSSN_11034da80;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (puVar12,PTR___sSSN_11034da80,ppppuVar4);
    (**(code **)(lVar13 + 8))(puVar12,lVar1);
    _swift_bridgeObjectRelease(lVar2);
    puVar6 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    puVar10 = PTR_s_model_112611988;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar7;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar7);
    _objc_release(puVar7);
    pppuStack_80 = (undefined8 ***)0x0;
    pppuStack_78 = (undefined8 ***)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    _swift_bridgeObjectRelease(pppuStack_78);
    pppuStack_80 = (undefined8 ***)0x226c65646f6d227b;
    pppuStack_78 = (undefined8 ****)0xea0000000000223a;
    __sSS6appendyySSF(puVar6,puVar10);
    _swift_bridgeObjectRelease(puVar10);
    __sSS6appendyySSF(0x222c22,0xe300000000000000);
    __sSS6appendyySSF(0x656369766564,0xe600000000000000);
    __sSS6appendyySSF(0x223a22,0xe300000000000000);
    __sSS6appendyySSF(puVar5,puVar9);
    _swift_bridgeObjectRelease(puVar9);
    __sSS6appendyySSF(0x7d22,0xe200000000000000);
    func_0x00010006c090(pppuVar8,ppppuVar11);
    pppuVar8 = pppuStack_80;
    ppppuVar11 = (undefined8 ****)pppuStack_78;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar14._8_8_ = ppppuVar11;
    auVar14._0_8_ = pppuVar8;
    return auVar14;
  }
  ___stack_chk_fail(pppuVar8,ppppuVar11);
  return ZEXT816(0x1107b6a28);
}



/* Entry: 1048e8148; end: 1048e8157;  */

undefined1  [16] FUN_1048e8148(void)

{
  return ZEXT816(0x1107b6a28);
}


