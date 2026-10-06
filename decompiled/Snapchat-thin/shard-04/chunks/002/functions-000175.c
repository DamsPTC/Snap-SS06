/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103280da0; end: 103280e1f;  */

void FUN_103280da0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  puVar1 = &UNK_110630798;
  func_0x000107c613fc(&UNK_110630798,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103280f04,puVar1);
  return;
}



/* Entry: 103280e20; end: 103280f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103280e20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_60;
  func_0x000100083b20(&uStack_48);
  func_0x0001000285a8(0x112ee3fe0,&UNK_10db0f070);
  func_0x000100083b20(&uStack_50);
  uVar1 = uStack_50;
  func_0x000107c4b254();
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  lVar3 = 0;
  FUN_103282c30();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f501a8) = uStack_48;
  *(undefined8 *)(lVar4 + _DAT_112f501b0) = uVar2;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 103280f04; end: 103280f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103280f04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_60;
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x0001000285a8(0x112ee3fe0,&UNK_10db0f070);
  func_0x000100083b20(&uStack_50);
  uVar1 = uStack_50;
  func_0x000107c4b254();
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  lVar3 = 0;
  FUN_103282c30();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f501a8) = uStack_48;
  *(undefined8 *)(lVar4 + _DAT_112f501b0) = uVar2;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 103280f30; end: 103280fdb;  */

void FUN_103280f30(void)

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



/* Entry: 103280fdc; end: 103280feb;  */

