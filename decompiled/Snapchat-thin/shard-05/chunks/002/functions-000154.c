/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103bd9ae4; end: 103bd9b43; +[SCMemoriesStreamingUtils streamingAvailableIntrinsicContentKeyWithSnap:contentDelivery:] */

void FUN_103bd9ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  FUN_103bd9bb0(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bd9b44; end: 103bd9b7f; -[SCMemoriesStreamingUtils init] */

void FUN_103bd9b44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103bd9eec();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bd9b80; end: 103bd9baf;  */

void FUN_103bd9b80(void)

{
  FUN_103bd9eec();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bd9bb0; end: 103bd9eeb;  */

undefined1 * FUN_103bd9bb0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar4 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    puVar6 = PTR_PTR_1126af5d0;
    func_0x000107c61168();
    puVar7 = puVar6;
    func_0x000103bd9f0c();
    puVar8 = &UNK_1106e48a8;
    func_0x000107c613f8(&UNK_1106e48a8,puVar7,0,0);
    *puVar7 = 0;
    puVar9 = puVar8;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar8);
    func_0x000107c42d78(puVar6);
    func_0x000107c61180();
    goto LAB_103bd9ec0;
  }
  lVar1 = param_1;
  func_0x00010b5f9b0c();
  lVar2 = lVar4;
  if ((int)lVar1 == 0) {
LAB_103bd9cb0:
    func_0x000107c5b2d0();
    func_0x000107c61180();
    if (param_1 == 0) {
      puVar6 = PTR_PTR_1126af5d0;
      func_0x000107c61168();
      puVar7 = puVar6;
      func_0x000103bd9f0c();
      puVar8 = &UNK_1106e48a8;
      func_0x000107c613f8(&UNK_1106e48a8,puVar7,0,0);
      *puVar7 = 1;
      puVar9 = puVar8;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar8);
      func_0x000107c42d78(puVar6);
    }
    else {
      lVar4 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5fb78(lVar4,lVar2);
      uVar3 = 0x2d616964656d2d67;
      puVar8 = PTR_PTR_1126b08b8;
      func_0x000107c610f8(PTR_PTR_1126b08b8);
      func_0x000107c5fadc(0x2d616964656d2d67,0xe800000000000000);
      func_0x000107c6142c(0xe800000000000000);
      func_0x000107c4766c(puVar8);
      func_0x000107c6142c(lVar2);
      func_0x000107c61170(uVar3);
      lVar4 = param_2;
      func_0x000107c4f740();
      puVar6 = PTR_PTR_1126af5d0;
      func_0x000107c61168();
      if (lVar4 != 0) {
        puVar7 = puVar6;
        func_0x000103bd9f0c();
        puVar5 = &UNK_1106e48a8;
        func_0x000107c613f8(&UNK_1106e48a8,puVar7,0,0);
        *puVar7 = 2;
        puVar9 = puVar5;
        func_0x000107c5ed2c();
        func_0x000107c614ac(puVar5);
        func_0x000107c42d78(puVar6);
        func_0x000107c61180();
        func_0x000107c615e8(param_2);
        func_0x000107c61170(puVar8);
        goto LAB_103bd9ec0;
      }
      func_0x000107c5c3c8();
      puVar9 = puVar8;
    }
  }
  else {
    lVar2 = param_1;
    func_0x00010b5f9b9c(param_1);
    func_0x000107c61180();
    lVar1 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    func_0x000107c5fb78(lVar1,lVar4);
    uVar3 = 0x2d616964656d2d67;
    lVar2 = -0x1800000000000000;
    puVar9 = PTR_PTR_1126b08b8;
    func_0x000107c610f8(PTR_PTR_1126b08b8);
    func_0x000107c5fadc(0x2d616964656d2d67,0xe800000000000000);
    func_0x000107c6142c(0xe800000000000000);
    func_0x000107c4766c(puVar9);
    func_0x000107c6142c(lVar4);
    func_0x000107c61170(uVar3);
    lVar4 = param_2;
    func_0x000107c4f740();
    if (lVar4 != 0) {
      func_0x000107c61170(puVar9);
      goto LAB_103bd9cb0;
    }
    puVar6 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c5c3c8();
  }
  func_0x000107c61180();
  func_0x000107c615e8(param_2);
LAB_103bd9ec0:
  func_0x000107c61170(puVar9);
  return puVar6;
}



/* Entry: 103bd9eec; end: 103bd9f4b;  */

void FUN_103bd9eec(void)

{
  func_0x000107c61168(&PTR_PTR_1129423a8);
  return;
}



/* Entry: 103bd9f4c; end: 103bda0b3;  */

int FUN_103bd9f4c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103bd9fc8;
        goto LAB_103bd9fac;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103bd9fac:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103bd9fc8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103bda0b4; end: 103bda0f3;  */

void FUN_103bda0b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc62acc;
  func_0x000107c61520(&UNK_10dc62acc,&UNK_1106e48a8);
  puRam0000000112ff5808 = puVar1;
  return;
}



/* Entry: 103bda0f4; end: 103bda137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bda0f4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff5810;
  func_0x000107c61428(unaff_x20 + _DAT_112ff5810,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 103bda138; end: 103bda18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bda138(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff5810;
  func_0x000107c61428(unaff_x20 + _DAT_112ff5810,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 103bda18c; end: 103bda1cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103bda18c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ff5810;
  func_0x000107c61428(unaff_x20 + _DAT_112ff5810,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103bda1cc;
  return auVar2;
}



/* Entry: 103bda1cc; end: 103bda1cf;  */

void FUN_103bda1cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103bda1d0; end: 103bda21b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bda1d0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff5818;
  func_0x000107c61428(unaff_x20 + _DAT_112ff5818,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61174(uVar2);
  return uVar2;
}



/* Entry: 103bda21c; end: 103bda26f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bda21c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff5818;
  func_0x000107c61428(unaff_x20 + _DAT_112ff5818,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103bda270; end: 103bda2af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103bda270(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ff5818;
  func_0x000107c61428(unaff_x20 + _DAT_112ff5818,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103bdaecc;
  return auVar2;
}



/* Entry: 103bda2b0; end: 103bda38f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bda2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112ff5810;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5810) = 0;
  lVar2 = _DAT_112ff5818;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5818) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5820) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5828) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5830) = param_2;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_78,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_4;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_90,1,0);
  *(undefined8 *)(unaff_x20 + lVar2) = param_5;
  func_0x000107c61154(auStack_a0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bda390; end: 103bda44b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bda390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112ff5810;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5810) = 0;
  lVar2 = _DAT_112ff5818;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5818) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5820) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5828) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5830) = param_2;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_58,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_4;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_70,1,0);
  *(undefined8 *)(unaff_x20 + lVar2) = param_5;
  FUN_103bda44c();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bda44c; end: 103bda46b;  */

void FUN_103bda44c(void)

{
  func_0x000107c61168(&PTR_PTR_112942470);
  return;
}



