/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104995514; end: 104995543;  */

void FUN_104995514(void)

{
  return;
}



/* Entry: 104995544; end: 10499566b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104995544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lStack_50;
  long lStack_48;
  
  lVar2 = 0x11309c5e0;
  func_0x0001048db364();
  uVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)&lStack_50 - uVar5;
  lVar7 = lVar6 - uVar5;
  func_0x000100029394(param_1,lVar7);
  func_0x000100029394(param_3,lVar6);
  lVar3 = 0;
  FUN_1049952e0();
  lVar2 = lVar3;
  _objc_allocWithZone();
  func_0x000100029394(lVar7,lVar2 + _DAT_1130a2798);
  *(undefined8 *)(lVar2 + _DAT_1130a27a0) = param_2;
  func_0x000100029394(lVar6,lVar2 + _DAT_1130a27a8);
  *(undefined1 *)(lVar2 + _DAT_1130a27b0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar2;
  lStack_48 = lVar3;
  _swift_bridgeObjectRetain(param_2);
  plVar4 = &lStack_50;
  _objc_msgSendSuper2(plVar4,puVar1);
  func_0x0001000293e4(lVar6);
  func_0x0001000293e4(lVar7);
  return plVar4;
}



/* Entry: 10499566c; end: 104995697;  */

void FUN_10499566c(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1130a2838);
  return;
}



/* Entry: 104995698; end: 10499569f;  */

void FUN_104995698(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010499569c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x50))();
  return;
}



/* Entry: 1049956a0; end: 10499583f;  */

void FUN_1049956a0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(0x113815800,auStack_78,1,0);
  uVar4 = uRam0000000113815818;
  uVar3 = uRam0000000113815810;
  uVar2 = uRam0000000113815808;
  lVar1 = lRam0000000113815800;
  lVar5 = lRam0000000113815800;
  uVar6 = uRam0000000113815808;
  uVar7 = uRam0000000113815810;
  uVar8 = uRam0000000113815818;
  if (lRam0000000113815800 == 0) {
    _swift_beginAccess(0x113815820,auStack_90,0,0);
    uVar8 = uRam0000000113815838;
    uVar7 = uRam0000000113815830;
    uVar6 = uRam0000000113815828;
    lVar5 = lRam0000000113815820;
    if (lRam0000000113815820 == 0) {
      _swift_unknownObjectRelease(param_1);
      return;
    }
    _swift_unknownObjectRetain(lRam0000000113815820);
    _swift_unknownObjectRetain(uVar6);
    _swift_unknownObjectRetain(uVar7);
    _swift_unknownObjectRetain(uVar8);
  }
  FUN_10499bb60(lVar1,uVar2,uVar3,uVar4);
  _swift_unknownObjectRetain(uVar7);
  _swift_unknownObjectRetain(uVar6);
  _swift_unknownObjectRetain(lVar5);
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRelease(uVar8);
  uVar4 = uRam0000000113815818;
  uVar3 = uRam0000000113815810;
  uVar2 = uRam0000000113815808;
  lVar1 = lRam0000000113815800;
  lRam0000000113815800 = lVar5;
  uRam0000000113815808 = uVar6;
  uRam0000000113815810 = uVar7;
  uRam0000000113815818 = param_1;
  _swift_unknownObjectRetain(uVar7);
  _swift_unknownObjectRetain(uVar6);
  _swift_unknownObjectRetain(lVar5);
  _swift_unknownObjectRetain(param_1);
  func_0x00010499bbac(lVar1,uVar2,uVar3,uVar4);
  _swift_unknownObjectRelease_n(param_1,2);
  _swift_unknownObjectRelease_n(uVar7,2);
  _swift_unknownObjectRelease_n(uVar6,2);
  _swift_unknownObjectRelease_n(lVar5,2);
  return;
}



/* Entry: 104995840; end: 104995853;  */

void FUN_104995840(void)

{
  FUN_10499bd88();
  return;
}



/* Entry: 104995854; end: 104995877;  */

void FUN_104995854(undefined8 param_1)

{
  FUN_10499bbf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 104995878; end: 1049959df;  */

undefined1  [16] FUN_104995878(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  lVar5 = 0x68;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,0x1265);
  }
  *param_1 = lVar5;
  _swift_beginAccess(0x113815800,lVar5,1,0);
  puVar4 = puRam0000000113815818;
  uVar3 = uRam0000000113815810;
  uVar2 = uRam0000000113815808;
  lVar1 = lRam0000000113815800;
  puVar6 = puRam0000000113815818;
  uVar7 = uRam0000000113815810;
  lVar8 = lRam0000000113815800;
  uVar9 = uRam0000000113815808;
  if (lRam0000000113815800 == 0) {
    _swift_beginAccess(0x113815820,lVar5 + 0x18,0,0);
    puVar6 = puRam0000000113815838;
    uVar7 = uRam0000000113815830;
    uVar9 = uRam0000000113815828;
    lVar8 = lRam0000000113815820;
    if (lRam0000000113815820 == 0) {
      puVar6 = PTR_PTR_1126adff8;
      _swift_getInitializedObjCClass();
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10499598c;
    }
    _swift_unknownObjectRetain(lRam0000000113815820);
    _swift_unknownObjectRetain(uVar9);
    _swift_unknownObjectRetain(uVar7);
    _swift_unknownObjectRetain(puVar6);
  }
  FUN_10499bb60(lVar1,uVar2,uVar3,puVar4);
  _swift_unknownObjectRelease(lVar8);
  _swift_unknownObjectRelease(uVar9);
  _swift_unknownObjectRelease(uVar7);
LAB_10499598c:
  *(undefined **)(lVar5 + 0x60) = puVar6;
  auVar10._8_8_ = lVar5 + 0x60;
  auVar10._0_8_ = 0x10499d1d0;
  return auVar10;
}



/* Entry: 1049959e0; end: 1049959f3; +[FBSDKAppLinkNavigation defaultResolver] */

void FUN_1049959e0(void)

{
  FUN_10499bd88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049959f4; end: 104995a23; +[FBSDKAppLinkNavigation setDefaultResolver:] */

void FUN_1049959f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  FUN_10499bbf8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 104995a24; end: 104995b8b;  */

undefined1  [16] FUN_104995a24(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  lVar5 = 0x68;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x68,0xb2f5);
  }
  *param_1 = lVar5;
  _swift_beginAccess(0x113815800,lVar5,1,0);
  puVar4 = puRam0000000113815818;
  uVar3 = uRam0000000113815810;
  uVar2 = uRam0000000113815808;
  lVar1 = lRam0000000113815800;
  puVar6 = puRam0000000113815818;
  uVar7 = uRam0000000113815810;
  lVar8 = lRam0000000113815800;
  uVar9 = uRam0000000113815808;
  if (lRam0000000113815800 == 0) {
    _swift_beginAccess(0x113815820,lVar5 + 0x18,0,0);
    puVar6 = puRam0000000113815838;
    uVar7 = uRam0000000113815830;
    uVar9 = uRam0000000113815828;
    lVar8 = lRam0000000113815820;
    if (lRam0000000113815820 == 0) {
      puVar6 = PTR_PTR_1126adff8;
      _swift_getInitializedObjCClass();
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104995b38;
    }
    _swift_unknownObjectRetain(lRam0000000113815820);
    _swift_unknownObjectRetain(uVar9);
    _swift_unknownObjectRetain(uVar7);
    _swift_unknownObjectRetain(puVar6);
  }
  FUN_10499bb60(lVar1,uVar2,uVar3,puVar4);
  _swift_unknownObjectRelease(lVar8);
  _swift_unknownObjectRelease(uVar9);
  _swift_unknownObjectRelease(uVar7);
LAB_104995b38:
  *(undefined **)(lVar5 + 0x60) = puVar6;
  auVar10._8_8_ = lVar5 + 0x60;
  auVar10._0_8_ = FUN_104995b8c;
  return auVar10;
}



/* Entry: 104995b8c; end: 104995e4f;  */

void FUN_104995b8c(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_70;
  
  uVar4 = uRam0000000113815818;
  uVar3 = uRam0000000113815810;
  uVar2 = uRam0000000113815808;
  lVar1 = lRam0000000113815800;
  lVar8 = *param_1;
  uVar5 = *(undefined8 *)(lVar8 + 0x60);
  if ((param_2 & 1) == 0) {
    uVar6 = uRam0000000113815810;
    lVar7 = lRam0000000113815800;
    uVar9 = uRam0000000113815808;
    uVar10 = uRam0000000113815818;
    if (lRam0000000113815800 == 0) {
      _swift_beginAccess(0x113815820,lVar8 + 0x48,0,0);
      uVar10 = uRam0000000113815838;
      uVar6 = uRam0000000113815830;
      uVar9 = uRam0000000113815828;
      lVar7 = lRam0000000113815820;
      if (lRam0000000113815820 == 0) goto LAB_104995e24;
      _swift_unknownObjectRetain(lRam0000000113815820);
      _swift_unknownObjectRetain(uVar9);
      _swift_unknownObjectRetain(uVar6);
      _swift_unknownObjectRetain(uVar10);
    }
    FUN_10499bb60(lVar1,uVar2,uVar3,uVar4);
    _swift_unknownObjectRetain(uVar6);
    _swift_unknownObjectRetain(uVar9);
    _swift_unknownObjectRetain(lVar7);
    _swift_unknownObjectRetain(uVar5);
    _swift_unknownObjectRelease(uVar10);
    uVar4 = uRam0000000113815818;
    uVar3 = uRam0000000113815810;
    uVar2 = uRam0000000113815808;
    lVar1 = lRam0000000113815800;
    lRam0000000113815800 = lVar7;
    uRam0000000113815808 = uVar9;
    uRam0000000113815810 = uVar6;
    uRam0000000113815818 = uVar5;
    _swift_unknownObjectRetain(uVar6);
    _swift_unknownObjectRetain(uVar9);
    _swift_unknownObjectRetain(lVar7);
    _swift_unknownObjectRetain(uVar5);
    func_0x00010499bbac(lVar1,uVar2,uVar3,uVar4);
    _swift_unknownObjectRelease_n(lVar7,2);
    _swift_unknownObjectRelease_n(uVar9,2);
    _swift_unknownObjectRelease_n(uVar6,2);
    _swift_unknownObjectRelease(uVar5);
    goto LAB_104995e24;
  }
  if (lRam0000000113815800 == 0) {
    _swift_beginAccess(0x113815820,lVar8 + 0x30,0,0);
    uVar10 = uRam0000000113815838;
    uVar6 = uRam0000000113815830;
    uVar9 = uRam0000000113815828;
    lVar7 = lRam0000000113815820;
    if (lRam0000000113815820 != 0) {
      uStack_70 = uRam0000000113815838;
      _swift_unknownObjectRetain(lRam0000000113815820);
      _swift_unknownObjectRetain(uVar9);
      _swift_unknownObjectRetain(uVar6);
      _swift_unknownObjectRetain(uVar10);
      goto LAB_104995c5c;
    }
  }
  else {
    uStack_70 = uRam0000000113815818;
    uVar6 = uRam0000000113815810;
    lVar7 = lRam0000000113815800;
    uVar9 = uRam0000000113815808;
LAB_104995c5c:
    _swift_unknownObjectRetain_n(uVar5,2);
    FUN_10499bb60(lVar1,uVar2,uVar3,uVar4);
    _swift_unknownObjectRetain(uVar6);
    _swift_unknownObjectRetain(uVar9);
    _swift_unknownObjectRetain(lVar7);
    _swift_unknownObjectRelease(uStack_70);
    uVar4 = uRam0000000113815818;
    uVar3 = uRam0000000113815810;
    uVar2 = uRam0000000113815808;
    lVar1 = lRam0000000113815800;
    lRam0000000113815800 = lVar7;
    uRam0000000113815808 = uVar9;
    uRam0000000113815810 = uVar6;
    uRam0000000113815818 = uVar5;
    _swift_unknownObjectRetain(uVar5);
    _swift_unknownObjectRetain(uVar6);
    _swift_unknownObjectRetain(uVar9);
    _swift_unknownObjectRetain(lVar7);
    func_0x00010499bbac(lVar1,uVar2,uVar3,uVar4);
    _swift_unknownObjectRelease_n(lVar7,2);
    _swift_unknownObjectRelease_n(uVar9,2);
    _swift_unknownObjectRelease_n(uVar6,2);
    _swift_unknownObjectRelease_n(uVar5,2);
  }
  uVar5 = *(undefined8 *)(lVar8 + 0x60);
LAB_104995e24:
  _swift_unknownObjectRelease(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar8);
  return;
}



/* Entry: 104995e50; end: 104995e5b; -[FBSDKAppLinkNavigation extras] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104995e50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a2890);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104995e5c; end: 104995e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104995e5c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + _DAT_1130a2890));
  return;
}



/* Entry: 104995e6c; end: 104995e77; -[FBSDKAppLinkNavigation appLinkData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104995e6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a2898);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104995e78; end: 104995ecf;  */

void FUN_104995e78(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104995ed0; end: 104995edf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104995ed0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + _DAT_1130a2898));
  return;
}



