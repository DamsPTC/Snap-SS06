/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f00e30; end: 100f00e63; -[SCJanusVerificationStatus userVerificationFlowMethod] */

undefined8 FUN_100f00e30(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100f00e64();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100f00e64; end: 100f00e9f;  */

undefined8 FUN_100f00e64(void)

{
  int unaff_w20;
  
  func_0x000107c4ecc8();
  if (unaff_w20 - 1U < 8) {
    return *(undefined8 *)(&UNK_10d9110d8 + (ulong)(unaff_w20 - 1U) * 8);
  }
  return 1;
}



/* Entry: 100f00ea0; end: 100f00eb3;  */

bool FUN_100f00ea0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100f00eb4; end: 100f00f5f;  */

void FUN_100f00eb4(void)

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



/* Entry: 100f00f60; end: 100f00f87;  */

void FUN_100f00f60(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 100f00f88; end: 100f00fc3; -[_TtC7OAuthUI15OAuthBaseButton isHighlighted] */

void FUN_100f00f88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_100f00fc4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_isHighlighted_1125fad78);
  return;
}



/* Entry: 100f00fc4; end: 100f00fe3;  */

void FUN_100f00fc4(void)

{
  func_0x000107c61168(&PTR_PTR_11279fc30);
  return;
}



/* Entry: 100f00fe4; end: 100f010e7; -[_TtC7OAuthUI15OAuthBaseButton setHighlighted:] */

