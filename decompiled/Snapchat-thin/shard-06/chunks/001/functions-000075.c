/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10447e924; end: 10447ea8b;  */

int FUN_10447e924(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10447e9a0;
        goto LAB_10447e984;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10447e984:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10447e9a0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10447ea8c; end: 10447eacb;  */

void FUN_10447ea8c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307d7c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd06acc;
  _swift_getWitnessTable(&UNK_10dd06acc,&UNK_110777528);
  puRam000000011307d7c8 = puVar1;
  return;
}



/* Entry: 10447eacc; end: 10447eb17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447eacc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307d7d0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10447eb18; end: 10447eb4b;  */

void FUN_10447eb18(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10447eb4c; end: 10447eb5b; -[_TtC15StartupServices15StartupServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447eb4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307d7d0));
  return;
}



/* Entry: 10447eb5c; end: 10447eb6b; -[ClientSwitchboardServices configFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447eb5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307d800));
  return;
}



/* Entry: 10447eb6c; end: 10447ebb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447eb6c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307d800) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10447ebb8; end: 10447ebeb;  */

void FUN_10447ebb8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10447ebec; end: 10447ebfb; -[ClientSwitchboardServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447ebec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307d800));
  return;
}



/* Entry: 10447ebfc; end: 10447ec87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447ebfc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  uVar3 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11307d830) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11307d838);
  puVar1[3] = uVar3;
  puVar1[4] = *(undefined8 *)(param_2 + 8);
  *puVar1 = param_1;
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _objc_msgSendSuper2(auStack_40,puVar2);
  return;
}



/* Entry: 10447ec88; end: 10447ece7; -[_TtC30SCFeatureStartupSignalServices28FeatureStartupSignalServices init] */

void FUN_10447ec88(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCFeatureStartupSignalServices.FeatureStartupSignalServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10447ecb4);
  (*pcVar1)();
}



/* Entry: 10447ece8; end: 10447ed4b; -[_TtC30SCFeatureStartupSignalServices28FeatureStartupSignalServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447ece8(long param_1)

{
  long lVar1;
  
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307d830));
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_11307d838))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307d838));
  return;
}



/* Entry: 10447ed4c; end: 10447ed5f;  */

undefined8 FUN_10447ed4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  if (*(char *)(param_1 + 3) == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1,param_1[1]);
    return uVar1;
  }
  return *param_1;
}



/* Entry: 10447ed60; end: 10447ee27;  */