/* Entry: 103bda46c; end: 103bda56f; -[_TtC28SCComposerGenericWebLauncher28SCComposerGenericWebLauncher initWithWebBrowsingScopeExposer:webBrowsingScopeServices:webBrowserConfig:uiContainer:composerDeckConverter:] */

void FUN_103bda46c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  FUN_103bda390(param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 103bda570; end: 103bda587; -[_TtC28SCComposerGenericWebLauncher28SCComposerGenericWebLauncher initWithWebBrowsingScopeExposer:webBrowserConfig:uiContainer:composerDeckConverter:] */

void FUN_103bda570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c062e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithWebBrowsingScopeExposer__1125f6598,param_3,0,param_4,param_5,
             param_6);
  return;
}



/* Entry: 103bda588; end: 103bda5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bda588(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ff5828);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 103bda5e0; end: 103bda663; -[_TtC28SCComposerGenericWebLauncher28SCComposerGenericWebLauncher webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000103bda61c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bda638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bda620) */
/* WARNING: Removing unreachable block (ram,0x000103bda63c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bda5e0(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103bda664; end: 103bda687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bda664(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar5 = &UNK_1106e49a8;
  pcVar7 = "openUrl(with:)";
  ppuVar6 = &puStack_c0;
  lVar1 = param_1;
  func_0x000107c41408();
  func_0x000107c61180();
  lVar2 = _DAT_112ff5818;
  func_0x000107c61428(unaff_x20 + _DAT_112ff5818,auStack_78,0,0);
  lVar2 = *(long *)(unaff_x20 + lVar2);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      if (lVar1 != 0) {
        func_0x000107c615f0(lVar1);
        lVar8 = lVar2;
        func_0x000107c4e864();
        func_0x000107c61180();
        if (lVar8 == 0) {
          func_0x000107c615e8(lVar2);
          func_0x000107c615ec(lVar1,2);
          return;
        }
        lVar9 = lVar8;
        func_0x000107c4d06c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar8);
        func_0x000107c615e8(lVar2);
        func_0x000107c615ec(lVar1,2);
        goto LAB_103bda96c;
      }
      func_0x000107c615e8(lVar2);
    }
  }
  lVar2 = _DAT_112ff5810;
  func_0x000107c61428(unaff_x20 + _DAT_112ff5810,auStack_90,0,0);
  lVar9 = *(long *)(unaff_x20 + lVar2);
  func_0x000107c615f0(lVar9);
  func_0x000107c615e8(lVar1);
  if (lVar9 == 0) {
    return;
  }
LAB_103bda96c:
  lVar2 = *(long *)(unaff_x20 + _DAT_112ff5820);
  if (lVar2 == 0) {
    func_0x000107c615e8(lVar9);
  }
  else {
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c610f8(PTR_PTR_1126ae560);
    func_0x000107c61174(lVar2);
    func_0x000107c453e4(puVar3);
    puVar4 = puVar3;
    func_0x000107c43bf4();
    func_0x000107c61180();
    func_0x000107c613fc(&UNK_1106e49a8,0x18,7);
    *(long *)(puVar5 + 0x10) = param_1;
    pcStack_a0 = FUN_103bdae98;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_100e38b5c;
    puStack_a8 = &UNK_1106e49c0;
    puStack_98 = puVar5;
    func_0x000107c60bc4(&puStack_c0);
    puVar5 = puStack_98;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar5);
    func_0x0001000c10c0("openUrl(with:)");
    func_0x000107c61180();
    func_0x000107c5dc64(puVar4);
    func_0x000107c615e8(pcVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar4);
    lVar8 = *(long *)(unaff_x20 + _DAT_112ff5830);
    lVar1 = lVar8;
    if (lVar8 == 0) {
      func_0x0001000956f0();
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar1 = 0;
    }
    func_0x000107c61174(lVar1);
    lVar1 = lVar2;
    FUN_103c5d254(lVar2,puVar3,lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ff5828));
    func_0x000107c615e8(lVar9);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103bda688; end: 103bda7e3;  */

void FUN_103bda688(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  
  lVar1 = 0x112d36580;
  puVar5 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5d7e8(param_2);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  func_0x000107c5edd0(puVar7,uVar2,puVar5);
  func_0x000107c6142c(puVar5);
  puVar3 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar1);
  if ((int)puVar3 == 1) {
    func_0x0001000293e4(puVar7);
  }
  else {
    lVar4 = lVar6;
    (**(code **)(lVar8 + 0x20))(lVar6,puVar7,lVar1);
    if (param_1 != 0) {
      func_0x000107c5ed90();
      func_0x000107c4b788(param_1);
      func_0x000107c61170(lVar4);
    }
    (**(code **)(lVar8 + 8))(lVar6,lVar1);
  }
  return;
}



/* Entry: 103bda7e4; end: 103bda833; -[_TtC28SCComposerGenericWebLauncher28SCComposerGenericWebLauncher openUrlWithUrlRequest:] */

/* WARNING: Possible PIC construction at 0x000103bda81c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bda820) */

void FUN_103bda7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103bda664(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103bda834; end: 103bda857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bda834(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar5 = &UNK_1106e49f8;
  pcVar7 = "openHtml(with:)";
  ppuVar6 = &puStack_c0;
  lVar1 = param_1;
  func_0x000107c41408();
  func_0x000107c61180();
  lVar2 = _DAT_112ff5818;
  func_0x000107c61428(unaff_x20 + _DAT_112ff5818,auStack_78,0,0);
  lVar2 = *(long *)(unaff_x20 + lVar2);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      if (lVar1 != 0) {
        func_0x000107c615f0(lVar1);
        lVar8 = lVar2;
        func_0x000107c4e864();
        func_0x000107c61180();
        if (lVar8 == 0) {
          func_0x000107c615e8(lVar2);
          func_0x000107c615ec(lVar1,2);
          return;
        }
        lVar9 = lVar8;
        func_0x000107c4d06c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar8);
        func_0x000107c615e8(lVar2);
        func_0x000107c615ec(lVar1,2);
        goto LAB_103bda96c;
      }
      func_0x000107c615e8(lVar2);
    }
  }
  lVar2 = _DAT_112ff5810;
  func_0x000107c61428(unaff_x20 + _DAT_112ff5810,auStack_90,0,0);
  lVar9 = *(long *)(unaff_x20 + lVar2);
  func_0x000107c615f0(lVar9);
  func_0x000107c615e8(lVar1);
  if (lVar9 == 0) {
    return;
  }