void FUN_100f00fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar4 = &puStack_70;
  uVar1 = param_1;
  FUN_100f00fc4();
  puVar3 = PTR_s_setHighlighted__112647c38;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174();
  func_0x000107c61154(&uStack_40,puVar3,param_3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = &UNK_110367370;
  func_0x000107c613fc(&UNK_110367370,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  uStack_50 = 0x100f01e8c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110367388;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c3dccc(0x3fb999999999999a,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 100f010e8; end: 100f0115b;  */

void FUN_100f010e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c49ec0();
  if ((int)uVar1 == 0) {
    uStack_38 = 0x3ff0000000000000;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_50 = 0x3ff0000000000000;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x000107c6088c(&uStack_50,0x3ff0cccccccccccd,0x3ff0cccccccccccd);
  }
  func_0x000107c5a03c(param_1,param_2,&uStack_50);
  return;
}



/* Entry: 100f0115c; end: 100f0117f;  */

void FUN_100f0115c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar2;
  func_0x000107c49ec0();
  if ((int)uVar1 == 0) {
    uStack_38 = 0x3ff0000000000000;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_50 = 0x3ff0000000000000;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x000107c6088c(&uStack_50,0x3ff0cccccccccccd,0x3ff0cccccccccccd);
  }
  func_0x000107c5a03c(uVar2,param_2,&uStack_50);
  return;
}



/* Entry: 100f01180; end: 100f011bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f01180(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a960;
  func_0x000107c61428(unaff_x20 + _DAT_112d4a960,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Entry: 100f011c0; end: 100f0120f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f011c0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a960;
  func_0x000107c61428(unaff_x20 + _DAT_112d4a960,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  FUN_100f015ec();
  return;
}



/* Entry: 100f01210; end: 100f01283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100f01210(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _DAT_112d4a960;
  func_0x000107c61428(unaff_x20 + _DAT_112d4a960,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x100f01254;
  return auVar2;
}



/* Entry: 100f01284; end: 100f01317; -[_TtC7OAuthUI15OAuthBaseButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100f01284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  long *plVar2;
  long lStack_50;
  long lStack_48;
  
  plVar2 = &lStack_50;
  *(undefined8 *)(param_5 + _DAT_112d4a960) = 0;
  lVar1 = param_5;
  FUN_100f00fc4();
  lStack_50 = param_5;
  lStack_48 = lVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_100f0137c();
  func_0x000107c61170(plVar2);
  return (undefined1 *)plVar2;
}



/* Entry: 100f01318; end: 100f0137b; -[_TtC7OAuthUI15OAuthBaseButton initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f01318(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112d4a960) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "OAuthUI/OAuthButton.swift",0x19,2,0x54,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f0137c);
  (*pcVar1)();
}



/* Entry: 100f0137c; end: 100f015eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0137c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c52524();
  lVar1 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c52e0c(0x3ff0000000000000);
  func_0x000107c61170(lVar1);
  lVar1 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(0x403b000000000000);
  func_0x000107c61170(lVar1);
  func_0x000107c534b0();
  lVar1 = unaff_x20;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
    func_0x000107c4179c(0x4032000000000000);
    func_0x000107c61180();
    func_0x000107c54adc(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar2);
  }
  lVar1 = unaff_x20;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5670c(0x3fe0000000000000);
    func_0x000107c61170(lVar1);
  }
  lVar1 = unaff_x20;
  func_0x000107c5cac0();
  func_0x000107c61180();
  func_0x000107c5251c();
  func_0x000107c61170(lVar1);
  lVar1 = unaff_x20;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c55f80();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c55268(0,0xc010000000000000,0,0x4010000000000000);
  func_0x000107c59e38(0,0x4010000000000000,0,0xc010000000000000);
  func_0x000107c53840();
  func_0x000107c5a050();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  lVar1 = unaff_x20;
  func_0x000107c44d9c();
  func_0x000107c61180();
  lVar4 = lVar1;
  func_0x000107c40290(0x404b000000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  *(long *)(puVar3 + 0x20) = lVar4;
  uVar5 = 0;
  func_0x000100847984(0);
  puVar6 = puVar3;
  func_0x000107c5fc48(puVar3,uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar6);
  lVar1 = _DAT_112d4a960;
  func_0x000107c61428(unaff_x20 + _DAT_112d4a960,auStack_58,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  FUN_100f015ec();
  return;
}



/* Entry: 100f015ec; end: 100f017c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f015ec(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4a960;
  func_0x000107c61428(unaff_x20 + _DAT_112d4a960,auStack_48,0,0);
  lStack_50 = *(long *)(unaff_x20 + lVar1);
  if ((lStack_50 == 0) || (lStack_50 == 1)) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50();
    func_0x000107c61170(puVar3);
    lStack_50 = *(long *)(unaff_x20 + lVar1);
    if ((lStack_50 == 0) || (lStack_50 == 1)) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c59e34();
      func_0x000107c61170(puVar3);
      lStack_50 = *(long *)(unaff_x20 + lVar1);
      if ((lStack_50 == 0) || (lStack_50 == 1)) {
        puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c5af88();
        func_0x000107c61180();
        func_0x000107c59e10();
        func_0x000107c61170(puVar3);
        lVar4 = unaff_x20;
        func_0x000107c4aba4();
        func_0x000107c61180();
        lStack_50 = *(long *)(unaff_x20 + lVar1);
        puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
        if (lStack_50 == 1) {
          func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
          func_0x000107c3fa94();
        }
        else {
          if (lStack_50 != 0) goto LAB_100f017a0;
          func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
          func_0x000107c5af88();
        }
        func_0x000107c61180();
        puVar5 = puVar3;
        func_0x000107c3ab24();
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        func_0x000107c52df8(lVar4);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(puVar5);
        return;
      }
    }
  }
LAB_100f017a0:
  func_0x000107c60614(&UNK_110367350,&lStack_50,&UNK_110367350,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f017c4);
  (*pcVar2)();
}



/* Entry: 100f017c4; end: 100f0184f; -[_TtC7OAuthUI15OAuthBaseButton layoutSubviews] */

void FUN_100f017c4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  FUN_100f00fc4();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1);
  func_0x000107c3ec60(param_1);
  func_0x000107c609cc();
  func_0x000107c4043c(param_1);
  func_0x000107c53810(param_1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100f01850; end: 100f0185b;  */

void FUN_100f01850(void)

{
  FUN_100f00fc4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f0185c; end: 100f0191f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100f0185c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_a0 [16];
  undefined8 *puStack_90;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4a968);
  uVar2 = *puVar1;
  lVar4 = puVar1[1];
  lVar6 = lVar4;
  uVar7 = uVar2;
  if (lVar4 == 1) {
    uStack_60 = 0;
    lStack_58 = 0;
    puStack_90 = &uStack_60;
    puStack_70 = puStack_90;
    func_0x00010486ddec(FUN_100f01e48,auStack_80,0x100f01e68,auStack_a0);
    lVar6 = lStack_58;
    uVar7 = uStack_60;
    uVar3 = *puVar1;
    uVar5 = puVar1[1];
    *puVar1 = uStack_60;
    puVar1[1] = lStack_58;
    func_0x000107c61434(lStack_58);
    func_0x0001007742d4(uVar3,uVar5);
  }
  func_0x0001007742e8(uVar2,lVar4);
  auVar8._8_8_ = lVar6;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 100f01920; end: 100f0197f;  */

void FUN_100f01920(long *param_1,code *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = param_1;
  (*param_2)();
  func_0x000107c61180();
  if (plVar1 == (long *)0x0) {
    plVar3 = (long *)0x0;
    param_2 = (code *)0x0;
  }
  else {
    plVar3 = plVar1;
    func_0x000107c5faec();
    func_0x000107c61170(plVar1);
  }
  lVar2 = param_1[1];
  *param_1 = (long)plVar3;
  param_1[1] = (long)param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 100f01980; end: 100f01a2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100f01980(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_80 [16];
  long *plStack_70;
  undefined1 auStack_60 [16];
  long *plStack_50;
  long lStack_48;
  
  lVar1 = _DAT_112d4a970;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4a970);
  lVar4 = lVar2;
  if (lVar2 == 1) {
    plStack_70 = &lStack_48;
    lStack_48 = 0;
    plStack_50 = plStack_70;
    func_0x00010486ddec(*(undefined8 *)(unaff_x20 + _DAT_112d4a978),0x100f01e28,auStack_60,
                        0x100f01e30,auStack_80);
    lVar4 = lStack_48;
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lStack_48;
    func_0x000107c61174(lStack_48);
    func_0x000100f01e18(uVar3);
  }
  func_0x000100f01e38(lVar2);
  return lVar4;
}



/* Entry: 100f01a2c; end: 100f01b6f;  */

/* WARNING: Possible PIC construction at 0x000100f01a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f01aa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f01a88) */
/* WARNING: Removing unreachable block (ram,0x000100f01ab0) */
/* WARNING: Removing unreachable block (ram,0x000100f01a8c) */
/* WARNING: Removing unreachable block (ram,0x000100f01aac) */
/* WARNING: Removing unreachable block (ram,0x000100f01ab4) */

void FUN_100f01a2c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x6f6c5f656c707061;
  func_0x000107c5fadc(0x6f6c5f656c707061,0xea00000000006f67);
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c450cc();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100f01b70; end: 100f01b9f;  */

void FUN_100f01b70(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_100f01ba0(param_1);
  return;
}



/* Entry: 100f01ba0; end: 100f01caf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100f01ba0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 *puVar4;
  
  puVar2 = &stack0xffffffffffffffc0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4a968);
  puVar1[1] = 1;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a970) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a978) = param_1;
  FUN_100f01cb0();
  puVar3 = PTR_s_initWithFrame__1125e2948;
  func_0x000107c61174(param_1);
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffc0);
  func_0x000107c61180();
  puVar4 = puVar2;
  FUN_100f0185c();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar3);
  }
  func_0x000107c59e1c(puVar2);
  func_0x000107c61170(puVar4);
  FUN_100f01980();
  func_0x000107c55260(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar4);
  return puVar2;
}



/* Entry: 100f01cb0; end: 100f01ccf;  */

void FUN_100f01cb0(void)

{
  func_0x000107c61168(&PTR_PTR_11279fd10);
  return;
}



/* Entry: 100f01cd0; end: 100f01d3b; -[_TtC7OAuthUI11OAuthButton initWithFrame:] */

void FUN_100f01cd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OAuthUI.OAuthButton",0x13,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f01cfc);
  (*pcVar1)();
}



