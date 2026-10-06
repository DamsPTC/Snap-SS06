/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d80454; end: 102d8046b; -[SCFriendsFeedSnapTapLatencyBuilder withOperaSessionInitTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d80454(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112f14f80);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102d8046c; end: 102d8065b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8046c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_70;
  long lStack_68;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14f50);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar3 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14f58);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar4 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14f60);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar5 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar5 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14f68);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar6 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar6 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14f70);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar7 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar7 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14f78);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar8 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar8 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14f80);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar9 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  FUN_102d809a0();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f14f18) = uVar3;
  *(undefined8 *)(lVar2 + _DAT_112f14f20) = uVar4;
  *(undefined8 *)(lVar2 + _DAT_112f14f28) = uVar5;
  *(undefined8 *)(lVar2 + _DAT_112f14f30) = uVar6;
  *(undefined8 *)(lVar2 + _DAT_112f14f38) = uVar7;
  *(undefined8 *)(lVar2 + _DAT_112f14f40) = uVar8;
  *(undefined8 *)(lVar2 + _DAT_112f14f48) = uVar9;
  lStack_70 = lVar2;
  lStack_68 = param_1;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d8065c; end: 102d8069f; -[SCFriendsFeedSnapTapLatencyBuilder build] */

void FUN_102d8065c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102d8046c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102d806a0; end: 102d806e3; -[SCFriendsFeedSnapTapLatencyBuilder safeBuildAndReturnError:] */

void FUN_102d806a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102d8046c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102d806e4; end: 102d807af; -[SCFriendsFeedSnapTapLatencyBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d806e4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14f50);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14f58);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14f60);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14f68);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14f70);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14f78);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14f80);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d807b0; end: 102d807b3;  */

void FUN_102d807b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d807b4; end: 102d807e7;  */

void FUN_102d807b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d807e8; end: 102d8084f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d807e8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f14f20);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112f14f28);
  uVar3 = *(undefined8 *)(param_2 + _DAT_112f14f30);
  uVar4 = *(undefined8 *)(param_2 + _DAT_112f14f38);
  uVar5 = *(undefined8 *)(param_2 + _DAT_112f14f40);
  uVar6 = *(undefined8 *)(param_2 + _DAT_112f14f48);
  *param_1 = *(undefined8 *)(param_2 + _DAT_112f14f18);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  return;
}



/* Entry: 102d80850; end: 102d8099f;  */

/* WARNING: Possible PIC construction at 0x000102d80884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d80888) */

void FUN_102d80850(long param_1)

