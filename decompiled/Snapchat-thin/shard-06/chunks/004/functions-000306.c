/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048e8158; end: 1048e81f3; -[FBSDKLoginButton defaultAudience] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048e8158(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + _DAT_11309c710;
  _swift_beginAccess(lVar1,auStack_58,0x20,0);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  pcVar4 = *(code **)(lVar2 + 8);
  _objc_retain(param_1);
  (*pcVar4)(uVar3,lVar2);
  _swift_endAccess(auStack_58);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1048e81f4; end: 1048e826f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048e81f4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_11309c710;
  _swift_beginAccess(lVar1,auStack_48,0x20,0);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar3);
  (**(code **)(lVar2 + 8))(uVar3,lVar2);
  _swift_endAccess(auStack_48);
  return uVar3;
}



/* Entry: 1048e8270; end: 1048e8317; -[FBSDKLoginButton setDefaultAudience:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e8270(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  lVar1 = param_1 + _DAT_11309c710;
  _swift_beginAccess(lVar1,auStack_68,0x21,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000c6518(lVar1,uVar2);
  pcVar4 = *(code **)(lVar3 + 0x10);
  _objc_retain(param_1);
  (*pcVar4)(param_3,uVar2,lVar3);
  _swift_endAccess(auStack_68);
  _objc_release(param_1);
  return;
}



/* Entry: 1048e8318; end: 1048e8547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e8318(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_11309c710;
  _swift_beginAccess(lVar1,auStack_48,0x21,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000c6518(lVar1,uVar2);
  (**(code **)(lVar3 + 0x10))(param_1,uVar2,lVar3);
  _swift_endAccess(auStack_48);
  return;
}



/* Entry: 1048e8548; end: 1048e85cb;  */

void FUN_1048e8548(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *param_1;
  uVar5 = *(undefined8 *)(lVar4 + 0x18);
  lVar1 = *(long *)(lVar4 + 0x20) + *(long *)(lVar4 + 0x28);
  _swift_beginAccess(lVar1,lVar4,0x21,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000c6518(lVar1,uVar2);
  (**(code **)(lVar3 + 0x10))(uVar5,uVar2,lVar3);
  _swift_endAccess(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 1048e85cc; end: 1048e8613; -[FBSDKLoginButton delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e85cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c718;
  _swift_beginAccess(param_1 + _DAT_11309c718,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048e8614; end: 1048e8657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e8614(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c718;
  _swift_beginAccess(unaff_x20 + _DAT_11309c718,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Entry: 1048e8658; end: 1048e86af; -[FBSDKLoginButton setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e8658(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c718;
  _swift_beginAccess(param_1 + _DAT_11309c718,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1048e86b0; end: 1048e87fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e86b0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c718;
  _swift_beginAccess(unaff_x20 + _DAT_11309c718,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 1048e87fc; end: 1048e8863; -[FBSDKLoginButton permissions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e87fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c720;
  _swift_beginAccess(param_1 + _DAT_11309c720,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  uVar2 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048e8864; end: 1048e8877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e8864(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11309c720;
  puVar1 = PTR__swift_bridgeObjectRetain_11034f268;
  _swift_beginAccess(unaff_x20 + _DAT_11309c720,auStack_48,0,0);
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + lVar2));
  return;
}



/* Entry: 1048e8878; end: 1048e88df; -[FBSDKLoginButton setPermissions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e8878(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  lVar1 = _DAT_11309c720;
  _swift_beginAccess(param_1 + _DAT_11309c720,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1048e88e0; end: 1048e8937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e88e0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11309c720;
  puVar1 = PTR__swift_bridgeObjectRelease_11034f258;
  _swift_beginAccess(unaff_x20 + _DAT_11309c720,auStack_48,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  (*(code *)puVar1)(uVar3);
  return;
}



/* Entry: 1048e8938; end: 1048e897b; -[FBSDKLoginButton tooltipBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048e8938(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c728;
  _swift_beginAccess(param_1 + _DAT_11309c728,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1048e897c; end: 1048e89bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048e897c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c728;
  _swift_beginAccess(unaff_x20 + _DAT_11309c728,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Entry: 1048e89bc; end: 1048e8a0b; -[FBSDKLoginButton setTooltipBehavior:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e89bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c728;
  _swift_beginAccess(param_1 + _DAT_11309c728,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1048e8a0c; end: 1048e8a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e8a0c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c728;
  _swift_beginAccess(unaff_x20 + _DAT_11309c728,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1048e8a98; end: 1048e8adb; -[FBSDKLoginButton tooltipColorStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048e8a98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c730;
  _swift_beginAccess(param_1 + _DAT_11309c730,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1048e8adc; end: 1048e8b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048e8adc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c730;
  _swift_beginAccess(unaff_x20 + _DAT_11309c730,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Entry: 1048e8b1c; end: 1048e8b6b; -[FBSDKLoginButton setTooltipColorStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e8b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c730;
  _swift_beginAccess(param_1 + _DAT_11309c730,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1048e8b6c; end: 1048e8bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e8b6c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c730;
  _swift_beginAccess(unaff_x20 + _DAT_11309c730,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1048e8bf8; end: 1048e8c3b; -[FBSDKLoginButton loginTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048e8bf8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c738;
  _swift_beginAccess(param_1 + _DAT_11309c738,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1048e8c3c; end: 1048e8c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048e8c3c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c738;
  _swift_beginAccess(unaff_x20 + _DAT_11309c738,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Entry: 1048e8c7c; end: 1048e8ccb; -[FBSDKLoginButton setLoginTracking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e8c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c738;
  _swift_beginAccess(param_1 + _DAT_11309c738,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1048e8ccc; end: 1048e8d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e8ccc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c738;
  _swift_beginAccess(unaff_x20 + _DAT_11309c738,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1048e8d58; end: 1048e8db3; -[FBSDKLoginButton nonce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e8d58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11309c740))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11309c740);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048e8db4; end: 1048e8deb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048e8db4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_11309c740);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_11309c740) + 8))
  ;
  return auVar1;
}



/* Entry: 1048e8dec; end: 1048e8e4f; -[FBSDKLoginButton setNonce:] */

void FUN_1048e8dec(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_1);
  FUN_1048e8e50(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048e8e50; end: 1048e9043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e8e50(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  lVar4 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar10 = *(long *)(lVar4 + -8);
  lVar9 = (long)&uStack_70 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    uVar8 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar8 = param_2 >> 0x38 & 0xf;
    }
    if (uVar8 != 0) {
      lVar5 = lVar4;
      uStack_60 = param_1;
      uStack_58 = param_2;
      __s10Foundation12CharacterSetV11whitespacesACvgZ(lVar9);
      func_0x000100e8b654();
      uVar8 = 0;
      __sSy10FoundationE16rangeOfCharacter4from7options0B0SnySS5IndexVGSgAA0D3SetV_So22NSStringCompareOptionsVAItF
                (lVar9,0,0,0,1,PTR___sSSN_11034da80,lVar5);
      (**(code **)(lVar10 + 8))(lVar9,lVar4);
      if ((uVar8 & 1) != 0) {
        puVar1 = (ulong *)(unaff_x20 + _DAT_11309c740);
        uVar8 = puVar1[1];
        *puVar1 = param_1;
        puVar1[1] = param_2;
        _swift_bridgeObjectRelease(uVar8);
        return;
      }
    }
    _swift_bridgeObjectRelease(param_2);
  }
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11309c740);
  uVar6 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  _swift_bridgeObjectRelease(uVar6);
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x30);
  _swift_bridgeObjectRelease(uStack_58);
  uStack_60 = 0xd00000000000001d;
  uStack_58 = 0x800000010f21a400;
  uStack_70 = *puVar2;
  uStack_68 = puVar2[1];
  _swift_bridgeObjectRetain();
  uVar6 = 0x11309c748;
  func_0x0001048db364(0x11309c748);
  __sSS10describingSSx_tclufC(&uStack_70,uVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar6);
  __sSS6appendyySSF(0xd000000000000011,0x800000010f21a420);
  uVar3 = uStack_58;
  uVar8 = uStack_60;
  puVar7 = PTR_PTR_1126add38;
  _swift_getInitializedObjCClass(PTR_PTR_1126add38);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  _objc_msgSend(puVar7,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                &PTR____CFConstantStringClassReference_110da4eb8,uVar8);
  _objc_release(uVar8);
  return;
}



/* Entry: 1048e9044; end: 1048e908b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048e9044(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[2] = unaff_x20;
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_11309c740))[1];
  *param_1 = *(undefined8 *)(unaff_x20 + _DAT_11309c740);
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1048e908c;
  return auVar2;
}



/* Entry: 1048e908c; end: 1048e90eb;  */

void FUN_1048e908c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar2);
    FUN_1048e8e50(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
  FUN_1048e8e50(uVar1,uVar2);
  return;
}



/* Entry: 1048e90ec; end: 1048e90f7; -[FBSDKLoginButton messengerPageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e90ec(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11309c750);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1048e90f8; end: 1048e9103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048e90f8(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309c750);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1048e9104; end: 1048e910f; -[FBSDKLoginButton setMessengerPageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e9104(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11309c750);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 1048e9110; end: 1048e915b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e9110(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c750);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1048e915c; end: 1048e91a3; -[FBSDKLoginButton authType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e915c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c758;
  _swift_beginAccess(param_1 + _DAT_11309c758,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1048e91a4; end: 1048e91ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048e91a4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c758;
  _swift_beginAccess(unaff_x20 + _DAT_11309c758,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  _objc_retain(uVar2);
  return uVar2;
}



/* Entry: 1048e91f0; end: 1048e9253; -[FBSDKLoginButton setAuthType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e91f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c758;
  _swift_beginAccess(param_1 + _DAT_11309c758,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1048e9254; end: 1048e92e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e9254(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c758;
  _swift_beginAccess(unaff_x20 + _DAT_11309c758,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 1048e92e8; end: 1048e932f; -[FBSDKLoginButton codeVerifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e92e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c760;
  _swift_beginAccess(param_1 + _DAT_11309c760,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1048e9330; end: 1048e936f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e9330(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c760;
  _swift_beginAccess(unaff_x20 + _DAT_11309c760,auStack_38,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1048e9370; end: 1048e93d3; -[FBSDKLoginButton setCodeVerifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e9370(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c760;
  _swift_beginAccess(param_1 + _DAT_11309c760,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1048e93d4; end: 1048e9467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e93d4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c760;
  _swift_beginAccess(unaff_x20 + _DAT_11309c760,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 1048e9468; end: 1048e9473; -[FBSDKLoginButton userID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e9468(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11309c768);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1048e9474; end: 1048e947f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048e9474(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309c768);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1048e9480; end: 1048e948b; -[FBSDKLoginButton setUserID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e9480(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11309c768);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 1048e948c; end: 1048e94d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e948c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c768);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1048e94d8; end: 1048e94e3; -[FBSDKLoginButton userName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e94d8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11309c770);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1048e94e4; end: 1048e9557;  */

void FUN_1048e94e4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + *param_3);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1048e9558; end: 1048e95b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048e9558(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11309c770);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1048e95b4; end: 1048e95bf; -[FBSDKLoginButton setUserName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e95b4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11309c770);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 1048e95c0; end: 1048e9637;  */

void FUN_1048e95c0(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + *param_4);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 1048e9638; end: 1048e98f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e9638(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c770);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 1048e98f4; end: 1048e993b; -[FBSDKLoginButton graphRequestFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e98f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309c788;
  _swift_beginAccess(param_1 + _DAT_11309c788,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048e993c; end: 1048e999b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e993c(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11309c788;
  puVar1 = PTR__swift_unknownObjectRetain_11034f540;
  _swift_beginAccess(unaff_x20 + _DAT_11309c788,auStack_48,0,0);
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + lVar2));
  return;
}



/* Entry: 1048e999c; end: 1048e99ff; -[FBSDKLoginButton setGraphRequestFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e999c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c788;
  _swift_beginAccess(param_1 + _DAT_11309c788,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 1048e9a00; end: 1048e9aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e9a00(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11309c788;
  puVar1 = PTR__swift_unknownObjectRelease_11034f530;
  _swift_beginAccess(unaff_x20 + _DAT_11309c788,auStack_48,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  (*(code *)puVar1)(uVar3);
  return;
}



/* Entry: 1048e9aa8; end: 1048e9b67; -[FBSDKLoginButton isAuthenticated] */

void FUN_1048e9aa8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126add30;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126a5d98;
    _swift_getInitializedObjCClass();
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      return;
    }
  }
  _objc_release();
  return;
}



/* Entry: 1048e9b68; end: 1048e9b7b;  */

undefined1  [16] FUN_1048e9b68(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 3) {
    uVar1 = param_1;
  }
  auVar2[8] = 2 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1048e9b7c; end: 1048e9b8f;  */

bool FUN_1048e9b7c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1048e9b90; end: 1048e9c3b;  */

void FUN_1048e9b90(void)

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



/* Entry: 1048e9c3c; end: 1048e9c63;  */

void FUN_1048e9c3c(ulong *param_1,ulong *param_2)

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



/* Entry: 1048e9c64; end: 1048e9cb3;  */

void FUN_1048e9c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1048e9cb4; end: 1048e9f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1048e9cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long unaff_x20;
  
  puVar7 = &stack0xffffffffffffff80;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11309c718,0);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_11309c720) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_11309c728) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c730) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c738) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c750);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined ***)(unaff_x20 + _DAT_11309c758) = &PTR____CFConstantStringClassReference_110da0538;
  lVar2 = _DAT_11309c760;
  uVar3 = 0;
  FUN_1048deedc();
  _objc_allocWithZone();
  _swift_retain(puVar4);
  _objc_retain(&PTR____CFConstantStringClassReference_110da0538);
  _objc_msgSend(uVar3,PTR_s_init_1125d9248);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c740);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11309c790) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c768);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c770);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c778);
  puVar4 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  puVar5 = puVar4;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  FUN_1048e9f18();
  puVar1[3] = uVar3;
  puVar1[4] = &PTR_DAT_1107b7000;
  *puVar1 = puVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c780);
  _objc_msgSend(puVar4,PTR_s_sharedUtility_112668b58);
  _objc_retainAutoreleasedReturnValue();
  puVar1[3] = uVar3;
  puVar1[4] = &PTR_DAT_1107b7018;
  *puVar1 = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c710);
  uVar6 = 0;
  FUN_104904e40();
  uVar3 = uVar6;
  _objc_allocWithZone();
  _objc_msgSend();
  puVar1[3] = uVar6;
  puVar1[4] = &PTR_DAT_1107b7290;
  *puVar1 = uVar3;
  lVar2 = _DAT_11309c788;
  puVar4 = PTR_PTR_1126add18;
  _objc_allocWithZone();
  _objc_msgSend();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_1048e9f5c();
  _objc_release(puVar7);
  return puVar7;
}



