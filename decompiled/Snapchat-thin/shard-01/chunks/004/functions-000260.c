/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f7bb08; end: 100f7bc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7bb08(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112ff2280;
  lVar1 = _DAT_112d4f858;
  if (param_1 != 0) {
    lVar5 = *(long *)(param_1 + _DAT_112d4f858);
    func_0x000107c61428(lVar5 + _DAT_112ff2280,auStack_70,0,0);
    uVar2 = lVar5 + lVar4;
    func_0x000107c61618();
    lVar4 = param_1;
    if (uVar2 != 0) {
      lVar4 = *(long *)(param_1 + _DAT_112d4f838);
      *(undefined8 *)(param_1 + _DAT_112d4f838) = 0;
      uVar3 = uVar2;
      func_0x000107c61150();
      if ((uVar3 & 1) != 0) {
        func_0x000107c4d0e8(uVar2);
      }
      func_0x000107c4d0f0(uVar2);
      if (lVar4 == 0) {
        func_0x000107c61170(param_1);
        func_0x000107c615e8(uVar2);
        return;
      }
      uVar3 = uVar2;
      func_0x000107c61150(uVar2,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_modularStickerCutoutScope_didSel_112611cb0);
      if ((uVar3 & 1) == 0) {
        func_0x000107c61170(param_1);
        func_0x000107c615e8(uVar2);
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + lVar1);
        func_0x000107c615f0(uVar2);
        func_0x000107c61174(uVar6);
        func_0x000107c4d0ec(uVar2);
        func_0x000107c61170(param_1);
        func_0x000107c61170(uVar6);
        func_0x000107c615ec(uVar2,2);
      }
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 100f7bc80; end: 100f7bd6b; -[_TtC20ModularStickerCutout30ModularStickerCutoutEntryPoint trayDidDismiss:] */

void FUN_100f7bc80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  FUN_100f7a7fc();
  puVar2 = &UNK_11036f770;
  func_0x000107c613fc(&UNK_11036f770,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  uStack_40 = 0x100f7da30;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11036f7a0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c420a8(uVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100f7bd6c; end: 100f7bdd7;  */

void FUN_100f7bd6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_100f7a720();
    func_0x000107c61170(param_1);
    func_0x000107c575ec(lVar1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100f7bdd8; end: 100f7be5b;  */

void FUN_100f7bdd8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_100f7a720();
    lVar2 = lVar1;
    FUN_100f7a7fc();
    func_0x000107c4ef1c(lVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 100f7be5c; end: 100f7c077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7be5c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_60);
  lVar2 = lStack_60;
  if (lStack_60 != 0) {
    lVar1 = lStack_60;
    func_0x000107c5bd80();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5caec();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      if (lVar2 != 0) {
        lVar1 = lVar2;
        func_0x000107c42924();
        func_0x000107c61180();
        if (lVar1 == 0) {
          uStack_78 = 0;
          lStack_80 = 0;
          lStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          func_0x000107c60234(&lStack_80);
          func_0x000107c615e8(lVar1);
        }
        uStack_58 = uStack_78;
        lStack_60 = lStack_80;
        lStack_48 = lStack_68;
        uStack_50 = uStack_70;
        if (lStack_68 == 0) {
          func_0x000107c61170(lVar2);
          func_0x00010006e7f4(&lStack_60);
        }
        else {
          uVar3 = 0;
          FUN_100f7d9bc(0);
          plVar4 = &lStack_88;
          func_0x000107c6147c(plVar4,&lStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
          if (((ulong)plVar4 & 1) != 0) {
            func_0x0001000d224c(&lStack_60);
            lVar1 = lStack_60;
            if (lStack_60 != 0) {
              func_0x0001000285a8(0x112d4f918,&UNK_10d933050);
              puVar5 = &UNK_11036f968;
              func_0x000107c613fc(&UNK_11036f968,0x28,7);
              *(long *)(puVar5 + 0x10) = lVar1;
              *(long *)(puVar5 + 0x18) = lVar2;
              *(long *)(puVar5 + 0x20) = lStack_88;
              func_0x000107c615f0(lVar1);
              func_0x000107c61174(lVar2);
              lVar6 = lStack_88;
              func_0x000107c61174(lStack_88);
              func_0x0001048897a0(0,1,0,FUN_100f7da00,puVar5);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar6);
              func_0x000107c615e8(lVar1);
              func_0x000107c61574(puVar5);
              return;
            }
            func_0x000107c61170(lVar2);
            lVar2 = lStack_88;
          }
          func_0x000107c61170(lVar2);
        }
      }
    }
  }
  func_0x0001000285a8(0x112d4f918,&UNK_10d933050);
  lStack_60 = 0;
  func_0x000104888f7c(&lStack_60);
  return;
}



/* Entry: 100f7c078; end: 100f7c0e3;  */

void FUN_100f7c078(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_100f7a720();
    func_0x000107c61170(param_1);
    func_0x000107c42018(lVar1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100f7c0e4; end: 100f7c183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7c0e4(char param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 == '\x01') {
      if (param_2 != 0) {
        func_0x000107c61174(param_2);
        FUN_100f7c184();
        lVar1 = *(long *)(param_3 + _DAT_112d4f838);
        *(long *)(param_3 + _DAT_112d4f838) = param_2;
        func_0x000107c61170(param_3);
        param_3 = lVar1;
      }
    }
    else {
      FUN_100f7c184();
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 100f7c184; end: 100f7c3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7c184(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_58;
  
  *(undefined1 *)(unaff_x20 + _DAT_112d4f830) = 1;
  lVar9 = *(long *)(unaff_x20 + _DAT_112d4f858);
  uVar2 = *(undefined8 *)(lVar9 + _DAT_112ff2270);
  func_0x0001000e48c0(uVar2);
  uVar4 = param_2;
  func_0x0001000d224c(&lStack_58);
  lVar1 = lStack_58;
  if (lStack_58 == 0) {
    func_0x000107c6142c(param_2);
  }
  else {
    uVar4 = param_2;
    func_0x000107c5fadc(uVar2);
    func_0x000107c6142c(param_2);
    func_0x000107c4bac0(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  uVar8 = ((undefined8 *)(lVar9 + _DAT_112ff2288))[1];
  if (uVar8 == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(lVar9 + _DAT_112ff2288);
  uVar6 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112d4f8a0) + _DAT_113083f78);
  func_0x000107c61434(uVar8);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170(uVar6);
  uVar6 = ((ulong *)(lVar9 + _DAT_112ff2290))[1];
  if (uVar6 == 0) {
    func_0x000107c6142c(uVar4);
  }
  else {
    uVar5 = *(ulong *)(lVar9 + _DAT_112ff2290);
    if (uVar3 == uVar5 && uVar6 == uVar4) {
      func_0x000107c6142c(uVar8);
      uVar8 = uVar4;
      goto LAB_100f7c384;
    }
    func_0x000107c605b8(uVar3,uVar4,uVar5,uVar6,0);
    func_0x000107c6142c(uVar4);
    if ((uVar3 & 1) != 0) goto LAB_100f7c384;
  }
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d4f898) + _DAT_112d50510);
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(&lStack_58);
  func_0x000107c61574(uVar7);
  if (lStack_58 != 0) {
    func_0x000107c5fadc(uVar2,uVar8);
    func_0x000107c6142c(uVar8);
    func_0x000107c51e64(lStack_58);
    func_0x000107c615e8(lStack_58);
    func_0x000107c61170(uVar2);
    return;
  }
LAB_100f7c384:
  func_0x000107c6142c(uVar8);
  return;
}



/* Entry: 100f7c3a4; end: 100f7c3f7;  */

void FUN_100f7c3a4(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_100f7c3f8();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100f7c3f8; end: 100f7c54b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7c3f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  ulong uStack_70;
  undefined1 auStack_68 [24];
  
  FUN_100f7a7fc();
  puVar5 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  func_0x000107c61170(param_1);
  lVar4 = _DAT_112ff22a0;
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d4f8c8) + _DAT_112ff2a80);
  uVar2 = *puVar1;
  lVar3 = puVar1[1];
  lVar6 = *(long *)(unaff_x20 + _DAT_112d4f858);
  func_0x000107c61428(lVar6 + _DAT_112ff22a0,auStack_68,0,0);
  uStack_70 = *(ulong *)(lVar6 + lVar4);
  if (uStack_70 < 4) {
    func_0x000107c614f0(uVar2);
    pcVar7 = *(code **)(lVar3 + 0x48);
    func_0x000107c615f0(uVar2);
    func_0x000107c61174(puVar5);
    (*pcVar7)();
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar5);
    return;
  }
  func_0x000107c615f0(uVar2);
  func_0x000107c61174(puVar5);
  func_0x000107c60614(&UNK_1106dd908,&uStack_70,&UNK_1106dd908,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100f7c54c);
  (*pcVar7)();
}



/* Entry: 100f7c54c; end: 100f7c5b7;  */

void FUN_100f7c54c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f7c5b8,uVar1,uVar2);
  return;
}



/* Entry: 100f7c5b8; end: 100f7ca67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7c5b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined *apuStack_b8 [3];
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  double dStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  
  lVar9 = *(long *)(unaff_x22 + 0xb8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0x88,0,0);
  lVar9 = lVar9 + 0x10;
  func_0x000107c61618();
  if (lVar9 != 0) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000100f7d8c0(*(long *)(lVar9 + _DAT_112d4f868) + _DAT_112f26738,unaff_x22 + 0x60);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar10 = *(long *)(unaff_x22 + 0x80);
    func_0x0001000a8868(unaff_x22 + 0x60,uVar6);
    (**(code **)(lVar10 + 8))(uVar6,lVar10);
    func_0x0001000285a8(0x112d4f908,&UNK_10d915820);
    uVar1 = *(undefined8 *)(lVar9 + _DAT_112d4f870);
    func_0x000107c410ec();
    func_0x000107c61180();
    uVar6 = uVar1;
    func_0x0001000bda74();
    func_0x000107c61170(uVar1);
    lVar11 = _DAT_112d4f858;
    uVar1 = *(undefined8 *)(*(long *)(lVar9 + _DAT_112d4f860) + _DAT_112e98970);
    uVar14 = *(undefined8 *)(*(long *)(lVar9 + _DAT_112d4f858) + _DAT_112ff2270);
    *(undefined8 *)(unaff_x22 + 0x18) = uVar12;
    func_0x000100f7d8c0(unaff_x22 + 0x60,unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
    func_0x000107c6157c(uVar1);
    func_0x000107c61174(uVar12);
    func_0x000107c42378(&puStack_90);
    *(undefined8 *)(unaff_x22 + 0xd0) = puStack_90;
    *(double *)(unaff_x22 + 0xd8) = dStack_88;
    *(undefined8 *)(unaff_x22 + 0xe0) = uStack_80;
    dVar13 = dStack_88;
    func_0x000107c60a3c((undefined8 *)(unaff_x22 + 0xd0));
    uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar10 = *(long *)(unaff_x22 + 0x80);
    dVar15 = dVar13;
    func_0x0001000a8868(unaff_x22 + 0x60,uVar6);
    (**(code **)(lVar10 + 8))(uVar6,lVar10);
    uVar8 = 2;
    if (dVar13 <= dVar15) {
      uVar8 = 1;
    }
    *(undefined1 *)(unaff_x22 + 0x10) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar14;
    lVar10 = *(long *)(lVar9 + lVar11);
    uVar1 = *(undefined8 *)(lVar9 + _DAT_112d4f8b8);
    uVar12 = *(undefined8 *)(lVar9 + _DAT_112d4f8c0);
    uVar14 = *(undefined8 *)(lVar9 + _DAT_112d4f8d8);
    dVar13 = *(double *)(lVar9 + _DAT_112d4f8b0);
    puVar2 = PTR_PTR_1126a6118;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(uVar14);
    func_0x000107c6157c(dVar13);
    func_0x000107c453e4();
    puStack_a0 = &UNK_11036e920;
    ppuStack_98 = &PTR_DAT_11036ea20;
    puVar3 = &UNK_11036f8a0;
    func_0x000107c613fc(&UNK_11036f8a0,0x60,7);
    apuStack_b8[0] = puVar3;
    FUN_100f7d45c(unaff_x22 + 0x10,puVar3 + 0x10);
    puStack_78 = &UNK_11036f1e0;
    ppuStack_70 = &PTR_DAT_11036f1f8;
    puStack_90 = puVar2;
    dStack_88 = dVar13;
    func_0x000103ba3918();
    func_0x000107c613fc();
    func_0x000107c6157c(dVar13);
    func_0x000107c61174();
    ppuVar4 = apuStack_b8;
    func_0x000103ba1954(ppuVar4,&puStack_90);
    puVar3 = &UNK_11036f8c8;
    func_0x000107c613fc(&UNK_11036f8c8,0x38,7);
    *(long *)(puVar3 + 0x10) = lVar10;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    *(undefined8 *)(puVar3 + 0x20) = uVar12;
    *(undefined8 *)(puVar3 + 0x28) = param_1;
    *(undefined8 *)(puVar3 + 0x30) = uVar14;
    puVar5 = &UNK_11036f8f0;
    func_0x000107c613fc(&UNK_11036f8f0,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar10;
    uVar6 = 0;
    FUN_100f75918();
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(uVar12);
    func_0x000107c6157c(uVar14);
    func_0x000107c6157c(dVar13);
    func_0x000107c61174(puVar2);
    ppuVar7 = ppuVar4;
    FUN_100f7d4b4(ppuVar4,puVar2,dVar13,FUN_100f7d498,puVar3,0x100f7d4ac,puVar5,uVar6);
    uVar6 = *(undefined8 *)(lVar9 + _DAT_112d4f848);
    *(undefined ***)(lVar9 + _DAT_112d4f848) = ppuVar7;
    func_0x000107c61174();
    func_0x000107c615e8(uVar6);
    func_0x000107c61604((long)ppuVar7 + _DAT_112d4f398,*(undefined8 *)(lVar10 + _DAT_112ff2268));
    lVar11 = *(long *)((long)ppuVar7 + _DAT_112d4f368);
    func_0x000107c61428(lVar11 + 0x10,unaff_x22 + 0xa0,0,0);
    if ((*(char *)(lVar11 + 0x18) == '\x03') && (*(long *)(lVar11 + 0x10) == 0)) {
      FUN_100f74b54();
    }
    else {
      FUN_100f74d4c();
      func_0x000103ba1b38();
    }
    func_0x000107c61170(uVar1);
    func_0x000107c61574(ppuVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61574(dVar13);
    func_0x000107c61170(lVar9);
    func_0x000107c61574(uVar14);
    func_0x000107c61170(uVar12);
    func_0x000100f7d88c(unaff_x22 + 0x10);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(ppuVar7);
    func_0x0001000834e4(unaff_x22 + 0x60);
  }
                    /* WARNING: Could not recover jumptable at 0x000100f7ca64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f7ca68; end: 100f7cb93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7ca68(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112d3b7c0,&UNK_10d904cb0);
  func_0x000107c5dbd4(param_3);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x0001000bda74();
  func_0x000107c61170(param_3);
  func_0x0001000d224c(&uStack_58);
  func_0x000107c61574(uVar1);
  func_0x0001000285a8(0x112d4f910,&UNK_10d915830);
  uVar1 = *(undefined8 *)(param_4 + _DAT_11307a4a0);
  func_0x0001000bda74(uVar1);
  func_0x0001000d224c(&uStack_60);
  func_0x000107c61574(uVar1);
  func_0x000100f72b54(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_5);
  FUN_100f6edb8(param_1,param_2,uStack_58,uStack_60,param_5);
  return;
}



/* Entry: 100f7cb94; end: 100f7cc43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7cb94(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff2280;
  func_0x000107c61428(param_2 + _DAT_112ff2280,auStack_48,0,0);
  uVar2 = param_2 + lVar1;
  func_0x000107c61618();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c61150();
    if ((uVar3 & 1) != 0) {
      func_0x000107c4d0e8(uVar2);
    }
    func_0x000107c615e8(uVar2);
  }
  param_2 = param_2 + lVar1;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4d0f0();
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 100f7cc44; end: 100f7ccd3;  */

void FUN_100f7cc44(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x100f7cc98;
                    /* WARNING: Could not recover jumptable at 0x000100f7cc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))();
  return;
}



/* Entry: 100f7ccd4; end: 100f7cdf7;  */

void FUN_100f7ccd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_80;
  uVar2 = param_4;
  func_0x000107c4c948(param_4);
  func_0x000107c61180();
  uVar3 = param_4;
  func_0x000107c4271c(param_4);
  func_0x000107c61180();
  func_0x000107c42718(param_4);
  func_0x000107c61180();
  uStack_60 = 0x100f7da0c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100f7cecc;
  puStack_68 = &UNK_11036f980;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  uVar1 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c507dc(param_2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100f7cdf8; end: 100f7cecb;  */

void FUN_100f7cdf8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_48;
  
  func_0x000107c30a1c();
  func_0x000107c61180();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x00010006c00c(lVar1,param_2);
    lVar2 = lVar1;
    func_0x000107c5ee20(lVar1,param_2);
    func_0x000107c4635c();
    func_0x000107c61170(lVar2);
    func_0x00010006c090(lVar1,param_2);
    func_0x00010006c090(lVar1,param_2);
  }
  puStack_48 = puVar3;
  func_0x000100b60084(&puStack_48);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 100f7cecc; end: 100f7cf13;  */

void FUN_100f7cecc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 100f7cf14; end: 100f7cf73; -[_TtC20ModularStickerCutout30ModularStickerCutoutEntryPoint init] */

void FUN_100f7cf14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ModularStickerCutout.ModularStickerCutoutEntryPoint",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f7cf40);
  (*pcVar1)();
}



/* Entry: 100f7cf74; end: 100f7d15f; -[_TtC20ModularStickerCutout30ModularStickerCutoutEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f7cfd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f7d010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f7cfd4) */
/* WARNING: Removing unreachable block (ram,0x000100f7d014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7cf74(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4f858));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4f860));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4f868));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4f870));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4f880));
  return;
}



/* Entry: 100f7d160; end: 100f7d303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_100f7d160(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    code *param_5,long param_6)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  double dVar6;
  
  FUN_100f7a8dc();
  (*param_5)();
  func_0x000107c61574();
  FUN_100f7a7fc();
  lVar2 = param_6;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(param_6);
  if (((ulong)param_5 & 1) == 0) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f7d304);
      (*pcVar1)();
    }
    func_0x000107c438d4(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    param_1 = param_1 / 2.2;
  }
  else {
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
      func_0x000107c3ec60();
      func_0x000107c61170(puVar3);
    }
    else {
      func_0x000107c438d4(lVar2);
    }
    func_0x000107c609b0();
    lVar5 = *(long *)(unaff_x20 + _DAT_112d4f818);
    lVar4 = lVar5;
    dVar6 = param_1;
    func_0x000107c614f0();
    func_0x000107c61440();
    if (lVar4 == 0 || lVar5 == 0) {
      if (lVar2 == 0) {
        param_3 = 0.0;
      }
      else {
        func_0x000107c515a0(lVar2);
      }
    }
    else {
      param_3 = 0.0;
      if ((*(byte *)(lVar5 + _DAT_112d4fea8) & 1) == 0) {
        param_3 = *(double *)(lVar5 + _DAT_112d4feb0);
      }
    }
    FUN_100f7df4c();
    func_0x000107c61170(lVar2);
    if (param_3 + dVar6 <= param_1) {
      param_1 = param_3 + dVar6;
    }
  }
  return param_1;
}



/* Entry: 100f7d304; end: 100f7d327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7d304(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar5 = _DAT_112ff2280;
  lVar1 = _DAT_112d4f858;
  if (lVar2 != 0) {
    lVar6 = *(long *)(lVar2 + _DAT_112d4f858);
    func_0x000107c61428(lVar6 + _DAT_112ff2280,auStack_70,0,0);
    uVar3 = lVar6 + lVar5;
    func_0x000107c61618();
    lVar5 = lVar2;
    if (uVar3 != 0) {
      lVar5 = *(long *)(lVar2 + _DAT_112d4f838);
      *(undefined8 *)(lVar2 + _DAT_112d4f838) = 0;
      uVar4 = uVar3;
      func_0x000107c61150();
      if ((uVar4 & 1) != 0) {
        func_0x000107c4d0e8(uVar3);
      }
      func_0x000107c4d0f0(uVar3);
      if (lVar5 == 0) {
        func_0x000107c61170(lVar2);
        func_0x000107c615e8(uVar3);
        return;
      }
      uVar4 = uVar3;
      func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_modularStickerCutoutScope_didSel_112611cb0);
      if ((uVar4 & 1) == 0) {
        func_0x000107c61170(lVar2);
        func_0x000107c615e8(uVar3);
      }
      else {
        uVar7 = *(undefined8 *)(lVar2 + lVar1);
        func_0x000107c615f0(uVar3);
        func_0x000107c61174(uVar7);
        func_0x000107c4d0ec(uVar3);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(uVar7);
        func_0x000107c615ec(uVar3,2);
      }
    }
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 100f7d328; end: 100f7d347;  */

