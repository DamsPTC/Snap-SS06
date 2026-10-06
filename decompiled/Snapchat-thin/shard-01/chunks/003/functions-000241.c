/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f25870; end: 100f2588f;  */

void FUN_100f25870(void)

{
  func_0x000107c61168(&PTR_PTR_1127a1958);
  return;
}



/* Entry: 100f25890; end: 100f259cf;  */

/* WARNING: Possible PIC construction at 0x000100f258bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f25938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f25990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f259b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f25994) */
/* WARNING: Removing unreachable block (ram,0x000100f2593c) */
/* WARNING: Removing unreachable block (ram,0x000100f258c0) */
/* WARNING: Removing unreachable block (ram,0x000100f259bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f25890(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d4c280);
  *(undefined8 *)(unaff_x20 + _DAT_112d4c280) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100f259d0; end: 100f25a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f259d0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d4c270);
    func_0x000107c615f0(uVar1);
    func_0x000107c61170(param_1);
    func_0x000107c41864(uVar1);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 100f25a48; end: 100f25d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f25a48(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  func_0x0001000285a8(0x112d4c320,&UNK_10d912d78);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4c2b0);
  func_0x000107c4f3e4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar5 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010ef1aac0);
    func_0x000107c466bc(puVar7);
    func_0x000107c61170(uVar5);
    func_0x00010488ade0(puVar7);
    func_0x000107c61170(puVar7);
    uVar8 = *(undefined8 *)(lVar1 + 0x10);
    uVar5 = uVar8;
    func_0x000107c6157c(uVar8);
    func_0x000103edf0bc();
    func_0x000107c61574(lVar1);
    func_0x000107c61574(uVar8);
  }
  else {
    if ((param_3 == 0) || (func_0x000107c3ebcc(), (int)param_3 == 0)) {
      lVar2 = lVar3;
      func_0x000107c4f378(lVar3);
      func_0x000107c61180();
      uVar5 = 0x112d4bd28;
      func_0x0001000285a8(0x112d4bd28,&UNK_10d9127e0);
      lVar6 = lVar2;
      func_0x000107c5fc54(lVar2,uVar5);
      func_0x000107c61170(lVar2);
      FUN_100f25e70(param_1,param_2,lVar6);
      func_0x000107c6142c(lVar6);
      if (param_1 == (undefined *)0x0) {
        param_1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
        uVar5 = 0xd000000000000026;
        func_0x000107c5fadc(0xd000000000000026,0x800000010ef1aac0);
        func_0x000107c466bc(param_1);
        func_0x000107c61170(uVar5);
        func_0x00010488ade0(param_1);
      }
      else {
        puStack_80 = param_1;
        func_0x000100b60084(&puStack_80);
      }
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c4f354(lVar3);
      puVar7 = &UNK_11036a140;
      func_0x000107c613fc(&UNK_11036a140,0x30,7);
      *(long *)(puVar7 + 0x10) = unaff_x20;
      *(undefined **)(puVar7 + 0x18) = param_1;
      *(undefined8 *)(puVar7 + 0x20) = param_2;
      *(long *)(puVar7 + 0x28) = lVar1;
      pcStack_60 = FUN_100f26c90;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_100f260c8;
      puStack_68 = &UNK_11036a158;
      puStack_58 = puVar7;
      func_0x000107c60bc4(&puStack_80);
      puVar7 = puStack_58;
      func_0x000107c61174();
      func_0x000107c61434(param_2);
      func_0x000107c6157c(lVar1);
      func_0x000107c61574(puVar7);
      lVar2 = lVar3;
      func_0x000107c4f37c();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d4c298);
      *(long *)(unaff_x20 + _DAT_112d4c298) = lVar2;
      func_0x000107c615e8(uVar5);
    }
    uVar8 = *(undefined8 *)(lVar1 + 0x10);
    uVar5 = uVar8;
    func_0x000107c6157c(uVar8);
    func_0x000103edf0bc();
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(lVar3);
    func_0x000107c61574(uVar8);
  }
  return uVar5;
}



/* Entry: 100f25d70; end: 100f25e6f;  */

