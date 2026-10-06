/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10294e4f4; end: 10294e51b; -[_TtC24PlusFullscreenUpsellImpl34PlusFullscreenUpsellViewController viewDidLoad] */

void FUN_10294e4f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10294d6a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10294e51c; end: 10294e787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294e51c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long lStack_58;
  
  lVar1 = _DAT_112ecea98;
  if ((*(byte *)(unaff_x20 + _DAT_112ecea98) & 1) == 0) {
    func_0x000100083b20(&lStack_58);
    lVar8 = *(long *)(lStack_58 + _DAT_112fb0738);
    func_0x000107c61170();
    if (lVar8 != 0) {
      lStack_58 = lVar8;
      func_0x000107c60614(&UNK_1106ae070,&lStack_58,&UNK_1106ae070,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10294e788);
      (*pcVar2)();
    }
    func_0x000100083b20(&lStack_58);
    lVar8 = lStack_58;
    lVar3 = *(long *)(lStack_58 + _DAT_113083868);
    func_0x000107c61174();
    func_0x000107c61170(lVar8);
    lVar8 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar8 != 0) {
      func_0x000100083b20(&lStack_58);
      lVar3 = lStack_58;
      func_0x000107c5d7b4();
      func_0x000107c61180();
      func_0x000107c61170(lStack_58);
      lVar4 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        lVar3 = lVar4;
        func_0x000107c4cb90();
        func_0x000107c61180();
        lVar5 = lVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar5 != 0) {
          *(undefined1 *)(unaff_x20 + lVar1) = 1;
          func_0x000107c4dc2c(lVar5);
          puVar6 = PTR_PTR_1126d1a30;
          func_0x000107c610f8(PTR_PTR_1126d1a30);
          func_0x000107c453e4();
          func_0x000107c571f8();
          func_0x000107c59560(puVar6);
          func_0x000100083b20(&lStack_58);
          func_0x000107c61170();
          func_0x000107c5958c(puVar6);
          uVar7 = 0x4445525554414546;
          func_0x000107c5fadc(0x4445525554414546,0xee0059524f54535f);
          func_0x000107c59564(puVar6);
          func_0x000107c61170(uVar7);
          func_0x000107c4bfb0(lVar8);
          func_0x000107c615e8(lVar8);
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(puVar6);
          return;
        }
        func_0x000107c615e8(lVar8);
        lVar8 = lVar4;
      }
      func_0x000107c615e8(lVar8);
    }
  }
  return;
}



/* Entry: 10294e788; end: 10294eba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294e788(double param_1,undefined8 param_2,double param_3,double param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *unaff_x20;
  double dVar13;
  double dVar14;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar3 = unaff_x20;
  func_0x000107c614f0();
  lVar1 = _DAT_112ecea88;
  if (((unaff_x20[_DAT_112ecea80] & 1) == 0) && ((unaff_x20[_DAT_112ecea88] & 1) == 0)) {
    puVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10294eb94);
      (*pcVar2)();
    }
    func_0x000107c3ec60();
    dVar13 = param_3;
    dVar14 = param_4;
    func_0x000107c61170(puVar4);
    if ((0.0 < param_3) && (0.0 < param_4)) {
      puVar4 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10294eb98);
        (*pcVar2)();
      }
      puVar5 = puVar4;
      func_0x000107c5c42c();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (puVar5 == (undefined *)0x0) {
        puVar4 = unaff_x20;
        func_0x000107c4e360();
        func_0x000107c61180();
        puVar5 = puVar4;
        func_0x000107c5de64();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        if (puVar5 == (undefined *)0x0) {
          return;
        }
      }
      puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar6 = puVar5;
      func_0x000107c5e3f8();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c4c194();
        func_0x000107c61180();
      }
      else {
        puVar7 = puVar6;
        func_0x000107c519d4();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
      }
      func_0x000107c51820(puVar7);
      func_0x000107c61170(puVar7);
      param_1 = param_1 * 0.5;
      func_0x000107c58bfc(param_1,puVar4);
      puVar6 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10294eb9c);
        (*pcVar2)();
      }
      func_0x000107c49eac();
      func_0x000107c61170(puVar6);
      puVar6 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10294eba0);
        (*pcVar2)();
      }
      func_0x000107c550d8();
      func_0x000107c61170(puVar6);
      func_0x000107c3ec60(puVar5);
      puVar8 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
      func_0x000107c610f8();
      func_0x000107c45a60(param_1,param_2,dVar13,dVar14);
      puVar6 = &UNK_110570be0;
      func_0x000107c613fc(&UNK_110570be0,0x18,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      puVar7 = &UNK_110570c08;
      func_0x000107c613fc(&UNK_110570c08,0x20,7);
      *(code **)(puVar7 + 0x10) = FUN_1029504d8;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      uStack_90 = 0x102950504;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_100f9148c;
      puStack_98 = &UNK_110570c20;
      ppuVar9 = &puStack_b0;
      puStack_88 = puVar7;
      func_0x000107c60bc4(ppuVar9);
      puVar10 = puStack_88;
      func_0x000107c61174(puVar5);
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar10);
      puVar10 = puVar8;
      func_0x000107c45138();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar9);
      puVar11 = puVar7;
      func_0x000107c61544(puVar7,"",0x67,0x1e5,0x27,1);
      func_0x000107c61574(puVar7);
      if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10294eb90);
        (*pcVar2)();
      }
      puVar7 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10294eba4);
        (*pcVar2)();
      }
      func_0x000107c550d8();
      func_0x000107c61170(puVar7);
      unaff_x20[lVar1] = 1;
      puVar7 = &UNK_110570c58;
      func_0x000107c613fc(&UNK_110570c58,0x28,7);
      *(undefined **)(puVar7 + 0x10) = puVar10;
      *(undefined **)(puVar7 + 0x18) = unaff_x20;
      *(undefined **)(puVar7 + 0x20) = puVar3;
      func_0x000107c61174(puVar10);
      func_0x000107c61174();
      uVar12 = 0x40;
      func_0x0001009548b0(0x40,0,0x48,4,0,0,&UNK_10daf4ac8,puVar7,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar10);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(uVar12);
    }
  }
  return;
}



/* Entry: 10294eba4; end: 10294ec0f; -[_TtC24PlusFullscreenUpsellImpl34PlusFullscreenUpsellViewController viewDidAppear:] */

void FUN_10294eba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  FUN_10294e51c();
  FUN_10294e788();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10294ec10; end: 10294ecaf; -[_TtC24PlusFullscreenUpsellImpl34PlusFullscreenUpsellViewController viewDidLayoutSubviews] */

void FUN_10294ec10(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLayoutSubviews_112684cc8;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  lVar3 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x000107c61170(lVar4);
      FUN_10294e788();
    }
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10294ecb0);
  (*pcVar2)();
}