void FUN_100f7d328(void)

{
  func_0x000107c61168(&PTR_PTR_1127a5df0);
  return;
}



/* Entry: 100f7d348; end: 100f7d35f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100f7d348(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long unaff_x20;
  code *pcVar8;
  undefined1 auStack_48 [24];
  
  lVar3 = _DAT_112ff2298;
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(lVar5 + _DAT_112d4f858);
  func_0x000107c61428(lVar7 + _DAT_112ff2298,auStack_48,0,0);
  if ((*(byte *)(lVar7 + lVar3) & 1) == 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + _DAT_112d4f8c8) + _DAT_112ff2a80);
    uVar2 = *puVar1;
    lVar3 = puVar1[1];
    uVar4 = uVar2;
    func_0x000107c614f0(uVar2);
    pcVar8 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(uVar2);
    (*pcVar8)(uVar4,lVar3);
    uVar6 = (uint)uVar4;
    func_0x000107c615e8(uVar2);
  }
  else {
    uVar6 = 0;
  }
  return uVar6 & 1;
}



/* Entry: 100f7d360; end: 100f7d3af;  */

void FUN_100f7d360(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100f7d3b0;
  plVar3[0x17] = lVar2;
  plVar3[0x18] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x19] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f7c5b8,lVar1,lVar2);
  return;
}



/* Entry: 100f7d3b0; end: 100f7d3eb;  */

void FUN_100f7d3b0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f7d3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f7d3ec; end: 100f7d45b;  */

void FUN_100f7d3ec(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x100f7da2c;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = 0x100f7cc98;
                    /* WARNING: Could not recover jumptable at 0x000100f7cc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 100f7d45c; end: 100f7d497;  */

undefined8 FUN_100f7d45c(undefined8 param_1,undefined8 param_2)

{
  FUN_100f6e4d0(param_2,param_1);
  return param_2;
}



/* Entry: 100f7d498; end: 100f7d4b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7d498(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000285a8(0x112d3b7c0,&UNK_10d904cb0);
  func_0x000107c5dbd4(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  func_0x0001000d224c(&uStack_58);
  func_0x000107c61574(uVar1);
  func_0x0001000285a8(0x112d4f910,&UNK_10d915830);
  uVar2 = *(undefined8 *)(lVar4 + _DAT_11307a4a0);
  func_0x0001000bda74(uVar2);
  func_0x0001000d224c(&uStack_60);
  func_0x000107c61574(uVar2);
  func_0x000100f72b54(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar5);
  FUN_100f6edb8(uVar6,uVar3,uStack_58,uStack_60,uVar5);
  return;
}



/* Entry: 100f7d4b4; end: 100f7d88b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100f7d4b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  lVar10 = param_8;
  func_0x000107c614f0();
  lVar9 = _DAT_112d4f388;
  puStack_70 = &UNK_11036f1e0;
  ppuStack_68 = &PTR_DAT_11036f1f8;
  lVar4 = 0;
  uStack_88 = param_2;
  uStack_80 = param_3;
  FUN_100f7a2a4();
  func_0x000107c613fc();
  uStack_b0 = 1;
  uStack_a8 = 3;
  func_0x000107c5f1fc(lVar4 + _DAT_112d4f730,&uStack_b0,&UNK_1106deed0);
  puVar1 = (undefined8 *)(lVar4 + _DAT_1137ff0c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1137ff0d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1137ff0d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(param_8 + lVar9) = lVar4;
  func_0x000107c61614(param_8 + _DAT_112d4f390,0);
  func_0x000107c61614(param_8 + _DAT_112d4f398,0);
  *(undefined8 *)(param_8 + _DAT_112d4f3a0) = 0;
  *(undefined8 *)(param_8 + _DAT_112d4f3a8) = 0;
  *(undefined8 *)(param_8 + _DAT_112d4f3b0) = 0x4000000000000000;
  *(long *)(param_8 + _DAT_112d4f368) = param_1;
  func_0x000100f7d8c0(&uStack_88,param_8 + _DAT_112d4f370);
  puVar1 = (undefined8 *)(param_8 + _DAT_112d4f378);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(param_8 + _DAT_112d4f380);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar8 = PTR_s_init_1125d9248;
  lStack_98 = param_8;
  lStack_90 = lVar10;
  func_0x000107c6157c(param_1);
  plVar5 = &lStack_98;
  func_0x000107c61154(plVar5,puVar8);
  func_0x0001000834e4(&uStack_88);
  lVar9 = _DAT_112d4f388;
  lVar10 = *(long *)((long)plVar5 + _DAT_112d4f388);
  puVar8 = &UNK_11036f918;
  puVar6 = puVar8;
  func_0x000107c613fc(&UNK_11036f918,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,plVar5);
  puVar1 = (undefined8 *)(lVar10 + _DAT_1137ff0c8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_100f7d904;
  puVar1[1] = puVar6;
  plVar7 = plVar5;
  func_0x000107c61174(plVar5);
  func_0x000107c61174();
  func_0x000107c6157c(lVar10);
  func_0x000107c6157c(puVar6);
  FUN_100c9cba0(uVar2,uVar3);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(lVar10);
  lVar10 = *(long *)((long)plVar5 + lVar9);
  puVar6 = puVar8;
  func_0x000107c613fc(&UNK_11036f918,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,plVar7);
  puVar1 = (undefined8 *)(lVar10 + _DAT_1137ff0d0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0x100f7d90c;
  puVar1[1] = puVar6;
  func_0x000107c6157c(lVar10);
  func_0x000107c6157c(puVar6);
  FUN_100c9cba0(uVar2,uVar3);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(lVar10);
  lVar9 = *(long *)((long)plVar5 + lVar9);
  func_0x000107c6157c(lVar9);
  func_0x000107c61170(plVar7);
  puVar6 = puVar8;
  func_0x000107c613fc(&UNK_11036f918,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,plVar7);
  puVar1 = (undefined8 *)(lVar9 + _DAT_1137ff0d8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = 0x100f7d914;
  puVar1[1] = puVar6;
  func_0x000107c6157c(puVar6);
  FUN_100c9cba0(uVar2,uVar3);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(lVar9);
  func_0x000107c613fc(&UNK_11036f918,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,plVar7);
  func_0x000107c61170(plVar7);
  func_0x000107c61428(param_1 + 0x20,&uStack_b0,1,0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0x100f7d91c;
  *(undefined **)(param_1 + 0x28) = puVar8;
  func_0x000107c6157c(puVar8);
  FUN_100c9cba0(uVar2,uVar3);
  func_0x000107c61574(puVar8);
  func_0x000107c61428(param_1 + 0x30,auStack_c8,1,0);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(code **)(param_1 + 0x30) = FUN_100f74b50;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_100c9cba0(uVar2,uVar3);
  return plVar7;
}



/* Entry: 100f7d88c; end: 100f7d903;  */

undefined8 FUN_100f7d88c(undefined8 param_1)

{
  FUN_100f6e498();
  return param_1;
}



/* Entry: 100f7d904; end: 100f7d94b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7d904(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
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
  undefined1 auStack_d8 [24];
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
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_d8,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d4f368);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    uStack_158 = param_1;
    func_0x000100f75be4(&uStack_158);
    uStack_78 = uStack_110;
    uStack_80 = uStack_118;
    uStack_68 = uStack_100;
    uStack_70 = uStack_108;
    uStack_58 = uStack_f0;
    uStack_60 = uStack_f8;
    uStack_48 = uStack_e0;
    uStack_50 = uStack_e8;
    uStack_b8 = uStack_150;
    uStack_c0 = uStack_158;
    uStack_a8 = uStack_140;
    uStack_b0 = uStack_148;
    uStack_98 = uStack_130;
    uStack_a0 = uStack_138;
    uStack_88 = uStack_120;
    uStack_90 = uStack_128;
    func_0x000103ba1ea0(&uStack_c0);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 100f7d94c; end: 100f7d9bb;  */

undefined8 FUN_100f7d94c(undefined8 param_1,undefined8 param_2)

{
  FUN_100f91590(param_2,param_1);
  return param_2;
}



/* Entry: 100f7d9bc; end: 100f7d9ff;  */

void FUN_100f7d9bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4f928 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ba838;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d4f928 = puVar1;
  return;
}



/* Entry: 100f7da00; end: 100f7da3b;  */

void FUN_100f7da00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar5 = &puStack_80;
  uVar3 = uVar6;
  func_0x000107c4c948(uVar6);
  func_0x000107c61180();
  uVar4 = uVar6;
  func_0x000107c4271c(uVar6);
  func_0x000107c61180();
  func_0x000107c42718(uVar6);
  func_0x000107c61180();
  uStack_60 = 0x100f7da0c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100f7cecc;
  puStack_68 = &UNK_11036f980;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  uVar2 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c507dc(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 100f7da3c; end: 100f7daa7;  */

undefined8 * FUN_100f7da3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 100f7daa8; end: 100f7db4b;  */

int FUN_100f7daa8(ulong *param_1,int param_2)

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



/* Entry: 100f7db4c; end: 100f7dca7;  */

void FUN_100f7db4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  puVar4 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar6 = puVar5;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4032000000000000,0x4032000000000000);
  func_0x000107c61180();
  func_0x000107c61170();
  FUN_100f97594();
  puVar7 = puVar5;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  lVar8 = 0x112d4f930;
  func_0x0001000285a8(0x112d4f930,&UNK_10d9158a8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x24));
  lVar8 = 0x112d4f648;
  func_0x0001000285a8(0x112d4f648,&UNK_10d9158b0);
  iVar3 = *(int *)(lVar8 + 0x34);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar9 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar9 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar9);
  *puVar1 = puVar5;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x38)) = 0x100;
  *param_1 = puVar4;
  param_1[1] = puVar6;
  param_1[2] = param_3;
  param_1[3] = puVar7;
  return;
}



/* Entry: 100f7dca8; end: 100f7dcb3;  */

void FUN_100f7dca8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 100f7dcb4; end: 100f7dd2f;  */

void FUN_100f7dcb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  func_0x000107c6157c(uVar2);
  uVar3 = 0x112d4f930;
  func_0x0001000285a8(0x112d4f930,&UNK_10d9158a8);
  uVar4 = uVar3;
  FUN_100f7dd38();
  func_0x000107c5f738(param_1,uVar1,uVar2,FUN_100f7dd30,auStack_50,uVar3,uVar4);
  return;
}



/* Entry: 100f7dd30; end: 100f7dd37;  */

void FUN_100f7dd30(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar6 = puVar5;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4032000000000000,0x4032000000000000);
  func_0x000107c61180();
  func_0x000107c61170();
  FUN_100f97594();
  puVar7 = puVar5;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  lVar8 = 0x112d4f930;
  func_0x0001000285a8(0x112d4f930,&UNK_10d9158a8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x24));
  lVar8 = 0x112d4f648;
  func_0x0001000285a8(0x112d4f648,&UNK_10d9158b0);
  iVar3 = *(int *)(lVar8 + 0x34);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar9 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar9 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar9);
  *puVar1 = puVar5;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x38)) = 0x100;
  *param_1 = puVar4;
  param_1[1] = puVar6;
  param_1[2] = uVar10;
  param_1[3] = puVar7;
  return;
}



/* Entry: 100f7dd38; end: 100f7ddcf;  */

void FUN_100f7dd38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112d4f938 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4f930;
  func_0x00010002969c(0x112d4f930,&UNK_10d9158a8);
  uVar2 = uVar1;
  FUN_100f7ddd0();
  uVar3 = 0x112d4f640;
  FUN_100f7de10(0x112d4f640,0x112d4f648,&UNK_10d9158b0,
                PTR___s7SwiftUI34_InsettableBackgroundShapeModifierVyxq_GAA04ViewF0AAMc_110349268);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112d4f938 = puVar4;
  return;
}



/* Entry: 100f7ddd0; end: 100f7de0f;  */

void FUN_100f7ddd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4f940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d916484;
  func_0x000107c61520(&UNK_10d916484,&UNK_1103707d8);
  puRam0000000112d4f940 = puVar1;
  return;
}



/* Entry: 100f7de10; end: 100f7de53;  */

void FUN_100f7de10(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 100f7de54; end: 100f7de5b;  */

undefined8 * FUN_100f7de54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 100f7de5c; end: 100f7df4b;  */

void FUN_100f7de5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010052bbec();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c43784();
  func_0x000107c61180();
  func_0x000107c615e8(param_1);
  uRam00000001137ff0e0 = uVar1;
  return;
}



/* Entry: 100f7df4c; end: 100f7e05f;  */

double FUN_100f7df4c(double param_1)

{
  double dVar1;
  double dVar2;
  
  if (lRam0000000112d4f958 != -1) {
    func_0x000107c61568(0x112d4f958,0x100f7defc);
  }
  func_0x000107c4b63c(uRam00000001137ff0e8);
  dVar1 = param_1;
  if (lRam0000000112d4f960 != -1) {
    func_0x000107c61568(0x112d4f960,FUN_100f7de5c);
  }
  func_0x000107c4b63c(uRam00000001137ff0e0);
  if (lRam0000000112d4f968 != -1) {
    func_0x000107c61568(0x112d4f968,0x100f7deac);
  }
  dVar1 = param_1 + 16.0 + 16.0 + 276.0 + 16.0 + dVar1 + dVar1 + 59.0;
  dVar2 = dVar1 + 8.0;
  func_0x000107c4b63c(uRam00000001137ff0f0);
  return dVar2 + dVar1 + 16.0 + 16.0;
}



/* Entry: 100f7e060; end: 100f7e0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100f7e060(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uStack_31;
  
  lVar2 = 0;
  FUN_100f8b870();
  func_0x000107c613fc();
  lVar1 = _DAT_112d4fef0;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar2 + lVar1) = uVar3;
  *(undefined8 *)(lVar2 + _DAT_112d4fef8) = 0;
  uStack_31 = 0;
  func_0x000107c5f1fc(lVar2 + _DAT_112d4fee8,&uStack_31,PTR___sSbN_11034dd40);
  return lVar2;
}



/* Entry: 100f7e0f8; end: 100f7e34b;  */

void FUN_100f7e0f8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  long *plVar9;
  long lStack_190;
  undefined1 auStack_188 [8];
  undefined8 auStack_180 [32];
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = 0x112d4f978;
  func_0x0001000285a8(0x112d4f978,&UNK_10d915950);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  plVar9 = (long *)(auStack_188 + lVar4 + -8);
  func_0x000107c5f438();
  *plVar9 = lVar3;
  *(undefined8 *)(auStack_188 + lVar4) = 0;
  *(undefined1 *)((long)auStack_180 + lVar4) = 1;
  lVar4 = 0x112d4f980;
  func_0x0001000285a8(0x112d4f980,&UNK_10d915958);
  FUN_100f7e34c((undefined1 *)((long)plVar9 + (long)*(int *)(lVar4 + 0x2c)));
  puVar5 = &UNK_11036fb38;
  func_0x000107c613fc(&UNK_11036fb38,0x120,7);
  func_0x000107c610b4(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar9 + (long)*(int *)(lVar2 + 0x24));
  *puVar1 = 0x100f836b0;
  puVar1[1] = puVar5;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x18);
  lStack_80 = *(long *)(unaff_x20 + 0x10);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100f836b8();
  func_0x0001000285a8(0x112d4f558,&UNK_10d915410);
  func_0x000107c5f72c(&lStack_190);
  lStack_80 = lStack_190;
  uStack_78 = CONCAT71(uStack_78._1_7_,auStack_188[0]);
  puVar5 = &UNK_11036fb60;
  func_0x000107c613fc(&UNK_11036fb60,0x120,7);
  func_0x000107c610b4(puVar5 + 0x10);
  FUN_100f836b8();
  uVar6 = 0x112d4f4d0;
  func_0x0001000285a8(0x112d4f4d0,&UNK_10d9153c0);
  uVar7 = uVar6;
  FUN_100f836f4();
  uVar8 = uVar7;
  FUN_100f790c4();
  func_0x000107c5f6ac(param_1,&lStack_80,0,FUN_100f836ec,puVar5,lVar2,uVar6,uVar7,uVar8);
  func_0x000107c61574(puVar5);
  func_0x000100f8409c(plVar9,0x112d4f978,&UNK_10d915950);
  puVar5 = &UNK_11036fb88;
  func_0x000107c613fc(&UNK_11036fb88,0x120,7);
  func_0x000107c610b4(puVar5 + 0x10);
  lVar2 = 0x112d4f9a0;
  func_0x0001000285a8(0x112d4f9a0,&UNK_10d915968);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = FUN_100f8378c;
  puVar1[3] = puVar5;
  FUN_100f836b8();
  return;
}



/* Entry: 100f7e34c; end: 100f7f637;  */