/* Entry: 104995ee0; end: 104995eef; -[FBSDKAppLinkNavigation appLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104995ee0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130a28a0));
  return;
}



/* Entry: 104995ef0; end: 104995f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104995ef0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130a28a0);
  _objc_retain(uVar1);
  return uVar1;
}



/* Entry: 104995f20; end: 104995f9f; -[FBSDKAppLinkNavigation navigationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104995f20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + _DAT_1130a28a0) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + _DAT_1130a28a0) + _DAT_1130a27a0);
    _swift_bridgeObjectRetain(uVar2);
  }
  _objc_retain(param_1);
  uVar1 = uVar2;
  FUN_104996000(uVar2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar2);
  return uVar1;
}



/* Entry: 104995fa0; end: 104995fff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104995fa0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_1130a28a0) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_1130a28a0) + _DAT_1130a27a0);
    _swift_bridgeObjectRetain(uVar2);
  }
  uVar1 = uVar2;
  FUN_104996000(uVar2);
  _swift_bridgeObjectRelease(uVar2);
  return uVar1;
}



/* Entry: 104996000; end: 1049965b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104996000(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  code *pcVar16;
  code *pcVar17;
  long lVar18;
  code *pcVar19;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong auStack_70 [2];
  
  _swift_getObjectType();
  lVar6 = 0x11309c5e0;
  func_0x0001048db364();
  uVar5 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar4 = (long)&lStack_100 - uVar5;
  lVar18 = lVar4 - uVar5;
  lVar10 = (lVar18 - uVar5) - uVar5;
  lVar6 = lVar10 - uVar5;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar1 + -8);
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lStack_f0 = lVar6 - uVar8;
  lStack_100 = lStack_f0 - uVar8;
  lVar11 = lStack_100 - uVar8;
  lVar9 = lVar11 - uVar8;
  if (param_1 != 0) {
    puVar2 = &UNK_10dd49628;
    lStack_f8 = lVar18 - uVar5;
    _swift_getKeyPath(&UNK_10dd49628);
    FUN_1049b1930(auStack_70);
    _swift_release(puVar2);
    if (auStack_70[0] != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      lStack_d8 = 0;
      lStack_e8 = lVar18;
      lStack_e0 = lVar4;
      if (param_1 >> 0x3e == 0) {
        uVar8 = *(ulong *)(uVar5 + 0x10);
      }
      else {
        uVar8 = param_1;
        if (-1 < (long)param_1) {
          uVar8 = uVar5;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar8 != 0) {
        uVar13 = 0;
        do {
          if ((param_1 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar5 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x1049963d8);
              (*pcVar14)();
            }
            uVar12 = *(ulong *)(param_1 + uVar13 * 8 + 0x20);
            _swift_unknownObjectRetain(uVar12);
          }
          else {
            uVar12 = uVar13;
            FUN_104999990(uVar13,param_1);
          }
          if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x104996280);
            (*pcVar14)();
          }
          uVar15 = uVar13 + 1;
          uVar3 = uVar12;
          _objc_msgSend(uVar12,PTR_s_URL_11254e480);
          _objc_retainAutoreleasedReturnValue();
          if (uVar3 != 0) {
            __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar11);
            _objc_release(uVar3);
            pcVar14 = *(code **)(lVar7 + 0x20);
            lVar4 = lVar9;
            (*pcVar14)(lVar9,lVar11,lVar1);
            __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
            uVar3 = auStack_70[0];
            _objc_msgSend(auStack_70[0],PTR_s_canOpenURL__1125a8d68,lVar4);
            _objc_release(lVar4);
            pcVar19 = *(code **)(lVar7 + 8);
            (*pcVar19)(lVar9,lVar1);
            if ((uVar3 & 1) != 0) {
              if (uVar12 != 0) {
                uVar5 = uVar12;
                _objc_msgSend(uVar12,PTR_s_URL_11254e480);
                _objc_retainAutoreleasedReturnValue();
                if (uVar5 != 0) {
                  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar10)
                  ;
                  _objc_release(uVar5);
                }
                pcVar16 = *(code **)(lVar7 + 0x38);
                (*pcVar16)(lVar10,uVar5 == 0,1,lVar1);
                func_0x0001001021cc(lVar10,lVar6);
                pcVar17 = *(code **)(lVar7 + 0x30);
                lVar10 = lVar6;
                (*pcVar17)(lVar6,1,lVar1);
                lVar9 = lStack_100;
                lVar11 = lStack_d8;
                if ((int)lVar10 != 1) {
                  (*pcVar14)(lStack_100,lVar6,lVar1);
                  lVar10 = lStack_d8;
                  lVar6 = lStack_f8;
                  FUN_104997478(lStack_f8,lVar9);
                  if (lVar10 == 0) {
                    (*pcVar19)(lVar9,lVar1);
                    lVar9 = lVar6;
                    (*pcVar17)(lVar6,1,lVar1);
                    if ((int)lVar9 != 1) {
                      _swift_unknownObjectRelease(uVar12);
                      _swift_unknownObjectRelease(auStack_70[0]);
                      func_0x00010499d160(lVar6,0x11309c5e0);
                      return 2;
                    }
                    lVar11 = 0;
                  }
                  else {
                    _swift_errorRelease(lVar10);
                    (*pcVar19)(lVar9,lVar1);
                    (*pcVar16)(lVar6,1,1,lVar1);
                    lVar11 = 0;
                  }
                }
                goto LAB_10499641c;
              }
              break;
            }
          }
          _swift_unknownObjectRelease(uVar12);
          uVar13 = uVar13 + 1;
        } while (uVar15 != uVar8);
      }
      pcVar16 = *(code **)(lVar7 + 0x38);
      (*pcVar16)(lVar6,1,1,lVar1);
      uVar12 = 0;
      lVar11 = lStack_d8;
LAB_10499641c:
      func_0x00010499d160(lVar6,0x11309c5e0);
      lVar9 = lStack_e0;
      lVar6 = lStack_e8;
      if (*(long *)(unaff_x20 + _DAT_1130a28a0) == 0) {
        _swift_unknownObjectRelease(auStack_70[0]);
        _swift_unknownObjectRelease(uVar12);
        (*pcVar16)(lVar6,1,1,lVar1);
        lVar9 = lVar6;
      }
      else {
        func_0x00010499d11c(*(long *)(unaff_x20 + _DAT_1130a28a0) + _DAT_1130a27a8,lStack_e8,
                            0x11309c5e0);
        pcVar14 = *(code **)(lVar7 + 0x30);
        lVar4 = lVar6;
        (*pcVar14)(lVar6,1,lVar1);
        lVar10 = lStack_f0;
        if ((int)lVar4 == 1) {
          _swift_unknownObjectRelease(uVar12);
          _swift_unknownObjectRelease(auStack_70[0]);
          lVar9 = lVar6;
        }
        else {
          (**(code **)(lVar7 + 0x20))(lStack_f0,lVar6,lVar1);
          FUN_104997478(lVar9,lVar10);
          if (lVar11 == 0) {
            (**(code **)(lVar7 + 8))(lVar10,lVar1);
            _swift_unknownObjectRelease(uVar12);
            _swift_unknownObjectRelease(auStack_70[0]);
            lVar6 = lVar9;
            (*pcVar14)(lVar9,1,lVar1);
            if ((int)lVar6 != 1) {
              func_0x00010499d160(lVar9,0x11309c5e0);
              return 1;
            }
          }
          else {
            _swift_errorRelease(lVar11);
            _swift_unknownObjectRelease(uVar12);
            _swift_unknownObjectRelease(auStack_70[0]);
            (**(code **)(lVar7 + 8))(lVar10,lVar1);
            (*pcVar16)(lVar9,1,1,lVar1);
          }
        }
      }
      func_0x00010499d160(lVar9,0x11309c5e0);
    }
  }
  return 0;
}



/* Entry: 1049965b8; end: 10499669f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049965b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130a28a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130a2890) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130a2898) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1049966a0; end: 104996777; -[FBSDKAppLinkNavigation initWithAppLink:extras:appLinkData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049966a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  _swift_getObjectType();
  puVar3 = PTR___sypN_11034f1a8;
  puVar2 = PTR___sSSSHsWP_11034da90;
  puVar1 = PTR___sSSN_11034da80;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_5,puVar1,puVar3 + 8,puVar2);
  *(undefined8 *)(param_1 + _DAT_1130a28a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130a2890) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130a2898) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 104996778; end: 10499696b;  */

undefined8
FUN_104996778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  _objc_retain(param_1);
  puVar3 = PTR___sypN_11034f1a8;
  puVar2 = PTR___sSSSHsWP_11034da90;
  puVar1 = PTR___sSSN_11034da80;
  uVar4 = param_2;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(param_2);
  uVar5 = param_3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(param_3,puVar1,puVar3 + 8,puVar2);
  _swift_bridgeObjectRelease(param_3);
  _objc_msgSend(unaff_x20,PTR_s_initWithAppLink_extras_appLinkDa_112525278,param_1,uVar4,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(param_1);
  _swift_unknownObjectRelease(param_4);
  return unaff_x20;
}



/* Entry: 10499696c; end: 104996a9f; -[FBSDKAppLinkNavigation initWithAppLink:extras:appLinkData:settings:] */

undefined8
FUN_10499696c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR___sypN_11034f1a8;
  puVar2 = PTR___sSSSHsWP_11034da90;
  puVar1 = PTR___sSSN_11034da80;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_5,puVar1,puVar3 + 8,puVar2);
  _objc_retain(param_3);
  _objc_retain();
  _swift_unknownObjectRetain(param_6);
  uVar4 = param_4;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(param_4,puVar1,puVar3 + 8,puVar2);
  _swift_bridgeObjectRelease(param_4);
  uVar5 = param_5;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(param_5,puVar1,puVar3 + 8,puVar2);
  _swift_bridgeObjectRelease(param_5);
  _objc_msgSend(param_1,PTR_s_initWithAppLink_extras_appLinkDa_112525278,param_3,uVar4,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_6);
  return param_1;
}



/* Entry: 104996aa0; end: 104996b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104996aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130a28a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130a2890) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130a2898) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  return;
}



/* Entry: 104996b30; end: 104996c0f; +[FBSDKAppLinkNavigation navigationWithAppLink:extras:appLinkData:settings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104996b30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  _swift_getObjCClassMetadata();
  puVar3 = PTR___sypN_11034f1a8;
  puVar2 = PTR___sSSSHsWP_11034da90;
  puVar1 = PTR___sSSN_11034da80;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_5,puVar1,puVar3 + 8,puVar2);
  lVar4 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_1130a28a0) = param_3;
  *(undefined8 *)(lVar4 + _DAT_1130a2890) = param_4;
  *(undefined8 *)(lVar4 + _DAT_1130a2898) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_60,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104996c10; end: 104996c13;  */

long FUN_104996c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_e8 [96];
  undefined1 auStack_88 [56];
  
  lVar1 = 0x1130a2968;
  func_0x0001048db364();
  puVar6 = auStack_88;
  _swift_initStackObject();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  ppuVar2 = &PTR____CFConstantStringClassReference_110da2358;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar1 + 0x20) = ppuVar2;
  *(undefined1 **)(lVar1 + 0x28) = puVar6;
  lVar3 = 0x1130a2970;
  func_0x0001048db364();
  puVar6 = auStack_e8;
  _swift_initStackObject();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  ppuVar2 = &PTR____CFConstantStringClassReference_110fda038;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(lVar3 + 0x20) = ppuVar2;
  *(undefined1 **)(lVar3 + 0x28) = puVar6;
  *(undefined8 *)(lVar3 + 0x30) = param_1;
  *(undefined8 *)(lVar3 + 0x38) = param_2;
  ppuVar2 = &PTR____CFConstantStringClassReference_110ddd938;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined ***)(lVar3 + 0x40) = ppuVar2;
  *(undefined1 **)(lVar3 + 0x48) = puVar6;
  *(undefined8 *)(lVar3 + 0x50) = param_3;
  *(undefined8 *)(lVar3 + 0x58) = param_4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  lVar4 = lVar3;
  func_0x0001001830b8();
  _swift_setDeallocating(lVar3);
  uVar5 = 0x1130a2978;
  func_0x0001048db364(0x1130a2978);
  _swift_arrayDestroy((undefined8 *)(lVar3 + 0x20),2,uVar5);
  *(long *)(lVar1 + 0x30) = lVar4;
  lVar3 = lVar1;
  FUN_10499c6d8(lVar1,0x1130a2988);
  _swift_setDeallocating(lVar1);
  func_0x00010499d160((undefined8 *)(lVar1 + 0x20),0x1130a2980);
  return lVar3;
}



/* Entry: 104996c14; end: 104996d0f; +[FBSDKAppLinkNavigation callbackAppLinkDataForAppWithName:url:] */