void FUN_103280fdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103280fec; end: 103281a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103280fec(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined **ppuStack_d8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &UNK_110630870;
  func_0x000107c613fc(&UNK_110630870,0x18,7);
  puVar19 = (undefined8 *)(puVar2 + 0x10);
  *puVar19 = param_3;
  ppuStack_90 = (undefined **)0x6469736e656c;
  ppuStack_88 = (undefined **)0xe600000000000000;
  func_0x000107c61434(param_3);
  puVar10 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&puStack_c0,&ppuStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_1032810bc:
    ppuStack_78 = (undefined **)0x0;
    ppuStack_80 = (undefined **)0x0;
    puStack_68 = (undefined *)0x0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(param_2);
    ppuVar17 = &puStack_c0;
    func_0x000100df95d0(ppuVar17);
    if (((ulong)puVar10 & 1) == 0) {
      func_0x000107c6142c(param_2);
      goto LAB_1032810bc;
    }
    func_0x0001000bb420(*(long *)(param_2 + 0x38) + (long)ppuVar17 * 0x20,&ppuStack_80);
    func_0x000107c6142c(param_2);
  }
  func_0x0001007bbff0(&puStack_c0);
  puVar11 = PTR___sypN_11034f1a8;
  puVar10 = PTR___sSSN_11034da80;
  if (puStack_68 == (undefined *)0x0) {
    func_0x00010006e7f4(&ppuStack_80);
LAB_1032811e0:
    ppuStack_d8 = (undefined **)0x0;
    ppuVar17 = (undefined **)0x0;
  }
  else {
    pppuVar3 = &ppuStack_90;
    func_0x000107c6147c(pppuVar3,&ppuStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    ppuVar17 = ppuStack_88;
    ppuStack_d8 = ppuStack_90;
    if (((ulong)pppuVar3 & 1) == 0) goto LAB_1032811e0;
    ppuStack_80 = (undefined **)0x6c5f6c6169636f73;
    ppuStack_78 = (undefined **)0xeb00000000736e65;
    func_0x000107c61434(ppuStack_88);
    puVar12 = PTR___sSSSHsWP_11034da90;
    func_0x000107c602d4(&puStack_c0,&ppuStack_80,puVar10,PTR___sSSSHsWP_11034da90);
    puStack_68 = puVar10;
    ppuStack_80 = ppuStack_d8;
    ppuStack_78 = ppuVar17;
    ppuVar14 = &puStack_c0;
    func_0x000101fd80b4(&ppuStack_80);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e60d98;
    func_0x000107c5faec();
    ppuStack_90 = ppuVar4;
    ppuStack_88 = ppuVar14;
    func_0x000107c61434(ppuVar14);
    func_0x000107c602d4(&puStack_c0,&ppuStack_90,puVar10,puVar12);
    ppuVar4 = (undefined **)*puVar19;
    if (ppuVar4[2] == (undefined *)0x0) {
LAB_103281550:
      ppuStack_78 = (undefined **)0x0;
      ppuStack_80 = (undefined **)0x0;
      puStack_68 = (undefined *)0x0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c61434(ppuVar4);
      ppuVar5 = &puStack_c0;
      func_0x000100df95d0(ppuVar5);
      if (((ulong)puVar10 & 1) == 0) {
        func_0x000107c6142c(ppuVar4);
        goto LAB_103281550;
      }
      func_0x0001000bb420(ppuVar4[7] + (long)ppuVar5 * 0x20,&ppuStack_80);
      func_0x000107c6142c(ppuVar14);
      ppuVar14 = ppuVar4;
    }
    func_0x000107c6142c(ppuVar14);
    func_0x0001007bbff0(&puStack_c0);
    if (puStack_68 == (undefined *)0x0) {
      func_0x00010006e7f4(&ppuStack_80);
    }
    else {
      pppuVar3 = &ppuStack_90;
      func_0x000107c6147c(pppuVar3,&ppuStack_80,puVar11 + 8,PTR___sSSN_11034da80,6);
      ppuVar4 = ppuStack_88;
      ppuVar14 = ppuStack_90;
      if (((ulong)pppuVar3 & 1) != 0) {
        func_0x0001000d224c(&puStack_c0);
        if (puStack_c0 == (undefined *)0x0) {
          func_0x000107c6142c(ppuVar4);
        }
        else {
          func_0x000107c5fadc(ppuVar14,ppuVar4);
          func_0x000107c6142c(ppuVar4);
          func_0x000107c56b00(puStack_c0);
          func_0x000107c615e8(puStack_c0);
          func_0x000107c61170(ppuVar14);
        }
      }
    }
  }
  lVar18 = param_1;
  func_0x000107c3abfc();
  func_0x000107c61180();
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032817f0);
    (*pcVar1)();
  }
  uVar6 = 0x695f657469766e69;
  uVar15 = 0xe900000000000064;
  func_0x000107c5fadc(0x695f657469766e69);
  lVar7 = lVar18;
  func_0x000107c4f7a0();
  func_0x000107c61180();
  func_0x000107c61170(lVar18);
  func_0x000107c61170(uVar6);
  if (lVar7 == 0) {
    lVar18 = 0;
    uVar15 = 0;
  }
  else {
    lVar18 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
  }
  ppuStack_80 = (undefined **)0xd000000000000016;
  ppuStack_78 = (undefined **)0x800000010f134020;
  func_0x000107c602d4(&puStack_c0,&ppuStack_80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  puStack_68 = PTR___sSiN_11034deb0;
  ppuStack_80 = (undefined **)0xffffffffffffffff;
  func_0x000101fd80b4(&ppuStack_80,&puStack_c0);
  func_0x000107c4bb48(param_4);
  if (ppuVar17 != (undefined **)0x0) {
    uVar8 = param_2;
    func_0x0001032822bc();
    if ((uVar8 & 1) != 0) {
      lVar9 = *(long *)(unaff_x20 + _DAT_112f501a8);
      func_0x000107c4e26c();
      func_0x000107c61180();
      lVar7 = lVar9;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      if (lVar7 != 0) {
        ppuStack_80 = (undefined **)0x695f646e65697266;
        ppuStack_78 = (undefined **)0xe900000000000064;
        puVar10 = PTR___sSSN_11034da80;
        func_0x000107c602d4(&puStack_c0,&ppuStack_80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
        if (*(long *)(param_2 + 0x10) != 0) {
          func_0x000107c61434(param_2);
          ppuVar14 = &puStack_c0;
          func_0x000100df95d0(ppuVar14);
          if (((ulong)puVar10 & 1) != 0) {
            func_0x0001000bb420(*(long *)(param_2 + 0x38) + (long)ppuVar14 * 0x20,&ppuStack_80);
            func_0x000107c6142c(param_2);
            goto LAB_103281604;
          }
          func_0x000107c6142c(param_2);
        }
        ppuStack_78 = (undefined **)0x0;
        ppuStack_80 = (undefined **)0x0;
        puStack_68 = (undefined *)0x0;
        uStack_70 = 0;
LAB_103281604:
        func_0x0001007bbff0(&puStack_c0);
        if (puStack_68 == (undefined *)0x0) {
          func_0x00010006e7f4(&ppuStack_80);
          ppuVar14 = (undefined **)0x0;
          ppuVar4 = (undefined **)0x0;
        }
        else {
          pppuVar3 = &ppuStack_90;
          func_0x000107c6147c(pppuVar3,&ppuStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6)
          ;
          ppuVar14 = ppuStack_90;
          ppuVar4 = ppuStack_88;
          if ((int)pppuVar3 == 0) {
            ppuVar14 = (undefined **)0x0;
            ppuVar4 = (undefined **)0x0;
          }
        }
        FUN_1032832c0(0);
        func_0x000107c610f8();
        func_0x000107c61434(ppuVar17);
        ppuVar5 = ppuStack_d8;
        func_0x0001032831a4(ppuStack_d8,ppuVar17,ppuVar14,ppuVar4);
        puVar10 = &UNK_1106308e8;
        func_0x000107c613fc(&UNK_1106308e8,0x18,7);
        func_0x000107c61614(puVar10 + 0x10);
        puVar11 = &UNK_110630898;
        func_0x000107c613fc(&UNK_110630898,0x18,7);
        func_0x000107c61614(puVar11 + 0x10,param_4);
        puVar12 = &UNK_110630960;
        func_0x000107c613fc(&UNK_110630960,0x58,7);
        *(undefined **)(puVar12 + 0x10) = puVar10;
        *(undefined **)(puVar12 + 0x18) = puVar11;
        *(long *)(puVar12 + 0x20) = param_1;
        *(ulong *)(puVar12 + 0x28) = param_2;
        *(undefined **)(puVar12 + 0x30) = puVar2;
        *(long *)(puVar12 + 0x38) = lVar18;
        *(undefined8 *)(puVar12 + 0x40) = uVar15;
        *(undefined ***)(puVar12 + 0x48) = ppuStack_d8;
        *(undefined ***)(puVar12 + 0x50) = ppuVar17;
        pcStack_a0 = FUN_103282e18;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_100f21850;
        puStack_a8 = &UNK_110630978;
        ppuVar17 = &puStack_c0;
        puStack_98 = puVar12;
        func_0x000107c60bc4(ppuVar17);
        puVar10 = puStack_98;
        func_0x000107c61434(param_2);
        func_0x000107c61174(ppuVar5);
        func_0x000107c61174(param_1);
        func_0x000107c6157c(puVar2);
        func_0x000107c61574(puVar10);
        func_0x000107c4ab9c(lVar7);
        func_0x000107c60bd0(ppuVar17);
        func_0x000107c61574(puVar2);
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(ppuVar5);
        func_0x000107c61170(ppuVar5);
        return;
      }
    }
    func_0x000107c6142c(ppuVar17);
  }
  uVar6 = *puVar19;
  func_0x000107c61434(uVar6);
  FUN_103282544(param_1,param_2,uVar6);
  lVar16 = *(long *)(unaff_x20 + _DAT_112f501a8);
  lVar7 = lVar16;
  func_0x000107c4e26c();
  func_0x000107c61180();
  lVar9 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar9 == 0) {
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(uVar15);
  }
  else {
    puVar10 = &UNK_110630898;
    func_0x000107c613fc(&UNK_110630898,0x18,7);
    func_0x000107c61614(puVar10 + 0x10,param_4);
    puVar11 = &UNK_1106308c0;
    func_0x000107c613fc(&UNK_1106308c0,0x18,7);
    func_0x000107c61614(puVar11 + 0x10,lVar16);
    puVar12 = &UNK_1106308e8;
    func_0x000107c613fc(&UNK_1106308e8,0x18,7);
    func_0x000107c61614(puVar12 + 0x10);
    puVar13 = &UNK_110630910;
    func_0x000107c613fc(&UNK_110630910,0x38,7);
    *(long *)(puVar13 + 0x10) = lVar18;
    *(undefined8 *)(puVar13 + 0x18) = uVar15;
    *(undefined **)(puVar13 + 0x20) = puVar12;
    *(undefined **)(puVar13 + 0x28) = puVar11;
    *(undefined **)(puVar13 + 0x30) = puVar10;
    pcStack_a0 = FUN_103282df8;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_100ff4e10;
    puStack_a8 = &UNK_110630928;
    ppuVar17 = &puStack_c0;
    puStack_98 = puVar13;
    func_0x000107c60bc4(ppuVar17);
    puVar10 = puStack_98;
    func_0x000107c61434(uVar15);
    func_0x000107c61574(puVar10);
    func_0x000107c4ab94(lVar9);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(uVar15);
    func_0x000107c6142c(uVar6);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c61574(puVar2);
    func_0x000107c615e8(lVar9);
  }
  return;
}



/* Entry: 103281a88; end: 103281c5f;  */