/* Entry: 100f01d3c; end: 100f01d47;  */

void FUN_100f01d3c(void)

{
  FUN_100f01cb0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f01d48; end: 100f01d77;  */

void FUN_100f01d48(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f01d78; end: 100f01dc3; -[_TtC7OAuthUI11OAuthButton .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f01d94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f01d98) */
/* WARNING: Removing unreachable block (ram,0x000100f01e18) */
/* WARNING: Removing unreachable block (ram,0x000100f01e24) */
/* WARNING: Removing unreachable block (ram,0x000100f01e20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f01d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4a978));
  return;
}



/* Entry: 100f01dc4; end: 100f01dc7;  */

void FUN_100f01dc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4a980 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911120;
  func_0x000107c61520(&UNK_10d911120,&UNK_110367350);
  puRam0000000112d4a980 = puVar1;
  return;
}



/* Entry: 100f01dc8; end: 100f01e07;  */

void FUN_100f01dc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4a980 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d911120;
  func_0x000107c61520(&UNK_10d911120,&UNK_110367350);
  puRam0000000112d4a980 = puVar1;
  return;
}



/* Entry: 100f01e08; end: 100f01e47;  */

undefined1  [16] FUN_100f01e08(void)

{
  return ZEXT816(0x110367350);
}



/* Entry: 100f01e48; end: 100f01e87;  */

void FUN_100f01e48(void)

{
  long unaff_x20;
  
  FUN_100f01920(*(undefined8 *)(unaff_x20 + 0x10),&UNK_10b0af3d4);
  return;
}



/* Entry: 100f01e88; end: 100f01e93;  */

void FUN_100f01e88(long param_1,long param_2)

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



/* Entry: 100f01e94; end: 100f01f17; -[_TtC7OAuthUI13OAuthListView style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f01e94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4a9d8;
  func_0x000107c61428(param_1 + _DAT_112d4a9d8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 100f01f18; end: 100f01f47; -[_TtC7OAuthUI13OAuthListView setStyle:] */

void FUN_100f01f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_100f01f48(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f01f48; end: 100f020c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f01f48(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = _DAT_112d4a9d8;
  func_0x000107c61428(unaff_x20 + _DAT_112d4a9d8,auStack_78,1,0);
  *(undefined8 *)(unaff_x20 + lVar3) = param_1;
  lVar2 = _DAT_112d4a9e0;
  func_0x000107c61428(unaff_x20 + _DAT_112d4a9e0,auStack_90,0,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar6);
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100f020b0);
          (*pcVar4)();
        }
        uVar5 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar8;
        FUN_100f03f2c(uVar8,uVar6,FUN_100f01cb0,0x747542687475414f,0xeb000000006e6f74);
      }
      lVar2 = _DAT_112d4a960;
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100f020ac);
        (*pcVar4)();
      }
      uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
      func_0x000107c61428(uVar5 + _DAT_112d4a960,auStack_a8,1,0);
      *(undefined8 *)(uVar5 + lVar2) = uVar9;
      FUN_100f015ec();
      func_0x000107c61170(uVar5);
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar7);
  }
  func_0x000107c6142c(uVar6);
  return;
}



