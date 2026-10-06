/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10107c288; end: 10107c31f; -[_TtC23SCChangeUsernameFeature20EnterNewUsernamePage textField:shouldChangeCharactersInRange:replacementString:] */

undefined8
FUN_10107c288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5faec(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10107c18c(param_3,param_4,param_5,param_6,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return 1;
}



/* Entry: 10107c320; end: 10107c393; -[_TtC23SCChangeUsernameFeature20EnterNewUsernamePage textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10107c320(long param_1)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112d58620);
  func_0x000107c61174();
  func_0x000107c49cd8();
  if (iVar1 != 0) {
    uStack_38 = 0;
    uStack_40 = 1;
    uStack_30 = 6;
    func_0x0001002a64a8(&uStack_40);
  }
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 10107c394; end: 10107c3ab;  */

void FUN_10107c394(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    uVar5 = *param_1;
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      FUN_10107c5b8(uVar5,lVar4,uVar1,uVar2);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 10107c3ac; end: 10107c3cb;  */

void FUN_10107c3ac(void)

{
  func_0x00010107af58();
  return;
}



/* Entry: 10107c3cc; end: 10107c3eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107c3cc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d58618);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c550d8(uVar2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10107c3ec; end: 10107c40b;  */

void FUN_10107c3ec(void)

{
  func_0x00010107af58();
  return;
}



/* Entry: 10107c40c; end: 10107c413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107c40c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d58600);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c55258(uVar2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10107c414; end: 10107c43b;  */

void FUN_10107c414(void)

{
  FUN_10107bbc8();
  return;
}



/* Entry: 10107c43c; end: 10107c457;  */

void FUN_10107c43c(long param_1,long param_2)

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



/* Entry: 10107c458; end: 10107c47f;  */

void FUN_10107c458(void)

{
  FUN_10107bbc8();
  return;
}



/* Entry: 10107c480; end: 10107c487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107c480(void)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_78;
  undefined1 *puStack_70;
  undefined1 uStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_48;
  func_0x000107c61428(unaff_x20 + 0x10,puVar2,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_112d585f8);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar3;
    func_0x000107c5c82c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      lVar3 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
      lVar1 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar1 == 0) {
        func_0x000107c6142c(puVar2);
      }
      else {
        uVar4 = *(undefined8 *)(lVar1 + _DAT_112d585e0);
        func_0x000107c6157c(uVar4);
        func_0x000107c61170(lVar1);
        uStack_68 = 0;
        lStack_78 = lVar3;
        puStack_70 = puVar2;
        func_0x0001002a64a8(&lStack_78);
        func_0x000107c6142c(puVar2);
        func_0x000107c61574(uVar4);
      }
    }
  }
  return;
}



/* Entry: 10107c488; end: 10107c4a7;  */

void FUN_10107c488(void)

{
  FUN_10107bb40(5);
  return;
}



/* Entry: 10107c4a8; end: 10107c53f;  */

undefined8 FUN_10107c4a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d58658;
  func_0x0001000285a8(0x112d58658,&UNK_10d91eee0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10107c540; end: 10107c557;  */

undefined8 * FUN_10107c540(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10107c558; end: 10107c5ab;  */

void FUN_10107c558(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d36848 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x00010107c84c(0xff,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112d36848 = puVar2;
  return;
}



/* Entry: 10107c5ac; end: 10107c5b7;  */

void FUN_10107c5ac(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar15 = *param_1;
  puVar12 = auStack_78;
  func_0x000107c61428(lVar2 + 0x10,puVar12,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10107b91c(uVar15);
    uVar3 = uVar15;
    func_0x00010108f8c8();
    puVar4 = &UNK_11037cda0;
    func_0x000107c613fc(&UNK_11037cda0,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c5fadc(uVar3,puVar12);
    func_0x000107c6142c(puVar12);
    pcStack_88 = FUN_10107c7f8;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_100de205c;
    puStack_90 = &UNK_11037cdb8;
    ppuVar5 = &puStack_a8;
    puStack_80 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar6 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61574(puStack_80);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61174();
    if ((ulong)puVar4 >> 0x3e == 0) {
      puVar7 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar7 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar4) {
        puVar7 = puVar4;
      }
      func_0x000107c60480(puVar7);
    }
    puVar7 = puVar7 + 1;
    uVar8 = 0;
    FUN_10108329c(0,puVar7,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar14 = uVar8 & 0xffffffffffffff8;
    uVar10 = *(ulong *)(uVar14 + 0x10);
    puVar4 = (undefined *)(uVar10 + 1);
    uVar11 = uVar8;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar10) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
      puVar7 = puVar4;
      FUN_10108329c(uVar11,puVar4,1,uVar8);
      uVar14 = uVar11 & 0xffffffffffffff8;
    }
    *(undefined **)(uVar14 + 0x10) = puVar4;
    *(undefined **)(uVar14 + uVar10 * 8 + 0x20) = puVar6;
    func_0x000107c61174(uVar15);
    uVar3 = uVar15;
    func_0x00010108f8e8();
    puVar4 = PTR_PTR_1126aed78;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar9,uVar13);
    func_0x000107c5fadc(uVar3,puVar7);
    func_0x000107c6142c(puVar7);
    uVar13 = 0;
    func_0x00010107c84c(0,0x112d360a8,&PTR_PTR_1126aed70);
    uVar10 = uVar11;
    func_0x000107c5fc48(uVar11,uVar13);
    func_0x000107c454c0();
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar10);
    func_0x000107c53fcc(puVar4);
    puVar7 = puVar4;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10107b91c);
      (*pcVar1)();
    }
    func_0x000107c59ba8();
    func_0x000107c61170(puVar7);
    func_0x000107c4f018(lVar2);
    func_0x000107c6142c(uVar11);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 10107c5b8; end: 10107c7f7;  */

void FUN_10107c5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar2 = &puStack_90;
  uVar5 = param_1;
  uVar7 = param_2;
  func_0x00010108f8b4();
  puVar1 = &UNK_11037ccb0;
  func_0x000107c613fc(&UNK_11037ccb0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  func_0x000107c6157c(puVar1);
  func_0x000107c5fadc(uVar5,uVar7);
  func_0x000107c6142c(uVar7);
  pcStack_70 = FUN_10107c88c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100de205c;
  puStack_78 = &UNK_11037ce30;
  puStack_68 = puVar1;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar5);
  puVar4 = puStack_68;
  func_0x000107c61574(puVar1);
  func_0x000107c61574();
  FUN_100de9c28();
  func_0x000107c613fc();
  *(undefined8 *)(puVar4 + 0x18) = 3;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined **)(puVar4 + 0x20) = puVar3;
  puVar1 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c61174(puVar3);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c6142c(param_4);
  uVar5 = 0;
  func_0x00010107c84c(0,0x112d360a8,&PTR_PTR_1126aed70);
  puVar6 = puVar4;
  func_0x000107c5fc48(puVar4,uVar5);
  func_0x000107c61574(puVar4);
  func_0x000107c48d50(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar6);
  func_0x000107c4f018();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10107c7f8; end: 10107c7ff;  */

void FUN_10107c7f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_11037cdf0;
  func_0x000107c613fc(&UNK_11037cdf0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  pcStack_40 = FUN_10107c800;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11037ce08;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10107c800; end: 10107c88b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10107c800(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = 0;
  uStack_40 = 8;
  uStack_30 = 6;
  func_0x0001002a64a8(&uStack_40);
  return;
}



/* Entry: 10107c88c; end: 10107c8d3;  */

void FUN_10107c88c(void)

{
  FUN_10107bbc8();
  return;
}



/* Entry: 10107c8d4; end: 10107c93f;  */

void FUN_10107c8d4(long param_1,long param_2)

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



/* Entry: 10107c940; end: 10107c9eb;  */

void FUN_10107c940(void)

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



/* Entry: 10107c9ec; end: 10107ca43;  */

uint FUN_10107c9ec(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_10107f630(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10107ca44; end: 10107ca4b;  */

void FUN_10107ca44(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 10107ca4c; end: 10107d477;  */

void FUN_10107ca4c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5f83c();
  lStack_b8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar13 = (long)&lStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0;
  func_0x000107c5f804();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar14 = (lVar13 - extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar15 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(unaff_x20 + 0x80);
  if (lVar10 != 0) {
    func_0x000107c6157c(lVar10);
    func_0x000107c5f848();
    func_0x000107c61574(lVar10);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  uVar5 = *(ulong *)(unaff_x20 + 0x30);
  if (((uVar5 != *(ulong *)(unaff_x20 + 0x20)) ||
      (*(long *)(unaff_x20 + 0x38) != *(long *)(unaff_x20 + 0x28))) &&
     (func_0x000107c605b8(), (uVar5 & 1) == 0)) {
    puVar6 = &UNK_11037d018;
    lStack_d0 = lVar13 - extraout_x12;
    lStack_c8 = lVar2;
    func_0x000107c613fc(&UNK_11037d018,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    pcStack_88 = FUN_10107f8f4;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_11037d030;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar6;
    func_0x000107c60bc4();
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuStack_c0 = ppuVar7;
    func_0x0001001c7eec();
    func_0x000107c6157c(puVar6);
    uVar9 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar8 = uVar9;
    func_0x0001001c7f30();
    func_0x000107c60264(lVar15,&puStack_b0,uVar9,uVar8,lVar4,ppuVar7);
    func_0x000107c5f850();
    func_0x000107c613fc();
    func_0x000107c5f844(lVar15,ppuStack_c0);
    puVar1 = puStack_80;
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar1);
    if (*(double *)(unaff_x20 + 0x70) == 0.0) {
      func_0x000107c5f84c();
      lVar2 = lVar15;
    }
    else {
      FUN_10107f918(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      (**(code **)(lVar12 + 0x68))
                (lVar14,*(undefined4 *)
                         PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3);
      lVar2 = lVar14;
      func_0x000107c5fff0();
      (**(code **)(lVar12 + 8))(lVar14,lVar3);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
      *(long *)(unaff_x20 + 0x78) = lVar2;
      func_0x000107c61170(uVar9);
      lVar2 = *(long *)(unaff_x20 + 0x78);
      if (lVar2 != 0) {
        func_0x000107c61174();
        func_0x000107c5f830(lVar13);
        lVar3 = lStack_d0;
        func_0x000107c5f85c(lStack_d0,*(undefined8 *)(unaff_x20 + 0x70),lVar13);
        lVar4 = lStack_c8;
        pcVar11 = *(code **)(lStack_b8 + 8);
        (*pcVar11)(lVar13,lStack_c8);
        func_0x000107c5ffcc(lVar3,lVar15);
        func_0x000107c61170(lVar2);
        (*pcVar11)(lVar3,lVar4);
      }
      lVar2 = *(long *)(unaff_x20 + 0x80);
      *(long *)(unaff_x20 + 0x80) = lVar15;
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 10107d478; end: 10107d543;  */

void FUN_10107d478(long param_1,long param_2,char param_3,long param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  if (param_3 == '\0') {
    FUN_10107ca4c();
  }
  else if (param_3 == '\x05') {
    func_0x0001000285a8(0x112d58838,&UNK_10d91f0d0);
    if (param_1 == 2) {
      uStack_50 = *(undefined8 *)(param_4 + 0x20);
      uStack_48 = *(undefined8 *)(param_4 + 0x28);
      uStack_40 = 0;
    }
    else {
      uStack_48 = 0;
      uStack_50 = 8;
      uStack_40 = 6;
    }
    func_0x000100854cb0(&uStack_50);
  }
  else if (param_3 == '\x06') {
    if (param_1 == 0 && param_2 == 0) {
      func_0x00010107d544();
    }
    else if (param_1 == 5 && param_2 == 0) {
      func_0x00010107d77c();
    }
  }
  return;
}



/* Entry: 10107d544; end: 10107d8bf;  */

undefined ** FUN_10107d544(void)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined *puVar10;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined1 auStack_58 [24];
  
  puVar10 = *(undefined **)(unaff_x20 + 0x98);
  if ((puVar10 == (undefined *)0x0) || (lVar9 = *(long *)(unaff_x20 + 0x90), lVar9 == 0)) {
    puVar10 = (undefined *)0x112d58838;
    puVar3 = &UNK_10d91f0d0;
    func_0x0001000285a8();
    FUN_10108f90c();
    uStack_78 = CONCAT71(uStack_78._1_7_,2);
    ppuVar5 = &puStack_88;
    puStack_88 = puVar10;
    puStack_80 = puVar3;
    func_0x000100854cb0(ppuVar5);
    func_0x000107c6142c(puVar3);
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c61434(uVar8);
    func_0x000107c615f0(lVar9);
    func_0x000107c615f0(puVar10);
    uVar7 = uVar8;
    func_0x000107c5fadc(uVar2);
    func_0x000107c6142c(uVar8);
    puVar3 = puVar10;
    func_0x000107c42a3c();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (puVar3 == (undefined *)0x0) {
      uVar2 = 0x112d58840;
      func_0x0001000285a8(0x112d58840,&UNK_10d91f0e0);
      func_0x000107c613fc();
      ppuVar5 = (undefined **)0x1;
      func_0x00010008747c(1,uVar2);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
      func_0x000107c5fb1c(uVar2,uVar8);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar8);
      pcStack_68 = FUN_10107f958;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_80 = (undefined *)0x42000000;
      uStack_78 = 0x10107df9c;
      puStack_70 = &UNK_11037d058;
      ppuVar6 = &puStack_88;
      ppuStack_60 = ppuVar5;
      func_0x000107c60bc4(ppuVar6);
      ppuVar1 = ppuStack_60;
      func_0x000107c6157c(ppuVar5);
      func_0x000107c61574(ppuVar1);
      func_0x000107c5c3e0(lVar9);
      func_0x000107c615e8(puVar10);
      func_0x000107c615e8(lVar9);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(uVar2);
    }
    else {
      puVar4 = puVar3;
      func_0x000107c5faec();
      func_0x000107c61170(puVar3);
      uVar2 = 0x112d58838;
      func_0x0001000285a8(0x112d58838,&UNK_10d91f0d0);
      uStack_78 = CONCAT71(uStack_78._1_7_,2);
      ppuVar5 = &puStack_88;
      puStack_88 = puVar4;
      puStack_80 = (undefined *)uVar7;
      func_0x000100854cb0(ppuVar5,uVar2);
      func_0x000107c6142c(uVar7);
      func_0x000107c615e8(puVar10);
      func_0x000107c615e8(lVar9);
    }
  }
  return ppuVar5;
}



/* Entry: 10107d8c0; end: 10107d9b3;  */

void FUN_10107d8c0(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 uStack_30;
  
  if ((param_1 & 1) == 0) {
    uStack_40 = 0;
    if (param_3 != 0) {
      uStack_40 = param_2;
    }
    lVar1 = -0x2000000000000000;
    if (param_3 != 0) {
      lVar1 = param_3;
    }
    uStack_30 = 4;
    lStack_38 = lVar1;
    func_0x000107c61434(param_3);
    func_0x000100087c34(&uStack_40);
    func_0x000107c6142c(lVar1);
  }
  else {
    lStack_38 = 0;
    uStack_40 = 7;
    uStack_30 = 6;
    func_0x000100087c34(&uStack_40);
  }
  return;
}



/* Entry: 10107d9b4; end: 10107dc0b;  */

void FUN_10107d9b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  func_0x000107c506c8();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar3 = &UNK_11037d090;
    func_0x000107c613fc(&UNK_11037d090,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x10107f960;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_10107f968;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100de6bdc;
    puStack_78 = &UNK_11037d0a8;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_11037d0e0;
    func_0x000107c613fc(&UNK_11037d0e0,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_10107f988;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    pcStack_70 = FUN_10107f990;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_10107dd98;
    puStack_78 = &UNK_11037d0f8;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_11037d130;
    func_0x000107c613fc(&UNK_11037d130,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_10107f9b0;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    pcStack_70 = FUN_10107f9b8;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_10107debc;
    puStack_78 = &UNK_11037d148;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_11037d180;
    func_0x000107c613fc(&UNK_11037d180,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_10107f9d8;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    pcStack_70 = (code *)0x10107fbf4;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x100de58f0;
    puStack_78 = &UNK_11037d198;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c4c76c(param_1);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61578(param_2,4);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10107dc0c);
  (*pcVar2)();
}



/* Entry: 10107dc0c; end: 10107dc57;  */

void FUN_10107dc0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_28 = 1;
  uStack_38 = param_1;
  uStack_30 = param_2;
  func_0x000107c61434(param_2);
  func_0x000100087c34(&uStack_38);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 10107dc58; end: 10107dd97;  */

void FUN_10107dc58(undefined *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  lVar8 = *(long *)(param_5 + 0x10);
  lVar7 = param_2;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar8 != 0) {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar7 = lVar8;
    FUN_10107f260(0,lVar8,0);
    puVar9 = (undefined8 *)(param_5 + 0x28);
    puVar6 = puStack_78;
    do {
      uVar2 = puVar9[-1];
      uVar4 = *puVar9;
      uVar3 = *(ulong *)(puVar6 + 0x10);
      uVar5 = *(ulong *)(puVar6 + 0x18);
      lVar1 = uVar3 + 1;
      puStack_78 = puVar6;
      func_0x000107c61434(uVar4);
      if (uVar5 >> 1 <= uVar3) {
        lVar7 = lVar1;
        FUN_10107f260(1 < uVar5,lVar1,1);
        puVar6 = puStack_78;
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar6 + 0x10) = lVar1;
      *(undefined8 *)(puVar6 + uVar3 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(puVar6 + uVar3 * 0x10 + 0x28) = uVar4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  lStack_70 = 0;
  uStack_68 = 3;
  puStack_78 = puVar6;
  func_0x000100087c34(&puStack_78);
  func_0x000107c6142c();
  lVar8 = param_2;
  if (param_2 == 0) {
    FUN_10108f9d8();
    param_1 = puVar6;
    lVar8 = lVar7;
  }
  uStack_68 = 2;
  puStack_78 = param_1;
  lStack_70 = lVar8;
  func_0x000107c61434(param_2);
  func_0x000100087c34(&puStack_78);
  func_0x000107c6142c(lVar8);
  return;
}



/* Entry: 10107dd98; end: 10107de4f;  */

/* WARNING: Possible PIC construction at 0x00010107de28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010107de2c) */

void FUN_10107dd98(long param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_2 == 0) {
    lVar3 = 0;
    lVar2 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c5faec(param_2);
    lVar2 = param_2;
    param_2 = lVar3;
  }
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  (*pcVar1)(lVar2,lVar3,param_3,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 10107de50; end: 10107debb;  */

void FUN_10107de50(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_4;
  if (param_4 == 0) {
    FUN_10108f9d8();
    param_3 = param_1;
    lVar1 = param_2;
  }
  uStack_38 = 2;
  uStack_48 = param_3;
  lStack_40 = lVar1;
  func_0x000107c61434(param_4);
  func_0x000100087c34(&uStack_48);
  func_0x000107c6142c(lVar1);
  return;
}



/* Entry: 10107debc; end: 10107df33;  */

/* WARNING: Possible PIC construction at 0x00010107df18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010107df1c) */

void FUN_10107debc(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c5faec(param_2);
  if (param_3 != 0) {
    func_0x000107c5faec(param_3);
  }
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10107df34; end: 10107dfe7;  */

void FUN_10107df34(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_2;
  if (param_2 == 0) {
    FUN_10108f9d8();
  }
  uStack_38 = 2;
  uStack_48 = param_1;
  lStack_40 = lVar1;
  func_0x000107c61434(param_2);
  func_0x000100087c34(&uStack_48);
  func_0x000107c6142c(lVar1);
  return;
}



/* Entry: 10107dfe8; end: 10107e03b;  */

/* WARNING: Possible PIC construction at 0x00010107dffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010107e000) */

void FUN_10107dfe8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 10107e03c; end: 10107e0a7;  */

long FUN_10107e03c(long param_1)

{
  func_0x000103dbf870();
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x78));
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x80));
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x88));
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x90));
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x98));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0xa8));
  func_0x0001000834e4(param_1 + 0xb0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(param_1 + 0xe0));
  return param_1;
}



/* Entry: 10107e0a8; end: 10107e187;  */

void FUN_10107e0a8(undefined8 param_1)

{
  FUN_10107e03c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0xe9,7);
  return;
}



/* Entry: 10107e188; end: 10107e1f3;  */

void FUN_10107e188(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x48));
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar2);
  func_0x000107c60eb0("SCChangeUsernameFeature.EnterNewUsernamePageBusinessLogic",0x39,
                      "init(initialState:)",0x13,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10107e1f4);
  (*pcVar1)();
}