void FUN_100f7e34c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
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
  undefined1 uVar15;
  undefined4 uVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  undefined8 uVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uStack_5f0;
  undefined1 auStack_5e8 [8];
  undefined8 uStack_5e0;
  undefined1 auStack_5d8 [8];
  long alStack_5d0 [2];
  undefined1 *apuStack_5c0 [2];
  long alStack_5b0 [3];
  undefined1 auStack_598 [8];
  undefined1 auStack_590 [8];
  undefined *apuStack_588 [4];
  long alStack_568 [3];
  undefined *puStack_550;
  long alStack_548 [6];
  undefined8 uStack_518;
  undefined1 auStack_516 [6];
  undefined1 auStack_510 [8];
  undefined8 auStack_508 [2];
  undefined2 uStack_4f8;
  undefined6 uStack_4f6;
  undefined2 uStack_4f0;
  undefined6 uStack_4ee;
  undefined2 uStack_4e8;
  undefined6 uStack_4e6;
  undefined8 auStack_4e0 [3];
  undefined1 auStack_4c8 [8];
  undefined1 auStack_4c6 [8];
  undefined1 auStack_4be [14];
  undefined8 uStack_4b0;
  undefined8 uStack_49e;
  undefined *puStack_440;
  long lStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined2 uStack_3e8;
  undefined6 uStack_3e6;
  undefined2 uStack_3e0;
  undefined8 uStack_3de;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
  undefined *puStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined2 uStack_2e8;
  undefined6 uStack_2e6;
  undefined2 uStack_2e0;
  undefined6 uStack_2de;
  undefined2 uStack_2d8;
  undefined6 uStack_2d6;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined2 uStack_298;
  undefined6 uStack_296;
  undefined2 uStack_290;
  undefined8 uStack_28e;
  undefined *puStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined2 uStack_228;
  undefined6 uStack_226;
  undefined2 uStack_220;
  undefined6 uStack_21e;
  undefined2 uStack_218;
  undefined6 uStack_216;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined2 uStack_1d8;
  undefined6 uStack_1d6;
  undefined2 uStack_1d0;
  undefined8 uStack_1ce;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined2 uStack_168;
  undefined6 uStack_166;
  undefined2 uStack_160;
  undefined6 uStack_15e;
  undefined2 uStack_158;
  undefined6 uStack_156;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined8 uStack_10e;
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
  
  alStack_548[0] = *(long *)(param_6 + 0x68);
  puStack_550 = *(undefined **)(param_6 + 0x60);
  alStack_548[1] = *(undefined8 *)(param_6 + 0x70);
  alStack_568[2] = param_1;
  func_0x0001000285a8(0x112d4f9d0,&UNK_10d915998);
  func_0x000107c5f72c(&puStack_1c0);
  if ((byte)lStack_1b8 < 3) {
    if (1 < (byte)lStack_1b8) {
      lVar18 = 0x112d4f9e8;
      func_0x0001000285a8(0x112d4f9e8,&UNK_10d9159c0);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar26 = (long)apuStack_5c0 - extraout_x8_03;
      lVar19 = 0x112d4f9f0;
      func_0x0001000285a8(0x112d4f9f0,&UNK_10d9159c8);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      func_0x000107c6159c(lVar26 - extraout_x8_04);
      uVar22 = 0x112d4f9f8;
      func_0x0001000285a8(0x112d4f9f8,&UNK_10d9159d0);
      uVar28 = 0x112d4fa00;
      func_0x000100f84008(0x112d4fa00,0x112d4f9f8,&UNK_10d9159d0,
                          PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8);
      func_0x000107c5f490(lVar26,lVar26 - extraout_x8_04,uVar22,
                          PTR___s7SwiftUI9EmptyViewVN_110349a58,uVar28,
                          PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_110349a48);
      lVar19 = 0x112d4fa08;
      func_0x0001000285a8(0x112d4fa08,&UNK_10d9159d8);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar27 = lVar26 - extraout_x8_05;
      func_0x000100f83b2c(lVar26,lVar27,0x112d4f9e8,&UNK_10d9159c0);
      func_0x000107c6159c(lVar27,lVar19,1);
      uVar22 = 0x112d4fa10;
      func_0x0001000285a8(0x112d4fa10,&UNK_10d9159e0);
      uVar28 = uVar22;
      func_0x000100f83930();
      uVar20 = uVar28;
      FUN_100f83a08();
      func_0x000107c5f490(alStack_568[2],lVar27,uVar22,lVar18,uVar28,uVar20);
      func_0x000100f8409c(lVar26,0x112d4f9e8,&UNK_10d9159c0);
      return;
    }
    FUN_100f83aa0();
  }
  else {
    if ((byte)lStack_1b8 != 3) {
      uVar22 = *(undefined8 *)(param_6 + 0xd0);
      alStack_5b0[1] = *(undefined8 *)(param_6 + 0xd0);
      alStack_5b0[0] = *(undefined8 *)(param_6 + 200);
      puVar17 = puStack_1c0;
      apuStack_588[3] = (undefined *)uVar22;
      func_0x000107c5f568();
      uVar28 = 0x4030000000000000;
      func_0x000107c5f280();
      func_0x000107c6157c(uVar22);
      FUN_100f7f638(&puStack_550);
      uStack_238 = auStack_508[0];
      uStack_240 = auStack_510;
      uStack_228 = uStack_4f8;
      uStack_230 = auStack_508[1];
      uStack_21e = uStack_4ee;
      uStack_218 = uStack_4e8;
      uStack_226 = uStack_4f6;
      uStack_220 = uStack_4f0;
      lStack_278 = alStack_548[0];
      puStack_280 = puStack_550;
      uStack_268 = alStack_548[2];
      uStack_270 = alStack_548[1];
      uStack_258 = alStack_548[4];
      uStack_260 = alStack_548[3];
      uStack_248 = uStack_518;
      uStack_250 = alStack_548[5];
      uStack_1a8 = alStack_548[2];
      uStack_1b0 = alStack_548[1];
      lStack_1b8 = alStack_548[0];
      puStack_1c0 = puStack_550;
      uStack_198 = alStack_548[4];
      uStack_1a0 = alStack_548[3];
      lStack_188 = uStack_518;
      puStack_190 = (undefined *)alStack_548[5];
      uStack_178 = auStack_508[0];
      uStack_180 = auStack_510;
      uStack_170 = auStack_508[1];
      FUN_100f84200(&puStack_280,&puStack_340,0x112d4fa90,&UNK_10d915a48);
      func_0x000100f84248(&puStack_1c0,0x112d4fa90,&UNK_10d915a48);
      lVar18 = 0x112d4fa98;
      func_0x0001000285a8(0x112d4fa98,&UNK_10d915a50);
      lVar26 = *(long *)(*(long *)(lVar18 + -8) + 0x40);
      lVar19 = lVar18;
      apuStack_588[2] = (undefined *)apuStack_5c0;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      uVar15 = (undefined1)lVar19;
      uVar25 = lVar26 + 0xfU & 0xfffffffffffffff0;
      lVar26 = -uVar25;
      puVar23 = (undefined1 *)((long)apuStack_5c0 + lVar26);
      func_0x000107c5f55c();
      *puVar23 = uVar15;
      lVar19 = 0x112d4faa0;
      puVar21 = &UNK_10d915a58;
      func_0x0001000285a8();
      FUN_100f80ba4(puVar23 + *(int *)(lVar19 + 0x2c));
      func_0x000107c5f7ac();
      *(long *)((long)alStack_5d0 + lVar26) = param_6;
      *(undefined **)((long)alStack_5d0 + lVar26 + 8) = puVar21;
      auStack_5d8[lVar26] = 1;
      *(undefined8 *)((long)&uStack_5e0 + lVar26) = 0;
      auStack_5e8[lVar26] = 1;
      *(undefined8 *)((long)&uStack_5f0 + lVar26) = 0;
      func_0x000107c5f388(&puStack_550,0,1,0,1,0x4079000000000000,0,0,1);
      lVar19 = 0x112d4faa8;
      func_0x0001000285a8(0x112d4faa8,&UNK_10d915a60);
      puVar24 = (undefined8 *)(puVar23 + *(int *)(lVar19 + 0x24));
      puVar24[9] = auStack_508[0];
      puVar24[8] = auStack_510;
      puVar24[0xb] = CONCAT62(uStack_4f6,uStack_4f8);
      puVar24[10] = auStack_508[1];
      puVar24[0xd] = CONCAT62(uStack_4e6,uStack_4e8);
      puVar24[0xc] = CONCAT62(uStack_4ee,uStack_4f0);
      lVar26 = alStack_548[1];
      puVar21 = puStack_550;
      puVar24[1] = alStack_548[0];
      *puVar24 = puVar21;
      puVar24[3] = alStack_548[2];
      puVar24[2] = lVar26;
      puVar24[5] = alStack_548[4];
      puVar24[4] = alStack_548[3];
      puVar24[7] = uStack_518;
      puVar24[6] = alStack_548[5];
      func_0x000107c5f568();
      lVar26 = 0x112d4fab0;
      func_0x0001000285a8(0x112d4fab0,&UNK_10d915a68);
      puVar1 = puVar23 + *(int *)(lVar26 + 0x24);
      *puVar1 = (char)lVar19;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      puVar1[0x28] = 1;
      func_0x000107c5f56c();
      puVar1 = puVar23 + *(int *)(lVar18 + 0x24);
      apuStack_5c0[1] = puVar23;
      *puVar1 = (char)lVar26;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      puVar1[0x28] = 1;
      lVar18 = 0x112d4fa28;
      func_0x0001000285a8(0x112d4fa28,&UNK_10d9159e8);
      alStack_5b0[2] = lVar18;
      apuStack_588[1] = puVar23;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar24 = (undefined8 *)(puVar23 + -extraout_x8_06);
      uStack_3de = CONCAT26(uStack_218,uStack_21e);
      uStack_3f8 = uStack_238;
      uStack_400 = uStack_240;
      uStack_3e8 = uStack_228;
      uStack_3f0 = uStack_230;
      uStack_3e6 = uStack_226;
      uStack_3e0 = uStack_220;
      lStack_438 = lStack_278;
      puStack_440 = puStack_280;
      uStack_428 = uStack_268;
      uStack_430 = uStack_270;
      uStack_418 = uStack_258;
      uStack_420 = uStack_260;
      uStack_408 = uStack_248;
      uStack_410 = uStack_250;
      apuStack_588[0] = (undefined *)puVar24;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar26 = (long)puVar24 - uVar25;
      func_0x000100f83b2c(puVar23,lVar26,0x112d4fa98,&UNK_10d915a50);
      lVar18 = alStack_5b0[0];
      uStack_378 = alStack_5b0[1];
      uStack_380 = alStack_5b0[0];
      uStack_370 = SUB81(puVar17,0);
      uStack_358 = (undefined1)param_4;
      uStack_357 = (undefined7)((ulong)param_4 >> 8);
      uStack_350 = (undefined1)param_5;
      uStack_34f = (undefined7)((ulong)param_5 >> 8);
      uStack_348 = 0;
      uVar22 = CONCAT71(uStack_36f,uStack_370);
      uStack_368 = uVar28;
      uStack_360 = param_3;
      puVar24[1] = alStack_5b0[1];
      *puVar24 = lVar18;
      puVar24[3] = uVar28;
      puVar24[2] = uVar22;
      uVar22 = uStack_360;
      puVar24[5] = CONCAT71(uStack_357,uStack_358);
      puVar24[4] = uVar22;
      uVar22 = CONCAT17(uStack_350,uStack_357);
      *(ulong *)((long)puVar24 + 0x31) = CONCAT17(uStack_348,uStack_34f);
      *(undefined8 *)((long)puVar24 + 0x29) = uVar22;
      uVar8 = uStack_3f0;
      uVar7 = uStack_3f8;
      uVar6 = uStack_400;
      uVar5 = uStack_408;
      uVar4 = uStack_410;
      uVar3 = uStack_418;
      uVar2 = uStack_420;
      uVar20 = uStack_428;
      uVar28 = uStack_430;
      lVar18 = lStack_438;
      puVar21 = puStack_440;
      lStack_338 = lStack_438;
      puStack_340 = puStack_440;
      uStack_328 = uStack_428;
      uStack_330 = uStack_430;
      uStack_2de = (undefined6)uStack_3de;
      uStack_2d8 = (undefined2)((ulong)uStack_3de >> 0x30);
      uVar22 = CONCAT62(uStack_3e6,uStack_3e8);
      uStack_2f8 = uStack_3f8;
      uStack_300 = uStack_400;
      uStack_2f0 = uStack_3f0;
      uStack_318 = uStack_418;
      uStack_320 = uStack_420;
      uStack_308 = uStack_408;
      uStack_310 = uStack_410;
      puVar24[8] = 0;
      *(undefined1 *)(puVar24 + 9) = 1;
      puVar24[0xb] = lVar18;
      puVar24[10] = puVar21;
      puVar24[0xd] = uVar20;
      puVar24[0xc] = uVar28;
      *(undefined8 *)((long)puVar24 + 0xb2) = uStack_3de;
      *(ulong *)((long)puVar24 + 0xaa) = CONCAT26(uStack_3e0,uStack_3e6);
      puVar24[0x13] = uVar7;
      puVar24[0x12] = uVar6;
      puVar24[0x15] = uVar22;
      puVar24[0x14] = uVar8;
      puVar24[0xf] = uVar3;
      puVar24[0xe] = uVar2;
      puVar24[0x11] = uVar5;
      puVar24[0x10] = uVar4;
      lVar18 = 0x112d4fab8;
      func_0x0001000285a8(0x112d4fab8,&UNK_10d915a70);
      func_0x000100f83b2c(lVar26,(undefined1 *)((long)puVar24 + (long)*(int *)(lVar18 + 0x50)),
                          0x112d4fa98,&UNK_10d915a50);
      puVar21 = apuStack_588[3];
      func_0x000107c6157c(apuStack_588[3]);
      FUN_100f84200(&puStack_280,&uStack_100,0x112d4fa90,&UNK_10d915a48);
      FUN_100f84200(&uStack_380,&uStack_100,0x112d4fa70,&UNK_10d915a20);
      FUN_100f84200(&puStack_340,&uStack_100,0x112d4fa90,&UNK_10d915a48);
      func_0x000100f8409c(lVar26,0x112d4fa98,&UNK_10d915a50);
      func_0x000100f84248(&puStack_440,0x112d4fa90,&UNK_10d915a48);
      func_0x000107c61574(puVar21);
      lVar18 = 0x112d4fa10;
      func_0x0001000285a8(0x112d4fa10,&UNK_10d9159e0);
      alStack_5b0[0] = lVar26;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar26 = lVar26 - extraout_x8_07;
      lVar19 = 0x112d4fa88;
      func_0x0001000285a8(0x112d4fa88,&UNK_10d915a40);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar27 = lVar26 - extraout_x8_08;
      func_0x000100f83b2c(puVar24,lVar27,0x112d4fa28,&UNK_10d9159e8);
      func_0x000107c6159c(lVar27,lVar19,0);
      uVar22 = 0x112d4fa20;
      func_0x000100f84008(0x112d4fa20,0x112d4fa28,&UNK_10d9159e8,
                          PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8);
      uVar28 = uVar22;
      FUN_100f839c8();
      func_0x000107c5f490(lVar26,lVar27,alStack_5b0[2],&UNK_1103701a0,uVar22,uVar28);
      lVar19 = 0x112d4fa08;
      func_0x0001000285a8(0x112d4fa08,&UNK_10d9159d8);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar27 = lVar26 - extraout_x8_09;
      func_0x000100f83b2c(lVar26,lVar27,0x112d4fa10,&UNK_10d9159e0);
      func_0x000107c6159c(lVar27,lVar19,0);
      uVar22 = 0x112d4f9e8;
      func_0x0001000285a8(0x112d4f9e8,&UNK_10d9159c0);
      uVar20 = uVar22;
      func_0x000100f83930();
      uVar28 = uVar20;
      FUN_100f83a08();
      func_0x000107c5f490(alStack_568[2],lVar27,lVar18,uVar22,uVar20,uVar28);
      func_0x000100f84248(&puStack_280,0x112d4fa90,&UNK_10d915a48);
      func_0x000107c61574(apuStack_588[3]);
      func_0x000100f8409c(lVar26,0x112d4fa10,&UNK_10d9159e0);
      func_0x000100f8409c(apuStack_5c0[1],0x112d4fa98,&UNK_10d915a50);
      func_0x000100f8409c(puVar24,0x112d4fa28,&UNK_10d9159e8);
      return;
    }
    if (puStack_1c0 == (undefined *)0x0) {
      FUN_100f7fbf0();
      lVar18 = *(long *)(param_6 + 0xc0);
      func_0x000107c614f0(*(undefined8 *)(param_6 + 0xb8));
      (**(code **)(lVar18 + 0x18))(&lStack_1b8);
      lStack_278 = *(undefined8 *)(param_6 + 0x50);
      puStack_280 = *(undefined **)(param_6 + 0x48);
      uStack_270 = *(undefined8 *)(param_6 + 0x58);
      func_0x0001000285a8(0x112d4fa78,&UNK_10d915a28);
      func_0x000107c5f734(&puStack_550);
      lVar18 = alStack_548[1];
      alStack_568[0] = alStack_548[0];
      apuStack_588[3] = puStack_550;
      puVar21 = &UNK_11036fc50;
      func_0x000107c613fc(&UNK_11036fc50,0x120,7);
      func_0x000107c610b4(puVar21 + 0x10,param_6,0x110);
      lStack_188 = alStack_568[0];
      puStack_190 = apuStack_588[3];
      uStack_180 = lVar18;
      uStack_178 = alStack_548[2];
      uStack_170 = 0x100f83ab4;
      uStack_168 = SUB82(puVar21,0);
      uStack_166 = (undefined6)((ulong)puVar21 >> 0x10);
      uVar22 = *(undefined8 *)(param_6 + 0xd0);
      uStack_158 = (undefined2)*(undefined8 *)(param_6 + 0xd0);
      uStack_156 = (undefined6)((ulong)*(undefined8 *)(param_6 + 0xd0) >> 0x10);
      uStack_160 = (undefined2)*(undefined8 *)(param_6 + 200);
      uStack_15e = (undefined6)((ulong)*(undefined8 *)(param_6 + 200) >> 0x10);
      puStack_280 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100f836b8(param_6,&puStack_550);
      func_0x000107c6157c(uVar22);
      uVar22 = 0x112d4fa80;
      func_0x0001000285a8(0x112d4fa80,&UNK_10d915a30);
      func_0x000107c5f728(&uStack_150,&puStack_280,uVar22);
      puStack_550 = (undefined *)0x0;
      alStack_548[0] = 0;
      uVar22 = 0x112d35ff8;
      func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
      func_0x000107c5f728(&uStack_140,&puStack_550,uVar22);
      puStack_550 = (undefined *)((ulong)puStack_550 & 0xffffffffffffff00);
      func_0x000107c5f728(&uStack_128,&puStack_550,PTR___sSbN_11034dd40);
      puStack_550 = (undefined *)0x0;
      func_0x000107c5f728(&uStack_118,&puStack_550,PTR___sSiN_11034deb0);
      lVar18 = 0x112d4fa10;
      func_0x0001000285a8(0x112d4fa10,&UNK_10d9159e0);
      apuStack_588[3] = (undefined *)apuStack_5c0;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar26 = (long)apuStack_5c0 - extraout_x8_10;
      lVar19 = 0x112d4fa88;
      func_0x0001000285a8(0x112d4fa88,&UNK_10d915a40);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar27 = lVar26 - extraout_x8_11;
      func_0x000100f83abc(&puStack_1c0,lVar27);
      func_0x000107c6159c(lVar27,lVar19,1);
      uVar22 = 0x112d4fa28;
      func_0x0001000285a8(0x112d4fa28,&UNK_10d9159e8);
      uVar28 = 0x112d4fa20;
      func_0x000100f84008(0x112d4fa20,0x112d4fa28,&UNK_10d9159e8,
                          PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8);
      uVar20 = uVar28;
      FUN_100f839c8();
      func_0x000107c5f490(lVar26,lVar27,uVar22,&UNK_1103701a0,uVar28,uVar20);
      lVar19 = 0x112d4fa08;
      func_0x0001000285a8(0x112d4fa08,&UNK_10d9159d8);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar27 = lVar26 - extraout_x8_12;
      func_0x000100f83b2c(lVar26,lVar27,0x112d4fa10,&UNK_10d9159e0);
      func_0x000107c6159c(lVar27,lVar19,0);
      uVar22 = 0x112d4f9e8;
      func_0x0001000285a8(0x112d4f9e8,&UNK_10d9159c0);
      uVar28 = uVar22;
      func_0x000100f83930();
      uVar20 = uVar28;
      FUN_100f83a08();
      func_0x000107c5f490(alStack_568[2],lVar27,lVar18,uVar22,uVar28,uVar20);
      func_0x000100f8409c(lVar26,0x112d4fa10,&UNK_10d9159e0);
      func_0x000100f83af8(&puStack_1c0);
      return;
    }
  }
  uVar16 = SUB84(puStack_1c0,0);
  uVar22 = *(undefined8 *)(param_6 + 0xd0);
  auStack_598 = *(undefined1 (*) [8])(param_6 + 0xd0);
  alStack_5b0[2] = *(undefined8 *)(param_6 + 200);
  apuStack_588[3] = (undefined *)uVar22;
  func_0x000107c5f568();
  alStack_5b0[0] = CONCAT44(alStack_5b0[0]._4_4_,uVar16);
  uVar28 = 0x4030000000000000;
  func_0x000107c5f280();
  func_0x000107c6157c(uVar22);
  FUN_100f7fe34(&puStack_280);
  uStack_138 = uStack_1f8;
  uStack_140 = uStack_200;
  uStack_128 = uStack_1e8;
  uStack_130 = uStack_1f0;
  uStack_118 = uStack_1d8;
  uStack_120 = uStack_1e0;
  uStack_10e = uStack_1ce;
  uStack_116 = uStack_1d6;
  uStack_110 = uStack_1d0;
  uStack_178 = uStack_238;
  uStack_180 = uStack_240;
  uStack_168 = uStack_228;
  uStack_166 = uStack_226;
  uStack_170 = uStack_230;
  uStack_158 = uStack_218;
  uStack_156 = uStack_216;
  uStack_160 = uStack_220;
  uStack_15e = uStack_21e;
  uStack_148 = uStack_208;
  uStack_150 = uStack_210;
  lStack_1b8 = lStack_278;
  puStack_1c0 = puStack_280;
  uStack_1a8 = uStack_268;
  uStack_1b0 = uStack_270;
  uStack_198 = uStack_258;
  uStack_1a0 = uStack_260;
  lStack_188 = uStack_248;
  puStack_190 = (undefined *)uStack_250;
  auStack_4c8 = (undefined1  [8])uStack_1f8;
  auStack_4e0[2] = uStack_200;
  auStack_4be._6_8_ = uStack_1e8;
  stack0xfffffffffffffb40 = uStack_1f0;
  uStack_4b0 = uStack_1e0;
  uStack_49e = uStack_1ce;
  auStack_508[0] = uStack_238;
  auStack_510 = (undefined1  [8])uStack_240;
  auStack_508[1] = uStack_230;
  auStack_4e0[1] = uStack_208;
  auStack_4e0[0] = uStack_210;
  alStack_548[0] = lStack_278;
  puStack_550 = puStack_280;
  alStack_548[2] = uStack_268;
  alStack_548[1] = uStack_270;
  alStack_548[4] = uStack_258;
  alStack_548[3] = uStack_260;
  uStack_518 = uStack_248;
  alStack_548[5] = uStack_250;
  FUN_100f84200(&puStack_1c0,&puStack_340,0x112d4fa40,&UNK_10d9159f0);
  func_0x000100f84248(&puStack_550,0x112d4fa40,&UNK_10d9159f0);
  lVar18 = 0x112d4fa48;
  func_0x0001000285a8(0x112d4fa48,&UNK_10d9159f8);
  lVar26 = *(long *)(*(long *)(lVar18 + -8) + 0x40);
  lVar19 = lVar18;
  apuStack_588[2] = (undefined *)apuStack_5c0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = (undefined1)lVar19;
  uVar25 = lVar26 + 0xfU & 0xfffffffffffffff0;
  lVar26 = -uVar25;
  puVar23 = (undefined1 *)((long)apuStack_5c0 + lVar26);
  func_0x000107c5f55c();
  *puVar23 = uVar15;
  lVar19 = 0x112d4fa50;
  puVar21 = &UNK_10d915a00;
  func_0x0001000285a8();
  func_0x000100f811b4(puVar23 + *(int *)(lVar19 + 0x2c));
  func_0x000107c5f7ac();
  *(long *)((long)alStack_5d0 + lVar26) = param_6;
  *(undefined **)((long)alStack_5d0 + lVar26 + 8) = puVar21;
  auStack_5d8[lVar26] = 1;
  *(undefined8 *)((long)&uStack_5e0 + lVar26) = 0;
  auStack_5e8[lVar26] = 1;
  *(undefined8 *)((long)&uStack_5f0 + lVar26) = 0;
  func_0x000107c5f388(&uStack_100,0,1,0,1,0x4079000000000000,0,0,1);
  lVar19 = 0x112d4fa58;
  func_0x0001000285a8(0x112d4fa58,&UNK_10d915a08);
  puVar24 = (undefined8 *)(puVar23 + *(int *)(lVar19 + 0x24));
  puVar24[9] = uStack_b8;
  puVar24[8] = uStack_c0;
  puVar24[0xb] = uStack_a8;
  puVar24[10] = uStack_b0;
  puVar24[0xd] = uStack_98;
  puVar24[0xc] = uStack_a0;
  puVar24[1] = uStack_f8;
  *puVar24 = uStack_100;
  puVar24[3] = uStack_e8;
  puVar24[2] = uStack_f0;
  puVar24[5] = uStack_d8;
  puVar24[4] = uStack_e0;
  puVar24[7] = uStack_c8;
  puVar24[6] = uStack_d0;
  func_0x000107c5f568();
  lVar26 = 0x112d4fa60;
  func_0x0001000285a8(0x112d4fa60,&UNK_10d915a10);
  puVar1 = puVar23 + *(int *)(lVar26 + 0x24);
  *puVar1 = (char)lVar19;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar1[0x28] = 1;
  func_0x000107c5f56c();
  puVar1 = puVar23 + *(int *)(lVar18 + 0x24);
  apuStack_5c0[0] = puVar23;
  *puVar1 = (char)lVar26;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar1[0x28] = 1;
  lVar18 = 0x112d4f9f8;
  func_0x0001000285a8(0x112d4f9f8,&UNK_10d9159d0);
  apuStack_5c0[1] = (undefined1 *)lVar18;
  apuStack_588[1] = puVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar24 = (undefined8 *)(puVar23 + -extraout_x8);
  uStack_2b8 = uStack_138;
  uStack_2c0 = uStack_140;
  uStack_2a8 = uStack_128;
  uStack_2b0 = uStack_130;
  uStack_298 = uStack_118;
  uStack_2a0 = uStack_120;
  uStack_28e = uStack_10e;
  uStack_296 = uStack_116;
  uStack_290 = uStack_110;
  uStack_2f8 = uStack_178;
  uStack_300 = uStack_180;
  uStack_2e8 = uStack_168;
  uStack_2e6 = uStack_166;
  uStack_2f0 = uStack_170;
  uStack_2d8 = uStack_158;
  uStack_2d6 = uStack_156;
  uStack_2e0 = uStack_160;
  uStack_2de = uStack_15e;
  uStack_2c8 = uStack_148;
  uStack_2d0 = uStack_150;
  lStack_338 = lStack_1b8;
  puStack_340 = puStack_1c0;
  uStack_328 = uStack_1a8;
  uStack_330 = uStack_1b0;
  uStack_318 = uStack_198;
  uStack_320 = uStack_1a0;
  uStack_308 = lStack_188;
  uStack_310 = puStack_190;
  apuStack_588[0] = (undefined *)puVar24;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = (long)puVar24 - uVar25;
  func_0x000100f83b2c(puVar23,lVar27,0x112d4fa48,&UNK_10d9159f8);
  lVar18 = alStack_5b0[2];
  uStack_378 = auStack_598;
  uStack_380 = alStack_5b0[2];
  uStack_370 = (undefined1)alStack_5b0[0];
  uStack_358 = (undefined1)param_4;
  uStack_357 = (undefined7)((ulong)param_4 >> 8);
  uStack_350 = (undefined1)param_5;
  uStack_34f = (undefined7)((ulong)param_5 >> 8);
  uStack_348 = 0;
  uVar22 = CONCAT71(uStack_36f,uStack_370);
  uStack_368 = uVar28;
  uStack_360 = param_3;
  puVar24[1] = auStack_598;
  *puVar24 = lVar18;
  puVar24[3] = uVar28;
  puVar24[2] = uVar22;
  uVar22 = uStack_360;
  puVar24[5] = CONCAT71(uStack_357,uStack_358);
  puVar24[4] = uVar22;
  uVar22 = CONCAT17(uStack_350,uStack_357);
  *(ulong *)((long)puVar24 + 0x31) = CONCAT17(uStack_348,uStack_34f);
  *(undefined8 *)((long)puVar24 + 0x29) = uVar22;
  uVar14 = uStack_2a0;
  uVar13 = uStack_2a8;
  uVar12 = uStack_2b0;
  uVar11 = uStack_2c0;
  uVar10 = uStack_2c8;
  uVar9 = uStack_2d0;
  uVar8 = uStack_2f0;
  uVar7 = uStack_2f8;
  uVar6 = uStack_300;
  uVar5 = uStack_308;
  uVar4 = uStack_310;
  uVar3 = uStack_318;
  uVar2 = uStack_320;
  uVar20 = uStack_328;
  uVar28 = uStack_330;
  lVar18 = lStack_338;
  puVar21 = puStack_340;
  uStack_258 = uStack_318;
  uStack_260 = uStack_320;
  uStack_248 = uStack_308;
  uStack_250 = uStack_310;
  lStack_278 = lStack_338;
  puStack_280 = puStack_340;
  uStack_268 = uStack_328;
  uStack_270 = uStack_330;
  uStack_208 = uStack_2c8;
  uStack_210 = uStack_2d0;
  uStack_238 = uStack_2f8;
  uStack_240 = uStack_300;
  uStack_230 = uStack_2f0;
  uStack_1ce = uStack_28e;
  uVar22 = CONCAT62(uStack_296,uStack_298);
  uStack_1e8 = uStack_2a8;
  uStack_1f0 = uStack_2b0;
  uStack_1e0 = uStack_2a0;
  uStack_1f8 = uStack_2b8;
  uStack_200 = uStack_2c0;
  puVar24[0x1b] = uStack_2b8;
  puVar24[0x1a] = uVar11;
  puVar24[0x1d] = uVar13;
  puVar24[0x1c] = uVar12;
  puVar24[0x1f] = uVar22;
  puVar24[0x1e] = uVar14;
  *(undefined8 *)((long)puVar24 + 0x102) = uStack_28e;
  *(ulong *)((long)puVar24 + 0xfa) = CONCAT26(uStack_290,uStack_296);
  puVar24[0x13] = uVar7;
  puVar24[0x12] = uVar6;
  puVar24[0x15] = CONCAT62(uStack_2e6,uStack_2e8);
  puVar24[0x14] = uVar8;
  puVar24[8] = 0;
  *(undefined1 *)(puVar24 + 9) = 1;
  puVar24[0x17] = CONCAT62(uStack_2d6,uStack_2d8);
  puVar24[0x16] = CONCAT62(uStack_2de,uStack_2e0);
  puVar24[0x19] = uVar10;
  puVar24[0x18] = uVar9;
  puVar24[0xb] = lVar18;
  puVar24[10] = puVar21;
  puVar24[0xd] = uVar20;
  puVar24[0xc] = uVar28;
  puVar24[0xf] = uVar3;
  puVar24[0xe] = uVar2;
  puVar24[0x11] = uVar5;
  puVar24[0x10] = uVar4;
  lVar18 = 0x112d4fa68;
  func_0x0001000285a8(0x112d4fa68,&UNK_10d915a18);
  func_0x000100f83b2c(lVar27,(undefined1 *)((long)puVar24 + (long)*(int *)(lVar18 + 0x50)),
                      0x112d4fa48,&UNK_10d9159f8);
  puVar21 = apuStack_588[3];
  func_0x000107c6157c(apuStack_588[3]);
  FUN_100f84200(&puStack_1c0,&puStack_440,0x112d4fa40,&UNK_10d9159f0);
  FUN_100f84200(&uStack_380,&puStack_440,0x112d4fa70,&UNK_10d915a20);
  FUN_100f84200(&puStack_280,&puStack_440,0x112d4fa40,&UNK_10d9159f0);
  func_0x000100f8409c(lVar27,0x112d4fa48,&UNK_10d9159f8);
  func_0x000100f84248(&puStack_340,0x112d4fa40,&UNK_10d9159f0);
  func_0x000107c61574(puVar21);
  lVar18 = 0x112d4f9e8;
  func_0x0001000285a8(0x112d4f9e8,&UNK_10d9159c0);
  alStack_5b0[2] = lVar27;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = lVar27 - extraout_x8_00;
  lVar19 = 0x112d4f9f0;
  func_0x0001000285a8(0x112d4f9f0,&UNK_10d9159c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar27 - extraout_x8_01;
  func_0x000100f83b2c(puVar24,lVar26,0x112d4f9f8,&UNK_10d9159d0);
  func_0x000107c6159c(lVar26,lVar19,0);
  uVar22 = 0x112d4fa00;
  func_0x000100f84008(0x112d4fa00,0x112d4f9f8,&UNK_10d9159d0,
                      PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8);
  func_0x000107c5f490(lVar27,lVar26,apuStack_5c0[1],PTR___s7SwiftUI9EmptyViewVN_110349a58,uVar22,
                      PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_110349a48);
  lVar19 = 0x112d4fa08;
  func_0x0001000285a8(0x112d4fa08,&UNK_10d9159d8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar27 - extraout_x8_02;
  func_0x000100f83b2c(lVar27,lVar26,0x112d4f9e8,&UNK_10d9159c0);
  func_0x000107c6159c(lVar26,lVar19,1);
  uVar22 = 0x112d4fa10;
  func_0x0001000285a8(0x112d4fa10,&UNK_10d9159e0);
  uVar20 = uVar22;
  func_0x000100f83930();
  uVar28 = uVar20;
  FUN_100f83a08();
  func_0x000107c5f490(alStack_568[2],lVar26,uVar22,lVar18,uVar20,uVar28);
  func_0x000100f84248(&puStack_1c0,0x112d4fa40,&UNK_10d9159f0);
  func_0x000107c61574(apuStack_588[3]);
  func_0x000100f8409c(lVar27,0x112d4f9e8,&UNK_10d9159c0);
  func_0x000100f8409c(apuStack_5c0[0],0x112d4fa48,&UNK_10d9159f8);
  func_0x000100f8409c(puVar24,0x112d4f9f8,&UNK_10d9159d0);
  return;
}



/* Entry: 100f7f638; end: 100f7fbef;  */

void FUN_100f7f638(ulong *param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong *unaff_x20;
  ulong uVar12;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  undefined *puStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  ulong uStack_230;
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
  undefined7 uStack_1d7;
  undefined8 uStack_1cf;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined *puStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined1 uStack_168;
  undefined1 uStack_167;
  undefined6 uStack_166;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined7 uStack_15e;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined6 uStack_f6;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined7 uStack_ee;
  undefined1 uStack_e7;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined1 uStack_78;
  undefined1 uStack_77;
  
  uStack_d8 = unaff_x20[1];
  uStack_e0 = *unaff_x20;
  uVar12 = 0x112d4f9d8;
  puVar10 = &UNK_10d9159a0;
  func_0x0001000285a8();
  func_0x000107c5f72c(&uStack_150);
  uVar6 = uStack_150;
  if (uStack_150 == 0) {
    func_0x000107c5f7ac();
    uStack_d8 = 2;
    uStack_e0 = 0xce;
    uStack_78 = 0;
    uVar7 = 0x112d4f518;
    uStack_d0 = uVar12;
    puStack_c8 = puVar10;
    func_0x0001000285a8(0x112d4f518,&UNK_10d9153e0);
    uVar8 = 0x112d4fb98;
    func_0x0001000285a8(0x112d4fb98,&UNK_10d916b80);
    uVar9 = uVar8;
    FUN_100f7912c();
    uVar11 = 0x112d4fb90;
    func_0x000100f84008(0x112d4fb90,0x112d4fb98,&UNK_10d916b80,&UNK_10d9166f0);
    func_0x000107c5f490(&uStack_230,&uStack_e0,uVar7,uVar8,uVar9,uVar11);
    uStack_178 = uStack_1e8;
    uStack_180 = uStack_1f0;
    uStack_170 = uStack_1e0;
    uStack_15f = (undefined1)uStack_1cf;
    uStack_15e = (undefined7)((ulong)uStack_1cf >> 8);
    uStack_167 = (undefined1)uStack_1d7;
    uStack_166 = (undefined6)((uint7)uStack_1d7 >> 8);
    uStack_1b8 = uStack_228;
    uStack_1c0 = uStack_230;
    puStack_1a8 = (undefined *)uStack_218;
    uStack_1b0 = uStack_220;
    uStack_198 = uStack_208;
    uStack_1a0 = uStack_210;
    uStack_188 = uStack_1f8;
    uStack_190 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    uStack_100 = uStack_1e0;
    uStack_148 = uStack_228;
    uStack_150 = uStack_230;
    puStack_138 = (undefined *)uStack_218;
    uStack_140 = uStack_220;
    uStack_128 = uStack_208;
    uStack_130 = uStack_210;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_e7 = 0;
    uVar7 = 0x112d4fb78;
    uStack_f7 = uStack_167;
    uStack_f6 = uStack_166;
    uStack_ef = uStack_15f;
    uStack_ee = uStack_15e;
    FUN_100f84200(&uStack_1c0,&uStack_e0,0x112d4fb78,&UNK_10d916b70);
    func_0x0001000285a8(0x112d4fb78,&UNK_10d916b70);
    uVar8 = 0x112d4fb80;
    func_0x0001000285a8(0x112d4fb80,&UNK_10d915c10);
    uVar11 = uVar8;
    FUN_100f83ed8();
    uVar9 = uVar11;
    func_0x000100f83f70();
    func_0x000107c5f490(&uStack_e0,&uStack_150,uVar7,uVar8,uVar11,uVar9);
  }
  else {
    if (uStack_150 == 1) {
      uVar6 = 0x6567616d49206f4e;
      uVar11 = 0xee00646e756f4620;
      func_0x000107c5f414();
      param_4 = param_4 & 1;
      func_0x000107c5f5d8();
      uVar12 = uVar6;
      uVar8 = uVar11;
      func_0x000107c5f7ac();
      uStack_140 = CONCAT71(uStack_140._1_7_,param_4);
      uStack_e7 = 1;
      uVar7 = 0x112d4fb78;
      uStack_150 = uVar6;
      uStack_148 = uVar11;
      puStack_138 = (undefined *)param_5;
      uStack_130 = uVar12;
      uStack_128 = uVar8;
      func_0x0001000285a8(0x112d4fb78,&UNK_10d916b70);
      uVar8 = 0x112d4fb80;
      func_0x0001000285a8(0x112d4fb80,&UNK_10d915c10);
      uVar11 = uVar8;
      FUN_100f83ed8();
      uVar9 = uVar11;
      func_0x000100f83f70();
      func_0x000107c5f490(&uStack_e0,&uStack_150,uVar7,uVar8,uVar11,uVar9);
      goto LAB_100f7fb48;
    }
    if (uStack_150 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uStack_150 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = uStack_150;
      if (-1 < (long)uStack_150) {
        uVar12 = uStack_150 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    uStack_148 = unaff_x20[3];
    uStack_150 = unaff_x20[2];
    uStack_140 = unaff_x20[4];
    func_0x0001000285a8(0x112d4f558,&UNK_10d915410);
    func_0x000107c5f734(&uStack_e0);
    uVar4 = uStack_d0;
    uVar3 = uStack_d8;
    uVar2 = uStack_e0;
    uVar5 = puStack_c8._0_1_;
    puVar10 = &UNK_11036fdb8;
    func_0x000107c613fc(&UNK_11036fdb8,0x18,7);
    *(ulong *)(puVar10 + 0x10) = uVar6;
    puVar1 = PTR___sSdN_11034dd90;
    uStack_150 = 0;
    func_0x000107c5f728(&uStack_e0,&uStack_150,PTR___sSdN_11034dd90);
    uStack_150 = 0;
    func_0x000107c5f728(&uStack_d0,&uStack_150,puVar1);
    uStack_150 = uStack_150 & 0xffffffffffffff00;
    func_0x000107c5f728(&uStack_c0,&uStack_150,PTR___sSbN_11034dd40);
    uStack_90 = CONCAT71(uStack_90._1_7_,uVar5);
    uStack_88 = 0x404c;
    uStack_86 = 0x100f8;
    uStack_80 = SUB82(puVar10,0);
    uStack_7e = (undefined6)((ulong)puVar10 >> 0x10);
    uStack_298 = uStack_d8;
    uStack_2a0 = uStack_e0;
    puStack_288 = puStack_c8;
    uStack_290 = uStack_d0;
    uStack_278 = uStack_b8;
    uStack_280 = uStack_c0;
    uStack_268 = uVar2;
    pcStack_248 = FUN_100f8404c;
    uStack_258 = uVar4;
    uStack_260 = uVar3;
    uStack_250 = uStack_90;
    uStack_98 = uVar4;
    uStack_a0 = uVar3;
    uStack_a8 = uVar2;
    uStack_78 = 1;
    uVar7 = 0x112d4fb98;
    uStack_270 = uVar12;
    puStack_240 = puVar10;
    uStack_b0 = uVar12;
    FUN_100f84200(&uStack_2a0,&uStack_150,0x112d4fb98,&UNK_10d916b80);
    FUN_100f84200(&uStack_2a0,&uStack_150,0x112d4fb98,&UNK_10d916b80);
    uVar8 = 0x112d4f518;
    func_0x0001000285a8(0x112d4f518,&UNK_10d9153e0);
    func_0x0001000285a8(0x112d4fb98,&UNK_10d916b80);
    uVar9 = uVar7;
    FUN_100f7912c();
    uVar11 = 0x112d4fb90;
    func_0x000100f84008(0x112d4fb90,0x112d4fb98,&UNK_10d916b80,&UNK_10d9166f0);
    func_0x000107c5f490(&uStack_230,&uStack_e0,uVar8,uVar7,uVar9,uVar11);
    uStack_178 = uStack_1e8;
    uStack_180 = uStack_1f0;
    uStack_170 = uStack_1e0;
    uStack_15f = (undefined1)uStack_1cf;
    uStack_15e = (undefined7)((ulong)uStack_1cf >> 8);
    uStack_167 = (undefined1)uStack_1d7;
    uStack_166 = (undefined6)((uint7)uStack_1d7 >> 8);
    uStack_1b8 = uStack_228;
    uStack_1c0 = uStack_230;
    puStack_1a8 = (undefined *)uStack_218;
    uStack_1b0 = uStack_220;
    uStack_198 = uStack_208;
    uStack_1a0 = uStack_210;
    uStack_188 = uStack_1f8;
    uStack_190 = uStack_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    uStack_100 = uStack_1e0;
    uStack_148 = uStack_228;
    uStack_150 = uStack_230;
    puStack_138 = (undefined *)uStack_218;
    uStack_140 = uStack_220;
    uStack_128 = uStack_208;
    uStack_130 = uStack_210;
    uStack_118 = uStack_1f8;
    uStack_120 = uStack_200;
    uStack_e7 = 0;
    uVar7 = 0x112d4fb78;
    uStack_f7 = uStack_167;
    uStack_f6 = uStack_166;
    uStack_ef = uStack_15f;
    uStack_ee = uStack_15e;
    FUN_100f84200(&uStack_1c0,&uStack_e0,0x112d4fb78,&UNK_10d916b70);
    func_0x0001000285a8(0x112d4fb78,&UNK_10d916b70);
    uVar8 = 0x112d4fb80;
    func_0x0001000285a8(0x112d4fb80,&UNK_10d915c10);
    uVar11 = uVar8;
    FUN_100f83ed8();
    uVar9 = uVar11;
    func_0x000100f83f70();
    func_0x000107c5f490(&uStack_e0,&uStack_150,uVar7,uVar8,uVar11,uVar9);
    func_0x000100f84248(&uStack_2a0,0x112d4fb98,&UNK_10d916b80);
    func_0x000100f84248(&uStack_2a0,0x112d4fb98,&UNK_10d916b80);
  }
  func_0x000100f84248(&uStack_230,0x112d4fb78,&UNK_10d916b70);
LAB_100f7fb48:
  uStack_178 = uStack_98;
  uStack_180 = uStack_a0;
  uStack_168 = (undefined1)uStack_88;
  uStack_167 = (undefined1)((ushort)uStack_88 >> 8);
  uStack_170 = uStack_90;
  uStack_15e = CONCAT16(uStack_78,uStack_7e);
  uStack_166 = uStack_86;
  uStack_160 = (undefined1)uStack_80;
  uStack_15f = (undefined1)((ushort)uStack_80 >> 8);
  uStack_1b8 = uStack_d8;
  uStack_1c0 = uStack_e0;
  puStack_1a8 = puStack_c8;
  uStack_1b0 = uStack_d0;
  uStack_198 = uStack_b8;
  uStack_1a0 = uStack_c0;
  uStack_188 = uStack_a8;
  uStack_190 = uStack_b0;
  param_1[1] = uStack_d8;
  *param_1 = uStack_e0;
  param_1[3] = (ulong)puStack_c8;
  param_1[2] = uStack_d0;
  *(ulong *)((long)param_1 + 0x62) = CONCAT17(uStack_77,uStack_15e);
  *(ulong *)((long)param_1 + 0x5a) = CONCAT26(uStack_80,uStack_86);
  param_1[5] = uStack_b8;
  param_1[4] = uStack_c0;
  param_1[7] = uStack_a8;
  param_1[6] = uStack_b0;
  param_1[9] = uStack_98;
  param_1[8] = uStack_a0;
  param_1[0xb] = CONCAT62(uStack_86,uStack_88);
  param_1[10] = uStack_90;
  uStack_128 = uStack_b8;
  uStack_130 = uStack_c0;
  uStack_118 = uStack_a8;
  uStack_120 = uStack_b0;
  uStack_108 = uStack_98;
  uStack_110 = uStack_a0;
  uStack_100 = uStack_90;
  uStack_f6 = uStack_86;
  uStack_148 = uStack_d8;
  uStack_150 = uStack_e0;
  puStack_138 = puStack_c8;
  uStack_140 = uStack_d0;
  uStack_f8 = uStack_168;
  uStack_f7 = uStack_167;
  uStack_f0 = uStack_160;
  uStack_ef = uStack_15f;
  uStack_ee = uStack_15e;
  FUN_100f84200(&uStack_1c0,&uStack_230,0x112d4fa90,&UNK_10d915a48);
  func_0x000100f84248(&uStack_150,0x112d4fa90,&UNK_10d915a48);
  return;
}



/* Entry: 100f7fbf0; end: 100f7fd1f;  */

ulong FUN_100f7fbf0(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  ulong uVar4;
  ulong uStack_60;
  char cStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  func_0x0001000285a8(0x112d4f9d8,&UNK_10d9159a0);
  func_0x000107c5f72c(&uStack_60);
  uVar1 = uStack_60;
  if (1 < uStack_60) {
    uStack_48 = unaff_x20[3];
    uStack_50 = unaff_x20[2];
    uStack_40 = unaff_x20[4];
    func_0x0001000285a8(0x112d4f558,&UNK_10d915410);
    func_0x000107c5f72c(&uStack_60);
    if ((cStack_58 != '\x01') && (-1 < (long)uStack_60)) {
      uVar4 = uVar1 & 0xffffffffffffff8;
      if (uVar1 >> 0x3e == 0) {
        uVar3 = *(ulong *)(uVar4 + 0x10);
      }
      else {
        uVar3 = uVar1;
        if (-1 < (long)uVar1) {
          uVar3 = uVar4;
        }
        func_0x000107c60480();
      }
      if ((long)uStack_60 < (long)uVar3) {
        if ((uVar1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar4 + 0x10) <= uStack_60) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100f7fd20);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(uVar1 + uStack_60 * 8 + 0x20);
          func_0x000107c61174(uVar4);
          uStack_60 = uVar4;
        }
        else {
          FUN_100f95e24(uStack_60,uVar1);
        }
        FUN_100f83834(uVar1);
        return uStack_60;
      }
    }
  }
  FUN_100f83834(uVar1);
  return 0;
}



/* Entry: 100f7fd20; end: 100f7fe33;  */

void FUN_100f7fd20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_1d0;
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
  long lStack_150;
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
  long lStack_d0;
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
  
  uVar2 = *(undefined8 *)(param_5 + 0xb8);
  lVar1 = *(long *)(param_5 + 0xc0);
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 0x40))(param_3,param_4,uVar2,lVar1);
  uStack_c8 = *(undefined8 *)(param_5 + 0x80);
  lStack_d0 = *(long *)(param_5 + 0x78);
  func_0x0001000285a8(0x112d4f9a8,&UNK_10d915970);
  func_0x000107c5f72c(&lStack_150);
  lVar1 = lStack_150;
  if (lStack_150 != 0) {
    func_0x000103ba4930(&lStack_150,param_1,param_2);
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_1c8 = uStack_148;
    lStack_1d0 = lStack_150;
    uStack_1b8 = uStack_138;
    uStack_1c0 = uStack_140;
    uStack_1a8 = uStack_128;
    uStack_1b0 = uStack_130;
    uStack_198 = uStack_118;
    uStack_1a0 = uStack_120;
    func_0x000100f75a34(&lStack_1d0);
    uStack_88 = uStack_188;
    uStack_90 = uStack_190;
    uStack_78 = uStack_178;
    uStack_80 = uStack_180;
    uStack_68 = uStack_168;
    uStack_70 = uStack_170;
    uStack_58 = uStack_158;
    uStack_60 = uStack_160;
    uStack_c8 = uStack_1c8;
    lStack_d0 = lStack_1d0;
    uStack_b8 = uStack_1b8;
    uStack_c0 = uStack_1c0;
    uStack_a8 = uStack_1a8;
    uStack_b0 = uStack_1b0;
    uStack_98 = uStack_198;
    uStack_a0 = uStack_1a0;
    func_0x000103ba1ea0(&lStack_d0);
    FUN_100f7307c(&lStack_150);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100f7fe34; end: 100f80533;  */

void FUN_100f7fe34(undefined8 *param_1)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long unaff_x20;
  long lVar12;
  undefined8 uStack_6f0;
  undefined1 auStack_6e8 [8];
  undefined8 uStack_6e0;
  undefined1 auStack_6d8 [8];
  long alStack_6d0 [2];
  undefined1 auStack_6c0 [8];
  undefined1 *puStack_6b8;
  undefined1 *puStack_6b0;
  undefined8 uStack_6a8;
  undefined2 uStack_6a0;
  undefined2 uStack_698;
  undefined6 uStack_696;
  undefined2 uStack_690;
  undefined6 uStack_68e;
  undefined2 uStack_688;
  undefined6 uStack_686;
  undefined2 uStack_680;
  undefined6 uStack_67e;
  undefined2 uStack_678;
  undefined6 uStack_676;
  undefined2 uStack_670;
  undefined6 uStack_66e;
  undefined2 uStack_668;
  undefined6 uStack_666;
  undefined2 uStack_660;
  undefined6 uStack_65e;
  undefined2 uStack_658;
  undefined6 uStack_656;
  undefined2 uStack_650;
  undefined6 uStack_64e;
  undefined2 uStack_648;
  undefined6 uStack_646;
  undefined2 uStack_640;
  undefined6 uStack_63e;
  undefined2 uStack_638;
  undefined6 uStack_636;
  undefined2 uStack_630;
  undefined6 uStack_62e;
  undefined1 *puStack_628;
  undefined8 uStack_620;
  undefined2 uStack_618;
  undefined8 uStack_616;
  undefined8 uStack_60e;
  undefined8 uStack_606;
  undefined8 uStack_5fe;
  undefined8 uStack_5f6;
  undefined8 uStack_5ee;
  undefined8 uStack_5e6;
  undefined8 uStack_5de;
  undefined8 uStack_5d6;
  undefined8 uStack_5ce;
  undefined8 uStack_5c6;
  undefined8 uStack_5be;
  undefined8 uStack_5b6;
  undefined6 uStack_5ae;
  undefined2 uStack_5a8;
  undefined6 uStack_5a6;
  undefined1 *puStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined1 uStack_518;
  undefined7 uStack_517;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined1 uStack_4f0;
  undefined1 *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 uStack_430;
  undefined1 *puStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
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
  undefined2 uStack_378;
  undefined6 uStack_376;
  undefined1 uStack_370;
  undefined1 uStack_36f;
  undefined6 uStack_36e;
  undefined1 uStack_368;
  undefined1 uStack_367;
  undefined1 *puStack_360;
  ulong uStack_358;
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
  undefined2 uStack_2b8;
  undefined6 uStack_2b6;
  undefined2 uStack_2b0;
  undefined8 uStack_2ae;
  undefined6 uStack_2a6;
  undefined2 uStack_2a0;
  undefined6 uStack_29e;
  undefined2 uStack_298;
  undefined6 uStack_296;
  undefined2 uStack_290;
  undefined6 uStack_28e;
  undefined2 uStack_288;
  undefined6 uStack_286;
  undefined2 uStack_280;
  undefined6 uStack_27e;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined6 uStack_24e;
  undefined2 uStack_248;
  undefined6 uStack_246;
  undefined2 uStack_240;
  undefined6 uStack_23e;
  undefined2 uStack_238;
  undefined6 uStack_236;
  undefined1 *puStack_230;
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a0 [112];
  undefined1 *puStack_130;
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
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  
  lVar3 = 0;
  func_0x000107c5f6f0();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_6c0 + lVar1;
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x68);
  puStack_130 = *(undefined1 **)(unaff_x20 + 0x60);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x70);
  puVar4 = (undefined1 *)0x112d4f9d0;
  func_0x0001000285a8(0x112d4f9d0,&UNK_10d915998);
  func_0x000107c5f72c(&puStack_360);
  uVar10 = uStack_358 & 0xff;
  if ((char)uStack_358 == -1) {
LAB_100f8008c:
    func_0x000100f809e8();
    if (puVar4 == (undefined1 *)0x0) {
      FUN_100f841d4(&puStack_130);
      goto LAB_100f804c8;
    }
    func_0x000107c61174();
    puStack_6b8 = puVar4;
    func_0x000107c5f6e8();
    (**(code **)(lVar12 + 0x68))
              (puVar7,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_110349738
               ,lVar3);
    puVar6 = puVar7;
    func_0x000107c5f6fc(0,0,0,0,puVar7,puVar4);
    func_0x000107c61574(puVar4);
    (**(code **)(lVar12 + 8))();
    func_0x000107c5f7ac();
    *(undefined1 **)((long)alStack_6d0 + lVar1) = puVar7;
    *(long *)((long)alStack_6d0 + lVar1 + 8) = lVar3;
    auStack_6d8[lVar1] = 0;
    *(undefined8 *)((long)&uStack_6e0 + lVar1) = 0x4070400000000000;
    auStack_6e8[lVar1] = 1;
    *(undefined8 *)((long)&uStack_6f0 + lVar1) = 0;
    uVar2 = 0;
    func_0x000107c5f388(auStack_1a0,0,1,0,1,0,1,0,1);
    uStack_268 = (undefined2)auStack_1a0._56_8_;
    uStack_266 = SUB86(auStack_1a0._56_8_,2);
    uStack_270 = (undefined2)auStack_1a0._48_8_;
    uStack_26e = SUB86(auStack_1a0._48_8_,2);
    uStack_258 = (undefined2)auStack_1a0._72_8_;
    uStack_256 = SUB86(auStack_1a0._72_8_,2);
    uStack_260 = (undefined2)auStack_1a0._64_8_;
    uStack_25e = SUB86(auStack_1a0._64_8_,2);
    uStack_248 = (undefined2)auStack_1a0._88_8_;
    uStack_246 = SUB86(auStack_1a0._88_8_,2);
    uStack_250 = (undefined2)auStack_1a0._80_8_;
    uStack_24e = SUB86(auStack_1a0._80_8_,2);
    uStack_238 = (undefined2)auStack_1a0._104_8_;
    uStack_236 = SUB86(auStack_1a0._104_8_,2);
    uStack_240 = (undefined2)auStack_1a0._96_8_;
    uStack_23e = SUB86(auStack_1a0._96_8_,2);
    uStack_298 = (undefined2)auStack_1a0._8_8_;
    uStack_296 = SUB86(auStack_1a0._8_8_,2);
    uStack_2a0 = (undefined2)auStack_1a0._0_8_;
    uStack_29e = SUB86(auStack_1a0._0_8_,2);
    uStack_288 = (undefined2)auStack_1a0._24_8_;
    uStack_286 = SUB86(auStack_1a0._24_8_,2);
    uStack_290 = (undefined2)auStack_1a0._16_8_;
    uStack_28e = SUB86(auStack_1a0._16_8_,2);
    uStack_278 = (undefined2)auStack_1a0._40_8_;
    uStack_276 = SUB86(auStack_1a0._40_8_,2);
    uStack_280 = (undefined2)auStack_1a0._32_8_;
    uStack_27e = SUB86(auStack_1a0._32_8_,2);
    func_0x000107c5f568();
    uStack_6a8 = 0;
    uStack_6a0 = 1;
    uStack_696 = uStack_29e;
    uStack_690 = uStack_298;
    uStack_698 = uStack_2a0;
    uStack_60e = CONCAT26(uStack_298,uStack_29e);
    uStack_616 = CONCAT26(uStack_2a0,uStack_2a6);
    uStack_5fe = CONCAT26(uStack_288,uStack_28e);
    uStack_606 = CONCAT26(uStack_290,uStack_296);
    uStack_686 = uStack_28e;
    uStack_680 = uStack_288;
    uStack_68e = uStack_296;
    uStack_688 = uStack_290;
    uStack_5ce = CONCAT26(uStack_258,uStack_25e);
    uStack_5d6 = CONCAT26(uStack_260,uStack_266);
    uStack_646 = uStack_24e;
    uStack_640 = uStack_248;
    uStack_64e = uStack_256;
    uStack_648 = uStack_250;
    uStack_5de = CONCAT26(uStack_268,uStack_26e);
    uStack_5e6 = CONCAT26(uStack_270,uStack_276);
    uStack_656 = uStack_25e;
    uStack_650 = uStack_258;
    uStack_65e = uStack_266;
    uStack_658 = uStack_260;
    uStack_5be = CONCAT26(uStack_248,uStack_24e);
    uStack_5c6 = CONCAT26(uStack_250,uStack_256);
    uStack_636 = uStack_23e;
    uStack_63e = uStack_246;
    uStack_638 = uStack_240;
    uStack_676 = uStack_27e;
    uStack_670 = uStack_278;
    uStack_67e = uStack_286;
    uStack_678 = uStack_280;
    uStack_5ee = CONCAT26(uStack_278,uStack_27e);
    uStack_5f6 = CONCAT26(uStack_280,uStack_286);
    uStack_666 = uStack_26e;
    uStack_660 = uStack_268;
    uStack_66e = uStack_276;
    uStack_668 = uStack_270;
    uStack_1c8 = CONCAT62(uStack_24e,uStack_250);
    uStack_1d0 = CONCAT62(uStack_256,uStack_258);
    uStack_1b8 = CONCAT62(uStack_23e,uStack_240);
    uStack_1c0 = CONCAT62(uStack_246,uStack_248);
    uStack_208 = CONCAT62(uStack_28e,uStack_290);
    uStack_210 = CONCAT62(uStack_296,uStack_298);
    uStack_1f8 = CONCAT62(uStack_27e,uStack_280);
    uStack_200 = CONCAT62(uStack_286,uStack_288);
    uStack_1e8 = CONCAT62(uStack_26e,uStack_270);
    uStack_1f0 = CONCAT62(uStack_276,uStack_278);
    uStack_1d8 = CONCAT62(uStack_25e,uStack_260);
    uStack_1e0 = CONCAT62(uStack_266,uStack_268);
    uStack_218 = CONCAT62(uStack_29e,uStack_2a0);
    uStack_220 = CONCAT62(uStack_2a6,1);
    uStack_228 = 0;
    uStack_5b6 = CONCAT26(uStack_240,uStack_246);
    uStack_5ae = uStack_23e;
    uStack_1b0 = CONCAT62(uStack_236,uStack_238);
    uStack_630 = uStack_238;
    uStack_62e = uStack_236;
    uStack_620 = 0;
    uStack_618 = 1;
    uStack_5a8 = uStack_238;
    uStack_5a6 = uStack_236;
    puStack_6b0 = puVar6;
    puStack_628 = puVar6;
    puStack_230 = puVar6;
    FUN_100f84200(&puStack_6b0,&puStack_130,0x112d4fbe8,&UNK_10d915c68);
    func_0x000100f84248(&puStack_628,0x112d4fbe8,&UNK_10d915c68);
    uStack_538 = uStack_1c8;
    uStack_540 = uStack_1d0;
    uStack_528 = uStack_1b8;
    uStack_530 = uStack_1c0;
    uStack_578 = uStack_208;
    uStack_580 = uStack_210;
    uStack_568 = uStack_1f8;
    uStack_570 = uStack_200;
    uStack_558 = uStack_1e8;
    uStack_560 = uStack_1f0;
    uStack_548 = uStack_1d8;
    uStack_550 = uStack_1e0;
    uStack_598 = uStack_228;
    puStack_5a0 = puStack_230;
    uStack_588 = uStack_218;
    uStack_590 = uStack_220;
    uStack_478 = uStack_1c8;
    uStack_480 = uStack_1d0;
    uStack_468 = uStack_1b8;
    uStack_470 = uStack_1c0;
    uStack_4b8 = uStack_208;
    uStack_4c0 = uStack_210;
    uStack_4a8 = uStack_1f8;
    uStack_4b0 = uStack_200;
    uStack_520 = uStack_1b0;
    uStack_498 = uStack_1e8;
    uStack_4a0 = uStack_1f0;
    uStack_488 = uStack_1d8;
    uStack_490 = uStack_1e0;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4f0 = 1;
    uStack_460 = uStack_1b0;
    uStack_4d8 = uStack_228;
    puStack_4e0 = puStack_230;
    uStack_4c8 = uStack_218;
    uStack_4d0 = uStack_220;
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_430 = 1;
    uVar8 = 0x112d4fbf0;
    uStack_518 = uVar2;
    uStack_458 = uVar2;
    FUN_100f84200(&puStack_5a0,&puStack_130,0x112d4fbf0,&UNK_10d915c70);
    func_0x000100f84248(&puStack_4e0,0x112d4fbf0,&UNK_10d915c70);
    uStack_398 = CONCAT71(uStack_517,uStack_518);
    uStack_3a0 = uStack_520;
    uStack_388 = uStack_508;
    uStack_390 = uStack_510;
    uStack_378 = (undefined2)uStack_4f8;
    uStack_376 = (undefined6)((ulong)uStack_4f8 >> 0x10);
    uStack_380 = uStack_500;
    uStack_370 = uStack_4f0;
    uStack_3d8 = uStack_558;
    uStack_3e0 = uStack_560;
    uStack_3c8 = uStack_548;
    uStack_3d0 = uStack_550;
    uStack_3b8 = uStack_538;
    uStack_3c0 = uStack_540;
    uStack_3a8 = uStack_528;
    uStack_3b0 = uStack_530;
    uStack_418 = uStack_598;
    puStack_420 = puStack_5a0;
    uStack_408 = uStack_588;
    uStack_410 = uStack_590;
    uStack_3f8 = uStack_578;
    uStack_400 = uStack_580;
    uStack_3e8 = uStack_568;
    uStack_3f0 = uStack_570;
    FUN_100f84288(&puStack_420);
    uStack_2d8 = uStack_398;
    uStack_2e0 = uStack_3a0;
    uStack_2c8 = uStack_388;
    uStack_2d0 = uStack_390;
    uStack_2b8 = uStack_378;
    uStack_2c0 = uStack_380;
    uStack_2b6 = uStack_376;
    uStack_2b0 = (undefined2)(CONCAT17(uStack_36f,CONCAT16(uStack_370,uStack_376)) >> 0x30);
    uStack_318 = uStack_3d8;
    uStack_320 = uStack_3e0;
    uStack_308 = uStack_3c8;
    uStack_310 = uStack_3d0;
    uStack_2f8 = uStack_3b8;
    uStack_300 = uStack_3c0;
    uStack_2e8 = uStack_3a8;
    uStack_2f0 = uStack_3b0;
    uStack_358 = uStack_418;
    puStack_360 = puStack_420;
    uStack_348 = uStack_408;
    uStack_350 = uStack_410;
    uStack_338 = uStack_3f8;
    uStack_340 = uStack_400;
    uStack_328 = uStack_3e8;
    uStack_330 = uStack_3f0;
    uVar5 = 0x112d4fbf8;
    func_0x0001000285a8(0x112d4fbf8,&UNK_10d915c78);
    func_0x0001000285a8(0x112d4fbf0,&UNK_10d915c70);
    uVar11 = uVar8;
    FUN_100f84294();
    uVar9 = uVar11;
    func_0x000100f8441c();
    func_0x000107c5f490(&puStack_130,&puStack_360,uVar5,uVar8,uVar11,uVar9);
    func_0x000107c61170(puStack_6b8);
    uStack_2d8 = uStack_a8;
    uStack_2e0 = uStack_b0;
    uStack_2c8 = uStack_98;
    uStack_2d0 = uStack_a0;
    uStack_2b8 = uStack_88;
    uStack_2c0 = uStack_90;
    uStack_2ae = uStack_7e;
    uStack_2b6 = uStack_86;
    uStack_2b0 = uStack_80;
    uStack_318 = uStack_e8;
    uStack_320 = uStack_f0;
    uStack_308 = uStack_d8;
    uStack_310 = uStack_e0;
    uStack_2f8 = uStack_c8;
    uStack_300 = uStack_d0;
    uStack_2e8 = uStack_b8;
    uStack_2f0 = uStack_c0;
    uStack_358 = uStack_128;
    puStack_360 = puStack_130;
    uStack_348 = uStack_118;
    uStack_350 = uStack_120;
    uStack_338 = uStack_108;
    uStack_340 = uStack_110;
    uStack_328 = uStack_f8;
    uStack_330 = uStack_100;
    FUN_100f8457c(&puStack_360);
    uStack_a8 = uStack_2d8;
    uStack_b0 = uStack_2e0;
    uStack_98 = uStack_2c8;
    uStack_a0 = uStack_2d0;
    uStack_88 = uStack_2b8;
    uStack_90 = uStack_2c0;
    uStack_86 = uStack_2b6;
    uStack_80 = uStack_2b0;
  }
  else {
    if (((char)uStack_358 != '\x03') || (puStack_360 != (undefined1 *)0x1)) {
      FUN_100f83aa0();
      puVar4 = puStack_360;
      goto LAB_100f8008c;
    }
    func_0x000107c5f7ac();
    *(undefined1 **)((long)alStack_6d0 + lVar1) = puStack_360;
    *(ulong *)((long)alStack_6d0 + lVar1 + 8) = uVar10;
    auStack_6d8[lVar1] = 0;
    *(undefined8 *)((long)&uStack_6e0 + lVar1) = 0x4070400000000000;
    auStack_6e8[lVar1] = 1;
    *(undefined8 *)((long)&uStack_6f0 + lVar1) = 0;
    uVar5 = 0;
    uVar11 = 1;
    func_0x000107c5f388(&puStack_420,0,1,0,1,0,1,0,1);
    func_0x000107c5f7ac();
    uVar8 = uVar5;
    func_0x000107c5f568();
    uStack_3a8 = 2;
    uStack_3b0 = 0xce;
    uStack_390 = CONCAT71(uStack_390._1_7_,(char)uVar8);
    uStack_380 = 0;
    uStack_388 = 0;
    uStack_370 = 0;
    uStack_36f = 0;
    uStack_36e = 0;
    uStack_378 = 0;
    uStack_376 = 0;
    uStack_368 = 1;
    uStack_3a0 = uVar5;
    uStack_398 = uVar11;
    FUN_100f8457c(&puStack_420);
    uStack_2d8 = uStack_398;
    uStack_2e0 = uStack_3a0;
    uStack_2c8 = uStack_388;
    uStack_2d0 = uStack_390;
    uStack_2b8 = uStack_378;
    uStack_2c0 = uStack_380;
    uStack_2ae = CONCAT17(uStack_367,CONCAT16(uStack_368,uStack_36e));
    uStack_2b6 = uStack_376;
    uStack_2b0 = (undefined2)(CONCAT17(uStack_36f,CONCAT16(uStack_370,uStack_376)) >> 0x30);
    uStack_318 = uStack_3d8;
    uStack_320 = uStack_3e0;
    uStack_308 = uStack_3c8;
    uStack_310 = uStack_3d0;
    uStack_2f8 = uStack_3b8;
    uStack_300 = uStack_3c0;
    uStack_2e8 = uStack_3a8;
    uStack_2f0 = uStack_3b0;
    uStack_358 = uStack_418;
    puStack_360 = puStack_420;
    uStack_348 = uStack_408;
    uStack_350 = uStack_410;
    uStack_338 = uStack_3f8;
    uStack_340 = uStack_400;
    uStack_328 = uStack_3e8;
    uStack_330 = uStack_3f0;
    uVar8 = 0x112d4fbf8;
    func_0x0001000285a8(0x112d4fbf8,&UNK_10d915c78);
    uVar5 = 0x112d4fbf0;
    func_0x0001000285a8(0x112d4fbf0,&UNK_10d915c70);
    uVar11 = uVar5;
    FUN_100f84294();
    uVar9 = uVar11;
    func_0x000100f8441c();
    func_0x000107c5f490(&puStack_130,&puStack_360,uVar8,uVar5,uVar11,uVar9);
    uStack_2d8 = uStack_a8;
    uStack_2e0 = uStack_b0;
    uStack_2c8 = uStack_98;
    uStack_2d0 = uStack_a0;
    uStack_2b8 = uStack_88;
    uStack_2c0 = uStack_90;
    uStack_2ae = uStack_7e;
    uStack_2b6 = uStack_86;
    uStack_2b0 = uStack_80;
    uStack_318 = uStack_e8;
    uStack_320 = uStack_f0;
    uStack_308 = uStack_d8;
    uStack_310 = uStack_e0;
    uStack_2f8 = uStack_c8;
    uStack_300 = uStack_d0;
    uStack_2e8 = uStack_b8;
    uStack_2f0 = uStack_c0;
    uStack_358 = uStack_128;
    puStack_360 = puStack_130;
    uStack_348 = uStack_118;
    uStack_350 = uStack_120;
    uStack_338 = uStack_108;
    uStack_340 = uStack_110;
    uStack_328 = uStack_f8;
    uStack_330 = uStack_100;
    FUN_100f8457c(&puStack_360);
    uStack_a8 = uStack_2d8;
    uStack_b0 = uStack_2e0;
    uStack_98 = uStack_2c8;
    uStack_a0 = uStack_2d0;
    uStack_88 = uStack_2b8;
    uStack_90 = uStack_2c0;
    uStack_86 = uStack_2b6;
    uStack_80 = uStack_2b0;
  }
  uStack_e8 = uStack_318;
  uStack_f0 = uStack_320;
  uStack_d8 = uStack_308;
  uStack_e0 = uStack_310;
  uStack_c8 = uStack_2f8;
  uStack_d0 = uStack_300;
  uStack_b8 = uStack_2e8;
  uStack_c0 = uStack_2f0;
  uStack_128 = uStack_358;
  puStack_130 = puStack_360;
  uStack_118 = uStack_348;
  uStack_120 = uStack_350;
  uStack_108 = uStack_338;
  uStack_110 = uStack_340;
  uStack_f8 = uStack_328;
  uStack_100 = uStack_330;
  uStack_7e = uStack_2ae;