/* Entry: 1048e9f18; end: 1048e9f5b;  */

void FUN_1048e9f18(void)

{
  undefined *puVar1;
  
  if (puRam000000011309c798 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  _swift_getObjCClassMetadata();
  puRam000000011309c798 = puVar1;
  return;
}



/* Entry: 1048e9f5c; end: 1048ea4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048e9f5c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  long alStack_c0 [2];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar5 = unaff_x20 + _DAT_11309c780;
  _swift_beginAccess(lVar5,auStack_78,0,0);
  lVar6 = *(long *)(lVar5 + 0x18);
  lVar3 = *(long *)(lVar5 + 0x20);
  lVar15 = lVar5;
  func_0x0001000a8868(lVar5,lVar6);
  lVar16 = *(long *)(lVar6 + -8);
  lVar14 = -(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_b0 + lVar14;
  (**(code **)(lVar16 + 0x10))(puVar13,lVar15,lVar6);
  lVar15 = lVar6;
  (**(code **)(lVar3 + 8))(lVar6,lVar3);
  (**(code **)(lVar16 + 8))(puVar13,lVar6);
  *(undefined8 *)((long)alStack_c0 + lVar14) = 0x800000010f21a4f0;
  uVar10 = 0x800000010f21a4d0;
  uVar4 = 0xd000000000000011;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (0xd000000000000011,0x800000010f21a4d0,0x6b6f6f6265636146,0xeb000000004b4453,lVar15,
             0x6e6920676f4c,0xe600000000000000,0xd00000000000004b);
  _objc_release(lVar15);
  lVar6 = *(long *)(lVar5 + 0x18);
  lVar3 = *(long *)(lVar5 + 0x20);
  func_0x0001000a8868(lVar5,lVar6);
  lVar15 = *(long *)(lVar6 + -8);
  lVar14 = (long)puVar13 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar15 + 0x10))(lVar14,lVar5,lVar6);
  lVar5 = lVar6;
  (**(code **)(lVar3 + 8))(lVar6,lVar3);
  (**(code **)(lVar15 + 8))(lVar14,lVar6);
  *(undefined8 *)(lVar14 + -0x10) = 0x800000010f21a560;
  uVar9 = 0xd000000000000012;
  uVar11 = 0x800000010f21a540;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (0xd000000000000012,0x800000010f21a540,0x6b6f6f6265636146,0xeb000000004b4453,lVar5,
             0x74756f20676f4c,0xe700000000000000,0xd000000000000044);
  _objc_release(lVar5);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar10);
  _swift_bridgeObjectRelease(uVar10);
  lVar5 = unaff_x20;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar9,uVar11);
  _swift_bridgeObjectRelease(uVar11);
  lVar6 = unaff_x20;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(lVar14 + -0x10) = lVar6;
  *(undefined8 *)(lVar14 + -8) = 0;
  _objc_msgSend();
  _objc_release(uVar4);
  _objc_release(lVar5);
  _objc_release(uVar9);
  _objc_release(lVar6);
  lVar5 = unaff_x20;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    _objc_msgSend();
    _objc_release(lVar5);
  }
  lVar5 = unaff_x20;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  _objc_msgSend(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_msgSend(lVar6,PTR_s_setActive__112636340,1);
  _objc_msgSend();
  puVar7 = PTR_PTR_1126add30;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    FUN_1049db25c();
    FUN_1049d4a98();
    if (puVar7 == (undefined *)0x0) {
      _objc_msgSend();
    }
    else {
      _objc_retain();
      puVar12 = PTR_s_setSelected__11265c598;
      _objc_msgSend();
      puVar8 = puVar7;
      FUN_1048edda8();
      if (((ulong)puVar8 & 1) == 0) {
        _objc_release(puVar7);
        _objc_release(puVar7);
      }
      else {
        FUN_1049d8134();
        puVar2 = (undefined *)0x0;
        if (puVar12 != (undefined *)0x0) {
          puVar2 = puVar8;
        }
        puVar8 = (undefined *)0xe000000000000000;
        if (puVar12 != (undefined *)0x0) {
          puVar8 = puVar12;
        }
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c770);
        puVar13 = auStack_90;
        _swift_beginAccess(puVar1,puVar13,1,0);
        uVar9 = puVar1[1];
        *puVar1 = puVar2;
        puVar1[1] = puVar8;
        _swift_bridgeObjectRelease();
        FUN_1049d8024();
        _objc_release(puVar7);
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c768);
        _swift_beginAccess(puVar1,auStack_a8,1,0);
        uVar4 = puVar1[1];
        *puVar1 = uVar9;
        puVar1[1] = puVar13;
        _objc_release(puVar7);
        _swift_bridgeObjectRelease(uVar4);
      }
    }
  }
  else {
    _objc_release();
    func_0x0001048ebf0c();
  }
  _objc_msgSend();
  puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  puVar8 = puVar7;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(puVar8);
  _objc_msgSend(puVar7,PTR_s_defaultCenter_1125b7d90);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(lVar6);
  _objc_release(puVar7);
  return;
}



/* Entry: 1048ea4c8; end: 1048ea52b; -[FBSDKLoginButton initWithFrame:] */

void FUN_1048ea4c8(void)

{
  FUN_1048e9cb4();
  return;
}



/* Entry: 1048ea52c; end: 1048ea77f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1048ea52c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  
  puVar7 = &stack0xffffffffffffff90;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11309c718,0);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_11309c720) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_11309c728) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c730) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11309c738) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c750);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined ***)(unaff_x20 + _DAT_11309c758) = &PTR____CFConstantStringClassReference_110da0538;
  lVar2 = _DAT_11309c760;
  uVar3 = 0;
  FUN_1048deedc();
  _objc_allocWithZone();
  _swift_retain(puVar4);
  _objc_retain(&PTR____CFConstantStringClassReference_110da0538);
  _objc_msgSend(uVar3,PTR_s_init_1125d9248);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c740);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11309c790) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c768);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c770);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c778);
  puVar4 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  puVar5 = puVar4;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  FUN_1048e9f18();
  puVar1[3] = uVar3;
  puVar1[4] = &PTR_DAT_1107b7000;
  *puVar1 = puVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c780);
  _objc_msgSend(puVar4,PTR_s_sharedUtility_112668b58);
  _objc_retainAutoreleasedReturnValue();
  puVar1[3] = uVar3;
  puVar1[4] = &PTR_DAT_1107b7018;
  *puVar1 = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c710);
  uVar6 = 0;
  FUN_104904e40();
  uVar3 = uVar6;
  _objc_allocWithZone();
  _objc_msgSend();
  puVar1[3] = uVar6;
  puVar1[4] = &PTR_DAT_1107b7290;
  *puVar1 = uVar3;
  lVar2 = _DAT_11309c788;
  puVar4 = PTR_PTR_1126add18;
  _objc_allocWithZone();
  _objc_msgSend();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_initWithCoder__1125dd730,param_1);
  if (puVar7 != (undefined1 *)0x0) {
    puVar8 = puVar7;
    _objc_retain(puVar7);
    FUN_1048e9f5c();
    _objc_release(puVar8);
  }
  _objc_release(param_1);
  return puVar7;
}



/* Entry: 1048ea780; end: 1048ea7a7; -[FBSDKLoginButton initWithCoder:] */

void FUN_1048ea780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1048ea52c();
  return;
}