/* WARNING: Possible PIC construction at 0x000100f25ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f25e44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f25de0) */
/* WARNING: Removing unreachable block (ram,0x000100f25e48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f25d70(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lStack_48;
  
  if (*(long *)(param_2 + _DAT_112d4c298) != 0) {
    func_0x000107c3f474();
  }
  FUN_100f25e70(param_3,param_4,param_1);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    param_3 = -0x2fffffffffffffda;
    func_0x000107c5fadc(0xd000000000000026,0x800000010ef1aac0);
    func_0x000107c466bc(puVar1);
  }
  else {
    lStack_48 = param_3;
    func_0x000100b60084(&lStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100f25e70; end: 100f260c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f25e70(ulong param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112d4c2b8);
  uVar4 = param_2;
  func_0x000107c4f598();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 != 0) {
    if (param_3 >> 0x3e == 0) {
      uVar2 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar2 = param_3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_3) {
        uVar2 = param_3;
      }
      func_0x000107c60480();
    }
    if (uVar2 != 0) {
      uVar11 = 0;
      do {
        if ((param_3 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100f26084);
            (*pcVar1)();
          }
          uVar10 = *(ulong *)(param_3 + uVar11 * 8 + 0x20);
          func_0x000107c615f0(uVar10);
          uVar8 = uVar4;
        }
        else {
          uVar10 = uVar11;
          uVar8 = param_3;
          FUN_100f1cdf4();
        }
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f25fd8);
          (*pcVar1)();
        }
        uVar9 = uVar11 + 1;
        uVar4 = uVar10;
        func_0x000107c3ee4c();
        func_0x000107c61180();
        uVar5 = uVar4;
        func_0x000107c44fd8();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        uVar4 = uVar8;
        if (uVar5 != 0) {
          uVar6 = uVar5;
          func_0x000107c5faec();
          func_0x000107c61170(uVar5);
          if ((uVar6 == param_1) && (uVar8 == param_2)) {
            func_0x000107c6142c(uVar8);
          }
          else {
            uVar4 = uVar8;
            func_0x000107c605b8(uVar6,uVar8,param_1,param_2,0);
            func_0x000107c6142c(uVar8);
            if ((uVar6 & 1) == 0) goto LAB_100f25f1c;
          }
          uVar4 = uVar3;
          FUN_100f26ecc(uVar3,uVar10);
          if (uVar4 != 0) {
            uVar2 = uVar3;
            FUN_100f263ec(uVar3,uVar10);
            if (uVar2 == 0) {
              func_0x000107c615e8(uVar3);
              func_0x000107c615e8(uVar10);
              func_0x000107c61170(uVar4);
              return (undefined *)0x0;
            }
            puVar7 = PTR_PTR_1126a5f70;
            func_0x000107c610f8(PTR_PTR_1126a5f70);
            func_0x000107c49524();
            func_0x000107c615e8(uVar10);
            func_0x000107c615e8(uVar3);
            func_0x000107c61170(uVar4);
            func_0x000107c615e8(uVar2);
            return puVar7;
          }
          func_0x000107c615e8(uVar3);
          uVar3 = uVar10;
          break;
        }
LAB_100f25f1c:
        func_0x000107c615e8(uVar10);
        uVar11 = uVar11 + 1;
      } while (uVar9 != uVar2);
    }
    func_0x000107c615e8(uVar3);
  }
  return (undefined *)0x0;
}



/* Entry: 100f260c8; end: 100f2624b;  */

void FUN_100f260c8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0x112d4bd28;
  func_0x0001000285a8(0x112d4bd28,&UNK_10d9127e0);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100f2624c; end: 100f26267;  */

undefined1  [16] FUN_100f2624c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010ef1aa80;
  auVar1._0_8_ = 0xd000000000000035;
  return auVar1;
}



/* Entry: 100f26268; end: 100f262c3; -[_TtC36MultiProfileSwitcherTrayPageLauncher37MultiProfileSwitcherTrayActionHandler init] */

void FUN_100f26268(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MultiProfileSwitcherTrayPageLauncher.MultiProfileSwitcherTrayActionHandler",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f26294);
  (*pcVar1)();
}



/* Entry: 100f262c4; end: 100f263eb; -[_TtC36MultiProfileSwitcherTrayPageLauncher37MultiProfileSwitcherTrayActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100f262c4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d4c270));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c278));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c280));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c288));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d4c290));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d4c298));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c2a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c2a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c2b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c2b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c2c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c2c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c2d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c2d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c2e0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d4c2e8));
  param_1 = param_1 + _DAT_112d4c2f0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100f263ec; end: 100f265af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f263ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar5 = _DAT_112d4c280;
  lVar4 = *(long *)(unaff_x20 + _DAT_112d4c280);
  if (lVar4 != 0) {
    func_0x000107c61174();
    lVar1 = lVar4;
    FUN_100f265b0();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      FUN_100f266e4();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(lVar1);
        return 0;
      }
      lVar5 = *(long *)(unaff_x20 + lVar5);
      if (lVar5 != 0) {
        func_0x000107c61174(lVar5);
        func_0x000107c61174();
        uVar6 = param_2;
        func_0x000107c3ee50(param_2);
        func_0x000107c61180();
        puVar3 = PTR_PTR_1126b0f70;
        func_0x000107c610f8();
        func_0x000107c45554();
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(uVar6);
        if (puVar3 != (undefined *)0x0) {
          func_0x000107c3ee50(param_2);
          func_0x000107c61180();
          func_0x000107c61174(puVar3);
          func_0x000107c4f580();
          func_0x000107c61180();
          func_0x000107c61170(param_2);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(lVar2);
          func_0x000107c615e8(lVar1);
          func_0x000107c61170(lVar4);
          uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d4c290);
          *(undefined8 *)(unaff_x20 + _DAT_112d4c290) = param_1;
          func_0x000107c615f0(param_1);
          func_0x000107c615e8(uVar6);
          return param_1;
        }
      }
      func_0x000107c61170();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(lVar4);
  }
  return 0;
}



/* Entry: 100f265b0; end: 100f266e3;  */