{
  if (param_1 == 0) {
    func_0x000102d809c0();
    func_0x000107c610f8();
  }
  else {
    func_0x000102d809c0();
    func_0x000107c610f8();
    func_0x000107c61174(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102d809a0; end: 102d809df;  */

void FUN_102d809a0(void)

{
  func_0x000107c61168(&PTR_PTR_1128a4c28);
  return;
}



/* Entry: 102d809e0; end: 102d809e3;  */

void FUN_102d809e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d809e4; end: 102d80a8f;  */

void FUN_102d809e4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102d80a90; end: 102d80acf;  */

void FUN_102d80a90(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102d80ad0; end: 102d80b03;  */

undefined8 FUN_102d80ad0(undefined8 param_1)

{
  (*(code *)(undefined *)0x102d7e77c)();
  return param_1;
}



/* Entry: 102d80b04; end: 102d80b37; -[SCMessagingPlaybackConfiguration description] */

void FUN_102d80b04(void)

{
  undefined1 auStack_48 [56];
  
  FUN_102d80f98(auStack_48);
  FUN_102d80ad0(auStack_48);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d80b38; end: 102d80b7f; -[SCMessagingPlaybackConfiguration init] */

void FUN_102d80b38(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMessagingPlaybackScope/SCMessagingPlaybackConfigurationWrapper.swift",0x46,
                      2,0x53,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d80b80);
  (*pcVar1)();
}



/* Entry: 102d80b80; end: 102d80b83; -[SCMessagingPlaybackConfiguration copyWithZone:] */

void FUN_102d80b80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102d80b84; end: 102d80bff; +[SCMessagingPlaybackConfiguration friendsFeedWithInitialViewableSnaps:snapTapLatencyBuilder:isShortcutFilterApplied:] */

void FUN_102d80b84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = 0;
    func_0x000101681c68(0);
    func_0x000107c5fc54(param_3,uVar1);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  lVar2 = param_3;
  FUN_102d810e0(param_3,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 102d80c00; end: 102d80ca7; +[SCMessagingPlaybackConfiguration chatWithMessageId:messageType:startIndex:recipientUserId:isQuoted:] */

void FUN_102d80c00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  FUN_102d811d4(param_3,uVar1,param_4,param_5,param_6,param_2,param_7);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d80ca8; end: 102d80da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d80ca8(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_112f14fd8) == '\x01') {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112f15000) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d80d9c);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112f15008) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d80da4);
      (*pcVar1)();
    }
    if (*(byte *)(unaff_x20 + _DAT_112f15018) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d80da8);
      (*pcVar1)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_112f14ff8),
               ((undefined8 *)(unaff_x20 + _DAT_112f14ff8))[1],
               *(undefined8 *)(unaff_x20 + _DAT_112f15000),
               *(undefined8 *)(unaff_x20 + _DAT_112f15008),
               *(undefined8 *)(unaff_x20 + _DAT_112f15010),
               ((undefined8 *)(unaff_x20 + _DAT_112f15010))[1],
               *(byte *)(unaff_x20 + _DAT_112f15018) & 1);
  }
  else {
    if (*(byte *)(unaff_x20 + _DAT_112f14ff0) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d80da0);
      (*pcVar1)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_112f14fe0),
               *(undefined8 *)(unaff_x20 + _DAT_112f14fe8),*(byte *)(unaff_x20 + _DAT_112f14ff0) & 1
              );
  }
  return;
}



/* Entry: 102d80da8; end: 102d80dfb; -[SCMessagingPlaybackConfiguration matchFriendsFeed:chat:] */

void FUN_102d80da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  FUN_102d80ca8(FUN_102d814b0,auStack_40,0x102d814b8,auStack_60);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102d80dfc; end: 102d80e63;  */

void FUN_102d80dfc(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0;
    func_0x000101681c68(0);
    func_0x000107c5fc48(param_1,uVar1);
  }
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_2,param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d80e64; end: 102d80f03;  */

/* WARNING: Possible PIC construction at 0x000102d80ed8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d80edc) */