/* Entry: 1048ea7a8; end: 1048ea927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1048ea7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_88 [24];
  
  _objc_allocWithZone();
  _objc_msgSend(param_1,param_2,param_3,param_4);
  lVar1 = _DAT_11309c778;
  _swift_beginAccess(unaff_x20 + _DAT_11309c778,auStack_88,0x21,0);
  lVar2 = unaff_x20;
  _objc_retain();
  func_0x0001048ee5b4(unaff_x20 + lVar1);
  func_0x000100dc10cc(param_5,unaff_x20 + lVar1);
  _swift_endAccess(auStack_88);
  lVar1 = _DAT_11309c780;
  _swift_beginAccess(lVar2 + _DAT_11309c780,auStack_88,0x21,0);
  func_0x0001048ee5b4(lVar2 + lVar1);
  func_0x000100dc10cc(param_6,lVar2 + lVar1);
  _swift_endAccess(auStack_88);
  lVar1 = _DAT_11309c710;
  _swift_beginAccess(lVar2 + _DAT_11309c710,auStack_88,0x21,0);
  func_0x0001048ee5b4(lVar2 + lVar1);
  func_0x000100dc10cc(param_7,lVar2 + lVar1);
  _swift_endAccess(auStack_88);
  lVar1 = _DAT_11309c788;
  _swift_beginAccess(lVar2 + _DAT_11309c788,auStack_88,1,0);
  uVar3 = *(undefined8 *)(lVar2 + lVar1);
  *(undefined8 *)(lVar2 + lVar1) = param_8;
  _objc_release(lVar2);
  _swift_unknownObjectRelease(uVar3);
  return lVar2;
}



/* Entry: 1048ea928; end: 1048eab33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1048ea928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lStack_c0;
  long lStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *apuStack_98 [3];
  
  lVar3 = 0;
  func_0x0001049ceb28();
  lVar6 = *(long *)(lVar3 + -8);
  lVar8 = (long)&lStack_c0 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar3;
  _objc_allocWithZone();
  _objc_msgSend(param_1,param_2,param_3,param_4);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar3 = *(long *)(param_5 + 0x10);
  if (lVar3 == 0) {
    _objc_retain();
    _swift_bridgeObjectRelease(param_5);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    apuStack_98[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    lStack_b8 = unaff_x20;
    _objc_retain();
    _swift_retain(puVar9);
    func_0x000100403514(0,lVar3,0);
    lVar10 = param_5 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
    lStack_a8 = *(long *)(lVar6 + 0x48);
    pcStack_b0 = *(code **)(lVar6 + 0x10);
    lStack_c0 = param_5;
    do {
      puVar9 = apuStack_98[0];
      lVar2 = lStack_a0;
      lVar4 = lVar8;
      lVar5 = lVar10;
      (*pcStack_b0)(lVar8,lVar10,lStack_a0);
      func_0x0001049cd784();
      (**(code **)(lVar6 + 8))(lVar8,lVar2);
      uVar1 = *(ulong *)(puVar9 + 0x10);
      apuStack_98[0] = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      puVar9 = apuStack_98[0];
      *(ulong *)(apuStack_98[0] + 0x10) = uVar1 + 1;
      *(long *)(apuStack_98[0] + uVar1 * 0x10 + 0x20) = lVar4;
      *(long *)(apuStack_98[0] + uVar1 * 0x10 + 0x28) = lVar5;
      lVar10 = lVar10 + lStack_a8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    _swift_bridgeObjectRelease(lStack_c0);
    unaff_x20 = lStack_b8;
  }
  lVar3 = _DAT_11309c720;
  _swift_beginAccess(unaff_x20 + _DAT_11309c720,apuStack_98,1,0);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined **)(unaff_x20 + lVar3) = puVar9;
  _objc_release(unaff_x20);
  _swift_bridgeObjectRelease(uVar7);
  return unaff_x20;
}



/* Entry: 1048eab34; end: 1048eadcb;  */

void FUN_1048eab34(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  
  lVar5 = 0;
  func_0x0001049ceb28();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(lVar5 + -8);
  puVar10 = &stack0xffffffffffffff50 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = *(long *)(param_1 + 0x10);
  if (lVar17 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    _swift_retain();
    func_0x000100403514(0,lVar17,0);
    uVar1 = param_1 + 0x38;
    uVar6 = uVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar16 = 0;
    do {
      if (((long)uVar6 < 0) || (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) <= (long)uVar6)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1048eadbc);
        (*pcVar4)();
      }
      uVar13 = uVar6 >> 6;
      uVar15 = 1L << (uVar6 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar13 * 8) & uVar15) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1048eadc0);
        (*pcVar4)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      lVar8 = *(long *)(param_1 + 0x30) + *(long *)(lVar9 + 0x48) * uVar6;
      puVar7 = puVar10;
      (**(code **)(lVar9 + 0x10))(puVar10,lVar8,lVar5);
      func_0x0001049cd784();
      (**(code **)(lVar9 + 8))(puVar10,lVar5);
      uVar14 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar14) {
        func_0x000100403514(1 < *(ulong *)(puVar3 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar14 + 1;
      *(undefined1 **)(puVar3 + uVar14 * 0x10 + 0x20) = puVar7;
      *(long *)(puVar3 + uVar14 * 0x10 + 0x28) = lVar8;
      uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if ((long)uVar14 <= (long)uVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1048eadc4);
        (*pcVar4)();
      }
      uVar11 = *(ulong *)(uVar1 + uVar13 * 8);
      if ((uVar11 & uVar15) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1048eadc8);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1048eadcc);
        (*pcVar4)();
      }
      uVar11 = uVar11 & -2L << (uVar6 & 0x3f);
      if (uVar11 == 0) {
        lVar8 = uVar13 << 6;
        puVar12 = (ulong *)(param_1 + 0x40 + uVar13 * 8);
        do {
          uVar13 = uVar13 + 1;
          if (uVar14 + 0x3f >> 6 <= uVar13) {
            func_0x0001048ee5f8(uVar6,iVar2,0);
            goto LAB_1048eac0c;
          }
          uVar15 = *puVar12;
          lVar8 = lVar8 + 0x40;
          puVar12 = puVar12 + 1;
        } while (uVar15 == 0);
        func_0x0001048ee5f8(uVar6,iVar2,0);
        uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) + lVar8;
      }
      else {
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar6 & 0x7fffffffffffffc0;
      }
LAB_1048eac0c:
      lVar16 = lVar16 + 1;
      uVar6 = uVar14;
    } while (lVar16 != lVar17);
  }
  return;
}