void FUN_103281a88(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if (param_3 != 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_88,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      func_0x000107c61170();
      puVar1 = PTR_PTR_1126acf60;
      func_0x000107c610f8(PTR_PTR_1126acf60);
      func_0x000107c453e4();
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c58f34(puVar1);
      func_0x000107c61170(param_2);
      func_0x000107c5589c(puVar1);
      puVar2 = PTR_PTR_1126b0ea8;
      func_0x000107c610f8(PTR_PTR_1126b0ea8);
      func_0x000107c453e4();
      func_0x000107c52478();
      func_0x000107c61170(puVar1);
      func_0x000107c61428(param_5 + 0x10,auStack_a0,0,0);
      param_5 = param_5 + 0x10;
      func_0x000107c61618();
      if (param_5 != 0) {
        lVar3 = param_5;
        func_0x000107c4e26c();
        func_0x000107c61180();
        func_0x000107c61170(param_5);
        lVar4 = lVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar4 != 0) {
          func_0x000107c4ab94(lVar4);
          func_0x000107c615e8(lVar4);
        }
      }
      func_0x000107c61170(puVar2);
    }
  }
  func_0x000107c61428(param_6 + 0x10,auStack_58,0,0);
  lVar3 = param_6 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (param_1 != 0) {
      func_0x000107c5ed2c(param_1);
    }
    func_0x000107c4bb60(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61428(param_6 + 0x10,auStack_70,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61618();
  if (param_6 != 0) {
    func_0x000107c42804();
    func_0x000107c615e8(param_6);
  }
  return;
}



/* Entry: 103281c60; end: 103281cbf; -[_TtC12LensDeepLink21LensDeepLinkProcessor init] */

void FUN_103281c60(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensDeepLink.LensDeepLinkProcessor",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103281c8c);
  (*pcVar1)();
}



/* Entry: 103281cc0; end: 103281cf7; -[_TtC12LensDeepLink21LensDeepLinkProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103281cc0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f501a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f501b0));
  return;
}



/* Entry: 103281cf8; end: 103281d47; -[_TtC12LensDeepLink21LensDeepLinkProcessor identifier] */

void FUN_103281cf8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  func_0x000107c614f0();
  uStack_28 = param_1;
  func_0x000107c614e4();
  puVar1 = &uStack_28;
  func_0x000107c5fb18(puVar1,param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103281d48; end: 103281d4f; -[_TtC12LensDeepLink21LensDeepLinkProcessor priority] */

undefined8 FUN_103281d48(void)

{
  return 1000;
}



/* Entry: 103281d50; end: 103281db7; -[_TtC12LensDeepLink21LensDeepLinkProcessor canProvideProcessorForFeature:] */

bool FUN_103281d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c5faec(param_3);
  lVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  return lVar1 == 0;
}



/* Entry: 103281db8; end: 103281e8f; -[_TtC12LensDeepLink21LensDeepLinkProcessor isValidDeepLink:] */

undefined8 FUN_103281db8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  lVar1 = param_3;
  func_0x000107c42e38();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c615e8(param_3);
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    lVar1 = 0x112d3cde0;
    func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
    func_0x000107c61538();
    func_0x000107c604c4();
    func_0x000107c615e8(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
    if (lVar1 == 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 103281e90; end: 103281e93; -[_TtC12LensDeepLink21LensDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_103281e90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 103281e94; end: 10328216f;  */

/* WARNING: Possible PIC construction at 0x000103281f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103281fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103282040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010328206c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032820cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103282124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103282144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103282128) */
/* WARNING: Removing unreachable block (ram,0x0001032820d0) */
/* WARNING: Removing unreachable block (ram,0x000103282070) */
/* WARNING: Removing unreachable block (ram,0x000103282080) */
/* WARNING: Removing unreachable block (ram,0x000103282044) */
/* WARNING: Removing unreachable block (ram,0x00010328209c) */
/* WARNING: Removing unreachable block (ram,0x0001032820a8) */
/* WARNING: Removing unreachable block (ram,0x0001032820ac) */
/* WARNING: Removing unreachable block (ram,0x000103282058) */
/* WARNING: Removing unreachable block (ram,0x000103281fbc) */
/* WARNING: Removing unreachable block (ram,0x000103281f24) */
/* WARNING: Removing unreachable block (ram,0x000103282148) */

void FUN_103281e94(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = param_1;
  func_0x000107c42e38();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    lVar1 = 0x112d3cde0;
    func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
    func_0x000107c61538();
    func_0x000107c604c4();
    puVar3 = (undefined1 *)0xe000000000000000;
    func_0x000107c6142c();
    if (lVar1 == 0) {
      uStack_68 = param_2;
      func_0x000107c3abfc(param_1);
      func_0x000107c61180();
      func_0x000107c5edb4(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    }
    else {
      FUN_103282170();
      puVar2 = &UNK_110630850;
      func_0x000107c613f8(&UNK_110630850,puVar3,0,0);
      *puVar3 = 0;
      param_1 = puVar2;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar2);
      func_0x000107c4bb60(param_3);
    }
  }
  else {
    func_0x000107c5faec();
    param_1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103282170; end: 1032821af;  */

void FUN_103282170(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f501a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba4b5c;
  func_0x000107c61520(&UNK_10dba4b5c,&UNK_110630850);
  puRam0000000112f501a0 = puVar1;
  return;
}



/* Entry: 1032821b0; end: 10328224f; -[_TtC12LensDeepLink21LensDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_1032821b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_103281e94(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 103282250; end: 103282257; -[_TtC12LensDeepLink21LensDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_103282250(void)

{
  return 1;
}



/* Entry: 103282258; end: 103282427; -[_TtC12LensDeepLink21LensDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

/* WARNING: Possible PIC construction at 0x00010328229c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032822a0) */

void FUN_103282258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_103282b74(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103282428; end: 103282543;  */

undefined4 FUN_103282428(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  code *pcVar7;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_1;
  func_0x000107c3abfc();
  func_0x000107c61180();
  func_0x000107c5edb4(puVar5);
  func_0x000107c61170();
  func_0x000107c5ed90();
  pcVar7 = *(code **)(lVar6 + 8);
  (*pcVar7)(puVar5,lVar1);
  uVar3 = uVar2;
  func_0x000106a5b8ac();
  func_0x000107c61170(uVar2);
  if ((uVar3 & 1) == 0) {
    func_0x000107c3abfc();
    func_0x000107c61180();
    func_0x000107c5edb4(puVar5);
    func_0x000107c61170();
    func_0x000107c5ed90();
    (*pcVar7)(puVar5,lVar1);
    uVar2 = param_1;
    func_0x000106a5ba90();
    func_0x000107c61170(param_1);
    uVar4 = 2;
    if ((int)uVar2 == 0) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 103282544; end: 103282b73;  */

undefined * FUN_103282544(undefined8 param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long extraout_x8;
  long lVar16;
  undefined1 auStack_c0 [8];
  undefined **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar4 = (undefined8 *)0x0;
  lVar13 = param_2;
  func_0x000107c5ede0();
  lVar16 = puVar4[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar5 = PTR_PTR_1126b63b8;
  func_0x000107c610f8(PTR_PTR_1126b63b8);
  func_0x000107c453e4();
  puVar6 = PTR_PTR_1126cac80;
  func_0x000107c61168();
  uVar12 = param_1;
  func_0x000107c3abfc(param_1);
  func_0x000107c61180();
  func_0x000107c5edb4(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(uVar12);
  func_0x000107c5ed70();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar13);
  (**(code **)(lVar16 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c4c118();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  puVar2 = PTR___sypN_11034f1a8;
  if (puVar6 == (undefined *)0x0) {
LAB_103282690:
    ppuStack_b8 = (undefined **)0x6469736e656c;
    puStack_b0 = (undefined8 *)0xe600000000000000;
    puVar4 = (undefined8 *)PTR___sSSN_11034da80;
    func_0x000107c602d4(auStack_a8,&ppuStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_103282704:
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c61434(param_2);
      puVar9 = auStack_a8;
      func_0x000100df95d0(puVar9);
      if (((ulong)puVar4 & 1) == 0) {
        func_0x000107c6142c(param_2);
        goto LAB_103282704;
      }
      puVar4 = &uStack_80;
      func_0x0001000bb420(*(long *)(param_2 + 0x38) + (long)puVar9 * 0x20);
      func_0x000107c6142c(param_2);
    }
    func_0x0001007bbff0(auStack_a8);
    if (lStack_68 == 0) {
      func_0x00010006e7f4(&uStack_80);
    }
    else {
      pppuVar10 = &ppuStack_b8;
      puVar4 = &uStack_80;
      func_0x000107c6147c(pppuVar10,puVar4,puVar2 + 8,PTR___sSSN_11034da80,6);
      puVar14 = puStack_b0;
      if (((ulong)pppuVar10 & 1) != 0) {
        ppuVar11 = ppuStack_b8;
        puVar4 = puStack_b0;
        func_0x000107c5fadc(ppuStack_b8);
        func_0x000107c6142c(puVar14);
        func_0x000107c55d70(puVar5);
        func_0x000107c61170(ppuVar11);
      }
    }
  }
  else {
    puVar7 = puVar6;
    func_0x000107c518a0();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103282b74);
      (*pcVar3)();
    }
    puVar8 = puVar7;
    func_0x000107c41214();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    if (puVar8 == (undefined *)0x0) goto LAB_103282690;
    func_0x000107c58c24(puVar5);
    func_0x000107c61170(puVar8);
  }
  puVar7 = PTR_PTR_1126b0ea8;
  func_0x000107c610f8(PTR_PTR_1126b0ea8);
  func_0x000107c453e4();
  func_0x000107c52fa4();
  ppuVar11 = &PTR____CFConstantStringClassReference_110e60d98;
  func_0x000107c5faec();
  ppuStack_b8 = ppuVar11;
  puStack_b0 = puVar4;
  func_0x000107c61434(puVar4);
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_a8,&ppuStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (param_3[2] == 0) {
LAB_103282814:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    puVar9 = auStack_a8;
    func_0x000100df95d0(puVar9);
    if (((ulong)puVar8 & 1) == 0) {
      func_0x000107c6142c(param_3);
      goto LAB_103282814;
    }
    func_0x0001000bb420(param_3[7] + (long)puVar9 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar4);
    puVar4 = param_3;
  }
  func_0x000107c6142c(puVar4);
  func_0x0001007bbff0(auStack_a8);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    pppuVar10 = &ppuStack_b8;
    func_0x000107c6147c(pppuVar10,&uStack_80,puVar2 + 8,PTR___sSSN_11034da80,6);
    puVar4 = puStack_b0;
    ppuVar11 = ppuStack_b8;
    if (((ulong)pppuVar10 & 1) != 0) {
      uVar1 = (ulong)ppuStack_b8 & 0xffffffffffff;
      if (((ulong)puStack_b0 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puStack_b0 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        puVar8 = PTR_PTR_1126b6370;
        func_0x000107c610f8(PTR_PTR_1126b6370);
        func_0x000107c453e4();
        puVar14 = puVar4;
        func_0x000107c5fadc(ppuVar11);
        func_0x000107c6142c(puVar4);
        func_0x000107c56b00(puVar8);
        func_0x000107c61170(ppuVar11);
        ppuVar11 = &PTR____CFConstantStringClassReference_110ea1438;
        func_0x000107c5faec();
        ppuStack_b8 = ppuVar11;
        puStack_b0 = puVar14;
        func_0x000107c61434(puVar14);
        puVar4 = (undefined8 *)PTR___sSSN_11034da80;
        func_0x000107c602d4(auStack_a8,&ppuStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
        if (param_3[2] == 0) {
LAB_1032829c8:
          uStack_78 = 0;
          uStack_80 = 0;
          lStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          func_0x000107c61434(param_3);
          puVar9 = auStack_a8;
          func_0x000100df95d0(puVar9);
          if (((ulong)puVar4 & 1) == 0) {
            func_0x000107c6142c(param_3);
            goto LAB_1032829c8;
          }
          puVar4 = &uStack_80;
          func_0x0001000bb420(param_3[7] + (long)puVar9 * 0x20);
          func_0x000107c6142c(puVar14);
          puVar14 = param_3;
        }
        func_0x000107c6142c(puVar14);
        func_0x0001007bbff0(auStack_a8);
        if (lStack_68 == 0) {
          func_0x00010006e7f4(&uStack_80);
        }
        else {
          pppuVar10 = &ppuStack_b8;
          puVar4 = &uStack_80;
          func_0x000107c6147c(pppuVar10,puVar4,puVar2 + 8,PTR___sSSN_11034da80,6);
          puVar14 = puStack_b0;
          if (((ulong)pppuVar10 & 1) != 0) {
            uVar1 = (ulong)ppuStack_b8 & 0xffffffffffff;
            if (((ulong)puStack_b0 & 0x2000000000000000) != 0) {
              uVar1 = (ulong)puStack_b0 >> 0x38 & 0xf;
            }
            if (uVar1 == 0) {
              func_0x000107c6142c(puStack_b0);
            }
            else {
              ppuVar11 = ppuStack_b8;
              puVar4 = puStack_b0;
              func_0x000107c5fadc();
              func_0x000107c6142c(puVar14);
              func_0x000107c57a58(puVar8);
              func_0x000107c61170(ppuVar11);
            }
          }
        }
        ppuVar11 = &PTR____CFConstantStringClassReference_110ea1418;
        func_0x000107c5faec();
        ppuStack_b8 = ppuVar11;
        puStack_b0 = puVar4;
        func_0x000107c61434(puVar4);
        puVar15 = PTR___sSSN_11034da80;
        func_0x000107c602d4(auStack_a8,&ppuStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
        if (param_3[2] == 0) {
LAB_103282ae4:
          uStack_78 = 0;
          uStack_80 = 0;
          lStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          func_0x000107c61434(param_3);
          puVar9 = auStack_a8;
          func_0x000100df95d0(puVar9);
          if (((ulong)puVar15 & 1) == 0) {
            func_0x000107c6142c(param_3);
            goto LAB_103282ae4;
          }
          func_0x0001000bb420(param_3[7] + (long)puVar9 * 0x20,&uStack_80);
          func_0x000107c6142c(puVar4);
          puVar4 = param_3;
        }
        func_0x000107c6142c(puVar4);
        func_0x0001007bbff0(auStack_a8);
        if (lStack_68 == 0) {
          func_0x00010006e7f4(&uStack_80);
        }
        else {
          uVar12 = 0;
          func_0x0001002ed07c(0);
          pppuVar10 = &ppuStack_b8;
          func_0x000107c6147c(pppuVar10,&uStack_80,puVar2 + 8,uVar12,6);
          ppuVar11 = ppuStack_b8;
          if (((ulong)pppuVar10 & 1) != 0) {
            func_0x000107c3ebcc(ppuStack_b8);
            func_0x000107c556c0(puVar8);
            func_0x000107c61170(ppuVar11);
          }
        }
        func_0x000107c61174(puVar8);
        func_0x000107c56ae4(puVar7);
        goto LAB_10328297c;
      }
      func_0x000107c6142c(puStack_b0);
    }
  }
  puVar8 = PTR_PTR_1126b6378;
  func_0x000107c610f8(PTR_PTR_1126b6378);
  func_0x000107c453e4();
  FUN_103282428(param_1);
  func_0x000107c59558(puVar8);
  func_0x000107c61174(puVar8);
  func_0x000107c53ee8(puVar7);
LAB_10328297c:
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  return puVar7;
}



/* Entry: 103282b74; end: 103282c2f;  */

/* WARNING: Possible PIC construction at 0x000103282bdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103282be0) */

void FUN_103282b74(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  FUN_103282170();
  puVar2 = &UNK_110630850;
  func_0x000107c613f8(&UNK_110630850,puVar1,0,0);
  *puVar1 = 1;
  puVar3 = puVar2;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar2);
  func_0x000107c4bb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 103282c30; end: 103282c4f;  */

void FUN_103282c30(void)

{
  func_0x000107c61168(&PTR_PTR_1128c5310);
  return;
}



/* Entry: 103282c50; end: 103282db7;  */

int FUN_103282c50(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103282ccc;
        goto LAB_103282cb0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103282cb0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103282ccc:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103282db8; end: 103282df7;  */

void FUN_103282db8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f501e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba4b34;
  func_0x000107c61520(&UNK_10dba4b34,&UNK_110630850);
  puRam0000000112f501e0 = puVar1;
  return;
}



/* Entry: 103282df8; end: 103282e17;  */

void FUN_103282df8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_88,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c61170();
      puVar3 = PTR_PTR_1126acf60;
      func_0x000107c610f8(PTR_PTR_1126acf60);
      func_0x000107c453e4();
      func_0x000107c5fadc(uVar4,lVar1);
      func_0x000107c58f34(puVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c5589c(puVar3);
      puVar5 = PTR_PTR_1126b0ea8;
      func_0x000107c610f8(PTR_PTR_1126b0ea8);
      func_0x000107c453e4();
      func_0x000107c52478();
      func_0x000107c61170(puVar3);
      func_0x000107c61428(lVar6 + 0x10,auStack_a0,0,0);
      lVar6 = lVar6 + 0x10;
      func_0x000107c61618();
      if (lVar6 != 0) {
        lVar2 = lVar6;
        func_0x000107c4e26c();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        lVar6 = lVar2;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar6 != 0) {
          func_0x000107c4ab94(lVar6);
          func_0x000107c615e8(lVar6);
        }
      }
      func_0x000107c61170(puVar5);
    }
  }
  func_0x000107c61428(lVar7 + 0x10,auStack_58,0,0);
  lVar2 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_1 != 0) {
      func_0x000107c5ed2c(param_1);
    }
    func_0x000107c4bb60(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61428(lVar7 + 0x10,auStack_70,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    func_0x000107c42804();
    func_0x000107c615e8(lVar7);
  }
  return;
}



/* Entry: 103282e18; end: 103282e8b;  */

void FUN_103282e18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001032817f0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 103282e8c; end: 103282ec3;  */

void FUN_103282e8c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_88,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c61170();
      puVar3 = PTR_PTR_1126acf60;
      func_0x000107c610f8(PTR_PTR_1126acf60);
      func_0x000107c453e4();
      func_0x000107c5fadc(uVar4,lVar1);
      func_0x000107c58f34(puVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c5589c(puVar3);
      puVar5 = PTR_PTR_1126b0ea8;
      func_0x000107c610f8(PTR_PTR_1126b0ea8);
      func_0x000107c453e4();
      func_0x000107c52478();
      func_0x000107c61170(puVar3);
      func_0x000107c61428(lVar6 + 0x10,auStack_a0,0,0);
      lVar6 = lVar6 + 0x10;
      func_0x000107c61618();
      if (lVar6 != 0) {
        lVar2 = lVar6;
        func_0x000107c4e26c();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        lVar6 = lVar2;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar6 != 0) {
          func_0x000107c4ab94(lVar6);
          func_0x000107c615e8(lVar6);
        }
      }
      func_0x000107c61170(puVar5);
    }
  }
  func_0x000107c61428(lVar7 + 0x10,auStack_58,0,0);
  lVar2 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_1 != 0) {
      func_0x000107c5ed2c(param_1);
    }
    func_0x000107c4bb60(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61428(lVar7 + 0x10,auStack_70,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    func_0x000107c42804();
    func_0x000107c615e8(lVar7);
  }
  return;
}



/* Entry: 103282ec4; end: 103282f6f;  */

void FUN_103282ec4(void)

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



/* Entry: 103282f70; end: 103282f73;  */

void FUN_103282f70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f50228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba4ba0;
  func_0x000107c61520(&UNK_10dba4ba0,&UNK_110630b08);
  puRam0000000112f50228 = puVar1;
  return;
}



/* Entry: 103282f74; end: 103282fb3;  */

void FUN_103282f74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f50228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba4ba0;
  func_0x000107c61520(&UNK_10dba4ba0,&UNK_110630b08);
  puRam0000000112f50228 = puVar1;
  return;
}



/* Entry: 103282fb4; end: 103283127;  */

void FUN_103282fb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103283128; end: 10328321f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103283128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f50230);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f50238);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103283220; end: 10328327f; -[_TtC26PlayGamesViewPageLaunchAPI30PlayGamesViewPageLaunchPayload init] */

void FUN_103283220(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesViewPageLaunchAPI.PlayGamesViewPageLaunchPayload",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10328324c);
  (*pcVar1)();
}



/* Entry: 103283280; end: 1032832bf; -[_TtC26PlayGamesViewPageLaunchAPI30PlayGamesViewPageLaunchPayload .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032832a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032832a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103283280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f50230 + 8))
  ;
  return;
}



/* Entry: 1032832c0; end: 1032832df;  */

void FUN_1032832c0(void)

{
  func_0x000107c61168(&PTR_PTR_1128c53d8);
  return;
}



/* Entry: 1032832e0; end: 10328332b;  */

void FUN_1032832e0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10328332c,param_1);
  return;
}