void FUN_104996c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  func_0x00010499bec8(param_3,param_2,param_4,uVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = 0x11309c408;
  func_0x0001048db364(0x11309c408);
  uVar2 = param_3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_3,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104996d10; end: 1049973ff;  */

/* WARNING: Removing unreachable block (ram,0x000104997260) */
/* WARNING: Removing unreachable block (ram,0x000104996fe0) */
/* WARNING: Removing unreachable block (ram,0x000104996e14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104996d10(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x20;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  code *pcStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lStack_f0 = (long)&pcStack_130 - uVar6;
  lStack_e8 = lStack_f0 - uVar6;
  lVar17 = lStack_e8 - uVar6;
  lVar19 = (lVar17 - uVar6) - uVar6;
  lVar9 = 0x11309c5e0;
  lStack_e0 = lVar3;
  func_0x0001048db364();
  uVar7 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar18 = (lVar19 - uVar7) - uVar7;
  lVar14 = lVar18 - uVar7;
  lVar3 = lVar14 - uVar7;
  lVar9 = lVar3 - uVar7;
  FUN_1049b1a14(&uStack_88,lVar2,&PTR_DAT_1130a28a8);
  lStack_120 = lVar19 - uVar7;
  lStack_118 = lVar18;
  lStack_100 = lVar14;
  lStack_c8 = lVar3;
  lStack_b8 = lVar17 - uVar6;
  _swift_unknownObjectRelease(uStack_88);
  _swift_unknownObjectRelease(uStack_78);
  _swift_unknownObjectRelease(uStack_70);
  lVar2 = lStack_e0;
  pcVar12 = *(code **)(lVar5 + 0x38);
  (*pcVar12)(lVar9,1,1);
  lVar3 = *(long *)(unaff_x20 + _DAT_1130a28a0);
  if (lVar3 == 0) {
    func_0x00010499d160(lVar9,0x11309c5e0);
    _swift_unknownObjectRelease(uStack_80);
    uVar11 = 0;
    uVar20 = 0;
  }
  else {
    uStack_f8 = uStack_80;
    uStack_c0 = *(ulong *)(lVar3 + _DAT_1130a27a0);
    lStack_108 = lVar17;
    lStack_a8 = lVar19;
    if (uStack_c0 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uStack_c0 & 0xfffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uStack_c0 & 0xffffffffffffff8;
      if ((long)uStack_c0 < 0) {
        uVar6 = uStack_c0;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    uVar7 = uStack_c0;
    lVar14 = lStack_100;
    pcStack_130 = pcVar12;
    lStack_110 = lVar3;
    uStack_d0 = uVar6;
    if (uVar6 == 0) {
      _objc_retain(lVar3);
      uVar11 = 0;
      uVar20 = 0;
    }
    else {
      uVar8 = uStack_c0 & 0xc000000000000001;
      uStack_d8 = uStack_c0 & 0xffffffffffffff8;
      lStack_128 = lVar9;
      _objc_retain(lVar3);
      _swift_bridgeObjectRetain(uVar7);
      uVar6 = 0;
      uStack_b0 = 0;
      lVar9 = lStack_b8;
      uVar15 = uStack_d0;
      do {
        if (uVar8 == 0) {
          if (*(ulong *)(uStack_d8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1049973e4);
            (*pcVar12)();
          }
          uVar16 = *(ulong *)(uVar7 + uVar6 * 8 + 0x20);
          _swift_unknownObjectRetain(uVar16);
        }
        else {
          uVar16 = uVar6;
          FUN_104999990(uVar6,uVar7);
        }
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1049973e0);
          (*pcVar12)();
        }
        uVar10 = uVar6 + 1;
        uVar4 = uVar16;
        _objc_msgSend(uVar16,PTR_s_URL_11254e480);
        _objc_retainAutoreleasedReturnValue();
        if (uVar4 == 0) {
          _swift_unknownObjectRelease(uVar16);
        }
        else {
          __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar9);
          _objc_release(uVar4);
          lVar3 = lStack_a8;
          lVar14 = lStack_c8;
          pcVar12 = *(code **)(lVar5 + 0x20);
          (*pcVar12)(lStack_a8,lVar9,lVar2);
          FUN_104997478(lVar14,lVar3);
          lVar9 = lVar14;
          (**(code **)(lVar5 + 0x30))(lVar14,1,lVar2);
          lVar3 = lStack_108;
          if ((int)lVar9 == 1) {
            (**(code **)(lVar5 + 8))(lStack_a8,lVar2);
            _swift_unknownObjectRelease(uVar16);
            func_0x00010499d160(lVar14,0x11309c5e0);
            lVar9 = lStack_b8;
            uVar7 = uStack_c0;
            uVar15 = uStack_d0;
          }
          else {
            lVar9 = lStack_108;
            (*pcVar12)(lStack_108,lVar14,lVar2);
            __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
            uVar20 = uStack_f8;
            _objc_msgSend(uStack_f8,PTR_s_openURL__1126180f0,lVar9);
            lStack_e0 = CONCAT44(lStack_e0._4_4_,(int)uVar20);
            _swift_unknownObjectRelease(uVar16);
            _objc_release(lVar9);
            pcVar13 = *(code **)(lVar5 + 8);
            (*pcVar13)(lStack_a8,lVar2);
            lVar9 = lStack_128;
            if ((int)lStack_e0 != 0) {
              func_0x00010499d160(lStack_128,0x11309c5e0);
              _swift_bridgeObjectRelease(uStack_c0);
              (*pcVar12)(lVar9,lVar3,lVar2);
              (*pcStack_130)(lVar9,0,1,lVar2);
              uVar11 = 2;
              lVar14 = lStack_100;
              uVar20 = uStack_b0;
              goto LAB_104997128;
            }
            (*pcVar13)(lVar3,lVar2);
            lVar9 = lStack_b8;
            uVar7 = uStack_c0;
            uVar15 = uStack_d0;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar10 != uVar15);
      _swift_bridgeObjectRelease(uVar7);
      uVar11 = 0;
      lVar9 = lStack_128;
      lVar14 = lStack_100;
      uVar20 = uStack_b0;
    }
LAB_104997128:
    FUN_10499d11c(lVar9,lVar14,0x11309c5e0);
    pcVar12 = *(code **)(lVar5 + 0x30);
    lVar17 = lVar14;
    (*pcVar12)(lVar14,1,lVar2);
    func_0x00010499d160(lVar14,0x11309c5e0);
    lVar14 = lStack_e8;
    lVar3 = lStack_118;
    if ((int)lVar17 == 1) {
      FUN_10499d11c(lStack_110 + _DAT_1130a27a8,lStack_118,0x11309c5e0);
      lVar17 = lVar3;
      (*pcVar12)(lVar3,1,lVar2);
      if ((int)lVar17 == 1) {
        func_0x00010499d160(lVar3,0x11309c5e0);
      }
      else {
        pcVar13 = *(code **)(lVar5 + 0x20);
        uStack_b0 = uVar20;
        (*pcVar13)(lVar14,lVar3,lVar2);
        lVar3 = lStack_120;
        FUN_104997478(lStack_120,lVar14);
        lVar18 = lVar3;
        (*pcVar12)(lVar3,1,lVar2);
        lVar17 = lStack_f0;
        if ((int)lVar18 == 1) {
          (**(code **)(lVar5 + 8))(lVar14,lVar2);
          func_0x00010499d160(lVar3,0x11309c5e0);
          uVar20 = uStack_b0;
        }
        else {
          lVar18 = lStack_f0;
          (*pcVar13)(lStack_f0,lVar3,lVar2);
          __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
          uVar20 = uStack_f8;
          _objc_msgSend(uStack_f8,PTR_s_openURL__1126180f0,lVar18);
          _objc_release(lVar18);
          pcVar12 = *(code **)(lVar5 + 8);
          (*pcVar12)(lVar14,lVar2);
          if ((int)uVar20 == 0) {
            (*pcVar12)(lVar17,lVar2);
            uVar20 = uStack_b0;
          }
          else {
            func_0x00010499d160(lVar9,0x11309c5e0);
            (*pcVar13)(lVar9,lVar17,lVar2);
            uVar11 = 1;
            (*pcStack_130)(lVar9,0,1,lVar2);
            uVar20 = uStack_b0;
          }
        }
      }
    }
    uVar1 = uStack_f8;
    FUN_104997c70(lVar9,uVar20,uVar11);
    _objc_release(lStack_110);
    _swift_unknownObjectRelease(uVar1);
    func_0x00010499d160(lVar9,0x11309c5e0);
  }
  auVar21._8_8_ = uVar20;
  auVar21._0_8_ = uVar11;
  return auVar21;
}



/* Entry: 104997400; end: 104997477; -[FBSDKAppLinkNavigation navigate:] */

undefined8 FUN_104997400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  func_0x000104996cb4(param_3);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 104997478; end: 104997c6f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104997478(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined **unaff_x20;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **unaff_x21;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  undefined auStack_200 [8];
  undefined *apuStack_1f8 [15];
  undefined **appuStack_180 [21];
  undefined1 auStack_b0 [32];
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = unaff_x20;
  _swift_getObjectType();
  ppuVar1 = (undefined **)0x0;
  __s10Foundation12CharacterSetVMa();
  ppuVar20 = (undefined **)ppuVar1[-1];
  ppuVar22 = (undefined **)
             ((long)appuStack_180 + (0x90 - ((ulong)(ppuVar20[8] + 0xf) & 0xfffffffffffffff0)));
  lVar2 = 0;
  __sSS10FoundationE8EncodingVMa();
  ppuVar23 = (undefined **)
             ((long)ppuVar22 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
             );
  lVar2 = 0x11309c5e0;
  func_0x0001048db364();
  ppuVar17 = (undefined **)
             ((long)ppuVar23 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
             );
  ppuVar12 = &PTR_DAT_1130a28a8;
  ppuVar3 = ppuVar13;
  FUN_1049b1a14(&ppuStack_90,ppuVar13);
  ppuVar6 = ppuStack_90;
  ppuVar25 = unaff_x20;
  ppuVar14 = unaff_x21;
  ppuVar11 = ppuVar17;
  ppuVar4 = ppuVar23;
  if (unaff_x21 == (undefined **)0x0) {
    appuStack_180[0x12] = ppuVar20;
    appuStack_180[0x13] = ppuVar1;
    appuStack_180[0x14] = param_1;
    _swift_unknownObjectRelease(ppuStack_88);
    _swift_unknownObjectRelease(uStack_80);
    _swift_unknownObjectRelease(puStack_78);
    ppuVar25 = *(undefined ***)((long)unaff_x20 + _DAT_1130a2898);
    ppuVar13 = &PTR____CFConstantStringClassReference_110f0bbd8;
    ppuVar11 = ppuVar13;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
              (&PTR____CFConstantStringClassReference_110f0bbd8);
    if (ppuVar25[2] == (undefined *)0x0) {
      ppuStack_88 = (undefined **)0x0;
      ppuStack_90 = (undefined **)0x0;
      puStack_78 = (undefined *)0x0;
      uStack_80 = 0;
      _swift_bridgeObjectRetain(ppuVar25);
      _swift_bridgeObjectRelease(ppuVar12);
    }
    else {
      _swift_bridgeObjectRetain_n(ppuVar25,2);
      ppuVar3 = ppuVar12;
      func_0x000100029284(ppuVar11);
      if (((ulong)ppuVar3 & 1) == 0) {
        _swift_bridgeObjectRelease(ppuVar25);
        ppuStack_88 = (undefined **)0x0;
        ppuStack_90 = (undefined **)0x0;
        puStack_78 = (undefined *)0x0;
        uStack_80 = 0;
      }
      else {
        func_0x0001000bb420(ppuVar25[7] + (long)ppuVar11 * 0x20,&ppuStack_90);
        _swift_bridgeObjectRelease(ppuVar12);
        ppuVar12 = ppuVar25;
      }
      _swift_bridgeObjectRelease(ppuVar12);
    }
    puVar16 = puStack_78;
    ppuVar12 = (undefined **)0x11309c428;
    func_0x00010499d160(&ppuStack_90);
    ppuVar11 = ppuVar12;
    if (puVar16 == (undefined *)0x0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      ppuStack_90 = (undefined **)0x204b44534246;
      ppuStack_88 = (undefined **)0xe600000000000000;
      ppuVar11 = ppuVar6;
      puVar16 = PTR_s_sdkVersion_112632650;
      _objc_msgSend(ppuVar6,PTR_s_sdkVersion_112632650);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar11;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(ppuVar11);
      __sSS6appendyySSF(ppuVar3,puVar16);
      _swift_bridgeObjectRelease(puVar16);
      puStack_78 = PTR___sSSN_11034da80;
      func_0x000100102924(&ppuStack_90,auStack_b0);
      ppuVar3 = ppuVar25;
      _swift_isUniquelyReferenced_nonNull_native(ppuVar25);
      ppuVar11 = ppuVar13;
      func_0x0001001029e8(auStack_b0,ppuVar13,ppuVar12,ppuVar3);
      _swift_bridgeObjectRelease(ppuVar12);
      ppuVar4 = ppuVar13;
    }
    ppuVar13 = &PTR____CFConstantStringClassReference_110dd8fd8;
    ppuVar12 = ppuVar13;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
              (&PTR____CFConstantStringClassReference_110dd8fd8);
    if (ppuVar25[2] == (undefined *)0x0) {
LAB_104997774:
      ppuStack_88 = (undefined **)0x0;
      ppuStack_90 = (undefined **)0x0;
      puStack_78 = (undefined *)0x0;
      uStack_80 = 0;
    }
    else {
      _swift_bridgeObjectRetain(ppuVar25);
      ppuVar3 = ppuVar11;
      func_0x000100029284(ppuVar12);
      if (((ulong)ppuVar3 & 1) == 0) {
        _swift_bridgeObjectRelease(ppuVar25);
        goto LAB_104997774;
      }
      func_0x0001000bb420(ppuVar25[7] + (long)ppuVar12 * 0x20,&ppuStack_90);
      _swift_bridgeObjectRelease(ppuVar11);
      ppuVar11 = ppuVar25;
    }
    _swift_bridgeObjectRelease(ppuVar11);
    puVar16 = puStack_78;
    ppuVar12 = (undefined **)0x11309c428;
    func_0x00010499d160(&ppuStack_90);
    if (puVar16 == (undefined *)0x0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                (&PTR____CFConstantStringClassReference_110dd8fd8);
      ppuVar3 = &PTR____CFConstantStringClassReference_110dc0598;
      ppuVar11 = ppuVar12;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      puStack_78 = PTR___sSSN_11034da80;
      ppuStack_90 = ppuVar3;
      ppuStack_88 = ppuVar11;
      func_0x000100102924(&ppuStack_90,auStack_b0);
      ppuVar11 = ppuVar25;
      _swift_isUniquelyReferenced_nonNull_native(ppuVar25);
      func_0x0001001029e8(auStack_b0,ppuVar13,ppuVar12,ppuVar11);
      _swift_bridgeObjectRelease(ppuVar12);
      ppuVar12 = ppuVar13;
    }
    if (*(long *)((long)unaff_x20 + _DAT_1130a28a0) != 0) {
      func_0x00010499d11c(*(long *)((long)unaff_x20 + _DAT_1130a28a0) + _DAT_1130a2798,ppuVar17,
                          0x11309c5e0);
      lVar2 = 0;
      __s10Foundation3URLVMa();
      lVar18 = *(long *)(lVar2 + -8);
      ppuVar13 = (undefined **)0x1;
      ppuVar11 = ppuVar17;
      (**(code **)(lVar18 + 0x30))(ppuVar17,1,lVar2);
      ppuVar4 = unaff_x20;
      if ((int)ppuVar11 == 1) {
        ppuVar12 = (undefined **)0x11309c5e0;
        func_0x00010499d160(ppuVar17,0x11309c5e0);
      }
      else {
        __s10Foundation3URLV14absoluteStringSSvg();
        (**(code **)(lVar18 + 8))(ppuVar17,lVar2);
        ppuVar12 = &PTR____CFConstantStringClassReference_110da2338;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                  (&PTR____CFConstantStringClassReference_110da2338);
        puStack_78 = PTR___sSSN_11034da80;
        ppuStack_90 = ppuVar11;
        ppuStack_88 = ppuVar13;
        func_0x000100102924(&ppuStack_90,auStack_b0);
        ppuVar11 = ppuVar25;
        _swift_isUniquelyReferenced_nonNull_native(ppuVar25);
        func_0x0001001029e8(auStack_b0,ppuVar12,lVar2,ppuVar11);
        _swift_bridgeObjectRelease(lVar2);
      }
    }
    ppuVar13 = &PTR____CFConstantStringClassReference_110de1b78;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
              (&PTR____CFConstantStringClassReference_110de1b78);
    ppuVar11 = *(undefined ***)((long)unaff_x20 + _DAT_1130a2890);
    puVar16 = (undefined *)0x11309c420;
    func_0x0001048db364();
    ppuStack_90 = ppuVar11;
    puStack_78 = puVar16;
    func_0x000100102924(&ppuStack_90,auStack_b0);
    _swift_bridgeObjectRetain(ppuVar11);
    ppuVar11 = ppuVar25;
    _swift_isUniquelyReferenced_nonNull_native(ppuVar25);
    func_0x0001001029e8(auStack_b0,ppuVar13,ppuVar12,ppuVar11);
    _swift_bridgeObjectRelease(ppuVar12);
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    _swift_getInitializedObjCClass();
    ppuVar11 = (undefined **)PTR___sypN_11034f1a8;
    ppuVar13 = ppuVar25;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (ppuVar25,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    param_1 = ppuVar12;
    _objc_msgSend(ppuVar12,PTR_s_isValidJSONObject__1125fe588,ppuVar13);
    _objc_release(ppuVar13);
    ppuVar20 = ppuVar22;
    if ((int)param_1 == 0) {
      ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_allocWithZone();
      ppuVar14 = (undefined **)0xd000000000000015;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f225fb0);
      ppuVar12 = (undefined **)PTR_s_initWithDomain_code_userInfo__1125e1288;
      param_4 = ppuVar14;
      _objc_msgSend();
      _objc_release(ppuVar14);
      _swift_willThrow();
      _swift_release(ppuVar25);
      _swift_unknownObjectRelease(ppuVar6);
      ppuVar3 = ppuVar6;
      unaff_x21 = ppuVar13;
      ppuVar22 = ppuVar23;
      ppuVar1 = ppuVar25;
    }
    else {
      ppuVar13 = ppuVar25;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (ppuVar25,PTR___sSSN_11034da80,(undefined *)((long)ppuVar11 + 8),
                 PTR___sSSSHsWP_11034da90);
      ppuStack_90 = (undefined **)0x0;
      ppuVar1 = (undefined **)PTR_s_dataWithJSONObject_options_error_1125b6c80;
      param_4 = ppuVar13;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar13);
      ppuVar13 = ppuStack_90;
      _objc_retain();
      if (ppuVar12 == (undefined **)0x0) {
        ppuVar14 = ppuVar13;
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _objc_release(ppuVar13);
        _swift_willThrow();
        _swift_release(ppuVar25);
        _swift_unknownObjectRelease(ppuVar6);
        ppuVar3 = ppuVar6;
        ppuVar12 = ppuVar1;
        unaff_x21 = ppuVar14;
        ppuVar22 = ppuVar23;
        ppuVar1 = ppuVar25;
      }
      else {
        ppuVar4 = ppuVar12;
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
        _objc_release(ppuVar12);
        __sSS10FoundationE8EncodingV4utf8ACvgZ(ppuVar23);
        param_4 = ppuVar4;
        ppuVar13 = ppuVar1;
        __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC();
        ppuVar12 = (undefined **)0x0;
        if (ppuVar13 == (undefined **)0x0) {
LAB_104997ac4:
          param_4 = ppuVar23;
          ppuVar13 = (undefined **)0x0;
          _swift_bridgeObjectRelease();
          ppuVar14 = (undefined **)0x0;
          ppuVar21 = (undefined **)0xe000000000000000;
        }
        else {
          ppuStack_90 = param_4;
          ppuStack_88 = ppuVar13;
          __s10Foundation12CharacterSetV15urlQueryAllowedACvgZ(ppuVar22);
          func_0x000100e8b654();
          ppuVar14 = ppuVar22;
          ppuVar21 = (undefined **)PTR___sSSN_11034da80;
          __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF()
          ;
          ppuVar12 = appuStack_180[0x13];
          (*(code *)appuStack_180[0x12][1])(ppuVar22);
          _swift_bridgeObjectRelease();
          ppuVar23 = param_4;
          if (ppuVar21 == (undefined **)0x0) goto LAB_104997ac4;
        }
        __s10Foundation3URLV14absoluteStringSSvg();
        ppuStack_90 = ppuVar13;
        ppuStack_88 = ppuVar12;
        __s10Foundation3URLV5querySSSgvg();
        if (ppuVar12 == (undefined **)0x0) {
          uVar5 = 0x3f;
        }
        else {
          _swift_bridgeObjectRelease(ppuVar12);
          uVar5 = 0x26;
        }
        param_1 = (undefined **)0xe100000000000000;
        __sSS6appendyySSF(uVar5);
        _swift_bridgeObjectRelease(0xe100000000000000);
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                  (&PTR____CFConstantStringClassReference_110da20f8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(param_1);
        __sSS6appendyySSF(0x3d,0xe100000000000000);
        __sSS6appendyySSF(ppuVar14,ppuVar21);
        _swift_bridgeObjectRelease(ppuVar21);
        ppuVar13 = ppuStack_88;
        __s10Foundation3URLV6stringACSgSSh_tcfC(appuStack_180[0x14],ppuStack_90,ppuStack_88);
        _swift_bridgeObjectRelease(ppuVar13);
        _swift_unknownObjectRelease(ppuVar6);
        ppuVar12 = ppuVar1;
        func_0x00010006c090(ppuVar4);
        ppuVar3 = ppuVar25;
        _swift_release(ppuVar25);
        ppuVar22 = ppuVar21;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuVar17[-0xc] = (undefined *)ppuVar1;
  ppuVar17[-0xb] = (undefined *)ppuVar4;
  ppuVar17[-10] = (undefined *)ppuVar22;
  ppuVar17[-9] = (undefined *)ppuVar20;
  ppuVar17[-8] = (undefined *)ppuVar11;
  ppuVar17[-7] = (undefined *)param_1;
  ppuVar17[-6] = (undefined *)ppuVar14;
  ppuVar17[-5] = (undefined *)unaff_x21;
  ppuVar17[-4] = (undefined *)ppuVar13;
  ppuVar17[-3] = (undefined *)ppuVar25;
  ppuVar17[-2] = &stack0xfffffffffffffff0;
  ppuVar17[-1] = FUN_104997c70;
  _swift_getObjectType(ppuVar13);
  lVar2 = 0x11309c5e0;
  func_0x0001048db364();
  uVar8 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar10 = (undefined *)((long)ppuVar17 + (-0x110 - uVar8));
  ppuVar17[-0x1d] = puVar10;
  puVar10 = puVar10 + -uVar8;
  puVar24 = puVar10 + -uVar8;
  puVar15 = puVar24 + -uVar8;
  lVar2 = (long)puVar15 - uVar8;
  puVar16 = &UNK_10dd49648;
  _swift_getKeyPath(&UNK_10dd49648);
  FUN_1049b1930(ppuVar17 + -0x12);
  _swift_release(puVar16);
  puVar16 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (ppuVar17[-0x12] == (undefined *)0x0) {
    return;
  }
  ppuVar17[-0x21] = puVar10;
  ppuVar17[-0x20] = (undefined *)ppuVar12;
  ppuVar17[-0x1f] = (undefined *)param_4;
  ppuVar17[-0x1e] = ppuVar17[-0x12];
  ppuVar17[-0xe] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x00010499d11c(ppuVar3,lVar2,0x11309c5e0);
  lVar7 = 0;
  __s10Foundation3URLVMa();
  puVar19 = *(undefined **)(lVar7 + -8);
  pcVar9 = *(code **)(puVar19 + 0x30);
  puVar10 = (undefined *)0x1;
  lVar18 = lVar2;
  (*pcVar9)(lVar2,1,lVar7);
  _swift_retain();
  ppuVar17[-0x1c] = puVar19;
  if ((int)lVar18 == 1) {
    func_0x00010499d160(lVar2,0x11309c5e0);
LAB_104997e48:
    func_0x000100216878(ppuVar17 + -0x12,0x525574757074756f,0xef656d656863534c);
    func_0x00010499d160(ppuVar17 + -0x12,0x11309c428);
  }
  else {
    __s10Foundation3URLV6schemeSSSgvg();
    (**(code **)(puVar19 + 8))(lVar2,lVar7);
    if (puVar10 == (undefined *)0x0) goto LAB_104997e48;
    ppuVar17[-0xf] = PTR___sSSN_11034da80;
    ppuVar17[-0x12] = puVar16;
    ppuVar17[-0x11] = puVar10;
    func_0x000100102924(ppuVar17 + -0x12,ppuVar17 + -0x16);
    puVar10 = ppuVar17[-0xe];
    puVar16 = puVar10;
    _swift_isUniquelyReferenced_nonNull_native(puVar10);
    ppuVar17[-0x17] = puVar10;
    func_0x0001001029e8(ppuVar17 + -0x16,0x525574757074756f,0xef656d656863534c,puVar16);
    ppuVar17[-0xe] = ppuVar17[-0x17];
  }
  func_0x00010499d11c(ppuVar3,puVar15,0x11309c5e0);
  puVar10 = (undefined *)0x1;
  puVar16 = puVar15;
  (*pcVar9)(puVar15,1,lVar7);
  puVar19 = ppuVar17[-0x21];
  if ((int)puVar16 == 1) {
    func_0x00010499d160(puVar15,0x11309c5e0);
    func_0x000100216878(ppuVar17 + -0x12,0x525574757074756f,0xe90000000000004c);
    func_0x00010499d160(ppuVar17 + -0x12,0x11309c428);
  }
  else {
    __s10Foundation3URLV14absoluteStringSSvg();
    ppuVar17[-0xf] = PTR___sSSN_11034da80;
    ppuVar17[-0x12] = puVar16;
    ppuVar17[-0x11] = puVar10;
    (**(code **)(ppuVar17[-0x1c] + 8))(puVar15,lVar7);
    func_0x000100102924(ppuVar17 + -0x12,ppuVar17 + -0x16);
    puVar10 = ppuVar17[-0xe];
    puVar16 = puVar10;
    _swift_isUniquelyReferenced_nonNull_native(puVar10);
    ppuVar17[-0x17] = puVar10;
    func_0x0001001029e8(ppuVar17 + -0x16,0x525574757074756f,0xe90000000000004c,puVar16);
    ppuVar17[-0xe] = ppuVar17[-0x17];
  }
  lVar2 = *(long *)((long)ppuVar13 + _DAT_1130a28a0);
  if (lVar2 == 0) {
    func_0x000100216878(ppuVar17 + -0x16,0x5255656372756f73,0xe90000000000004c);
    func_0x00010499d160(ppuVar17 + -0x16,0x11309c428);
    puVar16 = ppuVar17[-0x1c];
LAB_104998160:
    func_0x000100216878(ppuVar17 + -0x16,0x6f48656372756f73,0xea00000000007473);
    func_0x00010499d160(ppuVar17 + -0x16,0x11309c428);
    if (lVar2 != 0) goto LAB_10499818c;
  }
  else {
    func_0x00010499d11c(lVar2 + _DAT_1130a2798,puVar24,0x11309c5e0);
    puVar15 = (undefined *)0x1;
    puVar10 = puVar24;
    (*pcVar9)(puVar24,1,lVar7);
    puVar16 = ppuVar17[-0x1c];
    if ((int)puVar10 == 1) {
      func_0x00010499d160(puVar24,0x11309c5e0);
      func_0x000100216878(ppuVar17 + -0x16,0x5255656372756f73,0xe90000000000004c);
      func_0x00010499d160(ppuVar17 + -0x16,0x11309c428);
    }
    else {
      __s10Foundation3URLV14absoluteStringSSvg();
      ppuVar17[-0xf] = PTR___sSSN_11034da80;
      ppuVar17[-0x12] = puVar10;
      ppuVar17[-0x11] = puVar15;
      (**(code **)(puVar16 + 8))(puVar24,lVar7);
      func_0x000100102924(ppuVar17 + -0x12,ppuVar17 + -0x16);
      puVar15 = ppuVar17[-0xe];
      puVar10 = puVar15;
      _swift_isUniquelyReferenced_nonNull_native(puVar15);
      ppuVar17[-0x17] = puVar15;
      func_0x0001001029e8(ppuVar17 + -0x16,0x5255656372756f73,0xe90000000000004c,puVar10);
      ppuVar17[-0xe] = ppuVar17[-0x17];
    }
    func_0x00010499d11c(lVar2 + _DAT_1130a2798,puVar19,0x11309c5e0);
    puVar15 = (undefined *)0x1;
    puVar10 = puVar19;
    (*pcVar9)(puVar19,1,lVar7);
    if ((int)puVar10 == 1) {
      func_0x00010499d160(puVar19,0x11309c5e0);
      goto LAB_104998160;
    }
    __s10Foundation3URLV4hostSSSgvg();
    (**(code **)(puVar16 + 8))(puVar19,lVar7);
    if (puVar15 == (undefined *)0x0) goto LAB_104998160;
    ppuVar17[-0xf] = PTR___sSSN_11034da80;
    ppuVar17[-0x12] = puVar10;
    ppuVar17[-0x11] = puVar15;
    func_0x000100102924(ppuVar17 + -0x12,ppuVar17 + -0x16);
    puVar15 = ppuVar17[-0xe];
    puVar10 = puVar15;
    _swift_isUniquelyReferenced_nonNull_native(puVar15);
    ppuVar17[-0x17] = puVar15;
    func_0x0001001029e8(ppuVar17 + -0x16,0x6f48656372756f73,0xea00000000007473,puVar10);
    ppuVar17[-0xe] = ppuVar17[-0x17];
LAB_10499818c:
    puVar24 = ppuVar17[-0x1d];
    func_0x00010499d11c(lVar2 + _DAT_1130a2798,puVar24,0x11309c5e0);
    puVar15 = (undefined *)0x1;
    puVar10 = puVar24;
    (*pcVar9)(puVar24,1,lVar7);
    if ((int)puVar10 == 1) {
      func_0x00010499d160(puVar24,0x11309c5e0);
    }
    else {
      __s10Foundation3URLV6schemeSSSgvg();
      (**(code **)(puVar16 + 8))(puVar24,lVar7);
      if (puVar15 != (undefined *)0x0) {
        ppuVar17[-0xf] = PTR___sSSN_11034da80;
        ppuVar17[-0x12] = puVar10;
        ppuVar17[-0x11] = puVar15;
        func_0x000100102924(ppuVar17 + -0x12,ppuVar17 + -0x16);
        puVar10 = ppuVar17[-0xe];
        puVar16 = puVar10;
        _swift_isUniquelyReferenced_nonNull_native(puVar10);
        ppuVar17[-0x17] = puVar10;
        func_0x0001001029e8(ppuVar17 + -0x16,0x6353656372756f73,0xec000000656d6568,puVar16);
        ppuVar17[-0xe] = ppuVar17[-0x17];
        goto LAB_104998294;
      }
    }
  }
  func_0x000100216878(ppuVar17 + -0x16,0x6353656372756f73,0xec000000656d6568);
  func_0x00010499d160(ppuVar17 + -0x16,0x11309c428);
LAB_104998294:
  puVar16 = ppuVar17[-0x1f];
  if (ppuVar17[-0x20] == (undefined *)0x0) {
    func_0x000100216878(ppuVar17 + -0x12,0x726f727265,0xe500000000000000);
    func_0x00010499d160(ppuVar17 + -0x12,0x11309c428);
  }
  else {
    _swift_getErrorValue(ppuVar17[-0x20],ppuVar17 + -0x18,ppuVar17 + -0x1b);
    puVar10 = ppuVar17[-0x1a];
    puVar15 = ppuVar17[-0x19];
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
    ppuVar17[-0xf] = PTR___sSSN_11034da80;
    ppuVar17[-0x12] = puVar10;
    ppuVar17[-0x11] = puVar15;
    func_0x000100102924(ppuVar17 + -0x12,ppuVar17 + -0x16);
    puVar15 = ppuVar17[-0xe];
    puVar10 = puVar15;
    _swift_isUniquelyReferenced_nonNull_native(puVar15);
    ppuVar17[-0x17] = puVar15;
    func_0x0001001029e8(ppuVar17 + -0x16,0x726f727265,0xe500000000000000,puVar10);
    ppuVar17[-0xe] = ppuVar17[-0x17];
  }
  puVar10 = PTR___sSSN_11034da80;
  if (puVar16 < (undefined *)0x3) {
    puVar15 = *(undefined **)(&UNK_10dd496d8 + (long)puVar16 * 8);
    puVar24 = *(undefined **)(&UNK_10dd496f0 + (long)puVar16 * 8);
    puVar19 = *(undefined **)(&UNK_10dd49708 + (long)puVar16 * 8);
    ppuVar17[-0xf] = PTR___sSSN_11034da80;
    ppuVar17[-0x12] = puVar15;
    ppuVar17[-0x11] = (undefined *)0xe100000000000000;
    func_0x000100102924(ppuVar17 + -0x12,ppuVar17 + -0x16);
    puVar15 = ppuVar17[-0xe];
    puVar16 = puVar15;
    _swift_isUniquelyReferenced_nonNull_native(puVar15);
    ppuVar17[-0x17] = puVar15;
    func_0x0001001029e8(ppuVar17 + -0x16,0x73736563637573,0xe700000000000000,puVar16);
    puVar15 = ppuVar17[-0x17];
    ppuVar17[-0xf] = puVar10;
    ppuVar17[-0x12] = puVar24;
    ppuVar17[-0x11] = puVar19;
    func_0x000100102924(ppuVar17 + -0x12,ppuVar17 + -0x16);
    puVar16 = puVar15;
    _swift_isUniquelyReferenced_nonNull_native(puVar15);
    ppuVar17[-0x17] = puVar15;
    func_0x0001001029e8(ppuVar17 + -0x16,0x65707974,0xe400000000000000,puVar16);
    ppuVar17[-0xe] = ppuVar17[-0x17];
    lVar18 = _DAT_1130a27b0;
  }
  else {
    func_0x000100216878(ppuVar17 + -0x16,0x73736563637573,0xe700000000000000);
    func_0x00010499d160(ppuVar17 + -0x16,0x11309c428);
    func_0x000100216878(ppuVar17 + -0x16,0x65707974,0xe400000000000000);
    func_0x00010499d160(ppuVar17 + -0x16,0x11309c428);
    lVar18 = _DAT_1130a27b0;
  }
  _DAT_1130a27b0 = lVar18;
  if (lVar2 == 0) {
    puVar16 = ppuVar17[-0xe];
  }
  else {
    _swift_beginAccess(lVar2 + lVar18,ppuVar17 + -0x12,0,0);
    puVar16 = ppuVar17[-0xe];
    if (*(char *)(lVar2 + lVar18) == '\x01') {
      ppuVar12 = &PTR____CFConstantStringClassReference_110da4fb8;
      _objc_retain(lVar2);
      _objc_retain(&PTR____CFConstantStringClassReference_110da4fb8);
      puVar10 = puVar16;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (puVar16,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      _swift_bridgeObjectRelease(puVar16);
      puVar16 = ppuVar17[-0x1e];
      _objc_msgSend(puVar16,PTR_s_postNotificationForEventName_arg_11261ec78,ppuVar12,puVar10);
      _objc_release(lVar2);
      _objc_release(ppuVar12);
      _objc_release(puVar10);
      _swift_unknownObjectRelease(puVar16);
      return;
    }
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110da4f98;
  _objc_retain(&PTR____CFConstantStringClassReference_110da4f98);
  puVar10 = puVar16;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar16,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar16);
  puVar16 = ppuVar17[-0x1e];
  _objc_msgSend(puVar16,PTR_s_postNotificationForEventName_arg_11261ec78,ppuVar12,puVar10);
  _swift_unknownObjectRelease(puVar16);
  _objc_release(ppuVar12);
  _objc_release(puVar10);
  return;
}



/* Entry: 104997c70; end: 1049985ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104997c70(undefined8 param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  long unaff_x20;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined auStack_110 [8];
  undefined *puStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined1 auStack_b0 [32];
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _swift_getObjectType();
  lVar7 = 0x11309c5e0;
  func_0x0001048db364();
  uVar4 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puStack_e8 = auStack_110 + -uVar4;
  puVar11 = puStack_e8 + -uVar4;
  puVar12 = puVar11 + -uVar4;
  puVar8 = puVar12 + -uVar4;
  lVar7 = (long)puVar8 - uVar4;
  puVar1 = &UNK_10dd49648;
  _swift_getKeyPath(&UNK_10dd49648);
  FUN_1049b1930(&puStack_90);
  _swift_release(puVar1);
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puStack_90 == (undefined *)0x0) {
    return;
  }
  puStack_f0 = puStack_90;
  puStack_70 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_108 = puVar11;
  lStack_100 = param_2;
  uStack_f8 = param_3;
  FUN_10499d11c(param_1,lVar7,0x11309c5e0);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar10 + 0x30);
  lVar3 = 1;
  lVar9 = lVar7;
  (*pcVar5)(lVar7,1,lVar2);
  _swift_retain();
  lStack_e0 = lVar10;
  if ((int)lVar9 == 1) {
    func_0x00010499d160(lVar7,0x11309c5e0);
LAB_104997e48:
    func_0x000100216878(&puStack_90,0x525574757074756f,0xef656d656863534c);
    func_0x00010499d160(&puStack_90,0x11309c428);
  }
  else {
    __s10Foundation3URLV6schemeSSSgvg();
    (**(code **)(lVar10 + 8))(lVar7,lVar2);
    if (lVar3 == 0) goto LAB_104997e48;
    puStack_78 = PTR___sSSN_11034da80;
    puStack_90 = puVar1;
    lStack_88 = lVar3;
    func_0x000100102924(&puStack_90,auStack_b0);
    puVar1 = puStack_70;
    puVar11 = puStack_70;
    _swift_isUniquelyReferenced_nonNull_native(puStack_70);
    puStack_b8 = puVar1;
    func_0x0001001029e8(auStack_b0,0x525574757074756f,0xef656d656863534c,puVar11);
    puStack_70 = puStack_b8;
  }
  FUN_10499d11c(param_1,puVar8,0x11309c5e0);
  lVar7 = 1;
  puVar11 = puVar8;
  (*pcVar5)(puVar8,1,lVar2);
  puVar1 = puStack_108;
  if ((int)puVar11 == 1) {
    func_0x00010499d160(puVar8,0x11309c5e0);
    func_0x000100216878(&puStack_90,0x525574757074756f,0xe90000000000004c);
    func_0x00010499d160(&puStack_90,0x11309c428);
  }
  else {
    __s10Foundation3URLV14absoluteStringSSvg();
    puStack_78 = PTR___sSSN_11034da80;
    puStack_90 = puVar11;
    lStack_88 = lVar7;
    (**(code **)(lStack_e0 + 8))(puVar8,lVar2);
    func_0x000100102924(&puStack_90,auStack_b0);
    puVar8 = puStack_70;
    puVar11 = puStack_70;
    _swift_isUniquelyReferenced_nonNull_native(puStack_70);
    puStack_b8 = puVar8;
    func_0x0001001029e8(auStack_b0,0x525574757074756f,0xe90000000000004c,puVar11);
    puStack_70 = puStack_b8;
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_1130a28a0);
  if (lVar7 == 0) {
    func_0x000100216878(auStack_b0,0x5255656372756f73,0xe90000000000004c);
    func_0x00010499d160(auStack_b0,0x11309c428);
    lVar9 = lStack_e0;
LAB_104998160:
    func_0x000100216878(auStack_b0,0x6f48656372756f73,0xea00000000007473);
    func_0x00010499d160(auStack_b0,0x11309c428);
    if (lVar7 != 0) goto LAB_10499818c;
  }
  else {
    FUN_10499d11c(lVar7 + _DAT_1130a2798,puVar12,0x11309c5e0);
    lVar3 = 1;
    puVar8 = puVar12;
    (*pcVar5)(puVar12,1,lVar2);
    lVar9 = lStack_e0;
    if ((int)puVar8 == 1) {
      func_0x00010499d160(puVar12,0x11309c5e0);
      func_0x000100216878(auStack_b0,0x5255656372756f73,0xe90000000000004c);
      func_0x00010499d160(auStack_b0,0x11309c428);
    }
    else {
      __s10Foundation3URLV14absoluteStringSSvg();
      puStack_78 = PTR___sSSN_11034da80;
      puStack_90 = puVar8;
      lStack_88 = lVar3;
      (**(code **)(lVar9 + 8))(puVar12,lVar2);
      func_0x000100102924(&puStack_90,auStack_b0);
      puVar8 = puStack_70;
      puVar11 = puStack_70;
      _swift_isUniquelyReferenced_nonNull_native(puStack_70);
      puStack_b8 = puVar8;
      func_0x0001001029e8(auStack_b0,0x5255656372756f73,0xe90000000000004c,puVar11);
      puStack_70 = puStack_b8;
    }
    FUN_10499d11c(lVar7 + _DAT_1130a2798,puVar1,0x11309c5e0);
    lVar3 = 1;
    puVar8 = puVar1;
    (*pcVar5)(puVar1,1,lVar2);
    if ((int)puVar8 == 1) {
      func_0x00010499d160(puVar1,0x11309c5e0);
      goto LAB_104998160;
    }
    __s10Foundation3URLV4hostSSSgvg();
    (**(code **)(lVar9 + 8))(puVar1,lVar2);
    if (lVar3 == 0) goto LAB_104998160;
    puStack_78 = PTR___sSSN_11034da80;
    puStack_90 = puVar8;
    lStack_88 = lVar3;
    func_0x000100102924(&puStack_90,auStack_b0);
    puVar1 = puStack_70;
    puVar8 = puStack_70;
    _swift_isUniquelyReferenced_nonNull_native(puStack_70);
    puStack_b8 = puVar1;
    func_0x0001001029e8(auStack_b0,0x6f48656372756f73,0xea00000000007473,puVar8);
    puStack_70 = puStack_b8;
LAB_10499818c:
    puVar1 = puStack_e8;
    FUN_10499d11c(lVar7 + _DAT_1130a2798,puStack_e8,0x11309c5e0);
    lVar3 = 1;
    puVar8 = puVar1;
    (*pcVar5)(puVar1,1,lVar2);
    if ((int)puVar8 == 1) {
      func_0x00010499d160(puVar1,0x11309c5e0);
    }
    else {
      __s10Foundation3URLV6schemeSSSgvg();
      (**(code **)(lVar9 + 8))(puVar1,lVar2);
      if (lVar3 != 0) {
        puStack_78 = PTR___sSSN_11034da80;
        puStack_90 = puVar8;
        lStack_88 = lVar3;
        func_0x000100102924(&puStack_90,auStack_b0);
        puVar1 = puStack_70;
        puVar8 = puStack_70;
        _swift_isUniquelyReferenced_nonNull_native(puStack_70);
        puStack_b8 = puVar1;
        func_0x0001001029e8(auStack_b0,0x6353656372756f73,0xec000000656d6568,puVar8);
        puStack_70 = puStack_b8;
        goto LAB_104998294;
      }
    }
  }
  func_0x000100216878(auStack_b0,0x6353656372756f73,0xec000000656d6568);
  func_0x00010499d160(auStack_b0,0x11309c428);
LAB_104998294:
  uVar4 = uStack_f8;
  if (lStack_100 == 0) {
    func_0x000100216878(&puStack_90,0x726f727265,0xe500000000000000);
    func_0x00010499d160(&puStack_90,0x11309c428);
  }
  else {
    _swift_getErrorValue(lStack_100,auStack_c0,auStack_d8);
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
    puStack_78 = PTR___sSSN_11034da80;
    puStack_90 = puStack_d0;
    lStack_88 = lStack_c8;
    func_0x000100102924(&puStack_90,auStack_b0);
    puVar1 = puStack_70;
    puVar8 = puStack_70;
    _swift_isUniquelyReferenced_nonNull_native(puStack_70);
    puStack_b8 = puVar1;
    func_0x0001001029e8(auStack_b0,0x726f727265,0xe500000000000000,puVar8);
    puStack_70 = puStack_b8;
  }
  puVar1 = PTR___sSSN_11034da80;
  if (uVar4 < 3) {
    puStack_90 = *(undefined **)(&UNK_10dd496d8 + uVar4 * 8);
    puVar12 = *(undefined **)(&UNK_10dd496f0 + uVar4 * 8);
    lVar9 = *(long *)(&UNK_10dd49708 + uVar4 * 8);
    puStack_78 = PTR___sSSN_11034da80;
    lStack_88 = 0xe100000000000000;
    func_0x000100102924(&puStack_90,auStack_b0);
    puVar8 = puStack_70;
    puVar11 = puStack_70;
    _swift_isUniquelyReferenced_nonNull_native(puStack_70);
    puStack_b8 = puVar8;
    func_0x0001001029e8(auStack_b0,0x73736563637573,0xe700000000000000,puVar11);
    puVar8 = puStack_b8;
    puStack_78 = puVar1;
    puStack_90 = puVar12;
    lStack_88 = lVar9;
    func_0x000100102924(&puStack_90,auStack_b0);
    puVar1 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native(puVar8);
    puStack_b8 = puVar8;
    func_0x0001001029e8(auStack_b0,0x65707974,0xe400000000000000,puVar1);
    lVar9 = _DAT_1130a27b0;
    puStack_70 = puStack_b8;
  }
  else {
    func_0x000100216878(auStack_b0,0x73736563637573,0xe700000000000000);
    func_0x00010499d160(auStack_b0,0x11309c428);
    func_0x000100216878(auStack_b0,0x65707974,0xe400000000000000);
    func_0x00010499d160(auStack_b0,0x11309c428);
    lVar9 = _DAT_1130a27b0;
  }
  _DAT_1130a27b0 = lVar9;
  if ((lVar7 == 0) ||
     (_swift_beginAccess(lVar7 + lVar9,&puStack_90,0,0), puVar1 = puStack_70,
     *(char *)(lVar7 + lVar9) != '\x01')) {
    puVar1 = puStack_70;
    ppuVar6 = &PTR____CFConstantStringClassReference_110da4f98;
    _objc_retain(&PTR____CFConstantStringClassReference_110da4f98);
    puVar8 = puVar1;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(puVar1);
    puVar1 = puStack_f0;
    _objc_msgSend(puStack_f0,PTR_s_postNotificationForEventName_arg_11261ec78,ppuVar6,puVar8);
    _swift_unknownObjectRelease(puVar1);
    _objc_release(ppuVar6);
    _objc_release(puVar8);
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110da4fb8;
    _objc_retain(lVar7);
    _objc_retain(&PTR____CFConstantStringClassReference_110da4fb8);
    puVar8 = puVar1;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(puVar1);
    puVar1 = puStack_f0;
    _objc_msgSend(puStack_f0,PTR_s_postNotificationForEventName_arg_11261ec78,ppuVar6,puVar8);
    _objc_release(lVar7);
    _objc_release(ppuVar6);
    _objc_release(puVar8);
    _swift_unknownObjectRelease(puVar1);
  }
  return;
}



/* Entry: 1049985ac; end: 1049985af;  */

void FUN_1049985ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(0x113815800,auStack_78,0,0);
  uVar4 = uRam0000000113815818;
  uVar3 = uRam0000000113815810;
  uVar2 = uRam0000000113815808;
  lVar1 = lRam0000000113815800;
  uVar7 = uRam0000000113815818;
  lVar5 = lRam0000000113815800;
  uVar8 = uRam0000000113815808;
  uVar9 = uRam0000000113815810;
  if (lRam0000000113815800 == 0) {
    _swift_beginAccess(0x113815820,auStack_90,0,0);
    uVar7 = uRam0000000113815838;
    uVar9 = uRam0000000113815830;
    uVar8 = uRam0000000113815828;
    lVar5 = lRam0000000113815820;
    if (lRam0000000113815820 == 0) {
      return;
    }
    _swift_unknownObjectRetain(lRam0000000113815820);
    _swift_unknownObjectRetain(uVar8);
    _swift_unknownObjectRetain(uVar9);
    _swift_unknownObjectRetain(uVar7);
  }
  FUN_10499bb60(lVar1,uVar2,uVar3,uVar4);
  _swift_unknownObjectRelease(uVar9);
  _swift_unknownObjectRelease(uVar8);
  _swift_unknownObjectRelease(lVar5);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  uStack_b0 = 0x10499872c;
  puStack_a8 = &UNK_1107ba4e0;
  ppuVar6 = &puStack_c0;
  uStack_a0 = param_2;
  uStack_98 = param_3;
  __Block_copy(ppuVar6);
  uVar2 = uStack_98;
  _swift_retain(param_3);
  _swift_release(uVar2);
  _objc_msgSend(uVar7,PTR_s_appLinkFromURL_handler__112525280,lVar5,ppuVar6);
  __Block_release(ppuVar6);
  _swift_unknownObjectRelease(uVar7);
  _objc_release(lVar5);
  return;
}



/* Entry: 1049985b0; end: 10499866f;  */

void FUN_1049985b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x10499872c;
  puStack_58 = &UNK_1107ba290;
  uStack_50 = param_3;
  uStack_48 = param_4;
  __Block_copy(&puStack_70);
  uVar1 = uStack_48;
  _swift_retain(param_4);
  _swift_release(uVar1);
  _objc_msgSend(param_2,PTR_s_appLinkFromURL_handler__112525280,param_1,ppuVar2);
  __Block_release(ppuVar2);
  _objc_release(param_1);
  return;
}



/* Entry: 104998670; end: 1049987a3; +[FBSDKAppLinkNavigation resolveAppLink:handler:] */

void FUN_104998670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  puVar3 = &stack0xffffffffffffffc0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __Block_copy();
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
  puVar2 = &UNK_1107ba478;
  _swift_allocObject(&UNK_1107ba478,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  FUN_10499c9d8(puVar3,0x10499d1b4,puVar2);
  _swift_release(puVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 1049987a4; end: 1049988f3; +[FBSDKAppLinkNavigation resolveAppLink:resolver:handler:] */

void FUN_1049987a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar2 + -8);
  lVar6 = (long)&puStack_80 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __Block_copy();
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar6,param_3);
  puVar3 = &UNK_1107ba428;
  _swift_allocObject(&UNK_1107ba428,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  uVar4 = param_4;
  _swift_unknownObjectRetain(param_4);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  uStack_60 = 0x10499d088;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x10499872c;
  puStack_68 = &UNK_1107ba440;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar3;
  __Block_copy(ppuVar5);
  puVar1 = puStack_58;
  _swift_retain(puVar3);
  _swift_release(puVar1);
  _objc_msgSend(param_4,PTR_s_appLinkFromURL_handler__112525280,uVar4,ppuVar5);
  __Block_release(ppuVar5);
  _swift_unknownObjectRelease(param_4);
  _swift_release(puVar3);
  _objc_release(uVar4);
  (**(code **)(lVar7 + 8))(lVar6,lVar2);
  return;
}



/* Entry: 1049988f4; end: 1049988f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_1049988f4(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain();
  func_0x000100214a84();
  puVar2 = puVar3;
  func_0x000100214a84();
  _swift_release();
  FUN_10499ce1c();
  puVar4 = puVar3;
  _objc_allocWithZone();
  *(undefined8 *)(puVar4 + _DAT_1130a28a0) = param_1;
  *(undefined **)(puVar4 + _DAT_1130a2890) = puVar1;
  *(undefined **)(puVar4 + _DAT_1130a2898) = puVar2;
  puVar1 = PTR_s_init_1125d9248;
  puStack_50 = puVar4;
  puStack_48 = puVar3;
  _objc_retain(param_1);
  ppuVar5 = &puStack_50;
  _objc_msgSendSuper2(ppuVar5);
  ppuVar6 = ppuVar5;
  FUN_104996d10();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(ppuVar5);
  }
  else {
    _swift_willThrow();
    _objc_release(ppuVar5);
    if (param_2 != (undefined8 *)0x0) {
      puVar3 = puVar1;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
      _objc_autorelease();
      *param_2 = puVar3;
    }
    _swift_errorRelease(puVar1);
    ppuVar6 = (undefined **)0x0;
  }
  return ppuVar6;
}



/* Entry: 1049988f8; end: 1049989d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1049988f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = auStack_50;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain();
  func_0x000100214a84();
  puVar2 = puVar5;
  func_0x000100214a84();
  _swift_release(puVar5);
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130a28a0) = param_1;
  *(undefined **)(unaff_x20 + _DAT_1130a2890) = puVar1;
  *(undefined **)(unaff_x20 + _DAT_1130a2898) = puVar2;
  puVar5 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_msgSendSuper2(auStack_50);
  puVar4 = puVar3;
  FUN_104996d10();
  if (puVar5 != (undefined *)0x0) {
    _swift_willThrow();
  }
  _objc_release(puVar3);
  return puVar4;
}



/* Entry: 1049989d8; end: 104998a17; +[FBSDKAppLinkNavigation navigateToAppLink:error:] */

undefined8 FUN_1049989d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10499cb90();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104998a18; end: 104998a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104998a18(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuVar5 = &puStack_50;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain();
  func_0x000100214a84();
  puVar2 = puVar3;
  func_0x000100214a84();
  _swift_release();
  FUN_10499ce1c();
  puVar4 = puVar3;
  _objc_allocWithZone();
  *(undefined8 *)(puVar4 + _DAT_1130a28a0) = param_1;
  *(undefined **)(puVar4 + _DAT_1130a2890) = puVar1;
  *(undefined **)(puVar4 + _DAT_1130a2898) = puVar2;
  puVar1 = PTR_s_init_1125d9248;
  puStack_50 = puVar4;
  puStack_48 = puVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&puStack_50,puVar1);
  if (*(long *)((long)ppuVar5 + _DAT_1130a28a0) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)((long)ppuVar5 + _DAT_1130a28a0) + _DAT_1130a27a0);
    _swift_bridgeObjectRetain(uVar7);
  }
  uVar6 = uVar7;
  FUN_104996000(uVar7);
  _objc_release(ppuVar5);
  _swift_bridgeObjectRelease(uVar7);
  return uVar6;
}



