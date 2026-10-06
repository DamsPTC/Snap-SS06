/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b961e8; end: 103b9622b; -[ModularStickerCutoutScope launchSurface] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b961e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff22a0;
  func_0x000107c61428(param_1 + _DAT_112ff22a0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 103b9622c; end: 103b9627b; -[ModularStickerCutoutScope setLaunchSurface:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9622c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff22a0;
  func_0x000107c61428(param_1 + _DAT_112ff22a0,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103b9627c; end: 103b962b3; -[ModularStickerCutoutScope sourceVideoAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9627c(long param_1)

{
  if (*(char *)((undefined8 *)(param_1 + _DAT_112ff2278) + 1) == '\x01') {
    func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_112ff2278));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b962b4; end: 103b962eb; -[ModularStickerCutoutScope sourceCtpItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b962b4(long param_1)

{
  if (*(char *)((undefined8 *)(param_1 + _DAT_112ff2278) + 1) == '\x02') {
    func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_112ff2278));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b962ec; end: 103b96457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b962ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ff2280;
  uVar5 = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112ff2280);
  *(undefined1 *)(unaff_x20 + _DAT_112ff2298) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff22a0) = 3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2268) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2288);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  uVar3 = param_4;
  FUN_103b96e74();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2278);
  *puVar1 = uVar3;
  *(char *)(puVar1 + 1) = (char)uVar5;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_5);
  *(undefined8 *)(unaff_x20 + _DAT_112ff2270) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2290);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  func_0x000107c61174(param_1);
  func_0x000100f74158(uVar3,uVar5);
  puVar4 = auStack_88;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  return puVar4;
}



/* Entry: 103b96458; end: 103b964a7;  */

undefined8
FUN_103b96458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103b96674();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  return uVar1;
}



/* Entry: 103b964a8; end: 103b9659b; -[ModularStickerCutoutScope initWithPresentingViewController:conversationId:source:delegate:presentingPage:messageSenderId:] */

undefined8
FUN_103b964a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = param_2;
  }
  if (param_8 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_8);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  uVar2 = param_3;
  FUN_103b96674(param_3,param_4,uVar1,param_5,param_6,param_7,param_8,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  return uVar2;
}



/* Entry: 103b9659c; end: 103b965fb; -[ModularStickerCutoutScope init] */

void FUN_103b9659c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ModularStickerCutoutScope.ModularStickerCutoutScope",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b965c8);
  (*pcVar1)();
}



/* Entry: 103b965fc; end: 103b96673; -[ModularStickerCutoutScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b96654: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b96658) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b965fc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff2268));
  func_0x000100f72e4c(*(undefined8 *)(param_1 + _DAT_112ff2278),
                      *(undefined1 *)((undefined8 *)(param_1 + _DAT_112ff2278) + 1));
  FUN_103b967b8(param_1 + _DAT_112ff2280);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff2288 + 8))
  ;
  return;
}



/* Entry: 103b96674; end: 103b967b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b96674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112ff2280;
  uVar3 = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112ff2280);
  *(undefined1 *)(unaff_x20 + _DAT_112ff2298) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff22a0) = 3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2268) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2288);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  FUN_103b96e74();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2278);
  *puVar1 = param_4;
  *(char *)(puVar1 + 1) = (char)uVar3;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_5);
  *(undefined8 *)(unaff_x20 + _DAT_112ff2270) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2290);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  func_0x000107c61174(param_1);
  func_0x000100f74158(param_4,uVar3);
  func_0x000107c61154(&stack0xffffffffffffff78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b967b8; end: 103b967db;  */

undefined8 FUN_103b967b8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b967dc; end: 103b9692f;  */

void FUN_103b967dc(undefined8 *param_1)

{
  if (*(byte *)(param_1 + 1) < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(*param_1);
    return;
  }
  return;
}



/* Entry: 103b96930; end: 103b969db;  */

void FUN_103b96930(void)

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



/* Entry: 103b969dc; end: 103b96a13;  */

void FUN_103b969dc(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103b96a14; end: 103b96a33; -[SCModularStickerCutoutSource description] */

void FUN_103b96a14(void)

{
  FUN_103b96e74();
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b96a34; end: 103b96a7b; -[SCModularStickerCutoutSource init] */

void FUN_103b96a34(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "ModularStickerCutoutScope/ModularStickerCutoutSourceWrapper.swift",0x41,2,
                      0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b96a7c);
  (*pcVar1)();
}



/* Entry: 103b96a7c; end: 103b96a7f; -[SCModularStickerCutoutSource copyWithZone:] */

void FUN_103b96a7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b96a80; end: 103b96afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b96a80(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ff22d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff22d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff22e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff22e8) = 0;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61154(auStack_30,puVar1);
  return;
}