LAB_100f804c8:
  param_1[0x11] = uStack_a8;
  param_1[0x10] = uStack_b0;
  param_1[0x13] = uStack_98;
  param_1[0x12] = uStack_a0;
  param_1[0x15] = CONCAT62(uStack_86,uStack_88);
  param_1[0x14] = uStack_90;
  *(undefined8 *)((long)param_1 + 0xb2) = uStack_7e;
  *(ulong *)((long)param_1 + 0xaa) = CONCAT26(uStack_80,uStack_86);
  param_1[9] = uStack_e8;
  param_1[8] = uStack_f0;
  param_1[0xb] = uStack_d8;
  param_1[10] = uStack_e0;
  param_1[0xd] = uStack_c8;
  param_1[0xc] = uStack_d0;
  param_1[0xf] = uStack_b8;
  param_1[0xe] = uStack_c0;
  param_1[1] = uStack_128;
  *param_1 = puStack_130;
  param_1[3] = uStack_118;
  param_1[2] = uStack_120;
  param_1[5] = uStack_108;
  param_1[4] = uStack_110;
  param_1[7] = uStack_f8;
  param_1[6] = uStack_100;
  return;
}



/* Entry: 100f80534; end: 100f80657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f80534(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  FUN_100f80658();
  lVar5 = *(long *)(param_1 + 0x88);
  uVar8 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(undefined1 *)(param_1 + 0x98);
  uVar3 = 0;
  FUN_100f8b870(0);
  uVar4 = 0x112d4f9e0;
  FUN_100f838f0(0x112d4f9e0,FUN_100f8b870,&UNK_10d916210);
  func_0x000107c5f2b0(lVar5,uVar8,uVar2,uVar3,uVar4);
  plVar6 = *(long **)(param_1 + 0xb8);
  lVar1 = *(long *)(param_1 + 0xc0);
  func_0x000107c614f0();
  (**(code **)(lVar1 + 0x10))();
  puVar7 = &UNK_11036fc00;
  func_0x000107c613fc(&UNK_11036fc00,0x18,7);
  func_0x000107c61644(puVar7 + 0x10,lVar5);
  uVar4 = 0x100f83844;
  puVar9 = puVar7;
  (**(code **)(*plVar6 + 0x60))(0x100f83844);
  func_0x000107c61574(puVar7);
  uVar8 = uVar4;
  func_0x000107c614f0(uVar4);
  (**(code **)(puVar9 + 0x10))(*(undefined8 *)(lVar5 + _DAT_112d4fef0),uVar8,puVar9);
  func_0x000107c61574(lVar5);
  func_0x000107c61574(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar4);
  return;
}



/* Entry: 100f80658; end: 100f808d7;  */