/* Entry: 10294ecb0; end: 10294ee5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294ecb0(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar5 = *(long *)(lStack_48 + _DAT_112fb0738);
  func_0x000107c61170();
  if (lVar5 == 0) {
    func_0x000100083b20(&lStack_48);
    lVar2 = *(long *)(lStack_48 + _DAT_113083868);
    func_0x000107c61174();
    func_0x000107c61170(lStack_48);
    lVar5 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar5 != 0) {
      puVar3 = PTR_PTR_1126e2840;
      func_0x000107c610f8(PTR_PTR_1126e2840);
      func_0x000107c453e4();
      func_0x000107c571f8();
      func_0x000100083b20(&lStack_48);
      func_0x000107c61170();
      func_0x000107c5958c(puVar3);
      uVar4 = 0x4445525554414546;
      func_0x000107c5fadc(0x4445525554414546,0xee0059524f54535f);
      func_0x000107c59564(puVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c59560(puVar3);
      func_0x000107c541e4(puVar3);
      func_0x000107c52bd4(puVar3);
      func_0x000107c4bfb0(lVar5);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(puVar3);
    }
    return;
  }
  lStack_48 = lVar5;
  func_0x000107c60614(&UNK_1106ae070,&lStack_48,&UNK_1106ae070,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10294ee60);
  (*pcVar1)();
}



/* Entry: 10294ee60; end: 10294ef1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294ee60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112fb0728);
  puVar1 = &UNK_110570b40;
  func_0x000107c613fc(&UNK_110570b40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  uStack_40 = 0x1029504c8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_110570b58;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c615f0(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10294ef20; end: 10294f1c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294ef20(void)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000100083b20(&puStack_88);
  puVar7 = puStack_88;
  lVar1 = _DAT_112fb0740;
  func_0x000107c61428(puStack_88 + _DAT_112fb0740,auStack_58,0,0);
  puVar2 = puStack_88 + lVar1;
  func_0x000107c61618();
  pcVar3 = "plusSubscribeDidDismiss()";
  func_0x0001000c10c0("plusSubscribeDidDismiss()");
  func_0x000107c61180();
  puVar4 = &UNK_110570a38;
  func_0x000107c613fc(&UNK_110570a38,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_110570a60;
  func_0x000107c613fc(&UNK_110570a60,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined **)(puVar5 + 0x18) = puStack_88;
  *(undefined **)(puVar5 + 0x20) = puVar2;
  pcStack_68 = FUN_10294fbf8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000f6b44;
  puStack_70 = &UNK_110570a78;
  ppuVar6 = &puStack_88;
  puStack_60 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar4 = puStack_60;
  func_0x000107c61174(puVar7);
  func_0x000107c615f0(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4e524(pcVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c615e8(puVar2);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 10294f1c4; end: 10294f1eb; -[_TtC24PlusFullscreenUpsellImpl34PlusFullscreenUpsellViewController plusSubscribeDidDismiss] */

void FUN_10294f1c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10294ef20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10294f1ec; end: 10294f1ef; -[_TtC24PlusFullscreenUpsellImpl34PlusFullscreenUpsellViewController handleDragBlockerPan] */

void FUN_10294f1ec(void)

{
  return;
}



/* Entry: 10294f1f0; end: 10294f44b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294f1f0(double param_1,double param_2,long param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  double dVar9;
  double dVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = param_3;
  func_0x000107c5bcc0();
  if (lVar3 - 4U < 2) {
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eceb00);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 1;
  }
  else if (lVar3 == 3) {
    pdVar1 = (double *)(unaff_x20 + _DAT_112eceb00);
    if (*(char *)(pdVar1 + 2) != '\x01') {
      dVar10 = *pdVar1;
      dVar9 = pdVar1[1];
      *pdVar1 = 0.0;
      pdVar1[1] = 0.0;
      *(undefined1 *)(pdVar1 + 2) = 1;
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c4b8b8(param_3);
      func_0x000107c61170(unaff_x20);
      if ((param_1 - dVar10) * (param_1 - dVar10) + (param_2 - dVar9) * (param_2 - dVar9) <= 100.0)
      {
        func_0x000100083b20(&puStack_a8);
        puVar8 = puStack_a8;
        lVar3 = _DAT_112fb0740;
        func_0x000107c61428(puStack_a8 + _DAT_112fb0740,auStack_78,0,0);
        puVar4 = puStack_a8 + lVar3;
        func_0x000107c61618();
        FUN_10294ecb0(2);
        pcVar5 = "dismissUpsell(dismissAction:)";
        func_0x0001000c10c0("dismissUpsell(dismissAction:)");
        func_0x000107c61180();
        puVar6 = &UNK_110570af0;
        func_0x000107c613fc(&UNK_110570af0,0x20,7);
        *(undefined **)(puVar6 + 0x10) = puStack_a8;
        *(undefined **)(puVar6 + 0x18) = puVar4;
        pcStack_88 = FUN_1029504c0;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_110570b08;
        ppuVar7 = &puStack_a8;
        puStack_80 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar6 = puStack_80;
        func_0x000107c61174(puVar8);
        func_0x000107c615f0(puVar4);
        func_0x000107c61574(puVar6);
        func_0x000107c4e524(pcVar5);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(puVar8);
        func_0x000107c615e8(puVar4);
        func_0x000107c615e8(pcVar5);
      }
    }
  }
  else if (lVar3 == 1) {
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c4b8b8(param_3);
    func_0x000107c61170(lVar3);
    pdVar1 = (double *)(unaff_x20 + _DAT_112eceb00);
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    *(undefined1 *)(pdVar1 + 2) = 0;
  }
  return;
}



/* Entry: 10294f44c; end: 10294f49b; -[_TtC24PlusFullscreenUpsellImpl34PlusFullscreenUpsellViewController handleAdvanceDismissTap:] */

/* WARNING: Possible PIC construction at 0x00010294f484: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010294f488) */

void FUN_10294f44c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10294f1f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10294f49c; end: 10294f69b;  */

void FUN_10294f49c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = param_5;
  func_0x00010294d60c();
  func_0x000107c61170();
  if (param_5 == lVar3) {
    lVar3 = param_6;
    func_0x000107c5de64();
    func_0x000107c61180();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10294f69c);
      (*pcVar2)();
    }
    lVar5 = lVar3;
    func_0x000107c61174();
    lVar1 = lVar5;
    puVar6 = PTR__OBJC_CLASS___UIControl_1126c3e60;
    while (lVar8 = lVar4, PTR__OBJC_CLASS___UIControl_1126c3e60 = puVar6, lVar3 != 0) {
      if (lVar1 == lVar4) {
        func_0x000107c61170(lVar5);
        lVar8 = lVar1;
        lVar5 = lVar4;
        break;
      }
      func_0x000107c61168(puVar6);
      lVar3 = lVar1;
      func_0x000107c6148c(lVar1,puVar6);
      if (lVar3 != 0) {
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar1);
        return;
      }
      lVar3 = lVar1;
      func_0x000107c5c42c();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      lVar1 = lVar3;
      puVar6 = PTR__OBJC_CLASS___UIControl_1126c3e60;
    }
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar8);
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c4b8b8(param_6);
    uVar9 = param_1;
    uVar10 = param_2;
    func_0x000107c61170(unaff_x20);
    uVar7 = 0;
    func_0x00010294d4e0();
    func_0x000107c438d4();
    func_0x000107c61170();
    func_0x000107c609a4(uVar9,uVar10,param_3,param_4,param_1,param_2);
    if ((uVar7 & 1) == 0) {
      puVar6 = &DAT_112eceae8;
      func_0x00010294d4e0(&DAT_112eceae8);
      func_0x000107c438d4();
      func_0x000107c61170(puVar6);
      func_0x000107c609a4(uVar9,uVar10,param_3,param_4,param_1,param_2);
    }
  }
  return;
}



