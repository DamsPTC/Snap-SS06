/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100077400; end: 10007743b; -[SelectFriendIntent init] */

void FUN_100077400(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001000773e0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000c1bf0);
  return;
}



/* Entry: 10007743c; end: 100077447; -[SelectFriendIntent initWithCoder:] */

undefined1 * FUN_10007743c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  (*(code *)0x1000773e0)();
  puVar1 = PTR_s_initWithCoder__1000c1c20;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 100077448; end: 1000774c7;  */

undefined1 * FUN_100077448(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  (*param_4)();
  puVar1 = PTR_s_initWithCoder__1000c1c20;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 1000774c8; end: 1000774eb;  */

void FUN_1000774c8(void)

{
  (*(code *)0x1000773e0)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000c1878);
  return;
}



/* Entry: 1000774ec; end: 100077557;  */

void FUN_1000774ec(void)

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



/* Entry: 100077558; end: 10007755b;  */

void FUN_100077558(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10007755c; end: 1000775c7;  */

void FUN_10007755c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1000775c8; end: 1000775d3;  */

void FUN_1000775c8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1000775d4; end: 100077657; -[SelectFriendIntentResponse code] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1000775d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1000c7ca0;
  _swift_beginAccess(param_1 + _DAT_1000c7ca0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 100077658; end: 1000776a7; -[SelectFriendIntentResponse setCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100077658(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1000c7ca0;
  _swift_beginAccess(param_1 + _DAT_1000c7ca0,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1000776a8; end: 100077737; -[SelectFriendIntentResponse initWithCode:userActivity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1000776a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_4);
  func_0x000100086bc0();
  lVar1 = _DAT_1000c7ca0;
  _swift_beginAccess(param_1 + _DAT_1000c7ca0,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_1);
  func_0x0001000874c0();
  _objc_release(param_1);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 100077738; end: 10007777f; -[SelectFriendIntentResponse init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100077738(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_1000c7ca0) = 0;
  lVar1 = param_1;
  FUN_100077858();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1000c1bf0);
  return;
}



/* Entry: 100077780; end: 10007780b; -[SelectFriendIntentResponse initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100077780(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  *(undefined8 *)(param_1 + _DAT_1000c7ca0) = 0;
  lVar2 = param_1;
  FUN_100077858();
  puVar1 = PTR_s_initWithCoder__1000c1c20;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (plVar3 != (long *)0x0) {
    _objc_release(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 10007780c; end: 100077817;  */

void FUN_10007780c(void)

{
  FUN_100077858();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000c1878);
  return;
}



/* Entry: 100077818; end: 100077847;  */

void FUN_100077818(code *param_1)

{
  (*param_1)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000c1878);
  return;
}



/* Entry: 100077848; end: 100077857;  */

undefined1  [16] FUN_100077848(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  auVar2[8] = 6 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 100077858; end: 100077877;  */

void FUN_100077858(void)

{
  _objc_opt_self(&PTR_PTR_1000c2da8);
  return;
}



/* Entry: 100077878; end: 10007787b;  */

void FUN_100077878(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008e0f0;
  _swift_getWitnessTable(&UNK_10008e0f0,&UNK_1000b6b10);
  puRam00000001000c7ca8 = puVar1;
  return;
}



/* Entry: 10007787c; end: 1000778bb;  */

void FUN_10007787c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008e0f0;
  _swift_getWitnessTable(&UNK_10008e0f0,&UNK_1000b6b10);
  puRam00000001000c7ca8 = puVar1;
  return;
}



/* Entry: 1000778bc; end: 1000778bf;  */

void FUN_1000778bc(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7cb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008e190;
  _swift_getWitnessTable(&UNK_10008e190,&UNK_1000b6b30);
  puRam00000001000c7cb0 = puVar1;
  return;
}



/* Entry: 1000778c0; end: 1000778ff;  */

void FUN_1000778c0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7cb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008e190;
  _swift_getWitnessTable(&UNK_10008e190,&UNK_1000b6b30);
  puRam00000001000c7cb0 = puVar1;
  return;
}



/* Entry: 100077900; end: 100077947;  */

undefined1  [16] FUN_100077900(void)

{
  return ZEXT816(0x1000b6b10);
}



/* Entry: 100077948; end: 100077bb3;  */

void FUN_100077948(undefined8 *param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_1b0 [72];
  undefined1 *puStack_168;
  undefined8 uStack_160;
  undefined2 uStack_158;
  undefined6 uStack_156;
  undefined2 uStack_150;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined2 uStack_138;
  undefined6 uStack_136;
  undefined2 uStack_130;
  undefined6 uStack_12e;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
  undefined8 uStack_10e;
  undefined8 uStack_106;
  undefined8 uStack_fe;
  undefined8 uStack_f6;
  undefined8 uStack_ee;
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined2 uStack_a8;
  undefined6 uStack_a6;
  undefined1 auStack_a0 [48];
  
  lVar2 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar8 + 0x40));
  puVar4 = auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar7 = 0xd00000000000001d;
  pcVar1 = "definition.swift.swift";
  if (param_3 != '\x01') {
    uVar7 = 0xd000000000000015;
    pcVar1 = "exclamationmark.triangle.fill";
  }
  __s7SwiftUI5ImageV10systemNameACSS_tcfC(uVar7,(ulong)pcVar1 | 0x8000000000000000);
  (**(code **)(lVar8 + 0x68))
            (puVar4,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar2);
  puVar3 = puVar4;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar4,uVar7);
  _swift_release(uVar7);
  (**(code **)(lVar8 + 8))(puVar4,lVar2);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (auStack_a0,param_2,0,param_2,0,puVar4,lVar2);
  uStack_c8 = (undefined2)auStack_a0._8_8_;
  uStack_c6 = SUB86(auStack_a0._8_8_,2);
  uStack_d0 = (undefined2)auStack_a0._0_8_;
  uStack_ce = SUB86(auStack_a0._0_8_,2);
  uStack_b8 = (undefined2)auStack_a0._24_8_;
  uStack_b6 = SUB86(auStack_a0._24_8_,2);
  uStack_c0 = (undefined2)auStack_a0._16_8_;
  uStack_be = SUB86(auStack_a0._16_8_,2);
  uStack_a8 = (undefined2)auStack_a0._40_8_;
  uStack_a6 = SUB86(auStack_a0._40_8_,2);
  uStack_b0 = (undefined2)auStack_a0._32_8_;
  uStack_ae = SUB86(auStack_a0._32_8_,2);
  if (param_3 == '\x01') {
    if (lRam00000001000c7d98 != -1) {
      _swift_once(0x1000c7d98,0x1000782c0);
    }
    puVar6 = (undefined8 *)0x1000d0fb8;
  }
  else {
    if (lRam00000001000c7d90 != -1) {
      _swift_once(0x1000c7d90,0x100078288);
    }
    puVar6 = (undefined8 *)0x1000d0fb0;
  }
  uVar7 = *puVar6;
  _swift_retain(uVar7);
  uStack_160 = 0;
  uStack_158 = 1;
  uStack_14e = uStack_ce;
  uStack_148 = uStack_c8;
  uStack_156 = uStack_d6;
  uStack_150 = uStack_d0;
  uStack_13e = uStack_be;
  uStack_138 = uStack_b8;
  uStack_146 = uStack_c6;
  uStack_140 = uStack_c0;
  uStack_12e = uStack_ae;
  uStack_136 = uStack_b6;
  uStack_130 = uStack_b0;
  uStack_128 = uStack_a8;
  uStack_126 = uStack_a6;
  puVar5 = &UNK_10008e300;
  puStack_168 = puVar3;
  _swift_getKeyPath();
  param_1[5] = CONCAT62(uStack_13e,uStack_140);
  param_1[4] = CONCAT62(uStack_146,uStack_148);
  param_1[7] = CONCAT62(uStack_12e,uStack_130);
  param_1[6] = CONCAT62(uStack_136,uStack_138);
  param_1[1] = uStack_160;
  *param_1 = puStack_168;
  param_1[3] = CONCAT62(uStack_14e,uStack_150);
  param_1[2] = CONCAT62(uStack_156,uStack_158);
  param_1[8] = CONCAT62(uStack_126,uStack_128);
  param_1[9] = puVar5;
  param_1[10] = uVar7;
  uStack_118 = 0;
  uStack_110 = 1;
  uStack_106 = CONCAT26(uStack_c8,uStack_ce);
  uStack_10e = CONCAT26(uStack_d0,uStack_d6);
  uStack_f6 = CONCAT26(uStack_b8,uStack_be);
  uStack_fe = CONCAT26(uStack_c0,uStack_c6);
  uStack_ee = CONCAT26(uStack_b0,uStack_b6);
  uStack_de = uStack_a6;
  uStack_e6 = uStack_ae;
  uStack_e0 = uStack_a8;
  puStack_120 = puVar3;
  func_0x000100077c04(&puStack_168,auStack_1b0);
  func_0x000100077c54(&puStack_120);
  return;
}



/* Entry: 100077bb4; end: 100077c9b;  */

void FUN_100077bb4(undefined8 *param_1,undefined8 param_2)

{
  __s7SwiftUI17EnvironmentValuesV15foregroundColorAA0F0VSgvg();
  *param_1 = param_2;
  return;
}



/* Entry: 100077c9c; end: 10007824f;  */

void FUN_100077c9c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = -0x2fffffffffffffdc;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010009ecd0);
  uVar3 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010009ed00);
  uVar4 = 0;
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  _SCLocalizedStringFromTable(lVar2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar5);
    lRam00000001000d0f40 = lVar2;
    uRam00000001000d0f48 = uVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100077d6c);
  (*pcVar1)();
}



/* Entry: 100078250; end: 1000782f7;  */

void FUN_100078250(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1000c20f8;
  _objc_opt_self();
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puRam00000001000d0fc0 = puVar1;
  return;
}



/* Entry: 1000782f8; end: 100078337;  */

void FUN_1000782f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  __s7SwiftUI5ColorV5whiteACvgZ();
  uVar1 = param_1;
  __s7SwiftUI5ColorV7opacityyACSdF(0x3fcc28f5c28f5c29);
  _swift_release(param_1);
  uRam00000001000d0fc8 = uVar1;
  return;
}



/* Entry: 100078338; end: 1000784a7;  */

undefined1  [16] FUN_100078338(byte param_1)

{
  undefined1 (*pauVar1) [16];
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      if (lRam00000001000c7d60 != -1) {
        _swift_once(0x1000c7d60,FUN_100077c9c);
      }
      pauVar1 = (undefined1 (*) [16])0x1000d0f40;
    }
    else if (param_1 == 1) {
      if (lRam00000001000c7d68 != -1) {
        _swift_once(0x1000c7d68,0x100077d6c);
      }
      pauVar1 = (undefined1 (*) [16])0x1000d0f50;
    }
    else {
      if (lRam00000001000c7d70 != -1) {
        _swift_once(0x1000c7d70,0x100077e3c);
      }
      pauVar1 = (undefined1 (*) [16])0x1000d0f60;
    }
  }
  else if (param_1 == 3) {
    if (lRam00000001000c7d78 != -1) {
      _swift_once(0x1000c7d78,0x100077f0c);
    }
    pauVar1 = (undefined1 (*) [16])0x1000d0f70;
  }
  else if (param_1 == 4) {
    if (lRam00000001000c7d80 != -1) {
      _swift_once(0x1000c7d80,0x100077fdc);
    }
    pauVar1 = (undefined1 (*) [16])0x1000d0f80;
  }
  else {
    if (lRam00000001000c7d58 != -1) {
      _swift_once(0x1000c7d58,0x10007817c);
    }
    pauVar1 = (undefined1 (*) [16])0x1000d0fa0;
  }
  return *pauVar1;
}



/* Entry: 1000784a8; end: 1000784d3;  */

long FUN_1000784a8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1000784d4; end: 1000784db;  */

void FUN_1000784d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1000784dc; end: 1000785a7;  */

undefined1 * FUN_1000784dc(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1000785a8; end: 100078667;  */

int FUN_1000785a8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100078668; end: 1000786ff;  */

void FUN_100078668(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  uVar1 = 0x1000c7dd0;
  func_0x0001000100d0(0x1000c7dd0,&UNK_10008e418);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(auStack_60);
  _swift_bridgeObjectRelease(uStack_48);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(auStack_80,uVar1);
  _swift_bridgeObjectRelease(uStack_68);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(auStack_a0,uVar1);
  *param_1 = auStack_60[0];
  *(undefined8 *)(param_1 + 8) = uStack_78;
  *(undefined8 *)(param_1 + 0x18) = uStack_88;
  *(undefined8 *)(param_1 + 0x10) = uStack_90;
  return;
}



/* Entry: 100078700; end: 1000789af;  */

void FUN_100078700(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  code *pcVar17;
  undefined8 auStack_c0 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x1000c7dd0;
  uStack_68 = param_1;
  func_0x0001000100d0(0x1000c7dd0,&UNK_10008e418);
  lVar13 = *(long *)(lVar1 + -8);
  lVar12 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  uVar16 = lVar12 + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)&uStack_80 - uVar16;
  pcVar11 = *(code **)(lVar13 + 0x10);
  (*pcVar11)(lVar14,param_2,lVar1);
  uVar15 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar10 = uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff);
  puVar2 = &UNK_1000b6ce8;
  _swift_allocObject(&UNK_1000b6ce8,uVar10 + lVar12,uVar15 | 7);
  pcVar17 = *(code **)(lVar13 + 0x20);
  puStack_70 = puVar2;
  (*pcVar17)(puVar2 + uVar10,lVar14,lVar1);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = lVar14 - uVar16;
  (*pcVar11)(lVar14,param_2,lVar1);
  puVar2 = &UNK_1000b6d10;
  _swift_allocObject(&UNK_1000b6d10,uVar10 + lVar12,uVar15 | 7);
  puStack_78 = puVar2;
  (*pcVar17)(puVar2 + uVar10,lVar14,lVar1);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = lVar14 - uVar16;
  (*pcVar11)(lVar14,param_2,lVar1);
  puVar2 = &UNK_1000b6d38;
  _swift_allocObject(&UNK_1000b6d38,uVar10 + lVar12,uVar15 | 7);
  (*pcVar17)(puVar2 + uVar10,lVar14,lVar1);
  uVar3 = 0x1000c7dd8;
  func_0x0001000100d0(0x1000c7dd8,&UNK_10008e420);
  uVar4 = 0x1000c7de0;
  uStack_80 = uVar3;
  func_0x0001000100d0(0x1000c7de0,&UNK_10008e428);
  uVar3 = 0x1000c7de8;
  func_0x0001000100d0(0x1000c7de8,&UNK_10008e430);
  uVar5 = 0x1000c7df0;
  func_0x0001000100d0(0x1000c7df0,&UNK_10008e6e0);
  uVar6 = 0x1000c7df8;
  FUN_10007b7dc(0x1000c7df8,0x1000c7dd8,&UNK_10008e420,
                PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000b0940);
  uVar7 = uVar6;
  func_0x00010007aa54();
  uVar8 = 0x1000c7e10;
  FUN_10007adbc(0x1000c7e10,0x1000c7de8,&UNK_10008e430,0x10007ac14);
  uVar9 = 0x1000c7e70;
  FUN_10007adbc(0x1000c7e70,0x1000c7df0,&UNK_10008e6e0,FUN_10007ae2c);
  *(undefined8 *)(lVar14 + -0x10) = uVar8;
  *(undefined8 *)(lVar14 + -8) = uVar9;
  *(undefined8 *)(lVar14 + -0x20) = uVar6;
  *(undefined8 *)(lVar14 + -0x18) = uVar7;
  *(undefined8 *)(lVar14 + -0x30) = uVar3;
  *(undefined8 *)(lVar14 + -0x28) = uVar5;
  *(undefined8 *)(lVar14 + -0x38) = uVar4;
  *(undefined8 *)(lVar14 + -0x40) = uStack_80;
  __s9WidgetKit13DynamicIslandV8expanded14compactLeading0F8Trailing7minimalAcA0cD15ExpandedContentVyxGyc_q_ycq0_ycq1_yctc7SwiftUI4ViewRzAkLR_AkLR0_AkLR1_r2_lufC
            (uStack_68,FUN_10007a918,puStack_70,FUN_100078fbc,0,0x10007a960,puStack_78,0x10007aa0c,
             puVar2);
  return;
}



/* Entry: 1000789b0; end: 1000789b3;  */