undefined8 * FUN_10447ed60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  func_0x0001040b72bc(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 10447ee28; end: 10447ee73;  */

undefined8 * FUN_10447ee28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  func_0x0001002ab5f0(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 10447ee74; end: 10447ef17;  */

int FUN_10447ee74(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10447ef18; end: 10447ef33;  */

void FUN_10447ef18(undefined4 param_1)

{
  func_0x00010b88a598();
  uRam0000000113813760 = param_1;
  return;
}



/* Entry: 10447ef34; end: 10447ef7b; +[_TtC15SnapAttribution24AttributedTaskObjcHelper isMainActorThrottlerEnabled] */

bool FUN_10447ef34(void)

{
  if (lRam000000011363acd0 != -1) {
    _swift_once(0x11363acd0,FUN_10447ef18);
  }
  return iRam0000000113813760 != 0;
}



/* Entry: 10447ef7c; end: 10447efb3; +[_TtC15SnapAttribution24AttributedTaskObjcHelper shouldUseMainActorThrottlerFor:] */

uint FUN_10447ef7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10447efb4();
  _objc_release(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 10447efb4; end: 10447f313;  */

byte FUN_10447efb4(ulong param_1,ulong param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  _objc_retain();
  func_0x00010007c020();
  uVar2 = param_3 >> 2 & 0x3f;
  if (uVar2 < 0x12) {
    if (uVar2 == 5) {
      uVar4 = (uint)param_1;
      uVar2 = uVar4 & 0xff;
      uVar3 = uVar4 >> 5 & 7;
      if (uVar3 < 4) {
        if (uVar3 == 2) {
          if ((uVar4 & 0x1f) != 3) {
            return 0;
          }
          if (lRam000000011363acd0 != -1) {
            _swift_once(0x11363acd0,FUN_10447ef18);
          }
          return bRam0000000113813760 >> 3 & 1;
        }
        if (uVar3 != 3) {
          return 0;
        }
        if (uVar2 != 0x62) {
          return 0;
        }
        if (lRam000000011363acd0 != -1) {
          _swift_once(0x11363acd0,FUN_10447ef18);
        }
        return bRam0000000113813760 >> 4 & 1;
      }
      if (uVar3 == 4) {
        if (uVar2 != 0x84) {
          return 0;
        }
        bVar1 = bRam0000000113813760;
        if (lRam000000011363acd0 != -1) {
          _swift_once(0x11363acd0,FUN_10447ef18);
          bVar1 = bRam0000000113813760;
        }
        goto LAB_10447f154;
      }
      if (uVar3 != 5) {
        return 0;
      }
      if (uVar2 != 0xa1) {
        return 0;
      }
      bVar1 = bRam0000000113813760;
      if (lRam000000011363acd0 != -1) {
        _swift_once(0x11363acd0,FUN_10447ef18);
        bVar1 = bRam0000000113813760;
      }
    }
    else {
      if (uVar2 != 9) {
        if (uVar2 == 0xe) {
          if ((param_2 & 0xff) != 4) {
            return 0;
          }
          if (param_1 != 0) {
            return 0;
          }
          if (lRam000000011363acd0 != -1) {
            _swift_once(0x11363acd0,FUN_10447ef18);
          }
          return bRam0000000113813760 >> 6 & 1;
        }
        goto LAB_10447f0f8;
      }
      if ((param_1 & 0xff) != 0x82) {
        return 0;
      }
      bVar1 = bRam0000000113813761;
      if (lRam000000011363acd0 != -1) {
        _swift_once(0x11363acd0,FUN_10447ef18);
        bVar1 = bRam0000000113813761;
      }
    }
    return bVar1 >> 1 & 1;
  }
  if (uVar2 < 0x1d) {
    if (uVar2 == 0x12) {
      if ((param_1 & 0xff) != 0x82) {
        return 0;
      }
      if (lRam000000011363acd0 != -1) {
        _swift_once(0x11363acd0,FUN_10447ef18);
      }
      return bRam0000000113813760 >> 7;
    }
    if (uVar2 == 0x1a) {
      if ((param_1 & 0xff) != 3) {
        return 0;
      }
      bVar1 = bRam0000000113813761;
      if (lRam000000011363acd0 != -1) {
        _swift_once(0x11363acd0,FUN_10447ef18);
        bVar1 = bRam0000000113813761;
      }
LAB_10447f098:
      return bVar1 & 1;
    }
  }
  else {
    if (uVar2 == 0x1e) {
      if ((param_1 & 0xff) != 6) {
        return 0;
      }
      bVar1 = bRam0000000113813761;
      if (lRam000000011363acd0 != -1) {
        _swift_once(0x11363acd0,FUN_10447ef18);
        bVar1 = bRam0000000113813761;
      }
LAB_10447f154:
      return bVar1 >> 2 & 1;
    }
    if (uVar2 == 0x1d) {
      if ((param_1 & 0xff) != 4) {
        return 0;
      }
      bVar1 = bRam0000000113813760;
      if (lRam000000011363acd0 != -1) {
        _swift_once(0x11363acd0,FUN_10447ef18);
        bVar1 = bRam0000000113813760;
      }
      goto LAB_10447f098;
    }
  }
LAB_10447f0f8:
  func_0x00010007d980();
  return 0;
}



/* Entry: 10447f314; end: 10447f323; -[_TtC26LensDownloadLoggerServices28SCLensDownloadLoggerServices lensResourceDownloadLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447f314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307d870));
  return;
}



/* Entry: 10447f324; end: 10447f387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447f324(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307d868) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307d870) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10447f388; end: 10447f3e3; -[_TtC26LensDownloadLoggerServices28SCLensDownloadLoggerServices init] */

void FUN_10447f388(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensDownloadLoggerServices.SCLensDownloadLoggerServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10447f3b4);
  (*pcVar1)();
}



/* Entry: 10447f3e4; end: 10447f46f; -[_TtC26LensDownloadLoggerServices28SCLensDownloadLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447f3e4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307d868));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307d870));
  return;
}



/* Entry: 10447f470; end: 10447f483;  */

bool FUN_10447f470(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10447f484; end: 10447f52f;  */

void FUN_10447f484(void)

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



/* Entry: 10447f530; end: 10447f7cf;  */

void FUN_10447f530(undefined1 *param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_2 + 0x18,auStack_78,0x20,0);
  lVar8 = *(long *)(param_2 + 0x18);
  if (*(long *)(lVar8 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar8);
    lVar1 = param_3;
    uVar2 = param_4;
    func_0x000100029284();
    if ((uVar2 & 1) != 0) {
      uVar9 = *(ulong *)(*(long *)(lVar8 + 0x38) + lVar1 * 8);
      _swift_bridgeObjectRetain(uVar9);
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(lVar8);
      puVar4 = &UNK_110777a18;
      _swift_allocObject(&UNK_110777a18,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = param_5;
      *(undefined8 *)(puVar4 + 0x18) = param_6;
      _swift_retain(param_6);
      uVar2 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar9;
      if ((uVar2 & 1) == 0) {
        uVar5 = 0;
        FUN_10447fcf4(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
      }
      uVar2 = *(ulong *)(uVar5 + 0x10);
      uVar9 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
        uVar9 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_10447fcf4(uVar9,uVar2 + 1,1,uVar5);
      }
      *(ulong *)(uVar9 + 0x10) = uVar2 + 1;
      lVar8 = uVar9 + uVar2 * 0x10;
      *(undefined8 *)(lVar8 + 0x20) = 0x104480bb0;
      *(undefined **)(lVar8 + 0x28) = puVar4;
      _swift_beginAccess(param_2 + 0x18,auStack_78,0x21,0);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRetain(uVar9);
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      _swift_isUniquelyReferenced_nonNull_native(uVar3);
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x18) = 0x8000000000000000;
      FUN_10447fe24(uVar9,param_3,param_4,uVar3);
      _swift_bridgeObjectRelease(param_4);
      *(undefined8 *)(param_2 + 0x18) = uVar7;
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(uVar9);
      uVar6 = 1;
      goto LAB_10447f768;
    }
    _swift_bridgeObjectRelease(lVar8);
  }
  _swift_endAccess(auStack_78);
  lVar8 = 0x11307da70;
  func_0x0001000285a8(0x11307da70,&UNK_10dd06dd0);
  _swift_allocObject();
  *(undefined8 *)(lVar8 + 0x18) = 2;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  puVar4 = &UNK_1107779f0;
  _swift_allocObject(&UNK_1107779f0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_5;
  *(undefined8 *)(puVar4 + 0x18) = param_6;
  *(code **)(lVar8 + 0x20) = FUN_104480b84;
  *(undefined **)(lVar8 + 0x28) = puVar4;
  _swift_beginAccess(param_2 + 0x18,auStack_78,0x21,0);
  _swift_retain(param_6);
  _swift_bridgeObjectRetain(param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0x8000000000000000;
  FUN_10447fe24(lVar8,param_3,param_4,uVar3);
  _swift_bridgeObjectRelease(param_4);
  *(undefined8 *)(param_2 + 0x18) = uVar7;
  _swift_endAccess(auStack_78);
  uVar6 = 0;
LAB_10447f768:
  *param_1 = uVar6;
  return;
}



/* Entry: 10447f7d0; end: 10447f8b7;  */

void FUN_10447f7d0(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x18,auStack_58,0x21,0);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain(uVar3);
  func_0x000100029284();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = 0;
  if ((param_4 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *(long *)(param_2 + 0x18);
    if ((uVar1 & 1) == 0) {
      func_0x00010447ff74();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_3 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_3 * 8);
    func_0x000104480380(param_3,lVar2);
    *(long *)(param_2 + 0x18) = lVar2;
  }
  *param_1 = uVar3;
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 10447f8b8; end: 10447f8e3;  */

void FUN_10447f8b8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10447f8e4; end: 10447f92b;  */

void FUN_10447f8e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  func_0x000100ba1a9c(param_1,param_2,param_3);
  return;
}



/* Entry: 10447f92c; end: 10447fb8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447f92c(double param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar2 = 0;
  uStack_c0 = param_5;
  uStack_b8 = param_6;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (param_2 != 0) {
    lVar3 = param_2;
    lStack_b0 = param_3;
    _objc_retain();
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 != 0) {
      func_0x00010bf70320();
      _swift_unknownObjectRelease(param_4);
      if (0.0 < param_1) {
        _objc_retain();
        uVar4 = uStack_c0;
        func_0x00010bf5e5e0(uStack_c0);
        _objc_retainAutoreleasedReturnValue();
        __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar7);
        _objc_release(uVar4);
        __s10Foundation4DateV18addingTimeIntervalyACSdF(lVar7 - extraout_x12,param_1);
        (**(code **)(lVar8 + 8))(lVar7,lVar2);
        lVar5 = 0;
        FUN_10448058c();
        _swift_allocObject();
        *(long *)(lVar5 + 0x10) = lVar3;
        (**(code **)(lVar8 + 0x20))(lVar5 + _DAT_11307d8c8,lVar7 - extraout_x12,lVar2);
        uVar4 = param_7;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_7,param_8);
        func_0x00010c1d0560(uStack_b8);
        _swift_release(lVar5);
        _objc_release(uVar4);
      }
    }
    _objc_release(lVar3);
    param_3 = lStack_b0;
  }
  uVar4 = 0x11307da60;
  uStack_90 = param_9;
  uStack_88 = param_7;
  uStack_80 = param_8;
  func_0x0001000285a8(0x11307da60,&UNK_10dd06dc0);
  func_0x000100087bd4(&lStack_78,FUN_104480b68,alStack_a0,uVar4);
  lVar2 = lStack_78;
  if (lStack_78 != 0) {
    uVar6 = *(ulong *)(lStack_78 + 0x10);
    alStack_a0[0] = param_2;
    lVar7 = param_3;
    if (uVar6 != 0) {
      uVar9 = 0;
      puVar10 = (undefined8 *)(lStack_78 + 0x28);
      lStack_78 = param_3;
      do {
        if (*(ulong *)(lVar2 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10447fb8c);
          (*pcVar1)();
        }
        uVar9 = uVar9 + 1;
        pcVar1 = (code *)puVar10[-1];
        uVar4 = *puVar10;
        _swift_retain(uVar4);
        (*pcVar1)(alStack_a0,&lStack_78);
        _swift_release(uVar4);
        puVar10 = puVar10 + 2;
        lVar7 = lStack_78;
      } while (uVar6 != uVar9);
    }
    lStack_78 = lVar7;
    _swift_bridgeObjectRelease(lVar2);
  }
  return;
}



/* Entry: 10447fb8c; end: 10447fc2b; -[SCCachingDeviceDependentAssetURLResolver lensResourceForLensAsset:lens:completion:] */

void FUN_10447fb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  __Block_copy(param_5);
  __Block_copy();
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_1);
  FUN_1044807e8(param_3,param_4,param_1,param_5);
  __Block_release(param_5);
  __Block_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10447fc2c; end: 10447fc8b; -[SCCachingDeviceDependentAssetURLResolver init] */

void FUN_10447fc2c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDeviceDependentAssetEndpoint.CachingDeviceDependentAssetURLResolver",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10447fc58);
  (*pcVar1)();
}



/* Entry: 10447fc8c; end: 10447fcf3; -[SCCachingDeviceDependentAssetURLResolver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10447fc8c(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307d8b0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307d8b8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307d8c0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307d8a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11307d8a8));
  return;
}



/* Entry: 10447fcf4; end: 10447fe23;  */

undefined * FUN_10447fcf4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10447fe24);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x11307da70;
    func_0x0001000285a8(0x11307da70,&UNK_10dd06dd0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d3a690;
    func_0x0001000285a8(0x112d3a690,&UNK_10d93eac0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10447fe24; end: 1044800e3;  */

void FUN_10447fe24(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10447fefc);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1044800e4(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10447fec4);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010447ff74();
    lVar6 = *unaff_x20;
    goto joined_r0x00010447ff10;
  }
  lVar6 = *unaff_x20;
joined_r0x00010447ff10:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10447ff74);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1044800e4; end: 10448052f;  */

void FUN_1044800e4(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x11307da68;
  func_0x0001000285a8(0x11307da68,&UNK_10dd06dc8);
  lVar7 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10448034c:
    _swift_release(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10448037c);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_10448034c;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar18);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar6,uVar3);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x104480380);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 104480530; end: 104480543;  */