/* Entry: 10107e1f4; end: 10107e263;  */

void FUN_10107e1f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = param_3[5];
  uStack_50 = param_3[4];
  uStack_38 = param_3[7];
  uStack_40 = param_3[6];
  uStack_28 = param_3[9];
  uStack_30 = param_3[8];
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  uStack_58 = param_3[3];
  uStack_60 = param_3[2];
  func_0x00010107cd9c(&uStack_c0,*param_2,param_2[1],*(undefined1 *)(param_2 + 2),&uStack_70);
  param_1[5] = uStack_98;
  param_1[4] = uStack_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[9] = uStack_78;
  param_1[8] = uStack_80;
  param_1[1] = uStack_b8;
  *param_1 = uStack_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  return;
}



/* Entry: 10107e264; end: 10107e287;  */

void FUN_10107e264(long *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  lVar1 = *param_1;
  cVar2 = (char)param_1[2];
  if (cVar2 == '\0') {
    FUN_10107ca4c();
  }
  else if (cVar2 == '\x05') {
    func_0x0001000285a8(0x112d58838,&UNK_10d91f0d0);
    if (lVar1 == 2) {
      uStack_50 = *(undefined8 *)(param_2 + 0x20);
      uStack_48 = *(undefined8 *)(param_2 + 0x28);
      uStack_40 = 0;
    }
    else {
      uStack_48 = 0;
      uStack_50 = 8;
      uStack_40 = 6;
    }
    func_0x000100854cb0(&uStack_50);
  }
  else if (cVar2 == '\x06') {
    if (lVar1 == 0 && param_1[1] == 0) {
      func_0x00010107d544();
    }
    else if (lVar1 == 5 && param_1[1] == 0) {
      func_0x00010107d77c();
    }
  }
  return;
}