void FUN_1000789b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  code *pcVar17;
  undefined8 auStack_c0 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x1000c7dd0;
  uStack_68 = param_1;
  func_0x0001000100d0(0x1000c7dd0,&UNK_10008e418);
  lVar13 = *(long *)(lVar1 + -8);
  lVar12 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  uVar16 = lVar12 + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)&uStack_80 - uVar16;
  pcVar11 = *(code **)(lVar13 + 0x10);
  (*pcVar11)(lVar14,param_2,lVar1);
  uVar15 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar10 = uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff);
  puVar2 = &UNK_1000b6ce8;
  _swift_allocObject(&UNK_1000b6ce8,uVar10 + lVar12,uVar15 | 7);
  pcVar17 = *(code **)(lVar13 + 0x20);
  puStack_70 = puVar2;
  (*pcVar17)(puVar2 + uVar10,lVar14,lVar1);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = lVar14 - uVar16;
  (*pcVar11)(lVar14,param_2,lVar1);
  puVar2 = &UNK_1000b6d10;
  _swift_allocObject(&UNK_1000b6d10,uVar10 + lVar12,uVar15 | 7);
  puStack_78 = puVar2;
  (*pcVar17)(puVar2 + uVar10,lVar14,lVar1);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = lVar14 - uVar16;
  (*pcVar11)(lVar14,param_2,lVar1);
  puVar2 = &UNK_1000b6d38;
  _swift_allocObject(&UNK_1000b6d38,uVar10 + lVar12,uVar15 | 7);
  (*pcVar17)(puVar2 + uVar10,lVar14,lVar1);
  uVar3 = 0x1000c7dd8;
  func_0x0001000100d0(0x1000c7dd8,&UNK_10008e420);
  uVar4 = 0x1000c7de0;
  uStack_80 = uVar3;
  func_0x0001000100d0(0x1000c7de0,&UNK_10008e428);
  uVar3 = 0x1000c7de8;
  func_0x0001000100d0(0x1000c7de8,&UNK_10008e430);
  uVar5 = 0x1000c7df0;
  func_0x0001000100d0(0x1000c7df0,&UNK_10008e6e0);
  uVar6 = 0x1000c7df8;
  FUN_10007b7dc(0x1000c7df8,0x1000c7dd8,&UNK_10008e420,
                PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000b0940);
  uVar7 = uVar6;
  func_0x00010007aa54();
  uVar8 = 0x1000c7e10;
  FUN_10007adbc(0x1000c7e10,0x1000c7de8,&UNK_10008e430,0x10007ac14);
  uVar9 = 0x1000c7e70;
  FUN_10007adbc(0x1000c7e70,0x1000c7df0,&UNK_10008e6e0,FUN_10007ae2c);
  *(undefined8 *)(lVar14 + -0x10) = uVar8;
  *(undefined8 *)(lVar14 + -8) = uVar9;
  *(undefined8 *)(lVar14 + -0x20) = uVar6;
  *(undefined8 *)(lVar14 + -0x18) = uVar7;
  *(undefined8 *)(lVar14 + -0x30) = uVar3;
  *(undefined8 *)(lVar14 + -0x28) = uVar5;
  *(undefined8 *)(lVar14 + -0x38) = uVar4;
  *(undefined8 *)(lVar14 + -0x40) = uStack_80;
  __s9WidgetKit13DynamicIslandV8expanded14compactLeading0F8Trailing7minimalAcA0cD15ExpandedContentVyxGyc_q_ycq0_ycq1_yctc7SwiftUI4ViewRzAkLR_AkLR0_AkLR1_r2_lufC
            (uStack_68,FUN_10007a918,puStack_70,FUN_100078fbc,0,0x10007a960,puStack_78,0x10007aa0c,
             puVar2);
  return;
}



/* Entry: 1000789b4; end: 100078a33;  */

void FUN_1000789b4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ea78;
  _swift_getWitnessTable(&UNK_10008ea78,&UNK_1000b70c8);
  puRam00000001000c7db0 = puVar1;
  return;
}



/* Entry: 100078a34; end: 100078a43;  */

void FUN_100078a34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_1000914a4,1);
  return;
}



/* Entry: 100078a44; end: 100078aeb;  */

void FUN_100078a44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  uVar1 = 0x1000c7dd0;
  func_0x0001000100d0(0x1000c7dd0,&UNK_10008e418);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(auStack_60);
  _swift_bridgeObjectRelease(uStack_48);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(auStack_80,uVar1);
  _swift_bridgeObjectRelease(uStack_68);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(auStack_a0,uVar1);
  FUN_100078aec(param_1,uStack_78,auStack_60[0],uStack_90,uStack_88);
  _swift_bridgeObjectRelease(uStack_88);
  return;
}



/* Entry: 100078aec; end: 100078fbb;  */

void FUN_100078aec(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar2 = 0x1000c7e88;
  uStack_e0 = param_1;
  func_0x0001000100d0(0x1000c7e88,&UNK_10008e478);
  lStack_d8 = *(long *)(lVar2 + -8);
  lStack_d0 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_d8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar6 = (long)&lStack_120 - extraout_x8;
  lVar2 = 0;
  lStack_c8 = lVar6;
  __s9WidgetKit35DynamicIslandExpandedRegionPositionVMa();
  lVar2 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  uVar10 = lVar2 + 0xfU & 0xfffffffffffffff0;
  lVar8 = lVar6 - uVar10;
  __s9WidgetKit35DynamicIslandExpandedRegionPositionV7leadingACvgZ(lVar8);
  uVar3 = 0x1000c7e90;
  lStack_98 = param_2;
  uStack_90 = param_4;
  uStack_88 = param_5;
  lStack_a0._0_1_ = param_3;
  func_0x0001000100d0(0x1000c7e90,&UNK_10008e480);
  uVar4 = 0x1000c7e98;
  uStack_108 = uVar3;
  FUN_10007afa0(0x1000c7e98,0x1000c7e90,&UNK_10008e480,FUN_10007aeb4);
  uStack_110 = uVar4;
  __s9WidgetKit27DynamicIslandExpandedRegionV_8priority7contentACyxGAA0cdeF8PositionV_SdxyXEtcfC
            (lVar6,0,lVar8,FUN_10007aea4,auStack_b0,uVar3,uVar4);
  lVar2 = 0x1000c7ec0;
  func_0x0001000100d0(0x1000c7ec0,&UNK_10008e498);
  lStack_f0 = *(long *)(lVar2 + -8);
  lStack_e8 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_f0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = lVar8 - extraout_x8_00;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar9 = lVar8 - uVar10;
  __s9WidgetKit35DynamicIslandExpandedRegionPositionV8trailingACvgZ(lVar9);
  uVar3 = 0x1000c7ec8;
  lStack_98 = param_2;
  uStack_90 = param_4;
  uStack_88 = param_5;
  lStack_a0._0_1_ = param_3;
  func_0x0001000100d0(0x1000c7ec8,&UNK_10008e4a0);
  uVar4 = 0x1000c7ed0;
  FUN_10007afa0(0x1000c7ed0,0x1000c7ec8,&UNK_10008e4a0,FUN_10007b010);
  __s9WidgetKit27DynamicIslandExpandedRegionV_8priority7contentACyxGAA0cdeF8PositionV_SdxyXEtcfC
            (lVar8,0,lVar9,FUN_10007af90,auStack_b0,uVar3,uVar4);
  lVar2 = 0x1000c7f18;
  func_0x0001000100d0(0x1000c7f18,&UNK_10008e4c8);
  lStack_100 = *(long *)(lVar2 + -8);
  lStack_f8 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(lStack_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_01;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar6 = lVar9 - uVar10;
  __s9WidgetKit35DynamicIslandExpandedRegionPositionV6centerACvgZ(lVar6);
  lStack_a0 = CONCAT71(lStack_a0._1_7_,param_3);
  uVar3 = 0x1000c7f20;
  lStack_98 = param_2;
  uStack_90 = param_4;
  uStack_88 = param_5;
  func_0x0001000100d0(0x1000c7f20,&UNK_10008e4d0);
  uVar4 = uVar3;
  FUN_10007b1a8();
  __s9WidgetKit27DynamicIslandExpandedRegionV_8priority7contentACyxGAA0cdeF8PositionV_SdxyXEtcfC
            (lVar9,0,lVar6,FUN_10007b198,auStack_b0,uVar3,uVar4);
  lVar2 = 0x1000c7f70;
  func_0x0001000100d0(0x1000c7f70,&UNK_10008e4f8);
  lStack_120 = *(long *)(lVar2 + -8);
  lStack_118 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(lStack_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar6 - extraout_x8_02;
  lStack_a0 = lStack_c8;
  uVar3 = 0x1000c7f78;
  func_0x0001000100d0(0x1000c7f78,&UNK_10008e500);
  uStack_c0 = uStack_108;
  uStack_b8 = uStack_110;
  puVar5 = &uStack_c0;
  _swift_getOpaqueTypeConformance
            (puVar5,
             PTR___s9WidgetKit27DynamicIslandExpandedRegionV19_viewRepresentationQrvpQOMQ_1000b0b70,
             1);
  __s9WidgetKit28DynamicIslandExpandedContentV7contentACyxGxyXE_tcfC
            (lVar6,0x10007b3e8,auStack_b0,uVar3,puVar5);
  lVar2 = 0x1000c7f80;
  func_0x0001000100d0(0x1000c7f80,&UNK_10008e508);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar6 - extraout_x8_03;
  uVar3 = 0x1000c7f88;
  lStack_a0 = lVar6;
  lStack_98 = lVar8;
  func_0x0001000100d0(0x1000c7f88,&UNK_10008e510);
  puVar1 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000b0940;
  uVar4 = 0x1000c7f90;
  FUN_10007b7dc(0x1000c7f90,0x1000c7f88,&UNK_10008e510,
                PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000b0940);
  __s9WidgetKit28DynamicIslandExpandedContentV7contentACyxGxyXE_tcfC
            (lVar11,FUN_10007b7d4,auStack_b0,uVar3,uVar4);
  uVar3 = 0x1000c7dd8;
  lStack_a0 = lVar11;
  lStack_98 = lVar9;
  func_0x0001000100d0(0x1000c7dd8,&UNK_10008e420);
  uVar4 = 0x1000c7df8;
  FUN_10007b7dc(0x1000c7df8,0x1000c7dd8,&UNK_10008e420,puVar1);
  __s9WidgetKit28DynamicIslandExpandedContentV7contentACyxGxyXE_tcfC
            (uStack_e0,FUN_10007b820,auStack_b0,uVar3,uVar4);
  (**(code **)(lVar7 + 8))(lVar11,lVar2);
  (**(code **)(lStack_120 + 8))(lVar6,lStack_118);
  (**(code **)(lStack_100 + 8))(lVar9,lStack_f8);
  (**(code **)(lStack_f0 + 8))(lVar8,lStack_e8);
  (**(code **)(lStack_d8 + 8))(lStack_c8,lStack_d0);
  return;
}



/* Entry: 100078fbc; end: 100079043;  */

void FUN_100078fbc(undefined8 *param_1)

{
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
  
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_90,0,1,0,1,0x4049000000000000,0,0,1,0,1);
  param_1[9] = uStack_48;
  param_1[8] = uStack_50;
  param_1[0xb] = uStack_38;
  param_1[10] = uStack_40;
  param_1[0xd] = uStack_28;
  param_1[0xc] = uStack_30;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  return;
}



/* Entry: 100079044; end: 100079153;  */

void FUN_100079044(ulong *param_1)

{
  undefined1 auStack_230 [120];
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined7 uStack_150;
  undefined4 uStack_149;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined7 uStack_d8;
  undefined4 uStack_d1;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  func_0x0001000100d0(0x1000c7dd0,&UNK_10008e418);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_c0);
  FUN_100079154(&uStack_1b8,uStack_b8,uStack_c0 & 0xff,uStack_b0,uStack_a8);
  _swift_bridgeObjectRelease(uStack_a8);
  uStack_f8 = uStack_170;
  uStack_100 = uStack_178;
  uStack_e8 = uStack_160;
  uStack_f0 = uStack_168;
  uStack_d8 = uStack_150;
  uStack_e0 = uStack_158;
  uStack_d1 = uStack_149;
  uStack_138 = uStack_1b0;
  uStack_140 = uStack_1b8;
  uStack_128 = uStack_1a0;
  uStack_130 = uStack_1a8;
  uStack_118 = uStack_190;
  uStack_120 = uStack_198;
  uStack_108 = uStack_180;
  uStack_110 = uStack_188;
  uStack_68 = uStack_160;
  uStack_70 = uStack_168;
  uStack_60 = uStack_158;
  uStack_88 = uStack_180;
  uStack_90 = uStack_188;
  uStack_78 = uStack_170;
  uStack_80 = uStack_178;
  uStack_a8 = uStack_1a0;
  uStack_b0 = uStack_1a8;
  uStack_98 = uStack_190;
  uStack_a0 = uStack_198;
  uStack_b8 = uStack_1b0;
  uStack_c0 = uStack_1b8;
  FUN_10007b91c(&uStack_140,auStack_230,0x1000c7de8,&UNK_10008e430);
  func_0x00010007b964(&uStack_c0,0x1000c7de8,&UNK_10008e430);
  param_1[9] = uStack_f8;
  param_1[8] = uStack_100;
  param_1[0xb] = uStack_e8;
  param_1[10] = uStack_f0;
  param_1[0xd] = CONCAT17((undefined1)uStack_d1,uStack_d8);
  param_1[0xc] = uStack_e0;
  *(undefined4 *)((long)param_1 + 0x6f) = uStack_d1;
  param_1[1] = uStack_138;
  *param_1 = uStack_140;
  param_1[3] = uStack_128;
  param_1[2] = uStack_130;
  param_1[5] = uStack_118;
  param_1[4] = uStack_120;
  param_1[7] = uStack_108;
  param_1[6] = uStack_110;
  return;
}



/* Entry: 100079154; end: 10007967f;  */

