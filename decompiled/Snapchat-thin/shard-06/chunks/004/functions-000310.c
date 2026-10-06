/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10490030c; end: 104900433; -[FBSDKLoginManager canOpenURL:forApplication:sourceApplication:annotation:] */

uint FUN_10490030c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  lVar3 = (long)&uStack_70 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar3,param_3);
  uVar4 = 0;
  if (param_5 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
    uVar4 = param_2;
  }
  if (param_6 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    _objc_retain(param_4);
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_4);
    _swift_unknownObjectRetain(param_6);
    _objc_retain(param_1);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,param_6);
    _swift_unknownObjectRelease(param_6);
  }
  lVar2 = lVar3;
  FUN_104904c5c(lVar3,&uStack_70);
  _objc_release(param_4);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar4);
  func_0x000104905304(&uStack_70,0x11309c428);
  (**(code **)(lVar5 + 8))(lVar3,lVar1);
  return (uint)lVar2 & 1;
}



/* Entry: 104900434; end: 10490047f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104900434(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cac0;
  _swift_beginAccess(unaff_x20 + _DAT_11309cac0,auStack_38,0,0);
  if (*(char *)(unaff_x20 + lVar1) == '\x02') {
    FUN_1048fb040();
  }
  return;
}



/* Entry: 104900480; end: 104900543; -[FBSDKLoginManager applicationDidBecomeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104900480(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cac0;
  _swift_beginAccess(param_1 + _DAT_11309cac0,auStack_38,0,0);
  if (*(char *)(param_1 + lVar1) == '\x02') {
    _objc_retain(param_1);
    FUN_1048fb040();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 104900544; end: 1049005fb; -[FBSDKLoginManager isAuthenticationURL:] */

uint FUN_104900544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ
            (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3);
  __s10Foundation3URLV4pathSSvg();
  uVar1 = 0x6169642f;
  __sSS9hasSuffixySbSSF(0x2f676f6c6169642f,0xed0000687475616f,param_3,param_2);
  _swift_bridgeObjectRelease(param_2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar2);
  return uVar1 & 1;
}



/* Entry: 1049005fc; end: 104900787;  */

uint FUN_1049005fc(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined *puVar7;
  
  __s10Foundation3URLV6schemeSSSgvg();
  if (param_2 == 0) {
    uVar6 = 0;
    goto LAB_104900768;
  }
  lVar1 = param_1;
  lVar5 = param_2;
  __s10Foundation3URLV4hostSSSgvg();
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    puVar2 = &UNK_10dd47ba0;
    _swift_getKeyPath();
    puVar3 = puVar2;
    FUN_1048f8990();
    _swift_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
LAB_1049006c4:
      puVar3 = (undefined *)0x0;
      puVar7 = (undefined *)0xe000000000000000;
    }
    else {
      puVar2 = puVar3;
      puVar7 = PTR_s_appID_11259ee40;
      _objc_msgSend(puVar3,PTR_s_appID_11259ee40);
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(puVar3);
      if (puVar2 == (undefined *)0x0) goto LAB_1049006c4;
      puVar3 = puVar2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar2);
      _objc_release(puVar2);
    }
    __sSS6appendyySSF(puVar3,puVar7);
    _swift_bridgeObjectRelease(puVar7);
    uVar4 = 0;
    __sSS9hasPrefixySbSSF(0x6266,0xe200000000000000,param_1,param_2);
    _swift_bridgeObjectRelease(0xe200000000000000);
    _swift_bridgeObjectRelease(param_2);
    param_2 = lVar5;
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    else if ((lVar1 == 0x706f2d6f6e) && (lVar5 == -0x1b00000000000000)) {
      uVar6 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (lVar1,lVar5,0x706f2d6f6e,0xe500000000000000,0);
      uVar6 = (uint)lVar1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
LAB_104900768:
  return uVar6 & 1;
}



/* Entry: 104900788; end: 104900823; -[FBSDKLoginManager shouldStopPropagationOfURL:] */

uint FUN_104900788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  puVar3 = &stack0xffffffffffffffc0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
  _objc_retain(param_1);
  puVar2 = puVar3;
  FUN_1049005fc(puVar3);
  _objc_release(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return (uint)puVar2 & 1;
}



/* Entry: 104900824; end: 104900867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104900824(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309ca90;
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + _DAT_11309ca90,auStack_38,0,0);
  return *(undefined8 *)(lVar2 + lVar1);
}



/* Entry: 104900868; end: 1049008b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104900868(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309ca90;
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + _DAT_11309ca90,auStack_48,1,0);
  *(undefined8 *)(lVar2 + lVar1) = param_1;
  return;
}



/* Entry: 1049008b8; end: 1049008fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049008b8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = _DAT_11309ca90;
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + _DAT_11309ca90,param_1,0x21,0);
  auVar3._8_8_ = lVar2 + lVar1;
  auVar3._0_8_ = 0x104905664;
  return auVar3;
}



/* Entry: 1049008fc; end: 104900977;  */

void FUN_1049008fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107b7440;
  _swift_allocObject(&UNK_1107b7440,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  _swift_retain(param_4);
  func_0x0001048fa09c(param_1,param_2,FUN_10490563c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 104900978; end: 1049009b7;  */

void FUN_104900978(void)

{
  func_0x0001048fa93c();
  return;
}



/* Entry: 1049009b8; end: 104900c07;  */

undefined8 FUN_1049009b8(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 104900c08; end: 104900cc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104900c08(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cad0;
  _swift_beginAccess(unaff_x20 + _DAT_11309cad0,auStack_48,0,0);
  func_0x00010490540c(unaff_x20 + lVar1,param_1,0x11309c518);
  return;
}



/* Entry: 104900cc8; end: 104900d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104900cc8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11309cad0;
  _swift_beginAccess(unaff_x20 + _DAT_11309cad0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104905668;
  return auVar2;
}



/* Entry: 104900d08; end: 104900d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104900d08(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_d0 [24];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cad8;
  _swift_beginAccess(unaff_x20 + _DAT_11309cad8,auStack_48,0,0);
  func_0x00010490540c(unaff_x20 + lVar1,&lStack_b8,0x11309cae0);
  if (lStack_b8 == 1) {
    func_0x000104905304(&lStack_b8,0x11309cae0);
    FUN_1048f99e8(param_1);
    func_0x00010490540c(param_1,&lStack_b8,0x11309c518);
    _swift_beginAccess(unaff_x20 + lVar1,auStack_d0,0x21,0);
    FUN_1048f9c60(&lStack_b8,unaff_x20 + lVar1,0x11309cae0);
    _swift_endAccess(auStack_d0);
  }
  else {
    param_1[9] = lStack_70;
    param_1[8] = lStack_78;
    param_1[0xb] = lStack_60;
    param_1[10] = lStack_68;
    param_1[0xd] = lStack_50;
    param_1[0xc] = lStack_58;
    param_1[1] = lStack_b0;
    *param_1 = lStack_b8;
    param_1[3] = lStack_a0;
    param_1[2] = lStack_a8;
    param_1[5] = lStack_90;
    param_1[4] = lStack_98;
    param_1[7] = lStack_80;
    param_1[6] = lStack_88;
  }
  return;
}



/* Entry: 104900d0c; end: 104901133;  */

void FUN_104900d0c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104900d70);
  (*pcVar2)();
}



/* Entry: 104901134; end: 10490113b;  */

void FUN_104901134(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  pcVar2 = pcVar1;
  _objc_retain();
  _swift_errorRetain(param_2);
  FUN_10490bbe8(param_1,param_2);
  (*pcVar1)();
  if (((uint)uVar3 & 0xff) != 1) {
    if ((uVar3 & 0xff) == 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
  return;
}



/* Entry: 10490113c; end: 104901167;  */

undefined8 FUN_10490113c(undefined8 param_1)

{
  func_0x000104904fb4(param_1,&UNK_1107b7380);
  return param_1;
}



/* Entry: 104901168; end: 104901af7;  */

undefined8 FUN_104901168(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar7 = *unaff_x20;
  if ((uVar7 & 0xc000000000000001) == 0) {
    FUN_1048f07b4(0);
    uVar3 = *(ulong *)(uVar7 + 0x28);
    __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
    uVar6 = -1L << ((ulong)*(byte *)(uVar7 + 0x20) & 0x3f);
    uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 3 & 0xfffffffffffff8)) >> (uVar3 & 0x3f) & 1) != 0) {
      do {
        uVar4 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
        _objc_retain();
        uVar5 = uVar4;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        _objc_release(uVar4);
        if ((uVar5 & 1) != 0) {
          _objc_release(param_2);
          *param_1 = *(ulong *)(*(long *)(uVar7 + 0x30) + uVar3 * 8);
          _objc_retain();
          return 0;
        }
        uVar3 = uVar3 + 1 & ~uVar6;
      } while ((*(ulong *)(uVar7 + 0x38 + (uVar3 >> 3 & 0xfffffffffffff8)) >> (uVar3 & 0x3f) & 1) !=
               0);
    }
    _swift_isUniquelyReferenced_nonNull_native(*unaff_x20);
    uStack_68 = *unaff_x20;
    _objc_retain();
    func_0x0001049017a0();
    *unaff_x20 = uStack_68;
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if ((long)uVar7 < 0) {
      uVar3 = uVar7;
    }
    _objc_retain();
    _swift_bridgeObjectRetain(uVar7);
    uVar6 = param_2;
    __ss10__CocoaSetV6member3foryXlSgyXl_tF(param_2,uVar3);
    _objc_release(param_2);
    if (uVar6 != 0) {
      _swift_bridgeObjectRelease(uVar7);
      _objc_release(param_2);
      uVar2 = 0;
      uStack_70 = uVar6;
      FUN_1048f07b4(0);
      _swift_dynamicCast(&uStack_68,&uStack_70,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      *param_1 = uStack_68;
      return 0;
    }
    uVar6 = uVar3;
    __ss10__CocoaSetV5countSivg();
    if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1049013a4);
      (*pcVar1)();
    }
    func_0x0001049015b4(uVar3,uVar6 + 1);
    uVar6 = *(ulong *)(uVar3 + 0x10);
    uStack_68 = uVar3;
    if (uVar6 < *(ulong *)(uVar3 + 0x18)) {
      _objc_retain(param_2);
    }
    else {
      _objc_retain(param_2);
      func_0x000104902284(uVar6 + 1);
      uVar3 = uStack_68;
    }
    FUN_104902758(param_2,uVar3);
    _swift_bridgeObjectRelease(uVar7);
    *unaff_x20 = uVar3;
  }
  *param_1 = param_2;
  return 1;
}



/* Entry: 104901af8; end: 104901c3b;  */

void FUN_104901af8(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001048db364(0x11309cb90);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  __ss11_SetStorageC4copy8originalAByxGs05__RawaB0C_tFZ();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      _memmove(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((long)uVar6 < 0x40) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_104901bc8;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        _objc_retain();
        if (uVar5 != 0) break;
LAB_104901bc8:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104901c3c);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_104901c14;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_104901c14:
  _swift_release(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 104901c3c; end: 104902757;  */

void FUN_104901c3c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  
  lVar3 = 0;
  func_0x0001049ceb28();
  lVar11 = *(long *)(lVar3 + -8);
  lVar5 = *(long *)(lVar11 + 0x40);
  func_0x0001048db364(0x11309cbb0);
  lVar10 = *unaff_x20;
  lVar4 = lVar10;
  __ss11_SetStorageC4copy8originalAByxGs05__RawaB0C_tFZ();
  if (*(long *)(lVar10 + 0x10) == 0) {
    _swift_release(lVar10);
LAB_104901dc8:
    *unaff_x20 = lVar4;
    return;
  }
  lVar1 = lVar10 + 0x38;
  uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if (lVar4 != lVar10 || lVar1 + uVar6 * 8 <= lVar4 + 0x38U) {
    _memmove(lVar4 + 0x38U,lVar1,uVar6 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
  uVar7 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if ((long)uVar7 < 0x40) {
    uVar6 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(lVar10 + 0x38);
  if (uVar6 == 0) goto LAB_104901d40;
  do {
    uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar6 = uVar6 - 1 & uVar6;
    while( true ) {
      lVar9 = *(long *)(lVar11 + 0x48) * (LZCOUNT(uVar8) | lVar12 << 6);
      (**(code **)(lVar11 + 0x10))
                (auStack_70 + -(lVar5 + 0xfU & 0xfffffffffffffff0),*(long *)(lVar10 + 0x30) + lVar9,
                 lVar3);
      (**(code **)(lVar11 + 0x20))
                (*(long *)(lVar4 + 0x30) + lVar9,auStack_70 + -(lVar5 + 0xfU & 0xfffffffffffffff0),
                 lVar3);
      if (uVar6 != 0) break;
LAB_104901d40:
      do {
        lVar9 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104901df0);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar9) {
          _swift_release(lVar10);
          goto LAB_104901dc8;
        }
        uVar6 = *(ulong *)(lVar1 + lVar9 * 8);
        lVar12 = lVar12 + 1;
      } while (uVar6 == 0);
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      lVar12 = lVar9;
    }
  } while( true );
}



/* Entry: 104902758; end: 1049027d7;  */

void FUN_104902758(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  __ss10_HashTableV8nextHole9atOrAfterAB6BucketVAF_tF(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Entry: 1049027d8; end: 104902c17;  */

void FUN_1049027d8(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_80 [32];
  
  func_0x0001048db364(0x11309cb88);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      _memmove(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((long)uVar6 < 0x40) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_1049028b0;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        func_0x0001000bb420(*(long *)(lVar8 + 0x38) + uVar7 * 0x20,auStack_80);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) = uVar9;
        func_0x000100102924(auStack_80,*(long *)(lVar4 + 0x38) + uVar7 * 0x20);
        _objc_retain(uVar9);
        if (uVar5 != 0) break;
LAB_1049028b0:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104902950);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_104902920;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_104902920:
  _swift_release(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 104902c18; end: 104902d27;  */

undefined8 * FUN_104902c18(undefined8 *param_1,undefined8 *param_2,uint param_3)

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
  FUN_1048ddcc8();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)puVar4 & 1;
  lVar1 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104902d18);
    (*pcVar2)();
  }
  lVar5 = *(long *)(lVar7 + 0x18);
  if ((lVar5 < lVar1) || ((param_3 & 1) == 0)) {
    if ((lVar5 < lVar1) || ((param_3 & 1) != 0)) {
      param_3 = param_3 & 1;
      func_0x000104902950(lVar1);
      puVar3 = param_2;
      FUN_1048ddcc8();
      if (((uint)puVar4 & 1) != (param_3 & 1)) {
        FUN_1048db924(0);
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104902d28);
        (*pcVar2)();
      }
    }
    else {
      FUN_1049027d8();
    }
  }
  if (((ulong)puVar4 & 1) != 0) {
    puVar3 = (undefined8 *)(*(long *)(*unaff_x20 + 0x38) + (long)puVar3 * 0x20);
    func_0x000104905340(puVar3);
    uVar8 = *param_1;
    uVar10 = param_1[3];
    uVar9 = param_1[2];
    puVar3[1] = param_1[1];
    *puVar3 = uVar8;
    puVar3[3] = uVar10;
    puVar3[2] = uVar9;
    return puVar3;
  }
  FUN_104900d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return param_2;
}



/* Entry: 104902d28; end: 104902f3b;  */

/* WARNING: Removing unreachable block (ram,0x0001049030b8) */
/* WARNING: Removing unreachable block (ram,0x000104903250) */