/* Entry: 100f020c8; end: 100f02133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100f020c8(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar2 = 0x40;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x40,0xd1c9);
  }
  *param_1 = lVar2;
  lVar1 = _DAT_112d4a9d8;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  *(long *)(lVar2 + 0x38) = lVar1;
  func_0x000107c61428(unaff_x20 + lVar1,lVar2,0x21,0);
  auVar3._8_8_ = unaff_x20 + lVar1;
  auVar3._0_8_ = FUN_100f02134;
  return auVar3;
}



/* Entry: 100f02134; end: 100f0229b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f02134(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  lVar5 = *param_1;
  func_0x000107c614a8(lVar5);
  lVar2 = _DAT_112d4a9e0;
  if ((param_2 & 1) == 0) {
    lVar6 = *(long *)(lVar5 + 0x30);
    func_0x000107c61428(lVar6 + _DAT_112d4a9e0,lVar5,0,0);
    uVar7 = *(ulong *)(lVar6 + lVar2);
    if (uVar7 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar8 = uVar7;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(uVar7);
    if (uVar8 != 0) {
      uVar9 = 0;
      do {
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100f02284);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar9;
          FUN_100f03f2c(uVar9,uVar7,FUN_100f01cb0,0x747542687475414f,0xeb000000006e6f74);
        }
        lVar2 = _DAT_112d4a960;
        uVar1 = uVar9 + 1;
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100f02280);
          (*pcVar3)();
        }
        uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0x30) + *(long *)(lVar5 + 0x38));
        func_0x000107c61428(uVar4 + _DAT_112d4a960,lVar5 + 0x18,1,0);
        *(undefined8 *)(uVar4 + lVar2) = uVar10;
        FUN_100f015ec();
        func_0x000107c61170(uVar4);
        uVar9 = uVar9 + 1;
      } while (uVar1 != uVar8);
    }
    func_0x000107c6142c(uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar5);
  return;
}



/* Entry: 100f0229c; end: 100f022b3; -[_TtC7OAuthUI13OAuthListView isOneTapLoginSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0229c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112d4a9e8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf258b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112d4a9e8),PTR_s_buttonSelected_1125a6fd0);
    return;
  }
  return;
}



/* Entry: 100f022b4; end: 100f022d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f022b4(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112d4a9e8) != 0) {
    func_0x000107c3ee80();
  }
  return;
}



/* Entry: 100f022d8; end: 100f022ff; -[_TtC7OAuthUI13OAuthListView setIsOneTapLoginSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f022d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1749f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112d4a9e8),PTR_s_setButtonSelected__11263ac98);
  return;
}



/* Entry: 100f02300; end: 100f02343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100f02300(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112d4a9e8;
  *param_1 = unaff_x20;
  param_1[1] = lVar1;
  lVar1 = *(long *)(unaff_x20 + lVar1);
  if (lVar1 != 0) {
    func_0x000107c3ee80();
  }
  *(char *)(param_1 + 2) = (char)lVar1;
  auVar2._8_8_ = param_1 + 2;
  auVar2._0_8_ = FUN_100f02344;
  return auVar2;
}



/* Entry: 100f02344; end: 100f02353;  */

void FUN_100f02344(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1749f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*param_1 + param_1[1]),PTR_s_setButtonSelected__11263ac98,
             (char)param_1[2]);
  return;
}



/* Entry: 100f02354; end: 100f0241b; -[_TtC7OAuthUI13OAuthListView initWithOAuthTypes:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100f02354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = 0;
  func_0x000100f04718();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112d4aa88) = 0;
  *(undefined1 *)(lVar3 + _DAT_112d4aa90) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  func_0x000107c47b48(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(plVar4);
  return param_1;
}



/* Entry: 100f0241c; end: 100f0262b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100f0241c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  lVar2 = _DAT_112d4a9f0;
  func_0x000107c61614(unaff_x20 + _DAT_112d4a9f0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4a9e8) = 0;
  *(undefined **)(unaff_x20 + _DAT_112d4a9e0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a9d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4a9f8) = param_1;
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112d4aa00) = param_3;
  puVar1 = PTR_s_initWithFrame__1125e2948;
  func_0x000107c61174(param_3);
  func_0x000107c61154(0,0,0,0,auStack_50,puVar1);
  func_0x000107c61180();
  FUN_100f02738();
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  return puVar3;
}



/* Entry: 100f0262c; end: 100f02697; -[_TtC7OAuthUI13OAuthListView initWithOAuthTypes:delegate:oAuthListViewConfig:] */

void FUN_100f0262c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010486de80(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000100f02528(param_3,param_4,param_5);
  return;
}