void FUN_102d80e64(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,uint param_7,long param_8)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  uVar1 = 0;
  if (param_6 != 0) {
    func_0x000107c5fadc(param_5,param_6);
    uVar1 = param_5;
  }
  (**(code **)(param_8 + 0x10))(param_8,param_1,param_3,param_4,uVar1,param_7 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d80f04; end: 102d80f37;  */

void FUN_102d80f04(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d80f38; end: 102d80f97; -[SCMessagingPlaybackConfiguration .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d80f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d80f78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d80f58) */
/* WARNING: Removing unreachable block (ram,0x000102d80f7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d80f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f14fe0));
  return;
}



/* Entry: 102d80f98; end: 102d810df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d80f98(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  
  if (*(char *)(param_2 + _DAT_112f14fd8) == '\x01') {
    if ((char)((ulong *)(param_2 + _DAT_112f15000))[1] == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d810d4);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_112f15008) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d810dc);
      (*pcVar1)();
    }
    if (*(byte *)(param_2 + _DAT_112f15018) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d810e0);
      (*pcVar1)();
    }
    uVar7 = *(undefined8 *)(param_2 + _DAT_112f14ff8);
    uVar2 = ((undefined8 *)(param_2 + _DAT_112f14ff8))[1];
    uVar5 = *(ulong *)(param_2 + _DAT_112f15000);
    uVar6 = *(undefined8 *)(param_2 + _DAT_112f15008);
    uVar8 = *(undefined8 *)(param_2 + _DAT_112f15010);
    uVar3 = ((undefined8 *)(param_2 + _DAT_112f15010))[1];
    bVar9 = *(byte *)(param_2 + _DAT_112f15018) & 1 | 0x80;
    func_0x000107c61434(uVar3);
    uVar4 = uVar2;
  }
  else {
    if (*(byte *)(param_2 + _DAT_112f14ff0) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d810d8);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)(param_2 + _DAT_112f14fe8);
    uVar2 = *(undefined8 *)(param_2 + _DAT_112f14fe0);
    uVar5 = (ulong)*(byte *)(param_2 + _DAT_112f14ff0) & 1;
    func_0x000107c61174(uVar4);
    uVar6 = 0;
    uVar8 = 0;
    uVar3 = 0;
    bVar9 = 0;
    uVar7 = uVar2;
  }
  func_0x000107c61434(uVar2);
  *param_1 = uVar7;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  param_1[4] = uVar8;
  param_1[5] = uVar3;
  *(byte *)(param_1 + 6) = bVar9;
  return;
}



/* Entry: 102d810e0; end: 102d811d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d810e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_102d812e8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112f14fd8) = 0;
  *(long *)(lVar4 + _DAT_112f14fe0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112f14fe8) = param_2;
  *(undefined1 *)(lVar4 + _DAT_112f14ff0) = param_3;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f14ff8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f15000);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f15008);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f15010);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + _DAT_112f15018) = 2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61434(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 102d811d4; end: 102d812e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d811d4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  FUN_102d812e8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined1 *)(lVar5 + _DAT_112f14fd8) = 1;
  *(undefined8 *)(lVar5 + _DAT_112f14fe0) = 0;
  *(undefined8 *)(lVar5 + _DAT_112f14fe8) = 0;
  *(undefined1 *)(lVar5 + _DAT_112f14ff0) = 2;
  plVar1 = (long *)(lVar5 + _DAT_112f14ff8);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f15000);
  *puVar2 = param_3;
  *(undefined1 *)(puVar2 + 1) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f15008);
  *puVar2 = param_4;
  *(undefined1 *)(puVar2 + 1) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f15010);
  *puVar2 = param_5;
  puVar2[1] = param_6;
  *(undefined1 *)(lVar5 + _DAT_112f15018) = param_7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_6);
  func_0x000107c61154(&lStack_60,puVar3);
  return;
}



/* Entry: 102d812e8; end: 102d81307;  */

void FUN_102d812e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a4e08);
  return;
}



/* Entry: 102d81308; end: 102d8146f;  */

int FUN_102d81308(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102d81384;
        goto LAB_102d81368;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102d81368:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102d81384:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102d81470; end: 102d814af;  */

void FUN_102d81470(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f15048 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4a748;
  func_0x000107c61520(&UNK_10db4a748,&UNK_1105cdc78);
  puRam0000000112f15048 = puVar1;
  return;
}



/* Entry: 102d814b0; end: 102d814bf;  */

void FUN_102d814b0(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    uVar1 = 0;
    func_0x000101681c68(0);
    func_0x000107c5fc48(param_1,uVar1);
  }
  (**(code **)(lVar2 + 0x10))(lVar2,param_1,param_2,param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d814c0; end: 102d81583;  */

void FUN_102d814c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f150c0;
  func_0x0001000285a8(0x112f150c0,&UNK_10db4a7f0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102d81584; end: 102d81587;  */

void FUN_102d81584(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f15140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4a800;
  func_0x000107c61520(&UNK_10db4a800,&UNK_1105cde08);
  puRam0000000112f15140 = puVar1;
  return;
}



/* Entry: 102d81588; end: 102d815f3;  */

void FUN_102d81588(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f15140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4a800;
  func_0x000107c61520(&UNK_10db4a800,&UNK_1105cde08);
  puRam0000000112f15140 = puVar1;
  return;
}



/* Entry: 102d815f4; end: 102d815f7;  */

void FUN_102d815f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f15158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4a8a8;
  func_0x000107c61520(&UNK_10db4a8a8,&UNK_1105cde98);
  puRam0000000112f15158 = puVar1;
  return;
}



/* Entry: 102d815f8; end: 102d81663;  */

void FUN_102d815f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f15158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4a8a8;
  func_0x000107c61520(&UNK_10db4a8a8,&UNK_1105cde98);
  puRam0000000112f15158 = puVar1;
  return;
}



/* Entry: 102d81664; end: 102d816e7;  */

void FUN_102d81664(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102d816e8; end: 102d816eb;  */

void FUN_102d816e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f15170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4a918;
  func_0x000107c61520(&UNK_10db4a918,&UNK_1105cde98);
  puRam0000000112f15170 = puVar1;
  return;
}



/* Entry: 102d816ec; end: 102d8172b;  */

void FUN_102d816ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f15170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4a918;
  func_0x000107c61520(&UNK_10db4a918,&UNK_1105cde98);
  puRam0000000112f15170 = puVar1;
  return;
}