undefined1 * FUN_104902d28(ulong param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  if ((param_2 & 0xc000000000000001) == 0) {
    if ((param_1 & 0xc000000000000001) == 0) {
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar12 = (1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f)) + 0x3fU >> 6;
      puVar9 = (undefined1 *)(uVar12 * 8);
      if (0xd < (*(byte *)(param_2 + 0x20) & 0x3f)) {
        iVar2 = 2;
        func_0x000100029b9c(2,0xf,4,0);
        if ((iVar2 == 0) ||
           (puVar8 = puVar9, _swift_stdlib_isStackAllocationSafe(puVar9,8), (int)puVar8 == 0)) {
          _swift_slowAlloc(puVar9,0xffffffffffffffff);
          _bzero();
          puVar8 = puVar9;
          FUN_1049035a4(puVar9,uVar12,param_2,param_1);
          _swift_release(param_2);
          _swift_slowDealloc(puVar9,0xffffffffffffffff,0xffffffffffffffff);
          goto LAB_104903174;
        }
      }
      puVar8 = &stack0xffffffffffffffb0 + -((ulong)(puVar9 + 0xf) & 0x3ffffffffffffff0);
      _bzero(puVar8);
      FUN_1049035a4(puVar8,uVar12,param_2,param_1);
      _swift_release(param_2);
LAB_104903174:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        return puVar8;
      }
      ___stack_chk_fail();
      _swift_willThrow();
      _swift_errorRelease(0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104903250);
      (*pcVar1)();
    }
  }
  else {
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar3 = 0;
      FUN_1048f07b4(0);
      puVar13 = PTR___swiftEmptySetSingleton_11034f1d8;
      puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
      uVar12 = param_2 & 0xffffffffffffff8;
      if ((long)param_2 < 0) {
        uVar12 = param_2;
      }
      _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
      __ss10__CocoaSetV12makeIteratorAB0D0CyF();
      uVar4 = uVar12;
      __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
      if (uVar4 != 0) {
        do {
          uStack_78 = uVar4;
          _swift_dynamicCast(&uStack_70,&uStack_78,PTR___syXlN_11034f1a0 + 8,uVar3,7);
          uVar4 = uStack_70;
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar5 = *(ulong *)(param_1 + 0x28);
            __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
            uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
            uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
            if ((*(ulong *)(param_1 + 0x38 + (uVar5 >> 3 & 0xfffffffffffff8)) >> (uVar5 & 0x3f) & 1)
                != 0) {
              do {
                uVar6 = *(ulong *)(*(long *)(param_1 + 0x30) + uVar5 * 8);
                _objc_retain();
                uVar7 = uVar6;
                __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
                _objc_release(uVar6);
                if ((uVar7 & 1) != 0) {
                  if (*(ulong *)(puVar13 + 0x18) <= *(ulong *)(puVar13 + 0x10)) {
                    func_0x000104902284(*(ulong *)(puVar13 + 0x10) + 1);
                  }
                  puVar13 = puStack_68;
                  FUN_104902758(uVar4,puStack_68);
                  goto LAB_104902e04;
                }
                uVar5 = uVar5 + 1 & ~uVar10;
              } while ((*(ulong *)(param_1 + 0x38 + (uVar5 >> 3 & 0xfffffffffffff8)) >>
                        (uVar5 & 0x3f) & 1) != 0);
            }
          }
          _objc_release();
LAB_104902e04:
          __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
        } while (uVar4 != 0);
      }
      _swift_release(uVar12);
      return puVar13;
    }
    uVar12 = param_2 & 0xffffffffffffff8;
    if ((long)param_2 < 0) {
      uVar12 = param_2;
    }
    uVar4 = uVar12;
    __ss10__CocoaSetV5countSivg(uVar12);
    func_0x0001049015b4(uVar12,uVar4);
    param_2 = uVar12;
  }
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = (1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f)) + 0x3fU >> 6;
  puVar9 = (undefined1 *)(uVar12 * 8);
  if (0xd < (*(byte *)(param_2 + 0x20) & 0x3f)) {
    iVar2 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    if ((iVar2 == 0) ||
       (puVar8 = puVar9, _swift_stdlib_isStackAllocationSafe(puVar9,8), (int)puVar8 == 0)) {
      _swift_slowAlloc(puVar9,0xffffffffffffffff);
      _bzero();
      puVar8 = puVar9;
      FUN_10490326c(puVar9,uVar12,param_1,param_2);
      _swift_release(param_2);
      _swift_slowDealloc(puVar9,0xffffffffffffffff,0xffffffffffffffff);
      goto LAB_104902fdc;
    }
  }
  puVar8 = &stack0xffffffffffffffb0 + -((ulong)(puVar9 + 0xf) & 0x3ffffffffffffff0);
  _bzero(puVar8);
  FUN_10490326c(puVar8,uVar12,param_1,param_2);
  _swift_release(param_2);
LAB_104902fdc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return puVar8;
  }
  ___stack_chk_fail();
  _swift_willThrow();
  _swift_errorRelease(0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1049030b8);
  (*pcVar1)();
}



/* Entry: 104902f3c; end: 10490326b;  */

/* WARNING: Removing unreachable block (ram,0x0001049030b8) */

undefined1 * FUN_104902f3c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f)) + 0x3fU >> 6;
  puVar4 = (undefined1 *)(uVar5 * 8);
  if (0xd < (*(byte *)(param_2 + 0x20) & 0x3f)) {
    iVar2 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    if ((iVar2 == 0) ||
       (puVar3 = puVar4, _swift_stdlib_isStackAllocationSafe(puVar4,8), (int)puVar3 == 0)) {
      _swift_slowAlloc(puVar4,0xffffffffffffffff);
      _bzero();
      puVar3 = puVar4;
      FUN_10490326c(puVar4,uVar5,param_1,param_2);
      _swift_release(param_2);
      _swift_slowDealloc(puVar4,0xffffffffffffffff,0xffffffffffffffff);
      goto LAB_104902fdc;
    }
  }
  puVar3 = auStack_50 + -((ulong)(puVar4 + 0xf) & 0x3ffffffffffffff0);
  _bzero(puVar3);
  FUN_10490326c(puVar3,uVar5,param_1,param_2);
  _swift_release(param_2);
LAB_104902fdc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _swift_willThrow();
    _swift_errorRelease(0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1049030b8);
    (*pcVar1)();
  }
  return puVar3;
}



/* Entry: 10490326c; end: 1049035a3;  */

void FUN_10490326c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_d0;
  ulong uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  ulong uStack_58;
  
  if ((param_3 & 0xc000000000000001) == 0) {
    uVar6 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
    puVar13 = (ulong *)(param_3 + 0x38);
    uVar11 = ~uVar6;
    uVar6 = -uVar6;
    uVar17 = 0xffffffffffffffff;
    if ((long)uVar6 < 0x40) {
      uVar17 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar17 = uVar17 & *puVar13;
    uVar6 = param_3;
    _swift_bridgeObjectRetain();
    lStack_70 = 0;
  }
  else {
    uVar6 = param_3 & 0xffffffffffffff8;
    if ((long)param_3 < 0) {
      uVar6 = param_3;
    }
    _swift_bridgeObjectRetain(param_3);
    __ss10__CocoaSetV12makeIteratorAB0D0CyF();
    uVar5 = 0;
    FUN_1048f07b4(0);
    uVar7 = 0x11309c860;
    func_0x0001049055f4(0x11309c860,FUN_1048f07b4,PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8);
    __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&uStack_88,uVar6,uVar5,uVar7);
    uVar17 = uStack_68;
    uVar11 = uStack_78;
    param_3 = uStack_88;
    puVar13 = puStack_80;
  }
  lStack_d0 = 0;
  lVar12 = lStack_70;
  while( true ) {
    lVar2 = lVar12;
    uVar10 = uVar17;
    if ((long)param_3 < 0) {
      __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
      if (uVar6 == 0) break;
      uVar7 = 0;
      uStack_90 = uVar6;
      FUN_1048f07b4(0);
      _swift_dynamicCast(&uStack_58,&uStack_90,PTR___syXlN_11034f1a0 + 8,uVar7,7);
      uVar6 = uStack_58;
    }
    else {
      while (uVar10 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1049035a4);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar17 = 0;
          goto LAB_104903548;
        }
        lVar2 = lVar1;
        uVar10 = puVar13[lVar1];
      }
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      uVar6 = *(ulong *)(*(long *)(param_3 + 0x30) +
                        (lVar2 << 9 | LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) << 3));
      _objc_retain();
    }
    if (uVar6 == 0) break;
    uVar8 = *(ulong *)(param_4 + 0x28);
    __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
    uVar14 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
    uVar8 = uVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar15 = uVar8 >> 6;
    uVar16 = 1L << (uVar8 & 0x3f);
    uVar17 = uVar10;
    lVar12 = lVar2;
    if ((uVar16 & *(ulong *)(param_4 + 0x38 + uVar15 * 8)) == 0) {
LAB_104903378:
      _objc_release();
    }
    else {
      FUN_1048f07b4(0);
      uVar9 = *(ulong *)(*(long *)(param_4 + 0x30) + uVar8 * 8);
      _objc_retain();
      uVar10 = uVar9;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      _objc_release(uVar9);
      if ((uVar10 & 1) == 0) {
        do {
          uVar8 = uVar8 + 1 & ~uVar14;
          uVar15 = uVar8 >> 6;
          uVar16 = 1L << (uVar8 & 0x3f);
          if ((uVar16 & *(ulong *)(param_4 + 0x38 + uVar15 * 8)) == 0) goto LAB_104903378;
          uVar9 = *(ulong *)(*(long *)(param_4 + 0x30) + uVar8 * 8);
          _objc_retain();
          uVar10 = uVar9;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          _objc_release(uVar9);
        } while ((uVar10 & 1) == 0);
      }
      _objc_release();
      uVar10 = *(ulong *)(param_1 + uVar15 * 8);
      *(ulong *)(param_1 + uVar15 * 8) = uVar10 | uVar16;
      if (((uVar10 & uVar16) == 0) &&
         (bVar4 = SCARRY8(lStack_d0,1), lStack_d0 = lStack_d0 + 1, bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104903544);
        (*pcVar3)();
      }
    }
  }
LAB_104903548:
  FUN_104905384(param_3,puVar13,uVar11,lVar12,uVar17);
  _swift_retain(param_4);
  FUN_104903970(param_1,param_2,lStack_d0,param_4);
  return;
}



/* Entry: 1049035a4; end: 10490396f;  */

void FUN_1049035a4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  if (*(ulong *)(param_3 + 0x10) <= *(ulong *)(param_4 + 0x10)) {
    lStack_78 = 0;
    uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
    uStack_70 = 0xffffffffffffffff;
    if ((long)uVar8 < 0x40) {
      uStack_70 = ~(-1L << (uVar8 & 0x3f));
    }
    uStack_70 = uStack_70 & *(ulong *)(param_3 + 0x38);
    lVar7 = 0;
LAB_1049037e8:
    do {
      if (uStack_70 == 0) {
        do {
          lVar11 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10490396c);
            (*pcVar1)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar11) goto LAB_104903928;
          uStack_70 = ((ulong *)(param_3 + 0x38))[lVar11];
          lVar7 = lVar7 + 1;
        } while (uStack_70 == 0);
        uVar6 = (uStack_70 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_70 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uStack_70 = uStack_70 - 1 & uStack_70;
      }
      else {
        uVar6 = (uStack_70 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_70 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uStack_70 = uStack_70 - 1 & uStack_70;
        lVar11 = lVar7;
      }
      uVar9 = LZCOUNT(uVar6);
      uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x30) + (uVar9 | lVar11 << 6) * 8);
      uVar6 = *(ulong *)(param_4 + 0x28);
      _objc_retain(uVar3);
      __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
      uVar10 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
      uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
      lVar7 = lVar11;
      if ((*(ulong *)(param_4 + 0x38 + (uVar6 >> 3 & 0xfffffffffffff8)) >> (uVar6 & 0x3f) & 1) != 0)
      {
        FUN_1048f07b4(0);
        do {
          uVar5 = *(ulong *)(*(long *)(param_4 + 0x30) + uVar6 * 8);
          _objc_retain();
          uVar12 = uVar5;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          _objc_release(uVar5);
          if ((uVar12 & 1) != 0) {
            _objc_release(uVar3);
            uVar6 = (uVar9 & 0xffffffffffffffc0 | lVar11 << 6) >> 3;
            *(ulong *)(param_1 + uVar6) = *(ulong *)(param_1 + uVar6) | 1L << (uVar9 & 0x3f);
            bVar2 = SCARRY8(lStack_78,1);
            lStack_78 = lStack_78 + 1;
            if (bVar2) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x104903928);
              (*pcVar1)();
            }
            goto LAB_1049037e8;
          }
          uVar6 = uVar6 + 1 & ~uVar10;
        } while ((*(ulong *)(param_4 + 0x38 + (uVar6 >> 3 & 0xfffffffffffff8)) >> (uVar6 & 0x3f) & 1
                 ) != 0);
      }
      _objc_release(uVar3);
    } while( true );
  }
  uVar8 = 1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uStack_80 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    uStack_80 = ~(-1L << (uVar8 & 0x3f));
  }
  uStack_80 = uStack_80 & *(ulong *)(param_4 + 0x38);
  lStack_78 = 0;
  lVar7 = 0;
LAB_10490363c:
  do {
    if (uStack_80 == 0) {
      do {
        lVar11 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104903970);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar11) {
LAB_104903928:
          _swift_retain(param_3);
          FUN_104903970(param_1,param_2,lStack_78,param_3);
          return;
        }
        uStack_80 = ((ulong *)(param_4 + 0x38))[lVar11];
        lVar7 = lVar7 + 1;
      } while (uStack_80 == 0);
      uVar6 = (uStack_80 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_80 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uStack_80 = uStack_80 - 1 & uStack_80;
    }
    else {
      uVar6 = (uStack_80 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_80 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uStack_80 = uStack_80 - 1 & uStack_80;
      lVar11 = lVar7;
    }
    uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x30) + (LZCOUNT(uVar6) | lVar11 << 6) * 8);
    uVar6 = *(ulong *)(param_3 + 0x28);
    _objc_retain(uVar3);
    __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
    uVar10 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
    uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
    uVar9 = uVar6 >> 6;
    uVar12 = 1L << (uVar6 & 0x3f);
    lVar7 = lVar11;
    if ((uVar12 & *(ulong *)(param_3 + 0x38 + uVar9 * 8)) == 0) {
LAB_10490362c:
      _objc_release(uVar3);
      goto LAB_10490363c;
    }
    FUN_1048f07b4(0);
    uVar4 = *(ulong *)(*(long *)(param_3 + 0x30) + uVar6 * 8);
    _objc_retain();
    uVar5 = uVar4;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar4);
    if ((uVar5 & 1) == 0) {
      do {
        uVar6 = uVar6 + 1 & ~uVar10;
        uVar9 = uVar6 >> 6;
        uVar12 = 1L << (uVar6 & 0x3f);
        if ((uVar12 & *(ulong *)(param_3 + 0x38 + uVar9 * 8)) == 0) goto LAB_10490362c;
        uVar4 = *(ulong *)(*(long *)(param_3 + 0x30) + uVar6 * 8);
        _objc_retain();
        uVar5 = uVar4;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        _objc_release(uVar4);
      } while ((uVar5 & 1) == 0);
    }
    _objc_release(uVar3);
    *(ulong *)(param_1 + uVar9 * 8) = *(ulong *)(param_1 + uVar9 * 8) | uVar12;
    bVar2 = SCARRY8(lStack_78,1);
    lStack_78 = lStack_78 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104903798);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 104903970; end: 104903b6b;  */