/* Entry: 10107e288; end: 10107e30b;  */

void FUN_10107e288(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  puVar1 = &uStack_50;
  func_0x0001000285a8(0x112d58838,&UNK_10d91f0d0);
  uStack_48 = 0;
  uStack_50 = 3;
  uStack_40 = 6;
  func_0x000107c6157c(param_1);
  func_0x000100854cb0(&uStack_50);
  func_0x000103dbf524();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 10107e30c; end: 10107e30f;  */

void FUN_10107e30c(void)

{
  return;
}



/* Entry: 10107e310; end: 10107e37b;  */

long FUN_10107e310(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10107e37c; end: 10107e3ff;  */

undefined8 * FUN_10107e37c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar4 = param_2[9];
  param_1[9] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 10107e400; end: 10107e4cb;  */

undefined8 * FUN_10107e400(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10107e4cc; end: 10107e547;  */

undefined8 * FUN_10107e4cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10107e548; end: 10107e663;  */

int FUN_10107e548(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10107e664; end: 10107e6ff;  */

undefined8 * FUN_10107e664(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010107e5f4(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10107e700; end: 10107e743;  */

undefined8 * FUN_10107e700(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010107e634(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10107e744; end: 10107e81f;  */

int FUN_10107e744(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf9 < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfa;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 7) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10107e820; end: 10107e88f;  */

void FUN_10107e820(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_2 + 8);
  if (bVar2 - 3 < 2) {
    func_0x00010108fa14();
  }
  else {
    if (bVar2 == 2) {
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
      return;
    }
    if (bVar2 != 1) {
      *param_1 = 0;
      param_1[1] = 0xe000000000000000;
      return;
    }
    func_0x00010108f9fc();
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 10107e890; end: 10107e993;  */

void FUN_10107e890(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (*(byte *)(param_2 + 0x40) - 3 < 2) {
    uVar1 = uRam00000001137ff170;
    if (lRam0000000112d59228 != -1) {
      func_0x000107c61568(0x112d59228,0x1010907d8);
      uVar1 = uRam00000001137ff170;
    }
  }
  else {
    if (*(byte *)(param_2 + 0x40) != 2) {
      puVar2 = PTR__OBJC_CLASS___CIImage_1126b3128;
      func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
      func_0x000107c4253c();
      func_0x000107c61180();
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      func_0x000107c45b00();
      func_0x000107c61170(puVar2);
      *param_1 = puVar3;
      return;
    }
    uVar1 = uRam00000001137ff178;
    if (lRam0000000112d59230 != -1) {
      func_0x000107c61568(0x112d59230,FUN_1010907b4);
      uVar1 = uRam00000001137ff178;
    }
  }
  *param_1 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10107e994; end: 10107e9df;  */

void FUN_10107e994(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  *param_1 = puVar1;
  return;
}



/* Entry: 10107e9e0; end: 10107ea27;  */

void FUN_10107e9e0(undefined8 param_1,long param_2)

{
  *(bool *)param_1 = *(byte *)(param_2 + 0x40) - 3 < 2;
  return;
}



/* Entry: 10107ea28; end: 10107ea6f;  */

void FUN_10107ea28(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x40) == '\x04') {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c61434();
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10107ea70; end: 10107eb8b;  */

void FUN_10107ea70(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (*(char *)(param_2 + 0x40) == '\b') {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    FUN_10108fa30();
    lVar8 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 2;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    func_0x000107c5fb1c();
    *(undefined **)(lVar8 + 0x38) = PTR___sSSN_11034da80;
    uVar2 = uVar1;
    func_0x00010075bbf0();
    *(undefined8 *)(lVar8 + 0x40) = uVar2;
    *(undefined8 *)(lVar8 + 0x20) = uVar1;
    *(undefined8 *)(lVar8 + 0x28) = uVar4;
    lVar6 = param_3;
    func_0x000107c5fb00(param_2,param_3,lVar8);
    lVar7 = lVar6;
    func_0x000107c6142c();
    func_0x00010108fafc();
    lVar8 = param_3;
    lVar9 = lVar7;
    func_0x00010108fbc8();
    lVar3 = lVar8;
    lVar5 = lVar9;
    FUN_10108fc94();
  }
  else {
    param_2 = 0;
    lVar6 = 0;
    param_3 = 0;
    lVar7 = 0;
    lVar8 = 0;
    lVar9 = 0;
    lVar3 = 0;
    lVar5 = 0;
  }
  *param_1 = param_2;
  param_1[1] = lVar6;
  param_1[2] = param_3;
  param_1[3] = lVar7;
  param_1[4] = lVar8;
  param_1[5] = lVar9;
  param_1[6] = lVar3;
  param_1[7] = lVar5;
  return;
}



/* Entry: 10107eb8c; end: 10107ece7;  */

void FUN_10107eb8c(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_2 + 0x40) == '\v') {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010108fca8();
    lVar3 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
    lVar4 = lVar3;
    func_0x00010075bbf0();
    *(long *)(lVar3 + 0x40) = lVar4;
    *(undefined8 *)(lVar3 + 0x20) = uVar1;
    *(undefined8 *)(lVar3 + 0x28) = uVar2;
    func_0x000107c61434(uVar2);
    lVar4 = param_3;
    func_0x000107c5fb00(param_2,param_3,lVar3);
    func_0x000107c6142c(param_3);
  }
  else {
    param_2 = 0;
    lVar4 = 0;
  }
  *param_1 = param_2;
  param_1[1] = lVar4;
  return;
}



/* Entry: 10107ece8; end: 10107ed43;  */

undefined * FUN_10107ece8(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  
  puVar3 = PTR___sSbSQsWP_11034dd50;
  puVar1 = PTR___sSbN_11034dd40;
  pcVar2 = FUN_10107e9e0;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_10107e9e0,0,puVar1);
  func_0x000107c61574(param_1);
  func_0x000104884898(puVar3);
  func_0x000107c61574(pcVar2);
  return puVar3;
}



/* Entry: 10107ed44; end: 10107edbf;  */

undefined * FUN_10107ed44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x000103dbf46c();
  uVar1 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(param_1);
  uVar2 = 0x10107e814;
  func_0x0001000bfde0(0x10107e814,0,PTR___sSSN_11034da80);
  func_0x000107c61574(uVar1);
  puVar3 = PTR___sSSSQsWP_11034da98;
  func_0x000104884898(PTR___sSSSQsWP_11034da98);
  func_0x000107c61574(uVar2);
  return puVar3;
}



/* Entry: 10107edc0; end: 10107edff;  */

undefined * FUN_10107edc0(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  
  puVar3 = PTR___sSSSQsWP_11034da98;
  puVar1 = PTR___sSSN_11034da80;
  pcVar2 = FUN_10107e820;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_10107e820,0,puVar1);
  func_0x000107c61574(param_1);
  func_0x000104884898(puVar3);
  func_0x000107c61574(pcVar2);
  return puVar3;
}



/* Entry: 10107ee00; end: 10107ee97;  */

undefined8
FUN_10107ee00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000103dbf46c();
  uVar1 = 0;
  FUN_10107f918(0,param_3,param_4);
  func_0x0001000bfde0(param_5,0,uVar1);
  func_0x000107c61574(param_1);
  func_0x00010107f8b4(param_6,param_3,param_4);
  func_0x000104884898();
  func_0x000107c61574(param_5);
  return param_6;
}



/* Entry: 10107ee98; end: 10107eeb3;  */

undefined * FUN_10107ee98(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR___sSbSQsWP_11034dd50;
  puVar1 = PTR___sSbN_11034dd40;
  uVar2 = 0x10107ea10;
  func_0x000103dbf46c();
  func_0x0001000bfde0(0x10107ea10,0,puVar1);
  func_0x000107c61574(param_1);
  func_0x000104884898(puVar3);
  func_0x000107c61574(uVar2);
  return puVar3;
}



/* Entry: 10107eeb4; end: 10107ef23;  */

undefined8
FUN_10107eeb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000103dbf46c();
  func_0x0001000bfde0(param_3,0,param_4);
  func_0x000107c61574(param_1);
  func_0x000104884898(param_5);
  func_0x000107c61574(param_3);
  return param_5;
}



/* Entry: 10107ef24; end: 10107efc7;  */

undefined8 FUN_10107ef24(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  func_0x000103dbf46c();
  uVar1 = 0x112d58818;
  func_0x0001000285a8(0x112d58818,&UNK_10d91f0c0);
  pcVar2 = FUN_10107ea28;
  func_0x0001000bfde0(FUN_10107ea28,0,uVar1);
  func_0x000107c61574(param_1);
  func_0x00010487ba50();
  func_0x000107c61574(pcVar2);
  uVar1 = 0x112d58820;
  FUN_10107f858(0x112d58820,0x112d58828,&UNK_10d91f0c8,&UNK_10d91fcc8);
  func_0x000104884898();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 10107efc8; end: 10107f19b;  */

undefined8 FUN_10107efc8(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  func_0x000103dbf46c();
  uVar1 = 0x112d58800;
  func_0x0001000285a8(0x112d58800,&UNK_10d91f300);
  pcVar2 = FUN_10107ea70;
  func_0x0001000bfde0(FUN_10107ea70,0,uVar1);
  func_0x000107c61574(param_1);
  uVar1 = 0x112d58808;
  FUN_10107f7b0(0x112d58808,0x112d58800,&UNK_10d91f300,FUN_10107f818);
  func_0x000104884898();
  func_0x000107c61574(pcVar2);
  return uVar1;
}



/* Entry: 10107f19c; end: 10107f1db;  */

void FUN_10107f19c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d587f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91f43c;
  func_0x000107c61520(&UNK_10d91f43c,&UNK_11037dac8);
  puRam0000000112d587f8 = puVar1;
  return;
}



/* Entry: 10107f1dc; end: 10107f25f;  */

undefined8 FUN_10107f1dc(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_2 + 0x10)) {
    if ((lVar3 != 0) && (param_1 != param_2)) {
      plVar4 = (long *)(param_2 + 0x28);
      plVar5 = (long *)(param_1 + 0x28);
      do {
        uVar1 = plVar5[-1];
        if ((uVar1 != plVar4[-1] || *plVar5 != *plVar4) && (func_0x000107c605b8(), (uVar1 & 1) == 0)
           ) goto LAB_10107f244;
        plVar4 = plVar4 + 2;
        plVar5 = plVar5 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    uVar2 = 1;
  }
  else {
LAB_10107f244:
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10107f260; end: 10107f27b;  */

void FUN_10107f260(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10107f27c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10107f27c; end: 10107f3ab;  */

undefined * FUN_10107f27c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10107f3ac);
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
    puVar3 = (undefined *)0x112d58848;
    func_0x0001000285a8(0x112d58848,&UNK_10d91f0e8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
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
    uVar5 = 0x112d58828;
    func_0x0001000285a8(0x112d58828,&UNK_10d91f0c8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10107f3ac; end: 10107f62f;  */

/* WARNING: Possible PIC construction at 0x00010107f474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010107f478) */
/* WARNING: Removing unreachable block (ram,0x00010107f47c) */

ulong FUN_10107f3ac(ulong param_1,long param_2,byte param_3,ulong param_4,long param_5,char param_6)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_3 < 3) {
    if (param_3 == 0) {
      if (param_6 != '\0') {
        return 0;
      }
    }
    else if (param_3 == 1) {
      if (param_6 != '\x01') {
        return 0;
      }
    }
    else if (param_6 != '\x02') {
      return 0;
    }
  }
  else {
    if (4 < param_3) {
      if (param_3 == 5) {
        if (param_6 != '\x05') {
          return 0;
        }
        return (ulong)(param_1 == param_4);
      }
      uVar1 = param_2 + (ulong)(param_1 >= 4);
      if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 4))) {
        uVar1 = param_2 + (ulong)(param_1 >= 2);
        if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 2))) {
          if (param_1 == 0 && param_2 == 0) {
            if (param_6 != '\x06') {
              return 0;
            }
            if (param_5 != 0 || param_4 != 0) {
              return 0;
            }
            return 1;
          }
          if (param_6 != '\x06') {
            return 0;
          }
          if (param_4 != 1) {
            return 0;
          }
        }
        else if (param_1 == 2 && param_2 == 0) {
          if (param_6 != '\x06') {
            return 0;
          }
          if (param_4 != 2) {
            return 0;
          }
        }
        else {
          if (param_6 != '\x06') {
            return 0;
          }
          if (param_4 != 3) {
            return 0;
          }
        }
      }
      else {
        uVar1 = param_2 + (ulong)(param_1 >= 6);
        if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 6))) {
          if (param_1 == 4 && param_2 == 0) {
            if (param_6 != '\x06') {
              return 0;
            }
            if (param_4 != 4) {
              return 0;
            }
          }
          else {
            if (param_6 != '\x06') {
              return 0;
            }
            if (param_4 != 5) {
              return 0;
            }
          }
        }
        else if (param_1 == 6 && param_2 == 0) {
          if (param_6 != '\x06') {
            return 0;
          }
          if (param_4 != 6) {
            return 0;
          }
        }
        else if (param_1 == 7 && param_2 == 0) {
          if (param_6 != '\x06') {
            return 0;
          }
          if (param_4 != 7) {
            return 0;
          }
        }
        else {
          if (param_6 != '\x06') {
            return 0;
          }
          if (param_4 != 8) {
            return 0;
          }
        }
      }
      if (param_5 == 0) {
        return 1;
      }
      return 0;
    }
    if (param_3 == 3) {
      if (param_6 != '\x03') {
        return 0;
      }
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 != *(long *)(param_4 + 0x10)) {
        return 0;
      }
      if (lVar2 == 0) {
        return 1;
      }
      if (param_1 == param_4) {
        return 1;
      }
      plVar3 = (long *)(param_4 + 0x28);
      plVar4 = (long *)(param_1 + 0x28);
      while( true ) {
        param_1 = plVar4[-1];
        param_2 = *plVar4;
        param_4 = plVar3[-1];
        param_5 = *plVar3;
        if (param_1 != param_4 || param_2 != param_5) break;
        plVar3 = plVar3 + 2;
        plVar4 = plVar4 + 2;
        lVar2 = lVar2 + -1;
        if (lVar2 == 0) {
          return 1;
        }
      }
      goto code_r0x000107c605b8;
    }
    if (param_6 != '\x04') {
      return 0;
    }
  }
  if ((param_1 == param_4) && (param_2 == param_5)) {
    return 1;
  }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(param_1,param_2,param_4,param_5,0);
  return param_1;
}