void FUN_100079154(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_227;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined8 uStack_1a0;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined2 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 uStack_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined2 uStack_110;
  undefined1 uStack_10e;
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
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  
  uVar1 = (uint)param_6 & 0xff;
  if (uVar1 == 3) {
    uStack_8f = 0;
    uVar3 = 0x1000c7e50;
    func_0x0001000100d0(0x1000c7e50,&UNK_10008e460);
    uVar6 = uVar3;
    func_0x00010007ac8c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_200,&uStack_100,PTR___s7SwiftUI9EmptyViewVN_1000b0928,uVar3,
               PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_1000b0918,uVar6);
    uStack_140 = uStack_1c0;
    uStack_120 = uStack_1a0;
    uStack_110 = uStack_190;
    uStack_178 = uStack_1f8;
    uStack_180 = uStack_200;
    uStack_168 = uStack_1e8;
    uStack_170 = uStack_1f0;
    uStack_158 = uStack_1d8;
    uStack_160 = uStack_1e0;
    uStack_148 = uStack_1c8;
    uStack_150 = uStack_1d0;
LAB_100079554:
    uStack_10e = 1;
    uVar3 = 0x1000c7e20;
    func_0x0001000100d0(0x1000c7e20,&UNK_10008e440);
    uVar6 = 0x1000c7e40;
    func_0x0001000100d0(0x1000c7e40,&UNK_10008e458);
    uVar4 = uVar6;
    func_0x00010007ab0c();
    uVar5 = uVar4;
    func_0x00010007ac14();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_100,&uStack_180,uVar3,uVar6,uVar4,uVar5);
  }
  else {
    if (uVar1 == 5) {
      FUN_100077948(&uStack_100,0x4032000000000000,1);
      uStack_308 = uStack_d8;
      uStack_310 = uStack_e0;
      uStack_2f8 = uStack_c8;
      uStack_300 = uStack_d0;
      uStack_2e8 = uStack_b8;
      uStack_2f0 = uStack_c0;
      uStack_2e0 = uStack_b0;
      uStack_328 = uStack_f8;
      uStack_330 = uStack_100;
      uStack_318 = uStack_e8;
      uStack_320 = uStack_f0;
      uStack_280 = uStack_b0;
      uStack_2a8 = uStack_d8;
      uStack_2b0 = uStack_e0;
      uStack_298 = uStack_c8;
      uStack_2a0 = uStack_d0;
      uStack_288 = uStack_b8;
      uStack_290 = uStack_c0;
      uStack_2c8 = uStack_f8;
      uStack_2d0 = uStack_100;
      uStack_2b8 = uStack_e8;
      uStack_2c0 = uStack_f0;
      FUN_10007b91c(&uStack_330,&uStack_180,0x1000c7e30,&UNK_10008e6f0);
      func_0x00010007b964(&uStack_2d0,0x1000c7e30,&UNK_10008e6f0);
      uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
    }
    else {
      if (uVar1 != 4) {
        __s7SwiftUI9AlignmentV6centerACvgZ();
        uVar2 = 0;
        __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
                  (&uStack_e8,0x4032000000000000,0,0x4032000000000000,0,param_6,param_7);
        __s7SwiftUI4EdgeO3SetV7leadingAEvgZ();
        uVar6 = 0x4010000000000000;
        __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
        uStack_f8 = CONCAT71(uStack_f8._1_7_,1);
        uStack_f0 = 0x4004000000000000;
        uStack_b8 = CONCAT71(uStack_b8._1_7_,uVar2);
        uStack_98 = (undefined7)param_5;
        uStack_91 = (undefined1)((ulong)param_5 >> 0x38);
        uStack_90 = 0;
        uStack_8f = 1;
        uVar3 = 0x1000c7e50;
        uStack_100 = param_2;
        uStack_b0 = uVar6;
        uStack_a8 = param_3;
        uStack_a0 = param_4;
        func_0x0001000100d0(0x1000c7e50,&UNK_10008e460);
        uVar6 = uVar3;
        func_0x00010007ac8c();
        __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                  (&uStack_200,&uStack_100,PTR___s7SwiftUI9EmptyViewVN_1000b0928,uVar3,
                   PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_1000b0918,uVar6);
        uStack_140 = uStack_1c0;
        uStack_120 = uStack_1a0;
        uStack_110 = uStack_190;
        uStack_178 = uStack_1f8;
        uStack_180 = uStack_200;
        uStack_168 = uStack_1e8;
        uStack_170 = uStack_1f0;
        uStack_158 = uStack_1d8;
        uStack_160 = uStack_1e0;
        uStack_148 = uStack_1c8;
        uStack_150 = uStack_1d0;
        goto LAB_100079554;
      }
      FUN_100077948(&uStack_100,0x4032000000000000,0);
      uStack_308 = uStack_d8;
      uStack_310 = uStack_e0;
      uStack_2f8 = uStack_c8;
      uStack_300 = uStack_d0;
      uStack_2e8 = uStack_b8;
      uStack_2f0 = uStack_c0;
      uStack_2e0 = uStack_b0;
      uStack_328 = uStack_f8;
      uStack_330 = uStack_100;
      uStack_318 = uStack_e8;
      uStack_320 = uStack_f0;
      uStack_280 = uStack_b0;
      uStack_2a8 = uStack_d8;
      uStack_2b0 = uStack_e0;
      uStack_298 = uStack_c8;
      uStack_2a0 = uStack_d0;
      uStack_288 = uStack_b8;
      uStack_290 = uStack_c0;
      uStack_2c8 = uStack_f8;
      uStack_2d0 = uStack_100;
      uStack_2b8 = uStack_e8;
      uStack_2c0 = uStack_f0;
      FUN_10007b91c(&uStack_330,&uStack_180,0x1000c7e30,&UNK_10008e6f0);
      func_0x00010007b964(&uStack_2d0,0x1000c7e30,&UNK_10008e6f0);
      uStack_a8 = uStack_a8 & 0xffffffffffffff00;
    }
    uVar6 = 0x1000c7e30;
    uStack_100 = uStack_330;
    uStack_f8 = uStack_328;
    uStack_f0 = uStack_320;
    uStack_e8 = uStack_318;
    uStack_e0 = uStack_310;
    uStack_d8 = uStack_308;
    uStack_d0 = uStack_300;
    uStack_c8 = uStack_2f8;
    uStack_c0 = uStack_2f0;
    uStack_b8 = uStack_2e8;
    uStack_b0 = uStack_2e0;
    FUN_10007b91c(&uStack_330,&uStack_180,0x1000c7e30,&UNK_10008e6f0);
    FUN_10007b91c(&uStack_330,&uStack_180,0x1000c7e30,&UNK_10008e6f0);
    func_0x0001000100d0(0x1000c7e30,&UNK_10008e6f0);
    uVar3 = uVar6;
    func_0x00010007ab7c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_278,&uStack_100,uVar6,uVar6,uVar3,uVar3);
    uStack_1d8 = uStack_250;
    uStack_1e0 = uStack_258;
    uStack_1c8 = uStack_240;
    uStack_1d0 = uStack_248;
    uStack_1c0 = uStack_238;
    uStack_1af = (undefined7)uStack_227;
    uStack_1a8 = (undefined1)((ulong)uStack_227 >> 0x38);
    uStack_1f8 = uStack_270;
    uStack_200 = uStack_278;
    uStack_1e8 = uStack_260;
    uStack_1f0 = uStack_268;
    uStack_158 = uStack_250;
    uStack_160 = uStack_258;
    uStack_148 = uStack_240;
    uStack_150 = uStack_248;
    uStack_140 = uStack_238;
    uStack_178 = uStack_270;
    uStack_180 = uStack_278;
    uStack_168 = uStack_260;
    uStack_170 = uStack_268;
    uStack_10e = 0;
    uVar3 = 0x1000c7e20;
    uStack_12f = uStack_1af;
    uStack_128 = uStack_1a8;
    FUN_10007b91c(&uStack_200,&uStack_100,0x1000c7e20,&UNK_10008e440);
    func_0x0001000100d0(0x1000c7e20,&UNK_10008e440);
    uVar6 = 0x1000c7e40;
    func_0x0001000100d0(0x1000c7e40,&UNK_10008e458);
    uVar4 = uVar6;
    func_0x00010007ab0c();
    uVar5 = uVar4;
    func_0x00010007ac14();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_100,&uStack_180,uVar3,uVar6,uVar4,uVar5);
    func_0x00010007b964(&uStack_330,0x1000c7e30,&UNK_10008e6f0);
    func_0x00010007b964(&uStack_330,0x1000c7e30,&UNK_10008e6f0);
    func_0x00010007b964(&uStack_278,0x1000c7e20,&UNK_10008e440);
  }
  uStack_1b8 = (undefined1)uStack_b8;
  uStack_1b7 = (undefined7)((ulong)uStack_b8 >> 8);
  uStack_1c0 = uStack_c0;
  uStack_1a8 = (undefined1)uStack_a8;
  uStack_1a7 = (undefined7)(uStack_a8 >> 8);
  uStack_1b0 = (undefined1)uStack_b0;
  uStack_1af = (undefined7)((ulong)uStack_b0 >> 8);
  uStack_198 = uStack_98;
  uStack_1a0 = uStack_a0;
  uStack_1f8 = uStack_f8;
  uStack_200 = uStack_100;
  uStack_1e8 = uStack_e8;
  uStack_1f0 = uStack_f0;
  uStack_1d8 = uStack_d8;
  uStack_1e0 = uStack_e0;
  uStack_1c8 = uStack_c8;
  uStack_1d0 = uStack_d0;
  param_1[5] = uStack_d8;
  param_1[4] = uStack_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[1] = uStack_f8;
  *param_1 = uStack_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  *(uint *)((long)param_1 + 0x6f) =
       CONCAT13(uStack_8e,CONCAT12(uStack_8f,CONCAT11(uStack_90,uStack_91)));
  param_1[0xd] = CONCAT17(uStack_91,uStack_98);
  param_1[0xc] = uStack_a0;
  param_1[9] = uStack_b8;
  param_1[8] = uStack_c0;
  param_1[0xb] = uStack_a8;
  param_1[10] = uStack_b0;
  uStack_158 = uStack_d8;
  uStack_160 = uStack_e0;
  uStack_148 = uStack_c8;
  uStack_150 = uStack_d0;
  uStack_191 = uStack_91;
  uStack_190 = (undefined2)(CONCAT12(uStack_8f,CONCAT11(uStack_90,uStack_91)) >> 8);
  uStack_178 = uStack_f8;
  uStack_180 = uStack_100;
  uStack_168 = uStack_e8;
  uStack_170 = uStack_f0;
  uStack_110 = (undefined2)(CONCAT12(uStack_8f,CONCAT11(uStack_90,uStack_91)) >> 8);
  uStack_118 = uStack_98;
  uStack_111 = uStack_91;
  uStack_120 = uStack_a0;
  uStack_140 = uStack_c0;
  uStack_138 = uStack_1b8;
  uStack_137 = uStack_1b7;
  uStack_130 = uStack_1b0;
  uStack_12f = uStack_1af;
  uStack_128 = uStack_1a8;
  uStack_127 = uStack_1a7;
  FUN_10007b91c(&uStack_200,&uStack_278,0x1000c7de8,&UNK_10008e430);
  func_0x00010007b964(&uStack_180,0x1000c7de8,&UNK_10008e430);
  return;
}



/* Entry: 100079680; end: 10007977b;  */

void FUN_100079680(ulong *param_1)

{
  undefined1 auStack_1c0 [96];
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined8 uStack_10e;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined8 uStack_ae;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_4e;
  
  func_0x0001000100d0(0x1000c7dd0,&UNK_10008e418);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_a0);
  FUN_10007977c(&uStack_160,uStack_98,uStack_a0 & 0xff,uStack_90,uStack_88);
  _swift_bridgeObjectRelease(uStack_88);
  uStack_d8 = uStack_138;
  uStack_e0 = uStack_140;
  uStack_c8 = uStack_128;
  uStack_d0 = uStack_130;
  uStack_b8 = uStack_118;
  uStack_c0 = uStack_120;
  uStack_ae = uStack_10e;
  uStack_b6 = uStack_116;
  uStack_b0 = uStack_110;
  uStack_f8 = uStack_158;
  uStack_100 = uStack_160;
  uStack_e8 = uStack_148;
  uStack_f0 = uStack_150;
  uStack_78 = uStack_138;
  uStack_80 = uStack_140;
  uStack_68 = uStack_128;
  uStack_70 = uStack_130;
  uStack_60 = uStack_120;
  uStack_4e = uStack_10e;
  uStack_98 = uStack_158;
  uStack_a0 = uStack_160;
  uStack_88 = uStack_148;
  uStack_90 = uStack_150;
  FUN_10007b91c(&uStack_100,auStack_1c0,0x1000c7df0,&UNK_10008e6e0);
  func_0x00010007b964(&uStack_a0,0x1000c7df0,&UNK_10008e6e0);
  param_1[5] = uStack_d8;
  param_1[4] = uStack_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[9] = CONCAT62(uStack_b6,uStack_b8);
  param_1[8] = uStack_c0;
  *(undefined8 *)((long)param_1 + 0x52) = uStack_ae;
  *(ulong *)((long)param_1 + 0x4a) = CONCAT26(uStack_b0,uStack_b6);
  param_1[1] = uStack_f8;
  *param_1 = uStack_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Entry: 10007977c; end: 100079c3b;  */

void FUN_10007977c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined7 uStack_1b7;
  undefined8 uStack_1af;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined1 uStack_157;
  undefined6 uStack_156;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined7 uStack_14e;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined6 uStack_f6;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined7 uStack_ee;
  undefined1 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined1 uStack_87;
  
  uVar1 = (uint)param_3 & 0xff;
  if (uVar1 == 3) {
    uStack_98 = 0;
    uVar2 = 0x1000c7e60;
    func_0x0001000100d0(0x1000c7e60,&UNK_10008e468);
    uVar3 = uVar2;
    func_0x00010007ad04();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_1a0,&uStack_e0,PTR___s7SwiftUI9EmptyViewVN_1000b0928,uVar2,
               PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_1000b0918,uVar3);
    uStack_118 = uStack_178;
    uStack_120 = uStack_180;
    uStack_110 = uStack_170;
    uStack_138 = uStack_198;
    uStack_140 = uStack_1a0;
    uStack_128 = uStack_188;
    uStack_130 = uStack_190;
LAB_100079b3c:
    uStack_e7 = 1;
    uVar2 = 0x1000c7e20;
    func_0x0001000100d0(0x1000c7e20,&UNK_10008e440);
    uVar3 = 0x1000c7e80;
    func_0x0001000100d0(0x1000c7e80,&UNK_10008e470);
    uVar4 = uVar3;
    func_0x00010007ab0c();
    uVar5 = uVar4;
    FUN_10007ae2c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_e0,&uStack_140,uVar2,uVar3,uVar4,uVar5);
  }
  else {
    if (uVar1 == 5) {
      FUN_100077948(&uStack_e0,0x4030000000000000,1);
      uStack_298 = uStack_b8;
      uStack_2a0 = uStack_c0;
      uStack_288 = uStack_a8;
      uStack_290 = uStack_b0;
      uStack_278 = CONCAT62(uStack_96,CONCAT11(uStack_97,uStack_98));
      uStack_280 = uStack_a0;
      uStack_270 = uStack_90;
      uStack_26e = uStack_8e;
      uStack_2b8 = uStack_d8;
      uStack_2c0 = uStack_e0;
      uStack_2a8 = uStack_c8;
      uStack_2b0 = uStack_d0;
      uStack_238 = uStack_b8;
      uStack_240 = uStack_c0;
      uStack_228 = uStack_a8;
      uStack_230 = uStack_b0;
      uStack_220 = uStack_a0;
      uStack_258 = uStack_d8;
      uStack_260 = uStack_e0;
      uStack_248 = uStack_c8;
      uStack_250 = uStack_d0;
      FUN_10007b91c(&uStack_2c0,&uStack_140,0x1000c7e30,&UNK_10008e6f0);
      func_0x00010007b964(&uStack_260,0x1000c7e30,&UNK_10008e6f0);
      uStack_98 = (undefined1)uStack_278;
      uStack_97 = (undefined1)((ulong)uStack_278 >> 8);
      uStack_96 = (undefined6)((ulong)uStack_278 >> 0x10);
      uStack_90 = uStack_270;
      uStack_8e = uStack_26e;
      uStack_88 = 1;
    }
    else {
      if (uVar1 != 4) {
        __s7SwiftUI9AlignmentV6centerACvgZ();
        __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
                  (&uStack_c8,0x4030000000000000,0,0x4030000000000000,0,param_3,param_4);
        uStack_d8 = CONCAT71(uStack_d8._1_7_,1);
        uStack_d0 = 0x400c000000000000;
        uStack_98 = 1;
        uVar2 = 0x1000c7e60;
        uStack_e0 = param_2;
        func_0x0001000100d0(0x1000c7e60,&UNK_10008e468);
        uVar3 = uVar2;
        func_0x00010007ad04();
        __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                  (&uStack_1a0,&uStack_e0,PTR___s7SwiftUI9EmptyViewVN_1000b0928,uVar2,
                   PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_1000b0918,uVar3);
        uStack_118 = uStack_178;
        uStack_120 = uStack_180;
        uStack_110 = uStack_170;
        uStack_138 = uStack_198;
        uStack_140 = uStack_1a0;
        uStack_128 = uStack_188;
        uStack_130 = uStack_190;
        goto LAB_100079b3c;
      }
      FUN_100077948(&uStack_e0,0x4030000000000000,0);
      uStack_298 = uStack_b8;
      uStack_2a0 = uStack_c0;
      uStack_288 = uStack_a8;
      uStack_290 = uStack_b0;
      uStack_278 = CONCAT62(uStack_96,CONCAT11(uStack_97,uStack_98));
      uStack_280 = uStack_a0;
      uStack_270 = uStack_90;
      uStack_26e = uStack_8e;
      uStack_2b8 = uStack_d8;
      uStack_2c0 = uStack_e0;
      uStack_2a8 = uStack_c8;
      uStack_2b0 = uStack_d0;
      uStack_238 = uStack_b8;
      uStack_240 = uStack_c0;
      uStack_228 = uStack_a8;
      uStack_230 = uStack_b0;
      uStack_220 = uStack_a0;
      uStack_258 = uStack_d8;
      uStack_260 = uStack_e0;
      uStack_248 = uStack_c8;
      uStack_250 = uStack_d0;
      FUN_10007b91c(&uStack_2c0,&uStack_140,0x1000c7e30,&UNK_10008e6f0);
      func_0x00010007b964(&uStack_260,0x1000c7e30,&UNK_10008e6f0);
      uStack_98 = (undefined1)uStack_278;
      uStack_97 = (undefined1)((ulong)uStack_278 >> 8);
      uStack_96 = (undefined6)((ulong)uStack_278 >> 0x10);
      uStack_90 = uStack_270;
      uStack_8e = uStack_26e;
      uStack_88 = 0;
    }
    uVar3 = 0x1000c7e30;
    uStack_e0 = uStack_2c0;
    uStack_d8 = uStack_2b8;
    uStack_d0 = uStack_2b0;
    uStack_c8 = uStack_2a8;
    uStack_c0 = uStack_2a0;
    uStack_b8 = uStack_298;
    uStack_b0 = uStack_290;
    uStack_a8 = uStack_288;
    uStack_a0 = uStack_280;
    FUN_10007b91c(&uStack_2c0,&uStack_140,0x1000c7e30,&UNK_10008e6f0);
    FUN_10007b91c(&uStack_2c0,&uStack_140,0x1000c7e30,&UNK_10008e6f0);
    func_0x0001000100d0(0x1000c7e30,&UNK_10008e6f0);
    uVar2 = uVar3;
    func_0x00010007ab7c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_200,&uStack_e0,uVar3,uVar3,uVar2,uVar2);
    uStack_178 = uStack_1d8;
    uStack_180 = uStack_1e0;
    uStack_168 = (undefined1)uStack_1c8;
    uStack_167 = (undefined7)((ulong)uStack_1c8 >> 8);
    uStack_170 = uStack_1d0;
    uStack_160 = (undefined1)uStack_1c0;
    uStack_15f = (undefined7)((ulong)uStack_1c0 >> 8);
    uStack_14f = (undefined1)uStack_1af;
    uStack_14e = (undefined7)((ulong)uStack_1af >> 8);
    uStack_157 = (undefined1)uStack_1b7;
    uStack_156 = (undefined6)((uint7)uStack_1b7 >> 8);
    uStack_198 = uStack_1f8;
    uStack_1a0 = uStack_200;
    uStack_188 = uStack_1e8;
    uStack_190 = uStack_1f0;
    uStack_118 = uStack_1d8;
    uStack_120 = uStack_1e0;
    uStack_110 = uStack_1d0;
    uStack_138 = uStack_1f8;
    uStack_140 = uStack_200;
    uStack_128 = uStack_1e8;
    uStack_130 = uStack_1f0;
    uStack_e7 = 0;
    uVar2 = 0x1000c7e20;
    uStack_108 = uStack_168;
    uStack_107 = uStack_167;
    uStack_100 = uStack_160;
    uStack_ff = uStack_15f;
    uStack_f7 = uStack_157;
    uStack_f6 = uStack_156;
    uStack_ef = uStack_14f;
    uStack_ee = uStack_14e;
    FUN_10007b91c(&uStack_1a0,&uStack_e0,0x1000c7e20,&UNK_10008e440);
    func_0x0001000100d0(0x1000c7e20,&UNK_10008e440);
    uVar3 = 0x1000c7e80;
    func_0x0001000100d0(0x1000c7e80,&UNK_10008e470);
    uVar4 = uVar3;
    func_0x00010007ab0c();
    uVar5 = uVar4;
    FUN_10007ae2c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_e0,&uStack_140,uVar2,uVar3,uVar4,uVar5);
    func_0x00010007b964(&uStack_2c0,0x1000c7e30,&UNK_10008e6f0);
    func_0x00010007b964(&uStack_2c0,0x1000c7e30,&UNK_10008e6f0);
    func_0x00010007b964(&uStack_200,0x1000c7e20,&UNK_10008e440);
  }
  uStack_178 = uStack_b8;
  uStack_180 = uStack_c0;
  uStack_168 = (undefined1)uStack_a8;
  uStack_167 = (undefined7)((ulong)uStack_a8 >> 8);
  uStack_170 = uStack_b0;
  uStack_158 = uStack_98;
  uStack_157 = uStack_97;
  uStack_160 = (undefined1)uStack_a0;
  uStack_15f = (undefined7)((ulong)uStack_a0 >> 8);
  uStack_14e = CONCAT16(uStack_88,uStack_8e);
  uStack_156 = uStack_96;
  uStack_150 = (undefined1)uStack_90;
  uStack_14f = (undefined1)((ushort)uStack_90 >> 8);
  param_1[5] = uStack_b8;
  param_1[4] = uStack_c0;
  param_1[7] = uStack_a8;
  param_1[6] = uStack_b0;
  param_1[9] = CONCAT62(uStack_96,CONCAT11(uStack_97,uStack_98));
  param_1[8] = uStack_a0;
  *(ulong *)((long)param_1 + 0x52) = CONCAT17(uStack_87,uStack_14e);
  *(ulong *)((long)param_1 + 0x4a) = CONCAT26(uStack_90,uStack_96);
  uStack_198 = uStack_d8;
  uStack_1a0 = uStack_e0;
  uStack_188 = uStack_c8;
  uStack_190 = uStack_d0;
  param_1[1] = uStack_d8;
  *param_1 = uStack_e0;
  param_1[3] = uStack_c8;
  param_1[2] = uStack_d0;
  uStack_138 = uStack_d8;
  uStack_140 = uStack_e0;
  uStack_128 = uStack_c8;
  uStack_130 = uStack_d0;
  uStack_ee = CONCAT16(uStack_88,uStack_8e);
  uStack_110 = uStack_b0;
  uStack_f8 = uStack_98;
  uStack_f7 = uStack_97;
  uStack_f6 = uStack_96;
  uStack_118 = uStack_b8;
  uStack_120 = uStack_c0;
  uStack_108 = uStack_168;
  uStack_107 = uStack_167;
  uStack_100 = uStack_160;
  uStack_ff = uStack_15f;
  uStack_f0 = uStack_150;
  uStack_ef = uStack_14f;
  FUN_10007b91c(&uStack_1a0,&uStack_200,0x1000c7df0,&UNK_10008e6e0);
  func_0x00010007b964(&uStack_140,0x1000c7df0,&UNK_10008e6e0);
  return;
}