/* Entry: 1048eadcc; end: 1048eaf5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048eadcc(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  
  puVar7 = PTR_PTR_1126add30;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    FUN_1049db25c();
    FUN_1049d4a98();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d290)();
      return;
    }
    _objc_retain();
    puVar5 = PTR_s_setSelected__11265c598;
    _objc_msgSend();
    puVar6 = puVar7;
    FUN_1048edda8();
    if (((ulong)puVar6 & 1) == 0) {
      _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar7);
      return;
    }
    FUN_1049d8134();
    puVar2 = (undefined *)0x0;
    if (puVar5 != (undefined *)0x0) {
      puVar2 = puVar6;
    }
    puVar6 = (undefined *)0xe000000000000000;
    if (puVar5 != (undefined *)0x0) {
      puVar6 = puVar5;
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c770);
    puVar4 = auStack_58;
    _swift_beginAccess(puVar1,puVar4,1,0);
    uVar3 = puVar1[1];
    *puVar1 = puVar2;
    puVar1[1] = puVar6;
    _swift_bridgeObjectRelease();
    FUN_1049d8024();
    _objc_release(puVar7);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c768);
    _swift_beginAccess(puVar1,auStack_70,1,0);
    uVar8 = puVar1[1];
    *puVar1 = uVar3;
    puVar1[1] = puVar4;
    _objc_release(puVar7);
    _swift_bridgeObjectRelease(uVar8);
    return;
  }
  _objc_release();
  puVar7 = PTR_PTR_1126add30;
  _swift_getInitializedObjCClass();
  puVar6 = puVar7;
  _objc_msgSend();
  _objc_msgSend(unaff_x20,PTR_s_setSelected__11265c598,puVar6);
  if ((int)puVar6 == 0) {
    return;
  }
  _objc_msgSend(puVar7,PTR_s_currentAccessToken_1125b5168);
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar7;
    puVar6 = PTR_s_userID_112682300;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(puVar5);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c768);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  puVar5 = (undefined *)puVar1[1];
  if (puVar6 == (undefined *)0x0) {
    if (puVar5 == (undefined *)0x0) {
      return;
    }
  }
  else if (puVar5 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(puVar6);
  }
  else {
    if (puVar7 == (undefined *)*puVar1 && puVar6 == puVar5) {
      _swift_bridgeObjectRelease(puVar6);
      return;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (puVar7,puVar6,(undefined *)*puVar1,puVar5,0);
    _swift_bridgeObjectRelease(puVar6);
    if (((ulong)puVar7 & 1) != 0) {
      return;
    }
  }
  FUN_1048ed8e0();
  return;
}



/* Entry: 1048eaf60; end: 1048eb003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048eaf60(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_didMoveToWindow_112527020);
  lVar1 = unaff_x20;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_release();
    lVar1 = _DAT_11309c728;
    _swift_beginAccess(unaff_x20 + _DAT_11309c728,auStack_48,0,0);
    if ((*(long *)(unaff_x20 + lVar1) == 1) || ((*(byte *)(unaff_x20 + _DAT_11309c790) & 1) == 0)) {
      FUN_1048eb004();
      *(undefined1 *)(unaff_x20 + _DAT_11309c790) = 1;
    }
  }
  return;
}



/* Entry: 1048eb004; end: 1048eb173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048eb004(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar4 = PTR_PTR_1126add30;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126a5d98;
    _swift_getInitializedObjCClass();
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = _DAT_11309c728;
    if (puVar4 == (undefined *)0x0) {
      _swift_beginAccess(unaff_x20 + _DAT_11309c728,auStack_58,0,0);
      if (*(long *)(unaff_x20 + lVar1) != 2) {
        lVar5 = 0;
        FUN_1048efac4();
        _objc_allocWithZone();
        _objc_msgSend();
        lVar2 = _DAT_11309c730;
        _swift_beginAccess(unaff_x20 + _DAT_11309c730,auStack_70,0,0);
        lVar3 = _DAT_11309c928;
        uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
        _swift_beginAccess(lVar5 + _DAT_11309c928,auStack_88,1,0);
        *(undefined8 *)(lVar5 + lVar3) = uVar6;
        FUN_1048f1c7c();
        lVar2 = _DAT_11309c7e8;
        if (*(long *)(unaff_x20 + lVar1) == 1) {
          _swift_beginAccess(lVar5 + _DAT_11309c7e8,auStack_a0,1,0);
          *(undefined1 *)(lVar5 + lVar2) = 1;
        }
        FUN_1048f1568();
        _objc_release(lVar5);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1048eb174; end: 1048eb19b; -[FBSDKLoginButton didMoveToWindow] */

void FUN_1048eb174(undefined8 param_1)

{
  _objc_retain();
  FUN_1048eaf60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048eb19c; end: 1048eb1c3;  */

undefined8 FUN_1048eb19c(void)

{
  _CGRectGetMidY();
  return 0x4018000000000000;
}



/* Entry: 1048eb1c4; end: 1048eb1eb; -[FBSDKLoginButton imageRectForContentRect:] */

undefined8 FUN_1048eb1c4(void)

{
  _CGRectGetMidY();
  return 0x4018000000000000;
}



/* Entry: 1048eb1ec; end: 1048eb2db;  */

double FUN_1048eb1ec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong unaff_x20;
  double dVar2;
  double dVar3;
  
  uVar1 = unaff_x20;
  _objc_msgSend();
  dVar3 = 0.0;
  if ((uVar1 & 1) == 0) {
    _objc_msgSend();
    _CGRectIsEmpty();
    if ((unaff_x20 & 1) == 0) {
      dVar2 = param_1;
      _CGRectGetMidY(param_1,param_2,param_3,param_4);
      dVar3 = 6.0;
      _CGRectGetMaxX(0x4018000000000000,dVar2 + -8.0,0x4030000000000000,0x4030000000000000);
      dVar3 = dVar3 + 8.0;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
    }
  }
  return dVar3;
}



/* Entry: 1048eb2dc; end: 1048eb3eb; -[FBSDKLoginButton titleRectForContentRect:] */

double FUN_1048eb2dc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    ulong param_5)

{
  int iVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain();
  uVar2 = param_5;
  _objc_msgSend();
  dVar4 = 0.0;
  if ((uVar2 & 1) == 0) {
    uVar2 = param_5;
    _objc_msgSend(param_5,PTR_s_bounds_1125a5ca8);
    iVar1 = (int)uVar2;
    _CGRectIsEmpty();
    if (iVar1 == 0) {
      dVar3 = param_1;
      _CGRectGetMidY(param_1,param_2,param_3,param_4);
      dVar4 = 6.0;
      _CGRectGetMaxX(0x4018000000000000,dVar3 + -8.0,0x4030000000000000,0x4030000000000000);
      dVar4 = dVar4 + 8.0;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
    }
  }
  _objc_release(param_5);
  return dVar4;
}



/* Entry: 1048eb3ec; end: 1048eb823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048eb3ec(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong unaff_x20;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  double dVar17;
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [8];
  undefined1 auStack_88 [24];
  
  _swift_getObjectType();
  _objc_msgSend();
  pcVar16 = " on FBLoginButton";
  lVar5 = unaff_x20 + _DAT_11309c780;
  _swift_beginAccess(lVar5,auStack_88,0,0);
  lVar1 = *(long *)(lVar5 + 0x18);
  lVar2 = *(long *)(lVar5 + 0x20);
  lVar15 = lVar5;
  func_0x0001000a8868(lVar5,lVar1);
  lVar14 = *(long *)(lVar1 + -8);
  lVar13 = -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_a0 + lVar13;
  (**(code **)(lVar14 + 0x10))(puVar12,lVar15,lVar1);
  lVar15 = lVar1;
  (**(code **)(lVar2 + 8))(lVar1,lVar2);
  (**(code **)(lVar14 + 8))(puVar12,lVar1);
  *(undefined8 *)((long)auStack_b0 + lVar13) = 0x800000010f21a480;
  uVar3 = 0xd000000000000019;
  uVar8 = 0x800000010f21a440;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (0xd000000000000019,0x800000010f21a440,0x6b6f6f6265636146,0xeb000000004b4453,lVar15,
             0xd000000000000016,0x800000010f21a460,0xd00000000000004a);
  _objc_release(lVar15);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar8);
  _swift_bridgeObjectRelease(uVar8);
  dVar17 = param_3;
  _objc_msgSend(param_3,param_4);
  _objc_release(uVar3);
  if (dVar17 <= param_3) {
    lVar1 = *(long *)(lVar5 + 0x18);
    lVar2 = *(long *)(lVar5 + 0x20);
    func_0x0001000a8868(lVar5,lVar1);
    lVar15 = *(long *)(lVar1 + -8);
    lVar13 = (long)puVar12 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar15 + 0x10))(lVar13,lVar5,lVar1);
    lVar5 = lVar1;
    (**(code **)(lVar2 + 8))(lVar1,lVar2);
    (**(code **)(lVar15 + 8))(lVar13,lVar1);
    *(undefined8 *)(lVar13 + -0x10) = 0x800000010f21a480;
    uVar4 = 0xd000000000000019;
    uVar11 = 0x800000010f21a460;
    uVar3 = 0xd00000000000004a;
    uVar8 = 0xd000000000000016;
  }
  else {
    pcVar16 = "er is currently logged out";
    lVar1 = *(long *)(lVar5 + 0x18);
    lVar2 = *(long *)(lVar5 + 0x20);
    func_0x0001000a8868(lVar5,lVar1);
    lVar15 = *(long *)(lVar1 + -8);
    lVar13 = (long)puVar12 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar15 + 0x10))(lVar13,lVar5,lVar1);
    lVar5 = lVar1;
    (**(code **)(lVar2 + 8))(lVar1,lVar2);
    (**(code **)(lVar15 + 8))(lVar13,lVar1);
    uVar4 = 0xd000000000000011;
    *(undefined8 *)(lVar13 + -0x10) = 0x800000010f21a4f0;
    uVar8 = 0x6e6920676f4c;
    uVar3 = 0xd00000000000004b;
    uVar11 = 0xe600000000000000;
  }
  puVar9 = (undefined *)((ulong)pcVar16 | 0x8000000000000000);
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (uVar4,puVar9,0x6b6f6f6265636146,0xeb000000004b4453,lVar5,uVar8,uVar11,uVar3);
  _objc_release(lVar5);
  puVar10 = PTR_s_titleForState__112679f20;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x20 == 0) {
LAB_1048eb79c:
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,puVar9);
    _swift_bridgeObjectRelease(puVar9);
    _objc_msgSend();
    _objc_release(uVar4);
  }
  else {
    uVar6 = unaff_x20;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(unaff_x20);
    if (uVar4 == uVar6 && puVar9 == puVar10) {
      _swift_bridgeObjectRelease(puVar9);
      puVar9 = puVar10;
    }
    else {
      uVar7 = uVar4;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar4,puVar9,uVar6,puVar10,0);
      _swift_bridgeObjectRelease(puVar10);
      if ((uVar7 & 1) == 0) goto LAB_1048eb79c;
    }
    _swift_bridgeObjectRelease(puVar9);
  }
  _objc_msgSendSuper2(&stack0xffffffffffffff68,PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 1048eb824; end: 1048eb84b; -[FBSDKLoginButton layoutSubviews] */