void FUN_104480530(void)

{
  FUN_104480af4();
  return;
}



/* Entry: 104480544; end: 104480563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104480544(double param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (param_2 != 0) {
    lVar6 = param_2;
    lStack_b0 = param_3;
    _objc_retain();
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 != 0) {
      func_0x00010bf70320();
      _swift_unknownObjectRelease(lVar8);
      if (0.0 < param_1) {
        _objc_retain();
        uVar7 = uStack_c0;
        func_0x00010bf5e5e0(uStack_c0);
        _objc_retainAutoreleasedReturnValue();
        __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar10);
        _objc_release(uVar7);
        __s10Foundation4DateV18addingTimeIntervalyACSdF(lVar10 - extraout_x12,param_1);
        (**(code **)(lVar11 + 8))(lVar10,lVar5);
        lVar8 = 0;
        FUN_10448058c();
        _swift_allocObject();
        *(long *)(lVar8 + 0x10) = lVar6;
        (**(code **)(lVar11 + 0x20))(lVar8 + _DAT_11307d8c8,lVar10 - extraout_x12,lVar5);
        uVar7 = uVar2;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
        func_0x00010c1d0560(uStack_b8);
        _swift_release(lVar8);
        _objc_release(uVar7);
      }
    }
    _objc_release(lVar6);
    param_3 = lStack_b0;
  }
  uVar7 = 0x11307da60;
  uStack_90 = uVar3;
  uStack_88 = uVar2;
  uStack_80 = uVar1;
  func_0x0001000285a8(0x11307da60,&UNK_10dd06dc0);
  func_0x000100087bd4(&lStack_78,FUN_104480b68,alStack_a0,uVar7);
  lVar8 = lStack_78;
  if (lStack_78 != 0) {
    uVar9 = *(ulong *)(lStack_78 + 0x10);
    alStack_a0[0] = param_2;
    lVar5 = param_3;
    if (uVar9 != 0) {
      uVar12 = 0;
      puVar13 = (undefined8 *)(lStack_78 + 0x28);
      lStack_78 = param_3;
      do {
        if (*(ulong *)(lVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10447fb8c);
          (*pcVar4)();
        }
        uVar12 = uVar12 + 1;
        pcVar4 = (code *)puVar13[-1];
        uVar1 = *puVar13;
        _swift_retain(uVar1);
        (*pcVar4)(alStack_a0,&lStack_78);
        _swift_release(uVar1);
        puVar13 = puVar13 + 2;
        lVar5 = lStack_78;
      } while (uVar9 != uVar12);
    }
    lStack_78 = lVar5;
    _swift_bridgeObjectRelease(lVar8);
  }
  return;
}



/* Entry: 104480564; end: 104480583;  */

void FUN_104480564(void)

{
  _objc_opt_self(&PTR_PTR_1129bd8b0);
  return;
}



/* Entry: 104480584; end: 10448058b;  */

void FUN_104480584(void)

{
  if (lRam000000011307d920 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e80b598);
  return;
}



/* Entry: 10448058c; end: 1044805c3;  */

void FUN_10448058c(undefined8 param_1)

{
  if (lRam000000011307d920 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e80b598);
  return;
}



/* Entry: 1044805c4; end: 10448063f;  */

void FUN_1044805c4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 104480640; end: 1044807a7;  */

int FUN_104480640(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1044806bc;
        goto LAB_1044806a0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044806a0:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1044806bc:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1044807a8; end: 1044807e7;  */

void FUN_1044807a8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307da58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd06d94;
  _swift_getWitnessTable(&UNK_10dd06d94,&UNK_110777958);
  puRam000000011307da58 = puVar1;
  return;
}



/* Entry: 1044807e8; end: 104480aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044807e8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long extraout_x8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  char cStack_61;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar14 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &UNK_110777978;
  uVar8 = 0x18;
  _swift_allocObject(&UNK_110777978,0x18,7);
  *(long *)(puVar9 + 0x10) = param_4;
  puStack_b0 = puVar9;
  __Block_copy(param_4);
  lStack_b8 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
    uVar8 = 0xe000000000000000;
  }
  else {
    lVar13 = param_1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_1);
  }
  puVar9 = *(undefined **)(param_3 + _DAT_11307d8a0);
  lVar4 = lVar13;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar13,uVar8);
  puStack_c0 = puVar9;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = _DAT_11307d8c8;
  if (puVar9 != (undefined *)0x0) {
    uVar5 = *(undefined8 *)(param_3 + _DAT_11307d8c0);
    uStack_c8 = param_2;
    func_0x00010bf5e5e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar14);
    _objc_release(uVar5);
    puVar6 = puVar9 + lVar4;
    __s10Foundation4DateV1goiySbAC_ACtFZ(puVar6,puVar14);
    (**(code **)(lVar12 + 8))(puVar14,lVar3);
    if (((ulong)puVar6 & 1) != 0) {
      _swift_bridgeObjectRelease(uVar8);
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(puVar9 + 0x10),0);
      _swift_release(puStack_b0);
      goto LAB_104480ac8;
    }
    _swift_release(puVar9);
  }
  puVar9 = puStack_b0;
  uVar5 = *(undefined8 *)(param_3 + _DAT_11307d8a8);
  pcStack_78 = FUN_104480aec;
  puStack_70 = puStack_b0;
  puStack_90 = (undefined *)uVar5;
  puStack_88 = (undefined *)lVar13;
  pcStack_80 = (code *)uVar8;
  func_0x000100087bd4(&cStack_61,FUN_104480bb8,&puStack_a0,&UNK_110777958);
  if (cStack_61 != '\0') {
    _swift_release(puVar9);
    _swift_bridgeObjectRelease(uVar8);
    return;
  }
  uVar10 = *(undefined8 *)(param_3 + _DAT_11307d8b8);
  uVar11 = *(undefined8 *)(param_3 + _DAT_11307d8c0);
  uStack_c8 = *(undefined8 *)(param_3 + _DAT_11307d8b0);
  puVar6 = &UNK_1107779a0;
  _swift_allocObject(&UNK_1107779a0,0x40,7);
  puVar1 = puStack_c0;
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 *)(puVar6 + 0x18) = uVar11;
  *(undefined **)(puVar6 + 0x20) = puStack_c0;
  *(long *)(puVar6 + 0x28) = lVar13;
  *(undefined8 *)(puVar6 + 0x30) = uVar8;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  pcStack_80 = FUN_104480bcc;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1019c8c80;
  puStack_88 = &UNK_1107779b8;
  ppuVar7 = &puStack_a0;
  pcStack_78 = (code *)puVar6;
  __Block_copy(ppuVar7);
  pcVar2 = pcStack_78;
  _objc_retain(uVar10);
  _swift_unknownObjectRetain(uVar11);
  _objc_retain(puVar1);
  _swift_retain(uVar5);
  _swift_release(pcVar2);
  func_0x00010c096840(uStack_c8);
  __Block_release(ppuVar7);
LAB_104480ac8:
  _swift_release(puVar9);
  return;
}



/* Entry: 104480aec; end: 104480af3;  */

void FUN_104480aec(undefined8 param_1,long param_2)

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



/* Entry: 104480af4; end: 104480b57;  */

void FUN_104480af4(void)