/* Entry: 10107f630; end: 10107f7af;  */

undefined8 FUN_10107f630(ulong *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uVar2 = param_1[4];
    if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
      uVar2 = param_1[6];
      if ((((uVar2 == param_2[6]) && (param_1[7] == param_2[7])) ||
          (func_0x000107c605b8(), (uVar2 & 1) != 0)) && ((char)param_1[8] == (char)param_2[8])) {
        uVar2 = param_1[9];
        uVar3 = param_2[9];
        lVar4 = *(long *)(uVar2 + 0x10);
        if (lVar4 == *(long *)(uVar3 + 0x10)) {
          if ((lVar4 != 0) && (uVar2 != uVar3)) {
            plVar5 = (long *)(uVar3 + 0x28);
            plVar6 = (long *)(uVar2 + 0x28);
            do {
              uVar2 = plVar6[-1];
              if ((uVar2 != plVar5[-1] || *plVar6 != *plVar5) &&
                 (func_0x000107c605b8(), (uVar2 & 1) == 0)) goto LAB_10107f244;
              plVar5 = plVar5 + 2;
              plVar6 = plVar6 + 2;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
          uVar1 = 1;
        }
        else {
LAB_10107f244:
          uVar1 = 0;
        }
        return uVar1;
      }
    }
  }
  return 0;
}