/* Entry: 100079c3c; end: 100079cc3;  */

void FUN_100079c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRetain(param_4);
  uVar1 = 0x1000c7ea8;
  func_0x0001000100d0(0x1000c7ea8,&UNK_10008e488);
  uVar2 = uVar1;
  FUN_10007aeb4();
  __s7SwiftUI4ViewPAAE19accessibilityHiddenyAA15ModifiedContentVyxAA31AccessibilityAttachmentModifierVGSbF
            (param_1,1,uVar1,uVar2);
  _swift_bridgeObjectRelease(param_4);
  return;
}



/* Entry: 100079cc4; end: 100079ecb;  */

void FUN_100079cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_3e0 [144];
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
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
  undefined8 uStack_260;
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
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010007a334(&uStack_2c0);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_1f8 = uStack_298;
  uStack_200 = uStack_2a0;
  uStack_1e8 = uStack_288;
  uStack_1f0 = uStack_290;
  uStack_1e0 = uStack_280;
  uStack_218 = uStack_2b8;
  uStack_220 = uStack_2c0;
  uStack_208 = uStack_2a8;
  uStack_210 = uStack_2b0;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_2f0,0x4034000000000000,0,0x4034000000000000,0,param_2,param_3);
  uStack_328 = uStack_1f8;
  uStack_330 = uStack_200;
  uStack_318 = uStack_1e8;
  uStack_320 = uStack_1f0;
  uStack_310 = uStack_1e0;
  uStack_348 = uStack_218;
  uStack_350 = uStack_220;
  uStack_338 = uStack_208;
  uStack_340 = uStack_210;
  uStack_198 = uStack_298;
  uStack_1a0 = uStack_2a0;
  uStack_188 = uStack_288;
  uStack_190 = uStack_290;
  uStack_180 = uStack_280;
  uStack_1b8 = uStack_2b8;
  uStack_1c0 = uStack_2c0;
  uStack_1a8 = uStack_2a8;
  uStack_1b0 = uStack_2b0;
  FUN_10007b91c(&uStack_220,&uStack_d0,0x1000c7f00,&UNK_10008e4b8);
  func_0x00010007b964(&uStack_1c0,0x1000c7f00,&UNK_10008e4b8);
  uStack_f8 = uStack_2e8;
  uStack_100 = uStack_2f0;
  uStack_e8 = uStack_2d8;
  uStack_f0 = uStack_2e0;
  uStack_d8 = uStack_2c8;
  uStack_e0 = uStack_2d0;
  uStack_138 = uStack_328;
  uStack_140 = uStack_330;
  uStack_128 = uStack_318;
  uStack_130 = uStack_320;
  uStack_120 = uStack_310;
  uStack_158 = uStack_348;
  uStack_160 = uStack_350;
  uStack_148 = uStack_338;
  uStack_150 = uStack_340;
  uStack_258 = uStack_2e8;
  uStack_260 = uStack_2f0;
  uStack_248 = uStack_2d8;
  uStack_250 = uStack_2e0;
  uStack_238 = uStack_2c8;
  uStack_240 = uStack_2d0;
  uStack_228 = 0x4030000000000000;
  uStack_230 = 0;
  uStack_298 = uStack_328;
  uStack_2a0 = uStack_330;
  uStack_288 = uStack_318;
  uStack_290 = uStack_320;
  uStack_280 = uStack_310;
  uStack_2b8 = uStack_348;
  uStack_2c0 = uStack_350;
  uStack_2a8 = uStack_338;
  uStack_2b0 = uStack_340;
  uStack_68 = uStack_2e8;
  uStack_70 = uStack_2f0;
  uStack_58 = uStack_2d8;
  uStack_60 = uStack_2e0;
  uStack_48 = uStack_2c8;
  uStack_50 = uStack_2d0;
  uStack_a8 = uStack_328;
  uStack_b0 = uStack_330;
  uStack_98 = uStack_318;
  uStack_a0 = uStack_320;
  uStack_90 = uStack_310;
  uStack_c8 = uStack_348;
  uStack_d0 = uStack_350;
  uStack_b8 = uStack_338;
  uStack_c0 = uStack_340;
  FUN_10007b91c(&uStack_160,auStack_3e0,0x1000c7ef0,&UNK_10008e4b0);
  func_0x00010007b964(&uStack_d0,0x1000c7ef0,&UNK_10008e4b0);
  uVar1 = 0x1000c7ee0;
  func_0x0001000100d0(0x1000c7ee0,&UNK_10008e4a8);
  uVar2 = uVar1;
  FUN_10007b010();
  __s7SwiftUI4ViewPAAE19accessibilityHiddenyAA15ModifiedContentVyxAA31AccessibilityAttachmentModifierVGSbF
            (param_1,1,uVar1,uVar2);
  func_0x00010007b964(&uStack_2c0,0x1000c7ee0,&UNK_10008e4a8);
  return;
}



/* Entry: 100079ecc; end: 10007a83f;  */

void FUN_100079ecc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long extraout_x8;
  ulong uVar13;
  long lVar14;
  undefined8 uStack_590;
  undefined1 auStack_588 [8];
  undefined8 uStack_580;
  undefined1 auStack_578 [8];
  long alStack_570 [2];
  undefined8 uStack_560;
  undefined *puStack_558;
  undefined8 *puStack_550;
  undefined1 auStack_548 [200];
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  undefined *puStack_460;
  undefined8 uStack_458;
  undefined *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  ulong uStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
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
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  ulong uStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
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
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
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
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  ulong uStack_148;
  undefined *puStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  undefined1 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar1 = 0x1000c7fb8;
  puVar6 = &UNK_10008e660;
  puStack_550 = param_1;
  func_0x0001000100d0();
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar14 = (long)&uStack_560 + lVar1;
  FUN_100078338();
  uStack_230 = param_3;
  puStack_228 = puVar6;
  FUN_100010174();
  _swift_bridgeObjectRetain(puVar6);
  puVar2 = &uStack_230;
  puVar6 = PTR___sSSN_1000b1180;
  __s7SwiftUI4TextVyACxcSyRzlufC(puVar2,PTR___sSSN_1000b1180,param_3);
  __s7SwiftUI4FontV6WeightV6mediumAEvgZ();
  lVar3 = 0;
  __s7SwiftUI4FontV6DesignOMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar14,1,1,lVar3);
  __s7SwiftUI4FontV6system4size6weight6designAC12CoreGraphics7CGFloatV_AC6WeightVSgAC6DesignOSgtFZ
            (0x402e000000000000,param_2,0,lVar14);
  func_0x00010007b964(lVar14,0x1000c7fb8,&UNK_10008e660);
  uVar4 = param_2;
  puVar9 = puVar2;
  puVar7 = puVar6;
  uVar11 = param_3;
  __s7SwiftUI4TextV4fontyAcA4FontVSgF();
  puStack_558 = (undefined *)CONCAT44(puStack_558._4_4_,(int)puVar7);
  _swift_release(param_2);
  func_0x000100022a4c(puVar2,puVar6,param_3);
  _swift_bridgeObjectRelease();
  __s7SwiftUI5ColorV5whiteACvgZ();
  uVar13 = (ulong)puStack_558 & 0xffffffff;
  uVar5 = param_6;
  uVar10 = uVar4;
  puVar2 = puVar9;
  uVar12 = uVar13;
  __s7SwiftUI4TextV15foregroundColoryAcA0E0VSgF();
  uStack_560 = uVar10;
  _swift_release(param_6);
  func_0x000100022a4c(uVar4,puVar9,uVar13);
  _swift_bridgeObjectRelease(uVar11);
  puVar6 = &UNK_10008e540;
  _swift_getKeyPath();
  puVar7 = &UNK_10008e570;
  _swift_getKeyPath();
  uVar4 = uStack_560;
  uStack_158 = uStack_560;
  uStack_138 = 1;
  uStack_128 = 2;
  uStack_120 = 0;
  puVar8 = &UNK_10008e5a0;
  uStack_160 = uVar5;
  uStack_150 = (char)puVar2;
  uStack_148 = uVar12;
  puStack_140 = puVar6;
  puStack_130 = puVar7;
  _swift_getKeyPath();
  uStack_258 = CONCAT71(uStack_137,uStack_138);
  puStack_260 = puStack_140;
  uStack_248 = uStack_128;
  puStack_250 = puStack_130;
  uStack_240 = uStack_120;
  uStack_270 = CONCAT71(uStack_14f,uStack_150);
  uStack_278 = uStack_158;
  uStack_280 = uStack_160;
  uStack_268 = uStack_148;
  uStack_110 = uVar4;
  uStack_f0 = 1;
  uStack_e0 = 2;
  uStack_d8 = 0;
  uVar4 = 0x1000c7f48;
  puStack_558 = puVar8;
  uStack_118 = uVar5;
  uStack_108 = (char)puVar2;
  uStack_100 = uVar12;
  puStack_f8 = puVar6;
  puStack_e8 = puVar7;
  func_0x00010007b91c(&uStack_160,&uStack_230,0x1000c7f48,&UNK_10008e4e0);
  puVar2 = &uStack_118;
  func_0x00010007b964(puVar2,0x1000c7f48,&UNK_10008e4e0);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  puVar6 = puStack_558;
  uStack_a8 = uStack_258;
  puStack_b0 = puStack_260;
  uStack_98 = uStack_248;
  puStack_a0 = puStack_250;
  uStack_90 = CONCAT71(uStack_23f,uStack_240);
  uStack_c8 = uStack_278;
  uStack_d0 = uStack_280;
  uStack_b8 = uStack_268;
  uStack_c0 = uStack_270;
  puStack_88 = puStack_558;
  uStack_80 = 0x3fe999999999999a;
  *(undefined8 **)((long)alStack_570 + lVar1) = puVar2;
  *(undefined8 *)((long)alStack_570 + lVar1 + 8) = uVar4;
  auStack_578[lVar1] = 1;
  *(undefined8 *)((long)&uStack_580 + lVar1) = 0;
  auStack_588[lVar1] = 1;
  *(undefined8 *)((long)&uStack_590 + lVar1) = 0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_1d8,0,1,0,1,0x7ff0000000000000,0,0,1);
  uStack_208 = uStack_a8;
  puStack_210 = puStack_b0;
  uStack_1f8 = uStack_98;
  puStack_200 = puStack_a0;
  puStack_1e8 = puStack_88;
  uStack_1f0 = uStack_90;
  uStack_1e0 = uStack_80;
  puStack_228 = (undefined *)uStack_c8;
  uStack_230 = uStack_d0;
  uStack_218 = uStack_b8;
  uStack_220 = uStack_c0;
  uStack_458 = uStack_258;
  puStack_460 = puStack_260;
  uStack_448 = uStack_248;
  puStack_450 = puStack_250;
  uStack_440 = CONCAT71(uStack_23f,uStack_240);
  uStack_478 = uStack_278;
  uStack_480 = uStack_280;
  uStack_468 = uStack_268;
  uStack_470 = uStack_270;
  puStack_438 = puVar6;
  uStack_430 = 0x3fe999999999999a;
  func_0x00010007b91c(&uStack_d0,&uStack_350,0x1000c7f38,&UNK_10008e4d8);
  func_0x00010007b964(&uStack_480,0x1000c7f38,&UNK_10008e4d8);
  uStack_378 = uStack_188;
  uStack_380 = uStack_190;
  uStack_368 = uStack_178;
  uStack_370 = uStack_180;
  uStack_3b8 = uStack_1c8;
  uStack_3c0 = uStack_1d0;
  uStack_3a8 = uStack_1b8;
  uStack_3b0 = uStack_1c0;
  uStack_398 = uStack_1a8;
  uStack_3a0 = uStack_1b0;
  uStack_388 = uStack_198;
  uStack_390 = uStack_1a0;
  uStack_3f8 = uStack_208;
  puStack_400 = puStack_210;
  uStack_3e8 = uStack_1f8;
  puStack_3f0 = puStack_200;
  puStack_3d8 = puStack_1e8;
  uStack_3e0 = uStack_1f0;
  uStack_3c8 = uStack_1d8;
  uStack_3d0 = uStack_1e0;
  uStack_418 = puStack_228;
  uStack_420 = uStack_230;
  uStack_408 = uStack_218;
  uStack_410 = uStack_220;
  uStack_2a8 = uStack_188;
  uStack_2b0 = uStack_190;
  uStack_298 = uStack_178;
  uStack_2a0 = uStack_180;
  uStack_2e8 = uStack_1c8;
  uStack_2f0 = uStack_1d0;
  uStack_2d8 = uStack_1b8;
  uStack_2e0 = uStack_1c0;
  uStack_2c8 = uStack_1a8;
  uStack_2d0 = uStack_1b0;
  uStack_2b8 = uStack_198;
  uStack_2c0 = uStack_1a0;
  uStack_328 = uStack_208;
  puStack_330 = puStack_210;
  uStack_318 = uStack_1f8;
  puStack_320 = puStack_200;
  puStack_308 = puStack_1e8;
  uStack_310 = uStack_1f0;
  uStack_2f8 = uStack_1d8;
  uStack_300 = uStack_1e0;
  uStack_360 = uStack_170;
  uStack_290 = uStack_170;
  uStack_348 = puStack_228;
  uStack_350 = uStack_230;
  uStack_338 = uStack_218;
  uStack_340 = uStack_220;
  func_0x00010007b91c(&uStack_420,auStack_548,0x1000c7f20,&UNK_10008e4d0);
  func_0x00010007b964(&uStack_350,0x1000c7f20,&UNK_10008e4d0);
  puStack_550[0x15] = uStack_378;
  puStack_550[0x14] = uStack_380;
  puStack_550[0x17] = uStack_368;
  puStack_550[0x16] = uStack_370;
  puStack_550[0x18] = uStack_360;
  puStack_550[0xd] = uStack_3b8;
  puStack_550[0xc] = uStack_3c0;
  puStack_550[0xf] = uStack_3a8;
  puStack_550[0xe] = uStack_3b0;
  puStack_550[0x11] = uStack_398;
  puStack_550[0x10] = uStack_3a0;
  puStack_550[0x13] = uStack_388;
  puStack_550[0x12] = uStack_390;
  puStack_550[5] = uStack_3f8;
  puStack_550[4] = puStack_400;
  puStack_550[7] = uStack_3e8;
  puStack_550[6] = puStack_3f0;
  puStack_550[9] = puStack_3d8;
  puStack_550[8] = uStack_3e0;
  puStack_550[0xb] = uStack_3c8;
  puStack_550[10] = uStack_3d0;
  puStack_550[1] = uStack_418;
  *puStack_550 = uStack_420;
  puStack_550[3] = uStack_408;
  puStack_550[2] = uStack_410;
  return;
}