{
  long unaff_x20;
  
  FUN_10447f530(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 104480b58; end: 104480b67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104480b58(double param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (param_2 != 0) {
    lVar6 = param_2;
    lStack_b0 = param_3;
    _objc_retain();
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 != 0) {
      func_0x00010bf70320();
      _swift_unknownObjectRelease(lVar8);
      if (0.0 < param_1) {
        _objc_retain();
        uVar7 = uStack_c0;
        func_0x00010bf5e5e0(uStack_c0);
        _objc_retainAutoreleasedReturnValue();
        __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar10);
        _objc_release(uVar7);
        __s10Foundation4DateV18addingTimeIntervalyACSdF(lVar10 - extraout_x12,param_1);
        (**(code **)(lVar11 + 8))(lVar10,lVar5);
        lVar8 = 0;
        FUN_10448058c();
        _swift_allocObject();
        *(long *)(lVar8 + 0x10) = lVar6;
        (**(code **)(lVar11 + 0x20))(lVar8 + _DAT_11307d8c8,lVar10 - extraout_x12,lVar5);
        uVar7 = uVar2;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
        func_0x00010c1d0560(uStack_b8);
        _swift_release(lVar8);
        _objc_release(uVar7);
      }
    }
    _objc_release(lVar6);
    param_3 = lStack_b0;
  }
  uVar7 = 0x11307da60;
  uStack_90 = uVar3;
  uStack_88 = uVar2;
  uStack_80 = uVar1;
  func_0x0001000285a8(0x11307da60,&UNK_10dd06dc0);
  func_0x000100087bd4(&lStack_78,FUN_104480b68,alStack_a0,uVar7);
  lVar8 = lStack_78;
  if (lStack_78 != 0) {
    uVar9 = *(ulong *)(lStack_78 + 0x10);
    alStack_a0[0] = param_2;
    lVar5 = param_3;
    if (uVar9 != 0) {
      uVar12 = 0;
      puVar13 = (undefined8 *)(lStack_78 + 0x28);
      lStack_78 = param_3;
      do {
        if (*(ulong *)(lVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10447fb8c);
          (*pcVar4)();
        }
        uVar12 = uVar12 + 1;
        pcVar4 = (code *)puVar13[-1];
        uVar1 = *puVar13;
        _swift_retain(uVar1);
        (*pcVar4)(alStack_a0,&lStack_78);
        _swift_release(uVar1);
        puVar13 = puVar13 + 2;
        lVar5 = lStack_78;
      } while (uVar9 != uVar12);
    }
    lStack_78 = lVar5;
    _swift_bridgeObjectRelease(lVar8);
  }
  return;
}



/* Entry: 104480b68; end: 104480b83;  */

void FUN_104480b68(void)

{
  long unaff_x20;
  
  FUN_10447f7d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 104480b84; end: 104480bab;  */

void FUN_104480b84(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*param_2);
  return;
}



/* Entry: 104480bac; end: 104480bb7;  */

void FUN_104480bac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 104480bb8; end: 104480bcb;  */

void FUN_104480bb8(void)

{
  FUN_104480530();
  return;
}



/* Entry: 104480bcc; end: 104480bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104480bcc(double param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (param_2 != 0) {
    lVar6 = param_2;
    lStack_b0 = param_3;
    _objc_retain();
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 != 0) {
      func_0x00010bf70320();
      _swift_unknownObjectRelease(lVar8);
      if (0.0 < param_1) {
        _objc_retain();
        uVar7 = uStack_c0;
        func_0x00010bf5e5e0(uStack_c0);
        _objc_retainAutoreleasedReturnValue();
        __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar10);
        _objc_release(uVar7);
        __s10Foundation4DateV18addingTimeIntervalyACSdF(lVar10 - extraout_x12,param_1);
        (**(code **)(lVar11 + 8))(lVar10,lVar5);
        lVar8 = 0;
        FUN_10448058c();
        _swift_allocObject();
        *(long *)(lVar8 + 0x10) = lVar6;
        (**(code **)(lVar11 + 0x20))(lVar8 + _DAT_11307d8c8,lVar10 - extraout_x12,lVar5);
        uVar7 = uVar2;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
        func_0x00010c1d0560(uStack_b8);
        _swift_release(lVar8);
        _objc_release(uVar7);
      }
    }
    _objc_release(lVar6);
    param_3 = lStack_b0;
  }
  uVar7 = 0x11307da60;
  uStack_90 = uVar3;
  uStack_88 = uVar2;
  uStack_80 = uVar1;
  func_0x0001000285a8(0x11307da60,&UNK_10dd06dc0);
  func_0x000100087bd4(&lStack_78,FUN_104480b68,alStack_a0,uVar7);
  lVar8 = lStack_78;
  if (lStack_78 != 0) {
    uVar9 = *(ulong *)(lStack_78 + 0x10);
    alStack_a0[0] = param_2;
    lVar5 = param_3;
    if (uVar9 != 0) {
      uVar12 = 0;
      puVar13 = (undefined8 *)(lStack_78 + 0x28);
      lStack_78 = param_3;
      do {
        if (*(ulong *)(lVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10447fb8c);
          (*pcVar4)();
        }
        uVar12 = uVar12 + 1;
        pcVar4 = (code *)puVar13[-1];
        uVar1 = *puVar13;
        _swift_retain(uVar1);
        (*pcVar4)(alStack_a0,&lStack_78);
        _swift_release(uVar1);
        puVar13 = puVar13 + 2;
        lVar5 = lStack_78;
      } while (uVar9 != uVar12);
    }
    lStack_78 = lVar5;
    _swift_bridgeObjectRelease(lVar8);
  }
  return;
}



/* Entry: 104480bd0; end: 104480c27;  */

void FUN_104480bd0(undefined8 param_1,long param_2,long param_3)

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



/* Entry: 104480c28; end: 104480da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104480c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307da80) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307da88) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307da90) = param_3;
  lVar1 = _DAT_11307da98;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  (**(code **)(lVar6 + 0x10))(unaff_x20 + lVar1,param_4,lVar2);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar3 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f201d70);
  uVar4 = param_5;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  *(undefined8 *)(unaff_x20 + _DAT_11307daa0) = uVar4;
  puVar5 = auStack_70;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_5);
  (**(code **)(lVar6 + 8))(param_4,lVar2);
  return puVar5;
}



/* Entry: 104480da8; end: 104480f5b;  */

void FUN_104480da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_110777c58;
  _swift_allocObject(&UNK_110777c58,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  uStack_50 = 0x104482670;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110777c70;
  puStack_48 = puVar1;
  __Block_copy(&puStack_70);
  puVar1 = puStack_48;
  _swift_bridgeObjectRetain(param_4);
  _swift_errorRetain(param_1);
  _swift_retain(param_6);
  _swift_release(puVar1);
  func_0x00010c0f7fc0(param_2);
  __Block_release(ppuVar2);
  return;
}



/* Entry: 104480f5c; end: 104480f83;  */

void FUN_104480f5c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c290a40(param_1,param_2,6);
                    /* WARNING: Could not recover jumptable at 0x00010c2907d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_useProtobufContentType_112681c18);
  return;
}



/* Entry: 104480f84; end: 10448111b;  */

void FUN_104480f84(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  ulong param_5,undefined8 *param_6,code *param_7,undefined8 param_8,code *param_9)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if (param_6 == (undefined8 *)0x0) {
    if ((param_2 == 0) && (param_5 >> 0x3c < 0xf)) {
      uVar1 = (uint)(param_5 >> 0x20);
      uVar3 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar3 == 0) {
          if ((param_5 & 0xff000000000000) != 0) goto LAB_1044810a4;
          goto LAB_104481000;
        }
        if ((long)(int)param_4 != (long)param_4 >> 0x20) goto LAB_104481088;
      }
      else if (uVar3 == 2) {
        if (param_4[2] != param_4[3]) {
LAB_104481088:
          func_0x000100de78a0(param_4,param_5);
LAB_1044810a4:
          param_6 = param_4;
          uVar2 = param_5;
          FUN_104481c44(param_4);
          uVar1 = (uint)uVar2;
          if ((uVar1 & 0xff) == 1) {
            (*param_7)();
            func_0x0001000b44c0(param_4,param_5);
            uVar1 = 1;
          }
          else {
            (*param_9)();
            func_0x0001000b44c0(param_4,param_5);
          }
          if ((uVar1 & 0xff) != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_release_11034d2d0)(param_6);
            return;
          }
          goto _swift_errorRelease;
        }
      }
      else {
LAB_104481000:
        func_0x0001000b44c0(param_4,param_5);
        param_1 = param_4;
      }
    }
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      func_0x00010c252ee0();
      param_1 = param_3;
    }
    FUN_104481b90();
    param_6 = (undefined8 *)&UNK_110777d18;
    _swift_allocError(&UNK_110777d18,param_1,0,0);
    *param_1 = param_3;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    _swift_errorRetain(param_6);
  }
  (*param_7)();
_swift_errorRelease:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_6);
  return;
}



/* Entry: 10448111c; end: 1044811cb; -[SCDeviceDependentAssetEndpointClient lensResourceForLensAsset:lens:completion:] */