/* Entry: 10294f69c; end: 10294f79b; -[_TtC24PlusFullscreenUpsellImpl34PlusFullscreenUpsellViewController gestureRecognizer:shouldReceiveTouch:] */

uint FUN_10294f69c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10294f49c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10294f79c; end: 10294f813; -[_TtC24PlusFullscreenUpsellImpl34PlusFullscreenUpsellViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_10294f79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010294f714(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10294f814; end: 10294f82b;  */

void FUN_10294f814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10294f82c,0,0);
  return;
}



/* Entry: 10294f82c; end: 10294f89b;  */

void FUN_10294f82c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10294f89c,uVar1,uVar2);
  return;
}



/* Entry: 10294f89c; end: 10294f8eb;  */

void FUN_10294f89c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  FUN_10295009c(0x4000000000000000);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10294f8ec,0,0);
  return;
}



/* Entry: 10294f8ec; end: 10294f95b;  */

void FUN_10294f8ec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar1 = unaff_x22 + 0x58;
  func_0x000107c61614(lVar1,*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x90) = lVar1;
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10294f95c,uVar2,uVar3);
  return;
}



/* Entry: 10294f95c; end: 10294faf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294f95c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c61428(unaff_x22 + 0x58,unaff_x22 + 0x40,0,0);
  lVar1 = unaff_x22 + 0x58;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar5 = *(long *)(unaff_x22 + 0x88);
    *(undefined1 *)(lVar1 + _DAT_112ecea88) = 0;
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      uVar7 = *(undefined8 *)(lVar1 + _DAT_112eceaa0);
      puVar3 = &UNK_110570c80;
      func_0x000107c613fc(&UNK_110570c80,0x20,7);
      *(long *)(puVar3 + 0x10) = lVar1;
      *(undefined8 *)(puVar3 + 0x18) = uVar6;
      *(code **)(unaff_x22 + 0x30) = FUN_1029505cc;
      *(undefined **)(unaff_x22 + 0x38) = puVar3;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
      *(undefined **)(unaff_x22 + 0x28) = &UNK_110570c98;
      lVar5 = unaff_x22 + 0x10;
      func_0x000107c60bc4(lVar5);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
      func_0x000107c61174(uVar6);
      func_0x000107c61174();
      func_0x000107c61174(uVar7);
      lVar4 = lVar1;
      func_0x000107c61174();
      func_0x000107c61574(uVar8);
      func_0x000107c5cf68(0x3fc3333333333333,puVar2);
      func_0x000107c61170(uVar6);
      func_0x000107c60bd0(lVar5);
      func_0x000107c61170(uVar7);
      *(undefined1 *)(lVar4 + _DAT_112ecea80) = 1;
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61610(unaff_x22 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10294faf4,0,0);
  return;
}



/* Entry: 10294faf4; end: 10294fb23;  */

void FUN_10294faf4(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010294fb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10294fb24; end: 10294fb2b;  */

void FUN_10294fb24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTypeStyle__112664568,7);
  return;
}



/* Entry: 10294fb2c; end: 10294fb53; -[_TtC24PlusFullscreenUpsellImpl34PlusFullscreenUpsellViewController initWithCoder:] */

void FUN_10294fb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1029502d4();
  return;
}



/* Entry: 10294fb54; end: 10294fb7f; -[_TtC24PlusFullscreenUpsellImpl34PlusFullscreenUpsellViewController initWithNibName:bundle:] */

void FUN_10294fb54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusFullscreenUpsellImpl.PlusFullscreenUpsellViewController",0x3b,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10294fb80);
  (*pcVar1)();
}



/* Entry: 10294fb80; end: 10294fbf7;  */

void FUN_10294fb80(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1029505e8(0,param_1,param_2);
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



/* Entry: 10294fbf8; end: 10294fc3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10294fbf8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112ecea90) = 0;
    func_0x000100083b20(&puStack_88);
    puVar3 = puStack_88;
    func_0x000107c4ffe8(puStack_88);
    func_0x000107c61180();
    func_0x000107c61170(puStack_88);
    func_0x000107c615e8(puVar3);
    uVar6 = *(undefined8 *)(lVar1 + _DAT_112fb0728);
    puVar3 = &UNK_110570b90;
    func_0x000107c613fc(&UNK_110570b90,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar5;
    uStack_68 = 0x1029506a0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000b0c7c;
    puStack_70 = &UNK_110570ba8;
    ppuVar4 = &puStack_88;
    puStack_60 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_60;
    func_0x000107c615f0(uVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c41864(uVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10294fc40; end: 10294fc5f;  */

void FUN_10294fc40(void)

{
  func_0x000107c61168(&PTR_PTR_112871f70);
  return;
}



/* Entry: 10294fc60; end: 10294fe2b;  */

undefined *
FUN_10294fc60(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  pcStack_70 = FUN_10294fb24;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100f9954c;
  puStack_78 = &UNK_110570cc0;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(uStack_68);
  puVar4 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee9c();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61174(puVar4);
  func_0x000107c5a050();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c59e1c(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar4);
  func_0x000107c61174(puVar4);
  if (param_3 == '\x01') {
    func_0x000107c59a2c();
    func_0x000107c59e34(puVar4);
    func_0x000107c52dfc(puVar4);
  }
  else {
    func_0x000107c52b54();
    func_0x000107c59e34(puVar4);
  }
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110570ce8;
  pcStack_70 = (code *)param_4;
  uStack_68 = param_5;
  func_0x000107c60bc4(&puStack_90);
  uVar2 = uStack_68;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(uVar2);
  func_0x000107c56ea0(puVar4);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar4);
  return puVar4;
}



/* Entry: 10294fe2c; end: 10295009b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10294fe2c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_38;
  
  puVar2 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c61174(puVar2);
  func_0x000100083b20(&lStack_38);
  lVar4 = *(long *)(lStack_38 + _DAT_112fb0738);
  func_0x000107c61170();
  if (lVar4 == 0) {
    func_0x00010295083c();
    lVar4 = lStack_38;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    func_0x000107c59c6c(puVar2);
    func_0x000107c61170(lVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c59c78(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c5a100(puVar2);
    func_0x000107c59c74(puVar2);
    func_0x000107c56ba8(puVar2);
    func_0x000107c61170(puVar2);
    return puVar2;
  }
  lStack_38 = lVar4;
  func_0x000107c60614(&UNK_1106ae070,&lStack_38,&UNK_1106ae070,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10294ff64);
  (*pcVar1)();
}



/* Entry: 10295009c; end: 1029502d3;  */

