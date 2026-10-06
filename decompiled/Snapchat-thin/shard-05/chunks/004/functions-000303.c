/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e175a0; end: 103e17687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e175a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113012d50) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113012d58) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113012d60) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e17688; end: 103e176e7; -[_TtC26AdRenderDataMapperServices27AdRenderDataMapperCallbacks init] */

void FUN_103e17688(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdRenderDataMapperServices.AdRenderDataMapperCallbacks",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e176b4);
  (*pcVar1)();
}



/* Entry: 103e176e8; end: 103e1772f; -[_TtC26AdRenderDataMapperServices27AdRenderDataMapperCallbacks .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e176e8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113012d50));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113012d58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113012d60));
  return;
}



/* Entry: 103e17730; end: 103e1774f;  */

void FUN_103e17730(void)

{
  _objc_opt_self(&PTR_PTR_11294fb58);
  return;
}



/* Entry: 103e17750; end: 103e17763;  */

bool FUN_103e17750(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103e17764; end: 103e179cb;  */

void FUN_103e17764(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0x5241435f534e454c;
  uVar1 = 0xed00004c4553554f;
  uVar4 = 0x5241435f4b4c4154;
  if (bVar3 != 2) {
    uVar1 = 0xe700000000000000;
    uVar4 = 0x545845544e4f43;
  }
  uVar2 = 0xed00004c4553554f;
  if (bVar3 != 0) {
    uVar5 = 0xd000000000000010;
    uVar2 = 0x800000010efc07b0;
  }
  if (bVar3 < 2) {
    uVar1 = uVar2;
    uVar4 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar4,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103e179cc; end: 103e17a57;  */

void FUN_103e179cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0x5241435f534e454c;
  uVar1 = 0xed00004c4553554f;
  uVar4 = 0x5241435f4b4c4154;
  if (bVar3 != 2) {
    uVar1 = 0xe700000000000000;
    uVar4 = 0x545845544e4f43;
  }
  uVar2 = 0xed00004c4553554f;
  if (bVar3 != 0) {
    uVar5 = 0xd000000000000010;
    uVar2 = 0x800000010efc07b0;
  }
  if (bVar3 < 2) {
    uVar1 = uVar2;
    uVar4 = uVar5;
  }
  *param_1 = uVar4;
  param_1[1] = uVar1;
  return;
}



/* Entry: 103e17a58; end: 103e17abb;  */

ulong FUN_103e17a58(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 103e17abc; end: 103e17abf;  */

void FUN_103e17abc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113012d90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc99bc0;
  _swift_getWitnessTable(&UNK_10dc99bc0,&UNK_1107153b8);
  puRam0000000113012d90 = puVar1;
  return;
}



/* Entry: 103e17ac0; end: 103e17aff;  */

void FUN_103e17ac0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113012d90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc99bc0;
  _swift_getWitnessTable(&UNK_10dc99bc0,&UNK_1107153b8);
  puRam0000000113012d90 = puVar1;
  return;
}



/* Entry: 103e17b00; end: 103e17c63;  */

int FUN_103e17b00(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103e17b7c;
        goto LAB_103e17b60;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103e17b60:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_103e17b7c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103e17c64; end: 103e17caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e17c64(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113012e20) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e17cb0; end: 103e17d0f; -[_TtC26AdRenderDataMapperServices33AdRenderDataMapperFactoryServices init] */

void FUN_103e17cb0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdRenderDataMapperServices.AdRenderDataMapperFactoryServices",0x3c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e17cdc);
  (*pcVar1)();
}



/* Entry: 103e17d10; end: 103e17d1f; -[_TtC26AdRenderDataMapperServices33AdRenderDataMapperFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e17d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113012e20));
  return;
}



/* Entry: 103e17d20; end: 103e17d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e17d20(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113012e50) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e17d6c; end: 103e17dcb; -[_TtC26AdRenderDataMapperServices26AdRenderDataMapperServices init] */

void FUN_103e17d6c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdRenderDataMapperServices.AdRenderDataMapperServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e17d98);
  (*pcVar1)();
}



/* Entry: 103e17dcc; end: 103e17deb; -[_TtC26AdRenderDataMapperServices26AdRenderDataMapperServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e17dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113012e50));
  return;
}



/* Entry: 103e17dec; end: 103e17fe3;  */

