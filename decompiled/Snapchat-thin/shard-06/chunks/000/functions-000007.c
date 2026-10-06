/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104392934; end: 10439293b; +[_TtC25ChatCustomizationHubScope25ChatWallpaperPreviewMedia chatMediaWithContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392934(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073478);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10439293c; end: 104392943; +[_TtC25ChatCustomizationHubScope25ChatWallpaperPreviewMedia composerPhotoAssetWithMediaItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439293c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073478);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104392944; end: 1043929af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392944(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073478);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = param_2;
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_msgSendSuper2(auStack_40,puVar2);
  return;
}



/* Entry: 1043929b0; end: 1043929b7; +[_TtC25ChatCustomizationHubScope25ChatWallpaperPreviewMedia composerMemoriesSnapWithMediaItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043929b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073478);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043929b8; end: 104392a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043929b8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar3 + _DAT_113073478);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104392a28; end: 104392abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392a28(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113073478);
  cVar1 = *(char *)((undefined8 *)(unaff_x20 + _DAT_113073478) + 1);
  _objc_retain(uVar2);
  if (cVar1 == '\0') {
    (*param_1)();
  }
  else if (cVar1 == '\x01') {
    (*param_3)();
  }
  else {
    (*param_5)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104392abc; end: 104392ae7; -[_TtC25ChatCustomizationHubScope25ChatWallpaperPreviewMedia matchChatMedia:composerPhotoAsset:composerMemoriesSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392abc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  char cVar1;
  
  cVar1 = *(char *)((undefined8 *)(param_1 + _DAT_113073478) + 1);
  if (cVar1 != '\x01') {
    param_4 = param_5;
  }
  if (cVar1 != '\0') {
    param_3 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x000104392ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_113073478));
  return;
}



/* Entry: 104392ae8; end: 104392b1b;  */

void FUN_104392ae8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104392b1c; end: 104392b2b; -[_TtC25ChatCustomizationHubScope25ChatWallpaperPreviewMedia .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392b1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113073478));
  return;
}



/* Entry: 104392b2c; end: 104392b4b;  */

void FUN_104392b2c(void)

{
  _objc_opt_self(&PTR_PTR_1129a6aa0);
  return;
}



/* Entry: 104392b4c; end: 104392b53;  */

void FUN_104392b4c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 104392b54; end: 104392bcb;  */