/* Entry: 103b96afc; end: 103b96b7b; +[SCModularStickerCutoutSource imageWithFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b96afc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff22d0) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff22d8) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112ff22e0) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff22e8) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b96b7c; end: 103b96c7f; +[SCModularStickerCutoutSource videoWithAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b96b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff22d0) = 1;
  *(undefined8 *)(lVar2 + _DAT_112ff22d8) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff22e0) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112ff22e8) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b96c80; end: 103b96d93; +[SCModularStickerCutoutSource ctpItemInstanceWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b96c80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112ff22d0) = 2;
  *(undefined8 *)(lVar2 + _DAT_112ff22d8) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff22e0) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ff22e8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b96d94; end: 103b96df7; -[SCModularStickerCutoutSource matchImage:video:ctpItemInstance:] */

void FUN_103b96d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x000107c61174();
  func_0x000103b96d04(0x103b970a4,auStack_40,0x103b970a8,auStack_60,FUN_103b97094,auStack_80);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b96df8; end: 103b96e2b;  */

void FUN_103b96df8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b96e2c; end: 103b96e73; -[SCModularStickerCutoutSource .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b96e48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b96e4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b96e2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff22d8));
  return;
}



/* Entry: 103b96e74; end: 103b96ecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b96e74(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_112ff22d0) == '\0') {
    if (*(long *)(param_1 + _DAT_112ff22d8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b96eb4);
      (*pcVar1)();
    }
  }
  else if (*(char *)(param_1 + _DAT_112ff22d0) == '\x01') {
    if (*(long *)(param_1 + _DAT_112ff22e0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b96ea0);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_112ff22e8) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b96ecc);
    (*pcVar1)();
  }
  return;
}



/* Entry: 103b96ecc; end: 103b96eeb;  */

void FUN_103b96ecc(void)

{
  func_0x000107c61168(&PTR_PTR_11293a078);
  return;
}



/* Entry: 103b96eec; end: 103b97053;  */

int FUN_103b96eec(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103b96f68;
        goto LAB_103b96f4c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103b96f4c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103b96f68:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103b97054; end: 103b97093;  */

void FUN_103b97054(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5d6f4;
  func_0x000107c61520(&UNK_10dc5d6f4,&UNK_1106dda80);
  puRam0000000112ff2318 = puVar1;
  return;
}



/* Entry: 103b97094; end: 103b970ab;  */

void FUN_103b97094(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103b970a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103b970ac; end: 103b970f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b970ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff2328) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b970f8; end: 103b971db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_103b970f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *apuStack_68 [2];
  undefined8 uStack_58;
  
  func_0x000107c5fadc(param_3,param_4);
  uVar2 = 0;
  if (param_7 != 0) {
    func_0x000107c5fadc(param_6,param_7);
    uVar2 = param_6;
  }
  puVar1 = PTR_PTR_1126aa800;
  func_0x000107c610f8();
  func_0x000107c48f10();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  apuStack_68[0] = puVar1;
  func_0x00010008a7c8(&uStack_58,apuStack_68);
  func_0x000100083b20(apuStack_68);
  func_0x000107c61574(uStack_58);
  func_0x000107c615e8(apuStack_68[0]);
  return puVar1;
}



/* Entry: 103b971dc; end: 103b972bb; -[_TtC26SCAddFriendSheetScopeProxy29SCAddFriendSheetScopeServices buildWithUIContainer:addFriendSheetDelegate:inviteID:isLens:deepLinkHash:] */

void FUN_103b971dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_5);
  if (param_7 == 0) {
    param_7 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5faec(param_7);
  }
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103b970f8(param_3,param_4,param_5,param_2,param_6,param_7,uVar2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b972bc; end: 103b972ef;  */

void FUN_103b972bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b972f0; end: 103b9731f; -[_TtC26SCAddFriendSheetScopeProxy29SCAddFriendSheetScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b972f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff2328));
  return;
}