/* Entry: 104998a1c; end: 104998a53; +[FBSDKAppLinkNavigation navigationTypeForLink:] */

undefined8 FUN_104998a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010499cc9c();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104998a54; end: 104998e1b;  */

void FUN_104998a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(0x113815800,auStack_78,0,0);
  uVar4 = uRam0000000113815818;
  uVar3 = uRam0000000113815810;
  uVar2 = uRam0000000113815808;
  lVar1 = lRam0000000113815800;
  uVar5 = uRam0000000113815818;
  lVar6 = lRam0000000113815800;
  uVar7 = uRam0000000113815808;
  uVar8 = uRam0000000113815810;
  if (lRam0000000113815800 == 0) {
    _swift_beginAccess(0x113815820,auStack_90,0,0);
    uVar5 = uRam0000000113815838;
    uVar8 = uRam0000000113815830;
    uVar7 = uRam0000000113815828;
    lVar6 = lRam0000000113815820;
    if (lRam0000000113815820 == 0) {
      return;
    }
    _swift_unknownObjectRetain(lRam0000000113815820);
    _swift_unknownObjectRetain(uVar7);
    _swift_unknownObjectRetain(uVar8);
    _swift_unknownObjectRetain(uVar5);
  }
  FUN_10499bb60(lVar1,uVar2,uVar3,uVar4);
  _swift_unknownObjectRelease(uVar8);
  _swift_unknownObjectRelease(uVar7);
  _swift_unknownObjectRelease(lVar6);
  func_0x000104998b80(param_1,uVar5,param_2,param_3);
  _swift_unknownObjectRelease(uVar5);
  return;
}