undefined1  [16] FUN_103e17dec(ulong param_1,long param_2,char param_3)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == '\0') {
    uStack_30 = 0;
    uStack_28 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x30);
    _swift_bridgeObjectRelease(uStack_28);
    uStack_30 = 0xd00000000000002e;
    uStack_28 = 0x800000010f1bd540;
    _swift_getErrorValue(param_1,auStack_38,auStack_50);
    uVar5 = uStack_40;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_48,uStack_40);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar5);
    auVar4._8_8_ = uStack_28;
    auVar4._0_8_ = uStack_30;
    return auVar4;
  }
  if (param_3 == '\x01') {
    auVar7._8_8_ = 0x800000010f1bd370;
    auVar7._0_8_ = 0xd000000000000050;
    return auVar7;
  }
  uVar3 = param_2 + (ulong)(param_1 >= 4);
  if ((long)-uVar3 < 0 != SCARRY8(~uVar3,(ulong)(param_1 < 4))) {
    uVar3 = param_2 + (ulong)(param_1 >= 6);
    if ((long)-uVar3 < 0 == SCARRY8(~uVar3,(ulong)(param_1 < 6))) {
      param_1 = param_1 ^ 4;
      pcVar1 = "AdRenderData WebView attachment contains invalid URL.";
      uVar5 = 0xd000000000000035;
      pcVar2 = "AdRenderData DeepLink attachment contains no URI.";
      uVar6 = 0xd000000000000031;
    }
    else {
      param_1 = param_1 ^ 6;
      pcVar1 = "AdRenderData AppInstall attachment contains no AppID or SkAttribution.";
      uVar5 = 0xd000000000000046;
      pcVar2 = "AdRenderData PlayableURL attachment contains no URL.";
      uVar6 = 0xd000000000000034;
    }
    if (param_1 != 0 || param_2 != 0) {
      pcVar1 = pcVar2;
      uVar5 = uVar6;
    }
    auVar10._8_8_ = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
    auVar10._0_8_ = uVar5;
    return auVar10;
  }
  uVar3 = param_2 + (ulong)(param_1 >= 2);
  if ((long)-uVar3 < 0 != SCARRY8(~uVar3,(ulong)(param_1 < 2))) {
    uVar5 = 0xd000000000000029;
    pcVar2 = "AdRenderData WebView attachment contains no WebView.";
    if (param_1 != 2 || param_2 != 0) {
      uVar5 = 0xd000000000000034;
      pcVar2 = "AdRenderData WebView attachment contains invalid URL.";
    }
    auVar9._8_8_ = (ulong)(pcVar2 + 0x20) | 0x8000000000000000;
    auVar9._0_8_ = uVar5;
    return auVar9;
  }
  uVar5 = 0xd000000000000029;
  pcVar2 = "contains no WebView.";
  if (param_1 != 0 || param_2 != 0) {
    uVar5 = 0xd00000000000002a;
    pcVar2 = "tains invalid attachment.";
  }
  auVar8._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Entry: 103e17fe4; end: 103e18017;  */

undefined1  [16] FUN_103e17fe4(void)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong *unaff_x20;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar6 = *unaff_x20;
  uVar3 = unaff_x20[1];
  if ((char)unaff_x20[2] == '\0') {
    uStack_30 = 0;
    uStack_28 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x30);
    _swift_bridgeObjectRelease(uStack_28);
    uStack_30 = 0xd00000000000002e;
    uStack_28 = 0x800000010f1bd540;
    _swift_getErrorValue(uVar6,auStack_38,auStack_50);
    uVar7 = uStack_40;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_48,uStack_40);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar7);
    auVar5._8_8_ = uStack_28;
    auVar5._0_8_ = uStack_30;
    return auVar5;
  }
  if ((char)unaff_x20[2] == '\x01') {
    auVar9._8_8_ = 0x800000010f1bd370;
    auVar9._0_8_ = 0xd000000000000050;
    return auVar9;
  }
  uVar4 = uVar3 + (uVar6 >= 4);
  if ((long)-uVar4 < 0 != SCARRY8(~uVar4,(ulong)(uVar6 < 4))) {
    uVar4 = uVar3 + (uVar6 >= 6);
    if ((long)-uVar4 < 0 == SCARRY8(~uVar4,(ulong)(uVar6 < 6))) {
      uVar6 = uVar6 ^ 4;
      pcVar1 = "AdRenderData WebView attachment contains invalid URL.";
      uVar7 = 0xd000000000000035;
      pcVar2 = "AdRenderData DeepLink attachment contains no URI.";
      uVar8 = 0xd000000000000031;
    }
    else {
      uVar6 = uVar6 ^ 6;
      pcVar1 = "AdRenderData AppInstall attachment contains no AppID or SkAttribution.";
      uVar7 = 0xd000000000000046;
      pcVar2 = "AdRenderData PlayableURL attachment contains no URL.";
      uVar8 = 0xd000000000000034;
    }
    if (uVar6 != 0 || uVar3 != 0) {
      pcVar1 = pcVar2;
      uVar7 = uVar8;
    }
    auVar12._8_8_ = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
    auVar12._0_8_ = uVar7;
    return auVar12;
  }
  uVar4 = uVar3 + (uVar6 >= 2);
  if ((long)-uVar4 < 0 != SCARRY8(~uVar4,(ulong)(uVar6 < 2))) {
    uVar7 = 0xd000000000000029;
    pcVar2 = "AdRenderData WebView attachment contains no WebView.";
    if (uVar6 != 2 || uVar3 != 0) {
      uVar7 = 0xd000000000000034;
      pcVar2 = "AdRenderData WebView attachment contains invalid URL.";
    }
    auVar11._8_8_ = (ulong)(pcVar2 + 0x20) | 0x8000000000000000;
    auVar11._0_8_ = uVar7;
    return auVar11;
  }
  uVar7 = 0xd000000000000029;
  pcVar2 = "contains no WebView.";
  if (uVar6 != 0 || uVar3 != 0) {
    uVar7 = 0xd00000000000002a;
    pcVar2 = "tains invalid attachment.";
  }
  auVar10._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Entry: 103e18018; end: 103e181eb;  */