void FUN_10295009c(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  if (0.0 < param_1) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c610f8();
    func_0x000107c46db4();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
      func_0x000107c45048();
      func_0x000107c61180();
      uVar3 = 0x6973737561474943;
      func_0x000107c5fadc(0x6973737561474943,0xee0072756c426e61);
      puVar4 = PTR__OBJC_CLASS___CIFilter_1126c7620;
      func_0x000107c61168();
      func_0x000107c43510();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      if (puVar4 != (undefined *)0x0) {
        puVar5 = puVar4;
        func_0x000107c5a4a0(puVar4);
        func_0x000107c5f06c(param_1);
        func_0x000107c5a4a0(puVar4);
        func_0x000107c61170(puVar5);
        puVar5 = puVar4;
        func_0x000107c4e138();
        func_0x000107c61180();
        puVar8 = puVar2;
        puVar9 = puVar1;
        if (puVar5 != (undefined *)0x0) {
          func_0x000107c42c78(puVar1);
          puVar6 = puVar5;
          func_0x000107c4504c();
          func_0x000107c61180();
          func_0x000107c61170(puVar5);
          if (puVar6 != (undefined *)0x0) {
            if (lRam0000000112eceb60 != -1) {
              func_0x000107c61568(0x112eceb60,FUN_10294ca48);
            }
            lVar7 = lRam0000000112eceb68;
            func_0x000107c42c78(puVar1);
            func_0x000107c4094c();
            if (lVar7 != 0) {
              func_0x000107c51820(param_2);
              func_0x000107c450e0(param_2);
              func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
              func_0x000107c45afc(param_1);
              func_0x000107c61170(puVar4);
              func_0x000107c61170(puVar1);
              func_0x000107c61170(puVar6);
              func_0x000107c61170(puVar2);
              func_0x000107c61170(lVar7);
              return;
            }
            func_0x000107c61170(puVar6);
            puVar8 = puVar4;
            puVar9 = puVar2;
            puVar4 = puVar1;
          }
        }
        puVar1 = puVar4;
        func_0x000107c61170(puVar8);
        puVar2 = puVar9;
      }
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar2);
    }
  }
  func_0x000107c61174(param_2);
  return;
}



/* Entry: 1029502d4; end: 1029504bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029502d4(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112ecea80) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ecea88) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ecea90) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ecea98) = 0;
  lVar2 = _DAT_112eceaa0;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c5a378(puVar4);
  func_0x000107c53840(puVar4);
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112eceaa8;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c526c0(0x3feb333333333333,puVar4);
  func_0x000107c5a378(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112eceab0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eceab8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eceac0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eceac8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecead0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecead8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eceae0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eceae8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eceaf0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eceaf8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eceb00);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PlusFullscreenUpsellImpl/PlusFullscreenUpsellViewController.swift",0x41,2,
                      0x26,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1029504c0);
  (*pcVar3)();
}



/* Entry: 1029504c0; end: 1029504d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029504c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fb0728);
  puVar2 = &UNK_110570b40;
  func_0x000107c613fc(&UNK_110570b40,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  uStack_40 = 0x1029504c8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_110570b58;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c615f0(uVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c41864(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1029504d8; end: 102950523;  */

void FUN_1029504d8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3ec60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf89cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_drawViewHierarchyInRect_afterScr_1125c00e0,0);
  return;
}



/* Entry: 102950524; end: 10295058f;  */

void FUN_102950524(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102950590;
  plVar3[0xc] = lVar1;
  plVar3[0xd] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10294f82c,0,0,uVar4);
  return;
}



/* Entry: 102950590; end: 1029505cb;  */

void FUN_102950590(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001029505c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1029505cc; end: 1029505e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029505cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112eceaa0),PTR_s_setImage__1126481e8
             ,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1029505e8; end: 102950627;  */

void FUN_1029505e8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102950628; end: 10295062f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102950628(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  ppuVar6 = &puStack_a0;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000100083b20(&puStack_a0);
    puVar7 = puStack_a0;
    lVar1 = _DAT_112fb0740;
    func_0x000107c61428(puStack_a0 + _DAT_112fb0740,auStack_70,0,0);
    puVar3 = puStack_a0 + lVar1;
    func_0x000107c61618();
    FUN_10294ecb0(1);
    pcVar4 = "dismissUpsell(dismissAction:)";
    func_0x0001000c10c0("dismissUpsell(dismissAction:)");
    func_0x000107c61180();
    puVar5 = &UNK_110570d20;
    func_0x000107c613fc(&UNK_110570d20,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puStack_a0;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    uStack_80 = 0x10295069c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_110570d38;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar5 = puStack_78;
    func_0x000107c61174(puVar7);
    func_0x000107c615f0(puVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(pcVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar7);
    func_0x000107c615e8(puVar3);
    func_0x000107c615e8(pcVar4);
  }
  return;
}



/* Entry: 102950630; end: 10295065b;  */

void FUN_102950630(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10295065c; end: 1029506a3;  */

void FUN_10295065c(long param_1,long param_2)

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



/* Entry: 1029506a4; end: 102950a53;  */

undefined1  [16] FUN_1029506a4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffca;
  func_0x000107c5fadc(0xd000000000000036,0x800000010f0ce150);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0ce190);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102950770);
  (*pcVar1)();
}



/* Entry: 102950a54; end: 102950a6b;  */

void FUN_102950a54(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_40);
  puVar1 = PTR_PTR_1126b34d8;
  func_0x000107c610f8();
  func_0x000107c47f90();
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = puVar1;
  return;
}



/* Entry: 102950a6c; end: 102950abb;  */

void FUN_102950a6c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112eceb78 != 0) {
    return;
  }
  puVar1 = &UNK_110570e38;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112eceb78 = param_1;
  return;
}



/* Entry: 102950abc; end: 102950bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102950abc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar2 = param_2;
  FUN_1029516ac();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112eceb88) = 0;
  *(long *)(lVar3 + _DAT_112eceb90) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112eceb98) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112eceba0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112eceba8) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112ecebb0) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112ecebb8) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102950bbc; end: 102950bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102950bbc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar10 = &lStack_60;
  lVar8 = lVar1;
  FUN_1029516ac();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(undefined1 *)(lVar9 + _DAT_112eceb88) = 0;
  *(long *)(lVar9 + _DAT_112eceb90) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112eceb98) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112eceba0) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112eceba8) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112ecebb0) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112ecebb8) = uVar6;
  puVar7 = PTR_s_init_1125d9248;
  lStack_60 = lVar9;
  lStack_58 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_60,puVar7);
  *param_1 = plVar10;
  return;
}



/* Entry: 102950bcc; end: 102950c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102950bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112eceb88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eceb90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eceb98) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eceba0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eceba8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ecebb0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ecebb8) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102950c8c; end: 102950d93;  */