/* Entry: 10107f7b0; end: 10107f817;  */

void FUN_10107f7b0(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puVar2 = PTR___sxSgSQsSQRzlMc_11034f190;
    uStack_38 = uVar1;
    func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,param_2,&uStack_38);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 10107f818; end: 10107f857;  */

void FUN_10107f818(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d58810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91f414;
  func_0x000107c61520(&UNK_10d91f414,&UNK_11037da40);
  puRam0000000112d58810 = puVar1;
  return;
}



/* Entry: 10107f858; end: 10107f8f3;  */

void FUN_10107f858(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puStack_28;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puStack_28 = PTR___sSSSQsWP_11034da98;
    func_0x000107c61520(param_4,param_2,&puStack_28);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10107f8f4; end: 10107f917;  */

void FUN_10107f8f4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x88);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 6;
    func_0x0001002a64a8(&uStack_50);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 10107f918; end: 10107f957;  */

void FUN_10107f918(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10107f958; end: 10107f967;  */

void FUN_10107f958(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  func_0x000107c506c8();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar3 = &UNK_11037d090;
    func_0x000107c613fc(&UNK_11037d090,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x10107f960;
    *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_10107f968;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100de6bdc;
    puStack_78 = &UNK_11037d0a8;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c6157c();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_11037d0e0;
    func_0x000107c613fc(&UNK_11037d0e0,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_10107f988;
    *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
    pcStack_70 = FUN_10107f990;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_10107dd98;
    puStack_78 = &UNK_11037d0f8;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c6157c();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_11037d130;
    func_0x000107c613fc(&UNK_11037d130,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_10107f9b0;
    *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
    pcStack_70 = FUN_10107f9b8;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_10107debc;
    puStack_78 = &UNK_11037d148;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c6157c();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_11037d180;
    func_0x000107c613fc(&UNK_11037d180,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_10107f9d8;
    *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
    pcStack_70 = (code *)0x10107fbf4;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x100de58f0;
    puStack_78 = &UNK_11037d198;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c6157c();
    func_0x000107c61574(puVar3);
    func_0x000107c4c76c(param_1);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61578();
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10107dc0c);
  (*pcVar2)();
}



/* Entry: 10107f968; end: 10107f987;  */

void FUN_10107f968(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10107f988; end: 10107f98f;  */

void FUN_10107f988(undefined *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  lVar8 = *(long *)(param_5 + 0x10);
  lVar7 = param_2;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar8 != 0) {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar7 = lVar8;
    FUN_10107f260(0,lVar8,0);
    puVar9 = (undefined8 *)(param_5 + 0x28);
    puVar6 = puStack_78;
    do {
      uVar2 = puVar9[-1];
      uVar4 = *puVar9;
      uVar3 = *(ulong *)(puVar6 + 0x10);
      uVar5 = *(ulong *)(puVar6 + 0x18);
      lVar1 = uVar3 + 1;
      puStack_78 = puVar6;
      func_0x000107c61434(uVar4);
      if (uVar5 >> 1 <= uVar3) {
        lVar7 = lVar1;
        FUN_10107f260(1 < uVar5,lVar1,1);
        puVar6 = puStack_78;
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar6 + 0x10) = lVar1;
      *(undefined8 *)(puVar6 + uVar3 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(puVar6 + uVar3 * 0x10 + 0x28) = uVar4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  lStack_70 = 0;
  uStack_68 = 3;
  puStack_78 = puVar6;
  func_0x000100087c34(&puStack_78);
  func_0x000107c6142c();
  lVar8 = param_2;
  if (param_2 == 0) {
    FUN_10108f9d8();
    param_1 = puVar6;
    lVar8 = lVar7;
  }
  uStack_68 = 2;
  puStack_78 = param_1;
  lStack_70 = lVar8;
  func_0x000107c61434(param_2);
  func_0x000100087c34(&puStack_78);
  func_0x000107c6142c(lVar8);
  return;
}



/* Entry: 10107f990; end: 10107f9af;  */

void FUN_10107f990(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10107f9b0; end: 10107f9b7;  */

void FUN_10107f9b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_4;
  if (param_4 == 0) {
    FUN_10108f9d8();
    param_3 = param_1;
    lVar1 = param_2;
  }
  uStack_38 = 2;
  uStack_48 = param_3;
  lStack_40 = lVar1;
  func_0x000107c61434(param_4);
  func_0x000100087c34(&uStack_48);
  func_0x000107c6142c(lVar1);
  return;
}



/* Entry: 10107f9b8; end: 10107f9d7;  */

void FUN_10107f9b8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10107f9d8; end: 10107f9e7;  */

void FUN_10107f9d8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_2;
  if (param_2 == 0) {
    FUN_10108f9d8();
  }
  uStack_38 = 2;
  uStack_48 = param_1;
  lStack_40 = lVar1;
  func_0x000107c61434(param_2);
  func_0x000100087c34(&uStack_48);
  func_0x000107c6142c(lVar1);
  return;
}



/* Entry: 10107f9e8; end: 10107fa1b;  */

undefined8 FUN_10107f9e8(undefined8 param_1,undefined8 param_2)

{
  FUN_10107e37c(param_2,param_1,&UNK_11037cee8);
  return param_2;
}



/* Entry: 10107fa1c; end: 10107fb83;  */

int FUN_10107fa1c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf2 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xd) {
      iVar2 = 4;
    }
    if (param_2 + 0xd >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10107fa98;
        goto LAB_10107fa7c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10107fa7c:
      return ((uint)*param_1 | uVar1 << 8) - 0xd;
    }
  }
LAB_10107fa98:
  iVar2 = *param_1 - 0xe;
  if (*param_1 < 0xe) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10107fb84; end: 10107fbc3;  */

void FUN_10107fb84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d58850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91f144;
  func_0x000107c61520(&UNK_10d91f144,&UNK_11037d268);
  puRam0000000112d58850 = puVar1;
  return;
}



/* Entry: 10107fbc4; end: 10107fbff;  */

void FUN_10107fbc4(long param_1,long param_2)

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



/* Entry: 10107fc00; end: 1010800c7;  */

undefined * FUN_10107fc00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c5a100(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x00010108fdac();
  uVar3 = param_2;
  func_0x000107c5fb24();
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(puVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 1010800c8; end: 1010800d3; -[_TtC23SCChangeUsernameFeature12PasswordPage leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010800c8(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = 0;
  uStack_40 = 3;
  uStack_30 = 3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1010800d4; end: 1010800df; -[_TtC23SCChangeUsernameFeature12PasswordPage leftSwipeSucceed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010800d4(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = 0;
  uStack_40 = 6;
  uStack_30 = 3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1010800e0; end: 10108036f;  */

/* WARNING: Possible PIC construction at 0x000101080154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101080194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010801c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010801f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010108022c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101080260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101080290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010802c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101080294) */
/* WARNING: Removing unreachable block (ram,0x00010108036c) */
/* WARNING: Removing unreachable block (ram,0x0001010802a8) */
/* WARNING: Removing unreachable block (ram,0x000101080264) */
/* WARNING: Removing unreachable block (ram,0x000101080368) */
/* WARNING: Removing unreachable block (ram,0x000101080278) */
/* WARNING: Removing unreachable block (ram,0x000101080230) */
/* WARNING: Removing unreachable block (ram,0x000101080364) */
/* WARNING: Removing unreachable block (ram,0x000101080244) */
/* WARNING: Removing unreachable block (ram,0x0001010801fc) */
/* WARNING: Removing unreachable block (ram,0x000101080360) */
/* WARNING: Removing unreachable block (ram,0x000101080210) */
/* WARNING: Removing unreachable block (ram,0x0001010801c8) */
/* WARNING: Removing unreachable block (ram,0x00010108035c) */
/* WARNING: Removing unreachable block (ram,0x0001010801dc) */
/* WARNING: Removing unreachable block (ram,0x000101080198) */
/* WARNING: Removing unreachable block (ram,0x000101080358) */
/* WARNING: Removing unreachable block (ram,0x0001010801ac) */
/* WARNING: Removing unreachable block (ram,0x000101080158) */
/* WARNING: Removing unreachable block (ram,0x000101080340) */
/* WARNING: Removing unreachable block (ram,0x000101080164) */
/* WARNING: Removing unreachable block (ram,0x0001010802c8) */

void FUN_1010800e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = PTR_PTR_1126b0620;
  func_0x000107c61168(PTR_PTR_1126b0620);
  func_0x000107c5de64();
  func_0x000107c61180();
  FUN_10108fddc();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c3d728(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 101080370; end: 1010803ff; -[_TtC23SCChangeUsernameFeature12PasswordPage viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101080370(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112d58870);
  *(undefined8 *)(param_1 + _DAT_112d58870) = uVar3;
  func_0x000107c61574(uVar4);
  FUN_1010800e0();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101080400; end: 101080433; -[_TtC23SCChangeUsernameFeature12PasswordPage getTitle] */

void FUN_101080400(undefined8 param_1,undefined8 param_2)

{
  FUN_10108fea8();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 101080434; end: 10108160b;  */

/* WARNING: Possible PIC construction at 0x0001010804b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010108053c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101080560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010805b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010805d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010108062c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010108067c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010806a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010806f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101080714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101080754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010807a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101080804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101080868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010808bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010808f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010108094c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101080970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010809c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010809e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101080a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101080a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101080abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101080b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101080b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101080b90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101080b48) */
/* WARNING: Removing unreachable block (ram,0x000101080b28) */
/* WARNING: Removing unreachable block (ram,0x000101080ac0) */
/* WARNING: Removing unreachable block (ram,0x000101080bdc) */
/* WARNING: Removing unreachable block (ram,0x000101080af4) */
/* WARNING: Removing unreachable block (ram,0x000101080a9c) */
/* WARNING: Removing unreachable block (ram,0x000101080a40) */
/* WARNING: Removing unreachable block (ram,0x000101080bd8) */
/* WARNING: Removing unreachable block (ram,0x000101080a80) */
/* WARNING: Removing unreachable block (ram,0x0001010809e8) */
/* WARNING: Removing unreachable block (ram,0x0001010809c4) */
/* WARNING: Removing unreachable block (ram,0x000101080974) */
/* WARNING: Removing unreachable block (ram,0x000101080bd4) */
/* WARNING: Removing unreachable block (ram,0x0001010809a8) */
/* WARNING: Removing unreachable block (ram,0x000101080950) */
/* WARNING: Removing unreachable block (ram,0x0001010808fc) */
/* WARNING: Removing unreachable block (ram,0x000101080bd0) */
/* WARNING: Removing unreachable block (ram,0x000101080934) */
/* WARNING: Removing unreachable block (ram,0x0001010808c0) */
/* WARNING: Removing unreachable block (ram,0x00010108086c) */
/* WARNING: Removing unreachable block (ram,0x000101080808) */
/* WARNING: Removing unreachable block (ram,0x0001010807a8) */
/* WARNING: Removing unreachable block (ram,0x000101080758) */
/* WARNING: Removing unreachable block (ram,0x000101080718) */
/* WARNING: Removing unreachable block (ram,0x0001010806f4) */
/* WARNING: Removing unreachable block (ram,0x0001010806a4) */
/* WARNING: Removing unreachable block (ram,0x000101080bcc) */
/* WARNING: Removing unreachable block (ram,0x0001010806d8) */
/* WARNING: Removing unreachable block (ram,0x000101080680) */
/* WARNING: Removing unreachable block (ram,0x000101080630) */
/* WARNING: Removing unreachable block (ram,0x000101080bc8) */
/* WARNING: Removing unreachable block (ram,0x000101080664) */
/* WARNING: Removing unreachable block (ram,0x0001010805d8) */
/* WARNING: Removing unreachable block (ram,0x0001010805b4) */
/* WARNING: Removing unreachable block (ram,0x000101080564) */
/* WARNING: Removing unreachable block (ram,0x000101080bc4) */
/* WARNING: Removing unreachable block (ram,0x000101080598) */
/* WARNING: Removing unreachable block (ram,0x000101080540) */
/* WARNING: Removing unreachable block (ram,0x0001010804b8) */
/* WARNING: Removing unreachable block (ram,0x000101080bc0) */
/* WARNING: Removing unreachable block (ram,0x000101080524) */
/* WARNING: Removing unreachable block (ram,0x000101080b94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101080434(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d58888);
  func_0x000107c5ce8c(uVar2);
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d58880);
  func_0x000107c5ce8c(uVar1);
  func_0x000107c61180();
  func_0x000107c40284(0xc030000000000000,uVar2,param_2,uVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10108160c; end: 101081617; -[_TtC23SCChangeUsernameFeature12PasswordPage showHidePressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10108160c(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_38 = 0;
  uStack_40 = 2;
  uStack_30 = 3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101081618; end: 101081667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101081618(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_40 [2];
  undefined1 uStack_30;
  
  uStack_30 = 3;
  auStack_40[0] = param_1;
  func_0x000107c61174();
  func_0x0001002a64a8(auStack_40);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 101081668; end: 1010816b7; -[_TtC23SCChangeUsernameFeature12PasswordPage confirmPassword] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101081668(undefined8 param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_38);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1010816b8; end: 10108195f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010816b8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112d58898);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(param_2);
    func_0x000107c5fadc(uVar2,uVar1);
    func_0x000107c59c6c(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 101081960; end: 101081a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101081960(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d58880);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c58d98(uVar2);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112d58880);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_2);
    func_0x000107c3e738(uVar2);
    func_0x000107c61170(uVar2);
  }
  return;
}