uint FUN_103e18018(long param_1,long param_2,uint param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  
  if (((param_3 | (uint)param_6) & 0xff) == 0) {
    _swift_getErrorValue(param_1,auStack_58,auStack_70);
    FUN_103e181ec(param_1,param_2,0);
    func_0x000103e181f0(param_4,param_5,0);
    lVar1 = lStack_68;
    lVar2 = lStack_60;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
    _swift_getErrorValue(param_4,auStack_78,auStack_90);
    lVar3 = lStack_80;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
    if (lVar1 == lStack_88 && lVar2 == lVar3) {
      uVar4 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (lVar1,lVar2,lStack_88,lVar3,0);
      uVar4 = (uint)lVar1;
    }
    _swift_bridgeObjectRelease(lVar2);
    _swift_bridgeObjectRelease(lVar3);
    func_0x00010192244c(param_4,param_5,0);
    func_0x00010192244c(param_1,param_2,0);
    goto LAB_103e181a0;
  }
  FUN_103e17dec();
  FUN_103e17dec(param_4,param_5,param_6);
  if (param_2 == 0) {
    param_2 = param_5;
    if (param_5 != 0) goto LAB_103e18194;
  }
  else {
    if (param_5 == 0) {
LAB_103e18194:
      _swift_bridgeObjectRelease(param_2);
      uVar4 = 0;
      goto LAB_103e181a0;
    }
    if ((param_1 != param_4) || (param_2 != param_5)) {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_4,param_5,0);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(param_5);
      uVar4 = (uint)param_1;
      goto LAB_103e181a0;
    }
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_5);
  }
  uVar4 = 1;
LAB_103e181a0:
  return uVar4 & 1;
}



/* Entry: 103e181ec; end: 103e1821f;  */

void FUN_103e181ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd4298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc99d10;
  func_0x000107c61520(&UNK_10dc99d10,&UNK_1107154a0);
  puRam0000000112dd4298 = puVar1;
  return;
}



/* Entry: 103e18220; end: 103e182bb;  */