void FUN_10448111c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  __Block_copy();
  puVar1 = &UNK_110777a78;
  _swift_allocObject(&UNK_110777a78,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  FUN_104481544(param_3,FUN_104481b6c,puVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1044811cc; end: 10448122b; -[SCDeviceDependentAssetEndpointClient init] */

void FUN_1044811cc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDeviceDependentAssetEndpoint.DeviceDependentAssetEndpointClient",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044811f8);
  (*pcVar1)();
}



/* Entry: 10448122c; end: 1044812a7; -[SCDeviceDependentAssetEndpointClient .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10448122c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307da80));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307da88));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307da90));
  lVar1 = _DAT_11307da98;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307daa0));
  return;
}



/* Entry: 1044812a8; end: 104481543;  */

undefined1  [16] FUN_1044812a8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x21;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = 0;
  uVar5 = param_2;
  uStack_448 = param_1;
  __s10Foundation8TimeZoneVMa();
  lVar7 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&uStack_460 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_e8 = 0;
  uStack_e0 = 0xe000000000000000;
  uStack_c8 = 0;
  uStack_c0 = 0xe000000000000000;
  uStack_b8 = 0;
  uStack_b0 = 1;
  uStack_a8 = 0;
  uStack_a0 = 0xe000000000000000;
  uStack_458 = 0xc000000000000000;
  uStack_460 = 0;
  uStack_90 = 0xc000000000000000;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0xf000000000000000;
  __s10Foundation8TimeZoneV7currentACvgZ(lVar6);
  __s10Foundation8TimeZoneV10identifierSSvg();
  (**(code **)(lVar7 + 8))(lVar6,lVar2);
  lStack_d8 = lVar3;
  uStack_d0 = uVar5;
  if (param_4 != 0) {
    uVar1 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar1 = param_4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uStack_e8 = param_3;
      uStack_e0 = param_4;
      _swift_bridgeObjectRetain(param_4);
    }
  }
  uStack_378 = uStack_458;
  uStack_380 = uStack_460;
  FUN_1044824a4(&uStack_2f0);
  uStack_328 = uStack_2a8;
  uStack_330 = uStack_2b0;
  uStack_318 = uStack_298;
  uStack_320 = uStack_2a0;
  uStack_308 = uStack_288;
  uStack_310 = uStack_290;
  uStack_2f8 = uStack_278;
  uStack_300 = uStack_280;
  uStack_368 = uStack_2e8;
  uStack_370 = uStack_2f0;
  uStack_358 = uStack_2d8;
  lStack_360 = uStack_2e0;
  uStack_348 = uStack_2c8;
  uStack_350 = uStack_2d0;
  uStack_338 = uStack_2b8;
  uStack_340 = uStack_2c0;
  uStack_390 = uStack_448;
  uStack_208 = uStack_80;
  uStack_210 = uStack_88;
  uStack_1f8 = uStack_70;
  uStack_200 = uStack_78;
  uStack_228 = uStack_a0;
  uStack_230 = uStack_a8;
  uStack_218 = uStack_90;
  uStack_220 = uStack_98;
  uStack_238 = CONCAT71(uStack_af,uStack_b0);
  uStack_248 = uStack_c0;
  uStack_250 = uStack_c8;
  uStack_240 = uStack_b8;
  uStack_268 = uStack_e0;
  uStack_270 = uStack_e8;
  uStack_258 = uStack_d0;
  lStack_260 = lStack_d8;
  uStack_1e8 = uStack_e0;
  uStack_1f0 = uStack_e8;
  uStack_1d8 = uStack_d0;
  lStack_1e0 = lStack_d8;
  uStack_1c8 = uStack_c0;
  uStack_1d0 = uStack_c8;
  uStack_1c0 = uStack_b8;
  uStack_1a8 = uStack_a0;
  uStack_1b0 = uStack_a8;
  uStack_198 = uStack_90;
  uStack_1a0 = uStack_98;
  uStack_188 = uStack_80;
  uStack_190 = uStack_88;
  uStack_178 = uStack_70;
  uStack_180 = uStack_78;
  uStack_388 = param_2;
  uStack_1b8 = uStack_238;
  func_0x0001044824bc(&uStack_1f0);
  uStack_128 = uStack_328;
  uStack_130 = uStack_330;
  uStack_118 = uStack_318;
  uStack_120 = uStack_320;
  uStack_108 = uStack_308;
  uStack_110 = uStack_310;
  uStack_f8 = uStack_2f8;
  uStack_100 = uStack_300;
  uStack_168 = uStack_368;
  uStack_170 = uStack_370;
  uStack_158 = uStack_358;
  uStack_160 = lStack_360;
  uStack_148 = uStack_348;
  uStack_150 = uStack_350;
  uStack_138 = uStack_338;
  uStack_140 = uStack_340;
  _swift_bridgeObjectRetain(param_2);
  FUN_1044824c0(&uStack_270,&uStack_430);
  puVar4 = &uStack_170;
  func_0x0001044824fc(puVar4,0x11307daf8,&UNK_10dd06f00);
  uStack_328 = uStack_1a8;
  uStack_330 = uStack_1b0;
  uStack_318 = uStack_198;
  uStack_320 = uStack_1a0;
  uStack_308 = uStack_188;
  uStack_310 = uStack_190;
  uStack_2f8 = uStack_178;
  uStack_300 = uStack_180;
  uStack_368 = uStack_1e8;
  uStack_370 = uStack_1f0;
  uStack_358 = uStack_1d8;
  lStack_360 = lStack_1e0;
  uStack_348 = uStack_1c8;
  uStack_350 = uStack_1d0;
  uStack_338 = uStack_1b8;
  uStack_340 = uStack_1c0;
  uStack_3c8 = uStack_1a8;
  uStack_3d0 = uStack_1b0;
  uStack_3b8 = uStack_198;
  uStack_3c0 = uStack_1a0;
  uStack_3a8 = uStack_188;
  uStack_3b0 = uStack_190;
  uStack_398 = uStack_178;
  uStack_3a0 = uStack_180;
  uStack_408 = uStack_1e8;
  uStack_410 = uStack_1f0;
  uStack_3f8 = uStack_1d8;
  lStack_400 = lStack_1e0;
  uStack_3e8 = uStack_1c8;
  uStack_3f0 = uStack_1d0;
  uStack_3d8 = uStack_1b8;
  uStack_3e0 = uStack_1c0;
  uStack_428 = uStack_388;
  uStack_430 = uStack_390;
  uStack_418 = uStack_378;
  uStack_420 = uStack_380;
  FUN_10448253c();
  func_0x000100075890(&uStack_440,0,0,&UNK_110778190,PTR___s10Foundation4DataVN_110350ae0,puVar4,
                      &PTR_DAT_110789f58);
  if (unaff_x21 == 0) {
    FUN_10448257c(&uStack_390);
    func_0x0001044825b0(&uStack_e8);
    param_2 = uStack_438;
  }
  else {
    FUN_10448257c(&uStack_390);
    func_0x0001044825b0(&uStack_e8);
    uStack_440 = uVar5;
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = uStack_440;
  return auVar8;
}



/* Entry: 104481544; end: 104481b6b;  */