undefined * FUN_104903970(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  if (param_3 == (undefined *)0x0) {
    _swift_release(param_4);
    param_4 = PTR___swiftEmptySetSingleton_11034f1d8;
    _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
  }
  else if (*(undefined **)(param_4 + 0x10) != param_3) {
    func_0x0001048db364(0x11309cb90);
    puVar3 = param_3;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    if (param_2 < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = *param_1;
    }
    lVar6 = 0;
    do {
      if (uVar11 == 0) {
        do {
          lVar10 = lVar6 + 1;
          if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x104903b64);
            (*pcVar1)();
          }
          if (param_2 <= lVar10) goto LAB_104903b38;
          uVar11 = param_1[lVar10];
          lVar6 = lVar6 + 1;
        } while (uVar11 == 0);
        uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
      }
      else {
        uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar10 = lVar6;
      }
      uVar4 = *(undefined8 *)(*(long *)(param_4 + 0x30) + (LZCOUNT(uVar5) | lVar10 << 6) * 8);
      uVar9 = *(ulong *)(puVar3 + 0x28);
      _objc_retain();
      __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
      uVar8 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar9 = uVar9 & (uVar8 ^ 0xffffffffffffffff);
      uVar7 = uVar9 >> 6;
      uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(puVar3 + uVar7 * 8 + 0x38) ^ 0xffffffffffffffff);
      if (uVar5 == 0) {
        bVar2 = false;
        uVar5 = 0x3f - uVar8 >> 6;
        do {
          uVar9 = uVar7 + 1;
          if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x104903b68);
            (*pcVar1)();
          }
          uVar7 = 0;
          if (uVar9 != uVar5) {
            uVar7 = uVar9;
          }
          bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        } while (*(ulong *)(puVar3 + uVar7 * 8 + 0x38) == 0xffffffffffffffff);
        uVar5 = ~*(ulong *)(puVar3 + uVar7 * 8 + 0x38);
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) + uVar7 * 0x40;
      }
      else {
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x38) = 1L << (uVar5 & 0x3f) | *(ulong *)(puVar3 + uVar7 + 0x38);
      *(undefined8 *)(*(long *)(puVar3 + 0x30) + uVar5 * 8) = uVar4;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      bVar2 = SBORROW8((long)param_3,1);
      param_3 = param_3 + -1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104903b6c);
        (*pcVar1)();
      }
      lVar6 = lVar10;
    } while (param_3 != (undefined *)0x0);
LAB_104903b38:
    _swift_release(param_4);
    param_4 = puVar3;
  }
  return param_4;
}



/* Entry: 104903b6c; end: 104903d67;  */

undefined8 FUN_104903b6c(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_60;
  undefined8 uStack_58;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if ((param_3 & 1) != 0) {
      uVar5 = param_4 & 0xffffffffffffff8;
      if ((long)param_4 < 0) {
        uVar5 = param_4;
      }
      __ss10__CocoaSetV7element2atyXlAB5IndexV_tF(param_1,param_2,uVar5);
      uVar2 = 0;
      uStack_60 = param_1;
      FUN_1048f07b4(0);
      _swift_dynamicCast(&uStack_58,&uStack_60,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return uStack_58;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104903d68);
    (*pcVar1)();
  }
  if ((param_3 & 1) != 0) {
    uVar2 = 0;
    FUN_1048f07b4(0);
    uVar5 = param_1;
    __ss10__CocoaSetV5IndexV3ages5Int32Vvg(param_1,param_2);
    if ((int)uVar5 != *(int *)(param_4 + 0x24)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104903d5c);
      (*pcVar1)();
    }
    __ss10__CocoaSetV5IndexV7elementyXlvg(param_1,param_2);
    uStack_60 = param_1;
    _swift_dynamicCast(&uStack_58,&uStack_60,PTR___syXlN_11034f1a0 + 8,uVar2,7);
    param_1 = *(ulong *)(param_4 + 0x28);
    __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
    uVar5 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
    param_1 = param_1 & (uVar5 ^ 0xffffffffffffffff);
    if ((*(ulong *)(param_4 + 0x38 + (param_1 >> 3 & 0xfffffffffffff8)) >> (param_1 & 0x3f) & 1) !=
        0) {
      do {
        uVar3 = *(ulong *)(*(long *)(param_4 + 0x30) + param_1 * 8);
        _objc_retain();
        uVar4 = uVar3;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          _objc_release(uStack_58);
          goto LAB_104903d34;
        }
        param_1 = param_1 + 1 & ~uVar5;
      } while ((*(ulong *)(param_4 + 0x38 + (param_1 >> 3 & 0xfffffffffffff8)) >> (param_1 & 0x3f) &
               1) != 0);
    }
    _objc_release(uStack_58);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104903cec);
    (*pcVar1)();
  }
  if (((long)param_1 < 0) || (1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) <= (long)param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104903d60);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_4 + (param_1 >> 3 & 0xfffffffffffff8) + 0x38) >> (param_1 & 0x3f) & 1) == 0)
  {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104903d64);
    (*pcVar1)();
  }
  if (*(int *)(param_4 + 0x24) != (int)param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104903d2c);
    (*pcVar1)();
  }
LAB_104903d34:
  uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return uVar2;
}



/* Entry: 104903d68; end: 104903d97;  */

void FUN_104903d68(void)

{
  FUN_1048ff650();
  return;
}



/* Entry: 104903d98; end: 104903daf;  */

void FUN_104903d98(long param_1,long param_2)

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



/* Entry: 104903db0; end: 104903faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104903db0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long alStack_70 [3];
  undefined1 auStack_58 [24];
  
  lVar5 = 0x11309caa0;
  func_0x0001048db364();
  lVar5 = (long)alStack_70 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    lVar4 = 0;
    FUN_1048f5548();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar5,1,1,lVar4);
  }
  else {
    puVar2 = &UNK_1107b7508;
    _swift_allocObject(&UNK_1107b7508,0x20,7);
    *(long *)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    puVar3 = &UNK_1107b7530;
    _swift_allocObject(&UNK_1107b7530,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_10490566c;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    func_0x000100dc19e8(param_1,param_2);
    _swift_retain(puVar2);
    __s10Foundation4UUIDVACycfC(lVar5);
    lVar4 = 0;
    FUN_1048f5548();
    puVar1 = (undefined8 *)(lVar5 + *(int *)(lVar4 + 0x14));
    *puVar1 = FUN_104905678;
    puVar1[1] = puVar3;
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar5,0,1,lVar4);
    _swift_release(puVar2);
  }
  lVar4 = _DAT_11309ca98;
  _swift_beginAccess(unaff_x20 + _DAT_11309ca98,auStack_58,0x21,0);
  FUN_1048f9c60(lVar5,unaff_x20 + lVar4,0x11309caa0);
  _swift_endAccess(auStack_58);
  lVar5 = _DAT_11309cab8;
  _swift_beginAccess(unaff_x20 + _DAT_11309cab8,auStack_58,0,0);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (lVar5 != 0) {
    _swift_retain(lVar5);
    FUN_10490567c();
    _swift_release(lVar5);
  }
  lVar5 = _DAT_11309cac8;
  _swift_beginAccess(unaff_x20 + _DAT_11309cac8,alStack_70,1,0);
  *(undefined1 *)(unaff_x20 + lVar5) = 0;
  puVar2 = &UNK_1107b74e0;
  _swift_allocObject(&UNK_1107b74e0,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  _objc_retain();
  FUN_1048fb1cc(0x1049054c4,puVar2);
  _swift_release(puVar2);
  return;
}



/* Entry: 104903fb0; end: 104904c5b;  */

undefined * FUN_104903fb0(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)param_1 & 0xfffffffffffff8) + 0x10);
    puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  PTR___swiftEmptySetSingleton_11034f1d8 = puVar1;
  if (puVar11 == (undefined *)0x0) {
    _swift_retain(puVar1);
  }
  else {
    func_0x0001048db364(0x11309cb90);
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    puVar1 = puVar11;
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)param_1 & 0xfffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (puVar11 != (undefined *)0x0) {
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      puVar12 = (undefined *)0x0;
      puVar7 = *(undefined **)(((ulong)param_1 & 0xfffffffffffff8) + 0x10);
      do {
        if (puVar12 == puVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104904284);
          (*pcVar2)();
        }
        uVar5 = *(undefined8 *)(param_1 + (long)puVar12 * 8 + 0x20);
        uVar4 = *(ulong *)(puVar1 + 0x28);
        _objc_retain();
        __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          FUN_1048f07b4(0);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            _objc_retain();
            uVar6 = uVar8;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
            _objc_release(uVar8);
            if ((uVar6 & 1) != 0) {
              _objc_release(uVar5);
              goto LAB_1049041a0;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined8 *)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = uVar5;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104904288);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
LAB_1049041a0:
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar11);
    }
    else {
      puVar12 = (undefined *)0x0;
      do {
        puVar7 = puVar12;
        func_0x000104900f0c(puVar12,param_1);
        bVar3 = SCARRY8((long)puVar12,1);
        puVar12 = puVar12 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10490427c);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(puVar1 + 0x28);
        __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          FUN_1048f07b4(0);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            _objc_retain();
            uVar6 = uVar8;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
            _objc_release(uVar8);
            if ((uVar6 & 1) != 0) {
              _swift_unknownObjectRelease(puVar7);
              goto joined_r0x00010490408c;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined **)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = puVar7;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104904280);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
joined_r0x00010490408c:
      } while (puVar12 != puVar11);
    }
  }
  return puVar1;
}



/* Entry: 104904c5c; end: 104904df3;  */

uint FUN_104904c5c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined *puVar7;
  
  __s10Foundation3URLV6schemeSSSgvg();
  if (param_2 == 0) {
    uVar6 = 0;
    goto LAB_104904dd4;
  }
  lVar1 = param_1;
  lVar5 = param_2;
  __s10Foundation3URLV4hostSSSgvg();
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    puVar2 = &UNK_10dd47ba0;
    _swift_getKeyPath();
    puVar3 = puVar2;
    FUN_1048f8990();
    _swift_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
LAB_104904d24:
      puVar3 = (undefined *)0x0;
      puVar7 = (undefined *)0xe000000000000000;
    }
    else {
      puVar2 = puVar3;
      puVar7 = PTR_s_appID_11259ee40;
      _objc_msgSend(puVar3,PTR_s_appID_11259ee40);
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(puVar3);
      if (puVar2 == (undefined *)0x0) goto LAB_104904d24;
      puVar3 = puVar2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar2);
      _objc_release(puVar2);
    }
    __sSS6appendyySSF(puVar3,puVar7);
    _swift_bridgeObjectRelease(puVar7);
    uVar4 = 0;
    __sSS9hasPrefixySbSSF(0x6266,0xe200000000000000,param_1,param_2);
    _swift_bridgeObjectRelease(0xe200000000000000);
    _swift_bridgeObjectRelease(param_2);
    param_2 = lVar5;
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    else if ((lVar1 == 0x7a69726f68747561) && (lVar5 == -0x16ffffffffffff9b)) {
      uVar6 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (lVar1,lVar5,0x7a69726f68747561,0xe900000000000065,0);
      uVar6 = (uint)lVar1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
LAB_104904dd4:
  return uVar6 & 1;
}



/* Entry: 104904df4; end: 104904e37;  */

long FUN_104904df4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 104904e38; end: 104904e3f;  */

void FUN_104904e38(void)

{
  if (lRam000000011309cb70 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e8257fc);
  return;
}



/* Entry: 104904e40; end: 1049052eb;  */

void FUN_104904e40(undefined8 param_1)

{
  if (lRam000000011309cb70 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e8257fc);
  return;
}



/* Entry: 1049052ec; end: 1049052f3;  */

void FUN_1049052ec(undefined8 param_1,long param_2)

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



/* Entry: 1049052f4; end: 10490535f;  */

void FUN_1049052f4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 104905360; end: 104905383;  */

void FUN_104905360(undefined8 param_1)

{
  FUN_1048fc5f4(param_1,1);
  return;
}



/* Entry: 104905384; end: 104905497;  */

void FUN_104905384(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 104905498; end: 1049054bf;  */

void FUN_104905498(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*param_2);
  return;
}



/* Entry: 1049054c0; end: 1049054cb;  */

void FUN_1049054c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_28,&uStack_30);
  return;
}



/* Entry: 1049054cc; end: 10490555f;  */

void FUN_1049054cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_28,&uStack_30);
  return;
}



/* Entry: 104905560; end: 1049055b3;  */

uint FUN_104905560(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 1049055b4; end: 10490563b;  */

void FUN_1049055b4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10490563c; end: 10490564b;  */

void FUN_10490563c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  pcVar2 = pcVar1;
  _objc_retain();
  _swift_errorRetain(param_2);
  FUN_10490bbe8(param_1,param_2);
  (*pcVar1)();
  if (((uint)uVar3 & 0xff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
    return;
  }
  if ((uVar3 & 0xff) == 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
    return;
  }
  return;
}



/* Entry: 10490564c; end: 10490566b;  */

void FUN_10490564c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10490566c; end: 10490566f;  */

void FUN_10490566c(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*param_2);
  return;
}



/* Entry: 104905670; end: 104905677;  */

void FUN_104905670(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104905678; end: 10490567b;  */

void FUN_104905678(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_28,&uStack_30);
  return;
}



/* Entry: 10490567c; end: 104905e2b;  */

/* WARNING: Removing unreachable block (ram,0x000104905a14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10490567c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [344];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar2 = PTR_PTR_1126add30;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    _objc_release(puVar2);
  }
  lVar6 = _DAT_11309ca90;
  _swift_beginAccess(param_1 + _DAT_11309ca90,auStack_80,0,0);
  lVar4 = _DAT_11309cab0;
  lVar6 = *(long *)(param_1 + lVar6);
  if (lVar6 == 2) {
    uVar7 = 0xe800000000000000;
    uVar8 = 0x656e6f7972657665;
  }
  else if (lVar6 == 1) {
    uVar7 = 0xe700000000000000;
    uVar8 = 0x656d5f796c6e6f;
  }
  else if (lVar6 == 0) {
    uVar7 = 0xe700000000000000;
    uVar8 = 0x73646e65697266;
  }
  else {
    uVar8 = 0;
    uVar7 = 0xe000000000000000;
  }
  _swift_beginAccess(param_1 + _DAT_11309cab0,auStack_98,0,0);
  lVar6 = *(long *)(param_1 + lVar4);
  if (lVar6 == 0) {
    uVar3 = 0;
    uVar5 = 0xe000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(lVar6);
    uVar3 = 0;
    uVar5 = 0xe000000000000000;
    FUN_104907184(0,0xe000000000000000,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  lVar6 = 0x11309c610;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar6 + 0x20) = 0x7070414246797274;
  *(undefined8 *)(lVar6 + 0x18) = 0xc;
  *(undefined8 *)(lVar6 + 0x10) = 6;
  *(undefined8 *)(lVar6 + 0x28) = 0xec00000068747541;
  puVar1 = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar6 + 0x30) = 0;
  *(undefined **)(lVar6 + 0x48) = puVar1;
  *(undefined8 *)(lVar6 + 0x50) = 0x7261666153797274;
  *(undefined8 *)(lVar6 + 0x58) = 0xed00006874754169;
  *(undefined1 *)(lVar6 + 0x60) = 1;
  *(undefined **)(lVar6 + 0x78) = puVar1;
  *(undefined8 *)(lVar6 + 0x80) = 0x6874756165527369;
  *(undefined8 *)(lVar6 + 0x88) = 0xed0000657a69726f;
  *(bool *)(lVar6 + 0x90) = puVar2 != (undefined *)0x0;
  *(undefined **)(lVar6 + 0xa8) = puVar1;
  *(undefined8 *)(lVar6 + 0xb0) = 0x65625f6e69676f6c;
  puVar2 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar6 + 0xb8) = 0xee00726f69766168;
  *(undefined8 *)(lVar6 + 0xc0) = 0xd000000000000019;
  *(undefined8 *)(lVar6 + 200) = 0x800000010f21bad0;
  *(undefined **)(lVar6 + 0xd8) = puVar2;
  *(undefined8 *)(lVar6 + 0xe0) = 0xd000000000000010;
  *(undefined8 *)(lVar6 + 0xe8) = 0x800000010f21b3d0;
  *(undefined8 *)(lVar6 + 0xf0) = uVar8;
  *(undefined8 *)(lVar6 + 0xf8) = uVar7;
  *(undefined **)(lVar6 + 0x108) = puVar2;
  *(undefined8 *)(lVar6 + 0x110) = 0x697373696d726570;
  *(undefined **)(lVar6 + 0x138) = puVar2;
  *(undefined8 *)(lVar6 + 0x118) = 0xeb00000000736e6f;
  *(undefined8 *)(lVar6 + 0x120) = uVar3;
  *(undefined8 *)(lVar6 + 0x128) = uVar5;
  lVar4 = lVar6;
  func_0x000100214a84();
  _swift_setDeallocating(lVar6);
  uVar7 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  _swift_arrayDestroy((undefined8 *)(lVar6 + 0x20),6,uVar7);
  _swift_beginAccess(unaff_x20 + 0x20,auStack_1f0,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = uVar8;
  _swift_bridgeObjectRetain(uVar8);
  _swift_isUniquelyReferenced_nonNull_native();
  uStack_1f8 = uVar8;
  FUN_104909268(lVar4,&UNK_100216600,0,uVar7,&uStack_1f8);
  _swift_bridgeObjectRelease(lVar4);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_1f8;
  _swift_bridgeObjectRelease(uVar7);
  if (lRam000000011309c1e0 != -1) {
    uVar7 = 0x11309c1e0;
    _swift_once(0x11309c1e0,FUN_1048f5a64);
  }
  uVar8 = uRam0000000113815560;
  FUN_104907418();
  FUN_10490790c(uVar8,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  return;
}



/* Entry: 104905e2c; end: 104905fb3;  */