/* Entry: 102d8172c; end: 102d8172f;  */

void FUN_102d8172c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f15178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4a8d0;
  func_0x000107c61520(&UNK_10db4a8d0,&UNK_1105cde98);
  puRam0000000112f15178 = puVar1;
  return;
}



/* Entry: 102d81730; end: 102d8176f;  */

void FUN_102d81730(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f15178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4a8d0;
  func_0x000107c61520(&UNK_10db4a8d0,&UNK_1105cde98);
  puRam0000000112f15178 = puVar1;
  return;
}



/* Entry: 102d81770; end: 102d81917;  */

void FUN_102d81770(void)

{
  return;
}



/* Entry: 102d81918; end: 102d81963;  */

void FUN_102d81918(undefined8 param_1)

{
  func_0x0001000285a8(0x112f151a8,&UNK_10db4a9a0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102d819d0,param_1);
  return;
}



/* Entry: 102d81964; end: 102d819cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d81964(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102d81d7c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f151b0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102d819d0; end: 102d819d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d819d0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102d81d7c();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f151b0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102d819d8; end: 102d81a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d819d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f151b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d81a24; end: 102d81b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102d81a24(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uStack_61;
  long lStack_60;
  long lStack_58;
  
  lVar7 = 0x28;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_61 = *(undefined1 *)(lVar7 + 0x112f15050);
    func_0x00010008a7c8(&lStack_60,&uStack_61);
    lVar2 = lStack_60;
    if (lStack_60 != 0) {
      func_0x000100083b20(&lStack_58);
      func_0x000107c61574(lVar2);
      lVar2 = lStack_58;
      if (lStack_58 != 0) {
        puVar4 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          FUN_102d81c44(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_102d81c44(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x70);
  return puVar5;
}



/* Entry: 102d81b60; end: 102d81bbf; -[_TtC36SCMessageTypeRenderingPluginRegistry41SCMessageTypeRenderingPluginSaberServices buildSaberPlugins] */

void FUN_102d81b60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102d81a24();
  func_0x000107c61170(param_1);
  uVar2 = 0x112f151e0;
  func_0x0001000285a8(0x112f151e0,&UNK_10db4aa20);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d81bc0; end: 102d81c1f; -[_TtC36SCMessageTypeRenderingPluginRegistry41SCMessageTypeRenderingPluginSaberServices init] */

void FUN_102d81bc0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMessageTypeRenderingPluginRegistry.SCMessageTypeRenderingPluginSaberServices"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d81bec);
  (*pcVar1)();
}



/* Entry: 102d81c20; end: 102d81c43; -[_TtC36SCMessageTypeRenderingPluginRegistry41SCMessageTypeRenderingPluginSaberServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d81c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f151b0));
  return;
}



/* Entry: 102d81c44; end: 102d81d6b;  */

ulong FUN_102d81c44(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d81d6c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_102d81d9c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d81d68);
      (*pcVar1)();
    }
    FUN_102d81e1c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102d81d6c; end: 102d81d7b;  */

undefined1  [16] FUN_102d81d6c(void)

{
  return ZEXT816(0x1105cdf18);
}



/* Entry: 102d81d7c; end: 102d81d9b;  */

void FUN_102d81d7c(void)

{
  func_0x000107c61168(&PTR_PTR_1128a4f08);
  return;
}