/* Entry: 104998e1c; end: 104998eef; +[FBSDKAppLinkNavigation navigateToURL:handler:] */

void FUN_104998e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  puVar3 = &stack0xffffffffffffffb0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __Block_copy();
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
  puVar2 = &UNK_1107ba400;
  _swift_allocObject(&UNK_1107ba400,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  _swift_getObjCClassMetadata(param_1);
  FUN_104998a54(puVar3,0x10499d1b0,puVar2);
  _swift_release(puVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 104998ef0; end: 104998f47;  */

void FUN_104998ef0(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104998f48; end: 104999047;  */

void FUN_104998f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1107ba4a0;
  _swift_allocObject(&UNK_1107ba4a0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  _swift_retain(param_5);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  pcStack_50 = FUN_10499d110;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x10499872c;
  puStack_58 = &UNK_1107ba4b8;
  puStack_48 = puVar2;
  __Block_copy(&puStack_70);
  puVar1 = puStack_48;
  _swift_retain(puVar2);
  _swift_release(puVar1);
  _objc_msgSend(param_3,PTR_s_appLinkFromURL_handler__112525280,param_5,ppuVar3);
  __Block_release(ppuVar3);
  _swift_release(puVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 104999048; end: 1049991ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104999048(long param_1,long param_2,code *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  long lStack_60;
  long lStack_58;
  
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((param_1 == 0) || (param_2 != 0)) {
    (*param_3)(0);
  }
  else {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    lVar1 = param_1;
    _objc_retain(param_1);
    puVar2 = puVar7;
    func_0x000100214a84();
    puVar3 = puVar7;
    func_0x000100214a84();
    _swift_release(puVar7);
    lVar4 = param_5;
    _objc_allocWithZone();
    *(long *)(lVar4 + _DAT_1130a28a0) = param_1;
    *(undefined **)(lVar4 + _DAT_1130a2890) = puVar2;
    *(undefined **)(lVar4 + _DAT_1130a2898) = puVar3;
    puVar7 = PTR_s_init_1125d9248;
    lStack_60 = lVar4;
    lStack_58 = param_5;
    _objc_retain(lVar1);
    plVar5 = &lStack_60;
    _objc_msgSendSuper2(plVar5);
    plVar6 = plVar5;
    FUN_104996d10();
    if (puVar7 == (undefined *)0x0) {
      _objc_release(plVar5);
      (*param_3)(plVar6,0);
      _objc_release(lVar1);
    }
    else {
      _swift_willThrow();
      _objc_release(plVar5);
      _swift_errorRetain(puVar7);
      (*param_3)(0,puVar7);
      _objc_release(lVar1);
      _swift_errorRelease(puVar7);
      _swift_errorRelease(puVar7);
    }
  }
  return;
}



/* Entry: 1049991ac; end: 104999297; +[FBSDKAppLinkNavigation navigateToURL:resolver:handler:] */

void FUN_1049991ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  puVar3 = &stack0xffffffffffffffb0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __Block_copy();
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
  puVar2 = &UNK_1107ba3d8;
  _swift_allocObject(&UNK_1107ba3d8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  _swift_getObjCClassMetadata(param_1);
  _swift_unknownObjectRetain(param_4);
  func_0x000104998b80(puVar3,param_4,FUN_10499d080,puVar2);
  _swift_unknownObjectRelease(param_4);
  _swift_release(puVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 104999298; end: 10499938f; -[FBSDKAppLinkNavigation postNavigateEventNotificationWithTargetURL:error:navigationType:] */

void FUN_104999298(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  puVar3 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
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
  uVar2 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_1);
  FUN_104997c70(puVar3,param_4,param_5);
  _objc_release(param_1);
  _objc_release(uVar2);
  func_0x00010499d160(puVar3,0x11309c5e0);
  return;
}



/* Entry: 104999390; end: 104999407; -[FBSDKAppLinkNavigation navigationTypeFor:] */

long FUN_104999390(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = 0x1130a27b8;
    func_0x0001048db364(0x1130a27b8);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  _objc_retain(param_1);
  lVar2 = param_3;
  FUN_104996000(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
  return lVar2;
}



/* Entry: 104999408; end: 104999453;  */

void FUN_104999408(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 104999454; end: 1049994b3; -[FBSDKAppLinkNavigation init] */

void FUN_104999454(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("FBSDKCoreKit.AppLinkNavigation",0x1e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104999480);
  (*pcVar1)();
}



/* Entry: 1049994b4; end: 104999607; -[FBSDKAppLinkNavigation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049994b4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2890));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a2898));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130a28a0));
  return;
}



/* Entry: 104999608; end: 10499964f;  */

undefined8 FUN_104999608(undefined8 param_1)

{
  _swift_getObjectType();
  return param_1;
}



/* Entry: 104999650; end: 104999857;  */

undefined8 FUN_104999650(void)

{
  return 0x113815800;
}



/* Entry: 104999858; end: 10499986f;  */

void FUN_104999858(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(0x113815800,auStack_58,0,0);
  uVar3 = uRam0000000113815818;
  uVar2 = uRam0000000113815810;
  uVar1 = uRam0000000113815808;
  *param_1 = uRam0000000113815800;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_10499bb60();
  return;
}



/* Entry: 104999870; end: 104999903;  */

void FUN_104999870(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113815800,auStack_38,1,0);
  uVar4 = uRam0000000113815818;
  uVar3 = uRam0000000113815810;
  uVar2 = uRam0000000113815808;
  uVar1 = uRam0000000113815800;
  uRam0000000113815808 = param_1[1];
  uRam0000000113815800 = *param_1;
  uRam0000000113815818 = param_1[3];
  uRam0000000113815810 = param_1[2];
  func_0x00010499bbac(uVar1,uVar2,uVar3,uVar4);
  return;
}



/* Entry: 104999904; end: 10499991b;  */

void FUN_104999904(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(0x113815820,auStack_58,0,0);
  uVar3 = uRam0000000113815838;
  uVar2 = uRam0000000113815830;
  uVar1 = uRam0000000113815828;
  *param_1 = uRam0000000113815820;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_10499bb60();
  return;
}



/* Entry: 10499991c; end: 10499998f;  */

void FUN_10499991c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_4,auStack_58,0,0);
  uVar1 = *param_5;
  uVar2 = *param_6;
  uVar3 = *param_7;
  *param_1 = *param_4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_10499bb60();
  return;
}



/* Entry: 104999990; end: 104999cd7;  */

ulong FUN_104999990(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104999a68);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104999a6c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastObjCProtocolConditional();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if ((long)param_2 < 0) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar3 = param_1;
    _swift_dynamicCastObjCProtocolConditional();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd000000000000012,0x800000010f223ac0);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104999b34);
  (*pcVar2)();
}



/* Entry: 104999cd8; end: 104999e9b;  */

ulong FUN_104999cd8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104999dbc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104999dc0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if ((long)param_2 < 0) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    _swift_getInitializedObjCClass(PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10499d090(0,0x1130a2908,&PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104999e9c);
  (*pcVar2)();
}



/* Entry: 104999e9c; end: 104999f27;  */

void FUN_104999e9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_88 [72];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = param_1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __ss6HasherV5_seedABSi_tcfC(auStack_88,uVar3);
  puVar2 = auStack_88;
  __sSS4hash4intoys6HasherVz_tF(puVar2,uVar1,param_2);
  __ss6HasherV9_finalizeSiyF();
  _swift_bridgeObjectRelease(param_2);
  FUN_10499b368(param_1,puVar2);
  return;
}



/* Entry: 104999f28; end: 104999ff7;  */

undefined1  [16] FUN_104999f28(byte param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_78 [8];
  ulong uStack_70;
  long lStack_68;
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar9 = 0xec0000006e656b6f;
  uVar1 = 0x6874646977;
  if (param_1 != 2) {
    uVar1 = 0x746867696568;
  }
  uVar10 = 0xe500000000000000;
  if (param_1 != 2) {
    uVar10 = 0xe600000000000000;
  }
  uVar7 = 0x745f737365636361;
  if (param_1 != 0) {
    uVar9 = 0xe400000000000000;
    uVar7 = 0x65707974;
  }
  if (param_1 < 2) {
    uVar10 = uVar9;
    uVar1 = uVar7;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar10);
  _swift_bridgeObjectRelease();
  __ss6HasherV9_finalizeSiyF();
  lStack_68 = unaff_x20 + 0x40;
  uStack_70 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar10 = uVar10 & (uStack_70 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lStack_68 + (uVar10 >> 3 & 0xfffffffffffff8)) >> (uVar10 & 0x3f) & 1) == 0) {
    uVar11 = 0;
  }
  else {
    uStack_70 = ~uStack_70;
    while( true ) {
      bVar6 = *(byte *)(*(long *)(unaff_x20 + 0x30) + uVar10);
      uVar9 = 0x6874646977;
      if (bVar6 != 2) {
        uVar9 = 0x746867696568;
      }
      lVar2 = -0x1b00000000000000;
      if (bVar6 != 2) {
        lVar2 = -0x1a00000000000000;
      }
      lVar3 = -0x13ffffff919a9491;
      uVar4 = 0x745f737365636361;
      if (bVar6 != 0) {
        lVar3 = -0x1c00000000000000;
        uVar4 = 0x65707974;
      }
      if (bVar6 < 2) {
        lVar2 = lVar3;
        uVar9 = uVar4;
      }
      uVar4 = 0x6874646977;
      if (param_1 != 2) {
        uVar4 = 0x746867696568;
      }
      lVar3 = -0x1b00000000000000;
      if (param_1 != 2) {
        lVar3 = -0x1a00000000000000;
      }
      lVar5 = -0x13ffffff919a9491;
      uVar8 = 0x745f737365636361;
      if (param_1 != 0) {
        lVar5 = -0x1c00000000000000;
        uVar8 = 0x65707974;
      }
      if (param_1 < 2) {
        lVar3 = lVar5;
        uVar4 = uVar8;
      }
      if ((uVar9 == uVar4) && (lVar2 == lVar3)) break;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar9,lVar2,uVar4,lVar3,0);
      uVar11 = (uint)uVar9;
      _swift_bridgeObjectRelease(lVar2);
      _swift_bridgeObjectRelease(lVar3);
      if (((uVar9 & 1) != 0) ||
         (uVar10 = uVar10 + 1 & uStack_70,
         (*(ulong *)(lStack_68 + (uVar10 >> 3 & 0xfffffffffffff8)) >> (uVar10 & 0x3f) & 1) == 0))
      goto LAB_10499a340;
    }
    _swift_bridgeObjectRelease(lVar2);
    _swift_bridgeObjectRelease(lVar3);
    uVar11 = 1;
  }