undefined8 * FUN_103e18220(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_103e181ec(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103e182bc; end: 103e182ff;  */

undefined8 * FUN_103e182bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x00010192244c(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 103e18300; end: 103e183d7;  */

int FUN_103e18300(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103e183d8; end: 103e1840f;  */

void FUN_103e183d8(undefined8 param_1)

{
  if (lRam0000000113012ed8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7c6e9c);
  return;
}



/* Entry: 103e18410; end: 103e18413;  */

undefined8 FUN_103e18410(ulong param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = param_1;
  __s10Foundation3URLV2eeoiySbAC_ACtFZ();
  if ((uVar4 & 1) != 0) {
    lVar3 = 0;
    FUN_103e183d8();
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar3 + 0x14));
    uVar4 = puVar1[1];
    puVar2 = (ulong *)(param_2 + *(int *)(lVar3 + 0x14));
    uVar5 = puVar2[1];
    if (uVar4 == 0) {
      if (uVar5 != 0) {
        return 0;
      }
    }
    else {
      if (uVar5 == 0) {
        return 0;
      }
      uVar6 = *puVar1;
      if ((uVar6 != *puVar2 || uVar4 != uVar5) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar6 & 1) == 0)) {
        return 0;
      }
    }
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar3 + 0x18));
    uVar4 = puVar1[1];
    puVar2 = (ulong *)(param_2 + *(int *)(lVar3 + 0x18));
    uVar5 = puVar2[1];
    if (uVar4 == 0) {
      if (uVar5 != 0) {
        return 0;
      }
    }
    else {
      if (uVar5 == 0) {
        return 0;
      }
      uVar6 = *puVar1;
      if ((uVar6 != *puVar2 || uVar4 != uVar5) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar6 & 1) == 0)) {
        return 0;
      }
    }
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar3 + 0x1c));
    uVar4 = puVar1[1];
    puVar2 = (ulong *)(param_2 + *(int *)(lVar3 + 0x1c));
    uVar5 = puVar2[1];
    if (uVar4 == 0) {
      if (uVar5 == 0) {
        return 1;
      }
    }
    else if ((uVar5 != 0) &&
            ((uVar6 = *puVar1, uVar6 == *puVar2 && uVar4 == uVar5 ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar6 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 103e18414; end: 103e18607;  */

undefined8 FUN_103e18414(ulong param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = param_1;
  __s10Foundation3URLV2eeoiySbAC_ACtFZ();
  if ((uVar4 & 1) != 0) {
    lVar3 = 0;
    FUN_103e183d8();
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar3 + 0x14));
    uVar4 = puVar1[1];
    puVar2 = (ulong *)(param_2 + *(int *)(lVar3 + 0x14));
    uVar5 = puVar2[1];
    if (uVar4 == 0) {
      if (uVar5 != 0) {
        return 0;
      }
    }
    else {
      if (uVar5 == 0) {
        return 0;
      }
      uVar6 = *puVar1;
      if ((uVar6 != *puVar2 || uVar4 != uVar5) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar6 & 1) == 0)) {
        return 0;
      }
    }
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar3 + 0x18));
    uVar4 = puVar1[1];
    puVar2 = (ulong *)(param_2 + *(int *)(lVar3 + 0x18));
    uVar5 = puVar2[1];
    if (uVar4 == 0) {
      if (uVar5 != 0) {
        return 0;
      }
    }
    else {
      if (uVar5 == 0) {
        return 0;
      }
      uVar6 = *puVar1;
      if ((uVar6 != *puVar2 || uVar4 != uVar5) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar6 & 1) == 0)) {
        return 0;
      }
    }
    puVar1 = (ulong *)(param_1 + (long)*(int *)(lVar3 + 0x1c));
    uVar4 = puVar1[1];
    puVar2 = (ulong *)(param_2 + *(int *)(lVar3 + 0x1c));
    uVar5 = puVar2[1];
    if (uVar4 == 0) {
      if (uVar5 == 0) {
        return 1;
      }
    }
    else if ((uVar5 != 0) &&
            ((uVar6 = *puVar1, uVar6 == *puVar2 && uVar4 == uVar5 ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar6 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 103e18608; end: 103e1866f;  */

void FUN_103e18608(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
  return;
}



/* Entry: 103e18670; end: 103e188f3;  */

long FUN_103e18670(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
  iVar5 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(param_1 + iVar5);
  puVar2 = (undefined8 *)(param_2 + iVar5);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Entry: 103e188f4; end: 103e1890b;  */

void FUN_103e188f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103e1890c; end: 103e1897f;  */

void FUN_103e1890c(long param_1,ulong param_2)

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
    puStack_38 = &UNK_10dc99e28;
    puStack_30 = &UNK_10dc99e28;
    puStack_28 = &UNK_10dc99e28;
    _swift_initStructMetadata(param_1,0x100,4,&lStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 103e18980; end: 103e18a17; -[SCLensPlayableInfo playableURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e18980(long param_1)

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
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_1138121e8,lVar1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103e18a18; end: 103e18a23; -[SCLensPlayableInfo attachmentCtaText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e18a18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138121f0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138121f0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e18a24; end: 103e18a2f; -[SCLensPlayableInfo appIconURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e18a24(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138121f8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138121f8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e18a30; end: 103e18a3b; -[SCLensPlayableInfo appTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e18a30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113812200))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113812200);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e18a3c; end: 103e18a93;  */

void FUN_103e18a3c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e18a94; end: 103e18c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103e18a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  lVar2 = _DAT_1138121e8;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_1,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138121f0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138121f8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113812200);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar4 = auStack_70;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_1,lVar3);
  return puVar4;
}



/* Entry: 103e18c74; end: 103e18de3; -[SCLensPlayableInfo initWithPlayableURL:attachmentCtaText:appIconURL:appTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103e18c74(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                    long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar5 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  lStack_78 = lVar5;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar6,param_3);
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    lVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar1 = param_2;
  }
  if (param_6 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  (**(code **)(lVar5 + 0x10))(param_1 + _DAT_1138121e8,puVar6,lVar3);
  plVar4 = (long *)(param_1 + _DAT_1138121f0);
  *plVar4 = param_4;
  plVar4[1] = lVar2;
  plVar4 = (long *)(param_1 + _DAT_1138121f8);
  *plVar4 = param_5;
  plVar4[1] = lVar1;
  plVar4 = (long *)(param_1 + _DAT_113812200);
  *plVar4 = param_6;
  plVar4[1] = param_2;
  lStack_68 = lStack_78;
  plVar4 = &lStack_70;
  lStack_70 = param_1;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(puVar6,lVar3);
  return plVar4;
}



/* Entry: 103e18de4; end: 103e18ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e18de4(long param_1)

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
  undefined8 uVar10;
  undefined1 auStack_50 [8];
  
  puVar6 = auStack_50;
  _objc_allocWithZone();
  lVar5 = _DAT_1138121e8;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(unaff_x20 + lVar5,param_1,lVar4);
  lVar5 = 0;
  FUN_103e183d8();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x14));
  uVar7 = puVar1[1];
  uVar8 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1138121f0);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar8;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x18));
  uVar8 = puVar1[1];
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1138121f8);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar9;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x1c));
  uVar9 = puVar1[1];
  uVar10 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113812200);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar10;
  puVar3 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _objc_msgSendSuper2(auStack_50,puVar3);
  FUN_103e18ee8(param_1);
  return puVar6;
}



/* Entry: 103e18ee8; end: 103e18f23;  */

undefined8 FUN_103e18ee8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103e183d8();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103e18f24; end: 103e18f57; -[SCLensPlayableInfo hash] */

undefined8 FUN_103e18f24(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e18f58();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103e18f58; end: 103e1908f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e18f58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(_DAT_1138121e8);
  uVar2 = param_1;
  func_0x000107c44c3c();
  _objc_release(param_1);
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1138121f0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1138121f0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1138121f8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1138121f8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113812200))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113812200);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103e19090; end: 103e1928f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103e19090(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  uint uVar7;
  uint uVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar1 = unaff_x20 + _DAT_1138121e8;
      __s10Foundation3URLV2eeoiySbAC_ACtFZ(lVar1,lStack_68 + _DAT_1138121e8);
      lVar4 = ((long *)(unaff_x20 + _DAT_1138121f0))[1];
      lVar5 = ((long *)(lStack_68 + _DAT_1138121f0))[1];
      uVar7 = (uint)(lVar4 == 0 && lVar5 == 0);
      if (lVar4 != 0 && lVar5 != 0) {
        lVar3 = *(long *)(unaff_x20 + _DAT_1138121f0);
        if (lVar3 == *(long *)(lStack_68 + _DAT_1138121f0) && lVar4 == lVar5) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar3;
        }
      }
      lVar4 = ((long *)(unaff_x20 + _DAT_1138121f8))[1];
      lVar5 = ((long *)(lStack_68 + _DAT_1138121f8))[1];
      uVar6 = (uint)(lVar4 == 0 && lVar5 == 0);
      if (lVar4 != 0 && lVar5 != 0) {
        lVar3 = *(long *)(unaff_x20 + _DAT_1138121f8);
        if (lVar3 == *(long *)(lStack_68 + _DAT_1138121f8) && lVar4 == lVar5) {
          uVar6 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar6 = (uint)lVar3;
        }
      }
      lVar4 = ((long *)(unaff_x20 + _DAT_113812200))[1];
      lVar5 = ((long *)(lStack_68 + _DAT_113812200))[1];
      if (lVar4 == 0) {
        _swift_bridgeObjectRetain(lVar5);
        _objc_release(lStack_68);
        if (lVar5 == 0) {
LAB_103e19258:
          uVar8 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar5);
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0;
        if (lVar5 != 0) {
          lVar3 = *(long *)(unaff_x20 + _DAT_113812200);
          if ((lVar3 == *(long *)(lStack_68 + _DAT_113812200)) && (lVar4 == lVar5)) {
            _objc_release(lStack_68);
            goto LAB_103e19258;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar3;
        }
        _objc_release(lStack_68);
      }
      if (((uint)lVar1 & uVar7 & 1) != 0) {
        uVar6 = uVar6 & uVar8;
        goto LAB_103e19170;
      }
    }
  }
  uVar6 = 0;
LAB_103e19170:
  return uVar6 & 1;
}