undefined * FUN_100f265b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_b0;
  puVar2 = &UNK_11036a1e0;
  func_0x000107c613fc(&UNK_11036a1e0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  puVar3 = &UNK_11036a208;
  func_0x000107c613fc(&UNK_11036a208,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = PTR_PTR_1126b0f78;
  func_0x000107c610f8(PTR_PTR_1126b0f78);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_100f27028;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_11036a220;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(ppuVar5);
  uStack_90 = 0x100f27060;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100288f10;
  puStack_98 = &UNK_11036a248;
  puStack_88 = puVar3;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c490ec(puVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puStack_88);
  func_0x000107c61574(puStack_58);
  return puVar4;
}



/* Entry: 100f266e4; end: 100f267f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f266e4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d4c2d0);
  func_0x000107c3feac();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar3 = &UNK_11036a190;
    func_0x000107c613fc(&UNK_11036a190,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    puVar5 = PTR_PTR_1126b0f80;
    func_0x000107c610f8(PTR_PTR_1126b0f80);
    pcStack_40 = FUN_100f27020;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_100f26cb8;
    puStack_48 = &UNK_11036a1a8;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61174();
    func_0x000107c45ed4(puVar5);
    func_0x000107c615e8(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puStack_38);
  }
  return puVar5;
}



/* Entry: 100f267f4; end: 100f2692f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f267f4(byte param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar5 = &puStack_70;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4c2c0);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      puVar4 = &UNK_11036a280;
      func_0x000107c613fc(&UNK_11036a280,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar3);
      func_0x000107c613fc(param_2,0x19,7);
      *(undefined **)(param_2 + 0x10) = puVar4;
      *(byte *)(param_2 + 0x18) = param_1 & 1;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      uStack_58 = param_4;
      uStack_50 = param_3;
      lStack_48 = param_2;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(lStack_48);
      uVar6 = 0;
      func_0x0001000295c4(0);
      func_0x000107c5ffdc();
      func_0x000107c4e560(lVar3);
      func_0x000107c61170(uVar6);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f26930);
  (*pcVar1)();
}



/* Entry: 100f26930; end: 100f269ef;  */

void FUN_100f26930(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c53b2c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100f269f0; end: 100f26aef;  */

/* WARNING: Possible PIC construction at 0x000100f26a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f26a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f26ab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f26aa0) */
/* WARNING: Removing unreachable block (ram,0x000100f26a90) */
/* WARNING: Removing unreachable block (ram,0x000100f26abc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f269f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_5 + _DAT_112d4c280);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126b1008;
    func_0x000107c610f8(PTR_PTR_1126b1008);
    func_0x000107c61174(lVar2);
    func_0x000107c61174();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c46c0c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100f26af0; end: 100f26b73; -[_TtC36MultiProfileSwitcherTrayPageLauncher37MultiProfileSwitcherTrayActionHandler didCompleteCommunityPillTapScope] */

/* WARNING: Possible PIC construction at 0x000100f26b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f26b48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f26b30) */
/* WARNING: Removing unreachable block (ram,0x000100f26b4c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f26af0(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100f26b74; end: 100f26b77; -[_TtC36MultiProfileSwitcherTrayPageLauncher37MultiProfileSwitcherTrayActionHandler impalaProfileDidComplete] */

void FUN_100f26b74(void)

{
  return;
}



/* Entry: 100f26b78; end: 100f26b7b; -[_TtC36MultiProfileSwitcherTrayPageLauncher37MultiProfileSwitcherTrayActionHandler impalaProfileNeedsRemoval] */

void FUN_100f26b78(void)

{
  return;
}



/* Entry: 100f26b7c; end: 100f26b7f; -[_TtC36MultiProfileSwitcherTrayPageLauncher37MultiProfileSwitcherTrayActionHandler impalaProfileDidReloadManagedProfiles] */

void FUN_100f26b7c(void)

{
  return;
}



/* Entry: 100f26b80; end: 100f26bf7; -[_TtC36MultiProfileSwitcherTrayPageLauncher37MultiProfileSwitcherTrayActionHandler editDisplayNameDismissed] */

/* WARNING: Possible PIC construction at 0x000100f26bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f26bc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f26b80(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d4c2e0);
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000103a94398();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100f26bf8; end: 100f26c6f; -[_TtC36MultiProfileSwitcherTrayPageLauncher37MultiProfileSwitcherTrayActionHandler editDisplayNameSavePressed:] */

/* WARNING: Possible PIC construction at 0x000100f26c34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f26c38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f26bf8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d4c2e0);
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000103a94398();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100f26c70; end: 100f26c8f;  */

void FUN_100f26c70(void)

{
  func_0x000107c61168(&PTR_PTR_1127a1a30);
  return;
}



/* Entry: 100f26c90; end: 100f26cb7;  */

/* WARNING: Possible PIC construction at 0x000100f25ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f25e44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f25de0) */
/* WARNING: Removing unreachable block (ram,0x000100f25e48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f26c90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lStack_48;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  if (*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d4c298) != 0) {
    func_0x000107c3f474();
  }
  FUN_100f25e70(lVar3,uVar1,param_1);
  if (lVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    lVar3 = -0x2fffffffffffffda;
    func_0x000107c5fadc(0xd000000000000026,0x800000010ef1aac0);
    func_0x000107c466bc(puVar2);
  }
  else {
    lStack_48 = lVar3;
    func_0x000100b60084(&lStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100f26cb8; end: 100f26d37;  */

/* WARNING: Possible PIC construction at 0x000100f26d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f26d20) */

void FUN_100f26cb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  uVar4 = uVar3;
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3,param_3,uVar4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 100f26d38; end: 100f26ecb;  */

ulong FUN_100f26d38(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f26e00);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f26e04);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_100f26c70();
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar5 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    FUN_100f26c70();
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar5 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000025,0x800000010d912d30);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar5 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f26ecc);
  (*pcVar2)();
}



/* Entry: 100f26ecc; end: 100f2701f;  */

undefined8 FUN_100f26ecc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c3ee50(param_2);
  func_0x000107c61180();
  uVar1 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar2 = 0x6569566e696d6441;
  func_0x000107c5fadc(0x6569566e696d6441,0xe900000000000077);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar6 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar7 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c4f584(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  return param_1;
}



/* Entry: 100f27020; end: 100f27027;  */

/* WARNING: Possible PIC construction at 0x000100f26a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f26a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f26ab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f26aa0) */
/* WARNING: Removing unreachable block (ram,0x000100f26a90) */
/* WARNING: Removing unreachable block (ram,0x000100f26abc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f27020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d4c280);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126b1008;
    func_0x000107c610f8(PTR_PTR_1126b1008);
    func_0x000107c61174(lVar2);
    func_0x000107c61174();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c46c0c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100f27028; end: 100f27097;  */

void FUN_100f27028(undefined8 param_1)

{
  FUN_100f267f4(param_1,&UNK_11036a2f8,0x100f270a4,&UNK_11036a310);
  return;
}



/* Entry: 100f27098; end: 100f270af;  */