LAB_10499a340:
  auVar12._8_4_ = uVar11 & 1;
  auVar12._0_8_ = uVar10;
  auVar12._12_4_ = 0;
  return auVar12;
}



/* Entry: 104999ff8; end: 10499a033;  */

void FUN_104999ff8(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  pcVar2 = FUN_1049b94e0;
  __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  FUN_1049b94e0(param_1);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,pcVar2);
  _swift_bridgeObjectRelease(pcVar2);
  __ss6HasherV9_finalizeSiyF();
                    /* WARNING: Could not recover jumptable at 0x00010499a0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x10499a368)(param_1,pcVar2);
  return;
}



/* Entry: 10499a034; end: 10499a117;  */

void FUN_10499a034(undefined8 param_1,code *param_2,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  pcVar2 = param_2;
  __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  (*param_2)(param_1);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,pcVar2);
  _swift_bridgeObjectRelease(pcVar2);
  __ss6HasherV9_finalizeSiyF();
                    /* WARNING: Could not recover jumptable at 0x00010499a0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,pcVar2);
  return;
}



/* Entry: 10499a118; end: 10499a15f;  */

void FUN_10499a118(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  *(undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 8) = param_4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10499a160);
  (*pcVar3)();
}



/* Entry: 10499a160; end: 10499a1c3;  */