LAB_103bda96c:
  lVar2 = *(long *)(unaff_x20 + _DAT_112ff5820);
  if (lVar2 == 0) {
    func_0x000107c615e8(lVar9);
  }
  else {
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c610f8(PTR_PTR_1126ae560);
    func_0x000107c61174(lVar2);
    func_0x000107c453e4(puVar3);
    puVar4 = puVar3;
    func_0x000107c43bf4();
    func_0x000107c61180();
    func_0x000107c613fc(&UNK_1106e49f8,0x18,7);
    *(long *)(puVar5 + 0x10) = param_1;
    uStack_a0 = 0x103bdaebc;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_100e38b5c;
    puStack_a8 = &UNK_1106e4a10;
    puStack_98 = puVar5;
    func_0x000107c60bc4(&puStack_c0);
    puVar5 = puStack_98;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar5);
    func_0x0001000c10c0("openHtml(with:)");
    func_0x000107c61180();
    func_0x000107c5dc64(puVar4);
    func_0x000107c615e8(pcVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar4);
    lVar8 = *(long *)(unaff_x20 + _DAT_112ff5830);
    lVar1 = lVar8;
    if (lVar8 == 0) {
      func_0x0001000956f0();
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar1 = 0;
    }
    func_0x000107c61174(lVar1);
    lVar1 = lVar2;
    FUN_103c5d254(lVar2,puVar3,lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ff5828));
    func_0x000107c615e8(lVar9);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103bda858; end: 103bdab2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bda858(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  ppuVar5 = &puStack_c0;
  lVar1 = param_1;
  func_0x000107c41408();
  func_0x000107c61180();
  lVar2 = _DAT_112ff5818;
  func_0x000107c61428(unaff_x20 + _DAT_112ff5818,auStack_78,0,0);
  lVar2 = *(long *)(unaff_x20 + lVar2);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      if (lVar1 != 0) {
        func_0x000107c615f0(lVar1);
        lVar6 = lVar2;
        func_0x000107c4e864();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c615e8(lVar2);
          func_0x000107c615ec(lVar1,2);
          return;
        }
        lVar7 = lVar6;
        func_0x000107c4d06c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar6);
        func_0x000107c615e8(lVar2);
        func_0x000107c615ec(lVar1,2);
        goto LAB_103bda96c;
      }
      func_0x000107c615e8(lVar2);
    }
  }
  lVar2 = _DAT_112ff5810;
  func_0x000107c61428(unaff_x20 + _DAT_112ff5810,auStack_90,0,0);
  lVar7 = *(long *)(unaff_x20 + lVar2);
  func_0x000107c615f0(lVar7);
  func_0x000107c615e8(lVar1);
  if (lVar7 == 0) {
    return;
  }
LAB_103bda96c:
  lVar2 = *(long *)(unaff_x20 + _DAT_112ff5820);
  if (lVar2 == 0) {
    func_0x000107c615e8(lVar7);
  }
  else {
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c610f8(PTR_PTR_1126ae560);
    func_0x000107c61174(lVar2);
    func_0x000107c453e4(puVar3);
    puVar4 = puVar3;
    func_0x000107c43bf4();
    func_0x000107c61180();
    func_0x000107c613fc(param_2,0x18,7);
    *(long *)(param_2 + 0x10) = param_1;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_100e38b5c;
    uStack_a8 = param_4;
    uStack_a0 = param_3;
    lStack_98 = param_2;
    func_0x000107c60bc4(&puStack_c0);
    lVar1 = lStack_98;
    func_0x000107c61174(param_1);
    func_0x000107c61574(lVar1);
    func_0x0001000c10c0(param_5);
    func_0x000107c61180();
    func_0x000107c5dc64(puVar4);
    func_0x000107c615e8(param_5);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar4);
    lVar6 = *(long *)(unaff_x20 + _DAT_112ff5830);
    lVar1 = lVar6;
    if (lVar6 == 0) {
      func_0x0001000956f0();
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar1 = 0;
    }
    func_0x000107c61174(lVar1);
    lVar1 = lVar2;
    FUN_103c5d254(lVar2,puVar3,lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ff5828));
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103bdab2c; end: 103bdacc7;  */

void FUN_103bdab2c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  
  lVar7 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  if (param_1 != 0) {
    uVar1 = param_1;
    puVar5 = PTR_s_respondsToSelector__11262c7e0;
    func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_loadHTMLString_baseURL__1126047a0);
    if ((uVar1 & 1) != 0) {
      func_0x000107c615f0(param_1);
      func_0x000107c44f38(param_2);
      func_0x000107c61180();
      uVar2 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
      lVar3 = 0;
      func_0x000107c5ede0();
      lVar9 = *(long *)(lVar3 + -8);
      (**(code **)(lVar9 + 0x38))(lVar7,1,1,lVar3);
      func_0x000107c5fadc(uVar2,puVar5);
      func_0x000100029394(lVar7,puVar6);
      puVar4 = puVar6;
      (**(code **)(lVar9 + 0x30))(puVar6,1,lVar3);
      puVar8 = (undefined1 *)0x0;
      if ((int)puVar4 != 1) {
        func_0x000107c5ed90();
        (**(code **)(lVar9 + 8))(puVar6,lVar3);
        puVar8 = puVar4;
      }
      func_0x000107c4b73c(param_1);
      func_0x000107c615e8(param_1);
      func_0x000107c6142c(puVar5);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(puVar8);
      func_0x0001000293e4(lVar7);
    }
  }
  return;
}



/* Entry: 103bdacc8; end: 103bdad17; -[_TtC28SCComposerGenericWebLauncher28SCComposerGenericWebLauncher openHtmlWithHtmlRequest:] */

/* WARNING: Possible PIC construction at 0x000103bdad00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bdad04) */

void FUN_103bdacc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103bda834(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103bdad18; end: 103bdad1f;  */

undefined8 FUN_103bdad18(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1a28;
  _objc_retain();
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1);
  _objc_release();
  return param_1;
}



/* Entry: 103bdad20; end: 103bdad2b; -[_TtC28SCComposerGenericWebLauncher28SCComposerGenericWebLauncher pushToValdiMarshaller:] */

undefined8 FUN_103bdad20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1a28;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 103bdad2c; end: 103bdad5b;  */

void FUN_103bdad2c(void)

{
  FUN_103bda44c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bdad5c; end: 103bdadc3; -[_TtC28SCComposerGenericWebLauncher28SCComposerGenericWebLauncher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bdad88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bdada8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bdad8c) */
/* WARNING: Removing unreachable block (ram,0x000103bdadac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdad5c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ff5810));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff5818));
  return;
}



/* Entry: 103bdadc4; end: 103bdae97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdadc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  FUN_103bda44c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar1 = _DAT_112ff5810;
  *(undefined8 *)(lVar4 + _DAT_112ff5810) = 0;
  lVar2 = _DAT_112ff5818;
  *(undefined8 *)(lVar4 + _DAT_112ff5818) = 0;
  *(undefined8 *)(lVar4 + _DAT_112ff5820) = param_3;
  *(long *)(lVar4 + _DAT_112ff5828) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112ff5830) = param_2;
  func_0x000107c61428(lVar4 + lVar1,auStack_68,1,0);
  *(undefined8 *)(lVar4 + lVar1) = 0;
  func_0x000107c61428(lVar4 + lVar2,auStack_80,1,0);
  *(undefined8 *)(lVar4 + lVar2) = 0;
  lStack_90 = lVar4;
  lStack_88 = lVar3;
  func_0x000107c61154(&lStack_90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bdae98; end: 103bdaecf;  */

void FUN_103bdae98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0x112d36580;
  puVar5 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5d7e8(uVar6);
  func_0x000107c61180();
  uVar2 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  func_0x000107c5edd0(puVar8,uVar2,puVar5);
  func_0x000107c6142c(puVar5);
  puVar3 = puVar8;
  (**(code **)(lVar9 + 0x30))(puVar8,1,lVar1);
  if ((int)puVar3 == 1) {
    func_0x0001000293e4(puVar8);
  }
  else {
    lVar4 = lVar7;
    (**(code **)(lVar9 + 0x20))(lVar7,puVar8,lVar1);
    if (param_1 != 0) {
      func_0x000107c5ed90();
      func_0x000107c4b788(param_1);
      func_0x000107c61170(lVar4);
    }
    (**(code **)(lVar9 + 8))(lVar7,lVar1);
  }
  return;
}