void FUN_100f27098(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c53b30();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100f270b0; end: 100f270d3;  */

undefined8 FUN_100f270b0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100f270d4; end: 100f270fb;  */

void FUN_100f270d4(long param_1,long param_2)

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



/* Entry: 100f270fc; end: 100f27493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100f270fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_88 [16];
  long lStack_78;
  long lStack_70;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d4c328) = param_1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_2;
  func_0x00010451338c();
  lVar4 = 0;
  FUN_100f2979c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar2 = _DAT_112d4c380;
  func_0x000107c61614(lVar5 + _DAT_112d4c380,0);
  *(undefined **)(lVar5 + _DAT_112d4c388) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar5 + _DAT_112d4c390) = param_2;
  func_0x000107c61604(lVar5 + lVar2,uVar3);
  *(undefined8 *)(lVar5 + _DAT_112d4c398) = param_4;
  *(undefined8 *)(lVar5 + _DAT_112d4c3a0) = param_5;
  *(undefined8 *)(lVar5 + _DAT_112d4c3a8) = param_6;
  *(undefined8 *)(lVar5 + _DAT_112d4c3b0) = param_7;
  *(undefined8 *)(lVar5 + _DAT_112d4c3b8) = param_8;
  *(undefined8 *)(lVar5 + _DAT_112d4c3c0) = param_9;
  *(undefined8 *)(lVar5 + _DAT_112d4c3c8) = param_10;
  *(undefined8 *)(lVar5 + _DAT_112d4c3d0) = param_11;
  *(undefined8 *)(lVar5 + _DAT_112d4c3d8) = param_12;
  *(undefined8 *)(lVar5 + _DAT_112d4c3e0) = param_13;
  *(undefined8 *)(lVar5 + _DAT_112d4c3e8) = param_14;
  *(undefined8 *)(lVar5 + _DAT_112d4c3f0) = param_15;
  *(undefined8 *)(lVar5 + _DAT_112d4c3f8) = param_16;
  *(undefined8 *)(lVar5 + _DAT_112d4c400) = param_17;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar5;
  lStack_70 = lVar4;
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  plVar6 = &lStack_78;
  func_0x000107c61154(plVar6,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  *(long **)(unaff_x20 + _DAT_112d4c330) = plVar6;
  puVar7 = auStack_88;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  return puVar7;
}



/* Entry: 100f27494; end: 100f274f3; -[_TtC36MultiProfileSwitcherTrayPageLauncher46MultiProfileSwitcherTrayPageLauncherEntryPoint init] */

void FUN_100f27494(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MultiProfileSwitcherTrayPageLauncher.MultiProfileSwitcherTrayPageLauncherEntryPoint"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f274c0);
  (*pcVar1)();
}



/* Entry: 100f274f4; end: 100f2756f; -[_TtC36MultiProfileSwitcherTrayPageLauncher46MultiProfileSwitcherTrayPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f27510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f27514) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f274f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4c328));
  return;
}



/* Entry: 100f27570; end: 100f27577;  */

undefined8 FUN_100f27570(void)

{
  return 0;
}



/* Entry: 100f27578; end: 100f27607; -[_TtC36MultiProfileSwitcherTrayPageLauncher46MultiProfileSwitcherTrayPageLauncherEntryPoint handlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f27578(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  FUN_100f27668();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d4c330);
  func_0x000107c61174();
  uVar2 = 0x112d4c360;
  func_0x0001000285a8(0x112d4c360,&UNK_10d912dc0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100f27608; end: 100f2760b; -[_TtC36MultiProfileSwitcherTrayPageLauncher46MultiProfileSwitcherTrayPageLauncherEntryPoint setHandlers:] */

void FUN_100f27608(void)

{
  return;
}



/* Entry: 100f2760c; end: 100f27667;  */

void FUN_100f2760c(void)

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
    FUN_100f26c70();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d4c368;
  plVar5 = (long *)&UNK_10d912dc8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 100f27668; end: 100f2767b;  */

void FUN_100f27668(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4c378 == (undefined *)0x0 || ((ulong)puRam0000000112d4c378 & 1) != 0) {
    puVar1 = &UNK_10e831ce0;
    func_0x000107c61518(&UNK_10e831ce0,0x20,0,0);
    puRam0000000112d4c378 = puVar1;
  }
  return;
}



/* Entry: 100f2767c; end: 100f2769b;  */

void FUN_100f2767c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a1c48);
  return;
}



/* Entry: 100f2769c; end: 100f276af;  */

void FUN_100f2769c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4c370 == (undefined *)0x0 || ((ulong)puRam0000000112d4c370 & 1) != 0) {
    puVar1 = &UNK_10e831cac;
    func_0x000107c61518(&UNK_10e831cac,0x33,0,0);
    puRam0000000112d4c370 = puVar1;
  }
  return;
}



/* Entry: 100f276b0; end: 100f27893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100f276b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112d4c380;
  func_0x000107c61614(unaff_x20 + _DAT_112d4c380,0);
  *(undefined **)(unaff_x20 + _DAT_112d4c388) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c390) = param_1;
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112d4c398) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c3a0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c3a8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c3b0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c3b8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c3c0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c3c8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c3d0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c3d8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c3e0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c3e8) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c3f0) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c3f8) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c400) = param_16;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  puVar3 = auStack_70;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return puVar3;
}



/* Entry: 100f27894; end: 100f278bf; -[_TtC36MultiProfileSwitcherTrayPageLauncher43MultiProfileSwitcherTrayPageLauncherHandler init] */

void FUN_100f27894(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MultiProfileSwitcherTrayPageLauncher.MultiProfileSwitcherTrayPageLauncherHandler"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f278c0);
  (*pcVar1)();
}