void FUN_104905e2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_d0 [24];
  long lStack_b8;
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  if (lRam000000011309c1e8 != -1) {
    _swift_once(0x11309c1e8,FUN_1048f5af4);
  }
  uVar3 = uRam0000000113815568;
  _swift_beginAccess(unaff_x20 + 0x28,auStack_68,0,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_beginAccess(unaff_x20 + 0x38,auStack_80,0,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar5 = uVar8;
  _objc_retain(uVar8);
  _swift_bridgeObjectRetain(uVar2);
  func_0x000104907c30(uVar3,uVar1,uVar2,uVar8);
  _swift_bridgeObjectRelease(uVar2);
  _objc_release(uVar5);
  puVar6 = &UNK_10dd47d40;
  _swift_getKeyPath(&UNK_10dd47d40);
  FUN_1048df838(auStack_d0);
  _swift_release(puVar6);
  if (lStack_b8 == 0) {
    func_0x000104909c40(auStack_d0,0x11309cc00);
  }
  else {
    FUN_104909950(auStack_d0,auStack_a8);
    lVar4 = lStack_88;
    lVar7 = lStack_90;
    func_0x0001000a8868(auStack_a8,lStack_90);
    (**(code **)(lVar4 + 8))(lVar7,lVar4);
    if (lVar7 != 1) {
      func_0x0001000a8868(auStack_a8,lStack_90);
      (**(code **)(lStack_88 + 0x18))(lStack_90,lStack_88);
    }
    func_0x000104909bdc(auStack_a8);
  }
  return;
}



/* Entry: 104905fb4; end: 104905ffb;  */

void FUN_104905fb4(void)

{
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSTimer_1126af1b0);
  _objc_msgSend(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104905ffc; end: 104905fff;  */

void FUN_104905ffc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  code *pcVar14;
  long lVar15;
  undefined1 auStack_150 [16];
  undefined *puStack_140;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [176];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  puVar11 = auStack_150 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar15 = *(long *)(lVar3 + -8);
  lVar12 = (long)puVar11 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined *)0x11309c610;
  func_0x0001048db364();
  pcVar2 = (code *)auStack_120;
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 6;
  *(undefined8 *)(puVar4 + 0x10) = 3;
  if (lRam000000011309c228 != -1) {
    pcVar2 = (code *)0x104906818;
    _swift_once(0x11309c228);
  }
  uVar5 = uRam000000011309cbd0;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(code **)(puVar4 + 0x28) = pcVar2;
  puVar7 = PTR___sSSN_11034da80;
  *(undefined **)(puVar4 + 0x48) = PTR___sSSN_11034da80;
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = param_1;
  }
  lVar1 = -0x2000000000000000;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  *(undefined8 *)(puVar4 + 0x30) = uVar5;
  *(long *)(puVar4 + 0x38) = lVar1;
  lVar1 = lRam000000011309c210;
  _swift_bridgeObjectRetain(param_2);
  if (lVar1 != -1) {
    pcVar2 = FUN_104906778;
    _swift_once(0x11309c210);
  }
  pcVar6 = pcRam000000011309cbb8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(code **)(puVar4 + 0x50) = pcVar6;
  *(code **)(puVar4 + 0x58) = pcVar2;
  if (param_4 == 0) {
    *(undefined **)(puVar4 + 0x78) = puVar7;
LAB_1049096f4:
    __s10Foundation4UUIDVACycfC(lVar12);
    __s10Foundation4UUIDV10uuidStringSSvg();
    (**(code **)(lVar15 + 8))(lVar12,lVar3);
    pcVar13 = pcVar2;
    pcVar14 = pcVar6;
  }
  else {
    pcVar2 = (code *)auStack_138;
    _swift_beginAccess(param_4 + 0x10,pcVar2,0,0);
    pcVar14 = *(code **)(param_4 + 0x10);
    pcVar13 = *(code **)(param_4 + 0x18);
    *(undefined **)(puVar4 + 0x78) = puVar7;
    pcVar6 = pcVar13;
    _swift_bridgeObjectRetain();
    if (pcVar13 == (code *)0x0) goto LAB_1049096f4;
  }
  *(code **)(puVar4 + 0x60) = pcVar14;
  *(code **)(puVar4 + 0x68) = pcVar13;
  *(undefined8 *)(puVar4 + 0x80) = 0xd00000000000001d;
  *(undefined8 *)(puVar4 + 0x88) = 0x800000010f21bb70;
  *(undefined **)(puVar4 + 0xa8) = PTR___sSbN_11034dd40;
  puVar4[0x90] = 1;
  puVar7 = puVar4;
  func_0x000100214a84();
  _swift_setDeallocating(puVar4);
  uVar5 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  _swift_arrayDestroy(puVar4 + 0x20,3,uVar5);
  if (param_3 != 0) {
    _swift_bridgeObjectRetain(param_3);
    puVar4 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native(puVar7);
    puStack_140 = puVar7;
    FUN_104909268(param_3,&UNK_100216600,0,puVar4,&puStack_140);
    _swift_bridgeObjectRelease(param_3);
    puVar7 = puStack_140;
  }
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  _swift_getInitializedObjCClass();
  puVar8 = puVar7;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar7);
  puStack_140 = (undefined *)0x0;
  puVar9 = PTR_s_dataWithJSONObject_options_error_1125b6c80;
  _objc_msgSend(puVar4,PTR_s_dataWithJSONObject_options_error_1125b6c80,puVar8,0,&puStack_140);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar7 = puStack_140;
  _objc_retain(puStack_140);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = puVar7;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar7);
    _swift_willThrow();
    _swift_errorRelease(puVar4);
  }
  else {
    puVar7 = puVar4;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(puVar4);
    _objc_release(puVar4);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar11);
    puVar8 = puVar7;
    puVar10 = puVar9;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(puVar7,puVar9,puVar11);
    func_0x00010006c090(puVar7,puVar9);
    puVar4 = puVar10;
    if (puVar10 != (undefined *)0x0) goto LAB_1049098d8;
  }
  puVar8 = (undefined *)0x0;
  puVar10 = (undefined *)0x0;
LAB_1049098d8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail(puVar8,puVar10);
  _swift_release(puVar4);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104909950);
  (*pcVar2)();
}



/* Entry: 104906000; end: 10490624b;  */

/* WARNING: Removing unreachable block (ram,0x000104906244) */

void FUN_104906000(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [128];
  
  puVar1 = PTR_PTR_1126add20;
  _swift_getInitializedObjCClass();
  puVar2 = puVar1;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  puVar3 = puVar2;
  _objc_msgSend(puVar2,PTR_s_isRegisteredURLScheme__1125fca58,param_1);
  _objc_release(puVar2);
  _objc_release(param_1);
  puVar2 = puVar1;
  _objc_msgSend(puVar1,PTR_s_sharedUtility_112668b58);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  _objc_msgSend();
  _objc_release(puVar2);
  _objc_msgSend(puVar1,PTR_s_sharedUtility_112668b58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_msgSend();
  _objc_release(puVar1);
  lVar5 = 0x11309cc08;
  func_0x0001048db364();
  _swift_initStackObject();
  *(undefined8 *)(lVar5 + 0x18) = 6;
  *(undefined8 *)(lVar5 + 0x10) = 3;
  *(undefined8 *)(lVar5 + 0x20) = 0xd000000000000015;
  *(undefined8 *)(lVar5 + 0x28) = 0x800000010f21baf0;
  *(char *)(lVar5 + 0x30) = (char)puVar3;
  *(undefined8 *)(lVar5 + 0x38) = 0xd000000000000027;
  *(undefined8 *)(lVar5 + 0x40) = 0x800000010f21bb10;
  *(char *)(lVar5 + 0x48) = (char)puVar4;
  *(undefined8 *)(lVar5 + 0x50) = 0xd000000000000028;
  *(undefined8 *)(lVar5 + 0x58) = 0x800000010f21bb40;
  *(char *)(lVar5 + 0x60) = (char)puVar2;
  lVar6 = lVar5;
  func_0x0001003d8468();
  _swift_setDeallocating(lVar5);
  uVar7 = 0x11309cc10;
  func_0x0001048db364(0x11309cc10);
  _swift_arrayDestroy((undefined8 *)(lVar5 + 0x20),3,uVar7);
  _swift_beginAccess(unaff_x20 + 0x20,auStack_d0,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_bridgeObjectRetain(uVar8);
  lVar5 = lVar6;
  func_0x000103b18200(lVar6);
  _swift_bridgeObjectRelease(lVar6);
  uVar7 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native(uVar8);
  uStack_d8 = uVar8;
  FUN_104909268(lVar5,&UNK_100216600,0,uVar7,&uStack_d8);
  _swift_bridgeObjectRelease(lVar5);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_d8;
  _swift_bridgeObjectRelease(uVar7);
  return;
}



/* Entry: 10490624c; end: 1049062f3;  */

void FUN_10490624c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  _swift_bridgeObjectRelease(uVar2);
  lVar1 = lRam000000011309c1f0;
  _swift_bridgeObjectRetain(param_2);
  if (lVar1 != -1) {
    param_2 = 0x11309c1f0;
    _swift_once(0x11309c1f0,FUN_1048f5b84);
  }
  uVar2 = uRam0000000113815570;
  FUN_104907418();
  FUN_10490790c(uVar2,param_2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Entry: 1049062f4; end: 104906777;  */

undefined1  [16] FUN_1049062f4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 104906778; end: 10490695b;  */

void FUN_104906778(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f21bce0);
  uRam000000011309cbb8 = uVar1;
  return;
}



/* Entry: 10490695c; end: 104906fbb;  */

void FUN_10490695c(code *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code **ppcVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  code *unaff_x22;
  undefined8 uVar13;
  undefined *unaff_x27;
  long lVar14;
  undefined1 auStack_e0 [8];
  code *pcStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar14 = *(long *)(lVar1 + -8);
  pcVar10 = (code *)(auStack_e0 + -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0));
  if (param_1 == (code *)0x0) goto LAB_104906c34;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = 0x6574617473;
    uVar9 = 0;
    func_0x000100029284(0x6574617473);
    if ((uVar9 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,&pcStack_90);
      _swift_bridgeObjectRelease(param_1);
      unaff_x27 = PTR___sypN_11034f1a8;
      puVar3 = &uStack_a8;
      _swift_dynamicCast(puVar3,&pcStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      uVar12 = uStack_a0;
      if (((ulong)puVar3 & 1) == 0) goto LAB_104906c34;
      pcStack_90 = (code *)CONCAT71(uStack_a7,uStack_a8);
      uStack_88 = uStack_a0;
      __sSS10FoundationE8EncodingV4utf8ACvgZ(pcVar10);
      func_0x000100e8b654();
      unaff_x19 = 0;
      unaff_x22 = pcVar10;
      __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                (pcVar10,0,PTR___sSSN_11034da80,puVar3);
      (**(code **)(lVar14 + 8))(pcVar10,lVar1);
      _swift_bridgeObjectRelease(uVar12);
      if (0xe < unaff_x19 >> 0x3c) goto LAB_104906c34;
      puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      _swift_getInitializedObjCClass();
      param_1 = unaff_x22;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(unaff_x22,unaff_x19);
      pcStack_90 = (code *)0x0;
      _objc_msgSend(puVar4,PTR_s_JSONObjectWithData_options_error_11254dfe0,param_1,0,&pcStack_90);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      pcVar10 = pcStack_90;
      if (puVar4 == (undefined *)0x0) {
        pcVar5 = pcStack_90;
        _objc_retain();
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
        _objc_release(pcVar5);
        _swift_willThrow();
        func_0x0001000b44c0(unaff_x22,unaff_x19);
        _swift_errorRelease(pcVar10);
        goto LAB_104906c34;
      }
      _objc_retain();
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&pcStack_90,puVar4);
      _swift_unknownObjectRelease(puVar4);
      uVar12 = 0x11309c420;
      func_0x0001048db364(0x11309c420);
      puVar3 = &uStack_a8;
      _swift_dynamicCast(puVar3,&pcStack_90,unaff_x27 + 8,uVar12,6);
      if (((ulong)puVar3 & 1) == 0) {
LAB_104906cd4:
        func_0x0001000b44c0(unaff_x22,unaff_x19);
        pcVar10 = param_1;
        goto LAB_104906c34;
      }
      param_1 = (code *)CONCAT71(uStack_a7,uStack_a8);
      if (*(long *)(param_1 + 0x10) != 0) {
        _swift_bridgeObjectRetain(param_1);
        uVar9 = 0;
        lVar1 = -0x2fffffffffffffe3;
        func_0x000100029284(0xd00000000000001d);
        if ((uVar9 & 1) == 0) {
          _swift_bridgeObjectRelease(param_1);
        }
        else {
          func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,&pcStack_90);
          _swift_bridgeObjectRelease(param_1);
          puVar3 = &uStack_a8;
          _swift_dynamicCast(puVar3,&pcStack_90,unaff_x27 + 8,PTR___sSbN_11034dd40,6);
          if ((((ulong)puVar3 & 1) != 0) && (((byte)uStack_a8 & 1) != 0)) {
            _swift_allocObject();
            lVar14 = 0;
            pcVar10 = (code *)0x0;
            FUN_10490700c(0,0,param_2);
            lVar1 = lRam000000011309c210;
            if (lVar14 != 0) {
              _swift_retain();
              if (lVar1 != -1) goto LAB_104906f74;
              goto LAB_104906bd4;
            }
            _swift_bridgeObjectRelease(param_1);
            goto LAB_104906cd4;
          }
        }
      }
      func_0x0001000b44c0(unaff_x22,unaff_x19);
      pcVar10 = param_1;
    }
  }
  _swift_bridgeObjectRelease(param_1);