/* Entry: 103bdaed0; end: 103bdb067;  */

/* WARNING: Possible PIC construction at 0x000103bdaee4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bdaee8) */

void FUN_103bdaed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103bdb068; end: 103bdb077; -[SCSpotlightCrossPostEligibility isEligibleForCrossPostingToStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bdb068(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff5860);
}



/* Entry: 103bdb078; end: 103bdb087; -[SCSpotlightCrossPostEligibility eligibleStoriesConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdb078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5868));
  return;
}



/* Entry: 103bdb088; end: 103bdb09f; -[SCSpotlightCrossPostEligibility nonEligibleStoriesConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdb088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5870));
  return;
}



/* Entry: 103bdb0a0; end: 103bdb20f; -[SCSpotlightCrossPostEligibility initWithIsEligibleForCrossPostingToStories:eligibleStoriesConfig:nonEligibleStoriesConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdb0a0(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112ff5860) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff5868) = param_4;
  *(undefined8 *)(param_1 + _DAT_112ff5870) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103bdb210; end: 103bdb213; -[SCSpotlightCrossPostEligibility copyWithZone:] */

void FUN_103bdb210(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bdb214; end: 103bdb22f; -[SCSpotlightCrossPostEligibility description] */

void FUN_103bdb214(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bdb230; end: 103bdb2ab; -[SCSpotlightCrossPostEligibility init] */

void FUN_103bdb230(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SpotlightAutoShareService/SpotlightCrossPostEligibilityWrapper.swift",0x44,2,
                      0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bdb278);
  (*pcVar1)();
}



/* Entry: 103bdb2ac; end: 103bdb2e3; -[SCSpotlightCrossPostEligibility .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bdb2c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bdb2cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdb2ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff5868));
  return;
}



/* Entry: 103bdb2e4; end: 103bdb303;  */

void FUN_103bdb2e4(void)

{
  func_0x000107c61168(&PTR_PTR_1129425a8);
  return;
}



/* Entry: 103bdb304; end: 103bdb307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdb304(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ff5860) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5868) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5870) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bdb308; end: 103bdb56f;  */

long FUN_103bdb308(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103bdb570; end: 103bdb5bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdb570(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff58a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bdb5bc; end: 103bdb61b; -[_TtC19SnapSendingServices19SnapSendingServices init] */

void FUN_103bdb5bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapSendingServices.SnapSendingServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bdb5e8);
  (*pcVar1)();
}



/* Entry: 103bdb61c; end: 103bdb62b; -[_TtC19SnapSendingServices19SnapSendingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdb61c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff58a0));
  return;
}



/* Entry: 103bdb62c; end: 103bdb687; -[SCSnapLocalMessageContentMetadata quotedMessageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdb62c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff58d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff58d0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bdb688; end: 103bdb697; -[SCSnapLocalMessageContentMetadata messageBehaviorHint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdb688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff58d8));
  return;
}



/* Entry: 103bdb698; end: 103bdb6a7; -[SCSnapLocalMessageContentMetadata snapModesInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdb698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff58e0));
  return;
}



/* Entry: 103bdb6a8; end: 103bdb6b7; -[SCSnapLocalMessageContentMetadata storyReplyMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdb6a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff58e8));
  return;
}



/* Entry: 103bdb6b8; end: 103bdb74b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdb6b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff58d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff58d8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff58e0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff58e8) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bdb74c; end: 103bdb813; -[SCSnapLocalMessageContentMetadata initWithQuotedMessageId:messageBehaviorHint:snapModesInfo:storyReplyMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdb74c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff58d0);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112ff58d8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112ff58e0) = param_5;
  *(undefined8 *)(param_1 + _DAT_112ff58e8) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_50,puVar2);
  return;
}



/* Entry: 103bdb814; end: 103bdb8b3;  */

undefined8 * FUN_103bdb814(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c610f8();
  puVar1 = param_1;
  FUN_103bdbe48(param_1);
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  FUN_103bdbf84(&uStack_30,0x112d35ff8,&UNK_10d900cd0);
  uStack_38 = param_1[3];
  FUN_103bdbf84(&uStack_38,0x112ff58f0,&UNK_10dc62c58);
  uStack_40 = param_1[4];
  FUN_103bdbf84(&uStack_40,0x112ff58f8,&UNK_10dc62c60);
  return puVar1;
}



/* Entry: 103bdb8b4; end: 103bdb8b7; -[SCSnapLocalMessageContentMetadata copyWithZone:] */

void FUN_103bdb8b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103bdb8b8; end: 103bdb95b; -[SCSnapLocalMessageContentMetadata description] */

void FUN_103bdb8b8(undefined8 param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  FUN_103bdbfc4(&uStack_68);
  func_0x000107c61170(param_1);
  uStack_28 = uStack_60;
  uStack_30 = uStack_68;
  FUN_103bdbf84(&uStack_30,0x112d35ff8,&UNK_10d900cd0);
  uStack_38 = uStack_50;
  FUN_103bdbf84(&uStack_38,0x112ff58f0,&UNK_10dc62c58);
  uStack_40 = uStack_48;
  FUN_103bdbf84(&uStack_40,0x112ff58f8,&UNK_10dc62c60);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bdb95c; end: 103bdb9a3; -[SCSnapLocalMessageContentMetadata init] */

void FUN_103bdb95c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SnapSendingServices/SnapLocalMessageContentMetadataWrapper.swift",0x40,2,0x35
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bdb9a4);
  (*pcVar1)();
}



/* Entry: 103bdb9a4; end: 103bdb9bf; +[SCSnapLocalMessageContentMetadataBuilder snapLocalMessageContentMetadata] */

void FUN_103bdb9a4(void)