void FUN_1048eb824(undefined8 param_1)

{
  _objc_retain();
  FUN_1048eb3ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048eb84c; end: 1048ebd2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048eb84c(double param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong unaff_x20;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  
  uVar4 = unaff_x20;
  _objc_msgSend();
  dVar12 = 0.0;
  if ((uVar4 & 1) == 0) {
    uVar4 = unaff_x20;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 != 0) {
        lVar7 = unaff_x20 + _DAT_11309c780;
        _swift_beginAccess(lVar7,auStack_98,0,0);
        lVar1 = *(long *)(lVar7 + 0x18);
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar10 = lVar7;
        func_0x0001000a8868(lVar7,lVar1);
        lVar9 = *(long *)(lVar1 + -8);
        lVar3 = -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar9 + 0x10))(auStack_a0 + lVar3,lVar10,lVar1);
        lVar10 = lVar1;
        (**(code **)(lVar2 + 8))(lVar1,lVar2);
        (**(code **)(lVar9 + 8))(auStack_a0 + lVar3,lVar1);
        *(undefined8 *)((long)auStack_b0 + lVar3) = 0x800000010f21a560;
        uVar6 = 0xd000000000000012;
        uVar8 = 0x800000010f21a540;
        __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
                  (0xd000000000000012,0x800000010f21a540,0x6b6f6f6265636146,0xeb000000004b4453,
                   lVar10,0x74756f20676f4c,0xe700000000000000,0xd000000000000044);
        _objc_release(lVar10);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar8);
        _swift_bridgeObjectRelease(uVar8);
        _objc_msgSend(uVar4,PTR_s_lineBreakMode_112603e70);
        dVar12 = param_1;
        _objc_msgSend(param_1,param_2);
        _objc_release(uVar6);
        lVar1 = *(long *)(lVar7 + 0x18);
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar10 = lVar7;
        func_0x0001000a8868(lVar7,lVar1);
        lVar9 = *(long *)(lVar1 + -8);
        lVar3 = -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar9 + 0x10))(auStack_a0 + lVar3,lVar10,lVar1);
        lVar10 = lVar1;
        (**(code **)(lVar2 + 8))(lVar1,lVar2);
        (**(code **)(lVar9 + 8))(auStack_a0 + lVar3,lVar1);
        *(undefined8 *)((long)auStack_b0 + lVar3) = 0x800000010f21a480;
        uVar6 = 0xd000000000000019;
        uVar8 = 0x800000010f21a440;
        __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
                  (0xd000000000000019,0x800000010f21a440,0x6b6f6f6265636146,0xeb000000004b4453,
                   lVar10,0xd000000000000016,0x800000010f21a460,0xd00000000000004a);
        _objc_release(lVar10);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar8);
        _swift_bridgeObjectRelease(uVar8);
        _objc_msgSend(uVar4,PTR_s_lineBreakMode_112603e70);
        dVar11 = param_1;
        _objc_msgSend(param_1,param_2);
        _objc_release(uVar6);
        if (param_1 < dVar11) {
          lVar1 = *(long *)(lVar7 + 0x18);
          lVar2 = *(long *)(lVar7 + 0x20);
          func_0x0001000a8868(lVar7,lVar1);
          lVar10 = *(long *)(lVar1 + -8);
          lVar3 = -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
          (**(code **)(lVar10 + 0x10))(auStack_a0 + lVar3,lVar7,lVar1);
          lVar7 = lVar1;
          (**(code **)(lVar2 + 8))(lVar1,lVar2);
          (**(code **)(lVar10 + 8))(auStack_a0 + lVar3,lVar1);
          *(undefined8 *)((long)auStack_b0 + lVar3) = 0x800000010f21a4f0;
          uVar8 = 0x800000010f21a4d0;
          uVar6 = 0xd000000000000011;
          __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
                    (0xd000000000000011,0x800000010f21a4d0,0x6b6f6f6265636146,0xeb000000004b4453,
                     lVar7,0x6e6920676f4c,0xe600000000000000,0xd00000000000004b);
          _objc_release(lVar7);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar8);
          _swift_bridgeObjectRelease(uVar8);
          _objc_msgSend(uVar4,PTR_s_lineBreakMode_112603e70);
          _objc_msgSend(param_1,param_2);
          _objc_release(uVar6);
          dVar11 = param_1;
        }
        _objc_release(uVar5);
        _objc_release(uVar4);
        if (dVar12 < dVar11) {
          dVar12 = dVar11;
        }
        dVar12 = dVar12 + 30.0 + 8.0;
        uVar6 = 0x403c000000000000;
        goto LAB_1048ebd04;
      }
      _objc_release(uVar4);
    }
  }
  uVar6 = 0;
LAB_1048ebd04:
  auVar13._8_8_ = uVar6;
  auVar13._0_8_ = dVar12;
  return auVar13;
}



/* Entry: 1048ebd30; end: 1048ebd83; -[FBSDKLoginButton sizeThatFits:] */