undefined8 * FUN_104392b54(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar2 = *param_1;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  _objc_retain();
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 104392bcc; end: 104392c83;  */

int FUN_104392bcc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104392c84; end: 104392ca3; -[_TtC21ChatMediaPreviewScope21ChatMediaPreviewScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392c84(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130734a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104392ca4; end: 104392cf3; -[_TtC21ChatMediaPreviewScope21ChatMediaPreviewScope initialItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392ca4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130734b0);
  FUN_104393e34(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104392cf4; end: 104392d3b; -[_TtC21ChatMediaPreviewScope21ChatMediaPreviewScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392cf4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130734b8;
  _swift_beginAccess(param_1 + _DAT_1130734b8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104392d3c; end: 104392d93; -[_TtC21ChatMediaPreviewScope21ChatMediaPreviewScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392d3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130734b8;
  _swift_beginAccess(param_1 + _DAT_1130734b8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104392d94; end: 104392ddb; -[_TtC21ChatMediaPreviewScope21ChatMediaPreviewScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104392d94(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130734a8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130734b0));
  param_1 = param_1 + _DAT_1130734b8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 104392ddc; end: 104392e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392ddc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033ce88();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_1130734c8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104392e44; end: 104392e8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392e44(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130734c8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104392e90; end: 104392f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104392e90(long param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x000100333928();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_1130734b8;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_1130734b8,0);
  *(long *)(lVar4 + _DAT_1130734b0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_1130734a8) = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_bridgeObjectRetain(param_1);
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



/* Entry: 104392f98; end: 10439303b; -[ChatMediaPreviewScopeServices buildWithInitialItems:uiContainer:delegate:] */

void FUN_104392f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_104393e34(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104392e90(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10439303c; end: 10439303f;  */

void FUN_10439303c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104393040; end: 104393073;  */

void FUN_104393040(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104393074; end: 1043930b3; -[ChatMediaPreviewScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104393074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130734c8));
  return;
}



/* Entry: 1043930b4; end: 104393153;  */

undefined8
FUN_1043930b4(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
             ulong param_7,long param_8)

{
  if (((param_1 != param_5) || (param_2 != param_6)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
    return 0;
  }
  if (param_4 == 0) {
    if (param_8 != 0) {
      return 0;
    }
  }
  else if ((param_8 == 0) ||
          (((param_3 != param_7 || (param_4 != param_8)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (param_3,param_4,param_7,param_8,0), (param_3 & 1) == 0)))) {
    return 0;
  }
  return 1;
}



/* Entry: 104393154; end: 1043931e3;  */

long FUN_104393154(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043931e4; end: 10439324f;  */

undefined8 * FUN_1043931e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104393250; end: 104393293;  */

undefined8 * FUN_104393250(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 104393294; end: 10439332b;  */

int FUN_104393294(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10439332c; end: 104393363;  */

void FUN_10439332c(undefined8 param_1)

{
  if (lRam0000000113073578 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e800a20);
  return;
}



/* Entry: 104393364; end: 104393367;  */

undefined8 FUN_104393364(ulong param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_1;
  __s10Foundation4UUIDV2eeoiySbAC_ACtFZ();
  if ((uVar5 & 1) != 0) {
    lVar3 = 0;
    FUN_10439332c();
    if (*(long *)(param_1 + (long)*(int *)(lVar3 + 0x14)) ==
        *(long *)(param_2 + *(int *)(lVar3 + 0x14))) {
      puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar3 + 0x18));
      uVar5 = puVar1[1];
      puVar2 = (ulong *)(param_2 + *(int *)(lVar3 + 0x18));
      uVar6 = puVar2[1];
      if (uVar5 == 0) {
        if (uVar6 == 0) {
          return 1;
        }
      }
      else if ((uVar6 != 0) &&
              ((uVar4 = *puVar1, uVar4 == *puVar2 && uVar5 == uVar6 ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar4 & 1) != 0)))) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 104393368; end: 1043933f7;  */

undefined8 FUN_104393368(ulong param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_1;
  __s10Foundation4UUIDV2eeoiySbAC_ACtFZ();
  if ((uVar5 & 1) != 0) {
    lVar3 = 0;
    FUN_10439332c();
    if (*(long *)(param_1 + (long)*(int *)(lVar3 + 0x14)) ==
        *(long *)(param_2 + *(int *)(lVar3 + 0x14))) {
      puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar3 + 0x18));
      uVar5 = puVar1[1];
      puVar2 = (ulong *)(param_2 + *(int *)(lVar3 + 0x18));
      uVar6 = puVar2[1];
      if (uVar5 == 0) {
        if (uVar6 == 0) {
          return 1;
        }
      }
      else if ((uVar6 != 0) &&
              ((uVar4 = *puVar1, uVar4 == *puVar2 && uVar5 == uVar6 ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar4 & 1) != 0)))) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 1043933f8; end: 104393493;  */

long * FUN_1043933f8(long *param_1,long *param_2,long param_3)

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
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
    iVar4 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    _swift_bridgeObjectRetain();
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



/* Entry: 104393494; end: 1043934db;  */

void FUN_104393494(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  return;
}



/* Entry: 1043934dc; end: 1043936ab;  */

long FUN_1043934dc(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
  iVar4 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)(param_1 + iVar4);
  puVar2 = (undefined8 *)(param_2 + iVar4);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1043936ac; end: 1043936c3;  */

void FUN_1043936ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1043936c4; end: 104393743;  */

void FUN_1043936c4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_28 = &UNK_10dcf3310;
    _swift_initStructMetadata(param_1,0x100,3,&lStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 104393744; end: 104393753; -[_TtC24ChatMediaPreviewServices24ChatMediaPreviewServices chatMediaPreviewDataManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104393744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130735b8));
  return;
}



/* Entry: 104393754; end: 1043937eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104393754(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130735b8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043937ec; end: 10439384b; -[_TtC24ChatMediaPreviewServices24ChatMediaPreviewServices init] */

void FUN_1043937ec(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ChatMediaPreviewServices.ChatMediaPreviewServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104393818);
  (*pcVar1)();
}



/* Entry: 10439384c; end: 10439385b; -[_TtC24ChatMediaPreviewServices24ChatMediaPreviewServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439384c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130735b8));
  return;
}



/* Entry: 10439385c; end: 1043938a7; -[SCChatMediaPreviewItem mediaId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439385c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130735e8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130735e8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043938a8; end: 104393903; -[SCChatMediaPreviewItem thumbnailUri] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043938a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130735f0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130735f0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104393904; end: 10439390b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104393904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130735e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130735f0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439390c; end: 104393aa3; -[SCChatMediaPreviewItem initWithMediaId:thumbnailUri:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439390c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_4 == 0) {
    param_4 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_1130735e8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_1130735f0);
  *plVar2 = param_4;
  plVar2[1] = lVar4;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104393aa4; end: 104393ad7; -[SCChatMediaPreviewItem hash] */

undefined8 FUN_104393aa4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104393ad8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104393ad8; end: 104393cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104393ad8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130735e8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_1130735e8))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_1130735f0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130735f0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104393cd8; end: 104393d57; -[SCChatMediaPreviewItem isEqual:] */

uint FUN_104393cd8(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000104393b8c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104393d58; end: 104393d5b; -[SCChatMediaPreviewItem copyWithZone:] */

void FUN_104393d58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104393d5c; end: 104393d77; -[SCChatMediaPreviewItem description] */

void FUN_104393d5c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104393d78; end: 104393df3; -[SCChatMediaPreviewItem init] */

void FUN_104393d78(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "ChatMediaPreviewServices/ChatMediaPreviewItemWrapper.swift",0x3a,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104393dc0);
  (*pcVar1)();
}



/* Entry: 104393df4; end: 104393e33; -[SCChatMediaPreviewItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104393df4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130735e8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130735f0 + 8))
  ;
  return;
}



/* Entry: 104393e34; end: 104393e53;  */

void FUN_104393e34(void)

{
  _objc_opt_self(&PTR_PTR_1129a6db0);
  return;
}



/* Entry: 104393e54; end: 104393e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104393e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130735e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130735f0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104393e5c; end: 104393ef3; -[SCChatMediaPreviewBotMetadata botGroupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104393e5c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_1138134b8,lVar1);
  __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104393ef4; end: 104393f03; -[SCChatMediaPreviewBotMetadata totalInGroup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104393ef4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1138134c0);
}



/* Entry: 104393f04; end: 104393f5f; -[SCChatMediaPreviewBotMetadata contextText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104393f04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138134c8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138134c8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104393f60; end: 10439402f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104393f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  lVar2 = _DAT_1138134b8;
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_1,lVar3);
  *(undefined8 *)(unaff_x20 + _DAT_1138134c0) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138134c8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_1,lVar3);
  return puVar4;
}



/* Entry: 104394030; end: 104394143; -[SCChatMediaPreviewBotMetadata initWithBotGroupId:totalInGroup:contextText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104394030(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(lVar4,param_3);
  if (param_5 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  (**(code **)(lVar5 + 0x10))(param_1 + _DAT_1138134b8,lVar4,lVar2);
  *(undefined8 *)(param_1 + _DAT_1138134c0) = param_4;
  plVar3 = (long *)(param_1 + _DAT_1138134c8);
  *plVar3 = param_5;
  plVar3[1] = param_2;
  plVar3 = &lStack_60;
  lStack_60 = param_1;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(lVar4,lVar2);
  return plVar3;
}



/* Entry: 104394144; end: 1043942cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104394144(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_40 [8];
  
  puVar7 = auStack_40;
  _objc_allocWithZone();
  lVar5 = _DAT_1138134b8;
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(unaff_x20 + lVar5,param_1,lVar4);
  lVar5 = 0;
  FUN_10439332c();
  *(undefined8 *)(unaff_x20 + _DAT_1138134c0) = *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x14));
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x18));
  uVar6 = puVar1[1];
  uVar8 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1138134c8);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar8;
  puVar3 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar6);
  _objc_msgSendSuper2(auStack_40,puVar3);
  func_0x000101ccd00c(param_1);
  return puVar7;
}



/* Entry: 1043942cc; end: 1043942ff; -[SCChatMediaPreviewBotMetadata hash] */

undefined8 FUN_1043942cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104394300();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104394300; end: 1043943c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104394300(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF(_DAT_1138134b8);
  uVar2 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1138134c0));
  if (((undefined8 *)(unaff_x20 + _DAT_1138134c8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1138134c8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1043943c4; end: 10439450b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1043943c4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
    return 0;
  }
  plVar2 = &lStack_68;
  _swift_dynamicCast(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar1,6);
  if (((ulong)plVar2 & 1) == 0) {
    return 0;
  }
  lVar1 = unaff_x20 + _DAT_1138134b8;
  __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(lVar1,lStack_68 + _DAT_1138134b8);
  lVar7 = *(long *)(unaff_x20 + _DAT_1138134c0);
  lVar8 = *(long *)(lStack_68 + _DAT_1138134c0);
  lVar4 = ((long *)(unaff_x20 + _DAT_1138134c8))[1];
  lVar6 = ((long *)(lStack_68 + _DAT_1138134c8))[1];
  if (lVar4 == 0) {
    _swift_bridgeObjectRetain(lVar6);
    _objc_release(lStack_68);
    if (lVar6 != 0) {
      _swift_bridgeObjectRelease(lVar6);
      uVar5 = 0;
      goto LAB_1043944e4;
    }
LAB_1043944e0:
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
    if (lVar6 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_1138134c8);
      if (lVar3 == *(long *)(lStack_68 + _DAT_1138134c8) && lVar4 == lVar6) {
        _objc_release(lStack_68);
        goto LAB_1043944e0;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar5 = (uint)lVar3;
    }
    _objc_release(lStack_68);
  }
LAB_1043944e4:
  return (uint)lVar1 & uVar5 & (uint)(lVar7 == lVar8);
}



/* Entry: 10439450c; end: 10439458b; -[SCChatMediaPreviewBotMetadata isEqual:] */

uint FUN_10439450c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1043943c4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10439458c; end: 10439458f; -[SCChatMediaPreviewBotMetadata copyWithZone:] */

void FUN_10439458c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104394590; end: 10439465f; -[SCChatMediaPreviewBotMetadata description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104394590(long param_1)

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
  
  lVar4 = 0;
  FUN_10439332c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar3 = _DAT_1138134b8;
  puVar7 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(puVar7,param_1 + lVar3,lVar5);
  *(undefined8 *)(puVar7 + *(int *)(lVar4 + 0x14)) = *(undefined8 *)(param_1 + _DAT_1138134c0);
  puVar1 = (undefined8 *)(param_1 + _DAT_1138134c8);
  iVar2 = *(int *)(lVar4 + 0x18);
  uVar6 = puVar1[1];
  uVar8 = *puVar1;
  *(undefined8 *)((long)(puVar7 + iVar2) + 8) = puVar1[1];
  *(undefined8 *)(puVar7 + iVar2) = uVar8;
  _swift_bridgeObjectRetain(uVar6);
  func_0x000101ccd00c(puVar7);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104394660; end: 1043946db; -[SCChatMediaPreviewBotMetadata init] */

void FUN_104394660(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "ChatMediaPreviewServices/ChatMediaPreviewBotMetadataWrapper.swift",0x41,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043946a8);
  (*pcVar1)();
}



/* Entry: 1043946dc; end: 10439472b; -[SCChatMediaPreviewBotMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043946dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_1138134b8;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1138134c8 + 8))
  ;
  return;
}



/* Entry: 10439472c; end: 104394733;  */

void FUN_10439472c(void)

{
  if (lRam0000000113073648 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e800ac8);
  return;
}



/* Entry: 104394734; end: 10439476b;  */

void FUN_104394734(undefined8 param_1)

{
  if (lRam0000000113073648 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e800ac8);
  return;
}



/* Entry: 10439476c; end: 1043947ef;  */

void FUN_10439476c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_28 = &UNK_10dcf3390;
    _swift_updateClassMetadata2(param_1,0x100,3,&lStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 1043947f0; end: 1043947ff; -[_TtC21ChatReactionMenuScope21ChatReactionMenuScope conversationMessageIdEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043947f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073658));
  return;
}



/* Entry: 104394800; end: 10439481f; -[_TtC21ChatReactionMenuScope21ChatReactionMenuScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104394800(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113073660));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104394820; end: 10439483f; -[_TtC21ChatReactionMenuScope21ChatReactionMenuScope trayUiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104394820(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113073668));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104394840; end: 104394887; -[_TtC21ChatReactionMenuScope21ChatReactionMenuScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104394840(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073670;
  _swift_beginAccess(param_1 + _DAT_113073670,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104394888; end: 1043948df; -[_TtC21ChatReactionMenuScope21ChatReactionMenuScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104394888(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073670;
  _swift_beginAccess(param_1 + _DAT_113073670,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043948e0; end: 1043948ef; -[_TtC21ChatReactionMenuScope21ChatReactionMenuScope menuStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1043948e0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113073678);
}



/* Entry: 1043948f0; end: 1043948ff; -[_TtC21ChatReactionMenuScope21ChatReactionMenuScope reactionSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043948f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073680);
}



/* Entry: 104394900; end: 10439490f; -[_TtC21ChatReactionMenuScope21ChatReactionMenuScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104394900(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113073688);
}



/* Entry: 104394910; end: 104394967; -[_TtC21ChatReactionMenuScope21ChatReactionMenuScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104394910(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073658));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113073660));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113073668));
  param_1 = param_1 + _DAT_113073670;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 104394968; end: 1043949cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104394968(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034afa0();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113073698) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043949d0; end: 104394a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043949d0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073698) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104394a1c; end: 104394b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104394a1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5,undefined8 param_6,undefined8 param_7)

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
  func_0x000100343b50();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113073670;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113073670,0);
  *(long *)(lVar4 + _DAT_113073658) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113073660) = param_2;
  *(undefined8 *)(lVar4 + _DAT_113073668) = param_3;
  _swift_beginAccess(lVar4 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_4);
  *(undefined4 *)(lVar4 + _DAT_113073678) = param_5;
  *(undefined8 *)(lVar4 + _DAT_113073680) = param_6;
  *(undefined8 *)(lVar4 + _DAT_113073688) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_88 = lVar4;
  lStack_80 = lVar3;
  _objc_retain(param_1);
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRetain(param_3);
  plVar5 = &lStack_88;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_a0[0] = plVar5;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar5;
}



/* Entry: 104394b7c; end: 104394c4b; -[_TtC21ChatReactionMenuScope36ChatReactionMenuScopeBuilderServices buildWithConversationMessageIdEvents:uiContainer:trayUiContainer:delegate:menuStyle:reactionSource:source:] */

void FUN_104394b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104394a1c(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104394c4c; end: 104394c4f;  */

void FUN_104394c4c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104394c50; end: 104394c83;  */

void FUN_104394c50(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104394c84; end: 104394ca7; -[_TtC21ChatReactionMenuScope36ChatReactionMenuScopeBuilderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104394c84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073698));
  return;
}



/* Entry: 104394ca8; end: 104394eff;  */

long FUN_104394ca8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104394f00; end: 104394f1f; -[SCChatReplyComposeScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104394f00(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130736f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104394f20; end: 104394f2f; -[SCChatReplyComposeScope messageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104394f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130736f8));
  return;
}



/* Entry: 104394f30; end: 104394f7b; -[SCChatReplyComposeScope currentUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104394f30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113073700);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113073700))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104394f7c; end: 104394f8b; -[SCChatReplyComposeScope conversationData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104394f7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073708));
  return;
}



/* Entry: 104394f8c; end: 104394fd3; -[SCChatReplyComposeScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104394f8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073710;
  _swift_beginAccess(param_1 + _DAT_113073710,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104394fd4; end: 10439502b; -[SCChatReplyComposeScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104394fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073710;
  _swift_beginAccess(param_1 + _DAT_113073710,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10439502c; end: 104395057; -[SCChatReplyComposeScope init] */

void FUN_10439502c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ChatReplyComposeScope.SCChatReplyComposeScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104395058);
  (*pcVar1)();
}



/* Entry: 104395058; end: 10439505b;  */

void FUN_104395058(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10439505c; end: 104395137; -[SCChatReplyComposeScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10439505c(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130736f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130736f8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113073700 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073708));
  param_1 = param_1 + _DAT_113073710;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104395138; end: 1043951a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395138(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1043954bc();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113073720) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043951a4; end: 1043951ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043951a4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1043954bc();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073720) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}