/* WARNING: Removing unreachable block (ram,0x000104481734) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104481544(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar15 = unaff_x20;
  uVar10 = param_2;
  _swift_getObjectType();
  lVar2 = 0;
  lStack_c0 = lVar15;
  __s10Foundation3URLVMa();
  lStack_b8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar15 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar15;
  if (param_1 == 0) {
    lVar15 = 0;
    uVar10 = 0xe000000000000000;
  }
  else {
    lVar15 = param_1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_1);
  }
  lVar16 = *(long *)(unaff_x20 + _DAT_11307daa0);
  puVar3 = &UNK_110777aa0;
  _swift_allocObject(&UNK_110777aa0,0x38,7);
  *(long *)(puVar3 + 0x10) = lVar16;
  *(long *)(puVar3 + 0x18) = lVar15;
  *(undefined8 *)(puVar3 + 0x20) = uVar10;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  puVar4 = &UNK_110777ac8;
  _swift_allocObject(&UNK_110777ac8,0x28,7);
  *(long *)(puVar4 + 0x10) = lVar16;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  puVar14 = *(undefined8 **)(unaff_x20 + _DAT_11307da88);
  _swift_unknownObjectRetain_n(lVar16,2);
  uVar12 = 2;
  _swift_retain_n(param_3,2);
  _swift_bridgeObjectRetain(uVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar14 == (undefined8 *)0x0) {
LAB_104481814:
    FUN_104481b90();
    puVar7 = &UNK_110777d18;
    _swift_allocError(&UNK_110777d18,puVar14,0,0);
    *puVar14 = 0;
    *(undefined1 *)(puVar14 + 1) = 0;
    puVar8 = &UNK_110777af0;
    _swift_allocObject(&UNK_110777af0,0x38,7);
    *(long *)(puVar8 + 0x10) = lVar15;
    *(undefined8 *)(puVar8 + 0x18) = uVar10;
    *(undefined **)(puVar8 + 0x20) = puVar7;
    *(undefined8 *)(puVar8 + 0x28) = param_2;
    *(undefined8 *)(puVar8 + 0x30) = param_3;
    pcStack_80 = FUN_104481bd0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_110777b08;
    ppuVar9 = &puStack_a0;
    puStack_78 = puVar8;
    __Block_copy(ppuVar9);
    puVar8 = puStack_78;
    _swift_retain(param_3);
    _swift_bridgeObjectRetain(uVar10);
    _swift_errorRetain(puVar7);
    _swift_release(puVar8);
    func_0x00010c0f7fc0(lVar16);
    __Block_release(ppuVar9);
    _swift_bridgeObjectRelease(uVar10);
    _swift_errorRelease(puVar7);
    _swift_release(puVar3);
    _swift_release(puVar4);
    return;
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_11307da80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    _swift_unknownObjectRelease();
    goto LAB_104481814;
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_11307da90);
  lStack_d8 = lVar5;
  puStack_c8 = puVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar2;
  puStack_d0 = puVar4;
  if (lVar6 != 0) {
    lVar2 = lVar6;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(lVar6);
    if (lVar2 != 0) {
      lVar5 = lVar2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar2);
      _objc_release(lVar2);
      goto LAB_104481718;
    }
  }
  lVar5 = 0;
  uVar12 = 0;
LAB_104481718:
  uVar13 = uVar10;
  FUN_1044812a8(lVar15,uVar10,lVar5,uVar12);
  _swift_bridgeObjectRelease(uVar10);
  _swift_bridgeObjectRelease(uVar12);
  lVar2 = lStack_b0;
  uVar10 = 0xd000000000000029;
  __s10Foundation3URLV22appendingPathComponentyACSSF
            (lStack_b0,0xd000000000000029,0x800000010f201d40);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  lVar5 = lVar15;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar15,uVar13);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_104480f5c;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101365b04;
  puStack_88 = &UNK_110777b80;
  ppuVar9 = &puStack_a0;
  __Block_copy(ppuVar9);
  _swift_release(puStack_78);
  puVar14 = puStack_c8;
  func_0x00010bf225e0(puStack_c8);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar9);
  _objc_release(uVar10);
  _objc_release(lVar5);
  uVar11 = 0;
  _swift_isEscapingClosureAtFileLocation(0,"",0x68,0x69,0xb,1);
  _swift_release(0);
  if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104481b68);
    (*pcVar1)();
  }
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puStack_d0;
  if (lVar16 != 0) {
    puVar8 = &UNK_110777bb8;
    _swift_allocObject(&UNK_110777bb8,0x38,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x104481b74;
    *(undefined **)(puVar8 + 0x18) = puVar3;
    *(undefined8 *)(puVar8 + 0x20) = 0x104481b84;
    *(undefined **)(puVar8 + 0x28) = puVar7;
    *(long *)(puVar8 + 0x30) = lStack_c0;
    pcStack_80 = FUN_104481c14;
    puStack_a0 = puVar4;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101365b40;
    puStack_88 = &UNK_110777bd0;
    ppuVar9 = &puStack_a0;
    puStack_78 = puVar8;
    __Block_copy(ppuVar9);
    puVar4 = puStack_78;
    _swift_retain(puVar3);
    _swift_retain(puVar7);
    _swift_release(puVar4);
    lVar5 = lStack_d8;
    func_0x00010c25f600(lStack_d8);
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease();
    _objc_release(puVar14);
    __Block_release(ppuVar9);
    _objc_release(lVar16);
    func_0x00010006c090(lVar15,uVar13);
    _swift_release(puVar3);
    _swift_release(puVar7);
    _swift_unknownObjectRelease(puStack_c8);
    _swift_unknownObjectRelease(lVar5);
    (**(code **)(lStack_b8 + 8))(lVar2,lStack_e0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104481b6c);
  (*pcVar1)();
}



/* Entry: 104481b6c; end: 104481b8f;  */

void FUN_104481b6c(undefined8 param_1,long param_2)

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



/* Entry: 104481b90; end: 104481bcf;  */

void FUN_104481b90(void)

{
  undefined *puVar1;
  
  if (puRam000000011307dae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd06e30;
  _swift_getWitnessTable(&UNK_10dd06e30,&UNK_110777d18);
  puRam000000011307dae0 = puVar1;
  return;
}



/* Entry: 104481bd0; end: 104481bf7;  */

void FUN_104481bd0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))(0,*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 104481bf8; end: 104481c13;  */

void FUN_104481bf8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 104481c14; end: 104481c43;  */

void FUN_104481c14(void)

{
  FUN_104480f84();
  return;
}



/* Entry: 104481c44; end: 1044823a3;  */

/* WARNING: Removing unreachable block (ram,0x000104481ef4) */

undefined1  [16] FUN_104481c44(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong auStack_220 [3];
  undefined8 *puStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined1 auStack_1e0 [64];
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_157;
  undefined1 uStack_156;
  undefined1 uStack_155;
  undefined1 uStack_154;
  undefined1 uStack_153;
  undefined2 uStack_152;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (ulong *)((long)auStack_220 - extraout_x8);
  puVar6 = (undefined8 *)0x0;
  __s10Foundation3URLVMa();
  lVar20 = puVar6[-1];
  puVar7 = puVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  puVar18 = (ulong *)((long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_100 = 0;
  uStack_f8 = 0xe000000000000000;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0x3000000000000000;
  uStack_b0 = 0;
  uStack_a8 = 0xc000000000000000;
  puStack_c8 = (undefined8 *)0x0;
  puStack_d0 = (undefined8 *)0x0;
  lStack_b8 = 0;
  uStack_c0 = 0;
  uVar3 = (uint)(param_2 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar15 != 0) {
      lVar19 = (long)(int)param_1;
      puVar17 = (undefined8 *)((param_1 >> 0x20) - lVar19);
      if (param_1 >> 0x20 < lVar19) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104482394);
        lStack_1f0 = lVar20;
        (*pcVar5)();
      }
      lStack_1f0 = lVar20;
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (puVar7 == (undefined8 *)0x0) {
        __s10Foundation13__DataStorageC7_lengthSivg();
        puVar17 = (undefined8 *)0x0;
        puVar8 = puVar7;
        lVar20 = 0;
      }
      else {
        puVar8 = puVar7;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar19,(long)puVar8)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1044823a0);
          (*pcVar5)();
        }
        puVar7 = (undefined8 *)((lVar19 - (long)puVar8) + (long)puVar7);
        __s10Foundation13__DataStorageC7_lengthSivg();
        puVar12 = puVar8;
        if ((long)puVar17 <= (long)puVar8) {
          puVar12 = puVar17;
        }
        puVar17 = (undefined8 *)0x0;
        if (puVar7 != (undefined8 *)0x0) {
          puVar17 = puVar7;
        }
        lVar20 = 0;
        if (puVar7 != (undefined8 *)0x0) {
          lVar20 = (long)puVar12 + (long)puVar7;
        }
      }
      FUN_1044823b8();
      goto LAB_104481f44;
    }
    uStack_160._0_1_ = (undefined1)param_1;
    uStack_160._1_1_ = (undefined1)((ulong)param_1 >> 8);
    uStack_160._2_1_ = (undefined1)((ulong)param_1 >> 0x10);
    uStack_160._3_1_ = (undefined1)((ulong)param_1 >> 0x18);
    uStack_160._4_1_ = (undefined1)((ulong)param_1 >> 0x20);
    uStack_160._5_1_ = (undefined1)((ulong)param_1 >> 0x28);
    uStack_160._6_1_ = (undefined1)((ulong)param_1 >> 0x30);
    uStack_160._7_1_ = (undefined1)((ulong)param_1 >> 0x38);
    uStack_158 = (undefined1)param_2;
    uStack_157 = (undefined1)(param_2 >> 8);
    uStack_156 = (undefined1)(param_2 >> 0x10);
    uStack_155 = (undefined1)(param_2 >> 0x18);
    uStack_154 = (undefined1)(param_2 >> 0x20);
    uStack_153 = (undefined1)(param_2 >> 0x28);
    puVar17 = (undefined8 *)((long)&uStack_160 + (param_2 >> 0x30 & 0xff));
    FUN_1044823b8();