/* Entry: 103b97320; end: 103b9732f; -[_TtC20SCAdPrefetchServices20SCAdPrefetchServices spotlightAdPrefetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b97320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2380));
  return;
}



/* Entry: 103b97330; end: 103b9733f; -[_TtC20SCAdPrefetchServices20SCAdPrefetchServices contentDeepLinkAdPrefetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b97330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2388));
  return;
}



/* Entry: 103b97340; end: 103b9734f; -[_TtC20SCAdPrefetchServices20SCAdPrefetchServices discoverTileTapContextBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b97340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2390));
  return;
}



/* Entry: 103b97350; end: 103b973eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b97350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff2370) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2378) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2380) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2388) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2390) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b973ec; end: 103b97483;  */

/* WARNING: Possible PIC construction at 0x000103b9740c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b97428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b97444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b97460: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b97448) */
/* WARNING: Removing unreachable block (ram,0x000103b9742c) */
/* WARNING: Removing unreachable block (ram,0x000103b97410) */
/* WARNING: Removing unreachable block (ram,0x000103b97464) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b973ec(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + _DAT_112ff2370));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 103b97484; end: 103b974ab; -[_TtC20SCAdPrefetchServices20SCAdPrefetchServices prewarm] */

void FUN_103b97484(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b973ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b974ac; end: 103b9750b; -[_TtC20SCAdPrefetchServices20SCAdPrefetchServices init] */

void FUN_103b974ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdPrefetchServices.SCAdPrefetchServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b974d8);
  (*pcVar1)();
}



/* Entry: 103b9750c; end: 103b97573; -[_TtC20SCAdPrefetchServices20SCAdPrefetchServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b97528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b97548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b9752c) */
/* WARNING: Removing unreachable block (ram,0x000103b9754c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9750c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff2370));
  return;
}



/* Entry: 103b97574; end: 103b9758b;  */

bool FUN_103b97574(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b9758c; end: 103b975cb;  */

void FUN_103b9758c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff23c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5d8c0;
  func_0x000107c61520(&UNK_10dc5d8c0,&UNK_1106ddc58);
  puRam0000000112ff23c0 = puVar1;
  return;
}



/* Entry: 103b975cc; end: 103b97677;  */

void FUN_103b975cc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b97678; end: 103b976af;  */

void FUN_103b97678(ulong *param_1,ulong *param_2)

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



/* Entry: 103b976b0; end: 103b976bf; -[SCAdOperaStoriesConfig storySessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b976b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff23c8));
  return;
}



/* Entry: 103b976c0; end: 103b9771b; -[SCAdOperaStoriesConfig deepLinkId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b976c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff23d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff23d0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b9771c; end: 103b9772b; -[SCAdOperaStoriesConfig initialAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9771c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff23d8));
  return;
}



/* Entry: 103b9772c; end: 103b9773b; -[SCAdOperaStoriesConfig p2pDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9772c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff23e0));
  return;
}



/* Entry: 103b9773c; end: 103b977cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9773c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff23c8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff23d0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff23d8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff23e0) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b977d0; end: 103b97897; -[SCAdOperaStoriesConfig initWithStorySessionId:deepLinkId:initialAd:p2pDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b977d0(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(undefined8 *)(param_1 + _DAT_112ff23c8) = param_3;
  plVar1 = (long *)(param_1 + _DAT_112ff23d0);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112ff23d8) = param_5;
  *(undefined8 *)(param_1 + _DAT_112ff23e0) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_50,puVar2);
  return;
}



/* Entry: 103b97898; end: 103b978f7; -[SCAdOperaStoriesConfig init] */

void FUN_103b97898(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackServices.AdOperaStoriesConfig",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b978c4);
  (*pcVar1)();
}



/* Entry: 103b978f8; end: 103b97953; -[SCAdOperaStoriesConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b97914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b97938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b97918) */
/* WARNING: Removing unreachable block (ram,0x000103b9793c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b978f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff23c8));
  return;
}



/* Entry: 103b97954; end: 103b97973;  */

void FUN_103b97954(void)

{
  func_0x000107c61168(&PTR_PTR_11293a2f0);
  return;
}



/* Entry: 103b97974; end: 103b979bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b97974(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff2410) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b979c0; end: 103b97a1f; -[_TtC18AdPlaybackServices18AdPlaybackServices init] */

void FUN_103b979c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackServices.AdPlaybackServices",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b979ec);
  (*pcVar1)();
}