/* Entry: 10007a840; end: 10007a843;  */

void FUN_10007a840(void)

{
  return;
}



/* Entry: 10007a844; end: 10007a8af;  */

void FUN_10007a844(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1000789b4();
  uVar1 = param_2;
  func_0x0001000789f4();
  __s9WidgetKit21ActivityConfigurationV3for7content13dynamicIslandACyxGxm_qd__AA0C11ViewContextVyxGcAA07DynamicH0VAJctc7SwiftUI0I0Rd__lufC
            (param_1,&UNK_1000b70c8,FUN_100078668,0,0x10007b9c4,0,&UNK_1000b70c8,&UNK_1000b6e00,
             param_2,uVar1);
  return;
}



/* Entry: 10007a8b0; end: 10007a8c3;  */

undefined1  [16] FUN_10007a8b0(void)

{
  return ZEXT816(0x1000b6cc8);
}



/* Entry: 10007a8c4; end: 10007a913;  */

void FUN_10007a8c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c7dc0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7dc8;
  func_0x000100010120(0x1000c7dc8,&UNK_10008e410);
  puVar2 = PTR___s9WidgetKit21ActivityConfigurationVyxG7SwiftUI0aD0AAMc_1000b0b28;
  _swift_getWitnessTable
            (PTR___s9WidgetKit21ActivityConfigurationVyxG7SwiftUI0aD0AAMc_1000b0b28,uVar1);
  puRam00000001000c7dc0 = puVar2;
  return;
}



/* Entry: 10007a914; end: 10007a917;  */

void FUN_10007a914(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x1000c7dd0;
  func_0x0001000100d0(0x1000c7dd0,&UNK_10008e418);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10007a918; end: 10007a9a7;  */

void FUN_10007a918(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  func_0x0001000100d0(0x1000c7dd0,&UNK_10008e418);
  uVar1 = 0x1000c7dd0;
  func_0x0001000100d0(0x1000c7dd0,&UNK_10008e418);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(auStack_60);
  _swift_bridgeObjectRelease(uStack_48);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(auStack_80,uVar1);
  _swift_bridgeObjectRelease(uStack_68);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(auStack_a0,uVar1);
  FUN_100078aec(param_1,uStack_78,auStack_60[0],uStack_90,uStack_88);
  _swift_bridgeObjectRelease(uStack_88);
  return;
}



/* Entry: 10007a9a8; end: 10007aa0b;  */

void FUN_10007a9a8(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x1000c7dd0;
  func_0x0001000100d0(0x1000c7dd0,&UNK_10008e418);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10007aa0c; end: 10007aacb;  */

void FUN_10007aa0c(ulong *param_1)

{
  undefined1 auStack_1c0 [96];
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined8 uStack_10e;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined8 uStack_ae;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_4e;
  
  func_0x0001000100d0(0x1000c7dd0,&UNK_10008e418);
  func_0x0001000100d0(0x1000c7dd0,&UNK_10008e418);
  __s9WidgetKit19ActivityViewContextV5state12ContentStateQzvg(&uStack_a0);
  FUN_10007977c(&uStack_160,uStack_98,uStack_a0 & 0xff,uStack_90,uStack_88);
  _swift_bridgeObjectRelease(uStack_88);
  uStack_d8 = uStack_138;
  uStack_e0 = uStack_140;
  uStack_c8 = uStack_128;
  uStack_d0 = uStack_130;
  uStack_b8 = uStack_118;
  uStack_c0 = uStack_120;
  uStack_ae = uStack_10e;
  uStack_b6 = uStack_116;
  uStack_b0 = uStack_110;
  uStack_f8 = uStack_158;
  uStack_100 = uStack_160;
  uStack_e8 = uStack_148;
  uStack_f0 = uStack_150;
  uStack_78 = uStack_138;
  uStack_80 = uStack_140;
  uStack_68 = uStack_128;
  uStack_70 = uStack_130;
  uStack_60 = uStack_120;
  uStack_4e = uStack_10e;
  uStack_98 = uStack_158;
  uStack_a0 = uStack_160;
  uStack_88 = uStack_148;
  uStack_90 = uStack_150;
  FUN_10007b91c(&uStack_100,auStack_1c0,0x1000c7df0,&UNK_10008e6e0);
  func_0x00010007b964(&uStack_a0,0x1000c7df0,&UNK_10008e6e0);
  param_1[5] = uStack_d8;
  param_1[4] = uStack_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[9] = CONCAT62(uStack_b6,uStack_b8);
  param_1[8] = uStack_c0;
  *(undefined8 *)((long)param_1 + 0x52) = uStack_ae;
  *(ulong *)((long)param_1 + 0x4a) = CONCAT26(uStack_b0,uStack_b6);
  param_1[1] = uStack_f8;
  *param_1 = uStack_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Entry: 10007aacc; end: 10007ab0b;  */

void FUN_10007aacc(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008e728;
  _swift_getWitnessTable(&UNK_10008e728,&UNK_1000b6e70);
  puRam00000001000c7e08 = puVar1;
  return;
}



/* Entry: 10007ab0c; end: 10007ad7b;  */

void FUN_10007ab0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c7e18 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7e20;
  func_0x000100010120(0x1000c7e20,&UNK_10008e440);
  uVar2 = uVar1;
  func_0x00010007ab7c();
  puVar3 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  uStack_28 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c7e18 = puVar3;
  return;
}



/* Entry: 10007ad7c; end: 10007adbb;  */

void FUN_10007ad7c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7e68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008e7c4;
  _swift_getWitnessTable(&UNK_10008e7c4,&UNK_1000b6f20);
  puRam00000001000c7e68 = puVar1;
  return;
}



/* Entry: 10007adbc; end: 10007ae2b;  */

void FUN_10007adbc(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    func_0x000100010120(param_2,param_3);
    uVar1 = param_2;
    FUN_10007ab0c();
    uVar2 = uVar1;
    (*param_4)();
    puVar3 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
    uStack_40 = uVar1;
    uStack_38 = uVar2;
    _swift_getWitnessTable
              (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,param_2,
               &uStack_40);
    *param_1 = (long)puVar3;
  }
  return;
}



/* Entry: 10007ae2c; end: 10007aea3;  */

void FUN_10007ae2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c7e78 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7e80;
  func_0x000100010120(0x1000c7e80,&UNK_10008e470);
  uVar2 = uVar1;
  func_0x00010007ad04();
  puStack_30 = PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_1000b0918;
  puVar3 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_28 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &puStack_30);
  puRam00000001000c7e78 = puVar3;
  return;
}



/* Entry: 10007aea4; end: 10007aeb3;  */

void FUN_10007aea4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_bridgeObjectRetain(uVar1);
  uVar2 = 0x1000c7ea8;
  func_0x0001000100d0(0x1000c7ea8,&UNK_10008e488);
  uVar3 = uVar2;
  FUN_10007aeb4();
  __s7SwiftUI4ViewPAAE19accessibilityHiddenyAA15ModifiedContentVyxAA31AccessibilityAttachmentModifierVGSbF
            (param_1,1,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 10007aeb4; end: 10007af4b;  */

void FUN_10007aeb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c7ea0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7ea8;
  func_0x000100010120(0x1000c7ea8,&UNK_10008e488);
  uVar2 = 0x1000c7eb0;
  FUN_10007b7dc(0x1000c7eb0,0x1000c7eb8,&UNK_10008e490,&UNK_10008e880);
  puStack_28 = PTR___s7SwiftUI13_OffsetEffectVAA12ViewModifierAAWP_1000b0320;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c7ea0 = puVar3;
  return;
}



/* Entry: 10007af4c; end: 10007af8f;  */

void FUN_10007af4c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c5b30 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s7SwiftUI31AccessibilityAttachmentModifierVMa(0xff);
  puVar2 = PTR___s7SwiftUI31AccessibilityAttachmentModifierVAA04ViewE0AAMc_1000b0620;
  _swift_getWitnessTable
            (PTR___s7SwiftUI31AccessibilityAttachmentModifierVAA04ViewE0AAMc_1000b0620,uVar1);
  puRam00000001000c5b30 = puVar2;
  return;
}



/* Entry: 10007af90; end: 10007af9f;  */

void FUN_10007af90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_3e0 [144];
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
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
  undefined8 uStack_260;
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
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = (ulong)*(byte *)(unaff_x20 + 0x10);
  func_0x00010007a334(&uStack_2c0,*(undefined8 *)(unaff_x20 + 0x18),uVar3,uVar1,
                      *(undefined8 *)(unaff_x20 + 0x28));
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_1f8 = uStack_298;
  uStack_200 = uStack_2a0;
  uStack_1e8 = uStack_288;
  uStack_1f0 = uStack_290;
  uStack_1e0 = uStack_280;
  uStack_218 = uStack_2b8;
  uStack_220 = uStack_2c0;
  uStack_208 = uStack_2a8;
  uStack_210 = uStack_2b0;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_2f0,0x4034000000000000,0,0x4034000000000000,0,uVar3,uVar1);
  uStack_328 = uStack_1f8;
  uStack_330 = uStack_200;
  uStack_318 = uStack_1e8;
  uStack_320 = uStack_1f0;
  uStack_310 = uStack_1e0;
  uStack_348 = uStack_218;
  uStack_350 = uStack_220;
  uStack_338 = uStack_208;
  uStack_340 = uStack_210;
  uStack_198 = uStack_298;
  uStack_1a0 = uStack_2a0;
  uStack_188 = uStack_288;
  uStack_190 = uStack_290;
  uStack_180 = uStack_280;
  uStack_1b8 = uStack_2b8;
  uStack_1c0 = uStack_2c0;
  uStack_1a8 = uStack_2a8;
  uStack_1b0 = uStack_2b0;
  FUN_10007b91c(&uStack_220,&uStack_d0,0x1000c7f00,&UNK_10008e4b8);
  func_0x00010007b964(&uStack_1c0,0x1000c7f00,&UNK_10008e4b8);
  uStack_f8 = uStack_2e8;
  uStack_100 = uStack_2f0;
  uStack_e8 = uStack_2d8;
  uStack_f0 = uStack_2e0;
  uStack_d8 = uStack_2c8;
  uStack_e0 = uStack_2d0;
  uStack_138 = uStack_328;
  uStack_140 = uStack_330;
  uStack_128 = uStack_318;
  uStack_130 = uStack_320;
  uStack_120 = uStack_310;
  uStack_158 = uStack_348;
  uStack_160 = uStack_350;
  uStack_148 = uStack_338;
  uStack_150 = uStack_340;
  uStack_258 = uStack_2e8;
  uStack_260 = uStack_2f0;
  uStack_248 = uStack_2d8;
  uStack_250 = uStack_2e0;
  uStack_238 = uStack_2c8;
  uStack_240 = uStack_2d0;
  uStack_228 = 0x4030000000000000;
  uStack_230 = 0;
  uStack_298 = uStack_328;
  uStack_2a0 = uStack_330;
  uStack_288 = uStack_318;
  uStack_290 = uStack_320;
  uStack_280 = uStack_310;
  uStack_2b8 = uStack_348;
  uStack_2c0 = uStack_350;
  uStack_2a8 = uStack_338;
  uStack_2b0 = uStack_340;
  uStack_68 = uStack_2e8;
  uStack_70 = uStack_2f0;
  uStack_58 = uStack_2d8;
  uStack_60 = uStack_2e0;
  uStack_48 = uStack_2c8;
  uStack_50 = uStack_2d0;
  uStack_a8 = uStack_328;
  uStack_b0 = uStack_330;
  uStack_98 = uStack_318;
  uStack_a0 = uStack_320;
  uStack_90 = uStack_310;
  uStack_c8 = uStack_348;
  uStack_d0 = uStack_350;
  uStack_b8 = uStack_338;
  uStack_c0 = uStack_340;
  FUN_10007b91c(&uStack_160,auStack_3e0,0x1000c7ef0,&UNK_10008e4b0);
  func_0x00010007b964(&uStack_d0,0x1000c7ef0,&UNK_10008e4b0);
  uVar1 = 0x1000c7ee0;
  func_0x0001000100d0(0x1000c7ee0,&UNK_10008e4a8);
  uVar2 = uVar1;
  FUN_10007b010();
  __s7SwiftUI4ViewPAAE19accessibilityHiddenyAA15ModifiedContentVyxAA31AccessibilityAttachmentModifierVGSbF
            (param_1,1,uVar1,uVar2);
  func_0x00010007b964(&uStack_2c0,0x1000c7ee0,&UNK_10008e4a8);
  return;
}



/* Entry: 10007afa0; end: 10007b00f;  */

void FUN_10007afa0(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    func_0x000100010120(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    uVar2 = uVar1;
    FUN_10007af4c();
    puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
    uStack_40 = uVar1;
    uStack_38 = uVar2;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,
               param_2,&uStack_40);
    *param_1 = (long)puVar3;
  }
  return;
}



/* Entry: 10007b010; end: 10007b197;  */

void FUN_10007b010(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c7ed8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7ee0;
  func_0x000100010120(0x1000c7ee0,&UNK_10008e4a8);
  uVar2 = uVar1;
  func_0x00010007b088();
  puStack_28 = PTR___s7SwiftUI13_OffsetEffectVAA12ViewModifierAAWP_1000b0320;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c7ed8 = puVar3;
  return;
}



/* Entry: 10007b198; end: 10007b1a7;  */