LAB_104481edc:
    func_0x00010006ae80(&uStack_160,puVar17,&uStack_a0,0,100,0,&UNK_1107782a0,puVar7);
  }
  else {
    if (uVar15 != 2) {
      FUN_1044823b8();
      uStack_160._0_1_ = 0;
      uStack_160._1_1_ = 0;
      uStack_160._2_1_ = 0;
      uStack_160._3_1_ = 0;
      uStack_160._4_1_ = 0;
      uStack_160._5_1_ = 0;
      uStack_160._6_1_ = 0;
      uStack_160._7_1_ = 0;
      uStack_158 = 0;
      uStack_157 = 0;
      uStack_156 = 0;
      uStack_155 = 0;
      uStack_154 = 0;
      uStack_153 = 0;
      puVar17 = &uStack_160;
      goto LAB_104481edc;
    }
    lVar19 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    lStack_1f0 = lVar20;
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    puVar8 = puVar7;
    puVar17 = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar19,(long)puVar8)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10448239c);
        (*pcVar5)();
      }
      puVar17 = (undefined8 *)((lVar19 - (long)puVar8) + (long)puVar7);
    }
    puVar7 = (undefined8 *)(lVar2 - lVar19);
    if (SBORROW8(lVar2,lVar19)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x104482398);
      (*pcVar5)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    puVar12 = puVar8;
    if ((long)puVar7 <= (long)puVar8) {
      puVar12 = puVar7;
    }
    lVar20 = 0;
    if (puVar17 != (undefined8 *)0x0) {
      lVar20 = (long)puVar12 + (long)puVar17;
    }
    FUN_1044823b8();
LAB_104481f44:
    func_0x00010006ae80(puVar17,lVar20,&uStack_a0,0,100,0,&UNK_1107782a0,puVar8);
    lVar20 = lStack_1f0;
  }
  puVar8 = &uStack_a0;
  func_0x0001044824fc(puVar8,0x112d49548,&UNK_10d90fde0);
  puVar17 = puStack_c8;
  puVar7 = puStack_d0;
  uVar4 = uStack_e8;
  uVar13 = uStack_f0;
  uStack_138 = uStack_d8;
  uStack_140 = uStack_e0;
  puStack_128 = puStack_c8;
  puStack_130 = puStack_d0;
  lStack_118 = lStack_b8;
  uStack_120 = uStack_c0;
  uStack_108 = uStack_a8;
  uStack_110 = uStack_b0;
  uStack_158 = (undefined1)uStack_f8;
  uStack_157 = (undefined1)((ulong)uStack_f8 >> 8);
  uStack_156 = (undefined1)((ulong)uStack_f8 >> 0x10);
  uStack_155 = (undefined1)((ulong)uStack_f8 >> 0x18);
  uStack_154 = (undefined1)((ulong)uStack_f8 >> 0x20);
  uStack_153 = (undefined1)((ulong)uStack_f8 >> 0x28);
  uStack_152 = (undefined2)((ulong)uStack_f8 >> 0x30);
  uStack_160._0_1_ = (undefined1)uStack_100;
  uStack_160._1_1_ = (undefined1)((ulong)uStack_100 >> 8);
  uStack_160._2_1_ = (undefined1)((ulong)uStack_100 >> 0x10);
  uStack_160._3_1_ = (undefined1)((ulong)uStack_100 >> 0x18);
  uStack_160._4_1_ = (undefined1)((ulong)uStack_100 >> 0x20);
  uStack_160._5_1_ = (undefined1)((ulong)uStack_100 >> 0x28);
  uStack_160._6_1_ = (undefined1)((ulong)uStack_100 >> 0x30);
  uStack_160._7_1_ = (undefined1)((ulong)uStack_100 >> 0x38);
  uStack_148 = uStack_e8;
  uStack_150 = uStack_f0;
  if (((byte)((ulong)uStack_d8 >> 0x3d) & 1) == 0) {
    uVar1 = uStack_f0 & 0xffffffffffff;
    if ((uStack_e8 & 0x2000000000000000) != 0) {
      uVar1 = uStack_e8 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      uStack_198 = uStack_e8;
      uStack_1a0 = uStack_f0;
      uStack_188 = uStack_d8;
      uStack_190 = uStack_e0;
      puStack_178 = puStack_c8;
      puStack_180 = puStack_d0;
      lStack_168 = lStack_b8;
      uStack_170 = uStack_c0;
      puVar18 = &uStack_1a0;
      func_0x00010448242c(puVar18,auStack_1e0);
    }
    else {
      uStack_1f8 = uStack_c0;
      lStack_1f0 = lStack_b8;
      uStack_198 = uStack_e8;
      uStack_1a0 = uStack_f0;
      uStack_188 = uStack_d8;
      uStack_190 = uStack_e0;
      puStack_178 = puStack_c8;
      puStack_180 = puStack_d0;
      lStack_168 = lStack_b8;
      uStack_170 = uStack_c0;
      func_0x00010448242c(&uStack_1a0,auStack_1e0);
      uStack_200 = uVar13;
      __s10Foundation3URLV6stringACSgSSh_tcfC(puVar10,uVar13,uVar4);
      puVar9 = puVar10;
      (**(code **)(lVar20 + 0x30))(puVar10,1,puVar6);
      if ((int)puVar9 == 1) {
        func_0x0001044824fc(puVar10,0x112d36580,&UNK_10d9016d0);
        puVar18 = puVar10;
      }
      else {
        puStack_208 = puVar7;
        puVar9 = puVar18;
        (**(code **)(lVar20 + 0x20))(puVar18,puVar10,puVar6);
        __s10Foundation3URLV6schemeSSSgvg();
        if (puVar10 != (ulong *)0x0) {
          puVar14 = puVar10;
          __sSS10lowercasedSSyF();
          _swift_bridgeObjectRelease(puVar10);
          if ((puVar9 == (ulong *)0x7370747468) && (puVar14 == (ulong *)0xe500000000000000)) {
            _swift_bridgeObjectRelease(0xe500000000000000);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (puVar9,puVar14,0x7370747468,0xe500000000000000,0);
            _swift_bridgeObjectRelease(puVar14);
            if (((ulong)puVar9 & 1) == 0) goto LAB_104482280;
          }
          uVar16 = uStack_1f8;
          puVar12 = puStack_208;
          auStack_220[1] = lStack_1f0;
          auStack_220[2] = uStack_1f8;
          puVar8 = puVar17;
          puVar7 = puStack_208;
          if (0xe < (ulong)puVar17 >> 0x3c) {
            puVar7 = (undefined8 *)0x0;
            puVar8 = (undefined8 *)0xc000000000000000;
            auStack_220[2] = 0;
            auStack_220[1] = -0x4000000000000000;
          }
          func_0x00010006c00c(puVar7,puVar8);
          func_0x000104482468(puVar12,puVar17,uVar16,lStack_1f0);
          func_0x00010006c090(puVar7,puVar8);
          func_0x00010006c090(auStack_220[2],auStack_220[1]);
          puVar17 = puVar7;
          __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar7,puVar8);
          func_0x00010006c090(puVar7);
          puVar7 = puVar17;
          func_0x00010c271dc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar7 != (undefined8 *)0x0) {
            puVar12 = puVar7;
            puVar17 = puVar8;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            _objc_release(puVar7);
            uVar13 = (ulong)puVar12 & 0xffffffffffff;
            if (((ulong)puVar17 & 0x2000000000000000) != 0) {
              uVar13 = (ulong)puVar17 >> 0x38 & 0xf;
            }
            if (uVar13 != 0) {
              puVar11 = PTR_PTR_1126de6c8;
              _objc_allocWithZone(PTR_PTR_1126de6c8);
              uVar13 = uStack_200;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_200,uVar4);
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar12,puVar17);
              _swift_bridgeObjectRelease(puVar17);
              func_0x00010c0558e0(puVar11);
              _objc_release(uVar13);
              _objc_release(puVar12);
              func_0x0001044824fc(&uStack_150,0x11307daf0,&UNK_10dd06e20);
              FUN_1044823f8(&uStack_160);
              (**(code **)(lVar20 + 8))(puVar18);
              uVar16 = 0;
              goto LAB_1044822e0;
            }
            _swift_bridgeObjectRelease();
          }
          FUN_104481b90();
          puVar11 = &UNK_110777d18;
          _swift_allocError(&UNK_110777d18,puVar17,0,0);
          *puVar17 = 2;
          uVar16 = 1;
          *(undefined1 *)(puVar17 + 1) = 1;
          func_0x0001044824fc(&uStack_150,0x11307daf0,&UNK_10dd06e20);
          FUN_1044823f8(&uStack_160);
          (**(code **)(lVar20 + 8))(puVar18);
          goto LAB_1044822e0;
        }