LAB_104906c34:
  param_1 = pcVar10;
  lVar14 = 0;
  do {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail(lVar14);
    lVar14 = unaff_x20;
LAB_104906f74:
    pcVar10 = FUN_104906778;
    _swift_once(0x11309c210);
LAB_104906bd4:
    lVar1 = lRam000000011309cbb8;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
              (lRam000000011309cbb8);
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_104906cec:
      uStack_88 = 0;
      pcStack_90 = (code *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      _swift_bridgeObjectRetain(param_1);
      pcVar5 = pcVar10;
      func_0x000100029284(lVar1);
      if (((ulong)pcVar5 & 1) == 0) {
        _swift_bridgeObjectRelease(param_1);
        goto LAB_104906cec;
      }
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,&pcStack_90);
      _swift_bridgeObjectRelease(pcVar10);
      pcVar10 = param_1;
    }
    _swift_bridgeObjectRelease(pcVar10);
    if (lStack_78 == 0) {
      func_0x000104909c40(&pcStack_90,0x11309c428);
      uVar12 = 0;
      uVar13 = 0;
    }
    else {
      puVar3 = &uStack_a8;
      _swift_dynamicCast(puVar3,&pcStack_90,unaff_x27 + 8,PTR___sSSN_11034da80,6);
      uVar12 = CONCAT71(uStack_a7,uStack_a8);
      uVar13 = uStack_a0;
      if ((int)puVar3 == 0) {
        uVar12 = 0;
        uVar13 = 0;
      }
    }
    pcVar10 = (code *)&uStack_a8;
    _swift_beginAccess(lVar14 + 0x10,pcVar10,1,0);
    uVar6 = *(undefined8 *)(lVar14 + 0x18);
    *(undefined8 *)(lVar14 + 0x10) = uVar12;
    *(undefined8 *)(lVar14 + 0x18) = uVar13;
    _swift_bridgeObjectRelease(uVar6);
    if (lRam000000011309c228 != -1) {
      pcVar10 = (code *)0x104906818;
      _swift_once(0x11309c228);
    }
    lVar1 = lRam000000011309cbd0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
              (lRam000000011309cbd0);
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_104906ddc:
      uStack_88 = 0;
      pcStack_90 = (code *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      _swift_bridgeObjectRetain(param_1);
      pcVar5 = pcVar10;
      func_0x000100029284(lVar1);
      if (((ulong)pcVar5 & 1) == 0) {
        _swift_bridgeObjectRelease(param_1);
        goto LAB_104906ddc;
      }
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,&pcStack_90);
      _swift_bridgeObjectRelease(pcVar10);
      pcVar10 = param_1;
    }
    _swift_bridgeObjectRelease(pcVar10);
    if (lStack_78 == 0) {
      func_0x000104909c40(&pcStack_90,0x11309c428);
      uVar12 = 0;
      uVar13 = 0;
    }
    else {
      puVar7 = &uStack_c0;
      _swift_dynamicCast(puVar7,&pcStack_90,unaff_x27 + 8,PTR___sSSN_11034da80,6);
      uVar12 = uStack_c0;
      uVar13 = uStack_b8;
      if ((int)puVar7 == 0) {
        uVar12 = 0;
        uVar13 = 0;
      }
    }
    puVar7 = &uStack_c0;
    _swift_beginAccess(lVar14 + 0x40,puVar7,1,0);
    uVar6 = *(undefined8 *)(lVar14 + 0x48);
    *(undefined8 *)(lVar14 + 0x40) = uVar12;
    *(undefined8 *)(lVar14 + 0x48) = uVar13;
    _swift_bridgeObjectRelease(uVar6);
    if (lRam000000011309c248 != -1) {
      puVar7 = (undefined8 *)0x1049068ec;
      _swift_once(0x11309c248);
    }
    lVar1 = lRam000000011309cbf0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
              (lRam000000011309cbf0);
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_104906ec8:
      uStack_88 = 0;
      pcStack_90 = (code *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      _swift_bridgeObjectRetain(param_1);
      puVar11 = puVar7;
      func_0x000100029284(lVar1);
      if (((ulong)puVar11 & 1) == 0) {
        _swift_bridgeObjectRelease(param_1);
        goto LAB_104906ec8;
      }
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,&pcStack_90);
      _swift_bridgeObjectRelease(param_1);
    }
    func_0x0001000b44c0(unaff_x22,unaff_x19);
    _swift_bridgeObjectRelease(puVar7);
    _swift_bridgeObjectRelease(param_1);
    if (lStack_78 == 0) {
      func_0x000104909c40(&pcStack_90,0x11309c428);
      param_1 = (code *)0x0;
      unaff_x22 = (code *)0x0;
    }
    else {
      ppcVar8 = &pcStack_d8;
      _swift_dynamicCast(ppcVar8,&pcStack_90,unaff_x27 + 8,PTR___sSSN_11034da80,6);
      param_1 = pcStack_d8;
      unaff_x22 = pcStack_d0;
      if ((int)ppcVar8 == 0) {
        param_1 = (code *)0x0;
        unaff_x22 = (code *)0x0;
      }
    }
    _swift_beginAccess(lVar14 + 0x50,&pcStack_90,1,0);
    uVar12 = *(undefined8 *)(lVar14 + 0x58);
    *(code **)(lVar14 + 0x50) = param_1;
    *(code **)(lVar14 + 0x58) = unaff_x22;
    _swift_release(lVar14);
    _swift_bridgeObjectRelease(uVar12);
    unaff_x20 = lVar14;
  } while( true );
}



/* Entry: 104906fbc; end: 10490700b;  */

void FUN_104906fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_10490700c(param_1,param_2,param_3);
  return;
}



/* Entry: 10490700c; end: 104907183;  */

long FUN_10490700c(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_90 [24];
  long alStack_78 [3];
  
  lVar2 = 0;
  uVar5 = param_2;
  __s10Foundation4UUIDVMa();
  lVar7 = *(long *)(lVar2 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  if (param_3 == 1) {
    _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
    _swift_release();
    _swift_bridgeObjectRelease(param_2);
    unaff_x20 = 0;
  }
  else {
    if (param_3 != 0) {
      alStack_78[0] = param_3;
      _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&UNK_1107b7938,alStack_78,&UNK_1107b7938,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104907184);
      (*pcVar1)();
    }
    puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    _swift_retain();
    __s10Foundation4UUIDVACycfC(auStack_90 + -(lVar6 + 0xfU & 0xfffffffffffffff0));
    __s10Foundation4UUIDV10uuidStringSSvg();
    (**(code **)(lVar7 + 8))(auStack_90 + -(lVar6 + 0xfU & 0xfffffffffffffff0),lVar2);
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x10),alStack_78,1,0);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined **)(unaff_x20 + 0x10) = puVar3;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
    _swift_bridgeObjectRelease(uVar4);
    _swift_beginAccess(unaff_x20 + 0x50,auStack_90,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
    *(undefined8 *)(unaff_x20 + 0x50) = param_1;
    *(undefined8 *)(unaff_x20 + 0x58) = param_2;
    _swift_bridgeObjectRelease(uVar5);
  }
  return unaff_x20;
}



/* Entry: 104907184; end: 104907417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104907184(ulong param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  ulong uStack_58;
  
  if ((param_3 & 0xc000000000000001) == 0) {
    uVar6 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
    puVar8 = (ulong *)(param_3 + 0x38);
    uVar9 = ~uVar6;
    uVar6 = -uVar6;
    uVar7 = 0xffffffffffffffff;
    if ((long)uVar6 < 0x40) {
      uVar7 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar7 = uVar7 & *puVar8;
    _swift_bridgeObjectRetain(param_2);
    uVar6 = param_3;
    _swift_bridgeObjectRetain();
    lVar10 = 0;
  }
  else {
    uVar6 = param_3 & 0xffffffffffffff8;
    if ((long)param_3 < 0) {
      uVar6 = param_3;
    }
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    __ss10__CocoaSetV12makeIteratorAB0D0CyF();
    uVar3 = 0;
    FUN_1048f07b4(0);
    uVar5 = uVar3;
    FUN_1048f07e8();
    __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&uStack_88,uVar6,uVar3,uVar5);
    param_3 = uStack_88;
    puVar8 = puStack_80;
    uVar9 = uStack_78;
    lVar10 = lStack_70;
    uVar7 = uStack_68;
  }
  uVar12 = uVar7;
  lVar11 = lVar10;
  if ((long)param_3 < 0) goto LAB_1049072c8;
  while( true ) {
    while (uVar7 != 0) {
      uVar6 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar4 = *(ulong *)(*(long *)(param_3 + 0x30) +
                        (lVar10 << 9 | LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) << 3));
      _objc_retain();
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        if (uVar4 == 0) goto LAB_1049073d4;
        uVar6 = param_1 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar6 = param_2 >> 0x38 & 0xf;
        }
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = 0x2c;
        }
        uVar3 = 0xe000000000000000;
        if (uVar6 != 0) {
          uVar3 = 0xe100000000000000;
        }
        uStack_98 = param_1;
        uStack_90 = param_2;
        _swift_bridgeObjectRetain(param_2);
        __sSS6appendyySSF(uVar5,uVar3);
        _swift_bridgeObjectRelease(uVar3);
        uVar12 = uStack_90;
        uVar5 = *(undefined8 *)(uVar4 + _DAT_11309c830);
        uVar6 = ((undefined8 *)(uVar4 + _DAT_11309c830))[1];
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar12);
        __sSS6appendyySSF(uVar5,uVar6);
        _swift_bridgeObjectRelease(param_2);
        _objc_release(uVar4);
        _swift_bridgeObjectRelease(uVar12);
        _swift_bridgeObjectRelease();
        param_2 = uStack_90;
        param_1 = uStack_98;
        uVar12 = uVar7;
        lVar11 = lVar10;
        if (-1 < (long)param_3) break;
LAB_1049072c8:
        __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
        lVar11 = lVar10;
        if (uVar6 == 0) goto LAB_1049073d4;
        uVar5 = 0;
        uStack_58 = uVar6;
        FUN_1048f07b4(0);
        _swift_dynamicCast(&uStack_98,&uStack_58,PTR___syXlN_11034f1a0 + 8,uVar5,7);
        uVar7 = uVar12;
        uVar4 = uStack_98;
      }
    }
    bVar2 = SCARRY8(lVar10,1);
    lVar10 = lVar10 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104907418);
      (*pcVar1)();
    }
    if ((long)(uVar9 + 0x40 >> 6) <= lVar10) break;
    uVar7 = puVar8[lVar10];
  }
  uVar12 = 0;
LAB_1049073d4:
  func_0x000100dc1a24(param_3,puVar8,uVar9,lVar11,uVar12);
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
  return auVar13;
}



/* Entry: 104907418; end: 10490790b;  */

undefined * FUN_104907418(double param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined *apuStack_100 [3];
  undefined *apuStack_e8 [3];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [24];
  long lStack_98;
  long lStack_90;
  undefined *puStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar7 = lRam000000011309c210;
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar8 = *(long *)(lVar2 + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  if (lVar7 != -1) {
    _swift_once(0x11309c210,FUN_104906778);
  }
  uVar4 = uRam000000011309cbb8;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_b0,0,0);
  puVar5 = PTR___sSSN_11034da80;
  lVar7 = *(long *)(unaff_x20 + 0x18);
  puStack_80 = PTR___sSSN_11034da80;
  lStack_98 = 0;
  if (lVar7 != 0) {
    lStack_98 = *(long *)(unaff_x20 + 0x10);
  }
  lStack_90 = -0x2000000000000000;
  if (lVar7 != 0) {
    lStack_90 = lVar7;
  }
  func_0x000100102924(&lStack_98,auStack_d0);
  _swift_bridgeObjectRetain(lVar7);
  puVar3 = puVar1;
  _swift_isUniquelyReferenced_nonNull_native(puVar1);
  apuStack_e8[0] = puVar1;
  FUN_104902c18(auStack_d0,uVar4,puVar3);
  puStack_78 = apuStack_e8[0];
  if (lRam000000011309c218 != -1) {
    _swift_once(0x11309c218,0x1049067ac);
  }
  uVar4 = uRam000000011309cbc0;
  __s10Foundation4DateVACycfC(auStack_110 + -(lVar6 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar8 + 8))(auStack_110 + -(lVar6 + 0xfU & 0xfffffffffffffff0),lVar2);
  lStack_98 = (long)(param_1 * 1000.0);
  puStack_80 = PTR___sSdN_11034dd90;
  func_0x000100102924(&lStack_98,auStack_d0);
  puVar1 = puStack_78;
  puVar3 = puStack_78;
  _swift_isUniquelyReferenced_nonNull_native(puStack_78);
  apuStack_e8[0] = puVar1;
  FUN_104902c18(auStack_d0,uVar4,puVar3);
  puVar1 = apuStack_e8[0];
  if (lRam000000011309c220 != -1) {
    _swift_once(0x11309c220,0x1049067e8);
  }
  uVar4 = uRam000000011309cbc8;
  puStack_80 = puVar5;
  lStack_98 = 0;
  lStack_90 = -0x2000000000000000;
  func_0x000100102924(&lStack_98,auStack_d0);
  puVar3 = puVar1;
  _swift_isUniquelyReferenced_nonNull_native(puVar1);
  apuStack_e8[0] = puVar1;
  FUN_104902c18(auStack_d0,uVar4,puVar3);
  puVar1 = apuStack_e8[0];
  puStack_78 = apuStack_e8[0];
  if (lRam000000011309c228 != -1) {
    _swift_once(0x11309c228,0x104906818);
  }
  uVar4 = uRam000000011309cbd0;
  _swift_beginAccess(unaff_x20 + 0x40,apuStack_e8,0,0);
  lVar7 = *(long *)(unaff_x20 + 0x48);
  if (lVar7 == 0) {
    _objc_retain(uVar4);
    FUN_104908fd8(&lStack_98);
    _objc_release(uVar4);
    func_0x000104909c40(&lStack_98,0x11309c428);
  }
  else {
    lStack_98 = *(long *)(unaff_x20 + 0x40);
    puStack_80 = puVar5;
    lStack_90 = lVar7;
    func_0x000100102924(&lStack_98,auStack_d0);
    _objc_retain(uVar4);
    _swift_bridgeObjectRetain(lVar7);
    puVar3 = puVar1;
    _swift_isUniquelyReferenced_nonNull_native(puVar1);
    apuStack_100[0] = puVar1;
    FUN_104902c18(auStack_d0,uVar4,puVar3);
    _objc_release(uVar4);
    puStack_78 = apuStack_100[0];
  }
  if (lRam000000011309c230 != -1) {
    _swift_once(0x11309c230,0x104906848);
  }
  uVar4 = uRam000000011309cbd8;
  puStack_80 = puVar5;
  lStack_98 = 0;
  lStack_90 = 0xe000000000000000;
  func_0x000100102924(&lStack_98,auStack_d0);
  puVar1 = puStack_78;
  puVar3 = puStack_78;
  _swift_isUniquelyReferenced_nonNull_native(puStack_78);
  apuStack_100[0] = puVar1;
  FUN_104902c18(auStack_d0,uVar4,puVar3);
  puVar1 = apuStack_100[0];
  if (lRam000000011309c238 != -1) {
    _swift_once(0x11309c238,0x104906880);
  }
  uVar4 = uRam000000011309cbe0;
  puStack_80 = puVar5;
  lStack_98 = 0;
  lStack_90 = 0xe000000000000000;
  func_0x000100102924(&lStack_98,auStack_d0);
  puVar3 = puVar1;
  _swift_isUniquelyReferenced_nonNull_native(puVar1);
  apuStack_100[0] = puVar1;
  FUN_104902c18(auStack_d0,uVar4,puVar3);
  puVar1 = apuStack_100[0];
  if (lRam000000011309c240 != -1) {
    _swift_once(0x11309c240,0x1049068bc);
  }
  uVar4 = uRam000000011309cbe8;
  puStack_80 = puVar5;
  lStack_98 = 0;
  lStack_90 = 0xe000000000000000;
  func_0x000100102924(&lStack_98,auStack_d0);
  puVar3 = puVar1;
  _swift_isUniquelyReferenced_nonNull_native(puVar1);
  apuStack_100[0] = puVar1;
  FUN_104902c18(auStack_d0,uVar4,puVar3);
  puVar1 = apuStack_100[0];
  if (lRam000000011309c248 != -1) {
    _swift_once(0x11309c248,0x1049068ec);
  }
  uVar4 = uRam000000011309cbf0;
  _swift_beginAccess(unaff_x20 + 0x50,apuStack_100,0,0);
  lVar7 = *(long *)(unaff_x20 + 0x58);
  puStack_80 = puVar5;
  lStack_98 = 0;
  if (lVar7 != 0) {
    lStack_98 = *(long *)(unaff_x20 + 0x50);
  }
  lStack_90 = -0x2000000000000000;
  if (lVar7 != 0) {
    lStack_90 = lVar7;
  }
  func_0x000100102924(&lStack_98,auStack_d0);
  _swift_bridgeObjectRetain(lVar7);
  puVar5 = puVar1;
  _swift_isUniquelyReferenced_nonNull_native(puVar1);
  puStack_108 = puVar1;
  FUN_104902c18(auStack_d0,uVar4,puVar5);
  return puStack_108;
}