/* Entry: 103e19290; end: 103e1930f; -[SCLensPlayableInfo isEqual:] */

uint FUN_103e19290(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103e19090(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103e19310; end: 103e19313; -[SCLensPlayableInfo copyWithZone:] */

void FUN_103e19310(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e19314; end: 103e19417; -[SCLensPlayableInfo description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e19314(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar6 = 0;
  FUN_103e183d8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar5 = _DAT_1138121e8;
  puVar8 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  iVar2 = *(int *)(lVar6 + 0x14);
  iVar3 = *(int *)(lVar6 + 0x18);
  iVar4 = *(int *)(lVar6 + 0x1c);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))(puVar8,param_1 + lVar5,lVar6);
  puVar1 = (undefined8 *)(param_1 + _DAT_1138121f0);
  uVar9 = puVar1[1];
  uVar7 = *puVar1;
  *(undefined8 *)((long)(puVar8 + iVar2) + 8) = puVar1[1];
  *(undefined8 *)(puVar8 + iVar2) = uVar7;
  puVar1 = (undefined8 *)(param_1 + _DAT_1138121f8);
  uVar10 = puVar1[1];
  uVar7 = *puVar1;
  *(undefined8 *)((long)(puVar8 + iVar3) + 8) = puVar1[1];
  *(undefined8 *)(puVar8 + iVar3) = uVar7;
  puVar1 = (undefined8 *)(param_1 + _DAT_113812200);
  uVar7 = puVar1[1];
  uVar11 = *puVar1;
  *(undefined8 *)((long)(puVar8 + iVar4) + 8) = puVar1[1];
  *(undefined8 *)(puVar8 + iVar4) = uVar11;
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  FUN_103e18ee8(puVar8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e19418; end: 103e19493; -[SCLensPlayableInfo init] */

void FUN_103e19418(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdRenderDataMapperServices/LensPlayableInfoWrapper.swift",0x38,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e19460);
  (*pcVar1)();
}



/* Entry: 103e19494; end: 103e1950b; -[SCLensPlayableInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e19494(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_1138121e8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138121f0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138121f8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113812200 + 8))
  ;
  return;
}



/* Entry: 103e1950c; end: 103e19513;  */

void FUN_103e1950c(void)

{
  if (lRam0000000113012f40 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7c6ec4);
  return;
}



/* Entry: 103e19514; end: 103e1954b;  */

void FUN_103e19514(undefined8 param_1)

{
  if (lRam0000000113012f40 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7c6ec4);
  return;
}



/* Entry: 103e1954c; end: 103e195c3;  */

void FUN_103e1954c(long param_1,ulong param_2)

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
    puStack_38 = &UNK_10dc99e58;
    puStack_30 = &UNK_10dc99e58;
    puStack_28 = &UNK_10dc99e58;
    _swift_updateClassMetadata2(param_1,0x100,4,&lStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 103e195c4; end: 103e19703;  */

void FUN_103e195c4(void)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c4b114();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___sypN_11034f1a8;
  if (unaff_x20 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  puVar5 = PTR___sSSN_11034da80;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
  _objc_release(unaff_x20);
  ppuVar3 = &PTR____CFConstantStringClassReference_110da03f8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
            (&PTR____CFConstantStringClassReference_110da03f8);
  if (*(long *)(lVar2 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar2);
    puVar6 = puVar5;
    func_0x000100029284(ppuVar3);
    if (((ulong)puVar6 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar2 + 0x38) + (long)ppuVar3 * 0x20,&uStack_50);
      _swift_bridgeObjectRelease(puVar5);
      _swift_bridgeObjectRelease_n(lVar2,2);
      goto LAB_103e19698;
    }
    _swift_bridgeObjectRelease(lVar2);
  }
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
  _swift_bridgeObjectRelease(puVar5);
  _swift_bridgeObjectRelease(lVar2);
LAB_103e19698:
  uStack_68 = uStack_48;
  uStack_70 = uStack_50;
  lStack_58 = lStack_38;
  uStack_60 = uStack_40;
  if (lStack_38 == 0) {
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    uVar4 = 0x113012f50;
    func_0x0001000285a8(0x113012f50,&UNK_10dc99e70);
    _swift_dynamicCast(auStack_78,&uStack_70,puVar1 + 8,uVar4,6);
  }
  return;
}



/* Entry: 103e19704; end: 103e19737; -[SCLens getSponsoredLensExtension] */

void FUN_103e19704(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e195c4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e19738; end: 103e1974b;  */

bool FUN_103e19738(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103e1974c; end: 103e19823;  */

void FUN_103e1974c(void)

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



/* Entry: 103e19824; end: 103e19843;  */

void FUN_103e19824(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103e19844; end: 103e19883;  */

void FUN_103e19844(void)

{
  undefined *puVar1;
  
  if (puRam0000000113012f58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc99e80;
  _swift_getWitnessTable(&UNK_10dc99e80,&UNK_1107155b8);
  puRam0000000113012f58 = puVar1;
  return;
}



/* Entry: 103e19884; end: 103e19893;  */

undefined1  [16] FUN_103e19884(void)

{
  return ZEXT816(0x1107155b8);
}



/* Entry: 103e19894; end: 103e199a7;  */

void FUN_103e19894(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[1];
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar1);
    lVar1 = unaff_x20[1];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar1);
  }
  if ((char)unaff_x20[3] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    lVar1 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys6UInt64VF(lVar1);
  }
  if ((char)unaff_x20[5] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    lVar1 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys6UInt64VF(lVar1);
  }
  return;
}



/* Entry: 103e199a8; end: 103e199e3;  */

void FUN_103e199a8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_103e19894(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103e199e4; end: 103e199e7;  */

void FUN_103e199e4(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar1 = unaff_x20[1];
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar1);
    lVar1 = unaff_x20[1];
  }
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(param_1);
    _objc_release(lVar1);
  }
  if ((char)unaff_x20[3] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    lVar1 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys6UInt64VF(lVar1);
  }
  if ((char)unaff_x20[5] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    lVar1 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyys6UInt64VF(lVar1);
  }
  return;
}



/* Entry: 103e199e8; end: 103e19a1f;  */

void FUN_103e199e8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_103e19894(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103e19a20; end: 103e19a67;  */

uint FUN_103e19a20(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_103e19a68(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103e19a68; end: 103e19bcf;  */

undefined8 FUN_103e19a68(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *param_1;
  lVar3 = *param_2;
  if (uVar2 == 0) {
    if (lVar3 != 0) {
      return 0;
    }
  }
  else {
    if (lVar3 == 0) {
      return 0;
    }
    func_0x0001047b3ccc(0);
    _objc_retain(lVar3);
    _objc_retain();
    uVar1 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(lVar3);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  uVar2 = param_1[1];
  lVar3 = param_2[1];
  if (uVar2 == 0) {
    if (lVar3 != 0) {
      return 0;
    }
  }
  else {
    if (lVar3 == 0) {
      return 0;
    }
    func_0x0001047b3ccc(0);
    _objc_retain(lVar3);
    _objc_retain();
    uVar1 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(lVar3);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if ((char)param_1[3] == '\x01') {
    if ((char)param_2[3] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[3] == '\x01') {
      return 0;
    }
    if (param_1[2] != param_2[2]) {
      return 0;
    }
  }
  if ((char)param_1[5] == '\x01') {
    if ((char)param_2[5] == '\x01') {
      return 1;
    }
  }
  else if (((char)param_2[5] != '\x01') && (param_1[4] == param_2[4])) {
    return 1;
  }
  return 0;
}



/* Entry: 103e19bd0; end: 103e19bd3;  */

void FUN_103e19bd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113012f60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc99fa0;
  _swift_getWitnessTable(&UNK_10dc99fa0,&UNK_110715688);
  puRam0000000113012f60 = puVar1;
  return;
}



/* Entry: 103e19bd4; end: 103e19c13;  */

void FUN_103e19bd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113012f60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc99fa0;
  _swift_getWitnessTable(&UNK_10dc99fa0,&UNK_110715688);
  puRam0000000113012f60 = puVar1;
  return;
}



/* Entry: 103e19c14; end: 103e19cbb;  */

long FUN_103e19c14(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103e19cbc; end: 103e19d37;  */

undefined8 * FUN_103e19cbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 103e19d38; end: 103e19d93;  */

undefined8 * FUN_103e19d38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 103e19d94; end: 103e19e5f;  */

int FUN_103e19d94(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103e19e60; end: 103e19e6f; -[SCSponsoredLensCTAColorConfig textColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e19e60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113012f68));
  return;
}



/* Entry: 103e19e70; end: 103e19e7f; -[SCSponsoredLensCTAColorConfig backgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e19e70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113012f70));
  return;
}



/* Entry: 103e19e80; end: 103e19e8f; -[SCSponsoredLensCTAColorConfig ctaAnimationDelayMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e19e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113012f78));
  return;
}



/* Entry: 103e19e90; end: 103e19e9f; -[SCSponsoredLensCTAColorConfig ctaAnimationDurationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e19e90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113012f80));
  return;
}



/* Entry: 103e19ea0; end: 103e19f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e19ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113012f68) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113012f70) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113012f78) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113012f80) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e19f2c; end: 103e19fdb; -[SCSponsoredLensCTAColorConfig initWithTextColor:backgroundColor:ctaAnimationDelayMs:ctaAnimationDurationMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e19f2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113012f68) = param_3;
  *(undefined8 *)(param_1 + _DAT_113012f70) = param_4;
  *(undefined8 *)(param_1 + _DAT_113012f78) = param_5;
  *(undefined8 *)(param_1 + _DAT_113012f80) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 103e19fdc; end: 103e1a0db;  */

undefined8 * FUN_103e19fdc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_allocWithZone();
  puVar1 = param_1;
  FUN_103e1a8f8(param_1);
  uStack_38 = *param_1;
  FUN_103e1aa58(&uStack_38,0x113012f88,&UNK_10dc99ff0);
  uStack_40 = param_1[1];
  FUN_103e1aa58(&uStack_40,0x113012f88,&UNK_10dc99ff0);
  return puVar1;
}



/* Entry: 103e1a0dc; end: 103e1a10f; -[SCSponsoredLensCTAColorConfig hash] */

undefined8 FUN_103e1a0dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e1a110();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103e1a110; end: 103e1a25b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1a110(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (*(long *)(unaff_x20 + _DAT_113012f68) == 0) {
    param_1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001047b3710();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  if (*(long *)(unaff_x20 + _DAT_113012f70) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001047b3710();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113012f78);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113012f80);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103e1a25c; end: 103e1a503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103e1a25c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long unaff_x20;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lStack_78;
  long alStack_70 [4];
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  FUN_103e1af00(param_1,alStack_70,0x112d387f8,&UNK_10d902650);
  if (alStack_70[3] == 0) {
    FUN_103e1aa58(alStack_70,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar1 = &lStack_78;
    _swift_dynamicCast(plVar1,alStack_70,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar1 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_113012f68) == 0) {
        uVar7 = (uint)(*(long *)(lStack_78 + _DAT_113012f68) == 0);
      }
      else {
        lVar8 = *(long *)(lStack_78 + _DAT_113012f68);
        if (lVar8 == 0) {
          lVar2 = 0;
          alStack_70[1] = 0;
          alStack_70[2] = 0;
        }
        else {
          lVar2 = 0;
          func_0x0001047b3ccc();
        }
        alStack_70[0] = lVar8;
        alStack_70[3] = lVar2;
        _objc_retain(lVar8);
        uVar7 = 0;
        func_0x0001047b37d0();
        FUN_103e1aa58(alStack_70,0x112d387f8,&UNK_10d902650);
      }
      if (*(long *)(unaff_x20 + _DAT_113012f70) == 0) {
        uVar9 = (uint)(*(long *)(lStack_78 + _DAT_113012f70) == 0);
      }
      else {
        lVar8 = *(long *)(lStack_78 + _DAT_113012f70);
        if (lVar8 == 0) {
          lVar2 = 0;
          alStack_70[1] = 0;
          alStack_70[2] = 0;
        }
        else {
          lVar2 = 0;
          func_0x0001047b3ccc();
        }
        alStack_70[0] = lVar8;
        alStack_70[3] = lVar2;
        _objc_retain(lVar8);
        uVar9 = 0;
        func_0x0001047b37d0();
        FUN_103e1aa58(alStack_70,0x112d387f8,&UNK_10d902650);
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113012f78);
      lVar8 = *(long *)(lStack_78 + _DAT_113012f78);
      uVar5 = (uint)(lVar2 == 0 && lVar8 == 0);
      if ((lVar2 != 0) && (lVar8 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar8);
        _objc_retain(lVar2);
        lVar3 = lVar2;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar5 = (uint)lVar3;
        _objc_release(lVar2);
        _objc_release(lVar8);
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_113012f80);
      lVar8 = *(long *)(lStack_78 + _DAT_113012f80);
      if (lVar2 == 0) {
        lVar3 = lVar8;
        _objc_retain(lVar8);
        _objc_release(lStack_78);
        if (lVar8 != 0) {
          uVar6 = 0;
          goto LAB_103e1a4bc;
        }
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
        lVar3 = lStack_78;
        if (lVar8 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar8);
          _objc_retain(lVar2);
          lVar4 = lVar2;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar6 = (uint)lVar4;
          _objc_release(lVar2);
          _objc_release(lVar8);
        }
LAB_103e1a4bc:
        _objc_release(lVar3);
      }
      if ((uVar7 & uVar9 & 1) != 0) {
        uVar5 = uVar5 & uVar6;
        goto LAB_103e1a4e4;
      }
    }
  }
  uVar5 = 0;
LAB_103e1a4e4:
  return uVar5 & 1;
}



/* Entry: 103e1a504; end: 103e1a593; -[SCSponsoredLensCTAColorConfig isEqual:] */

uint FUN_103e1a504(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103e1a25c(&uStack_40);
  _objc_release(param_1);
  FUN_103e1aa58(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 103e1a594; end: 103e1a597; -[SCSponsoredLensCTAColorConfig copyWithZone:] */

void FUN_103e1a594(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e1a598; end: 103e1a6d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1a598(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4c4f435f54584554;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4f435f54584554,0xea0000000000524f);
  func_0x000107c42744(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1bd5b0);
  func_0x000107c42744(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1bd5d0);
  func_0x000107c42744(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1bd5f0);
  func_0x000107c42744(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103e1a6d4; end: 103e1a723; -[SCSponsoredLensCTAColorConfig encodeWithCoder:] */

void FUN_103e1a6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103e1a598(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103e1a724; end: 103e1a763;  */

undefined8 FUN_103e1a724(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_103e1aa98(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103e1a764; end: 103e1a79f; -[SCSponsoredLensCTAColorConfig initWithCoder:] */

undefined8 FUN_103e1a764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_103e1aa98();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 103e1a7a0; end: 103e1a823; -[SCSponsoredLensCTAColorConfig description] */

void FUN_103e1a7a0(undefined8 param_1)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  FUN_103e1ae1c(&uStack_60);
  _objc_release(param_1);
  uStack_28 = uStack_60;
  FUN_103e1aa58(&uStack_28,0x113012f88,&UNK_10dc99ff0);
  uStack_30 = uStack_58;
  FUN_103e1aa58(&uStack_30,0x113012f88,&UNK_10dc99ff0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e1a824; end: 103e1a89f; -[SCSponsoredLensCTAColorConfig init] */

void FUN_103e1a824(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SponsoredLensExtensionAPI/SponsoredLensCTAColorConfigWrapper.swift",0x42,2,0x60,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e1a86c);
  (*pcVar1)();
}



/* Entry: 103e1a8a0; end: 103e1a8f7; -[SCSponsoredLensCTAColorConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1a8a0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113012f68));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113012f70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113012f78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113012f80));
  return;
}



/* Entry: 103e1a8f8; end: 103e1aa57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1a8f8(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _swift_getObjectType();
  uStack_58 = *param_1;
  uStack_60 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113012f68) = uStack_58;
  *(undefined8 *)(unaff_x20 + _DAT_113012f70) = uStack_60;
  if (*(char *)(param_1 + 3) == '\x01') {
    FUN_103e1af00(&uStack_58,auStack_68,0x113012f88,&UNK_10dc99ff0);
    FUN_103e1af00(&uStack_60,auStack_68,0x113012f88,&UNK_10dc99ff0);
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_103e1af00(&uStack_58,auStack_68,0x113012f88,&UNK_10dc99ff0);
    FUN_103e1af00(&uStack_60,auStack_68,0x113012f88,&UNK_10dc99ff0);
    func_0x000107c47580();
  }
  *(undefined **)(unaff_x20 + _DAT_113012f78) = puVar1;
  if (*(char *)(param_1 + 5) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x000107c47580();
  }
  *(undefined **)(unaff_x20 + _DAT_113012f80) = puVar1;
  _objc_msgSendSuper2(&stack0xffffffffffffff88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e1aa58; end: 103e1aa97;  */

undefined8 FUN_103e1aa58(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103e1aa98; end: 103e1ae1b;  */

undefined8 FUN_103e1aa98(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar2 = 0x4c4f435f54584554;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c4f435f54584554,0xea0000000000524f);
  lVar3 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    FUN_103e1aa58(&uStack_70,0x112d387f8,&UNK_10d902650);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001047b3ccc(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar2,6);
    uVar2 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1bd5b0);
  lVar3 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    FUN_103e1aa58(&uStack_70,0x112d387f8,&UNK_10d902650);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    func_0x0001047b3ccc(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar5,6);
    uVar5 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  uVar6 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1bd5d0);
  lVar3 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    FUN_103e1aa58(&uStack_70,0x112d387f8,&UNK_10d902650);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar6,6);
    uVar6 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar6 = 0;
    }
  }
  uVar7 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1bd5f0);
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (param_1 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    FUN_103e1aa58(&uStack_70,0x112d387f8,&UNK_10d902650);
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar7,6);
    uVar7 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar7 = 0;
    }
  }
  func_0x000107c48cb8();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  return unaff_x20;
}



/* Entry: 103e1ae1c; end: 103e1aedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1ae1c(undefined8 *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar4 = *(undefined8 *)(param_2 + _DAT_113012f68);
  uVar5 = *(undefined8 *)(param_2 + _DAT_113012f70);
  lVar6 = *(long *)(param_2 + _DAT_113012f78);
  bVar1 = lVar6 == 0;
  if (bVar1) {
    _objc_retain(uVar5);
    _objc_retain(uVar4);
  }
  else {
    _objc_retain(uVar5);
    _objc_retain(uVar4);
    func_0x000107c4c0a8();
  }
  lVar3 = *(long *)(param_2 + _DAT_113012f80);
  bVar2 = lVar3 == 0;
  if (!bVar2) {
    func_0x000107c4c0a8();
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = lVar6;
  *(bool *)(param_1 + 3) = bVar1;
  param_1[4] = lVar3;
  *(bool *)(param_1 + 5) = bVar2;
  return;
}



/* Entry: 103e1aee0; end: 103e1aeff;  */

void FUN_103e1aee0(void)

{
  _objc_opt_self(&PTR_PTR_11294fe90);
  return;
}



/* Entry: 103e1af00; end: 103e1af47;  */

undefined8 FUN_103e1af00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103e1af48; end: 103e1af87;  */

undefined * FUN_103e1af48(void)

{
  return &UNK_10dc9a020;
}



/* Entry: 103e1af88; end: 103e1af97; -[DpaLensGrapheneLoggerServices grapheneLoggerObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1af88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113012fc0));
  return;
}



/* Entry: 103e1af98; end: 103e1b01b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e1af98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113012fb8) = param_1;
  uVar1 = param_1;
  _swift_retain();
  func_0x0001000bf56c();
  *(undefined8 *)(unaff_x20 + _DAT_113012fc0) = uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar2;
}



/* Entry: 103e1b01c; end: 103e1b07b; -[DpaLensGrapheneLoggerServices init] */

void FUN_103e1b01c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("DpaLensGrapheneLoggerServices.DpaLensGrapheneLoggerServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e1b048);
  (*pcVar1)();
}



/* Entry: 103e1b07c; end: 103e1b18f; -[DpaLensGrapheneLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1b07c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113012fb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113012fc0));
  return;
}