void FUN_102950c8c(undefined8 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  pcVar1 = "openSubscriptionManagement(uiContainer:type:)";
  func_0x0001000c10c0("openSubscriptionManagement(uiContainer:type:)");
  func_0x000107c61180();
  puVar2 = &UNK_110570e80;
  func_0x000107c613fc(&UNK_110570e80,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110570ea8;
  func_0x000107c613fc(&UNK_110570ea8,0x24,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined4 *)(puVar3 + 0x20) = param_2;
  pcStack_50 = FUN_10295154c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110570ec0;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c615f0(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102950d94; end: 102950e07;  */

void FUN_102950d94(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  uVar1 = 0;
  func_0x000107c5fcec(0);
  uStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  func_0x000100f7a598(FUN_1029516dc,auStack_60,
                      "PlusOpenSubscriptionManagement/PlusOpenSubscriptionManagementLauncher.swift",
                      0x4b,2,0x2c,uVar1);
  return;
}



/* Entry: 102950e08; end: 102950e7f;  */

void FUN_102950e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102950e80(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102950e80; end: 10295118f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102950e80(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = _DAT_112eceb88;
  ppuVar9 = &puStack_90;
  if ((*(byte *)(unaff_x20 + _DAT_112eceb88) & 1) == 0) {
    func_0x000100083b20(&puStack_90);
    puVar3 = puStack_90;
    puVar2 = puStack_90;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar2 = puVar3;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(puVar3);
      if (puVar2 != (undefined *)0x0) {
        func_0x000100083b20(&puStack_90);
        puVar3 = puStack_90;
        puVar4 = puStack_90;
        func_0x000107c3dae4();
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        puVar3 = puVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        if (puVar3 == (undefined *)0x0) {
          func_0x000107c615e8(puVar2);
        }
        else {
          puVar5 = puVar3;
          func_0x000107c4c1e0(puVar3);
          func_0x000107c61180();
          func_0x000107c615e8(puVar3);
          *(undefined1 *)(unaff_x20 + lVar1) = 1;
          func_0x000100083b20(&puStack_90);
          puVar3 = puStack_90;
          func_0x000100083b20(&puStack_90);
          puVar4 = puStack_90;
          puVar6 = PTR_PTR_1126b34d8;
          func_0x000107c610f8(PTR_PTR_1126b34d8);
          func_0x000107c47f90();
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar4);
          func_0x000100083b20(&puStack_90);
          puVar3 = puStack_90;
          func_0x000100083b20(&puStack_90);
          puVar7 = PTR_PTR_1126b34e8;
          func_0x000107c610f8(PTR_PTR_1126b34e8);
          func_0x000107c486e8();
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puStack_90);
          puVar8 = PTR_PTR_1126aba40;
          func_0x000107c610f8();
          func_0x000107c48ef0();
          puVar3 = &UNK_110570e80;
          func_0x000107c613fc(&UNK_110570e80,0x18,7);
          func_0x000107c61614(puVar3 + 0x10);
          puVar4 = &UNK_110570f38;
          func_0x000107c613fc(&UNK_110570f38,0x20,7);
          *(undefined **)(puVar4 + 0x10) = puVar3;
          *(undefined **)(puVar4 + 0x18) = puVar8;
          pcStack_70 = FUN_1029516f8;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          puStack_80 = &UNK_100f1c768;
          puStack_78 = &UNK_110570f50;
          puStack_68 = puVar4;
          func_0x000107c60bc4(&puStack_90);
          puVar3 = puStack_68;
          func_0x000107c61174(puVar8);
          func_0x000107c61574(puVar3);
          func_0x000107c440d8(puVar2);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c615e8(puVar2);
          func_0x000107c615e8(puVar5);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar8);
        }
      }
    }
  }
  return;
}



/* Entry: 102951190; end: 1029514f7; -[_TtC30PlusOpenSubscriptionManagement38PlusOpenSubscriptionManagementLauncher openSubscriptionManagementWithUiContainer:type:] */

void FUN_102951190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102950c8c(param_3,param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029514f8; end: 10295154b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029514f8(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112eceb88) = 0;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10295154c; end: 102951573;  */

void FUN_10295154c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x20);
  uVar4 = 0;
  func_0x000107c5fcec(0);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  func_0x000100f7a598(FUN_1029516dc,auStack_60,
                      "PlusOpenSubscriptionManagement/PlusOpenSubscriptionManagementLauncher.swift",
                      0x4b,2,0x2c,uVar4);
  return;
}



/* Entry: 102951574; end: 1029515d3; -[_TtC30PlusOpenSubscriptionManagement38PlusOpenSubscriptionManagementLauncher init] */

void FUN_102951574(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusOpenSubscriptionManagement.PlusOpenSubscriptionManagementLauncher",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029515a0);
  (*pcVar1)();
}



/* Entry: 1029515d4; end: 102951693; -[_TtC30PlusOpenSubscriptionManagement38PlusOpenSubscriptionManagementLauncher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029515f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102951610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102951630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102951614) */
/* WARNING: Removing unreachable block (ram,0x0001029515f4) */
/* WARNING: Removing unreachable block (ram,0x000102951634) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029515d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eceb90));
  return;
}



/* Entry: 102951694; end: 1029516ab;  */

void FUN_102951694(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  func_0x000100327254(0);
  func_0x000107c610f8();
  func_0x00010391ace0(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1029516ac; end: 1029516cb;  */

void FUN_1029516ac(void)

{
  func_0x000107c61168(&PTR_PTR_1128720e0);
  return;
}



/* Entry: 1029516cc; end: 1029516db;  */

undefined1  [16] FUN_1029516cc(void)

{
  return ZEXT816(0x110570f18);
}



/* Entry: 1029516dc; end: 1029516f7;  */

void FUN_1029516dc(void)

{
  long unaff_x20;
  
  FUN_102950e08(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined4 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1029516f8; end: 102951733;  */

void FUN_1029516f8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      pcVar3 = "resetIsPresenting()";
      func_0x0001000c10c0("resetIsPresenting()");
      func_0x000107c61180();
      puVar4 = &UNK_110570e80;
      func_0x000107c613fc(&UNK_110570e80,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar2);
      uStack_58 = 0x102951700;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_110570f78;
      ppuVar5 = &puStack_78;
      puStack_50 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e590(pcVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(pcVar3);
    }
  }
  else {
    puVar4 = PTR_PTR_1126df268;
    func_0x000107c61168(PTR_PTR_1126df268);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar4);
    func_0x000107c61180();
    puVar1 = puVar4;
    func_0x000107c4de58();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = &UNK_110570e80;
    func_0x000107c613fc(&UNK_110570e80,0x18,7);
    func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618(lVar2);
    func_0x000107c61614(puVar4 + 0x10,lVar2);
    func_0x000107c61170(lVar2);
    uStack_58 = 0x102951708;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_100f22f40;
    puStack_60 = &UNK_110570fa0;
    ppuVar5 = &puStack_78;
    puStack_50 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_50);
    func_0x000107c4db80(puVar1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102951734; end: 10295189f;  */

/* WARNING: Possible PIC construction at 0x000102951818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102951828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102951838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102951848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102951858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102951868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102951878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010295186c) */
/* WARNING: Removing unreachable block (ram,0x00010295185c) */
/* WARNING: Removing unreachable block (ram,0x00010295184c) */
/* WARNING: Removing unreachable block (ram,0x00010295183c) */
/* WARNING: Removing unreachable block (ram,0x00010295182c) */
/* WARNING: Removing unreachable block (ram,0x00010295181c) */
/* WARNING: Removing unreachable block (ram,0x00010295187c) */

void FUN_102951734(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  code *pcVar16;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x78);
  puVar14 = &UNK_1105710c8;
  func_0x000107c613fc(&UNK_1105710c8,0x80,7);
  *(undefined8 *)(puVar14 + 0x10) = uVar1;
  *(undefined8 *)(puVar14 + 0x18) = uVar7;
  *(undefined8 *)(puVar14 + 0x20) = uVar15;
  *(undefined8 *)(puVar14 + 0x28) = uVar8;
  *(undefined8 *)(puVar14 + 0x30) = uVar2;
  *(undefined8 *)(puVar14 + 0x38) = uVar9;
  *(undefined8 *)(puVar14 + 0x40) = uVar3;
  *(undefined8 *)(puVar14 + 0x48) = uVar10;
  *(undefined8 *)(puVar14 + 0x50) = uVar4;
  *(undefined8 *)(puVar14 + 0x58) = uVar11;
  *(undefined8 *)(puVar14 + 0x60) = uVar5;
  *(undefined8 *)(puVar14 + 0x68) = uVar12;
  *(undefined8 *)(puVar14 + 0x70) = uVar6;
  *(undefined8 *)(puVar14 + 0x78) = uVar13;
  uVar15 = 0x112ecebf8;
  func_0x0001000285a8(0x112ecebf8,&UNK_10daf4ca0);
  func_0x000107c613fc();
  pcVar16 = FUN_10295193c;
  func_0x0001000841fc(FUN_10295193c,puVar14,uVar15);
  func_0x000100084214(&UNK_10daf4c70,0x2d,2);
  *param_1 = pcVar16;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1029518a0; end: 1029518af;  */

undefined1  [16] FUN_1029518a0(void)

{
  return ZEXT816(0x1105710a8);
}



/* Entry: 1029518b0; end: 10295193b;  */

void FUN_1029518b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10295193c; end: 102951a57;  */

void FUN_10295193c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112ecec00,&UNK_10daf4ca8);
  puVar8 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  FUN_102951a58();
  func_0x000100082720("AppAppearanceScopedPlusSubscribeScopeExposerServiceProvider",0x3b,2);
  puVar10 = puVar8;
  FUN_102951c44(puVar8,uVar4,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar12,uVar9,uVar16,uVar17,uVar14,
                uVar15,uVar13);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar8);
  func_0x000100082720("PlusAppAppearanceEntryPointProvider",0x23,2);
  *param_1 = puVar10;
  return;
}