/* Entry: 10490790c; end: 10490887f;  */

void FUN_10490790c(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **unaff_x20;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined **ppuVar15;
  undefined8 uVar16;
  long alStack_1e0 [2];
  long alStack_1d0 [4];
  long alStack_1b0 [4];
  long alStack_190 [18];
  undefined1 auStack_e8 [32];
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = (undefined **)*unaff_x20;
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar1 = -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_e8 + lVar1 + -0x18;
  ppuVar15 = unaff_x20 + 2;
  puVar2 = auStack_88;
  ppuVar9 = (undefined **)0x0;
  puVar10 = (undefined *)0x0;
  _swift_beginAccess();
  if (unaff_x20[3] != (undefined *)0x0) {
    unaff_x25 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    _swift_getInitializedObjCClass();
    _swift_beginAccess(unaff_x20 + 4,auStack_a0,1,0);
    unaff_x26 = unaff_x20[4];
    unaff_x28 = unaff_x26;
    _swift_bridgeObjectRetain();
    puVar4 = PTR___sSSN_11034da80;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(unaff_x26);
    puStack_c8 = (undefined *)0x0;
    puVar10 = (undefined *)0x0;
    unaff_x27 = unaff_x25;
    puVar6 = PTR_s_dataWithJSONObject_options_error_1125b6c80;
    _objc_msgSend(unaff_x25,PTR_s_dataWithJSONObject_options_error_1125b6c80,unaff_x28,0,&puStack_c8
                 );
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x28);
    puVar14 = puStack_c8;
    _objc_retain(puStack_c8);
    if (unaff_x27 == (undefined *)0x0) {
      puVar3 = puVar14;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(puVar14);
      _swift_willThrow();
      _swift_errorRelease(puVar3);
LAB_104907b08:
      _swift_bridgeObjectRetain(param_2);
    }
    else {
      unaff_x26 = unaff_x27;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(unaff_x27);
      __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar3);
      puVar14 = unaff_x26;
      puVar7 = puVar6;
      __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(unaff_x26,puVar6,puVar3);
      lVar5 = lRam000000011309c240;
      unaff_x25 = puVar6;
      if (puVar7 == (undefined *)0x0) {
        func_0x00010006c090(unaff_x26,puVar6);
        goto LAB_104907b08;
      }
      if (param_2 == (undefined1 *)0x0) {
        _swift_bridgeObjectRelease(puVar7);
        func_0x00010006c090(unaff_x26,puVar6);
      }
      else {
        _swift_bridgeObjectRetain(param_2);
        if (lVar5 != -1) {
          _swift_once(0x11309c240,0x1049068bc);
        }
        unaff_x28 = puRam000000011309cbe8;
        puStack_b0 = puVar4;
        puStack_c8 = puVar14;
        puStack_c0 = puVar7;
        func_0x000100102924(&puStack_c8,auStack_e8);
        puVar2 = param_2;
        _swift_isUniquelyReferenced_nonNull_native(param_2);
        FUN_104902c18(auStack_e8,unaff_x28,puVar2);
        func_0x00010006c090(unaff_x26,puVar6);
        unaff_x27 = puVar14;
      }
    }
    puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar4 = unaff_x20[4];
    unaff_x20[4] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    _swift_bridgeObjectRelease(puVar4);
    unaff_x24 = &UNK_10dd47d40;
    _swift_getKeyPath();
    _swift_retain(puVar3);
    ppuVar9 = &PTR_DAT_11309cc18;
    FUN_1048df838(&puStack_c8,unaff_x24,ppuVar12);
    _swift_release(unaff_x24);
    puVar3 = puStack_b0;
    if (puStack_b0 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(param_2);
      puVar2 = (undefined1 *)0x11309cc00;
      ppuVar15 = &puStack_c8;
      func_0x000104909c40();
      unaff_x20 = ppuVar12;
    }
    else {
      unaff_x20 = &puStack_c8;
      func_0x0001000a8868(unaff_x20,puStack_b0);
      ppuVar9 = (undefined **)0x1;
      puVar2 = param_2;
      puVar10 = puVar3;
      (*(code *)ppuStack_a8[2])(param_1);
      _swift_bridgeObjectRelease(param_2);
      ppuVar15 = &puStack_c8;
      func_0x000104909bdc();
      ppuVar12 = ppuStack_a8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  *(undefined **)((long)alStack_190 + lVar1 + 0x30) = unaff_x28;
  *(undefined **)((long)alStack_190 + lVar1 + 0x38) = unaff_x27;
  *(undefined **)((long)alStack_190 + lVar1 + 0x40) = unaff_x26;
  *(undefined **)((long)alStack_190 + lVar1 + 0x48) = unaff_x25;
  *(undefined **)((long)alStack_190 + lVar1 + 0x50) = unaff_x24;
  *(undefined ***)((long)alStack_190 + lVar1 + 0x58) = ppuVar12;
  *(undefined1 **)((long)alStack_190 + lVar1 + 0x60) = param_2;
  *(undefined **)((long)alStack_190 + lVar1 + 0x68) = puVar3;
  *(undefined ***)((long)alStack_190 + lVar1 + 0x70) = unaff_x20;
  *(undefined8 *)((long)alStack_190 + lVar1 + 0x78) = param_1;
  *(undefined1 **)((long)alStack_190 + lVar1 + 0x80) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)alStack_190 + lVar1 + 0x88) = 0x104907c30;
  ppuVar12 = ppuVar15;
  FUN_104907418();
  if (lRam000000011309c220 != -1) {
    _swift_once(0x11309c220,0x1049067e8);
  }
  uVar13 = uRam000000011309cbc8;
  puVar3 = PTR___sSSN_11034da80;
  *(undefined **)((long)alStack_190 + lVar1 + 0x18) = PTR___sSSN_11034da80;
  *(undefined1 **)((long)alStack_190 + lVar1) = puVar2;
  *(undefined ***)((long)alStack_190 + lVar1 + 8) = ppuVar9;
  func_0x000100102924((long)alStack_190 + lVar1,(long)alStack_1b0 + lVar1);
  _swift_bridgeObjectRetain(ppuVar9);
  ppuVar9 = ppuVar12;
  _swift_isUniquelyReferenced_nonNull_native(ppuVar12);
  *(undefined ***)((long)alStack_1d0 + lVar1) = ppuVar12;
  FUN_104902c18((long)alStack_1b0 + lVar1,uVar13,ppuVar9);
  uVar13 = *(undefined8 *)((long)alStack_1d0 + lVar1);
  *(undefined8 *)((long)alStack_190 + lVar1 + 0x28) = uVar13;
  if (puVar10 == (undefined *)0x0) goto LAB_1049087d0;
  _objc_retain();
  puVar4 = puVar10;
  puVar6 = PTR_s_domain_1125bf918;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(puVar4);
  if ((puVar14 == (undefined *)0xd000000000000015) && (puVar6 == (undefined *)0x800000010f21bb90)) {
LAB_104907d40:
    _swift_bridgeObjectRelease(puVar6);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (puVar14,puVar6,0xd000000000000015,0x800000010f21bb90,0);
    _swift_bridgeObjectRelease(puVar6);
    if (((ulong)puVar14 & 1) == 0) {
      puVar4 = puVar10;
      puVar6 = PTR_s_domain_1125bf918;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar4;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(puVar4);
      if ((puVar14 == (undefined *)0xd000000000000016) &&
         (puVar6 == (undefined *)0x800000010f21bbb0)) goto LAB_104907d40;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (puVar14,puVar6,0xd000000000000016,0x800000010f21bbb0,0);
      _swift_bridgeObjectRelease(puVar6);
      if (((ulong)puVar14 & 1) == 0) {
        _objc_release(puVar10);
        lVar5 = lRam000000011309c230;
        _objc_retain();
        if (lVar5 != -1) {
          _swift_once(0x11309c230,0x104906848);
        }
        uVar13 = uRam000000011309cbd8;
        puVar4 = puVar10;
        _objc_msgSend(puVar10,PTR_s_code_1125ad4b8);
        *(undefined **)((long)alStack_190 + lVar1 + 0x18) = PTR___sSiN_11034deb0;
        *(undefined **)((long)alStack_190 + lVar1) = puVar4;
        func_0x000100102924((long)alStack_190 + lVar1,(long)alStack_1b0 + lVar1);
        uVar11 = *(undefined8 *)((long)alStack_190 + lVar1 + 0x28);
        uVar16 = uVar11;
        _swift_isUniquelyReferenced_nonNull_native(uVar11);
        *(undefined8 *)((long)alStack_1d0 + lVar1) = uVar11;
        FUN_104902c18((long)alStack_1b0 + lVar1,uVar13,uVar16);
        uVar13 = *(undefined8 *)((long)alStack_1d0 + lVar1);
        if (lRam000000011309c238 != -1) {
          _swift_once(0x11309c238,0x104906880);
        }
        uVar16 = uRam000000011309cbe0;
        puVar4 = puVar10;
        puVar6 = PTR_s_localizedDescription_112605348;
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar4;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(puVar4);
        *(undefined **)((long)alStack_190 + lVar1 + 0x18) = puVar3;
        *(undefined **)((long)alStack_190 + lVar1) = puVar14;
        *(undefined **)((long)alStack_190 + lVar1 + 8) = puVar6;
        func_0x000100102924((long)alStack_190 + lVar1,(long)alStack_1b0 + lVar1);
        uVar11 = uVar13;
        _swift_isUniquelyReferenced_nonNull_native(uVar13);
        *(undefined8 *)((long)alStack_1d0 + lVar1) = uVar13;
        FUN_104902c18((long)alStack_1b0 + lVar1,uVar16,uVar11);
        _objc_release(puVar10);
        uVar13 = *(undefined8 *)((long)alStack_1d0 + lVar1);
        goto LAB_1049087d0;
      }
    }
  }
  *(undefined ***)((long)alStack_1e0 + lVar1) = ppuVar15;
  puVar4 = puVar10;
  _objc_msgSend(puVar10,PTR_s_userInfo_112682430);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___sypN_11034f1a8;
  puVar14 = puVar4;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
  _objc_release(puVar4);
  if (*(long *)(puVar14 + 0x10) == 0) {
LAB_104907e14:
    *(undefined8 *)((long)alStack_1b0 + lVar1 + 8) = 0;
    *(undefined8 *)((long)alStack_1b0 + lVar1) = 0;
    *(undefined8 *)((long)alStack_1b0 + lVar1 + 0x18) = 0;
    *(undefined8 *)((long)alStack_1b0 + lVar1 + 0x10) = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar14);
    lVar5 = 0x656d5f726f727265;
    uVar8 = 0xed00006567617373;
    func_0x000100029284(0x656d5f726f727265);
    if ((uVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar14);
      goto LAB_104907e14;
    }
    func_0x0001000bb420(*(long *)(puVar14 + 0x38) + lVar5 * 0x20,(long)alStack_1b0 + lVar1);
    _swift_bridgeObjectRelease(puVar14);
  }
  _swift_bridgeObjectRelease(puVar14);
  if (*(long *)((long)alStack_1b0 + lVar1 + 0x18) == 0) {
    puVar4 = puVar10;
    _objc_msgSend(puVar10,PTR_s_userInfo_112682430);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
    _objc_release(puVar4);
    if (*(long *)(puVar14 + 0x10) == 0) {
LAB_10490804c:
      *(undefined8 *)((long)alStack_190 + lVar1 + 8) = 0;
      *(undefined8 *)((long)alStack_190 + lVar1) = 0;
      *(undefined8 *)((long)alStack_190 + lVar1 + 0x18) = 0;
      *(undefined8 *)((long)alStack_190 + lVar1 + 0x10) = 0;
    }
    else {
      _swift_bridgeObjectRetain(puVar14);
      lVar5 = -0x2fffffffffffffce;
      uVar8 = 0;
      func_0x000100029284(0xd000000000000032);
      if ((uVar8 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar14);
        goto LAB_10490804c;
      }
      func_0x0001000bb420(*(long *)(puVar14 + 0x38) + lVar5 * 0x20,(long)alStack_190 + lVar1);
      _swift_bridgeObjectRelease(puVar14);
    }
    _swift_bridgeObjectRelease(puVar14);
    if (*(long *)((long)alStack_1b0 + lVar1 + 0x18) != 0) {
      func_0x000104909c40((long)alStack_1b0 + lVar1,0x11309c428);
    }
  }
  else {
    func_0x000100102924((long)alStack_1b0 + lVar1,(long)alStack_190 + lVar1);
  }
  if (lRam000000011309c238 != -1) {
    _swift_once(0x11309c238,0x104906880);
  }
  uVar13 = uRam000000011309cbe0;
  func_0x000104909bfc((long)alStack_190 + lVar1,(long)alStack_1b0 + lVar1,0x11309c428);
  if (*(long *)((long)alStack_1b0 + lVar1 + 0x18) == 0) {
    func_0x000104909c40((long)alStack_1b0 + lVar1,0x11309c428);
    FUN_104908fd8((long)alStack_1d0 + lVar1,uVar13);
    func_0x000104909c40((long)alStack_1d0 + lVar1,0x11309c428);
  }
  else {
    func_0x000100102924((long)alStack_1b0 + lVar1,(long)alStack_1d0 + lVar1);
    uVar11 = *(undefined8 *)((long)alStack_190 + lVar1 + 0x28);
    uVar16 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native(uVar11);
    *(undefined8 *)((long)alStack_1e0 + lVar1 + 8) = uVar11;
    FUN_104902c18((long)alStack_1d0 + lVar1,uVar13,uVar16);
    *(undefined8 *)((long)alStack_190 + lVar1 + 0x28) =
         *(undefined8 *)((long)alStack_1e0 + lVar1 + 8);
  }
  puVar14 = puVar10;
  _objc_msgSend(puVar10,PTR_s_userInfo_112682430);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___sSSN_11034da80;
  puVar6 = puVar14;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
  _objc_release(puVar14);
  if (*(long *)(puVar6 + 0x10) == 0) {
LAB_1049081a4:
    *(undefined8 *)((long)alStack_1d0 + lVar1 + 8) = 0;
    *(undefined8 *)((long)alStack_1d0 + lVar1) = 0;
    *(undefined8 *)((long)alStack_1d0 + lVar1 + 0x18) = 0;
    *(undefined8 *)((long)alStack_1d0 + lVar1 + 0x10) = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar6);
    lVar5 = -0x2fffffffffffffc8;
    uVar8 = 0;
    func_0x000100029284(0xd000000000000038);
    if ((uVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar6);
      goto LAB_1049081a4;
    }
    func_0x0001000bb420(*(long *)(puVar6 + 0x38) + lVar5 * 0x20,(long)alStack_1d0 + lVar1);
    _swift_bridgeObjectRelease(puVar6);
  }
  _swift_bridgeObjectRelease(puVar6);
  if (*(long *)((long)alStack_1d0 + lVar1 + 0x18) == 0) {
    puVar14 = puVar10;
    _objc_msgSend(puVar10,PTR_s_code_1125ad4b8);
    *(undefined **)((long)alStack_1b0 + lVar1) = puVar14;
    puVar14 = PTR___sSiN_11034deb0;
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
    *(undefined **)((long)alStack_1b0 + lVar1 + 0x18) = puVar4;
    *(undefined **)((long)alStack_1b0 + lVar1) = puVar14;
    *(undefined **)((long)alStack_1b0 + lVar1 + 8) = puVar6;
    func_0x000104909c40((long)alStack_190 + lVar1,0x11309c428);
    if (*(long *)((long)alStack_1d0 + lVar1 + 0x18) != 0) {
      func_0x000104909c40((long)alStack_1d0 + lVar1,0x11309c428);
    }
  }
  else {
    func_0x000104909c40((long)alStack_190 + lVar1,0x11309c428);
    func_0x000100102924((long)alStack_1d0 + lVar1,(long)alStack_1b0 + lVar1);
  }
  uVar13 = *(undefined8 *)((long)alStack_1b0 + lVar1);
  uVar11 = *(undefined8 *)((long)alStack_1b0 + lVar1 + 0x18);
  uVar16 = *(undefined8 *)((long)alStack_1b0 + lVar1 + 0x10);
  *(undefined8 *)((long)alStack_190 + lVar1 + 8) = *(undefined8 *)((long)alStack_1b0 + lVar1 + 8);
  *(undefined8 *)((long)alStack_190 + lVar1) = uVar13;
  *(undefined8 *)((long)alStack_190 + lVar1 + 0x18) = uVar11;
  *(undefined8 *)((long)alStack_190 + lVar1 + 0x10) = uVar16;
  if (lRam000000011309c230 != -1) {
    _swift_once(0x11309c230,0x104906848);
  }
  uVar13 = uRam000000011309cbd8;
  func_0x000104909bfc((long)alStack_190 + lVar1,(long)alStack_1b0 + lVar1,0x11309c428);
  if (*(long *)((long)alStack_1b0 + lVar1 + 0x18) == 0) {
    func_0x000104909c40((long)alStack_1b0 + lVar1,0x11309c428);
    FUN_104908fd8((long)alStack_1d0 + lVar1,uVar13);
    func_0x000104909c40((long)alStack_1d0 + lVar1,0x11309c428);
  }
  else {
    func_0x000100102924((long)alStack_1b0 + lVar1,(long)alStack_1d0 + lVar1);
    uVar11 = *(undefined8 *)((long)alStack_190 + lVar1 + 0x28);
    uVar16 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native(uVar11);
    *(undefined8 *)((long)alStack_1e0 + lVar1 + 8) = uVar11;
    FUN_104902c18((long)alStack_1d0 + lVar1,uVar13,uVar16);
    *(undefined8 *)((long)alStack_190 + lVar1 + 0x28) =
         *(undefined8 *)((long)alStack_1e0 + lVar1 + 8);
  }
  puVar4 = puVar10;
  _objc_msgSend(puVar10,PTR_s_userInfo_112682430);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  puVar6 = PTR___sSSN_11034da80;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
  _objc_release(puVar4);
  lVar5 = *(long *)PTR__NSUnderlyingErrorKey_110345660;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
  if (*(long *)(puVar14 + 0x10) == 0) {
LAB_10490837c:
    *(undefined8 *)((long)alStack_1b0 + lVar1 + 8) = 0;
    *(undefined8 *)((long)alStack_1b0 + lVar1) = 0;
    *(undefined8 *)((long)alStack_1b0 + lVar1 + 0x18) = 0;
    *(undefined8 *)((long)alStack_1b0 + lVar1 + 0x10) = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar14);
    puVar4 = puVar6;
    func_0x000100029284(lVar5);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar14);
      goto LAB_10490837c;
    }
    func_0x0001000bb420(*(long *)(puVar14 + 0x38) + lVar5 * 0x20,(long)alStack_1b0 + lVar1);
    _swift_bridgeObjectRelease(puVar6);
    puVar6 = puVar14;
  }
  _swift_bridgeObjectRelease(puVar6);
  _swift_bridgeObjectRelease(puVar14);
  if (*(long *)((long)alStack_1b0 + lVar1 + 0x18) == 0) {
    func_0x000104909c40((long)alStack_190 + lVar1,0x11309c428);
    _objc_release(puVar10);
    func_0x000104909c40((long)alStack_1b0 + lVar1,0x11309c428);
LAB_1049084a8:
    ppuVar15 = *(undefined ***)((long)alStack_1e0 + lVar1);
  }
  else {
    uVar13 = 0;
    func_0x000104909b9c(0,0x112d46e68,&PTR__OBJC_CLASS___NSError_1126ae858);
    uVar8 = (long)alStack_1d0 + lVar1;
    _swift_dynamicCast(uVar8,(long)alStack_1b0 + lVar1,puVar3 + 8,uVar13,6);
    if ((uVar8 & 1) == 0) {
      func_0x000104909c40((long)alStack_190 + lVar1,0x11309c428);
      _objc_release(puVar10);
      goto LAB_1049084a8;
    }
    puVar14 = *(undefined **)((long)alStack_1d0 + lVar1);
    puVar3 = puVar14;
    _objc_msgSend(puVar14,PTR_s_userInfo_112682430);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
    _objc_release(puVar3);
    if (*(long *)(puVar4 + 0x10) == 0) {
LAB_1049084b8:
      *(undefined8 *)((long)alStack_1d0 + lVar1 + 8) = 0;
      *(undefined8 *)((long)alStack_1d0 + lVar1) = 0;
      *(undefined8 *)((long)alStack_1d0 + lVar1 + 0x18) = 0;
      *(undefined8 *)((long)alStack_1d0 + lVar1 + 0x10) = 0;
    }
    else {
      _swift_bridgeObjectRetain(puVar4);
      lVar5 = 0x656d5f726f727265;
      uVar8 = 0xed00006567617373;
      func_0x000100029284(0x656d5f726f727265);
      if ((uVar8 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar4);
        goto LAB_1049084b8;
      }
      func_0x0001000bb420(*(long *)(puVar4 + 0x38) + lVar5 * 0x20,(long)alStack_1d0 + lVar1);
      _swift_bridgeObjectRelease(puVar4);
    }
    _swift_bridgeObjectRelease(puVar4);
    if (*(long *)((long)alStack_1d0 + lVar1 + 0x18) == 0) {
      puVar3 = puVar14;
      _objc_msgSend(puVar14,PTR_s_userInfo_112682430);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      puVar6 = PTR___sSSN_11034da80;
      __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
      _objc_release(puVar3);
      lVar5 = *(long *)PTR__NSLocalizedDescriptionKey_110345568;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar5);
      if (*(long *)(puVar4 + 0x10) == 0) {
LAB_10490858c:
        *(undefined8 *)((long)alStack_1b0 + lVar1 + 8) = 0;
        *(undefined8 *)((long)alStack_1b0 + lVar1) = 0;
        *(undefined8 *)((long)alStack_1b0 + lVar1 + 0x18) = 0;
        *(undefined8 *)((long)alStack_1b0 + lVar1 + 0x10) = 0;
      }
      else {
        _swift_bridgeObjectRetain(puVar4);
        puVar3 = puVar6;
        func_0x000100029284(lVar5);
        if (((ulong)puVar3 & 1) == 0) {
          _swift_bridgeObjectRelease(puVar4);
          goto LAB_10490858c;
        }
        func_0x0001000bb420(*(long *)(puVar4 + 0x38) + lVar5 * 0x20,(long)alStack_1b0 + lVar1);
        _swift_bridgeObjectRelease(puVar6);
        puVar6 = puVar4;
      }
      _swift_bridgeObjectRelease(puVar6);
      _swift_bridgeObjectRelease(puVar4);
      func_0x000104909c40((long)alStack_190 + lVar1,0x11309c428);
      if (*(long *)((long)alStack_1d0 + lVar1 + 0x18) != 0) {
        func_0x000104909c40((long)alStack_1d0 + lVar1,0x11309c428);
      }
    }
    else {
      func_0x000104909c40((long)alStack_190 + lVar1,0x11309c428);
      func_0x000100102924((long)alStack_1d0 + lVar1,(long)alStack_1b0 + lVar1);
    }
    uVar13 = *(undefined8 *)((long)alStack_1b0 + lVar1);
    uVar11 = *(undefined8 *)((long)alStack_1b0 + lVar1 + 0x18);
    uVar16 = *(undefined8 *)((long)alStack_1b0 + lVar1 + 0x10);
    *(undefined8 *)((long)alStack_190 + lVar1 + 8) = *(undefined8 *)((long)alStack_1b0 + lVar1 + 8);
    *(undefined8 *)((long)alStack_190 + lVar1) = uVar13;
    *(undefined8 *)((long)alStack_190 + lVar1 + 0x18) = uVar11;
    *(undefined8 *)((long)alStack_190 + lVar1 + 0x10) = uVar16;
    func_0x000104909bfc((long)alStack_190 + lVar1,(long)alStack_1b0 + lVar1,0x11309c428);
    _swift_beginAccess(unaff_x20 + 4,(long)alStack_1d0 + lVar1,0x21,0);
    func_0x000100102934((long)alStack_1b0 + lVar1,0xd000000000000013,0x800000010f21bc50);
    _swift_endAccess((long)alStack_1d0 + lVar1);
    puVar4 = puVar14;
    _objc_msgSend(puVar14,PTR_s_userInfo_112682430);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___sSSN_11034da80;
    puVar6 = puVar4;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
    _objc_release(puVar4);
    if (*(long *)(puVar6 + 0x10) == 0) {
      *(undefined8 *)((long)alStack_1d0 + lVar1 + 8) = 0;
      *(undefined8 *)((long)alStack_1d0 + lVar1) = 0;
      *(undefined8 *)((long)alStack_1d0 + lVar1 + 0x18) = 0;
      *(undefined8 *)((long)alStack_1d0 + lVar1 + 0x10) = 0;
      ppuVar15 = *(undefined ***)((long)alStack_1e0 + lVar1);
    }
    else {
      _swift_bridgeObjectRetain(puVar6);
      lVar5 = -0x2fffffffffffffc8;
      uVar8 = 0;
      func_0x000100029284(0xd000000000000038);
      ppuVar15 = *(undefined ***)((long)alStack_1e0 + lVar1);
      if ((uVar8 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar6);
        *(undefined8 *)((long)alStack_1d0 + lVar1 + 8) = 0;
        *(undefined8 *)((long)alStack_1d0 + lVar1) = 0;
        *(undefined8 *)((long)alStack_1d0 + lVar1 + 0x18) = 0;
        *(undefined8 *)((long)alStack_1d0 + lVar1 + 0x10) = 0;
      }
      else {
        func_0x0001000bb420(*(long *)(puVar6 + 0x38) + lVar5 * 0x20,(long)alStack_1d0 + lVar1);
        _swift_bridgeObjectRelease(puVar6);
      }
    }
    _swift_bridgeObjectRelease(puVar6);
    if (*(long *)((long)alStack_1d0 + lVar1 + 0x18) == 0) {
      puVar4 = puVar14;
      _objc_msgSend(puVar14,PTR_s_code_1125ad4b8);
      *(undefined **)((long)alStack_1b0 + lVar1) = puVar4;
      puVar4 = PTR___sSiN_11034deb0;
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      __ss23CustomStringConvertibleP11descriptionSSvgTj();
      *(undefined **)((long)alStack_1b0 + lVar1 + 0x18) = puVar3;
      *(undefined **)((long)alStack_1b0 + lVar1) = puVar4;
      *(undefined **)((long)alStack_1b0 + lVar1 + 8) = puVar6;
      func_0x000104909c40((long)alStack_190 + lVar1,0x11309c428);
      if (*(long *)((long)alStack_1d0 + lVar1 + 0x18) != 0) {
        func_0x000104909c40((long)alStack_1d0 + lVar1,0x11309c428);
      }
    }
    else {
      func_0x000104909c40((long)alStack_190 + lVar1,0x11309c428);
      func_0x000100102924((long)alStack_1d0 + lVar1,(long)alStack_1b0 + lVar1);
    }
    uVar13 = *(undefined8 *)((long)alStack_1b0 + lVar1);
    uVar11 = *(undefined8 *)((long)alStack_1b0 + lVar1 + 0x18);
    uVar16 = *(undefined8 *)((long)alStack_1b0 + lVar1 + 0x10);
    *(undefined8 *)((long)alStack_190 + lVar1 + 8) = *(undefined8 *)((long)alStack_1b0 + lVar1 + 8);
    *(undefined8 *)((long)alStack_190 + lVar1) = uVar13;
    *(undefined8 *)((long)alStack_190 + lVar1 + 0x18) = uVar11;
    *(undefined8 *)((long)alStack_190 + lVar1 + 0x10) = uVar16;
    func_0x000104909bfc((long)alStack_190 + lVar1,(long)alStack_1b0 + lVar1,0x11309c428);
    _swift_beginAccess(unaff_x20 + 4,(long)alStack_1d0 + lVar1,0x21,0);
    func_0x000100102934((long)alStack_1b0 + lVar1,0xd000000000000013,0x800000010f21bc50);
    _swift_endAccess((long)alStack_1d0 + lVar1);
    _objc_release(puVar14);
    _objc_release(puVar10);
    func_0x000104909c40((long)alStack_190 + lVar1,0x11309c428);
  }
  uVar13 = *(undefined8 *)((long)alStack_190 + lVar1 + 0x28);