void FUN_100f80658(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  byte abStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_38 = uStack_48;
  FUN_100f84200(&uStack_38,abStack_58,0x112d4f590,&UNK_10d915440);
  uVar2 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f72c(abStack_58);
  if ((abStack_58[0] & 1) == 0) {
    abStack_58[0] = 1;
    func_0x000107c5f730(abStack_58,uVar2);
    func_0x000100f84248(&uStack_50,0x112d4f580,&UNK_10d915430);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xe8);
    puVar1 = &UNK_11036fc28;
    func_0x000107c613fc(&UNK_11036fc28,0x120,7);
    func_0x000107c610b4(puVar1 + 0x10);
    FUN_100f836b8();
    func_0x0001001ca524(uVar2,1,0x2c,4,0,0,&UNK_10d9159b0,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar2);
  }
  else {
    func_0x000100f84248(&uStack_50,0x112d4f580,&UNK_10d915430);
  }
  return;
}



/* Entry: 100f808d8; end: 100f80ba3;  */

void FUN_100f808d8(undefined8 *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar2 = 0;
  func_0x000107c5f6f0();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((param_3 & 0xc000000000000001) == 0) {
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f809e4);
      (*pcVar1)();
    }
    if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f809e8);
      (*pcVar1)();
    }
    param_2 = *(ulong *)(param_3 + param_2 * 8 + 0x20);
    func_0x000107c61174(param_2);
  }
  else {
    FUN_100f95e24(param_2,param_3);
  }
  func_0x000107c5f6e8();
  (**(code **)(lVar5 + 0x68))
            (puVar4,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_110349738,
             lVar2);
  puVar3 = puVar4;
  func_0x000107c5f6fc(0,0,0,0,puVar4,param_2);
  func_0x000107c61574(param_2);
  (**(code **)(lVar5 + 8))(puVar4,lVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 100f80ba4; end: 100f80dff;  */

void FUN_100f80ba4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  lVar1 = 0x112d4fac0;
  func_0x0001000285a8(0x112d4fac0,&UNK_10d915a78);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = (undefined8 *)(puVar3 + -extraout_x12);
  lVar1 = 0x112d4fac8;
  func_0x0001000285a8(0x112d4fac8,&UNK_10d915a80);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar6 = (long *)(lVar5 - extraout_x12_00);
  func_0x000107c5f410();
  *plVar6 = lVar1;
  plVar6[1] = 0x4028000000000000;
  *(undefined1 *)(plVar6 + 2) = 0;
  lVar1 = 0x112d4fad0;
  func_0x0001000285a8(0x112d4fad0,&UNK_10d915a88);
  uVar2 = param_2;
  FUN_100f80fb8((long)plVar6 + (long)*(int *)(lVar1 + 0x2c),param_2,&UNK_11036fd68,&UNK_11036fd90,
                FUN_100f8465c,0x100f84664);
  func_0x000107c5f438();
  *puVar4 = uVar2;
  puVar4[1] = 0x4028000000000000;
  *(undefined1 *)(puVar4 + 2) = 0;
  lVar1 = 0x112d4fad8;
  func_0x0001000285a8(0x112d4fad8,&UNK_10d915a90);
  FUN_100f80fb8((undefined1 *)((long)puVar4 + (long)*(int *)(lVar1 + 0x2c)),param_2,&UNK_11036fc78,
                &UNK_11036fca0,FUN_100f83b74,0x100f83b7c);
  FUN_100f84054(plVar6,lVar5,0x112d4fac8,&UNK_10d915a80);
  FUN_100f84054(puVar4,puVar3,0x112d4fac0,&UNK_10d915a78);
  FUN_100f84054(lVar5,param_1,0x112d4fac8,&UNK_10d915a80);
  lVar1 = 0x112d4fae0;
  func_0x0001000285a8(0x112d4fae0,&UNK_10d915a98);
  FUN_100f84054(puVar3,param_1 + *(int *)(lVar1 + 0x30),0x112d4fac0,&UNK_10d915a78);
  func_0x000100f8409c(puVar4,0x112d4fac0,&UNK_10d915a78);
  func_0x000100f8409c(plVar6,0x112d4fac8,&UNK_10d915a80);
  func_0x000100f8409c(puVar3,0x112d4fac0,&UNK_10d915a78);
  func_0x000100f8409c(lVar5,0x112d4fac8,&UNK_10d915a80);
  return;
}