/* Entry: 10328332c; end: 1032833bf;  */

void FUN_10328332c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010451338c();
  func_0x000107c61170(uStack_38);
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126acf68;
    func_0x000107c610f8();
    func_0x000107c479a8();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 1032833c0; end: 1032833cf;  */

undefined1  [16] FUN_1032833c0(void)

{
  return ZEXT816(0x110630c10);
}



/* Entry: 1032833d0; end: 1032834ef;  */

void FUN_1032833d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  puVar1 = &UNK_110630cb8;
  func_0x000107c613fc(&UNK_110630cb8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x103283450,puVar1);
  return;
}



/* Entry: 1032834f0; end: 1032834ff;  */

undefined1  [16] FUN_1032834f0(void)

{
  return ZEXT816(0x110630ce0);
}



/* Entry: 103283500; end: 10328356b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103283500(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1032838f4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f50270) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10328356c; end: 1032835d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328356c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f50270) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032835d8; end: 103283637; -[_TtC63DiscoverFeedUpNextV2PlaybackSessionScopedFactoryServiceProvider51SCDiscoverFeedUpNextV2PlaybackSessionScopedServices init] */

void FUN_1032835d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiscoverFeedUpNextV2PlaybackSessionScopedFactoryServiceProvider.SCDiscoverFeedUpNextV2PlaybackSessionScopedServices"
                      ,0x73,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103283604);
  (*pcVar1)();
}