LAB_1049087d0:
  FUN_10490790c(ppuVar15,uVar13);
  _swift_bridgeObjectRelease(uVar13);
  return;
}



/* Entry: 104908880; end: 10490894b;  */

void FUN_104908880(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if (lRam000000011309c200 != -1) {
    _swift_once(0x11309c200,FUN_1048f5ca4);
  }
  uVar3 = uRam0000000113815580;
  _swift_beginAccess(unaff_x20 + 0x28,auStack_58,0,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_beginAccess(unaff_x20 + 0x38,auStack_70,0,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = uVar5;
  _objc_retain(uVar5);
  _swift_bridgeObjectRetain(uVar2);
  func_0x000104907c30(uVar3,uVar1,uVar2,uVar5);
  _swift_bridgeObjectRelease(uVar2);
  _objc_release(uVar4);
  return;
}



/* Entry: 10490894c; end: 104908a27; -[_TtC13FBSDKLoginKit18LoginManagerLogger heartbeatTimerDidFire] */

void FUN_10490894c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar3 = lRam000000011309c200;
  _swift_retain();
  if (lVar3 != -1) {
    _swift_once(0x11309c200,FUN_1048f5ca4);
  }
  uVar4 = uRam0000000113815580;
  _swift_beginAccess(param_1 + 0x28,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _swift_beginAccess(param_1 + 0x38,auStack_70,0,0);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = uVar6;
  _objc_retain(uVar6);
  _swift_bridgeObjectRetain(uVar2);
  func_0x000104907c30(uVar4,uVar1,uVar2,uVar6);
  _swift_bridgeObjectRelease(uVar2);
  _objc_release(uVar5);
  _swift_release(param_1);
  return;
}



/* Entry: 104908a28; end: 104908b0b;  */

void FUN_104908a28(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 104908b0c; end: 104908b77;  */

void FUN_104908b0c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126add60;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x000104909b9c(0,0x11309cd18,&PTR_PTR_1126add60);
  uRam00000001138155a0 = uVar2;
  ppuRam00000001138155a8 = &PTR_DAT_1107b6240;
  puRam0000000113815588 = puVar1;
  return;
}



/* Entry: 104908b78; end: 104908c5b;  */

undefined8 FUN_104908b78(void)

{
  if (lRam000000011309c258 != -1) {
    _swift_once(0x11309c258,FUN_104908b0c);
  }
  return 0x113815588;
}



/* Entry: 104908c5c; end: 104908c73;  */

void FUN_104908c5c(void)

{
  uRam00000001138155d0 = 0;
  uRam00000001138155b8 = 0;
  uRam00000001138155b0 = 0;
  uRam00000001138155c8 = 0;
  uRam00000001138155c0 = 0;
  return;
}



/* Entry: 104908c74; end: 104908e3b;  */

undefined8 FUN_104908c74(void)

{
  if (lRam000000011309c260 != -1) {
    _swift_once(0x11309c260,FUN_104908c5c);
  }
  return 0x1138155b0;
}



/* Entry: 104908e3c; end: 104908e57;  */

void FUN_104908e3c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309c260 != -1) {
    _swift_once(0x11309c260,FUN_104908c5c);
  }
  _swift_beginAccess(0x1138155b0,auStack_38,0,0);
  func_0x000104909bfc(0x1138155b0,param_1,0x11309c538);
  return;
}



