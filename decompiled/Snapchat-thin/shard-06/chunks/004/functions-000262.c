/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10484b3ec; end: 10484b47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484b3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091ce8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091cf0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113091cf8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091d00);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10484b480; end: 10484b503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484b480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113091ce8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091cf0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113091cf8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091d00);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x00010484b4e4();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10484b504; end: 10484b5f7; -[SCPushNotificationEvent initWithUserInfo:source:clientReceiveTimestampMs:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484b504(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lStack_50;
  undefined *puStack_48;
  
  __Block_copy();
  if (param_3 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  if (param_6 == 0) {
    pcVar3 = (code *)0x0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_1107a2798;
    _swift_allocObject(&UNK_1107a2798,0x18,7);
    *(long *)(puVar2 + 0x10) = param_6;
    pcVar3 = FUN_10484b690;
  }
  *(long *)(param_1 + _DAT_113091ce8) = param_3;
  *(undefined8 *)(param_1 + _DAT_113091cf0) = param_4;
  *(undefined8 *)(param_1 + _DAT_113091cf8) = param_5;
  puVar1 = (undefined8 *)(param_1 + _DAT_113091d00);
  *puVar1 = pcVar3;
  puVar1[1] = puVar2;
  func_0x00010484b4e4();
  lStack_50 = param_1;
  puStack_48 = puVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10484b5f8; end: 10484b653; -[SCPushNotificationEvent init] */

void FUN_10484b5f8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSystemModels.PushNotificationEvent",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10484b624);
  (*pcVar1)();
}



/* Entry: 10484b654; end: 10484b68f; -[SCPushNotificationEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484b654(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091ce8));
  if (*(long *)(param_1 + _DAT_113091d00) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_113091d00))[1]);
    return;
  }
  return;
}



/* Entry: 10484b690; end: 10484b6c7;  */

void FUN_10484b690(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100dbf138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10484b6c8; end: 10484b7bf;  */

undefined8 FUN_10484b6c8(ulong param_1,long param_2,ulong param_3,long param_4)

{
  if (param_2 < 4) {
    if (param_2 == 1) {
      if (param_4 != 1) {
        return 0;
      }
      return 1;
    }
    if (param_2 == 2) {
      if (param_4 != 2) {
        return 0;
      }
      return 1;
    }
    if (param_2 == 3) {
      if (param_4 != 3) {
        return 0;
      }
      return 1;
    }
  }
  else {
    if (param_2 == 4) {
      if (param_4 != 4) {
        return 0;
      }
      return 1;
    }
    if (param_2 == 5) {
      if (param_4 != 5) {
        return 0;
      }
      return 1;
    }
    if (param_2 == 6) {
      if (param_4 != 6) {
        return 0;
      }
      return 1;
    }
  }
  if (5 < param_4 - 1U) {
    if (param_2 == 0) {
      if (param_4 == 0) {
        return 1;
      }
    }
    else if (param_4 != 0) {
      if ((param_1 == param_3) && (param_2 == param_4)) {
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      if ((param_1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10484b7c0; end: 10484b7df;  */

void FUN_10484b7c0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 10484b7e0; end: 10484b973;  */

undefined8 * FUN_10484b7e0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 10484b974; end: 10484ba97;  */

int FUN_10484b974(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff8 < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffff9;
  }
  uVar3 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (6 < uVar2 + 1) {
    iVar1 = uVar2 - 5;
  }
  return iVar1;
}



/* Entry: 10484ba98; end: 10484bacf;  */

void FUN_10484ba98(undefined8 param_1)

{
  if (lRam0000000113091d88 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81dab8);
  return;
}



/* Entry: 10484bad0; end: 10484bb7f;  */

long * FUN_10484bad0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar6 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
    iVar4 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10484bb80; end: 10484bbd3;  */

void FUN_10484bb80(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  return;
}



/* Entry: 10484bbd4; end: 10484bdf7;  */

long FUN_10484bbd4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
  iVar4 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)(param_1 + iVar4);
  puVar2 = (undefined8 *)(param_2 + iVar4);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 10484bdf8; end: 10484be0f;  */

void FUN_10484bdf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10484be10; end: 10484be93;  */

void FUN_10484be10(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10dd373e8;
    puStack_30 = &UNK_10dd37400;
    puStack_28 = &UNK_10dd37418;
    _swift_initStructMetadata(param_1,0x100,4,&lStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 10484be94; end: 10484c063;  */

void FUN_10484be94(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 10484c064; end: 10484c0b7;  */

undefined8 FUN_10484c064(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar2 == 0) {
      return 1;
    }
  }
  else if ((uVar2 != 0) &&
          ((uVar1 = *param_1, uVar1 == *param_2 && param_1[1] == uVar2 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar1 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 10484c0b8; end: 10484c0bf;  */

void FUN_10484c0b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10484c0c0; end: 10484c12f;  */

undefined8 * FUN_10484c0c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10484c130; end: 10484c1f3;  */

int FUN_10484c130(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
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



/* Entry: 10484c1f4; end: 10484ce07;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10484c1f4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = param_1[1];
  if ((uVar2 & 0x3000000000000000) != 0) {
    return;
  }
  uVar1 = *param_1;
  uVar3 = (uint)(uVar2 >> 0x3e);
  if (uVar3 == 1) {
    uVar1 = uVar2 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10484ce08; end: 10484ce47;  */

void FUN_10484ce08(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  func_0x000100081194(param_1,param_2);
  return;
}



/* Entry: 10484ce48; end: 10484cea7; -[SCApplicationLifecycleEventsImpl init] */

void FUN_10484ce48(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSystemModels.ApplicationLifecycleEventsImpl",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10484ce74);
  (*pcVar1)();
}



/* Entry: 10484cea8; end: 10484cf5f; -[SCApplicationLifecycleEventsImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484cea8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091de0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091de8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091dd8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091df8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091dc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091e08));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091e00));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091dd0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091df0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113091e10));
  return;
}



/* Entry: 10484cf60; end: 10484cf7f;  */

void FUN_10484cf60(void)

{
  _objc_opt_self(&PTR_PTR_1129dc040);
  return;
}



/* Entry: 10484cf80; end: 10484cf83; -[SCApplicationLifecycleEventsImpl didEnterBackgroundPublish] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484cf80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091df8));
  return;
}



/* Entry: 10484cf84; end: 10484cf87; -[SCApplicationLifecycleEventsImpl didReceiveMemoryWarningPublish] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484cf84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091e08));
  return;
}



/* Entry: 10484cf88; end: 10484cf8b; -[SCApplicationLifecycleEventsImpl didReceiveMemoryWarning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484cf88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091e08));
  return;
}



/* Entry: 10484cf8c; end: 10484cf8f; -[SCApplicationLifecycleEventsImpl sceneDidDisconnectPublish] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484cf8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091e00));
  return;
}



/* Entry: 10484cf90; end: 10484cf93; -[SCApplicationLifecycleEventsImpl sceneDidDisconnect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484cf90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091e00));
  return;
}



/* Entry: 10484cf94; end: 10484cf97; -[SCApplicationLifecycleEventsImpl willEnterForegroundPublish] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484cf94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091dd0));
  return;
}



/* Entry: 10484cf98; end: 10484cf9b; -[SCApplicationLifecycleEventsImpl willResignActivePublish] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484cf98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091df0));
  return;
}



/* Entry: 10484cf9c; end: 10484cf9f; -[SCApplicationLifecycleEventsImpl willTerminatePublish] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484cf9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091e10));
  return;
}



/* Entry: 10484cfa0; end: 10484d073;  */

void FUN_10484cfa0(void)

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



/* Entry: 10484d074; end: 10484d093;  */

void FUN_10484d074(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 10484d094; end: 10484d0d7; -[SCApplicationLifecycleEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484d094(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_113091e40) == '\x05') && (*(long *)(param_1 + _DAT_113091e48) == 0))
  {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10484d0d8);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484d0d8; end: 10484d11f; -[SCApplicationLifecycleEvent init] */

void FUN_10484d0d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSystemModels/SCApplicationLifecycleEventWrapper.swift",0x37,2,0x44,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10484d120);
  (*pcVar1)();
}



/* Entry: 10484d120; end: 10484d22f; -[SCApplicationLifecycleEvent hash] */

undefined8 FUN_10484d120(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010484d154();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10484d230; end: 10484d397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10484d230(undefined8 param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lStack_58;
  long alStack_50 [4];
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_50);
  if (alStack_50[3] == 0) {
    func_0x00010006e7f4(alStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,alStack_50,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar2 & 1) != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_113091e40);
      lVar5 = lStack_58;
      if (bVar1 == *(byte *)(lStack_58 + _DAT_113091e40)) {
        if (((bVar1 < 3) || (bVar1 < 5)) || (bVar1 != 5)) {
          _objc_release();
          uVar4 = 1;
          goto LAB_10484d340;
        }
        if (*(long *)(unaff_x20 + _DAT_113091e48) != 0) {
          lVar5 = *(long *)(lStack_58 + _DAT_113091e48);
          if (lVar5 == 0) {
            uVar3 = 0;
            alStack_50[1] = 0;
            alStack_50[2] = 0;
          }
          else {
            uVar3 = 0;
            FUN_10484ec48();
          }
          alStack_50[0] = lVar5;
          alStack_50[3] = uVar3;
          _objc_retain(lVar5);
          plVar2 = alStack_50;
          FUN_10484e83c(plVar2);
          uVar4 = (uint)plVar2;
          _objc_release(lStack_58);
          func_0x00010006e7f4(alStack_50);
          goto LAB_10484d340;
        }
        lVar6 = *(long *)(lStack_58 + _DAT_113091e48);
        lVar5 = lVar6;
        _objc_retain(lVar6);
        _objc_release(lStack_58);
        if (lVar6 == 0) {
          uVar4 = 1;
          goto LAB_10484d340;
        }
      }
      _objc_release(lVar5);
    }
  }
  uVar4 = 0;
LAB_10484d340:
  return uVar4 & 1;
}



/* Entry: 10484d398; end: 10484d417; -[SCApplicationLifecycleEvent isEqual:] */

uint FUN_10484d398(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10484d230(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10484d418; end: 10484d41b; -[SCApplicationLifecycleEvent copyWithZone:] */

void FUN_10484d418(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10484d41c; end: 10484d423; +[SCApplicationLifecycleEvent didFinishLaunching] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484d41c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113091e40) = 0;
  *(undefined8 *)(lVar1 + _DAT_113091e48) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484d424; end: 10484d42b; +[SCApplicationLifecycleEvent willEnterForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484d424(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113091e40) = 1;
  *(undefined8 *)(lVar1 + _DAT_113091e48) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484d42c; end: 10484d433; +[SCApplicationLifecycleEvent didBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484d42c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113091e40) = 2;
  *(undefined8 *)(lVar1 + _DAT_113091e48) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484d434; end: 10484d43b; +[SCApplicationLifecycleEvent willResignActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484d434(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113091e40) = 3;
  *(undefined8 *)(lVar1 + _DAT_113091e48) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484d43c; end: 10484d443; +[SCApplicationLifecycleEvent didEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484d43c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113091e40) = 4;
  *(undefined8 *)(lVar1 + _DAT_113091e48) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484d444; end: 10484d4af; +[SCApplicationLifecycleEvent didReceiveMemoryWarningWithInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484d444(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113091e40) = 5;
  *(undefined8 *)(lVar2 + _DAT_113091e48) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484d4b0; end: 10484d4b7; +[SCApplicationLifecycleEvent willTerminate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484d4b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113091e40) = 6;
  *(undefined8 *)(lVar1 + _DAT_113091e48) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484d4b8; end: 10484d5c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484d4b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113091e40) = param_3;
  *(undefined8 *)(lVar1 + _DAT_113091e48) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484d5c4; end: 10484d677; -[SCApplicationLifecycleEvent matchDidFinishLaunching:willEnterForeground:didBecomeActive:willResignActive:didEnterBackground:didReceiveMemoryWarning:willTerminate:] */

void FUN_10484d5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
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
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x00010484d514(0x10484d894,auStack_40,0x10484d8ac,auStack_60,0x10484d8b0,auStack_80,
                      0x10484d8b4,auStack_a0,0x10484d8b8,auStack_c0,0x10484d89c,auStack_e0,
                      0x10484d8bc,auStack_100);
  _objc_release(param_1);
  return;
}



/* Entry: 10484d678; end: 10484d6ab;  */

void FUN_10484d678(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10484d6ac; end: 10484d6bb; -[SCApplicationLifecycleEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484d6ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113091e48));
  return;
}



/* Entry: 10484d6bc; end: 10484d6db;  */

void FUN_10484d6bc(void)

{
  _objc_opt_self(&PTR_PTR_1129dc148);
  return;
}



/* Entry: 10484d6dc; end: 10484d843;  */

int FUN_10484d6dc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10484d758;
        goto LAB_10484d73c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10484d73c:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_10484d758:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10484d844; end: 10484d883;  */

void FUN_10484d844(void)

{
  undefined *puVar1;
  
  if (puRam0000000113091e78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd375f4;
  _swift_getWitnessTable(&UNK_10dd375f4,&UNK_1107a2d00);
  puRam0000000113091e78 = puVar1;
  return;
}



/* Entry: 10484d884; end: 10484d8bf;  */

ulong FUN_10484d884(ulong param_1)

{
  if (6 < param_1) {
    param_1 = 7;
  }
  return param_1;
}



/* Entry: 10484d8c0; end: 10484d957; -[SCApplicationOpenURLEvent url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484d8c0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_1138153a0,lVar1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10484d958; end: 10484d9bf; -[SCApplicationOpenURLEvent additionalInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484d958(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1138153a8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10484d9c0; end: 10484da1b; -[SCApplicationOpenURLEvent sourceApplication] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484d9c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138153b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138153b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10484da1c; end: 10484da2b; -[SCApplicationOpenURLEvent fromExternal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10484da1c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138153b8);
}



/* Entry: 10484da2c; end: 10484db0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10484da2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [8];
  
  puVar4 = auStack_70;
  _objc_allocWithZone();
  lVar2 = _DAT_1138153a0;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_1,lVar3);
  *(undefined8 *)(unaff_x20 + _DAT_1138153a8) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138153b0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_1138153b8) = param_5;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_1,lVar3);
  return puVar4;
}



/* Entry: 10484db0c; end: 10484dc63; -[SCApplicationOpenURLEvent initWithUrl:additionalInfo:sourceApplication:fromExternal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10484db0c(long param_1,undefined *param_2,undefined8 param_3,long param_4,long param_5,
                    undefined1 param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long lStack_70;
  long lStack_68;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar4,param_3);
  if (param_4 != 0) {
    param_2 = PTR___ss11AnyHashableVN_11034e448;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  if (param_5 == 0) {
    param_2 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  (**(code **)(lVar5 + 0x10))(param_1 + _DAT_1138153a0,lVar4,lVar2);
  *(long *)(param_1 + _DAT_1138153a8) = param_4;
  plVar3 = (long *)(param_1 + _DAT_1138153b0);
  *plVar3 = param_5;
  plVar3[1] = (long)param_2;
  *(undefined1 *)(param_1 + _DAT_1138153b8) = param_6;
  plVar3 = &lStack_70;
  lStack_70 = param_1;
  lStack_68 = lVar1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(lVar4,lVar2);
  return plVar3;
}



/* Entry: 10484dc64; end: 10484dd47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10484dc64(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_40 [8];
  
  puVar6 = auStack_40;
  _objc_allocWithZone();
  lVar5 = _DAT_1138153a0;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(unaff_x20 + lVar5,param_1,lVar4);
  lVar5 = 0;
  FUN_10484ba98();
  uVar7 = *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x14));
  *(undefined8 *)(unaff_x20 + _DAT_1138153a8) = uVar7;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x18));
  uVar8 = puVar1[1];
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1138153b0);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  *(undefined1 *)(unaff_x20 + _DAT_1138153b8) = *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x1c));
  puVar3 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _objc_msgSendSuper2(auStack_40,puVar3);
  func_0x000101c1ef0c(param_1);
  return puVar6;
}



/* Entry: 10484dd48; end: 10484dd4b; -[SCApplicationOpenURLEvent copyWithZone:] */

void FUN_10484dd48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10484dd4c; end: 10484de37; -[SCApplicationOpenURLEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484dd4c(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = 0;
  FUN_10484ba98();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar3 = _DAT_1138153a0;
  puVar7 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(puVar7,param_1 + lVar3,lVar5);
  uVar8 = *(undefined8 *)(param_1 + _DAT_1138153a8);
  *(undefined8 *)(puVar7 + *(int *)(lVar4 + 0x14)) = uVar8;
  puVar1 = (undefined8 *)(param_1 + _DAT_1138153b0);
  iVar2 = *(int *)(lVar4 + 0x18);
  uVar6 = puVar1[1];
  uVar9 = *puVar1;
  *(undefined8 *)((long)(puVar7 + iVar2) + 8) = puVar1[1];
  *(undefined8 *)(puVar7 + iVar2) = uVar9;
  puVar7[*(int *)(lVar4 + 0x1c)] = *(undefined1 *)(param_1 + _DAT_1138153b8);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  func_0x000101c1ef0c(puVar7);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484de38; end: 10484deb3; -[SCApplicationOpenURLEvent init] */

void FUN_10484de38(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSystemModels/SCApplicationOpenURLEventWrapper.swift",0x35,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10484de80);
  (*pcVar1)();
}



/* Entry: 10484deb4; end: 10484df13; -[SCApplicationOpenURLEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484deb4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_1138153a0;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138153a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1138153b0 + 8))
  ;
  return;
}



/* Entry: 10484df14; end: 10484df1b;  */

void FUN_10484df14(void)

{
  if (lRam0000000113091ea8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e81dc5c);
  return;
}



/* Entry: 10484df1c; end: 10484df53;  */

void FUN_10484df1c(undefined8 param_1)

{
  if (lRam0000000113091ea8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81dc5c);
  return;
}



/* Entry: 10484df54; end: 10484e087;  */

void FUN_10484df54(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10dd376c0;
    puStack_30 = &UNK_10dd376d8;
    puStack_28 = &UNK_10dd376f0;
    _swift_updateClassMetadata2(param_1,0x100,4,&lStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 10484e088; end: 10484e0bf;  */

void FUN_10484e088(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10484e0c0; end: 10484e0df; -[SCInAppNotificationInteractionEvent description] */

void FUN_10484e0c0(void)

{
  FUN_10484e394();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484e0e0; end: 10484e127; -[SCInAppNotificationInteractionEvent init] */

void FUN_10484e0e0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSystemModels/SCInAppNotificationInteractionEventWrapper.swift",0x3f,2,0x40,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10484e128);
  (*pcVar1)();
}



/* Entry: 10484e128; end: 10484e12b; -[SCInAppNotificationInteractionEvent copyWithZone:] */

void FUN_10484e128(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10484e12c; end: 10484e163; +[SCInAppNotificationInteractionEvent inAppNotificationPressedWithNotification:] */

void FUN_10484e12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10484e434();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10484e164; end: 10484e1a3; +[SCInAppNotificationInteractionEvent inAppNotificationDismissedWithNotification:reason:] */

void FUN_10484e164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10484e4e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10484e1a4; end: 10484e2b3; +[SCInAppNotificationInteractionEvent inAppNotificationDisplayInterruptedWithNotification:reason:] */

void FUN_10484e1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010484e598();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10484e2b4; end: 10484e317; -[SCInAppNotificationInteractionEvent matchInAppNotificationPressed:inAppNotificationDismissed:inAppNotificationDisplayInterrupted:] */

void FUN_10484e2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x00010484e1e4(FUN_10484e81c,auStack_40,0x10484e824,auStack_60,0x10484e838,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 10484e318; end: 10484e34b;  */

void FUN_10484e318(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10484e34c; end: 10484e393; -[SCInAppNotificationInteractionEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484e34c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091ec0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091ec8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113091ed8));
  return;
}



/* Entry: 10484e394; end: 10484e433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484e394(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113091eb8) == '\0') {
    if (*(long *)(param_1 + _DAT_113091ec0) != 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10484e42c);
    (*pcVar1)();
  }
  if (*(char *)(param_1 + _DAT_113091eb8) == '\x01') {
    if (*(long *)(param_1 + _DAT_113091ec8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10484e428);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_113091ed0 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10484e3dc);
      (*pcVar1)();
    }
  }
  else {
    if (*(long *)(param_1 + _DAT_113091ed8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10484e430);
      (*pcVar1)();
    }
    if (*(char *)(param_1 + _DAT_113091ee0 + 8) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10484e434);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 10484e434; end: 10484e4df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484e434(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_10484e654();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113091eb8) = 0;
  *(long *)(lVar4 + _DAT_113091ec0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113091ec8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113091ed0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar4 + _DAT_113091ed8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113091ee0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 10484e4e0; end: 10484e653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484e4e0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_10484e654();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113091eb8) = 1;
  *(undefined8 *)(lVar4 + _DAT_113091ec0) = 0;
  *(long *)(lVar4 + _DAT_113091ec8) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113091ed0);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined8 *)(lVar4 + _DAT_113091ed8) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113091ee0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 10484e654; end: 10484e673;  */

void FUN_10484e654(void)

{
  _objc_opt_self(&PTR_PTR_1129dc2f8);
  return;
}



/* Entry: 10484e674; end: 10484e7db;  */

int FUN_10484e674(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10484e6f0;
        goto LAB_10484e6d4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10484e6d4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10484e6f0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10484e7dc; end: 10484e81b;  */

void FUN_10484e7dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113091f10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3776c;
  _swift_getWitnessTable(&UNK_10dd3776c,&UNK_1107a2de8);
  puRam0000000113091f10 = puVar1;
  return;
}



/* Entry: 10484e81c; end: 10484e83b;  */

void FUN_10484e81c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100dbf138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10484e83c; end: 10484e93f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10484e83c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar3 = ((long *)(unaff_x20 + _DAT_113091f18))[1];
      lVar5 = ((long *)(lStack_58 + _DAT_113091f18))[1];
      if (lVar3 != 0) {
        uVar4 = 0;
        if (lVar5 != 0) {
          lVar2 = *(long *)(unaff_x20 + _DAT_113091f18);
          if (lVar2 == *(long *)(lStack_58 + _DAT_113091f18) && lVar3 == lVar5) {
            _objc_release(lStack_58);
            goto LAB_10484e938;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar4 = (uint)lVar2;
        }
        _objc_release(lStack_58);
        goto LAB_10484e8f8;
      }
      _swift_bridgeObjectRetain(lVar5);
      _objc_release(lStack_58);
      if (lVar5 == 0) {
LAB_10484e938:
        uVar4 = 1;
        goto LAB_10484e8f8;
      }
      _swift_bridgeObjectRelease(lVar5);
    }
  }
  uVar4 = 0;
LAB_10484e8f8:
  return uVar4 & 1;
}



/* Entry: 10484e940; end: 10484e99b; -[SCMemoryWarningInfo topViewControllerName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484e940(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113091f18))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113091f18);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10484e99c; end: 10484e99f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484e99c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091f18);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10484e9a0; end: 10484e9fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484e9a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091f18);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10484e9fc; end: 10484ea6f; -[SCMemoryWarningInfo initWithTopViewControllerName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484e9fc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113091f18);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10484ea70; end: 10484eb17; -[SCMemoryWarningInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10484ea70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = ((undefined8 *)(param_1 + _DAT_113091f18))[1];
  if (lVar1 == 0) {
    _objc_retain(param_1);
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113091f18);
    _objc_retain(param_1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10484eb18; end: 10484eb97; -[SCMemoryWarningInfo isEqual:] */

uint FUN_10484eb18(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10484e83c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10484eb98; end: 10484eb9b; -[SCMemoryWarningInfo copyWithZone:] */

void FUN_10484eb98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10484eb9c; end: 10484ebb7; -[SCMemoryWarningInfo description] */

void FUN_10484eb9c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10484ebb8; end: 10484ec33; -[SCMemoryWarningInfo init] */

void FUN_10484ebb8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSystemModels/SCMemoryWarningInfoWrapper.swift",0x2f,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10484ec00);
  (*pcVar1)();
}



/* Entry: 10484ec34; end: 10484ec47; -[SCMemoryWarningInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484ec34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113091f18 + 8))
  ;
  return;
}



/* Entry: 10484ec48; end: 10484ec67;  */

void FUN_10484ec48(void)

{
  _objc_opt_self(&PTR_PTR_1129dc3e0);
  return;
}