/* Entry: 100f80e00; end: 100f80fb7;  */

void FUN_100f80e00(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  long lStack_180;
  char cStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = &UNK_11036fcc8;
  func_0x000107c613fc(&UNK_11036fcc8,0x120,7);
  func_0x000107c610b4(puVar3 + 0x10);
  FUN_100f836b8();
  uVar4 = 0x112d4faf8;
  func_0x0001000285a8(0x112d4faf8,&UNK_10d915ae0);
  uVar5 = uVar4;
  func_0x000100f83bc4();
  func_0x000107c5f738(param_1,0x100f83b84,puVar3,0x100f83ba4,&uStack_60,uVar4,uVar5);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_170 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar4 = 0x112d4f9d0;
  func_0x0001000285a8(0x112d4f9d0,&UNK_10d915998);
  func_0x000107c5f72c(&lStack_180);
  if (cStack_178 != -1) {
    if ((cStack_178 == '\x03') && (lStack_180 == 1)) {
      bVar2 = true;
      goto LAB_100f80f48;
    }
    FUN_100f83aa0();
  }
  uStack_58 = uStack_168;
  uStack_60 = uStack_170;
  func_0x000107c5f72c(&lStack_180,uVar4);
  if (cStack_178 == -1) {
    bVar2 = false;
  }
  else {
    bVar2 = cStack_178 == '\x01';
    FUN_100f83aa0(lStack_180);
  }
LAB_100f80f48:
  puVar3 = &UNK_10d915aa8;
  func_0x000107c614e0();
  puVar6 = &UNK_11036fcf0;
  func_0x000107c613fc(&UNK_11036fcf0,0x11,7);
  puVar6[0x10] = bVar2;
  lVar7 = 0x112d4fae8;
  func_0x0001000285a8(0x112d4fae8,&UNK_10d915aa0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  *puVar1 = puVar3;
  puVar1[1] = 0x100f84660;
  puVar1[2] = puVar6;
  return;
}



/* Entry: 100f80fb8; end: 100f815d7;  */

void FUN_100f80fb8(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  long lVar4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong auStack_190 [34];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0x112d4fae8;
  uStack_1a0 = param_5;
  uStack_198 = param_6;
  func_0x0001000285a8(0x112d4fae8,&UNK_10d915aa0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = (long)&uStack_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar3 - extraout_x12;
  func_0x000107c613fc(param_3,0x120,7);
  func_0x000107c610b4(param_3 + 0x10,param_2,0x110);
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  FUN_100f836b8(param_2,auStack_190);
  func_0x0001000285a8(0x112d4f9d8,&UNK_10d9159a0);
  func_0x000107c5f72c(auStack_190);
  FUN_100f83834();
  puVar2 = &UNK_10d915aa8;
  func_0x000107c614e0();
  func_0x000107c613fc(param_4,0x11,7);
  *(bool *)(param_4 + 0x10) = auStack_190[0] < 2;
  FUN_100f80e00(lVar4);
  FUN_100f84054(lVar4,lVar3,0x112d4fae8,&UNK_10d915aa0);
  *param_1 = uStack_1a0;
  param_1[1] = param_3;
  param_1[2] = puVar2;
  param_1[3] = uStack_198;
  param_1[4] = param_4;
  lVar1 = 0x112d4faf0;
  func_0x0001000285a8(0x112d4faf0,&UNK_10d915ad8);
  FUN_100f84054(lVar3,(long)param_1 + (long)*(int *)(lVar1 + 0x30),0x112d4fae8,&UNK_10d915aa0);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(param_4);
  func_0x000100f8409c(lVar4,0x112d4fae8,&UNK_10d915aa0);
  func_0x000100f8409c(lVar3,0x112d4fae8,&UNK_10d915aa0);
  func_0x000107c61574(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 100f815d8; end: 100f81737;  */

void FUN_100f815d8(undefined8 *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar2 = &UNK_11036fde0;
  func_0x000107c613fc(&UNK_11036fde0,0x120,7);
  func_0x000107c610b4(puVar2 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x68);
  lStack_60 = *(long *)(unaff_x20 + 0x60);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x70);
  FUN_100f836b8();
  uVar3 = 0x112d4f9d0;
  func_0x0001000285a8(0x112d4f9d0,&UNK_10d915998);
  func_0x000107c5f72c(&lStack_190);
  if ((char)uStack_188 != -1) {
    if (((char)uStack_188 == '\x03') && (lStack_190 == 1)) {
      bVar1 = true;
      goto LAB_100f816dc;
    }
    FUN_100f83aa0();
  }
  uStack_188 = uStack_58;
  lStack_190 = lStack_60;
  uStack_180 = uStack_50;
  func_0x000107c5f72c(&uStack_80,uVar3);
  if ((char)uStack_78 == -1) {
    bVar1 = false;
  }
  else {
    bVar1 = (char)uStack_78 == '\x01';
    FUN_100f83aa0(uStack_80);
  }
LAB_100f816dc:
  puVar4 = &UNK_10d915aa8;
  func_0x000107c614e0();
  puVar5 = &UNK_11036fe08;
  func_0x000107c613fc(&UNK_11036fe08,0x11,7);
  puVar5[0x10] = bVar1;
  *param_1 = 0x100f841b4;
  param_1[1] = puVar2;
  param_1[2] = puVar4;
  param_1[3] = 0x100f84668;
  param_1[4] = puVar5;
  return;
}



/* Entry: 100f81738; end: 100f81863;  */

void FUN_100f81738(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_130;
  char cStack_128;
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
  long lStack_b0;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x68);
  lStack_b0 = *(long *)(unaff_x20 + 0x60);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar2 = 0x112d4f9d0;
  func_0x0001000285a8(0x112d4f9d0,&UNK_10d915998);
  func_0x000107c5f72c(&lStack_130);
  if (cStack_128 == '\0') {
    FUN_100f83aa0(lStack_130);
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x80);
    lStack_b0 = *(long *)(unaff_x20 + 0x78);
    func_0x0001000285a8(0x112d4f9a8,&UNK_10d915970);
    func_0x000107c5f72c(&lStack_130);
    lVar1 = lStack_130;
    if (lStack_130 != 0) {
      lStack_130 = 0;
      func_0x000100f75be4(&lStack_130);
      uStack_68 = uStack_e8;
      uStack_70 = uStack_f0;
      uStack_58 = uStack_d8;
      uStack_60 = uStack_e0;
      uStack_48 = uStack_c8;
      uStack_50 = uStack_d0;
      uStack_38 = uStack_b8;
      uStack_40 = uStack_c0;
      lStack_b0 = lStack_130;
      uStack_98 = uStack_118;
      uStack_a0 = uStack_120;
      uStack_88 = uStack_108;
      uStack_90 = uStack_110;
      uStack_78 = uStack_f8;
      uStack_80 = uStack_100;
      func_0x000103ba1ea0(&lStack_b0);
      func_0x000107c61574(lVar1);
    }
  }
  else {
    if (cStack_128 != -1) {
      FUN_100f83aa0(lStack_130);
    }
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x68);
    lStack_b0 = *(long *)(unaff_x20 + 0x60);
    uStack_a0 = *(undefined8 *)(unaff_x20 + 0x70);
    func_0x000107c5f72c(&lStack_130,uVar2);
    if (cStack_128 == -1) {
      FUN_100f82b08();
    }
    else {
      FUN_100f83aa0(lStack_130);
    }
  }
  return;
}