/* Entry: 103283638; end: 103283647; -[_TtC63DiscoverFeedUpNextV2PlaybackSessionScopedFactoryServiceProvider51SCDiscoverFeedUpNextV2PlaybackSessionScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103283638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f50270));
  return;
}



/* Entry: 103283648; end: 1032836b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103283648(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110630eb8;
  func_0x000107c613fc(&UNK_110630eb8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10328398c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1032836b4; end: 10328374f;  */

void FUN_1032836b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110630dc8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110630dc8;
  return;
}



/* Entry: 103283750; end: 103283787;  */

void FUN_103283750(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 103283788; end: 10328378f;  */

undefined8 FUN_103283788(void)

{
  return 0x1b;
}



/* Entry: 103283790; end: 1032838c3;  */

void FUN_103283790(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110630ee0;
  func_0x000107c613fc(&UNK_110630ee0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103283964;
  func_0x00010058fa64(FUN_103283964,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032838c4; end: 1032838f3;  */

undefined ** FUN_1032838c4(void)

{
  return &PTR_DAT_113066af0;
}



/* Entry: 1032838f4; end: 103283913;  */

void FUN_1032838f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128c54a0);
  return;
}



/* Entry: 103283914; end: 103283963;  */

undefined1  [16] FUN_103283914(void)

{
  return ZEXT816(0x110630e18);
}



/* Entry: 103283964; end: 10328398b;  */

void FUN_103283964(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10328398c; end: 10328398f;  */

void FUN_10328398c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103283990; end: 103283c0f;  */

/* WARNING: Possible PIC construction at 0x000103283b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103283b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103283b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103283b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103283b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103283b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103283b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103283b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103283b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103283ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103283bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103283bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103283bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103283be8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103283bdc) */
/* WARNING: Removing unreachable block (ram,0x000103283bcc) */
/* WARNING: Removing unreachable block (ram,0x000103283bbc) */
/* WARNING: Removing unreachable block (ram,0x000103283bac) */
/* WARNING: Removing unreachable block (ram,0x000103283b9c) */
/* WARNING: Removing unreachable block (ram,0x000103283b8c) */
/* WARNING: Removing unreachable block (ram,0x000103283b7c) */
/* WARNING: Removing unreachable block (ram,0x000103283b6c) */
/* WARNING: Removing unreachable block (ram,0x000103283b5c) */
/* WARNING: Removing unreachable block (ram,0x000103283b4c) */
/* WARNING: Removing unreachable block (ram,0x000103283b3c) */
/* WARNING: Removing unreachable block (ram,0x000103283b2c) */
/* WARNING: Removing unreachable block (ram,0x000103283b1c) */
/* WARNING: Removing unreachable block (ram,0x000103283bec) */

void FUN_103283990(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110630f68;
  func_0x000107c613fc(&UNK_110630f68,0xf0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  uVar2 = 0x112f502e0;
  func_0x0001000285a8(0x112f502e0,&UNK_10dba5078);
  func_0x000107c613fc();
  uVar3 = 0x103284398;
  func_0x0001000841fc(0x103284398,puVar1,uVar2);
  func_0x000100084214(&UNK_10dba5030,0x41,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103283c10; end: 103283c6b;  */

void FUN_103283c10(void)

{
  long unaff_x20;
  
  FUN_103283990(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8));
  return;
}



/* Entry: 103283c6c; end: 103283c7b;  */

undefined1  [16] FUN_103283c6c(void)

{
  return ZEXT816(0x110630f48);
}



/* Entry: 103283c7c; end: 10328429b;  */

void FUN_103283c7c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 auStack_70 [2];
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f502e8,&UNK_10dba5080);
  puVar1 = auStack_70;
  auStack_70[0] = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f502f0,&UNK_10dba5280);
  puVar2 = &UNK_110630f90;
  func_0x000107c613fc(&UNK_110630f90,0xd0,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = param_9;
  *(undefined8 *)(puVar2 + 0x50) = param_10;
  *(undefined8 *)(puVar2 + 0x58) = param_11;
  *(undefined8 *)(puVar2 + 0x60) = param_12;
  *(undefined8 *)(puVar2 + 0x68) = param_13;
  *(undefined8 *)(puVar2 + 0x70) = param_14;
  *(undefined8 *)(puVar2 + 0x78) = param_15;
  *(undefined8 *)(puVar2 + 0x80) = param_16;
  *(undefined8 *)(puVar2 + 0x88) = param_17;
  *(undefined8 *)(puVar2 + 0x90) = param_18;
  *(undefined8 *)(puVar2 + 0x98) = param_19;
  *(undefined8 *)(puVar2 + 0xa0) = param_20;
  *(undefined8 *)(puVar2 + 0xa8) = param_21;
  *(undefined8 *)(puVar2 + 0xb0) = param_22;
  *(undefined8 *)(puVar2 + 0xb8) = param_23;
  *(undefined8 *)(puVar2 + 0xc0) = param_24;
  *(undefined8 *)(puVar2 + 200) = param_25;
  func_0x000107c6157c(puVar1);
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
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  uVar10 = 0x103284408;
  func_0x0001000823a8(0x103284408,puVar2);
  func_0x000100082720("SCDiscoverFeedUpNextV2RequestingServiceProviderWrapperServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112f502f8,&UNK_10dba5090);
  func_0x000107c6157c(uVar10);
  pcVar3 = FUN_10328445c;
  func_0x0001000823a8(FUN_10328445c,uVar10);
  func_0x000100082720("SCDiscoverFeedUpNextV2RequestingServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_103283750;
  func_0x0001000823a8(FUN_103283750,0);
  func_0x000100082720("SCDiscoverFeedUpNextV2PlaybackSessionScopedServicesCleanupRelayServiceProvider"
                      ,0x4e,2);
  pcVar5 = pcVar3;
  FUN_103287c90();
  func_0x000100082720("DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeServicesServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112f50300,&UNK_10dba50a0);
  puVar2 = &UNK_110630fb8;
  func_0x000107c613fc(&UNK_110630fb8,0x70,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(code **)(puVar2 + 0x18) = pcVar3;
  *(undefined8 *)(puVar2 + 0x20) = param_14;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_26;
  *(undefined8 *)(puVar2 + 0x38) = param_21;
  *(undefined8 *)(puVar2 + 0x40) = param_13;
  *(undefined8 *)(puVar2 + 0x48) = param_12;
  *(undefined8 *)(puVar2 + 0x50) = param_27;
  *(undefined8 *)(puVar2 + 0x58) = param_28;
  *(undefined8 *)(puVar2 + 0x60) = param_29;
  *(undefined8 *)(puVar2 + 0x68) = param_30;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  pcVar6 = FUN_103284464;
  func_0x0001000823a8(FUN_103284464,puVar2);
  func_0x000100082720("SCDiscoverFeedUpNextV2PlaybackSessionEntryPointWrapperServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112f50308,&UNK_10dba50a8);
  puVar2 = &UNK_110630fe0;
  func_0x000107c613fc(&UNK_110630fe0,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(code **)(puVar2 + 0x18) = pcVar5;
  *(code **)(puVar2 + 0x20) = pcVar6;
  *(code **)(puVar2 + 0x28) = pcVar4;
  *(undefined8 *)(puVar2 + 0x30) = uVar10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar4);
  pcVar7 = FUN_1032844a0;
  func_0x0001000823a8(FUN_1032844a0,puVar2);
  func_0x000100082720("SCDiscoverFeedUpNextV2PlaybackSessionScopeInitializationPluginRegistryServiceProvider"
                      ,0x55,2);
  func_0x0001000285a8(0x112f50278,&UNK_10dba4d80);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x1032844b0;
  func_0x0001000823a8(0x1032844b0,pcVar7);
  func_0x000100082720("SCDiscoverFeedUpNextV2PlaybackSessionScopeInitializationServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112f50268,&UNK_10dba4d70);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1032844b8;
  func_0x0001000823a8(0x1032844b8,uVar8);
  func_0x000100082720("SCDiscoverFeedUpNextV2PlaybackSessionScopedServicesServiceProvider",0x42,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110631008;
  func_0x000107c613fc(&UNK_110631008,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1032844c0;
  func_0x0001000823a8(0x1032844c0,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCDiscoverFeedUpNextV2PlaybackSessionScopeEntryPointProvider",0x3c,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 10328429c; end: 10328445b;  */

void FUN_10328429c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10328445c; end: 103284463;  */

void FUN_10328445c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xd0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 103284464; end: 10328449f;  */

void FUN_103284464(void)

{
  long unaff_x20;
  
  FUN_1032844c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1032844a0; end: 1032844c7;  */

void FUN_1032844a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_11074d4b0;
  ppuVar7 = &PTR_DAT_113066af0;
  uVar8 = uVar2;
  func_0x0001000a3aa4();
  puVar5 = &UNK_110631150;
  func_0x000107c613fc(&UNK_110631150,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  uVar6 = 0x112f505b8;
  func_0x0001000285a8(0x112f505b8,&UNK_10dba54f8);
  func_0x0001000a6ee8(&UNK_110631378,
                      "DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x4f,2,FUN_1032874b0,puVar5,uVar6,&UNK_110631378,&PTR_DAT_112f50720);
  func_0x000107c61574(puVar5);
  func_0x000107c6157c(uVar2);
  func_0x0001000a6ee8(&UNK_110631060,
                      "SCDiscoverFeedUpNextV2PlaybackSessionEntryPointWrapperScopeInitializationPluginKey"
                      ,0x52,2,FUN_1032874f0,uVar2,uVar6,&UNK_110631060,&PTR_DAT_112f50310);
  func_0x000107c61574(uVar2);
  puVar5 = &UNK_110631178;
  func_0x000107c613fc(&UNK_110631178,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x0001000a6ee8(&UNK_110630e58,
                      "SCDiscoverFeedUpNextV2PlaybackSessionScopedServicesScopeInitializationPluginKey"
                      ,0x4f,2,FUN_1032875c0,puVar5,uVar6,&UNK_110630e58,&PTR_DAT_112f50280);
  func_0x000107c61574(puVar5);
  func_0x000107c6157c(uVar9);
  func_0x0001000a6ee8(&UNK_110631100,
                      "SCDiscoverFeedUpNextV2RequestingServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x52,2,FUN_103287648,uVar9,uVar6,&UNK_110631100,&PTR_DAT_112f50430);
  func_0x000107c61574(uVar9);
  uVar6 = 0x112f505c0;
  func_0x0001000285a8(0x112f505c0,&UNK_10dba5500);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar4,ppuVar7,uVar8,uVar6);
  func_0x0001000a7f38("SCDiscoverFeedUpNextV2PlaybackSessionScopeInitializationPluginRegistryServiceProvider"
                      ,0x55,2);
  *param_1 = puVar4;
  return;
}



/* Entry: 1032844c8; end: 103285237;  */

void FUN_1032844c8(long *param_1,long param_2)

{
  undefined *puVar1;
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
  undefined8 uVar14;
  undefined8 uVar15;
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
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  FUN_1032853d8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  puVar1 = PTR_PTR_1126acf78;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174(uStack_b8);
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f1343c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1343e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f051690);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0a3f20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f03f160);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f052100);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  *param_1 = param_2;
  return;
}



/* Entry: 103285238; end: 1032852cb;  */

void FUN_103285238(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1032852cc; end: 1032852d3;  */

undefined8 FUN_1032852cc(void)

{
  return 0x1b;
}



/* Entry: 1032852d4; end: 103285357;  */

void FUN_1032852d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103285418,param_2,FUN_10328541c,param_2,FUN_103285444,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103285358; end: 1032853a7;  */

undefined8 FUN_103285358(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1032853a8; end: 1032853d7;  */

undefined ** FUN_1032853a8(void)

{
  return &PTR_DAT_113066af0;
}



/* Entry: 1032853d8; end: 1032853f7;  */

void FUN_1032853d8(void)

{
  func_0x000107c61168(&PTR_PTR_112f50378);
  return;
}



/* Entry: 1032853f8; end: 10328541b;  */

undefined1  [16] FUN_1032853f8(void)

{
  return ZEXT816(0x110631060);
}



/* Entry: 10328541c; end: 103285443;  */

void FUN_10328541c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103285444; end: 10328544b;  */

undefined8 FUN_103285444(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10328544c; end: 103286f67;  */

void FUN_10328544c(long *param_1,long param_2)

{
  undefined *puVar1;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
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
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  FUN_1032871c4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  *(undefined8 *)(param_2 + 0xa8) = uStack_108;
  *(undefined8 *)(param_2 + 0xb0) = uStack_110;
  *(undefined8 *)(param_2 + 0xb8) = uStack_118;
  *(undefined8 *)(param_2 + 0xc0) = uStack_120;
  *(undefined8 *)(param_2 + 200) = uStack_128;
  puVar1 = PTR_PTR_1126acf80;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  uVar18 = uStack_e8;
  func_0x000107c61174();
  uVar19 = uStack_f0;
  func_0x000107c61174();
  uVar20 = uStack_f8;
  func_0x000107c61174();
  uVar21 = uStack_100;
  func_0x000107c61174();
  uVar22 = uStack_108;
  func_0x000107c61174();
  uVar23 = uStack_110;
  func_0x000107c61174();
  uVar24 = uStack_118;
  func_0x000107c61174();
  uVar25 = uStack_120;
  func_0x000107c61174();
  uVar26 = uStack_128;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar16 = auStack_70[0];
  func_0x000107c61174();
  uVar17 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f1343c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar27 = 0xd000000000000010;
  uVar17 = uVar27;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc46f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar27);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar28 = 0xd000000000000013;
  uVar17 = uVar28;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar17 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar17);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar17);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcda0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f134400);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010f051600);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar28);
  func_0x000107c61174(uVar22);
  func_0x000107c61174(uVar27);
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f134420);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar17);
  func_0x000107c61174(uVar23);
  func_0x000107c61174(uVar27);
  uVar17 = 0x7672655373757472;
  func_0x000107c5fadc(0x7672655373757472,0xec00000073656369);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar17);
  uVar27 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f052240);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efe1e20);
  func_0x000107c5a49c(uVar27);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  uVar17 = uVar27;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  *(undefined8 *)(param_2 + 0xd0) = uVar17;
  *param_1 = param_2;
  return;
}



/* Entry: 103286f68; end: 103287063;  */

void FUN_103286f68(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  return;
}



/* Entry: 103287064; end: 1032870b7;  */

void FUN_103287064(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xd0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032870b8; end: 1032870bf;  */

undefined8 FUN_1032870b8(void)

{
  return 0x1b;
}



/* Entry: 1032870c0; end: 103287143;  */

void FUN_1032870c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x103287214,param_2,FUN_103287218,param_2,FUN_103287240,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103287144; end: 103287193;  */

undefined8 FUN_103287144(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 103287194; end: 1032871c3;  */

undefined ** FUN_103287194(void)

{
  return &PTR_DAT_113066af0;
}



/* Entry: 1032871c4; end: 1032871e3;  */

void FUN_1032871c4(void)

{
  func_0x000107c61168(&PTR_PTR_112f50498);
  return;
}



/* Entry: 1032871e4; end: 103287217;  */

undefined1  [16] FUN_1032871e4(void)

{
  return ZEXT816(0x1106310e0);
}



/* Entry: 103287218; end: 10328723f;  */

void FUN_103287218(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103287240; end: 103287247;  */

undefined8 FUN_103287240(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 103287248; end: 1032874af;  */

void FUN_103287248(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d4b0;
  ppuVar4 = &PTR_DAT_113066af0;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110631150;
  func_0x000107c613fc(&UNK_110631150,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar3 = 0x112f505b8;
  func_0x0001000285a8(0x112f505b8,&UNK_10dba54f8);
  func_0x0001000a6ee8(&UNK_110631378,
                      "DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x4f,2,FUN_1032874b0,puVar2,uVar3,&UNK_110631378,&PTR_DAT_112f50720);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110631060,
                      "SCDiscoverFeedUpNextV2PlaybackSessionEntryPointWrapperScopeInitializationPluginKey"
                      ,0x52,2,FUN_1032874f0,param_4,uVar3,&UNK_110631060,&PTR_DAT_112f50310);
  func_0x000107c61574(param_4);
  puVar2 = &UNK_110631178;
  func_0x000107c613fc(&UNK_110631178,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_110630e58,
                      "SCDiscoverFeedUpNextV2PlaybackSessionScopedServicesScopeInitializationPluginKey"
                      ,0x4f,2,FUN_1032875c0,puVar2,uVar3,&UNK_110630e58,&PTR_DAT_112f50280);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_110631100,
                      "SCDiscoverFeedUpNextV2RequestingServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x52,2,FUN_103287648,param_6,uVar3,&UNK_110631100,&PTR_DAT_112f50430);
  func_0x000107c61574(param_6);
  uVar3 = 0x112f505c0;
  func_0x0001000285a8(0x112f505c0,&UNK_10dba5500);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  func_0x0001000a7f38("SCDiscoverFeedUpNextV2PlaybackSessionScopeInitializationPluginRegistryServiceProvider"
                      ,0x55,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1032874b0; end: 1032874ef;  */

void FUN_1032874b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103287e14(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x54,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032874f0; end: 103287517;  */

void FUN_1032874f0(void)

{
  FUN_1032875c8();
  return;
}



/* Entry: 103287518; end: 1032875bf;  */

void FUN_103287518(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106311a0;
  func_0x000107c613fc(&UNK_1106311a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1032876a4;
  func_0x0001000823a8(FUN_1032876a4,puVar1);
  func_0x000100082720("SCDiscoverFeedUpNextV2PlaybackSessionScopedServicesScopeInitializationPluginProvider"
                      ,0x54,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1032875c0; end: 1032875c7;  */

void FUN_1032875c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1106311a0;
  func_0x000107c613fc(&UNK_1106311a0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1032876a4;
  func_0x0001000823a8(FUN_1032876a4,puVar3);
  func_0x000100082720("SCDiscoverFeedUpNextV2PlaybackSessionScopedServicesScopeInitializationPluginProvider"
                      ,0x54,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1032875c8; end: 103287647;  */

void FUN_1032875c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,0x57,2);
  *param_1 = param_4;
  return;
}



/* Entry: 103287648; end: 10328766f;  */

void FUN_103287648(void)

{
  FUN_1032875c8();
  return;
}



/* Entry: 103287670; end: 103287677;  */

void FUN_103287670(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  func_0x0001005d8744(1,0x103287214);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103287678; end: 1032876a3;  */

void FUN_103287678(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032876a4; end: 1032876b3;  */

void FUN_1032876a4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110630ee0;
  func_0x000107c613fc(&UNK_110630ee0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103283964;
  func_0x00010058fa64(FUN_103283964,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032876b4; end: 10328773b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032876b4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_103287ba0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f505c8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f505d0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10328773c);
  (*pcVar1)();
}



/* Entry: 10328773c; end: 10328779b; -[_TtC51DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridge66DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_10328773c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridge.DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x76,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103287768);
  (*pcVar1)();
}



/* Entry: 10328779c; end: 1032877d3; -[_TtC51DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridge66DiscoverFeedUpNextV2PlaybackSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032877b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032877bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10328779c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f505c8));
  return;
}



/* Entry: 1032877d4; end: 1032877fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032877d4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f505d0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f505c8));
  return;
}



/* Entry: 1032877fc; end: 10328781b;  */

void FUN_1032877fc(void)

{
  func_0x000107c61168(&PTR_PTR_1128c5560);
  return;
}



/* Entry: 10328781c; end: 10328787f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10328781c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f50718);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}