/* Entry: 102951a58; end: 102951aa3;  */

void FUN_102951a58(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102951b30,param_1);
  return;
}



/* Entry: 102951aa4; end: 102951b2f;  */

void FUN_102951aa4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102951b30; end: 102951b47;  */

void FUN_102951b30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102951b48; end: 102951bd3; -[_TtC39PlusSettingsAppAppearanceImplementationP33_90D3488890FDEA8C50C3C76E83415E6933AppAppearancePageDismissForwarder appAppearancePageDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102951b48(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eced68;
  lVar2 = *(long *)(param_1 + _DAT_112ecec08);
  func_0x000107c61428(lVar2 + _DAT_112eced68,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61174(param_1);
    func_0x000107c4ea28(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102951bd4; end: 102951c33; -[_TtC39PlusSettingsAppAppearanceImplementationP33_90D3488890FDEA8C50C3C76E83415E6933AppAppearancePageDismissForwarder init] */

void FUN_102951bd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusSettingsAppAppearanceImplementation.AppAppearancePageDismissForwarder",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102951c00);
  (*pcVar1)();
}



/* Entry: 102951c34; end: 102951c43; -[_TtC39PlusSettingsAppAppearanceImplementationP33_90D3488890FDEA8C50C3C76E83415E6933AppAppearancePageDismissForwarder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102951c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecec08));
  return;
}



/* Entry: 102951c44; end: 102952373;  */

void FUN_102951c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_110571190;
  func_0x000107c613fc(&UNK_110571190,0x88,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x0001000823a8(FUN_102952374,puVar1);
  return;
}



/* Entry: 102952374; end: 1029523d7;  */

void FUN_102952374(void)

{
  long unaff_x20;
  
  func_0x000102951da8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 1029523d8; end: 1029523e7;  */

undefined1  [16] FUN_1029523d8(void)

{
  return ZEXT816(0x1105711b8);
}



/* Entry: 1029523e8; end: 102952447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029523e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eced68;
  func_0x000107c61428(param_1 + _DAT_112eced68,auStack_38,0,0);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4ea28();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 102952448; end: 10295247b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102952448(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eced68;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_112eced68,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4ea28();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10295247c; end: 10295282f;  */

void FUN_10295247c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112ecec50,&UNK_10daf4df8);
  puVar3 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec(puVar3);
  FUN_1029541c4(uVar4);
  func_0x000100082720("PlusDeeplinkScopedPlusGiftingScopeExposerServiceProvider",0x38,2);
  FUN_1029541f8(uVar5);
  func_0x000100082720("PlusDeeplinkScopedPlusManagementScopeExposerServiceProvider",0x3b,2);
  FUN_102954190(uVar6);
  func_0x000100082720("PlusDeeplinkScopedPlusSubscribeScopeExposerServiceProvider",0x3a,2);
  func_0x0001029525c8(uVar7,uVar1,uVar4,uVar5,uVar2,puVar3,uVar6,uVar8);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar3);
  func_0x000100082720("PlusDeeplinkEntryPointEntryPointProvider",0x28,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 102952830; end: 102952843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102952830(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar3 = &lStack_b0;
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  FUN_102954170();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ecec60) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ecec68) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ecec70) = uStack_68;
  *(undefined8 *)(lVar2 + _DAT_112ecec78) = uStack_70;
  *(undefined8 *)(lVar2 + _DAT_112ecec80) = uStack_78;
  *(undefined8 *)(lVar2 + _DAT_112ecec88) = uStack_80;
  *(undefined8 *)(lVar2 + _DAT_112ecec90) = uStack_88;
  *(undefined8 *)(lVar2 + _DAT_112ecec98) = uStack_90;
  *(undefined8 *)(lVar2 + _DAT_112ececa0) = uStack_98;
  *(undefined8 *)(lVar2 + _DAT_112ececa8) = uStack_a0;
  lStack_b0 = lVar2;
  lStack_a8 = lVar1;
  func_0x000107c61154(&lStack_b0,PTR_s_init_1125d9248);
  *param_1 = plVar3;
  return;
}