undefined1  [16] FUN_1048ebd30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  _objc_retain();
  FUN_1048eb84c(param_1,param_2);
  _objc_release(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1048ebd84; end: 1048ec04f;  */

void FUN_1048ebd84(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_58 [40];
  
  __s10Foundation12NotificationV8userInfoSDys11AnyHashableVypGSgvg();
  if (param_1 == 0) {
    return;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110da0a98;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar4 = PTR___sSSN_11034da80;
  ppuStack_80 = ppuVar2;
  uStack_78 = param_2;
  __ss11AnyHashableVyABxcSHRzlufC
            (auStack_58,&ppuStack_80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_1048ebe1c:
    uStack_78 = 0;
    ppuStack_80 = (undefined **)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar3 = auStack_58;
    func_0x000100df95d0(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_1048ebe1c;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar3 * 0x20,&ppuStack_80);
    _swift_bridgeObjectRelease(param_1);
  }
  func_0x0001007bbff0(auStack_58);
  lVar1 = lStack_68;
  uVar5 = 0x11309c428;
  FUN_1048ee4e4(&ppuStack_80);
  if (lVar1 != 0) {
    _swift_bridgeObjectRelease(param_1);
    goto LAB_1048ebef0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110da0af8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar4 = PTR___sSSN_11034da80;
  ppuStack_80 = ppuVar2;
  uStack_78 = uVar5;
  __ss11AnyHashableVyABxcSHRzlufC
            (auStack_58,&ppuStack_80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_1048ebec0:
    uStack_78 = 0;
    ppuStack_80 = (undefined **)0x0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar3 = auStack_58;
    func_0x000100df95d0(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_1048ebec0;
    }
    func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)puVar3 * 0x20,&ppuStack_80);
    _swift_bridgeObjectRelease(param_1);
  }
  _swift_bridgeObjectRelease(param_1);
  func_0x0001007bbff0(auStack_58);
  lVar1 = lStack_68;
  FUN_1048ee4e4(&ppuStack_80,0x11309c428);
  if (lVar1 == 0) {
    return;
  }
LAB_1048ebef0:
  func_0x0001048ebf0c();
  return;
}



/* Entry: 1048ec050; end: 1048ec367; -[FBSDKLoginButton accessTokenDidChange:] */

void FUN_1048ec050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar3 = *(long *)(lVar1 + -8);
  puVar2 = &stack0xffffffffffffffc0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (puVar2,param_3);
  _objc_retain(param_1);
  FUN_1048ebd84(puVar2);
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1048ec368; end: 1048ec41b; -[FBSDKLoginButton profileDidChange:] */

void FUN_1048ec368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3);
  FUN_1049db25c(0);
  _objc_retain(param_1);
  uVar2 = param_1;
  FUN_1049d4a98();
  func_0x0001048ec238();
  _objc_release(param_1);
  _objc_release(uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 1048ec41c; end: 1048ece13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ec41c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  undefined8 auStack_130 [2];
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar3 = PTR_PTR_1126add30;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126a5d98;
    _swift_getInitializedObjCClass();
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = _DAT_11309c718;
    if (puVar3 == (undefined *)0x0) {
      _swift_beginAccess(unaff_x20 + _DAT_11309c718,auStack_80,0,0);
      uVar4 = unaff_x20 + lVar18;
      _swift_unknownObjectWeakLoadStrong();
      if (uVar4 != 0) {
        uVar5 = uVar4;
        _objc_msgSend();
        if ((uVar5 & 1) == 0) {
          _swift_unknownObjectRelease();
        }
        else {
          uVar5 = uVar4;
          _objc_msgSend(uVar4,PTR_s_loginButtonWillLogin__112525128);
          _swift_unknownObjectRelease();
          if ((int)uVar5 == 0) {
            return;
          }
        }
      }
      FUN_1048ece78();
      lVar18 = _DAT_11309c710;
      if (uVar4 != 0) {
        _swift_beginAccess(unaff_x20 + _DAT_11309c710,auStack_98,0,0);
        func_0x0001048e985c(unaff_x20 + lVar18,&pcStack_c0);
        func_0x0001000a8868(&pcStack_c0,uStack_a8);
        lVar18 = _DAT_11309c778;
        _swift_beginAccess(unaff_x20 + _DAT_11309c778,&uStack_d8,0,0);
        func_0x0001048e985c(unaff_x20 + lVar18,&uStack_100);
        func_0x0001000a8868(&uStack_100,uStack_e8);
        lVar18 = unaff_x20;
        (**(code **)(puStack_e0 + 0x10))();
        puVar3 = &UNK_1107b6a48;
        _swift_allocObject(&UNK_1107b6a48,0x18,7);
        *(long *)(puVar3 + 0x10) = unaff_x20;
        pcVar17 = *(code **)(lStack_a0 + 0x20);
        uVar5 = uVar4;
        _objc_retain(uVar4);
        _objc_retain();
        (*pcVar17)(lVar18,uVar4,FUN_1048ee080,puVar3,uStack_a8,lStack_a0);
        _swift_release(puVar3);
        _objc_release(uVar5);
        _objc_release(uVar5);
        _objc_release(lVar18);
        func_0x0001048ee5b4(&uStack_100);
        func_0x0001048ee5b4(&pcStack_c0);
      }
      return;
    }
  }
  _objc_release();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309c770);
  _swift_beginAccess(puVar1,auStack_80,0,0);
  lVar18 = puVar1[1];
  if (lVar18 == 0) {
    lVar18 = unaff_x20 + _DAT_11309c780;
    _swift_beginAccess(lVar18,auStack_98,0,0);
    lVar6 = *(long *)(lVar18 + 0x18);
    lVar8 = *(long *)(lVar18 + 0x20);
    func_0x0001000a8868(lVar18,lVar6);
    lVar19 = *(long *)(lVar6 + -8);
    lVar2 = -(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar19 + 0x10))(auStack_120 + lVar2,lVar18,lVar6);
    lVar18 = lVar6;
    (**(code **)(lVar8 + 8))(lVar6,lVar8);
    (**(code **)(lVar19 + 8))(auStack_120 + lVar2,lVar6);
    uVar9 = 0xd000000000000014;
    *(undefined8 *)((long)auStack_130 + lVar2) = 0x800000010f21a9b0;
    uVar7 = 0x800000010f21a970;
    __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
              (0xd000000000000014,0x800000010f21a970,0x6b6f6f6265636146,0xeb000000004b4453,lVar18,
               0xd000000000000018,0x800000010f21a990,0xd000000000000057);
    uStack_118 = uVar9;
    uStack_110 = uVar7;
    _objc_release(lVar18);
  }
  else {
    uStack_100 = *puVar1;
    lVar6 = unaff_x20 + _DAT_11309c780;
    _swift_beginAccess(lVar6,auStack_98,0,0);
    lVar8 = *(long *)(lVar6 + 0x18);
    lVar2 = *(long *)(lVar6 + 0x20);
    func_0x0001000a8868(lVar6,lVar8);
    lVar16 = *(long *)(lVar8 + -8);
    lVar19 = -(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar16 + 0x10))(auStack_120 + lVar19,lVar6,lVar8);
    pcVar17 = *(code **)(lVar2 + 8);
    _swift_bridgeObjectRetain(lVar18);
    lVar6 = lVar8;
    (*pcVar17)(lVar8,lVar2);
    (**(code **)(lVar16 + 8))(auStack_120 + lVar19,lVar8);
    uVar7 = 0xd000000000000016;
    *(undefined8 *)((long)auStack_130 + lVar19) = 0x800000010f21ab30;
    uVar14 = 0x800000010f21ab10;
    __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
              (0xd000000000000016,0x800000010f21ab10,0x6b6f6f6265636146,0xeb000000004b4453,lVar6,
               0x6920646567676f4c,0xef4025207361206e,0xd000000000000048);
    _objc_release(lVar6);
    lVar6 = 0x11309c7e0;
    func_0x0001048db364();
    _swift_allocObject();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    *(undefined **)(lVar6 + 0x38) = PTR___sSSN_11034da80;
    lVar8 = lVar6;
    func_0x00010075bbf0();
    *(long *)(lVar6 + 0x40) = lVar8;
    *(undefined8 *)(lVar6 + 0x20) = uStack_100;
    *(long *)(lVar6 + 0x28) = lVar18;
    uVar9 = uVar14;
    __sSS10FoundationE25localizedStringWithFormatyS2S_s7CVarArg_pdtFZ(uVar7,uVar14,lVar6);
    uStack_118 = uVar7;
    uStack_110 = uVar9;
    _swift_bridgeObjectRelease(lVar6);
    _swift_bridgeObjectRelease(uVar14);
  }
  lVar18 = unaff_x20 + _DAT_11309c780;
  _swift_beginAccess(lVar18,auStack_b0,0,0);
  lVar6 = *(long *)(lVar18 + 0x18);
  lVar8 = *(long *)(lVar18 + 0x20);
  lVar19 = lVar18;
  func_0x0001000a8868(lVar18,lVar6);
  lVar16 = *(long *)(lVar6 + -8);
  lVar2 = -(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar16 + 0x10))(auStack_120 + lVar2,lVar19,lVar6);
  lVar19 = lVar6;
  (**(code **)(lVar8 + 8))(lVar6,lVar8);
  (**(code **)(lVar16 + 8))(auStack_120 + lVar2,lVar6);
  *(undefined8 *)((long)auStack_130 + lVar2) = 0x800000010f21aa30;
  uVar7 = 0x800000010f21aa10;
  uVar9 = 0xd000000000000018;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (0xd000000000000018,0x800000010f21aa10,0x6b6f6f6265636146,0xeb000000004b4453,lVar19,
             0x6c65636e6143,0xe600000000000000,0xd000000000000042);
  uStack_108 = uVar9;
  uStack_100 = uVar7;
  _objc_release(lVar19);
  lVar6 = *(long *)(lVar18 + 0x18);
  lVar8 = *(long *)(lVar18 + 0x20);
  func_0x0001000a8868(lVar18,lVar6);
  lVar19 = *(long *)(lVar6 + -8);
  lVar2 = -(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar19 + 0x10))(auStack_120 + lVar2,lVar18,lVar6);
  lVar18 = lVar6;
  (**(code **)(lVar8 + 8))(lVar6,lVar8);
  (**(code **)(lVar19 + 8))(auStack_120 + lVar2,lVar6);
  *(undefined8 *)((long)auStack_130 + lVar2) = 0x800000010f21aaa0;
  uVar9 = 0xd000000000000019;
  uVar15 = 0x800000010f21aa80;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (0xd000000000000019,0x800000010f21aa80,0x6b6f6f6265636146,0xeb000000004b4453,lVar18,
             0x74754f20676f4c,0xe700000000000000,0xd000000000000043);
  _objc_release(lVar18);
  uVar7 = uStack_110;
  uVar14 = uStack_118;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_118,uStack_110);
  _swift_bridgeObjectRelease(uVar7);
  puVar3 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_retain();
  puVar10 = puVar3;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (puVar10 != (undefined *)0x0) {
    _objc_msgSend();
    _objc_release(puVar10);
  }
  puVar10 = puVar3;
  _objc_msgSend(puVar3,PTR_s_popoverPresentationController_11261e908);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar10 != (undefined *)0x0) {
    _objc_msgSend(unaff_x20,PTR_s_bounds_1125a5ca8);
    _objc_msgSend(puVar10,PTR_s_setSourceRect__11265f638);
    _objc_release(puVar10);
  }
  uVar7 = uStack_100;
  uVar14 = uStack_108;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_108,uStack_100);
  _swift_bridgeObjectRelease(uVar7);
  puVar11 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIAlertAction_1126aeb80);
  puVar12 = puVar11;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  puVar10 = &UNK_1107b6b78;
  _swift_allocObject(&UNK_1107b6b78,0x18,7);
  *(long *)(puVar10 + 0x10) = unaff_x20;
  _objc_retain(unaff_x20);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar9,uVar15);
  _swift_bridgeObjectRelease(uVar15);
  pcStack_c0 = FUN_1048ee648;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0x42000000;
  puStack_d0 = &UNK_100df8ce8;
  puStack_c8 = &UNK_1107b6b90;
  ppuVar13 = &puStack_e0;
  puStack_b8 = puVar10;
  __Block_copy(ppuVar13);
  _swift_release(puStack_b8);
  _objc_msgSend(puVar11,PTR_s_actionWithTitle_style_handler__112599678,uVar9,2,ppuVar13);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar13);
  _objc_release(uVar9);
  _objc_msgSend(puVar3,PTR_s_addAction__11259b400,puVar12);
  _objc_msgSend(puVar3,PTR_s_addAction__11259b400,puVar11);
  lVar18 = _DAT_11309c778;
  _swift_beginAccess(unaff_x20 + _DAT_11309c778,auStack_f8,0,0);
  func_0x0001048e985c(unaff_x20 + lVar18,&puStack_e0);
  pcVar17 = pcStack_c0;
  puVar10 = puStack_c8;
  func_0x0001000a8868(&puStack_e0,puStack_c8);
  (**(code **)(pcVar17 + 8))(puVar10,pcVar17);
  func_0x0001048ee5b4(&puStack_e0);
  if (puVar10 != (undefined *)0x0) {
    _objc_msgSend(puVar10,PTR_s_presentViewController_animated_c_112621588,puVar3,1,0);
    _objc_release(puVar10);
  }
  _objc_release(puVar3);
  _objc_release(puVar12);
  _objc_release(puVar11);
  return;
}



/* Entry: 1048ece14; end: 1048ece77; -[FBSDKLoginButton buttonPressed:] */

void FUN_1048ece14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_40,param_3);
  _swift_unknownObjectRelease(param_3);
  FUN_1048ec41c();
  _objc_release(param_1);
  func_0x0001048ee5b4(auStack_40);
  return;
}



/* Entry: 1048ece78; end: 1048ed6e3;  */