void FUN_10007b198(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong in_x3;
  long extraout_x8;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  undefined8 uStack_590;
  undefined1 auStack_588 [8];
  undefined8 uStack_580;
  undefined1 auStack_578 [8];
  long alStack_570 [2];
  ulong uStack_560;
  undefined *puStack_558;
  ulong *puStack_550;
  undefined1 auStack_548 [200];
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  undefined *puStack_460;
  ulong uStack_458;
  undefined *puStack_450;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  undefined *puStack_400;
  ulong uStack_3f8;
  undefined *puStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  undefined *puStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  undefined *puStack_330;
  ulong uStack_328;
  undefined *puStack_320;
  ulong uStack_318;
  ulong uStack_310;
  undefined *puStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined *puStack_260;
  ulong uStack_258;
  undefined *puStack_250;
  ulong uStack_248;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  ulong uStack_230;
  undefined *puStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined *puStack_210;
  ulong uStack_208;
  undefined *puStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined *puStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  ulong uStack_148;
  undefined *puStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined *puStack_130;
  ulong uStack_128;
  undefined1 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined1 uStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  undefined1 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  
  uVar15 = *(ulong *)(unaff_x20 + 0x18);
  uVar8 = (ulong)*(byte *)(unaff_x20 + 0x10);
  lVar1 = 0x1000c7fb8;
  puVar5 = &UNK_10008e660;
  puStack_550 = param_1;
  func_0x0001000100d0(0x1000c7fb8,&UNK_10008e660,*(undefined8 *)(unaff_x20 + 0x28));
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar14 = (long)&uStack_560 + lVar1;
  FUN_100078338();
  uStack_230 = uVar8;
  puStack_228 = puVar5;
  FUN_100010174();
  _swift_bridgeObjectRetain(puVar5);
  puVar2 = &uStack_230;
  puVar5 = PTR___sSSN_1000b1180;
  __s7SwiftUI4TextVyACxcSyRzlufC(puVar2,PTR___sSSN_1000b1180,uVar8);
  __s7SwiftUI4FontV6WeightV6mediumAEvgZ();
  lVar3 = 0;
  __s7SwiftUI4FontV6DesignOMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar14,1,1,lVar3);
  __s7SwiftUI4FontV6system4size6weight6designAC12CoreGraphics7CGFloatV_AC6WeightVSgAC6DesignOSgtFZ
            (0x402e000000000000,uVar15,0,lVar14);
  func_0x00010007b964(lVar14,0x1000c7fb8,&UNK_10008e660);
  uVar4 = uVar15;
  puVar9 = puVar2;
  puVar6 = puVar5;
  uVar11 = uVar8;
  __s7SwiftUI4TextV4fontyAcA4FontVSgF();
  puStack_558 = (undefined *)CONCAT44(puStack_558._4_4_,(int)puVar6);
  _swift_release(uVar15);
  func_0x000100022a4c(puVar2,puVar5,uVar8);
  _swift_bridgeObjectRelease();
  __s7SwiftUI5ColorV5whiteACvgZ();
  uVar13 = (ulong)puStack_558 & 0xffffffff;
  uVar8 = in_x3;
  uVar15 = uVar4;
  puVar2 = puVar9;
  uVar12 = uVar13;
  __s7SwiftUI4TextV15foregroundColoryAcA0E0VSgF();
  uStack_560 = uVar15;
  _swift_release(in_x3);
  func_0x000100022a4c(uVar4,puVar9,uVar13);
  _swift_bridgeObjectRelease(uVar11);
  puVar5 = &UNK_10008e540;
  _swift_getKeyPath();
  puVar6 = &UNK_10008e570;
  _swift_getKeyPath();
  uVar4 = uStack_560;
  uStack_158 = uStack_560;
  uStack_138 = 1;
  uStack_128 = 2;
  uStack_120 = 0;
  puVar7 = &UNK_10008e5a0;
  uStack_160 = uVar8;
  uStack_150 = (char)puVar2;
  uStack_148 = uVar12;
  puStack_140 = puVar5;
  puStack_130 = puVar6;
  _swift_getKeyPath();
  uStack_258 = CONCAT71(uStack_137,uStack_138);
  puStack_260 = puStack_140;
  uStack_248 = uStack_128;
  puStack_250 = puStack_130;
  uStack_240 = uStack_120;
  uStack_270 = CONCAT71(uStack_14f,uStack_150);
  uStack_278 = uStack_158;
  uStack_280 = uStack_160;
  uStack_268 = uStack_148;
  uStack_110 = uVar4;
  uStack_f0 = 1;
  uStack_e0 = 2;
  uStack_d8 = 0;
  uVar10 = 0x1000c7f48;
  puStack_558 = puVar7;
  uStack_118 = uVar8;
  uStack_108 = (char)puVar2;
  uStack_100 = uVar12;
  puStack_f8 = puVar5;
  puStack_e8 = puVar6;
  func_0x00010007b91c(&uStack_160,&uStack_230,0x1000c7f48,&UNK_10008e4e0);
  puVar2 = &uStack_118;
  func_0x00010007b964(puVar2,0x1000c7f48,&UNK_10008e4e0);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  puVar5 = puStack_558;
  uStack_a8 = uStack_258;
  puStack_b0 = puStack_260;
  uStack_98 = uStack_248;
  puStack_a0 = puStack_250;
  uStack_90 = CONCAT71(uStack_23f,uStack_240);
  uStack_c8 = uStack_278;
  uStack_d0 = uStack_280;
  uStack_b8 = uStack_268;
  uStack_c0 = uStack_270;
  puStack_88 = puStack_558;
  uStack_80 = 0x3fe999999999999a;
  *(ulong **)((long)alStack_570 + lVar1) = puVar2;
  *(undefined8 *)((long)alStack_570 + lVar1 + 8) = uVar10;
  auStack_578[lVar1] = 1;
  *(undefined8 *)((long)&uStack_580 + lVar1) = 0;
  auStack_588[lVar1] = 1;
  *(undefined8 *)((long)&uStack_590 + lVar1) = 0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_1d8,0,1,0,1,0x7ff0000000000000,0,0,1);
  uStack_208 = uStack_a8;
  puStack_210 = puStack_b0;
  uStack_1f8 = uStack_98;
  puStack_200 = puStack_a0;
  puStack_1e8 = puStack_88;
  uStack_1f0 = uStack_90;
  uStack_1e0 = uStack_80;
  puStack_228 = (undefined *)uStack_c8;
  uStack_230 = uStack_d0;
  uStack_218 = uStack_b8;
  uStack_220 = uStack_c0;
  uStack_458 = uStack_258;
  puStack_460 = puStack_260;
  uStack_448 = uStack_248;
  puStack_450 = puStack_250;
  uStack_440 = CONCAT71(uStack_23f,uStack_240);
  uStack_478 = uStack_278;
  uStack_480 = uStack_280;
  uStack_468 = uStack_268;
  uStack_470 = uStack_270;
  puStack_438 = puVar5;
  uStack_430 = 0x3fe999999999999a;
  func_0x00010007b91c(&uStack_d0,&uStack_350,0x1000c7f38,&UNK_10008e4d8);
  func_0x00010007b964(&uStack_480,0x1000c7f38,&UNK_10008e4d8);
  uStack_378 = uStack_188;
  uStack_380 = uStack_190;
  uStack_368 = uStack_178;
  uStack_370 = uStack_180;
  uStack_3b8 = uStack_1c8;
  uStack_3c0 = uStack_1d0;
  uStack_3a8 = uStack_1b8;
  uStack_3b0 = uStack_1c0;
  uStack_398 = uStack_1a8;
  uStack_3a0 = uStack_1b0;
  uStack_388 = uStack_198;
  uStack_390 = uStack_1a0;
  uStack_3f8 = uStack_208;
  puStack_400 = puStack_210;
  uStack_3e8 = uStack_1f8;
  puStack_3f0 = puStack_200;
  puStack_3d8 = puStack_1e8;
  uStack_3e0 = uStack_1f0;
  uStack_3c8 = uStack_1d8;
  uStack_3d0 = uStack_1e0;
  uStack_418 = (ulong)puStack_228;
  uStack_420 = uStack_230;
  uStack_408 = uStack_218;
  uStack_410 = uStack_220;
  uStack_2a8 = uStack_188;
  uStack_2b0 = uStack_190;
  uStack_298 = uStack_178;
  uStack_2a0 = uStack_180;
  uStack_2e8 = uStack_1c8;
  uStack_2f0 = uStack_1d0;
  uStack_2d8 = uStack_1b8;
  uStack_2e0 = uStack_1c0;
  uStack_2c8 = uStack_1a8;
  uStack_2d0 = uStack_1b0;
  uStack_2b8 = uStack_198;
  uStack_2c0 = uStack_1a0;
  uStack_328 = uStack_208;
  puStack_330 = puStack_210;
  uStack_318 = uStack_1f8;
  puStack_320 = puStack_200;
  puStack_308 = puStack_1e8;
  uStack_310 = uStack_1f0;
  uStack_2f8 = uStack_1d8;
  uStack_300 = uStack_1e0;
  uStack_360 = uStack_170;
  uStack_290 = uStack_170;
  uStack_348 = (ulong)puStack_228;
  uStack_350 = uStack_230;
  uStack_338 = uStack_218;
  uStack_340 = uStack_220;
  func_0x00010007b91c(&uStack_420,auStack_548,0x1000c7f20,&UNK_10008e4d0);
  func_0x00010007b964(&uStack_350,0x1000c7f20,&UNK_10008e4d0);
  puStack_550[0x15] = uStack_378;
  puStack_550[0x14] = uStack_380;
  puStack_550[0x17] = uStack_368;
  puStack_550[0x16] = uStack_370;
  puStack_550[0x18] = uStack_360;
  puStack_550[0xd] = uStack_3b8;
  puStack_550[0xc] = uStack_3c0;
  puStack_550[0xf] = uStack_3a8;
  puStack_550[0xe] = uStack_3b0;
  puStack_550[0x11] = uStack_398;
  puStack_550[0x10] = uStack_3a0;
  puStack_550[0x13] = uStack_388;
  puStack_550[0x12] = uStack_390;
  puStack_550[5] = uStack_3f8;
  puStack_550[4] = (ulong)puStack_400;
  puStack_550[7] = uStack_3e8;
  puStack_550[6] = (ulong)puStack_3f0;
  puStack_550[9] = (ulong)puStack_3d8;
  puStack_550[8] = uStack_3e0;
  puStack_550[0xb] = uStack_3c8;
  puStack_550[10] = uStack_3d0;
  puStack_550[1] = uStack_418;
  *puStack_550 = uStack_420;
  puStack_550[3] = uStack_408;
  puStack_550[2] = uStack_410;
  return;
}



/* Entry: 10007b1a8; end: 10007b423;  */

void FUN_10007b1a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c7f28 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7f20;
  func_0x000100010120(0x1000c7f20,&UNK_10008e4d0);
  uVar2 = uVar1;
  func_0x00010007b220();
  puStack_28 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_1000b0460;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c7f28 = puVar3;
  return;
}



/* Entry: 10007b424; end: 10007b7d3;  */

void FUN_10007b424(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = 0x1000c7f98;
  func_0x0001000100d0(0x1000c7f98,&UNK_10008e518);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar8 + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0x1000c7f88;
  func_0x0001000100d0(0x1000c7f88,&UNK_10008e510);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar7 = lVar6 - extraout_x12_00;
  func_0x0001000100d0(0x1000c7f80,&UNK_10008e508);
  __s9WidgetKit28DynamicIslandExpandedContentV7contentxvg(lVar7);
  func_0x0001000100d0(0x1000c7f18,&UNK_10008e4c8);
  __s9WidgetKit27DynamicIslandExpandedRegionV19_viewRepresentationQrvg(lVar5);
  FUN_10007b828(lVar7,lVar6);
  pcVar3 = *(code **)(lVar8 + 0x10);
  (*pcVar3)(puVar4,lVar5,lVar1);
  FUN_10007b828(lVar6,param_1);
  lVar2 = 0x1000c7fa0;
  func_0x0001000100d0(0x1000c7fa0,&UNK_10008e520);
  (*pcVar3)(param_1 + *(int *)(lVar2 + 0x30),puVar4,lVar1);
  pcVar3 = *(code **)(lVar8 + 8);
  (*pcVar3)(lVar5,lVar1);
  func_0x00010007b878(lVar7);
  (*pcVar3)(puVar4,lVar1);
  func_0x00010007b878(lVar6);
  return;
}



/* Entry: 10007b7d4; end: 10007b7db;  */

void FUN_10007b7d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0x1000c7fa8;
  lStack_68 = param_1;
  func_0x0001000100d0(0x1000c7fa8,&UNK_10008e528);
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar11 + 0x40));
  lVar5 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar8 = lVar5 - extraout_x12;
  lVar3 = 0x1000c7f78;
  func_0x0001000100d0(0x1000c7f78,&UNK_10008e500);
  lVar6 = *(long *)(lVar3 + -8);
  lStack_70 = lVar6;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar6 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar10 = lVar9 - extraout_x12_00;
  func_0x0001000100d0(0x1000c7f70,&UNK_10008e4f8);
  __s9WidgetKit28DynamicIslandExpandedContentV7contentxvg(lVar10);
  func_0x0001000100d0(0x1000c7ec0,&UNK_10008e498);
  __s9WidgetKit27DynamicIslandExpandedRegionV19_viewRepresentationQrvg(lVar8);
  pcVar4 = *(code **)(lVar6 + 0x10);
  (*pcVar4)(lVar9,lVar10,lVar3);
  pcVar7 = *(code **)(lVar11 + 0x10);
  (*pcVar7)(lVar5,lVar8,lVar2);
  lVar1 = lStack_68;
  (*pcVar4)(lStack_68,lVar9,lVar3);
  lVar6 = 0x1000c7fb0;
  func_0x0001000100d0(0x1000c7fb0,&UNK_10008e530);
  (*pcVar7)(lVar1 + *(int *)(lVar6 + 0x30),lVar5,lVar2);
  pcVar4 = *(code **)(lVar11 + 8);
  (*pcVar4)(lVar8,lVar2);
  pcVar7 = *(code **)(lStack_70 + 8);
  (*pcVar7)(lVar10,lVar3);
  (*pcVar4)(lVar5,lVar2);
  (*pcVar7)(lVar9,lVar3);
  return;
}



/* Entry: 10007b7dc; end: 10007b81f;  */