/* Entry: 102d81d9c; end: 102d81e1b;  */

undefined * FUN_102d81d9c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000102d81c30();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102d81e1c; end: 102d81f3f;  */

long FUN_102d81e1c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d81f3c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d81f40);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112f151e0;
        func_0x0001000285a8(0x112f151e0,&UNK_10db4aa20);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112f151e0;
      func_0x0001000285a8(0x112f151e0,&UNK_10db4aa20);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102d81f38);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102d81f40; end: 102d81f5f; -[SCGroupChatNonFriendWarningAlertScope group] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d81f40(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f151f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d81f60; end: 102d81faf; -[SCGroupChatNonFriendWarningAlertScope nonFriendUserIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d81f60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f151f8);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fe08();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102d81fb0; end: 102d81fcf; -[SCGroupChatNonFriendWarningAlertScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d81fb0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f15200));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d81fd0; end: 102d82017; -[SCGroupChatNonFriendWarningAlertScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d81fd0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f15208;
  func_0x000107c61428(param_1 + _DAT_112f15208,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d82018; end: 102d8206f; -[SCGroupChatNonFriendWarningAlertScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82018(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f15208;
  func_0x000107c61428(param_1 + _DAT_112f15208,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d82070; end: 102d8209b; -[SCGroupChatNonFriendWarningAlertScope init] */

void FUN_102d82070(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGroupChatNonFriendWarningAlertScope.SCGroupChatNonFriendWarningAlertScope",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d8209c);
  (*pcVar1)();
}



/* Entry: 102d8209c; end: 102d82163; -[SCGroupChatNonFriendWarningAlertScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d8209c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f151f0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f151f8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f15200));
  param_1 = param_1 + _DAT_112f15208;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d82164; end: 102d821cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82164(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102d824a4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f15218) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102d821d0; end: 102d821d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d821d0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102d824a4();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f15218) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102d821d8; end: 102d82223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d821d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f15218) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d82224; end: 102d82343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102d82224(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  FUN_102d82400();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112f15208;
  func_0x000107c61614(lVar4 + _DAT_112f15208,0);
  *(long *)(lVar4 + _DAT_112f151f0) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112f151f8) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112f15200) = param_3;
  func_0x000107c61428(lVar4 + lVar2,auStack_68,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c615f0(param_1);
  func_0x000107c61434(param_2);
  func_0x000107c615f0(param_3);
  plVar5 = &lStack_78;
  func_0x000107c61154(plVar5,puVar1);
  plStack_88 = plVar5;
  func_0x00010008a7c8(&uStack_80,&plStack_88);
  func_0x000100083b20(&plStack_88);
  func_0x000107c61574(uStack_80);
  func_0x000107c61170(plVar5);
  return plStack_88;
}



/* Entry: 102d82344; end: 102d823ff; -[SCGroupChatNonFriendWarningAlertScopeServices buildWithGroup:nonFriendUserIds:uiContainer:delegate:] */

void FUN_102d82344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5fe10(param_4,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102d82224(param_3,param_4,param_5,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102d82400; end: 102d8241f;  */

void FUN_102d82400(void)

{
  func_0x000107c61168(&PTR_PTR_1128a4fc8);
  return;
}



/* Entry: 102d82420; end: 102d8244b; -[SCGroupChatNonFriendWarningAlertScopeServices init] */

void FUN_102d82420(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGroupChatNonFriendWarningAlertScope.SCGroupChatNonFriendWarningAlertScopeServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d8244c);
  (*pcVar1)();
}



/* Entry: 102d8244c; end: 102d8244f;  */

void FUN_102d8244c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d82450; end: 102d82483;  */

void FUN_102d82450(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d82484; end: 102d824a3; -[SCGroupChatNonFriendWarningAlertScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f15218));
  return;
}



/* Entry: 102d824a4; end: 102d824c3;  */

void FUN_102d824a4(void)

{
  func_0x000107c61168(&PTR_PTR_1128a50a0);
  return;
}



/* Entry: 102d824c4; end: 102d824c7;  */

void FUN_102d824c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d824c8; end: 102d824d7; -[_TtC22AddToGroupCardServices22AddToGroupCardServices stateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d824c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f15270));
  return;
}



/* Entry: 102d824d8; end: 102d8256f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d824d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f15270) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d82570; end: 102d825c7; -[_TtC22AddToGroupCardServices22AddToGroupCardServices initWithStateObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f15270) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102d825c8; end: 102d82627; -[_TtC22AddToGroupCardServices22AddToGroupCardServices init] */

void FUN_102d825c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddToGroupCardServices.AddToGroupCardServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d825f4);
  (*pcVar1)();
}



/* Entry: 102d82628; end: 102d82637; -[_TtC22AddToGroupCardServices22AddToGroupCardServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f15270));
  return;
}



/* Entry: 102d82638; end: 102d82657;  */

void FUN_102d82638(void)

{
  func_0x000107c61168(&PTR_PTR_1128a5160);
  return;
}



/* Entry: 102d82658; end: 102d8284f;  */

void FUN_102d82658(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 102d82850; end: 102d82923;  */

void FUN_102d82850(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102d82924; end: 102d82943;  */

void FUN_102d82924(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 102d82944; end: 102d829af; -[SCAddToGroupCardState description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82944(long param_1)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + _DAT_112f152a0);
  if (bVar1 < 3) {
    if ((1 < bVar1) && (*(long *)(param_1 + _DAT_112f152a8 + 8) == 0)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d82974);
      (*pcVar2)();
    }
  }
  else if ((bVar1 == 3) && (*(long *)(param_1 + _DAT_112f152b0 + 8) == 0)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d829b0);
    (*pcVar2)();
  }
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d829b0; end: 102d829f7; -[SCAddToGroupCardState init] */

void FUN_102d829b0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "AddToGroupCardServices/AddToGroupCardStateWrapper.swift",0x37,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d829f8);
  (*pcVar1)();
}