/* WARNING: Removing unreachable block (ram,0x0001048ed6a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ece78(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong auStack_190 [4];
  undefined8 uStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  ulong uStack_148;
  long alStack_140 [7];
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined *apuStack_98 [3];
  undefined1 auStack_80 [32];
  
  lVar1 = 0;
  __s10Foundation12CharacterSetVMa();
  lStack_160 = *(long *)(lVar1 + -8);
  puVar15 = (undefined8 *)
            ((long)auStack_190 - (*(long *)(lStack_160 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0;
  puStack_168 = puVar15;
  lStack_158 = lVar1;
  func_0x0001049ceb28();
  lVar1 = *(long *)(lVar2 + -8);
  lVar12 = (long)puVar15 - (*(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar14 = *(long *)(uVar3 - 8);
  lVar9 = lVar12 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = ((ulong *)(unaff_x20 + _DAT_11309c740))[1];
  if (uVar11 == 0) {
    uVar4 = uVar3;
    __s10Foundation4UUIDVACycfC(lVar9);
    __s10Foundation4UUIDV10uuidStringSSvg();
    uStack_148 = uVar4;
    (**(code **)(lVar14 + 8))(lVar9,uVar3);
  }
  else {
    uStack_148 = *(ulong *)(unaff_x20 + _DAT_11309c740);
    param_2 = uVar11;
  }
  lVar14 = _DAT_11309c720;
  _swift_beginAccess(unaff_x20 + _DAT_11309c720,auStack_80,0,0);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = *(long *)(unaff_x20 + lVar14);
  lVar14 = *(long *)(lVar13 + 0x10);
  if (lVar14 == 0) {
    _swift_bridgeObjectRetain(uVar11);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    apuStack_98[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    auStack_190[3] = param_2;
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(lVar13);
    _swift_retain(puVar6);
    FUN_1048ee088(0,lVar14,0);
    puVar15 = (undefined8 *)(lVar13 + 0x28);
    puVar6 = apuStack_98[0];
    do {
      uVar8 = puVar15[-1];
      uVar10 = *puVar15;
      _swift_bridgeObjectRetain(uVar10);
      FUN_1049cd710(lVar12,uVar8,uVar10);
      uVar3 = *(ulong *)(puVar6 + 0x10);
      apuStack_98[0] = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
        FUN_1048ee088(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
      }
      puVar6 = apuStack_98[0];
      *(ulong *)(apuStack_98[0] + 0x10) = uVar3 + 1;
      (**(code **)(lVar1 + 0x20))
                (apuStack_98[0] +
                 *(long *)(lVar1 + 0x48) * uVar3 +
                 ((ulong)*(byte *)(lVar1 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar1 + 0x50) ^ 0xffffffffffffffff)),lVar12,lVar2);
      puVar15 = puVar15 + 2;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    _swift_bridgeObjectRelease(lVar13);
    param_2 = auStack_190[3];
  }
  puVar5 = puVar6;
  FUN_1048ee3f4();
  _swift_bridgeObjectRelease(puVar6);
  lVar1 = _DAT_11309c738;
  _swift_beginAccess(unaff_x20 + _DAT_11309c738,apuStack_98,0,0);
  auStack_190[2] = *(undefined8 *)(unaff_x20 + lVar1);
  puVar15 = (undefined8 *)(unaff_x20 + _DAT_11309c750);
  _swift_beginAccess(puVar15,auStack_b0,0,0);
  lVar1 = _DAT_11309c758;
  auStack_190[1] = *puVar15;
  uVar8 = puVar15[1];
  _swift_beginAccess(unaff_x20 + _DAT_11309c758,auStack_c8,0,0);
  lVar2 = _DAT_11309c760;
  lVar14 = *(long *)(unaff_x20 + lVar1);
  _swift_beginAccess(unaff_x20 + _DAT_11309c760,auStack_e0,0,0);
  uVar10 = *(undefined8 *)(unaff_x20 + lVar2);
  lVar1 = lVar14;
  _objc_retain();
  _objc_retain();
  _swift_bridgeObjectRetain(uVar8);
  puVar6 = puVar5;
  FUN_1048eab34();
  _swift_bridgeObjectRelease(puVar5);
  lVar12 = 0;
  FUN_1048f80c8();
  lVar2 = lVar12;
  _objc_allocWithZone();
  uVar11 = uStack_148;
  puVar15 = puStack_168;
  uVar3 = uStack_148 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar3 = param_2 >> 0x38 & 0xf;
  }
  lStack_150 = lVar2;
  if (uVar3 != 0) {
    uStack_f8 = uStack_148;
    uStack_170 = uVar10;
    uStack_f0 = param_2;
    __s10Foundation12CharacterSetV11whitespacesACvgZ(puStack_168);
    func_0x000100e8b654();
    uVar3 = 0;
    __sSy10FoundationE16rangeOfCharacter4from7options0B0SnySS5IndexVGSgAA0D3SetV_So22NSStringCompareOptionsVAItF
              (puVar15,0,0,0,1,PTR___sSSN_11034da80,lVar2);
    uVar10 = uStack_170;
    (**(code **)(lStack_160 + 8))(puVar15,lStack_158);
    if ((uVar3 & 1) != 0) {
      puVar5 = puVar6;
      func_0x000100403a6c();
      _swift_bridgeObjectRelease(puVar6);
      puVar6 = puVar5;
      FUN_1048f0530();
      _swift_bridgeObjectRelease(puVar5);
      if (puVar6 == (undefined *)0x0) {
        _swift_bridgeObjectRelease(param_2);
        _swift_bridgeObjectRelease(uVar8);
        puVar6 = PTR_PTR_1126add38;
        _swift_getInitializedObjCClass(PTR_PTR_1126add38);
        uVar8 = 0xd000000000000043;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000043,0x800000010f21a5e0)
        ;
        _objc_msgSend(puVar6,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                      &PTR____CFConstantStringClassReference_110da4eb8,uVar8);
        _objc_release(uVar8);
      }
      else {
        if (lVar14 == 0) {
LAB_1048ed604:
          *(undefined **)(lStack_150 + _DAT_11309ca08) = puVar6;
          *(ulong *)(lStack_150 + _DAT_11309ca10) = auStack_190[2];
          puVar7 = (ulong *)(lStack_150 + _DAT_11309ca18);
          *puVar7 = uVar11;
          puVar7[1] = param_2;
          puVar15 = (undefined8 *)(lStack_150 + _DAT_11309ca20);
          *puVar15 = auStack_190[1];
          puVar15[1] = uVar8;
          *(long *)(lStack_150 + _DAT_11309ca28) = lVar14;
          *(undefined8 *)(lStack_150 + _DAT_11309ca30) = uStack_170;
          lStack_108 = lStack_150;
          lStack_100 = lVar12;
          _objc_msgSendSuper2(&lStack_108,PTR_s_init_1125d9248);
          return;
        }
        lVar2 = 0x11309c7a0;
        auStack_190[3] = param_2;
        func_0x0001048db364();
        _swift_initStackObject();
        puStack_168 = (undefined8 *)(lVar2 + 0x20);
        *puStack_168 = &PTR____CFConstantStringClassReference_110da0538;
        *(undefined8 *)(lVar2 + 0x18) = 4;
        *(undefined8 *)(lVar2 + 0x10) = 2;
        *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110da0558;
        lStack_160 = lVar9;
        alStack_140[0] = lVar1;
        _objc_retain();
        lStack_158 = lVar1;
        _objc_retain(&PTR____CFConstantStringClassReference_110da0538);
        _objc_retain(&PTR____CFConstantStringClassReference_110da0558);
        lVar1 = *(long *)(lVar2 + 0x10);
        if (lVar1 != 0) {
          lVar9 = 0x20;
          do {
            uVar3 = *(ulong *)(lVar2 + lVar9);
            uStack_f8 = uVar3;
            _objc_retain();
            puVar7 = &uStack_f8;
            FUN_1048ee368(puVar7,alStack_140);
            _objc_release(uVar3);
            if (((ulong)puVar7 & 1) != 0) {
              _swift_setDeallocating(lVar2);
              uVar10 = 0;
              FUN_1048db43c(0);
              _swift_arrayDestroy(puStack_168,2,uVar10);
              _objc_release(lStack_158);
              uVar11 = uStack_148;
              param_2 = auStack_190[3];
              goto LAB_1048ed604;
            }
            lVar9 = lVar9 + 8;
            lVar1 = lVar1 + -1;
          } while (lVar1 != 0);
        }
        _swift_setDeallocating(lVar2);
        uVar10 = 0;
        FUN_1048db43c(0);
        _swift_arrayDestroy(puStack_168,2,uVar10);
        _swift_bridgeObjectRelease(auStack_190[3]);
        _swift_bridgeObjectRelease(uVar8);
        _swift_bridgeObjectRelease(puVar6);
        lVar2 = lStack_158;
        _objc_release(lStack_158);
        puVar6 = PTR_PTR_1126add38;
        _swift_getInitializedObjCClass(PTR_PTR_1126add38);
        lVar1 = -0x2fffffffffffffce;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x800000010f21a630)
        ;
        _objc_msgSend(puVar6,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                      &PTR____CFConstantStringClassReference_110da4eb8,lVar1);
        _objc_release(lVar2);
      }
      _objc_release(lVar1);
      uVar10 = uStack_170;
      goto LAB_1048ed578;
    }
  }
  _swift_bridgeObjectRelease(puVar6);
  _swift_bridgeObjectRelease(uVar8);
  uStack_f8 = 0;
  uStack_f0 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3f);
  __sSS6appendyySSF(0x2064696c61766e49,0xee003a65636e6f6e);
  __sSS6appendyySSF(uVar11,param_2);
  _swift_bridgeObjectRelease(param_2);
  __sSS6appendyySSF(0xd00000000000002f,0x800000010f21a5b0);
  uVar11 = uStack_f0;
  uVar3 = uStack_f8;
  puVar6 = PTR_PTR_1126add38;
  _swift_getInitializedObjCClass(PTR_PTR_1126add38);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar11);
  _swift_bridgeObjectRelease(uVar11);
  _objc_msgSend(puVar6,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                &PTR____CFConstantStringClassReference_110da4eb8,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar1);
LAB_1048ed578:
  _objc_release(uVar10);
  _swift_deallocPartialClassInstance(lStack_150,lVar12,0x48,7);
  return;
}



/* Entry: 1048ed6e4; end: 1048ed717; -[FBSDKLoginButton makeLoginConfiguration] */