void FUN_10007b7dc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x000100010120(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10007b820; end: 10007b827;  */

void FUN_10007b820(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = 0x1000c7f98;
  func_0x0001000100d0(0x1000c7f98,&UNK_10008e518);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar8 + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0x1000c7f88;
  func_0x0001000100d0(0x1000c7f88,&UNK_10008e510);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar7 = lVar6 - extraout_x12_00;
  func_0x0001000100d0(0x1000c7f80,&UNK_10008e508);
  __s9WidgetKit28DynamicIslandExpandedContentV7contentxvg(lVar7);
  func_0x0001000100d0(0x1000c7f18,&UNK_10008e4c8);
  __s9WidgetKit27DynamicIslandExpandedRegionV19_viewRepresentationQrvg(lVar5);
  FUN_10007b828(lVar7,lVar6);
  pcVar3 = *(code **)(lVar8 + 0x10);
  (*pcVar3)(puVar4,lVar5,lVar1);
  FUN_10007b828(lVar6,param_1);
  lVar2 = 0x1000c7fa0;
  func_0x0001000100d0(0x1000c7fa0,&UNK_10008e520);
  (*pcVar3)(param_1 + *(int *)(lVar2 + 0x30),puVar4,lVar1);
  pcVar3 = *(code **)(lVar8 + 8);
  (*pcVar3)(lVar5,lVar1);
  func_0x00010007b878(lVar7);
  (*pcVar3)(puVar4,lVar1);
  func_0x00010007b878(lVar6);
  return;
}



/* Entry: 10007b828; end: 10007b90b;  */

undefined8 FUN_10007b828(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000c7f88;
  func_0x0001000100d0(0x1000c7f88,&UNK_10008e510);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10007b90c; end: 10007b91b;  */

void FUN_10007b90c(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  __s7SwiftUI17EnvironmentValuesV9lineLimitSiSgvg();
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10007b91c; end: 10007b9a3;  */

undefined8 FUN_10007b91c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000100d0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10007b9a4; end: 10007b9cf;  */

void FUN_10007b9a4(void)

{
  char in_w3;
  
  if (in_w3 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008624c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_1000b16a8)();
  return;
}



/* Entry: 10007b9d0; end: 10007b9fb;  */

long FUN_10007b9d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10007b9fc; end: 10007ba03;  */

void FUN_10007b9fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10007ba04; end: 10007bacf;  */

undefined1 * FUN_10007ba04(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10007bad0; end: 10007bb9f;  */

int FUN_10007bad0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10007bba0; end: 10007c75f;  */

void FUN_10007bba0(long param_1,undefined8 param_2,uint param_3,undefined *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long extraout_x8;
  long lVar16;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar17;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar19;
  undefined1 auStack_250 [12];
  uint uStack_244;
  undefined *puStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  undefined1 auStack_208 [72];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  
  lVar18 = 0x1000c7fd0;
  lStack_218 = param_1;
  func_0x0001000100d0(0x1000c7fd0,&UNK_10008e658);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  puStack_210 = auStack_250 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar16 = (long)(auStack_250 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar18 = 0x1000c7fb8;
  lStack_220 = lVar16;
  func_0x0001000100d0(0x1000c7fb8,&UNK_10008e660);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_00;
  lVar18 = 0x1000c7fd8;
  func_0x0001000100d0(0x1000c7fd8,&UNK_10008e668);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  lVar18 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_228 = lVar18;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar18 = lVar18 - extraout_x12_00;
  uVar19 = 0x4047000000000000;
  puStack_158 = (undefined *)0x4022000000000000;
  uStack_160 = 0x4047000000000000;
  uVar6 = 0x1000c7fe0;
  puStack_240 = param_4;
  uStack_238 = param_5;
  puStack_170 = param_4;
  uStack_168 = param_5;
  func_0x0001000100d0(0x1000c7fe0,&UNK_10008e670);
  uVar7 = 0x1000c7fe8;
  puVar9 = &UNK_10008e880;
  func_0x00010007cae8(0x1000c7fe8,0x1000c7fe0,&UNK_10008e670);
  lStack_230 = lVar18;
  __s7SwiftUI4ViewPAAE19accessibilityHiddenyAA15ModifiedContentVyxAA31AccessibilityAttachmentModifierVGSbF
            (lVar18,1,uVar6,uVar7);
  uVar1 = param_3 & 0xff;
  uStack_244 = param_3;
  if (uVar1 < 3) {
    if (uVar1 == 0) {
      if (lRam00000001000c7d60 != -1) {
        _swift_once(0x1000c7d60,FUN_100077c9c);
      }
      puVar17 = (undefined8 *)0x1000d0f40;
    }
    else if (uVar1 == 1) {
      if (lRam00000001000c7d68 != -1) {
        _swift_once(0x1000c7d68,0x100077d6c);
      }
      puVar17 = (undefined8 *)0x1000d0f50;
    }
    else {
      if (lRam00000001000c7d70 != -1) {
        _swift_once(0x1000c7d70,0x100077e3c);
      }
      puVar17 = (undefined8 *)0x1000d0f60;
    }
  }
  else if (uVar1 == 3) {
    if (lRam00000001000c7d78 != -1) {
      _swift_once(0x1000c7d78,0x100077f0c);
    }
    puVar17 = (undefined8 *)0x1000d0f70;
  }
  else if (uVar1 == 4) {
    if (lRam00000001000c7d80 != -1) {
      _swift_once(0x1000c7d80,0x100077fdc);
    }
    puVar17 = (undefined8 *)0x1000d0f80;
  }
  else {
    if (lRam00000001000c7d88 != -1) {
      _swift_once(0x1000c7d88,0x1000780ac);
    }
    puVar17 = (undefined8 *)0x1000d0f90;
  }
  puVar11 = (undefined *)*puVar17;
  uVar6 = puVar17[1];
  _swift_bridgeObjectRetain();
  puStack_170 = puVar11;
  uStack_168 = uVar6;
  FUN_100010174();
  ppuVar8 = &puStack_170;
  puVar11 = PTR___sSSN_1000b1180;
  __s7SwiftUI4TextVyACxcSyRzlufC(ppuVar8,PTR___sSSN_1000b1180,uVar6);
  __s7SwiftUI4FontV6WeightV8semiboldAEvgZ();
  lVar18 = 0;
  __s7SwiftUI4FontV6DesignOMa();
  (**(code **)(*(long *)(lVar18 + -8) + 0x38))(lVar16,1,1,lVar18);
  __s7SwiftUI4FontV6system4size6weight6designAC12CoreGraphics7CGFloatV_AC6WeightVSgAC6DesignOSgtFZ
            (0x402e000000000000,uVar19,0,lVar16);
  func_0x00010007ca0c(lVar16,0x1000c7fb8,&UNK_10008e660);
  uVar7 = uVar19;
  ppuVar12 = ppuVar8;
  puVar13 = puVar11;
  uVar14 = uVar6;
  __s7SwiftUI4TextV4fontyAcA4FontVSgF();
  _swift_release(uVar19);
  func_0x000100022a4c(ppuVar8,puVar11,uVar6);
  _swift_bridgeObjectRelease();
  __s7SwiftUI5ColorV5whiteACvgZ();
  puVar10 = puVar9;
  uVar6 = uVar7;
  ppuVar8 = ppuVar12;
  puVar15 = puVar13;
  __s7SwiftUI4TextV15foregroundColoryAcA0E0VSgF();
  _swift_release(puVar9);
  func_0x000100022a4c(uVar7,ppuVar12,puVar13);
  _swift_bridgeObjectRelease(uVar14);
  puVar9 = &UNK_10008e678;
  _swift_getKeyPath();
  puVar11 = &UNK_10008e6a8;
  _swift_getKeyPath();
  uStack_100 = SUB81(ppuVar8,0);
  uStack_e8 = 2;
  uStack_e0 = 0;
  uStack_d0 = 0x3fe999999999999a;
  uStack_a0 = 2;
  uStack_98 = 0;
  uStack_88 = 0x3fe999999999999a;
  puStack_110 = puVar10;
  uStack_108 = uVar6;
  puStack_f8 = puVar15;
  puStack_f0 = puVar9;
  puStack_d8 = puVar11;
  puStack_c8 = puVar10;
  uStack_c0 = uVar6;
  uStack_b8 = uStack_100;
  puStack_b0 = puVar15;
  puStack_a8 = puVar9;
  puStack_90 = puVar11;
  func_0x00010007c9c4(&puStack_110,&puStack_170,0x1000c4cd0,&UNK_100089c60);
  func_0x00010007ca0c(&puStack_c8,0x1000c4cd0,&UNK_100089c60);
  func_0x00010007c260(&puStack_170,param_2,uStack_244,puStack_240,uStack_238);
  uVar6 = 0x1000c7df0;
  func_0x0001000100d0(0x1000c7df0,&UNK_10008e6e0);
  uVar7 = uVar6;
  func_0x00010007c8dc();
  lVar3 = lStack_220;
  __s7SwiftUI4ViewPAAE19accessibilityHiddenyAA15ModifiedContentVyxAA31AccessibilityAttachmentModifierVGSbF
            (lStack_220,1,uVar6,uVar7);
  func_0x00010007ca0c(&puStack_170,0x1000c7df0,&UNK_10008e6e0);
  lVar2 = lStack_228;
  lVar16 = lStack_230;
  func_0x00010007c9c4(lStack_230,lStack_228,0x1000c7fd8,&UNK_10008e668);
  puVar5 = puStack_210;
  uStack_190 = CONCAT71(uStack_df,uStack_e0);
  uStack_198 = uStack_e8;
  puStack_1a0 = puStack_f0;
  puStack_188 = puStack_d8;
  uStack_180 = uStack_d0;
  uStack_1b0 = CONCAT71(uStack_ff,uStack_100);
  uStack_1b8 = uStack_108;
  puStack_1c0 = puStack_110;
  puStack_1a8 = puStack_f8;
  func_0x00010007c9c4(lVar3,puStack_210,0x1000c7fd0,&UNK_10008e658);
  lVar4 = lStack_218;
  func_0x00010007c9c4(lVar2,lStack_218,0x1000c7fd8,&UNK_10008e668);
  lVar18 = 0x1000c7ff0;
  func_0x0001000100d0(0x1000c7ff0,&UNK_10008e700);
  puVar17 = (undefined8 *)(lVar4 + *(int *)(lVar18 + 0x30));
  uStack_130 = uStack_180;
  uStack_148 = uStack_198;
  puStack_150 = puStack_1a0;
  puStack_138 = puStack_188;
  uStack_140 = uStack_190;
  uStack_168 = uStack_1b8;
  puStack_170 = puStack_1c0;
  puStack_158 = puStack_1a8;
  uStack_160 = uStack_1b0;
  puVar17[5] = uStack_198;
  puVar17[4] = puStack_1a0;
  puVar17[7] = puStack_188;
  puVar17[6] = uStack_190;
  puVar17[8] = uStack_180;
  puVar17[1] = uStack_1b8;
  *puVar17 = puStack_1c0;
  puVar17[3] = puStack_1a8;
  puVar17[2] = uStack_1b0;
  puVar17 = (undefined8 *)(lVar4 + *(int *)(lVar18 + 0x40));
  *puVar17 = 0;
  *(undefined1 *)(puVar17 + 1) = 1;
  func_0x00010007c9c4(puVar5,lVar4 + *(int *)(lVar18 + 0x50),0x1000c7fd0,&UNK_10008e658);
  func_0x00010007c9c4(&puStack_170,auStack_208,0x1000c4cd0,&UNK_100089c60);
  func_0x00010007ca0c(lVar3,0x1000c7fd0,&UNK_10008e658);
  func_0x00010007ca0c(lVar16,0x1000c7fd8,&UNK_10008e668);
  func_0x00010007ca0c(puVar5,0x1000c7fd0,&UNK_10008e658);
  func_0x00010007ca0c(&puStack_1c0,0x1000c4cd0,&UNK_100089c60);
  func_0x00010007ca0c(lVar2,0x1000c7fd8,&UNK_10008e668);
  return;
}



/* Entry: 10007c760; end: 10007c76b;  */

void FUN_10007c760(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10007c76c; end: 10007c837;  */

void FUN_10007c76c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *unaff_x20;
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *param_1 = param_6;
  param_1[1] = 0x4024000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar4 = 0x1000c7fc0;
  func_0x0001000100d0(0x1000c7fc0,&UNK_10008e648);
  FUN_10007bba0((long)param_1 + (long)*(int *)(lVar4 + 0x2c),uVar6,uVar3,uVar5,uVar2);
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uVar5 = 0x4028000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar4 = 0x1000c7fc8;
  func_0x0001000100d0(0x1000c7fc8,&UNK_10008e650);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  *puVar1 = uVar3;
  *(undefined8 *)(puVar1 + 8) = uVar5;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  return;
}



/* Entry: 10007c838; end: 10007c953;  */

void FUN_10007c838(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  __s7SwiftUI17EnvironmentValuesV9lineLimitSiSgvg();
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10007c954; end: 10007c9c3;  */

void FUN_10007c954(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    func_0x000100010120(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_1000b02e8;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
    uStack_40 = uVar1;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,
               param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 10007c9c4; end: 10007ca4b;  */

undefined8 FUN_10007c9c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000100d0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10007ca4c; end: 10007ca4f;  */

void FUN_10007ca4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c7ff8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7fc8;
  func_0x000100010120(0x1000c7fc8,&UNK_10008e650);
  uVar2 = 0x1000c8000;
  func_0x00010007cae8(0x1000c8000,0x1000c8008,&UNK_10008e708,
                      PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_1000b0888);
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1000b03b0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c7ff8 = puVar3;
  return;
}



/* Entry: 10007ca50; end: 10007cb2b;  */

void FUN_10007ca50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c7ff8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c7fc8;
  func_0x000100010120(0x1000c7fc8,&UNK_10008e650);
  uVar2 = 0x1000c8000;
  func_0x00010007cae8(0x1000c8000,0x1000c8008,&UNK_10008e708,
                      PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_1000b0888);
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1000b03b0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c7ff8 = puVar3;
  return;
}



/* Entry: 10007cb2c; end: 10007cb4b;  */

undefined1  [16] FUN_10007cb2c(void)

{
  return ZEXT816(0x1000b6e70);
}



/* Entry: 10007cb4c; end: 10007cb8f;  */

void FUN_10007cb4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  __s7SwiftUI5ColorV5whiteACvgZ();
  uVar1 = param_1;
  __s7SwiftUI5ColorV7opacityyACSdF(0x3fd6666666666666);
  _swift_release(param_1);
  uRam00000001000c8018 = uVar1;
  return;
}



/* Entry: 10007cb90; end: 10007cf23;  */

void FUN_10007cb90(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_3a0 [8];
  undefined1 *puStack_398;
  undefined8 uStack_390;
  undefined2 uStack_388;
  undefined6 uStack_386;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined1 *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined1 *puStack_2f8;
  double dStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  double dStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 *puStack_280;
  double dStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined8 uStack_24e;
  undefined1 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined1 *puStack_210;
  double dStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined2 uStack_1e8;
  undefined6 uStack_1e6;
  undefined2 uStack_1e0;
  undefined6 uStack_1de;
  undefined2 uStack_1d8;
  undefined6 uStack_1d6;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *puStack_1c0;
  double dStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined2 uStack_190;
  undefined8 uStack_18e;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 *puStack_170;
  double dStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined2 uStack_138;
  undefined6 uStack_136;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_3a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0xd000000000000017;
  __s7SwiftUI5ImageV_6bundleACSS_So8NSBundleCSgtcfC(0xd000000000000017,0x800000010009ee20,0);
  (**(code **)(lVar6 + 0x68))
            (puVar5,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  puVar3 = puVar5;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar5,uVar2);
  _swift_release(uVar2);
  (**(code **)(lVar6 + 8))(puVar5,lVar1);
  uStack_390 = 0;
  uStack_388 = 0x101;
  uStack_380 = 0x3ff0000000000000;
  uStack_378 = 0x1000000;
  puStack_398 = puVar3;
  if (lRam00000001000c8010 != -1) {
    _swift_once(0x1000c8010,FUN_10007cb4c);
  }
  uVar2 = uRam00000001000c8018;
  uVar4 = 0;
  __s7SwiftUI11StrokeStyleV9lineWidth0E3Cap0E4Join10miterLimit4dash0K5PhaseAC12CoreGraphics7CGFloatV_So06CGLineG0VSo0pH0VALSayALGALtcfC
            (&dStack_2a8,0x3ff0000000000000,0x4024000000000000,0,0,0,
             PTR___swiftEmptyArrayStorage_1000b14d0);
  puStack_170 = (undefined1 *)(dStack_2a8 * 0.5);
  dStack_168 = dStack_2a8;
  uStack_160 = uStack_2a0;
  uStack_158 = uStack_298;
  uStack_150 = uStack_290;
  uStack_148 = (undefined2)uStack_288;
  uStack_146 = (undefined6)((ulong)uStack_288 >> 0x10);
  uStack_140 = (undefined2)uVar2;
  uStack_13e = (undefined6)((ulong)uVar2 >> 0x10);
  uStack_138 = 0x100;
  _swift_retain();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_220 = uStack_378;
  uStack_230 = CONCAT62(uStack_386,uStack_388);
  uStack_310 = CONCAT62(uStack_386,uStack_388);
  uStack_238 = uStack_390;
  puStack_240 = puStack_398;
  uStack_228 = uStack_380;
  dStack_278 = dStack_168;
  puStack_280 = puStack_170;
  uStack_268 = uStack_158;
  uStack_270 = uStack_160;
  dStack_1b8 = dStack_168;
  puStack_1c0 = puStack_170;
  uStack_1a8 = uStack_158;
  uStack_1b0 = uStack_160;
  uStack_258 = uStack_148;
  uStack_260 = uStack_150;
  uStack_198 = uStack_148;
  uStack_1a0 = uStack_150;
  uStack_24e = CONCAT26(uStack_138,uStack_13e);
  uStack_256 = uStack_146;
  uStack_250 = uStack_140;
  uStack_196 = uStack_146;
  uStack_190 = uStack_140;
  uStack_1de = uStack_13e;
  uStack_1d8 = uStack_138;
  uStack_1e0 = uStack_140;
  uStack_1f8 = uStack_158;
  uStack_200 = uStack_160;
  uStack_1e8 = uStack_148;
  uStack_1e6 = uStack_146;
  uStack_1f0 = uStack_150;
  dStack_208 = dStack_168;
  puStack_210 = puStack_170;
  uStack_318 = uStack_390;
  puStack_320 = puStack_398;
  uStack_308 = uStack_380;
  uStack_300 = uStack_378;
  dStack_2f0 = dStack_168;
  puStack_2f8 = puStack_170;
  uStack_2d0 = CONCAT62(uStack_146,uStack_148);
  uStack_2c0 = CONCAT62(uStack_1d6,uStack_138);
  uStack_2c8 = CONCAT62(uStack_13e,uStack_140);
  uStack_2d8 = uStack_150;
  uStack_2e0 = uStack_158;
  uStack_2e8 = uStack_160;
  uStack_2b8 = uVar2;
  uStack_2b0 = uVar4;
  uStack_1d0 = uVar2;
  uStack_1c8 = uVar4;
  uStack_18e = uStack_24e;
  uStack_180 = uVar2;
  uStack_178 = uVar4;
  FUN_10007cf34(&puStack_280,&puStack_f0,0x1000c8020,&UNK_10008e778);
  FUN_10007cf34(&puStack_240,&puStack_f0,0x1000c8028,&UNK_10008e780);
  FUN_10007cf34(&puStack_210,&puStack_f0,0x1000c8030,&UNK_10008e788);
  func_0x00010007cf7c(&puStack_1c0,0x1000c8030,&UNK_10008e788);
  func_0x00010007cf7c(&puStack_170,0x1000c8020,&UNK_10008e778);
  func_0x00010007cf7c(&puStack_398,0x1000c8028,&UNK_10008e780);
  uStack_128 = uStack_2d8;
  uStack_130 = uStack_2e0;
  uStack_118 = uStack_2c8;
  uStack_120 = uStack_2d0;
  uStack_108 = uStack_2b8;
  uStack_110 = uStack_2c0;
  uStack_150 = CONCAT44(uStack_2fc,uStack_300);
  dStack_168 = (double)uStack_318;
  puStack_170 = puStack_320;
  uStack_158 = uStack_308;
  uStack_160 = uStack_310;
  uStack_d0 = CONCAT44(uStack_2fc,uStack_300);
  uStack_148 = SUB82(puStack_2f8,0);
  uStack_146 = (undefined6)((ulong)puStack_2f8 >> 0x10);
  uStack_138 = (undefined2)uStack_2e8;
  uStack_136 = (undefined6)((ulong)uStack_2e8 >> 0x10);
  uStack_140 = SUB82(dStack_2f0,0);
  uStack_13e = (undefined6)((ulong)dStack_2f0 >> 0x10);
  puStack_c8 = puStack_2f8;
  uStack_b8 = uStack_2e8;
  dStack_c0 = dStack_2f0;
  uStack_e8 = uStack_318;
  puStack_f0 = puStack_320;
  uStack_d8 = uStack_308;
  uStack_e0 = uStack_310;
  uStack_98 = uStack_2c8;
  uStack_a0 = uStack_2d0;
  uStack_88 = uStack_2b8;
  uStack_90 = uStack_2c0;
  uStack_100 = uStack_2b0;
  uStack_80 = uStack_2b0;
  uStack_a8 = uStack_2d8;
  uStack_b0 = uStack_2e0;
  FUN_10007cf34(&puStack_170,&puStack_398,0x1000c8038,&UNK_10008e790);
  func_0x00010007cf7c(&puStack_f0,0x1000c8038,&UNK_10008e790);
  param_1[9] = uStack_128;
  param_1[8] = uStack_130;
  param_1[0xb] = uStack_118;
  param_1[10] = uStack_120;
  param_1[0xd] = uStack_108;
  param_1[0xc] = uStack_110;
  param_1[0xe] = uStack_100;
  param_1[1] = dStack_168;
  *param_1 = puStack_170;
  param_1[3] = uStack_158;
  param_1[2] = uStack_160;
  param_1[5] = CONCAT62(uStack_146,uStack_148);
  param_1[4] = uStack_150;
  param_1[7] = CONCAT62(uStack_136,uStack_138);
  param_1[6] = CONCAT62(uStack_13e,uStack_140);
  return;
}



/* Entry: 10007cf24; end: 10007cf33;  */

void FUN_10007cf24(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10007cf34; end: 10007cfbb;  */

undefined8 FUN_10007cf34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000100d0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10007cfbc; end: 10007cfbf;  */

void FUN_10007cfbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c8040 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c8038;
  func_0x000100010120(0x1000c8038,&UNK_10008e790);
  uVar2 = uVar1;
  func_0x00010007d058();
  uVar3 = 0x1000c8060;
  func_0x00010007d168(0x1000c8060,0x1000c8030,&UNK_10008e788,
                      PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_1000b0480);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c8040 = puVar4;
  return;
}



/* Entry: 10007cfc0; end: 10007d1ab;  */

void FUN_10007cfc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c8040 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c8038;
  func_0x000100010120(0x1000c8038,&UNK_10008e790);
  uVar2 = uVar1;
  func_0x00010007d058();
  uVar3 = 0x1000c8060;
  func_0x00010007d168(0x1000c8060,0x1000c8030,&UNK_10008e788,
                      PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_1000b0480);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c8040 = puVar4;
  return;
}



/* Entry: 10007d1ac; end: 10007d263;  */

int FUN_10007d1ac(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 2)) {
    uVar1 = *(byte *)(param_1 + 2) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10007d264; end: 10007d63b;  */

void FUN_10007d264(undefined8 *param_1,double param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined1 auStack_4f0 [96];
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined2 uStack_460;
  undefined6 uStack_45e;
  undefined8 uStack_458;
  double dStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined2 uStack_3c0;
  undefined8 uStack_3b0;
  double dStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined2 uStack_370;
  undefined8 uStack_368;
  double dStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined2 uStack_328;
  undefined8 uStack_320;
  double dStack_318;
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
  double dStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined2 uStack_230;
  undefined8 uStack_220;
  double dStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  double dStack_1b8;
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
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  double dStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  
  if (lRam00000001000c7da8 != -1) {
    _swift_once(0x1000c7da8,FUN_1000782f8);
  }
  uVar1 = uRam00000001000d0fc8;
  __s7SwiftUI11StrokeStyleV9lineWidth0E3Cap0E4Join10miterLimit4dash0K5PhaseAC12CoreGraphics7CGFloatV_So06CGLineG0VSo0pH0VALSayALGALtcfC
            (&uStack_220,param_3,0x4024000000000000,0,0,0,PTR___swiftEmptyArrayStorage_1000b14d0);
  uStack_d8 = dStack_218;
  uStack_e0 = uStack_220;
  uStack_c8 = uStack_208;
  uStack_d0 = uStack_210;
  uStack_c0 = uStack_200;
  uStack_b8 = uVar1;
  uStack_b0 = 0x100;
  uStack_98 = dStack_218;
  uStack_a0 = uStack_220;
  uStack_88 = uStack_208;
  uStack_90 = uStack_210;
  uStack_80 = uStack_200;
  uStack_78 = uVar1;
  uStack_70 = 0x100;
  _swift_retain(uVar1);
  FUN_10007d84c(&uStack_e0,&uStack_1c0,0x1000c5928,&UNK_10008ba58);
  func_0x00010007d894(&uStack_a0,0x1000c5928,&UNK_10008ba58);
  if ((param_4 & 1) == 0) {
    dVar2 = 0.3;
  }
  else {
    dVar2 = 0.0;
    if (0.0 < param_2) {
      dVar2 = param_2;
    }
    dVar3 = 1.0;
    if (dVar2 <= 1.0) {
      dVar3 = dVar2;
    }
    dVar2 = 0.02;
    if (0.02 <= dVar3) {
      dVar2 = dVar3;
    }
  }
  if (lRam00000001000c7da0 != -1) {
    _swift_once(0x1000c7da0,FUN_100078250);
  }
  uVar4 = 0x4024000000000000;
  __s7SwiftUI11StrokeStyleV9lineWidth0E3Cap0E4Join10miterLimit4dash0K5PhaseAC12CoreGraphics7CGFloatV_So06CGLineG0VSo0pH0VALSayALGALtcfC
            (&uStack_158,param_3,0x4024000000000000,0,1,0,PTR___swiftEmptyArrayStorage_1000b14d0);
  uVar1 = uRam00000001000d0fc0;
  _swift_retain(uRam00000001000d0fc0);
  __s7SwiftUI9UnitPointV6centerACvgZ();
  uStack_3b0 = 0;
  uStack_380 = uStack_138;
  uStack_378 = uVar1;
  uStack_130 = 0;
  uStack_118 = uStack_150;
  uStack_120 = uStack_158;
  uStack_398 = uStack_150;
  uStack_3a0 = uStack_158;
  uStack_388 = uStack_140;
  uStack_390 = uStack_148;
  uStack_370 = 0x100;
  uStack_f0 = 0x100;
  uStack_108 = uStack_140;
  uStack_110 = uStack_148;
  uStack_f8 = uVar1;
  uStack_100 = uStack_138;
  uStack_368 = 0;
  uStack_350 = uStack_150;
  uStack_358 = uStack_158;
  uStack_340 = uStack_140;
  uStack_348 = uStack_148;
  uStack_338 = uStack_138;
  uStack_330 = uVar1;
  uStack_328 = 0x100;
  dStack_3a8 = dVar2;
  dStack_360 = dVar2;
  dStack_128 = dVar2;
  FUN_10007d84c(&uStack_3b0,&uStack_1c0,0x1000c8078,&UNK_10008e830);
  func_0x00010007d894(&uStack_368,0x1000c8078,&UNK_10008e830);
  uStack_2f8 = uStack_108;
  uStack_300 = uStack_110;
  uStack_2e8 = uStack_f8;
  uStack_2f0 = uStack_100;
  uStack_2e0 = CONCAT62(uStack_ee,uStack_f0);
  dStack_318 = dStack_128;
  uStack_320 = uStack_130;
  uStack_308 = uStack_118;
  uStack_310 = uStack_120;
  uStack_2d8 = 0xbff921fb54442d18;
  uStack_298 = uStack_108;
  uStack_2a0 = uStack_110;
  uStack_288 = uStack_f8;
  uStack_290 = uStack_100;
  dStack_2b8 = dStack_128;
  uStack_2c0 = uStack_130;
  uStack_2a8 = uStack_118;
  uStack_2b0 = uStack_120;
  uStack_278 = 0xbff921fb54442d18;
  uStack_2d0 = param_3;
  uStack_2c8 = uVar4;
  uStack_280 = uStack_2e0;
  uStack_270 = param_3;
  uStack_268 = uVar4;
  FUN_10007d84c(&uStack_320,&uStack_1c0,0x1000c8080,&UNK_10008e838);
  func_0x00010007d894(&uStack_2c0,0x1000c8080,&UNK_10008e838);
  uStack_3e8 = uStack_d8;
  uStack_3f0 = uStack_e0;
  uStack_3d8 = uStack_c8;
  uStack_3e0 = uStack_d0;
  uStack_3c8 = uStack_b8;
  uStack_3d0 = uStack_c0;
  uStack_198 = uStack_2f8;
  uStack_1a0 = uStack_300;
  uStack_188 = uStack_2e8;
  uStack_190 = uStack_2f0;
  uStack_178 = uStack_2d8;
  uStack_180 = uStack_2e0;
  uStack_168 = uStack_2c8;
  uStack_170 = uStack_2d0;
  dStack_1b8 = dStack_318;
  uStack_1c0 = uStack_320;
  uStack_1a8 = uStack_308;
  uStack_1b0 = uStack_310;
  uStack_248 = uStack_c8;
  uStack_250 = uStack_d0;
  uStack_238 = uStack_b8;
  uStack_240 = uStack_c0;
  uStack_478 = uStack_c8;
  uStack_480 = uStack_d0;
  uStack_468 = uStack_b8;
  uStack_470 = uStack_c0;
  uStack_258 = uStack_d8;
  uStack_260 = uStack_e0;
  uStack_488 = uStack_d8;
  uStack_490 = uStack_e0;
  dStack_218 = dStack_318;
  uStack_220 = uStack_320;
  uStack_208 = uStack_308;
  uStack_210 = uStack_310;
  uStack_1d8 = uStack_2d8;
  uStack_1e0 = uStack_2e0;
  uStack_1c8 = uStack_2c8;
  uStack_1d0 = uStack_2d0;
  uStack_1f8 = uStack_2f8;
  uStack_200 = uStack_300;
  uStack_1e8 = uStack_2e8;
  uStack_1f0 = uStack_2f0;
  uStack_440 = uStack_308;
  uStack_448 = uStack_310;
  dStack_450 = dStack_318;
  uStack_458 = uStack_320;
  uStack_3c0 = uStack_b0;
  uStack_230 = uStack_b0;
  uStack_460 = uStack_b0;
  uStack_400 = uStack_2c8;
  uStack_408 = uStack_2d0;
  uStack_410 = uStack_2d8;
  uStack_418 = uStack_2e0;
  uStack_420 = uStack_2e8;
  uStack_428 = uStack_2f0;
  uStack_430 = uStack_2f8;
  uStack_438 = uStack_300;
  param_1[1] = uStack_d8;
  *param_1 = uStack_e0;
  param_1[3] = uStack_c8;
  param_1[2] = uStack_d0;
  param_1[9] = uStack_310;
  param_1[8] = dStack_318;
  param_1[0xb] = uStack_300;
  param_1[10] = uStack_308;
  param_1[5] = uStack_b8;
  param_1[4] = uStack_c0;
  param_1[7] = uStack_320;
  param_1[6] = CONCAT62(uStack_45e,uStack_b0);
  param_1[0x12] = uStack_2c8;
  param_1[0xf] = uStack_2e0;
  param_1[0xe] = uStack_2e8;
  param_1[0x11] = uStack_2d0;
  param_1[0x10] = uStack_2d8;
  param_1[0xd] = uStack_2f0;
  param_1[0xc] = uStack_2f8;
  FUN_10007d84c(&uStack_260,auStack_4f0,0x1000c5928,&UNK_10008ba58);
  FUN_10007d84c(&uStack_220,auStack_4f0,0x1000c8080,&UNK_10008e838);
  func_0x00010007d894(&uStack_1c0,0x1000c8080,&UNK_10008e838);
  func_0x00010007d894(&uStack_3f0,0x1000c5928,&UNK_10008ba58);
  return;
}



/* Entry: 10007d63c; end: 10007d647;  */

void FUN_10007d63c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10007d648; end: 10007d84b;  */

void FUN_10007d648(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_398 [168];
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
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
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
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
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
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  uVar3 = unaff_x20[2];
  __s7SwiftUI9AlignmentV6centerACvgZ();
  FUN_10007d264(&uStack_108,uVar2,uVar3,uVar1);
  uStack_288 = uStack_a0;
  uStack_290 = uStack_a8;
  uStack_278 = uStack_90;
  uStack_280 = uStack_98;
  uStack_268 = uStack_80;
  uStack_270 = uStack_88;
  uStack_2c8 = uStack_e0;
  uStack_2d0 = uStack_e8;
  uStack_2b8 = uStack_d0;
  uStack_2c0 = uStack_d8;
  uStack_2a8 = uStack_c0;
  uStack_2b0 = uStack_c8;
  uStack_298 = uStack_b0;
  uStack_2a0 = uStack_b8;
  uStack_2e8 = uStack_100;
  uStack_2f0 = uStack_108;
  uStack_2d8 = uStack_f0;
  uStack_2e0 = uStack_f8;
  uStack_1e8 = uStack_a0;
  uStack_1f0 = uStack_a8;
  uStack_1d8 = uStack_90;
  uStack_1e0 = uStack_98;
  uStack_1c8 = uStack_80;
  uStack_1d0 = uStack_88;
  uStack_228 = uStack_e0;
  uStack_230 = uStack_e8;
  uStack_218 = uStack_d0;
  uStack_220 = uStack_d8;
  uStack_208 = uStack_c0;
  uStack_210 = uStack_c8;
  uStack_1f8 = uStack_b0;
  uStack_200 = uStack_b8;
  uStack_260 = uStack_78;
  uStack_1c0 = uStack_78;
  uStack_248 = uStack_100;
  uStack_250 = uStack_108;
  uStack_238 = uStack_f0;
  uStack_240 = uStack_f8;
  FUN_10007d84c(&uStack_2f0,&uStack_1b0,0x1000c8068,&UNK_10008e818);
  func_0x00010007d894(&uStack_250,0x1000c8068,&UNK_10008e818);
  uStack_90 = uStack_288;
  uStack_98 = uStack_290;
  uStack_80 = uStack_278;
  uStack_88 = uStack_280;
  uStack_70 = uStack_268;
  uStack_78 = uStack_270;
  uStack_d0 = uStack_2c8;
  uStack_d8 = uStack_2d0;
  uStack_c0 = uStack_2b8;
  uStack_c8 = uStack_2c0;
  uStack_b0 = uStack_2a8;
  uStack_b8 = uStack_2b0;
  uStack_a0 = uStack_298;
  uStack_a8 = uStack_2a0;
  uStack_f0 = uStack_2e8;
  uStack_f8 = uStack_2f0;
  uStack_e0 = uStack_2d8;
  uStack_e8 = uStack_2e0;
  uStack_138 = uStack_288;
  uStack_140 = uStack_290;
  uStack_128 = uStack_278;
  uStack_130 = uStack_280;
  uStack_118 = uStack_268;
  uStack_120 = uStack_270;
  uStack_178 = uStack_2c8;
  uStack_180 = uStack_2d0;
  uStack_168 = uStack_2b8;
  uStack_170 = uStack_2c0;
  uStack_158 = uStack_2a8;
  uStack_160 = uStack_2b0;
  uStack_148 = uStack_298;
  uStack_150 = uStack_2a0;
  uStack_68 = uStack_260;
  uStack_110 = uStack_260;
  uStack_198 = uStack_2e8;
  uStack_1a0 = uStack_2f0;
  uStack_188 = uStack_2d8;
  uStack_190 = uStack_2e0;
  uStack_1b0 = param_2;
  uStack_1a8 = param_3;
  uStack_108 = param_2;
  uStack_100 = param_3;
  FUN_10007d84c(&uStack_1b0,auStack_398,0x1000c8070,&UNK_10008e820);
  func_0x00010007d894(&uStack_108,0x1000c8070,&UNK_10008e820);
  param_1[0x11] = uStack_128;
  param_1[0x10] = uStack_130;
  param_1[0x13] = uStack_118;
  param_1[0x12] = uStack_120;
  param_1[0x14] = uStack_110;
  param_1[9] = uStack_168;
  param_1[8] = uStack_170;
  param_1[0xb] = uStack_158;
  param_1[10] = uStack_160;
  param_1[0xd] = uStack_148;
  param_1[0xc] = uStack_150;
  param_1[0xf] = uStack_138;
  param_1[0xe] = uStack_140;
  param_1[1] = uStack_1a8;
  *param_1 = uStack_1b0;
  param_1[3] = uStack_198;
  param_1[2] = uStack_1a0;
  param_1[5] = uStack_188;
  param_1[4] = uStack_190;
  param_1[7] = uStack_178;
  param_1[6] = uStack_180;
  return;
}



/* Entry: 10007d84c; end: 10007d8d3;  */

undefined8 FUN_10007d84c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000100d0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}