void FUN_10499a160(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  func_0x000100102924(param_3,*(long *)(param_4 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10499a1c4);
  (*pcVar2)();
}



/* Entry: 10499a1c4; end: 10499b2a7;  */

undefined1  [16] FUN_10499a1c4(byte param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  uint uVar9;
  undefined1 auVar10 [16];
  
  uVar8 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 3 & 0xfffffffffffff8)) >> (param_2 & 0x3f) & 1) ==
      0) {
    uVar9 = 0;
  }
  else {
    while( true ) {
      bVar5 = *(byte *)(*(long *)(unaff_x20 + 0x30) + param_2);
      uVar7 = 0x6874646977;
      if (bVar5 != 2) {
        uVar7 = 0x746867696568;
      }
      lVar1 = -0x1b00000000000000;
      if (bVar5 != 2) {
        lVar1 = -0x1a00000000000000;
      }
      lVar2 = -0x13ffffff919a9491;
      uVar3 = 0x745f737365636361;
      if (bVar5 != 0) {
        lVar2 = -0x1c00000000000000;
        uVar3 = 0x65707974;
      }
      if (bVar5 < 2) {
        lVar1 = lVar2;
        uVar7 = uVar3;
      }
      uVar3 = 0x6874646977;
      if (param_1 != 2) {
        uVar3 = 0x746867696568;
      }
      lVar2 = -0x1b00000000000000;
      if (param_1 != 2) {
        lVar2 = -0x1a00000000000000;
      }
      lVar4 = -0x13ffffff919a9491;
      uVar6 = 0x745f737365636361;
      if (param_1 != 0) {
        lVar4 = -0x1c00000000000000;
        uVar6 = 0x65707974;
      }
      if (param_1 < 2) {
        lVar2 = lVar4;
        uVar3 = uVar6;
      }
      if ((uVar7 == uVar3) && (lVar1 == lVar2)) break;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar7,lVar1,uVar3,lVar2,0);
      uVar9 = (uint)uVar7;
      _swift_bridgeObjectRelease(lVar1);
      _swift_bridgeObjectRelease(lVar2);
      if (((uVar7 & 1) != 0) ||
         (param_2 = param_2 + 1 & ~uVar8,
         (*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 3 & 0xfffffffffffff8)) >> (param_2 & 0x3f) & 1)
         == 0)) goto LAB_10499a340;
    }
    _swift_bridgeObjectRelease(lVar1);
    _swift_bridgeObjectRelease(lVar2);
    uVar9 = 1;
  }
LAB_10499a340:
  auVar10._8_4_ = uVar9 & 1;
  auVar10._0_8_ = param_2;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 10499b2a8; end: 10499b367;  */

undefined1  [16] FUN_10499b2a8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 3 & 0xfffffffffffff8)) >> (param_3 & 0x3f) & 1) ==
      0) {
    uVar4 = 0;
  }
  else {
    uStack_50 = param_1;
    uStack_48 = param_2;
    do {
      puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      uStack_58 = puVar1[1];
      uStack_60 = *puVar1;
      func_0x000104994534(uStack_60,uStack_58);
      uVar2 = 0;
      FUN_1049ce214(&uStack_60,&uStack_50);
      uVar4 = (uint)uVar2;
      func_0x000104994548(uStack_60,uStack_58);
      if ((uVar2 & 1) != 0) break;
      param_3 = param_3 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 3 & 0xfffffffffffff8)) >> (param_3 & 0x3f) &
             1) != 0);
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = param_3;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 10499b368; end: 10499b467;  */

undefined1  [16] FUN_10499b368(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 3 & 0xfffffffffffff8)) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      uVar2 = param_1;
      uVar3 = param_2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 3 & 0xfffffffffffff8)) >> (uVar6 & 0x3f) & 1) == 0
         )) goto LAB_10499b448;
    }
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(uVar3);
    uVar7 = 1;
  }
LAB_10499b448:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 10499b468; end: 10499b523;  */

undefined8 FUN_10499b468(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  func_0x000100029284();
  _swift_bridgeObjectRelease(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1049a6d74();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x0001049be5e0(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 10499b524; end: 10499b537;  */

void FUN_10499b524(undefined8 *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long *unaff_x20;
  long lVar3;
  
  uVar2 = 0;
  lVar3 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar3);
  FUN_104999e9c();
  _swift_bridgeObjectRelease(lVar3);
  if ((uVar2 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1049a6ed8();
    }
    _objc_release(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 8));
    func_0x000100102924(*(long *)(lVar3 + 0x38) + param_2 * 0x20,param_1);
    FUN_1049c0614(param_2,lVar3);
    *unaff_x20 = lVar3;
  }
  return;
}



/* Entry: 10499b538; end: 10499ba0b;  */

void FUN_10499b538(undefined8 *param_1,long param_2,code *param_3,code *param_4)

{
  int iVar1;
  code *pcVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  pcVar2 = param_3;
  _swift_bridgeObjectRetain(lVar3);
  FUN_104999e9c();
  _swift_bridgeObjectRelease(lVar3);
  if (((ulong)pcVar2 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      (*param_4)();
    }
    _objc_release(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 8));
    func_0x000100102924(*(long *)(lVar3 + 0x38) + param_2 * 0x20,param_1);
    (*param_3)(param_2,lVar3);
    *unaff_x20 = lVar3;
  }
  return;
}



/* Entry: 10499ba0c; end: 10499ba27;  */

undefined8 * FUN_10499ba0c(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = *unaff_x20;
  puVar3 = param_2;
  puVar4 = param_2;
  FUN_104999e9c();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)puVar4 & 1;
  lVar1 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10499bb4c);
    (*pcVar2)();
  }
  lVar5 = *(long *)(lVar7 + 0x18);
  if ((lVar5 < lVar1) || ((param_3 & 1) == 0)) {
    if ((lVar5 < lVar1) || ((param_3 & 1) != 0)) {
      param_3 = param_3 & 1;
      FUN_1049a7be0(lVar1);
      puVar3 = param_2;
      FUN_104999e9c();
      if (((uint)puVar4 & 1) != (param_3 & 1)) {
        (*(code *)0x104993de8)(0);
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10499bb5c);
        (*pcVar2)();
      }
    }
    else {
      FUN_1049a6ed8();
    }
  }
  if (((ulong)puVar4 & 1) != 0) {
    puVar3 = (undefined8 *)(*(long *)(*unaff_x20 + 0x38) + (long)puVar3 * 0x20);
    func_0x000100183ab8(puVar3);
    uVar8 = *param_1;
    uVar10 = param_1[3];
    uVar9 = param_1[2];
    puVar3[1] = param_1[1];
    *puVar3 = uVar8;
    puVar3[3] = uVar10;
    puVar3[2] = uVar9;
    return puVar3;
  }
  FUN_10499a160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return param_2;
}



/* Entry: 10499ba28; end: 10499bb5b;  */

undefined8 *
FUN_10499ba28(undefined8 *param_1,undefined8 *param_2,uint param_3,code *param_4,code *param_5,
             code *param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = *unaff_x20;
  puVar3 = param_2;
  puVar4 = param_2;
  FUN_104999e9c();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)puVar4 & 1;
  lVar1 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10499bb4c);
    (*pcVar2)();
  }
  lVar5 = *(long *)(lVar7 + 0x18);
  if ((lVar5 < lVar1) || ((param_3 & 1) == 0)) {
    if ((lVar5 < lVar1) || ((param_3 & 1) != 0)) {
      param_3 = param_3 & 1;
      (*param_5)(lVar1);
      puVar3 = param_2;
      FUN_104999e9c();
      if (((uint)puVar4 & 1) != (param_3 & 1)) {
        (*param_6)(0);
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10499bb5c);
        (*pcVar2)();
      }
    }
    else {
      (*param_4)();
    }
  }
  if (((ulong)puVar4 & 1) != 0) {
    puVar3 = (undefined8 *)(*(long *)(*unaff_x20 + 0x38) + (long)puVar3 * 0x20);
    func_0x000100183ab8(puVar3);
    uVar8 = *param_1;
    uVar10 = param_1[3];
    uVar9 = param_1[2];
    puVar3[1] = param_1[1];
    *puVar3 = uVar8;
    puVar3[3] = uVar10;
    puVar3[2] = uVar9;
    return puVar3;
  }
  FUN_10499a160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return param_2;
}