/* Entry: 100f278c0; end: 100f279e7; -[_TtC36MultiProfileSwitcherTrayPageLauncher43MultiProfileSwitcherTrayPageLauncherHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f278c0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4c380);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c398));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c3a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c390));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c3a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c3b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c3b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c3c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c3c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c3d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c3d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c3e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c3e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c3f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c3f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4c400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d4c388));
  return;
}



/* Entry: 100f279e8; end: 100f279ef; -[_TtC36MultiProfileSwitcherTrayPageLauncher43MultiProfileSwitcherTrayPageLauncherHandler screen] */

undefined8 FUN_100f279e8(void)

{
  return 0x28;
}



/* Entry: 100f279f0; end: 100f27d83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f279f0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar9 = &puStack_d0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4c3a0);
  func_0x000107c4d604();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112d4c3f0);
    func_0x000107c4d814();
    func_0x000107c61180();
    lVar2 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c4c1dc(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      puVar5 = &UNK_11036a390;
      func_0x000107c613fc(&UNK_11036a390,0x18,7);
      *(long *)(puVar5 + 0x10) = unaff_x20;
      puVar6 = &UNK_11036a3b8;
      func_0x000107c613fc(&UNK_11036a3b8,0x18,7);
      *(undefined8 *)(puVar6 + 0x10) = param_1;
      puVar7 = PTR_PTR_1126a5f88;
      func_0x000107c610f8(PTR_PTR_1126a5f88);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_80 = FUN_100f297dc;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_100f288c0;
      puStack_88 = &UNK_11036a3d0;
      ppuVar8 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4(ppuVar8);
      pcStack_b0 = FUN_100f297e4;
      puStack_d0 = puVar1;
      uStack_c8 = 0x42000000;
      puStack_c0 = &UNK_1000f6b44;
      puStack_b8 = &UNK_11036a3f8;
      puStack_a8 = puVar6;
      func_0x000107c60bc4(&puStack_d0);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c47a14(puVar7);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puStack_a8);
      func_0x000107c61574(puStack_78);
      puVar5 = &UNK_11036a430;
      func_0x000107c613fc(&UNK_11036a430,0x18,7);
      *(undefined8 *)(puVar5 + 0x10) = param_1;
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_80 = FUN_100f2981c;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_100f28324;
      puStack_88 = &UNK_11036a448;
      ppuVar9 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4(ppuVar9);
      puVar5 = puStack_78;
      func_0x000107c61174();
      func_0x000107c61574(puVar5);
      func_0x000107c54eac(puVar7);
      func_0x000107c60bd0(ppuVar9);
      puVar5 = &UNK_11036a480;
      func_0x000107c613fc(&UNK_11036a480,0x18,7);
      *(long *)(puVar5 + 0x10) = unaff_x20;
      pcStack_80 = FUN_100f2983c;
      puStack_a0 = puVar6;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_1000f6b44;
      puStack_88 = &UNK_11036a498;
      ppuVar9 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4(ppuVar9);
      puVar5 = puStack_78;
      func_0x000107c61174(unaff_x20);
      func_0x000107c61574(puVar5);
      func_0x000107c53420(puVar7);
      func_0x000107c60bd0(ppuVar9);
      puVar5 = &UNK_11036a4d0;
      func_0x000107c613fc(&UNK_11036a4d0,0x18,7);
      *(undefined8 *)(puVar5 + 0x10) = param_1;
      pcStack_80 = FUN_100f29874;
      puStack_a0 = puVar6;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_1000f6b44;
      puStack_88 = &UNK_11036a4e8;
      ppuVar9 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4(ppuVar9);
      puVar5 = puStack_78;
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar5);
      func_0x000107c543d4(puVar7);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(lVar4);
      return puVar7;
    }
    func_0x000107c615e8(lVar3);
  }
  return (undefined *)0x0;
}



/* Entry: 100f27d84; end: 100f27ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f27d84(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d4c390);
  lVar5 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = lVar5;
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar2);
  }
  FUN_100f27f2c();
  puVar3 = PTR_PTR_1126a5f80;
  func_0x000107c610f8(PTR_PTR_1126a5f80);
  uVar4 = 0x112d4c480;
  func_0x0001000285a8(0x112d4c480,&UNK_10d912e28);
  lVar5 = lVar2;
  func_0x000107c5fc48(lVar2,uVar4);
  func_0x000107c6142c(lVar2);
  func_0x000107c49230(puVar3);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar5);
  uVar4 = 0;
  if (param_2 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    uVar4 = param_1;
  }
  func_0x000107c5957c(puVar3);
  func_0x000107c61170(uVar4);
  FUN_100f2812c();
  func_0x000107c551c8(puVar3);
  func_0x000107c61170(uVar4);
  return puVar3;
}



/* Entry: 100f27ea4; end: 100f27f2b; -[_TtC36MultiProfileSwitcherTrayPageLauncher43MultiProfileSwitcherTrayPageLauncherHandler launchWithCommand:uiContainer:completion:] */

/* WARNING: Possible PIC construction at 0x000100f27f08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f27f0c) */