void FUN_1048ed6e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1048ece78();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1048ed718; end: 1048ed7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ed718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_11309c718;
  _swift_beginAccess(param_5 + _DAT_11309c718,auStack_58,0,0);
  lVar1 = param_5 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = param_1;
    FUN_10490ba50(param_1,param_2,param_3,param_4);
    if (((uint)param_4 & 0xff) == 1) {
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_1);
    }
    else {
      param_1 = 0;
    }
    _objc_msgSend(lVar1,PTR_s_loginButton_didCompleteWithResul_112525140,param_5,uVar2,param_1);
    _objc_release(uVar2);
    _objc_release(param_1);
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1048ed7f4; end: 1048ed8b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ed7f4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309c710;
  _swift_beginAccess(unaff_x20 + _DAT_11309c710,auStack_48,0,0);
  func_0x0001048e985c(unaff_x20 + lVar1,auStack_70);
  func_0x0001000a8868(auStack_70,uStack_58);
  (**(code **)(lStack_50 + 0x30))(uStack_58,lStack_50);
  func_0x0001048ee5b4(auStack_70);
  lVar1 = _DAT_11309c718;
  _swift_beginAccess(unaff_x20 + _DAT_11309c718,auStack_70,0,0);
  lVar1 = unaff_x20 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    _objc_msgSend();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 1048ed8b8; end: 1048ed8df; -[FBSDKLoginButton initializeContent] */

void FUN_1048ed8b8(undefined8 param_1)

{
  _objc_retain();
  FUN_1048eadcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048ed8e0; end: 1048edae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ed8e0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_11309c788;
  _swift_beginAccess(unaff_x20 + _DAT_11309c788,auStack_68,0,0);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
  _swift_unknownObjectRetain(uVar7);
  uVar1 = 0x656d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656d,0xe200000000000000);
  lVar2 = 0x11309c610;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = 0x73646c656966;
  puVar5 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x28) = 0xe600000000000000;
  *(undefined8 *)(lVar2 + 0x30) = 0x656d616e2c6469;
  *(undefined8 *)(lVar2 + 0x38) = 0xe700000000000000;
  lVar3 = lVar2;
  func_0x000100214a84();
  _swift_setDeallocating(lVar2);
  FUN_1048ee4e4((undefined8 *)(lVar2 + 0x20),0x11309c418);
  lVar2 = lVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (lVar3,puVar5,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(lVar3);
  uVar4 = uVar7;
  _objc_msgSend(uVar7,PTR_s_createGraphRequestWithGraphPath__112525138,uVar1,lVar2,8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar2);
  _swift_unknownObjectRelease(uVar7);
  puVar5 = &UNK_1107b6a70;
  _swift_allocObject(&UNK_1107b6a70,0x18,7);
  *(long *)(puVar5 + 0x10) = unaff_x20;
  pcStack_c8 = FUN_1048ee520;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0x42000000;
  pcStack_d8 = FUN_1048e305c;
  puStack_d0 = &UNK_1107b6a88;
  ppuVar6 = &puStack_e8;
  puStack_c0 = puVar5;
  __Block_copy(ppuVar6);
  puVar5 = puStack_c0;
  _objc_retain();
  _swift_release(puVar5);
  uVar1 = uVar4;
  _objc_msgSend(uVar4,PTR_s_startWithCompletion__1126720c8,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar6);
  _swift_unknownObjectRelease(uVar4);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 1048edae8; end: 1048edb0f; -[FBSDKLoginButton updateContentForAccessToken] */

void FUN_1048edae8(undefined8 param_1)

{
  _objc_retain();
  func_0x0001048ebf0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048edb10; end: 1048edd7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048edb10(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *apuStack_88 [3];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  func_0x000100672b50(param_2,auStack_70);
  if (lStack_58 == 0) {
    FUN_1048ee4e4(auStack_70,0x11309c428);
    return;
  }
  uVar13 = 0x11309c408;
  func_0x0001048db364(0x11309c408);
  ppuVar5 = apuStack_88;
  _swift_dynamicCast(ppuVar5,auStack_70,PTR___sypN_11034f1a8 + 8,uVar13,6);
  if (((ulong)ppuVar5 & 1) == 0) {
    return;
  }
  if (*(long *)(apuStack_88[0] + 0x10) == 0) goto LAB_1048edbc8;
  _swift_bridgeObjectRetain(apuStack_88[0]);
  lVar6 = 0x6469;
  uVar10 = 0;
  func_0x000100029284();
  if ((uVar10 & 1) == 0) {
    _swift_bridgeObjectRelease_n(apuStack_88[0],2);
    return;
  }
  plVar1 = (long *)(*(long *)(apuStack_88[0] + 0x38) + lVar6 * 0x10);
  puVar3 = (undefined *)*plVar1;
  puVar4 = (undefined *)plVar1[1];
  _swift_bridgeObjectRetain(puVar4);
  _swift_bridgeObjectRelease(apuStack_88[0]);
  if (param_3 == 0) {
    puVar7 = PTR_PTR_1126add30;
    _swift_getInitializedObjCClass();
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 != (undefined *)0x0) {
      puVar8 = puVar7;
      puVar11 = PTR_s_userID_112682300;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = puVar8;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(puVar8);
      if ((puVar7 == puVar3) && (puVar11 == puVar4)) {
        _swift_bridgeObjectRelease(puVar11);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (puVar7,puVar11,puVar3,puVar4,0);
        _swift_bridgeObjectRelease(puVar11);
        if (((ulong)puVar7 & 1) == 0) {
          _swift_bridgeObjectRelease(apuStack_88[0]);
          apuStack_88[0] = puVar4;
          goto LAB_1048edbc8;
        }
      }
      if (*(long *)(apuStack_88[0] + 0x10) == 0) {
        _swift_bridgeObjectRelease(apuStack_88[0]);
LAB_1048edd20:
        uVar13 = 0;
        uVar12 = 0xe000000000000000;
      }
      else {
        _swift_bridgeObjectRetain(apuStack_88[0]);
        lVar6 = 0x656d616e;
        uVar10 = 0;
        func_0x000100029284();
        if ((uVar10 & 1) == 0) {
          _swift_bridgeObjectRelease_n(apuStack_88[0],2);
          goto LAB_1048edd20;
        }
        puVar2 = (undefined8 *)(*(long *)(apuStack_88[0] + 0x38) + lVar6 * 0x10);
        uVar13 = *puVar2;
        uVar12 = puVar2[1];
        _swift_bridgeObjectRetain(uVar12);
        _swift_bridgeObjectRelease_n(apuStack_88[0],2);
      }
      puVar2 = (undefined8 *)(param_4 + _DAT_11309c770);
      _swift_beginAccess(puVar2,auStack_70,1,0);
      uVar9 = puVar2[1];
      *puVar2 = uVar13;
      puVar2[1] = uVar12;
      _swift_bridgeObjectRelease(uVar9);
      plVar1 = (long *)(param_4 + _DAT_11309c768);
      _swift_beginAccess(plVar1,apuStack_88,1,0);
      apuStack_88[0] = (undefined *)plVar1[1];
      *plVar1 = (long)puVar3;
      plVar1[1] = (long)puVar4;
      goto LAB_1048edbc8;
    }
  }
  _swift_bridgeObjectRelease(puVar4);
LAB_1048edbc8:
  _swift_bridgeObjectRelease(apuStack_88[0]);
  return;
}



/* Entry: 1048edd80; end: 1048edda7; -[FBSDKLoginButton fetchAndSetContent] */

void FUN_1048edd80(undefined8 param_1)

{
  _objc_retain();
  FUN_1048ed8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048edda8; end: 1048edee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1048edda8(ulong param_1,undefined1 *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_1049d8024();
  puVar1 = (ulong *)(unaff_x20 + _DAT_11309c768);
  puVar3 = auStack_58;
  _swift_beginAccess(puVar1,puVar3,0,0);
  if ((undefined1 *)puVar1[1] == (undefined1 *)0x0) {
    _swift_bridgeObjectRelease(param_2);
    uVar5 = 1;
  }
  else {
    if (param_1 == *puVar1 && (undefined1 *)puVar1[1] == param_2) {
      _swift_bridgeObjectRelease();
    }
    else {
      puVar3 = param_2;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease();
      if ((param_1 & 1) == 0) {
        uVar5 = 1;
        goto LAB_1048edecc;
      }
    }
    FUN_1049d8134();
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_11309c770);
    _swift_beginAccess(puVar2,auStack_70,0,0);
    puVar4 = (undefined1 *)puVar2[1];
    uVar5 = (uint)(puVar4 == (undefined1 *)0x0);
    if (puVar3 != (undefined1 *)0x0) {
      if (puVar4 == (undefined1 *)0x0) {
        uVar5 = 0;
      }
      else if (param_2 == (undefined1 *)*puVar2 && puVar3 == puVar4) {
        uVar5 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_2,puVar3,(undefined1 *)*puVar2,puVar4,0);
        uVar5 = (uint)param_2;
      }
      _swift_bridgeObjectRelease(puVar3);
    }
    uVar5 = uVar5 ^ 1;
  }
LAB_1048edecc:
  return uVar5 & 1;
}



/* Entry: 1048edee8; end: 1048edf3b; -[FBSDKLoginButton updateContentForUser:] */

void FUN_1048edee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x0001048ec238(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