/* Entry: 100f81864; end: 100f81c07;  */

void FUN_100f81864(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
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
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
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
  
  func_0x000107c5f410();
  uStack_168 = 0;
  uStack_160 = 1;
  uStack_170 = param_2;
  FUN_100f820c4(&uStack_1e0);
  uStack_d8 = uStack_1b8;
  uStack_e0 = uStack_1c0;
  uStack_c8 = uStack_1a8;
  uStack_d0 = uStack_1b0;
  uStack_f8 = uStack_1d8;
  uStack_100 = uStack_1e0;
  uStack_e8 = uStack_1c8;
  uStack_f0 = uStack_1d0;
  uStack_98 = uStack_1c8;
  uStack_a0 = uStack_1d0;
  uStack_88 = uStack_1b8;
  uStack_90 = uStack_1c0;
  uStack_78 = uStack_1a8;
  uStack_80 = uStack_1b0;
  uStack_68 = uStack_198;
  uStack_70 = uStack_1a0;
  uStack_b8 = uStack_198;
  uStack_c0 = uStack_1a0;
  uStack_a8 = uStack_1d8;
  uStack_b0 = uStack_1e0;
  FUN_100f84200(&uStack_100,&uStack_230,0x112d4fb68,&UNK_10d915b20);
  func_0x000100f84248(&uStack_b0,0x112d4fb68,&UNK_10d915b20);
  uStack_140 = uStack_e8;
  uStack_148 = uStack_f0;
  uStack_130 = uStack_d8;
  uStack_138 = uStack_e0;
  uStack_120 = uStack_c8;
  uStack_128 = uStack_d0;
  uStack_110 = uStack_b8;
  uStack_118 = uStack_c0;
  uStack_150 = uStack_f8;
  uStack_158 = uStack_100;
  uVar12 = uStack_c0;
  func_0x000107c5f590();
  uVar5 = 0x112d4fb48;
  func_0x0001000285a8(0x112d4fb48,&UNK_10d915b08);
  uVar6 = 0x112d4fb50;
  func_0x000100f84008(0x112d4fb50,0x112d4fb48,&UNK_10d915b08,
                      PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
  func_0x000107c5f5fc(param_1,uVar12,0,uVar5,uVar6);
  func_0x000100f84248(&uStack_170,0x112d4fb48,&UNK_10d915b08);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar8 = puVar7;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  puVar9 = &UNK_10d915b28;
  func_0x000107c614e0();
  lVar10 = 0x112d4fb40;
  func_0x0001000285a8(0x112d4fb40,&UNK_10d915b00);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x24));
  *puVar1 = puVar9;
  puVar1[1] = puVar8;
  func_0x000107c5f56c();
  lVar11 = 0x112d4fb30;
  func_0x0001000285a8();
  puVar2 = (undefined1 *)(param_1 + *(int *)(lVar11 + 0x24));
  *puVar2 = (char)lVar10;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar2[0x28] = 1;
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_1e0,0,1,0,1,0,1,0x404a000000000000,0,0,1);
  lVar10 = 0x112d4fb20;
  func_0x0001000285a8();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x24));
  puVar1[9] = uStack_198;
  puVar1[8] = uStack_1a0;
  puVar1[0xb] = uStack_188;
  puVar1[10] = uStack_190;
  puVar1[0xd] = uStack_178;
  puVar1[0xc] = uStack_180;
  puVar1[1] = uStack_1d8;
  *puVar1 = uStack_1e0;
  puVar1[3] = uStack_1c8;
  puVar1[2] = uStack_1d0;
  puVar1[5] = uStack_1b8;
  puVar1[4] = uStack_1c0;
  puVar1[7] = uStack_1a8;
  puVar1[6] = uStack_1b0;
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_170,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  lVar10 = 0x112d4fb10;
  func_0x0001000285a8(0x112d4fb10,&UNK_10d915ae8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x24));
  puVar1[9] = uStack_128;
  puVar1[8] = uStack_130;
  puVar1[0xb] = uStack_118;
  puVar1[10] = uStack_120;
  puVar1[0xd] = uStack_108;
  puVar1[0xc] = uStack_110;
  puVar1[1] = uStack_168;
  *puVar1 = uStack_170;
  puVar1[3] = uStack_158;
  puVar1[2] = CONCAT71(uStack_15f,uStack_160);
  puVar1[5] = uStack_148;
  puVar1[4] = uStack_150;
  puVar1[7] = uStack_138;
  puVar1[6] = uStack_140;
  uStack_228 = unaff_x20[1];
  uStack_230 = *unaff_x20;
  func_0x0001000285a8(0x112d4f9d8,&UNK_10d9159a0);
  func_0x000107c5f72c(&uStack_238);
  if (1 < uStack_238) {
    FUN_100f83834();
  }
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  lVar10 = 0x112d4faf8;
  func_0x0001000285a8(0x112d4faf8,&UNK_10d915ae0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x24));
  lVar10 = 0x112d4f648;
  func_0x0001000285a8(0x112d4f648,&UNK_10d9158b0);
  iVar4 = *(int *)(lVar10 + 0x34);
  uVar3 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar11 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar11 + -8) + 0x68))((long)puVar1 + (long)iVar4,uVar3,lVar11);
  *puVar1 = puVar7;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x38)) = 0x100;
  return;
}



/* Entry: 100f81c08; end: 100f81d0b;  */

void FUN_100f81c08(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cStack_41;
  
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  uVar3 = *(undefined1 *)(param_1 + 0x98);
  uVar4 = 0;
  FUN_100f8b870(0);
  uVar5 = 0x112d4f9e0;
  FUN_100f838f0(0x112d4f9e0,FUN_100f8b870,&UNK_10d916210);
  func_0x000107c5f2b0(uVar6,uVar1,uVar3,uVar4,uVar5);
  puVar7 = &UNK_10d915bc0;
  func_0x000107c614e0(&UNK_10d915bc0);
  puVar8 = &UNK_10d915be8;
  func_0x000107c614e0(&UNK_10d915be8);
  func_0x000107c5f20c(&cStack_41,uVar6,puVar7,puVar8);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(uVar6);
  if (cStack_41 == '\x01') {
    (**(code **)(param_1 + 0x100))();
  }
  else {
    lVar2 = *(long *)(param_1 + 0xc0);
    func_0x000107c614f0(*(undefined8 *)(param_1 + 0xb8));
    (**(code **)(lVar2 + 0x38))();
    FUN_100f81d0c();
  }
  return;
}



/* Entry: 100f81d0c; end: 100f8202f;  */

void FUN_100f81d0c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_250 [16];
  undefined *puStack_240;
  undefined1 uStack_238;
  undefined **ppuStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined1 auStack_c0 [40];
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  FUN_100f7fbf0();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0xb8);
    lVar2 = *(long *)(unaff_x20 + 0xc0);
    func_0x000107c614f0(uVar4);
    (**(code **)(lVar2 + 0x20))(auStack_c0);
    uVar10 = *(undefined8 *)(unaff_x20 + 0xb0);
    pcVar11 = *(code **)(lVar2 + 0x28);
    func_0x000107c6157c(uVar10);
    (*pcVar11)(&puStack_210,uVar4,lVar2);
    uVar5 = 0x112d4f9b0;
    func_0x0001000285a8(0x112d4f9b0,&UNK_10d915978);
    uVar6 = 0x112d4f9b8;
    func_0x0001000285a8(0x112d4f9b8,&UNK_10d915980);
    puVar7 = &uStack_f8;
    func_0x000107c6147c(puVar7,&puStack_210,uVar5,uVar6,6);
    auStack_d0[0] = 2;
    uStack_88 = 0;
    func_0x000107c61614(auStack_90,0);
    if ((int)puVar7 == 0) {
      uStack_f8 = 0;
      uStack_f0 = 0;
    }
    lStack_c8 = param_1;
    uStack_98 = uVar10;
    uStack_88 = uStack_f0;
    func_0x000107c61604(auStack_90,uStack_f8);
    func_0x000107c615e8(uStack_f8);
    puStack_1f8 = &UNK_11036ffa0;
    ppuStack_1f0 = &PTR_DAT_11036ffc8;
    puVar8 = &UNK_11036fbb0;
    func_0x000107c613fc(&UNK_11036fbb0,0x60,7);
    puStack_210 = puVar8;
    FUN_100f837ac(auStack_d0,puVar8 + 0x10);
    (*pcVar11)(&uStack_f8,uVar4,lVar2);
    func_0x000103ba3918();
    func_0x000107c613fc();
    ppuVar9 = &puStack_210;
    func_0x000103ba1954(ppuVar9,&uStack_f8);
    puVar8 = &UNK_11036fbd8;
    func_0x000107c613fc(&UNK_11036fbd8,0x120,7);
    func_0x000107c610b4(puVar8 + 0x10);
    func_0x000107c61428(ppuVar9 + 4,&uStack_f8,1,0);
    puVar1 = ppuVar9[4];
    puVar3 = ppuVar9[5];
    ppuVar9[4] = (undefined *)0x100f837e8;
    ppuVar9[5] = puVar8;
    FUN_100f836b8();
    func_0x000100f837f0(puVar1,puVar3);
    uStack_208 = *(undefined8 *)(unaff_x20 + 0x80);
    puStack_210 = *(undefined **)(unaff_x20 + 0x78);
    ppuStack_230 = ppuVar9;
    func_0x000107c6157c(ppuVar9);
    uVar5 = 0x112d4f9a8;
    func_0x0001000285a8(0x112d4f9a8,&UNK_10d915970);
    func_0x000107c5f730(&ppuStack_230,uVar5);
    func_0x000107c61428(ppuVar9 + 2,&puStack_210,0,0);
    puStack_240 = ppuVar9[2];
    uStack_238 = *(undefined1 *)(ppuVar9 + 3);
    uStack_228 = *(undefined8 *)(unaff_x20 + 0x68);
    ppuStack_230 = *(undefined ***)(unaff_x20 + 0x60);
    uStack_220 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_70 = *(undefined1 *)(unaff_x20 + 0x68);
    uStack_80 = uStack_220;
    FUN_100f75b4c();
    FUN_100f84200(&uStack_78,auStack_250,0x112d4f9c0,&UNK_10d916950);
    FUN_100f84200(&uStack_80,auStack_250,0x112d4f9c8,&UNK_10d915990);
    uVar5 = 0x112d4f9d0;
    func_0x0001000285a8(0x112d4f9d0,&UNK_10d915998);
    func_0x000107c5f730(&puStack_240,uVar5);
    func_0x000107c61574(ppuVar9);
    func_0x000100f84248(&uStack_78,0x112d4f9c0,&UNK_10d916950);
    func_0x000100f84248(&uStack_80,0x112d4f9c8,&UNK_10d915990);
    FUN_100f83800(auStack_d0);
  }
  return;
}



/* Entry: 100f82030; end: 100f820c3;  */

void FUN_100f82030(long param_1,code *param_2)

{
  long lVar1;
  long lStack_130;
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
  long lStack_b0;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_a8 = *(undefined8 *)(param_1 + 0x80);
  lStack_b0 = *(long *)(param_1 + 0x78);
  func_0x0001000285a8(0x112d4f9a8,&UNK_10d915970);
  func_0x000107c5f72c(&lStack_130);
  lVar1 = lStack_130;
  if (lStack_130 != 0) {
    (*param_2)(&lStack_130);
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_48 = uStack_c8;
    uStack_50 = uStack_d0;
    uStack_38 = uStack_b8;
    uStack_40 = uStack_c0;
    uStack_a8 = uStack_128;
    lStack_b0 = lStack_130;
    uStack_98 = uStack_118;
    uStack_a0 = uStack_120;
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    uStack_78 = uStack_f8;
    uStack_80 = uStack_100;
    func_0x000103ba1ea0(&lStack_b0);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100f820c4; end: 100f82377;  */

void FUN_100f820c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [72];
  long lStack_1a0;
  long lStack_198;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar1 = 0;
  func_0x000107c5eccc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = auStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5eca0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  puVar2 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar7 = puVar3;
  func_0x000107c45098(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  func_0x000107c5f6e8();
  puVar3 = puVar2;
  FUN_100f97660();
  func_0x000107c5ecc8(puVar6);
  func_0x000107c5eca4(lVar8,puVar3,param_3);
  uVar5 = SUB81(puVar6,0);
  FUN_100f90c90(lVar9,5);
  (**(code **)(lVar10 + 8))(lVar8);
  func_0x000107c5f5dc();
  puVar3 = &UNK_10d915b58;
  func_0x000107c614e0();
  puVar4 = &UNK_10d915b88;
  func_0x000107c614e0();
  uStack_178 = 1;
  uStack_170 = 0;
  uStack_160 = 0x3fe8000000000000;
  uStack_130 = 1;
  uStack_128 = 0;
  uStack_118 = 0x3fe8000000000000;
  lStack_1a0 = lVar9;
  lStack_198 = lVar1;
  uStack_190 = uVar5;
  puStack_188 = puVar7;
  puStack_180 = puVar3;
  puStack_168 = puVar4;
  lStack_158 = lVar9;
  lStack_150 = lVar1;
  uStack_148 = uVar5;
  puStack_140 = puVar7;
  puStack_138 = puVar3;
  puStack_120 = puVar4;
  FUN_100f84200(&lStack_1a0,&lStack_c0,0x112d4fb70,&UNK_10d915bb8);
  func_0x000100f84248(&lStack_158,0x112d4fb70,&UNK_10d915bb8);
  uStack_e0 = CONCAT71(uStack_16f,uStack_170);
  uStack_98 = uStack_178;
  puStack_a0 = puStack_180;
  puStack_88 = puStack_168;
  uStack_e8 = uStack_178;
  puStack_f0 = puStack_180;
  puStack_d8 = puStack_168;
  uStack_100 = CONCAT71(uStack_18f,uStack_190);
  lStack_b8 = lStack_198;
  lStack_c0 = lStack_1a0;
  puStack_a8 = puStack_188;
  lStack_108 = lStack_198;
  lStack_110 = lStack_1a0;
  puStack_f8 = puStack_188;
  uStack_80 = uStack_160;
  uStack_d0 = uStack_160;
  *param_1 = puVar2;
  param_1[4] = puStack_188;
  param_1[3] = CONCAT71(uStack_18f,uStack_190);
  param_1[6] = uStack_178;
  param_1[5] = puStack_180;
  param_1[8] = puStack_168;
  param_1[7] = CONCAT71(uStack_16f,uStack_170);
  param_1[9] = uStack_160;
  param_1[2] = lStack_198;
  param_1[1] = lStack_1a0;
  uStack_b0 = uStack_100;
  uStack_90 = uStack_e0;
  func_0x000107c6157c(puVar2);
  FUN_100f84200(&lStack_110,auStack_1e8,0x112d4fb70,&UNK_10d915bb8);
  func_0x000100f84248(&lStack_c0,0x112d4fb70,&UNK_10d915bb8);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 100f82378; end: 100f823f7;  */

void FUN_100f82378(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100f823f8;
                    /* WARNING: Could not recover jumptable at 0x000100f823f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100f96304();
  return;
}



/* Entry: 100f823f8; end: 100f8244b;  */

void FUN_100f823f8(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  *(undefined1 *)(lVar1 + 200) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f8244c,0,0);
  return;
}



/* Entry: 100f8244c; end: 100f8252f;  */

void FUN_100f8244c(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 200) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x60);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
    if (iVar1 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x30,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    FUN_100f838dc(uVar4,1);
    pcVar2 = FUN_100f82688;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar4 = 0x112d45220;
    FUN_100f838f0(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
    *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
    func_0x000107c5fca8();
    *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar4;
    pcVar2 = FUN_100f82530;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar3,uVar4);
  return;
}



/* Entry: 100f82530; end: 100f825ff;  */

void FUN_100f82530(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x60);
  if (lVar6 != 0) {
    lVar7 = *(long *)(unaff_x22 + 0x40);
    func_0x0001000d224c(unaff_x22 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar2 = *(long *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
    func_0x000107c614f0(uVar3);
    uVar8 = *(undefined8 *)(lVar7 + 0xe8);
    piVar5 = *(int **)(lVar2 + 0x10);
    iVar1 = *piVar5;
    plVar4 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x88) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100f82600;
                    /* WARNING: Could not recover jumptable at 0x000100f825d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))(lVar6,2,uVar8,uVar3,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f82688,0,0);
  return;
}



/* Entry: 100f82600; end: 100f82687;  */

void FUN_100f82600(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x88));
  uVar3 = *(undefined8 *)(lVar4 + 0x80);
  if (unaff_x20 == 0) {
    func_0x000107c615e8(uVar3);
    *(undefined8 *)(lVar4 + 0xa8) = param_1;
    uVar3 = *(undefined8 *)(lVar4 + 0x70);
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    pcVar1 = FUN_100f827e0;
  }
  else {
    func_0x000107c614ac();
    func_0x000107c615e8(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x70);
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    pcVar1 = FUN_100f82930;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar3,uVar2);
  return;
}



/* Entry: 100f82688; end: 100f82703;  */

void FUN_100f82688(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  uVar1 = 0x112d45220;
  FUN_100f838f0(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f82704,uVar2,uVar1);
  return;
}



/* Entry: 100f82704; end: 100f827af;  */

void FUN_100f82704(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
  uVar4 = *puVar3;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar3[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x38) = 1;
  uVar4 = 0x112d4f9d8;
  func_0x0001000285a8(0x112d4f9d8,&UNK_10d9159a0);
  func_0x000107c5f730((undefined8 *)(unaff_x22 + 0x38),uVar4);
  (*(code *)puVar3[0x19])();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f827b0,uVar1,uVar2);
  return;
}



/* Entry: 100f827b0; end: 100f827df;  */

void FUN_100f827b0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000100f827dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f827e0; end: 100f827ff;  */

void FUN_100f827e0(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f82800,0,0);
  return;
}