void FUN_100f27ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_100f28f34(param_3,param_4);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100f27f2c; end: 100f2812b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f27f2c(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112d4c3a8);
  func_0x000107c4f3e4();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    uVar3 = uVar4;
    func_0x000107c4f378();
    func_0x000107c61180();
    func_0x000107c615e8(uVar4);
    uVar5 = 0x112d4bd28;
    func_0x0001000285a8(0x112d4bd28,&UNK_10d9127e0);
    uVar4 = uVar3;
    func_0x000107c5fc54(uVar3,uVar5);
    func_0x000107c61170(uVar3);
    if (uVar4 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar3 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar3 != 0) {
      FUN_100f28c2c(0,uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f2812c);
        (*pcVar2)();
      }
      uVar9 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          uVar10 = *(ulong *)(uVar4 + uVar9 * 8 + 0x20);
          func_0x000107c615f0(uVar10);
        }
        else {
          uVar10 = uVar9;
          FUN_100f1cdf4(uVar9,uVar4);
        }
        uVar6 = uVar10;
        func_0x000107c3ee4c();
        func_0x000107c61180();
        uVar7 = uVar10;
        func_0x000107c3ee50(uVar10);
        func_0x000107c61180();
        func_0x000100f297bc();
        func_0x000107c610f8();
        uVar8 = uVar6;
        FUN_100f28d78(uVar6,uVar7);
        func_0x000107c615e8(uVar10);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar7);
        uVar10 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar10) {
          FUN_100f28c2c(1 < *(ulong *)(puVar1 + 0x18),uVar10 + 1,1);
        }
        uVar9 = uVar9 + 1;
        *(ulong *)(puVar1 + 0x10) = uVar10 + 1;
        *(ulong *)(puVar1 + uVar10 * 8 + 0x20) = uVar8;
      } while (uVar3 != uVar9);
    }
    func_0x000107c6142c(uVar4);
  }
  return puVar1;
}



/* Entry: 100f2812c; end: 100f28323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f2812c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112d4c390);
  func_0x000107c4213c();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x0001000e2834(0);
    pcVar6 = "";
    func_0x000107c60124("",0,2);
    func_0x000107c4a8a4(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(pcVar6);
    puVar7 = puVar1;
    func_0x000107c5cb24(puVar1);
    func_0x000107c61180();
  }
  else {
    puVar3 = puVar2;
    func_0x000107c5d6fc(puVar2);
    func_0x000107c61180();
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    puVar1 = puVar3;
    func_0x0001000b637c(puVar3);
    uVar4 = 0;
    func_0x0001000e2834(0);
    pcVar5 = FUN_100f285e8;
    func_0x0001000bfde0(FUN_100f285e8,0,uVar4);
    func_0x000107c61574(puVar1);
    func_0x0001004575f0();
    func_0x000107c61574(pcVar5);
    puVar7 = puVar1;
    func_0x000107c5cb24(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(puVar1);
  return puVar7;
}



/* Entry: 100f28324; end: 100f28473;  */

void FUN_100f28324(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,uVar4,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 100f28474; end: 100f285e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f28474(long param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112d4c388;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112d4c388,auStack_90,1,0);
    uVar4 = *(ulong *)(param_1 + lVar1);
    if (uVar4 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar6 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar6 != 0) {
      if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f285e8);
        (*pcVar2)();
      }
      func_0x000107c61434(uVar4);
      uVar7 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          uVar3 = *(ulong *)(uVar4 + uVar7 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar7;
          FUN_100f26d38(uVar7,uVar4);
        }
        if (*(long *)(uVar3 + _DAT_112d4c288) != 0) {
          func_0x000107c4eb48();
          func_0x000107c61180();
          func_0x000107c61170();
        }
        uVar7 = uVar7 + 1;
        func_0x000107c41864(*(undefined8 *)(uVar3 + _DAT_112d4c270));
        func_0x000107c61170(uVar3);
      } while (uVar6 != uVar7);
      func_0x000107c6142c(uVar4);
    }
    uVar5 = *(undefined8 *)(param_1 + lVar1);
    *(undefined **)(param_1 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61170(param_1);
    func_0x000107c6142c(uVar5);
  }
  return;
}



/* Entry: 100f285e8; end: 100f28637;  */

void FUN_100f285e8(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)*param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (pcVar1 == (char *)0x0) {
    func_0x0001000e2834();
    pcVar1 = "";
    func_0x000107c60124("",0,2);
  }
  *param_1 = pcVar1;
  return;
}



/* Entry: 100f28638; end: 100f28643; -[_TtC36MultiProfileSwitcherTrayPageLauncher11ProfileInfo image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f28638(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d4c410);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100f28644; end: 100f2864f; -[_TtC36MultiProfileSwitcherTrayPageLauncher11ProfileInfo setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f28644(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d4c410);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 100f28650; end: 100f2865b; -[_TtC36MultiProfileSwitcherTrayPageLauncher11ProfileInfo displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f28650(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d4c418);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100f2865c; end: 100f28667; -[_TtC36MultiProfileSwitcherTrayPageLauncher11ProfileInfo setDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f2865c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d4c418);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 100f28668; end: 100f28673; -[_TtC36MultiProfileSwitcherTrayPageLauncher11ProfileInfo profileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f28668(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d4c420);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100f28674; end: 100f286d7;  */

void FUN_100f28674(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + *param_3);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100f286d8; end: 100f286e3; -[_TtC36MultiProfileSwitcherTrayPageLauncher11ProfileInfo setProfileId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f286d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d4c420);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 100f286e4; end: 100f2874b;  */