/* Entry: 100f02698; end: 100f02737; -[_TtC7OAuthUI13OAuthListView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f02698(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112d4a9f0,0);
  *(undefined8 *)(param_1 + _DAT_112d4a9e8) = 0;
  *(undefined **)(param_1 + _DAT_112d4a9e0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(param_1 + _DAT_112d4a9d8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "OAuthUI/OAuthListView.swift",0x1b,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f02738);
  (*pcVar1)();
}



/* Entry: 100f02738; end: 100f03183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f02738(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  long unaff_x20;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c52610(puVar3);
  func_0x000107c54280(puVar3);
  func_0x000107c59594(0x4030000000000000,puVar3);
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c3d89c();
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  lVar5 = 0x112d360b8;
  FUN_100f03bd4(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  lVar25 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar25 + 0x18) = 9;
  *(undefined8 *)(lVar25 + 0x10) = 4;
  puVar6 = puVar3;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar7);
  *(undefined **)(lVar25 + 0x20) = puVar8;
  puVar6 = puVar3;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar7);
  *(undefined **)(lVar25 + 0x28) = puVar8;
  puVar6 = puVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar7);
  *(undefined **)(lVar25 + 0x30) = puVar8;
  puVar6 = puVar3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  lVar7 = unaff_x20;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar8 = puVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar7);
  *(undefined **)(lVar25 + 0x38) = puVar8;
  uVar9 = 0;
  FUN_100f04294(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar7 = lVar25;
  uVar19 = uVar9;
  func_0x000107c5fc48(lVar25,uVar9);
  func_0x000107c61574(lVar25);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170();
  lVar25 = *(long *)(unaff_x20 + _DAT_112d4aa00);
  if (*(char *)(lVar25 + _DAT_112d4aa88) == '\x01') {
    func_0x000100f03f0c();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar10 = lVar7;
    func_0x000108b9aa8c();
    func_0x000107c61180();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f03184);
      (*pcVar2)();
    }
    lVar12 = lVar10;
    func_0x000107c5faec();
    func_0x000107c61170(lVar10);
    FUN_100f039ec(lVar12,uVar19);
    func_0x000107c537fc(0x447a0000,lVar7);
    func_0x000107c3d5b4(puVar3);
    func_0x000107c61170(lVar7);
  }
  uVar21 = *(ulong *)(unaff_x20 + _DAT_112d4a9f8);
  if (uVar21 >> 0x3e == 0) {
    uVar24 = *(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar24 = uVar21 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar21) {
      uVar24 = uVar21;
    }
    func_0x000107c60480();
  }
  lVar7 = _DAT_112d4a9e0;
  if (uVar24 != 0) {
    uVar26 = 0;
    do {
      if ((uVar21 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100f0314c);
          (*pcVar2)();
        }
        uVar11 = *(ulong *)(uVar21 + uVar26 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar11 = uVar26;
        FUN_100f03f2c(uVar26,uVar21,&SUB_10486de80,0x707954687475414f,0xed0000636a624f65);
      }
      uVar27 = uVar26 + 1;
      if (SCARRY8(uVar26,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f03148);
        (*pcVar2)();
      }
      lVar12 = 0;
      FUN_100f01cb0();
      lVar10 = lVar12;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(lVar10 + _DAT_112d4a968);
      puVar1[1] = 1;
      *puVar1 = 0;
      *(undefined8 *)(lVar10 + _DAT_112d4a970) = 1;
      *(ulong *)(lVar10 + _DAT_112d4a978) = uVar11;
      puVar6 = PTR_s_initWithFrame__1125e2948;
      lStack_78 = lVar10;
      lStack_70 = lVar12;
      func_0x000107c61174(uVar11);
      func_0x000107c61174();
      plVar13 = &lStack_78;
      func_0x000107c61154(0,0,0,0);
      func_0x000107c61180();
      plVar22 = plVar13;
      FUN_100f0185c();
      if (puVar6 == (undefined *)0x0) {
        plVar22 = (long *)0x0;
      }
      else {
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar6);
      }
      func_0x000107c59e1c(plVar13);
      func_0x000107c61170(plVar22);
      FUN_100f01980();
      func_0x000107c55260(plVar13);
      func_0x000107c61170(plVar13);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(plVar22);
      func_0x000107c3d8b8(plVar13);
      func_0x000107c3d5b4(puVar3);
      func_0x000107c61428(unaff_x20 + lVar7,auStack_90,0x21,0);
      uVar23 = *(ulong *)(unaff_x20 + lVar7);
      func_0x000107c61174();
      uVar15 = uVar23;
      func_0x000107c61550();
      *(ulong *)(unaff_x20 + lVar7) = uVar23;
      if ((((int)uVar15 == 0) || ((long)uVar23 < 0)) || (uVar15 = uVar23, (uVar23 >> 0x3e & 1) != 0)
         ) {
        if (uVar23 >> 0x3e == 0) {
          uVar14 = *(ulong *)((uVar23 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar14 = uVar23 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar23) {
            uVar14 = uVar23;
          }
          func_0x000107c60480(uVar14);
        }
        uVar15 = 0;
        FUN_100f03c4c(0,uVar14 + 1,1,uVar23);
        *(ulong *)(unaff_x20 + lVar7) = uVar15;
      }
      uVar20 = uVar15 & 0xffffffffffffff8;
      uVar23 = *(ulong *)(uVar20 + 0x10);
      uVar14 = uVar15;
      if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar23) {
        uVar14 = (ulong)(1 < *(ulong *)(uVar20 + 0x18));
        FUN_100f03c4c(uVar14,uVar23 + 1,1,uVar15);
        uVar20 = uVar14 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar20 + 0x10) = uVar23 + 1;
      *(long **)(uVar20 + uVar23 * 8 + 0x20) = plVar13;
      *(ulong *)(unaff_x20 + lVar7) = uVar14;
      func_0x000107c614a8(auStack_90);
      func_0x000107c61170(plVar13);
      func_0x000107c61170(uVar11);
      uVar26 = uVar26 + 1;
    } while (uVar27 != uVar24);
  }
  if (*(char *)(lVar25 + _DAT_112d4aa90) == '\x01') {
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
    func_0x000107c3d5b4(puVar3);
    puVar8 = PTR_PTR_1126af088;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c53fcc();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c537fc(0x447a0000);
    func_0x000107c5a050(puVar8);
    func_0x000107c3d89c(puVar6);
    func_0x000107c613fc(lVar5,((ulong)*(uint *)(lVar5 + 0x30) + 7 & 0x1fffffff8) + 0x28,
                        *(ushort *)(lVar5 + 0x34) | 7);
    *(undefined8 *)(lVar5 + 0x18) = 0xb;
    *(undefined8 *)(lVar5 + 0x10) = 5;
    puVar16 = puVar8;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar17 = puVar6;
    func_0x000107c4acb0(puVar6);
    func_0x000107c61180();
    puVar18 = puVar16;
    func_0x000107c40294();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar17);
    *(undefined **)(lVar5 + 0x20) = puVar18;
    puVar16 = puVar8;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    puVar17 = puVar6;
    func_0x000107c5ce8c(puVar6);
    func_0x000107c61180();
    puVar18 = puVar16;
    func_0x000107c402a4();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar17);
    *(undefined **)(lVar5 + 0x28) = puVar18;
    puVar16 = puVar8;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    puVar17 = puVar6;
    func_0x000107c3f75c(puVar6);
    func_0x000107c61180();
    puVar18 = puVar16;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar17);
    *(undefined **)(lVar5 + 0x30) = puVar18;
    puVar16 = puVar8;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    puVar17 = puVar6;
    func_0x000107c5cbe4(puVar6);
    func_0x000107c61180();
    puVar18 = puVar16;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar17);
    *(undefined **)(lVar5 + 0x38) = puVar18;
    puVar16 = puVar8;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    puVar17 = puVar6;
    func_0x000107c3ec1c(puVar6);
    func_0x000107c61180();
    puVar18 = puVar16;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar17);
    *(undefined **)(lVar5 + 0x40) = puVar18;
    lVar25 = lVar5;
    func_0x000107c5fc48(lVar5,uVar9);
    func_0x000107c61574(lVar5);
    func_0x000107c3d048(puVar4);
    func_0x000107c61170(lVar25);
    func_0x000107c61170(puVar6);
    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d4a9e8);
    *(undefined **)(unaff_x20 + _DAT_112d4a9e8) = puVar8;
    func_0x000107c61170(uVar19);
  }
  lVar5 = _DAT_112d4a9d8;
  func_0x000107c61428(unaff_x20 + _DAT_112d4a9d8,auStack_90,1,0);
  *(undefined8 *)(unaff_x20 + lVar5) = 0;
  func_0x000107c61428(unaff_x20 + lVar7,auStack_a8,0,0);
  uVar21 = *(ulong *)(unaff_x20 + lVar7);
  if (uVar21 >> 0x3e == 0) {
    uVar24 = *(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar24 = uVar21 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar21) {
      uVar24 = uVar21;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar21);
  if (uVar24 != 0) {
    uVar26 = 0;
    do {
      if ((uVar21 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100f03150);
          (*pcVar2)();
        }
        uVar11 = *(ulong *)(uVar21 + uVar26 * 8 + 0x20);
        func_0x000107c61174();
        lVar25 = _DAT_112d4a960;
      }
      else {
        uVar11 = uVar26;
        FUN_100f03f2c(uVar26,uVar21,FUN_100f01cb0,0x747542687475414f,0xeb000000006e6f74);
        lVar25 = _DAT_112d4a960;
      }
      _DAT_112d4a960 = lVar25;
      if (SCARRY8(uVar26,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f03114);
        (*pcVar2)();
      }
      uVar27 = uVar26 + 1;
      uVar19 = *(undefined8 *)(unaff_x20 + lVar5);
      func_0x000107c61428(uVar11 + lVar25,auStack_c0,1,0);
      *(undefined8 *)(uVar11 + lVar25) = uVar19;
      FUN_100f015ec();
      func_0x000107c61170(uVar11);
      uVar26 = uVar26 + 1;
    } while (uVar27 != uVar24);
  }
  func_0x000107c6142c(uVar21);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 100f03184; end: 100f031e3; -[_TtC7OAuthUI13OAuthListView handleOAuthButtonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f03184(long param_1)

{
  param_1 = param_1 + _DAT_112d4a9f0;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4d984();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 100f031e4; end: 100f0320f; -[_TtC7OAuthUI13OAuthListView initWithFrame:] */