/* Entry: 100f82800; end: 100f82867;  */

void FUN_100f82800(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f82868,uVar2,uVar1);
  return;
}



/* Entry: 100f82868; end: 100f828f3;  */

void FUN_100f82868(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar3 = *(long *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  FUN_100f82948(uVar1,uVar4,uVar2);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(lVar3);
    return;
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100f828f4,*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 100f828f4; end: 100f8292f;  */

void FUN_100f828f4(void)

{
  long unaff_x22;
  
  FUN_100f838dc(*(undefined8 *)(unaff_x22 + 0x60),*(undefined1 *)(unaff_x22 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000100f8292c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f82930; end: 100f82947;  */

void FUN_100f82930(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = 0;
  *(undefined8 *)(unaff_x22 + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f82800,0,0);
  return;
}



/* Entry: 100f82948; end: 100f82a6f;  */

void FUN_100f82948(ulong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (param_1 != 0) {
    if (param_1 >> 0x3e == 0) {
      uVar2 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar2 = param_1;
      if (-1 < (long)param_1) {
        uVar2 = param_1 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    if (uVar2 != 0) {
      uStack_48 = param_2[1];
      uStack_50 = *param_2;
      uStack_60 = param_1;
      func_0x000107c61434();
      goto LAB_100f829f8;
    }
  }
  FUN_100f95d40();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_60 = param_1;
  func_0x000107c61174(param_3);
LAB_100f829f8:
  uVar1 = 0x112d4f9d8;
  func_0x0001000285a8(0x112d4f9d8,&UNK_10d9159a0);
  func_0x000107c5f730(&uStack_60,uVar1);
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  uStack_40 = param_2[4];
  uStack_60 = 0;
  uStack_58 = 0;
  uVar1 = 0x112d4f558;
  func_0x0001000285a8(0x112d4f558,&UNK_10d915410);
  func_0x000107c5f730(&uStack_60,uVar1);
  return;
}



/* Entry: 100f82a70; end: 100f82b07;  */

void FUN_100f82a70(ulong param_1,char param_2,long param_3)

{
  undefined8 uVar1;
  ulong uStack_60;
  char cStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_48 = *(undefined8 *)(param_3 + 0x68);
  uStack_50 = *(undefined8 *)(param_3 + 0x60);
  uStack_40 = *(undefined8 *)(param_3 + 0x70);
  uStack_60 = param_1;
  cStack_58 = param_2;
  FUN_100f75b4c();
  uVar1 = 0x112d4f9d0;
  func_0x0001000285a8(0x112d4f9d0,&UNK_10d915998);
  func_0x000107c5f730(&uStack_60,uVar1);
  if (param_2 == '\x02') {
    if ((param_1 & 1) != 0) {
      (**(code **)(param_3 + 0xd8))(0,0);
    }
    (**(code **)(param_3 + 200))();
  }
  return;
}



/* Entry: 100f82b08; end: 100f82c9b;  */

void FUN_100f82b08(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long alStack_1a0 [34];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  FUN_100f7fbf0();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x0001000d224c(alStack_1a0);
    if (alStack_1a0[0] == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      FUN_100f911f8(0x4075e00000000000);
      lVar2 = lVar1;
      func_0x000107c60bb8();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar2 != 0) {
        lVar1 = lVar2;
        func_0x000107c5ee30(lVar2);
        func_0x000107c61170(lVar2);
        lVar2 = lVar1;
        func_0x000107c5ee20(lVar1,param_2);
        puVar3 = &UNK_11036fd18;
        func_0x000107c613fc(&UNK_11036fd18,0x120,7);
        func_0x000107c610b4(puVar3 + 0x10);
        pcStack_70 = FUN_100f83eb4;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        pcStack_80 = FUN_100f91b08;
        puStack_78 = &UNK_11036fd30;
        ppuVar4 = &puStack_90;
        puStack_68 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        puVar3 = puStack_68;
        FUN_100f836b8();
        func_0x000107c61574(puVar3);
        func_0x000107c40ba4(alStack_1a0[0]);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(lVar2);
        func_0x00010006c090(lVar1,param_2);
      }
      func_0x000107c61170(param_1);
      func_0x000107c615e8(alStack_1a0[0]);
    }
  }
  return;
}



/* Entry: 100f82c9c; end: 100f82cf7;  */

void FUN_100f82c9c(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  
  if (param_1 != 0) {
    pcVar1 = *(code **)(param_3 + 0xd8);
    lVar2 = param_1;
    func_0x000107c61174();
    (*pcVar1)(0,param_1);
    func_0x000107c61170(lVar2);
  }
  (**(code **)(param_3 + 200))();
  return;
}



/* Entry: 100f82cf8; end: 100f82d03;  */

void FUN_100f82cf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 100f82d04; end: 100f82d4b;  */

void FUN_100f82d04(undefined8 param_1)

{
  undefined1 auStack_140 [272];
  
  func_0x000107c610b4(auStack_140);
  FUN_100f7e0f8(param_1);
  return;
}



/* Entry: 100f82d4c; end: 100f82d77;  */

long FUN_100f82d4c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100f82d78; end: 100f82d7f;  */

void FUN_100f82d78(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100f82d80; end: 100f82e53;  */

/* WARNING: Possible PIC construction at 0x000100f82da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f82db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f82dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f82de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f82df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f82e0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f82e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f82e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f82e20) */
/* WARNING: Removing unreachable block (ram,0x000100f82e10) */
/* WARNING: Removing unreachable block (ram,0x000100f82dfc) */
/* WARNING: Removing unreachable block (ram,0x000100f82dec) */
/* WARNING: Removing unreachable block (ram,0x000100f82dd0) */
/* WARNING: Removing unreachable block (ram,0x000100f82ddc) */
/* WARNING: Removing unreachable block (ram,0x000100f82de4) */
/* WARNING: Removing unreachable block (ram,0x000100f82db8) */
/* WARNING: Removing unreachable block (ram,0x000100f82da8) */
/* WARNING: Removing unreachable block (ram,0x000100f82e30) */

void FUN_100f82d80(ulong *param_1)

{
  if (1 < *param_1) {
    func_0x000107c6142c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 100f82e54; end: 100f82e5b;  */

void FUN_100f82e54(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 100f82e5c; end: 100f83033;  */

ulong * FUN_100f82e5c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = *param_2;
  if (1 < uVar3) {
    func_0x000107c61434();
  }
  uVar8 = param_2[1];
  uVar1 = param_2[2];
  *param_1 = uVar3;
  param_1[1] = uVar8;
  param_1[2] = uVar1;
  *(char *)(param_1 + 3) = (char)param_2[3];
  uVar4 = param_2[4];
  param_1[4] = uVar4;
  *(char *)(param_1 + 5) = (char)param_2[5];
  uVar6 = param_2[6];
  param_1[6] = uVar6;
  *(char *)(param_1 + 7) = (char)param_2[7];
  uVar3 = param_2[8];
  uVar1 = param_2[9];
  param_1[8] = uVar3;
  param_1[9] = uVar1;
  uVar1 = param_2[10];
  uVar5 = param_2[0xb];
  param_1[10] = uVar1;
  param_1[0xb] = uVar5;
  cVar2 = (char)param_2[0xd];
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c61434(uVar1);
  func_0x000107c6157c(uVar5);
  if (cVar2 == -1) {
    param_1[0xc] = param_2[0xc];
    *(char *)(param_1 + 0xd) = (char)param_2[0xd];
  }
  else {
    uVar3 = param_2[0xc];
    FUN_100f75b4c(uVar3,cVar2);
    param_1[0xc] = uVar3;
    *(char *)(param_1 + 0xd) = cVar2;
  }
  uVar8 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar8;
  uVar3 = param_2[0x10];
  uVar1 = param_2[0x11];
  param_1[0x10] = uVar3;
  uVar4 = param_2[0x12];
  uVar5 = param_2[0x13];
  func_0x000107c6157c();
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar3);
  FUN_100f82d78(uVar1,uVar4,(char)uVar5);
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar4;
  *(char *)(param_1 + 0x13) = (char)uVar5;
  uVar8 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar8;
  uVar5 = param_2[0x16];
  param_1[0x16] = uVar5;
  uVar7 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar7;
  uVar4 = param_2[0x1a];
  uVar3 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar3;
  uVar3 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar3;
  uVar3 = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  uVar6 = param_2[0x1e];
  uVar1 = param_2[0x1f];
  func_0x000107c6157c();
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar5);
  func_0x000107c615f0(uVar7);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  func_0x000100f74158(uVar6,(char)uVar1);
  param_1[0x1e] = uVar6;
  *(char *)(param_1 + 0x1f) = (char)uVar1;
  uVar3 = param_2[0x21];
  uVar8 = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar8;
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 100f83034; end: 100f83373;  */

ulong * FUN_100f83034(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
  uVar4 = *param_2;
  if (uVar6 < 2) {
    if (uVar4 < 2) {
      *param_1 = uVar4;
    }
    else {
      *param_1 = uVar4;
      func_0x000107c61434();
    }
  }
  else if (uVar4 < 2) {
    func_0x000100f84248(param_1,0x112d4f970,&UNK_10d9158d0);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar4;
    func_0x000107c61434();
    func_0x000107c6142c(uVar6);
  }
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar4);
  uVar4 = param_2[2];
  *(char *)(param_1 + 3) = (char)param_2[3];
  param_1[2] = uVar4;
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar4);
  *(char *)(param_1 + 5) = (char)param_2[5];
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  func_0x000107c61574(uVar4);
  *(char *)(param_1 + 7) = (char)param_2[7];
  uVar4 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6157c();
  func_0x000107c61574(uVar4);
  param_1[9] = param_2[9];
  uVar4 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c6157c();
  func_0x000107c61574(uVar4);
  cVar2 = (char)param_2[0xd];
  if ((char)param_1[0xd] == -1) {
    if (cVar2 == -1) {
      uVar4 = param_2[0xc];
      *(char *)(param_1 + 0xd) = (char)param_2[0xd];
      param_1[0xc] = uVar4;
    }
    else {
      uVar4 = param_2[0xc];
      FUN_100f75b4c(uVar4,cVar2);
      param_1[0xc] = uVar4;
      *(char *)(param_1 + 0xd) = cVar2;
    }
  }
  else if (cVar2 == -1) {
    FUN_100f83374(param_1 + 0xc);
    uVar4 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    *(char *)(param_1 + 0xd) = (char)uVar4;
  }
  else {
    uVar4 = param_2[0xc];
    FUN_100f75b4c(uVar4,cVar2);
    uVar6 = param_1[0xc];
    param_1[0xc] = uVar4;
    uVar4 = param_1[0xd];
    *(char *)(param_1 + 0xd) = cVar2;
    FUN_100f78e70(uVar6,(char)uVar4);
  }
  uVar4 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c6157c();
  func_0x000107c61574(uVar4);
  uVar4 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c6157c();
  func_0x000107c61574(uVar4);
  uVar4 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  func_0x000107c6157c();
  func_0x000107c61574(uVar4);
  uVar4 = param_2[0x11];
  uVar5 = param_2[0x12];
  uVar3 = param_2[0x13];
  FUN_100f82d78(uVar4,uVar5,(char)uVar3);
  uVar6 = param_1[0x11];
  uVar1 = param_1[0x12];
  param_1[0x11] = uVar4;
  param_1[0x12] = uVar5;
  uVar4 = param_1[0x13];
  *(char *)(param_1 + 0x13) = (char)uVar3;
  FUN_100f82e54(uVar6,uVar1,(char)uVar4);
  uVar4 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  func_0x000107c6157c();
  func_0x000107c61574(uVar4);
  uVar4 = param_1[0x15];
  param_1[0x15] = param_2[0x15];
  func_0x000107c6157c();
  func_0x000107c61574(uVar4);
  uVar4 = param_1[0x16];
  param_1[0x16] = param_2[0x16];
  func_0x000107c6157c();
  func_0x000107c61574(uVar4);
  uVar4 = param_2[0x18];
  uVar6 = param_1[0x17];
  param_1[0x17] = param_2[0x17];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar6);
  param_1[0x18] = uVar4;
  uVar6 = param_1[0x1a];
  uVar4 = param_2[0x1a];
  uVar5 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar5;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar6);
  uVar6 = param_1[0x1c];
  uVar4 = param_2[0x1c];
  uVar5 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar5;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar6);
  param_1[0x1d] = param_2[0x1d];
  uVar6 = param_2[0x1e];
  uVar4 = param_2[0x1f];
  func_0x000100f74158(uVar6,(char)uVar4);
  uVar5 = param_1[0x1e];
  param_1[0x1e] = uVar6;
  uVar6 = param_1[0x1f];
  *(char *)(param_1 + 0x1f) = (char)uVar4;
  FUN_100f72e4c(uVar5,(char)uVar6);
  uVar6 = param_1[0x21];
  uVar4 = param_2[0x21];
  uVar5 = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar5;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(uVar6);
  return param_1;
}



/* Entry: 100f83374; end: 100f833a7;  */

undefined8 FUN_100f83374(undefined8 param_1)

{
  (*(code *)&DAT_103ba6138)();
  return param_1;
}



/* Entry: 100f833a8; end: 100f833af;  */

void FUN_100f833a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x110);
  return;
}



/* Entry: 100f833b0; end: 100f835c3;  */

ulong * FUN_100f833b0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_2;
  if (*param_1 < 2) {
LAB_100f833f8:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 < 2) {
      func_0x000100f84248(param_1,0x112d4f970,&UNK_10d9158d0);
      goto LAB_100f833f8;
    }
    *param_1 = uVar3;
    func_0x000107c6142c();
  }
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61574(uVar3);
  param_1[2] = param_2[2];
  *(char *)(param_1 + 3) = (char)param_2[3];
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61574(uVar3);
  *(char *)(param_1 + 5) = (char)param_2[5];
  uVar3 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61574(uVar3);
  *(char *)(param_1 + 7) = (char)param_2[7];
  uVar3 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61574(uVar3);
  uVar3 = param_2[10];
  uVar1 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar3;
  func_0x000107c6142c(uVar1);
  uVar3 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61574(uVar3);
  if ((char)param_1[0xd] != -1) {
    uVar3 = param_2[0xd];
    if ((char)uVar3 != -1) {
      uVar1 = param_1[0xc];
      param_1[0xc] = param_2[0xc];
      *(char *)(param_1 + 0xd) = (char)uVar3;
      FUN_100f78e70(uVar1);
      goto LAB_100f834d0;
    }
    FUN_100f83374(param_1 + 0xc);
  }
  param_1[0xc] = param_2[0xc];
  *(char *)(param_1 + 0xd) = (char)param_2[0xd];
LAB_100f834d0:
  uVar3 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61574(uVar3);
  uVar3 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c61574(uVar3);
  uVar3 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  func_0x000107c61574(uVar3);
  uVar2 = param_2[0x13];
  uVar3 = param_1[0x11];
  uVar1 = param_1[0x12];
  uVar4 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar4;
  uVar4 = param_1[0x13];
  *(char *)(param_1 + 0x13) = (char)uVar2;
  FUN_100f82e54(uVar3,uVar1,(char)uVar4);
  uVar3 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  func_0x000107c61574(uVar3);
  uVar3 = param_1[0x15];
  param_1[0x15] = param_2[0x15];
  func_0x000107c61574(uVar3);
  uVar3 = param_1[0x16];
  param_1[0x16] = param_2[0x16];
  func_0x000107c61574(uVar3);
  uVar3 = param_1[0x17];
  param_1[0x17] = param_2[0x17];
  func_0x000107c615e8(uVar3);
  uVar1 = param_2[0x1a];
  uVar3 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar3;
  uVar3 = param_1[0x1a];
  param_1[0x1a] = uVar1;
  func_0x000107c61574(uVar3);
  uVar3 = param_1[0x1c];
  uVar1 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar1;
  func_0x000107c61574(uVar3);
  uVar3 = param_2[0x1f];
  uVar2 = param_1[0x1e];
  uVar1 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar1;
  uVar1 = param_1[0x1f];
  *(char *)(param_1 + 0x1f) = (char)uVar3;
  FUN_100f72e4c(uVar2,(char)uVar1);
  uVar3 = param_1[0x21];
  uVar1 = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar1;
  func_0x000107c61574(uVar3);
  return param_1;
}



/* Entry: 100f835c4; end: 100f836b7;  */

int FUN_100f835c4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x44] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x14);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f836b8; end: 100f836eb;  */

undefined8 FUN_100f836b8(undefined8 param_1,undefined8 param_2)

{
  FUN_100f82e5c(param_2,param_1,&UNK_11036fad0);
  return param_2;
}



/* Entry: 100f836ec; end: 100f836f3;  */

void FUN_100f836ec(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  char acStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_38 = uStack_48;
  FUN_100f84200(&uStack_38,acStack_68,0x112d4f590,&UNK_10d915440);
  lVar1 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  lVar2 = lVar1;
  func_0x000107c5f72c(acStack_68);
  if (((acStack_68[0] == '\x01') || (*(char *)(unaff_x20 + 0x108) != '\x02')) ||
     (FUN_100f7fbf0(), lVar2 == 0)) {
    func_0x000100f84248(&uStack_50,0x112d4f580,&UNK_10d915430);
  }
  else {
    func_0x000107c61170();
    uStack_58 = uStack_48;
    uStack_60 = uStack_50;
    acStack_68[0] = '\x01';
    func_0x000107c5f730(acStack_68,lVar1);
    func_0x000100f84248(&uStack_50,0x112d4f580,&UNK_10d915430);
    lVar1 = *(long *)(unaff_x20 + 0xd0);
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 200));
    (**(code **)(lVar1 + 0x38))();
    FUN_100f81d0c();
  }
  return;
}



/* Entry: 100f836f4; end: 100f8378b;  */

void FUN_100f836f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112d4f988 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4f978;
  func_0x00010002969c(0x112d4f978,&UNK_10d915950);
  uVar2 = 0x112d4f990;
  func_0x000100f84008(0x112d4f990,0x112d4f998,&UNK_10d915960,
                      PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0);
  puStack_28 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_110349158;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112d4f988 = puVar3;
  return;
}



/* Entry: 100f8378c; end: 100f837ab;  */

void FUN_100f8378c(void)

{
  long unaff_x20;
  
  FUN_100f82030(unaff_x20 + 0x10,FUN_100f75a00);
  return;
}