void FUN_100f286e4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + *param_4);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 100f2874c; end: 100f28793; -[_TtC36MultiProfileSwitcherTrayPageLauncher11ProfileInfo isHostProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f2874c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c428;
  func_0x000107c61428(param_1 + _DAT_112d4c428,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100f28794; end: 100f287f7; -[_TtC36MultiProfileSwitcherTrayPageLauncher11ProfileInfo setIsHostProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f28794(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4c428;
  func_0x000107c61428(param_1 + _DAT_112d4c428,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100f287f8; end: 100f28823; -[_TtC36MultiProfileSwitcherTrayPageLauncher11ProfileInfo init] */

void FUN_100f287f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MultiProfileSwitcherTrayPageLauncher.ProfileInfo",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f28824);
  (*pcVar1)();
}



/* Entry: 100f28824; end: 100f28827;  */

void FUN_100f28824(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f28828; end: 100f2885b;  */

void FUN_100f28828(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f2885c; end: 100f288bf; -[_TtC36MultiProfileSwitcherTrayPageLauncher11ProfileInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f2885c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d4c410 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d4c418 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d4c420 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4c428));
  return;
}



/* Entry: 100f288c0; end: 100f2891b;  */

void FUN_100f288c0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c5fadc(uVar3,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100f2891c; end: 100f2898b;  */

void FUN_100f2891c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_100f2898c(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 100f2898c; end: 100f28ab3;  */

ulong FUN_100f2898c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f28ab4);
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
  FUN_100f28ab4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f28ab0);
      (*pcVar1)();
    }
    FUN_100f28b34(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 100f28ab4; end: 100f28b33;  */

undefined * FUN_100f28ab4(undefined *param_1,undefined *param_2)

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
    FUN_100f2760c();
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



/* Entry: 100f28b34; end: 100f28c2b;  */

long FUN_100f28b34(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f28c28);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f28c2c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_100f26c70(0);
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
      FUN_100f26c70(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f28c24);
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



/* Entry: 100f28c2c; end: 100f28c47;  */

void FUN_100f28c2c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100f28c48();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100f28c48; end: 100f28d77;  */

undefined * FUN_100f28c48(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f28d78);
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
    puVar3 = param_1;
    FUN_100f2769c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0x112d4c480;
    func_0x0001000285a8(0x112d4c480,&UNK_10d912e28);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100f28d78; end: 100f28f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f28d78(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 auStack_68 [24];
  
  lVar9 = param_2;
  func_0x000107c614f0();
  lVar2 = _DAT_112d4c428;
  *(undefined8 *)(unaff_x20 + _DAT_112d4c428) = 0;
  lVar8 = param_1;
  func_0x000107c3ee48();
  func_0x000107c61180();
  lVar7 = lVar9;
  if (lVar8 != 0) {
    lVar4 = lVar8;
    func_0x000107c4c224();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    lVar7 = lVar9;
    if (lVar4 != 0) {
      lVar8 = lVar4;
      func_0x000107c5faec();
      lVar7 = lVar9;
      func_0x000107c61170(lVar4);
      goto LAB_100f28e0c;
    }
  }
  lVar8 = 0;
  lVar9 = -0x2000000000000000;
LAB_100f28e0c:
  plVar1 = (long *)(unaff_x20 + _DAT_112d4c410);
  *plVar1 = lVar8;
  plVar1[1] = lVar9;
  lVar8 = param_1;
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f28f30);
    (*pcVar3)();
  }
  lVar9 = lVar8;
  func_0x000107c5faec();
  lVar4 = lVar7;
  func_0x000107c61170(lVar8);
  plVar1 = (long *)(unaff_x20 + _DAT_112d4c418);
  *plVar1 = lVar9;
  plVar1[1] = lVar7;
  func_0x000107c44fd8();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f28f34);
    (*pcVar3)();
  }
  lVar8 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  plVar1 = (long *)(unaff_x20 + _DAT_112d4c420);
  *plVar1 = lVar8;
  plVar1[1] = lVar4;
  func_0x000107c5d918();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c49ec8();
    func_0x000107c61170(param_2);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  func_0x000107c61170(uVar6);
  func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f28f34; end: 100f29777;  */

/* WARNING: Possible PIC construction at 0x000100f29088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f2910c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f29194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f291ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f295bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f29670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f296c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f296ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f2970c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f2971c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f2972c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f29720) */
/* WARNING: Removing unreachable block (ram,0x000100f29710) */
/* WARNING: Removing unreachable block (ram,0x000100f296f0) */
/* WARNING: Removing unreachable block (ram,0x000100f296c8) */
/* WARNING: Removing unreachable block (ram,0x000100f29674) */
/* WARNING: Removing unreachable block (ram,0x000100f295c0) */
/* WARNING: Removing unreachable block (ram,0x000100f29758) */
/* WARNING: Removing unreachable block (ram,0x000100f2961c) */
/* WARNING: Removing unreachable block (ram,0x000100f29678) */
/* WARNING: Removing unreachable block (ram,0x000100f29680) */
/* WARNING: Removing unreachable block (ram,0x000100f2965c) */
/* WARNING: Removing unreachable block (ram,0x000100f291f0) */
/* WARNING: Removing unreachable block (ram,0x000100f29198) */
/* WARNING: Removing unreachable block (ram,0x000100f2919c) */
/* WARNING: Removing unreachable block (ram,0x000100f29228) */
/* WARNING: Removing unreachable block (ram,0x000100f2922c) */
/* WARNING: Removing unreachable block (ram,0x000100f291b8) */
/* WARNING: Removing unreachable block (ram,0x000100f29110) */
/* WARNING: Removing unreachable block (ram,0x000100f29114) */
/* WARNING: Removing unreachable block (ram,0x000100f291f4) */
/* WARNING: Removing unreachable block (ram,0x000100f29134) */
/* WARNING: Removing unreachable block (ram,0x000100f2908c) */
/* WARNING: Removing unreachable block (ram,0x000100f29090) */
/* WARNING: Removing unreachable block (ram,0x000100f2909c) */
/* WARNING: Removing unreachable block (ram,0x000100f291fc) */
/* WARNING: Removing unreachable block (ram,0x000100f290b8) */
/* WARNING: Removing unreachable block (ram,0x000100f29094) */
/* WARNING: Removing unreachable block (ram,0x000100f290d0) */
/* WARNING: Removing unreachable block (ram,0x000100f29730) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f28f34(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c4d180();
  func_0x000107c61180();
  if (param_1 == 0) {
    return;
  }
  lVar1 = unaff_x20 + _DAT_112d4c380;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f29778; end: 100f2979b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f29778(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112d4c388;
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + _DAT_112d4c388,auStack_90,1,0);
    uVar5 = *(ulong *)(lVar3 + lVar1);
    if (uVar5 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar7 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar7 != 0) {
      if ((long)uVar7 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f285e8);
        (*pcVar2)();
      }
      func_0x000107c61434(uVar5);
      uVar8 = 0;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          uVar4 = *(ulong *)(uVar5 + uVar8 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar8;
          FUN_100f26d38(uVar8,uVar5);
        }
        if (*(long *)(uVar4 + _DAT_112d4c288) != 0) {
          func_0x000107c4eb48();
          func_0x000107c61180();
          func_0x000107c61170();
        }
        uVar8 = uVar8 + 1;
        func_0x000107c41864(*(undefined8 *)(uVar4 + _DAT_112d4c270));
        func_0x000107c61170(uVar4);
      } while (uVar7 != uVar8);
      func_0x000107c6142c(uVar5);
    }
    uVar6 = *(undefined8 *)(lVar3 + lVar1);
    *(undefined **)(lVar3 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61170(lVar3);
    func_0x000107c6142c(uVar6);
  }
  return;
}



/* Entry: 100f2979c; end: 100f297db;  */

void FUN_100f2979c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a1d10);
  return;
}