/* Entry: 102d829f8; end: 102d82a03; -[SCAddToGroupCardState copyWithZone:] */

void FUN_102d829f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102d82a04; end: 102d82a13; +[SCAddToGroupCardState unset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82a04(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f152a0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f152a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f152b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d82a14; end: 102d82a1b; +[SCAddToGroupCardState doNotShow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82a14(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f152a0) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f152a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f152b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d82a1c; end: 102d82aa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82a1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112f152a0) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f152a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f152b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61434(param_2);
  func_0x000107c61154(auStack_40,puVar2);
  return;
}



/* Entry: 102d82aa4; end: 102d82bbb; +[SCAddToGroupCardState showAboveMessageWithMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82aa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f152a0) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f152a8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f152b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d82bbc; end: 102d82c4b; +[SCAddToGroupCardState showBelowMessageWithMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82bbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f152a0) = 3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f152a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f152b0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d82c4c; end: 102d82c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82c4c(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112f152a0) = 4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f152a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f152b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d82c54; end: 102d82cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82c54(undefined1 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112f152a0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f152a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f152b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d82cc0; end: 102d82cc7; +[SCAddToGroupCardState showBelowMessages] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82cc0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f152a0) = 4;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f152a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f152b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d82cc8; end: 102d82de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82cc8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f152a0) = param_3;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f152a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f152b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d82de8; end: 102d82e6f; -[SCAddToGroupCardState matchUnset:doNotShow:showAboveMessage:showBelowMessage:showBelowMessages:] */

void FUN_102d82de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
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
  
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x000102d82d38(0x102d830bc,auStack_40,FUN_102d83104,auStack_60,0x102d830c8,auStack_80,
                      0x102d8310c,auStack_a0,0x102d83108,auStack_c0);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102d82e70; end: 102d82ea3;  */

void FUN_102d82e70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d82ea4; end: 102d82ee3; -[SCAddToGroupCardState .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d82ec4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d82ec8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d82ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f152a8 + 8))
  ;
  return;
}



/* Entry: 102d82ee4; end: 102d82f03;  */

void FUN_102d82ee4(void)

{
  func_0x000107c61168(&PTR_PTR_1128a5220);
  return;
}