void FUN_100f031e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OAuthUI.OAuthListView",0x15,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f03210);
  (*pcVar1)();
}



/* Entry: 100f03210; end: 100f0321b;  */

void FUN_100f03210(void)

{
  FUN_100f03eec();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f0321c; end: 100f03283; -[_TtC7OAuthUI13OAuthListView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f03238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f0323c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0321c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d4a9f8));
  return;
}



/* Entry: 100f03284; end: 100f032ff; -[_TtC7OAuthUI13OAuthListView didToggleCheckbox:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f03284(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + _DAT_112d4a9f0;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c61150();
    if ((uVar2 & 1) != 0) {
      func_0x000107c4d988(uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 100f03300; end: 100f0340b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100f03300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  lVar2 = _DAT_112d4aa30;
  puVar4 = &stack0xffffffffffffffa0;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112d4aa38;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112d4aa40;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112d4aa48;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4aa50);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  func_0x000100f03f0c();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_100f03454();
  func_0x000107c61170(puVar4);
  return puVar4;
}



/* Entry: 100f0340c; end: 100f0342b; -[_TtC7OAuthUI18OAuthListSeparator initWithFrame:] */

void FUN_100f0340c(void)

{
  FUN_100f03300();
  return;
}



/* Entry: 100f0342c; end: 100f03453; -[_TtC7OAuthUI18OAuthListSeparator initWithCoder:] */

void FUN_100f0342c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100f042d4();
  return;
}