/* Entry: 100f297dc; end: 100f297e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100f297dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d4c3b0) + _DAT_113083770);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar3 = 0;
    param_2 = 0xe000000000000000;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c43f7c();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar2);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 100f297e4; end: 100f2981b;  */

void FUN_100f297e4(void)

{
  long unaff_x20;
  
  func_0x000100f283a8(*(undefined8 *)(unaff_x20 + 0x10),"onClosed()",&UNK_11036a548,FUN_100f29894,
                      &UNK_11036a560);
  return;
}



/* Entry: 100f2981c; end: 100f2983b;  */

void FUN_100f2981c(void)

{
  FUN_100f25a48();
  return;
}



/* Entry: 100f2983c; end: 100f29873;  */

void FUN_100f2983c(void)

{
  long unaff_x20;
  
  func_0x000100f283a8(*(undefined8 *)(unaff_x20 + 0x10),"clearAllLaunchedImpalaPages()",
                      &UNK_11036a368,0x100f298d8,&UNK_11036a510);
  return;
}



/* Entry: 100f29874; end: 100f29893;  */

void FUN_100f29874(void)

{
  func_0x000100f26130();
  return;
}



/* Entry: 100f29894; end: 100f298db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f29894(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d4c270);
    func_0x000107c615f0(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c41864(uVar2);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 100f298dc; end: 100f298e3; -[_TtC36MultiProfileSwitcherTrayPageLauncher38MultiProfileSwitcherTrayViewController pageViewName] */

undefined8 FUN_100f298dc(void)

{
  return 0x9c;
}



/* Entry: 100f298e4; end: 100f29927; -[_TtC36MultiProfileSwitcherTrayPageLauncher38MultiProfileSwitcherTrayViewController initWithValdiView:] */

void FUN_100f298e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000100f29a80();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithValdiView__1125f5a88,param_3);
  return;
}



/* Entry: 100f29928; end: 100f299d3; -[_TtC36MultiProfileSwitcherTrayPageLauncher38MultiProfileSwitcherTrayViewController initWithNibName:bundle:] */

undefined1 * FUN_100f29928(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_40;
  if (param_3 == 0) {
    param_2 = param_4;
    func_0x000107c61174();
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c();
  }
  func_0x000100f29a80();
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100f299d4; end: 100f29a4f; -[_TtC36MultiProfileSwitcherTrayPageLauncher38MultiProfileSwitcherTrayViewController initWithCoder:] */

undefined1 * FUN_100f299d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000100f29a80();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 100f29a50; end: 100f29a9f;  */

void FUN_100f29a50(void)

{
  func_0x000100f29a80();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f29aa0; end: 100f29ae3; -[_TtC36MultiProfileSwitcherTrayPageLauncher38MultiProfileSwitcherTrayViewController defaultProjectNameV2] */

void FUN_100f29aa0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fe18();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100f29ae4; end: 100f29aef; -[SCMultiProfileSwitcherTrayPageLauncherEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f29ae4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c4b0;
  func_0x000107c61428(param_1 + _DAT_112d4c4b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f29af0; end: 100f29afb; -[SCMultiProfileSwitcherTrayPageLauncherEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f29af0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4c4b0;
  func_0x000107c61428(param_1 + _DAT_112d4c4b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f29afc; end: 100f29b07; -[SCMultiProfileSwitcherTrayPageLauncherEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f29afc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c4b8;
  func_0x000107c61428(param_1 + _DAT_112d4c4b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f29b08; end: 100f29b13; -[SCMultiProfileSwitcherTrayPageLauncherEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f29b08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4c4b8;
  func_0x000107c61428(param_1 + _DAT_112d4c4b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f29b14; end: 100f29b1f; -[SCMultiProfileSwitcherTrayPageLauncherEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f29b14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c4c0;
  func_0x000107c61428(param_1 + _DAT_112d4c4c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f29b20; end: 100f29b2b; -[SCMultiProfileSwitcherTrayPageLauncherEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f29b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4c4c0;
  func_0x000107c61428(param_1 + _DAT_112d4c4c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f29b2c; end: 100f29b37; -[SCMultiProfileSwitcherTrayPageLauncherEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f29b2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c4c8;
  func_0x000107c61428(param_1 + _DAT_112d4c4c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f29b38; end: 100f29b43; -[SCMultiProfileSwitcherTrayPageLauncherEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f29b38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4c4c8;
  func_0x000107c61428(param_1 + _DAT_112d4c4c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f29b44; end: 100f29b4f; -[SCMultiProfileSwitcherTrayPageLauncherEntryPoint composerNetworkingBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f29b44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4c4d0;
  func_0x000107c61428(param_1 + _DAT_112d4c4d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