/* Entry: 104908e58; end: 104908f4f;  */

void FUN_104908e58(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309c260 != -1) {
    _swift_once(0x11309c260,FUN_104908c5c);
  }
  _swift_beginAccess(0x1138155b0,auStack_38,0x21,0);
  func_0x0001049099ac(param_1,0x1138155b0);
  _swift_endAccess(auStack_38);
  func_0x000104909c40(param_1,0x11309c538);
  return;
}



/* Entry: 104908f50; end: 104908f6b;  */

void FUN_104908f50(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam000000011309c258 != -1) {
    _swift_once(0x11309c258,FUN_104908b0c);
  }
  _swift_beginAccess(0x113815588,auStack_38,0,0);
  func_0x000104909bfc(0x113815588,param_1,0x11309c538);
  return;
}



/* Entry: 104908f6c; end: 104908fd7;  */

void FUN_104908f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_38 [24];
  
  if (*param_4 != -1) {
    _swift_once(param_4,param_6);
  }
  _swift_beginAccess(param_5,auStack_38,0,0);
  func_0x000104909bfc(param_5,param_1,0x11309c538);
  return;
}



/* Entry: 104908fd8; end: 10490909b;  */

void FUN_104908fd8(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  FUN_1048ddcc8();
  _swift_bridgeObjectRelease(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1049027d8();
    }
    _objc_release(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 8));
    func_0x000100102924(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    FUN_10490909c(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 10490909c; end: 104909267;  */

void FUN_10490909c(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar12 = param_1 + 1 & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar12 >> 3 & 0xfffffffffffff8)) >> (uVar12 & 0x3f) & 1) != 0) {
    uVar8 = ~uVar8;
    uVar11 = param_1;
    lVar7 = lVar1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar8);
    uVar11 = uVar11 + 1 & uVar8;
    do {
      uVar13 = *(undefined8 *)(param_2 + 0x28);
      lVar10 = *(long *)(*(long *)(param_2 + 0x30) + uVar12 * 8);
      lVar5 = lVar10;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar10);
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,uVar13);
      _objc_retain(lVar10);
      puVar6 = auStack_a8;
      __sSS4hash4intoys6HasherVz_tF(puVar6,lVar5,lVar7);
      __ss6HasherV9_finalizeSiyF();
      _swift_bridgeObjectRelease(lVar7);
      _objc_release(lVar10);
      uVar9 = (ulong)puVar6 & uVar8;
      if ((long)param_1 < (long)uVar11) {
        if (uVar9 < uVar11) {
LAB_1049091b4:
          if ((long)param_1 < (long)uVar9) goto LAB_10490911c;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar12 * 8);
        if ((param_1 != uVar12) || (puVar3 + 1 <= puVar2)) {
          *puVar2 = *puVar3;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x20);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar12 * 0x20);
        if ((param_1 != uVar12) || (puVar3 + 4 <= puVar2)) {
          uVar13 = *puVar3;
          uVar15 = puVar3[3];
          uVar14 = puVar3[2];
          puVar2[1] = puVar3[1];
          *puVar2 = uVar13;
          puVar2[3] = uVar15;
          puVar2[2] = uVar14;
          param_1 = uVar12;
        }
      }
      else if (uVar11 <= uVar9) goto LAB_1049091b4;
LAB_10490911c:
      uVar12 = uVar12 + 1 & uVar8;
      lVar7 = lVar5;
    } while ((*(ulong *)(lVar1 + (uVar12 >> 3 & 0xfffffffffffff8)) >> (uVar12 & 0x3f) & 1) != 0);
  }
  uVar8 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar8) = *(ulong *)(lVar1 + uVar8) & (-1L << (param_1 & 0x3f)) - 1U;
  if (SBORROW8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x104909268);
    (*pcVar4)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return;
}



/* Entry: 104909268; end: 10490959f;  */

void FUN_104909268(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uStack_90 = ~uVar6;
  puStack_98 = (ulong *)(param_1 + 0x40);
  uVar6 = -uVar6;
  uStack_80 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    uStack_80 = ~(-1L << (uVar6 & 0x3f));
  }
  uStack_88 = 0;
  uStack_80 = uStack_80 & *puStack_98;
  lStack_a0 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_3;
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  func_0x000100216040(&uStack_d0);
  uVar2 = uStack_c8;
  uVar6 = uStack_d0;
  if (uStack_c8 == 0) goto LAB_10490955c;
  func_0x000100102924(auStack_c0,auStack_f0);
  lVar9 = *param_5;
  uVar4 = uVar6;
  uVar5 = uVar2;
  func_0x000100029284();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar10 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
LAB_104909598:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10490959c);
    (*pcVar3)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar10) {
    func_0x000100102b0c(lVar10,param_4 & 1);
    uVar4 = uVar6;
    uVar8 = uVar2;
    func_0x000100029284();
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_10490936c:
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10490937c);
      (*pcVar3)();
    }
LAB_104909380:
    if ((uVar5 & 1) != 0) goto LAB_104909384;
LAB_1049093dc:
    lVar7 = *param_5;
    lVar10 = lVar7 + (uVar4 >> 6) * 8;
    *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    func_0x000100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_10490959c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1049095a0);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  }
  else {
    if ((param_4 & 1) != 0) goto LAB_104909380;
    func_0x0001010fc388();
    if ((uVar5 & 1) == 0) goto LAB_1049093dc;
LAB_104909384:
    lVar10 = *param_5;
    func_0x0001000bb420(auStack_f0,auStack_110);
    _swift_bridgeObjectRelease(uVar2);
    func_0x000104909bdc(auStack_f0);
    lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
    func_0x000104909bdc(lVar10);
    func_0x000100102924(auStack_110,lVar10);
  }
  func_0x000100216040(&uStack_d0);
  uVar6 = uStack_d0;
  uVar2 = uStack_c8;
  while (uVar2 != 0) {
    uStack_d0 = uVar6;
    uStack_c8 = uVar2;
    func_0x000100102924(auStack_c0,auStack_f0);
    lVar9 = *param_5;
    uVar4 = uVar6;
    uVar5 = uVar2;
    func_0x000100029284();
    lVar7 = *(long *)(lVar9 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar10 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) goto LAB_104909598;
    if (*(long *)(lVar9 + 0x18) < lVar10) {
      func_0x000100102b0c(lVar10,1);
      uVar4 = uVar6;
      uVar8 = uVar2;
      func_0x000100029284();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) goto LAB_10490936c;
    }
    if ((uVar5 & 1) == 0) {
      lVar7 = *param_5;
      lVar10 = lVar7 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar2;
      func_0x000100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_10490959c;
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    }
    else {
      lVar10 = *param_5;
      func_0x0001000bb420(auStack_f0,auStack_110);
      _swift_bridgeObjectRelease(uVar2);
      func_0x000104909bdc(auStack_f0);
      lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
      func_0x000104909bdc(lVar10);
      func_0x000100102924(auStack_110,lVar10);
    }
    func_0x000100216040(&uStack_d0);
    uVar6 = uStack_d0;
    uVar2 = uStack_c8;
  }
LAB_10490955c:
  func_0x000100dc1a24(lStack_a0,puStack_98,uStack_90,uStack_88,uStack_80);
  _swift_release(param_3);
  return;
}



/* Entry: 1049095a0; end: 10490994f;  */

void FUN_1049095a0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  code *pcVar14;
  long lVar15;
  undefined1 auStack_150 [16];
  undefined *puStack_140;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [176];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  puVar11 = auStack_150 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar15 = *(long *)(lVar3 + -8);
  lVar12 = (long)puVar11 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined *)0x11309c610;
  func_0x0001048db364();
  pcVar2 = (code *)auStack_120;
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 6;
  *(undefined8 *)(puVar4 + 0x10) = 3;
  if (lRam000000011309c228 != -1) {
    pcVar2 = (code *)0x104906818;
    _swift_once(0x11309c228);
  }
  uVar5 = uRam000000011309cbd0;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(code **)(puVar4 + 0x28) = pcVar2;
  puVar7 = PTR___sSSN_11034da80;
  *(undefined **)(puVar4 + 0x48) = PTR___sSSN_11034da80;
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = param_1;
  }
  lVar1 = -0x2000000000000000;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  *(undefined8 *)(puVar4 + 0x30) = uVar5;
  *(long *)(puVar4 + 0x38) = lVar1;
  lVar1 = lRam000000011309c210;
  _swift_bridgeObjectRetain(param_2);
  if (lVar1 != -1) {
    pcVar2 = FUN_104906778;
    _swift_once(0x11309c210);
  }
  pcVar6 = pcRam000000011309cbb8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(code **)(puVar4 + 0x50) = pcVar6;
  *(code **)(puVar4 + 0x58) = pcVar2;
  if (param_4 == 0) {
    *(undefined **)(puVar4 + 0x78) = puVar7;
LAB_1049096f4:
    __s10Foundation4UUIDVACycfC(lVar12);
    __s10Foundation4UUIDV10uuidStringSSvg();
    (**(code **)(lVar15 + 8))(lVar12,lVar3);
    pcVar13 = pcVar2;
    pcVar14 = pcVar6;
  }
  else {
    pcVar2 = (code *)auStack_138;
    _swift_beginAccess(param_4 + 0x10,pcVar2,0,0);
    pcVar14 = *(code **)(param_4 + 0x10);
    pcVar13 = *(code **)(param_4 + 0x18);
    *(undefined **)(puVar4 + 0x78) = puVar7;
    pcVar6 = pcVar13;
    _swift_bridgeObjectRetain();
    if (pcVar13 == (code *)0x0) goto LAB_1049096f4;
  }
  *(code **)(puVar4 + 0x60) = pcVar14;
  *(code **)(puVar4 + 0x68) = pcVar13;
  *(undefined8 *)(puVar4 + 0x80) = 0xd00000000000001d;
  *(undefined8 *)(puVar4 + 0x88) = 0x800000010f21bb70;
  *(undefined **)(puVar4 + 0xa8) = PTR___sSbN_11034dd40;
  puVar4[0x90] = 1;
  puVar7 = puVar4;
  func_0x000100214a84();
  _swift_setDeallocating(puVar4);
  uVar5 = 0x11309c418;
  func_0x0001048db364(0x11309c418);
  _swift_arrayDestroy(puVar4 + 0x20,3,uVar5);
  if (param_3 != 0) {
    _swift_bridgeObjectRetain(param_3);
    puVar4 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native(puVar7);
    puStack_140 = puVar7;
    FUN_104909268(param_3,&UNK_100216600,0,puVar4,&puStack_140);
    _swift_bridgeObjectRelease(param_3);
    puVar7 = puStack_140;
  }
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  _swift_getInitializedObjCClass();
  puVar8 = puVar7;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  _swift_bridgeObjectRelease(puVar7);
  puStack_140 = (undefined *)0x0;
  puVar9 = PTR_s_dataWithJSONObject_options_error_1125b6c80;
  _objc_msgSend(puVar4,PTR_s_dataWithJSONObject_options_error_1125b6c80,puVar8,0,&puStack_140);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar7 = puStack_140;
  _objc_retain(puStack_140);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = puVar7;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(puVar7);
    _swift_willThrow();
    _swift_errorRelease(puVar4);
  }
  else {
    puVar7 = puVar4;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(puVar4);
    _objc_release(puVar4);
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar11);
    puVar8 = puVar7;
    puVar10 = puVar9;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(puVar7,puVar9,puVar11);
    func_0x00010006c090(puVar7,puVar9);
    puVar4 = puVar10;
    if (puVar10 != (undefined *)0x0) goto LAB_1049098d8;
  }
  puVar8 = (undefined *)0x0;
  puVar10 = (undefined *)0x0;
LAB_1049098d8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail(puVar8,puVar10);
  _swift_release(puVar4);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104909950);
  (*pcVar2)();
}



/* Entry: 104909950; end: 104909a1f;  */

undefined8 * FUN_104909950(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 104909a20; end: 104909a27;  */

void FUN_104909a20(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104909a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x80))();
  return;
}



/* Entry: 104909a28; end: 104909c9b;  */

long FUN_104909a28(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104909c9c; end: 104909d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104909c9c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(unaff_x20 + _DAT_11309cd30) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(unaff_x20 + _DAT_11309cd38) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11309cd40) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11309cd48) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11309cd50) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11309cd58) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  _swift_retain(puVar1);
  _objc_msgSendSuper2(auStack_50,puVar2);
  return;
}



/* Entry: 104909d58; end: 104909dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104909d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_1,auStack_50);
  _swift_beginAccess(unaff_x20 + _DAT_11309cd30,auStack_68,0x21,0);
  _swift_bridgeObjectRetain(param_3);
  func_0x000100102934(auStack_50,param_2,param_3);
  _swift_endAccess(auStack_68);
  return;
}



/* Entry: 104909dd0; end: 104909ddf; -[FBSDKLoginManagerLoginResult token] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104909dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11309cd38));
  return;
}



/* Entry: 104909de0; end: 104909e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104909de0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11309cd38);
  _objc_retain(uVar1);
  return uVar1;
}



/* Entry: 104909e10; end: 104909e1f; -[FBSDKLoginManagerLoginResult authenticationToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104909e10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11309cd40));
  return;
}



/* Entry: 104909e20; end: 104909e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104909e20(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11309cd40);
  _objc_retain(uVar1);
  return uVar1;
}



/* Entry: 104909e50; end: 104909e5f; -[FBSDKLoginManagerLoginResult isCancelled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104909e50(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11309cd48);
}



/* Entry: 104909e60; end: 104909e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104909e60(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _DAT_11309cd48);
}



/* Entry: 104909e70; end: 104909e7b; -[FBSDKLoginManagerLoginResult grantedPermissions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104909e70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11309cd50);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104909e7c; end: 104909e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104909e7c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + _DAT_11309cd50));
  return;
}



/* Entry: 104909e8c; end: 104909e97; -[FBSDKLoginManagerLoginResult declinedPermissions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104909e8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11309cd58);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104909e98; end: 104909ee3;  */

void FUN_104909e98(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104909ee4; end: 104909ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104909ee4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + _DAT_11309cd58));
  return;
}



/* Entry: 104909ef4; end: 104909f6f; -[FBSDKLoginManagerLoginResult loggingExtras] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104909ef4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cd30;
  _swift_beginAccess(param_1 + _DAT_11309cd30,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  uVar2 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104909f70; end: 104909fb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104909f70(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cd30;
  _swift_beginAccess(unaff_x20 + _DAT_11309cd30,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 104909fb4; end: 10490a033; -[FBSDKLoginManagerLoginResult setLoggingExtras:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104909fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  lVar1 = _DAT_11309cd30;
  _swift_beginAccess(param_1 + _DAT_11309cd30,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}