/* Entry: 102952844; end: 1029531f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102952844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecec60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecec68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecec70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecec78) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecec80) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ecec88) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ecec90) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ecec98) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ececa0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ececa8) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029531f8; end: 1029535ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1029531f8(ulong param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  uVar2 = param_1;
  uVar5 = param_2;
  FUN_102953af8();
  lVar3 = *(long *)(unaff_x20 + _DAT_112ecec90);
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar6 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar6 == 0) {
    bVar1 = true;
  }
  else {
    lVar3 = lVar6;
    func_0x000107c443ec();
    func_0x000107c61180();
    func_0x000107c615e8(lVar6);
    lVar6 = lVar3;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar6;
    func_0x000107c5bcc0();
    func_0x000107c61170(lVar6);
    bVar1 = lVar3 == 0;
  }
  if (uVar5 == 0) {
LAB_1029534fc:
    param_1 = 0;
    lVar6 = 1;
    if ((param_2 & 1) == 0) {
      lVar6 = 2;
    }
  }
  else {
    if (((uVar2 == 0x6567616e616d) && (uVar5 == 0xe600000000000000)) ||
       (uVar4 = uVar2, func_0x000107c605b8(uVar2,uVar5,0x6567616e616d,0xe600000000000000,0),
       (uVar4 & 1) != 0)) {
      func_0x000107c6142c(uVar5);
      param_1 = 0;
      lVar6 = 1;
      goto LAB_10295350c;
    }
    if (((uVar2 == 0x6269726373627573) && (uVar5 == 0xe900000000000065)) ||
       (uVar4 = uVar2, func_0x000107c605b8(uVar2,uVar5,0x6269726373627573,0xe900000000000065,0),
       (uVar4 & 1) != 0)) {
      func_0x000107c6142c(uVar5);
      param_1 = 0;
      lVar6 = 2;
      goto LAB_10295350c;
    }
    if ((uVar2 == 0x6168732f74666967) && (uVar5 == 0xea00000000006572)) {
      if (bVar1) {
        func_0x000107c605b8(0x6168732f74666967,0xea00000000006572,0x74666967,0xe400000000000000,0);
        goto LAB_1029533a8;
      }
    }
    else {
      uVar4 = uVar2;
      func_0x000107c605b8(uVar2,uVar5,0x6168732f74666967,0xea00000000006572,0);
      if (bVar1 || (((uint)uVar4 ^ 0xffffffff) & 1) != 0) {
        if ((uVar2 == 0x74666967) && (uVar5 == 0xe400000000000000)) {
          if (!bVar1) {
LAB_1029534bc:
            func_0x000107c6142c(uVar5);
            param_1 = 0;
            lVar6 = 3;
            goto LAB_10295350c;
          }
        }
        else {
          uVar4 = uVar2;
          func_0x000107c605b8(uVar2,uVar5,0x74666967,0xe400000000000000,0);
          if (!bVar1 && (((uint)uVar4 ^ 0xffffffff) & 1) == 0) goto LAB_1029534bc;
        }
LAB_1029533a8:
        if ((param_2 & 1) == 0) {
          if (((uVar2 == 0x7361707964647562) && (uVar5 == 0xef6d69616c632f73)) ||
             (uVar4 = uVar2,
             func_0x000107c605b8(uVar2,uVar5,0x7361707964647562,0xef6d69616c632f73,0),
             (uVar4 & 1) != 0)) {
            func_0x000107c6142c(uVar5);
            param_1 = 0;
            lVar6 = 5;
            goto LAB_10295350c;
          }
          if (((uVar2 == 0x7373617070616e73) && (uVar5 == 0xee006d69616c632f)) ||
             (uVar4 = uVar2,
             func_0x000107c605b8(uVar2,uVar5,0x7373617070616e73,0xee006d69616c632f,0),
             (uVar4 & 1) != 0)) {
            lVar6 = 0x6e676961706d6163;
            FUN_102953974(param_1,0x6e676961706d6163,0xed0000646975755f);
            if (lVar6 != 0) {
              func_0x000107c6142c(uVar5);
              goto LAB_10295350c;
            }
          }
        }
        if ((uVar2 == 0x657070615f707061) && (uVar5 == 0xee0065636e617261)) {
          func_0x000107c6142c(0xee0065636e617261);
        }
        else {
          func_0x000107c605b8(uVar2,uVar5,0x657070615f707061,0xee0065636e617261,0);
          func_0x000107c6142c(uVar5);
          if ((uVar2 & 1) == 0) goto LAB_1029534fc;
        }
        param_1 = 0;
        lVar6 = 6;
        goto LAB_10295350c;
      }
    }
    func_0x000107c6142c(uVar5);
    param_1 = 0;
    lVar6 = 4;
  }
LAB_10295350c:
  auVar7._8_8_ = lVar6;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 1029535ac; end: 10295364f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029535ac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f30f70;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112ecec98);
    func_0x000107c61428(lVar2 + _DAT_112f30f70,auStack_60,0,0);
    lVar2 = lVar2 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      func_0x000107c4ea44(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 102953650; end: 102953677; -[_TtC28SCPlusDeeplinkImplementation22PlusDeeplinkEntryPoint handle] */