{
  func_0x000107c614ec();
  func_0x000107c610f8();
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bdb9c0; end: 103bdb9ff; +[SCSnapLocalMessageContentMetadataBuilder snapLocalMessageContentMetadataWithExistingSnapLocalMessageContentMetadata:] */

void FUN_103bdb9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_103bdc070(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103bdba00; end: 103bdba63; -[SCSnapLocalMessageContentMetadataBuilder withQuotedMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdba00(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff5900);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c61174();
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 103bdba64; end: 103bdbac3; -[SCSnapLocalMessageContentMetadataBuilder withMessageBehaviorHint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103bdba64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff5908);
  *(undefined8 *)(param_1 + _DAT_112ff5908) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6117c(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103bdbac4; end: 103bdbb23; -[SCSnapLocalMessageContentMetadataBuilder withSnapModesInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103bdbac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff5910);
  *(undefined8 *)(param_1 + _DAT_112ff5910) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6117c(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103bdbb24; end: 103bdbb83; -[SCSnapLocalMessageContentMetadataBuilder withStoryReplyMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103bdbb24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff5918);
  *(undefined8 *)(param_1 + _DAT_112ff5918) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6117c(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103bdbb84; end: 103bdbc6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdbb84(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_60;
  long lStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ff5900);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112ff5900))[1];
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ff5908);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ff5910);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ff5918);
  FUN_103bdc18c();
  lVar5 = param_1;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ff58d0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112ff58d8) = uVar7;
  *(undefined8 *)(lVar5 + _DAT_112ff58e0) = uVar8;
  *(undefined8 *)(lVar5 + _DAT_112ff58e8) = uVar6;
  puVar4 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = param_1;
  func_0x000107c61434(uVar3);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61154(&lStack_60,puVar4);
  return;
}



/* Entry: 103bdbc70; end: 103bdbcb3; -[SCSnapLocalMessageContentMetadataBuilder build] */

void FUN_103bdbc70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103bdbb84();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bdbcb4; end: 103bdbcf7; -[SCSnapLocalMessageContentMetadataBuilder safeBuildAndReturnError:] */

void FUN_103bdbcb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103bdbb84();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bdbcf8; end: 103bdbd67; -[SCSnapLocalMessageContentMetadataBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdbcf8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff5900);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112ff5908) = 0;
  *(undefined8 *)(param_1 + _DAT_112ff5910) = 0;
  *(undefined8 *)(param_1 + _DAT_112ff5918) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bdbd68; end: 103bdbd6b;  */

void FUN_103bdbd68(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bdbd6c; end: 103bdbd8f; -[SCSnapLocalMessageContentMetadataBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bdbe20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bdbe24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdbd6c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff5900 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff5908));
  return;
}



/* Entry: 103bdbd90; end: 103bdbdc3;  */

void FUN_103bdbd90(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bdbdc4; end: 103bdbde7; -[SCSnapLocalMessageContentMetadata .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bdbe20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bdbe24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdbdc4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff58d0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff58d8));
  return;
}



/* Entry: 103bdbde8; end: 103bdbe47;  */

/* WARNING: Possible PIC construction at 0x000103bdbe20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bdbe24) */

void FUN_103bdbde8(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + *param_3 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + *param_4));
  return;
}



/* Entry: 103bdbe48; end: 103bdbf83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdbe48(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 auStack_68 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff58d0);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  if (*(char *)((long)param_1 + 0x14) == '\x01') {
    FUN_103bdc1cc(&uStack_50,auStack_68,0x112d35ff8,&UNK_10d900cd0);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    FUN_103bdc1cc(&uStack_50,auStack_68,0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c46ecc();
  }
  *(undefined **)(unaff_x20 + _DAT_112ff58d8) = puVar2;
  auStack_68[0] = param_1[3];
  uStack_58 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_112ff58e0) = auStack_68[0];
  *(undefined8 *)(unaff_x20 + _DAT_112ff58e8) = uStack_58;
  FUN_103bdc1cc(auStack_68,auStack_70,0x112ff58f0,&UNK_10dc62c58);
  FUN_103bdc1cc(&uStack_58,auStack_70,0x112ff58f8,&UNK_10dc62c60);
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bdbf84; end: 103bdbfc3;  */