/* Entry: 100f03454; end: 100f039eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f03454(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d4aa30);
  func_0x000107c52b2c(uVar10,param_2,0);
  func_0x000107c52610(uVar10);
  func_0x000107c54280(uVar10);
  func_0x000107c5a050(uVar10);
  func_0x000107c3d89c();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar3 = 0x112d360b8;
  FUN_100f03bd4(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 9;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  uVar5 = uVar10;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar7 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar3 + 0x20) = uVar7;
  uVar5 = uVar10;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar7 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar3 + 0x28) = uVar7;
  uVar5 = uVar10;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar7 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar3 + 0x30) = uVar7;
  uVar5 = uVar10;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar7 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar3 + 0x38) = uVar7;
  uVar5 = 0;
  FUN_100f04294(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar4 = lVar3;
  func_0x000107c5fc48(lVar3,uVar5);
  func_0x000107c61574(lVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(lVar4);
  uVar6 = 0x112d360b0;
  FUN_100f03bd4(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
  func_0x000107c61534();
  *(undefined8 *)(uVar6 + 0x18) = 5;
  *(undefined8 *)(uVar6 + 0x10) = 2;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d4aa38);
  *(undefined8 *)(uVar6 + 0x20) = uVar7;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d4aa40);
  *(undefined8 *)(uVar6 + 0x28) = uVar5;
  func_0x000107c61174();
  func_0x000107c61174(uVar5);
  if ((uVar6 & 0xc000000000000001) == 0) {
    uVar9 = uVar7;
    func_0x000107c61174(uVar7);
  }
  else {
    uVar9 = 0;
    func_0x000100f040d0(0,uVar6);
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(uVar9);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(uVar9);
  uVar11 = uVar9;
  func_0x000107c44d9c(uVar9);
  func_0x000107c61180();
  uVar8 = uVar11;
  func_0x000107c40290(0x3ff0000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c521e8(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  if ((uVar6 & 0xc000000000000001) == 0) {
    if (*(ulong *)(uVar6 + 0x10) < 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f039ec);
      (*pcVar1)();
    }
    uVar9 = *(undefined8 *)(uVar6 + 0x28);
    func_0x000107c61174(uVar9);
  }
  else {
    uVar9 = 1;
    func_0x000100f040d0(1,uVar6);
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(uVar9);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(uVar9);
  uVar11 = uVar9;
  func_0x000107c44d9c(uVar9);
  func_0x000107c61180();
  uVar8 = uVar11;
  func_0x000107c40290(0x3ff0000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c521e8(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61588(uVar6);
  uVar11 = *(undefined8 *)(uVar6 + 0x10);
  uVar9 = 0;
  FUN_100f04294(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61408((undefined8 *)(uVar6 + 0x20),uVar11,uVar9);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d4aa48);
  func_0x000107c59c74(uVar9);
  func_0x000107c5a100(uVar9);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(uVar9);
  func_0x000107c61170(puVar2);
  func_0x000107c5381c(0x447a0000,uVar9);
  func_0x000107c537fc(0x447a0000,uVar9);
  func_0x000107c3d5b4(uVar10);
  func_0x000107c3d5b4(uVar10);
  func_0x000107c3d5b4(uVar10);
  func_0x000107c5e308(uVar5);
  func_0x000107c61180();
  func_0x000107c5e308(uVar7);
  func_0x000107c61180();
  uVar10 = uVar5;
  func_0x000107c40280(uVar5);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c521e8(uVar10);
  func_0x000107c61170(uVar10);
  return;
}



/* Entry: 100f039ec; end: 100f03a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f039ec(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  ulong uVar3;
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_112d4aa50);
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d4aa48);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(uVar2);
  func_0x000107c61170(param_1);
  uVar3 = *puVar1 & 0xffffffffffff;
  if ((puVar1[1] & 0x2000000000000000) != 0) {
    uVar3 = puVar1[1] >> 0x38 & 0xf;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setHidden__1126479f8,uVar3 == 0);
  return;
}



/* Entry: 100f03a98; end: 100f03acf; -[_TtC7OAuthUI18OAuthListSeparator intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f03a98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  func_0x000107c498ec(*(undefined8 *)(param_1 + _DAT_112d4aa48));
  return uVar1;
}



/* Entry: 100f03ad0; end: 100f03adb;  */

void FUN_100f03ad0(void)

{
  (*(code *)0x100f03f0c)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f03adc; end: 100f03b0b;  */

void FUN_100f03adc(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f03b0c; end: 100f03b77; -[_TtC7OAuthUI18OAuthListSeparator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f03b0c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4aa30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4aa38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4aa40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4aa48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d4aa50 + 8))
  ;
  return;
}



/* Entry: 100f03b78; end: 100f03bd3;  */

void FUN_100f03b78(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_100f01cb0();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d4aa80;
  plVar5 = (long *)&UNK_10d911240;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 100f03bd4; end: 100f03c4b;  */

void FUN_100f03bd4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100f04294(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100f03c4c; end: 100f03d73;  */

ulong FUN_100f03c4c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f03d74);
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
  FUN_100f03d74(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f03d70);
      (*pcVar1)();
    }
    FUN_100f03df4(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 100f03d74; end: 100f03df3;  */

undefined * FUN_100f03d74(undefined *param_1,undefined *param_2)

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
    FUN_100f03b78();
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



/* Entry: 100f03df4; end: 100f03eeb;  */

long FUN_100f03df4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f03ee8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f03eec);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_100f01cb0(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_100f01cb0(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f03ee4);
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



/* Entry: 100f03eec; end: 100f03f2b;  */

void FUN_100f03eec(void)

{
  func_0x000107c61168(&PTR_PTR_11279fe50);
  return;
}



/* Entry: 100f03f2c; end: 100f04293;  */

ulong FUN_100f03f2c(ulong param_1,ulong param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f04014);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f04018);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    (*param_3)(0);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = 0;
    (*param_3)(0);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(param_4,param_5);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f040d0);
  (*pcVar2)();
}



/* Entry: 100f04294; end: 100f042d3;  */

void FUN_100f04294(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100f042d4; end: 100f043b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f042d4(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar2 = _DAT_112d4aa30;
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d4aa38;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d4aa40;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d4aa48;
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4aa50);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "OAuthUI/OAuthListView.swift",0x1b,2,0x9a,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100f043b4);
  (*pcVar3)();
}



/* Entry: 100f043b4; end: 100f043d7;  */

undefined8 FUN_100f043b4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100f043d8; end: 100f04533;  */

int FUN_100f043d8(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 4;
    if (param_2 + 0xff01 < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xff01 < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) goto LAB_100f04454;
        goto LAB_100f04434;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100f04434:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xff01;
    }
  }