/* Entry: 103b97a20; end: 103b97a2f; -[_TtC18AdPlaybackServices18AdPlaybackServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b97a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff2410));
  return;
}



/* Entry: 103b97a30; end: 103b97a3b; -[SCAdTrackOperaAdaptorSnapshot adIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b97a30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff2440))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff2440);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b97a3c; end: 103b97a47; -[SCAdTrackOperaAdaptorSnapshot adServeItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b97a3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff2448))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff2448);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b97a48; end: 103b97a53; -[SCAdTrackOperaAdaptorSnapshot adId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b97a48(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff2450))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff2450);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b97a54; end: 103b97aab;  */

void FUN_103b97a54(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b97aac; end: 103b97abb; -[SCAdTrackOperaAdaptorSnapshot snapIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b97aac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff2458);
}



/* Entry: 103b97abc; end: 103b97acb; -[SCAdTrackOperaAdaptorSnapshot adType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b97abc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff2460);
}



/* Entry: 103b97acc; end: 103b97adb; -[SCAdTrackOperaAdaptorSnapshot adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b97acc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff2468);
}



/* Entry: 103b97adc; end: 103b97aeb; -[SCAdTrackOperaAdaptorSnapshot preferredAttachmentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b97adc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff2470);
}



/* Entry: 103b97aec; end: 103b97afb; -[SCAdTrackOperaAdaptorSnapshot collectionDefaultAttachmentIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b97aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2478));
  return;
}



/* Entry: 103b97afc; end: 103b97b0b; -[SCAdTrackOperaAdaptorSnapshot isInstantPageAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b97afc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff2480);
}



/* Entry: 103b97b0c; end: 103b97b1b; -[SCAdTrackOperaAdaptorSnapshot isCollectionSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b97b0c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff2488);
}



/* Entry: 103b97b1c; end: 103b97d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b97b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2440);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2448);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2450);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2458) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2460) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2468) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2470) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ff2478) = param_11;
  *(undefined1 *)(unaff_x20 + _DAT_112ff2480) = (undefined1)param_12;
  *(undefined1 *)(unaff_x20 + _DAT_112ff2488) = param_12._1_1_;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b97d64; end: 103b97e5b; -[SCAdTrackOperaAdaptorSnapshot initWithAdIdentifier:adServeItemId:adId:snapIndex:adType:adProductType:preferredAttachmentType:collectionDefaultAttachmentIndex:isInstantPageAd:isCollectionSnap:] */

void FUN_103b97d64(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar2 = param_2;
  }
  if (param_5 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174();
  func_0x000103b97c40(param_3,uVar1,param_4,uVar2,param_5,param_2,param_6,param_7,param_8,param_9,
                      param_10,param_11);
  return;
}



/* Entry: 103b97e5c; end: 103b97ebb; -[SCAdTrackOperaAdaptorSnapshot init] */

void FUN_103b97e5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackServices.AdTrackOperaAdaptorSnapshot",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b97e88);
  (*pcVar1)();
}



/* Entry: 103b97ebc; end: 103b97f1f; -[SCAdTrackOperaAdaptorSnapshot .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b97ebc(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff2440 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff2448 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff2450 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff2478));
  return;
}



/* Entry: 103b97f20; end: 103b97f3f;  */

void FUN_103b97f20(void)

{
  func_0x000107c61168(&PTR_PTR_11293a488);
  return;
}



/* Entry: 103b97f40; end: 103b98047; -[_TtC19SCOperaSessionScope19SCOperaSessionScope storiesConfig] */