void FUN_102953650(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102952938();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102953678; end: 1029536d7; -[_TtC28SCPlusDeeplinkImplementation22PlusDeeplinkEntryPoint init] */

void FUN_102953678(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusDeeplinkImplementation.PlusDeeplinkEntryPoint",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029536a4);
  (*pcVar1)();
}



/* Entry: 1029536d8; end: 10295378f; -[_TtC28SCPlusDeeplinkImplementation22PlusDeeplinkEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029536f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102953714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102953734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102953754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102953774: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102953758) */
/* WARNING: Removing unreachable block (ram,0x000102953738) */
/* WARNING: Removing unreachable block (ram,0x000102953718) */
/* WARNING: Removing unreachable block (ram,0x0001029536f8) */
/* WARNING: Removing unreachable block (ram,0x000102953778) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029536d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecec90));
  return;
}



/* Entry: 102953790; end: 1029537bf; -[_TtC28SCPlusDeeplinkImplementation22PlusDeeplinkEntryPoint plusSubscribeDidDismiss] */

void FUN_102953790(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001029537f0(&DAT_112ececa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029537c0; end: 10295388b; -[_TtC28SCPlusDeeplinkImplementation22PlusDeeplinkEntryPoint plusManagementDidDismiss] */

void FUN_1029537c0(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001029537f0(&DAT_112ecec88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10295388c; end: 1029538bb; -[_TtC28SCPlusDeeplinkImplementation22PlusDeeplinkEntryPoint plusGiftingPageDidDismiss] */

void FUN_10295388c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001029537f0(&DAT_112ecec80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029538bc; end: 1029538c7; -[_TtC28SCPlusDeeplinkImplementation22PlusDeeplinkEntryPoint plusAppAppearanceDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029538bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ecec68);
  *(undefined8 *)(param_1 + _DAT_112ecec68) = 0;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  lVar1 = _DAT_112f30f70;
  lVar3 = *(long *)(param_1 + _DAT_112ecec98);
  func_0x000107c61428(lVar3 + _DAT_112f30f70,auStack_48,0,0);
  lVar3 = lVar3 + lVar1;
  func_0x000107c61618();
  if (lVar3 == 0) {
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c4ea44();
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 1029538c8; end: 1029538d3; -[_TtC28SCPlusDeeplinkImplementation22PlusDeeplinkEntryPoint giftingLinkTrayDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029538c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ecec60);
  *(undefined8 *)(param_1 + _DAT_112ecec60) = 0;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  lVar1 = _DAT_112f30f70;
  lVar3 = *(long *)(param_1 + _DAT_112ecec98);
  func_0x000107c61428(lVar3 + _DAT_112f30f70,auStack_48,0,0);
  lVar3 = lVar3 + lVar1;
  func_0x000107c61618();
  if (lVar3 == 0) {
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c4ea44();
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 1029538d4; end: 102953973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029538d4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  *(undefined8 *)(param_1 + *param_3) = 0;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  lVar1 = _DAT_112f30f70;
  lVar3 = *(long *)(param_1 + _DAT_112ecec98);
  func_0x000107c61428(lVar3 + _DAT_112f30f70,auStack_48,0,0);
  lVar3 = lVar3 + lVar1;
  func_0x000107c61618();
  if (lVar3 == 0) {
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c4ea44();
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 102953974; end: 102953ae3;  */

undefined1  [16] FUN_102953974(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined1 auVar7 [16];
  ulong uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    return ZEXT816(0);
  }
  func_0x000107c4f778();
  func_0x000107c61180();
  puVar2 = PTR___sypN_11034f1a8;
  lVar3 = param_1;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_1);
  uStack_98 = param_2;
  uStack_90 = param_3;
  func_0x000107c61434(param_3);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_88,&uStack_98,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(lVar3 + 0x10) == 0) {
LAB_102953a58:
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c61434(lVar3);
    puVar4 = auStack_88;
    func_0x000100df95d0(puVar4);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(lVar3);
      goto LAB_102953a58;
    }
    func_0x0001000bb420(*(long *)(lVar3 + 0x38) + (long)puVar4 * 0x20,&uStack_60);
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c6142c(lVar3);
  func_0x0001007bbff0(auStack_88);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    puVar5 = &uStack_98;
    func_0x000107c6147c(puVar5,&uStack_60,puVar2 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar5 & 1) != 0) {
      uVar1 = uStack_98 & 0xffffffffffff;
      if ((uStack_90 & 0x2000000000000000) != 0) {
        uVar1 = uStack_90 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) goto LAB_102953acc;
      func_0x000107c6142c(uStack_90);
    }
  }
  uStack_98 = 0;
  uStack_90 = 0;
LAB_102953acc:
  auVar7._8_8_ = uStack_90;
  auVar7._0_8_ = uStack_98;
  return auVar7;
}



/* Entry: 102953ae4; end: 102953af7;  */

void FUN_102953ae4(undefined8 param_1,ulong param_2)

{
  if (param_2 < 7) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102953af8; end: 102953e13;  */

void FUN_102953af8(ulong param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  func_0x000107c4e430();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    uVar4 = uVar3 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar4 = param_2 >> 0x38 & 0xf;
    }
    if (uVar4 == 0) {
      func_0x000107c6142c(param_2);
    }
    else {
      uVar4 = 0x2f;
      func_0x000107c5fbb4(0x2f,0xe100000000000000,uVar3,param_2);
      uVar1 = (uint)(uVar3 >> 0x20);
      while ((uVar4 & 1) != 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          if ((uVar3 & 0xffffffffffff) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102953e0c);
            (*pcVar2)();
          }
        }
        else if ((param_2 & 0xf00000000000000) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102953e08);
          (*pcVar2)();
        }
        uVar9 = uVar1 >> 0x1b & 1;
        if ((param_2 & 0x1000000000000000) == 0) {
          uVar9 = 1;
        }
        uVar7 = uVar3;
        func_0x000107c5fbcc(0xf,uVar3,param_2);
        uVar4 = uVar3 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar4 = param_2 >> 0x38 & 0xf;
        }
        uVar8 = 7;
        if (uVar9 == 0) {
          uVar8 = 0xb;
        }
        uVar5 = 0xf;
        uVar9 = 1;
        func_0x000107c5fb68(0xf,1,uVar8 | uVar4 << 0x10,uVar3,param_2);
        if ((uVar9 & 0xff) == 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102953e14);
          (*pcVar2)();
        }
        func_0x000107c5fb30(0xf,uVar5);
        func_0x000107c6142c(uVar7);
        uVar4 = 0x2f;
        func_0x000107c5fbb4(0x2f,0xe100000000000000,uVar3,param_2);
      }
      uVar4 = 0x2f;
      func_0x000107c5fbb8(0x2f,0xe100000000000000,uVar3,param_2);
      while ((uVar4 & 1) != 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          uVar4 = uVar3 & 0xffffffffffff;
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102953e10);
            (*pcVar2)();
          }
        }
        else {
          uVar4 = param_2 >> 0x38 & 0xf;
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102953cac);
            (*pcVar2)();
          }
        }
        uVar9 = uVar1 >> 0x1b & 1;
        if ((param_2 & 0x1000000000000000) == 0) {
          uVar9 = 1;
        }
        uVar7 = 7;
        if (uVar9 == 0) {
          uVar7 = 0xb;
        }
        uVar8 = uVar3;
        func_0x000107c5fb64(uVar7 | uVar4 << 0x10,uVar3,param_2);
        func_0x000107c5fb7c();
        func_0x000107c6142c(uVar8);
        uVar4 = 0x2f;
        func_0x000107c5fbb8(0x2f,0xe100000000000000,uVar3,param_2);
      }
      func_0x000107c5fadc(uVar3,param_2);
      uVar4 = uVar3;
      func_0x000107c4e43c();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      uVar3 = uVar4;
      func_0x000107c5fc54(uVar4,PTR___sSSN_11034da80);
      func_0x000107c61170(uVar4);
      lVar10 = *(long *)(uVar3 + 0x10);
      if (lVar10 != 0) {
        uVar4 = *(ulong *)(uVar3 + 0x20);
        if ((uVar4 == 0x73756c70 && *(long *)(uVar3 + 0x28) == -0x1c00000000000000) ||
           (func_0x000107c605b8(uVar4,*(long *)(uVar3 + 0x28),0x73756c70,0xe400000000000000,0),
           (uVar4 & 1) != 0)) {
          uVar4 = uVar3;
          func_0x000107c61558();
          if (((int)uVar4 == 0) || (*(ulong *)(uVar3 + 0x18) >> 1 < lVar10 - 1U)) {
            func_0x0001000d182c();
            uVar3 = uVar4;
          }
          func_0x000101755ed8(0,1,0);
        }
      }
      uVar5 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar6 = uVar5;
      func_0x00010011d734();
      func_0x000107c5fa80(0x2f,0xe100000000000000,uVar5,uVar6);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar3);
    }
  }
  return;
}



/* Entry: 102953e14; end: 10295413b;  */

undefined8 FUN_102953e14(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0x5f65646172677075;
  FUN_102953974(param_1,0x5f65646172677075,0xec00000072656974);
  if (lVar2 != 0) {
    uVar1 = 0x656572665f6461;
    if (((param_1 == 0x656572665f6461) && (lVar2 == -0x1900000000000000)) ||
       (func_0x000107c605b8(0x656572665f6461,0xe700000000000000,param_1,lVar2,0), (uVar1 & 1) != 0))
    {
      func_0x000107c6142c(lVar2);
      return 1;
    }
    uVar1 = 0;
    if (((param_1 == 0x756c705f736e656c) && (lVar2 == -0x16ffffffffffff8d)) ||
       (func_0x000107c605b8(0x756c705f736e656c,0xe900000000000073,param_1,lVar2,0), (uVar1 & 1) != 0
       )) {
      func_0x000107c6142c(lVar2);
      return 2;
    }
    uVar1 = 0x73756c705f6373;
    if ((param_1 == 0x73756c705f6373) && (lVar2 == -0x1900000000000000)) {
      func_0x000107c6142c(0xe700000000000000);
      return 3;
    }
    func_0x000107c605b8(0x73756c705f6373,0xe700000000000000,param_1,lVar2,0);
    func_0x000107c6142c(lVar2);
    if ((uVar1 & 1) != 0) {
      return 3;
    }
  }
  return 0;
}



/* Entry: 10295413c; end: 10295416f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295413c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f30f70;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112ecec98);
    func_0x000107c61428(lVar3 + _DAT_112f30f70,auStack_60,0,0);
    lVar3 = lVar3 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c4ea44(lVar3);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 102954170; end: 10295418f;  */

void FUN_102954170(void)

{
  func_0x000107c61168(&PTR_PTR_112872290);
  return;
}



/* Entry: 102954190; end: 10295419b;  */

void FUN_102954190(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10295419c,param_1);
  return;
}



/* Entry: 10295419c; end: 1029541c3;  */

void FUN_10295419c(void)

{
  func_0x00010295425c();
  return;
}



/* Entry: 1029541c4; end: 1029541cf;  */

void FUN_1029541c4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029541d0,param_1);
  return;
}



/* Entry: 1029541d0; end: 1029541f7;  */

void FUN_1029541d0(void)

{
  func_0x00010295425c();
  return;
}



/* Entry: 1029541f8; end: 102954203;  */

void FUN_1029541f8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029542e8,param_1);
  return;
}