LAB_100f04454:
  uVar1 = 0xffffffff;
  if (1 < (byte)*param_1) {
    uVar1 = (byte)*param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100f04534; end: 100f04597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f04534(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112d4aa88) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112d4aa90) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f04598; end: 100f045a7; -[SCOAuthListViewConfig showSeparator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100f04598(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112d4aa88);
}



/* Entry: 100f045a8; end: 100f045b7; -[SCOAuthListViewConfig showOneTapLoginCheckbox] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100f045a8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112d4aa90);
}



/* Entry: 100f045b8; end: 100f0461b; -[SCOAuthListViewConfig initWithShowSeparator:showOneTapLoginCheckbox:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f045b8(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112d4aa88) = param_3;
  *(undefined1 *)(param_1 + _DAT_112d4aa90) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f0461c; end: 100f0467b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0461c(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(byte *)(unaff_x20 + _DAT_112d4aa88) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_112d4aa90) = (byte)((uint)param_1 >> 8) & 1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f0467c; end: 100f0467f; -[SCOAuthListViewConfig copyWithZone:] */

void FUN_100f0467c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100f04680; end: 100f0469b; -[SCOAuthListViewConfig description] */

void FUN_100f04680(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f0469c; end: 100f04737; -[SCOAuthListViewConfig init] */

void FUN_100f0469c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "OAuthUI/OAuthListViewConfigWrapper.swift",0x28,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f046e4);
  (*pcVar1)();
}



/* Entry: 100f04738; end: 100f0479b;  */

uint FUN_100f04738(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x0001007bbbf8(0);
  func_0x000107c60118(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c60118(uVar5,uVar2);
    uVar3 = (uint)uVar5 & 1;
  }
  return uVar3;
}



/* Entry: 100f0479c; end: 100f047c3;  */

/* WARNING: Possible PIC construction at 0x000100f047b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f047b4) */

void FUN_100f0479c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 100f047c4; end: 100f0481f;  */

undefined8 * FUN_100f047c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100f04820; end: 100f0485b;  */

undefined8 * FUN_100f04820(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 100f0485c; end: 100f048f7;  */

int FUN_100f0485c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f048f8; end: 100f049cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100f048f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112d4aac0;
  func_0x000107c61614(unaff_x20 + _DAT_112d4aac0,0);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112d4aac8) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4aad0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d4aad8) = param_5;
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar3;
}



/* Entry: 100f049d0; end: 100f04ac3; -[PhoneEmailFirstLogInScope initWithDelegate:uiContainer:lastLoginEmailOrUsername:lastLoginPhone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f049d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = param_1;
  func_0x000107c614f0();
  if (param_5 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  lVar3 = _DAT_112d4aac0;
  func_0x000107c61614(param_1 + _DAT_112d4aac0,0);
  func_0x000107c61428(param_1 + lVar3,auStack_68,1,0);
  func_0x000107c61604(param_1 + lVar3,param_3);
  *(undefined8 *)(param_1 + _DAT_112d4aac8) = param_4;
  plVar1 = (long *)(param_1 + _DAT_112d4aad0);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112d4aad8) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar4;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_78,puVar2);
  return;
}



/* Entry: 100f04ac4; end: 100f04b23; -[PhoneEmailFirstLogInScope init] */

void FUN_100f04ac4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PhoneEmailFirstLogInScope.PhoneEmailFirstLogInScope",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f04af0);
  (*pcVar1)();
}



/* Entry: 100f04b24; end: 100f04b7f; -[PhoneEmailFirstLogInScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f04b24(long param_1)

{
  FUN_100ec7e9c(param_1 + _DAT_112d4aac0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d4aac8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d4aad0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4aad8));
  return;
}



/* Entry: 100f04b80; end: 100f04b9f;  */

void FUN_100f04b80(void)

{
  func_0x000107c61168(&PTR_PTR_1127a0198);
  return;
}



/* Entry: 100f04ba0; end: 100f04baf; -[SCPhoneEmailFirstLogInErrorData loginErrorDetail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f04ba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d4ab08));
  return;
}



/* Entry: 100f04bb0; end: 100f04bc3; -[SCPhoneEmailFirstLogInErrorData logInIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f04bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d4ab10));
  return;
}



/* Entry: 100f04bc4; end: 100f04c9f; -[SCPhoneEmailFirstLogInErrorData initWithLoginErrorDetail:logInIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f04bc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d4ab08) = param_3;
  *(undefined8 *)(param_1 + _DAT_112d4ab10) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 100f04ca0; end: 100f04d23; -[SCPhoneEmailFirstLogInErrorData hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f04ca0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  func_0x000107c606ac(auStack_68);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d4ab08);
  func_0x000107c61174();
  func_0x000107c44c3c(uVar1);
  func_0x000107c60690();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d4ab10);
  func_0x000107c44c3c(uVar1);
  func_0x000107c60690();
  func_0x000107c606a4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100f04d24; end: 100f04dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100f04d24(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    func_0x000107c6147c(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d4ab08);
      func_0x000107c49cec(uVar3);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d4ab10);
      uVar4 = *(undefined8 *)(lStack_58 + _DAT_112d4ab10);
      func_0x000107c61174(uVar4);
      func_0x000107c49cec(uVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lStack_58);
      return (uint)uVar3 & (uint)uVar5;
    }
  }
  return 0;
}



/* Entry: 100f04dfc; end: 100f04e7b; -[SCPhoneEmailFirstLogInErrorData isEqual:] */

uint FUN_100f04dfc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_100f04d24(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 100f04e7c; end: 100f04e7f; -[SCPhoneEmailFirstLogInErrorData copyWithZone:] */

void FUN_100f04e7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}