undefined8 FUN_103bdbf84(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103bdbfc4; end: 103bdc06f;  */

/* WARNING: Possible PIC construction at 0x000103bdc054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bdc058) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdbfc4(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_112ff58d0);
  uVar3 = ((undefined8 *)(param_2 + _DAT_112ff58d0))[1];
  lVar7 = *(long *)(param_2 + _DAT_112ff58d8);
  bVar1 = lVar7 == 0;
  if (bVar1) {
    func_0x000107c61434(uVar3);
    uVar4 = 0;
  }
  else {
    func_0x000107c61434(uVar3);
    func_0x000107c49804();
    uVar4 = (undefined4)lVar7;
  }
  uVar5 = *(undefined8 *)(param_2 + _DAT_112ff58e0);
  uVar6 = *(undefined8 *)(param_2 + _DAT_112ff58e8);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(bool *)((long)param_1 + 0x14) = bVar1;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar5);
  return;
}



/* Entry: 103bdc070; end: 103bdc18b;  */

/* WARNING: Possible PIC construction at 0x000103bdc0a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bdc0a8) */

void FUN_103bdc070(long param_1)

{
  if (param_1 == 0) {
    func_0x000103bdc1ac();
    func_0x000107c610f8();
  }
  else {
    func_0x000103bdc1ac();
    func_0x000107c610f8();
    func_0x000107c61174(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103bdc18c; end: 103bdc1cb;  */

void FUN_103bdc18c(void)

{
  func_0x000107c61168(&PTR_PTR_112942740);
  return;
}



/* Entry: 103bdc1cc; end: 103bdc213;  */

undefined8 FUN_103bdc1cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103bdc214; end: 103bdc253;  */

void FUN_103bdc214(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bdc254; end: 103bdc2d3;  */

undefined8 FUN_103bdc254(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c5faec();
  FUN_103bdc214();
  func_0x000107c6142c(param_2);
  return param_1;
}



/* Entry: 103bdc2d4; end: 103bdc32b; -[SCCommunitiesMemberRankingJobSchedulingServices initWithScheduler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdc2d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff5970) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103bdc32c; end: 103bdc38b; -[SCCommunitiesMemberRankingJobSchedulingServices init] */

void FUN_103bdc32c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommunitiesMemberRankingJobSchedulingServices.SCCommunitiesMemberRankingJobSchedulingServices"
                      ,0x5f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bdc358);
  (*pcVar1)();
}



/* Entry: 103bdc38c; end: 103bdc39b; -[SCCommunitiesMemberRankingJobSchedulingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdc38c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff5970));
  return;
}



/* Entry: 103bdc39c; end: 103bdc3cf;  */

void FUN_103bdc39c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103bdc3d0; end: 103bdc4c3;  */

void FUN_103bdc3d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  lStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_80 = param_1[4];
  if (lStack_88 == 1) {
    FUN_103be0198(&uStack_a0,0x112ff5a98,&UNK_10dc62d90);
    FUN_103bdd968(&uStack_70,param_2,param_3);
    func_0x00010006c090(param_2,param_3);
    FUN_103be0198(&uStack_70,0x112ff5a98,&UNK_10dc62d90);
  }
  else {
    uStack_68 = param_1[1];
    uStack_70 = *param_1;
    uStack_58 = param_1[3];
    uStack_60 = param_1[2];
    uStack_50 = param_1[4];
    uVar1 = *unaff_x20;
    func_0x000107c61558(uVar1);
    uStack_a0 = *unaff_x20;
    func_0x000103bddbd4(&uStack_70,param_2,param_3,uVar1);
    func_0x00010006c090(param_2,param_3);
    *unaff_x20 = uStack_a0;
  }
  return;
}



/* Entry: 103bdc4c4; end: 103bdc53b;  */

void FUN_103bdc4c4(void)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if (lRam0000000113594e00 != -1) {
    func_0x000107c61568(0x113594e00,&UNK_1004468d0);
  }
  func_0x000107c61428(0x113594e08,auStack_38,1,0);
  uVar1 = puRam0000000113594e08;
  puRam0000000113594e08 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 103bdc53c; end: 103bdc55f;  */

void FUN_103bdc53c(void)

{
  FUN_103bdc4c4();
  return;
}



/* Entry: 103bdc560; end: 103bdc5eb; +[_TtC24SCInflightCallCoalescing23SCInflightCallCoalescer _resetRegistryForTesting] */

void FUN_103bdc560(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  if (lRam0000000113594df0 != -1) {
    func_0x000107c61568(0x113594df0,&UNK_100446678);
  }
  func_0x000107c614ec();
  uStack_40 = param_1;
  func_0x000100087bd4(FUN_103be034c,auStack_50,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 103bdc5ec; end: 103bdc813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103bdc5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_b8 [8];
  undefined1 auStack_a0 [16];
  undefined8 uStack_68;
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff59a0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  lVar2 = lRam0000000113594df0;
  uVar3 = param_4;
  func_0x000107c6157c(param_4);
  if (lVar2 != -1) {
    uVar3 = 0x113594df0;
    func_0x000107c61568(0x113594df0,&UNK_100446678);
  }
  func_0x0001004466b4();
  func_0x000100087bd4(&uStack_68,&SUB_100446890,auStack_a0,uVar3);
  func_0x000107c6142c(param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112ff59a8) = uStack_68;
  puVar4 = auStack_b8;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c61574(param_4);
  return puVar4;
}



/* Entry: 103bdc814; end: 103bdc96b;  */

void FUN_103bdc814(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  long extraout_x8;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  func_0x000103be02d8(param_1,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar5 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    lVar4 = (long)&puStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(lVar4);
    lVar2 = lVar4;
    func_0x000107c605b0(lVar4,lStack_58);
    (**(code **)(lVar5 + 8))(lVar4,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101201f78;
  puStack_88 = &UNK_1106e4fd0;
  ppuVar1 = &puStack_a0;
  uStack_80 = param_2;
  uStack_78 = param_3;
  func_0x000107c60bc4(ppuVar1);
  pcVar3 = *(code **)(param_4 + 0x10);
  func_0x000107c6157c(param_3);
  (*pcVar3)(param_4,lVar2,ppuVar1);
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c615e8(lVar2);
  func_0x000107c61574(uStack_78);
  return;
}



/* Entry: 103bdc96c; end: 103bdcd67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdc96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_88 [40];
  
  lVar4 = unaff_x20;
  uStack_150 = param_1;
  func_0x000107c614f0();
  lVar3 = 0;
  lStack_158 = lVar4;
  func_0x000107c5f7fc();
  lStack_168 = *(long *)(lVar3 + -8);
  lStack_160 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_168 + 0x40));
  lVar3 = (long)&lStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_170 = lVar3;
  func_0x000107c5f824();
  lStack_180 = *(long *)(lVar4 + -8);
  lStack_178 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_180 + 0x40));
  lVar3 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c6071c();
  lVar4 = *(long *)(unaff_x20 + _DAT_112ff59a8);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  func_0x000107c6157c(uVar9);
  func_0x000100087bd4(auStack_88,FUN_103bdcd68,&puStack_d0,&UNK_1106e4f70);
  func_0x000107c61574(uVar9);
  FUN_103bdd110(auStack_88,&uStack_f8);
  if (lStack_e0 == 1) {
LAB_103bdcd40:
    FUN_103bdd524(auStack_88);
  }
  else {
    if (lStack_e0 == 2) {
      puVar6 = &UNK_1106e4d60;
      func_0x000107c613fc(&UNK_1106e4d60,0x11,7);
      puVar6[0x10] = 0;
      pcVar1 = *(code **)(unaff_x20 + _DAT_112ff59a0);
      puVar5 = &UNK_1106e4d88;
      func_0x000107c613fc(&UNK_1106e4d88,0x38,7);
      *(long *)(puVar5 + 0x10) = lVar4;
      *(undefined **)(puVar5 + 0x18) = puVar6;
      *(undefined8 *)(puVar5 + 0x20) = param_2;
      *(undefined8 *)(puVar5 + 0x28) = param_3;
      *(long *)(puVar5 + 0x30) = lStack_158;
      func_0x000107c6157c(lVar4);
      func_0x000107c6157c(puVar6);
      func_0x00010006c00c(param_2,param_3);
      (*pcVar1)(uStack_150,FUN_103bdd518,puVar5);
      func_0x000107c61574(puVar5);
      FUN_103bdd524(auStack_88);
    }
    else {
      uStack_118 = uStack_f0;
      uStack_120 = uStack_f8;
      lStack_108 = lStack_e0;
      uStack_110 = uStack_e8;
      if (param_4 == 0) {
        (*param_5)(&uStack_120,0);
        func_0x000103be0198(&uStack_120,0x112d387f8,&UNK_10d902650);
        goto LAB_103bdcd40;
      }
      func_0x000103be02d8(&uStack_120,&uStack_140,0x112d387f8,&UNK_10d902650);
      puVar6 = &UNK_1106e4db0;
      func_0x000107c613fc(&UNK_1106e4db0,0x48,7);
      *(code **)(puVar6 + 0x10) = param_5;
      *(undefined8 *)(puVar6 + 0x18) = param_6;
      *(undefined8 *)(puVar6 + 0x28) = uStack_138;
      *(undefined8 *)(puVar6 + 0x20) = uStack_140;
      *(undefined8 *)(puVar6 + 0x38) = uStack_128;
      *(undefined8 *)(puVar6 + 0x30) = uStack_130;
      *(undefined8 *)(puVar6 + 0x40) = 0;
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0x42000000;
      ppuVar7 = &puStack_d0;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c61174(param_4);
      func_0x000107c6157c(param_6);
      func_0x000107c5f808(lVar3);
      puStack_148 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001c7eec();
      uVar9 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar8 = uVar9;
      func_0x0001001c7f30();
      lVar2 = lStack_160;
      lVar4 = lStack_170;
      func_0x000107c60264(lStack_170,&puStack_148,uVar9,uVar8,lStack_160,param_6);
      func_0x000107c5ffe8(0,lVar3,lVar4,ppuVar7);
      func_0x000107c61170(param_4);
      func_0x000107c60bd0(ppuVar7);
      (**(code **)(lStack_168 + 8))(lVar4,lVar2);
      (**(code **)(lStack_180 + 8))(lVar3,lStack_178);
      func_0x000103be0198(&uStack_120,0x112d387f8,&UNK_10d902650);
      FUN_103bdd524(auStack_88);
    }
    func_0x000107c61574(puVar6);
  }
  return;
}



/* Entry: 103bdcd68; end: 103bdd10f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bdcd68(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  
  puVar7 = *(ulong **)(unaff_x20 + 0x18);
  uVar12 = *(ulong *)(unaff_x20 + 0x20);
  dVar15 = *(double *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar9 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ff59a8);
  func_0x000107c61428(lVar9 + 0x28,auStack_a8,0x20,0);
  lVar10 = *(long *)(lVar9 + 0x28);
  if (*(long *)(lVar10 + 0x10) == 0) {
LAB_103bdce50:
    func_0x000107c614a8(auStack_a8);
  }
  else {
    func_0x000107c61434(lVar10);
    puVar2 = puVar7;
    uVar6 = uVar12;
    func_0x000100446b48(puVar7,uVar12,PTR___s10Foundation4DataV4hash4intoys6HasherVz_tF_110350a88,
                        &UNK_102dba2f8);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(lVar10);
      goto LAB_103bdce50;
    }
    func_0x000103be021c(*(long *)(lVar10 + 0x38) + (long)puVar2 * 0x28,&uStack_d0);
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    dStack_70 = dStack_b0;
    func_0x000107c614a8(auStack_a8);
    func_0x000107c6142c(lVar10);
    if (dVar15 < dStack_70) {
      param_1[1] = uStack_88;
      *param_1 = uStack_90;
      param_1[3] = uStack_78;
      param_1[2] = uStack_80;
      return;
    }
    func_0x000103be02ac(&uStack_90);
  }
  func_0x000107c61428(lVar9 + 0x20,&uStack_90,0x20,0);
  lVar10 = *(long *)(lVar9 + 0x20);
  lVar13 = *(long *)(lVar10 + 0x10);
  uVar3 = uVar11;
  func_0x000107c61174(uVar11);
  if (lVar13 == 0) {
    func_0x000107c6157c(uVar1);
  }
  else {
    func_0x000107c61434(lVar10);
    func_0x000107c6157c(uVar1);
    puVar2 = puVar7;
    uVar6 = uVar12;
    func_0x000100446b48(puVar7,uVar12,PTR___s10Foundation4DataV4hash4intoys6HasherVz_tF_110350a88,
                        &UNK_102dba2f8);
    if ((uVar6 & 1) != 0) {
      uVar14 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + (long)puVar2 * 8);
      func_0x000107c61434(uVar14);
      func_0x000107c614a8(&uStack_90);
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(lVar10);
      func_0x000107c61428(lVar9 + 0x20,&uStack_d0,0x21,0);
      pcVar4 = (code *)&uStack_90;
      FUN_103bdd178(pcVar4,puVar7,uVar12);
      uVar12 = *puVar7;
      if (uVar12 != 0) {
        func_0x000107c6157c(uVar1);
        func_0x000107c61174(uVar3);
        uVar6 = uVar12;
        func_0x000107c61558();
        *puVar7 = uVar12;
        uVar5 = uVar12;
        if ((uVar6 & 1) == 0) {
          uVar5 = 0;
          FUN_103bdebc0(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
          *puVar7 = uVar5;
        }
        uVar12 = *(ulong *)(uVar5 + 0x10);
        uVar6 = uVar5;
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar12) {
          uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_103bdebc0(uVar6,uVar12 + 1,1,uVar5);
          *puVar7 = uVar6;
        }
        *(ulong *)(uVar6 + 0x10) = uVar12 + 1;
        lVar9 = uVar6 + uVar12 * 0x18;
        *(undefined8 *)(lVar9 + 0x20) = uVar8;
        *(undefined8 *)(lVar9 + 0x28) = uVar1;
        *(undefined8 *)(lVar9 + 0x30) = uVar11;
      }
      (*pcVar4)(&uStack_90,0);
      func_0x000107c614a8(&uStack_d0);
      func_0x000107c61170(uVar3);
      func_0x000107c61574(uVar1);
      *param_1 = 0;
      param_1[1] = 0;
      uVar8 = 1;
      goto LAB_103bdd080;
    }
    func_0x000107c6142c(lVar10);
  }
  func_0x000107c614a8(&uStack_90);
  lVar10 = 0x112ff5ab0;
  func_0x0001000285a8(0x112ff5ab0,&UNK_10dc62db0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar10 + 0x18) = 2;
  *(undefined8 *)(lVar10 + 0x10) = 1;
  *(undefined8 *)(lVar10 + 0x20) = uVar8;
  *(undefined8 *)(lVar10 + 0x28) = uVar1;
  *(undefined8 *)(lVar10 + 0x30) = uVar11;
  func_0x000107c61428(lVar9 + 0x20,&uStack_90,0x21,0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar3);
  func_0x00010006c00c(puVar7,uVar12);
  uVar8 = *(undefined8 *)(lVar9 + 0x20);
  func_0x000107c61558(uVar8);
  uStack_d0 = *(undefined8 *)(lVar9 + 0x20);
  *(undefined8 *)(lVar9 + 0x20) = 0x8000000000000000;
  FUN_103bdda60(lVar10,puVar7,uVar12,uVar8);
  func_0x00010006c090(puVar7,uVar12);
  *(undefined8 *)(lVar9 + 0x20) = uStack_d0;
  func_0x000107c614a8(&uStack_90);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar1);
  *param_1 = 0;
  param_1[1] = 0;
  uVar8 = 2;
LAB_103bdd080:
  param_1[2] = 0;
  param_1[3] = uVar8;
  return;
}



/* Entry: 103bdd110; end: 103bdd177;  */

undefined8 * FUN_103bdd110(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_1[3];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  iVar3 = (int)uVar1;
  if (((uVar2 != 0 && iVar3 != -1) && (uVar2 == 0 || iVar3 != 0)) || (iVar3 != -1)) {
    uVar4 = *param_1;
    uVar6 = param_1[3];
    uVar5 = param_1[2];
    param_2[1] = param_1[1];
    *param_2 = uVar4;
    param_2[3] = uVar6;
    param_2[2] = uVar5;
  }
  else {
    param_2[3] = uVar2;
    (*(code *)**(undefined8 **)(uVar2 - 8))(param_2);
  }
  return param_2;
}



/* Entry: 103bdd178; end: 103bdd1eb;  */

code * FUN_103bdd178(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x225c);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_103bdeaec();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_103bdd1ec;
}



/* Entry: 103bdd1ec; end: 103bdd21b;  */

void FUN_103bdd1ec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 103bdd21c; end: 103bdd517;  */

void FUN_103bdd21c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
                  code *param_5,undefined *param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  lStack_108 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar12 = (long)&lStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lStack_118 = *(long *)(lVar3 + -8);
  lStack_110 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_118 + 0x40));
  lVar13 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puStack_b0 = (undefined *)(param_4 + 0x10);
  uVar4 = 0x112ff5a90;
  uStack_100 = param_1;
  uStack_f8 = param_2;
  puStack_a8 = param_3;
  pcStack_a0 = param_5;
  puStack_98 = param_6;
  uStack_90 = param_2;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112ff5a90,&UNK_10dc62d88);
  func_0x000100087bd4(&lStack_e8,FUN_103bdff9c,&puStack_c0,uVar4);
  lStack_120 = lStack_e8;
  lVar3 = *(long *)(lStack_e8 + 0x10);
  if (lVar3 != 0) {
    plVar10 = (long *)(lStack_e8 + 0x30);
    do {
      pcVar1 = (code *)plVar10[-2];
      puVar9 = (undefined *)plVar10[-1];
      lVar11 = *plVar10;
      if (lVar11 == 0) {
        func_0x000107c6157c(puVar9);
        (*pcVar1)(uStack_100,uStack_f8);
      }
      else {
        func_0x000103be02d8(uStack_100,&lStack_e8,0x112d387f8,&UNK_10d902650);
        puVar5 = &UNK_1106e5008;
        func_0x000107c613fc(&UNK_1106e5008,0x48,7);
        uVar7 = uStack_f8;
        *(code **)(puVar5 + 0x10) = pcVar1;
        *(undefined **)(puVar5 + 0x18) = puVar9;
        *(undefined8 *)(puVar5 + 0x28) = uStack_e0;
        *(long *)(puVar5 + 0x20) = lStack_e8;
        *(undefined8 *)(puVar5 + 0x38) = uStack_d0;
        *(undefined8 *)(puVar5 + 0x30) = uStack_d8;
        *(undefined8 *)(puVar5 + 0x40) = uStack_f8;
        pcStack_a0 = FUN_103be0360;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_1000b0c7c;
        puStack_a8 = &UNK_1106e5020;
        ppuVar6 = &puStack_c0;
        puStack_98 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61580(puVar9,2);
        func_0x000107c61174(lVar11);
        func_0x000107c61174();
        func_0x000107c614b0(uVar7);
        func_0x000107c5f808(lVar13);
        puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001c7eec();
        uVar4 = 0x112d4af90;
        func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
        uVar8 = uVar4;
        func_0x0001001c7f30();
        func_0x000107c60264(lVar12,&puStack_f0,uVar4,uVar8,lVar2,uVar7);
        func_0x000107c5ffe8(0,lVar13,lVar12,ppuVar6);
        func_0x000107c61170(lVar11);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(lVar11);
        func_0x000107c61574(puVar9);
        (**(code **)(lStack_108 + 8))(lVar12,lVar2);
        (**(code **)(lStack_118 + 8))(lVar13,lStack_110);
        puVar9 = puStack_98;
      }
      func_0x000107c61574(puVar9);
      plVar10 = plVar10 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  func_0x000107c6142c(lStack_120);
  return;
}



/* Entry: 103bdd518; end: 103bdd523;  */

void FUN_103bdd518(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar9 = *(undefined **)(unaff_x20 + 0x10);
  lVar12 = *(long *)(unaff_x20 + 0x18);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  puVar5 = *(undefined **)(unaff_x20 + 0x28);
  lVar2 = 0;
  func_0x000107c5f7fc();
  lStack_108 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar13 = (long)&lStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lStack_118 = *(long *)(lVar3 + -8);
  lStack_110 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_118 + 0x40));
  lVar3 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puStack_b0 = (undefined *)(lVar12 + 0x10);
  uVar4 = 0x112ff5a90;
  uStack_100 = param_1;
  uStack_f8 = param_2;
  puStack_a8 = puVar9;
  pcStack_a0 = pcVar1;
  puStack_98 = puVar5;
  uStack_90 = param_2;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112ff5a90,&UNK_10dc62d88);
  func_0x000100087bd4(&lStack_e8,FUN_103bdff9c,&puStack_c0,uVar4);
  lStack_120 = lStack_e8;
  lVar12 = *(long *)(lStack_e8 + 0x10);
  if (lVar12 != 0) {
    plVar10 = (long *)(lStack_e8 + 0x30);
    do {
      pcVar1 = (code *)plVar10[-2];
      puVar9 = (undefined *)plVar10[-1];
      lVar11 = *plVar10;
      if (lVar11 == 0) {
        func_0x000107c6157c(puVar9);
        (*pcVar1)(uStack_100,uStack_f8);
      }
      else {
        func_0x000103be02d8(uStack_100,&lStack_e8,0x112d387f8,&UNK_10d902650);
        puVar5 = &UNK_1106e5008;
        func_0x000107c613fc(&UNK_1106e5008,0x48,7);
        uVar7 = uStack_f8;
        *(code **)(puVar5 + 0x10) = pcVar1;
        *(undefined **)(puVar5 + 0x18) = puVar9;
        *(undefined8 *)(puVar5 + 0x28) = uStack_e0;
        *(long *)(puVar5 + 0x20) = lStack_e8;
        *(undefined8 *)(puVar5 + 0x38) = uStack_d0;
        *(undefined8 *)(puVar5 + 0x30) = uStack_d8;
        *(undefined8 *)(puVar5 + 0x40) = uStack_f8;
        pcStack_a0 = FUN_103be0360;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_1000b0c7c;
        puStack_a8 = &UNK_1106e5020;
        ppuVar6 = &puStack_c0;
        puStack_98 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61580(puVar9,2);
        func_0x000107c61174(lVar11);
        func_0x000107c61174();
        func_0x000107c614b0(uVar7);
        func_0x000107c5f808(lVar3);
        puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001c7eec();
        uVar4 = 0x112d4af90;
        func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
        uVar8 = uVar4;
        func_0x0001001c7f30();
        func_0x000107c60264(lVar13,&puStack_f0,uVar4,uVar8,lVar2,uVar7);
        func_0x000107c5ffe8(0,lVar3,lVar13,ppuVar6);
        func_0x000107c61170(lVar11);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(lVar11);
        func_0x000107c61574(puVar9);
        (**(code **)(lStack_108 + 8))(lVar13,lVar2);
        (**(code **)(lStack_118 + 8))(lVar3,lStack_110);
        puVar9 = puStack_98;
      }
      func_0x000107c61574(puVar9);
      plVar10 = plVar10 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  func_0x000107c6142c(lStack_120);
  return;
}



/* Entry: 103bdd524; end: 103bdd557;  */

long FUN_103bdd524(long param_1)

{
  if (0xfffffffe < *(ulong *)(param_1 + 0x18)) {
    func_0x000100183ab8();
  }
  return param_1;
}