void FUN_103b97f40(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103b97f74();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b98048; end: 103b980d3; -[_TtC19SCOperaSessionScope19SCOperaSessionScope setStoriesConfig:] */

void FUN_103b98048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112ff24b8,auStack_48,0x20,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61188();
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b980d4; end: 103b980f3; -[AdOperaLayerFactoryService adOperaLayerFactoryProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b980d4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff24c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b980f4; end: 103b9813f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b980f4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff24c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b98140; end: 103b9819f; -[AdOperaLayerFactoryService init] */

void FUN_103b98140(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOperaLayerFactoryService.AdOperaLayerFactoryService",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b9816c);
  (*pcVar1)();
}



/* Entry: 103b981a0; end: 103b981bb; -[AdOperaLayerFactoryService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b981a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ff24c0));
  return;
}



/* Entry: 103b981bc; end: 103b98323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b981bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 uStack_81;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000107c614f0();
  lVar4 = *(long *)(param_4 + _DAT_11307abc8);
  if (*(long *)(lVar4 + 0x10) == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
LAB_103b982a4:
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    func_0x000107c61434(lVar4);
    uVar3 = 0;
    lVar1 = -0x2fffffffffffffd6;
    func_0x000100029284(0xd00000000000002a);
    if ((uVar3 & 1) == 0) {
      uStack_68 = 0;
      uStack_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
      func_0x000107c6142c(lVar4);
      goto LAB_103b982a4;
    }
    func_0x0001000bb420(*(long *)(lVar4 + 0x38) + lVar1 * 0x20,&uStack_70);
    func_0x000107c6142c(lVar4);
    if (lStack_58 == 0) goto LAB_103b982a4;
    puVar2 = &uStack_81;
    func_0x000107c6147c(puVar2,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    if ((int)puVar2 != 0) goto LAB_103b982b0;
  }
  uStack_81 = 0;
LAB_103b982b0:
  *(undefined1 *)(unaff_x20 + _DAT_112ff24f0) = uStack_81;
  puVar2 = &stack0xffffffffffffff80;
  func_0x000107c61154(puVar2,PTR_s_initWithIsRecyclable_ctaType_uni_1125e5730,param_1,param_2,
                      param_3,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  if (puVar2 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar2);
  }
  return puVar2;
}



/* Entry: 103b98324; end: 103b98387; -[SCAdPageabilityLayer initWithIsRecyclable:ctaType:unifiedActionBarBottomOffset:page:] */

void FUN_103b98324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  FUN_103b981bc(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 103b98388; end: 103b9850b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_103b98388(undefined8 param_1)

{
  byte bVar1;
  long *plVar2;
  undefined1 *puVar3;
  byte bVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_90 [8];
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar6 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar2 = &lStack_78;
    func_0x000107c6147c(plVar2,auStack_70,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x000100672b50(param_1,auStack_70);
      if (lStack_58 == 0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        func_0x0001006732c8(auStack_70,lStack_58);
        lVar6 = *(long *)(lStack_58 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
        puVar3 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar6 + 0x10))(puVar3);
        puVar5 = puVar3;
        func_0x000107c605b0(puVar3,lStack_58);
        (**(code **)(lVar6 + 8))(puVar3,lStack_58);
        func_0x000100183ab8(auStack_70);
      }
      puVar3 = &stack0xffffffffffffff78;
      func_0x000107c61154(puVar3,PTR_s_isEqual__1125fa0c8,puVar5);
      func_0x000107c615e8(puVar5);
      if ((int)puVar3 != 0) {
        bVar4 = *(byte *)(unaff_x20 + _DAT_112ff24f0);
        bVar1 = *(byte *)(lStack_78 + _DAT_112ff24f0);
        func_0x000107c61170(lStack_78);
        bVar4 = bVar4 ^ bVar1 ^ 1;
        goto LAB_103b984ec;
      }
      func_0x000107c61170(lStack_78);
    }
  }
  bVar4 = 0;
LAB_103b984ec:
  return bVar4 & 1;
}



/* Entry: 103b9850c; end: 103b9858b; -[SCAdPageabilityLayer isEqual:] */

uint FUN_103b9850c(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103b98388(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103b9858c; end: 103b985bf;  */

void FUN_103b9858c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b985c0; end: 103b985c3; -[SCAdPageabilityLayer .cxx_destruct] */

void FUN_103b985c0(void)

{
  return;
}



/* Entry: 103b985c4; end: 103b985e3;  */

void FUN_103b985c4(void)

{
  func_0x000107c61168(&PTR_PTR_11293a650);
  return;
}



/* Entry: 103b985e4; end: 103b985ef;  */

undefined * FUN_103b985e4(void)

{
  return &UNK_1106ddea8;
}



/* Entry: 103b985f0; end: 103b9861b; +[SCAdPlayableLayer viewModelKey] */

void FUN_103b985f0(void)

{
  func_0x000107c5fadc(0xd000000000000016,0x800000010f1a71c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b9861c; end: 103b98633;  */

undefined * FUN_103b9861c(void)

{
  return &UNK_1106ddeb8;
}



/* Entry: 103b98634; end: 103b9865f; +[SCAdPlayableLayer hiddenKey] */

void FUN_103b98634(void)

{
  func_0x000107c5fadc(0xd000000000000012,0x800000010f1a7200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b98660; end: 103b9866b;  */

undefined * FUN_103b98660(void)

{
  return &UNK_1106dded8;
}



/* Entry: 103b9866c; end: 103b98adb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b9866c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c614f0();
  lVar10 = _DAT_11307abc8;
  lVar9 = *(long *)(param_4 + _DAT_11307abc8);
  if (*(long *)(lVar9 + 0x10) == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_103b987b4:
    func_0x000107c61170(param_4);
  }
  else {
    func_0x000107c61434(lVar9);
    lVar2 = -0x2fffffffffffffea;
    uVar7 = 0;
    func_0x000100029284(0xd000000000000016);
    if ((uVar7 & 1) == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
      func_0x000107c6142c(lVar9);
      goto LAB_103b987b4;
    }
    func_0x0001000bb420(*(long *)(lVar9 + 0x38) + lVar2 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar9);
    if (lStack_68 == 0) goto LAB_103b987b4;
    uVar3 = 0;
    func_0x000103b98e0c(0,0x112f090f8,&PTR_PTR_1126ac1c8);
    puVar4 = &uStack_90;
    func_0x000107c6147c(puVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) == 0) {
LAB_103b98900:
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_1);
      goto LAB_103b987cc;
    }
    uVar3 = CONCAT71(uStack_8f,uStack_90);
    lVar9 = *(long *)(param_4 + lVar10);
    if (*(long *)(lVar9 + 0x10) == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c61434(lVar9);
      lVar2 = -0x2fffffffffffffe1;
      uVar7 = 0;
      func_0x000100029284(0xd00000000000001f);
      if ((uVar7 & 1) == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x0001000bb420(*(long *)(lVar9 + 0x38) + lVar2 * 0x20,&uStack_80);
      }
      func_0x000107c6142c(lVar9);
      if (lStack_68 != 0) {
        uVar5 = 0x112ff2540;
        func_0x0001000285a8(0x112ff2540,&UNK_10dc5da60);
        puVar4 = &uStack_90;
        func_0x000107c6147c(puVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar5,6);
        if (((ulong)puVar4 & 1) == 0) {
          func_0x000107c61170(uVar3);
          goto LAB_103b98900;
        }
        uVar5 = CONCAT71(uStack_8f,uStack_90);
        *(undefined8 *)(unaff_x20 + _DAT_112ff2520) = uVar3;
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2528);
        puVar1[1] = uStack_88;
        *puVar1 = uVar5;
        lVar9 = *(long *)(param_4 + lVar10);
        if (*(long *)(lVar9 + 0x10) == 0) {
          uStack_78 = 0;
          uStack_80 = 0;
          lStack_68 = 0;
          uStack_70 = 0;
          func_0x000107c61174(uVar3);
          func_0x000107c615f0(uVar5);
        }
        else {
          func_0x000107c61174(uVar3);
          func_0x000107c615f0(uVar5);
          func_0x000107c61434(lVar9);
          uVar7 = 0;
          lVar2 = -0x2fffffffffffffee;
          func_0x000100029284(0xd000000000000012);
          if ((uVar7 & 1) == 0) {
            uStack_78 = 0;
            uStack_80 = 0;
            lStack_68 = 0;
            uStack_70 = 0;
          }
          else {
            func_0x0001000bb420(*(long *)(lVar9 + 0x38) + lVar2 * 0x20,&uStack_80);
          }
          func_0x000107c6142c(lVar9);
        }
        if (lStack_68 == 0) {
          func_0x00010006e7f4(&uStack_80);
LAB_103b98988:
          uVar8 = 0;
        }
        else {
          puVar4 = &uStack_90;
          func_0x000107c6147c(puVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
          uVar8 = uStack_90;
          if ((int)puVar4 == 0) goto LAB_103b98988;
        }
        *(undefined1 *)(unaff_x20 + _DAT_112ff2530) = uVar8;
        lVar10 = *(long *)(param_4 + lVar10);
        if (*(long *)(lVar10 + 0x10) == 0) {
          uStack_78 = 0;
          uStack_80 = 0;
          lStack_68 = 0;
          uStack_70 = 0;
LAB_103b98a30:
          func_0x00010006e7f4(&uStack_80);
        }
        else {
          func_0x000107c61434(lVar10);
          lVar9 = -0x2fffffffffffffd9;
          uVar7 = 0;
          func_0x000100029284(0xd000000000000027);
          if ((uVar7 & 1) == 0) {
            uStack_78 = 0;
            uStack_80 = 0;
            lStack_68 = 0;
            uStack_70 = 0;
          }
          else {
            func_0x0001000bb420(*(long *)(lVar10 + 0x38) + lVar9 * 0x20,&uStack_80);
          }
          func_0x000107c6142c(lVar10);
          if (lStack_68 == 0) goto LAB_103b98a30;
          puVar4 = &uStack_90;
          func_0x000107c6147c(puVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
          if ((int)puVar4 != 0) goto LAB_103b98a3c;
        }
        uStack_90 = 0;
LAB_103b98a3c:
        *(undefined1 *)(unaff_x20 + _DAT_112ff2538) = uStack_90;
        func_0x000103b98e0c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar6 = 0;
        func_0x000107c6010c(0);
        puVar4 = &stack0xffffffffffffff60;
        func_0x000107c61154(puVar4,PTR_s_initWithIsRecyclable_ctaType_uni_1125e5730,uVar6,param_2,
                            param_3,param_4);
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        func_0x000107c61170(param_4);
        func_0x000107c615e8(uVar5);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(param_1);
        if (puVar4 == (undefined1 *)0x0) {
          return (undefined1 *)0x0;
        }
        func_0x000107c61170(puVar4);
        return puVar4;
      }
    }
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    param_1 = uVar3;
  }
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_80);
LAB_103b987cc:
  func_0x000107c61464();
  return (undefined1 *)0x0;
}



/* Entry: 103b98adc; end: 103b98b3f; -[SCAdPlayableLayer initWithIsRecyclable:ctaType:unifiedActionBarBottomOffset:page:] */

void FUN_103b98adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  FUN_103b9866c(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 103b98b40; end: 103b98d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_103b98b40(undefined8 param_1)

{
  byte bVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  long extraout_x8;
  long unaff_x20;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar8 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar2 = &lStack_78;
    func_0x000107c6147c(plVar2,auStack_70,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x000100672b50(param_1,auStack_70);
      if (lStack_58 == 0) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        func_0x0001006732c8(auStack_70,lStack_58);
        lVar8 = *(long *)(lStack_58 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
        puVar3 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar8 + 0x10))(puVar3);
        puVar7 = puVar3;
        func_0x000107c605b0(puVar3,lStack_58);
        (**(code **)(lVar8 + 8))(puVar3,lStack_58);
        func_0x000100183ab8(auStack_70);
      }
      puVar3 = &stack0xffffffffffffff78;
      func_0x000107c61154(puVar3,PTR_s_isEqual__1125fa0c8,puVar7);
      func_0x000107c615e8(puVar7);
      if ((int)puVar3 != 0) {
        func_0x000103b98e0c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        uVar6 = *(ulong *)(unaff_x20 + _DAT_112ff2520);
        uVar4 = *(undefined8 *)(lStack_78 + _DAT_112ff2520);
        func_0x000107c61174(uVar4);
        func_0x000107c60118(uVar6,uVar4);
        func_0x000107c61170(uVar4);
        if ((uVar6 & 1) != 0) {
          bVar5 = *(byte *)(unaff_x20 + _DAT_112ff2530);
          bVar1 = *(byte *)(lStack_78 + _DAT_112ff2530);
          func_0x000107c61170(lStack_78);
          bVar5 = bVar5 ^ bVar1 ^ 1;
          goto LAB_103b98cf8;
        }
      }
      func_0x000107c61170(lStack_78);
    }
  }
  bVar5 = 0;
LAB_103b98cf8:
  return bVar5 & 1;
}



/* Entry: 103b98d18; end: 103b98d97; -[SCAdPlayableLayer isEqual:] */

uint FUN_103b98d18(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103b98b40(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103b98d98; end: 103b98d9f; -[SCAdPlayableLayer layerContentType] */

undefined8 FUN_103b98d98(void)

{
  return 3;
}



/* Entry: 103b98da0; end: 103b98dd3;  */

void FUN_103b98da0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b98dd4; end: 103b98e4b; -[SCAdPlayableLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b98dd4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff2520));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ff2528));
  return;
}



/* Entry: 103b98e4c; end: 103b98e6b;  */

void FUN_103b98e4c(void)

{
  func_0x000107c61168(&PTR_PTR_11293a708);
  return;
}