/* Entry: 10499bb5c; end: 10499bb5f;  */

void FUN_10499bb5c(void)

{
  return;
}



/* Entry: 10499bb60; end: 10499bbf7;  */

void FUN_10499bb60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    _swift_unknownObjectRetain();
    _swift_unknownObjectRetain(param_2);
    _swift_unknownObjectRetain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_4);
    return;
  }
  return;
}



/* Entry: 10499bbf8; end: 10499bd87;  */

void FUN_10499bbf8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(0x113815800,auStack_78,1,0);
  uVar4 = uRam0000000113815818;
  uVar3 = uRam0000000113815810;
  uVar2 = uRam0000000113815808;
  lVar1 = lRam0000000113815800;
  lVar5 = lRam0000000113815800;
  uVar6 = uRam0000000113815808;
  uVar7 = uRam0000000113815810;
  uVar8 = uRam0000000113815818;
  if (lRam0000000113815800 == 0) {
    _swift_beginAccess(0x113815820,auStack_90,0,0);
    uVar8 = uRam0000000113815838;
    uVar7 = uRam0000000113815830;
    uVar6 = uRam0000000113815828;
    lVar5 = lRam0000000113815820;
    if (lRam0000000113815820 == 0) {
      return;
    }
    _swift_unknownObjectRetain(lRam0000000113815820);
    _swift_unknownObjectRetain(uVar6);
    _swift_unknownObjectRetain(uVar7);
    _swift_unknownObjectRetain(uVar8);
  }
  FUN_10499bb60(lVar1,uVar2,uVar3,uVar4);
  _swift_unknownObjectRetain(uVar7);
  _swift_unknownObjectRetain(uVar6);
  _swift_unknownObjectRetain(lVar5);
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRelease(uVar8);
  uVar4 = uRam0000000113815818;
  uVar3 = uRam0000000113815810;
  uVar2 = uRam0000000113815808;
  lVar1 = lRam0000000113815800;
  lRam0000000113815800 = lVar5;
  uRam0000000113815808 = uVar6;
  uRam0000000113815810 = uVar7;
  uRam0000000113815818 = param_1;
  _swift_unknownObjectRetain(uVar7);
  _swift_unknownObjectRetain(uVar6);
  _swift_unknownObjectRetain(lVar5);
  _swift_unknownObjectRetain(param_1);
  func_0x00010499bbac(lVar1,uVar2,uVar3,uVar4);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease_n(uVar7,2);
  _swift_unknownObjectRelease_n(uVar6,2);
  _swift_unknownObjectRelease_n(lVar5,2);
  return;
}



/* Entry: 10499bd88; end: 10499c01f;  */

undefined * FUN_10499bd88(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(0x113815800,auStack_68,0,0);
  puVar4 = puRam0000000113815818;
  uVar3 = uRam0000000113815810;
  uVar2 = uRam0000000113815808;
  lVar1 = lRam0000000113815800;
  puVar5 = puRam0000000113815818;
  lVar6 = lRam0000000113815800;
  uVar7 = uRam0000000113815808;
  uVar8 = uRam0000000113815810;
  if (lRam0000000113815800 == 0) {
    _swift_beginAccess(0x113815820,auStack_80,0,0);
    puVar5 = puRam0000000113815838;
    uVar8 = uRam0000000113815830;
    uVar7 = uRam0000000113815828;
    lVar6 = lRam0000000113815820;
    if (lRam0000000113815820 == 0) {
      puVar4 = PTR_PTR_1126adff8;
      _swift_getInitializedObjCClass(PTR_PTR_1126adff8);
      _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
      return puVar4;
    }
    _swift_unknownObjectRetain(lRam0000000113815820);
    _swift_unknownObjectRetain(uVar7);
    _swift_unknownObjectRetain(uVar8);
    _swift_unknownObjectRetain(puVar5);
  }
  FUN_10499bb60(lVar1,uVar2,uVar3,puVar4);
  _swift_unknownObjectRelease(uVar8);
  _swift_unknownObjectRelease(uVar7);
  _swift_unknownObjectRelease(lVar6);
  return puVar5;
}



/* Entry: 10499c020; end: 10499c187;  */

undefined * FUN_10499c020(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = 0x1130a2958;
  func_0x0001048db364();
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar10 = *(long *)(lVar11 + -8);
  puVar7 = &stack0xffffffffffffffa0 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  }
  else {
    func_0x0001048db364(0x1130a2960);
    puVar3 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    iVar1 = *(int *)(lVar11 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
    lVar11 = *(long *)(lVar10 + 0x48);
    _swift_retain();
    do {
      puVar5 = puVar7;
      FUN_10499d11c(param_1,puVar7,0x1130a2958);
      uVar9 = *(undefined8 *)(puVar7 + iVar1);
      puVar4 = puVar7;
      func_0x000101c17870();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10499c184);
        (*pcVar2)();
      }
      uVar6 = (ulong)puVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) =
           *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << ((ulong)puVar4 & 0x3f);
      lVar12 = *(long *)(puVar3 + 0x30);
      lVar10 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar10 + -8) + 0x20))
                (lVar12 + *(long *)(*(long *)(lVar10 + -8) + 0x48) * (long)puVar4,puVar7,lVar10);
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + (long)puVar4 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10499c188);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + lVar11;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Entry: 10499c188; end: 10499c1af;  */

undefined * FUN_10499c188(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  }
  else {
    func_0x0001048db364(0x11309cb88);
    puVar3 = puVar7;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &uStack_78;
      FUN_10499d11c(param_1,puVar5,0x1130a2938);
      uVar1 = uStack_78;
      uVar4 = uStack_78;
      FUN_104999e9c();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10499c9d4);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      func_0x000100102924(auStack_70,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10499c9d8);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Entry: 10499c1b0; end: 10499c3a7;  */

undefined * FUN_10499c1b0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  }
  else {
    func_0x0001048db364(0x1130a2940);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      _swift_bridgeObjectRetain(uVar3);
      _objc_retain();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10499c2b0);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10499c2b4);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar10 = puVar10 + 3;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 10499c3a8; end: 10499c6d7;  */

undefined * FUN_10499c3a8(long param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  }
  else {
    func_0x0001048db364(0x1130a2928);
    puVar6 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar10 = (undefined1 *)(param_1 + 0x22);
    do {
      bVar3 = puVar10[-2];
      uVar9 = (ulong)bVar3;
      uVar4 = puVar10[-1];
      uVar2 = *puVar10;
      uVar7 = 0;
      FUN_10499a034(uVar9,FUN_1049b94e0,0x10499a368);
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10499c4b8);
        (*pcVar5)();
      }
      uVar7 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar7 + 0x40) = *(ulong *)(puVar6 + uVar7 + 0x40) | 1L << (uVar9 & 0x3f);
      *(byte *)(*(long *)(puVar6 + 0x30) + uVar9) = bVar3;
      puVar1 = (undefined1 *)(*(long *)(puVar6 + 0x38) + uVar9 * 2);
      *puVar1 = uVar4;
      puVar1[1] = uVar2;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10499c4bc);
        (*pcVar5)();
      }
      puVar10 = puVar10 + 3;
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar6);
  }
  return puVar6;
}



/* Entry: 10499c6d8; end: 10499c9d7;  */

undefined * FUN_10499c6d8(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  }
  else {
    func_0x0001048db364(param_2);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10499c7d0);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10499c7d4);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar10 = puVar10 + 3;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 10499c9d8; end: 10499cb77;  */

void FUN_10499c9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(0x113815800,auStack_78,0,0);
  uVar4 = uRam0000000113815818;
  uVar3 = uRam0000000113815810;
  uVar2 = uRam0000000113815808;
  lVar1 = lRam0000000113815800;
  uVar7 = uRam0000000113815818;
  lVar5 = lRam0000000113815800;
  uVar8 = uRam0000000113815808;
  uVar9 = uRam0000000113815810;
  if (lRam0000000113815800 == 0) {
    _swift_beginAccess(0x113815820,auStack_90,0,0);
    uVar7 = uRam0000000113815838;
    uVar9 = uRam0000000113815830;
    uVar8 = uRam0000000113815828;
    lVar5 = lRam0000000113815820;
    if (lRam0000000113815820 == 0) {
      return;
    }
    _swift_unknownObjectRetain(lRam0000000113815820);
    _swift_unknownObjectRetain(uVar8);
    _swift_unknownObjectRetain(uVar9);
    _swift_unknownObjectRetain(uVar7);
  }
  FUN_10499bb60(lVar1,uVar2,uVar3,uVar4);
  _swift_unknownObjectRelease(uVar9);
  _swift_unknownObjectRelease(uVar8);
  _swift_unknownObjectRelease(lVar5);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  uStack_b0 = 0x10499872c;
  puStack_a8 = &UNK_1107ba4e0;
  ppuVar6 = &puStack_c0;
  uStack_a0 = param_2;
  uStack_98 = param_3;
  __Block_copy(ppuVar6);
  uVar2 = uStack_98;
  _swift_retain(param_3);
  _swift_release(uVar2);
  _objc_msgSend(uVar7,PTR_s_appLinkFromURL_handler__112525280,lVar5,ppuVar6);
  __Block_release(ppuVar6);
  _swift_unknownObjectRelease(uVar7);
  _objc_release(lVar5);
  return;
}



/* Entry: 10499cb78; end: 10499cb8f;  */

void FUN_10499cb78(long param_1,long param_2)

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



/* Entry: 10499cb90; end: 10499cd9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_10499cb90(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain();
  func_0x000100214a84();
  puVar2 = puVar3;
  func_0x000100214a84();
  _swift_release();
  FUN_10499ce1c();
  puVar4 = puVar3;
  _objc_allocWithZone();
  *(undefined8 *)(puVar4 + _DAT_1130a28a0) = param_1;
  *(undefined **)(puVar4 + _DAT_1130a2890) = puVar1;
  *(undefined **)(puVar4 + _DAT_1130a2898) = puVar2;
  puVar1 = PTR_s_init_1125d9248;
  puStack_50 = puVar4;
  puStack_48 = puVar3;
  _objc_retain(param_1);
  ppuVar5 = &puStack_50;
  _objc_msgSendSuper2(ppuVar5);
  ppuVar6 = ppuVar5;
  FUN_104996d10();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(ppuVar5);
  }
  else {
    _swift_willThrow();
    _objc_release(ppuVar5);
    if (param_2 != (undefined8 *)0x0) {
      puVar3 = puVar1;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
      _objc_autorelease();
      *param_2 = puVar3;
    }
    _swift_errorRelease(puVar1);
    ppuVar6 = (undefined **)0x0;
  }
  return ppuVar6;
}



/* Entry: 10499cd9c; end: 10499cdef;  */

void FUN_10499cd9c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar7 = 0;
  __s10Foundation3URLVMa();
  uVar10 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar10 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + (uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff))
           + 7 & 0xfffffffffffffff8;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + uVar10);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10 + 8);
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  ppuVar6 = &puStack_70;
  puVar4 = &UNK_1107ba4a0;
  _swift_allocObject(&UNK_1107ba4a0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar5;
  *(undefined8 *)(puVar4 + 0x20) = uVar8;
  _swift_retain(uVar5);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  pcStack_50 = FUN_10499d110;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x10499872c;
  puStack_58 = &UNK_1107ba4b8;
  puStack_48 = puVar4;
  __Block_copy(&puStack_70);
  puVar3 = puStack_48;
  _swift_retain(puVar4);
  _swift_release(puVar3);
  _objc_msgSend(uVar9,PTR_s_appLinkFromURL_handler__112525280,uVar5,ppuVar6);
  __Block_release(ppuVar6);
  _swift_release(puVar4);
  _objc_release(uVar5);
  return;
}



/* Entry: 10499cdf0; end: 10499ce1b;  */

void FUN_10499cdf0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  _swift_unknownObjectRetain(uVar1);
  FUN_10499bbf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10499ce1c; end: 10499ce47;  */

void FUN_10499ce1c(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e7a68);
  return;
}



/* Entry: 10499ce48; end: 10499ce4f;  */

void FUN_10499ce48(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010499ce4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x68))();
  return;
}



/* Entry: 10499ce50; end: 10499d07f;  */

long FUN_10499ce50(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10499d080; end: 10499d08f;  */

void FUN_10499d080(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10499d090; end: 10499d10f;  */

void FUN_10499d090(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10499d110; end: 10499d11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10499d110(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  if ((param_1 == 0) || (param_2 != 0)) {
    (*pcVar1)(0);
  }
  else {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8,0,pcVar1,*(undefined8 *)(unaff_x20 + 0x18))
    ;
    lVar2 = param_1;
    _objc_retain(param_1);
    puVar3 = puVar8;
    func_0x000100214a84();
    puVar4 = puVar8;
    func_0x000100214a84();
    _swift_release(puVar8);
    lVar5 = lVar9;
    _objc_allocWithZone();
    *(long *)(lVar5 + _DAT_1130a28a0) = param_1;
    *(undefined **)(lVar5 + _DAT_1130a2890) = puVar3;
    *(undefined **)(lVar5 + _DAT_1130a2898) = puVar4;
    puVar8 = PTR_s_init_1125d9248;
    lStack_60 = lVar5;
    lStack_58 = lVar9;
    _objc_retain(lVar2);
    plVar6 = &lStack_60;
    _objc_msgSendSuper2(plVar6);
    plVar7 = plVar6;
    FUN_104996d10();
    if (puVar8 == (undefined *)0x0) {
      _objc_release(plVar6);
      (*pcVar1)(plVar7,0);
      _objc_release(lVar2);
    }
    else {
      _swift_willThrow();
      _objc_release(plVar6);
      _swift_errorRetain(puVar8);
      (*pcVar1)(0,puVar8);
      _objc_release(lVar2);
      _swift_errorRelease(puVar8);
      _swift_errorRelease(puVar8);
    }
  }
  return;
}



/* Entry: 10499d11c; end: 10499d1ab;  */

undefined8 FUN_10499d11c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10499d1ac; end: 10499d1b7;  */

void FUN_10499d1ac(void)

{
  FUN_10499bd88();
  return;
}



/* Entry: 10499d1b8; end: 10499d1d3;  */

void FUN_10499d1b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10499d1d4; end: 10499d1db;  */

void FUN_10499d1d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = param_1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  __ss6HasherV5_seedABSi_tcfC(auStack_88,uVar3);
  puVar2 = auStack_88;
  __sSS4hash4intoys6HasherVz_tF(puVar2,uVar1,param_2);
  __ss6HasherV9_finalizeSiyF();
  _swift_bridgeObjectRelease(param_2);
  FUN_10499b368(param_1,puVar2);
  return;
}