LAB_104482280:
        (**(code **)(lVar20 + 8))(puVar18,puVar6);
      }
    }
    FUN_104481b90();
    puVar11 = &UNK_110777d18;
    _swift_allocError(&UNK_110777d18,puVar18,0,0);
    *puVar18 = 1;
    *(undefined1 *)(puVar18 + 1) = 1;
    puVar6 = (undefined8 *)0x11307daf0;
    func_0x0001044824fc(&uStack_150,0x11307daf0,&UNK_10dd06e20);
  }
  else {
    FUN_104481b90();
    puVar11 = &UNK_110777d18;
    _swift_allocError(&UNK_110777d18,puVar8,0,0);
    *puVar8 = 0;
    *(undefined1 *)(puVar8 + 1) = 1;
    puVar6 = puVar8;
  }
  uVar16 = 1;
  puVar18 = &uStack_160;
  FUN_1044823f8(puVar18);
LAB_1044822e0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    auVar21._8_8_ = uVar16;
    auVar21._0_8_ = puVar11;
    return auVar21;
  }
  ___stack_chk_fail();
  if (((uint)puVar6 & 0xff) != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    auVar22._8_8_ = puVar6;
    auVar22._0_8_ = puVar18;
    return auVar22;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)();
  auVar23._8_8_ = puVar6;
  auVar23._0_8_ = puVar18;
  return auVar23;
}



/* Entry: 1044823a4; end: 1044823b7;  */

void FUN_1044823a4(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1044823b8; end: 1044823f7;  */

void FUN_1044823b8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307dae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd07200;
  _swift_getWitnessTable(&DAT_10dd07200,&UNK_1107782a0);
  puRam000000011307dae8 = puVar1;
  return;
}



/* Entry: 1044823f8; end: 1044824a3;  */

undefined8 FUN_1044823f8(undefined8 param_1)

{
  FUN_1044887f4();
  return param_1;
}



/* Entry: 1044824a4; end: 1044824bf;  */

void FUN_1044824a4(undefined8 *param_1)

{
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1044824c0; end: 10448253b;  */

undefined8 FUN_1044824c0(undefined8 param_1,undefined8 param_2)

{
  FUN_10448c6b4(param_2,param_1);
  return param_2;
}



/* Entry: 10448253c; end: 10448257b;  */

void FUN_10448253c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307db00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd07050;
  _swift_getWitnessTable(&DAT_10dd07050,&UNK_110778190);
  puRam000000011307db00 = puVar1;
  return;
}



/* Entry: 10448257c; end: 10448260f;  */

undefined8 FUN_10448257c(undefined8 param_1)

{
  FUN_104487d9c();
  return param_1;
}



/* Entry: 104482610; end: 104482643;  */

void FUN_104482610(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 104482644; end: 104482793;  */

void FUN_104482644(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 104482794; end: 1044827a3; -[_TtC40LensDeviceDependentAssetEndpointServices40LensDeviceDependentAssetEndpointServices deviceDependentAssetURLResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104482794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307db08));
  return;
}



/* Entry: 1044827a4; end: 1044827ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044827a4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307db08) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044827f0; end: 104482823;  */

void FUN_1044827f0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104482824; end: 10448284b; -[_TtC40LensDeviceDependentAssetEndpointServices40LensDeviceDependentAssetEndpointServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104482824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307db08));
  return;
}



/* Entry: 10448284c; end: 104482887;  */

/* WARNING: Possible PIC construction at 0x000104482870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104482874) */

void FUN_10448284c(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61574();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 104482888; end: 1044828cf;  */

uint FUN_104482888(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_104486cbc(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1044828d0; end: 1044828df;  */

void FUN_1044828d0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 1044828e0; end: 10448290f;  */

void FUN_1044828e0(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_104486da0();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 104482910; end: 104482917;  */

undefined8 FUN_104482910(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 104482918; end: 10448298b;  */

void FUN_104482918(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11307dbb0;
  func_0x0001000285a8(0x11307dbb0,&UNK_10dd06f20);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 10448298c; end: 104482997;  */

void FUN_10448298c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104482998; end: 104482a43;  */

void FUN_104482998(void)

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



/* Entry: 104482a44; end: 104482a57;  */

bool FUN_104482a44(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104482a58; end: 104482a9f;  */

void FUN_104482a58(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_10458e1d8(&uStack_40,&UNK_10dd07730,0x19,2);
  uRam00000001138137a0 = uStack_38;
  uRam0000000113813798 = uStack_40;
  uRam00000001138137b0 = uStack_28;
  uRam00000001138137a8 = uStack_30;
  uRam00000001138137c0 = uStack_18;
  uRam00000001138137b8 = uStack_20;
  return;
}



/* Entry: 104482aa0; end: 104482b73;  */

/* WARNING: Removing unreachable block (ram,0x000104482b70) */

void FUN_104482aa0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        (**(code **)(param_3 + 0x150))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_10448999c();
        (*pcVar4)(unaff_x20 + 0x20,&UNK_1107789c8,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 104482b74; end: 104482bff;  */

void FUN_104482b74(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_104482c00(), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 104482c00; end: 104482cc3;  */

void FUN_104482c00(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = *(undefined8 *)(param_1 + 0x68);
  uStack_80 = *(undefined8 *)(param_1 + 0x60);
  uStack_68 = *(undefined8 *)(param_1 + 0x78);
  uStack_70 = *(undefined8 *)(param_1 + 0x70);
  uStack_58 = *(undefined8 *)(param_1 + 0x88);
  uStack_60 = *(undefined8 *)(param_1 + 0x80);
  uStack_48 = *(undefined8 *)(param_1 + 0x98);
  uStack_50 = *(undefined8 *)(param_1 + 0x90);
  uStack_b8 = *(undefined8 *)(param_1 + 0x28);
  uStack_c0 = *(undefined8 *)(param_1 + 0x20);
  uStack_a8 = *(undefined8 *)(param_1 + 0x38);
  uStack_b0 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = *(undefined8 *)(param_1 + 0x48);
  uStack_a0 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = *(undefined8 *)(param_1 + 0x58);
  uStack_90 = *(undefined8 *)(param_1 + 0x50);
  puVar1 = &uStack_c0;
  func_0x000104482834();
  if ((int)puVar1 != 1) {
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    uStack_d8 = uStack_58;
    uStack_e0 = uStack_60;
    uStack_c8 = uStack_48;
    uStack_d0 = uStack_50;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_10448999c();
    (*pcVar2)(&uStack_140,2,&UNK_1107789c8,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 104482cc4; end: 104482d23;  */

void FUN_104482cc4(undefined8 *param_1)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1044824a4(&uStack_a0);
  param_1[0xf] = uStack_48;
  param_1[0xe] = uStack_50;
  param_1[0x11] = uStack_38;
  param_1[0x10] = uStack_40;
  param_1[0x13] = uStack_28;
  param_1[0x12] = uStack_30;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = uStack_98;
  param_1[4] = uStack_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[9] = uStack_78;
  param_1[8] = uStack_80;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[0xb] = uStack_68;
  param_1[10] = uStack_70;
  param_1[0xd] = uStack_58;
  param_1[0xc] = uStack_60;
  return;
}



/* Entry: 104482d24; end: 104482d47;  */

undefined1  [16] FUN_104482d24(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f201e70;
  auVar1._0_8_ = 0xd00000000000003d;
  return auVar1;
}



/* Entry: 104482d48; end: 104482d77;  */

undefined1  [16] FUN_104482d48(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 104482d78; end: 104482dab;  */

void FUN_104482d78(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}


